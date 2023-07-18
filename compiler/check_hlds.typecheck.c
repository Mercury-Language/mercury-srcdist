/*
** Automatically generated from `typecheck.m'
** by the Mercury compiler,
** version rotd-2023-07-18
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
#include "check_hlds.typecheck_error_overload.mih"
#include "check_hlds.typecheck_error_type_assign.mih"
#include "check_hlds.typecheck_error_undef.mih"
#include "check_hlds.typecheck_error_util.mih"
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
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.write_error_spec.mih"
#include "string.builder.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

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

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_assign_0_0[4];

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
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3080__2_1_f_0(
  MR_Word LambdaHeadVar__1_46);

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3080__1_1_f_0(
  MR_Word LambdaHeadVar__1_46);

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1515__1_2_p_0(
  MR_Word GoalType_93,
  MR_Word HeadVar__2_224);

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__handle_stubs_and_non_contiguous_clauses__465__1_2_p_0(
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
  MR_Word FieldSymName_10,
  MR_Word FieldDefn_11,
  MR_Word FunctorConsTypeInfo_12,
  MR_Word OrigExistTVars_13,
  MR_Word * ConsTypeInfo_14);

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
check_hlds__typecheck__typecheck_to_fixpoint_11_p_0(
  MR_Word ProgressStream_12,
  MR_Integer Iteration_13,
  MR_Integer MaxIterations_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word OrigValidPredIds_16,
  MR_Word OrigValidPredIdSet_17,
  MR_Word * FinalValidPredIdSet_18,
  MR_Word * Specs_19,
  MR_Word * FoundSyntaxError_20,
  MR_Word * NumberOfIterations_21);

static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_14_p_0(
  MR_Word ProgressStream_1,
  MR_Word ModuleInfo_2,
  MR_Word ValidPredIdSet_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevPredIdsInfos_0_5,
  MR_Word * STATE_VARIABLE_RevPredIdsInfos_6,
  MR_Word STATE_VARIABLE_NewlyInvalidPredIds_0_7,
  MR_Word * STATE_VARIABLE_NewlyInvalidPredIds_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10,
  MR_Word STATE_VARIABLE_FoundSyntaxError_0_11,
  MR_Word * STATE_VARIABLE_FoundSyntaxError_12,
  MR_Word STATE_VARIABLE_NextIteration_0_13,
  MR_Word * STATE_VARIABLE_NextIteration_14);

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_if_needed_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__typecheck__typecheck_pred_if_needed_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ModuleInfo_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_PredInfo_0_21,
  MR_Word * STATE_VARIABLE_PredInfo_22,
  MR_Word * STATE_VARIABLE_Specs_23,
  MR_Word * FoundSyntaxError_15,
  MR_Word * ContainsErrors_16,
  MR_Word * NextIteration_17);

static void MR_CALL 
check_hlds__typecheck__generate_and_add_stub_clause_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredInfo_0_32,
  MR_Word * STATE_VARIABLE_PredInfo_33);

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Word STATE_VARIABLE_PredInfo_0_77,
  MR_Word * STATE_VARIABLE_PredInfo_78,
  MR_Word STATE_VARIABLE_Specs_0_79,
  MR_Word * STATE_VARIABLE_Specs_80,
  MR_Word * NextIteration_14);

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
check_hlds__typecheck__typecheck_clause_list_9_p_0(
  MR_Word HeadVars_1,
  MR_Word ArgTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevClauses_0_4,
  MR_Word * STATE_VARIABLE_RevClauses_5,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_TypeAssignSet_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

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
  MR_Word * AddrOfRHS_60,
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
  MR_Word STATE_VARIABLE_TypeAssignSet_0_114,
  MR_Word * STATE_VARIABLE_TypeAssignSet_115,
  MR_Word STATE_VARIABLE_Info_0_116,
  MR_Word * STATE_VARIABLE_Info_117);

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
  MR_Word ConsId_8,
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
  MR_Word ConsId_8,
  MR_Integer Arity_9,
  MR_Word GoalId_10,
  MR_Word * ConsInfos_11,
  MR_Word * DataConsErrors_12);

static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ConsId_6,
  MR_Integer Arity_7,
  MR_Word * ConsTypeInfos_8);

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
check_hlds__typecheck__convert_cons_defn_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__convert_cons_defn_list__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * AddrOfHeadVar__6_20);

static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_6_p_1(
  MR_Word Info_7,
  MR_Word GoalId_8,
  MR_Word Action_9,
  MR_Word ConsId_10,
  MR_Word ConsDefn_11,
  MR_Word * ConsTypeInfo_12);

static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

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
  MR_Word ConsTypeInfo_1,
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
check_hlds__typecheck__typecheck_vars_have_arg_types_8_p_0(
  MR_Word VarVectorKind_1,
  MR_Word Context_2,
  MR_Integer CurArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_in_args_type_assigns_5_p_0(
  MR_Integer ArgNum_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck__add_renamed_apart_arg_type_assigns_8_p_0(
  MR_Word Source_1,
  MR_Word PredTypeVarSet_2,
  MR_Word PredExistQVars_3,
  MR_Word PredArgTypes_4,
  MR_Word PredConstraints_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_ArgsTypeAssigns_0_7,
  MR_Word * STATE_VARIABLE_ArgsTypeAssigns_8);

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
check_hlds__typecheck__constraints_have_same_structure_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
check_hlds__typecheck__restrict_constraints_to_head_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__restrict_constraints_to_head_vars_4_p_0(
  MR_Word ArgVarTypes_5,
  MR_Word HeadVar__2_2,
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
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__typecheck_scalar_common_1[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
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
  { (MR_Box) (((MR_Unsigned) 1U << 1)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "tuple")) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
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
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0))
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
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
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
    ((MR_Box) (check_hlds__typecheck__convert_cons_defn_6_p_1_1)),
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
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
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
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_assign_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_assign_0_0 = {
  (MR_String) "cons_type_assign",
  INT16_C(4),
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

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_assign_0_0[1] = { &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_assign_0_0 };

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

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_assign_0[1] = { &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_assign_0_0 };

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_assign_0[1] = { (MR_Integer) 0 };

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
  { (MR_TypeInfo) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_0) }
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
  { (MR_TypeInfo) (&check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
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

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0) };

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

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0) };

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

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1] = { &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1] = { &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1 };

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

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_need_typecheck_0_0[1] = { &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_need_typecheck_0_1 };

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_need_typecheck_0_1[1] = { &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_need_typecheck_0_0 };

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
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3080__2_1_f_0(
  MR_Word LambdaHeadVar__1_46)
{
  MR_Word LambdaHeadVar__2_47 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_46, (MR_Integer) 1))));

  return LambdaHeadVar__2_47;
}

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3080__1_1_f_0(
  MR_Word LambdaHeadVar__1_46)
{
  MR_Word LambdaHeadVar__2_47 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_46, (MR_Integer) 1))));

  return LambdaHeadVar__2_47;
}

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1515__1_2_p_0(
  MR_Word GoalType_93,
  MR_Word HeadVar__2_224)
{
  MR_bool succeeded = (GoalType_93 == HeadVar__2_224);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__handle_stubs_and_non_contiguous_clauses__465__1_2_p_0(
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
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
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
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      check_hlds__typecheck_error_undef____Compare____cons_error_0_0(HeadVar__1_1, Var_16, ArgY1_11);
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

    check_hlds__type_assign____Compare____cons_type_info_0_0(HeadVar__1_1, Var_17, ArgY1_5);
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
check_hlds__typecheck____Compare____invariant_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____invariant_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
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
check_hlds__typecheck____Unify____cons_type_assign_0_0(
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
        TypeInfo_15_15 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = check_hlds__type_assign____Unify____cons_type_info_source_0_0(ArgX4_9, ArgY4_10);
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
    MR_Word Ids_7 = ((MR_Word) ((MR_hl_field(0, Constraint0_5, (MR_Integer) 0))));
    MR_Word ClassName_8 = ((MR_Word) ((MR_hl_field(0, Constraint0_5, (MR_Integer) 1))));
    MR_Word ArgTypes_11;

    (env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9 = ((MR_Word) ((MR_hl_field(0, Constraint0_5, (MR_Integer) 2))));
    check_hlds__typecheck__rename_constraint_3_p_0_3(&env);
    if ((env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, (env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &ArgTypes_11);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Constraint_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Ids_7));
        MR_hl_field(0, base, 1) = ((MR_Box) (ClassName_8));
        MR_hl_field(0, base, 2) = ((MR_Box) (ArgTypes_11));
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
  MR_Word TypesToCheck_7 = ((MR_Word) ((MR_hl_field(0, Constraint_4, (MR_Integer) 2))));
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
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_47;

  conv0_LambdaHeadVar__2_47 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3080__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_47));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck__is_field_access_function_for_type_ctor_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
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
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_12[1]));
        MR_hl_field(0, Var_46, 1) = ((MR_Box) (check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0_1));
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
              Var_86 = ((MR_Word) ((MR_hl_field(0, BodyDu_70, (MR_Integer) 4))));
              succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_68, &GoalType_72);
                succeeded = ((MR_tag((MR_Word) GoalType_72)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_87 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_72, (MR_Integer) 0))) & (MR_Integer) 3);
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
                Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_48));
                MR_hl_field(1, Var_89, 1) = ((MR_Box) (TypeDefn_64));
              }
              {
                MaybeFunctorConsTypeInfo_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeFunctorConsTypeInfo_18, 0) = ((MR_Box) (Var_89));
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
                MaybeFunctorConsTypeInfo_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_scalar_common_2[4]));
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

                  ExistQVars_82 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_78, (MR_Integer) 0))));
                  ExistProgConstraints_77 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_78, (MR_Integer) 1))));
                }
                {
                  ProgConstraints_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ProgConstraints_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, ProgConstraints_81, 1) = ((MR_Box) (ExistProgConstraints_77));
                }
                hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_67, &ClassTable_83);
                hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_83, Var_49, GoalId_10, ProgConstraints_81, &Constraints_84);
                {
                  Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_93, 0) = ((MR_Box) (Var_48));
                  MR_hl_field(0, Var_93, 1) = ((MR_Box) (ConsId_26));
                }
                {
                  Var_92 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_49));
                  MR_hl_field(0, Var_92, 1) = ((MR_Box) (ExistQVars_82));
                  MR_hl_field(0, Var_92, 2) = ((MR_Box) (ConsType_75));
                  MR_hl_field(0, Var_92, 3) = ((MR_Box) (ArgTypes_62));
                  MR_hl_field(0, Var_92, 4) = ((MR_Box) (Constraints_84));
                  MR_hl_field(0, Var_92, 5) = ((MR_Box) (Var_93));
                }
                MaybeFunctorConsTypeInfo_18 = (MR_Word) ((MR_Word) (Var_92));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          check_hlds__typecheck__convert_cons_defn_6_p_1(Info_9, GoalId_10, (MR_Integer) 1, ConsId_26, ConsDefn_37, &MaybeFunctorConsTypeInfo_18);
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

  succeeded = check_hlds__typecheck__rename_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Constraint_6);
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

  succeeded = check_hlds__typecheck__project_constraint_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
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
        parse_tree__prog_type__type_vars_in_type_2_p_0(FieldType_35, &TVarsInField_40);
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
          parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypesWithoutField_43, &TVarsInOtherArgs_44);
          Var_68 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsInField_40);
          Var_70 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsInOtherArgs_44);
          Var_71 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), OrigExistTVars_13);
          Var_69 = mercury__set__intersect_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), Var_70, Var_71);
          mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), Var_68, Var_69, &ExistQVarsInFieldAndOthers_45);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ExistQVarsInFieldAndOthers_45);
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

            mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsInField_40, TVarsInOtherArgs_44, &TVarsOnlyInField0_46);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsOnlyInField0_46, &TVarsOnlyInField_47);
            mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsOnlyInField_47, &NumNewTVars_48);
            mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NumNewTVars_48, &NewTVars_49, TVarSet0_15, &TVarSet_50);
            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), TVarsOnlyInField_47, NewTVars_49, &TVarRenaming_51);
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
            parse_tree__prog_type__type_vars_in_types_2_p_0(Var_72, &CallTVars0_54);
            mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), CallTVars0_54, &CallTVars_55);
            Unproven0_93 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, (MR_Integer) 0))));
            Assumed_94 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, (MR_Integer) 1))));
            Redundant0_95 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, (MR_Integer) 2))));
            Ancestors_96 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, (MR_Integer) 3))));
            {
              Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_101, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[6]));
              MR_hl_field(0, Var_101, 1) = ((MR_Box) (check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0_1));
              MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_101, 3) = ((MR_Box) (CallTVars_55));
            }
            mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_101, Unproven0_93, &NewUnproven0_97);
            {
              Var_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_102, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[2]));
              MR_hl_field(0, Var_102, 1) = ((MR_Box) (check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0_2));
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

            mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ExistQVarsInFieldAndOthers_45, &ExistQVarsInFieldAndOthers1_57);
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

  check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_19);
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
                      MR_Word OoMCtors_44 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_43, (MR_Integer) 0))));
                      MR_Word Ctors_49;
                      MR_Word Var_50;
                      MR_Word Var_51;
                      MR_Box conv1_InvariantSet_38;

                      Ctors_49 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_44);
                      {
                        Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_50, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[1]));
                        MR_hl_field(0, Var_50, 1) = ((MR_Box) (check_hlds__typecheck__check_and_drop_coerce_constraints_5_p_0_1));
                        MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
                        MR_hl_field(0, Var_50, 3) = ((MR_Box) (HeadVar__1_1));
                        MR_hl_field(0, Var_50, 4) = ((MR_Box) (BaseTypeCtor_35));
                        MR_hl_field(0, Var_50, 5) = ((MR_Box) (TypeParams_41));
                      }
                      Var_51 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]));
                      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[4]), Var_50, Ctors_49, ((MR_Box) (Var_51)), &conv1_InvariantSet_38);
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
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Coercion0_11));
                MR_hl_field(1, base, 1) = NULL;
              }
              AddrTailKeepCoercions_62 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
              check_hlds__typecheck__LCMC__pred__check_and_drop_coerce_constraints__1_5_p_0(HeadVar__1_1, Coercions0_12, AddrTailKeepCoercions_62, STATE_VARIABLE_TypeAssign_0_4, STATE_VARIABLE_TypeAssign_5);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word * AddrTailKeepCoercions_63;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Coercion0_11));
              MR_hl_field(1, base, 1) = NULL;
            }
            AddrTailKeepCoercions_63 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
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

  check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_19);
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
                      MR_Word OoMCtors_44 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_43, (MR_Integer) 0))));
                      MR_Word Ctors_49;
                      MR_Word Var_50;
                      MR_Word Var_51;
                      MR_Box conv1_InvariantSet_38;

                      Ctors_49 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_44);
                      {
                        Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_50, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[1]));
                        MR_hl_field(0, Var_50, 1) = ((MR_Box) (check_hlds__typecheck__LCMC__pred__check_and_drop_coerce_constraints__1_5_p_0_1));
                        MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
                        MR_hl_field(0, Var_50, 3) = ((MR_Box) (HeadVar__1_1));
                        MR_hl_field(0, Var_50, 4) = ((MR_Box) (BaseTypeCtor_35));
                        MR_hl_field(0, Var_50, 5) = ((MR_Box) (TypeParams_41));
                      }
                      Var_51 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]));
                      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[4]), Var_50, Ctors_49, ((MR_Box) (Var_51)), &conv1_InvariantSet_38);
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
                HeadVar__3_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__3_65, 0) = ((MR_Box) (Coercion0_11));
                MR_hl_field(1, HeadVar__3_65, 1) = NULL;
              }
              AddrTailKeepCoercions_62 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_65, (MR_Integer) 1)));
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
              HeadVar__3_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__3_70, 0) = ((MR_Box) (Coercion0_11));
              MR_hl_field(1, HeadVar__3_70, 1) = NULL;
            }
            AddrTailKeepCoercions_63 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_70, (MR_Integer) 1)));
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
  MR_Word CtorArgType_13 = ((MR_Word) ((MR_hl_field(0, CtorArg_10, (MR_Integer) 1))));

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

  check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_36);
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
        switch (((MR_Integer) ((MR_hl_field(3, CtorArgType_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_43;
              MR_Word ArgTypes_54 = ((MR_Word) ((MR_hl_field(3, CtorArgType_10, (MR_Integer) 1))));
              MR_Box conv1_STATE_VARIABLE_InvariantSet_36;

              {
                Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_43, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[3]));
                MR_hl_field(0, Var_43, 1) = ((MR_Box) (check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0_1));
                MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_43, 3) = ((MR_Box) (TypeTable_7));
                MR_hl_field(0, Var_43, 4) = ((MR_Box) (CurTypeCtor_8));
                MR_hl_field(0, Var_43, 5) = ((MR_Box) (CurTypeParams_9));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[4]), Var_43, ArgTypes_54, ((MR_Box) (STATE_VARIABLE_InvariantSet_0_35)), &conv1_STATE_VARIABLE_InvariantSet_36);
              *STATE_VARIABLE_InvariantSet_36 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantSet_36));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_55 = ((MR_Word) ((MR_hl_field(3, CtorArgType_10, (MR_Integer) 2))));
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
              MR_Word CtorArgType1_34 = ((MR_Word) ((MR_hl_field(3, CtorArgType_10, (MR_Integer) 1))));
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

  check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_arg_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_16);
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
  MR_Word CtorArgs_15 = ((MR_Word) ((MR_hl_field(0, Ctor_10, (MR_Integer) 3))));
  MR_Word Var_20;
  MR_Box conv1_STATE_VARIABLE_InvariantSet_19;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[2]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_6_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (TypeTable_7));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (CurTypeCtor_8));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (CurTypeParams_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[4]), Var_20, CtorArgs_15, ((MR_Box) (STATE_VARIABLE_InvariantSet_0_18)), &conv1_STATE_VARIABLE_InvariantSet_19);
  *STATE_VARIABLE_InvariantSet_19 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantSet_19));
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

  check_hlds__typecheck__build_type_param_variance_restrictions_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_19);
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
      succeeded = parse_tree__prog_type__type_is_ground_except_vars_2_p_0(FromType_25, ExistQTVars_17);
      if (succeeded)
        succeeded = parse_tree__prog_type__type_is_ground_except_vars_2_p_0(ToType_26, ExistQTVars_17);
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
              MR_Word OoMCtors_64 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_63, (MR_Integer) 0))));
              MR_Word Ctors_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Box conv1_InvariantSet_58;

              Ctors_69 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_64);
              {
                Var_70 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_70, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[1]));
                MR_hl_field(0, Var_70, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_coerce_2_8_p_0_1));
                MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_70, 3) = ((MR_Box) (TypeTable_27));
                MR_hl_field(0, Var_70, 4) = ((MR_Box) (BaseTypeCtor_55));
                MR_hl_field(0, Var_70, 5) = ((MR_Box) (TypeParams_61));
              }
              Var_71 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]));
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[4]), Var_70, Ctors_69, ((MR_Box) (Var_71)), &conv1_InvariantSet_58);
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
              MR_Word ExistQTVars_34;
              MR_Word TypeBindings0_35;
              MR_Word TypeBindings_36;

              check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(STATE_VARIABLE_TypeAssign_0_22, &ExistQTVars_34);
              check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_22, &TypeBindings0_35);
              succeeded = parse_tree__prog_type__type_unify_5_p_0(FromType_18, ToType_20, ExistQTVars_34, TypeBindings0_35, &TypeBindings_36);
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
                    MR_Word BuiltinType_37 = ((MR_Word) ((MR_hl_field(2, FromType_18, (MR_Integer) 0))));
                    MR_Word Var_71;

                    succeeded = ((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Var_71 = ((MR_Word) ((MR_hl_field(2, ToType_20, (MR_Integer) 0))));
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
                  switch (((MR_Integer) ((MR_hl_field(3, FromType_18, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Kind_50 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 2))));
                        MR_Word ArgsA_66 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 1))));
                        MR_Word ArgsB_67;
                        MR_Word Var_72;

                        succeeded = ((((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ToType_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          ArgsB_67 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 1))));
                          Var_72 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 2))));
                          succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_50, Var_72);
                          if (succeeded)
                            succeeded = check_hlds__typecheck__compare_types_corresponding_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, ArgsA_66, ArgsB_67, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word PredOrFunc_51 = ((MR_Unsigned) ((MR_hl_field(3, FromType_18, (MR_Integer) 1))) & (MR_Integer) 1);
                        MR_Word Purity_53 = ((MR_Unsigned) ((MR_hl_field(3, FromType_18, (MR_Integer) 4))) & (MR_Integer) 3);
                        MR_Word Var_63;
                        MR_Word ArgsA_68 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 2))));
                        MR_Word ArgsB_69;
                        MR_Word Var_73;
                        MR_Word Var_74;

                        succeeded = ((((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ToType_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_73 = ((MR_Unsigned) ((MR_hl_field(3, ToType_20, (MR_Integer) 1))) & (MR_Integer) 1);
                          ArgsB_69 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 2))));
                          Var_74 = ((MR_Unsigned) ((MR_hl_field(3, ToType_20, (MR_Integer) 4))) & (MR_Integer) 3);
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
                        MR_Word TypeA1_59 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 1))));
                        MR_Word TypeB1_60;
                        MR_Word Kind_70 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 2))));
                        MR_Word Var_76;

                        succeeded = ((((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ToType_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
                        if (succeeded)
                        {
                          TypeB1_60 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 1))));
                          Var_76 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 2))));
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
      MR_Word ExistQTVars_20;
      MR_Word TypeBindings0_21;
      MR_Word TypeBindings_22;

      check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(STATE_VARIABLE_TypeAssign_0_18, &ExistQTVars_20);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_18, &TypeBindings0_21);
      succeeded = parse_tree__prog_type__type_unify_5_p_0(TypeA_11, TypeB_12, ExistQTVars_20, TypeBindings0_21, &TypeBindings_22);
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
            MR_Word BuiltinType_23 = ((MR_Word) ((MR_hl_field(2, TypeA_11, (MR_Integer) 0))));
            MR_Word Var_57;

            succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_57 = ((MR_Word) ((MR_hl_field(2, TypeB_12, (MR_Integer) 0))));
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
          switch (((MR_Integer) ((MR_hl_field(3, TypeA_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Kind_36 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 2))));
                MR_Word ArgsA_52 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 1))));
                MR_Word ArgsB_53;
                MR_Word Var_58;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgsB_53 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 1))));
                  Var_58 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_36, Var_58);
                  if (succeeded)
                    succeeded = check_hlds__typecheck__compare_types_corresponding_7_p_0(TypeTable_8, TVarSet_9, Comparison_10, ArgsA_52, ArgsB_53, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_37 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_11, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Purity_39 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_11, (MR_Integer) 4))) & (MR_Integer) 3);
                MR_Word Var_49;
                MR_Word ArgsA_54 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 2))));
                MR_Word ArgsB_55;
                MR_Word Var_59;
                MR_Word Var_60;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_59 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_12, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgsB_55 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 2))));
                  Var_60 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_12, (MR_Integer) 4))) & (MR_Integer) 3);
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
                MR_Word TypeA1_45 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 1))));
                MR_Word TypeB1_46;
                MR_Word Kind_56 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 2))));
                MR_Word Var_62;
                MR_Word next_value_of_TypeA_11;
                MR_Word next_value_of_TypeB_12;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_46 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 1))));
                  Var_62 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 2))));
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
          succeeded = parse_tree__prog_type__type_unify_5_p_0(TypeA_17, TypeB_19, ExistQTVars_29, TypeBindings0_30, &TypeBindings_31);
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
                MR_Word BuiltinType_32 = ((MR_Word) ((MR_hl_field(2, TypeA_17, (MR_Integer) 0))));
                MR_Word Var_66;

                succeeded = ((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_66 = ((MR_Word) ((MR_hl_field(2, TypeB_19, (MR_Integer) 0))));
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
              switch (((MR_Integer) ((MR_hl_field(3, TypeA_17, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Kind_45 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 2))));
                    MR_Word ArgsA_61 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 1))));
                    MR_Word ArgsB_62;
                    MR_Word Var_67;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgsB_62 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 1))));
                      Var_67 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_45, Var_67);
                      if (succeeded)
                        succeeded = check_hlds__typecheck__compare_types_corresponding_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgsA_61, ArgsB_62, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PredOrFunc_46 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Purity_48 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, (MR_Integer) 4))) & (MR_Integer) 3);
                    MR_Word Var_58;
                    MR_Word ArgsA_63 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 2))));
                    MR_Word ArgsB_64;
                    MR_Word Var_68;
                    MR_Word Var_69;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_68 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_19, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgsB_64 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 2))));
                      Var_69 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_19, (MR_Integer) 4))) & (MR_Integer) 3);
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
                    MR_Word TypeA1_54 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 1))));
                    MR_Word TypeB1_55;
                    MR_Word Kind_65 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 2))));
                    MR_Word Var_71;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_19, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      TypeB1_55 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 1))));
                      Var_71 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 2))));
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
    succeeded = parse_tree__prog_type__type_unify_5_p_0(ConsType_6, TypeY_13, ExistQTVars_20, TypeBindings0_21, &TypeBindings_22);
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

static void MR_CALL 
check_hlds__typecheck__report_invalid_coercion_4_p_0(
  MR_Word TypeAssign_5,
  MR_Word Coercion_6,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word FromType0_8 = ((MR_Word) ((MR_hl_field(0, Coercion_6, (MR_Integer) 0))));
  MR_Word ToType0_9 = ((MR_Word) ((MR_hl_field(0, Coercion_6, (MR_Integer) 1))));
  MR_Word Context_10 = ((MR_Word) ((MR_hl_field(0, Coercion_6, (MR_Integer) 2))));
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
    MR_Word _ClassName_5 = ((MR_Word) ((MR_hl_field(0, Constraint_4, (MR_Integer) 0))));

    (env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6 = ((MR_Word) ((MR_hl_field(0, Constraint_4, (MR_Integer) 1))));
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

  check_hlds__typecheck__check_mention_existq_var_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ExistQVarNum_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_23);
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
  Var_23 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    Impl_17 = ((MR_Word) ((MR_hl_field(3, Var_23, (MR_Integer) 7))));
    {
      MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, Clause_8, (MR_Integer) 3))));
      MR_Word Var_24;
      MR_Box conv3__N_20;
      MR_Box conv2_STATE_VARIABLE_Info_22;

      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_24, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[2]));
        MR_hl_field(0, Var_24, 1) = ((MR_Box) (check_hlds__typecheck__check_existq_clause_5_p_0_1));
        MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_24, 3) = ((MR_Box) (Context_19));
        MR_hl_field(0, Var_24, 4) = ((MR_Box) (TypeVarSet_6));
        MR_hl_field(0, Var_24, 5) = ((MR_Box) (Impl_17));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_24, ExistQVars_7, ((MR_Box) ((MR_Integer) 1)), &conv3__N_20, ((MR_Box) (STATE_VARIABLE_Info_0_21)), &conv2_STATE_VARIABLE_Info_22);
      *STATE_VARIABLE_Info_22 = ((MR_Word) (conv2_STATE_VARIABLE_Info_22));
    }
  }
  else
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
}

void MR_CALL 
check_hlds__typecheck__typecheck_module_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word * Specs_9,
  MR_Word * FoundSyntaxError_10,
  MR_Word * NumberOfIterations_11)
{
  MR_Word Globals_12;
  MR_Integer MaxIterations_13;
  MR_Word OrigValidPredIdSet_14;
  MR_Word OrigValidPredIds_15;
  MR_Word FinalValidPredIdSet_16;
  MR_Word CheckSpecs_17;
  MR_Word InferSpecs_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_19, &Globals_12);
  libs__globals__lookup_int_option_3_p_0(Globals_12, (MR_Integer) 227, &MaxIterations_13);
  hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(STATE_VARIABLE_ModuleInfo_0_19, &OrigValidPredIdSet_14);
  OrigValidPredIds_15 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), OrigValidPredIdSet_14);
  check_hlds__typecheck__typecheck_to_fixpoint_11_p_0(ProgressStream_7, (MR_Integer) 1, MaxIterations_13, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20, OrigValidPredIds_15, OrigValidPredIdSet_14, &FinalValidPredIdSet_16, &CheckSpecs_17, FoundSyntaxError_10, NumberOfIterations_11);
  check_hlds__typecheck_msgs__construct_type_inference_messages_5_p_0(*STATE_VARIABLE_ModuleInfo_20, FinalValidPredIdSet_16, OrigValidPredIds_15, (MR_Word) ((MR_Unsigned) 0U), &InferSpecs_18);
  *Specs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), InferSpecs_18, CheckSpecs_17);
}

static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_11_p_0(
  MR_Word ProgressStream_12,
  MR_Integer Iteration_13,
  MR_Integer MaxIterations_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word OrigValidPredIds_16,
  MR_Word OrigValidPredIdSet_17,
  MR_Word * FinalValidPredIdSet_18,
  MR_Word * Specs_19,
  MR_Word * FoundSyntaxError_20,
  MR_Word * NumberOfIterations_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word PredIdTable0_22;
    MR_Word PredIdsInfos0_23;
    MR_Word RevPredIdsInfos_24;
    MR_Word NewlyInvalidPredIds_25;
    MR_Word CurSpecs_26;
    MR_Word CurFoundSyntaxError_27;
    MR_Word NextIteration_28;
    MR_Word PredIdTable_29;
    MR_Word NewValidPredIdSet_30;
    MR_Word Globals_31;
    MR_Word STATE_VARIABLE_ModuleInfo_44_44;
    MR_Word STATE_VARIABLE_ModuleInfo_45_45;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &PredIdTable0_22);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_22, &PredIdsInfos0_23);
    check_hlds__typecheck__typecheck_module_one_iteration_14_p_0(ProgressStream_12, STATE_VARIABLE_ModuleInfo_0_37, OrigValidPredIdSet_17, PredIdsInfos0_23, (MR_Word) ((MR_Unsigned) 0U), &RevPredIdsInfos_24, (MR_Word) ((MR_Unsigned) 0U), &NewlyInvalidPredIds_25, (MR_Word) ((MR_Unsigned) 0U), &CurSpecs_26, (MR_Integer) 0, &CurFoundSyntaxError_27, (MR_Integer) 0, &NextIteration_28);
    mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), RevPredIdsInfos_24, &PredIdTable_29);
    hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_29, STATE_VARIABLE_ModuleInfo_0_37, &STATE_VARIABLE_ModuleInfo_44_44);
    hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(NewlyInvalidPredIds_25, STATE_VARIABLE_ModuleInfo_44_44, &STATE_VARIABLE_ModuleInfo_45_45);
    hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(STATE_VARIABLE_ModuleInfo_45_45, &NewValidPredIdSet_30);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_45_45, &Globals_31);
    succeeded = (NextIteration_28 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_Word Var_46;

      Var_46 = parse_tree__error_util__contains_errors_2_f_0(Globals_31, CurSpecs_26);
      succeeded = (Var_46 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      *FinalValidPredIdSet_18 = NewValidPredIdSet_30;
      *Specs_19 = CurSpecs_26;
      *FoundSyntaxError_20 = CurFoundSyntaxError_27;
      *NumberOfIterations_21 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_45_45;
    }
    else
    {
      MR_Word DebugTypes_32;

      libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 87, &DebugTypes_32);
      switch (DebugTypes_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProgressSpecs_33;
            MR_Word ModuleName_35;
            MR_Word OutputStream_36;

            check_hlds__typecheck_msgs__construct_type_inference_messages_5_p_0(STATE_VARIABLE_ModuleInfo_45_45, NewValidPredIdSet_30, OrigValidPredIds_16, (MR_Word) ((MR_Unsigned) 0U), &ProgressSpecs_33);
            hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_45_45, &ModuleName_35);
            libs__globals__get_debug_output_stream_5_p_0(Globals_31, ModuleName_35, &OutputStream_36);
            parse_tree__write_error_spec__write_error_specs_5_p_0(OutputStream_36, Globals_31, ProgressSpecs_33);
          }
          break;
      }
      succeeded = (Iteration_13 < MaxIterations_14);
      if (succeeded)
      {
        MR_Integer Var_52 = (MR_Integer) ((MR_Unsigned) Iteration_13 + (MR_Unsigned) 1);
        MR_Integer next_value_of_Iteration_13 = Var_52;
        MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_37 = STATE_VARIABLE_ModuleInfo_45_45;

        // direct tailcall eliminated
        ;
        Iteration_13 = next_value_of_Iteration_13;
        STATE_VARIABLE_ModuleInfo_0_37 = next_value_of_STATE_VARIABLE_ModuleInfo_0_37;
        continue;
      }
      else
      {
        MR_Word Var_55;

        *FinalValidPredIdSet_18 = NewValidPredIdSet_30;
        Var_55 = check_hlds__typecheck_msgs__typecheck_report_max_iterations_exceeded_1_f_0(MaxIterations_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Specs_19 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_55));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *FoundSyntaxError_20 = CurFoundSyntaxError_27;
        *NumberOfIterations_21 = (MR_Integer) 1;
        *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_45_45;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_14_p_0(
  MR_Word ProgressStream_1,
  MR_Word ModuleInfo_2,
  MR_Word ValidPredIdSet_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevPredIdsInfos_0_5,
  MR_Word * STATE_VARIABLE_RevPredIdsInfos_6,
  MR_Word STATE_VARIABLE_NewlyInvalidPredIds_0_7,
  MR_Word * STATE_VARIABLE_NewlyInvalidPredIds_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10,
  MR_Word STATE_VARIABLE_FoundSyntaxError_0_11,
  MR_Word * STATE_VARIABLE_FoundSyntaxError_12,
  MR_Word STATE_VARIABLE_NextIteration_0_13,
  MR_Word * STATE_VARIABLE_NextIteration_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NextIteration_14 = STATE_VARIABLE_NextIteration_0_13;
      *STATE_VARIABLE_FoundSyntaxError_12 = STATE_VARIABLE_FoundSyntaxError_0_11;
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
      *STATE_VARIABLE_NewlyInvalidPredIds_8 = STATE_VARIABLE_NewlyInvalidPredIds_0_7;
      *STATE_VARIABLE_RevPredIdsInfos_6 = STATE_VARIABLE_RevPredIdsInfos_0_5;
    }
    else
    {
      MR_Word HeadPredIdInfo0_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TailPredIdsInfos0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word PredId_43 = ((MR_Word) ((MR_hl_field(0, HeadPredIdInfo0_36, (MR_Integer) 0))));
      MR_Word PredInfo0_44 = ((MR_Word) ((MR_hl_field(0, HeadPredIdInfo0_36, (MR_Integer) 1))));

      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_44);
      if (!(succeeded))
      {
        succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_3, ((MR_Box) (PredId_43)));
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_RevPredIdsInfos_61_61;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_RevPredIdsInfos_0_5;

        {
          STATE_VARIABLE_RevPredIdsInfos_61_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevPredIdsInfos_61_61, 0) = ((MR_Box) (HeadPredIdInfo0_36));
          MR_hl_field(1, STATE_VARIABLE_RevPredIdsInfos_61_61, 1) = ((MR_Box) (STATE_VARIABLE_RevPredIdsInfos_0_5));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = TailPredIdsInfos0_37;
        next_value_of_STATE_VARIABLE_RevPredIdsInfos_0_5 = STATE_VARIABLE_RevPredIdsInfos_61_61;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_RevPredIdsInfos_0_5 = next_value_of_STATE_VARIABLE_RevPredIdsInfos_0_5;
        continue;
      }
      else
      {
        MR_Word PredInfo_45;
        MR_Word PredSpecs_46;
        MR_Word PredSyntaxError_47;
        MR_Word ContainsErrors_48;
        MR_Word PredNextIteration_49;
        MR_Word HeadPredIdInfo_50;
        MR_Word STATE_VARIABLE_NewlyInvalidPredIds_67_67;
        MR_Word STATE_VARIABLE_Specs_68_68;
        MR_Word STATE_VARIABLE_FoundSyntaxError_69_69;
        MR_Word STATE_VARIABLE_NextIteration_70_70;
        MR_Word STATE_VARIABLE_RevPredIdsInfos_71_71;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_RevPredIdsInfos_0_5;
        MR_Word next_value_of_STATE_VARIABLE_NewlyInvalidPredIds_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;
        MR_Word next_value_of_STATE_VARIABLE_FoundSyntaxError_0_11;
        MR_Word next_value_of_STATE_VARIABLE_NextIteration_0_13;

        check_hlds__typecheck__typecheck_pred_if_needed_9_p_0(ProgressStream_1, ModuleInfo_2, PredId_43, PredInfo0_44, &PredInfo_45, &PredSpecs_46, &PredSyntaxError_47, &ContainsErrors_48, &PredNextIteration_49);
        switch (ContainsErrors_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_NewlyInvalidPredIds_67_67 = STATE_VARIABLE_NewlyInvalidPredIds_0_7;
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_NewlyInvalidPredIds_67_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_NewlyInvalidPredIds_67_67, 0) = ((MR_Box) (PredId_43));
              MR_hl_field(1, STATE_VARIABLE_NewlyInvalidPredIds_67_67, 1) = ((MR_Box) (STATE_VARIABLE_NewlyInvalidPredIds_0_7));
            }
            break;
        }
        {
          HeadPredIdInfo_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadPredIdInfo_50, 0) = ((MR_Box) (PredId_43));
          MR_hl_field(0, HeadPredIdInfo_50, 1) = ((MR_Box) (PredInfo_45));
        }
        STATE_VARIABLE_Specs_68_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), PredSpecs_46, STATE_VARIABLE_Specs_0_9);
        switch (PredSyntaxError_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_FoundSyntaxError_69_69 = STATE_VARIABLE_FoundSyntaxError_0_11;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_FoundSyntaxError_69_69 = (MR_Integer) 1;
            break;
        }
        switch (PredNextIteration_49) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_NextIteration_70_70 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_NextIteration_70_70 = STATE_VARIABLE_NextIteration_0_13;
            break;
        }
        {
          STATE_VARIABLE_RevPredIdsInfos_71_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevPredIdsInfos_71_71, 0) = ((MR_Box) (HeadPredIdInfo_50));
          MR_hl_field(1, STATE_VARIABLE_RevPredIdsInfos_71_71, 1) = ((MR_Box) (STATE_VARIABLE_RevPredIdsInfos_0_5));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = TailPredIdsInfos0_37;
        next_value_of_STATE_VARIABLE_RevPredIdsInfos_0_5 = STATE_VARIABLE_RevPredIdsInfos_71_71;
        next_value_of_STATE_VARIABLE_NewlyInvalidPredIds_0_7 = STATE_VARIABLE_NewlyInvalidPredIds_67_67;
        next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_68_68;
        next_value_of_STATE_VARIABLE_FoundSyntaxError_0_11 = STATE_VARIABLE_FoundSyntaxError_69_69;
        next_value_of_STATE_VARIABLE_NextIteration_0_13 = STATE_VARIABLE_NextIteration_70_70;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_RevPredIdsInfos_0_5 = next_value_of_STATE_VARIABLE_RevPredIdsInfos_0_5;
        STATE_VARIABLE_NewlyInvalidPredIds_0_7 = next_value_of_STATE_VARIABLE_NewlyInvalidPredIds_0_7;
        STATE_VARIABLE_Specs_0_9 = next_value_of_STATE_VARIABLE_Specs_0_9;
        STATE_VARIABLE_FoundSyntaxError_0_11 = next_value_of_STATE_VARIABLE_FoundSyntaxError_0_11;
        STATE_VARIABLE_NextIteration_0_13 = next_value_of_STATE_VARIABLE_NextIteration_0_13;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_if_needed_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck__IntroducedFrom__pred__handle_stubs_and_non_contiguous_clauses__465__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck__typecheck_pred_if_needed_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ModuleInfo_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_PredInfo_0_21,
  MR_Word * STATE_VARIABLE_PredInfo_22,
  MR_Word * STATE_VARIABLE_Specs_23,
  MR_Word * FoundSyntaxError_15,
  MR_Word * ContainsErrors_16,
  MR_Word * NextIteration_17)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_PredInfo_24_24;
  MR_Word ClausesInfo0_29;
  MR_Word ClausesRep0_30;
  MR_Word IsEmpty_32;
  MR_Word _ItemNumbers_31;

  {
    MR_Word Origin_34;
    MR_Word SpecialPredId_35;
    MR_Word TypeCtor_36;
    MR_Word TypeTable_37;
    MR_Word TypeDefn_38;
    MR_Word Body_39;
    MR_Word Var_40;
    MR_Word TypeCtorInfo_13_42;
    MR_Word Var_41;

    succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(STATE_VARIABLE_PredInfo_0_21);
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_0_21, &Origin_34);
      succeeded = ((MR_tag((MR_Word) Origin_34)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_40 = ((MR_Word) ((MR_hl_field(1, Origin_34, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
        if (succeeded)
        {
          SpecialPredId_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_40, (MR_Integer) 0))) & (MR_Integer) 3);
          TypeCtor_36 = ((MR_Word) ((MR_hl_field(0, Var_40, (MR_Integer) 1))));
          Var_41 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
          TypeCtorInfo_13_42 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_13_42, ((MR_Box) (TypeCtor_36)), Var_41);
          succeeded = !(succeeded);
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_11, &TypeTable_37);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_37, TypeCtor_36, &TypeDefn_38);
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_38, &Body_39);
            succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(ModuleInfo_11, SpecialPredId_35, Body_39);
          }
        }
      }
      succeeded = !(succeeded);
    }
  }
  if (!(succeeded))
  {
    MR_Word Markers_28;
    MR_Word Var_33;

    succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(STATE_VARIABLE_PredInfo_0_21);
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_21, &Markers_28);
      Var_33 = (MR_Integer) 1;
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_28, Var_33);
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_21, &ClausesInfo0_29);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_29, &ClausesRep0_30, &_ItemNumbers_31);
    IsEmpty_32 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_30);
    switch (IsEmpty_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_PredInfo_24_24 = STATE_VARIABLE_PredInfo_0_21;
        break;
      case (MR_Integer) 1:
        hlds__hlds_pred__pred_info_mark_as_external_2_p_0(STATE_VARIABLE_PredInfo_0_21, &STATE_VARIABLE_PredInfo_24_24);
        break;
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *STATE_VARIABLE_PredInfo_22 = STATE_VARIABLE_PredInfo_24_24;
    *STATE_VARIABLE_Specs_23 = (MR_Word) ((MR_Unsigned) 0U);
    *FoundSyntaxError_15 = (MR_Integer) 0;
    *ContainsErrors_16 = (MR_Integer) 0;
    *NextIteration_17 = (MR_Integer) 0;
  }
  else
  {
    MR_Word ClausesInfo0_18;
    MR_Word MaybeNeedTypecheck_19;
    MR_Word STATE_VARIABLE_PredInfo_26_26;
    MR_Word STATE_VARIABLE_Specs_27_27;
    MR_Word Markers0_43;
    MR_Word ClausesInfo0_44;
    MR_Word ClausesRep0_45;
    MR_Word ItemNumbers0_46;
    MR_Word ClausesRep0IsEmpty_47;
    MR_Word ClausesInfo1_49;
    MR_Word ClausesRep1_50;
    MR_Word ClausesRep1IsEmpty_52;
    MR_Word STATE_VARIABLE_Specs_41_67;
    MR_Word STATE_VARIABLE_PredInfo_42_68;
    MR_Word _ItemNumbers_51;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_21, &ClausesInfo0_18);
    hlds__hlds_clauses__clauses_info_get_had_syntax_errors_2_p_0(ClausesInfo0_18, FoundSyntaxError_15);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_21, &Markers0_43);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_21, &ClausesInfo0_44);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_44, &ClausesRep0_45, &ItemNumbers0_46);
    ClausesRep0IsEmpty_47 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_45);
    switch (ClausesRep0IsEmpty_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__typecheck_msgs__maybe_check_for_and_report_any_non_contiguous_clauses_5_p_0(ModuleInfo_11, PredId_12, STATE_VARIABLE_PredInfo_0_21, ItemNumbers0_46, &STATE_VARIABLE_Specs_41_67);
          STATE_VARIABLE_PredInfo_42_68 = STATE_VARIABLE_PredInfo_0_21;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Globals_48;
          MR_Word Var_66;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_48);
          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_48, (MR_Integer) 222, (MR_Integer) 1);
          if (succeeded)
          {
            Var_66 = (MR_Integer) 11;
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_43, Var_66);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            STATE_VARIABLE_Specs_41_67 = check_hlds__typecheck_error_undef__maybe_report_no_clauses_stub_3_f_0(ModuleInfo_11, PredId_12, STATE_VARIABLE_PredInfo_0_21);
            check_hlds__typecheck__generate_and_add_stub_clause_4_p_0(ModuleInfo_11, PredId_12, STATE_VARIABLE_PredInfo_0_21, &STATE_VARIABLE_PredInfo_42_68);
          }
          else
          {
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_43, (MR_Integer) 1);
            if (succeeded)
            {
              STATE_VARIABLE_Specs_41_67 = (MR_Word) ((MR_Unsigned) 0U);
              check_hlds__typecheck__generate_and_add_stub_clause_4_p_0(ModuleInfo_11, PredId_12, STATE_VARIABLE_PredInfo_0_21, &STATE_VARIABLE_PredInfo_42_68);
            }
            else
            {
              STATE_VARIABLE_Specs_41_67 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_PredInfo_42_68 = STATE_VARIABLE_PredInfo_0_21;
            }
          }
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_42_68, &ClausesInfo1_49);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo1_49, &ClausesRep1_50, &_ItemNumbers_51);
    ClausesRep1IsEmpty_52 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep1_50);
    switch (ClausesRep1IsEmpty_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (*FoundSyntaxError_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MaybeNeedTypecheck_19 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_Specs_27_27 = STATE_VARIABLE_Specs_41_67;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Specs_27_27 = (MR_Word) ((MR_Unsigned) 0U);
                MaybeNeedTypecheck_19 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_scalar_common_2[0]));
              }
              break;
          }
          STATE_VARIABLE_PredInfo_26_26 = STATE_VARIABLE_PredInfo_42_68;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ContainsErrors_63;
          MR_Word Var_70;

          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_70, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[5]));
            MR_hl_field(0, Var_70, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_pred_if_needed_9_p_0_1));
            MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_70, 3) = ((MR_Box) (STATE_VARIABLE_Specs_41_67));
            MR_hl_field(0, Var_70, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140check_hlds.typecheck.handle_stubs_and_non_contiguous_clauses\'/7", (MR_String) "starting Specs not empty");
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_43, (MR_Integer) 11);
          if (succeeded)
          {
            MR_Word HeadVars_53;
            MR_Word ArgTypes_56;
            MR_Word VarTypes_57;
            MR_Word VarSet_58;
            MR_Word VarTable_59;
            MR_Word ClausesInfo2_60;
            MR_Word ClausesInfo_61;
            MR_Word HeadVarsInclExistentials_62;
            MR_Word STATE_VARIABLE_PredInfo_53_75;
            MR_Word _ArgTypeVarSet_54;
            MR_Word _ExistQVars_55;

            hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo1_49, &HeadVars_53);
            hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_42_68, &_ArgTypeVarSet_54, &_ExistQVars_55, &ArgTypes_56);
            parse_tree__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_53, ArgTypes_56, &VarTypes_57);
            hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo1_49, &VarSet_58);
            hlds__hlds_pred__corresponding_vars_types_to_var_table_5_p_0(ModuleInfo_11, VarSet_58, HeadVars_53, ArgTypes_56, &VarTable_59);
            hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(VarTypes_57, ClausesInfo1_49, &ClausesInfo2_60);
            hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_59, ClausesInfo2_60, &ClausesInfo_61);
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_61, STATE_VARIABLE_PredInfo_42_68, &STATE_VARIABLE_PredInfo_53_75);
            parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypes_56, &HeadVarsInclExistentials_62);
            hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(HeadVarsInclExistentials_62, STATE_VARIABLE_PredInfo_53_75, &STATE_VARIABLE_PredInfo_26_26);
            ContainsErrors_63 = (MR_Integer) 0;
            STATE_VARIABLE_Specs_27_27 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            ContainsErrors_63 = (MR_Integer) 1;
            switch (*FoundSyntaxError_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Specs_27_27 = check_hlds__typecheck_error_undef__maybe_report_no_clauses_3_f_0(ModuleInfo_11, PredId_12, STATE_VARIABLE_PredInfo_42_68);
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Specs_27_27 = (MR_Word) ((MR_Unsigned) 0U);
                break;
            }
            STATE_VARIABLE_PredInfo_26_26 = STATE_VARIABLE_PredInfo_42_68;
          }
          {
            MaybeNeedTypecheck_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeNeedTypecheck_19, 0) = (MR_Box) (((((MR_Unsigned) (ContainsErrors_63) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          }
        }
        break;
    }
    if ((MaybeNeedTypecheck_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Globals_20;

      check_hlds__typecheck__do_typecheck_pred_8_p_0(ProgressStream_10, ModuleInfo_11, PredId_12, STATE_VARIABLE_PredInfo_26_26, STATE_VARIABLE_PredInfo_22, STATE_VARIABLE_Specs_27_27, STATE_VARIABLE_Specs_23, NextIteration_17);
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_20);
      *ContainsErrors_16 = parse_tree__error_util__contains_errors_2_f_0(Globals_20, *STATE_VARIABLE_Specs_23);
    }
    else
    {
      *ContainsErrors_16 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeNeedTypecheck_19, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      *NextIteration_17 = ((MR_Unsigned) ((MR_hl_field(1, MaybeNeedTypecheck_19, (MR_Integer) 0))) & (MR_Integer) 1);
      *STATE_VARIABLE_PredInfo_22 = STATE_VARIABLE_PredInfo_26_26;
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_27_27;
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
  VarSet0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_34_34, (MR_Integer) 0))));
  RttiVarMaps_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_34_34, (MR_Integer) 3))));
  TVarNameMap_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_34_34, (MR_Integer) 4))));
  ArgVec_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_34_34, (MR_Integer) 5))));
  PredPieces_19 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 0, PredId_6);
  PredName_20 = parse_tree__write_error_spec__error_pieces_to_string_1_f_0(PredPieces_19);
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
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (PredNameVar_44));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_58 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_5, (MR_Integer) 0, Var_55, CalleeName_48, (MR_Word) ((MR_Unsigned) 0U), Var_57, Var_58, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_45, &CallGoal_49);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_45, &GoalInfo_50);
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (CallGoal_49));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (UnifyGoal_46));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_64, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_64, 2) = ((MR_Box) (Var_66));
  }
  {
    Body_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Body_51, 0) = ((MR_Box) (Var_64));
    MR_hl_field(0, Body_51, 1) = ((MR_Box) (GoalInfo_50));
  }
  {
    StubClause_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StubClause_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, StubClause_24, 1) = ((MR_Box) (Body_51));
    MR_hl_field(0, StubClause_24, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, StubClause_24, 3) = ((MR_Box) (Context_45));
    MR_hl_field(0, StubClause_24, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_pred__make_var_table_4_p_0(ModuleInfo_5, VarSet_25, VarTypes_26, &VarTable_27);
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (StubClause_24));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_clauses__set_clause_list_2_p_0(Var_36, &ClausesRep_28);
  ItemNumbers_29 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  {
    STATE_VARIABLE_ClausesInfo_38_38 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_38_38, 0) = ((MR_Box) (VarSet_25));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_38_38, 1) = ((MR_Box) (VarTypes_26));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_38_38, 2) = ((MR_Box) (VarTable_27));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_38_38, 3) = ((MR_Box) (RttiVarMaps_12));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_38_38, 4) = ((MR_Box) (TVarNameMap_13));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_38_38, 5) = ((MR_Box) (ArgVec_14));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_38_38, 6) = ((MR_Box) (ClausesRep_28));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_38_38, 7) = ((MR_Box) (ItemNumbers_29));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_38_38, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_38_38, STATE_VARIABLE_PredInfo_0_32, &STATE_VARIABLE_PredInfo_41_41);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_41_41, &Markers0_30);
  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, Markers0_30, &Markers_31);
  hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_31, STATE_VARIABLE_PredInfo_41_41, STATE_VARIABLE_PredInfo_33);
}

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_22;

  check_hlds__typecheck__check_existq_clause_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Word STATE_VARIABLE_PredInfo_0_77,
  MR_Word * STATE_VARIABLE_PredInfo_78,
  MR_Word STATE_VARIABLE_Specs_0_79,
  MR_Word * STATE_VARIABLE_Specs_80,
  MR_Word * NextIteration_14)
{
  MR_bool succeeded;
  MR_Word ClausesRep0_19;
  MR_Word ItemNumbers_20;
  MR_Word HeadVars_21;
  MR_Word ClauseVarSet_22;
  MR_Word ExplicitVarTypes0_23;
  MR_Word PredStatus_24;
  MR_Word TypeVarSet0_25;
  MR_Word ExistQVars0_27;
  MR_Word ArgTypes0_28;
  MR_Word Markers0_29;
  MR_Word Inferring_30;
  MR_Word PredConstraints_32;
  MR_Word ClassTable_34;
  MR_Word Constraints_35;
  MR_Word PredMarkers0_36;
  MR_Word Clauses0_37;
  MR_Word RevClauses_38;
  MR_Word Clauses_39;
  MR_Word MaybeRHSLambda_40;
  MR_Word Context_42;
  MR_Word TypeVarSet_43;
  MR_Word InferredVarTypes_44;
  MR_Word InferredTypeConstraints0_45;
  MR_Word ConstraintProofMap_46;
  MR_Word ConstraintMap_47;
  MR_Word TVarRenaming_48;
  MR_Word ExistTypeRenaming_49;
  MR_Word VarsTypes_50;
  MR_Word VarTable0_51;
  MR_Word VarTable_52;
  MR_Word ExplicitVarTypes1_53;
  MR_Word ExplicitVarTypes_56;
  MR_Word ClausesRep_57;
  MR_Word ArgTypes_58;
  MR_Word ArgTypeVars_59;
  MR_Word InferredTypeConstraints_60;
  MR_Word UnprovenBodyConstraints_61;
  MR_Word STATE_VARIABLE_ClausesInfo_81_81;
  MR_Word STATE_VARIABLE_ExternalTypeParams_86_86;
  MR_Word STATE_VARIABLE_TypeAssignSet_97_97;
  MR_Word STATE_VARIABLE_Info_98_98;
  MR_Word STATE_VARIABLE_TypeAssignSet_100_100;
  MR_Word STATE_VARIABLE_Info_101_101;
  MR_Word STATE_VARIABLE_PredInfo_103_103;
  MR_Word STATE_VARIABLE_TypeAssignSet_104_104;
  MR_Word STATE_VARIABLE_Info_105_105;
  MR_Word STATE_VARIABLE_Info_107_107;
  MR_Word STATE_VARIABLE_Info_108_108;
  MR_Word STATE_VARIABLE_ExternalTypeParams_109_109;
  MR_Word STATE_VARIABLE_ClausesInfo_110_110;
  MR_Word STATE_VARIABLE_ClausesInfo_111_111;
  MR_Word STATE_VARIABLE_ClausesInfo_112_112;
  MR_Word STATE_VARIABLE_PredInfo_113_113;
  MR_Word STATE_VARIABLE_PredInfo_114_114;
  MR_Word STATE_VARIABLE_PredInfo_115_115;
  MR_Word STATE_VARIABLE_PredInfo_116_116;
  MR_Word STATE_VARIABLE_PredInfo_117_117;
  MR_Word STATE_VARIABLE_Info_124_124;
  MR_Word _ArgTypeVarSet_26;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_77, &STATE_VARIABLE_ClausesInfo_81_81);
  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(STATE_VARIABLE_ClausesInfo_81_81, &ClausesRep0_19, &ItemNumbers_20);
  hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(STATE_VARIABLE_ClausesInfo_81_81, &HeadVars_21);
  hlds__hlds_clauses__clauses_info_get_varset_2_p_0(STATE_VARIABLE_ClausesInfo_81_81, &ClauseVarSet_22);
  hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(STATE_VARIABLE_ClausesInfo_81_81, &ExplicitVarTypes0_23);
  hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_0_77, &PredStatus_24);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_77, &TypeVarSet0_25);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_0_77, &_ArgTypeVarSet_26, &ExistQVars0_27, &ArgTypes0_28);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_77, &Markers0_29);
  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_29, (MR_Integer) 2);
  if (succeeded)
  {
    Inferring_30 = (MR_Integer) 1;
    hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_9, ModuleInfo_10, (MR_String) "Inferring type of", PredId_11);
    STATE_VARIABLE_ExternalTypeParams_86_86 = (MR_Word) ((MR_Unsigned) 0U);
    PredConstraints_32 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[8]);
  }
  else
  {
    MR_Word UnivTVars_33;
    MR_Word STATE_VARIABLE_ExternalTypeParams_92_92;
    MR_Word Var_93;
    MR_Word STATE_VARIABLE_ExternalTypeParams_94_94;
    MR_Word STATE_VARIABLE_ExternalTypeParams_95_95;

    Inferring_30 = (MR_Integer) 0;
    hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_9, ModuleInfo_10, (MR_String) "Type-checking", PredId_11);
    parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypes0_28, &STATE_VARIABLE_ExternalTypeParams_92_92);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(STATE_VARIABLE_PredInfo_0_77, &PredConstraints_32);
    Var_93 = ((MR_Word) ((MR_hl_field(0, PredConstraints_32, (MR_Integer) 0))));
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Var_93, &UnivTVars_33);
    STATE_VARIABLE_ExternalTypeParams_94_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), UnivTVars_33, STATE_VARIABLE_ExternalTypeParams_92_92);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), STATE_VARIABLE_ExternalTypeParams_94_94, &STATE_VARIABLE_ExternalTypeParams_95_95);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), STATE_VARIABLE_ExternalTypeParams_95_95, ExistQVars0_27, &STATE_VARIABLE_ExternalTypeParams_86_86);
  }
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_10, &ClassTable_34);
  hlds__hlds_class__make_head_hlds_constraints_4_p_0(ClassTable_34, TypeVarSet0_25, PredConstraints_32, &Constraints_35);
  check_hlds__type_assign__type_assign_set_init_5_p_0(TypeVarSet0_25, ExplicitVarTypes0_23, STATE_VARIABLE_ExternalTypeParams_86_86, Constraints_35, &STATE_VARIABLE_TypeAssignSet_97_97);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_77, &PredMarkers0_36);
  check_hlds__typecheck_info__typecheck_info_init_8_p_0(ModuleInfo_10, PredId_11, STATE_VARIABLE_PredInfo_0_77, ClauseVarSet_22, PredStatus_24, PredMarkers0_36, STATE_VARIABLE_Specs_0_79, &STATE_VARIABLE_Info_98_98);
  hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_19, &Clauses0_37);
  check_hlds__typecheck__typecheck_clause_list_9_p_0(HeadVars_21, ArgTypes0_28, Clauses0_37, (MR_Word) ((MR_Unsigned) 0U), &RevClauses_38, STATE_VARIABLE_TypeAssignSet_97_97, &STATE_VARIABLE_TypeAssignSet_100_100, STATE_VARIABLE_Info_98_98, &STATE_VARIABLE_Info_101_101);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), RevClauses_38, &Clauses_39);
  check_hlds__typecheck_info__typecheck_info_get_rhs_lambda_2_p_0(STATE_VARIABLE_Info_101_101, &MaybeRHSLambda_40);
  switch (MaybeRHSLambda_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_PredInfo_103_103 = STATE_VARIABLE_PredInfo_0_77;
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredMarkers_41;

        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 28, PredMarkers0_36, &PredMarkers_41);
        hlds__hlds_pred__pred_info_set_markers_3_p_0(PredMarkers_41, STATE_VARIABLE_PredInfo_0_77, &STATE_VARIABLE_PredInfo_103_103);
      }
      break;
  }
  hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_103_103, &Context_42);
  check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_42, STATE_VARIABLE_TypeAssignSet_100_100, &STATE_VARIABLE_TypeAssignSet_104_104, STATE_VARIABLE_Info_101_101, &STATE_VARIABLE_Info_105_105);
  check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(Context_42, (MR_Integer) 1, HeadVars_21, STATE_VARIABLE_TypeAssignSet_104_104, STATE_VARIABLE_Info_105_105, &STATE_VARIABLE_Info_107_107);
  check_hlds__typecheck__typecheck_check_for_unsatisfied_coercions_3_p_0(STATE_VARIABLE_TypeAssignSet_104_104, STATE_VARIABLE_Info_107_107, &STATE_VARIABLE_Info_108_108);
  check_hlds__type_assign__type_assign_set_get_final_info_12_p_0(STATE_VARIABLE_TypeAssignSet_104_104, STATE_VARIABLE_ExternalTypeParams_86_86, ExistQVars0_27, ExplicitVarTypes0_23, &TypeVarSet_43, &STATE_VARIABLE_ExternalTypeParams_109_109, &InferredVarTypes_44, &InferredTypeConstraints0_45, &ConstraintProofMap_46, &ConstraintMap_47, &TVarRenaming_48, &ExistTypeRenaming_49);
  parse_tree__vartypes__vartypes_to_sorted_assoc_list_2_p_0(InferredVarTypes_44, &VarsTypes_50);
  hlds__hlds_pred__vars_types_to_var_table_4_p_0(ModuleInfo_10, ClauseVarSet_22, VarsTypes_50, &VarTable0_51);
  parse_tree__var_table__var_table_optimize_2_p_0(VarTable0_51, &VarTable_52);
  hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_52, STATE_VARIABLE_ClausesInfo_81_81, &STATE_VARIABLE_ClausesInfo_110_110);
  if ((ExistQVars0_27 == (MR_Word) ((MR_Unsigned) 0U)))
    ExplicitVarTypes1_53 = ExplicitVarTypes0_23;
  else
    parse_tree__vartypes__apply_variable_renaming_to_vartypes_3_p_0(ExistTypeRenaming_49, ExplicitVarTypes0_23, &ExplicitVarTypes1_53);
  parse_tree__vartypes__apply_variable_renaming_to_vartypes_3_p_0(TVarRenaming_48, ExplicitVarTypes1_53, &ExplicitVarTypes_56);
  hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(ExplicitVarTypes_56, STATE_VARIABLE_ClausesInfo_110_110, &STATE_VARIABLE_ClausesInfo_111_111);
  hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_39, &ClausesRep_57);
  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_57, ItemNumbers_20, STATE_VARIABLE_ClausesInfo_111_111, &STATE_VARIABLE_ClausesInfo_112_112);
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_112_112, STATE_VARIABLE_PredInfo_103_103, &STATE_VARIABLE_PredInfo_113_113);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_43, STATE_VARIABLE_PredInfo_113_113, &STATE_VARIABLE_PredInfo_114_114);
  hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(ConstraintProofMap_46, STATE_VARIABLE_PredInfo_114_114, &STATE_VARIABLE_PredInfo_115_115);
  hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(ConstraintMap_47, STATE_VARIABLE_PredInfo_115_115, &STATE_VARIABLE_PredInfo_116_116);
  parse_tree__vartypes__lookup_var_types_3_p_0(InferredVarTypes_44, HeadVars_21, &ArgTypes_58);
  parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypes_58, &ArgTypeVars_59);
  check_hlds__typecheck__restrict_constraints_to_head_vars_4_p_0(ArgTypeVars_59, InferredTypeConstraints0_45, &InferredTypeConstraints_60, &UnprovenBodyConstraints_61);
  hlds__hlds_pred__pred_info_set_unproven_body_constraints_3_p_0(UnprovenBodyConstraints_61, STATE_VARIABLE_PredInfo_116_116, &STATE_VARIABLE_PredInfo_117_117);
  switch (Inferring_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Origin0_67;
        MR_Word ExistQVars1_68;
        MR_Word ArgTypes1_69;
        MR_Word PredConstraints1_70;
        MR_Word Origin1_71;
        MR_Word RenamedOldArgTypes_74;
        MR_Word RenamedOldConstraints_75;
        MR_Word Origin_76;
        MR_Word STATE_VARIABLE_PredInfo_122_122;
        MR_Word STATE_VARIABLE_PredInfo_125_125;
        MR_Word STATE_VARIABLE_PredInfo_126_126;
        MR_Word ExistQVars_129;

        hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(STATE_VARIABLE_ExternalTypeParams_109_109, STATE_VARIABLE_PredInfo_117_117, &STATE_VARIABLE_PredInfo_122_122);
        hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_122_122, &Origin0_67);
        if ((ExistQVars0_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ExistQVars1_68 = (MR_Word) ((MR_Unsigned) 0U);
          ArgTypes1_69 = ArgTypes0_28;
          PredConstraints1_70 = PredConstraints_32;
          Origin1_71 = Origin0_67;
          STATE_VARIABLE_Info_124_124 = STATE_VARIABLE_Info_108_108;
        }
        else
        {
          MR_Word Var_123;
          MR_Box conv1_STATE_VARIABLE_Info_124_124;

          {
            Var_123 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_123, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_9[1]));
            MR_hl_field(0, Var_123, 1) = ((MR_Box) (check_hlds__typecheck__do_typecheck_pred_8_p_0_1));
            MR_hl_field(0, Var_123, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_123, 3) = ((MR_Box) (TypeVarSet0_25));
            MR_hl_field(0, Var_123, 4) = ((MR_Box) (ExistQVars0_27));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_123, Clauses_39, ((MR_Box) (STATE_VARIABLE_Info_108_108)), &conv1_STATE_VARIABLE_Info_124_124);
          STATE_VARIABLE_Info_124_124 = ((MR_Word) (conv1_STATE_VARIABLE_Info_124_124));
          mercury__term_subst__apply_renaming_in_vars_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), ExistTypeRenaming_49, ExistQVars0_27, &ExistQVars1_68);
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(ExistTypeRenaming_49, ArgTypes0_28, &ArgTypes1_69);
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(ExistTypeRenaming_49, PredConstraints_32, &PredConstraints1_70);
          check_hlds__typecheck__rename_instance_method_constraints_3_p_0(ExistTypeRenaming_49, Origin0_67, &Origin1_71);
        }
        mercury__term_subst__apply_renaming_in_vars_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarRenaming_48, ExistQVars1_68, &ExistQVars_129);
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_48, ArgTypes1_69, &RenamedOldArgTypes_74);
        parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(TVarRenaming_48, PredConstraints1_70, &RenamedOldConstraints_75);
        check_hlds__typecheck__rename_instance_method_constraints_3_p_0(TVarRenaming_48, Origin1_71, &Origin_76);
        hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_43, ExistQVars_129, RenamedOldArgTypes_74, STATE_VARIABLE_PredInfo_122_122, &STATE_VARIABLE_PredInfo_125_125);
        hlds__hlds_pred__pred_info_set_class_context_3_p_0(RenamedOldConstraints_75, STATE_VARIABLE_PredInfo_125_125, &STATE_VARIABLE_PredInfo_126_126);
        hlds__hlds_pred__pred_info_set_origin_3_p_0(Origin_76, STATE_VARIABLE_PredInfo_126_126, STATE_VARIABLE_PredInfo_78);
        *NextIteration_14 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExistQVars_62;
        MR_Word OldTypeConstraints_63;
        MR_Word STATE_VARIABLE_ExternalTypeParams_118_118;
        MR_Word STATE_VARIABLE_PredInfo_119_119;
        MR_Word STATE_VARIABLE_PredInfo_120_120;

        check_hlds__typecheck__infer_existential_types_4_p_0(ArgTypeVars_59, &ExistQVars_62, STATE_VARIABLE_ExternalTypeParams_109_109, &STATE_VARIABLE_ExternalTypeParams_118_118);
        hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(STATE_VARIABLE_ExternalTypeParams_118_118, STATE_VARIABLE_PredInfo_117_117, &STATE_VARIABLE_PredInfo_119_119);
        hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_43, ExistQVars_62, ArgTypes_58, STATE_VARIABLE_PredInfo_119_119, &STATE_VARIABLE_PredInfo_120_120);
        hlds__hlds_pred__pred_info_get_class_context_2_p_0(STATE_VARIABLE_PredInfo_120_120, &OldTypeConstraints_63);
        hlds__hlds_pred__pred_info_set_class_context_3_p_0(InferredTypeConstraints_60, STATE_VARIABLE_PredInfo_120_120, STATE_VARIABLE_PredInfo_78);
        {
          MR_Word TVarKindMap_64;

          hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(*STATE_VARIABLE_PredInfo_78, &TVarKindMap_64);
          succeeded = check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(TVarKindMap_64, ExistQVars0_27, ArgTypes0_28, OldTypeConstraints_63, ExistQVars_62, ArgTypes_58, InferredTypeConstraints_60);
        }
        if (!(succeeded))
        {
          MR_Word GoalType_65;

          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(*STATE_VARIABLE_PredInfo_78, &GoalType_65);
          succeeded = ((MR_tag((MR_Word) GoalType_65)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
          *NextIteration_14 = (MR_Integer) 0;
        else
          *NextIteration_14 = (MR_Integer) 1;
        STATE_VARIABLE_Info_124_124 = STATE_VARIABLE_Info_108_108;
      }
      break;
  }
  check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(STATE_VARIABLE_Info_124_124, STATE_VARIABLE_Specs_80);
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

  check_hlds__typecheck__report_invalid_coercion_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_19);
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
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_4, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_4, (MR_Integer) 0))));

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
          MR_hl_field(0, Var_18, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_12[0]));
          MR_hl_field(0, Var_18, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_check_for_unsatisfied_coercions_3_p_0_1));
          MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_18, 3) = ((MR_Box) (Var_27));
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
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_10, (MR_Integer) 1))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_10, (MR_Integer) 0))));

    if ((Var_34 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
    else
    {
      MR_Word TypeAssign2_14 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
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
        Spec_27 = check_hlds__typecheck_error_overload__report_ambiguity_error_5_f_0(ClauseContext_25, Context_7, OverloadedSymbolMap_26, Var_35, TypeAssign2_14);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_27, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      }
      else
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_9_p_0(
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
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevClauses_0_4;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_8;

      check_hlds__typecheck__typecheck_clause_8_p_0(HeadVars_1, ArgTypes_2, Clause0_23, &Clause_28, STATE_VARIABLE_TypeAssignSet_0_6, &STATE_VARIABLE_TypeAssignSet_35_35, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_36_36);
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

  check_hlds__typecheck__type_assign_prune_coerce_constraints_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_TypeAssign_11);
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
  MR_Word Body0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Clause_0_24, (MR_Integer) 1))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Clause_0_24, (MR_Integer) 3))));
  MR_Word Body_20;
  MR_Word STATE_VARIABLE_TypeAssignSet_30_30;
  MR_Word STATE_VARIABLE_Info_31_31;
  MR_Word STATE_VARIABLE_TypeAssignSet_32_32;
  MR_Word STATE_VARIABLE_Info_38_38;
  MR_Word Specs_51;
  MR_Word MaybeArgVectorTypeErrors_52;
  MR_Word TypeTable_65;
  MR_Word TypeAssignSet1_66;
  MR_Word SatisfiedTypeAssignSet_67;
  MR_Word UnsatisfiedTypeAssignSet_68;
  MR_Word Var_69;
  MR_Word ArgVectorTypeErrors_53;
  MR_Word Var_61;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;

  check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_28, Context_17, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, HeadVars_9, ArgTypes_10, STATE_VARIABLE_TypeAssignSet_0_26, &STATE_VARIABLE_TypeAssignSet_30_30, (MR_Word) ((MR_Unsigned) 0U), &Specs_51, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_scalar_common_2[1])), &MaybeArgVectorTypeErrors_52);
  succeeded = (MaybeArgVectorTypeErrors_52 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ArgVectorTypeErrors_53 = ((MR_Word) ((MR_hl_field(1, MaybeArgVectorTypeErrors_52, (MR_Integer) 0))));
    succeeded = (ArgVectorTypeErrors_53 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_61 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_53, (MR_Integer) 1))));
      succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
  }
  if (succeeded)
  {
    MR_Word AllArgsSpec_57;

    AllArgsSpec_57 = check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0(STATE_VARIABLE_Info_0_28, Context_17, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_TypeAssignSet_30_30, ArgVectorTypeErrors_53);
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_57, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_31_31);
  }
  else
  {
    MR_Box conv1_STATE_VARIABLE_Info_31_31;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[6]), Specs_51, ((MR_Box) (STATE_VARIABLE_Info_0_28)), &conv1_STATE_VARIABLE_Info_31_31);
    STATE_VARIABLE_Info_31_31 = ((MR_Word) (conv1_STATE_VARIABLE_Info_31_31));
  }
  check_hlds__typecheck__typecheck_goal_7_p_0(Body0_15, &Body_20, Context_17, STATE_VARIABLE_TypeAssignSet_30_30, &STATE_VARIABLE_TypeAssignSet_32_32, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_38_38);
  check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(STATE_VARIABLE_Info_38_38, &TypeTable_65);
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[1]));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_clause_8_p_0_2));
    MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_69, 3) = ((MR_Box) (TypeTable_65));
  }
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), Var_69, STATE_VARIABLE_TypeAssignSet_32_32, &TypeAssignSet1_66);
  mercury__list__filter_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[7]), TypeAssignSet1_66, &SatisfiedTypeAssignSet_67, &UnsatisfiedTypeAssignSet_68);
  if ((SatisfiedTypeAssignSet_67 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_TypeAssignSet_27 = UnsatisfiedTypeAssignSet_68;
  else
    *STATE_VARIABLE_TypeAssignSet_27 = SatisfiedTypeAssignSet_67;
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Clause_0_24, (MR_Integer) 0))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Clause_0_24, (MR_Integer) 2))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Clause_0_24, (MR_Integer) 3))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Clause_0_24, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Clause_25 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 1) = ((MR_Box) (Body_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_50));
  }
  if ((*STATE_VARIABLE_TypeAssignSet_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_ambiguity\'/6", (MR_String) "no type-assignment");
      return;
    }
  else
  {
    MR_Word Var_92 = ((MR_Word) ((MR_hl_field(1, *STATE_VARIABLE_TypeAssignSet_27, (MR_Integer) 1))));
    MR_Word Var_93 = ((MR_Word) ((MR_hl_field(1, *STATE_VARIABLE_TypeAssignSet_27, (MR_Integer) 0))));

    if ((Var_92 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_38_38;
    else
    {
      MR_Word TypeAssign2_74 = ((MR_Word) ((MR_hl_field(1, Var_92, (MR_Integer) 0))));
      MR_Word ErrorsSoFar_76;
      MR_Word VarTypes1_77;
      MR_Word VarTypes2_78;
      MR_Word TypeBindings1_79;
      MR_Word TypeBindings2_80;
      MR_Word HeadTypes1_81;
      MR_Word HeadTypes2_82;
      MR_Word FinalHeadTypes1_83;
      MR_Word FinalHeadTypes2_84;
      MR_Word Var_94;
      MR_Word Var_95;

      check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(STATE_VARIABLE_Info_38_38, &ErrorsSoFar_76);
      succeeded = (ErrorsSoFar_76 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        check_hlds__type_assign__type_assign_get_var_types_2_p_0(Var_93, &VarTypes1_77);
        check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign2_74, &VarTypes2_78);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(Var_93, &TypeBindings1_79);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign2_74, &TypeBindings2_80);
        parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes1_77, HeadVars_9, &HeadTypes1_81);
        parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes2_78, HeadVars_9, &HeadTypes2_82);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings1_79, HeadTypes1_81, &FinalHeadTypes1_83);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings2_80, HeadTypes2_82, &FinalHeadTypes2_84);
        succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(FinalHeadTypes1_83, FinalHeadTypes2_84, &Var_94);
        if (succeeded)
          succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(FinalHeadTypes2_84, FinalHeadTypes1_83, &Var_95);
      }
      if (succeeded)
      {
        MR_Word ClauseContext_85;
        MR_Word OverloadedSymbolMap_86;
        MR_Word Spec_87;

        check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_38_38, &ClauseContext_85);
        check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(STATE_VARIABLE_Info_38_38, &OverloadedSymbolMap_86);
        Spec_87 = check_hlds__typecheck_error_overload__report_ambiguity_error_5_f_0(ClauseContext_85, Context_17, OverloadedSymbolMap_86, Var_93, TypeAssign2_74);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_87, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_29);
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
  MR_Word * AddrOfRHS_60,
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
        MR_Word RHSVar_19 = ((MR_Word) ((MR_hl_field(0, RHS0_15, (MR_Integer) 0))));
        MR_Word TypeAssignSet1_54;

        check_hlds__typecheck__type_assigns_unify_var_var_5_p_0(STATE_VARIABLE_TypeAssignSet_0_33, LHSVar_14, RHSVar_19, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_54);
        succeeded = (TypeAssignSet1_54 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_TypeAssignSet_0_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word Spec_57;

          *STATE_VARIABLE_TypeAssignSet_34 = STATE_VARIABLE_TypeAssignSet_0_33;
          Spec_57 = check_hlds__typecheck_errors__report_error_unify_var_var_6_f_0(STATE_VARIABLE_Info_0_35, UnifyContext_11, Context_12, LHSVar_14, RHSVar_19, STATE_VARIABLE_TypeAssignSet_0_33);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_57, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
        }
        else
        {
          *STATE_VARIABLE_TypeAssignSet_34 = TypeAssignSet1_54;
          *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
        }
        *AddrOfRHS_60 = RHS0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(1, RHS0_15, (MR_Integer) 0))));
        MR_Word ArgVars_22 = ((MR_Word) ((MR_hl_field(1, RHS0_15, (MR_Integer) 2))));
        MR_Word STATE_VARIABLE_TypeAssignSet_39_39;
        MR_Word STATE_VARIABLE_Info_40_40;

        check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(UnifyContext_11, Context_12, LHSVar_14, Functor_20, ArgVars_22, GoalId_13, STATE_VARIABLE_TypeAssignSet_0_33, &STATE_VARIABLE_TypeAssignSet_39_39, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_40_40);
        check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_12, STATE_VARIABLE_TypeAssignSet_39_39, STATE_VARIABLE_TypeAssignSet_34, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_36);
        *AddrOfRHS_60 = RHS0_15;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Purity_23 = ((((MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
        MR_Word PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word NonLocals_27 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 2))));
        MR_Word VarsModes_28 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 3))));
        MR_Word Det_29 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word Goal0_30 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 5))));
        MR_Word Vars_31;
        MR_Word STATE_VARIABLE_Info_44_44;
        MR_Word STATE_VARIABLE_TypeAssignSet_45_45;
        MR_Word STATE_VARIABLE_Info_46_46;
        MR_Word TypeAssignSet1_49;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 0)));
        MR_Word * AddrGoal_59;
        MR_Word RHS_61;

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
          MR_Word Spec_52;

          STATE_VARIABLE_TypeAssignSet_45_45 = STATE_VARIABLE_TypeAssignSet_0_33;
          Spec_52 = check_hlds__typecheck_errors__report_error_unify_var_lambda_8_f_0(STATE_VARIABLE_Info_44_44, UnifyContext_11, Context_12, PredOrFunc_25, LHSVar_14, Vars_31, STATE_VARIABLE_TypeAssignSet_0_33);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_52, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_46_46);
        }
        else
        {
          STATE_VARIABLE_TypeAssignSet_45_45 = TypeAssignSet1_49;
          STATE_VARIABLE_Info_46_46 = STATE_VARIABLE_Info_44_44;
        }
        {
          RHS_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RHS_61, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(2, RHS_61, 1) = NULL;
          MR_hl_field(2, RHS_61, 2) = ((MR_Box) (NonLocals_27));
          MR_hl_field(2, RHS_61, 3) = ((MR_Box) (VarsModes_28));
          MR_hl_field(2, RHS_61, 4) = (MR_Box) ((MR_Unsigned) (Det_29));
          MR_hl_field(2, RHS_61, 5) = NULL;
        }
        AddrGoal_59 = (MR_Word *) (&(MR_hl_field(2, RHS_61, (MR_Integer) 5)));
        *AddrOfRHS_60 = RHS_61;
        check_hlds__typecheck__LCMC__pred__typecheck_goal__1_7_p_0(Goal0_30, AddrGoal_59, Context_12, STATE_VARIABLE_TypeAssignSet_45_45, STATE_VARIABLE_TypeAssignSet_34, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_36);
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
      MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
        HeadVar__2_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_30, 0) = ((MR_Box) (Goal_17));
        MR_hl_field(1, HeadVar__2_30, 1) = NULL;
      }
      AddrGoals_28 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_30, (MR_Integer) 1)));
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
      check_hlds__typecheck__typecheck_goal_expr_7_p_0(GoalExpr0_13, &GoalExpr_24, GoalInfo_17, STATE_VARIABLE_TypeAssignSet_0_28, STATE_VARIABLE_TypeAssignSet_29, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_31);
    }
  }
  else
    check_hlds__typecheck__typecheck_goal_expr_7_p_0(GoalExpr0_13, &GoalExpr_24, GoalInfo_17, STATE_VARIABLE_TypeAssignSet_0_28, STATE_VARIABLE_TypeAssignSet_29, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
  {
    Goal_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_9, 0) = ((MR_Box) (GoalExpr_24));
    MR_hl_field(0, Goal_9, 1) = ((MR_Box) (GoalInfo_17));
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
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_17;
    MR_Word STATE_VARIABLE_TypeAssignSet_26_26;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word * AddrGoals_28;

    check_hlds__typecheck__typecheck_goal_7_p_0(Goal0_15, &Goal_17, Context_3, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_26_26, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrGoals_28 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__2_2, (MR_Integer) 1)));
    check_hlds__typecheck__LCMC__pred__typecheck_goal_list__1_7_p_0(Goals0_16, AddrGoals_28, Context_3, STATE_VARIABLE_TypeAssignSet_26_26, STATE_VARIABLE_TypeAssignSet_5, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_7);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1515__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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

  check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TypeAssignSet_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Info_14);
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
  MR_Word STATE_VARIABLE_TypeAssignSet_0_114,
  MR_Word * STATE_VARIABLE_TypeAssignSet_115,
  MR_Word STATE_VARIABLE_Info_0_116,
  MR_Word * STATE_VARIABLE_Info_117)
{
  MR_bool succeeded;
  MR_Word Context_15;
  MR_Word ClauseContext_13;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_116, &ClauseContext_13);
  Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_27 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word SubGoal_28;

        check_hlds__typecheck__typecheck_goal_7_p_0(SubGoal0_27, &SubGoal_28, Context_15, STATE_VARIABLE_TypeAssignSet_0_114, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_0_116, STATE_VARIABLE_Info_117);
        *GoalExpr_9 = (MR_Word) ((MR_Word) (SubGoal_28));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_74 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 0))));
        MR_Word RHS0_75 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 1))));
        MR_Word UnifyMode_76 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 2))));
        MR_Word Unification_77 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 3))));
        MR_Word UnifyContext_78 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 4))));
        MR_Word GoalId_253;
        MR_Word * AddrRHS_298;

        GoalId_253 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LHS_74));
          MR_hl_field(1, base, 1) = NULL;
          MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_76));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification_77));
          MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_78));
        }
        AddrRHS_298 = (MR_Word *) (&(MR_hl_field(1, *GoalExpr_9, (MR_Integer) 1)));
        check_hlds__typecheck__LCMC__pred__typecheck_unification__1_10_p_0(UnifyContext_78, Context_15, GoalId_253, LHS_74, RHS0_75, AddrRHS_298, STATE_VARIABLE_TypeAssignSet_0_114, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_0_116, STATE_VARIABLE_Info_117);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer ProcId_52 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 1))));
        MR_Word ArgVars_53 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 2))));
        MR_Word BI_54 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word UC_55 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 4))));
        MR_Word SymName_56 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 5))));
        MR_Word GoalId_57;
        MR_Word PredId_58;

        GoalId_57 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
        check_hlds__typecheck__typecheck_call_pred_name_9_p_0(SymName_56, Context_15, GoalId_57, ArgVars_53, &PredId_58, STATE_VARIABLE_TypeAssignSet_0_114, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_0_116, STATE_VARIABLE_Info_117);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_9 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (PredId_58));
          MR_hl_field(2, base, 1) = ((MR_Box) (ProcId_52));
          MR_hl_field(2, base, 2) = ((MR_Box) (ArgVars_53));
          MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (BI_54));
          MR_hl_field(2, base, 4) = ((MR_Box) (UC_55));
          MR_hl_field(2, base, 5) = ((MR_Box) (SymName_56));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word ArgVars_252 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) GenericCall_59)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word PredVar_63 = ((MR_Word) ((MR_hl_field(0, GenericCall_59, (MR_Integer) 0))));
                  MR_Word Purity_64 = ((((MR_Unsigned) ((MR_hl_field(0, GenericCall_59, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
                  MR_Word GenericCallId_67;

                  hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_59, &GenericCallId_67);
                  check_hlds__typecheck__typecheck_higher_order_call_9_p_0(GenericCallId_67, Context_15, PredVar_63, Purity_64, ArgVars_252, STATE_VARIABLE_TypeAssignSet_0_114, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_0_116, STATE_VARIABLE_Info_117);
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
                  MR_String EventName_72 = ((MR_String) ((MR_hl_field(2, GenericCall_59, (MR_Integer) 0))));

                  check_hlds__typecheck__typecheck_event_call_7_p_0(Context_15, EventName_72, ArgVars_252, STATE_VARIABLE_TypeAssignSet_0_114, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_0_116, STATE_VARIABLE_Info_117);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word CastType_73 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_59, (MR_Integer) 0))) & (MR_Integer) 7);

                  switch (CastType_73) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      {
                        *STATE_VARIABLE_TypeAssignSet_115 = STATE_VARIABLE_TypeAssignSet_0_114;
                        *STATE_VARIABLE_Info_117 = STATE_VARIABLE_Info_0_116;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        *STATE_VARIABLE_TypeAssignSet_115 = STATE_VARIABLE_TypeAssignSet_0_114;
                        *STATE_VARIABLE_Info_117 = STATE_VARIABLE_Info_0_116;
                      }
                      break;
                    case (MR_Integer) 4:
                      check_hlds__typecheck__typecheck_coerce_6_p_0(Context_15, ArgVars_252, STATE_VARIABLE_TypeAssignSet_0_114, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_0_116, STATE_VARIABLE_Info_117);
                      break;
                    case (MR_Integer) 0:
                      {
                        *STATE_VARIABLE_TypeAssignSet_115 = STATE_VARIABLE_TypeAssignSet_0_114;
                        *STATE_VARIABLE_Info_117 = STATE_VARIABLE_Info_0_116;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_TypeAssignSet_115 = STATE_VARIABLE_TypeAssignSet_0_114;
                        *STATE_VARIABLE_Info_117 = STATE_VARIABLE_Info_0_116;
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
            MR_Word Args_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word ArgVectorKind_89;
            MR_Word STATE_VARIABLE_TypeAssignSet_192_192;
            MR_Word STATE_VARIABLE_Info_193_193;
            MR_Word ArgVars_254;
            MR_Word GoalId_255;
            MR_Word PredId_256 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));

            {
              ArgVectorKind_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ArgVectorKind_89, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ArgVectorKind_89, 1) = ((MR_Box) (PredId_256));
            }
            ArgVars_254 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_scalar_common_5[5]), Args_85);
            GoalId_255 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
            check_hlds__typecheck__typecheck_call_pred_id_9_p_0(ArgVectorKind_89, Context_15, GoalId_255, PredId_256, ArgVars_254, STATE_VARIABLE_TypeAssignSet_0_114, &STATE_VARIABLE_TypeAssignSet_192_192, STATE_VARIABLE_Info_0_116, &STATE_VARIABLE_Info_193_193);
            check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_15, STATE_VARIABLE_TypeAssignSet_192_192, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_193_193, STATE_VARIABLE_Info_117);
            *GoalExpr_9 = GoalExpr0_8;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_16 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word * AddrSubGoals_296;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_16));
              MR_hl_field(3, base, 2) = NULL;
            }
            AddrSubGoals_296 = (MR_Word *) (&(MR_hl_field(3, *GoalExpr_9, (MR_Integer) 2)));
            check_hlds__typecheck__LCMC__pred__typecheck_goal_list__1_7_p_0(SubGoals0_17, AddrSubGoals_296, Context_15, STATE_VARIABLE_TypeAssignSet_0_114, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_0_116, STATE_VARIABLE_Info_117);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals0_244 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word * AddrSubGoals_297;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = NULL;
            }
            AddrSubGoals_297 = (MR_Word *) (&(MR_hl_field(3, *GoalExpr_9, (MR_Integer) 1)));
            check_hlds__typecheck__LCMC__pred__typecheck_goal_list__1_7_p_0(SubGoals0_244, AddrSubGoals_297, Context_15, STATE_VARIABLE_TypeAssignSet_0_114, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_0_116, STATE_VARIABLE_Info_117);
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
            MR_Word Reason_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_TypeAssignSet_154_154;
            MR_Word STATE_VARIABLE_Info_155_155;
            MR_Word SubGoal0_250 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word SubGoal_251;

            check_hlds__typecheck__typecheck_goal_7_p_0(SubGoal0_250, &SubGoal_251, Context_15, STATE_VARIABLE_TypeAssignSet_0_114, &STATE_VARIABLE_TypeAssignSet_154_154, STATE_VARIABLE_Info_0_116, &STATE_VARIABLE_Info_155_155);
            switch (MR_tag((MR_Word) Reason_29)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Vars_247 = ((MR_Word) ((MR_hl_field(0, Reason_29, (MR_Integer) 0))));

                  check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 4U), Context_15, Vars_247, STATE_VARIABLE_TypeAssignSet_154_154, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_155_155, STATE_VARIABLE_Info_117);
                }
                break;
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_TypeAssignSet_115 = STATE_VARIABLE_TypeAssignSet_154_154;
                  *STATE_VARIABLE_Info_117 = STATE_VARIABLE_Info_155_155;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Vars_285 = ((MR_Word) ((MR_hl_field(2, Reason_29, (MR_Integer) 0))));

                  check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 8U), Context_15, Vars_285, STATE_VARIABLE_TypeAssignSet_154_154, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_155_155, STATE_VARIABLE_Info_117);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_29, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_TypeAssignSet_115 = STATE_VARIABLE_TypeAssignSet_154_154;
                      *STATE_VARIABLE_Info_117 = STATE_VARIABLE_Info_155_155;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *STATE_VARIABLE_TypeAssignSet_115 = STATE_VARIABLE_TypeAssignSet_154_154;
                      *STATE_VARIABLE_Info_117 = STATE_VARIABLE_Info_155_155;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, Reason_29, (MR_Integer) 1))));
                      MR_Word Vars_287;

                      {
                        Vars_287 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Vars_287, 0) = ((MR_Box) (Var_33));
                        MR_hl_field(1, Vars_287, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 12U), Context_15, Vars_287, STATE_VARIABLE_TypeAssignSet_154_154, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_155_155, STATE_VARIABLE_Info_117);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Var_246 = ((MR_Word) ((MR_hl_field(3, Reason_29, (MR_Integer) 1))));
                      MR_Word Vars_289;

                      {
                        Vars_289 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Vars_289, 0) = ((MR_Box) (Var_246));
                        MR_hl_field(1, Vars_289, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 16U), Context_15, Vars_289, STATE_VARIABLE_TypeAssignSet_154_154, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_155_155, STATE_VARIABLE_Info_117);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      *STATE_VARIABLE_TypeAssignSet_115 = STATE_VARIABLE_TypeAssignSet_154_154;
                      *STATE_VARIABLE_Info_117 = STATE_VARIABLE_Info_155_155;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      *STATE_VARIABLE_TypeAssignSet_115 = STATE_VARIABLE_TypeAssignSet_154_154;
                      *STATE_VARIABLE_Info_117 = STATE_VARIABLE_Info_155_155;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      *STATE_VARIABLE_TypeAssignSet_115 = STATE_VARIABLE_TypeAssignSet_154_154;
                      *STATE_VARIABLE_Info_117 = STATE_VARIABLE_Info_155_155;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      *STATE_VARIABLE_TypeAssignSet_115 = STATE_VARIABLE_TypeAssignSet_154_154;
                      *STATE_VARIABLE_Info_117 = STATE_VARIABLE_Info_155_155;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word LCVar_35 = ((MR_Word) ((MR_hl_field(3, Reason_29, (MR_Integer) 1))));
                      MR_Word LCSVar_36 = ((MR_Word) ((MR_hl_field(3, Reason_29, (MR_Integer) 2))));
                      MR_Word Var_158;
                      MR_Word Vars_283;

                      {
                        Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_158, 0) = ((MR_Box) (LCSVar_36));
                        MR_hl_field(1, Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Vars_283 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Vars_283, 0) = ((MR_Box) (LCVar_35));
                        MR_hl_field(1, Vars_283, 1) = ((MR_Box) (Var_158));
                      }
                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 20U), Context_15, Vars_283, STATE_VARIABLE_TypeAssignSet_154_154, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_155_155, STATE_VARIABLE_Info_117);
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
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_29));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_251));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Cond0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Then0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Else0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word Cond_24;
            MR_Word Then_25;
            MR_Word Else_26;
            MR_Word STATE_VARIABLE_TypeAssignSet_131_131;
            MR_Word STATE_VARIABLE_Info_132_132;
            MR_Word STATE_VARIABLE_TypeAssignSet_136_136;
            MR_Word STATE_VARIABLE_Info_137_137;
            MR_Word STATE_VARIABLE_TypeAssignSet_141_141;
            MR_Word STATE_VARIABLE_Info_142_142;

            check_hlds__typecheck__typecheck_goal_7_p_0(Cond0_21, &Cond_24, Context_15, STATE_VARIABLE_TypeAssignSet_0_114, &STATE_VARIABLE_TypeAssignSet_131_131, STATE_VARIABLE_Info_0_116, &STATE_VARIABLE_Info_132_132);
            check_hlds__typecheck__typecheck_goal_7_p_0(Then0_22, &Then_25, Context_15, STATE_VARIABLE_TypeAssignSet_131_131, &STATE_VARIABLE_TypeAssignSet_136_136, STATE_VARIABLE_Info_132_132, &STATE_VARIABLE_Info_137_137);
            check_hlds__typecheck__typecheck_goal_7_p_0(Else0_23, &Else_26, Context_15, STATE_VARIABLE_TypeAssignSet_136_136, &STATE_VARIABLE_TypeAssignSet_141_141, STATE_VARIABLE_Info_137_137, &STATE_VARIABLE_Info_142_142);
            check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 0U), Context_15, Vars_20, STATE_VARIABLE_TypeAssignSet_141_141, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_142_142, STATE_VARIABLE_Info_117);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_20));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_24));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_25));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_26));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word ShortHand_92;

            switch (MR_tag((MR_Word) ShortHand0_90)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LHS0_91 = ((MR_Word) ((MR_hl_field(0, ShortHand0_90, (MR_Integer) 0))));
                  MR_Word STATE_VARIABLE_TypeAssignSet_199_199;
                  MR_Word STATE_VARIABLE_Info_200_200;
                  MR_Word LHS_257;
                  MR_Word RHS0_258 = ((MR_Word) ((MR_hl_field(0, ShortHand0_90, (MR_Integer) 1))));
                  MR_Word RHS_259;

                  check_hlds__typecheck__typecheck_goal_7_p_0(LHS0_91, &LHS_257, Context_15, STATE_VARIABLE_TypeAssignSet_0_114, &STATE_VARIABLE_TypeAssignSet_199_199, STATE_VARIABLE_Info_0_116, &STATE_VARIABLE_Info_200_200);
                  check_hlds__typecheck__typecheck_goal_7_p_0(RHS0_258, &RHS_259, Context_15, STATE_VARIABLE_TypeAssignSet_199_199, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_200_200, STATE_VARIABLE_Info_117);
                  {
                    ShortHand_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_92, 0) = ((MR_Box) (LHS_257));
                    MR_hl_field(0, ShortHand_92, 1) = ((MR_Box) (RHS_259));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_93 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_94 = ((MR_Word) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 1))));
                  MR_Word Inner_95 = ((MR_Word) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_96 = ((MR_Word) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 3))));
                  MR_Word MainGoal0_97 = ((MR_Word) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_98 = ((MR_Word) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 5))));
                  MR_Word MainGoal_102;
                  MR_Word OrElseGoals_103;
                  MR_Word OuterDI_105;
                  MR_Word OuterUO_106;
                  MR_Word InnerVars_107;
                  MR_Word STATE_VARIABLE_TypeAssignSet_206_206;
                  MR_Word STATE_VARIABLE_Info_207_207;
                  MR_Word STATE_VARIABLE_TypeAssignSet_208_208;
                  MR_Word STATE_VARIABLE_Info_209_209;
                  MR_Word STATE_VARIABLE_TypeAssignSet_210_210;
                  MR_Word STATE_VARIABLE_Info_211_211;
                  MR_Word Var_212;
                  MR_Word STATE_VARIABLE_TypeAssignSet_213_213;
                  MR_Word STATE_VARIABLE_Info_214_214;
                  MR_Word Var_215;
                  MR_Word Var_218;
                  MR_Word Var_221;
                  MR_Word I_290;
                  MR_Word O_291;
                  MR_Word Interfaces_292 = ((MR_Word) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 6))));
                  MR_Word Var_294;
                  MR_Word Var_295;
                  MR_Box conv4_STATE_VARIABLE_TypeAssignSet_115;
                  MR_Box conv3_STATE_VARIABLE_Info_117;

                  if ((MaybeOutputVars_96 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    STATE_VARIABLE_TypeAssignSet_206_206 = STATE_VARIABLE_TypeAssignSet_0_114;
                    STATE_VARIABLE_Info_207_207 = STATE_VARIABLE_Info_0_116;
                  }
                  else
                  {
                    MR_Word OutputVars_100 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_96, (MR_Integer) 0))));

                    check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 28U), Context_15, OutputVars_100, STATE_VARIABLE_TypeAssignSet_0_114, &STATE_VARIABLE_TypeAssignSet_206_206, STATE_VARIABLE_Info_0_116, &STATE_VARIABLE_Info_207_207);
                  }
                  check_hlds__typecheck__typecheck_goal_7_p_0(MainGoal0_97, &MainGoal_102, Context_15, STATE_VARIABLE_TypeAssignSet_206_206, &STATE_VARIABLE_TypeAssignSet_208_208, STATE_VARIABLE_Info_207_207, &STATE_VARIABLE_Info_209_209);
                  check_hlds__typecheck__typecheck_goal_list_7_p_0(OrElseGoals0_98, &OrElseGoals_103, Context_15, STATE_VARIABLE_TypeAssignSet_208_208, &STATE_VARIABLE_TypeAssignSet_210_210, STATE_VARIABLE_Info_209_209, &STATE_VARIABLE_Info_211_211);
                  OuterDI_105 = ((MR_Word) ((MR_hl_field(0, Outer_94, (MR_Integer) 0))));
                  OuterUO_106 = ((MR_Word) ((MR_hl_field(0, Outer_94, (MR_Integer) 1))));
                  {
                    Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_215, 0) = ((MR_Box) (OuterUO_106));
                    MR_hl_field(1, Var_215, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_212, 0) = ((MR_Box) (OuterDI_105));
                    MR_hl_field(1, Var_212, 1) = ((MR_Box) (Var_215));
                  }
                  check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0((MR_Word) ((MR_Unsigned) 32U), Context_15, Var_212, STATE_VARIABLE_TypeAssignSet_210_210, &STATE_VARIABLE_TypeAssignSet_213_213, STATE_VARIABLE_Info_211_211, &STATE_VARIABLE_Info_214_214);
                  I_290 = ((MR_Word) ((MR_hl_field(0, Inner_95, (MR_Integer) 0))));
                  O_291 = ((MR_Word) ((MR_hl_field(0, Inner_95, (MR_Integer) 1))));
                  Var_295 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(Interfaces_292);
                  {
                    Var_294 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_294, 0) = ((MR_Box) (O_291));
                    MR_hl_field(1, Var_294, 1) = ((MR_Box) (Var_295));
                  }
                  {
                    InnerVars_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, InnerVars_107, 0) = ((MR_Box) (I_290));
                    MR_hl_field(1, InnerVars_107, 1) = ((MR_Box) (Var_294));
                  }
                  {
                    Var_218 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_218, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[0]));
                    MR_hl_field(0, Var_218, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_2));
                    MR_hl_field(0, Var_218, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_218, 3) = ((MR_Box) (Context_15));
                  }
                  mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_218, InnerVars_107, ((MR_Box) (STATE_VARIABLE_TypeAssignSet_213_213)), &conv4_STATE_VARIABLE_TypeAssignSet_115, ((MR_Box) (STATE_VARIABLE_Info_214_214)), &conv3_STATE_VARIABLE_Info_117);
                  *STATE_VARIABLE_TypeAssignSet_115 = ((MR_Word) (conv4_STATE_VARIABLE_TypeAssignSet_115));
                  *STATE_VARIABLE_Info_117 = ((MR_Word) (conv3_STATE_VARIABLE_Info_117));
                  {
                    Var_221 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_221, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[4]));
                    MR_hl_field(0, Var_221, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_3));
                    MR_hl_field(0, Var_221, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_221, 3) = ((MR_Box) (GoalType_93));
                    MR_hl_field(0, Var_221, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mercury__require__expect_3_p_0(Var_221, (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "GoalType != unknown_atomic_goal_type");
                  {
                    ShortHand_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_92, 0) = (MR_Box) ((MR_Unsigned) (GoalType_93));
                    MR_hl_field(1, ShortHand_92, 1) = ((MR_Box) (Outer_94));
                    MR_hl_field(1, ShortHand_92, 2) = ((MR_Box) (Inner_95));
                    MR_hl_field(1, ShortHand_92, 3) = ((MR_Box) (MaybeOutputVars_96));
                    MR_hl_field(1, ShortHand_92, 4) = ((MR_Box) (MainGoal_102));
                    MR_hl_field(1, ShortHand_92, 5) = ((MR_Box) (OrElseGoals_103));
                    MR_hl_field(1, ShortHand_92, 6) = ((MR_Box) (Interfaces_292));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_108 = ((MR_Word) ((MR_hl_field(2, ShortHand0_90, (MR_Integer) 0))));
                  MR_Word ResultVar_109 = ((MR_Word) ((MR_hl_field(2, ShortHand0_90, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_TypeAssignSet_228_228;
                  MR_Word STATE_VARIABLE_Info_229_229;
                  MR_Word SubGoal0_262 = ((MR_Word) ((MR_hl_field(2, ShortHand0_90, (MR_Integer) 2))));
                  MR_Word SubGoal_263;

                  check_hlds__typecheck__typecheck_goal_7_p_0(SubGoal0_262, &SubGoal_263, Context_15, STATE_VARIABLE_TypeAssignSet_0_114, &STATE_VARIABLE_TypeAssignSet_228_228, STATE_VARIABLE_Info_0_116, &STATE_VARIABLE_Info_229_229);
                  if ((MaybeIO_108 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    *STATE_VARIABLE_TypeAssignSet_115 = STATE_VARIABLE_TypeAssignSet_228_228;
                    *STATE_VARIABLE_Info_117 = STATE_VARIABLE_Info_229_229;
                  }
                  else
                  {
                    MR_Word InitialIO_110;
                    MR_Word FinalIO_111;
                    MR_Word Var_230 = ((MR_Word) ((MR_hl_field(1, MaybeIO_108, (MR_Integer) 0))));
                    MR_Word Var_231;
                    MR_Word STATE_VARIABLE_TypeAssignSet_232_232;
                    MR_Word STATE_VARIABLE_Info_233_233;
                    MR_Word Var_234;
                    MR_Word Var_238;
                    MR_Word STATE_VARIABLE_TypeAssignSet_239_239;
                    MR_Word STATE_VARIABLE_Info_240_240;
                    MR_Word Var_241;

                    InitialIO_110 = ((MR_Word) ((MR_hl_field(0, Var_230, (MR_Integer) 0))));
                    FinalIO_111 = ((MR_Word) ((MR_hl_field(0, Var_230, (MR_Integer) 1))));
                    {
                      Var_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_234, 0) = ((MR_Box) (FinalIO_111));
                      MR_hl_field(1, Var_234, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_231 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_231, 0) = ((MR_Box) (InitialIO_110));
                      MR_hl_field(1, Var_231, 1) = ((MR_Box) (Var_234));
                    }
                    check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 24U), Context_15, Var_231, STATE_VARIABLE_TypeAssignSet_228_228, &STATE_VARIABLE_TypeAssignSet_232_232, STATE_VARIABLE_Info_229_229, &STATE_VARIABLE_Info_233_233);
                    Var_238 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                    check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_scalar_common_1[9])), Context_15, InitialIO_110, Var_238, STATE_VARIABLE_TypeAssignSet_232_232, &STATE_VARIABLE_TypeAssignSet_239_239, STATE_VARIABLE_Info_233_233, &STATE_VARIABLE_Info_240_240);
                    Var_241 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                    check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_scalar_common_1[10])), Context_15, FinalIO_111, Var_241, STATE_VARIABLE_TypeAssignSet_239_239, STATE_VARIABLE_TypeAssignSet_115, STATE_VARIABLE_Info_240_240, STATE_VARIABLE_Info_117);
                  }
                  {
                    ShortHand_92 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_92, 0) = ((MR_Box) (MaybeIO_108));
                    MR_hl_field(2, ShortHand_92, 1) = ((MR_Box) (ResultVar_109));
                    MR_hl_field(2, ShortHand_92, 2) = ((MR_Box) (SubGoal_263));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_92));
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
      check_hlds__typecheck__typecheck_goal_expr_7_p_0(GoalExpr0_13, &GoalExpr_24, GoalInfo_17, STATE_VARIABLE_TypeAssignSet_0_28, STATE_VARIABLE_TypeAssignSet_29, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_31);
    }
  }
  else
    check_hlds__typecheck__typecheck_goal_expr_7_p_0(GoalExpr0_13, &GoalExpr_24, GoalInfo_17, STATE_VARIABLE_TypeAssignSet_0_28, STATE_VARIABLE_TypeAssignSet_29, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_17));
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
      MR_Word TypeAssign0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssignSet0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
          STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (TypeAssign_36));
          MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_7));
        }
      }
      else
      {
        MR_Word OldVarType_34 = ((MR_Word) ((MR_hl_field(1, MaybeOldVarType_32, (MR_Integer) 0))));
        MR_Word TypeAssign1_35;
        MR_Word ExistQTVars_37;
        MR_Word TypeBindings0_38;
        MR_Word TypeBindings_39;

        check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign1_26, &ExistQTVars_37);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_26, &TypeBindings0_38);
        succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_34, LambdaType_27, ExistQTVars_37, TypeBindings0_38, &TypeBindings_39);
        if (succeeded)
        {
          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_39, TypeAssign1_26, &TypeAssign1_35);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (TypeAssign1_35));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_7));
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
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
        MR_hl_field(0, Type_10, 0) = ((MR_Box) (TypeVar_20));
        MR_hl_field(0, Type_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__vartypes__add_var_type_4_p_0(Var_8, Type_10, VarTypes0_18, &VarTypes1_22);
      check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_22, STATE_VARIABLE_TypeAssign_15_23, &STATE_VARIABLE_TypeAssign_17_17);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_10));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTypes_26 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__2_2, (MR_Integer) 1)));
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
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
          MR_hl_field(0, Type_10, 0) = ((MR_Box) (TypeVar_20));
          MR_hl_field(0, Type_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__vartypes__add_var_type_4_p_0(Var_8, Type_10, VarTypes0_18, &VarTypes1_22);
        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_22, STATE_VARIABLE_TypeAssign_15_23, &STATE_VARIABLE_TypeAssign_17_17);
      }
      {
        HeadVar__2_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_28, 0) = ((MR_Box) (Type_10));
        MR_hl_field(1, HeadVar__2_28, 1) = NULL;
      }
      AddrTypes_26 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_28, (MR_Integer) 1)));
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
          succeeded = parse_tree__prog_type__type_unify_5_p_0(TypeX_20, TypeY_23, ExistQTVars_40, TypeBindings0_41, &TypeBindings_42);
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
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ((MR_Box) (X_2)), ((MR_Box) (Y_3)));
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
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2(
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
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeAssignSet_16;

  check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeAssignSet_16);
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
    MR_Word ConsType_20;
    MR_Word TypeAssignSet1_22;
    MR_Word STATE_VARIABLE_Info_58_58;
    MR_Word Var_59;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Box conv1_TypeAssignSet1_22;

    {
      ConsType_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ConsType_20, 0) = ((MR_Box) (BuiltinType_155));
    }
    succeeded = ((MR_tag((MR_Word) ConsType_20)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_56 = ((MR_Word) ((MR_hl_field(2, ConsType_20, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_57 = ((MR_Unsigned) ((MR_hl_field(1, Var_56, (MR_Integer) 0))) & (MR_Integer) 15);
        succeeded = (Var_57 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      check_hlds__typecheck_info__typecheck_info_add_nosuffix_integer_var_3_p_0(Var_13, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_58_58);
    else
      STATE_VARIABLE_Info_58_58 = STATE_VARIABLE_Info_0_54;
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_59, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_9[0]));
      MR_hl_field(0, Var_59, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1));
      MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_59, 3) = ((MR_Box) (ConsType_20));
      MR_hl_field(0, Var_59, 4) = ((MR_Box) (Var_13));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), Var_59, TypeAssignSet0_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_TypeAssignSet1_22);
    TypeAssignSet1_22 = ((MR_Word) (conv1_TypeAssignSet1_22));
    if ((TypeAssignSet1_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *TypeAssignSet_18 = TypeAssignSet0_17;
      if ((TypeAssignSet0_17 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_58_58;
      else
      {
        MR_Word ConsTypeVarSet_27;
        MR_Word EmptyConstraints_28;
        MR_Word ConsTypeInfo_29;
        MR_Word ConsIdSpec_30;
        MR_Word Var_63;
        MR_Word Var_64;

        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &ConsTypeVarSet_27);
        hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_28);
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (BuiltinTypeName_21));
        }
        {
          ConsTypeInfo_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ConsTypeInfo_29, 0) = ((MR_Box) (ConsTypeVarSet_27));
          MR_hl_field(0, ConsTypeInfo_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ConsTypeInfo_29, 2) = ((MR_Box) (ConsType_20));
          MR_hl_field(0, ConsTypeInfo_29, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ConsTypeInfo_29, 4) = ((MR_Box) (EmptyConstraints_28));
          MR_hl_field(0, ConsTypeInfo_29, 5) = ((MR_Box) (Var_63));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (ConsTypeInfo_29));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ConsIdSpec_30 = check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0(STATE_VARIABLE_Info_58_58, UnifyContext_11, Context_12, Var_13, Var_64, ConsId_14, (MR_Integer) 0, TypeAssignSet0_17);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_30, STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Info_55);
      }
    }
    else
    {
      *TypeAssignSet_18 = TypeAssignSet1_22;
      *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_58_58;
    }
  }
  else
  {
    MR_Integer Arity_31;
    MR_Word ConsTypeInfos_32;
    MR_Word ConsErrors_33;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgVars_15, &Arity_31);
    check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(STATE_VARIABLE_Info_0_54, ConsId_14, Arity_31, GoalId_16, &ConsTypeInfos_32, &ConsErrors_33);
    if ((ConsTypeInfos_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ClauseContext_34;
      MR_Word GoalContext_35;
      MR_Word Spec_36;

      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_54, &ClauseContext_34);
      *TypeAssignSet_18 = TypeAssignSet0_17;
      {
        GoalContext_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, GoalContext_35, 0) = ((MR_Box) (UnifyContext_11));
      }
      Spec_36 = check_hlds__typecheck_error_undef__report_error_undef_cons_6_f_0(ClauseContext_34, GoalContext_35, Context_12, ConsErrors_33, ConsId_14, Arity_31);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_36, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
    }
    else
    {
      MR_Word Var_152 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_32, (MR_Integer) 1))));
      MR_Word Var_153 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_32, (MR_Integer) 0))));

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

          ConsIdSpec_80 = check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0(STATE_VARIABLE_Info_0_54, UnifyContext_11, Context_12, Var_13, ConsTypeInfos_32, ConsId_14, Arity_31, TypeAssignSet0_17);
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

            ArgSpec_53 = check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0(STATE_VARIABLE_Info_77_77, UnifyContext_11, Context_12, Var_13, ConsTypeInfos_32, ConsId_14, ArgVars_15, ArgsTypeAssignSet_46);
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
        MR_Word ConsTypeInfo_171;
        MR_Word ConsTypeInfos_172;
        MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_176;

        Sources_41 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[4]), ConsTypeInfos_32);
        {
          Symbol_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Symbol_42, 0) = ((MR_Box) (ConsId_14));
          MR_hl_field(1, Symbol_42, 1) = ((MR_Box) (Sources_41));
        }
        check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(Symbol_42, Context_12, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_72_143);
        ConsTypeInfo_171 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_32, (MR_Integer) 0))));
        ConsTypeInfos_172 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_32, (MR_Integer) 1))));
        check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(ConsTypeInfo_171, TypeAssignSet0_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ConsTypeAssignSet_15_176);
        check_hlds__typecheck__get_cons_type_assigns_for_cons_defns_4_p_0(ConsTypeInfos_172, TypeAssignSet0_17, STATE_VARIABLE_ConsTypeAssignSet_15_176, &ConsTypeAssignSet_132);
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

          ConsIdSpec_108 = check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0(STATE_VARIABLE_Info_72_143, UnifyContext_11, Context_12, Var_13, ConsTypeInfos_32, ConsId_14, Arity_31, TypeAssignSet0_17);
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

            ArgSpec_120 = check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0(STATE_VARIABLE_Info_77_148, UnifyContext_11, Context_12, Var_13, ConsTypeInfos_32, ConsId_14, ArgVars_15, ArgsTypeAssignSet_135);
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
        MR_Word Type_46 = ((MR_Word) ((MR_hl_field(1, ArgTypes_17, (MR_Integer) 0))));
        MR_Word Types_47 = ((MR_Word) ((MR_hl_field(1, ArgTypes_17, (MR_Integer) 1))));
        MR_Word TypeAssignSet1_50;
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, ArgVars_2, (MR_Integer) 1))));
        MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, ArgVars_2, (MR_Integer) 0))));
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
          succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_57, Type_46, ExistQTVars_60, TypeBindings0_61, &TypeBindings_62);
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
        check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(TypeAssignSet1_50, Var_52, Types_47, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_22_22);
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
        MR_Word Type_45 = ((MR_Word) ((MR_hl_field(1, Types_4, (MR_Integer) 0))));
        MR_Word Types_46 = ((MR_Word) ((MR_hl_field(1, Types_4, (MR_Integer) 1))));
        MR_Word TypeAssignSet1_49;
        MR_Word Var_51 = ((MR_Word) ((MR_hl_field(1, ArgVars_3, (MR_Integer) 1))));
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, ArgVars_3, (MR_Integer) 0))));
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
          succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_56, Type_45, ExistQTVars_59, TypeBindings0_60, &TypeBindings_61);
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

  succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_ConsTypeInfo_16);
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

    succeeded = ((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
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
            TypeInfo_21_27 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[5]);
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
                MR_hl_field(0, Var_25, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[1]));
                MR_hl_field(0, Var_25, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1));
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
      check_hlds__typecheck__split_cons_errors_3_p_0(FieldAccessConsInfos_15, ConsInfos_11, ConsErrors_12);
    else
    {
      *ConsInfos_11 = (MR_Word) ((MR_Unsigned) 0U);
      *ConsErrors_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  else
    check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(Info_7, ConsId_8, Arity_9, GoalId_10, ConsInfos_11, ConsErrors_12);
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

  succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_ConsTypeInfo_16);
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
  MR_Word ConsId_8,
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
  MR_Word ConsDefns_18;
  MR_Word OrigConsId_23;
  MR_Word ExistQConsDefns_24;
  MR_Word Name_20;
  MR_Word ConsIdTypeCtor_21;
  MR_Word OrigName_22;
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
  succeeded = ((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
    succeeded = hlds__hlds_cons__search_cons_table_3_p_0(ConsTable_14, ConsId_8, &ConsDefns_18);
  if (succeeded)
    check_hlds__typecheck__convert_cons_defn_list_6_p_0(Info_7, GoalId_10, (MR_Integer) 2, ConsId_8, ConsDefns_18, &PlainMaybeConsInfos_19);
  else
    PlainMaybeConsInfos_19 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = ((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Name_20 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
    Var_78 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 2))));
    ConsIdTypeCtor_21 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 3))));
    succeeded = (Arity_9 == Var_78);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(Name_20, &OrigName_22);
      if (succeeded)
      {
        {
          OrigConsId_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, OrigConsId_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, OrigConsId_23, 1) = ((MR_Box) (OrigName_22));
          MR_hl_field(3, OrigConsId_23, 2) = ((MR_Box) (Arity_9));
          MR_hl_field(3, OrigConsId_23, 3) = ((MR_Box) (ConsIdTypeCtor_21));
        }
        succeeded = hlds__hlds_cons__search_cons_table_3_p_0(ConsTable_14, OrigConsId_23, &ExistQConsDefns_24);
      }
    }
  }
  if (succeeded)
    check_hlds__typecheck__convert_cons_defn_list_6_p_0(Info_7, GoalId_10, (MR_Integer) 0, OrigConsId_23, ExistQConsDefns_24, &UnivQuantifiedMaybeConsInfos_25);
  else
    UnivQuantifiedMaybeConsInfos_25 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = ((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Name_79 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
    Var_92 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 2))));
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
          TypeInfo_21_89 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[5]);
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
              MR_hl_field(0, Var_87, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[1]));
              MR_hl_field(0, Var_87, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0_1));
              MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(0, Var_87, 3) = ((MR_Box) (Info_7));
              MR_hl_field(0, Var_87, 4) = ((MR_Box) (GoalId_10));
              MR_hl_field(0, Var_87, 5) = ((MR_Box) (Name_79));
              MR_hl_field(0, Var_87, 6) = ((MR_Box) (UserArity_86));
              MR_hl_field(0, Var_87, 7) = ((MR_Box) (AccessType_82));
              MR_hl_field(0, Var_87, 8) = ((MR_Box) (FieldName_83));
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
    succeeded = check_hlds__typecheck__builtin_atomic_type_2_p_0(ConsId_8, &BuiltInTypeName_30);
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
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (BuiltInTypeName_30));
    }
    {
      TypeCtor_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtor_31, 0) = ((MR_Box) (Var_55));
      MR_hl_field(0, TypeCtor_31, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(TypeCtor_31, (MR_Word) ((MR_Unsigned) 0U), &ConsType_32);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &ConsTypeVarSet_33);
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (BuiltInTypeName_30));
    }
    {
      ConsInfo_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConsInfo_34, 0) = ((MR_Box) (ConsTypeVarSet_33));
      MR_hl_field(0, ConsInfo_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ConsInfo_34, 2) = ((MR_Box) (ConsType_32));
      MR_hl_field(0, ConsInfo_34, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ConsInfo_34, 4) = ((MR_Box) (EmptyConstraints_13));
      MR_hl_field(0, ConsInfo_34, 5) = ((MR_Box) (Var_60));
    }
    {
      BuiltinConsInfos_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BuiltinConsInfos_35, 0) = ((MR_Box) (ConsInfo_34));
      MR_hl_field(1, BuiltinConsInfos_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    BuiltinConsInfos_35 = (MR_Word) ((MR_Unsigned) 0U);
  if (((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
  {
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
    MR_String Var_63;

    TupleArity_36 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_62)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_63 = ((MR_String) ((MR_hl_field(0, Var_62, (MR_Integer) 0))));
      succeeded = (strcmp(Var_63, (MR_String) "{}") == 0);
    }
  }
  else
  if (((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
  {
    TupleArity_36 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
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
      MR_hl_field(0, TupleTypeCtor_42, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_2[2]));
      MR_hl_field(0, TupleTypeCtor_42, 1) = ((MR_Box) (TupleArity_36));
    }
    parse_tree__prog_type__construct_type_3_p_0(TupleTypeCtor_42, TupleArgTypes_41, &TupleConsType_43);
    {
      TupleConsInfo_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TupleConsInfo_45, 0) = ((MR_Box) (TupleConsTypeVarSet_40));
      MR_hl_field(0, TupleConsInfo_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, TupleConsInfo_45, 2) = ((MR_Box) (TupleConsType_43));
      MR_hl_field(0, TupleConsInfo_45, 3) = ((MR_Box) (TupleArgTypes_41));
      MR_hl_field(0, TupleConsInfo_45, 4) = ((MR_Box) (EmptyConstraints_13));
      MR_hl_field(0, TupleConsInfo_45, 5) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_scalar_common_2[3])));
    }
    {
      TupleConsInfos_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TupleConsInfos_46, 0) = ((MR_Box) (TupleConsInfo_45));
      MR_hl_field(1, TupleConsInfos_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    TupleConsInfos_46 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = check_hlds__typecheck__builtin_pred_type_5_p_0(Info_7, ConsId_8, Arity_9, GoalId_10, &PredConsInfosPrime_47);
  if (succeeded)
    PredConsInfos_48 = PredConsInfosPrime_47;
  else
    PredConsInfos_48 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(ConsId_8, Arity_9, &ApplyConsInfosPrime_49);
  if (succeeded)
    ApplyConsInfos_50 = ApplyConsInfosPrime_49;
  else
    ApplyConsInfos_50 = (MR_Word) ((MR_Unsigned) 0U);
  Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), PredConsInfos_48, ApplyConsInfos_50);
  Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), TupleConsInfos_46, Var_71);
  OtherConsInfos_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), BuiltinConsInfos_35, Var_70);
  *ConsInfos_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), DataConsInfos_29, OtherConsInfos_51);
}

static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ConsId_6,
  MR_Integer Arity_7,
  MR_Word * ConsTypeInfos_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
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
    Var_21 = ((MR_Word) ((MR_hl_field(3, ConsId_6, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      ApplyName_9 = ((MR_String) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
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
            MR_hl_field(0, RetType_18, 0) = ((MR_Box) (RetTypeVar_32));
            MR_hl_field(0, RetType_18, 1) = ((MR_Box) (Var_34));
          }
          parse_tree__prog_type__construct_higher_order_func_type_5_p_0(Purity_13, ArgTypes_17, RetType_18, &FuncType_16);
          ExistQVars_19 = (MR_Word) ((MR_Unsigned) 0U);
          hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_20);
          {
            Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_26, 0) = ((MR_Box) (FuncType_16));
            MR_hl_field(1, Var_26, 1) = ((MR_Box) (ArgTypes_17));
          }
          {
            Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_27, 1) = ((MR_Box) (ApplyNameToUse_12));
          }
          {
            Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_25, 0) = ((MR_Box) (TypeVarSet_15));
            MR_hl_field(0, Var_25, 1) = ((MR_Box) (ExistQVars_19));
            MR_hl_field(0, Var_25, 2) = ((MR_Box) (RetType_18));
            MR_hl_field(0, Var_25, 3) = ((MR_Box) (Var_26));
            MR_hl_field(0, Var_25, 4) = ((MR_Box) (EmptyConstraints_20));
            MR_hl_field(0, Var_25, 5) = ((MR_Box) (Var_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ConsTypeInfos_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
            MR_hl_field(1, base, 1) = ((MR_Box) (ExistQVars_19));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
  MR_Word Info_6,
  MR_Word ConsId_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsTypeInfos_10)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
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
        MR_Word Var_50;

        mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, CompleteArgTypes_33, &ArgTypes_35, &PredTypeParams_36);
        parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(Purity_34, PredTypeParams_36, &PredType_37);
        hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_26, PredTypeVarSet_31, GoalId_3, PredClassContext_30, &PredConstraints_38);
        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (PredId_18));
        }
        {
          ConsTypeInfo_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ConsTypeInfo_39, 0) = ((MR_Box) (PredTypeVarSet_31));
          MR_hl_field(0, ConsTypeInfo_39, 1) = ((MR_Box) (PredExistQVars_32));
          MR_hl_field(0, ConsTypeInfo_39, 2) = ((MR_Box) (PredType_37));
          MR_hl_field(0, ConsTypeInfo_39, 3) = ((MR_Box) (ArgTypes_35));
          MR_hl_field(0, ConsTypeInfo_39, 4) = ((MR_Box) (PredConstraints_38));
          MR_hl_field(0, ConsTypeInfo_39, 5) = ((MR_Box) (Var_50));
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
        MR_Integer Var_51;

        succeeded = (IsPredOrFunc_29 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_51 = (MR_Integer) 1;
          PredAsFuncArity_40 = (MR_Integer) ((MR_Unsigned) PredFormArityInt_28 - (MR_Unsigned) Var_51);
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
          MR_Word Var_53;
          MR_Word PredConstraints_54;
          MR_Word ConsTypeInfo_55;
          MR_Box conv1_FuncReturnTypeParam_44;

          mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, CompleteArgTypes_33, &FuncArgTypes_41, &FuncTypeParams_42);
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), FuncTypeParams_42, &FuncArgTypeParams_43, &conv1_FuncReturnTypeParam_44);
          FuncReturnTypeParam_44 = ((MR_Word) (conv1_FuncReturnTypeParam_44));
          if ((FuncArgTypeParams_43 == (MR_Word) ((MR_Unsigned) 0U)))
            FuncType_45 = FuncReturnTypeParam_44;
          else
            parse_tree__prog_type__construct_higher_order_func_type_5_p_0(Purity_34, FuncArgTypeParams_43, FuncReturnTypeParam_44, &FuncType_45);
          hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_26, PredTypeVarSet_31, GoalId_3, PredClassContext_30, &PredConstraints_54);
          {
            Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_53, 1) = ((MR_Box) (PredId_18));
          }
          {
            ConsTypeInfo_55 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ConsTypeInfo_55, 0) = ((MR_Box) (PredTypeVarSet_31));
            MR_hl_field(0, ConsTypeInfo_55, 1) = ((MR_Box) (PredExistQVars_32));
            MR_hl_field(0, ConsTypeInfo_55, 2) = ((MR_Box) (FuncType_45));
            MR_hl_field(0, ConsTypeInfo_55, 3) = ((MR_Box) (FuncArgTypes_41));
            MR_hl_field(0, ConsTypeInfo_55, 4) = ((MR_Box) (PredConstraints_54));
            MR_hl_field(0, ConsTypeInfo_55, 5) = ((MR_Box) (Var_53));
          }
          {
            STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (ConsTypeInfo_55));
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
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
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
check_hlds__typecheck__convert_cons_defn_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ConsDefn_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word ConsDefns_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word ConsTypeInfo_17;
    MR_Word * AddrConsTypeInfos_19;

    check_hlds__typecheck__convert_cons_defn_6_p_1(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, ConsDefn_15, &ConsTypeInfo_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsTypeInfo_17));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrConsTypeInfos_19 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__6_6, (MR_Integer) 1)));
    check_hlds__typecheck__LCMC__pred__convert_cons_defn_list__1_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, ConsDefns_16, AddrConsTypeInfos_19);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMC__pred__convert_cons_defn_list__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * AddrOfHeadVar__6_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__6_20 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ConsDefn_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ConsDefns_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ConsTypeInfo_17;
      MR_Word * AddrConsTypeInfos_19;
      MR_Word HeadVar__6_21;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word * next_value_of_AddrOfHeadVar__6_20;

      check_hlds__typecheck__convert_cons_defn_6_p_1(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, ConsDefn_15, &ConsTypeInfo_17);
      {
        HeadVar__6_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__6_21, 0) = ((MR_Box) (ConsTypeInfo_17));
        MR_hl_field(1, HeadVar__6_21, 1) = NULL;
      }
      AddrConsTypeInfos_19 = (MR_Word *) (&(MR_hl_field(1, HeadVar__6_21, (MR_Integer) 1)));
      *AddrOfHeadVar__6_20 = HeadVar__6_21;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ConsDefns_16;
      next_value_of_AddrOfHeadVar__6_20 = AddrConsTypeInfos_19;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      AddrOfHeadVar__6_20 = next_value_of_AddrOfHeadVar__6_20;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_47;

  conv0_LambdaHeadVar__2_47 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3080__2_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_47));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_6_p_1(
  MR_Word Info_7,
  MR_Word GoalId_8,
  MR_Word Action_9,
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

  ArgTypes_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[3]), Args_18);
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
      *ConsTypeInfo_12 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_scalar_common_2[4]));
    else
    {
      succeeded = (Action_9 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (MaybeExistConstraints_17 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word Var_55;

        {
          Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_55, 0) = ((MR_Box) (TypeCtor_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ConsTypeInfo_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_55));
        }
      }
      else
      {
        MR_Word ConsTypeArgs_33;
        MR_Word ConsType_34;
        MR_Word ExistQVars0_36;
        MR_Word ExistProgConstraints_37;
        MR_Word ProgConstraints_41;
        MR_Word ExistQVars_42;
        MR_Word ClassTable_43;
        MR_Word Constraints_44;
        MR_Word Var_57;
        MR_Word Var_58;

        parse_tree__prog_type__var_list_to_type_list_3_p_0(ConsTypeKinds_16, ConsTypeParams_15, &ConsTypeArgs_33);
        parse_tree__prog_type__construct_type_3_p_0(TypeCtor_13, ConsTypeArgs_33, &ConsType_34);
        if ((MaybeExistConstraints_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ExistQVars0_36 = (MR_Word) ((MR_Unsigned) 0U);
          ExistProgConstraints_37 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word ExistConstraints_38 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_17), (MR_Integer) 1));

          ExistQVars0_36 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_38, (MR_Integer) 0))));
          ExistProgConstraints_37 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_38, (MR_Integer) 1))));
        }
        switch (Action_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              {
                ProgConstraints_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ProgConstraints_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, ProgConstraints_41, 1) = ((MR_Box) (ExistProgConstraints_37));
              }
              ExistQVars_42 = ExistQVars0_36;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                ProgConstraints_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ProgConstraints_41, 0) = ((MR_Box) (ExistProgConstraints_37));
                MR_hl_field(0, ProgConstraints_41, 1) = ((MR_Box) (ExistProgConstraints_37));
              }
              ExistQVars_42 = ExistQVars0_36;
            }
            break;
          case (MR_Integer) 0:
            {
              {
                ProgConstraints_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ProgConstraints_41, 0) = ((MR_Box) (ExistProgConstraints_37));
                MR_hl_field(0, ProgConstraints_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              ExistQVars_42 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
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
    MR_Word MaybeConsInfo_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word MaybeConsInfos_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word InfosTail_8;
    MR_Word ErrorsTail_9;

    check_hlds__typecheck__split_cons_errors_3_p_0(MaybeConsInfos_5, &InfosTail_8, &ErrorsTail_9);
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
        MR_Word TypeAssign_29;
        MR_Word EmptyConstraints_30;
        MR_Word ArgsTypeAssign_31;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_22, TypeAssign0_16, &TypeAssign_29);
        hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_30);
        {
          Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_28, 0) = ((MR_Box) (Source0_19));
        }
        {
          ArgsTypeAssign_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgsTypeAssign_31, 0) = ((MR_Box) (TypeAssign_29));
          MR_hl_field(0, ArgsTypeAssign_31, 1) = ((MR_Box) (ConsArgTypes_18));
          MR_hl_field(0, ArgsTypeAssign_31, 2) = ((MR_Box) (EmptyConstraints_30));
          MR_hl_field(0, ArgsTypeAssign_31, 3) = ((MR_Box) (Var_28));
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
        MR_Word ExistQTVars_32;
        MR_Word TypeBindings0_33;
        MR_Word TypeBindings_34;

        check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_16, &ExistQTVars_32);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_16, &TypeBindings0_33);
        succeeded = parse_tree__prog_type__type_unify_5_p_0(ConsType_17, OldVarType_23, ExistQTVars_32, TypeBindings0_33, &TypeBindings_34);
        if (succeeded)
        {
          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_34, TypeAssign0_16, &TypeAssign_24);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word EmptyConstraints_25;
          MR_Word ArgsTypeAssign_26;
          MR_Word Var_27;

          hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_25);
          {
            Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_27, 0) = ((MR_Box) (Source0_19));
          }
          {
            ArgsTypeAssign_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ArgsTypeAssign_26, 0) = ((MR_Box) (TypeAssign_24));
            MR_hl_field(0, ArgsTypeAssign_26, 1) = ((MR_Box) (ConsArgTypes_18));
            MR_hl_field(0, ArgsTypeAssign_26, 2) = ((MR_Box) (EmptyConstraints_25));
            MR_hl_field(0, ArgsTypeAssign_26, 3) = ((MR_Box) (Var_27));
          }
          {
            STATE_VARIABLE_ArgsTypeAssignSet_15_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_15_15, 0) = ((MR_Box) (ArgsTypeAssign_26));
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
      MR_Word ConsTypeInfo_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ConsTypeInfos_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;

      check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(ConsTypeInfo_9, TypeAssigns_2, STATE_VARIABLE_ConsTypeAssignSet_0_3, &STATE_VARIABLE_ConsTypeAssignSet_15_15);
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
check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(
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
            ExistQTVars_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ConsExistQVars_31, ExistQTVars0_32);
            check_hlds__type_assign__type_assign_set_existq_tvars_3_p_0(ExistQTVars_33, TypeAssign1_27, &TypeAssign2_25);
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

  check_hlds__typecheck__typecheck_coerce_2_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeAssignSet_35, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_37);
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
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_coerce\'/6", (MR_String) "coerce requires two arguments");
      return;
    }
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_coerce_6_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (FromVar_14));
    MR_hl_field(0, Var_25, 5) = ((MR_Box) (ToVar_15));
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

    check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_27, Context_11, ArgVectorKind_10, (MR_Integer) 1, ArgVars_14, PredArgTypes_21, STATE_VARIABLE_TypeAssignSet_0_25, STATE_VARIABLE_TypeAssignSet_26, (MR_Word) ((MR_Unsigned) 0U), &Specs_36, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_scalar_common_2[1])), &MaybeArgVectorTypeErrors_37);
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

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[2]), Specs_36, ((MR_Box) (STATE_VARIABLE_Info_0_27)), &conv1_STATE_VARIABLE_Info_28);
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
    check_hlds__typecheck__add_renamed_apart_arg_type_assigns_8_p_0(Var_33, PredTypeVarSet_19, PredExistQVars_20, PredArgTypes_21, PredConstraints_24, STATE_VARIABLE_TypeAssignSet_0_25, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_50);
    check_hlds__typecheck__typecheck_vars_have_arg_types_8_p_0(Var_34, Context_11, (MR_Integer) 1, ArgVars_14, ArgsTypeAssignSet0_50, &ArgsTypeAssignSet_51, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
    *STATE_VARIABLE_TypeAssignSet_26 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_51);
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
      MR_hl_field(0, SymNamePredFormArity_20, 0) = ((MR_Box) (SymName_10));
      MR_hl_field(0, SymNamePredFormArity_20, 1) = ((MR_Box) (PredFormArity_19));
    }
    *PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_32, &ClauseContext_23);
    Spec_24 = check_hlds__typecheck_error_undef__report_error_undef_pred_3_f_0(ClauseContext_23, Context_11, SymNamePredFormArity_20);
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

        check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_32, Context_11, ArgVectorKind_27, (MR_Integer) 1, ArgVars_13, PredArgTypes_43, STATE_VARIABLE_TypeAssignSet_0_30, &STATE_VARIABLE_TypeAssignSet_36_36, (MR_Word) ((MR_Unsigned) 0U), &Specs_52, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_scalar_common_2[1])), &MaybeArgVectorTypeErrors_53);
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

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[1]), Specs_52, ((MR_Box) (STATE_VARIABLE_Info_0_32)), &conv1_STATE_VARIABLE_Info_37_37);
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
        check_hlds__typecheck__add_renamed_apart_arg_type_assigns_8_p_0(Var_49, PredTypeVarSet_41, PredExistQVars_42, PredArgTypes_43, PredConstraints_46, STATE_VARIABLE_TypeAssignSet_0_30, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_66);
        check_hlds__typecheck__typecheck_vars_have_arg_types_8_p_0(Var_50, Context_11, (MR_Integer) 1, ArgVars_13, ArgsTypeAssignSet0_66, &ArgsTypeAssignSet_67, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_37_37);
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

      PredFormArity_70 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgVars_13);
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
      check_hlds__typecheck__add_renamed_apart_arg_type_assigns_8_p_0(Var_106, PredTypeVarSet_98, PredExistQVars_99, PredArgTypes_100, PredConstraints_103, STATE_VARIABLE_TypeAssignSet_0_30, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ArgsTypeAssignSet_32_107);
      check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(PredIdTable_76, ClassTable_74, GoalId_12, PredIds_95, STATE_VARIABLE_TypeAssignSet_0_30, STATE_VARIABLE_ArgsTypeAssignSet_32_107, &ArgsTypeAssignSet0_77);
      {
        Var_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_82, 0) = ((MR_Box) (SymNamePredFormArity_71));
      }
      {
        VarVectorKind_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VarVectorKind_78, 0) = ((MR_Box) (Var_82));
      }
      check_hlds__typecheck__typecheck_vars_have_arg_types_8_p_0(VarVectorKind_78, Context_11, (MR_Integer) 1, ArgVars_13, ArgsTypeAssignSet0_77, &ArgsTypeAssignSet_79, STATE_VARIABLE_Info_30_80, &STATE_VARIABLE_Info_37_37);
      STATE_VARIABLE_TypeAssignSet_36_36 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_79);
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
      check_hlds__typecheck__add_renamed_apart_arg_type_assigns_8_p_0(Var_31, PredTypeVarSet_23, PredExistQVars_24, PredArgTypes_25, PredConstraints_28, HeadVar__5_5, STATE_VARIABLE_ArgsTypeAssignSet_0_6, &STATE_VARIABLE_ArgsTypeAssignSet_32_32);
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
  EventSpecMap_15 = ((MR_Word) ((MR_hl_field(0, EventSet_14, (MR_Integer) 1))));
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
      MR_Word Var_43;

      {
        ArgVectorKind_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ArgVectorKind_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ArgVectorKind_19, 1) = ((MR_Box) (EventName_9));
      }
      check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_23, Context_8, ArgVectorKind_19, (MR_Integer) 1, ArgVars_10, EventArgTypes_16, STATE_VARIABLE_TypeAssignSet_0_21, STATE_VARIABLE_TypeAssignSet_22, (MR_Word) ((MR_Unsigned) 0U), &Specs_33, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_scalar_common_2[1])), &MaybeArgVectorTypeErrors_34);
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

        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_scalar_common_5[0]), Specs_33, ((MR_Box) (STATE_VARIABLE_Info_0_23)), &conv1_STATE_VARIABLE_Info_24);
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
      MR_Word Type_66 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Types_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_77_77;
      MR_Word STATE_VARIABLE_Specs_78_78;
      MR_Word STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79;
      MR_Integer Var_80;
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
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
        if ((MaybeActualExpected_93 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word ArgVectorTypeErrors0_94 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11, (MR_Integer) 0))));
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
        succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_22, Type_3, ExistQTVars_25, TypeBindings0_26, &TypeBindings_27);
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
  MR_Word Var_32;
  MR_Word TypeVarSet0_34;
  MR_Word ArgTypeVars_35;
  MR_Word Var_36;
  MR_Word ArgsTypeAssignSet0_41;
  MR_Word ArgsTypeAssignSet_42;

  mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgVars_14, &Arity_17);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_34);
  mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_17, &ArgTypeVars_35, TypeVarSet0_34, &TypeVarSet_18);
  Var_36 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_36, ArgTypeVars_35, &ArgTypes_20);
  parse_tree__prog_type__construct_higher_order_type_5_p_0(Purity_13, (MR_Integer) 0, ArgTypes_20, &PredVarType_19);
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (GenericCallId_10));
  }
  {
    VarVectorKind_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, VarVectorKind_21, 0) = ((MR_Box) (Var_29));
  }
  hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_22);
  {
    Var_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_30, 0) = ((MR_Box) (PredVar_12));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (PredVar_12));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (ArgVars_14));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (PredVarType_19));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (ArgTypes_20));
  }
  check_hlds__typecheck__add_renamed_apart_arg_type_assigns_8_p_0(Var_30, TypeVarSet_18, (MR_Word) ((MR_Unsigned) 0U), Var_32, EmptyConstraints_22, STATE_VARIABLE_TypeAssignSet_0_24, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_41);
  check_hlds__typecheck__typecheck_vars_have_arg_types_8_p_0(VarVectorKind_21, Context_11, (MR_Integer) 1, Var_31, ArgsTypeAssignSet0_41, &ArgsTypeAssignSet_42, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
  *STATE_VARIABLE_TypeAssignSet_25 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_42);
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
    MR_Word ArgsTypeAssignSet0_32;
    MR_Word ArgsTypeAssignSet_33;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_15);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_16, TypeVarSet0_15, &TypeVarSet_17);
    {
      Type_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Type_18, 0) = ((MR_Box) (TypeVar_16));
      MR_hl_field(0, Type_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), Vars_10, &NumVars_19);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumVars_19, ((MR_Box) (Type_18)), &Types_20);
    hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_21);
    check_hlds__typecheck__add_renamed_apart_arg_type_assigns_8_p_0((MR_Word) ((MR_Unsigned) 0U), TypeVarSet_17, (MR_Word) ((MR_Unsigned) 0U), Types_20, EmptyConstraints_21, STATE_VARIABLE_TypeAssignSet_0_22, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_32);
    check_hlds__typecheck__typecheck_vars_have_arg_types_8_p_0(VarVectorKind_8, Context_9, (MR_Integer) 1, Vars_10, ArgsTypeAssignSet0_32, &ArgsTypeAssignSet_33, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
    *STATE_VARIABLE_TypeAssignSet_23 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_33);
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
    MR_Word ArgsTypeAssignSet0_32;
    MR_Word ArgsTypeAssignSet_33;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), Vars_10, &NumVars_15);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_16);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NumVars_15, &TypeVars_17, TypeVarSet0_16, &TypeVarSet_18);
    Var_25 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_25, TypeVars_17, &Types_19);
    hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_20);
    check_hlds__typecheck__add_renamed_apart_arg_type_assigns_8_p_0((MR_Word) ((MR_Unsigned) 0U), TypeVarSet_18, (MR_Word) ((MR_Unsigned) 0U), Types_19, EmptyConstraints_20, STATE_VARIABLE_TypeAssignSet_0_21, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_32);
    check_hlds__typecheck__typecheck_vars_have_arg_types_8_p_0(VarVectorKind_8, Context_9, (MR_Integer) 1, Vars_10, ArgsTypeAssignSet0_32, &ArgsTypeAssignSet_33, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
    *STATE_VARIABLE_TypeAssignSet_22 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_33);
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_vars_have_arg_types_8_p_0(
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
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_30_30;
      MR_Word STATE_VARIABLE_Info_31_31;
      MR_Integer Var_32;
      MR_Word ArgsTypeAssignSet1_36;
      MR_Integer next_value_of_CurArgNum_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      check_hlds__typecheck__typecheck_var_has_arg_type_in_args_type_assigns_5_p_0(CurArgNum_3, Var_21, STATE_VARIABLE_ArgsTypeAssignSet_0_5, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet1_36);
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
        MR_Word GoalContext_25;
        MR_Word Spec_39;

        {
          GoalContext_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, GoalContext_25, 0) = ((MR_Box) (VarVectorKind_1));
          MR_hl_field(1, GoalContext_25, 1) = ((MR_Box) (CurArgNum_3));
        }
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
check_hlds__typecheck__typecheck_var_has_arg_type_in_args_type_assigns_5_p_0(
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
        succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_27, ArgType_24, ExistQTVars_33, TypeBindings0_34, &TypeBindings_35);
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
check_hlds__typecheck__add_renamed_apart_arg_type_assigns_8_p_0(
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
      ExistQTVars_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ParentExistQVars_28, ExistQTVars0_30);
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
    MR_Word Interfaces_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_7;
    MR_Word * AddrSCCcallarg_8_9;

    I_3 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
    O_4 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 1))));
    {
      Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_7, 0) = ((MR_Box) (O_4));
      MR_hl_field(1, Var_7, 1) = NULL;
    }
    AddrSCCcallarg_8_9 = (MR_Word *) (&(MR_hl_field(1, Var_7, (MR_Integer) 1)));
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (I_3));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_7));
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
      MR_Word Interfaces_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_7;
      MR_Word * AddrSCCcallarg_8_9;
      MR_Word HeadVar__2_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_10;

      I_3 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
      O_4 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 1))));
      {
        Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_7, 0) = ((MR_Box) (O_4));
        MR_hl_field(1, Var_7, 1) = NULL;
      }
      AddrSCCcallarg_8_9 = (MR_Word *) (&(MR_hl_field(1, Var_7, (MR_Integer) 1)));
      {
        HeadVar__2_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_11, 0) = ((MR_Box) (I_3));
        MR_hl_field(1, HeadVar__2_11, 1) = ((MR_Box) (Var_7));
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
  MR_Word UnivCsA_30 = ((MR_Word) ((MR_hl_field(0, TypeConstraintsA_11, (MR_Integer) 0))));
  MR_Word ExistCsA_31 = ((MR_Word) ((MR_hl_field(0, TypeConstraintsA_11, (MR_Integer) 1))));
  MR_Word UnivCsB_32 = ((MR_Word) ((MR_hl_field(0, TypeConstraintsB_14, (MR_Integer) 0))));
  MR_Word ExistCsB_33 = ((MR_Word) ((MR_hl_field(0, TypeConstraintsB_14, (MR_Integer) 1))));
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
      succeeded = check_hlds__typecheck__constraints_have_same_structure_loop_4_p_0(UnivCsA_30, UnivCsB_32, &UnivTypesA_34, &UnivTypesB_35);
      if (succeeded)
      {
        succeeded = check_hlds__typecheck__constraints_have_same_structure_loop_4_p_0(ExistCsA_31, ExistCsB_33, &ExistTypesA_36, &ExistTypesB_37);
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
            Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_23, 0) = ((MR_Box) (ConstrainedTypesA_15));
            MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_24));
          }
          {
            Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_22, 0) = ((MR_Box) (ArgTypesA_10));
            MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
          }
          {
            Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_21, 0) = ((MR_Box) (ExistQVarTypesA_17));
            MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_22));
          }
          mercury__list__condense_2_p_0(TypeCtorInfo_29_29, Var_21, &TypesListA_19);
          Var_28 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (ConstrainedTypesB_16));
            MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_28));
          }
          {
            Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_26, 0) = ((MR_Box) (ArgTypesB_13));
            MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_27));
          }
          {
            Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_25, 0) = ((MR_Box) (ExistQVarTypesB_18));
            MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_26));
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
check_hlds__typecheck__constraints_have_same_structure_loop_4_p_0(
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
    MR_Word ConstraintA_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ConstraintsA_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
      ConstraintB_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ConstraintsB_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ClassName_11 = ((MR_Word) ((MR_hl_field(0, ConstraintA_5, (MR_Integer) 0))));
      ArgTypesA_12 = ((MR_Word) ((MR_hl_field(0, ConstraintA_5, (MR_Integer) 1))));
      Var_17 = ((MR_Word) ((MR_hl_field(0, ConstraintB_7, (MR_Integer) 0))));
      ArgTypesB_13 = ((MR_Word) ((MR_hl_field(0, ConstraintB_7, (MR_Integer) 1))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ClassName_11, Var_17);
      if (succeeded)
      {
        TypeCtorInfo_16_16 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_16_16, TypeCtorInfo_16_16, ArgTypesA_12, ArgTypesB_13);
        if (succeeded)
        {
          succeeded = check_hlds__typecheck__constraints_have_same_structure_loop_4_p_0(ConstraintsA_6, ConstraintsB_8, &TypesA0_14, &TypesB0_15);
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
check_hlds__typecheck__restrict_constraints_to_head_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck__is_head_class_constraint_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck__restrict_constraints_to_head_vars_4_p_0(
  MR_Word ArgVarTypes_5,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * UnprovenCs_10)
{
  MR_bool succeeded;
  MR_Word UnivCs0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ExistCs0_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word UnivCs_8;
  MR_Word ExistCs_9;
  MR_Word Var_12;
  MR_Word Var_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (check_hlds__typecheck__restrict_constraints_to_head_vars_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ArgVarTypes_5));
  }
  mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_12, UnivCs0_6, &UnivCs_8, UnprovenCs_10);
  mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_12, ExistCs0_7, &ExistCs_9, &Var_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (UnivCs_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExistCs_9));
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
    OriginUser0_7 = ((MR_Word) ((MR_hl_field(0, Origin0_5, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) OriginUser0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OriginUser0_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      PFSymNameArity_8 = ((MR_Word) ((MR_hl_field(3, OriginUser0_7, (MR_Integer) 1))));
      Constraints0_9 = ((MR_Word) ((MR_hl_field(3, OriginUser0_7, (MR_Integer) 2))));
    }
  }
  if (succeeded)
  {
    MR_Word ClassId_10 = ((MR_Word) ((MR_hl_field(0, Constraints0_9, (MR_Integer) 0))));
    MR_Word InstanceTypes0_11 = ((MR_Word) ((MR_hl_field(0, Constraints0_9, (MR_Integer) 1))));
    MR_Word InstanceConstraints0_12 = ((MR_Word) ((MR_hl_field(0, Constraints0_9, (MR_Integer) 2))));
    MR_Word ClassMethodClassContext0_13 = ((MR_Word) ((MR_hl_field(0, Constraints0_9, (MR_Integer) 3))));
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
      MR_hl_field(0, Constraints_17, 0) = ((MR_Box) (ClassId_10));
      MR_hl_field(0, Constraints_17, 1) = ((MR_Box) (InstanceTypes_14));
      MR_hl_field(0, Constraints_17, 2) = ((MR_Box) (InstanceConstraints_15));
      MR_hl_field(0, Constraints_17, 3) = ((MR_Box) (ClassMethodClassContext_16));
    }
    {
      OriginUser_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, OriginUser_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, OriginUser_18, 1) = ((MR_Box) (PFSymNameArity_8));
      MR_hl_field(3, OriginUser_18, 2) = ((MR_Box) (Constraints_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Origin_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OriginUser_18));
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
