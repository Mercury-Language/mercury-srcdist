/*
** Automatically generated from `typecheck.m'
** by the Mercury compiler,
** version rotd-2022-09-25
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
#include "counter.mih"
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
#include "term_subst.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_debug.mih"
#include "check_hlds.typecheck_errors.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typecheck_msgs.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
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


static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1;

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2;

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_cons_constraints_action_0[3];

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

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

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

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_next_iteration_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_next_iteration_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_next_iteration_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_next_iteration_0[2];

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_next_iteration_0[2];

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_number_of_iterations_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_number_of_iterations_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_number_of_iterations_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_number_of_iterations_0[2];

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_number_of_iterations_0[2];

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_stuff_to_check_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2];

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2];

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_types_comparison_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_types_comparison_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_types_comparison_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_types_comparison_0[2];

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_types_comparison_0[2];

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3547__2_1_f_0(
  MR_Word LambdaHeadVar__1_44);

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3547__1_1_f_0(
  MR_Word LambdaHeadVar__1_44);

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1497__1_2_p_0(
  MR_Word GoalType_92,
  MR_Word HeadVar__2_223);

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__handle_stubs_and_non_contiguous_clauses__460__1_2_p_0(
  MR_Word STATE_VARIABLE_Specs_41_41,
  MR_Word HeadVar__2_51);

static void MR_CALL 
check_hlds__typecheck____Compare____types_comparison_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____types_comparison_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck____Compare____next_iteration_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____next_iteration_0_0(
  MR_Word HeadVar__1_1,
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
check_hlds__typecheck____Compare____invariant_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____invariant_set_0_0(
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__typecheck__type_assign_has_no_coerce_constraints_1_p_0(
  MR_Word TypeAssign_2);

static void MR_CALL 
check_hlds__typecheck__type_assign_prune_coerce_constraints_3_p_0(
  MR_Word TypeTable_4,
  MR_Word STATE_VARIABLE_TypeAssign_0_10,
  MR_Word * STATE_VARIABLE_TypeAssign_11);

static void MR_CALL 
check_hlds__typecheck__check_and_drop_coerce_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__check_and_drop_coerce_constraints_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_TypeAssign_0_4,
  MR_Word * STATE_VARIABLE_TypeAssign_5);

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__check_and_drop_coerce_constraints__1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__check_and_drop_coerce_constraints__1_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_64,
  MR_Word STATE_VARIABLE_TypeAssign_0_4,
  MR_Word * STATE_VARIABLE_TypeAssign_5);

static void MR_CALL 
check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_15,
  MR_Word * STATE_VARIABLE_InvariantSet_16);

static void MR_CALL 
check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word CtorArgType_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_35,
  MR_Word * STATE_VARIABLE_InvariantSet_36);

static void MR_CALL 
check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_18,
  MR_Word * STATE_VARIABLE_InvariantSet_19);

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
check_hlds__typecheck__is_field_access_function_for_type_ctor_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word AccessType_6,
  MR_Word TypeCtor_7,
  MR_Word PredId_8);

static MR_Box MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
  MR_Word Info_9,
  MR_Word GoalId_10,
  MR_Word FuncName_11,
  MR_Word UserArity_12,
  MR_Word AccessType_13,
  MR_Word FieldName_14,
  MR_Word FieldDefn_15,
  MR_Word * ConsTypeInfo_16);

static MR_bool MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
  MR_Word ClassTable_8,
  MR_Word AccessType_9,
  MR_Word FieldName_10,
  MR_Word FieldDefn_11,
  MR_Word FunctorConsTypeInfo_12,
  MR_Word OrigExistTVars_13,
  MR_Word * ConsTypeInfo_14);

static void MR_CALL 
check_hlds__typecheck__typecheck_coerce_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__typecheck_coerce_2_8_p_0(
  MR_Word Context_9,
  MR_Word FromVar_10,
  MR_Word ToVar_11,
  MR_Word TypeAssign0_12,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_34,
  MR_Word * STATE_VARIABLE_TypeAssignSet_35,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static MR_bool MR_CALL 
check_hlds__typecheck__check_coerce_type_params_8_p_0(
  MR_Word TypeTable_9,
  MR_Word TVarSet_10,
  MR_Word InvariantSet_11,
  MR_Word TypeParams_12,
  MR_Word FromTypeArgs_13,
  MR_Word ToTypeArgs_14,
  MR_Word STATE_VARIABLE_TypeAssign_0_22,
  MR_Word * STATE_VARIABLE_TypeAssign_23);

static MR_bool MR_CALL 
check_hlds__typecheck__compare_types_7_p_0(
  MR_Word TypeTable_8,
  MR_Word TVarSet_9,
  MR_Word Comparison_10,
  MR_Word TypeA_11,
  MR_Word TypeB_12,
  MR_Word STATE_VARIABLE_TypeAssign_0_18,
  MR_Word * STATE_VARIABLE_TypeAssign_19);

static MR_bool MR_CALL 
check_hlds__typecheck__compare_types_corresponding_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeAssign_0_6,
  MR_Word * STATE_VARIABLE_TypeAssign_7);

static void MR_CALL 
check_hlds__typecheck__replace_principal_type_ctor_with_base_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word Type0_7,
  MR_Word * Type_8);

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
check_hlds__typecheck__report_invalid_coercion_4_p_0(
  MR_Word TypeAssign_5,
  MR_Word Coercion_6,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

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
check_hlds__typecheck__check_mention_existq_var_8_p_0(
  MR_Word Context_9,
  MR_Word TypeVarSet_10,
  MR_Word Impl_11,
  MR_Word TVar_12,
  MR_Integer STATE_VARIABLE_ExistQVarNum_0_20,
  MR_Integer * STATE_VARIABLE_ExistQVarNum_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
  MR_Word TypeVarSet_6,
  MR_Word ExistQVars_7,
  MR_Word Clause_8,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_10_p_0(
  MR_Integer Iteration_11,
  MR_Integer MaxIterations_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word OrigValidPredIds_14,
  MR_Word OrigValidPredIdSet_15,
  MR_Word * FinalValidPredIdSet_16,
  MR_Word * Specs_17,
  MR_Word * FoundSyntaxError_18,
  MR_Word * NumberOfIterations_19);

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
  MR_Word STATE_VARIABLE_NextIteration_0_11,
  MR_Word * STATE_VARIABLE_NextIteration_12);

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__typecheck_module_one_iteration__1_12_p_0(
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
  MR_Word STATE_VARIABLE_NextIteration_0_11,
  MR_Word * STATE_VARIABLE_NextIteration_12);

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_if_needed_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__typecheck__typecheck_pred_if_needed_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_PredInfo_0_19,
  MR_Word * STATE_VARIABLE_PredInfo_20,
  MR_Word * STATE_VARIABLE_Specs_21,
  MR_Word * FoundSyntaxError_13,
  MR_Word * ContainsErrors_14,
  MR_Word * NextIteration_15);

static void MR_CALL 
check_hlds__typecheck__generate_and_add_stub_clause_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredInfo_0_32,
  MR_Word * STATE_VARIABLE_PredInfo_33);

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
  MR_Word STATE_VARIABLE_PredInfo_0_74,
  MR_Word * STATE_VARIABLE_PredInfo_75,
  MR_Word STATE_VARIABLE_Specs_0_76,
  MR_Word * STATE_VARIABLE_Specs_77,
  MR_Word * NextIteration_12);

static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_unsatisfied_coercions_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_unsatisfied_coercions_3_p_0(
  MR_Word TypeAssignSet_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(
  MR_Word Context_7,
  MR_Word StuffToCheck_8,
  MR_Word HeadVars_9,
  MR_Word TypeAssignSet_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

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
check_hlds__typecheck__LCMC__pred__typecheck_clause_list__1_8_p_0(
  MR_Word HeadVars_1,
  MR_Word ArgTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_32,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_TypeAssignSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
  MR_Word STATE_VARIABLE_Clause_0_24,
  MR_Word * STATE_VARIABLE_Clause_25,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_26,
  MR_Word * STATE_VARIABLE_TypeAssignSet_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__typecheck_unification__1_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word GoalId_13,
  MR_Word LHSVar_14,
  MR_Word RHS0_15,
  MR_Word * AddrOfRHS_62,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_33,
  MR_Word * STATE_VARIABLE_TypeAssignSet_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__typecheck_goal_list__1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_29,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__typecheck_goal__1_7_p_0(
  MR_Word Goal0_8,
  MR_Word * AddrOfGoal_37,
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
  MR_Word STATE_VARIABLE_TypeAssignSet_0_113,
  MR_Word * STATE_VARIABLE_TypeAssignSet_114,
  MR_Word STATE_VARIABLE_Info_0_115,
  MR_Word * STATE_VARIABLE_Info_116);

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
check_hlds__typecheck__LCMC__pred__type_assign_get_types_of_vars__1_4_p_0(
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

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
check_hlds__typecheck__LCMC__pred__convert_cons_defn_list__1_5_p_0(
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

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_atomic_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

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

static void MR_CALL 
check_hlds__typecheck__typecheck_coerce_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typecheck__typecheck_coerce_6_p_0(
  MR_Word Context_7,
  MR_Word Args_8,
  MR_Word TypeAssignSet0_9,
  MR_Word * TypeAssignSet_10,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

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
  MR_Word ArgVars_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_25,
  MR_Word * STATE_VARIABLE_TypeAssignSet_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0(
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
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_7);

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
  MR_Word ArgVars_10,
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
  MR_Word ArgVars_14,
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
check_hlds__typecheck__LCMC__pred__delete_first_arg_in_each_arg_type_assign__1_2_p_0(
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
check_hlds__typecheck__LCMC__func__atomic_interface_list_to_var_list__1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_10);

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
check_hlds__typecheck____Unify____invariant_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____invariant_set_0_0_10001(
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
check_hlds__typecheck____Unify____next_iteration_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____next_iteration_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____number_of_iterations_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____number_of_iterations_0_0_10001(
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

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____types_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____types_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[13][2];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[5][1];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[7][5];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[3][6];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[9][3];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[3][11];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_9[2][8];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_10[4][9];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_11[1][4];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_12[2][7];


struct check_hlds__typecheck__vector_common_type_7_0_s {
  const MR_String check_hlds__typecheck__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__typecheck__vector_common_type_7_0_s check_hlds__typecheck_vector_common_7[5];

struct check_hlds__typecheck__vector_common_type_8_0_s {
  const MR_String check_hlds__typecheck__vector_common_type_8_0__vct_8_f_0;
  const MR_Integer check_hlds__typecheck__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct check_hlds__typecheck__vector_common_type_8_0_s check_hlds__typecheck_vector_common_8[4];



static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[13][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__typecheck_scalar_common_1[1]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_0))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (&check_hlds__typecheck_scalar_common_1[1]))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[5][1] = {
  /* row   0 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "tuple"))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[7][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_event_call_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_call_pred_name_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck__convert_cons_defn_5_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_3[2])),
    ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_3[3])),
    ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_clause_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_11[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_clause_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[3][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row   1 */
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
    ((MR_Box) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_9[2][8] = {
  /* row   0 */
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
  /* row   1 */
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

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_10[4][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_11[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_12[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row   1 */
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


static /* final */ const struct check_hlds__typecheck__vector_common_type_7_0_s check_hlds__typecheck_vector_common_7[5] = {
  /* row   0 */   { (MR_String) "string" },
  /* row   1 */   { (MR_String) "int" },
  /* row   2 */   { (MR_String) "string" },
  /* row   3 */   { (MR_String) "string" },
  /* row   4 */   { (MR_String) "string" },
};

static /* final */ const struct check_hlds__typecheck__vector_common_type_8_0_s check_hlds__typecheck_vector_common_8[4] = {
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

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&check_hlds__typecheck__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
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

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_cons_constraints_action_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_constraints_action",
  { check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0 },
  { check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_cons_constraints_action_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_type_assign_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_type_assign",
  { check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_assign_0 },
  { check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_assign_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_assign_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1check_hlds__typecheck__type_ctor_info_cons_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_type_assign_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck__list__ti_list_1check_hlds__typecheck__type_ctor_info_cons_type_assign_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_invariant_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck____Unify____invariant_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____invariant_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "invariant_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "maybe_cons_type_info",
  { check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0 },
  { check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0,

};

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_need_typecheck_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_next_iteration_0)
};

static const MR_ConstString check_hlds__typecheck__check_hlds__typecheck__field_names_maybe_need_typecheck_0_0[2] = {
  (MR_String) "notc_contains_errors",
  (MR_String) "notc_next_iteration"
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_need_typecheck_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____maybe_need_typecheck_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____maybe_need_typecheck_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "maybe_need_typecheck",
  { check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_need_typecheck_0 },
  { check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_need_typecheck_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_need_typecheck_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_next_iteration_0_0 = {
  (MR_String) "next_iteration_is_not_needed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_next_iteration_0_1 = {
  (MR_String) "next_iteration_is_needed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_next_iteration_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_next_iteration_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_next_iteration_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_next_iteration_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_next_iteration_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_next_iteration_0_0
};

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_next_iteration_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_next_iteration_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____next_iteration_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____next_iteration_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "next_iteration",
  { check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_next_iteration_0 },
  { check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_next_iteration_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_next_iteration_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_number_of_iterations_0_0 = {
  (MR_String) "within_iteration_limit",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_number_of_iterations_0_1 = {
  (MR_String) "exceeded_iteration_limit",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_number_of_iterations_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_number_of_iterations_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_number_of_iterations_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_number_of_iterations_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_number_of_iterations_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_number_of_iterations_0_0
};

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_number_of_iterations_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_number_of_iterations_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____number_of_iterations_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____number_of_iterations_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "number_of_iterations",
  { check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_number_of_iterations_0 },
  { check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_number_of_iterations_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_number_of_iterations_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0 = {
  (MR_String) "clause_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1 = {
  (MR_String) "whole_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_stuff_to_check_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____stuff_to_check_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____stuff_to_check_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "stuff_to_check",
  { check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0 },
  { check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_stuff_to_check_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_types_comparison_0_0 = {
  (MR_String) "compare_equal",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_types_comparison_0_1 = {
  (MR_String) "compare_equal_lt",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_types_comparison_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_types_comparison_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_types_comparison_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_types_comparison_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_types_comparison_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_types_comparison_0_1
};

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_types_comparison_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_types_comparison_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____types_comparison_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____types_comparison_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "types_comparison",
  { check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_types_comparison_0 },
  { check_hlds__typecheck__check_hlds__typecheck__enum_ordinal_ordered_types_comparison_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_types_comparison_0,

};

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3547__2_1_f_0(
  MR_Word LambdaHeadVar__1_44)
{
  MR_Word LambdaHeadVar__2_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 1))));

  return LambdaHeadVar__2_45;
}

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3547__1_1_f_0(
  MR_Word LambdaHeadVar__1_44)
{
  MR_Word LambdaHeadVar__2_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 1))));

  return LambdaHeadVar__2_45;
}

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1497__1_2_p_0(
  MR_Word GoalType_92,
  MR_Word HeadVar__2_223)
{
  MR_bool succeeded = (GoalType_92 == HeadVar__2_223);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__handle_stubs_and_non_contiguous_clauses__460__1_2_p_0(
  MR_Word STATE_VARIABLE_Specs_41_41,
  MR_Word HeadVar__2_51)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[0]), ((MR_Box) (STATE_VARIABLE_Specs_41_41)), ((MR_Box) (HeadVar__2_51)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____types_comparison_0_0(
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
check_hlds__typecheck____Unify____types_comparison_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
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
check_hlds__typecheck____Unify____stuff_to_check_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__typecheck____Compare____number_of_iterations_0_0(
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
check_hlds__typecheck____Unify____number_of_iterations_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____next_iteration_0_0(
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
check_hlds__typecheck____Unify____next_iteration_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_need_typecheck_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_need_typecheck_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
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

static void MR_CALL 
check_hlds__typecheck____Compare____invariant_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____invariant_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
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
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck__type_assign_has_no_coerce_constraints_1_p_0(
  MR_Word TypeAssign_2)
{
  MR_bool succeeded;
  MR_Word Var_4;

  check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign_2, &Var_4);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[12]), ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck__type_assign_prune_coerce_constraints_3_p_0(
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

    check_hlds__typecheck__check_and_drop_coerce_constraints_5_p_0(TypeTable_4, Coercions0_6, &Coercions_9, STATE_VARIABLE_TypeAssign_0_10, &STATE_VARIABLE_TypeAssign_12_12);
    check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_9, STATE_VARIABLE_TypeAssign_12_12, STATE_VARIABLE_TypeAssign_11);
  }
}

static void MR_CALL 
check_hlds__typecheck__check_and_drop_coerce_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_19;

  check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_19));
}

static void MR_CALL 
check_hlds__typecheck__check_and_drop_coerce_constraints_5_p_0(
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
      MR_Word Coercion0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Coercions0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word FromType0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Coercion0_11, (MR_Integer) 0))));
      MR_Word ToType0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Coercion0_11, (MR_Integer) 1))));
      MR_Word Status_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Coercion0_11, (MR_Integer) 3))) & (MR_Integer) 1);

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
            MR_Word TypeBodyDu_43;
            MR_Word TypeDefn_40;
            MR_Word TypeBody_42;

            check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_4, &TypeBindings_24);
            check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_4, &TVarSet_25);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_24, FromType0_20, &FromType_26);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_24, ToType0_21, &ToType_27);
            check_hlds__typecheck__replace_principal_type_ctor_with_base_4_p_0(HeadVar__1_1, TVarSet_25, FromType_26, &FromBaseType_29);
            check_hlds__typecheck__replace_principal_type_ctor_with_base_4_p_0(HeadVar__1_1, TVarSet_25, ToType_27, &ToBaseType_30);
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
                        TypeBodyDu_43 = (MR_Word) ((MR_Word) (TypeBody_42));
                    }
                    if (succeeded)
                    {
                      MR_Word OoMCtors_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_43, (MR_Integer) 0))));
                      MR_Word Ctors_49;
                      MR_Word Var_50;
                      MR_Word Var_51;
                      MR_Box conv1_InvariantSet_38;

                      Ctors_49 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_44);
                      {
                        Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[1]));
                        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (check_hlds__typecheck__check_and_drop_coerce_constraints_5_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (HeadVar__1_1));
                        MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (BaseTypeCtor_35));
                        MR_hl_field(MR_mktag(0), Var_50, 5) = ((MR_Box) (TypeParams_41));
                      }
                      Var_51 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]));
                      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[5]), Var_50, Ctors_49, ((MR_Box) (Var_51)), &conv1_InvariantSet_38);
                      InvariantSet_38 = ((MR_Word) (conv1_InvariantSet_38));
                    }
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.build_type_param_variance_restrictions\'/3", (MR_String) "not du type");
                        return;
                      }
                    succeeded = check_hlds__typecheck__check_coerce_type_params_8_p_0(HeadVar__1_1, TVarSet_25, InvariantSet_38, BaseTypeParams_37, FromBaseTypeArgs_32, ToBaseTypeArgs_34, STATE_VARIABLE_TypeAssign_0_4, &TypeAssign_28);
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
              MR_Word * AddrTailKeepCoercions_62;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Coercion0_11));
                MR_hl_field(MR_mktag(1), base, 1) = NULL;
              }
              AddrTailKeepCoercions_62 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
              check_hlds__typecheck__LCMC__pred__check_and_drop_coerce_constraints__1_5_p_0(HeadVar__1_1, Coercions0_12, AddrTailKeepCoercions_62, STATE_VARIABLE_TypeAssign_0_4, STATE_VARIABLE_TypeAssign_5);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word * AddrTailKeepCoercions_63;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Coercion0_11));
              MR_hl_field(MR_mktag(1), base, 1) = NULL;
            }
            AddrTailKeepCoercions_63 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
            check_hlds__typecheck__LCMC__pred__check_and_drop_coerce_constraints__1_5_p_0(HeadVar__1_1, Coercions0_12, AddrTailKeepCoercions_63, STATE_VARIABLE_TypeAssign_0_4, STATE_VARIABLE_TypeAssign_5);
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__check_and_drop_coerce_constraints__1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_19;

  check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_19));
}

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__check_and_drop_coerce_constraints__1_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_64,
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
      *AddrOfHeadVar__3_64 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TypeAssign_5 = STATE_VARIABLE_TypeAssign_0_4;
    }
    else
    {
      MR_Word Coercion0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Coercions0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word FromType0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Coercion0_11, (MR_Integer) 0))));
      MR_Word ToType0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Coercion0_11, (MR_Integer) 1))));
      MR_Word Status_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Coercion0_11, (MR_Integer) 3))) & (MR_Integer) 1);

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
            MR_Word TypeBodyDu_43;
            MR_Word TypeDefn_40;
            MR_Word TypeBody_42;

            check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_4, &TypeBindings_24);
            check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_4, &TVarSet_25);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_24, FromType0_20, &FromType_26);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_24, ToType0_21, &ToType_27);
            check_hlds__typecheck__replace_principal_type_ctor_with_base_4_p_0(HeadVar__1_1, TVarSet_25, FromType_26, &FromBaseType_29);
            check_hlds__typecheck__replace_principal_type_ctor_with_base_4_p_0(HeadVar__1_1, TVarSet_25, ToType_27, &ToBaseType_30);
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
                        TypeBodyDu_43 = (MR_Word) ((MR_Word) (TypeBody_42));
                    }
                    if (succeeded)
                    {
                      MR_Word OoMCtors_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_43, (MR_Integer) 0))));
                      MR_Word Ctors_49;
                      MR_Word Var_50;
                      MR_Word Var_51;
                      MR_Box conv1_InvariantSet_38;

                      Ctors_49 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_44);
                      {
                        Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[1]));
                        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (check_hlds__typecheck__LCMC__pred__check_and_drop_coerce_constraints__1_5_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (HeadVar__1_1));
                        MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (BaseTypeCtor_35));
                        MR_hl_field(MR_mktag(0), Var_50, 5) = ((MR_Box) (TypeParams_41));
                      }
                      Var_51 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]));
                      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[5]), Var_50, Ctors_49, ((MR_Box) (Var_51)), &conv1_InvariantSet_38);
                      InvariantSet_38 = ((MR_Word) (conv1_InvariantSet_38));
                    }
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.build_type_param_variance_restrictions\'/3", (MR_String) "not du type");
                        return;
                      }
                    succeeded = check_hlds__typecheck__check_coerce_type_params_8_p_0(HeadVar__1_1, TVarSet_25, InvariantSet_38, BaseTypeParams_37, FromBaseTypeArgs_32, ToBaseTypeArgs_34, STATE_VARIABLE_TypeAssign_0_4, &TypeAssign_28);
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
              MR_Word * AddrTailKeepCoercions_62;
              MR_Word HeadVar__3_65;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word * next_value_of_AddrOfHeadVar__3_64;

              {
                HeadVar__3_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__3_65, 0) = ((MR_Box) (Coercion0_11));
                MR_hl_field(MR_mktag(1), HeadVar__3_65, 1) = NULL;
              }
              AddrTailKeepCoercions_62 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_65, (MR_Integer) 1)));
              *AddrOfHeadVar__3_64 = HeadVar__3_65;
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Coercions0_12;
              next_value_of_AddrOfHeadVar__3_64 = AddrTailKeepCoercions_62;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              AddrOfHeadVar__3_64 = next_value_of_AddrOfHeadVar__3_64;
              continue;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word * AddrTailKeepCoercions_63;
            MR_Word HeadVar__3_70;
            MR_Word next_value_of_HeadVar__2_2;
            MR_Word * next_value_of_AddrOfHeadVar__3_64;

            {
              HeadVar__3_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HeadVar__3_70, 0) = ((MR_Box) (Coercion0_11));
              MR_hl_field(MR_mktag(1), HeadVar__3_70, 1) = NULL;
            }
            AddrTailKeepCoercions_63 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_70, (MR_Integer) 1)));
            *AddrOfHeadVar__3_64 = HeadVar__3_70;
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = Coercions0_12;
            next_value_of_AddrOfHeadVar__3_64 = AddrTailKeepCoercions_63;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            AddrOfHeadVar__3_64 = next_value_of_AddrOfHeadVar__3_64;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_15,
  MR_Word * STATE_VARIABLE_InvariantSet_16)
{
  MR_Word CtorArgType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg_10, (MR_Integer) 1))));

  check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(TypeTable_7, CurTypeCtor_8, CurTypeParams_9, CtorArgType_13, STATE_VARIABLE_InvariantSet_0_15, STATE_VARIABLE_InvariantSet_16);
}

static void MR_CALL 
check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_36;

  check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_36);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_36));
}

static void MR_CALL 
check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word CtorArgType_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_35,
  MR_Word * STATE_VARIABLE_InvariantSet_36)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) CtorArgType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_InvariantSet_36 = STATE_VARIABLE_InvariantSet_0_35;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgType_10, (MR_Integer) 1))));
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
                  MR_Word TypeInfo_68_68;
                  MR_Word Var_66;

                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_17, CurTypeCtor_8);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(TypeArgs_18, &Var_66);
                    if (succeeded)
                    {
                      TypeInfo_68_68 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[11]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_68, ((MR_Box) (CurTypeParams_9)), ((MR_Box) (Var_66)));
                    }
                  }
                  if (succeeded)
                    *STATE_VARIABLE_InvariantSet_36 = STATE_VARIABLE_InvariantSet_0_35;
                  else
                  {
                    MR_Word TypeVars_22;

                    parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypes_16, &TypeVars_22);
                    mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TypeVars_22, STATE_VARIABLE_InvariantSet_0_35, STATE_VARIABLE_InvariantSet_36);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeVars_50;

                  parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypes_16, &TypeVars_50);
                  mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TypeVars_50, STATE_VARIABLE_InvariantSet_0_35, STATE_VARIABLE_InvariantSet_36);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.build_type_param_variance_restrictions_in_ctor_arg_type\'/6", (MR_String) "hlds_eqv_type");
                  return;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word TypeVars_50;

                  parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypes_16, &TypeVars_50);
                  mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TypeVars_50, STATE_VARIABLE_InvariantSet_0_35, STATE_VARIABLE_InvariantSet_36);
                }
                break;
            }
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.build_type_param_variance_restrictions_in_ctor_arg_type\'/6", (MR_String) "undefined type");
              return;
            }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_InvariantSet_36 = STATE_VARIABLE_InvariantSet_0_35;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CtorArgType_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_43;
              MR_Word ArgTypes_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CtorArgType_10, (MR_Integer) 1))));
              MR_Box conv1_STATE_VARIABLE_InvariantSet_36;

              {
                Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[3]));
                MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (TypeTable_7));
                MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (CurTypeCtor_8));
                MR_hl_field(MR_mktag(0), Var_43, 5) = ((MR_Box) (CurTypeParams_9));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[5]), Var_43, ArgTypes_54, ((MR_Box) (STATE_VARIABLE_InvariantSet_0_35)), &conv1_STATE_VARIABLE_InvariantSet_36);
              *STATE_VARIABLE_InvariantSet_36 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantSet_36));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CtorArgType_10, (MR_Integer) 2))));
              MR_Word TypeVars_56;

              parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypes_55, &TypeVars_56);
              mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TypeVars_56, STATE_VARIABLE_InvariantSet_0_35, STATE_VARIABLE_InvariantSet_36);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck.build_type_param_variance_restrictions_in_ctor_arg_type\'/6", (MR_String) "apply_n_type");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word CtorArgType1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CtorArgType_10, (MR_Integer) 1))));
              MR_Word next_value_of_CtorArgType_10 = CtorArgType1_34;

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
check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_16;

  check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_16));
}

static void MR_CALL 
check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_18,
  MR_Word * STATE_VARIABLE_InvariantSet_19)
{
  MR_Word CtorArgs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 3))));
  MR_Word Var_20;
  MR_Box conv1_STATE_VARIABLE_InvariantSet_19;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[2]));
    MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (TypeTable_7));
    MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (CurTypeCtor_8));
    MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (CurTypeParams_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[5]), Var_20, CtorArgs_15, ((MR_Box) (STATE_VARIABLE_InvariantSet_0_18)), &conv1_STATE_VARIABLE_InvariantSet_19);
  *STATE_VARIABLE_InvariantSet_19 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantSet_19));
}

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[1]);
  (env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = mercury__map__contains_2_p_0((env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, ((MR_Box) ((env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12)));
  if ((env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
    check_hlds__typecheck__rename_constraint_3_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
  void * env_ptr_arg)
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

static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
  MR_Word TVarRenaming_4,
  MR_Word Constraint0_5,
  MR_Word * Constraint_6)
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

static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
  MR_Word CallTVars_3,
  MR_Word Constraint_4)
{
  MR_bool succeeded;
  MR_Word TypesToCheck_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 2))));
  MR_Word TVarsToCheck0_8;
  MR_Word TVarsToCheck_9;
  MR_Word RelevantTVars_10;

  parse_tree__prog_type__type_vars_in_types_2_p_0(TypesToCheck_7, &TVarsToCheck0_8);
  mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsToCheck0_8, &TVarsToCheck_9);
  mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsToCheck_9, CallTVars_3, &RelevantTVars_10);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), RelevantTVars_10);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck__is_field_access_function_for_type_ctor_4_p_0(
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
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_10, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_10, (MR_Integer) 1))));
    succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
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
              ResultType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
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
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_45;

  conv0_LambdaHeadVar__2_45 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3547__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_45));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck__is_field_access_function_for_type_ctor_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
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
  MR_Word TypeCtor_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_15, (MR_Integer) 2))));
  MR_Word ConsId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_15, (MR_Integer) 3))));
  MR_Word TypeModule_28;
  MR_Word ModuleInfo_31;
  MR_Word PredTable_32;
  MR_String UnqualFuncName_33;
  MR_Word IsFieldAccessFunc_34;
  MR_Word ConsTable_36;
  MR_Word ConsDefn_37;
  MR_Word MaybeExistConstraints_38;
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_25, (MR_Integer) 0))));
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;

  succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 1);
  if (succeeded)
  {
    TypeModule_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))));
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
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_12[1]));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (ModuleInfo_31));
        MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (AccessType_13));
        MR_hl_field(MR_mktag(0), Var_46, 5) = ((MR_Box) (TypeCtor_25));
      }
      succeeded = mercury__list__all_false_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_46, PredIds_35);
    }
    else
      succeeded = MR_TRUE;
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_31, &ConsTable_36);
      hlds__hlds_cons__lookup_cons_table_of_type_ctor_4_p_0(ConsTable_36, TypeCtor_25, ConsId_26, &ConsDefn_37);
      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_37, (MR_Integer) 0))));
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_37, (MR_Integer) 1))));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_37, (MR_Integer) 2))));
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_37, (MR_Integer) 3))));
      MaybeExistConstraints_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_37, (MR_Integer) 4))));
      Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_37, (MR_Integer) 5))));
      if ((MaybeExistConstraints_38 == (MR_Word) ((MR_Unsigned) 0U)))
        OrigExistTVars_17 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ExistConstraints_39 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_38), (MR_Integer) 1));

        OrigExistTVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_39, (MR_Integer) 0))));
      }
      switch (AccessType_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
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
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_88;

            ArgTypes_62 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[8]), Var_52);
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
              Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDu_70, (MR_Integer) 4))));
              succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_68, &GoalType_72);
                succeeded = ((MR_tag((MR_Word) GoalType_72)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GoalType_72, (MR_Integer) 0))) & (MR_Integer) 3);
                  succeeded = (Var_87 == (MR_Integer) 3);
                }
                succeeded = !(succeeded);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_68);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    Var_88 = (MR_Word) (PredStatus_69);
                    succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_89;

              {
                Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (TypeDefn_64));
              }
              {
                MaybeFunctorConsTypeInfo_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeFunctorConsTypeInfo_18, 0) = ((MR_Box) (Var_89));
              }
            }
            else
            {
              MR_Word TypeStatus_73;
              MR_Word Var_90;
              MR_Word Var_91;

              hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_64, &TypeStatus_73);
              Var_90 = (MR_Word) (TypeStatus_73);
              succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_68);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_91 = (MR_Word) (PredStatus_69);
                  succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
                MaybeFunctorConsTypeInfo_18 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_2[4]));
              else
              {
                MR_Word ConsTypeArgs_74;
                MR_Word ConsType_75;
                MR_Word ExistProgConstraints_77;
                MR_Word ProgConstraints_81;
                MR_Word ExistQVars_82;
                MR_Word ClassTable_83;
                MR_Word Constraints_84;
                MR_Word Var_92;
                MR_Word Var_93;

                parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_51, Var_50, &ConsTypeArgs_74);
                parse_tree__prog_type__construct_type_3_p_0(Var_48, ConsTypeArgs_74, &ConsType_75);
                if ((MaybeExistConstraints_38 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ExistQVars_82 = (MR_Word) ((MR_Unsigned) 0U);
                  ExistProgConstraints_77 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word ExistConstraints_78 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_38), (MR_Integer) 1));

                  ExistQVars_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_78, (MR_Integer) 0))));
                  ExistProgConstraints_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_78, (MR_Integer) 1))));
                }
                {
                  ProgConstraints_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ProgConstraints_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), ProgConstraints_81, 1) = ((MR_Box) (ExistProgConstraints_77));
                }
                hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_67, &ClassTable_83);
                hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_83, Var_49, GoalId_10, ProgConstraints_81, &Constraints_84);
                {
                  Var_93 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (Var_48));
                }
                {
                  Var_92 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (Var_49));
                  MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (ExistQVars_82));
                  MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) (ConsType_75));
                  MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (ArgTypes_62));
                  MR_hl_field(MR_mktag(0), Var_92, 4) = ((MR_Box) (Constraints_84));
                  MR_hl_field(MR_mktag(0), Var_92, 5) = ((MR_Box) (Var_93));
                }
                MaybeFunctorConsTypeInfo_18 = (MR_Word) ((MR_Word) (Var_92));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          check_hlds__typecheck__convert_cons_defn_5_p_1(Info_9, GoalId_10, (MR_Integer) 1, ConsDefn_37, &MaybeFunctorConsTypeInfo_18);
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

static MR_bool MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_Constraint_6;

  succeeded = check_hlds__typecheck__rename_constraint_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Constraint_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_Constraint_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck__project_constraint_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
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
  MR_bool succeeded;
  MR_Word TVarSet0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorConsTypeInfo_12, (MR_Integer) 0))));
  MR_Word ExistQVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorConsTypeInfo_12, (MR_Integer) 1))));
  MR_Word FunctorType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorConsTypeInfo_12, (MR_Integer) 2))));
  MR_Word ConsArgTypes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorConsTypeInfo_12, (MR_Integer) 3))));
  MR_Word Constraints0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorConsTypeInfo_12, (MR_Integer) 4))));
  MR_Word Source0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorConsTypeInfo_12, (MR_Integer) 5))));
  MR_Word SourceType_21;
  MR_Integer FieldNumber_31;
  MR_Word FieldType_32;
  MR_Box conv0_FieldType_32;

  switch (MR_tag((MR_Word) Source0_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SourceType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Source0_20, (MR_Integer) 0))));
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
        return;
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
        return;
      }
      break;
  }
  FieldNumber_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FieldDefn_11, (MR_Integer) 4))));
  mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConsArgTypes_18, FieldNumber_31, &conv0_FieldType_32);
  FieldType_32 = ((MR_Word) (conv0_FieldType_32));
  switch (AccessType_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Source_33;
        MR_Word ArgTypes_35;
        MR_Word Var_57;

        {
          Source_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Source_33, 0) = ((MR_Box) (SourceType_21));
        }
        {
          ArgTypes_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgTypes_35, 0) = ((MR_Box) (FunctorType_17));
          MR_hl_field(MR_mktag(1), ArgTypes_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (TVarSet0_15));
          MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ExistQVars_16));
          MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (FieldType_32));
          MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (ArgTypes_35));
          MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Constraints0_19));
          MR_hl_field(MR_mktag(0), Var_57, 5) = ((MR_Box) (Source_33));
        }
        *ConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_57));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TVarsInField_36;
        MR_Word Source_83;

        {
          Source_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Source_83, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Source_83, 1) = ((MR_Box) (SourceType_21));
        }
        parse_tree__prog_type__type_vars_in_type_2_p_0(FieldType_32, &TVarsInField_36);
        if ((TVarsInField_36 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_58;
          MR_Word Var_60;
          MR_Word ArgTypes_74;

          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (FieldType_32));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ArgTypes_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypes_74, 0) = ((MR_Box) (FunctorType_17));
            MR_hl_field(MR_mktag(1), ArgTypes_74, 1) = ((MR_Box) (Var_58));
          }
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (TVarSet0_15));
            MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (ExistQVars_16));
            MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (FunctorType_17));
            MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (ArgTypes_74));
            MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (Constraints0_19));
            MR_hl_field(MR_mktag(0), Var_60, 5) = ((MR_Box) (Source_83));
          }
          *ConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_60));
        }
        else
        {
          MR_Word ArgTypesWithoutField_39;
          MR_Word TVarsInOtherArgs_40;
          MR_Word ExistQVarsInFieldAndOthers_41;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;

          Var_61 = parse_tree__builtin_lib_types__int_type_0_f_0();
          mercury__list__det_replace_nth_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConsArgTypes_18, FieldNumber_31, ((MR_Box) (Var_61)), &ArgTypesWithoutField_39);
          parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypesWithoutField_39, &TVarsInOtherArgs_40);
          Var_62 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsInField_36);
          Var_64 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsInOtherArgs_40);
          Var_65 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), OrigExistTVars_13);
          Var_63 = mercury__set__intersect_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), Var_64, Var_65);
          mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), Var_62, Var_63, &ExistQVarsInFieldAndOthers_41);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ExistQVarsInFieldAndOthers_41);
          if (succeeded)
          {
            MR_Word TVarsOnlyInField0_42;
            MR_Word TVarsOnlyInField_43;
            MR_Integer NumNewTVars_44;
            MR_Word NewTVars_45;
            MR_Word TVarSet_46;
            MR_Word TVarRenaming_47;
            MR_Word RenamedFieldType_48;
            MR_Word CallTVars0_50;
            MR_Word CallTVars_51;
            MR_Word Constraints_52;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word Var_69;
            MR_Word Var_71;
            MR_Word RetType_75;
            MR_Word ArgTypes_76;
            MR_Word Unproven0_87;
            MR_Word Assumed_88;
            MR_Word Redundant0_89;
            MR_Word Ancestors_90;
            MR_Word NewUnproven0_91;
            MR_Word NewUnproven_92;
            MR_Word Redundant_93;
            MR_Word Unproven_94;
            MR_Word Var_95;
            MR_Word Var_96;

            mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsInField_36, TVarsInOtherArgs_40, &TVarsOnlyInField0_42);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsOnlyInField0_42, &TVarsOnlyInField_43);
            mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsOnlyInField_43, &NumNewTVars_44);
            mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NumNewTVars_44, &NewTVars_45, TVarSet0_15, &TVarSet_46);
            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsOnlyInField_43, NewTVars_45, &TVarRenaming_47);
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(TVarRenaming_47, FieldType_32, &RenamedFieldType_48);
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(TVarRenaming_47, FunctorType_17, &RetType_75);
            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (FieldType_32));
              MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (FunctorType_17));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_67));
            }
            parse_tree__prog_type__type_vars_in_types_2_p_0(Var_66, &CallTVars0_50);
            mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), CallTVars0_50, &CallTVars_51);
            Unproven0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_19, (MR_Integer) 0))));
            Assumed_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_19, (MR_Integer) 1))));
            Redundant0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_19, (MR_Integer) 2))));
            Ancestors_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_19, (MR_Integer) 3))));
            {
              Var_95 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[6]));
              MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (CallTVars_51));
            }
            mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_95, Unproven0_87, &NewUnproven0_91);
            {
              Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0_2));
              MR_hl_field(MR_mktag(0), Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_96, 3) = ((MR_Box) (TVarRenaming_47));
            }
            mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_96, NewUnproven0_91, &NewUnproven_92);
            hlds__hlds_class__update_redundant_constraints_5_p_0(ClassTable_8, TVarSet_46, NewUnproven_92, Redundant0_89, &Redundant_93);
            mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), NewUnproven_92, Unproven0_87, &Unproven_94);
            {
              Constraints_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Constraints_52, 0) = ((MR_Box) (Unproven_94));
              MR_hl_field(MR_mktag(0), Constraints_52, 1) = ((MR_Box) (Assumed_88));
              MR_hl_field(MR_mktag(0), Constraints_52, 2) = ((MR_Box) (Redundant_93));
              MR_hl_field(MR_mktag(0), Constraints_52, 3) = ((MR_Box) (Ancestors_90));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (RenamedFieldType_48));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ArgTypes_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ArgTypes_76, 0) = ((MR_Box) (FunctorType_17));
              MR_hl_field(MR_mktag(1), ArgTypes_76, 1) = ((MR_Box) (Var_69));
            }
            {
              Var_71 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (TVarSet_46));
              MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (ExistQVars_16));
              MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) (RetType_75));
              MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (ArgTypes_76));
              MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (Constraints_52));
              MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (Source_83));
            }
            *ConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_71));
          }
          else
          {
            MR_Word ExistQVarsInFieldAndOthers1_53;
            MR_Word Var_72;

            mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ExistQVarsInFieldAndOthers_41, &ExistQVarsInFieldAndOthers1_53);
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_72, 0) = ((MR_Box) (FieldName_10));
              MR_hl_field(MR_mktag(2), Var_72, 1) = ((MR_Box) (FieldDefn_11));
              MR_hl_field(MR_mktag(2), Var_72, 2) = ((MR_Box) (TVarSet0_15));
              MR_hl_field(MR_mktag(2), Var_72, 3) = ((MR_Box) (ExistQVarsInFieldAndOthers1_53));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ConsTypeInfo_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_72));
            }
          }
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_coerce_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_19;

  check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_19));
}

static void MR_CALL 
check_hlds__typecheck__typecheck_coerce_2_8_p_0(
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
  MR_Word ExternalTypeParams_17;
  MR_Word TypeBindings_18;
  MR_Word MaybeFromType_21;
  MR_Word MaybeToType_24;
  MR_Word FromType0_19;
  MR_Word ToType0_22;
  MR_Word FromType_25;
  MR_Word ToType_26;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_12, &VarTypes_15);
  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign0_12, &TVarSet_16);
  check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign0_12, &ExternalTypeParams_17);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_12, &TypeBindings_18);
  succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_15, FromVar_10, &FromType0_19);
  if (succeeded)
  {
    MR_Word FromType1_20;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_18, FromType0_19, &FromType1_20);
    {
      MaybeFromType_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeFromType_21, 0) = ((MR_Box) (FromType1_20));
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
      MaybeToType_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeToType_24, 0) = ((MR_Box) (ToType1_23));
    }
  }
  else
    MaybeToType_24 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (MaybeFromType_21 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    FromType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFromType_21, (MR_Integer) 0))));
    succeeded = (MaybeToType_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ToType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeToType_24, (MR_Integer) 0))));
      succeeded = parse_tree__prog_type__type_is_ground_except_vars_2_p_0(FromType_25, ExternalTypeParams_17);
      if (succeeded)
        succeeded = parse_tree__prog_type__type_is_ground_except_vars_2_p_0(ToType_26, ExternalTypeParams_17);
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
    MR_Word TypeBodyDu_63;
    MR_Word TypeDefn_60;
    MR_Word TypeBody_62;

    check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(STATE_VARIABLE_Info_0_36, &TypeTable_27);
    check_hlds__typecheck__replace_principal_type_ctor_with_base_4_p_0(TypeTable_27, TVarSet_16, FromType_25, &FromBaseType_49);
    check_hlds__typecheck__replace_principal_type_ctor_with_base_4_p_0(TypeTable_27, TVarSet_16, ToType_26, &ToBaseType_50);
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
                TypeBodyDu_63 = (MR_Word) ((MR_Word) (TypeBody_62));
            }
            if (succeeded)
            {
              MR_Word OoMCtors_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_63, (MR_Integer) 0))));
              MR_Word Ctors_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Box conv1_InvariantSet_58;

              Ctors_69 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_64);
              {
                Var_70 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[1]));
                MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_coerce_2_8_p_0_1));
                MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (TypeTable_27));
                MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (BaseTypeCtor_55));
                MR_hl_field(MR_mktag(0), Var_70, 5) = ((MR_Box) (TypeParams_61));
              }
              Var_71 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]));
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[5]), Var_70, Ctors_69, ((MR_Box) (Var_71)), &conv1_InvariantSet_58);
              InvariantSet_58 = ((MR_Word) (conv1_InvariantSet_58));
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.build_type_param_variance_restrictions\'/3", (MR_String) "not du type");
                return;
              }
            succeeded = check_hlds__typecheck__check_coerce_type_params_8_p_0(TypeTable_27, TVarSet_16, InvariantSet_58, BaseTypeParams_57, FromBaseTypeArgs_52, ToBaseTypeArgs_54, TypeAssign0_12, &TypeAssign1_28);
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
        MR_hl_field(MR_mktag(0), Coercion_31, 0) = ((MR_Box) (FromType_25));
        MR_hl_field(MR_mktag(0), Coercion_31, 1) = ((MR_Box) (ToType_26));
        MR_hl_field(MR_mktag(0), Coercion_31, 2) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(0), Coercion_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      {
        Coercions_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Coercions_32, 0) = ((MR_Box) (Coercion_31));
        MR_hl_field(MR_mktag(1), Coercions_32, 1) = ((MR_Box) (Coercions0_30));
      }
      check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_32, TypeAssign0_12, &TypeAssign_29);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_35 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeAssign_29));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_34));
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
        MR_hl_field(MR_mktag(0), FromType_42, 0) = ((MR_Box) (TypeVar_79));
        MR_hl_field(MR_mktag(0), FromType_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__vartypes__add_var_type_4_p_0(FromVar_10, FromType_42, VarTypes0_77, &VarTypes1_81);
      check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_81, STATE_VARIABLE_TypeAssign_15_82, &TypeAssign1_44);
    }
    else
    {
      FromType_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFromType_21, (MR_Integer) 0))));
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
        MR_hl_field(MR_mktag(0), ToType_43, 0) = ((MR_Box) (TypeVar_87));
        MR_hl_field(MR_mktag(0), ToType_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__vartypes__add_var_type_4_p_0(ToVar_11, ToType_43, VarTypes0_85, &VarTypes1_89);
      check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_89, STATE_VARIABLE_TypeAssign_15_90, &TypeAssign2_33);
    }
    else
    {
      ToType_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeToType_24, (MR_Integer) 0))));
      TypeAssign2_33 = TypeAssign1_44;
    }
    check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign2_33, &Coercions0_46);
    {
      Coercion_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Coercion_47, 0) = ((MR_Box) (FromType_42));
      MR_hl_field(MR_mktag(0), Coercion_47, 1) = ((MR_Box) (ToType_43));
      MR_hl_field(MR_mktag(0), Coercion_47, 2) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), Coercion_47, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Coercions_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Coercions_48, 0) = ((MR_Box) (Coercion_47));
      MR_hl_field(MR_mktag(1), Coercions_48, 1) = ((MR_Box) (Coercions0_46));
    }
    check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_48, TypeAssign2_33, &TypeAssign_45);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_35 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeAssign_45));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_34));
    }
  }
  *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_0_36;
}

static MR_bool MR_CALL 
check_hlds__typecheck__check_coerce_type_params_8_p_0(
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
      MR_Word TypeVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeParams_12, (MR_Integer) 0))));
      MR_Word TailTypeParams_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeParams_12, (MR_Integer) 1))));
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
        FromType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FromTypeArgs_13, (MR_Integer) 0))));
        TailFromTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FromTypeArgs_13, (MR_Integer) 1))));
        succeeded = (ToTypeArgs_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ToType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToTypeArgs_14, (MR_Integer) 0))));
          TailToTypes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToTypeArgs_14, (MR_Integer) 1))));
          TypeInfo_23_29 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[1]);
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
              MR_Word HeadTypeParams_34;
              MR_Word TypeBindings0_35;
              MR_Word TypeBindings_36;

              check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(STATE_VARIABLE_TypeAssign_0_22, &HeadTypeParams_34);
              check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_22, &TypeBindings0_35);
              succeeded = parse_tree__prog_type__type_unify_5_p_0(FromType_18, ToType_20, HeadTypeParams_34, TypeBindings0_35, &TypeBindings_36);
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
                    MR_String Var_61;
                    MR_String Var_62;

                    succeeded = ((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_61 = (MR_String) "predicate \140check_hlds.typecheck.compare_types_nonvar\'/7";
                      Var_62 = (MR_String) "type_variable";
                      mercury__require__unexpected_2_p_0(Var_61, Var_62);
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
                          succeeded = check_hlds__typecheck__compare_types_corresponding_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, ArgsA_46, ArgsB_48, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                      }
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word BuiltinType_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FromType_18, (MR_Integer) 0))));
                    MR_Word Var_71;

                    succeeded = ((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ToType_20, (MR_Integer) 0))));
                      succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_37, Var_71);
                      if (succeeded)
                      {
                        STATE_VARIABLE_TypeAssign_24_24 = STATE_VARIABLE_TypeAssign_0_22;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), FromType_18, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Kind_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FromType_18, (MR_Integer) 2))));
                        MR_Word ArgsA_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FromType_18, (MR_Integer) 1))));
                        MR_Word ArgsB_67;
                        MR_Word Var_72;

                        succeeded = ((((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ToType_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          ArgsB_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ToType_20, (MR_Integer) 1))));
                          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ToType_20, (MR_Integer) 2))));
                          succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_50, Var_72);
                          if (succeeded)
                            succeeded = check_hlds__typecheck__compare_types_corresponding_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, ArgsA_66, ArgsB_67, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word PredOrFunc_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FromType_18, (MR_Integer) 1))) & (MR_Integer) 1);
                        MR_Word Purity_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FromType_18, (MR_Integer) 4))) & (MR_Integer) 3);
                        MR_Word Var_63;
                        MR_Word ArgsA_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FromType_18, (MR_Integer) 2))));
                        MR_Word ArgsB_69;
                        MR_Word Var_73;
                        MR_Word Var_74;

                        succeeded = ((((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ToType_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ToType_20, (MR_Integer) 1))) & (MR_Integer) 1);
                          ArgsB_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ToType_20, (MR_Integer) 2))));
                          Var_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ToType_20, (MR_Integer) 4))) & (MR_Integer) 3);
                          succeeded = (PredOrFunc_51 == Var_73);
                          if (succeeded)
                          {
                            succeeded = (Purity_53 == Var_74);
                            if (succeeded)
                            {
                              succeeded = MR_TRUE;
                              if (succeeded)
                              {
                                Var_63 = (MR_Integer) 0;
                                succeeded = check_hlds__typecheck__compare_types_corresponding_7_p_0(TypeTable_9, TVarSet_10, Var_63, ArgsA_68, ArgsB_69, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck.compare_types_nonvar\'/7", (MR_String) "apply_n_type");
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word TypeA1_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FromType_18, (MR_Integer) 1))));
                        MR_Word TypeB1_60;
                        MR_Word Kind_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FromType_18, (MR_Integer) 2))));
                        MR_Word Var_76;

                        succeeded = ((((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ToType_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
                        if (succeeded)
                        {
                          TypeB1_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ToType_20, (MR_Integer) 1))));
                          Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ToType_20, (MR_Integer) 2))));
                          succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_70, Var_76);
                          if (succeeded)
                            succeeded = check_hlds__typecheck__compare_types_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, TypeA1_59, TypeB1_60, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
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

            succeeded = check_hlds__typecheck__compare_types_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 1, FromType_18, ToType_20, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_21_27);
            if (succeeded)
            {
              STATE_VARIABLE_TypeAssign_24_24 = STATE_VARIABLE_TypeAssign_21_27;
              succeeded = MR_TRUE;
            }
            else
              succeeded = check_hlds__typecheck__compare_types_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 1, ToType_20, FromType_18, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
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
check_hlds__typecheck__compare_types_7_p_0(
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
      MR_Word HeadTypeParams_20;
      MR_Word TypeBindings0_21;
      MR_Word TypeBindings_22;

      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(STATE_VARIABLE_TypeAssign_0_18, &HeadTypeParams_20);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_18, &TypeBindings0_21);
      succeeded = parse_tree__prog_type__type_unify_5_p_0(TypeA_11, TypeB_12, HeadTypeParams_20, TypeBindings0_21, &TypeBindings_22);
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
            MR_String Var_47;
            MR_String Var_48;

            succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_47 = (MR_String) "predicate \140check_hlds.typecheck.compare_types_nonvar\'/7";
              Var_48 = (MR_String) "type_variable";
              mercury__require__unexpected_2_p_0(Var_47, Var_48);
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
                  succeeded = check_hlds__typecheck__compare_types_corresponding_7_p_0(TypeTable_8, TVarSet_9, Comparison_10, ArgsA_32, ArgsB_34, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
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
            MR_Word BuiltinType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeA_11, (MR_Integer) 0))));
            MR_Word Var_57;

            succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeB_12, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_23, Var_57);
              if (succeeded)
              {
                *STATE_VARIABLE_TypeAssign_19 = STATE_VARIABLE_TypeAssign_0_18;
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeA_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Kind_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_11, (MR_Integer) 2))));
                MR_Word ArgsA_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_11, (MR_Integer) 1))));
                MR_Word ArgsB_53;
                MR_Word Var_58;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgsB_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_12, (MR_Integer) 1))));
                  Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_12, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_36, Var_58);
                  if (succeeded)
                    succeeded = check_hlds__typecheck__compare_types_corresponding_7_p_0(TypeTable_8, TVarSet_9, Comparison_10, ArgsA_52, ArgsB_53, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_11, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Purity_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_11, (MR_Integer) 4))) & (MR_Integer) 3);
                MR_Word Var_49;
                MR_Word ArgsA_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_11, (MR_Integer) 2))));
                MR_Word ArgsB_55;
                MR_Word Var_59;
                MR_Word Var_60;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_12, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgsB_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_12, (MR_Integer) 2))));
                  Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_12, (MR_Integer) 4))) & (MR_Integer) 3);
                  succeeded = (PredOrFunc_37 == Var_59);
                  if (succeeded)
                  {
                    succeeded = (Purity_39 == Var_60);
                    if (succeeded)
                    {
                      succeeded = MR_TRUE;
                      if (succeeded)
                      {
                        Var_49 = (MR_Integer) 0;
                        succeeded = check_hlds__typecheck__compare_types_corresponding_7_p_0(TypeTable_8, TVarSet_9, Var_49, ArgsA_54, ArgsB_55, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck.compare_types_nonvar\'/7", (MR_String) "apply_n_type");
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeA1_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_11, (MR_Integer) 1))));
                MR_Word TypeB1_46;
                MR_Word Kind_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_11, (MR_Integer) 2))));
                MR_Word Var_62;
                MR_Word next_value_of_TypeA_11;
                MR_Word next_value_of_TypeB_12;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_12, (MR_Integer) 1))));
                  Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_12, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_56, Var_62);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_TypeA_11 = TypeA1_45;
                    next_value_of_TypeB_12 = TypeB1_46;
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
check_hlds__typecheck__compare_types_corresponding_7_p_0(
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
      MR_Word TypeA_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TypesA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TypeB_19;
      MR_Word TypesB_20;
      MR_Word STATE_VARIABLE_TypeAssign_24_24;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_6;

      succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
        TypesB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
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
          MR_Word HeadTypeParams_29;
          MR_Word TypeBindings0_30;
          MR_Word TypeBindings_31;

          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(STATE_VARIABLE_TypeAssign_0_6, &HeadTypeParams_29);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_6, &TypeBindings0_30);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(TypeA_17, TypeB_19, HeadTypeParams_29, TypeBindings0_30, &TypeBindings_31);
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
                MR_String Var_56;
                MR_String Var_57;

                succeeded = ((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_56 = (MR_String) "predicate \140check_hlds.typecheck.compare_types_nonvar\'/7";
                  Var_57 = (MR_String) "type_variable";
                  mercury__require__unexpected_2_p_0(Var_56, Var_57);
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
                      succeeded = check_hlds__typecheck__compare_types_corresponding_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgsA_41, ArgsB_43, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                    else
                    {
                      MR_Word SuperTypeA_44;

                      succeeded = (HeadVar__3_3 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = check_hlds__type_util__get_supertype_5_p_0(HeadVar__1_1, HeadVar__2_2, TypeCtorA_40, ArgsA_41, &SuperTypeA_44);
                        if (succeeded)
                          succeeded = check_hlds__typecheck__compare_types_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, SuperTypeA_44, TypeB_19, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeA_17, (MR_Integer) 0))));
                MR_Word Var_66;

                succeeded = ((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeB_19, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_32, Var_66);
                  if (succeeded)
                  {
                    STATE_VARIABLE_TypeAssign_24_24 = STATE_VARIABLE_TypeAssign_0_6;
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeA_17, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Kind_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_17, (MR_Integer) 2))));
                    MR_Word ArgsA_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_17, (MR_Integer) 1))));
                    MR_Word ArgsB_62;
                    MR_Word Var_67;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgsB_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_19, (MR_Integer) 1))));
                      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_19, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_45, Var_67);
                      if (succeeded)
                        succeeded = check_hlds__typecheck__compare_types_corresponding_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgsA_61, ArgsB_62, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PredOrFunc_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_17, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Purity_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_17, (MR_Integer) 4))) & (MR_Integer) 3);
                    MR_Word Var_58;
                    MR_Word ArgsA_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_17, (MR_Integer) 2))));
                    MR_Word ArgsB_64;
                    MR_Word Var_68;
                    MR_Word Var_69;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_19, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgsB_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_19, (MR_Integer) 2))));
                      Var_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_19, (MR_Integer) 4))) & (MR_Integer) 3);
                      succeeded = (PredOrFunc_46 == Var_68);
                      if (succeeded)
                      {
                        succeeded = (Purity_48 == Var_69);
                        if (succeeded)
                        {
                          succeeded = MR_TRUE;
                          if (succeeded)
                          {
                            Var_58 = (MR_Integer) 0;
                            succeeded = check_hlds__typecheck__compare_types_corresponding_7_p_0(HeadVar__1_1, HeadVar__2_2, Var_58, ArgsA_63, ArgsB_64, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                          }
                        }
                      }
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck.compare_types_nonvar\'/7", (MR_String) "apply_n_type");
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word TypeA1_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_17, (MR_Integer) 1))));
                    MR_Word TypeB1_55;
                    MR_Word Kind_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_17, (MR_Integer) 2))));
                    MR_Word Var_71;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_19, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      TypeB1_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_19, (MR_Integer) 1))));
                      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_19, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_65, Var_71);
                      if (succeeded)
                        succeeded = check_hlds__typecheck__compare_types_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TypeA1_54, TypeB1_55, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
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
check_hlds__typecheck__replace_principal_type_ctor_with_base_4_p_0(
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
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
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
    MR_Word HeadTypeParams_20;
    MR_Word TypeBindings0_21;
    MR_Word TypeBindings_22;

    check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign0_8, &HeadTypeParams_20);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_8, &TypeBindings0_21);
    succeeded = parse_tree__prog_type__type_unify_5_p_0(ConsType_6, TypeY_13, HeadTypeParams_20, TypeBindings0_21, &TypeBindings_22);
    if (succeeded)
    {
      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_22, TypeAssign0_8, &TypeAssign_14);
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

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(
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
  check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(STATE_VARIABLE_TypeAssignSet_0_11, Var_8, Var_16, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_17);
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
    SpecAndMaybeActualExpected_20 = check_hlds__typecheck_errors__report_error_var_6_f_0(STATE_VARIABLE_Info_0_13, (MR_Word) ((MR_Unsigned) 0U), Context_7, Var_8, Var_16, STATE_VARIABLE_TypeAssignSet_0_11);
    Spec_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecAndMaybeActualExpected_20, (MR_Integer) 0))));
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_21, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  }
  else
  {
    *STATE_VARIABLE_TypeAssignSet_12 = TypeAssignSet1_17;
    *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
  }
}

static void MR_CALL 
check_hlds__typecheck__report_invalid_coercion_4_p_0(
  MR_Word TypeAssign_5,
  MR_Word Coercion_6,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word FromType0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Coercion_6, (MR_Integer) 0))));
  MR_Word ToType0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Coercion_6, (MR_Integer) 1))));
  MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Coercion_6, (MR_Integer) 2))));
  MR_Word TVarSet_12;
  MR_Word TypeBindings_13;
  MR_Word FromType_14;
  MR_Word ToType_15;
  MR_Word ClauseContext_16;
  MR_Word Spec_17;

  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_5, &TVarSet_12);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &TypeBindings_13);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_13, FromType0_8, &FromType_14);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_13, ToType0_9, &ToType_15);
  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_18, &ClauseContext_16);
  Spec_17 = check_hlds__typecheck_errors__report_invalid_coerce_from_to_5_f_0(ClauseContext_16, Context_10, TVarSet_12, FromType_14, ToType_15);
  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_17, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
}

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ((MR_Box) ((env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7)), (env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3);
    (env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
    if ((env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded)
      check_hlds__typecheck__is_head_class_constraint_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
  void * env_ptr_arg)
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

static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
  MR_Word HeadTypeVars_3,
  MR_Word Constraint_4)
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

static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_8_p_0(
  MR_Word Context_9,
  MR_Word TypeVarSet_10,
  MR_Word Impl_11,
  MR_Word TVar_12,
  MR_Integer STATE_VARIABLE_ExistQVarNum_0_20,
  MR_Integer * STATE_VARIABLE_ExistQVarNum_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_String Name_15;
  MR_String OldVarName_16;
  MR_String NewVarName_17;
  MR_String Var_26;

  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_10, TVar_12, &Name_15);
  OldVarName_16 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", Name_15);
  Var_26 = mercury__string__int_to_string_1_f_0(STATE_VARIABLE_ExistQVarNum_0_20);
  NewVarName_17 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_Out_", Var_26);
  *STATE_VARIABLE_ExistQVarNum_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ExistQVarNum_0_20 + (MR_Unsigned) 1);
  succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(Impl_11, OldVarName_16);
  if (!(succeeded))
    succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(Impl_11, NewVarName_17);
  if (succeeded)
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  else
  {
    MR_Word ClauseContext_18;
    MR_Word Spec_19;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_22, &ClauseContext_18);
    Spec_19 = check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_3_f_0(ClauseContext_18, Context_9, OldVarName_16);
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_19, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_STATE_VARIABLE_ExistQVarNum_21;
  MR_Word conv0_STATE_VARIABLE_Info_23;

  check_hlds__typecheck__check_mention_existq_var_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ExistQVarNum_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ExistQVarNum_21));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_23));
}

static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
  MR_Word TypeVarSet_6,
  MR_Word ExistQVars_7,
  MR_Word Clause_8,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word Goal_10;
  MR_Word Impl_17;
  MR_Word Var_23;

  Goal_10 = hlds__hlds_clauses__clause_body_1_f_0(Clause_8);
  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    Impl_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 7))));
    {
      MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_8, (MR_Integer) 3))));
      MR_Word Var_24;
      MR_Box conv3__N_20;
      MR_Box conv2_STATE_VARIABLE_Info_22;

      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[2]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (check_hlds__typecheck__check_existq_clause_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Context_19));
        MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (TypeVarSet_6));
        MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (Impl_17));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_24, ExistQVars_7, ((MR_Box) ((MR_Integer) 1)), &conv3__N_20, ((MR_Box) (STATE_VARIABLE_Info_0_21)), &conv2_STATE_VARIABLE_Info_22);
      *STATE_VARIABLE_Info_22 = ((MR_Word) (conv2_STATE_VARIABLE_Info_22));
    }
  }
  else
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
}

void MR_CALL 
check_hlds__typecheck__typecheck_module_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18,
  MR_Word * Specs_7,
  MR_Word * FoundSyntaxError_8,
  MR_Word * NumberOfIterations_9)
{
  MR_Word Globals_10;
  MR_Integer MaxIterations_11;
  MR_Word OrigValidPredIdSet_12;
  MR_Word OrigValidPredIds_13;
  MR_Word FinalValidPredIdSet_14;
  MR_Word CheckSpecs_15;
  MR_Word InferSpecs_16;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_17, &Globals_10);
  libs__globals__lookup_int_option_3_p_0(Globals_10, (MR_Integer) 223, &MaxIterations_11);
  hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(STATE_VARIABLE_ModuleInfo_0_17, &OrigValidPredIdSet_12);
  OrigValidPredIds_13 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), OrigValidPredIdSet_12);
  check_hlds__typecheck__typecheck_to_fixpoint_10_p_0((MR_Integer) 1, MaxIterations_11, STATE_VARIABLE_ModuleInfo_0_17, STATE_VARIABLE_ModuleInfo_18, OrigValidPredIds_13, OrigValidPredIdSet_12, &FinalValidPredIdSet_14, &CheckSpecs_15, FoundSyntaxError_8, NumberOfIterations_9);
  check_hlds__typecheck_msgs__construct_type_inference_messages_5_p_0(*STATE_VARIABLE_ModuleInfo_18, FinalValidPredIdSet_14, OrigValidPredIds_13, (MR_Word) ((MR_Unsigned) 0U), &InferSpecs_16);
  *Specs_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), InferSpecs_16, CheckSpecs_15);
}

static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_10_p_0(
  MR_Integer Iteration_11,
  MR_Integer MaxIterations_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word OrigValidPredIds_14,
  MR_Word OrigValidPredIdSet_15,
  MR_Word * FinalValidPredIdSet_16,
  MR_Word * Specs_17,
  MR_Word * FoundSyntaxError_18,
  MR_Word * NumberOfIterations_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word PredIdTable0_20;
    MR_Word PredIdsInfos0_21;
    MR_Word PredIdsInfos_22;
    MR_Word NewlyInvalidPredIds_23;
    MR_Word CurSpecs_24;
    MR_Word CurFoundSyntaxError_25;
    MR_Word NextIteration_26;
    MR_Word PredIdTable_27;
    MR_Word NewValidPredIdSet_28;
    MR_Word Globals_29;
    MR_Word STATE_VARIABLE_ModuleInfo_41_41;
    MR_Word STATE_VARIABLE_ModuleInfo_42_42;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &PredIdTable0_20);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_20, &PredIdsInfos0_21);
    check_hlds__typecheck__typecheck_module_one_iteration_12_p_0(STATE_VARIABLE_ModuleInfo_0_35, OrigValidPredIdSet_15, PredIdsInfos0_21, &PredIdsInfos_22, (MR_Word) ((MR_Unsigned) 0U), &NewlyInvalidPredIds_23, (MR_Word) ((MR_Unsigned) 0U), &CurSpecs_24, (MR_Integer) 0, &CurFoundSyntaxError_25, (MR_Integer) 0, &NextIteration_26);
    mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdsInfos_22, &PredIdTable_27);
    hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_27, STATE_VARIABLE_ModuleInfo_0_35, &STATE_VARIABLE_ModuleInfo_41_41);
    hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(NewlyInvalidPredIds_23, STATE_VARIABLE_ModuleInfo_41_41, &STATE_VARIABLE_ModuleInfo_42_42);
    hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(STATE_VARIABLE_ModuleInfo_42_42, &NewValidPredIdSet_28);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_42_42, &Globals_29);
    succeeded = (NextIteration_26 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_Word Var_43;

      Var_43 = parse_tree__error_util__contains_errors_2_f_0(Globals_29, CurSpecs_24);
      succeeded = (Var_43 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      *FinalValidPredIdSet_16 = NewValidPredIdSet_28;
      *Specs_17 = CurSpecs_24;
      *FoundSyntaxError_18 = CurFoundSyntaxError_25;
      *NumberOfIterations_19 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_42_42;
    }
    else
    {
      MR_Word DebugTypes_30;

      libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 86, &DebugTypes_30);
      switch (DebugTypes_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProgressSpecs_31;
            MR_Word ModuleName_33;
            MR_Word OutputStream_34;

            check_hlds__typecheck_msgs__construct_type_inference_messages_5_p_0(STATE_VARIABLE_ModuleInfo_42_42, NewValidPredIdSet_28, OrigValidPredIds_14, (MR_Word) ((MR_Unsigned) 0U), &ProgressSpecs_31);
            hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_42_42, &ModuleName_33);
            libs__globals__get_debug_output_stream_5_p_0(Globals_29, ModuleName_33, &OutputStream_34);
            parse_tree__error_util__write_error_specs_5_p_0(OutputStream_34, Globals_29, ProgressSpecs_31);
          }
          break;
      }
      succeeded = (Iteration_11 < MaxIterations_12);
      if (succeeded)
      {
        MR_Integer Var_49 = (MR_Integer) ((MR_Unsigned) Iteration_11 + (MR_Unsigned) 1);
        MR_Integer next_value_of_Iteration_11 = Var_49;
        MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_35 = STATE_VARIABLE_ModuleInfo_42_42;

        // direct tailcall eliminated
        ;
        Iteration_11 = next_value_of_Iteration_11;
        STATE_VARIABLE_ModuleInfo_0_35 = next_value_of_STATE_VARIABLE_ModuleInfo_0_35;
        continue;
      }
      else
      {
        MR_Word Var_52;

        *FinalValidPredIdSet_16 = NewValidPredIdSet_28;
        Var_52 = check_hlds__typecheck_msgs__typecheck_report_max_iterations_exceeded_1_f_0(MaxIterations_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Specs_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *FoundSyntaxError_18 = CurFoundSyntaxError_25;
        *NumberOfIterations_19 = (MR_Integer) 1;
        *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_42_42;
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
  MR_Word STATE_VARIABLE_NextIteration_0_11,
  MR_Word * STATE_VARIABLE_NextIteration_12)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NextIteration_12 = STATE_VARIABLE_NextIteration_0_11;
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
      check_hlds__typecheck__LCMC__pred__typecheck_module_one_iteration__1_12_p_0(ModuleInfo_1, ValidPredIdSet_2, TailPredIdsInfos0_30, AddrTailPredIdsInfos_69, STATE_VARIABLE_NewlyInvalidPredIds_0_5, STATE_VARIABLE_NewlyInvalidPredIds_6, STATE_VARIABLE_Specs_0_7, STATE_VARIABLE_Specs_8, STATE_VARIABLE_FoundSyntaxError_0_9, STATE_VARIABLE_FoundSyntaxError_10, STATE_VARIABLE_NextIteration_0_11, STATE_VARIABLE_NextIteration_12);
    }
    else
    {
      MR_Word PredInfo_40;
      MR_Word PredSpecs_41;
      MR_Word PredSyntaxError_42;
      MR_Word ContainsErrors_43;
      MR_Word PredNextIteration_44;
      MR_Word STATE_VARIABLE_NewlyInvalidPredIds_57_57;
      MR_Word STATE_VARIABLE_Specs_58_58;
      MR_Word STATE_VARIABLE_FoundSyntaxError_59_59;
      MR_Word STATE_VARIABLE_NextIteration_60_60;
      MR_Word HeadPredIdInfo_65;
      MR_Word * AddrTailPredIdsInfos_70;

      check_hlds__typecheck__typecheck_pred_if_needed_8_p_0(ModuleInfo_1, PredId_36, PredInfo0_37, &PredInfo_40, &PredSpecs_41, &PredSyntaxError_42, &ContainsErrors_43, &PredNextIteration_44);
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
      switch (PredSyntaxError_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_FoundSyntaxError_59_59 = STATE_VARIABLE_FoundSyntaxError_0_9;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_FoundSyntaxError_59_59 = (MR_Integer) 1;
          break;
      }
      switch (PredNextIteration_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_NextIteration_60_60 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_NextIteration_60_60 = STATE_VARIABLE_NextIteration_0_11;
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadPredIdInfo_65));
        MR_hl_field(MR_mktag(1), base, 1) = NULL;
      }
      AddrTailPredIdsInfos_70 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
      check_hlds__typecheck__LCMC__pred__typecheck_module_one_iteration__1_12_p_0(ModuleInfo_1, ValidPredIdSet_2, TailPredIdsInfos0_30, AddrTailPredIdsInfos_70, STATE_VARIABLE_NewlyInvalidPredIds_57_57, STATE_VARIABLE_NewlyInvalidPredIds_6, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_8, STATE_VARIABLE_FoundSyntaxError_59_59, STATE_VARIABLE_FoundSyntaxError_10, STATE_VARIABLE_NextIteration_60_60, STATE_VARIABLE_NextIteration_12);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__typecheck_module_one_iteration__1_12_p_0(
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
  MR_Word STATE_VARIABLE_NextIteration_0_11,
  MR_Word * STATE_VARIABLE_NextIteration_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_71 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_NextIteration_12 = STATE_VARIABLE_NextIteration_0_11;
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
        MR_Word PredNextIteration_44;
        MR_Word STATE_VARIABLE_NewlyInvalidPredIds_57_57;
        MR_Word STATE_VARIABLE_Specs_58_58;
        MR_Word STATE_VARIABLE_FoundSyntaxError_59_59;
        MR_Word STATE_VARIABLE_NextIteration_60_60;
        MR_Word HeadPredIdInfo_65;
        MR_Word * AddrTailPredIdsInfos_70;
        MR_Word HeadVar__4_75;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word * next_value_of_AddrOfHeadVar__4_71;
        MR_Word next_value_of_STATE_VARIABLE_NewlyInvalidPredIds_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;
        MR_Word next_value_of_STATE_VARIABLE_FoundSyntaxError_0_9;
        MR_Word next_value_of_STATE_VARIABLE_NextIteration_0_11;

        check_hlds__typecheck__typecheck_pred_if_needed_8_p_0(ModuleInfo_1, PredId_36, PredInfo0_37, &PredInfo_40, &PredSpecs_41, &PredSyntaxError_42, &ContainsErrors_43, &PredNextIteration_44);
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
        switch (PredSyntaxError_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_FoundSyntaxError_59_59 = STATE_VARIABLE_FoundSyntaxError_0_9;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_FoundSyntaxError_59_59 = (MR_Integer) 1;
            break;
        }
        switch (PredNextIteration_44) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_NextIteration_60_60 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_NextIteration_60_60 = STATE_VARIABLE_NextIteration_0_11;
            break;
        }
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
        next_value_of_STATE_VARIABLE_NextIteration_0_11 = STATE_VARIABLE_NextIteration_60_60;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        AddrOfHeadVar__4_71 = next_value_of_AddrOfHeadVar__4_71;
        STATE_VARIABLE_NewlyInvalidPredIds_0_5 = next_value_of_STATE_VARIABLE_NewlyInvalidPredIds_0_5;
        STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
        STATE_VARIABLE_FoundSyntaxError_0_9 = next_value_of_STATE_VARIABLE_FoundSyntaxError_0_9;
        STATE_VARIABLE_NextIteration_0_11 = next_value_of_STATE_VARIABLE_NextIteration_0_11;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_if_needed_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck__IntroducedFrom__pred__handle_stubs_and_non_contiguous_clauses__460__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck__typecheck_pred_if_needed_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_PredInfo_0_19,
  MR_Word * STATE_VARIABLE_PredInfo_20,
  MR_Word * STATE_VARIABLE_Specs_21,
  MR_Word * FoundSyntaxError_13,
  MR_Word * ContainsErrors_14,
  MR_Word * NextIteration_15)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_PredInfo_22_22;
  MR_Word ClausesInfo0_27;
  MR_Word ClausesRep0_28;
  MR_Word IsEmpty_30;
  MR_Word _ItemNumbers_29;

  {
    MR_Word Origin_32;
    MR_Word SpecialPredId_33;
    MR_Word TypeCtor_34;
    MR_Word TypeTable_35;
    MR_Word TypeDefn_36;
    MR_Word Body_37;
    MR_Word Var_38;
    MR_Word TypeCtorInfo_13_40;
    MR_Word Var_39;

    succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(STATE_VARIABLE_PredInfo_0_19);
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_0_19, &Origin_32);
      succeeded = ((MR_tag((MR_Word) Origin_32)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_32, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
        if (succeeded)
        {
          SpecialPredId_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0))) & (MR_Integer) 3);
          TypeCtor_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 1))));
          Var_39 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
          TypeCtorInfo_13_40 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_13_40, ((MR_Box) (TypeCtor_34)), Var_39);
          succeeded = !(succeeded);
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_9, &TypeTable_35);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_35, TypeCtor_34, &TypeDefn_36);
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_36, &Body_37);
            succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(ModuleInfo_9, SpecialPredId_33, Body_37);
          }
        }
      }
      succeeded = !(succeeded);
    }
  }
  if (!(succeeded))
  {
    MR_Word Markers_26;
    MR_Word Var_31;

    succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(STATE_VARIABLE_PredInfo_0_19);
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_19, &Markers_26);
      Var_31 = (MR_Integer) 1;
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_26, Var_31);
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_19, &ClausesInfo0_27);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_27, &ClausesRep0_28, &_ItemNumbers_29);
    IsEmpty_30 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_28);
    switch (IsEmpty_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_PredInfo_22_22 = STATE_VARIABLE_PredInfo_0_19;
        break;
      case (MR_Integer) 1:
        hlds__hlds_pred__pred_info_mark_as_external_2_p_0(STATE_VARIABLE_PredInfo_0_19, &STATE_VARIABLE_PredInfo_22_22);
        break;
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *STATE_VARIABLE_PredInfo_20 = STATE_VARIABLE_PredInfo_22_22;
    *STATE_VARIABLE_Specs_21 = (MR_Word) ((MR_Unsigned) 0U);
    *FoundSyntaxError_13 = (MR_Integer) 0;
    *ContainsErrors_14 = (MR_Integer) 0;
    *NextIteration_15 = (MR_Integer) 0;
  }
  else
  {
    MR_Word ClausesInfo0_16;
    MR_Word MaybeNeedTypecheck_17;
    MR_Word STATE_VARIABLE_PredInfo_24_24;
    MR_Word STATE_VARIABLE_Specs_25_25;
    MR_Word Markers0_41;
    MR_Word ClausesInfo0_42;
    MR_Word ClausesRep0_43;
    MR_Word ItemNumbers0_44;
    MR_Word ClausesRep0IsEmpty_45;
    MR_Word ClausesInfo1_47;
    MR_Word ClausesRep1_48;
    MR_Word ClausesRep1IsEmpty_50;
    MR_Word STATE_VARIABLE_Specs_41_65;
    MR_Word STATE_VARIABLE_PredInfo_42_66;
    MR_Word _ItemNumbers_49;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_19, &ClausesInfo0_16);
    hlds__hlds_clauses__clauses_info_get_had_syntax_errors_2_p_0(ClausesInfo0_16, FoundSyntaxError_13);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_19, &Markers0_41);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_19, &ClausesInfo0_42);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_42, &ClausesRep0_43, &ItemNumbers0_44);
    ClausesRep0IsEmpty_45 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_43);
    switch (ClausesRep0IsEmpty_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__typecheck_msgs__maybe_check_for_and_report_any_non_contiguous_clauses_5_p_0(ModuleInfo_9, PredId_10, STATE_VARIABLE_PredInfo_0_19, ItemNumbers0_44, &STATE_VARIABLE_Specs_41_65);
          STATE_VARIABLE_PredInfo_42_66 = STATE_VARIABLE_PredInfo_0_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Globals_46;
          MR_Word Var_64;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_46);
          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_46, (MR_Integer) 218, (MR_Integer) 1);
          if (succeeded)
          {
            Var_64 = (MR_Integer) 11;
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_41, Var_64);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            STATE_VARIABLE_Specs_41_65 = check_hlds__typecheck_errors__maybe_report_no_clauses_stub_3_f_0(ModuleInfo_9, PredId_10, STATE_VARIABLE_PredInfo_0_19);
            check_hlds__typecheck__generate_and_add_stub_clause_4_p_0(ModuleInfo_9, PredId_10, STATE_VARIABLE_PredInfo_0_19, &STATE_VARIABLE_PredInfo_42_66);
          }
          else
          {
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_41, (MR_Integer) 1);
            if (succeeded)
            {
              STATE_VARIABLE_Specs_41_65 = (MR_Word) ((MR_Unsigned) 0U);
              check_hlds__typecheck__generate_and_add_stub_clause_4_p_0(ModuleInfo_9, PredId_10, STATE_VARIABLE_PredInfo_0_19, &STATE_VARIABLE_PredInfo_42_66);
            }
            else
            {
              STATE_VARIABLE_Specs_41_65 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_PredInfo_42_66 = STATE_VARIABLE_PredInfo_0_19;
            }
          }
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_42_66, &ClausesInfo1_47);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo1_47, &ClausesRep1_48, &_ItemNumbers_49);
    ClausesRep1IsEmpty_50 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep1_48);
    switch (ClausesRep1IsEmpty_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (*FoundSyntaxError_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MaybeNeedTypecheck_17 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_Specs_25_25 = STATE_VARIABLE_Specs_41_65;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Specs_25_25 = (MR_Word) ((MR_Unsigned) 0U);
                MaybeNeedTypecheck_17 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_2[0]));
              }
              break;
          }
          STATE_VARIABLE_PredInfo_24_24 = STATE_VARIABLE_PredInfo_42_66;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ContainsErrors_61;
          MR_Word Var_68;

          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[5]));
            MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_pred_if_needed_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (STATE_VARIABLE_Specs_41_65));
            MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140check_hlds.typecheck.handle_stubs_and_non_contiguous_clauses\'/7", (MR_String) "starting Specs not empty");
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_41, (MR_Integer) 11);
          if (succeeded)
          {
            MR_Word HeadVars_51;
            MR_Word ArgTypes_54;
            MR_Word VarTypes_55;
            MR_Word VarSet_56;
            MR_Word VarTable_57;
            MR_Word ClausesInfo2_58;
            MR_Word ClausesInfo_59;
            MR_Word HeadVarsInclExistentials_60;
            MR_Word STATE_VARIABLE_PredInfo_53_73;
            MR_Word _ArgTypeVarSet_52;
            MR_Word _ExistQVars_53;

            hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo1_47, &HeadVars_51);
            hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_42_66, &_ArgTypeVarSet_52, &_ExistQVars_53, &ArgTypes_54);
            parse_tree__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_51, ArgTypes_54, &VarTypes_55);
            hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo1_47, &VarSet_56);
            hlds__hlds_pred__corresponding_vars_types_to_var_table_5_p_0(ModuleInfo_9, VarSet_56, HeadVars_51, ArgTypes_54, &VarTable_57);
            hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(VarTypes_55, ClausesInfo1_47, &ClausesInfo2_58);
            hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_57, ClausesInfo2_58, &ClausesInfo_59);
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_59, STATE_VARIABLE_PredInfo_42_66, &STATE_VARIABLE_PredInfo_53_73);
            parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypes_54, &HeadVarsInclExistentials_60);
            hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(HeadVarsInclExistentials_60, STATE_VARIABLE_PredInfo_53_73, &STATE_VARIABLE_PredInfo_24_24);
            ContainsErrors_61 = (MR_Integer) 0;
            STATE_VARIABLE_Specs_25_25 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            ContainsErrors_61 = (MR_Integer) 1;
            switch (*FoundSyntaxError_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Specs_25_25 = check_hlds__typecheck_errors__maybe_report_no_clauses_3_f_0(ModuleInfo_9, PredId_10, STATE_VARIABLE_PredInfo_42_66);
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Specs_25_25 = (MR_Word) ((MR_Unsigned) 0U);
                break;
            }
            STATE_VARIABLE_PredInfo_24_24 = STATE_VARIABLE_PredInfo_42_66;
          }
          {
            MaybeNeedTypecheck_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeNeedTypecheck_17, 0) = (MR_Box) (((((MR_Unsigned) (ContainsErrors_61) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          }
        }
        break;
    }
    if ((MaybeNeedTypecheck_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Globals_18;

      check_hlds__typecheck__do_typecheck_pred_7_p_0(ModuleInfo_9, PredId_10, STATE_VARIABLE_PredInfo_24_24, STATE_VARIABLE_PredInfo_20, STATE_VARIABLE_Specs_25_25, STATE_VARIABLE_Specs_21, NextIteration_15);
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_18);
      *ContainsErrors_14 = parse_tree__error_util__contains_errors_2_f_0(Globals_18, *STATE_VARIABLE_Specs_21);
    }
    else
    {
      *ContainsErrors_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeNeedTypecheck_17, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      *NextIteration_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeNeedTypecheck_17, (MR_Integer) 0))) & (MR_Integer) 1);
      *STATE_VARIABLE_PredInfo_20 = STATE_VARIABLE_PredInfo_24_24;
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_25_25;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__generate_and_add_stub_clause_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredInfo_0_32,
  MR_Word * STATE_VARIABLE_PredInfo_33)
{
  MR_bool succeeded;
  MR_Word VarSet0_9;
  MR_Word RttiVarMaps_12;
  MR_Word TVarNameMap_13;
  MR_Word ArgVec_14;
  MR_Word PredPieces_19;
  MR_String PredName_20;
  MR_Word HeadVars_21;
  MR_Word ArgTypes_22;
  MR_Word VarTypes1_23;
  MR_Word StubClause_24;
  MR_Word VarSet_25;
  MR_Word VarTypes_26;
  MR_Word VarTable_27;
  MR_Word ClausesRep_28;
  MR_Word ItemNumbers_29;
  MR_Word Markers0_30;
  MR_Word Markers_31;
  MR_Word STATE_VARIABLE_ClausesInfo_34_34;
  MR_Word Var_36;
  MR_Word STATE_VARIABLE_ClausesInfo_38_38;
  MR_Word STATE_VARIABLE_PredInfo_41_41;
  MR_Word PredNameVar_44;
  MR_Word Context_45;
  MR_Word UnifyGoal_46;
  MR_Word PredModuleName_47;
  MR_String CalleeName_48;
  MR_Word CallGoal_49;
  MR_Word GoalInfo_50;
  MR_Word Body_51;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word Var_67;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_32, &STATE_VARIABLE_ClausesInfo_34_34);
  VarSet0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_34_34, (MR_Integer) 0))));
  RttiVarMaps_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_34_34, (MR_Integer) 3))));
  TVarNameMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_34_34, (MR_Integer) 4))));
  ArgVec_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_34_34, (MR_Integer) 5))));
  PredPieces_19 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 0, PredId_6);
  PredName_20 = parse_tree__error_util__error_pieces_to_string_1_f_0(PredPieces_19);
  HeadVars_21 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgVec_14);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_0_32, &ArgTypes_22);
  parse_tree__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_21, ArgTypes_22, &VarTypes1_23);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "PredName", &PredNameVar_44, VarSet0_9, &VarSet_25);
  Var_53 = parse_tree__builtin_lib_types__string_type_0_f_0();
  parse_tree__vartypes__add_var_type_4_p_0(PredNameVar_44, Var_53, VarTypes1_23, &VarTypes_26);
  hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_0_32, &Context_45);
  hlds__make_goal__make_string_const_construction_4_p_0(Context_45, PredNameVar_44, PredName_20, &UnifyGoal_46);
  PredModuleName_47 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_32);
  succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(PredModuleName_47);
  if (succeeded)
    CalleeName_48 = (MR_String) "sorry";
  else
    CalleeName_48 = (MR_String) "no_clauses";
  Var_55 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  {
    Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (PredNameVar_44));
    MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_58 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_5, (MR_Integer) 0, Var_55, CalleeName_48, (MR_Word) ((MR_Unsigned) 0U), Var_57, Var_58, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_45, &CallGoal_49);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_45, &GoalInfo_50);
  {
    Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (CallGoal_49));
    MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (UnifyGoal_46));
    MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_64, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_64, 2) = ((MR_Box) (Var_66));
  }
  {
    Body_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Body_51, 0) = ((MR_Box) (Var_64));
    MR_hl_field(MR_mktag(0), Body_51, 1) = ((MR_Box) (GoalInfo_50));
  }
  {
    StubClause_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), StubClause_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), StubClause_24, 1) = ((MR_Box) (Body_51));
    MR_hl_field(MR_mktag(0), StubClause_24, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), StubClause_24, 3) = ((MR_Box) (Context_45));
    MR_hl_field(MR_mktag(0), StubClause_24, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_pred__make_var_table_4_p_0(ModuleInfo_5, VarSet_25, VarTypes_26, &VarTable_27);
  {
    Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (StubClause_24));
    MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_clauses__set_clause_list_2_p_0(Var_36, &ClausesRep_28);
  ItemNumbers_29 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  {
    STATE_VARIABLE_ClausesInfo_38_38 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_38_38, 0) = ((MR_Box) (VarSet_25));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_38_38, 1) = ((MR_Box) (VarTypes_26));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_38_38, 2) = ((MR_Box) (VarTable_27));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_38_38, 3) = ((MR_Box) (RttiVarMaps_12));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_38_38, 4) = ((MR_Box) (TVarNameMap_13));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_38_38, 5) = ((MR_Box) (ArgVec_14));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_38_38, 6) = ((MR_Box) (ClausesRep_28));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_38_38, 7) = ((MR_Box) (ItemNumbers_29));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_38_38, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_38_38, STATE_VARIABLE_PredInfo_0_32, &STATE_VARIABLE_PredInfo_41_41);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_41_41, &Markers0_30);
  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, Markers0_30, &Markers_31);
  hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_31, STATE_VARIABLE_PredInfo_41_41, STATE_VARIABLE_PredInfo_33);
}

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_22;

  check_hlds__typecheck__check_existq_clause_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word STATE_VARIABLE_PredInfo_0_74,
  MR_Word * STATE_VARIABLE_PredInfo_75,
  MR_Word STATE_VARIABLE_Specs_0_76,
  MR_Word * STATE_VARIABLE_Specs_77,
  MR_Word * NextIteration_12)
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
  MR_Word PredMarkers0_34;
  MR_Word Clauses0_35;
  MR_Word Clauses_36;
  MR_Word MaybeRHSLambda_37;
  MR_Word Context_39;
  MR_Word TypeVarSet_40;
  MR_Word InferredVarTypes_41;
  MR_Word InferredTypeConstraints0_42;
  MR_Word ConstraintProofMap_43;
  MR_Word ConstraintMap_44;
  MR_Word TVarRenaming_45;
  MR_Word ExistTypeRenaming_46;
  MR_Word VarsTypes_47;
  MR_Word VarTable0_48;
  MR_Word VarTable_49;
  MR_Word ExplicitVarTypes1_50;
  MR_Word ExplicitVarTypes_53;
  MR_Word ClausesRep_54;
  MR_Word ArgTypes_55;
  MR_Word ArgTypeVars_56;
  MR_Word InferredTypeConstraints_57;
  MR_Word UnprovenBodyConstraints_58;
  MR_Word STATE_VARIABLE_ClausesInfo_78_78;
  MR_Word STATE_VARIABLE_ExternalTypeParams_83_83;
  MR_Word STATE_VARIABLE_TypeAssignSet_94_94;
  MR_Word STATE_VARIABLE_Info_95_95;
  MR_Word STATE_VARIABLE_TypeAssignSet_96_96;
  MR_Word STATE_VARIABLE_Info_97_97;
  MR_Word STATE_VARIABLE_PredInfo_99_99;
  MR_Word STATE_VARIABLE_TypeAssignSet_100_100;
  MR_Word STATE_VARIABLE_Info_101_101;
  MR_Word STATE_VARIABLE_Info_103_103;
  MR_Word STATE_VARIABLE_Info_104_104;
  MR_Word STATE_VARIABLE_ExternalTypeParams_105_105;
  MR_Word STATE_VARIABLE_ClausesInfo_106_106;
  MR_Word STATE_VARIABLE_ClausesInfo_107_107;
  MR_Word STATE_VARIABLE_ClausesInfo_108_108;
  MR_Word STATE_VARIABLE_PredInfo_109_109;
  MR_Word STATE_VARIABLE_PredInfo_110_110;
  MR_Word STATE_VARIABLE_PredInfo_111_111;
  MR_Word STATE_VARIABLE_PredInfo_112_112;
  MR_Word STATE_VARIABLE_PredInfo_113_113;
  MR_Word STATE_VARIABLE_Info_120_120;
  MR_Word _ArgTypeVarSet_24;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_74, &STATE_VARIABLE_ClausesInfo_78_78);
  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(STATE_VARIABLE_ClausesInfo_78_78, &ClausesRep0_17, &ItemNumbers_18);
  hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(STATE_VARIABLE_ClausesInfo_78_78, &HeadVars_19);
  hlds__hlds_clauses__clauses_info_get_varset_2_p_0(STATE_VARIABLE_ClausesInfo_78_78, &ClauseVarSet_20);
  hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(STATE_VARIABLE_ClausesInfo_78_78, &ExplicitVarTypes0_21);
  hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_0_74, &PredStatus_22);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_74, &TypeVarSet0_23);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_0_74, &_ArgTypeVarSet_24, &ExistQVars0_25, &ArgTypes0_26);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_74, &Markers0_27);
  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_27, (MR_Integer) 2);
  if (succeeded)
  {
    Inferring_28 = (MR_Integer) 1;
    hlds__passes_aux__write_pred_progress_message_5_p_0(ModuleInfo_8, (MR_String) "Inferring type of", PredId_9);
    STATE_VARIABLE_ExternalTypeParams_83_83 = (MR_Word) ((MR_Unsigned) 0U);
    PredConstraints_30 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[8]);
  }
  else
  {
    MR_Word UnivTVars_31;
    MR_Word STATE_VARIABLE_ExternalTypeParams_89_89;
    MR_Word Var_90;
    MR_Word STATE_VARIABLE_ExternalTypeParams_91_91;
    MR_Word STATE_VARIABLE_ExternalTypeParams_92_92;

    Inferring_28 = (MR_Integer) 0;
    hlds__passes_aux__write_pred_progress_message_5_p_0(ModuleInfo_8, (MR_String) "Type-checking", PredId_9);
    parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypes0_26, &STATE_VARIABLE_ExternalTypeParams_89_89);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(STATE_VARIABLE_PredInfo_0_74, &PredConstraints_30);
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredConstraints_30, (MR_Integer) 0))));
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Var_90, &UnivTVars_31);
    STATE_VARIABLE_ExternalTypeParams_91_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), UnivTVars_31, STATE_VARIABLE_ExternalTypeParams_89_89);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), STATE_VARIABLE_ExternalTypeParams_91_91, &STATE_VARIABLE_ExternalTypeParams_92_92);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), STATE_VARIABLE_ExternalTypeParams_92_92, ExistQVars0_25, &STATE_VARIABLE_ExternalTypeParams_83_83);
  }
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_8, &ClassTable_32);
  hlds__hlds_class__make_head_hlds_constraints_4_p_0(ClassTable_32, TypeVarSet0_23, PredConstraints_30, &Constraints_33);
  check_hlds__type_assign__type_assign_set_init_5_p_0(TypeVarSet0_23, ExplicitVarTypes0_21, STATE_VARIABLE_ExternalTypeParams_83_83, Constraints_33, &STATE_VARIABLE_TypeAssignSet_94_94);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_74, &PredMarkers0_34);
  check_hlds__typecheck_info__typecheck_info_init_8_p_0(ModuleInfo_8, PredId_9, STATE_VARIABLE_PredInfo_0_74, ClauseVarSet_20, PredStatus_22, PredMarkers0_34, STATE_VARIABLE_Specs_0_76, &STATE_VARIABLE_Info_95_95);
  hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_17, &Clauses0_35);
  check_hlds__typecheck__typecheck_clause_list_8_p_0(HeadVars_19, ArgTypes0_26, Clauses0_35, &Clauses_36, STATE_VARIABLE_TypeAssignSet_94_94, &STATE_VARIABLE_TypeAssignSet_96_96, STATE_VARIABLE_Info_95_95, &STATE_VARIABLE_Info_97_97);
  check_hlds__typecheck_info__typecheck_info_get_rhs_lambda_2_p_0(STATE_VARIABLE_Info_97_97, &MaybeRHSLambda_37);
  switch (MaybeRHSLambda_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_PredInfo_99_99 = STATE_VARIABLE_PredInfo_0_74;
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredMarkers_38;

        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 28, PredMarkers0_34, &PredMarkers_38);
        hlds__hlds_pred__pred_info_set_markers_3_p_0(PredMarkers_38, STATE_VARIABLE_PredInfo_0_74, &STATE_VARIABLE_PredInfo_99_99);
      }
      break;
  }
  hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_99_99, &Context_39);
  check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_39, STATE_VARIABLE_TypeAssignSet_96_96, &STATE_VARIABLE_TypeAssignSet_100_100, STATE_VARIABLE_Info_97_97, &STATE_VARIABLE_Info_101_101);
  check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(Context_39, (MR_Integer) 1, HeadVars_19, STATE_VARIABLE_TypeAssignSet_100_100, STATE_VARIABLE_Info_101_101, &STATE_VARIABLE_Info_103_103);
  check_hlds__typecheck__typecheck_check_for_unsatisfied_coercions_3_p_0(STATE_VARIABLE_TypeAssignSet_100_100, STATE_VARIABLE_Info_103_103, &STATE_VARIABLE_Info_104_104);
  check_hlds__type_assign__type_assign_set_get_final_info_12_p_0(STATE_VARIABLE_TypeAssignSet_100_100, STATE_VARIABLE_ExternalTypeParams_83_83, ExistQVars0_25, ExplicitVarTypes0_21, &TypeVarSet_40, &STATE_VARIABLE_ExternalTypeParams_105_105, &InferredVarTypes_41, &InferredTypeConstraints0_42, &ConstraintProofMap_43, &ConstraintMap_44, &TVarRenaming_45, &ExistTypeRenaming_46);
  parse_tree__vartypes__vartypes_to_sorted_assoc_list_2_p_0(InferredVarTypes_41, &VarsTypes_47);
  hlds__hlds_pred__vars_types_to_var_table_4_p_0(ModuleInfo_8, ClauseVarSet_20, VarsTypes_47, &VarTable0_48);
  parse_tree__var_table__var_table_optimize_2_p_0(VarTable0_48, &VarTable_49);
  hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_49, STATE_VARIABLE_ClausesInfo_78_78, &STATE_VARIABLE_ClausesInfo_106_106);
  if ((ExistQVars0_25 == (MR_Word) ((MR_Unsigned) 0U)))
    ExplicitVarTypes1_50 = ExplicitVarTypes0_21;
  else
    parse_tree__vartypes__apply_variable_renaming_to_vartypes_3_p_0(ExistTypeRenaming_46, ExplicitVarTypes0_21, &ExplicitVarTypes1_50);
  parse_tree__vartypes__apply_variable_renaming_to_vartypes_3_p_0(TVarRenaming_45, ExplicitVarTypes1_50, &ExplicitVarTypes_53);
  hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(ExplicitVarTypes_53, STATE_VARIABLE_ClausesInfo_106_106, &STATE_VARIABLE_ClausesInfo_107_107);
  hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_36, &ClausesRep_54);
  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_54, ItemNumbers_18, STATE_VARIABLE_ClausesInfo_107_107, &STATE_VARIABLE_ClausesInfo_108_108);
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_108_108, STATE_VARIABLE_PredInfo_99_99, &STATE_VARIABLE_PredInfo_109_109);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_40, STATE_VARIABLE_PredInfo_109_109, &STATE_VARIABLE_PredInfo_110_110);
  hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(ConstraintProofMap_43, STATE_VARIABLE_PredInfo_110_110, &STATE_VARIABLE_PredInfo_111_111);
  hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(ConstraintMap_44, STATE_VARIABLE_PredInfo_111_111, &STATE_VARIABLE_PredInfo_112_112);
  parse_tree__vartypes__lookup_var_types_3_p_0(InferredVarTypes_41, HeadVars_19, &ArgTypes_55);
  parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypes_55, &ArgTypeVars_56);
  check_hlds__typecheck__restrict_to_head_vars_4_p_0(InferredTypeConstraints0_42, ArgTypeVars_56, &InferredTypeConstraints_57, &UnprovenBodyConstraints_58);
  hlds__hlds_pred__pred_info_set_unproven_body_constraints_3_p_0(UnprovenBodyConstraints_58, STATE_VARIABLE_PredInfo_112_112, &STATE_VARIABLE_PredInfo_113_113);
  switch (Inferring_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Origin0_64;
        MR_Word ExistQVars1_65;
        MR_Word ArgTypes1_66;
        MR_Word PredConstraints1_67;
        MR_Word Origin1_68;
        MR_Word RenamedOldArgTypes_71;
        MR_Word RenamedOldConstraints_72;
        MR_Word Origin_73;
        MR_Word STATE_VARIABLE_PredInfo_118_118;
        MR_Word STATE_VARIABLE_PredInfo_121_121;
        MR_Word STATE_VARIABLE_PredInfo_122_122;
        MR_Word ExistQVars_125;

        hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(STATE_VARIABLE_ExternalTypeParams_105_105, STATE_VARIABLE_PredInfo_113_113, &STATE_VARIABLE_PredInfo_118_118);
        hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_118_118, &Origin0_64);
        if ((ExistQVars0_25 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ExistQVars1_65 = (MR_Word) ((MR_Unsigned) 0U);
          ArgTypes1_66 = ArgTypes0_26;
          PredConstraints1_67 = PredConstraints_30;
          Origin1_68 = Origin0_64;
          STATE_VARIABLE_Info_120_120 = STATE_VARIABLE_Info_104_104;
        }
        else
        {
          MR_Word Var_119;
          MR_Box conv1_STATE_VARIABLE_Info_120_120;

          {
            Var_119 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_9[1]));
            MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (check_hlds__typecheck__do_typecheck_pred_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (TypeVarSet0_23));
            MR_hl_field(MR_mktag(0), Var_119, 4) = ((MR_Box) (ExistQVars0_25));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_119, Clauses_36, ((MR_Box) (STATE_VARIABLE_Info_104_104)), &conv1_STATE_VARIABLE_Info_120_120);
          STATE_VARIABLE_Info_120_120 = ((MR_Word) (conv1_STATE_VARIABLE_Info_120_120));
          mercury__term_subst__apply_renaming_in_vars_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), ExistTypeRenaming_46, ExistQVars0_25, &ExistQVars1_65);
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(ExistTypeRenaming_46, ArgTypes0_26, &ArgTypes1_66);
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(ExistTypeRenaming_46, PredConstraints_30, &PredConstraints1_67);
          check_hlds__typecheck__rename_instance_method_constraints_3_p_0(ExistTypeRenaming_46, Origin0_64, &Origin1_68);
        }
        mercury__term_subst__apply_renaming_in_vars_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarRenaming_45, ExistQVars1_65, &ExistQVars_125);
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_45, ArgTypes1_66, &RenamedOldArgTypes_71);
        parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(TVarRenaming_45, PredConstraints1_67, &RenamedOldConstraints_72);
        check_hlds__typecheck__rename_instance_method_constraints_3_p_0(TVarRenaming_45, Origin1_68, &Origin_73);
        hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_40, ExistQVars_125, RenamedOldArgTypes_71, STATE_VARIABLE_PredInfo_118_118, &STATE_VARIABLE_PredInfo_121_121);
        hlds__hlds_pred__pred_info_set_class_context_3_p_0(RenamedOldConstraints_72, STATE_VARIABLE_PredInfo_121_121, &STATE_VARIABLE_PredInfo_122_122);
        hlds__hlds_pred__pred_info_set_origin_3_p_0(Origin_73, STATE_VARIABLE_PredInfo_122_122, STATE_VARIABLE_PredInfo_75);
        *NextIteration_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExistQVars_59;
        MR_Word OldTypeConstraints_60;
        MR_Word STATE_VARIABLE_ExternalTypeParams_114_114;
        MR_Word STATE_VARIABLE_PredInfo_115_115;
        MR_Word STATE_VARIABLE_PredInfo_116_116;

        check_hlds__typecheck__infer_existential_types_4_p_0(ArgTypeVars_56, &ExistQVars_59, STATE_VARIABLE_ExternalTypeParams_105_105, &STATE_VARIABLE_ExternalTypeParams_114_114);
        hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(STATE_VARIABLE_ExternalTypeParams_114_114, STATE_VARIABLE_PredInfo_113_113, &STATE_VARIABLE_PredInfo_115_115);
        hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_40, ExistQVars_59, ArgTypes_55, STATE_VARIABLE_PredInfo_115_115, &STATE_VARIABLE_PredInfo_116_116);
        hlds__hlds_pred__pred_info_get_class_context_2_p_0(STATE_VARIABLE_PredInfo_116_116, &OldTypeConstraints_60);
        hlds__hlds_pred__pred_info_set_class_context_3_p_0(InferredTypeConstraints_57, STATE_VARIABLE_PredInfo_116_116, STATE_VARIABLE_PredInfo_75);
        {
          MR_Word TVarKindMap_61;

          hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(*STATE_VARIABLE_PredInfo_75, &TVarKindMap_61);
          succeeded = check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(TVarKindMap_61, ExistQVars0_25, ArgTypes0_26, OldTypeConstraints_60, ExistQVars_59, ArgTypes_55, InferredTypeConstraints_57);
        }
        if (!(succeeded))
        {
          MR_Word GoalType_62;

          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(*STATE_VARIABLE_PredInfo_75, &GoalType_62);
          succeeded = ((MR_tag((MR_Word) GoalType_62)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
          *NextIteration_12 = (MR_Integer) 0;
        else
          *NextIteration_12 = (MR_Integer) 1;
        STATE_VARIABLE_Info_120_120 = STATE_VARIABLE_Info_104_104;
      }
      break;
  }
  check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(STATE_VARIABLE_Info_120_120, STATE_VARIABLE_Specs_77);
}

static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_unsatisfied_coercions_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_19;

  check_hlds__typecheck__report_invalid_coercion_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_19));
}

static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_unsatisfied_coercions_3_p_0(
  MR_Word TypeAssignSet_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  if ((TypeAssignSet_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_unsatisfied_coercions\'/3", (MR_String) "no type-assignment");
      return;
    }
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAssignSet_4, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAssignSet_4, (MR_Integer) 0))));

    if ((Var_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Coercions_7;

      check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(Var_27, &Coercions_7);
      if ((Coercions_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
      else
      {
        MR_Word Var_18;
        MR_Box conv1_STATE_VARIABLE_Info_14;

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_12[0]));
          MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_check_for_unsatisfied_coercions_3_p_0_1));
          MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Var_27));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_18, Coercions_7, ((MR_Box) (STATE_VARIABLE_Info_0_13)), &conv1_STATE_VARIABLE_Info_14);
        *STATE_VARIABLE_Info_14 = ((MR_Word) (conv1_STATE_VARIABLE_Info_14));
      }
    }
    else
      *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
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
  MR_bool succeeded;

  if ((TypeAssignSet_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_ambiguity\'/6", (MR_String) "no type-assignment");
      return;
    }
  else
  {
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAssignSet_10, (MR_Integer) 1))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAssignSet_10, (MR_Integer) 0))));

    if ((Var_34 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
    else
    {
      MR_Word TypeAssign2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
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
              MR_Word Var_36;
              MR_Word Var_37;

              check_hlds__type_assign__type_assign_get_var_types_2_p_0(Var_35, &VarTypes1_17);
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign2_14, &VarTypes2_18);
              check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(Var_35, &TypeBindings1_19);
              check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign2_14, &TypeBindings2_20);
              parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes1_17, HeadVars_9, &HeadTypes1_21);
              parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes2_18, HeadVars_9, &HeadTypes2_22);
              parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings1_19, HeadTypes1_21, &FinalHeadTypes1_23);
              parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings2_20, HeadTypes2_22, &FinalHeadTypes2_24);
              succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(FinalHeadTypes1_23, FinalHeadTypes2_24, &Var_36);
              if (succeeded)
                succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(FinalHeadTypes2_24, FinalHeadTypes1_23, &Var_37);
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
        Spec_27 = check_hlds__typecheck_errors__report_ambiguity_error_5_f_0(ClauseContext_25, Context_7, OverloadedSymbolMap_26, Var_35, TypeAssign2_14);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_27, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      }
      else
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
    }
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
    MR_Word * AddrClauses_31;

    check_hlds__typecheck__typecheck_clause_8_p_0(HeadVars_1, ArgTypes_2, Clause0_19, &Clause_21, STATE_VARIABLE_TypeAssignSet_0_5, &STATE_VARIABLE_TypeAssignSet_29_29, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrClauses_31 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    check_hlds__typecheck__LCMC__pred__typecheck_clause_list__1_8_p_0(HeadVars_1, ArgTypes_2, Clauses0_20, AddrClauses_31, STATE_VARIABLE_TypeAssignSet_29_29, STATE_VARIABLE_TypeAssignSet_6, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_8);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__typecheck_clause_list__1_8_p_0(
  MR_Word HeadVars_1,
  MR_Word ArgTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_32,
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
      *AddrOfHeadVar__4_32 = (MR_Word) ((MR_Unsigned) 0U);
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
      MR_Word * AddrClauses_31;
      MR_Word HeadVar__4_33;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_32;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      check_hlds__typecheck__typecheck_clause_8_p_0(HeadVars_1, ArgTypes_2, Clause0_19, &Clause_21, STATE_VARIABLE_TypeAssignSet_0_5, &STATE_VARIABLE_TypeAssignSet_29_29, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_30_30);
      {
        HeadVar__4_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_33, 0) = ((MR_Box) (Clause_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_33, 1) = NULL;
      }
      AddrClauses_31 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_33, (MR_Integer) 1)));
      *AddrOfHeadVar__4_32 = HeadVar__4_33;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Clauses0_20;
      next_value_of_AddrOfHeadVar__4_32 = AddrClauses_31;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_5 = STATE_VARIABLE_TypeAssignSet_29_29;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_32 = next_value_of_AddrOfHeadVar__4_32;
      STATE_VARIABLE_TypeAssignSet_0_5 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck__type_assign_has_no_coerce_constraints_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_TypeAssign_11;

  check_hlds__typecheck__type_assign_prune_coerce_constraints_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_TypeAssign_11);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_TypeAssign_11));
}

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_1(
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
check_hlds__typecheck__typecheck_clause_8_p_0(
  MR_Word HeadVars_9,
  MR_Word ArgTypes_10,
  MR_Word STATE_VARIABLE_Clause_0_24,
  MR_Word * STATE_VARIABLE_Clause_25,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_26,
  MR_Word * STATE_VARIABLE_TypeAssignSet_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word Body0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 1))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 3))));
  MR_Word Body_20;
  MR_Word STATE_VARIABLE_TypeAssignSet_30_30;
  MR_Word STATE_VARIABLE_Info_31_31;
  MR_Word STATE_VARIABLE_TypeAssignSet_32_32;
  MR_Word STATE_VARIABLE_Info_38_38;
  MR_Word Specs_51;
  MR_Word MaybeArgVectorTypeErrors_52;
  MR_Word TypeTable_66;
  MR_Word TypeAssignSet1_67;
  MR_Word SatisfiedTypeAssignSet_68;
  MR_Word UnsatisfiedTypeAssignSet_69;
  MR_Word Var_70;
  MR_Word ArgVectorTypeErrors_53;
  MR_Word Var_62;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;

  check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_28, Context_17, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, HeadVars_9, ArgTypes_10, STATE_VARIABLE_TypeAssignSet_0_26, &STATE_VARIABLE_TypeAssignSet_30_30, (MR_Word) ((MR_Unsigned) 0U), &Specs_51, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_2[1])), &MaybeArgVectorTypeErrors_52);
  succeeded = (MaybeArgVectorTypeErrors_52 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ArgVectorTypeErrors_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgVectorTypeErrors_52, (MR_Integer) 0))));
    succeeded = (ArgVectorTypeErrors_53 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_53, (MR_Integer) 1))));
      succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
  }
  if (succeeded)
  {
    MR_Word ClauseContext_57;
    MR_Word AllArgsSpec_58;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_28, &ClauseContext_57);
    AllArgsSpec_58 = check_hlds__typecheck_errors__report_arg_vector_type_errors_6_f_0(STATE_VARIABLE_Info_0_28, ClauseContext_57, Context_17, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_TypeAssignSet_30_30, ArgVectorTypeErrors_53);
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_58, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_31_31);
  }
  else
  {
    MR_Box conv1_STATE_VARIABLE_Info_31_31;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[6]), Specs_51, ((MR_Box) (STATE_VARIABLE_Info_0_28)), &conv1_STATE_VARIABLE_Info_31_31);
    STATE_VARIABLE_Info_31_31 = ((MR_Word) (conv1_STATE_VARIABLE_Info_31_31));
  }
  check_hlds__typecheck__typecheck_goal_7_p_0(Body0_15, &Body_20, Context_17, STATE_VARIABLE_TypeAssignSet_30_30, &STATE_VARIABLE_TypeAssignSet_32_32, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_38_38);
  check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(STATE_VARIABLE_Info_38_38, &TypeTable_66);
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[1]));
    MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_clause_8_p_0_2));
    MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (TypeTable_66));
  }
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), Var_70, STATE_VARIABLE_TypeAssignSet_32_32, &TypeAssignSet1_67);
  mercury__list__filter_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[7]), TypeAssignSet1_67, &SatisfiedTypeAssignSet_68, &UnsatisfiedTypeAssignSet_69);
  if ((SatisfiedTypeAssignSet_68 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_TypeAssignSet_27 = UnsatisfiedTypeAssignSet_69;
  else
    *STATE_VARIABLE_TypeAssignSet_27 = SatisfiedTypeAssignSet_68;
  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 0))));
  Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 2))));
  Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 3))));
  Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Clause_25 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Body_20));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_48));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_49));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_50));
  }
  if ((*STATE_VARIABLE_TypeAssignSet_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_ambiguity\'/6", (MR_String) "no type-assignment");
      return;
    }
  else
  {
    MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *STATE_VARIABLE_TypeAssignSet_27, (MR_Integer) 1))));
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *STATE_VARIABLE_TypeAssignSet_27, (MR_Integer) 0))));

    if ((Var_93 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_38_38;
    else
    {
      MR_Word TypeAssign2_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_93, (MR_Integer) 0))));
      MR_Word ErrorsSoFar_77;
      MR_Word VarTypes1_78;
      MR_Word VarTypes2_79;
      MR_Word TypeBindings1_80;
      MR_Word TypeBindings2_81;
      MR_Word HeadTypes1_82;
      MR_Word HeadTypes2_83;
      MR_Word FinalHeadTypes1_84;
      MR_Word FinalHeadTypes2_85;
      MR_Word Var_95;
      MR_Word Var_96;

      check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(STATE_VARIABLE_Info_38_38, &ErrorsSoFar_77);
      succeeded = (ErrorsSoFar_77 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        check_hlds__type_assign__type_assign_get_var_types_2_p_0(Var_94, &VarTypes1_78);
        check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign2_75, &VarTypes2_79);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(Var_94, &TypeBindings1_80);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign2_75, &TypeBindings2_81);
        parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes1_78, HeadVars_9, &HeadTypes1_82);
        parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes2_79, HeadVars_9, &HeadTypes2_83);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings1_80, HeadTypes1_82, &FinalHeadTypes1_84);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings2_81, HeadTypes2_83, &FinalHeadTypes2_85);
        succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(FinalHeadTypes1_84, FinalHeadTypes2_85, &Var_95);
        if (succeeded)
          succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(FinalHeadTypes2_85, FinalHeadTypes1_84, &Var_96);
      }
      if (succeeded)
      {
        MR_Word ClauseContext_86;
        MR_Word OverloadedSymbolMap_87;
        MR_Word Spec_88;

        check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_38_38, &ClauseContext_86);
        check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(STATE_VARIABLE_Info_38_38, &OverloadedSymbolMap_87);
        Spec_88 = check_hlds__typecheck_errors__report_ambiguity_error_5_f_0(ClauseContext_86, Context_17, OverloadedSymbolMap_87, Var_94, TypeAssign2_75);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_88, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_29);
      }
      else
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_38_38;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__typecheck_unification__1_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word GoalId_13,
  MR_Word LHSVar_14,
  MR_Word RHS0_15,
  MR_Word * AddrOfRHS_62,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_33,
  MR_Word * STATE_VARIABLE_TypeAssignSet_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RHS0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RHSVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS0_15, (MR_Integer) 0))));
        MR_Word TypeAssignSet1_55;

        check_hlds__typecheck__type_assigns_unify_var_var_5_p_0(STATE_VARIABLE_TypeAssignSet_0_33, LHSVar_14, RHSVar_19, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_55);
        succeeded = (TypeAssignSet1_55 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_TypeAssignSet_0_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word ClauseContext_58;
          MR_Word Spec_59;

          *STATE_VARIABLE_TypeAssignSet_34 = STATE_VARIABLE_TypeAssignSet_0_33;
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_35, &ClauseContext_58);
          Spec_59 = check_hlds__typecheck_errors__report_error_unify_var_var_7_f_0(STATE_VARIABLE_Info_0_35, ClauseContext_58, UnifyContext_11, Context_12, LHSVar_14, RHSVar_19, STATE_VARIABLE_TypeAssignSet_0_33);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_59, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
        }
        else
        {
          *STATE_VARIABLE_TypeAssignSet_34 = TypeAssignSet1_55;
          *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
        }
        *AddrOfRHS_62 = RHS0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_15, (MR_Integer) 0))));
        MR_Word ArgVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_15, (MR_Integer) 2))));
        MR_Word STATE_VARIABLE_TypeAssignSet_39_39;
        MR_Word STATE_VARIABLE_Info_40_40;

        check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(UnifyContext_11, Context_12, LHSVar_14, Functor_20, ArgVars_22, GoalId_13, STATE_VARIABLE_TypeAssignSet_0_33, &STATE_VARIABLE_TypeAssignSet_39_39, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_40_40);
        check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_12, STATE_VARIABLE_TypeAssignSet_39_39, STATE_VARIABLE_TypeAssignSet_34, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_36);
        *AddrOfRHS_62 = RHS0_15;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Purity_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
        MR_Word PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word NonLocals_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 2))));
        MR_Word VarsModes_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 3))));
        MR_Word Det_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word Goal0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 5))));
        MR_Word Vars_31;
        MR_Word STATE_VARIABLE_Info_44_44;
        MR_Word STATE_VARIABLE_TypeAssignSet_45_45;
        MR_Word STATE_VARIABLE_Info_46_46;
        MR_Word TypeAssignSet1_49;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 0)));
        MR_Word * AddrGoal_61;
        MR_Word RHS_63;

        check_hlds__typecheck_info__typecheck_info_set_rhs_lambda_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_44_44);
        mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), VarsModes_28, &Vars_31);
        check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(STATE_VARIABLE_TypeAssignSet_0_33, Purity_23, PredOrFunc_25, LHSVar_14, Vars_31, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_49);
        succeeded = (TypeAssignSet1_49 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_TypeAssignSet_0_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word ClauseContext_52;
          MR_Word Spec_53;

          STATE_VARIABLE_TypeAssignSet_45_45 = STATE_VARIABLE_TypeAssignSet_0_33;
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_44_44, &ClauseContext_52);
          Spec_53 = check_hlds__typecheck_errors__report_error_lambda_var_9_f_0(STATE_VARIABLE_Info_44_44, ClauseContext_52, UnifyContext_11, Context_12, PredOrFunc_25, LHSVar_14, Vars_31, STATE_VARIABLE_TypeAssignSet_0_33);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_53, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_46_46);
        }
        else
        {
          STATE_VARIABLE_TypeAssignSet_45_45 = TypeAssignSet1_49;
          STATE_VARIABLE_Info_46_46 = STATE_VARIABLE_Info_44_44;
        }
        {
          RHS_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), RHS_63, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(2), RHS_63, 1) = NULL;
          MR_hl_field(MR_mktag(2), RHS_63, 2) = ((MR_Box) (NonLocals_27));
          MR_hl_field(MR_mktag(2), RHS_63, 3) = ((MR_Box) (VarsModes_28));
          MR_hl_field(MR_mktag(2), RHS_63, 4) = (MR_Box) ((MR_Unsigned) (Det_29));
          MR_hl_field(MR_mktag(2), RHS_63, 5) = NULL;
        }
        AddrGoal_61 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), RHS_63, (MR_Integer) 5)));
        *AddrOfRHS_62 = RHS_63;
        check_hlds__typecheck__LCMC__pred__typecheck_goal__1_7_p_0(Goal0_30, AddrGoal_61, Context_12, STATE_VARIABLE_TypeAssignSet_45_45, STATE_VARIABLE_TypeAssignSet_34, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_36);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__typecheck_goal_list__1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_29,
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
      *AddrOfHeadVar__2_29 = (MR_Word) ((MR_Unsigned) 0U);
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
      MR_Word * AddrGoals_28;
      MR_Word HeadVar__2_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_29;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

      check_hlds__typecheck__typecheck_goal_7_p_0(Goal0_15, &Goal_17, Context_3, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_26_26, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
      {
        HeadVar__2_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_30, 0) = ((MR_Box) (Goal_17));
        MR_hl_field(MR_mktag(1), HeadVar__2_30, 1) = NULL;
      }
      AddrGoals_28 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_30, (MR_Integer) 1)));
      *AddrOfHeadVar__2_29 = HeadVar__2_30;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_16;
      next_value_of_AddrOfHeadVar__2_29 = AddrGoals_28;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = STATE_VARIABLE_TypeAssignSet_26_26;
      next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_29 = next_value_of_AddrOfHeadVar__2_29;
      STATE_VARIABLE_TypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__typecheck_goal__1_7_p_0(
  MR_Word Goal0_8,
  MR_Word * AddrOfGoal_37,
  MR_Word EnclosingContext_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * STATE_VARIABLE_TypeAssignSet_29,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
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
  *AddrOfGoal_37 = Goal_9;
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
    MR_Word * AddrGoals_28;

    check_hlds__typecheck__typecheck_goal_7_p_0(Goal0_15, &Goal_17, Context_3, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_26_26, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrGoals_28 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
    check_hlds__typecheck__LCMC__pred__typecheck_goal_list__1_7_p_0(Goals0_16, AddrGoals_28, Context_3, STATE_VARIABLE_TypeAssignSet_26_26, STATE_VARIABLE_TypeAssignSet_5, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_7);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1497__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
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
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_TypeAssignSet_12;
  MR_Word conv1_STATE_VARIABLE_Info_14;

  check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TypeAssignSet_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TypeAssignSet_12));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Info_14));
}

static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_1(
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
check_hlds__typecheck__typecheck_goal_expr_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_113,
  MR_Word * STATE_VARIABLE_TypeAssignSet_114,
  MR_Word STATE_VARIABLE_Info_0_115,
  MR_Word * STATE_VARIABLE_Info_116)
{
  MR_bool succeeded;
  MR_Word Context_15;
  MR_Word ClauseContext_13;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_115, &ClauseContext_13);
  Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_27 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word SubGoal_28;

        check_hlds__typecheck__typecheck_goal_7_p_0(SubGoal0_27, &SubGoal_28, Context_15, STATE_VARIABLE_TypeAssignSet_0_113, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_0_115, STATE_VARIABLE_Info_116);
        *GoalExpr_9 = (MR_Word) ((MR_Word) (SubGoal_28));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0))));
        MR_Word RHS0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 1))));
        MR_Word UnifyMode_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 2))));
        MR_Word Unification_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3))));
        MR_Word UnifyContext_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 4))));
        MR_Word GoalId_252;
        MR_Word * AddrRHS_297;

        GoalId_252 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHS_73));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_75));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_76));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_77));
        }
        AddrRHS_297 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *GoalExpr_9, (MR_Integer) 1)));
        check_hlds__typecheck__LCMC__pred__typecheck_unification__1_10_p_0(UnifyContext_77, Context_15, GoalId_252, LHS_73, RHS0_74, AddrRHS_297, STATE_VARIABLE_TypeAssignSet_0_113, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_0_115, STATE_VARIABLE_Info_116);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer ProcId_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 1))));
        MR_Word ArgVars_52 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 2))));
        MR_Word BI_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word UC_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 4))));
        MR_Word SymName_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 5))));
        MR_Word GoalId_56;
        MR_Word PredId_57;

        GoalId_56 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
        check_hlds__typecheck__typecheck_call_pred_name_9_p_0(SymName_55, Context_15, GoalId_56, ArgVars_52, &PredId_57, STATE_VARIABLE_TypeAssignSet_0_113, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_0_115, STATE_VARIABLE_Info_116);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_9 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PredId_57));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ProcId_51));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ArgVars_52));
          MR_hl_field(MR_mktag(2), base, 3) = (MR_Box) ((MR_Unsigned) (BI_53));
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (UC_54));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (SymName_55));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
            MR_Word ArgVars_251 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) GenericCall_58)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word PredVar_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCall_58, (MR_Integer) 0))));
                  MR_Word Purity_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GenericCall_58, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
                  MR_Word GenericCallId_66;

                  hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_58, &GenericCallId_66);
                  check_hlds__typecheck__typecheck_higher_order_call_9_p_0(GenericCallId_66, Context_15, PredVar_62, Purity_63, ArgVars_251, STATE_VARIABLE_TypeAssignSet_0_113, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_0_115, STATE_VARIABLE_Info_116);
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "unexpected class method call");
                  return;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String EventName_71 = ((MR_String) ((MR_hl_field(MR_mktag(2), GenericCall_58, (MR_Integer) 0))));

                  check_hlds__typecheck__typecheck_event_call_7_p_0(Context_15, EventName_71, ArgVars_251, STATE_VARIABLE_TypeAssignSet_0_113, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_0_115, STATE_VARIABLE_Info_116);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word CastType_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GenericCall_58, (MR_Integer) 0))) & (MR_Integer) 7);

                  switch (CastType_72) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      {
                        *STATE_VARIABLE_TypeAssignSet_114 = STATE_VARIABLE_TypeAssignSet_0_113;
                        *STATE_VARIABLE_Info_116 = STATE_VARIABLE_Info_0_115;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        *STATE_VARIABLE_TypeAssignSet_114 = STATE_VARIABLE_TypeAssignSet_0_113;
                        *STATE_VARIABLE_Info_116 = STATE_VARIABLE_Info_0_115;
                      }
                      break;
                    case (MR_Integer) 4:
                      check_hlds__typecheck__typecheck_coerce_6_p_0(Context_15, ArgVars_251, STATE_VARIABLE_TypeAssignSet_0_113, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_0_115, STATE_VARIABLE_Info_116);
                      break;
                    case (MR_Integer) 0:
                      {
                        *STATE_VARIABLE_TypeAssignSet_114 = STATE_VARIABLE_TypeAssignSet_0_113;
                        *STATE_VARIABLE_Info_116 = STATE_VARIABLE_Info_0_115;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_TypeAssignSet_114 = STATE_VARIABLE_TypeAssignSet_0_113;
                        *STATE_VARIABLE_Info_116 = STATE_VARIABLE_Info_0_115;
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
            MR_Word Args_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
            MR_Word ArgVectorKind_88;
            MR_Word STATE_VARIABLE_TypeAssignSet_191_191;
            MR_Word STATE_VARIABLE_Info_192_192;
            MR_Word ArgVars_253;
            MR_Word GoalId_254;
            MR_Word PredId_255 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));

            {
              ArgVectorKind_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ArgVectorKind_88, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), ArgVectorKind_88, 1) = ((MR_Box) (PredId_255));
            }
            ArgVars_253 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_scalar_common_5[5]), Args_84);
            GoalId_254 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
            check_hlds__typecheck__typecheck_call_pred_id_9_p_0(ArgVectorKind_88, Context_15, GoalId_254, PredId_255, ArgVars_253, STATE_VARIABLE_TypeAssignSet_0_113, &STATE_VARIABLE_TypeAssignSet_191_191, STATE_VARIABLE_Info_0_115, &STATE_VARIABLE_Info_192_192);
            check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_15, STATE_VARIABLE_TypeAssignSet_191_191, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_192_192, STATE_VARIABLE_Info_116);
            *GoalExpr_9 = GoalExpr0_8;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
            MR_Word * AddrSubGoals_295;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_16));
              MR_hl_field(MR_mktag(3), base, 2) = NULL;
            }
            AddrSubGoals_295 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *GoalExpr_9, (MR_Integer) 2)));
            check_hlds__typecheck__LCMC__pred__typecheck_goal_list__1_7_p_0(SubGoals0_17, AddrSubGoals_295, Context_15, STATE_VARIABLE_TypeAssignSet_0_113, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_0_115, STATE_VARIABLE_Info_116);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals0_243 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
            MR_Word * AddrSubGoals_296;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = NULL;
            }
            AddrSubGoals_296 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *GoalExpr_9, (MR_Integer) 1)));
            check_hlds__typecheck__LCMC__pred__typecheck_goal_list__1_7_p_0(SubGoals0_243, AddrSubGoals_296, Context_15, STATE_VARIABLE_TypeAssignSet_0_113, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_0_115, STATE_VARIABLE_Info_116);
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "switch");
            return;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_TypeAssignSet_153_153;
            MR_Word STATE_VARIABLE_Info_154_154;
            MR_Word SubGoal0_249 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
            MR_Word SubGoal_250;

            check_hlds__typecheck__typecheck_goal_7_p_0(SubGoal0_249, &SubGoal_250, Context_15, STATE_VARIABLE_TypeAssignSet_0_113, &STATE_VARIABLE_TypeAssignSet_153_153, STATE_VARIABLE_Info_0_115, &STATE_VARIABLE_Info_154_154);
            switch (MR_tag((MR_Word) Reason_29)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Vars_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_29, (MR_Integer) 0))));

                  check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 4U), Context_15, Vars_246, STATE_VARIABLE_TypeAssignSet_153_153, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_154_154, STATE_VARIABLE_Info_116);
                }
                break;
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_TypeAssignSet_114 = STATE_VARIABLE_TypeAssignSet_153_153;
                  *STATE_VARIABLE_Info_116 = STATE_VARIABLE_Info_154_154;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Vars_284 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_29, (MR_Integer) 0))));

                  check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 8U), Context_15, Vars_284, STATE_VARIABLE_TypeAssignSet_153_153, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_154_154, STATE_VARIABLE_Info_116);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_TypeAssignSet_114 = STATE_VARIABLE_TypeAssignSet_153_153;
                      *STATE_VARIABLE_Info_116 = STATE_VARIABLE_Info_154_154;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *STATE_VARIABLE_TypeAssignSet_114 = STATE_VARIABLE_TypeAssignSet_153_153;
                      *STATE_VARIABLE_Info_116 = STATE_VARIABLE_Info_154_154;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 1))));
                      MR_Word Vars_286;

                      {
                        Vars_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Vars_286, 0) = ((MR_Box) (Var_32));
                        MR_hl_field(MR_mktag(1), Vars_286, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 12U), Context_15, Vars_286, STATE_VARIABLE_TypeAssignSet_153_153, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_154_154, STATE_VARIABLE_Info_116);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 1))));
                      MR_Word Vars_288;

                      {
                        Vars_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Vars_288, 0) = ((MR_Box) (Var_245));
                        MR_hl_field(MR_mktag(1), Vars_288, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 16U), Context_15, Vars_288, STATE_VARIABLE_TypeAssignSet_153_153, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_154_154, STATE_VARIABLE_Info_116);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      *STATE_VARIABLE_TypeAssignSet_114 = STATE_VARIABLE_TypeAssignSet_153_153;
                      *STATE_VARIABLE_Info_116 = STATE_VARIABLE_Info_154_154;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      *STATE_VARIABLE_TypeAssignSet_114 = STATE_VARIABLE_TypeAssignSet_153_153;
                      *STATE_VARIABLE_Info_116 = STATE_VARIABLE_Info_154_154;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      *STATE_VARIABLE_TypeAssignSet_114 = STATE_VARIABLE_TypeAssignSet_153_153;
                      *STATE_VARIABLE_Info_116 = STATE_VARIABLE_Info_154_154;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      *STATE_VARIABLE_TypeAssignSet_114 = STATE_VARIABLE_TypeAssignSet_153_153;
                      *STATE_VARIABLE_Info_116 = STATE_VARIABLE_Info_154_154;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word LCVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 1))));
                      MR_Word LCSVar_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 2))));
                      MR_Word Var_157;
                      MR_Word Vars_282;

                      {
                        Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (LCSVar_35));
                        MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Vars_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Vars_282, 0) = ((MR_Box) (LCVar_34));
                        MR_hl_field(MR_mktag(1), Vars_282, 1) = ((MR_Box) (Var_157));
                      }
                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 20U), Context_15, Vars_282, STATE_VARIABLE_TypeAssignSet_153_153, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_154_154, STATE_VARIABLE_Info_116);
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
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_29));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_250));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Cond0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Then0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Else0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
            MR_Word Cond_24;
            MR_Word Then_25;
            MR_Word Else_26;
            MR_Word STATE_VARIABLE_TypeAssignSet_130_130;
            MR_Word STATE_VARIABLE_Info_131_131;
            MR_Word STATE_VARIABLE_TypeAssignSet_135_135;
            MR_Word STATE_VARIABLE_Info_136_136;
            MR_Word STATE_VARIABLE_TypeAssignSet_140_140;
            MR_Word STATE_VARIABLE_Info_141_141;

            check_hlds__typecheck__typecheck_goal_7_p_0(Cond0_21, &Cond_24, Context_15, STATE_VARIABLE_TypeAssignSet_0_113, &STATE_VARIABLE_TypeAssignSet_130_130, STATE_VARIABLE_Info_0_115, &STATE_VARIABLE_Info_131_131);
            check_hlds__typecheck__typecheck_goal_7_p_0(Then0_22, &Then_25, Context_15, STATE_VARIABLE_TypeAssignSet_130_130, &STATE_VARIABLE_TypeAssignSet_135_135, STATE_VARIABLE_Info_131_131, &STATE_VARIABLE_Info_136_136);
            check_hlds__typecheck__typecheck_goal_7_p_0(Else0_23, &Else_26, Context_15, STATE_VARIABLE_TypeAssignSet_135_135, &STATE_VARIABLE_TypeAssignSet_140_140, STATE_VARIABLE_Info_136_136, &STATE_VARIABLE_Info_141_141);
            check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 0U), Context_15, Vars_20, STATE_VARIABLE_TypeAssignSet_140_140, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_141_141, STATE_VARIABLE_Info_116);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_24));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_25));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_26));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
            MR_Word ShortHand_91;

            switch (MR_tag((MR_Word) ShortHand0_89)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LHS0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_89, (MR_Integer) 0))));
                  MR_Word STATE_VARIABLE_TypeAssignSet_198_198;
                  MR_Word STATE_VARIABLE_Info_199_199;
                  MR_Word LHS_256;
                  MR_Word RHS0_257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_89, (MR_Integer) 1))));
                  MR_Word RHS_258;

                  check_hlds__typecheck__typecheck_goal_7_p_0(LHS0_90, &LHS_256, Context_15, STATE_VARIABLE_TypeAssignSet_0_113, &STATE_VARIABLE_TypeAssignSet_198_198, STATE_VARIABLE_Info_0_115, &STATE_VARIABLE_Info_199_199);
                  check_hlds__typecheck__typecheck_goal_7_p_0(RHS0_257, &RHS_258, Context_15, STATE_VARIABLE_TypeAssignSet_198_198, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_199_199, STATE_VARIABLE_Info_116);
                  {
                    ShortHand_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ShortHand_91, 0) = ((MR_Box) (LHS_256));
                    MR_hl_field(MR_mktag(0), ShortHand_91, 1) = ((MR_Box) (RHS_258));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_89, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_89, (MR_Integer) 1))));
                  MR_Word Inner_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_89, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_89, (MR_Integer) 3))));
                  MR_Word MainGoal0_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_89, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_89, (MR_Integer) 5))));
                  MR_Word MainGoal_101;
                  MR_Word OrElseGoals_102;
                  MR_Word OuterDI_104;
                  MR_Word OuterUO_105;
                  MR_Word InnerVars_106;
                  MR_Word STATE_VARIABLE_TypeAssignSet_205_205;
                  MR_Word STATE_VARIABLE_Info_206_206;
                  MR_Word STATE_VARIABLE_TypeAssignSet_207_207;
                  MR_Word STATE_VARIABLE_Info_208_208;
                  MR_Word STATE_VARIABLE_TypeAssignSet_209_209;
                  MR_Word STATE_VARIABLE_Info_210_210;
                  MR_Word Var_211;
                  MR_Word STATE_VARIABLE_TypeAssignSet_212_212;
                  MR_Word STATE_VARIABLE_Info_213_213;
                  MR_Word Var_214;
                  MR_Word Var_217;
                  MR_Word Var_220;
                  MR_Word I_289;
                  MR_Word O_290;
                  MR_Word Interfaces_291 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_89, (MR_Integer) 6))));
                  MR_Word Var_293;
                  MR_Word Var_294;
                  MR_Box conv4_STATE_VARIABLE_TypeAssignSet_114;
                  MR_Box conv3_STATE_VARIABLE_Info_116;

                  if ((MaybeOutputVars_95 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    STATE_VARIABLE_TypeAssignSet_205_205 = STATE_VARIABLE_TypeAssignSet_0_113;
                    STATE_VARIABLE_Info_206_206 = STATE_VARIABLE_Info_0_115;
                  }
                  else
                  {
                    MR_Word OutputVars_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars_95, (MR_Integer) 0))));

                    check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 28U), Context_15, OutputVars_99, STATE_VARIABLE_TypeAssignSet_0_113, &STATE_VARIABLE_TypeAssignSet_205_205, STATE_VARIABLE_Info_0_115, &STATE_VARIABLE_Info_206_206);
                  }
                  check_hlds__typecheck__typecheck_goal_7_p_0(MainGoal0_96, &MainGoal_101, Context_15, STATE_VARIABLE_TypeAssignSet_205_205, &STATE_VARIABLE_TypeAssignSet_207_207, STATE_VARIABLE_Info_206_206, &STATE_VARIABLE_Info_208_208);
                  check_hlds__typecheck__typecheck_goal_list_7_p_0(OrElseGoals0_97, &OrElseGoals_102, Context_15, STATE_VARIABLE_TypeAssignSet_207_207, &STATE_VARIABLE_TypeAssignSet_209_209, STATE_VARIABLE_Info_208_208, &STATE_VARIABLE_Info_210_210);
                  OuterDI_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_93, (MR_Integer) 0))));
                  OuterUO_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_93, (MR_Integer) 1))));
                  {
                    Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (OuterUO_105));
                    MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (OuterDI_104));
                    MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (Var_214));
                  }
                  check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0((MR_Word) ((MR_Unsigned) 32U), Context_15, Var_211, STATE_VARIABLE_TypeAssignSet_209_209, &STATE_VARIABLE_TypeAssignSet_212_212, STATE_VARIABLE_Info_210_210, &STATE_VARIABLE_Info_213_213);
                  I_289 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_94, (MR_Integer) 0))));
                  O_290 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_94, (MR_Integer) 1))));
                  Var_294 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(Interfaces_291);
                  {
                    Var_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_293, 0) = ((MR_Box) (O_290));
                    MR_hl_field(MR_mktag(1), Var_293, 1) = ((MR_Box) (Var_294));
                  }
                  {
                    InnerVars_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), InnerVars_106, 0) = ((MR_Box) (I_289));
                    MR_hl_field(MR_mktag(1), InnerVars_106, 1) = ((MR_Box) (Var_293));
                  }
                  {
                    Var_217 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_217, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[0]));
                    MR_hl_field(MR_mktag(0), Var_217, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_217, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_217, 3) = ((MR_Box) (Context_15));
                  }
                  mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_217, InnerVars_106, ((MR_Box) (STATE_VARIABLE_TypeAssignSet_212_212)), &conv4_STATE_VARIABLE_TypeAssignSet_114, ((MR_Box) (STATE_VARIABLE_Info_213_213)), &conv3_STATE_VARIABLE_Info_116);
                  *STATE_VARIABLE_TypeAssignSet_114 = ((MR_Word) (conv4_STATE_VARIABLE_TypeAssignSet_114));
                  *STATE_VARIABLE_Info_116 = ((MR_Word) (conv3_STATE_VARIABLE_Info_116));
                  {
                    Var_220 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_220, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[4]));
                    MR_hl_field(MR_mktag(0), Var_220, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_220, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_220, 3) = ((MR_Box) (GoalType_92));
                    MR_hl_field(MR_mktag(0), Var_220, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mercury__require__expect_3_p_0(Var_220, (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "GoalType != unknown_atomic_goal_type");
                  {
                    ShortHand_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ShortHand_91, 0) = (MR_Box) ((MR_Unsigned) (GoalType_92));
                    MR_hl_field(MR_mktag(1), ShortHand_91, 1) = ((MR_Box) (Outer_93));
                    MR_hl_field(MR_mktag(1), ShortHand_91, 2) = ((MR_Box) (Inner_94));
                    MR_hl_field(MR_mktag(1), ShortHand_91, 3) = ((MR_Box) (MaybeOutputVars_95));
                    MR_hl_field(MR_mktag(1), ShortHand_91, 4) = ((MR_Box) (MainGoal_101));
                    MR_hl_field(MR_mktag(1), ShortHand_91, 5) = ((MR_Box) (OrElseGoals_102));
                    MR_hl_field(MR_mktag(1), ShortHand_91, 6) = ((MR_Box) (Interfaces_291));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_107 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_89, (MR_Integer) 0))));
                  MR_Word ResultVar_108 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_89, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_TypeAssignSet_227_227;
                  MR_Word STATE_VARIABLE_Info_228_228;
                  MR_Word SubGoal0_261 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_89, (MR_Integer) 2))));
                  MR_Word SubGoal_262;

                  check_hlds__typecheck__typecheck_goal_7_p_0(SubGoal0_261, &SubGoal_262, Context_15, STATE_VARIABLE_TypeAssignSet_0_113, &STATE_VARIABLE_TypeAssignSet_227_227, STATE_VARIABLE_Info_0_115, &STATE_VARIABLE_Info_228_228);
                  if ((MaybeIO_107 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    *STATE_VARIABLE_TypeAssignSet_114 = STATE_VARIABLE_TypeAssignSet_227_227;
                    *STATE_VARIABLE_Info_116 = STATE_VARIABLE_Info_228_228;
                  }
                  else
                  {
                    MR_Word InitialIO_109;
                    MR_Word FinalIO_110;
                    MR_Word Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_107, (MR_Integer) 0))));
                    MR_Word Var_230;
                    MR_Word STATE_VARIABLE_TypeAssignSet_231_231;
                    MR_Word STATE_VARIABLE_Info_232_232;
                    MR_Word Var_233;
                    MR_Word Var_237;
                    MR_Word STATE_VARIABLE_TypeAssignSet_238_238;
                    MR_Word STATE_VARIABLE_Info_239_239;
                    MR_Word Var_240;

                    InitialIO_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_229, (MR_Integer) 0))));
                    FinalIO_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_229, (MR_Integer) 1))));
                    {
                      Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_233, 0) = ((MR_Box) (FinalIO_110));
                      MR_hl_field(MR_mktag(1), Var_233, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_230, 0) = ((MR_Box) (InitialIO_109));
                      MR_hl_field(MR_mktag(1), Var_230, 1) = ((MR_Box) (Var_233));
                    }
                    check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 24U), Context_15, Var_230, STATE_VARIABLE_TypeAssignSet_227_227, &STATE_VARIABLE_TypeAssignSet_231_231, STATE_VARIABLE_Info_228_228, &STATE_VARIABLE_Info_232_232);
                    Var_237 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                    check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[9])), Context_15, InitialIO_109, Var_237, STATE_VARIABLE_TypeAssignSet_231_231, &STATE_VARIABLE_TypeAssignSet_238_238, STATE_VARIABLE_Info_232_232, &STATE_VARIABLE_Info_239_239);
                    Var_240 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                    check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[10])), Context_15, FinalIO_110, Var_240, STATE_VARIABLE_TypeAssignSet_238_238, STATE_VARIABLE_TypeAssignSet_114, STATE_VARIABLE_Info_239_239, STATE_VARIABLE_Info_116);
                  }
                  {
                    ShortHand_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ShortHand_91, 0) = ((MR_Box) (MaybeIO_107));
                    MR_hl_field(MR_mktag(2), ShortHand_91, 1) = ((MR_Box) (ResultVar_108));
                    MR_hl_field(MR_mktag(2), ShortHand_91, 2) = ((MR_Box) (SubGoal_262));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_91));
            }
          }
          break;
      }
      break;
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
  MR_bool succeeded;
  MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 1))));
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
      MR_Word VarTypes0_31;
      MR_Word MaybeOldVarType_32;
      MR_Word VarTypes_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_7;

      check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(ArgVars_6, &ArgVarTypes_25, TypeAssign0_17, &TypeAssign1_26);
      parse_tree__prog_type__construct_higher_order_type_5_p_0(Purity_2, PredOrFunc_3, ArgVarTypes_25, &LambdaType_27);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign1_26, &VarTypes0_31);
      parse_tree__vartypes__search_insert_var_type_5_p_0(Var_5, LambdaType_27, &MaybeOldVarType_32, VarTypes0_31, &VarTypes_33);
      if ((MaybeOldVarType_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeAssign_36;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_33, TypeAssign1_26, &TypeAssign_36);
        {
          STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (TypeAssign_36));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_7));
        }
      }
      else
      {
        MR_Word OldVarType_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldVarType_32, (MR_Integer) 0))));
        MR_Word TypeAssign1_35;
        MR_Word HeadTypeParams_37;
        MR_Word TypeBindings0_38;
        MR_Word TypeBindings_39;

        check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign1_26, &HeadTypeParams_37);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_26, &TypeBindings0_38);
        succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_34, LambdaType_27, HeadTypeParams_37, TypeBindings0_38, &TypeBindings_39);
        if (succeeded)
        {
          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_39, TypeAssign1_26, &TypeAssign1_35);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (TypeAssign1_35));
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
    MR_Word STATE_VARIABLE_TypeAssign_17_17;
    MR_Word VarType_14;
    MR_Word * AddrTypes_26;

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
        MR_hl_field(MR_mktag(0), Type_10, 0) = ((MR_Box) (TypeVar_20));
        MR_hl_field(MR_mktag(0), Type_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__vartypes__add_var_type_4_p_0(Var_8, Type_10, VarTypes0_18, &VarTypes1_22);
      check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_22, STATE_VARIABLE_TypeAssign_15_23, &STATE_VARIABLE_TypeAssign_17_17);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_10));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrTypes_26 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
    check_hlds__typecheck__LCMC__pred__type_assign_get_types_of_vars__1_4_p_0(Vars_9, AddrTypes_26, STATE_VARIABLE_TypeAssign_17_17, STATE_VARIABLE_TypeAssign_4);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__type_assign_get_types_of_vars__1_4_p_0(
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
      MR_Word STATE_VARIABLE_TypeAssign_17_17;
      MR_Word VarType_14;
      MR_Word * AddrTypes_26;
      MR_Word HeadVar__2_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_27;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_3;

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
          MR_hl_field(MR_mktag(0), Type_10, 0) = ((MR_Box) (TypeVar_20));
          MR_hl_field(MR_mktag(0), Type_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__vartypes__add_var_type_4_p_0(Var_8, Type_10, VarTypes0_18, &VarTypes1_22);
        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_22, STATE_VARIABLE_TypeAssign_15_23, &STATE_VARIABLE_TypeAssign_17_17);
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
      next_value_of_STATE_VARIABLE_TypeAssign_0_3 = STATE_VARIABLE_TypeAssign_17_17;
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
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_25));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        }
        else
        {
          MR_Word TypeY_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeY_21, (MR_Integer) 0))));
          MR_Word TypeAssign3_24;
          MR_Word HeadTypeParams_40;
          MR_Word TypeBindings0_41;
          MR_Word TypeBindings_42;

          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_11, &HeadTypeParams_40);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_11, &TypeBindings0_41);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(TypeX_20, TypeY_23, HeadTypeParams_40, TypeBindings0_41, &TypeBindings_42);
          if (succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_42, TypeAssign_11, &TypeAssign3_24);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign3_24));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
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
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_34));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
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
            MR_hl_field(MR_mktag(0), Type_30, 0) = ((MR_Box) (TypeVar_27));
            MR_hl_field(MR_mktag(0), Type_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__vartypes__add_var_type_4_p_0(X_2, Type_30, VarTypes0_19, &VarTypes1_31);
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ((MR_Box) (X_2)), ((MR_Box) (Y_3)));
          if (succeeded)
            VarTypes_35 = VarTypes1_31;
          else
            parse_tree__vartypes__add_var_type_4_p_0(Y_3, Type_30, VarTypes1_31, &VarTypes_35);
          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_35, TypeAssign1_29, &TypeAssign_36);
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_36));
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
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeAssignSet_16;

  check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeAssignSet_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeAssignSet_16));
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
  MR_bool succeeded;
  MR_Word ClauseContext_20;
  MR_String BuiltinTypeName_22;
  MR_Word BuiltinType_155;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_54, &ClauseContext_20);
  switch (MR_tag((MR_Word) ConsId_14)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_154 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 1))));
            MR_Word Var_158;

            Var_158 = parse_tree__prog_data__type_of_int_const_1_f_0(IntConst_154);
            {
              BuiltinType_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), BuiltinType_155, 0) = (MR_Box) ((MR_Unsigned) (Var_158));
            }
            BuiltinTypeName_22 = parse_tree__prog_data__type_name_of_int_const_1_f_0(IntConst_154);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            BuiltinTypeName_22 = (MR_String) "float";
            BuiltinType_155 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            BuiltinTypeName_22 = (MR_String) "string";
            BuiltinType_155 = (MR_Word) ((MR_Unsigned) 4U);
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  if (succeeded)
  {
    MR_Word ConsType_21;
    MR_Word TypeAssignSet1_23;
    MR_Word STATE_VARIABLE_Info_58_58;
    MR_Word Var_59;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Box conv1_TypeAssignSet1_23;

    {
      ConsType_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ConsType_21, 0) = ((MR_Box) (BuiltinType_155));
    }
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
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (ConsType_21));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Var_13));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), Var_59, TypeAssignSet0_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_TypeAssignSet1_23);
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

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgVars_15, &Arity_32);
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
      MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsDefns_33, (MR_Integer) 1))));
      MR_Word Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsDefns_33, (MR_Integer) 0))));

      if ((Var_152 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ConsTypeAssignSet_43;
        MR_Word ArgsTypeAssignSet_46;
        MR_Word STATE_VARIABLE_Info_77_77;
        MR_Word TypeAssignSet1_82;
        MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_167;

        check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(Var_153, TypeAssignSet0_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ConsTypeAssignSet_15_167);
        check_hlds__typecheck__get_cons_type_assigns_for_cons_defns_4_p_0(Var_152, TypeAssignSet0_17, STATE_VARIABLE_ConsTypeAssignSet_15_167, &ConsTypeAssignSet_43);
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
            return;
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
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_80, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_77_77);
        }
        else
          STATE_VARIABLE_Info_77_77 = STATE_VARIABLE_Info_0_54;
        check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ArgVars_15, ArgsTypeAssignSet_46, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_82);
        if ((TypeAssignSet1_82 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *TypeAssignSet_18 = TypeAssignSet0_17;
          if ((ArgsTypeAssignSet_46 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_77_77;
          else
          {
            MR_Word ArgSpec_53;

            ArgSpec_53 = check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0(STATE_VARIABLE_Info_77_77, ClauseContext_20, UnifyContext_11, Context_12, Var_13, ConsDefns_33, ConsId_14, ArgVars_15, ArgsTypeAssignSet_46);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ArgSpec_53, STATE_VARIABLE_Info_77_77, STATE_VARIABLE_Info_55);
          }
        }
        else
        {
          *TypeAssignSet_18 = TypeAssignSet1_82;
          *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_77_77;
        }
      }
      else
      {
        MR_Word Sources_41;
        MR_Word Symbol_42;
        MR_Word ConsTypeAssignSet_132;
        MR_Word ArgsTypeAssignSet_135;
        MR_Word STATE_VARIABLE_Info_72_143;
        MR_Word STATE_VARIABLE_Info_77_148;
        MR_Word TypeAssignSet1_151;
        MR_Word ConsDefn_171;
        MR_Word ConsDefns_172;
        MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_176;

        Sources_41 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[4]), ConsDefns_33);
        {
          Symbol_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Symbol_42, 0) = ((MR_Box) (ConsId_14));
          MR_hl_field(MR_mktag(1), Symbol_42, 1) = ((MR_Box) (Sources_41));
        }
        check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(Symbol_42, Context_12, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_72_143);
        ConsDefn_171 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsDefns_33, (MR_Integer) 0))));
        ConsDefns_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsDefns_33, (MR_Integer) 1))));
        check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(ConsDefn_171, TypeAssignSet0_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ConsTypeAssignSet_15_176);
        check_hlds__typecheck__get_cons_type_assigns_for_cons_defns_4_p_0(ConsDefns_172, TypeAssignSet0_17, STATE_VARIABLE_ConsTypeAssignSet_15_176, &ConsTypeAssignSet_132);
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
            return;
          }
        check_hlds__typecheck__typecheck_var_functor_types_4_p_0(Var_13, ConsTypeAssignSet_132, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_135);
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

          ConsIdSpec_108 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(STATE_VARIABLE_Info_72_143, UnifyContext_11, Context_12, Var_13, ConsDefns_33, ConsId_14, Arity_32, TypeAssignSet0_17);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_108, STATE_VARIABLE_Info_72_143, &STATE_VARIABLE_Info_77_148);
        }
        else
          STATE_VARIABLE_Info_77_148 = STATE_VARIABLE_Info_72_143;
        check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ArgVars_15, ArgsTypeAssignSet_135, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_151);
        if ((TypeAssignSet1_151 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *TypeAssignSet_18 = TypeAssignSet0_17;
          if ((ArgsTypeAssignSet_135 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_77_148;
          else
          {
            MR_Word ArgSpec_120;

            ArgSpec_120 = check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0(STATE_VARIABLE_Info_77_148, ClauseContext_20, UnifyContext_11, Context_12, Var_13, ConsDefns_33, ConsId_14, ArgVars_15, ArgsTypeAssignSet_135);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ArgSpec_120, STATE_VARIABLE_Info_77_148, STATE_VARIABLE_Info_55);
          }
        }
        else
        {
          *TypeAssignSet_18 = TypeAssignSet1_151;
          *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_77_148;
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
      else
      if ((ArgTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Type_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_17, (MR_Integer) 0))));
        MR_Word Types_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_17, (MR_Integer) 1))));
        MR_Word TypeAssignSet1_49;
        MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_2, (MR_Integer) 1))));
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_2, (MR_Integer) 0))));
        MR_Word VarTypes0_53;
        MR_Word MaybeOldVarType_54;
        MR_Word VarTypes_55;

        check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_16, &VarTypes0_53);
        parse_tree__vartypes__search_insert_var_type_5_p_0(Var_52, Type_45, &MaybeOldVarType_54, VarTypes0_53, &VarTypes_55);
        if ((MaybeOldVarType_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word TypeAssign_58;

          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_55, TypeAssign_16, &TypeAssign_58);
          {
            TypeAssignSet1_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeAssignSet1_49, 0) = ((MR_Box) (TypeAssign_58));
            MR_hl_field(MR_mktag(1), TypeAssignSet1_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word OldVarType_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldVarType_54, (MR_Integer) 0))));
          MR_Word TypeAssign1_57;
          MR_Word HeadTypeParams_59;
          MR_Word TypeBindings0_60;
          MR_Word TypeBindings_61;

          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_16, &HeadTypeParams_59);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_16, &TypeBindings0_60);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_56, Type_45, HeadTypeParams_59, TypeBindings0_60, &TypeBindings_61);
          if (succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_61, TypeAssign_16, &TypeAssign1_57);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              TypeAssignSet1_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TypeAssignSet1_49, 0) = ((MR_Box) (TypeAssign1_57));
              MR_hl_field(MR_mktag(1), TypeAssignSet1_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          else
            TypeAssignSet1_49 = (MR_Word) ((MR_Unsigned) 0U);
        }
        check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(TypeAssignSet1_49, Var_51, Types_46, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_21_21);
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
      else
      if ((Types_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Type_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Types_4, (MR_Integer) 0))));
        MR_Word Types_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Types_4, (MR_Integer) 1))));
        MR_Word TypeAssignSet1_49;
        MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_3, (MR_Integer) 1))));
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_3, (MR_Integer) 0))));
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
            TypeAssignSet1_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeAssignSet1_49, 0) = ((MR_Box) (TypeAssign_58));
            MR_hl_field(MR_mktag(1), TypeAssignSet1_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word OldVarType_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldVarType_54, (MR_Integer) 0))));
          MR_Word TypeAssign1_57;
          MR_Word HeadTypeParams_59;
          MR_Word TypeBindings0_60;
          MR_Word TypeBindings_61;

          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_14, &HeadTypeParams_59);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_14, &TypeBindings0_60);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_56, Type_45, HeadTypeParams_59, TypeBindings0_60, &TypeBindings_61);
          if (succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_61, TypeAssign_14, &TypeAssign1_57);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              TypeAssignSet1_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TypeAssignSet1_49, 0) = ((MR_Box) (TypeAssign1_57));
              MR_hl_field(MR_mktag(1), TypeAssignSet1_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          else
            TypeAssignSet1_49 = (MR_Word) ((MR_Unsigned) 0U);
        }
        check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(TypeAssignSet1_49, Var_51, Types_46, STATE_VARIABLE_TypeAssignSet_0_5, &STATE_VARIABLE_TypeAssignSet_21_21);
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
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_ConsTypeInfo_16;

  succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_ConsTypeInfo_16);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_ConsTypeInfo_16));
    succeeded = MR_TRUE;
  }
  return succeeded;
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

    succeeded = ((((MR_tag((MR_Word) Functor_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Name_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 1))));
      Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 2))));
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
            TypeInfo_21_27 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[4]);
            succeeded = mercury__map__search_3_p_0(TypeCtorInfo_20_26, TypeInfo_21_27, CtorFieldTable_22, ((MR_Box) (FieldName_21)), &conv0_FieldDefns_23);
            if (succeeded)
            {
              FieldDefns_23 = ((MR_Word) (conv0_FieldDefns_23));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              TypeCtorInfo_24_28 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
              TypeCtorInfo_25_29 = (MR_Word) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0);
              UserArity_24 = (MR_Word) (Arity_9);
              {
                Var_25 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[1]));
                MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Info_7));
                MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (GoalId_10));
                MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (Name_17));
                MR_hl_field(MR_mktag(0), Var_25, 6) = ((MR_Box) (UserArity_24));
                MR_hl_field(MR_mktag(0), Var_25, 7) = ((MR_Box) (AccessType_20));
                MR_hl_field(MR_mktag(0), Var_25, 8) = ((MR_Box) (FieldName_21));
              }
              mercury__list__filter_map_3_p_0(TypeCtorInfo_24_28, TypeCtorInfo_25_29, Var_25, FieldDefns_23, &FieldAccessConsInfos_15);
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

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_ConsTypeInfo_16;

  succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_ConsTypeInfo_16);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_ConsTypeInfo_16));
    succeeded = MR_TRUE;
  }
  return succeeded;
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
  MR_bool succeeded;
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
  MR_Word TypeCtorInfo_20_88;
  MR_Word TypeInfo_21_89;
  MR_Word TypeCtorInfo_24_90;
  MR_Word TypeCtorInfo_25_91;
  MR_Word Name_79;
  MR_Word ModuleInfo_81;
  MR_Word AccessType_82;
  MR_Word FieldName_83;
  MR_Word CtorFieldTable_84;
  MR_Word FieldDefns_85;
  MR_Word UserArity_86;
  MR_Word Var_87;
  MR_Integer Var_92;
  MR_Integer Var_93;
  MR_Box conv0_FieldDefns_85;
  MR_String BuiltInTypeName_30;
  MR_Integer TupleArity_36;
  MR_Word PredConsInfosPrime_47;
  MR_Word ApplyConsInfosPrime_49;

  hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_13);
  check_hlds__typecheck_info__typecheck_info_get_cons_table_2_p_0(Info_7, &ConsTable_14);
  succeeded = ((((MR_tag((MR_Word) Functor_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
    succeeded = hlds__hlds_cons__search_cons_table_3_p_0(ConsTable_14, Functor_8, &HLDS_ConsDefns_18);
  if (succeeded)
    check_hlds__typecheck__convert_cons_defn_list_5_p_0(Info_7, GoalId_10, (MR_Integer) 2, HLDS_ConsDefns_18, &PlainMaybeConsInfos_19);
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
    check_hlds__typecheck__convert_cons_defn_list_5_p_0(Info_7, GoalId_10, (MR_Integer) 0, HLDS_ExistQConsDefns_24, &UnivQuantifiedMaybeConsInfos_25);
  else
    UnivQuantifiedMaybeConsInfos_25 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = ((((MR_tag((MR_Word) Functor_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Name_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 1))));
    Var_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 2))));
    succeeded = (Arity_9 == Var_92);
    if (succeeded)
    {
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_7, &ModuleInfo_81);
      succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_81, Name_79, &Var_93, &AccessType_82, &FieldName_83);
      if (succeeded)
      {
        succeeded = (Arity_9 == Var_93);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_81, &CtorFieldTable_84);
          TypeCtorInfo_20_88 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
          TypeInfo_21_89 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[4]);
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_20_88, TypeInfo_21_89, CtorFieldTable_84, ((MR_Box) (FieldName_83)), &conv0_FieldDefns_85);
          if (succeeded)
          {
            FieldDefns_85 = ((MR_Word) (conv0_FieldDefns_85));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            TypeCtorInfo_24_90 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
            TypeCtorInfo_25_91 = (MR_Word) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0);
            UserArity_86 = (MR_Word) (Arity_9);
            {
              Var_87 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[1]));
              MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (Info_7));
              MR_hl_field(MR_mktag(0), Var_87, 4) = ((MR_Box) (GoalId_10));
              MR_hl_field(MR_mktag(0), Var_87, 5) = ((MR_Box) (Name_79));
              MR_hl_field(MR_mktag(0), Var_87, 6) = ((MR_Box) (UserArity_86));
              MR_hl_field(MR_mktag(0), Var_87, 7) = ((MR_Box) (AccessType_82));
              MR_hl_field(MR_mktag(0), Var_87, 8) = ((MR_Box) (FieldName_83));
            }
            mercury__list__filter_map_3_p_0(TypeCtorInfo_24_90, TypeCtorInfo_25_91, Var_87, FieldDefns_85, &FieldAccessMaybeConsInfosPrime_26);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  if (succeeded)
    FieldAccessMaybeConsInfos_27 = FieldAccessMaybeConsInfosPrime_26;
  else
    FieldAccessMaybeConsInfos_27 = (MR_Word) ((MR_Unsigned) 0U);
  Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0), UnivQuantifiedMaybeConsInfos_25, FieldAccessMaybeConsInfos_27);
  DataMaybeConsInfos_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0), PlainMaybeConsInfos_19, Var_54);
  check_hlds__typecheck__split_cons_errors_3_p_0(DataMaybeConsInfos_28, &DataConsInfos_29, DataConsErrors_12);
  succeeded = (Arity_9 == (MR_Integer) 0);
  if (succeeded)
    succeeded = check_hlds__typecheck__builtin_atomic_type_2_p_0(Functor_8, &BuiltInTypeName_30);
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
    Var_64 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_64, TupleArgTVars_39, &TupleArgTypes_41);
    {
      TupleTypeCtor_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TupleTypeCtor_42, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_2[2]));
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
      MR_hl_field(MR_mktag(0), TupleConsInfo_45, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_2[3])));
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
  Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0), PredConsInfos_48, ApplyConsInfos_50);
  Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0), TupleConsInfos_46, Var_71);
  OtherConsInfos_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0), BuiltinConsInfos_35, Var_70);
  *ConsInfos_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0), DataConsInfos_29, OtherConsInfos_51);
}

static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ConsId_6,
  MR_Integer Arity_7,
  MR_Word * ConsTypeInfos_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
  MR_Word TypeCtorInfo_21_35;
  MR_Word TypeInfo_22_36;
  MR_Word TypeCtorInfo_23_37;
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
  MR_Word TypeVarSet0_29;
  MR_Word ArgTypeVars_30;
  MR_Word TypeVarSet1_31;
  MR_Word RetTypeVar_32;
  MR_Word Var_33;
  MR_Word Var_34;
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
          TypeCtorInfo_21_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
          mercury__varset__init_1_p_0(TypeCtorInfo_21_35, &TypeVarSet0_29);
          mercury__varset__new_vars_4_p_0(TypeCtorInfo_21_35, Arity1_14, &ArgTypeVars_30, TypeVarSet0_29, &TypeVarSet1_31);
          mercury__varset__new_var_3_p_0(TypeCtorInfo_21_35, &RetTypeVar_32, TypeVarSet1_31, &TypeVarSet_15);
          TypeInfo_22_36 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[1]);
          TypeCtorInfo_23_37 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
          Var_33 = mercury__map__init_0_f_0(TypeInfo_22_36, TypeCtorInfo_23_37);
          parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_33, ArgTypeVars_30, &ArgTypes_17);
          Var_34 = (MR_Word) ((MR_Unsigned) 0U);
          {
            RetType_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RetType_18, 0) = ((MR_Box) (RetTypeVar_32));
            MR_hl_field(MR_mktag(0), RetType_18, 1) = ((MR_Box) (Var_34));
          }
          parse_tree__prog_type__construct_higher_order_func_type_5_p_0(Purity_13, ArgTypes_17, RetType_18, &FuncType_16);
          ExistQVars_19 = (MR_Word) ((MR_Unsigned) 0U);
          hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_20);
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
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ExistQVars_19));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
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
    check_hlds__typecheck__LCMC__pred__convert_cons_defn_list__1_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Xs_13, AddrYs_16);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__convert_cons_defn_list__1_5_p_0(
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
      *AddrOfHeadVar__5_17 = (MR_Word) ((MR_Unsigned) 0U);
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
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_45;

  conv0_LambdaHeadVar__2_45 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3547__2_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_45));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
  MR_Word Info_6,
  MR_Word GoalId_7,
  MR_Word Action_8,
  MR_Word HLDS_ConsDefn_9,
  MR_Word * ConsTypeInfo_10)
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
  MR_Word BodyDu_27;
  MR_Word GoalType_29;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;

  ArgTypes_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[3]), Args_16);
  check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_6, &TypeTable_20);
  hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_20, TypeCtor_11, &TypeDefn_21);
  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_21, &Body_22);
  check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(Info_6, &PredId_23);
  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_6, &ModuleInfo_24);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_24, PredId_23, &PredInfo_25);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_25, &PredStatus_26);
  succeeded = ((MR_tag((MR_Word) Body_22)) == (MR_Integer) 0);
  if (succeeded)
  {
    BodyDu_27 = (MR_Word) ((MR_Word) (Body_22));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDu_27, (MR_Integer) 4))));
    succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_25, &GoalType_29);
      succeeded = ((MR_tag((MR_Word) GoalType_29)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GoalType_29, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (Var_47 == (MR_Integer) 3);
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_25);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_48 = (MR_Word) (PredStatus_26);
          succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_49;

    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (TypeCtor_11));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (TypeDefn_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ConsTypeInfo_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
    }
  }
  else
  {
    MR_Word TypeStatus_30;
    MR_Word Var_50;
    MR_Word Var_51;

    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_21, &TypeStatus_30);
    Var_50 = (MR_Word) (TypeStatus_30);
    succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_25);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_51 = (MR_Word) (PredStatus_26);
        succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      *ConsTypeInfo_10 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_2[4]));
    else
    {
      succeeded = (Action_8 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word Var_53;

        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (TypeCtor_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ConsTypeInfo_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
        }
      }
      else
      {
        MR_Word ConsTypeArgs_31;
        MR_Word ConsType_32;
        MR_Word ExistQVars0_34;
        MR_Word ExistProgConstraints_35;
        MR_Word ProgConstraints_39;
        MR_Word ExistQVars_40;
        MR_Word ClassTable_41;
        MR_Word Constraints_42;
        MR_Word Var_55;
        MR_Word Var_56;

        parse_tree__prog_type__var_list_to_type_list_3_p_0(ConsTypeKinds_14, ConsTypeParams_13, &ConsTypeArgs_31);
        parse_tree__prog_type__construct_type_3_p_0(TypeCtor_11, ConsTypeArgs_31, &ConsType_32);
        if ((MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ExistQVars0_34 = (MR_Word) ((MR_Unsigned) 0U);
          ExistProgConstraints_35 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word ExistConstraints_36 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_15), (MR_Integer) 1));

          ExistQVars0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_36, (MR_Integer) 0))));
          ExistProgConstraints_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_36, (MR_Integer) 1))));
        }
        switch (Action_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              {
                ProgConstraints_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ProgConstraints_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), ProgConstraints_39, 1) = ((MR_Box) (ExistProgConstraints_35));
              }
              ExistQVars_40 = ExistQVars0_34;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                ProgConstraints_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ProgConstraints_39, 0) = ((MR_Box) (ExistProgConstraints_35));
                MR_hl_field(MR_mktag(0), ProgConstraints_39, 1) = ((MR_Box) (ExistProgConstraints_35));
              }
              ExistQVars_40 = ExistQVars0_34;
            }
            break;
          case (MR_Integer) 0:
            {
              {
                ProgConstraints_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ProgConstraints_39, 0) = ((MR_Box) (ExistProgConstraints_35));
                MR_hl_field(MR_mktag(0), ProgConstraints_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              ExistQVars_40 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_24, &ClassTable_41);
        hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_41, ConsTypeVarSet_12, GoalId_7, ProgConstraints_39, &Constraints_42);
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (TypeCtor_11));
        }
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (ConsTypeVarSet_12));
          MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (ExistQVars_40));
          MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) (ConsType_32));
          MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (ArgTypes_18));
          MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Constraints_42));
          MR_hl_field(MR_mktag(0), Var_55, 5) = ((MR_Box) (Var_56));
        }
        *ConsTypeInfo_10 = (MR_Word) ((MR_Word) (Var_55));
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
check_hlds__typecheck__builtin_pred_type_5_p_0(
  MR_Word Info_6,
  MR_Word ConsId_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsTypeInfos_10)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
  MR_Word SymName_11;
  MR_Word PredicateTable_14;
  MR_Word IsFullyQualified_15;
  MR_Word PredIds_16;

  if (succeeded)
  {
    SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
    check_hlds__typecheck_info__typecheck_info_get_predicate_table_2_p_0(Info_6, &PredicateTable_14);
    check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(Info_6, &IsFullyQualified_15);
    hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_14, IsFullyQualified_15, SymName_11, &PredIds_16);
    if ((PredIds_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *ConsTypeInfos_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PredIdTable_19;

      hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable_14, &PredIdTable_19);
      check_hlds__typecheck__accumulate_cons_type_infos_for_pred_ids_7_p_0(Info_6, PredIdTable_19, GoalId_9, PredIds_16, Arity_8, (MR_Word) ((MR_Unsigned) 0U), ConsTypeInfos_10);
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
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
      MR_Word ModuleInfo_25;
      MR_Word ClassTable_26;
      MR_Word PredInfo_27;
      MR_Integer PredArity_28;
      MR_Word IsPredOrFunc_29;
      MR_Word PredClassContext_30;
      MR_Word PredTypeVarSet_31;
      MR_Word PredExistQVars_32;
      MR_Word CompleteArgTypes_33;
      MR_Word Purity_34;
      MR_Box conv0_PredInfo_27;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeInfos_0_6;

      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_1, &ModuleInfo_25);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_25, &ClassTable_26);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_2, ((MR_Box) (PredId_18)), &conv0_PredInfo_27);
      PredInfo_27 = ((MR_Word) (conv0_PredInfo_27));
      PredArity_28 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_27);
      IsPredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_27);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_27, &PredClassContext_30);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_27, &PredTypeVarSet_31, &PredExistQVars_32, &CompleteArgTypes_33);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_27, &Purity_34);
      succeeded = (IsPredOrFunc_29 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (PredArity_28 >= Arity_5);
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
        parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(Purity_34, PredTypeParams_36, &PredType_37);
        hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_26, PredTypeVarSet_31, GoalId_3, PredClassContext_30, &PredConstraints_38);
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (PredId_18));
        }
        {
          ConsTypeInfo_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ConsTypeInfo_39, 0) = ((MR_Box) (PredTypeVarSet_31));
          MR_hl_field(MR_mktag(0), ConsTypeInfo_39, 1) = ((MR_Box) (PredExistQVars_32));
          MR_hl_field(MR_mktag(0), ConsTypeInfo_39, 2) = ((MR_Box) (PredType_37));
          MR_hl_field(MR_mktag(0), ConsTypeInfo_39, 3) = ((MR_Box) (ArgTypes_35));
          MR_hl_field(MR_mktag(0), ConsTypeInfo_39, 4) = ((MR_Box) (PredConstraints_38));
          MR_hl_field(MR_mktag(0), ConsTypeInfo_39, 5) = ((MR_Box) (Var_49));
        }
        {
          STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (ConsTypeInfo_39));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeInfos_0_6));
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
          PredAsFuncArity_40 = (MR_Integer) ((MR_Unsigned) PredArity_28 - (MR_Unsigned) Var_50);
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
          MR_Word Var_52;
          MR_Word PredConstraints_53;
          MR_Word ConsTypeInfo_54;
          MR_Box conv1_FuncReturnTypeParam_44;

          mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, CompleteArgTypes_33, &FuncArgTypes_41, &FuncTypeParams_42);
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), FuncTypeParams_42, &FuncArgTypeParams_43, &conv1_FuncReturnTypeParam_44);
          FuncReturnTypeParam_44 = ((MR_Word) (conv1_FuncReturnTypeParam_44));
          if ((FuncArgTypeParams_43 == (MR_Word) ((MR_Unsigned) 0U)))
            FuncType_45 = FuncReturnTypeParam_44;
          else
            parse_tree__prog_type__construct_higher_order_func_type_5_p_0(Purity_34, FuncArgTypeParams_43, FuncReturnTypeParam_44, &FuncType_45);
          hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_26, PredTypeVarSet_31, GoalId_3, PredClassContext_30, &PredConstraints_53);
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (PredId_18));
          }
          {
            ConsTypeInfo_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConsTypeInfo_54, 0) = ((MR_Box) (PredTypeVarSet_31));
            MR_hl_field(MR_mktag(0), ConsTypeInfo_54, 1) = ((MR_Box) (PredExistQVars_32));
            MR_hl_field(MR_mktag(0), ConsTypeInfo_54, 2) = ((MR_Box) (FuncType_45));
            MR_hl_field(MR_mktag(0), ConsTypeInfo_54, 3) = ((MR_Box) (FuncArgTypes_41));
            MR_hl_field(MR_mktag(0), ConsTypeInfo_54, 4) = ((MR_Box) (PredConstraints_53));
            MR_hl_field(MR_mktag(0), ConsTypeInfo_54, 5) = ((MR_Box) (Var_52));
          }
          {
            STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (ConsTypeInfo_54));
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

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_atomic_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            MR_String String_8;
            MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Char Var_10;

            succeeded = (Var_12 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
              if (succeeded)
              {
                String_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
                *HeadVar__2_2 = (MR_String) "character";
                succeeded = mercury__string__char_to_string_2_p_1(&Var_10, String_8);
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_3 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

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
            MR_Word IDCKind_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);

            *HeadVar__2_2 = ((&check_hlds__typecheck_vector_common_7[0 + IDCKind_13]))->check_hlds__typecheck__vector_common_type_7_0__vct_7_f_0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
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
      MR_Word TypeAssign0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsTypeAssign_10, (MR_Integer) 0))));
      MR_Word ConsType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsTypeAssign_10, (MR_Integer) 1))));
      MR_Word ConsArgTypes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsTypeAssign_10, (MR_Integer) 2))));
      MR_Word VarTypes0_19;
      MR_Word MaybeTypeVar_20;
      MR_Word VarTypes_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_16, &VarTypes0_19);
      parse_tree__vartypes__search_insert_var_type_5_p_0(Var_1, ConsType_17, &MaybeTypeVar_20, VarTypes0_19, &VarTypes_21);
      if ((MaybeTypeVar_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeAssign_26;
        MR_Word EmptyConstraints_27;
        MR_Word ArgsTypeAssign_28;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_21, TypeAssign0_16, &TypeAssign_26);
        hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_27);
        {
          ArgsTypeAssign_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgsTypeAssign_28, 0) = ((MR_Box) (TypeAssign_26));
          MR_hl_field(MR_mktag(0), ArgsTypeAssign_28, 1) = ((MR_Box) (ConsArgTypes_18));
          MR_hl_field(MR_mktag(0), ArgsTypeAssign_28, 2) = ((MR_Box) (EmptyConstraints_27));
        }
        {
          STATE_VARIABLE_ArgsTypeAssignSet_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_15_15, 0) = ((MR_Box) (ArgsTypeAssign_28));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_15_15, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_3));
        }
      }
      else
      {
        MR_Word TypeVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeVar_20, (MR_Integer) 0))));
        MR_Word TypeAssign_23;
        MR_Word HeadTypeParams_29;
        MR_Word TypeBindings0_30;
        MR_Word TypeBindings_31;

        check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign0_16, &HeadTypeParams_29);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_16, &TypeBindings0_30);
        succeeded = parse_tree__prog_type__type_unify_5_p_0(ConsType_17, TypeVar_22, HeadTypeParams_29, TypeBindings0_30, &TypeBindings_31);
        if (succeeded)
        {
          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_31, TypeAssign0_16, &TypeAssign_23);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word EmptyConstraints_24;
          MR_Word ArgsTypeAssign_25;

          hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_24);
          {
            ArgsTypeAssign_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArgsTypeAssign_25, 0) = ((MR_Box) (TypeAssign_23));
            MR_hl_field(MR_mktag(0), ArgsTypeAssign_25, 1) = ((MR_Box) (ConsArgTypes_18));
            MR_hl_field(MR_mktag(0), ArgsTypeAssign_25, 2) = ((MR_Box) (EmptyConstraints_24));
          }
          {
            STATE_VARIABLE_ArgsTypeAssignSet_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_15_15, 0) = ((MR_Box) (ArgsTypeAssign_25));
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
      MR_Word ConsTypeVarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_1, (MR_Integer) 0))));
      MR_Word ConsExistQVars0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_1, (MR_Integer) 1))));
      MR_Word ConsType0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_1, (MR_Integer) 2))));
      MR_Word ArgTypes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_1, (MR_Integer) 3))));
      MR_Word ClassConstraints0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_1, (MR_Integer) 4))));
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
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ConsType0_19));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (ArgTypes0_20));
        }
        check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_10, &TypeVarSet0_43);
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_43, ConsTypeVarSet_17, &TypeVarSet_44, &Renaming_30);
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_30, Var_37, &Var_38);
        check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_44, TypeAssign_10, &TypeAssign1_27);
        succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ConsType1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
          ArgTypes1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1))));
          {
            MR_Word ConsExistQVars_31;
            MR_Word HeadTypeParams0_32;
            MR_Word HeadTypeParams_33;

            parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_30, ConsExistQVars0_18, &ConsExistQVars_31);
            check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(Renaming_30, ClassConstraints0_21, &ConstraintsToAdd_26);
            check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign1_27, &HeadTypeParams0_32);
            HeadTypeParams_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ConsExistQVars_31, HeadTypeParams0_32);
            check_hlds__type_assign__type_assign_set_external_type_params_3_p_0(HeadTypeParams_33, TypeAssign1_27, &TypeAssign2_25);
            ConsType_23 = ConsType1_28;
            ArgTypes_24 = ArgTypes1_29;
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.get_cons_type_assign\'/3", (MR_String) "type_assign_rename_apart failed");
            return;
          }
      }
      check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(TypeAssign2_25, &OldConstraints_34);
      hlds__hlds_class__merge_hlds_constraints_3_p_0(ConstraintsToAdd_26, OldConstraints_34, &ClassConstraints_35);
      check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(ClassConstraints_35, TypeAssign2_25, &TypeAssign_36);
      {
        ConsTypeAssign_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConsTypeAssign_13, 0) = ((MR_Box) (TypeAssign_36));
        MR_hl_field(MR_mktag(0), ConsTypeAssign_13, 1) = ((MR_Box) (ConsType_23));
        MR_hl_field(MR_mktag(0), ConsTypeAssign_13, 2) = ((MR_Box) (ArgTypes_24));
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

static void MR_CALL 
check_hlds__typecheck__typecheck_coerce_6_p_0_1(
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

  check_hlds__typecheck__typecheck_coerce_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeAssignSet_35, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_37);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeAssignSet_35));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_37));
}

static void MR_CALL 
check_hlds__typecheck__typecheck_coerce_6_p_0(
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
    FromVar0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_8, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_8, (MR_Integer) 1))));
    succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ToVar0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
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
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_coerce\'/6", (MR_String) "coerce requires two arguments");
      return;
    }
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_coerce_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Context_7));
    MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (FromVar_14));
    MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (ToVar_15));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_25, TypeAssignSet0_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_TypeAssignSet1_16, ((MR_Box) (STATE_VARIABLE_Info_0_19)), &conv2_STATE_VARIABLE_Info_20);
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

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1(
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
check_hlds__typecheck__typecheck_call_pred_id_9_p_0(
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
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_22, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_22, (MR_Integer) 1))));
    succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word Specs_35;
    MR_Word MaybeArgVectorTypeErrors_36;
    MR_Word ArgVectorTypeErrors_37;
    MR_Word Var_46;

    check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_27, Context_11, ArgVectorKind_10, (MR_Integer) 1, ArgVars_14, PredArgTypes_21, STATE_VARIABLE_TypeAssignSet_0_25, STATE_VARIABLE_TypeAssignSet_26, (MR_Word) ((MR_Unsigned) 0U), &Specs_35, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_2[1])), &MaybeArgVectorTypeErrors_36);
    succeeded = (MaybeArgVectorTypeErrors_36 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgVectorTypeErrors_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgVectorTypeErrors_36, (MR_Integer) 0))));
      succeeded = (ArgVectorTypeErrors_37 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_37, (MR_Integer) 1))));
        succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
    {
      MR_Word ClauseContext_41;
      MR_Word AllArgsSpec_42;

      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_27, &ClauseContext_41);
      AllArgsSpec_42 = check_hlds__typecheck_errors__report_arg_vector_type_errors_6_f_0(STATE_VARIABLE_Info_0_27, ClauseContext_41, Context_11, ArgVectorKind_10, *STATE_VARIABLE_TypeAssignSet_26, ArgVectorTypeErrors_37);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_42, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
    }
    else
    {
      MR_Box conv1_STATE_VARIABLE_Info_28;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[2]), Specs_35, ((MR_Box) (STATE_VARIABLE_Info_0_27)), &conv1_STATE_VARIABLE_Info_28);
      *STATE_VARIABLE_Info_28 = ((MR_Word) (conv1_STATE_VARIABLE_Info_28));
    }
  }
  else
  {
    MR_Word ClassTable_23;
    MR_Word PredConstraints_24;
    MR_Word Var_33;
    MR_Word ArgsTypeAssignSet_50;

    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_17, &ClassTable_23);
    hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_23, PredTypeVarSet_19, GoalId_12, PredClassContext_22, &PredConstraints_24);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (ArgVectorKind_10));
    }
    check_hlds__typecheck__rename_apart_7_p_0(STATE_VARIABLE_TypeAssignSet_0_25, PredTypeVarSet_19, PredExistQVars_20, PredArgTypes_21, PredConstraints_24, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_50);
    check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(Var_33, (MR_Integer) 1, Context_11, ArgVars_14, ArgsTypeAssignSet_50, STATE_VARIABLE_TypeAssignSet_26, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0_1(
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
check_hlds__typecheck__typecheck_call_pred_name_9_p_0(
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
  MR_Word IsFullyQualified_21;
  MR_Word PredIds_22;

  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_17);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_17, &PredicateTable_18);
  PredFormArity_19 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgVars_13);
  check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(STATE_VARIABLE_Info_0_32, &IsFullyQualified_21);
  hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_18, IsFullyQualified_21, (MR_Integer) 0, SymName_10, PredFormArity_19, &PredIds_22);
  if ((PredIds_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word SymNamePredFormArity_20;
    MR_Word ClauseContext_23;
    MR_Word Spec_24;

    {
      SymNamePredFormArity_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SymNamePredFormArity_20, 0) = ((MR_Box) (SymName_10));
      MR_hl_field(MR_mktag(0), SymNamePredFormArity_20, 1) = ((MR_Box) (PredFormArity_19));
    }
    *PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_32, &ClauseContext_23);
    Spec_24 = check_hlds__typecheck_errors__report_pred_call_error_3_f_0(ClauseContext_23, Context_11, SymNamePredFormArity_20);
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_24, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
    *STATE_VARIABLE_TypeAssignSet_31 = STATE_VARIABLE_TypeAssignSet_0_30;
  }
  else
  {
    MR_Word HeadPredId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_22, (MR_Integer) 0))));
    MR_Word TailPredIds_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_22, (MR_Integer) 1))));
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
        ArgVectorKind_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ArgVectorKind_27, 0) = ((MR_Box) (*PredId_14));
      }
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_39);
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_39, *PredId_14, &PredInfo_40);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_40, &PredTypeVarSet_41, &PredExistQVars_42, &PredArgTypes_43);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_40, &PredClassContext_44);
      succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), PredTypeVarSet_41);
      if (succeeded)
      {
        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_44, (MR_Integer) 0))));
        Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_44, (MR_Integer) 1))));
        succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word Specs_51;
        MR_Word MaybeArgVectorTypeErrors_52;
        MR_Word ArgVectorTypeErrors_53;
        MR_Word Var_62;

        check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_32, Context_11, ArgVectorKind_27, (MR_Integer) 1, ArgVars_13, PredArgTypes_43, STATE_VARIABLE_TypeAssignSet_0_30, &STATE_VARIABLE_TypeAssignSet_36_36, (MR_Word) ((MR_Unsigned) 0U), &Specs_51, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_2[1])), &MaybeArgVectorTypeErrors_52);
        succeeded = (MaybeArgVectorTypeErrors_52 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgVectorTypeErrors_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgVectorTypeErrors_52, (MR_Integer) 0))));
          succeeded = (ArgVectorTypeErrors_53 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_53, (MR_Integer) 1))));
            succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
        }
        if (succeeded)
        {
          MR_Word ClauseContext_57;
          MR_Word AllArgsSpec_58;

          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_32, &ClauseContext_57);
          AllArgsSpec_58 = check_hlds__typecheck_errors__report_arg_vector_type_errors_6_f_0(STATE_VARIABLE_Info_0_32, ClauseContext_57, Context_11, ArgVectorKind_27, STATE_VARIABLE_TypeAssignSet_36_36, ArgVectorTypeErrors_53);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_58, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_37_37);
        }
        else
        {
          MR_Box conv1_STATE_VARIABLE_Info_37_37;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[1]), Specs_51, ((MR_Box) (STATE_VARIABLE_Info_0_32)), &conv1_STATE_VARIABLE_Info_37_37);
          STATE_VARIABLE_Info_37_37 = ((MR_Word) (conv1_STATE_VARIABLE_Info_37_37));
        }
      }
      else
      {
        MR_Word ClassTable_45;
        MR_Word PredConstraints_46;
        MR_Word Var_49;
        MR_Word ArgsTypeAssignSet_66;

        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_39, &ClassTable_45);
        hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_45, PredTypeVarSet_41, GoalId_12, PredClassContext_44, &PredConstraints_46);
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (ArgVectorKind_27));
        }
        check_hlds__typecheck__rename_apart_7_p_0(STATE_VARIABLE_TypeAssignSet_0_30, PredTypeVarSet_41, PredExistQVars_42, PredArgTypes_43, PredConstraints_46, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_66);
        check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(Var_49, (MR_Integer) 1, Context_11, ArgVars_13, ArgsTypeAssignSet_66, &STATE_VARIABLE_TypeAssignSet_36_36, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_37_37);
      }
    }
    else
    {
      MR_Word PredFormArity_69;
      MR_Word SymNamePredFormArity_70;
      MR_Word Symbol_71;
      MR_Word ModuleInfo_72;
      MR_Word ClassTable_73;
      MR_Word PredicateTable_74;
      MR_Word PredIdTable_75;
      MR_Word ArgsTypeAssignSet_76;
      MR_Word VarVectorKind_77;
      MR_Word STATE_VARIABLE_Info_29_78;
      MR_Word Var_80;
      MR_Word PredId_89;
      MR_Word PredIds_90;
      MR_Word PredInfo_95;
      MR_Word PredTypeVarSet_96;
      MR_Word PredExistQVars_97;
      MR_Word PredArgTypes_98;
      MR_Word PredClassContext_99;
      MR_Word TVarSet_100;
      MR_Word PredConstraints_101;
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_31_104;
      MR_Box conv2_PredInfo_95;

      PredFormArity_69 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgVars_13);
      {
        SymNamePredFormArity_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SymNamePredFormArity_70, 0) = ((MR_Box) (SymName_10));
        MR_hl_field(MR_mktag(0), SymNamePredFormArity_70, 1) = ((MR_Box) (PredFormArity_69));
      }
      {
        Symbol_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Symbol_71, 0) = ((MR_Box) (SymNamePredFormArity_70));
        MR_hl_field(MR_mktag(0), Symbol_71, 1) = ((MR_Box) (PredIds_22));
      }
      check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(Symbol_71, Context_11, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_29_78);
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_29_78, &ModuleInfo_72);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_72, &ClassTable_73);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_72, &PredicateTable_74);
      hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable_74, &PredIdTable_75);
      PredId_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_22, (MR_Integer) 0))));
      PredIds_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_22, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_75, ((MR_Box) (PredId_89)), &conv2_PredInfo_95);
      PredInfo_95 = ((MR_Word) (conv2_PredInfo_95));
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_95, &PredTypeVarSet_96, &PredExistQVars_97, &PredArgTypes_98);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_95, &PredClassContext_99);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_95, &TVarSet_100);
      hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_73, TVarSet_100, GoalId_12, PredClassContext_99, &PredConstraints_101);
      check_hlds__typecheck__rename_apart_7_p_0(STATE_VARIABLE_TypeAssignSet_0_30, PredTypeVarSet_96, PredExistQVars_97, PredArgTypes_98, PredConstraints_101, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ArgsTypeAssignSet_31_104);
      check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(PredIds_90, PredIdTable_75, ClassTable_73, GoalId_12, STATE_VARIABLE_TypeAssignSet_0_30, STATE_VARIABLE_ArgsTypeAssignSet_31_104, &ArgsTypeAssignSet_76);
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (SymNamePredFormArity_70));
      }
      {
        VarVectorKind_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VarVectorKind_77, 0) = ((MR_Box) (Var_80));
      }
      check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(VarVectorKind_77, (MR_Integer) 1, Context_11, ArgVars_13, ArgsTypeAssignSet_76, &STATE_VARIABLE_TypeAssignSet_36_36, STATE_VARIABLE_Info_29_78, &STATE_VARIABLE_Info_37_37);
      *PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
    check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_11, STATE_VARIABLE_TypeAssignSet_36_36, STATE_VARIABLE_TypeAssignSet_31, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_33);
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
check_hlds__typecheck__typecheck_event_call_7_p_0_1(
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
check_hlds__typecheck__typecheck_event_call_7_p_0(
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
  EventSpecMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSet_14, (MR_Integer) 1))));
  succeeded = parse_tree__prog_event__event_arg_types_3_p_0(EventSpecMap_15, EventName_9, &EventArgTypes_16);
  if (succeeded)
  {
    MR_Integer NumArgVars_17;
    MR_Integer NumEventArgTypes_18;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgVars_10, &NumArgVars_17);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), EventArgTypes_16, &NumEventArgTypes_18);
    succeeded = (NumArgVars_17 == NumEventArgTypes_18);
    if (succeeded)
    {
      MR_Word ArgVectorKind_19;
      MR_Word Specs_33;
      MR_Word MaybeArgVectorTypeErrors_34;
      MR_Word ArgVectorTypeErrors_35;
      MR_Word Var_44;

      {
        ArgVectorKind_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ArgVectorKind_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ArgVectorKind_19, 1) = ((MR_Box) (EventName_9));
      }
      check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_23, Context_8, ArgVectorKind_19, (MR_Integer) 1, ArgVars_10, EventArgTypes_16, STATE_VARIABLE_TypeAssignSet_0_21, STATE_VARIABLE_TypeAssignSet_22, (MR_Word) ((MR_Unsigned) 0U), &Specs_33, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_2[1])), &MaybeArgVectorTypeErrors_34);
      succeeded = (MaybeArgVectorTypeErrors_34 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgVectorTypeErrors_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgVectorTypeErrors_34, (MR_Integer) 0))));
        succeeded = (ArgVectorTypeErrors_35 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_35, (MR_Integer) 1))));
          succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Word ClauseContext_39;
        MR_Word AllArgsSpec_40;

        check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_23, &ClauseContext_39);
        AllArgsSpec_40 = check_hlds__typecheck_errors__report_arg_vector_type_errors_6_f_0(STATE_VARIABLE_Info_0_23, ClauseContext_39, Context_8, ArgVectorKind_19, *STATE_VARIABLE_TypeAssignSet_22, ArgVectorTypeErrors_35);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_40, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
      }
      else
      {
        MR_Box conv1_STATE_VARIABLE_Info_24;

        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[0]), Specs_33, ((MR_Box) (STATE_VARIABLE_Info_0_23)), &conv1_STATE_VARIABLE_Info_24);
        *STATE_VARIABLE_Info_24 = ((MR_Word) (conv1_STATE_VARIABLE_Info_24));
      }
    }
    else
    {
      MR_Word Spec_20;

      Spec_20 = check_hlds__typecheck_errors__report_event_args_mismatch_4_f_0(Context_8, EventName_9, EventArgTypes_16, ArgVars_10);
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
          return;
        }
    else
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
        return;
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
      MR_Word TypeAssignSet1_87;
      MR_Integer next_value_of_ArgNum_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;
      MR_Word next_value_of_STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;

      check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(STATE_VARIABLE_TypeAssignSet_0_7, Var_86, Type_66, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_87);
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
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (ArgVectorKind_3));
        }
        {
          GoalContext_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalContext_90, 0) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(1), GoalContext_90, 1) = ((MR_Box) (ArgNum_4));
        }
        SpecAndMaybeActualExpected_91 = check_hlds__typecheck_errors__report_error_var_6_f_0(Info_1, GoalContext_90, Context_2, Var_86, Type_66, STATE_VARIABLE_TypeAssignSet_0_7);
        Spec_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecAndMaybeActualExpected_91, (MR_Integer) 0))));
        MaybeActualExpected_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecAndMaybeActualExpected_91, (MR_Integer) 1))));
        {
          STATE_VARIABLE_Specs_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_78_78, 0) = ((MR_Box) (Spec_92));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_78_78, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_9));
        }
        if ((STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79 = STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
        else
        if ((MaybeActualExpected_93 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word ArgVectorTypeErrors0_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11, (MR_Integer) 0))));
          MR_Word ActualExpected_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeActualExpected_93, (MR_Integer) 0))));
          MR_Word ArgVectorTypeError_96;
          MR_Word ArgVectorTypeErrors_97;

          {
            ArgVectorTypeError_96 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArgVectorTypeError_96, 0) = ((MR_Box) (ArgNum_4));
            MR_hl_field(MR_mktag(0), ArgVectorTypeError_96, 1) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(0), ArgVectorTypeError_96, 2) = ((MR_Box) (ActualExpected_95));
          }
          {
            ArgVectorTypeErrors_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_97, 0) = ((MR_Box) (ArgVectorTypeError_96));
            MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_97, 1) = ((MR_Box) (ArgVectorTypeErrors0_94));
          }
          {
            STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79, 0) = ((MR_Box) (ArgVectorTypeErrors_97));
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
    break;
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
          STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_24));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
        }
      }
      else
      {
        MR_Word OldVarType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldVarType_20, (MR_Integer) 0))));
        MR_Word TypeAssign1_23;
        MR_Word HeadTypeParams_25;
        MR_Word TypeBindings0_26;
        MR_Word TypeBindings_27;

        check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign0_11, &HeadTypeParams_25);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_11, &TypeBindings0_26);
        succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_22, Type_3, HeadTypeParams_25, TypeBindings0_26, &TypeBindings_27);
        if (succeeded)
        {
          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_27, TypeAssign0_11, &TypeAssign1_23);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign1_23));
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
  MR_Word ArgVars_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_24,
  MR_Word * STATE_VARIABLE_TypeAssignSet_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
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
  MR_Word TypeVarSet0_33;
  MR_Word ArgTypeVars_34;
  MR_Word Var_35;
  MR_Word ArgsTypeAssignSet_40;

  mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgVars_14, &Arity_17);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_33);
  mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_17, &ArgTypeVars_34, TypeVarSet0_33, &TypeVarSet_18);
  Var_35 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_35, ArgTypeVars_34, &ArgTypes_20);
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
    MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (ArgVars_14));
  }
  {
    Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (PredVarType_19));
    MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (ArgTypes_20));
  }
  check_hlds__typecheck__rename_apart_7_p_0(STATE_VARIABLE_TypeAssignSet_0_24, TypeVarSet_18, (MR_Word) ((MR_Unsigned) 0U), Var_31, EmptyConstraints_22, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_40);
  check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(VarVectorKind_21, (MR_Integer) 1, Context_11, Var_30, ArgsTypeAssignSet_40, STATE_VARIABLE_TypeAssignSet_25, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
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
    MR_Word ArgsTypeAssignSet_31;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_15);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_16, TypeVarSet0_15, &TypeVarSet_17);
    {
      Type_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_18, 0) = ((MR_Box) (TypeVar_16));
      MR_hl_field(MR_mktag(0), Type_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), Vars_10, &NumVars_19);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumVars_19, ((MR_Box) (Type_18)), &Types_20);
    hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_21);
    check_hlds__typecheck__rename_apart_7_p_0(STATE_VARIABLE_TypeAssignSet_0_22, TypeVarSet_17, (MR_Word) ((MR_Unsigned) 0U), Types_20, EmptyConstraints_21, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_31);
    check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(VarVectorKind_8, (MR_Integer) 1, Context_9, Vars_10, ArgsTypeAssignSet_31, STATE_VARIABLE_TypeAssignSet_23, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
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
    MR_Word ArgsTypeAssignSet_31;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), Vars_10, &NumVars_15);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_16);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NumVars_15, &TypeVars_17, TypeVarSet0_16, &TypeVarSet_18);
    Var_25 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_25, TypeVars_17, &Types_19);
    hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_20);
    check_hlds__typecheck__rename_apart_7_p_0(STATE_VARIABLE_TypeAssignSet_0_21, TypeVarSet_18, (MR_Word) ((MR_Unsigned) 0U), Types_19, EmptyConstraints_20, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_31);
    check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(VarVectorKind_8, (MR_Integer) 1, Context_9, Vars_10, ArgsTypeAssignSet_31, STATE_VARIABLE_TypeAssignSet_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
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
      MR_Word ArgTypeAssignSet1_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Integer next_value_of_ArgNum_2;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(HeadVar__5_5, Var_20, (MR_Word) ((MR_Unsigned) 0U), &ArgTypeAssignSet1_33);
      succeeded = (ArgTypeAssignSet1_33 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
          Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word GoalContext_25;
        MR_Word ClauseContext_36;
        MR_Word Spec_37;
        MR_Word ArgTypeAssign_41;
        MR_Word ArgTypeAssigns_42;
        MR_Word TypeAssign_43;
        MR_Word ArgTypes0_44;
        MR_Word Constraints_45;
        MR_Word ArgTypes_47;

        {
          GoalContext_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalContext_25, 0) = ((MR_Box) (VarVectorKind_1));
          MR_hl_field(MR_mktag(1), GoalContext_25, 1) = ((MR_Box) (ArgNum_2));
        }
        TypeAssign_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
        ArgTypes0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1))));
        Constraints_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 2))));
        if ((ArgTypes0_44 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.delete_first_arg_in_each_arg_type_assign\'/2", (MR_String) "skip_arg");
            return;
          }
        else
          ArgTypes_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes0_44, (MR_Integer) 1))));
        {
          ArgTypeAssign_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgTypeAssign_41, 0) = ((MR_Box) (TypeAssign_43));
          MR_hl_field(MR_mktag(0), ArgTypeAssign_41, 1) = ((MR_Box) (ArgTypes_47));
          MR_hl_field(MR_mktag(0), ArgTypeAssign_41, 2) = ((MR_Box) (Constraints_45));
        }
        check_hlds__typecheck__delete_first_arg_in_each_arg_type_assign_2_p_0(Var_35, &ArgTypeAssigns_42);
        {
          ArgTypeAssignSet1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgTypeAssignSet1_26, 0) = ((MR_Box) (ArgTypeAssign_41));
          MR_hl_field(MR_mktag(1), ArgTypeAssignSet1_26, 1) = ((MR_Box) (ArgTypeAssigns_42));
        }
        check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_7, &ClauseContext_36);
        Spec_37 = check_hlds__typecheck_errors__report_error_arg_var_6_f_0(STATE_VARIABLE_Info_0_7, ClauseContext_36, GoalContext_25, Context_3, Var_20, HeadVar__5_5);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_37, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_29_29);
      }
      else
      {
        ArgTypeAssignSet1_26 = ArgTypeAssignSet1_33;
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
      MR_Word VarTypes0_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_13, &VarTypes0_19);
      if ((ArgTypes0_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.arg_type_assign_var_has_type\'/6", (MR_String) "ArgTypes0 = []");
          return;
        }
      else
      {
        MR_Word Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes0_14, (MR_Integer) 0))));
        MR_Word ArgTypes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes0_14, (MR_Integer) 1))));
        MR_Word MaybeOldVarType_22;
        MR_Word VarTypes_23;

        parse_tree__vartypes__search_insert_var_type_5_p_0(Var_2, Type_20, &MaybeOldVarType_22, VarTypes0_19, &VarTypes_23);
        if ((MaybeOldVarType_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word TypeAssign_27;
          MR_Word NewTypeAssign_30;

          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_23, TypeAssign0_13, &TypeAssign_27);
          {
            NewTypeAssign_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NewTypeAssign_30, 0) = ((MR_Box) (TypeAssign_27));
            MR_hl_field(MR_mktag(0), NewTypeAssign_30, 1) = ((MR_Box) (ArgTypes_21));
            MR_hl_field(MR_mktag(0), NewTypeAssign_30, 2) = ((MR_Box) (ClassContext_15));
          }
          {
            STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (NewTypeAssign_30));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (HeadVar__3_3));
          }
        }
        else
        {
          MR_Word OldVarType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldVarType_22, (MR_Integer) 0))));
          MR_Word TypeAssign1_25;
          MR_Word HeadTypeParams_31;
          MR_Word TypeBindings0_32;
          MR_Word TypeBindings_33;

          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign0_13, &HeadTypeParams_31);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_13, &TypeBindings0_32);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_24, Type_20, HeadTypeParams_31, TypeBindings0_32, &TypeBindings_33);
          if (succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_33, TypeAssign0_13, &TypeAssign1_25);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word NewTypeAssign_26;

            {
              NewTypeAssign_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NewTypeAssign_26, 0) = ((MR_Box) (TypeAssign1_25));
              MR_hl_field(MR_mktag(0), NewTypeAssign_26, 1) = ((MR_Box) (ArgTypes_21));
              MR_hl_field(MR_mktag(0), NewTypeAssign_26, 2) = ((MR_Box) (ClassContext_15));
            }
            {
              STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (NewTypeAssign_26));
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
    MR_Word ArgTypes0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign0_3, (MR_Integer) 1))));
    MR_Word Constraints_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign0_3, (MR_Integer) 2))));
    MR_Word ArgTypes_11;
    MR_Word * AddrArgTypeAssigns_14;

    if ((ArgTypes0_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.delete_first_arg_in_each_arg_type_assign\'/2", (MR_String) "skip_arg");
        return;
      }
    else
      ArgTypes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes0_8, (MR_Integer) 1))));
    {
      ArgTypeAssign_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgTypeAssign_5, 0) = ((MR_Box) (TypeAssign_7));
      MR_hl_field(MR_mktag(0), ArgTypeAssign_5, 1) = ((MR_Box) (ArgTypes_11));
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
    check_hlds__typecheck__LCMC__pred__delete_first_arg_in_each_arg_type_assign__1_2_p_0(ArgTypeAssigns0_4, AddrArgTypeAssigns_14);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__delete_first_arg_in_each_arg_type_assign__1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__2_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ArgTypeAssign0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgTypeAssigns0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgTypeAssign_5;
      MR_Word TypeAssign_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign0_3, (MR_Integer) 0))));
      MR_Word ArgTypes0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign0_3, (MR_Integer) 1))));
      MR_Word Constraints_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign0_3, (MR_Integer) 2))));
      MR_Word ArgTypes_11;
      MR_Word * AddrArgTypeAssigns_14;
      MR_Word HeadVar__2_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_15;

      if ((ArgTypes0_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.delete_first_arg_in_each_arg_type_assign\'/2", (MR_String) "skip_arg");
          return;
        }
      else
        ArgTypes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes0_8, (MR_Integer) 1))));
      {
        ArgTypeAssign_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArgTypeAssign_5, 0) = ((MR_Box) (TypeAssign_7));
        MR_hl_field(MR_mktag(0), ArgTypeAssign_5, 1) = ((MR_Box) (ArgTypes_11));
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
      MR_Word TypeVarSet0_35;
      MR_Word TypeVarSet_36;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ArgTypeAssigns_0_6;

      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign0_15, &TypeVarSet0_35);
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_35, PredTypeVarSet_2, &TypeVarSet_36, &Renaming_24);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_24, PredArgTypes_4, &ParentArgTypes_23);
      check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_36, TypeAssign0_15, &TypeAssign1_22);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_24, PredExistQVars_3, &ParentExistQVars_25);
      check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(Renaming_24, PredConstraints_5, &ParentConstraints_26);
      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign1_22, &HeadTypeParams0_27);
      mercury__list__append_3_p_1((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ParentExistQVars_25, HeadTypeParams0_27, &HeadTypeParams_28);
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
    MR_Word * AddrSCCcallarg_8_9;

    I_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0))));
    O_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 1))));
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (O_4));
      MR_hl_field(MR_mktag(1), Var_7, 1) = NULL;
    }
    AddrSCCcallarg_8_9 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 1)));
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (I_3));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_7));
    }
    check_hlds__typecheck__LCMC__func__atomic_interface_list_to_var_list__1_2_p_0(Interfaces_5, AddrSCCcallarg_8_9);
  }
  return HeadVar__2_2;
}

static void MR_CALL 
check_hlds__typecheck__LCMC__func__atomic_interface_list_to_var_list__1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__2_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word I_3;
      MR_Word O_4;
      MR_Word Interfaces_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_7;
      MR_Word * AddrSCCcallarg_8_9;
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
      AddrSCCcallarg_8_9 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 1)));
      {
        HeadVar__2_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_11, 0) = ((MR_Box) (I_3));
        MR_hl_field(MR_mktag(1), HeadVar__2_11, 1) = ((MR_Box) (Var_7));
      }
      *AddrOfHeadVar__2_10 = HeadVar__2_11;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Interfaces_5;
      next_value_of_AddrOfHeadVar__2_10 = AddrSCCcallarg_8_9;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_10 = next_value_of_AddrOfHeadVar__2_10;
      continue;
    }
    break;
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
  MR_bool succeeded;
  MR_Word TypeCtorInfo_29_29;
  MR_Word TypeCtorInfo_18_39;
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
  MR_Word UnivCsA_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeConstraintsA_11, (MR_Integer) 0))));
  MR_Word ExistCsA_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeConstraintsA_11, (MR_Integer) 1))));
  MR_Word UnivCsB_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeConstraintsB_14, (MR_Integer) 0))));
  MR_Word ExistCsB_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeConstraintsB_14, (MR_Integer) 1))));
  MR_Word UnivTypesA_34;
  MR_Word UnivTypesB_35;
  MR_Word ExistTypesA_36;
  MR_Word ExistTypesB_37;
  MR_Word Var_40;
  MR_Word Var_41;

  succeeded = mercury__list__same_length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivCsA_30, UnivCsB_32);
  if (succeeded)
  {
    succeeded = mercury__list__same_length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ExistCsA_31, ExistCsB_33);
    if (succeeded)
    {
      succeeded = check_hlds__typecheck__same_structure_2_4_p_0(UnivCsA_30, UnivCsB_32, &UnivTypesA_34, &UnivTypesB_35);
      if (succeeded)
      {
        succeeded = check_hlds__typecheck__same_structure_2_4_p_0(ExistCsA_31, ExistCsB_33, &ExistTypesA_36, &ExistTypesB_37);
        if (succeeded)
        {
          TypeCtorInfo_18_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          ConstrainedTypesA_15 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_18_39, ExistTypesA_36, UnivTypesA_34);
          ConstrainedTypesB_16 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_18_39, ExistTypesB_37, UnivTypesB_35);
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
          succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(TypesListA_19, TypesListB_20, &Var_40);
          if (succeeded)
            succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(TypesListB_20, TypesListA_19, &Var_41);
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
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

static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck__is_head_class_constraint_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgVarTypes_7,
  MR_Word * HeadVar__3_3,
  MR_Word * UnprovenCs_10)
{
  MR_bool succeeded;
  MR_Word UnivCs0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word ExistCs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word UnivCs_8;
  MR_Word ExistCs_9;
  MR_Word Var_12;
  MR_Word Var_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[0]));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__typecheck__restrict_to_head_vars_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ArgVarTypes_7));
  }
  mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_12, UnivCs0_5, &UnivCs_8, UnprovenCs_10);
  mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_12, ExistCs0_6, &ExistCs_9, &Var_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UnivCs_8));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExistCs_9));
  }
}

static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
  MR_Word ArgTypeVars_5,
  MR_Word * ExistQVars_6,
  MR_Word ExternalTypeParams0_7,
  MR_Word * ExternalTypeParams_8)
{
  MR_Word ArgTypeVarsSet_9;
  MR_Word ExternalTypeParamsSet_10;
  MR_Word ExistQVarsSet_11;
  MR_Word UnivQVarsSet_12;
  MR_Word UnivQVars_13;

  mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ArgTypeVars_5, &ArgTypeVarsSet_9);
  mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ExternalTypeParams0_7, &ExternalTypeParamsSet_10);
  mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ArgTypeVarsSet_9, ExternalTypeParamsSet_10, &ExistQVarsSet_11);
  mercury__set__difference_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ArgTypeVarsSet_9, ExistQVarsSet_11, &UnivQVarsSet_12);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ExistQVarsSet_11, ExistQVars_6);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), UnivQVarsSet_12, &UnivQVars_13);
  *ExternalTypeParams_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), UnivQVars_13, ExternalTypeParams0_7);
}

static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
  MR_Word Renaming_4,
  MR_Word Origin0_5,
  MR_Word * Origin_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Origin0_5)) == (MR_Integer) 0);
  MR_Word PFSymNameArity_8;
  MR_Word Constraints0_9;
  MR_Word OriginUser0_7;

  if (succeeded)
  {
    OriginUser0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Origin0_5, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) OriginUser0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OriginUser0_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      PFSymNameArity_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OriginUser0_7, (MR_Integer) 1))));
      Constraints0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OriginUser0_7, (MR_Integer) 2))));
    }
  }
  if (succeeded)
  {
    MR_Word ClassId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_9, (MR_Integer) 0))));
    MR_Word InstanceTypes0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_9, (MR_Integer) 1))));
    MR_Word InstanceConstraints0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_9, (MR_Integer) 2))));
    MR_Word ClassMethodClassContext0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_9, (MR_Integer) 3))));
    MR_Word InstanceTypes_14;
    MR_Word InstanceConstraints_15;
    MR_Word ClassMethodClassContext_16;
    MR_Word Constraints_17;
    MR_Word OriginUser_18;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_4, InstanceTypes0_11, &InstanceTypes_14);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_4, InstanceConstraints0_12, &InstanceConstraints_15);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(Renaming_4, ClassMethodClassContext0_13, &ClassMethodClassContext_16);
    {
      Constraints_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraints_17, 0) = ((MR_Box) (ClassId_10));
      MR_hl_field(MR_mktag(0), Constraints_17, 1) = ((MR_Box) (InstanceTypes_14));
      MR_hl_field(MR_mktag(0), Constraints_17, 2) = ((MR_Box) (InstanceConstraints_15));
      MR_hl_field(MR_mktag(0), Constraints_17, 3) = ((MR_Box) (ClassMethodClassContext_16));
    }
    {
      OriginUser_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), OriginUser_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), OriginUser_18, 1) = ((MR_Box) (PFSymNameArity_8));
      MR_hl_field(MR_mktag(3), OriginUser_18, 2) = ((MR_Box) (Constraints_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Origin_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OriginUser_18));
    }
  }
  else
    *Origin_6 = Origin0_5;
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck____Unify____cons_constraints_action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck____Compare____cons_constraints_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck____Unify____cons_type_assign_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck____Compare____cons_type_assign_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck____Unify____cons_type_assign_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck____Compare____cons_type_assign_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____invariant_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck____Unify____invariant_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____invariant_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck____Compare____invariant_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_need_typecheck_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck____Unify____maybe_need_typecheck_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_need_typecheck_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck____Compare____maybe_need_typecheck_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____next_iteration_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck____Unify____next_iteration_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____next_iteration_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck____Compare____next_iteration_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____number_of_iterations_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck____Unify____number_of_iterations_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____number_of_iterations_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck____Compare____number_of_iterations_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck____Unify____stuff_to_check_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck____Compare____stuff_to_check_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____types_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck____Unify____types_comparison_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck____Compare____types_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck____Compare____types_comparison_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_invariant_set_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_need_typecheck_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_next_iteration_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_number_of_iterations_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_stuff_to_check_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_types_comparison_0);
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
