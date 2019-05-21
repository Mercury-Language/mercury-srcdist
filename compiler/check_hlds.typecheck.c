/*
** Automatically generated from `typecheck.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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


/* :- module check_hlds.typecheck. */
/* :- implementation. */

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
#include "check_hlds.delay_info.mih"
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
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
#include "hlds.headvar_names.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

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

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2];

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2];

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3467__2_1_f_0(
  MR_Word check_hlds__typecheck__LambdaHeadVar__1_38);

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3467__1_1_f_0(
  MR_Word check_hlds__typecheck__LambdaHeadVar__1_38);

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1519__1_2_p_0(
  MR_Word check_hlds__typecheck__GoalType_96,
  MR_Word check_hlds__typecheck__HeadVar__2_162);

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__524__1_2_p_0(
  MR_Word check_hlds__typecheck__StartingSpecs_26,
  MR_Word check_hlds__typecheck__HeadVar__2_55);

static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
  MR_Word check_hlds__typecheck__HeadVar__2_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_0_0(
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_0_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
  MR_Word check_hlds__typecheck__HeadVar__2_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
  void * check_hlds__typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
  void * check_hlds__typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
  void * check_hlds__typecheck__env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
  MR_Word check_hlds__typecheck__TVarRenaming_4,
  MR_Word check_hlds__typecheck__Constraint0_5,
  MR_Word * check_hlds__typecheck__Constraint_6);

static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
  MR_Word check_hlds__typecheck__CallTVars_3,
  MR_Word check_hlds__typecheck__Constraint_4);

static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
  MR_Word check_hlds__typecheck__Info_9,
  MR_Word check_hlds__typecheck__GoalId_10,
  MR_Word check_hlds__typecheck__FuncName_11,
  MR_Integer check_hlds__typecheck__Arity_12,
  MR_Word check_hlds__typecheck__AccessType_13,
  MR_Word check_hlds__typecheck__FieldName_14,
  MR_Word check_hlds__typecheck__FieldDefn_15,
  MR_Word * check_hlds__typecheck__ConsTypeInfo_16);

static MR_Box MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_5_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_5_p_0(
  MR_Word check_hlds__typecheck__Info_6,
  MR_Word check_hlds__typecheck__GoalId_7,
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10);

static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
  MR_Word check_hlds__typecheck__ClassTable_8,
  MR_Word check_hlds__typecheck__AccessType_9,
  MR_Word check_hlds__typecheck__FieldName_10,
  MR_Word check_hlds__typecheck__FieldDefn_11,
  MR_Word check_hlds__typecheck__FunctorConsTypeInfo_12,
  MR_Word check_hlds__typecheck__OrigExistTVars_13,
  MR_Word * check_hlds__typecheck__ConsTypeInfo_14);

static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
  MR_Word check_hlds__typecheck__ClassTable_7,
  MR_Word check_hlds__typecheck__TVarSet_8,
  MR_Word check_hlds__typecheck__CallTVars_9,
  MR_Word check_hlds__typecheck__TVarRenaming_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Constraints_21);

static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
  MR_Word check_hlds__typecheck__ConsType_6,
  MR_Word check_hlds__typecheck__Y_7,
  MR_Word check_hlds__typecheck__TypeAssign0_8,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(
  MR_Word check_hlds__typecheck__Context_7,
  MR_Word check_hlds__typecheck__Var_8,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14);

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
  void * check_hlds__typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
  void * check_hlds__typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
  void * check_hlds__typecheck__env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
  MR_Word check_hlds__typecheck__HeadTypeVars_3,
  MR_Word check_hlds__typecheck__Constraint_4);

static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_6_p_0(
  MR_Word check_hlds__typecheck__Context_7,
  MR_Word check_hlds__typecheck__TypeVarSet_8,
  MR_Word check_hlds__typecheck__Impl_9,
  MR_Word check_hlds__typecheck__TVar_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
  MR_Word check_hlds__typecheck__TypeVarSet_6,
  MR_Word check_hlds__typecheck__ExistQVars_7,
  MR_Word check_hlds__typecheck__Clause_8,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_10_p_0(
  MR_Integer check_hlds__typecheck__Iteration_11,
  MR_Integer check_hlds__typecheck__MaxIterations_12,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_36,
  MR_Word check_hlds__typecheck__OrigValidPredIds_14,
  MR_Word check_hlds__typecheck__OrigValidPredIdSet_15,
  MR_Word * check_hlds__typecheck__FinalValidPredIdSet_16,
  MR_Word * check_hlds__typecheck__Specs_17,
  MR_Word * check_hlds__typecheck__FoundSyntaxError_18,
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_19);

static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_12_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_1,
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_0_9,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_11,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_12);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_module_one_iteration_1_12_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_1,
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4_71,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_0_9,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_11,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_12);

static void MR_CALL 
check_hlds__typecheck__typecheck_pred_if_needed_8_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_9,
  MR_Word check_hlds__typecheck__PredId_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_21,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_22,
  MR_Word * check_hlds__typecheck__Specs_12,
  MR_Word * check_hlds__typecheck__FoundSyntaxError_13,
  MR_Word * check_hlds__typecheck__ContainsErrors_14,
  MR_Word * check_hlds__typecheck__Changed_15);

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_8_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg);

static void MR_CALL 
check_hlds__typecheck__typecheck_pred_8_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_9,
  MR_Word check_hlds__typecheck__PredId_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_36,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_37,
  MR_Word * check_hlds__typecheck__Specs_12,
  MR_Word * check_hlds__typecheck__FoundSyntaxError_13,
  MR_Word * check_hlds__typecheck__ContainsErrors_14,
  MR_Word * check_hlds__typecheck__Changed_15);

static void MR_CALL 
check_hlds__typecheck__generate_stub_clause_4_p_0(
  MR_Word check_hlds__typecheck__PredId_5,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_17,
  MR_Word check_hlds__typecheck__ModuleInfo_7);

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_8,
  MR_Word check_hlds__typecheck__PredId_9,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_70,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_71,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_72,
  MR_Word * check_hlds__typecheck__Changed_12);

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_8_p_0(
  MR_Word check_hlds__typecheck__HeadVars_1,
  MR_Word check_hlds__typecheck__ArgTypes_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_clause_list_1_8_p_0(
  MR_Word check_hlds__typecheck__HeadVars_1,
  MR_Word check_hlds__typecheck__ArgTypes_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4_34,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0(
  MR_Word check_hlds__typecheck__HeadVars_9,
  MR_Word check_hlds__typecheck__ArgTypes_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Clause_0_22,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Clause_23,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_goal_1_7_p_0(
  MR_Word check_hlds__typecheck__Goal0_8,
  MR_Word * check_hlds__typecheck__AddrOfGoal_43,
  MR_Word check_hlds__typecheck__EnclosingContext_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_30,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_31);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_unification_1_10_p_0(
  MR_Word check_hlds__typecheck__UnifyContext_11,
  MR_Word check_hlds__typecheck__Context_12,
  MR_Word check_hlds__typecheck__GoalId_13,
  MR_Word check_hlds__typecheck__X_14,
  MR_Word check_hlds__typecheck__RHS0_15,
  MR_Word * check_hlds__typecheck__AddrOfRHS_83,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_35,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_36);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_31,
  MR_Word check_hlds__typecheck__Context_3,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_7_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__Context_3,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_7);

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_3(
  MR_Box check_hlds__typecheck__closure_arg);

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_2(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3,
  MR_Box check_hlds__typecheck__wrapper_arg_4,
  MR_Box * check_hlds__typecheck__wrapper_arg_5);

static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0(
  MR_Word check_hlds__typecheck__GoalExpr0_8,
  MR_Word * check_hlds__typecheck__GoalExpr_9,
  MR_Word check_hlds__typecheck__GoalInfo_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_119,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_120);

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_7_p_0(
  MR_Word check_hlds__typecheck__Goal0_8,
  MR_Word * check_hlds__typecheck__Goal_9,
  MR_Word check_hlds__typecheck__EnclosingContext_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_30,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_31);

static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__Purity_2,
  MR_Word check_hlds__typecheck__PredOrFunc_3,
  MR_Word check_hlds__typecheck__Var_5,
  MR_Word check_hlds__typecheck__ArgVars_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8);

static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_type_assign_get_types_of_vars_1_4_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_27,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);

static void MR_CALL 
check_hlds__typecheck__type_assigns_unify_var_var_5_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__X_2,
  MR_Word check_hlds__typecheck__Y_3,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(
  MR_Word check_hlds__typecheck__UnifyContext_11,
  MR_Word check_hlds__typecheck__Context_12,
  MR_Word check_hlds__typecheck__Var_13,
  MR_Word check_hlds__typecheck__ConsId_14,
  MR_Word check_hlds__typecheck__ArgVars_15,
  MR_Word check_hlds__typecheck__GoalId_16,
  MR_Word check_hlds__typecheck__TypeAssignSet0_17,
  MR_Word * check_hlds__typecheck__TypeAssignSet_18,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_54,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_55);

static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word check_hlds__typecheck__ArgVars_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__ArgVars_3,
  MR_Word check_hlds__typecheck__Types_4,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6);

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
  MR_Word check_hlds__typecheck__Info_7,
  MR_Word check_hlds__typecheck__Functor_8,
  MR_Integer check_hlds__typecheck__Arity_9,
  MR_Word check_hlds__typecheck__GoalId_10,
  MR_Word * check_hlds__typecheck__ConsInfos_11,
  MR_Word * check_hlds__typecheck__ConsErrors_12);

static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
  MR_Word check_hlds__typecheck__Info_7,
  MR_Word check_hlds__typecheck__Functor_8,
  MR_Integer check_hlds__typecheck__Arity_9,
  MR_Word check_hlds__typecheck__GoalId_10,
  MR_Word * check_hlds__typecheck__ConsInfos_11,
  MR_Word * check_hlds__typecheck__DataConsErrors_12);

static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word check_hlds__typecheck__ConsId_6,
  MR_Integer check_hlds__typecheck__Arity_7,
  MR_Word * check_hlds__typecheck__ConsTypeInfos_8);

static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word check_hlds__typecheck__HeadVar__4_4,
  MR_Word * check_hlds__typecheck__HeadVar__5_5);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_convert_cons_defn_list_1_5_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word check_hlds__typecheck__HeadVar__4_4,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__5_17);

static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
  MR_Word check_hlds__typecheck__Info_6,
  MR_Word check_hlds__typecheck__GoalId_7,
  MR_Word check_hlds__typecheck__Action_8,
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10);

static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
  MR_Word * check_hlds__typecheck__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
  MR_Word check_hlds__typecheck__Info_6,
  MR_Word check_hlds__typecheck__GoalId_7,
  MR_Word check_hlds__typecheck__ConsId_8,
  MR_Integer check_hlds__typecheck__Arity_9,
  MR_Word * check_hlds__typecheck__MaybeConsTypeInfos_10);

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
  MR_Word check_hlds__typecheck__Info_6,
  MR_Word check_hlds__typecheck__ConsId_7,
  MR_Integer check_hlds__typecheck__Arity_8,
  MR_Word check_hlds__typecheck__GoalId_9,
  MR_Word * check_hlds__typecheck__ConsTypeInfos_10);

static void MR_CALL 
check_hlds__typecheck__accumulate_cons_type_infos_for_pred_ids_7_p_0(
  MR_Word check_hlds__typecheck__Info_1,
  MR_Word check_hlds__typecheck__PredTable_2,
  MR_Word check_hlds__typecheck__GoalId_3,
  MR_Word check_hlds__typecheck__HeadVar__4_4,
  MR_Integer check_hlds__typecheck__Arity_5,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_functor_types_4_p_0(
  MR_Word check_hlds__typecheck__Var_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4);

static void MR_CALL 
check_hlds__typecheck__get_cons_type_assigns_for_cons_defns_4_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__TypeAssigns_2,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_4);

static void MR_CALL 
check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(
  MR_Word check_hlds__typecheck__ConsDefn_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_4);

static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
  MR_Word check_hlds__typecheck__ConsId_4,
  MR_Word * check_hlds__typecheck__ConsType_5,
  MR_String * check_hlds__typecheck__BuiltinTypeName_6);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_8_p_0(
  MR_Word check_hlds__typecheck__GoalContext_9,
  MR_Word check_hlds__typecheck__Context_10,
  MR_Word check_hlds__typecheck__Var_11,
  MR_Word check_hlds__typecheck__Type_12,
  MR_Word check_hlds__typecheck__TypeAssignSet0_13,
  MR_Word * check_hlds__typecheck__TypeAssignSet_14,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0(
  MR_Word check_hlds__typecheck__SimpleCallId_10,
  MR_Word check_hlds__typecheck__Context_11,
  MR_Word check_hlds__typecheck__GoalId_12,
  MR_Word check_hlds__typecheck__Args_13,
  MR_Word * check_hlds__typecheck__PredId_14,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_33,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_34);

static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word check_hlds__typecheck__HeadVar__4_4,
  MR_Word check_hlds__typecheck__HeadVar__5_5,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7);

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0(
  MR_Word check_hlds__typecheck__ArgVectorKind_10,
  MR_Word check_hlds__typecheck__Context_11,
  MR_Word check_hlds__typecheck__GoalId_12,
  MR_Word check_hlds__typecheck__PredId_13,
  MR_Word check_hlds__typecheck__Args_14,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_29,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_30);

static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0(
  MR_Word check_hlds__typecheck__Context_8,
  MR_String check_hlds__typecheck__EventName_9,
  MR_Word check_hlds__typecheck__Args_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(
  MR_Word check_hlds__typecheck__Info_1,
  MR_Word check_hlds__typecheck__Context_2,
  MR_Word check_hlds__typecheck__ArgVectorKind_3,
  MR_Integer check_hlds__typecheck__ArgNum_4,
  MR_Word check_hlds__typecheck__HeadVar__5_5,
  MR_Word check_hlds__typecheck__HeadVar__6_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_9,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_12);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(
  MR_Word check_hlds__typecheck__Info_13,
  MR_Word check_hlds__typecheck__Context_14,
  MR_Word check_hlds__typecheck__ArgVectorKind_15,
  MR_Integer check_hlds__typecheck__ArgNum_16,
  MR_Word check_hlds__typecheck__Var_17,
  MR_Word check_hlds__typecheck__Type_18,
  MR_Word check_hlds__typecheck__TypeAssignSet0_19,
  MR_Word * check_hlds__typecheck__TypeAssignSet_20,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_35,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_36,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__Var_2,
  MR_Word check_hlds__typecheck__Type_3,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_9_p_0(
  MR_Word check_hlds__typecheck__GenericCallId_10,
  MR_Word check_hlds__typecheck__Context_11,
  MR_Word check_hlds__typecheck__PredVar_12,
  MR_Word check_hlds__typecheck__Purity_13,
  MR_Word check_hlds__typecheck__Args_14,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27);

static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0(
  MR_Word check_hlds__typecheck__VarVectorKind_8,
  MR_Word check_hlds__typecheck__Context_9,
  MR_Word check_hlds__typecheck__Vars_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_24,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_25);

static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_7_p_0(
  MR_Word check_hlds__typecheck__VarVectorKind_8,
  MR_Word check_hlds__typecheck__Context_9,
  MR_Word check_hlds__typecheck__Vars_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(
  MR_Word check_hlds__typecheck__VarVectorKind_1,
  MR_Integer check_hlds__typecheck__ArgNum_2,
  MR_Word check_hlds__typecheck__Context_3,
  MR_Word check_hlds__typecheck__HeadVar__4_4,
  MR_Word check_hlds__typecheck__HeadVar__5_5,
  MR_Word * check_hlds__typecheck__TypeAssignSet_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__Var_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

static void MR_CALL 
check_hlds__typecheck__delete_first_arg_in_each_arg_type_assign_2_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_delete_first_arg_in_each_arg_type_assign_1_2_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_16);

static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__PredTypeVarSet_2,
  MR_Word check_hlds__typecheck__PredExistQVars_3,
  MR_Word check_hlds__typecheck__PredArgTypes_4,
  MR_Word check_hlds__typecheck__PredConstraints_5,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7);

static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1);

static void MR_CALL 
check_hlds__typecheck__LCMCfn_atomic_interface_list_to_var_list_1_2_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_10);

static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(
  MR_Word check_hlds__typecheck__Context_7,
  MR_Word check_hlds__typecheck__StuffToCheck_8,
  MR_Word check_hlds__typecheck__HeadVars_9,
  MR_Word check_hlds__typecheck__TypeAssignSet_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_28,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_29);

static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
  MR_Word check_hlds__typecheck__KindMap_8,
  MR_Word check_hlds__typecheck__ExistQVarsA_9,
  MR_Word check_hlds__typecheck__ArgTypesA_10,
  MR_Word check_hlds__typecheck__TypeConstraintsA_11,
  MR_Word check_hlds__typecheck__ExistQVarsB_12,
  MR_Word check_hlds__typecheck__ArgTypesB_13,
  MR_Word check_hlds__typecheck__TypeConstraintsB_14);

static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__ArgVarTypes_7,
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__UnprovenCs_10);

static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
  MR_Word check_hlds__typecheck__ArgTypeVars_5,
  MR_Word * check_hlds__typecheck__ExistQVars_6,
  MR_Word check_hlds__typecheck__ExternalTypeParams0_7,
  MR_Word * check_hlds__typecheck__ExternalTypeParams_8);

static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
  MR_Word check_hlds__typecheck__Renaming_4,
  MR_Word check_hlds__typecheck__Origin0_5,
  MR_Word * check_hlds__typecheck__Origin_6);

static void MR_CALL 
check_hlds__typecheck__construct_type_inference_messages_5_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_1,
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__typecheck__prepare_for_typecheck_4_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_1,
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_prepare_for_typecheck_1_4_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_1,
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4_78);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box check_hlds__typecheck__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_0_0_10001(
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_0_0_10001(
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box check_hlds__typecheck__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box check_hlds__typecheck__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box check_hlds__typecheck__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box check_hlds__typecheck__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[24][2];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[7][5];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[12][1];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[2][6];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[7][3];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_7[1][11];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_10[2][8];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_11[2][9];


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



static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[24][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option to increase the limit)."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--type-inference-iteration-limit"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "iterations."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Inferred"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Type inference iteration limit exceeded."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This probably indicates that your program has a type error."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You should declare the types explicitly."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(The current limit is"))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 54)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[12][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "tuple"))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_event_call_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck__convert_cons_defn_5_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_3[2])),
    ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_3[3])),
    ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_clause_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_field_access_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_10[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_11[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0 = {
  (MR_String) "flip_constraints_for_new",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1 = {
  (MR_String) "flip_constraints_for_field_set",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2 = {
  (MR_String) "do_not_flip_constraints",
  (MR_Integer) 2
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_constraints_action",
  {     check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_assign_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_assign_0_0 = {
  (MR_String) "cons_type_assign",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_assign_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_assign_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_assign_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_assign_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_assign_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_type_assign_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_type_assign",
  {     check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_assign_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_assign_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_assign_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1check_hlds__typecheck__type_ctor_info_cons_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_type_assign_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__typecheck__list__ti_list_1check_hlds__typecheck__type_ctor_info_cons_type_assign_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0
};

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_cons_error_0
};

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1
};

static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "maybe_cons_type_info",
  {     check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0 = {
  (MR_String) "clause_only",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1 = {
  (MR_String) "whole_pred",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____stuff_to_check_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____stuff_to_check_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "stuff_to_check",
  {     check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0
};

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3467__2_1_f_0(
  MR_Word check_hlds__typecheck__LambdaHeadVar__1_38)
{
  {
    MR_Word check_hlds__typecheck__LambdaHeadVar__2_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__LambdaHeadVar__1_38, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__LambdaHeadVar__1_38, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__LambdaHeadVar__1_38, (MR_Integer) 2)));
    MR_Word check_hlds__typecheck__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__LambdaHeadVar__1_38, (MR_Integer) 3)));

    return check_hlds__typecheck__LambdaHeadVar__2_39;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3467__1_1_f_0(
  MR_Word check_hlds__typecheck__LambdaHeadVar__1_38)
{
  {
    MR_Word check_hlds__typecheck__LambdaHeadVar__2_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__LambdaHeadVar__1_38, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__LambdaHeadVar__1_38, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__LambdaHeadVar__1_38, (MR_Integer) 2)));
    MR_Word check_hlds__typecheck__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__LambdaHeadVar__1_38, (MR_Integer) 3)));

    return check_hlds__typecheck__LambdaHeadVar__2_39;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1519__1_2_p_0(
  MR_Word check_hlds__typecheck__GoalType_96,
  MR_Word check_hlds__typecheck__HeadVar__2_162)
{
  {
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__GoalType_96 == check_hlds__typecheck__HeadVar__2_162);

    return check_hlds__typecheck__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__524__1_2_p_0(
  MR_Word check_hlds__typecheck__StartingSpecs_26,
  MR_Word check_hlds__typecheck__HeadVar__2_55)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[0], ((MR_Box) (check_hlds__typecheck__StartingSpecs_26)), ((MR_Box) (check_hlds__typecheck__HeadVar__2_55)));
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3)
{
  {
    MR_Integer check_hlds__typecheck__Cast_HeadVar1_4 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
    MR_Integer check_hlds__typecheck__Cast_HeadVar2_5 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Cast_HeadVar1_4, check_hlds__typecheck__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
  MR_Word check_hlds__typecheck__HeadVar__2_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_1 == check_hlds__typecheck__HeadVar__2_2);

    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Integer check_hlds__typecheck__CastX_12 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
    MR_Integer check_hlds__typecheck__CastY_13 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_12 == check_hlds__typecheck__CastY_13);
    if (check_hlds__typecheck__succeeded)
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word check_hlds__typecheck__ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));

        check_hlds__typecheck_errors____Compare____cons_error_0_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Var_16, check_hlds__typecheck__ArgY1_11);
      }
      else
        *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 2;
    else
    if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word check_hlds__typecheck__ArgY1_5 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__3_3), (MR_Integer) 0);
      MR_Word check_hlds__typecheck__Var_17 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__2_2), (MR_Integer) 0);

      check_hlds__typecheck_info____Compare____cons_type_info_0_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Var_17, check_hlds__typecheck__ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Integer check_hlds__typecheck__CastX_7 = (MR_Integer) check_hlds__typecheck__HeadVar__1_1;
    MR_Integer check_hlds__typecheck__CastY_8 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;

    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_7 == check_hlds__typecheck__CastY_8);
    if (check_hlds__typecheck__succeeded)
      check_hlds__typecheck__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word check_hlds__typecheck__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__ArgY1_6;

      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
        check_hlds__typecheck__succeeded = check_hlds__typecheck_errors____Unify____cons_error_0_0(check_hlds__typecheck__ArgX1_5, check_hlds__typecheck__ArgY1_6);
      }
    }
    else
    {
      MR_Word check_hlds__typecheck__ArgX1_3 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__1_1), (MR_Integer) 0);
      MR_Word check_hlds__typecheck__ArgY1_4;

      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__ArgY1_4 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__2_2), (MR_Integer) 0);
        check_hlds__typecheck__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(check_hlds__typecheck__ArgX1_3, check_hlds__typecheck__ArgY1_4);
      }
    }
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3)
{
  {
    MR_Word check_hlds__typecheck__Cast_HeadVar1_4 = check_hlds__typecheck__HeadVar__2_2;
    MR_Word check_hlds__typecheck__Cast_HeadVar2_5 = check_hlds__typecheck__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[6], check_hlds__typecheck__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__Cast_HeadVar1_3 = check_hlds__typecheck__HeadVar__1_1;
    MR_Word check_hlds__typecheck__Cast_HeadVar2_4 = check_hlds__typecheck__HeadVar__2_2;

    check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[6], ((MR_Box) (check_hlds__typecheck__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck__Cast_HeadVar2_4)));
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_0_0(
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Integer check_hlds__typecheck__CastX_12 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
    MR_Integer check_hlds__typecheck__CastY_13 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_12 == check_hlds__typecheck__CastY_13);
    if (check_hlds__typecheck__succeeded)
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word check_hlds__typecheck__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word check_hlds__typecheck__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word check_hlds__typecheck__Var_10;

      check_hlds__type_assign____Compare____type_assign_0_0(&check_hlds__typecheck__Var_10, check_hlds__typecheck__ArgX1_4, check_hlds__typecheck__ArgY1_5);
      check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_10 == (MR_Integer) 0);
      check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
      if (check_hlds__typecheck__succeeded)
        *check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__Var_10;
      else
      {
        MR_Word check_hlds__typecheck__Var_11;

        parse_tree__prog_data____Compare____mer_type_0_0(&check_hlds__typecheck__Var_11, check_hlds__typecheck__ArgX2_6, check_hlds__typecheck__ArgY2_7);
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_11 == (MR_Integer) 0);
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
        if (check_hlds__typecheck__succeeded)
          *check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[5], check_hlds__typecheck__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck__ArgX3_8)), ((MR_Box) (check_hlds__typecheck__ArgY3_9)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_0_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Integer check_hlds__typecheck__CastX_9 = (MR_Integer) check_hlds__typecheck__HeadVar__1_1;
    MR_Integer check_hlds__typecheck__CastY_10 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;

    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_9 == check_hlds__typecheck__CastY_10);
    if (check_hlds__typecheck__succeeded)
      check_hlds__typecheck__succeeded = MR_TRUE;
    else
    {
      MR_Word check_hlds__typecheck__TypeInfo_13_13;
      MR_Word check_hlds__typecheck__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word check_hlds__typecheck__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 2)));

      check_hlds__typecheck__succeeded = check_hlds__type_assign____Unify____type_assign_0_0(check_hlds__typecheck__ArgX1_3, check_hlds__typecheck__ArgY1_4);
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck__ArgX2_5, check_hlds__typecheck__ArgY2_6);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__TypeInfo_13_13 = (MR_Word) &check_hlds__typecheck_scalar_common_1[5];
          check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck__TypeInfo_13_13, ((MR_Box) (check_hlds__typecheck__ArgX3_7)), ((MR_Box) (check_hlds__typecheck__ArgY3_8)));
        }
      }
    }
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3)
{
  {
    MR_Integer check_hlds__typecheck__Cast_HeadVar1_4 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
    MR_Integer check_hlds__typecheck__Cast_HeadVar2_5 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Cast_HeadVar1_4, check_hlds__typecheck__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
  MR_Word check_hlds__typecheck__HeadVar__2_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_1 == check_hlds__typecheck__HeadVar__2_2);

    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
  void * check_hlds__typecheck__env_ptr_arg)
{
  {
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
  void * check_hlds__typecheck__env_ptr_arg)
{
  {
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

    (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
    (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = mercury__map__contains_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, ((MR_Box) ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12)));
    if ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
      check_hlds__typecheck__rename_constraint_3_p_0_1(check_hlds__typecheck__env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
  void * check_hlds__typecheck__env_ptr_arg)
{
  {
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0) == 0)
      {
        parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &(check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12, check_hlds__typecheck__rename_constraint_3_p_0_2, check_hlds__typecheck__env_ptr);
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
  MR_Word check_hlds__typecheck__TVarRenaming_4,
  MR_Word check_hlds__typecheck__Constraint0_5,
  MR_Word * check_hlds__typecheck__Constraint_6)
{
  {
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s check_hlds__typecheck__env;

    (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4 = check_hlds__typecheck__TVarRenaming_4;
    {
      MR_Word check_hlds__typecheck__Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__ArgTypes_11;

      (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 2)));
      check_hlds__typecheck__rename_constraint_3_p_0_3(&check_hlds__typecheck__env);
      if ((check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
      {
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &check_hlds__typecheck__ArgTypes_11);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__typecheck__Constraint_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Ids_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__ClassName_8));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__ArgTypes_11));
        }
        (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
      }
      return (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
  MR_Word check_hlds__typecheck__CallTVars_3,
  MR_Word check_hlds__typecheck__Constraint_4)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__TypeInfo_11_11;
    MR_Word check_hlds__typecheck__TypesToCheck_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 2)));
    MR_Word check_hlds__typecheck__TVarsToCheck0_8;
    MR_Word check_hlds__typecheck__TVarsToCheck_9;
    MR_Word check_hlds__typecheck__RelevantTVars_10;
    MR_Word check_hlds__typecheck___Ids_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck___ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 1)));

    parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__TypesToCheck_7, &check_hlds__typecheck__TVarsToCheck0_8);
    check_hlds__typecheck__TypeInfo_11_11 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
    mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__TVarsToCheck0_8, &check_hlds__typecheck__TVarsToCheck_9);
    mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__TVarsToCheck_9, check_hlds__typecheck__CallTVars_3, &check_hlds__typecheck__RelevantTVars_10);
    check_hlds__typecheck__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__RelevantTVars_10);
    return check_hlds__typecheck__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
  MR_Word check_hlds__typecheck__Info_9,
  MR_Word check_hlds__typecheck__GoalId_10,
  MR_Word check_hlds__typecheck__FuncName_11,
  MR_Integer check_hlds__typecheck__Arity_12,
  MR_Word check_hlds__typecheck__AccessType_13,
  MR_Word check_hlds__typecheck__FieldName_14,
  MR_Word check_hlds__typecheck__FieldDefn_15,
  MR_Word * check_hlds__typecheck__ConsTypeInfo_16)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__OrigExistTVars_17;
    MR_Word check_hlds__typecheck__MaybeFunctorConsTypeInfo_18;
    MR_Word check_hlds__typecheck__TypeCtor_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 2)));
    MR_Word check_hlds__typecheck__ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck__TypeModule_36;
    MR_Word check_hlds__typecheck__ModuleInfo_39;
    MR_Word check_hlds__typecheck__PredTable_40;
    MR_String check_hlds__typecheck__UnqualFuncName_41;
    MR_Word check_hlds__typecheck__IsFieldAccessFunc_42;
    MR_Word check_hlds__typecheck__Ctors_45;
    MR_Word check_hlds__typecheck__ConsDefn_46;
    MR_Word check_hlds__typecheck__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_33, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 1)));
    MR_Integer check_hlds__typecheck__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 4)));
    MR_Integer check_hlds__typecheck__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_33, (MR_Integer) 1)));
    MR_String check_hlds__typecheck__Var_37;
    MR_Word check_hlds__typecheck__Var_51;
    MR_Word check_hlds__typecheck__Var_52;
    MR_Word check_hlds__typecheck__Var_53;
    MR_Word check_hlds__typecheck__Var_54;
    MR_Word check_hlds__typecheck__Var_55;
    MR_Word check_hlds__typecheck__Var_56;
    MR_Word check_hlds__typecheck__Var_57;

    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Var_48)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__TypeModule_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_48, (MR_Integer) 0)));
      check_hlds__typecheck__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_48, (MR_Integer) 1)));
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__ModuleInfo_39);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_39, &check_hlds__typecheck__PredTable_40);
      check_hlds__typecheck__UnqualFuncName_41 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__typecheck__FuncName_11);
      check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__IsFieldAccessFunc_42);
      if ((check_hlds__typecheck__IsFieldAccessFunc_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__typecheck__PredIds_43;

        hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(check_hlds__typecheck__PredTable_40, (MR_Integer) 0, check_hlds__typecheck__TypeModule_36, check_hlds__typecheck__UnqualFuncName_41, check_hlds__typecheck__Arity_12, &check_hlds__typecheck__PredIds_43);
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredIds_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      else
        check_hlds__typecheck__succeeded = MR_TRUE;
      if (check_hlds__typecheck__succeeded)
      {
        hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__typecheck__ModuleInfo_39, &check_hlds__typecheck__Ctors_45);
        hlds__hlds_data__lookup_cons_table_of_type_ctor_4_p_0(check_hlds__typecheck__Ctors_45, check_hlds__typecheck__TypeCtor_33, check_hlds__typecheck__ConsId_34, &check_hlds__typecheck__ConsDefn_46);
        check_hlds__typecheck__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 0)));
        check_hlds__typecheck__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 1)));
        check_hlds__typecheck__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 2)));
        check_hlds__typecheck__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 3)));
        check_hlds__typecheck__OrigExistTVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 4)));
        check_hlds__typecheck__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 5)));
        check_hlds__typecheck__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 6)));
        check_hlds__typecheck__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 7)));
        switch (check_hlds__typecheck__AccessType_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_5_p_0(check_hlds__typecheck__Info_9, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__ConsDefn_46, &check_hlds__typecheck__MaybeFunctorConsTypeInfo_18);
            break;
          case (MR_Integer) 1:
            {
              check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__Info_9, check_hlds__typecheck__GoalId_10, (MR_Integer) 1, check_hlds__typecheck__ConsDefn_46, &check_hlds__typecheck__MaybeFunctorConsTypeInfo_18);
            }
            break;
        }
        if (((MR_tag((MR_Word) check_hlds__typecheck__MaybeFunctorConsTypeInfo_18)) == (MR_mktag((MR_Integer) 1))))
          *check_hlds__typecheck__ConsTypeInfo_16 = check_hlds__typecheck__MaybeFunctorConsTypeInfo_18;
        else
        {
          MR_Word check_hlds__typecheck__FunctorConsTypeInfo_19 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__MaybeFunctorConsTypeInfo_18), (MR_Integer) 0);
          MR_Word check_hlds__typecheck__ModuleInfo_20;
          MR_Word check_hlds__typecheck__ClassTable_21;

          check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__ModuleInfo_20);
          hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_20, &check_hlds__typecheck__ClassTable_21);
          check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(check_hlds__typecheck__ClassTable_21, check_hlds__typecheck__AccessType_13, check_hlds__typecheck__FieldName_14, check_hlds__typecheck__FieldDefn_15, check_hlds__typecheck__FunctorConsTypeInfo_19, check_hlds__typecheck__OrigExistTVars_17, check_hlds__typecheck__ConsTypeInfo_16);
        }
        check_hlds__typecheck__succeeded = MR_TRUE;
      }
    }
    return check_hlds__typecheck__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_5_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1)
{
  {
    MR_Box check_hlds__typecheck__wrapper_arg_2;
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv0_LambdaHeadVar__2_39;

    check_hlds__typecheck__conv0_LambdaHeadVar__2_39 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3467__1_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_LambdaHeadVar__2_39));
    return check_hlds__typecheck__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_5_p_0(
  MR_Word check_hlds__typecheck__Info_6,
  MR_Word check_hlds__typecheck__GoalId_7,
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__ConsTypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__ConsTypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 2)));
    MR_Word check_hlds__typecheck__ConsTypeKinds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck__ExistQVars0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 4)));
    MR_Word check_hlds__typecheck__ExistProgConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 5)));
    MR_Word check_hlds__typecheck__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 6)));
    MR_Word check_hlds__typecheck__ArgTypes_19;
    MR_Word check_hlds__typecheck__TypeTable_21;
    MR_Word check_hlds__typecheck__TypeDefn_22;
    MR_Word check_hlds__typecheck__Body_23;
    MR_Word check_hlds__typecheck__PredId_24;
    MR_Word check_hlds__typecheck__ModuleInfo_25;
    MR_Word check_hlds__typecheck__PredInfo_26;
    MR_Word check_hlds__typecheck__PredStatus_27;
    MR_Word check_hlds__typecheck__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 7)));
    MR_Word check_hlds__typecheck__Var_40;
    MR_Word check_hlds__typecheck__Var_55;
    MR_Word check_hlds__typecheck__Var_56;
    MR_Word check_hlds__typecheck__Var_57;
    MR_Word check_hlds__typecheck__Var_58;
    MR_Word check_hlds__typecheck__Var_59;
    MR_Word check_hlds__typecheck__Var_60;
    MR_Word check_hlds__typecheck__Var_61;
    MR_Word check_hlds__typecheck__Var_62;
    MR_Word check_hlds__typecheck__Var_28;
    MR_Word check_hlds__typecheck__Var_41;
    MR_Word check_hlds__typecheck__Var_65;
    MR_Word check_hlds__typecheck__Var_42;

    check_hlds__typecheck__ArgTypes_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__typecheck_scalar_common_6[6], check_hlds__typecheck__Args_17);
    check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__TypeTable_21);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_21, check_hlds__typecheck__TypeCtor_11, &check_hlds__typecheck__TypeDefn_22);
    hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__Body_23);
    check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredId_24);
    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__ModuleInfo_25);
    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__typecheck__ModuleInfo_25, check_hlds__typecheck__PredId_24, &check_hlds__typecheck__PredInfo_26);
    hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__typecheck__PredInfo_26, &check_hlds__typecheck__PredStatus_27);
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Body_23)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 0)));
      check_hlds__typecheck__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 1)));
      check_hlds__typecheck__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 2)));
      check_hlds__typecheck__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 3)));
      check_hlds__typecheck__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 4)));
      check_hlds__typecheck__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 5)));
      check_hlds__typecheck__Var_61 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) & (MR_Integer) 1);
      check_hlds__typecheck__Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      check_hlds__typecheck__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 7)));
      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Var_40)) == (MR_mktag((MR_Integer) 1)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_40, (MR_Integer) 0)));
        check_hlds__typecheck__Var_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
        hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__typecheck__PredInfo_26, &check_hlds__typecheck__Var_65);
        check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____goal_type_0_0(check_hlds__typecheck__Var_41, check_hlds__typecheck__Var_65);
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_26);
          check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__Var_42 = (MR_Word) check_hlds__typecheck__PredStatus_27;
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
          }
        }
      }
    }
    if (check_hlds__typecheck__succeeded)
    {
      MR_Word check_hlds__typecheck__Var_43;

      {
        check_hlds__typecheck__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_43, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_43, 1) = ((MR_Box) (check_hlds__typecheck__TypeDefn_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__typecheck__ConsTypeInfo_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Var_43));
      }
    }
    else
    {
      MR_Word check_hlds__typecheck__TypeStatus_29;
      MR_Word check_hlds__typecheck__Var_44;
      MR_Word check_hlds__typecheck__Var_45;

      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__TypeStatus_29);
      check_hlds__typecheck__Var_44 = (MR_Word) check_hlds__typecheck__TypeStatus_29;
      check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_26);
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__Var_45 = (MR_Word) check_hlds__typecheck__PredStatus_27;
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
        }
      }
      if (check_hlds__typecheck__succeeded)
      {
        *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[9]);
      }
      else
      {
        MR_Word check_hlds__typecheck__ConsTypeArgs_30;
        MR_Word check_hlds__typecheck__ConsType_31;
        MR_Word check_hlds__typecheck__ProgConstraints_33;
        MR_Word check_hlds__typecheck__ClassTable_35;
        MR_Word check_hlds__typecheck__Constraints_36;
        MR_Word check_hlds__typecheck__Var_49;
        MR_Word check_hlds__typecheck__Var_50;

        parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__ConsTypeKinds_14, check_hlds__typecheck__ConsTypeParams_13, &check_hlds__typecheck__ConsTypeArgs_30);
        parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_11, check_hlds__typecheck__ConsTypeArgs_30, &check_hlds__typecheck__ConsType_31);
        {
          check_hlds__typecheck__ProgConstraints_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
        }
        hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_25, &check_hlds__typecheck__ClassTable_35);
        hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__ConsTypeVarSet_12, check_hlds__typecheck__GoalId_7, check_hlds__typecheck__ProgConstraints_33, &check_hlds__typecheck__Constraints_36);
        {
          check_hlds__typecheck__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_50, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
        }
        {
          check_hlds__typecheck__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_49, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_12));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_49, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars0_15));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_49, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_31));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_49, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_19));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_49, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_36));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_49, 5) = ((MR_Box) (check_hlds__typecheck__Var_50));
        }
        *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__Var_49);
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
  MR_Word check_hlds__typecheck__ClassTable_8,
  MR_Word check_hlds__typecheck__AccessType_9,
  MR_Word check_hlds__typecheck__FieldName_10,
  MR_Word check_hlds__typecheck__FieldDefn_11,
  MR_Word check_hlds__typecheck__FunctorConsTypeInfo_12,
  MR_Word check_hlds__typecheck__OrigExistTVars_13,
  MR_Word * check_hlds__typecheck__ConsTypeInfo_14)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__TypeCtorInfo_100_100;
    MR_Word check_hlds__typecheck__TVarSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__FunctorType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 2)));
    MR_Word check_hlds__typecheck__ConsArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck__Constraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 4)));
    MR_Word check_hlds__typecheck__Source0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 5)));
    MR_Word check_hlds__typecheck__SourceType_22;
    MR_Integer check_hlds__typecheck__FieldNumber_32;
    MR_Word check_hlds__typecheck__FieldType_33;
    MR_Word check_hlds__typecheck__Var_28;
    MR_Word check_hlds__typecheck__Var_29;
    MR_Word check_hlds__typecheck__Var_30;
    MR_Word check_hlds__typecheck__Var_31;
    MR_Box check_hlds__typecheck__conv0_FieldType_33;

    switch (MR_tag((MR_Word) check_hlds__typecheck__Source0_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__typecheck__SourceType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Source0_20, (MR_Integer) 0)));
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
            return;
          }
        }
        break;
    }
    check_hlds__typecheck__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 0)));
    check_hlds__typecheck__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 1)));
    check_hlds__typecheck__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 2)));
    check_hlds__typecheck__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 3)));
    check_hlds__typecheck__FieldNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 4)));
    check_hlds__typecheck__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    mercury__list__det_index1_3_p_0(check_hlds__typecheck__TypeCtorInfo_100_100, check_hlds__typecheck__ConsArgTypes_18, check_hlds__typecheck__FieldNumber_32, &check_hlds__typecheck__conv0_FieldType_33);
    check_hlds__typecheck__FieldType_33 = ((MR_Word) check_hlds__typecheck__conv0_FieldType_33);
    switch (check_hlds__typecheck__AccessType_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__typecheck__Source_34;
          MR_Word check_hlds__typecheck__ArgTypes_36;
          MR_Word check_hlds__typecheck__Var_74;

          {
            check_hlds__typecheck__Source_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__Source_34, 0) = ((MR_Box) (check_hlds__typecheck__SourceType_22));
          }
          {
            check_hlds__typecheck__ArgTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_36, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__typecheck__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_74, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_74, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_74, 2) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_74, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_36));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_74, 4) = ((MR_Box) (check_hlds__typecheck__Constraints0_19));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_74, 5) = ((MR_Box) (check_hlds__typecheck__Source_34));
          }
          *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__Var_74);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__typecheck__TVarsInField_39;
          MR_Word check_hlds__typecheck__Source_95;

          {
            check_hlds__typecheck__Source_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Source_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Source_95, 1) = ((MR_Box) (check_hlds__typecheck__SourceType_22));
          }
          parse_tree__prog_type__type_vars_2_p_0(check_hlds__typecheck__FieldType_33, &check_hlds__typecheck__TVarsInField_39);
          if ((check_hlds__typecheck__TVarsInField_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__typecheck__Var_70;
            MR_Word check_hlds__typecheck__Var_72;
            MR_Word check_hlds__typecheck__ArgTypes_76;

            {
              check_hlds__typecheck__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_70, 0) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__typecheck__ArgTypes_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_76, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_76, 1) = ((MR_Box) (check_hlds__typecheck__Var_70));
            }
            {
              check_hlds__typecheck__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_72, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_72, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_72, 2) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_72, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_76));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_72, 4) = ((MR_Box) (check_hlds__typecheck__Constraints0_19));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_72, 5) = ((MR_Box) (check_hlds__typecheck__Source_95));
            }
            *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__Var_72);
          }
          else
          {
            MR_Word check_hlds__typecheck__TypeInfo_101_101;
            MR_Word check_hlds__typecheck__ArgTypesWithoutField_42;
            MR_Word check_hlds__typecheck__TVarsInOtherArgs_43;
            MR_Word check_hlds__typecheck__ExistQVarsInFieldAndOthers_44;
            MR_Word check_hlds__typecheck__Var_58;
            MR_Word check_hlds__typecheck__Var_59;
            MR_Word check_hlds__typecheck__Var_60;
            MR_Word check_hlds__typecheck__Var_61;
            MR_Word check_hlds__typecheck__Var_62;

            check_hlds__typecheck__Var_58 = parse_tree__builtin_lib_types__int_type_0_f_0();
            mercury__list__det_replace_nth_4_p_0(check_hlds__typecheck__TypeCtorInfo_100_100, check_hlds__typecheck__ConsArgTypes_18, check_hlds__typecheck__FieldNumber_32, ((MR_Box) (check_hlds__typecheck__Var_58)), &check_hlds__typecheck__ArgTypesWithoutField_42);
            parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypesWithoutField_42, &check_hlds__typecheck__TVarsInOtherArgs_43);
            check_hlds__typecheck__TypeInfo_101_101 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
            check_hlds__typecheck__Var_59 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInField_39);
            check_hlds__typecheck__Var_61 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInOtherArgs_43);
            check_hlds__typecheck__Var_62 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__OrigExistTVars_13);
            check_hlds__typecheck__Var_60 = mercury__set__intersect_2_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__Var_61, check_hlds__typecheck__Var_62);
            mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__Var_59, check_hlds__typecheck__Var_60, &check_hlds__typecheck__ExistQVarsInFieldAndOthers_44);
            check_hlds__typecheck__succeeded = mercury__set__is_empty_1_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__ExistQVarsInFieldAndOthers_44);
            if (check_hlds__typecheck__succeeded)
            {
              MR_Word check_hlds__typecheck__TVarsOnlyInField0_45;
              MR_Word check_hlds__typecheck__TVarsOnlyInField_46;
              MR_Integer check_hlds__typecheck__NumNewTVars_47;
              MR_Word check_hlds__typecheck__NewTVars_48;
              MR_Word check_hlds__typecheck__TVarRenaming_49;
              MR_Word check_hlds__typecheck__RenamedFieldType_50;
              MR_Word check_hlds__typecheck__CallTVars0_52;
              MR_Word check_hlds__typecheck__CallTVars_53;
              MR_Word check_hlds__typecheck__Var_63;
              MR_Word check_hlds__typecheck__Var_64;
              MR_Word check_hlds__typecheck__Var_66;
              MR_Word check_hlds__typecheck__Var_68;
              MR_Word check_hlds__typecheck__RetType_79;
              MR_Word check_hlds__typecheck__ArgTypes_80;
              MR_Word check_hlds__typecheck__TVarSet_81;
              MR_Word check_hlds__typecheck__Constraints_82;

              mercury__list__delete_elems_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInField_39, check_hlds__typecheck__TVarsInOtherArgs_43, &check_hlds__typecheck__TVarsOnlyInField0_45);
              mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField0_45, &check_hlds__typecheck__TVarsOnlyInField_46);
              mercury__list__length_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField_46, &check_hlds__typecheck__NumNewTVars_47);
              mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__NumNewTVars_47, &check_hlds__typecheck__NewTVars_48, check_hlds__typecheck__TVarSet0_15, &check_hlds__typecheck__TVarSet_81);
              mercury__map__from_corresponding_lists_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField_46, check_hlds__typecheck__NewTVars_48, &check_hlds__typecheck__TVarRenaming_49);
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__FieldType_33, &check_hlds__typecheck__RenamedFieldType_50);
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__FunctorType_17, &check_hlds__typecheck__RetType_79);
              {
                check_hlds__typecheck__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_64, 0) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__typecheck__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_63, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_63, 1) = ((MR_Box) (check_hlds__typecheck__Var_64));
              }
              parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__Var_63, &check_hlds__typecheck__CallTVars0_52);
              mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__CallTVars0_52, &check_hlds__typecheck__CallTVars_53);
              check_hlds__typecheck__project_and_rename_constraints_6_p_0(check_hlds__typecheck__ClassTable_8, check_hlds__typecheck__TVarSet_81, check_hlds__typecheck__CallTVars_53, check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__Constraints0_19, &check_hlds__typecheck__Constraints_82);
              {
                check_hlds__typecheck__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_66, 0) = ((MR_Box) (check_hlds__typecheck__RenamedFieldType_50));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__typecheck__ArgTypes_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_80, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_80, 1) = ((MR_Box) (check_hlds__typecheck__Var_66));
              }
              {
                check_hlds__typecheck__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_68, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet_81));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_68, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_68, 2) = ((MR_Box) (check_hlds__typecheck__RetType_79));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_68, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_80));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_68, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_82));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_68, 5) = ((MR_Box) (check_hlds__typecheck__Source_95));
              }
              *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__Var_68);
            }
            else
            {
              MR_Word check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54;
              MR_Word check_hlds__typecheck__Var_69;

              mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__ExistQVarsInFieldAndOthers_44, &check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54);
              {
                check_hlds__typecheck__Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__typecheck__Var_69, 0) = ((MR_Box) (check_hlds__typecheck__FieldName_10));
                MR_hl_field(MR_mktag(2), check_hlds__typecheck__Var_69, 1) = ((MR_Box) (check_hlds__typecheck__FieldDefn_11));
                MR_hl_field(MR_mktag(2), check_hlds__typecheck__Var_69, 2) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
                MR_hl_field(MR_mktag(2), check_hlds__typecheck__Var_69, 3) = ((MR_Box) (check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__typecheck__ConsTypeInfo_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Var_69));
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
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv0_Constraint_6;

    check_hlds__typecheck__succeeded = check_hlds__typecheck__rename_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv0_Constraint_6);
    if (check_hlds__typecheck__succeeded)
    {
      *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_Constraint_6));
      check_hlds__typecheck__succeeded = MR_TRUE;
    }
    return check_hlds__typecheck__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

    check_hlds__typecheck__succeeded = check_hlds__typecheck__project_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
  MR_Word check_hlds__typecheck__ClassTable_7,
  MR_Word check_hlds__typecheck__TVarSet_8,
  MR_Word check_hlds__typecheck__CallTVars_9,
  MR_Word check_hlds__typecheck__TVarRenaming_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Constraints_21)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__TypeCtorInfo_26_26;
    MR_Word check_hlds__typecheck__Unproven0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__Assumed_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__Redundant0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 2)));
    MR_Word check_hlds__typecheck__Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck__NewUnproven0_16;
    MR_Word check_hlds__typecheck__NewUnproven_17;
    MR_Word check_hlds__typecheck__Redundant_18;
    MR_Word check_hlds__typecheck__Unproven_19;
    MR_Word check_hlds__typecheck__Var_22;
    MR_Word check_hlds__typecheck__Var_23;

    {
      check_hlds__typecheck__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_22, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[6]));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_22, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_22, 3) = ((MR_Box) (check_hlds__typecheck__CallTVars_9));
    }
    check_hlds__typecheck__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    mercury__list__filter_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__Var_22, check_hlds__typecheck__Unproven0_12, &check_hlds__typecheck__NewUnproven0_16);
    {
      check_hlds__typecheck__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_23, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_23, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_23, 3) = ((MR_Box) (check_hlds__typecheck__TVarRenaming_10));
    }
    mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__Var_23, check_hlds__typecheck__NewUnproven0_16, &check_hlds__typecheck__NewUnproven_17);
    hlds__hlds_data__update_redundant_constraints_5_p_0(check_hlds__typecheck__ClassTable_7, check_hlds__typecheck__TVarSet_8, check_hlds__typecheck__NewUnproven_17, check_hlds__typecheck__Redundant0_14, &check_hlds__typecheck__Redundant_18);
    mercury__list__append_3_p_1(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__NewUnproven_17, check_hlds__typecheck__Unproven0_12, &check_hlds__typecheck__Unproven_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__typecheck__STATE_VARIABLE_Constraints_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Unproven_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Assumed_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__Redundant_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__Ancestors_15));
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
  MR_Word check_hlds__typecheck__ConsType_6,
  MR_Word check_hlds__typecheck__Y_7,
  MR_Word check_hlds__typecheck__TypeAssign0_8,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__VarTypes0_10;
    MR_Word check_hlds__typecheck__MaybeTypeY_11;
    MR_Word check_hlds__typecheck__VarTypes_12;

    check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__VarTypes0_10);
    hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Y_7, check_hlds__typecheck__ConsType_6, &check_hlds__typecheck__MaybeTypeY_11, check_hlds__typecheck__VarTypes0_10, &check_hlds__typecheck__VarTypes_12);
    if ((check_hlds__typecheck__MaybeTypeY_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word check_hlds__typecheck__TypeAssign_19;

      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_12, check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeAssign_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15));
      }
    }
    else
    {
      MR_Word check_hlds__typecheck__TypeY_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_11, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__TypeAssign_14;
      MR_Word check_hlds__typecheck__HeadTypeParams_24;
      MR_Word check_hlds__typecheck__TypeBindings0_25;
      MR_Word check_hlds__typecheck__TypeBindings_26;

      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__HeadTypeParams_24);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeBindings0_25);
      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__ConsType_6, check_hlds__typecheck__TypeY_13, check_hlds__typecheck__HeadTypeParams_24, check_hlds__typecheck__TypeBindings0_25, &check_hlds__typecheck__TypeBindings_26);
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_26, check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeAssign_14);
        check_hlds__typecheck__succeeded = MR_TRUE;
      }
      if (check_hlds__typecheck__succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15));
        }
      else
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(
  MR_Word check_hlds__typecheck__Context_7,
  MR_Word check_hlds__typecheck__Var_8,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__Var_16;
    MR_Word check_hlds__typecheck__TypeAssignSet1_28;
    MR_Word check_hlds__typecheck__Var_29;
    MR_Word check_hlds__typecheck__Var_30;

    check_hlds__typecheck__Var_16 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
    check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11, check_hlds__typecheck__Var_8, check_hlds__typecheck__Var_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_28);
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11)) == (MR_mktag((MR_Integer) 1)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11, (MR_Integer) 0)));
        check_hlds__typecheck__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11, (MR_Integer) 1)));
      }
    }
    if (check_hlds__typecheck__succeeded)
    {
      MR_Word check_hlds__typecheck__ClauseContext_31;
      MR_Word check_hlds__typecheck__SpecAndMaybeActualExpected_32;
      MR_Word check_hlds__typecheck__Spec_33;
      MR_Word check_hlds__typecheck__Var_34;

      *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11;
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_13, &check_hlds__typecheck__ClauseContext_31);
      check_hlds__typecheck__SpecAndMaybeActualExpected_32 = check_hlds__typecheck_errors__report_error_var_6_f_0(check_hlds__typecheck__ClauseContext_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Context_7, check_hlds__typecheck__Var_8, check_hlds__typecheck__Var_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11);
      check_hlds__typecheck__Spec_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_32, (MR_Integer) 0)));
      check_hlds__typecheck__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_32, (MR_Integer) 1)));
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_33, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
    }
    else
    {
      *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12 = check_hlds__typecheck__TypeAssignSet1_28;
      *check_hlds__typecheck__STATE_VARIABLE_Info_14 = check_hlds__typecheck__STATE_VARIABLE_Info_0_13;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
  void * check_hlds__typecheck__env_ptr_arg)
{
  {
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
  void * check_hlds__typecheck__env_ptr_arg)
{
  {
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

    {
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], ((MR_Box) ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7)), (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3);
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
      if ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded)
        check_hlds__typecheck__is_head_class_constraint_2_p_0_1(check_hlds__typecheck__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
  void * check_hlds__typecheck__env_ptr_arg)
{
  {
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0) == 0)
      {
        parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6, &(check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7, check_hlds__typecheck__is_head_class_constraint_2_p_0_2, check_hlds__typecheck__env_ptr);
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
  MR_Word check_hlds__typecheck__HeadTypeVars_3,
  MR_Word check_hlds__typecheck__Constraint_4)
{
  {
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s check_hlds__typecheck__env;

    (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3 = check_hlds__typecheck__HeadTypeVars_3;
    {
      MR_Word check_hlds__typecheck___ClassName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 0)));

      (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 1)));
      check_hlds__typecheck__is_head_class_constraint_2_p_0_3(&check_hlds__typecheck__env);
      (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
      return (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_6_p_0(
  MR_Word check_hlds__typecheck__Context_7,
  MR_Word check_hlds__typecheck__TypeVarSet_8,
  MR_Word check_hlds__typecheck__Impl_9,
  MR_Word check_hlds__typecheck__TVar_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_17)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_String check_hlds__typecheck__Name_12;
    MR_String check_hlds__typecheck__VarName_13;

    mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__TypeVarSet_8, check_hlds__typecheck__TVar_10, &check_hlds__typecheck__Name_12);
    check_hlds__typecheck__VarName_13 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", check_hlds__typecheck__Name_12);
    check_hlds__typecheck__succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(check_hlds__typecheck__Impl_9, check_hlds__typecheck__VarName_13);
    if (check_hlds__typecheck__succeeded)
      *check_hlds__typecheck__STATE_VARIABLE_Info_17 = check_hlds__typecheck__STATE_VARIABLE_Info_0_16;
    else
    {
      MR_Word check_hlds__typecheck__ClauseContext_14;
      MR_Word check_hlds__typecheck__Spec_15;

      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_16, &check_hlds__typecheck__ClauseContext_14);
      check_hlds__typecheck__Spec_15 = check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_3_f_0(check_hlds__typecheck__ClauseContext_14, check_hlds__typecheck__Context_7, check_hlds__typecheck__VarName_13);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_15, check_hlds__typecheck__STATE_VARIABLE_Info_0_16, check_hlds__typecheck__STATE_VARIABLE_Info_17);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
{
  {
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_Info_17;

    check_hlds__typecheck__check_mention_existq_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_Info_17);
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
  MR_Word check_hlds__typecheck__TypeVarSet_6,
  MR_Word check_hlds__typecheck__ExistQVars_7,
  MR_Word check_hlds__typecheck__Clause_8,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__Goal_10;
    MR_Word check_hlds__typecheck__Impl_17;
    MR_Word check_hlds__typecheck__Var_22;
    MR_Word check_hlds__typecheck__Var_18;
    MR_Word check_hlds__typecheck__Var_11;
    MR_Word check_hlds__typecheck__Var_12;
    MR_Integer check_hlds__typecheck__Var_13;
    MR_Word check_hlds__typecheck__Var_14;
    MR_Word check_hlds__typecheck__Var_15;
    MR_Word check_hlds__typecheck__Var_16;

    check_hlds__typecheck__Goal_10 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__typecheck__Clause_8);
    check_hlds__typecheck__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_10, (MR_Integer) 0)));
    check_hlds__typecheck__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_10, (MR_Integer) 1)));
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Var_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_22, (MR_Integer) 1)));
      check_hlds__typecheck__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_22, (MR_Integer) 2)));
      check_hlds__typecheck__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_22, (MR_Integer) 3)));
      check_hlds__typecheck__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_22, (MR_Integer) 4)));
      check_hlds__typecheck__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_22, (MR_Integer) 5)));
      check_hlds__typecheck__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_22, (MR_Integer) 6)));
      check_hlds__typecheck__Impl_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_22, (MR_Integer) 7)));
      {
        MR_Word check_hlds__typecheck__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck__Var_23;
        MR_Word check_hlds__typecheck__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 4)));
        MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_21;

        {
          check_hlds__typecheck__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_23, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_11[1]));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_23, 1) = ((MR_Box) (check_hlds__typecheck__check_existq_clause_5_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_23, 3) = ((MR_Box) (check_hlds__typecheck__Context_19));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_23, 4) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_6));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_23, 5) = ((MR_Box) (check_hlds__typecheck__Impl_17));
        }
        mercury__list__foldl_4_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__Var_23, check_hlds__typecheck__ExistQVars_7, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_20)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_21);
        *check_hlds__typecheck__STATE_VARIABLE_Info_21 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_21);
      }
    }
    else
      *check_hlds__typecheck__STATE_VARIABLE_Info_21 = check_hlds__typecheck__STATE_VARIABLE_Info_0_20;
  }
}

void MR_CALL 
check_hlds__typecheck__typecheck_module_5_p_0(
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22,
  MR_Word * check_hlds__typecheck__Specs_7,
  MR_Word * check_hlds__typecheck__FoundSyntaxError_8,
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_9)
{
  {
    MR_Word check_hlds__typecheck__TypeCtorInfo_28_28;
    MR_Word check_hlds__typecheck__TypeCtorInfo_29_29;
    MR_Word check_hlds__typecheck__Globals_10;
    MR_Integer check_hlds__typecheck__MaxIterations_11;
    MR_Word check_hlds__typecheck__OrigValidPredIdSet_12;
    MR_Word check_hlds__typecheck__OrigValidPredIds_13;
    MR_Word check_hlds__typecheck__PredMap0_14;
    MR_Word check_hlds__typecheck__PredIdsInfos0_15;
    MR_Word check_hlds__typecheck__PredIdsInfos_16;
    MR_Word check_hlds__typecheck__PredMap_17;
    MR_Word check_hlds__typecheck__FinalValidPredIdSet_18;
    MR_Word check_hlds__typecheck__CheckSpecs_19;
    MR_Word check_hlds__typecheck__InferSpecs_20;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_24_24;

    hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_21, &check_hlds__typecheck__Globals_10);
    libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck__Globals_10, (MR_Integer) 185, &check_hlds__typecheck__MaxIterations_11);
    hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_21, &check_hlds__typecheck__OrigValidPredIdSet_12);
    check_hlds__typecheck__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    check_hlds__typecheck__OrigValidPredIds_13 = mercury__set_tree234__to_sorted_list_1_f_0(check_hlds__typecheck__TypeCtorInfo_28_28, check_hlds__typecheck__OrigValidPredIdSet_12);
    hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_21, &check_hlds__typecheck__PredMap0_14);
    check_hlds__typecheck__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__to_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_28_28, check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__PredMap0_14, &check_hlds__typecheck__PredIdsInfos0_15);
    check_hlds__typecheck__prepare_for_typecheck_4_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_21, check_hlds__typecheck__OrigValidPredIdSet_12, check_hlds__typecheck__PredIdsInfos0_15, &check_hlds__typecheck__PredIdsInfos_16);
    mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_28_28, check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__PredIdsInfos_16, &check_hlds__typecheck__PredMap_17);
    hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__typecheck__PredMap_17, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_21, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_24_24);
    check_hlds__typecheck__typecheck_to_fixpoint_10_p_0((MR_Integer) 1, check_hlds__typecheck__MaxIterations_11, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_24_24, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22, check_hlds__typecheck__OrigValidPredIds_13, check_hlds__typecheck__OrigValidPredIdSet_12, &check_hlds__typecheck__FinalValidPredIdSet_18, &check_hlds__typecheck__CheckSpecs_19, check_hlds__typecheck__FoundSyntaxError_8, check_hlds__typecheck__ExceededIterationLimit_9);
    check_hlds__typecheck__construct_type_inference_messages_5_p_0(*check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22, check_hlds__typecheck__FinalValidPredIdSet_18, check_hlds__typecheck__OrigValidPredIds_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__InferSpecs_20);
    *check_hlds__typecheck__Specs_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__InferSpecs_20, check_hlds__typecheck__CheckSpecs_19);
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_10_p_0(
  MR_Integer check_hlds__typecheck__Iteration_11,
  MR_Integer check_hlds__typecheck__MaxIterations_12,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_36,
  MR_Word check_hlds__typecheck__OrigValidPredIds_14,
  MR_Word check_hlds__typecheck__OrigValidPredIdSet_15,
  MR_Word * check_hlds__typecheck__FinalValidPredIdSet_16,
  MR_Word * check_hlds__typecheck__Specs_17,
  MR_Word * check_hlds__typecheck__FoundSyntaxError_18,
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;
      MR_Word check_hlds__typecheck__TypeCtorInfo_55_55;
      MR_Word check_hlds__typecheck__TypeCtorInfo_56_56;
      MR_Word check_hlds__typecheck__PredMap0_20;
      MR_Word check_hlds__typecheck__PredIdsInfos0_21;
      MR_Word check_hlds__typecheck__PredIdsInfos_22;
      MR_Word check_hlds__typecheck__NewlyInvalidPredIds_23;
      MR_Word check_hlds__typecheck__CurSpecs_24;
      MR_Word check_hlds__typecheck__CurFoundSyntaxError_25;
      MR_Word check_hlds__typecheck__Changed_26;
      MR_Word check_hlds__typecheck__PredMap_27;
      MR_Word check_hlds__typecheck__NewValidPredIdSet_28;
      MR_Word check_hlds__typecheck__Globals_29;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_41_41;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_42_42;

      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__typecheck__PredMap0_20);
      check_hlds__typecheck__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      check_hlds__typecheck__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
      mercury__map__to_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_55_55, check_hlds__typecheck__TypeCtorInfo_56_56, check_hlds__typecheck__PredMap0_20, &check_hlds__typecheck__PredIdsInfos0_21);
      check_hlds__typecheck__typecheck_module_one_iteration_12_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_35, check_hlds__typecheck__OrigValidPredIdSet_15, check_hlds__typecheck__PredIdsInfos0_21, &check_hlds__typecheck__PredIdsInfos_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__NewlyInvalidPredIds_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__CurSpecs_24, (MR_Integer) 0, &check_hlds__typecheck__CurFoundSyntaxError_25, (MR_Integer) 0, &check_hlds__typecheck__Changed_26);
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_55_55, check_hlds__typecheck__TypeCtorInfo_56_56, check_hlds__typecheck__PredIdsInfos_22, &check_hlds__typecheck__PredMap_27);
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__typecheck__PredMap_27, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_41_41);
      hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(check_hlds__typecheck__NewlyInvalidPredIds_23, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_41_41, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_42_42);
      hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__typecheck__NewValidPredIdSet_28);
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__typecheck__Globals_29);
      check_hlds__typecheck__succeeded = (check_hlds__typecheck__Changed_26 == (MR_Integer) 0);
      if (!(check_hlds__typecheck__succeeded))
      {
        MR_Word check_hlds__typecheck__Var_43;

        check_hlds__typecheck__Var_43 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__typecheck__Globals_29, check_hlds__typecheck__CurSpecs_24);
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_43 == (MR_Integer) 1);
      }
      if (check_hlds__typecheck__succeeded)
      {
        *check_hlds__typecheck__FinalValidPredIdSet_16 = check_hlds__typecheck__NewValidPredIdSet_28;
        *check_hlds__typecheck__Specs_17 = check_hlds__typecheck__CurSpecs_24;
        *check_hlds__typecheck__FoundSyntaxError_18 = check_hlds__typecheck__CurFoundSyntaxError_25;
        *check_hlds__typecheck__ExceededIterationLimit_19 = (MR_Integer) 0;
        *check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_36 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_42_42;
      }
      else
      {
        MR_Word check_hlds__typecheck__DebugTypes_30;

        libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_29, (MR_Integer) 70, &check_hlds__typecheck__DebugTypes_30);
        switch (check_hlds__typecheck__DebugTypes_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__typecheck__ProgressSpecs_31;
              MR_Integer check_hlds__typecheck__Var_33;
              MR_Integer check_hlds__typecheck__Var_34;

              check_hlds__typecheck__construct_type_inference_messages_5_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_42_42, check_hlds__typecheck__NewValidPredIdSet_28, check_hlds__typecheck__OrigValidPredIds_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ProgressSpecs_31);
              parse_tree__error_util__write_error_specs_8_p_0(check_hlds__typecheck__ProgressSpecs_31, check_hlds__typecheck__Globals_29, (MR_Integer) 0, &check_hlds__typecheck__Var_33, (MR_Integer) 0, &check_hlds__typecheck__Var_34);
            }
            break;
        }
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Iteration_11 < check_hlds__typecheck__MaxIterations_12);
        if (check_hlds__typecheck__succeeded)
        {
          MR_Integer check_hlds__typecheck__Var_50 = (check_hlds__typecheck__Iteration_11 + (MR_Integer) 1);

          /* direct tailcall eliminated */
          {
            MR_Integer check_hlds__typecheck__next_value_of_Iteration_11 = check_hlds__typecheck__Var_50;
            MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_ModuleInfo_0_35 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_42_42;

            check_hlds__typecheck__Iteration_11 = check_hlds__typecheck__next_value_of_Iteration_11;
            check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_35 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_ModuleInfo_0_35;
          }
          continue;
        }
        else
        {
          MR_Word check_hlds__typecheck__Var_53;
          MR_Word check_hlds__typecheck__Pieces_59;
          MR_Word check_hlds__typecheck__Msg_60;
          MR_Word check_hlds__typecheck__Var_63;
          MR_Word check_hlds__typecheck__Var_66;
          MR_Word check_hlds__typecheck__Var_69;
          MR_Word check_hlds__typecheck__Var_72;
          MR_Word check_hlds__typecheck__Var_73;
          MR_Word check_hlds__typecheck__Var_90;
          MR_Word check_hlds__typecheck__Var_91;
          MR_Word check_hlds__typecheck__Var_95;

          *check_hlds__typecheck__FinalValidPredIdSet_16 = check_hlds__typecheck__NewValidPredIdSet_28;
          {
            check_hlds__typecheck__Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_73, 1) = ((MR_Box) (check_hlds__typecheck__MaxIterations_12));
          }
          {
            check_hlds__typecheck__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_72, 0) = ((MR_Box) (check_hlds__typecheck__Var_73));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[14])));
          }
          {
            check_hlds__typecheck__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[23])));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_69, 1) = ((MR_Box) (check_hlds__typecheck__Var_72));
          }
          {
            check_hlds__typecheck__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[22])));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_66, 1) = ((MR_Box) (check_hlds__typecheck__Var_69));
          }
          {
            check_hlds__typecheck__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[21])));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_63, 1) = ((MR_Box) (check_hlds__typecheck__Var_66));
          }
          {
            check_hlds__typecheck__Pieces_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[20])));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_59, 1) = ((MR_Box) (check_hlds__typecheck__Var_63));
          }
          {
            check_hlds__typecheck__Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_91, 0) = ((MR_Box) (check_hlds__typecheck__Pieces_59));
          }
          {
            check_hlds__typecheck__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_90, 0) = ((MR_Box) (check_hlds__typecheck__Var_91));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__typecheck__Msg_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_60, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_60, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_60, 3) = ((MR_Box) (check_hlds__typecheck__Var_90));
          }
          {
            check_hlds__typecheck__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_95, 0) = ((MR_Box) (check_hlds__typecheck__Msg_60));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__typecheck__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_53, 2) = ((MR_Box) (check_hlds__typecheck__Var_95));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__typecheck__Specs_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Var_53));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *check_hlds__typecheck__FoundSyntaxError_18 = check_hlds__typecheck__CurFoundSyntaxError_25;
          *check_hlds__typecheck__ExceededIterationLimit_19 = (MR_Integer) 1;
          *check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_36 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_42_42;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_12_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_1,
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_0_9,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_11,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_12)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *check_hlds__typecheck__STATE_VARIABLE_Changed_12 = check_hlds__typecheck__STATE_VARIABLE_Changed_0_11;
      *check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_10 = check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_0_9;
      *check_hlds__typecheck__STATE_VARIABLE_Specs_8 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_7;
      *check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
    }
    else
    {
      MR_Word check_hlds__typecheck__HeadPredIdInfo0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__TailPredIdsInfos0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__PredId_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo0_29, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__PredInfo0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo0_29, (MR_Integer) 1)));

      check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__typecheck__PredInfo0_37);
      if (!(check_hlds__typecheck__succeeded))
      {
        check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_36)));
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
      }
      if (check_hlds__typecheck__succeeded)
      {
        MR_Word * check_hlds__typecheck__AddrTailPredIdsInfos_69;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__typecheck__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__HeadPredIdInfo0_29));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        check_hlds__typecheck__AddrTailPredIdsInfos_69 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1));
        check_hlds__typecheck__LCMCpr_typecheck_module_one_iteration_1_12_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__TailPredIdsInfos0_30, check_hlds__typecheck__AddrTailPredIdsInfos_69, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6, check_hlds__typecheck__STATE_VARIABLE_Specs_0_7, check_hlds__typecheck__STATE_VARIABLE_Specs_8, check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_0_9, check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_10, check_hlds__typecheck__STATE_VARIABLE_Changed_0_11, check_hlds__typecheck__STATE_VARIABLE_Changed_12);
      }
      else
      {
        MR_Word check_hlds__typecheck__PredInfo_40;
        MR_Word check_hlds__typecheck__PredSpecs_41;
        MR_Word check_hlds__typecheck__PredSyntaxError_42;
        MR_Word check_hlds__typecheck__ContainsErrors_43;
        MR_Word check_hlds__typecheck__PredChanged_44;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_57_57;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_58_58;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_59_59;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_60_60;
        MR_Word check_hlds__typecheck__HeadPredIdInfo_65;
        MR_Word * check_hlds__typecheck__AddrTailPredIdsInfos_70;

        check_hlds__typecheck__typecheck_pred_if_needed_8_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__PredId_36, check_hlds__typecheck__PredInfo0_37, &check_hlds__typecheck__PredInfo_40, &check_hlds__typecheck__PredSpecs_41, &check_hlds__typecheck__PredSyntaxError_42, &check_hlds__typecheck__ContainsErrors_43, &check_hlds__typecheck__PredChanged_44);
        switch (check_hlds__typecheck__ContainsErrors_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_57_57 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
            break;
          case (MR_Integer) 1:
            {
              check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_57_57, 0) = ((MR_Box) (check_hlds__typecheck__PredId_36));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_57_57, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5));
            }
            break;
        }
        {
          check_hlds__typecheck__HeadPredIdInfo_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo_65, 0) = ((MR_Box) (check_hlds__typecheck__PredId_36));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo_65, 1) = ((MR_Box) (check_hlds__typecheck__PredInfo_40));
        }
        check_hlds__typecheck__STATE_VARIABLE_Specs_58_58 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__PredSpecs_41, check_hlds__typecheck__STATE_VARIABLE_Specs_0_7);
        mercury__bool__or_3_p_0(check_hlds__typecheck__PredSyntaxError_42, check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_0_9, &check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_59_59);
        mercury__bool__or_3_p_0(check_hlds__typecheck__PredChanged_44, check_hlds__typecheck__STATE_VARIABLE_Changed_0_11, &check_hlds__typecheck__STATE_VARIABLE_Changed_60_60);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__typecheck__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__HeadPredIdInfo_65));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        check_hlds__typecheck__AddrTailPredIdsInfos_70 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1));
        check_hlds__typecheck__LCMCpr_typecheck_module_one_iteration_1_12_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__TailPredIdsInfos0_30, check_hlds__typecheck__AddrTailPredIdsInfos_70, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_57_57, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6, check_hlds__typecheck__STATE_VARIABLE_Specs_58_58, check_hlds__typecheck__STATE_VARIABLE_Specs_8, check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_59_59, check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_10, check_hlds__typecheck__STATE_VARIABLE_Changed_60_60, check_hlds__typecheck__STATE_VARIABLE_Changed_12);
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_module_one_iteration_1_12_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_1,
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4_71,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_0_9,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_11,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__typecheck__AddrOfHeadVar__4_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__typecheck__STATE_VARIABLE_Changed_12 = check_hlds__typecheck__STATE_VARIABLE_Changed_0_11;
        *check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_10 = check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_0_9;
        *check_hlds__typecheck__STATE_VARIABLE_Specs_8 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_7;
        *check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
      }
      else
      {
        MR_Word check_hlds__typecheck__HeadPredIdInfo0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__TailPredIdsInfos0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__PredId_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo0_29, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__PredInfo0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo0_29, (MR_Integer) 1)));

        check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__typecheck__PredInfo0_37);
        if (!(check_hlds__typecheck__succeeded))
        {
          check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_36)));
          check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
        }
        if (check_hlds__typecheck__succeeded)
        {
          MR_Word * check_hlds__typecheck__AddrTailPredIdsInfos_69;
          MR_Word check_hlds__typecheck__HeadVar__4_72;

          {
            check_hlds__typecheck__HeadVar__4_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_72, 0) = ((MR_Box) (check_hlds__typecheck__HeadPredIdInfo0_29));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_72, 1) = NULL;
          }
          check_hlds__typecheck__AddrTailPredIdsInfos_69 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_72, (MR_Integer) 1));
          *check_hlds__typecheck__AddrOfHeadVar__4_71 = check_hlds__typecheck__HeadVar__4_72;
          /* direct tailcall eliminated */
          {
            MR_Word check_hlds__typecheck__next_value_of_HeadVar__3_3 = check_hlds__typecheck__TailPredIdsInfos0_30;
            MR_Word * check_hlds__typecheck__next_value_of_AddrOfHeadVar__4_71 = check_hlds__typecheck__AddrTailPredIdsInfos_69;

            check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__next_value_of_HeadVar__3_3;
            check_hlds__typecheck__AddrOfHeadVar__4_71 = check_hlds__typecheck__next_value_of_AddrOfHeadVar__4_71;
          }
          continue;
        }
        else
        {
          MR_Word check_hlds__typecheck__PredInfo_40;
          MR_Word check_hlds__typecheck__PredSpecs_41;
          MR_Word check_hlds__typecheck__PredSyntaxError_42;
          MR_Word check_hlds__typecheck__ContainsErrors_43;
          MR_Word check_hlds__typecheck__PredChanged_44;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_57_57;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_58_58;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_59_59;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_60_60;
          MR_Word check_hlds__typecheck__HeadPredIdInfo_65;
          MR_Word * check_hlds__typecheck__AddrTailPredIdsInfos_70;
          MR_Word check_hlds__typecheck__HeadVar__4_75;

          check_hlds__typecheck__typecheck_pred_if_needed_8_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__PredId_36, check_hlds__typecheck__PredInfo0_37, &check_hlds__typecheck__PredInfo_40, &check_hlds__typecheck__PredSpecs_41, &check_hlds__typecheck__PredSyntaxError_42, &check_hlds__typecheck__ContainsErrors_43, &check_hlds__typecheck__PredChanged_44);
          switch (check_hlds__typecheck__ContainsErrors_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_57_57 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
              break;
            case (MR_Integer) 1:
              {
                check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_57_57, 0) = ((MR_Box) (check_hlds__typecheck__PredId_36));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_57_57, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5));
              }
              break;
          }
          {
            check_hlds__typecheck__HeadPredIdInfo_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo_65, 0) = ((MR_Box) (check_hlds__typecheck__PredId_36));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo_65, 1) = ((MR_Box) (check_hlds__typecheck__PredInfo_40));
          }
          check_hlds__typecheck__STATE_VARIABLE_Specs_58_58 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__PredSpecs_41, check_hlds__typecheck__STATE_VARIABLE_Specs_0_7);
          mercury__bool__or_3_p_0(check_hlds__typecheck__PredSyntaxError_42, check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_0_9, &check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_59_59);
          mercury__bool__or_3_p_0(check_hlds__typecheck__PredChanged_44, check_hlds__typecheck__STATE_VARIABLE_Changed_0_11, &check_hlds__typecheck__STATE_VARIABLE_Changed_60_60);
          {
            check_hlds__typecheck__HeadVar__4_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_75, 0) = ((MR_Box) (check_hlds__typecheck__HeadPredIdInfo_65));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_75, 1) = NULL;
          }
          check_hlds__typecheck__AddrTailPredIdsInfos_70 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_75, (MR_Integer) 1));
          *check_hlds__typecheck__AddrOfHeadVar__4_71 = check_hlds__typecheck__HeadVar__4_75;
          /* direct tailcall eliminated */
          {
            MR_Word check_hlds__typecheck__next_value_of_HeadVar__3_3 = check_hlds__typecheck__TailPredIdsInfos0_30;
            MR_Word * check_hlds__typecheck__next_value_of_AddrOfHeadVar__4_71 = check_hlds__typecheck__AddrTailPredIdsInfos_70;
            MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_NewlyInvalidPredIds_0_5 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_57_57;
            MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_Specs_0_7 = check_hlds__typecheck__STATE_VARIABLE_Specs_58_58;
            MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_FoundSyntaxError_0_9 = check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_59_59;
            MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_Changed_0_11 = check_hlds__typecheck__STATE_VARIABLE_Changed_60_60;

            check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__next_value_of_HeadVar__3_3;
            check_hlds__typecheck__AddrOfHeadVar__4_71 = check_hlds__typecheck__next_value_of_AddrOfHeadVar__4_71;
            check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_NewlyInvalidPredIds_0_5;
            check_hlds__typecheck__STATE_VARIABLE_Specs_0_7 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_Specs_0_7;
            check_hlds__typecheck__STATE_VARIABLE_FoundSyntaxError_0_9 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_FoundSyntaxError_0_9;
            check_hlds__typecheck__STATE_VARIABLE_Changed_0_11 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_Changed_0_11;
          }
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_pred_if_needed_8_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_9,
  MR_Word check_hlds__typecheck__PredId_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_21,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_22,
  MR_Word * check_hlds__typecheck__Specs_12,
  MR_Word * check_hlds__typecheck__FoundSyntaxError_13,
  MR_Word * check_hlds__typecheck__ContainsErrors_14,
  MR_Word * check_hlds__typecheck__Changed_15)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    {
      MR_Word check_hlds__typecheck__Origin_28;
      MR_Word check_hlds__typecheck__SpecialPredId_29;
      MR_Word check_hlds__typecheck__TypeCtor_30;
      MR_Word check_hlds__typecheck__TypeTable_31;
      MR_Word check_hlds__typecheck__TypeDefn_32;
      MR_Word check_hlds__typecheck__Body_33;
      MR_Word check_hlds__typecheck__TypeCtorInfo_12_35;
      MR_Word check_hlds__typecheck__Var_34;

      check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_21);
      if (check_hlds__typecheck__succeeded)
      {
        hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_21, &check_hlds__typecheck__Origin_28);
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Origin_28)) == (MR_mktag((MR_Integer) 0)));
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__SpecialPredId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Origin_28, (MR_Integer) 0)));
          check_hlds__typecheck__TypeCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Origin_28, (MR_Integer) 1)));
          check_hlds__typecheck__Var_34 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
          check_hlds__typecheck__TypeCtorInfo_12_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
          check_hlds__typecheck__succeeded = mercury__list__member_2_p_0(check_hlds__typecheck__TypeCtorInfo_12_35, ((MR_Box) (check_hlds__typecheck__TypeCtor_30)), check_hlds__typecheck__Var_34);
          check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
          if (check_hlds__typecheck__succeeded)
          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck__ModuleInfo_9, &check_hlds__typecheck__TypeTable_31);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_31, check_hlds__typecheck__TypeCtor_30, &check_hlds__typecheck__TypeDefn_32);
            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_32, &check_hlds__typecheck__Body_33);
            check_hlds__typecheck__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(check_hlds__typecheck__ModuleInfo_9, check_hlds__typecheck__SpecialPredId_29, check_hlds__typecheck__Body_33);
          }
        }
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
      }
    }
    if (!(check_hlds__typecheck__succeeded))
    {
      MR_Word check_hlds__typecheck__Markers_16;
      MR_Word check_hlds__typecheck__Var_23;

      check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_21);
      if (check_hlds__typecheck__succeeded)
      {
        hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_21, &check_hlds__typecheck__Markers_16);
        check_hlds__typecheck__Var_23 = (MR_Integer) 1;
        check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers_16, check_hlds__typecheck__Var_23);
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
      }
    }
    if (check_hlds__typecheck__succeeded)
    {
      MR_Word check_hlds__typecheck__ClausesInfo0_17;
      MR_Word check_hlds__typecheck__ClausesRep0_18;
      MR_Word check_hlds__typecheck__IsEmpty_20;
      MR_Word check_hlds__typecheck___ItemNumbers_19;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_21, &check_hlds__typecheck__ClausesInfo0_17);
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_17, &check_hlds__typecheck__ClausesRep0_18, &check_hlds__typecheck___ItemNumbers_19);
      check_hlds__typecheck__IsEmpty_20 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_18);
      switch (check_hlds__typecheck__IsEmpty_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *check_hlds__typecheck__STATE_VARIABLE_PredInfo_22 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_21;
          break;
        case (MR_Integer) 1:
          hlds__hlds_pred__pred_info_mark_as_external_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_21, check_hlds__typecheck__STATE_VARIABLE_PredInfo_22);
          break;
      }
      *check_hlds__typecheck__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *check_hlds__typecheck__FoundSyntaxError_13 = (MR_Integer) 0;
      *check_hlds__typecheck__ContainsErrors_14 = (MR_Integer) 0;
      *check_hlds__typecheck__Changed_15 = (MR_Integer) 0;
    }
    else
      check_hlds__typecheck__typecheck_pred_8_p_0(check_hlds__typecheck__ModuleInfo_9, check_hlds__typecheck__PredId_10, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_21, check_hlds__typecheck__STATE_VARIABLE_PredInfo_22, check_hlds__typecheck__Specs_12, check_hlds__typecheck__FoundSyntaxError_13, check_hlds__typecheck__ContainsErrors_14, check_hlds__typecheck__Changed_15);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_8_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

    check_hlds__typecheck__succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__524__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))));
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_pred_8_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_9,
  MR_Word check_hlds__typecheck__PredId_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_36,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_37,
  MR_Word * check_hlds__typecheck__Specs_12,
  MR_Word * check_hlds__typecheck__FoundSyntaxError_13,
  MR_Word * check_hlds__typecheck__ContainsErrors_14,
  MR_Word * check_hlds__typecheck__Changed_15)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__Globals_16;
    MR_Word check_hlds__typecheck__ArgTypes0_19;
    MR_Word check_hlds__typecheck__ClausesInfo0_20;
    MR_Word check_hlds__typecheck__ClausesRep0_21;
    MR_Word check_hlds__typecheck__ItemNumbers0_22;
    MR_Word check_hlds__typecheck__Markers0_23;
    MR_Word check_hlds__typecheck__ClausesRep0IsEmpty_24;
    MR_Word check_hlds__typecheck__StartingSpecs_26;
    MR_Word check_hlds__typecheck__HeadVars_30;
    MR_Word check_hlds__typecheck__ClausesRep1_31;
    MR_Word check_hlds__typecheck__ClausesRep1IsEmpty_33;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_46_46;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_49_49;
    MR_Word check_hlds__typecheck___ArgTypeVarSet_17;
    MR_Word check_hlds__typecheck___ExistQVars0_18;
    MR_Word check_hlds__typecheck___ItemNumbers_32;

    hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_9, &check_hlds__typecheck__Globals_16);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_36, &check_hlds__typecheck___ArgTypeVarSet_17, &check_hlds__typecheck___ExistQVars0_18, &check_hlds__typecheck__ArgTypes0_19);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_36, &check_hlds__typecheck__ClausesInfo0_20);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_20, &check_hlds__typecheck__ClausesRep0_21, &check_hlds__typecheck__ItemNumbers0_22);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_36, &check_hlds__typecheck__Markers0_23);
    check_hlds__typecheck__ClausesRep0IsEmpty_24 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_21);
    switch (check_hlds__typecheck__ClausesRep0IsEmpty_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__typecheck__WarnNonContiguousForeignProcs_27;

          libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_16, (MR_Integer) 21, &check_hlds__typecheck__WarnNonContiguousForeignProcs_27);
          switch (check_hlds__typecheck__WarnNonContiguousForeignProcs_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__typecheck__WarnNonContiguousClauses_28;

                libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_16, (MR_Integer) 20, &check_hlds__typecheck__WarnNonContiguousClauses_28);
                switch (check_hlds__typecheck__WarnNonContiguousClauses_28) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    check_hlds__typecheck__StartingSpecs_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__typecheck__FirstRegion_73;
                      MR_Word check_hlds__typecheck__SecondRegion_74;
                      MR_Word check_hlds__typecheck__LaterRegions_75;

                      check_hlds__typecheck__succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(check_hlds__typecheck__ItemNumbers0_22, (MR_Integer) 0, &check_hlds__typecheck__FirstRegion_73, &check_hlds__typecheck__SecondRegion_74, &check_hlds__typecheck__LaterRegions_75);
                      if (check_hlds__typecheck__succeeded)
                      {
                        MR_Word check_hlds__typecheck__Spec_76;

                        check_hlds__typecheck__Spec_76 = check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(check_hlds__typecheck__ModuleInfo_9, check_hlds__typecheck__PredId_10, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_36, check_hlds__typecheck__FirstRegion_73, check_hlds__typecheck__SecondRegion_74, check_hlds__typecheck__LaterRegions_75);
                        {
                          check_hlds__typecheck__StartingSpecs_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_26, 0) = ((MR_Box) (check_hlds__typecheck__Spec_76));
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                      else
                        check_hlds__typecheck__StartingSpecs_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__typecheck__FirstRegion_84;
                MR_Word check_hlds__typecheck__SecondRegion_85;
                MR_Word check_hlds__typecheck__LaterRegions_86;

                check_hlds__typecheck__succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(check_hlds__typecheck__ItemNumbers0_22, (MR_Integer) 1, &check_hlds__typecheck__FirstRegion_84, &check_hlds__typecheck__SecondRegion_85, &check_hlds__typecheck__LaterRegions_86);
                if (check_hlds__typecheck__succeeded)
                {
                  MR_Word check_hlds__typecheck__Spec_87;

                  check_hlds__typecheck__Spec_87 = check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(check_hlds__typecheck__ModuleInfo_9, check_hlds__typecheck__PredId_10, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_36, check_hlds__typecheck__FirstRegion_84, check_hlds__typecheck__SecondRegion_85, check_hlds__typecheck__LaterRegions_86);
                  {
                    check_hlds__typecheck__StartingSpecs_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_26, 0) = ((MR_Box) (check_hlds__typecheck__Spec_87));
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                else
                  check_hlds__typecheck__StartingSpecs_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
          }
          check_hlds__typecheck__STATE_VARIABLE_PredInfo_46_46 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_36;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__typecheck__Var_44;

          check_hlds__typecheck__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__typecheck__Globals_16, (MR_Integer) 180, (MR_Integer) 1);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__Var_44 = (MR_Integer) 11;
            check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_23, check_hlds__typecheck__Var_44);
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
          }
          if (check_hlds__typecheck__succeeded)
          {
            MR_Word check_hlds__typecheck__Spec_25;

            check_hlds__typecheck__Spec_25 = check_hlds__typecheck_errors__report_no_clauses_stub_3_f_0(check_hlds__typecheck__ModuleInfo_9, check_hlds__typecheck__PredId_10, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_36);
            {
              check_hlds__typecheck__StartingSpecs_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_26, 0) = ((MR_Box) (check_hlds__typecheck__Spec_25));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            check_hlds__typecheck__generate_stub_clause_4_p_0(check_hlds__typecheck__PredId_10, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_36, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_46_46, check_hlds__typecheck__ModuleInfo_9);
          }
          else
          {
            check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_23, (MR_Integer) 1);
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__StartingSpecs_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              check_hlds__typecheck__generate_stub_clause_4_p_0(check_hlds__typecheck__PredId_10, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_36, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_46_46, check_hlds__typecheck__ModuleInfo_9);
            }
            else
            {
              check_hlds__typecheck__StartingSpecs_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              check_hlds__typecheck__STATE_VARIABLE_PredInfo_46_46 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_36;
            }
          }
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_46_46, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_49_49);
    hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_49_49, &check_hlds__typecheck__HeadVars_30);
    hlds__hlds_clauses__clauses_info_get_had_syntax_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_49_49, check_hlds__typecheck__FoundSyntaxError_13);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_49_49, &check_hlds__typecheck__ClausesRep1_31, &check_hlds__typecheck___ItemNumbers_32);
    check_hlds__typecheck__ClausesRep1IsEmpty_33 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep1_31);
    switch (check_hlds__typecheck__ClausesRep1IsEmpty_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (*check_hlds__typecheck__FoundSyntaxError_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__typecheck__do_typecheck_pred_7_p_0(check_hlds__typecheck__ModuleInfo_9, check_hlds__typecheck__PredId_10, check_hlds__typecheck__STATE_VARIABLE_PredInfo_46_46, check_hlds__typecheck__STATE_VARIABLE_PredInfo_37, check_hlds__typecheck__StartingSpecs_26, check_hlds__typecheck__Specs_12, check_hlds__typecheck__Changed_15);
              *check_hlds__typecheck__ContainsErrors_14 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__typecheck__Globals_16, *check_hlds__typecheck__Specs_12);
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__typecheck__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *check_hlds__typecheck__ContainsErrors_14 = (MR_Integer) 1;
              *check_hlds__typecheck__Changed_15 = (MR_Integer) 0;
              *check_hlds__typecheck__STATE_VARIABLE_PredInfo_37 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_46_46;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__typecheck__Var_51;

          {
            check_hlds__typecheck__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_51, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[5]));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_51, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_pred_8_p_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_51, 3) = ((MR_Box) (check_hlds__typecheck__StartingSpecs_26));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_4_p_0(check_hlds__typecheck__Var_51, (MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_pred\'/8", (MR_String) "StartingSpecs not empty");
          check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_23, (MR_Integer) 11);
          if (check_hlds__typecheck__succeeded)
          {
            MR_Word check_hlds__typecheck__VarTypes_34;
            MR_Word check_hlds__typecheck__HeadVarsInclExistentials_35;
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_57_57;
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_58_58;

            hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(check_hlds__typecheck__HeadVars_30, check_hlds__typecheck__ArgTypes0_19, &check_hlds__typecheck__VarTypes_34);
            hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__typecheck__VarTypes_34, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_49_49, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_57_57);
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_57_57, check_hlds__typecheck__STATE_VARIABLE_PredInfo_46_46, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_58_58);
            parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes0_19, &check_hlds__typecheck__HeadVarsInclExistentials_35);
            hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(check_hlds__typecheck__HeadVarsInclExistentials_35, check_hlds__typecheck__STATE_VARIABLE_PredInfo_58_58, check_hlds__typecheck__STATE_VARIABLE_PredInfo_37);
            *check_hlds__typecheck__ContainsErrors_14 = (MR_Integer) 0;
            *check_hlds__typecheck__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            *check_hlds__typecheck__ContainsErrors_14 = (MR_Integer) 1;
            switch (*check_hlds__typecheck__FoundSyntaxError_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__typecheck__Var_60;

                  check_hlds__typecheck__Var_60 = check_hlds__typecheck_errors__report_no_clauses_3_f_0(check_hlds__typecheck__ModuleInfo_9, check_hlds__typecheck__PredId_10, check_hlds__typecheck__STATE_VARIABLE_PredInfo_46_46);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__typecheck__Specs_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Var_60));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__typecheck__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
            }
            *check_hlds__typecheck__STATE_VARIABLE_PredInfo_37 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_46_46;
          }
          *check_hlds__typecheck__Changed_15 = (MR_Integer) 0;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__generate_stub_clause_4_p_0(
  MR_Word check_hlds__typecheck__PredId_5,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_17,
  MR_Word check_hlds__typecheck__ModuleInfo_7)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__VarSet0_9;
    MR_Word check_hlds__typecheck__PredPieces_10;
    MR_String check_hlds__typecheck__PredName_11;
    MR_Word check_hlds__typecheck__StubClause_12;
    MR_Word check_hlds__typecheck__VarSet_13;
    MR_Word check_hlds__typecheck__ClausesRep_14;
    MR_Word check_hlds__typecheck__ItemNumbers_15;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
    MR_Word check_hlds__typecheck__Var_21;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24;
    MR_Word check_hlds__typecheck__Markers0_35;
    MR_Word check_hlds__typecheck__Markers_36;
    MR_Word check_hlds__typecheck__PredNameVar_37;
    MR_Word check_hlds__typecheck__UnifyGoal_38;
    MR_Word check_hlds__typecheck__ModuleName_39;
    MR_String check_hlds__typecheck__CalleeName_40;
    MR_Word check_hlds__typecheck__Context_41;
    MR_Word check_hlds__typecheck__CallGoal_42;
    MR_Word check_hlds__typecheck__GoalInfo_43;
    MR_Word check_hlds__typecheck__Body_44;
    MR_Word check_hlds__typecheck__Var_49;
    MR_Word check_hlds__typecheck__Var_54;
    MR_Word check_hlds__typecheck__Var_56;
    MR_Word check_hlds__typecheck__Var_58;
    MR_Word check_hlds__typecheck__Var_60;
    MR_Word check_hlds__typecheck__Var_61;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18, &check_hlds__typecheck__VarSet0_9);
    check_hlds__typecheck__PredPieces_10 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__typecheck__ModuleInfo_7, (MR_Integer) 0, check_hlds__typecheck__PredId_5);
    check_hlds__typecheck__PredName_11 = parse_tree__error_util__error_pieces_to_string_1_f_0(check_hlds__typecheck__PredPieces_10);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__Markers0_35);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, check_hlds__typecheck__Markers0_35, &check_hlds__typecheck__Markers_36);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_36, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "PredName", &check_hlds__typecheck__PredNameVar_37, check_hlds__typecheck__VarSet0_9, &check_hlds__typecheck__VarSet_13);
    hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__typecheck__PredNameVar_37, check_hlds__typecheck__PredName_11, &check_hlds__typecheck__UnifyGoal_38);
    check_hlds__typecheck__ModuleName_39 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
    check_hlds__typecheck__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(check_hlds__typecheck__ModuleName_39);
    if (check_hlds__typecheck__succeeded)
      check_hlds__typecheck__CalleeName_40 = (MR_String) "sorry";
    else
      check_hlds__typecheck__CalleeName_40 = (MR_String) "no_clauses";
    hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_41);
    check_hlds__typecheck__Var_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      check_hlds__typecheck__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_54, 0) = ((MR_Box) (check_hlds__typecheck__PredNameVar_37));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    check_hlds__typecheck__Var_56 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(check_hlds__typecheck__Var_49, check_hlds__typecheck__CalleeName_40, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__typecheck__Var_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Var_56, check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__Context_41, &check_hlds__typecheck__CallGoal_42);
    hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__typecheck__Context_41, &check_hlds__typecheck__GoalInfo_43);
    {
      check_hlds__typecheck__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_61, 0) = ((MR_Box) (check_hlds__typecheck__CallGoal_42));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__typecheck__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_60, 0) = ((MR_Box) (check_hlds__typecheck__UnifyGoal_38));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_60, 1) = ((MR_Box) (check_hlds__typecheck__Var_61));
    }
    {
      check_hlds__typecheck__Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_58, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_58, 2) = ((MR_Box) (check_hlds__typecheck__Var_60));
    }
    {
      check_hlds__typecheck__Body_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Body_44, 0) = ((MR_Box) (check_hlds__typecheck__Var_58));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Body_44, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_43));
    }
    {
      check_hlds__typecheck__StubClause_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 1) = ((MR_Box) (check_hlds__typecheck__Body_44));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 3) = ((MR_Box) (check_hlds__typecheck__Context_41));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__typecheck__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_21, 0) = ((MR_Box) (check_hlds__typecheck__StubClause_12));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__Var_21, &check_hlds__typecheck__ClausesRep_14);
    check_hlds__typecheck__ItemNumbers_15 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_14, check_hlds__typecheck__ItemNumbers_15, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23);
    hlds__hlds_clauses__clauses_info_set_varset_3_p_0(check_hlds__typecheck__VarSet_13, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, check_hlds__typecheck__STATE_VARIABLE_PredInfo_17);
  }
}

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
{
  {
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_Info_21;

    check_hlds__typecheck__check_existq_clause_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_Info_21);
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_Info_21));
  }
}

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_8,
  MR_Word check_hlds__typecheck__PredId_9,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_70,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_71,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_72,
  MR_Word * check_hlds__typecheck__Changed_12)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__ClausesRep0_17;
    MR_Word check_hlds__typecheck__ItemNumbers_18;
    MR_Word check_hlds__typecheck__HeadVars_19;
    MR_Word check_hlds__typecheck__ClauseVarSet_20;
    MR_Word check_hlds__typecheck__ExplicitVarTypes0_21;
    MR_Word check_hlds__typecheck__PredStatus_22;
    MR_Word check_hlds__typecheck__TypeVarSet0_23;
    MR_Word check_hlds__typecheck__ExistQVars0_25;
    MR_Word check_hlds__typecheck__ArgTypes0_26;
    MR_Word check_hlds__typecheck__Markers0_27;
    MR_Word check_hlds__typecheck__Inferring_28;
    MR_Word check_hlds__typecheck__PredConstraints_30;
    MR_Word check_hlds__typecheck__ClassTable_32;
    MR_Word check_hlds__typecheck__Constraints_33;
    MR_Word check_hlds__typecheck__IsFieldAccessFunction_34;
    MR_Word check_hlds__typecheck__PredMarkers_35;
    MR_Word check_hlds__typecheck__Clauses0_36;
    MR_Word check_hlds__typecheck__Clauses_37;
    MR_Word check_hlds__typecheck__Context_38;
    MR_Word check_hlds__typecheck__TypeVarSet_39;
    MR_Word check_hlds__typecheck__InferredVarTypes0_40;
    MR_Word check_hlds__typecheck__InferredTypeConstraints0_41;
    MR_Word check_hlds__typecheck__ConstraintProofMap_42;
    MR_Word check_hlds__typecheck__ConstraintMap_43;
    MR_Word check_hlds__typecheck__TVarRenaming_44;
    MR_Word check_hlds__typecheck__ExistTypeRenaming_45;
    MR_Word check_hlds__typecheck__InferredVarTypes_46;
    MR_Word check_hlds__typecheck__ExplicitVarTypes1_47;
    MR_Word check_hlds__typecheck__ExplicitVarTypes_50;
    MR_Word check_hlds__typecheck__ClausesRep_51;
    MR_Word check_hlds__typecheck__ArgTypes_52;
    MR_Word check_hlds__typecheck__ArgTypeVars_53;
    MR_Word check_hlds__typecheck__InferredTypeConstraints_54;
    MR_Word check_hlds__typecheck__UnprovenBodyConstraints_55;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_78_78;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_89_89;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_90_90;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_91_91;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_92_92;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_94_94;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_96_96;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_97_97;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_98_98;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_99_99;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_100_100;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_104_104;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_108_108;
    MR_Word check_hlds__typecheck___ArgTypeVarSet_24;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__ClausesRep0_17, &check_hlds__typecheck__ItemNumbers_18);
    hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__HeadVars_19);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__ClauseVarSet_20);
    hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__ExplicitVarTypes0_21);
    hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__PredStatus_22);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__TypeVarSet0_23);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck___ArgTypeVarSet_24, &check_hlds__typecheck__ExistQVars0_25, &check_hlds__typecheck__ArgTypes0_26);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__Markers0_27);
    check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_27, (MR_Integer) 2);
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__Inferring_28 = (MR_Integer) 1;
      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Inferring type of ", check_hlds__typecheck__PredId_9, check_hlds__typecheck__ModuleInfo_8);
      check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      check_hlds__typecheck__PredConstraints_30 = (MR_Word) &check_hlds__typecheck_scalar_common_1[19];
    }
    else
    {
      MR_Word check_hlds__typecheck__TypeInfo_121_121;
      MR_Word check_hlds__typecheck__UnivTVars_31;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_84_84;
      MR_Word check_hlds__typecheck__Var_85;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_86_86;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_87_87;
      MR_Word check_hlds__typecheck__Var_120;

      check_hlds__typecheck__Inferring_28 = (MR_Integer) 0;
      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Type-checking ", check_hlds__typecheck__PredId_9, check_hlds__typecheck__ModuleInfo_8);
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes0_26, &check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_84_84);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__PredConstraints_30);
      check_hlds__typecheck__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredConstraints_30, (MR_Integer) 0)));
      check_hlds__typecheck__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredConstraints_30, (MR_Integer) 1)));
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(check_hlds__typecheck__Var_85, &check_hlds__typecheck__UnivTVars_31);
      check_hlds__typecheck__TypeInfo_121_121 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
      check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_86_86 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeInfo_121_121, check_hlds__typecheck__UnivTVars_31, check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_84_84);
      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck__TypeInfo_121_121, check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_86_86, &check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_87_87);
      mercury__list__delete_elems_3_p_0(check_hlds__typecheck__TypeInfo_121_121, check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_87_87, check_hlds__typecheck__ExistQVars0_25, &check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_78_78);
    }
    hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_8, &check_hlds__typecheck__ClassTable_32);
    hlds__hlds_data__make_head_hlds_constraints_4_p_0(check_hlds__typecheck__ClassTable_32, check_hlds__typecheck__TypeVarSet0_23, check_hlds__typecheck__PredConstraints_30, &check_hlds__typecheck__Constraints_33);
    check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69);
    if (check_hlds__typecheck__succeeded)
      check_hlds__typecheck__IsFieldAccessFunction_34 = (MR_Integer) 1;
    else
      check_hlds__typecheck__IsFieldAccessFunction_34 = (MR_Integer) 0;
    hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__PredMarkers_35);
    check_hlds__type_assign__type_assign_set_init_5_p_0(check_hlds__typecheck__TypeVarSet0_23, check_hlds__typecheck__ExplicitVarTypes0_21, check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_78_78, check_hlds__typecheck__Constraints_33, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_89_89);
    check_hlds__typecheck_info__typecheck_info_init_8_p_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__PredId_9, check_hlds__typecheck__IsFieldAccessFunction_34, check_hlds__typecheck__ClauseVarSet_20, check_hlds__typecheck__PredStatus_22, check_hlds__typecheck__PredMarkers_35, check_hlds__typecheck__STATE_VARIABLE_Specs_0_71, &check_hlds__typecheck__STATE_VARIABLE_Info_90_90);
    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(check_hlds__typecheck__ClausesRep0_17, &check_hlds__typecheck__Clauses0_36);
    check_hlds__typecheck__typecheck_clause_list_8_p_0(check_hlds__typecheck__HeadVars_19, check_hlds__typecheck__ArgTypes0_26, check_hlds__typecheck__Clauses0_36, &check_hlds__typecheck__Clauses_37, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_89_89, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_91_91, check_hlds__typecheck__STATE_VARIABLE_Info_90_90, &check_hlds__typecheck__STATE_VARIABLE_Info_92_92);
    hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__Context_38);
    check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_38, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_91_91, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93, check_hlds__typecheck__STATE_VARIABLE_Info_92_92, &check_hlds__typecheck__STATE_VARIABLE_Info_94_94);
    check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(check_hlds__typecheck__Context_38, (MR_Integer) 1, check_hlds__typecheck__HeadVars_19, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93, check_hlds__typecheck__STATE_VARIABLE_Info_94_94, &check_hlds__typecheck__STATE_VARIABLE_Info_96_96);
    check_hlds__type_assign__type_assign_set_get_final_info_12_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93, check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_78_78, check_hlds__typecheck__ExistQVars0_25, check_hlds__typecheck__ExplicitVarTypes0_21, &check_hlds__typecheck__TypeVarSet_39, &check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_97_97, &check_hlds__typecheck__InferredVarTypes0_40, &check_hlds__typecheck__InferredTypeConstraints0_41, &check_hlds__typecheck__ConstraintProofMap_42, &check_hlds__typecheck__ConstraintMap_43, &check_hlds__typecheck__TVarRenaming_44, &check_hlds__typecheck__ExistTypeRenaming_45);
    hlds__vartypes__vartypes_optimize_2_p_0(check_hlds__typecheck__InferredVarTypes0_40, &check_hlds__typecheck__InferredVarTypes_46);
    hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__typecheck__InferredVarTypes_46, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_98_98);
    if ((check_hlds__typecheck__ExistQVars0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__typecheck__ExplicitVarTypes1_47 = check_hlds__typecheck__ExplicitVarTypes0_21;
    else
      hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__ExplicitVarTypes0_21, &check_hlds__typecheck__ExplicitVarTypes1_47);
    hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__ExplicitVarTypes1_47, &check_hlds__typecheck__ExplicitVarTypes_50);
    hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(check_hlds__typecheck__ExplicitVarTypes_50, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_98_98, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_99_99);
    hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__Clauses_37, &check_hlds__typecheck__ClausesRep_51);
    hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_51, check_hlds__typecheck__ItemNumbers_18, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_99_99, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_100_100);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_100_100, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_39, check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102);
    hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(check_hlds__typecheck__ConstraintProofMap_42, check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103);
    hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(check_hlds__typecheck__ConstraintMap_43, check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_104_104);
    hlds__vartypes__lookup_var_types_3_p_0(check_hlds__typecheck__InferredVarTypes_46, check_hlds__typecheck__HeadVars_19, &check_hlds__typecheck__ArgTypes_52);
    parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes_52, &check_hlds__typecheck__ArgTypeVars_53);
    check_hlds__typecheck__restrict_to_head_vars_4_p_0(check_hlds__typecheck__InferredTypeConstraints0_41, check_hlds__typecheck__ArgTypeVars_53, &check_hlds__typecheck__InferredTypeConstraints_54, &check_hlds__typecheck__UnprovenBodyConstraints_55);
    hlds__hlds_pred__pred_info_set_unproven_body_constraints_3_p_0(check_hlds__typecheck__UnprovenBodyConstraints_55, check_hlds__typecheck__STATE_VARIABLE_PredInfo_104_104, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105);
    switch (check_hlds__typecheck__Inferring_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__typecheck__Origin0_59;
          MR_Word check_hlds__typecheck__ExistQVars1_60;
          MR_Word check_hlds__typecheck__ArgTypes1_61;
          MR_Word check_hlds__typecheck__PredConstraints1_62;
          MR_Word check_hlds__typecheck__Origin1_63;
          MR_Word check_hlds__typecheck__RenamedOldArgTypes_66;
          MR_Word check_hlds__typecheck__RenamedOldConstraints_67;
          MR_Word check_hlds__typecheck__Origin_68;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_109_109;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110;
          MR_Word check_hlds__typecheck__ExistQVars_118;

          hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_97_97, check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106);
          hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106, &check_hlds__typecheck__Origin0_59);
          if ((check_hlds__typecheck__ExistQVars0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            check_hlds__typecheck__ExistQVars1_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            check_hlds__typecheck__ArgTypes1_61 = check_hlds__typecheck__ArgTypes0_26;
            check_hlds__typecheck__PredConstraints1_62 = check_hlds__typecheck__PredConstraints_30;
            check_hlds__typecheck__Origin1_63 = check_hlds__typecheck__Origin0_59;
            check_hlds__typecheck__STATE_VARIABLE_Info_108_108 = check_hlds__typecheck__STATE_VARIABLE_Info_96_96;
          }
          else
          {
            MR_Word check_hlds__typecheck__Var_107;
            MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_108_108;

            {
              check_hlds__typecheck__Var_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_107, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[1]));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_107, 1) = ((MR_Box) (check_hlds__typecheck__do_typecheck_pred_7_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_107, 3) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_39));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_107, 4) = ((MR_Box) (check_hlds__typecheck__ExistQVars0_25));
            }
            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__Var_107, check_hlds__typecheck__Clauses_37, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_96_96)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_108_108);
            check_hlds__typecheck__STATE_VARIABLE_Info_108_108 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_108_108);
            mercury__term__apply_renaming_in_vars_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__ExistQVars0_25, &check_hlds__typecheck__ExistQVars1_60);
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__ArgTypes0_26, &check_hlds__typecheck__ArgTypes1_61);
            parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__PredConstraints_30, &check_hlds__typecheck__PredConstraints1_62);
            check_hlds__typecheck__rename_instance_method_constraints_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__Origin0_59, &check_hlds__typecheck__Origin1_63);
          }
          mercury__term__apply_renaming_in_vars_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__ExistQVars1_60, &check_hlds__typecheck__ExistQVars_118);
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__ArgTypes1_61, &check_hlds__typecheck__RenamedOldArgTypes_66);
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__PredConstraints1_62, &check_hlds__typecheck__RenamedOldConstraints_67);
          check_hlds__typecheck__rename_instance_method_constraints_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__Origin1_63, &check_hlds__typecheck__Origin_68);
          hlds__hlds_pred__pred_info_set_arg_types_5_p_0(check_hlds__typecheck__TypeVarSet_39, check_hlds__typecheck__ExistQVars_118, check_hlds__typecheck__RenamedOldArgTypes_66, check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_109_109);
          hlds__hlds_pred__pred_info_set_class_context_3_p_0(check_hlds__typecheck__RenamedOldConstraints_67, check_hlds__typecheck__STATE_VARIABLE_PredInfo_109_109, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110);
          hlds__hlds_pred__pred_info_set_origin_3_p_0(check_hlds__typecheck__Origin_68, check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110, check_hlds__typecheck__STATE_VARIABLE_PredInfo_70);
          *check_hlds__typecheck__Changed_12 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__typecheck__ExistQVars_56;
          MR_Word check_hlds__typecheck__OldTypeConstraints_57;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_112_112;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_113_113;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114;
          MR_Word check_hlds__typecheck__TVarKindMap_58;

          check_hlds__typecheck__infer_existential_types_4_p_0(check_hlds__typecheck__ArgTypeVars_53, &check_hlds__typecheck__ExistQVars_56, check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_97_97, &check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_112_112);
          hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ExternalTypeParams_112_112, check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_113_113);
          hlds__hlds_pred__pred_info_set_arg_types_5_p_0(check_hlds__typecheck__TypeVarSet_39, check_hlds__typecheck__ExistQVars_56, check_hlds__typecheck__ArgTypes_52, check_hlds__typecheck__STATE_VARIABLE_PredInfo_113_113, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114);
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114, &check_hlds__typecheck__OldTypeConstraints_57);
          hlds__hlds_pred__pred_info_set_class_context_3_p_0(check_hlds__typecheck__InferredTypeConstraints_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114, check_hlds__typecheck__STATE_VARIABLE_PredInfo_70);
          hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(*check_hlds__typecheck__STATE_VARIABLE_PredInfo_70, &check_hlds__typecheck__TVarKindMap_58);
          check_hlds__typecheck__succeeded = check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(check_hlds__typecheck__TVarKindMap_58, check_hlds__typecheck__ExistQVars0_25, check_hlds__typecheck__ArgTypes0_26, check_hlds__typecheck__OldTypeConstraints_57, check_hlds__typecheck__ExistQVars_56, check_hlds__typecheck__ArgTypes_52, check_hlds__typecheck__InferredTypeConstraints_54);
          if (check_hlds__typecheck__succeeded)
            *check_hlds__typecheck__Changed_12 = (MR_Integer) 0;
          else
            *check_hlds__typecheck__Changed_12 = (MR_Integer) 1;
          check_hlds__typecheck__STATE_VARIABLE_Info_108_108 = check_hlds__typecheck__STATE_VARIABLE_Info_96_96;
        }
        break;
    }
    check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_108_108, check_hlds__typecheck__STATE_VARIABLE_Specs_72);
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_8_p_0(
  MR_Word check_hlds__typecheck__HeadVars_1,
  MR_Word check_hlds__typecheck__ArgTypes_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8)
{
  if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *check_hlds__typecheck__STATE_VARIABLE_Info_8 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5;
  }
  else
  {
    MR_Word check_hlds__typecheck__Clause0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__Clauses0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__Clause_21;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_30_30;
    MR_Word * check_hlds__typecheck__AddrClauses_33;

    check_hlds__typecheck__typecheck_clause_8_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clause0_19, &check_hlds__typecheck__Clause_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__STATE_VARIABLE_Info_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__typecheck__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Clause_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    check_hlds__typecheck__AddrClauses_33 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1));
    check_hlds__typecheck__LCMCpr_typecheck_clause_list_1_8_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clauses0_20, check_hlds__typecheck__AddrClauses_33, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6, check_hlds__typecheck__STATE_VARIABLE_Info_30_30, check_hlds__typecheck__STATE_VARIABLE_Info_8);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_clause_list_1_8_p_0(
  MR_Word check_hlds__typecheck__HeadVars_1,
  MR_Word check_hlds__typecheck__ArgTypes_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4_34,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__typecheck__AddrOfHeadVar__4_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *check_hlds__typecheck__STATE_VARIABLE_Info_8 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
      *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5;
    }
    else
    {
      MR_Word check_hlds__typecheck__Clause0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__Clauses0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__Clause_21;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_30_30;
      MR_Word * check_hlds__typecheck__AddrClauses_33;
      MR_Word check_hlds__typecheck__HeadVar__4_35;

      check_hlds__typecheck__typecheck_clause_8_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clause0_19, &check_hlds__typecheck__Clause_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__STATE_VARIABLE_Info_30_30);
      {
        check_hlds__typecheck__HeadVar__4_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_35, 0) = ((MR_Box) (check_hlds__typecheck__Clause_21));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_35, 1) = NULL;
      }
      check_hlds__typecheck__AddrClauses_33 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_35, (MR_Integer) 1));
      *check_hlds__typecheck__AddrOfHeadVar__4_34 = check_hlds__typecheck__HeadVar__4_35;
      /* direct tailcall eliminated */
      {
        MR_Word check_hlds__typecheck__next_value_of_HeadVar__3_3 = check_hlds__typecheck__Clauses0_20;
        MR_Word * check_hlds__typecheck__next_value_of_AddrOfHeadVar__4_34 = check_hlds__typecheck__AddrClauses_33;
        MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29;
        MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_Info_0_7 = check_hlds__typecheck__STATE_VARIABLE_Info_30_30;

        check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__next_value_of_HeadVar__3_3;
        check_hlds__typecheck__AddrOfHeadVar__4_34 = check_hlds__typecheck__next_value_of_AddrOfHeadVar__4_34;
        check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;
        check_hlds__typecheck__STATE_VARIABLE_Info_0_7 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_Info_0_7;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
{
  {
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv0_HeadVar__3_3;

    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_HeadVar__3_3);
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0(
  MR_Word check_hlds__typecheck__HeadVars_9,
  MR_Word check_hlds__typecheck__ArgTypes_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Clause_0_22,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Clause_23,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__Body0_14;
    MR_Word check_hlds__typecheck__Context_15;
    MR_Word check_hlds__typecheck__ArgVectorKind_16;
    MR_Word check_hlds__typecheck__Body_17;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_29_29;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_31_31;
    MR_Word check_hlds__typecheck__Specs_67;
    MR_Word check_hlds__typecheck__MaybeArgVectorTypeErrors_68;
    MR_Word check_hlds__typecheck__Var_38;
    MR_Word check_hlds__typecheck__Var_39;
    MR_Word check_hlds__typecheck__Var_40;
    MR_Word check_hlds__typecheck__Var_41;
    MR_Word check_hlds__typecheck__ArgVectorTypeErrors_69;
    MR_Word check_hlds__typecheck__Var_80;
    MR_Word check_hlds__typecheck__Var_70;
    MR_Word check_hlds__typecheck__Var_71;
    MR_Word check_hlds__typecheck__Var_72;
    MR_Word check_hlds__typecheck__Var_52;
    MR_Word check_hlds__typecheck__Var_54;
    MR_Word check_hlds__typecheck__Var_55;
    MR_Word check_hlds__typecheck__Var_56;
    MR_Word check_hlds__typecheck__Var_53;

    check_hlds__typecheck__Body0_14 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__typecheck__STATE_VARIABLE_Clause_0_22);
    check_hlds__typecheck__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 0)));
    check_hlds__typecheck__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 1)));
    check_hlds__typecheck__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 2)));
    check_hlds__typecheck__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 3)));
    check_hlds__typecheck__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 4)));
    check_hlds__typecheck__ArgVectorKind_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__Context_15, check_hlds__typecheck__ArgVectorKind_16, (MR_Integer) 1, check_hlds__typecheck__HeadVars_9, check_hlds__typecheck__ArgTypes_10, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Specs_67, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[0]), &check_hlds__typecheck__MaybeArgVectorTypeErrors_68);
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__MaybeArgVectorTypeErrors_68)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__ArgVectorTypeErrors_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeArgVectorTypeErrors_68, (MR_Integer) 0)));
      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ArgVectorTypeErrors_69)) == (MR_mktag((MR_Integer) 1)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_69, (MR_Integer) 0)));
        check_hlds__typecheck__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_69, (MR_Integer) 1)));
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Var_80)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_80, (MR_Integer) 0)));
          check_hlds__typecheck__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_80, (MR_Integer) 1)));
        }
      }
    }
    if (check_hlds__typecheck__succeeded)
    {
      MR_Word check_hlds__typecheck__ClauseContext_73;
      MR_Word check_hlds__typecheck__AllArgsSpec_74;

      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_26, &check_hlds__typecheck__ClauseContext_73);
      check_hlds__typecheck__AllArgsSpec_74 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(check_hlds__typecheck__ClauseContext_73, check_hlds__typecheck__Context_15, check_hlds__typecheck__ArgVectorKind_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28, check_hlds__typecheck__ArgVectorTypeErrors_69);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__AllArgsSpec_74, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, &check_hlds__typecheck__STATE_VARIABLE_Info_29_29);
    }
    else
    {
      MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_29_29;

      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_6[5], check_hlds__typecheck__Specs_67, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_26)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_29_29);
      check_hlds__typecheck__STATE_VARIABLE_Info_29_29 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_29_29);
    }
    check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Body0_14, &check_hlds__typecheck__Body_17, check_hlds__typecheck__Context_15, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25, check_hlds__typecheck__STATE_VARIABLE_Info_29_29, &check_hlds__typecheck__STATE_VARIABLE_Info_31_31);
    check_hlds__typecheck__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 0)));
    check_hlds__typecheck__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 1)));
    check_hlds__typecheck__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 2)));
    check_hlds__typecheck__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 3)));
    check_hlds__typecheck__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__typecheck__STATE_VARIABLE_Clause_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Var_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Body_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__Var_54));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__Var_55));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__Var_56));
    }
    check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(check_hlds__typecheck__Context_15, (MR_Integer) 0, check_hlds__typecheck__HeadVars_9, *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25, check_hlds__typecheck__STATE_VARIABLE_Info_31_31, check_hlds__typecheck__STATE_VARIABLE_Info_27);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_goal_1_7_p_0(
  MR_Word check_hlds__typecheck__Goal0_8,
  MR_Word * check_hlds__typecheck__AddrOfGoal_43,
  MR_Word check_hlds__typecheck__EnclosingContext_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_30,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_31)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__Goal_9;
    MR_Word check_hlds__typecheck__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_8, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_8, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__Context0_15;
    MR_Word check_hlds__typecheck__Context_16;
    MR_Word check_hlds__typecheck__GoalInfo_17;
    MR_Integer check_hlds__typecheck__NumTypeAssignSets_18;
    MR_Integer check_hlds__typecheck__WarnLimit_19;
    MR_Word check_hlds__typecheck__GoalExpr_24;
    MR_Word check_hlds__typecheck__Var_41;

    check_hlds__typecheck__Context0_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__typecheck__GoalInfo0_14);
    check_hlds__typecheck__Var_41 = mercury__term__context_init_0_f_0();
    check_hlds__typecheck__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck__Context0_15, check_hlds__typecheck__Var_41);
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__Context_16 = check_hlds__typecheck__EnclosingContext_10;
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalInfo0_14, &check_hlds__typecheck__GoalInfo_17);
    }
    else
    {
      check_hlds__typecheck__Context_16 = check_hlds__typecheck__Context0_15;
      check_hlds__typecheck__GoalInfo_17 = check_hlds__typecheck__GoalInfo0_14;
    }
    mercury__list__length_2_p_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, &check_hlds__typecheck__NumTypeAssignSets_18);
    check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__WarnLimit_19);
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumTypeAssignSets_18 > check_hlds__typecheck__WarnLimit_19);
    if (check_hlds__typecheck__succeeded)
    {
      MR_Integer check_hlds__typecheck__ErrorLimit_20;
      MR_Word check_hlds__typecheck__ClauseContext_21;
      MR_Word check_hlds__typecheck__OverloadedSymbolMap_22;

      check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__ErrorLimit_20);
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__ClauseContext_21);
      check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__OverloadedSymbolMap_22);
      check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumTypeAssignSets_18 > check_hlds__typecheck__ErrorLimit_20);
      if (check_hlds__typecheck__succeeded)
      {
        MR_Word check_hlds__typecheck__ErrorSpec_23;
        MR_Word check_hlds__typecheck__Var_32;

        check_hlds__typecheck__ErrorSpec_23 = check_hlds__typecheck_errors__report_error_too_much_overloading_3_f_0(check_hlds__typecheck__ClauseContext_21, check_hlds__typecheck__Context_16, check_hlds__typecheck__OverloadedSymbolMap_22);
        {
          check_hlds__typecheck__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_32, 0) = ((MR_Box) (check_hlds__typecheck__ErrorSpec_23));
        }
        check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__Var_32, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, check_hlds__typecheck__STATE_VARIABLE_Info_31);
        check_hlds__typecheck__GoalExpr_24 = check_hlds__typecheck__GoalExpr0_13;
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28;
      }
      else
      {
        MR_Word check_hlds__typecheck__MaybePrevSpec_25;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_35_35;

        check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__MaybePrevSpec_25);
        if ((check_hlds__typecheck__MaybePrevSpec_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word check_hlds__typecheck__WarnSpec_26;
          MR_Word check_hlds__typecheck__Var_34;

          check_hlds__typecheck__WarnSpec_26 = check_hlds__typecheck_errors__report_warning_too_much_overloading_3_f_0(check_hlds__typecheck__ClauseContext_21, check_hlds__typecheck__Context_16, check_hlds__typecheck__OverloadedSymbolMap_22);
          {
            check_hlds__typecheck__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_34, 0) = ((MR_Box) (check_hlds__typecheck__WarnSpec_26));
          }
          check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__Var_34, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__STATE_VARIABLE_Info_35_35);
        }
        else
          check_hlds__typecheck__STATE_VARIABLE_Info_35_35 = check_hlds__typecheck__STATE_VARIABLE_Info_0_30;
        check_hlds__typecheck__typecheck_goal_expr_7_p_0(check_hlds__typecheck__GoalExpr0_13, &check_hlds__typecheck__GoalExpr_24, check_hlds__typecheck__GoalInfo_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29, check_hlds__typecheck__STATE_VARIABLE_Info_35_35, check_hlds__typecheck__STATE_VARIABLE_Info_31);
      }
    }
    else
      check_hlds__typecheck__typecheck_goal_expr_7_p_0(check_hlds__typecheck__GoalExpr0_13, &check_hlds__typecheck__GoalExpr_24, check_hlds__typecheck__GoalInfo_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, check_hlds__typecheck__STATE_VARIABLE_Info_31);
    {
      check_hlds__typecheck__Goal_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_9, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_24));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_9, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_17));
    }
    *check_hlds__typecheck__AddrOfGoal_43 = check_hlds__typecheck__Goal_9;
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_unification_1_10_p_0(
  MR_Word check_hlds__typecheck__UnifyContext_11,
  MR_Word check_hlds__typecheck__Context_12,
  MR_Word check_hlds__typecheck__GoalId_13,
  MR_Word check_hlds__typecheck__X_14,
  MR_Word check_hlds__typecheck__RHS0_15,
  MR_Word * check_hlds__typecheck__AddrOfRHS_83,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_35,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_36)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    switch (MR_tag((MR_Word) check_hlds__typecheck__RHS0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__typecheck__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)));
          MR_Word check_hlds__typecheck__TypeAssignSet1_75;
          MR_Word check_hlds__typecheck__Var_76;
          MR_Word check_hlds__typecheck__Var_77;

          check_hlds__typecheck__type_assigns_unify_var_var_5_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, check_hlds__typecheck__X_14, check_hlds__typecheck__Y_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_75);
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 0)));
              check_hlds__typecheck__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 1)));
            }
          }
          if (check_hlds__typecheck__succeeded)
          {
            MR_Word check_hlds__typecheck__ClauseContext_78;
            MR_Word check_hlds__typecheck__Spec_79;

            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33;
            check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__ClauseContext_78);
            check_hlds__typecheck__Spec_79 = check_hlds__typecheck_errors__report_error_unif_var_var_6_f_0(check_hlds__typecheck__ClauseContext_78, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__X_14, check_hlds__typecheck__Y_19, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_79, check_hlds__typecheck__STATE_VARIABLE_Info_0_35, check_hlds__typecheck__STATE_VARIABLE_Info_36);
          }
          else
          {
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34 = check_hlds__typecheck__TypeAssignSet1_75;
            *check_hlds__typecheck__STATE_VARIABLE_Info_36 = check_hlds__typecheck__STATE_VARIABLE_Info_0_35;
          }
          *check_hlds__typecheck__AddrOfRHS_83 = check_hlds__typecheck__RHS0_15;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__typecheck__Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)));
          MR_Word check_hlds__typecheck__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_15, (MR_Integer) 2)));
          MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_41_41;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_42_42;
          MR_Word check_hlds__typecheck___ExistConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_15, (MR_Integer) 1)));

          check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__X_14, check_hlds__typecheck__Functor_20, check_hlds__typecheck__Args_22, check_hlds__typecheck__GoalId_13, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_41_41, check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__STATE_VARIABLE_Info_42_42);
          check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_41_41, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34, check_hlds__typecheck__STATE_VARIABLE_Info_42_42, check_hlds__typecheck__STATE_VARIABLE_Info_36);
          *check_hlds__typecheck__AddrOfRHS_83 = check_hlds__typecheck__RHS0_15;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__typecheck__Purity_23 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word check_hlds__typecheck__Groundness_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word check_hlds__typecheck__PredOrFunc_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word check_hlds__typecheck__NonLocals_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 2)));
          MR_Word check_hlds__typecheck__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 3)));
          MR_Word check_hlds__typecheck__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 4)));
          MR_Word check_hlds__typecheck__Det_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 5)));
          MR_Word check_hlds__typecheck__Goal0_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 6)));
          MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_38_38;
          MR_Word check_hlds__typecheck__TypeAssignSet1_59;
          MR_Word check_hlds__typecheck__Var_60;
          MR_Word check_hlds__typecheck__Var_61;
          MR_Word * check_hlds__typecheck__AddrGoal_82;
          MR_Word check_hlds__typecheck__RHS_84;

          check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, check_hlds__typecheck__Purity_23, check_hlds__typecheck__PredOrFunc_25, check_hlds__typecheck__X_14, check_hlds__typecheck__Vars_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_59);
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 0)));
              check_hlds__typecheck__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 1)));
            }
          }
          if (check_hlds__typecheck__succeeded)
          {
            MR_Word check_hlds__typecheck__ClauseContext_62;
            MR_Word check_hlds__typecheck__Spec_63;

            check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33;
            check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__ClauseContext_62);
            check_hlds__typecheck__Spec_63 = check_hlds__typecheck_errors__report_error_lambda_var_8_f_0(check_hlds__typecheck__ClauseContext_62, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__PredOrFunc_25, check_hlds__typecheck__X_14, check_hlds__typecheck__Vars_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_63, check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__STATE_VARIABLE_Info_38_38);
          }
          else
          {
            check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37 = check_hlds__typecheck__TypeAssignSet1_59;
            check_hlds__typecheck__STATE_VARIABLE_Info_38_38 = check_hlds__typecheck__STATE_VARIABLE_Info_0_35;
          }
          {
            check_hlds__typecheck__RHS_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 0) = ((MR_Box) ((check_hlds__typecheck__Purity_23 | ((((check_hlds__typecheck__Groundness_24 << (MR_Integer) 2)) | ((check_hlds__typecheck__PredOrFunc_25 << (MR_Integer) 3)))))));
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 1) = (MR_Integer) 0;
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 2) = ((MR_Box) (check_hlds__typecheck__NonLocals_27));
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 3) = ((MR_Box) (check_hlds__typecheck__Vars_28));
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 4) = ((MR_Box) (check_hlds__typecheck__Modes_29));
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 5) = ((MR_Box) (check_hlds__typecheck__Det_30));
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 6) = (MR_Integer) 0;
          }
          check_hlds__typecheck__AddrGoal_82 = (MR_Word *) &(MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, (MR_Integer) 6));
          *check_hlds__typecheck__AddrOfRHS_83 = check_hlds__typecheck__RHS_84;
          check_hlds__typecheck__LCMCpr_typecheck_goal_1_7_p_0(check_hlds__typecheck__Goal0_31, check_hlds__typecheck__AddrGoal_82, check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34, check_hlds__typecheck__STATE_VARIABLE_Info_38_38, check_hlds__typecheck__STATE_VARIABLE_Info_36);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_31,
  MR_Word check_hlds__typecheck__Context_3,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__typecheck__AddrOfHeadVar__2_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *check_hlds__typecheck__STATE_VARIABLE_Info_7 = check_hlds__typecheck__STATE_VARIABLE_Info_0_6;
      *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
    }
    else
    {
      MR_Word check_hlds__typecheck__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__Goal_17;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_27_27;
      MR_Word * check_hlds__typecheck__AddrGoals_30;
      MR_Word check_hlds__typecheck__HeadVar__2_32;

      check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Goal0_15, &check_hlds__typecheck__Goal_17, check_hlds__typecheck__Context_3, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26, check_hlds__typecheck__STATE_VARIABLE_Info_0_6, &check_hlds__typecheck__STATE_VARIABLE_Info_27_27);
      {
        check_hlds__typecheck__HeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_32, 0) = ((MR_Box) (check_hlds__typecheck__Goal_17));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_32, 1) = NULL;
      }
      check_hlds__typecheck__AddrGoals_30 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_32, (MR_Integer) 1));
      *check_hlds__typecheck__AddrOfHeadVar__2_31 = check_hlds__typecheck__HeadVar__2_32;
      /* direct tailcall eliminated */
      {
        MR_Word check_hlds__typecheck__next_value_of_HeadVar__1_1 = check_hlds__typecheck__Goals0_16;
        MR_Word * check_hlds__typecheck__next_value_of_AddrOfHeadVar__2_31 = check_hlds__typecheck__AddrGoals_30;
        MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26;
        MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_Info_0_6 = check_hlds__typecheck__STATE_VARIABLE_Info_27_27;

        check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__next_value_of_HeadVar__1_1;
        check_hlds__typecheck__AddrOfHeadVar__2_31 = check_hlds__typecheck__next_value_of_AddrOfHeadVar__2_31;
        check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
        check_hlds__typecheck__STATE_VARIABLE_Info_0_6 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_Info_0_6;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_7_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__Context_3,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_7)
{
  if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *check_hlds__typecheck__STATE_VARIABLE_Info_7 = check_hlds__typecheck__STATE_VARIABLE_Info_0_6;
    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
  }
  else
  {
    MR_Word check_hlds__typecheck__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__Goal_17;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26;
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_27_27;
    MR_Word * check_hlds__typecheck__AddrGoals_30;

    check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Goal0_15, &check_hlds__typecheck__Goal_17, check_hlds__typecheck__Context_3, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26, check_hlds__typecheck__STATE_VARIABLE_Info_0_6, &check_hlds__typecheck__STATE_VARIABLE_Info_27_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__typecheck__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Goal_17));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    check_hlds__typecheck__AddrGoals_30 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1));
    check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(check_hlds__typecheck__Goals0_16, check_hlds__typecheck__AddrGoals_30, check_hlds__typecheck__Context_3, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5, check_hlds__typecheck__STATE_VARIABLE_Info_27_27, check_hlds__typecheck__STATE_VARIABLE_Info_7);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_3(
  MR_Box check_hlds__typecheck__closure_arg)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

    check_hlds__typecheck__succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1519__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))));
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_2(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3,
  MR_Box check_hlds__typecheck__wrapper_arg_4,
  MR_Box * check_hlds__typecheck__wrapper_arg_5)
{
  {
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv2_STATE_VARIABLE_TypeAssignSet_12;
    MR_Word check_hlds__typecheck__conv1_STATE_VARIABLE_Info_14;

    check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv2_STATE_VARIABLE_TypeAssignSet_12, ((MR_Word) check_hlds__typecheck__wrapper_arg_4), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_14);
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv2_STATE_VARIABLE_TypeAssignSet_12));
    *check_hlds__typecheck__wrapper_arg_5 = ((MR_Box) (check_hlds__typecheck__conv1_STATE_VARIABLE_Info_14));
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1)
{
  {
    MR_Box check_hlds__typecheck__wrapper_arg_2;
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv0_HeadVar__2_2;

    check_hlds__typecheck__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__2_2));
    return check_hlds__typecheck__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0(
  MR_Word check_hlds__typecheck__GoalExpr0_8,
  MR_Word * check_hlds__typecheck__GoalExpr_9,
  MR_Word check_hlds__typecheck__GoalInfo_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_119,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_120)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__Context_16;
    MR_Word check_hlds__typecheck__ClauseContext_13;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_119, &check_hlds__typecheck__ClauseContext_13);
    check_hlds__typecheck__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__typecheck__GoalInfo_10);
    switch (MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__typecheck__SubGoal0_28 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__GoalExpr0_8), (MR_Integer) 0);
          MR_Word check_hlds__typecheck__SubGoal_29;

          check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__SubGoal0_28, &check_hlds__typecheck__SubGoal_29, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, check_hlds__typecheck__STATE_VARIABLE_Info_120);
          *check_hlds__typecheck__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__SubGoal_29);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__typecheck__LHS_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)));
          MR_Word check_hlds__typecheck__RHS0_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
          MR_Word check_hlds__typecheck__UnifyMode_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
          MR_Word check_hlds__typecheck__Unification_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
          MR_Word check_hlds__typecheck__UnifyContext_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
          MR_Word check_hlds__typecheck__GoalId_252;
          MR_Word * check_hlds__typecheck__AddrRHS_306;

          check_hlds__typecheck__GoalId_252 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_10);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__typecheck__GoalExpr_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__LHS_77));
            MR_hl_field(MR_mktag(1), base, 1) = NULL;
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__typecheck__UnifyMode_79));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__typecheck__Unification_80));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__typecheck__UnifyContext_81));
          }
          check_hlds__typecheck__AddrRHS_306 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__GoalExpr_9, (MR_Integer) 1));
          check_hlds__typecheck__LCMCpr_typecheck_unification_1_10_p_0(check_hlds__typecheck__UnifyContext_81, check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalId_252, check_hlds__typecheck__LHS_77, check_hlds__typecheck__RHS0_78, check_hlds__typecheck__AddrRHS_306, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, check_hlds__typecheck__STATE_VARIABLE_Info_120);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer check_hlds__typecheck__ProcId_53 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
          MR_Word check_hlds__typecheck__Args_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
          MR_Word check_hlds__typecheck__BI_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
          MR_Word check_hlds__typecheck__UC_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
          MR_Word check_hlds__typecheck__Name_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 5)));
          MR_Integer check_hlds__typecheck__Arity_58;
          MR_Word check_hlds__typecheck__SimpleCallId_59;
          MR_Word check_hlds__typecheck__GoalId_60;
          MR_Word check_hlds__typecheck__PredId_61;
          MR_Word check_hlds__typecheck__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)));

          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_54, &check_hlds__typecheck__Arity_58);
          {
            check_hlds__typecheck__SimpleCallId_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_59, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_59, 1) = ((MR_Box) (check_hlds__typecheck__Name_57));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_59, 2) = ((MR_Box) (check_hlds__typecheck__Arity_58));
          }
          check_hlds__typecheck__GoalId_60 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_10);
          check_hlds__typecheck__typecheck_call_pred_name_9_p_0(check_hlds__typecheck__SimpleCallId_59, check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalId_60, check_hlds__typecheck__Args_54, &check_hlds__typecheck__PredId_61, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, check_hlds__typecheck__STATE_VARIABLE_Info_120);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__typecheck__GoalExpr_9 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__typecheck__PredId_61));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__typecheck__ProcId_53));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__typecheck__Args_54));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__typecheck__BI_55));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__typecheck__UC_56));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__typecheck__Name_57));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__typecheck__GenericCall_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__typecheck__Args_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word check_hlds__typecheck___Modes_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word check_hlds__typecheck___MaybeArgRegs_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word check_hlds__typecheck___Detism_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 5)));

              switch (MR_tag((MR_Word) check_hlds__typecheck__GenericCall_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__typecheck__PredVar_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_62, (MR_Integer) 0)));
                    MR_Word check_hlds__typecheck__Purity_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_62, (MR_Integer) 1)));
                    MR_Word check_hlds__typecheck__GenericCallId_70;
                    MR_Word check_hlds__typecheck__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_62, (MR_Integer) 2)));
                    MR_Integer check_hlds__typecheck__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_62, (MR_Integer) 3)));

                    hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__typecheck__GenericCall_62, &check_hlds__typecheck__GenericCallId_70);
                    check_hlds__typecheck__typecheck_higher_order_call_9_p_0(check_hlds__typecheck__GenericCallId_70, check_hlds__typecheck__Context_16, check_hlds__typecheck__PredVar_66, check_hlds__typecheck__Purity_67, check_hlds__typecheck__Args_251, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, check_hlds__typecheck__STATE_VARIABLE_Info_120);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "unexpected class method call");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String check_hlds__typecheck__EventName_75 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GenericCall_62, (MR_Integer) 0)));

                    check_hlds__typecheck__typecheck_event_call_7_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__EventName_75, check_hlds__typecheck__Args_251, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, check_hlds__typecheck__STATE_VARIABLE_Info_120);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117;
                    *check_hlds__typecheck__STATE_VARIABLE_Info_120 = check_hlds__typecheck__STATE_VARIABLE_Info_0_119;
                  }
                  break;
              }
              *check_hlds__typecheck__GoalExpr_9 = check_hlds__typecheck__GoalExpr0_8;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__typecheck__ArgVectorKind_91;
              MR_Word check_hlds__typecheck__ArgVars_92;
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_171_171;
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_172_172;
              MR_Word check_hlds__typecheck__Args_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word check_hlds__typecheck__GoalId_254;
              MR_Word check_hlds__typecheck__PredId_255 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word check_hlds__typecheck__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
              MR_Integer check_hlds__typecheck__Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word check_hlds__typecheck__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 5)));
              MR_Word check_hlds__typecheck__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 6)));
              MR_Word check_hlds__typecheck__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 7)));

              {
                check_hlds__typecheck__ArgVectorKind_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_91, 1) = ((MR_Box) (check_hlds__typecheck__PredId_255));
              }
              check_hlds__typecheck__ArgVars_92 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &check_hlds__typecheck_scalar_common_6[4], check_hlds__typecheck__Args_253);
              check_hlds__typecheck__GoalId_254 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_10);
              check_hlds__typecheck__typecheck_call_pred_id_9_p_0(check_hlds__typecheck__ArgVectorKind_91, check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalId_254, check_hlds__typecheck__PredId_255, check_hlds__typecheck__ArgVars_92, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_171_171, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, &check_hlds__typecheck__STATE_VARIABLE_Info_172_172);
              check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_171_171, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_172_172, check_hlds__typecheck__STATE_VARIABLE_Info_120);
              *check_hlds__typecheck__GoalExpr_9 = check_hlds__typecheck__GoalExpr0_8;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__typecheck__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__typecheck__List0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word * check_hlds__typecheck__AddrList_304;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__typecheck__GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__ConjType_17));
                MR_hl_field(MR_mktag(3), base, 2) = NULL;
              }
              check_hlds__typecheck__AddrList_304 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__typecheck__GoalExpr_9, (MR_Integer) 2));
              check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(check_hlds__typecheck__List0_18, check_hlds__typecheck__AddrList_304, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, check_hlds__typecheck__STATE_VARIABLE_Info_120);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__typecheck__List0_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word * check_hlds__typecheck__AddrList_305;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__typecheck__GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = NULL;
              }
              check_hlds__typecheck__AddrList_305 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__typecheck__GoalExpr_9, (MR_Integer) 1));
              check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(check_hlds__typecheck__List0_244, check_hlds__typecheck__AddrList_305, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, check_hlds__typecheck__STATE_VARIABLE_Info_120);
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "switch");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__typecheck__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205;
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_206_206;
              MR_Word check_hlds__typecheck__SubGoal0_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word check_hlds__typecheck__SubGoal_250;

              check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__SubGoal0_249, &check_hlds__typecheck__SubGoal_250, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, &check_hlds__typecheck__STATE_VARIABLE_Info_206_206);
              switch (MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__typecheck__Vars_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Reason_30, (MR_Integer) 0)));

                    check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_246, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_206_206, check_hlds__typecheck__STATE_VARIABLE_Info_120);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205;
                    *check_hlds__typecheck__STATE_VARIABLE_Info_120 = check_hlds__typecheck__STATE_VARIABLE_Info_206_206;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__typecheck__Vars_303 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__Reason_30, (MR_Integer) 0)));
                    MR_Word check_hlds__typecheck__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__Reason_30, (MR_Integer) 1)));

                    check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_303, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_206_206, check_hlds__typecheck__STATE_VARIABLE_Info_120);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205;
                        *check_hlds__typecheck__STATE_VARIABLE_Info_120 = check_hlds__typecheck__STATE_VARIABLE_Info_206_206;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205;
                        *check_hlds__typecheck__STATE_VARIABLE_Info_120 = check_hlds__typecheck__STATE_VARIABLE_Info_206_206;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205;
                        *check_hlds__typecheck__STATE_VARIABLE_Info_120 = check_hlds__typecheck__STATE_VARIABLE_Info_206_206;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205;
                        *check_hlds__typecheck__STATE_VARIABLE_Info_120 = check_hlds__typecheck__STATE_VARIABLE_Info_206_206;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205;
                        *check_hlds__typecheck__STATE_VARIABLE_Info_120 = check_hlds__typecheck__STATE_VARIABLE_Info_206_206;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205;
                        *check_hlds__typecheck__STATE_VARIABLE_Info_120 = check_hlds__typecheck__STATE_VARIABLE_Info_206_206;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205;
                        *check_hlds__typecheck__STATE_VARIABLE_Info_120 = check_hlds__typecheck__STATE_VARIABLE_Info_206_206;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205;
                        *check_hlds__typecheck__STATE_VARIABLE_Info_120 = check_hlds__typecheck__STATE_VARIABLE_Info_206_206;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word check_hlds__typecheck__LCVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 1)));
                        MR_Word check_hlds__typecheck__LCSVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 2)));
                        MR_Word check_hlds__typecheck__Var_207;
                        MR_Word check_hlds__typecheck__Vars_301;
                        MR_Word check_hlds__typecheck__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 3)));

                        {
                          check_hlds__typecheck__Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_207, 0) = ((MR_Box) (check_hlds__typecheck__LCSVar_34));
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          check_hlds__typecheck__Vars_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Vars_301, 0) = ((MR_Box) (check_hlds__typecheck__LCVar_33));
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Vars_301, 1) = ((MR_Box) (check_hlds__typecheck__Var_207));
                        }
                        check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_301, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_205_205, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_206_206, check_hlds__typecheck__STATE_VARIABLE_Info_120);
                      }
                      break;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__typecheck__GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__Reason_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__SubGoal_250));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__typecheck__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__typecheck__Cond0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word check_hlds__typecheck__Then0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word check_hlds__typecheck__Else0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word check_hlds__typecheck__Cond_25;
              MR_Word check_hlds__typecheck__Then_26;
              MR_Word check_hlds__typecheck__Else_27;
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_219_219;
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_220_220;
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_224_224;
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_225_225;
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_229_229;
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_230_230;

              check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Cond0_22, &check_hlds__typecheck__Cond_25, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_219_219, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, &check_hlds__typecheck__STATE_VARIABLE_Info_220_220);
              check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Then0_23, &check_hlds__typecheck__Then_26, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_219_219, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_224_224, check_hlds__typecheck__STATE_VARIABLE_Info_220_220, &check_hlds__typecheck__STATE_VARIABLE_Info_225_225);
              check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Else0_24, &check_hlds__typecheck__Else_27, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_224_224, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_229_229, check_hlds__typecheck__STATE_VARIABLE_Info_225_225, &check_hlds__typecheck__STATE_VARIABLE_Info_230_230);
              check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_229_229, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_230_230, check_hlds__typecheck__STATE_VARIABLE_Info_120);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__typecheck__GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__Vars_21));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__Cond_25));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__typecheck__Then_26));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__typecheck__Else_27));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__typecheck__ShortHand0_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__typecheck__ShortHand_95;

              switch (MR_tag((MR_Word) check_hlds__typecheck__ShortHand0_93)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__typecheck__LHS0_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand0_93, (MR_Integer) 0)));
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_166_166;
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_167_167;
                    MR_Word check_hlds__typecheck__LHS_256;
                    MR_Word check_hlds__typecheck__RHS0_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand0_93, (MR_Integer) 1)));
                    MR_Word check_hlds__typecheck__RHS_258;

                    check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__LHS0_94, &check_hlds__typecheck__LHS_256, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_166_166, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, &check_hlds__typecheck__STATE_VARIABLE_Info_167_167);
                    check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__RHS0_257, &check_hlds__typecheck__RHS_258, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_166_166, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_167_167, check_hlds__typecheck__STATE_VARIABLE_Info_120);
                    {
                      check_hlds__typecheck__ShortHand_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand_95, 0) = ((MR_Box) (check_hlds__typecheck__LHS_256));
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand_95, 1) = ((MR_Box) (check_hlds__typecheck__RHS_258));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__typecheck__GoalType_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_93, (MR_Integer) 0)));
                    MR_Word check_hlds__typecheck__Outer_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_93, (MR_Integer) 1)));
                    MR_Word check_hlds__typecheck__Inner_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_93, (MR_Integer) 2)));
                    MR_Word check_hlds__typecheck__MaybeOutputVars_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_93, (MR_Integer) 3)));
                    MR_Word check_hlds__typecheck__MainGoal0_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_93, (MR_Integer) 4)));
                    MR_Word check_hlds__typecheck__OrElseGoals0_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_93, (MR_Integer) 5)));
                    MR_Word check_hlds__typecheck__OrElseInners_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_93, (MR_Integer) 6)));
                    MR_Word check_hlds__typecheck__MainGoal_105;
                    MR_Word check_hlds__typecheck__OrElseGoals_106;
                    MR_Word check_hlds__typecheck__OuterDI_108;
                    MR_Word check_hlds__typecheck__OuterUO_109;
                    MR_Word check_hlds__typecheck__InnerVars_110;
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143;
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_144_144;
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_145_145;
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_146_146;
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_147_147;
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_148_148;
                    MR_Word check_hlds__typecheck__Var_149;
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_150_150;
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_151_151;
                    MR_Word check_hlds__typecheck__Var_152;
                    MR_Word check_hlds__typecheck__Var_154;
                    MR_Word check_hlds__typecheck__Var_155;
                    MR_Word check_hlds__typecheck__Var_158;
                    MR_Box check_hlds__typecheck__conv4_STATE_VARIABLE_TypeAssignSet_118;
                    MR_Box check_hlds__typecheck__conv3_STATE_VARIABLE_Info_120;

                    if ((check_hlds__typecheck__MaybeOutputVars_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117;
                      check_hlds__typecheck__STATE_VARIABLE_Info_144_144 = check_hlds__typecheck__STATE_VARIABLE_Info_0_119;
                    }
                    else
                    {
                      MR_Word check_hlds__typecheck__OutputVars_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOutputVars_99, (MR_Integer) 0)));

                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), check_hlds__typecheck__Context_16, check_hlds__typecheck__OutputVars_103, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, &check_hlds__typecheck__STATE_VARIABLE_Info_144_144);
                    }
                    check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__MainGoal0_100, &check_hlds__typecheck__MainGoal_105, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_145_145, check_hlds__typecheck__STATE_VARIABLE_Info_144_144, &check_hlds__typecheck__STATE_VARIABLE_Info_146_146);
                    check_hlds__typecheck__typecheck_goal_list_7_p_0(check_hlds__typecheck__OrElseGoals0_101, &check_hlds__typecheck__OrElseGoals_106, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_145_145, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_147_147, check_hlds__typecheck__STATE_VARIABLE_Info_146_146, &check_hlds__typecheck__STATE_VARIABLE_Info_148_148);
                    check_hlds__typecheck__OuterDI_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Outer_97, (MR_Integer) 0)));
                    check_hlds__typecheck__OuterUO_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Outer_97, (MR_Integer) 1)));
                    {
                      check_hlds__typecheck__Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_152, 0) = ((MR_Box) (check_hlds__typecheck__OuterUO_109));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__typecheck__Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_149, 0) = ((MR_Box) (check_hlds__typecheck__OuterDI_108));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_149, 1) = ((MR_Box) (check_hlds__typecheck__Var_152));
                    }
                    check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Var_149, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_147_147, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_150_150, check_hlds__typecheck__STATE_VARIABLE_Info_148_148, &check_hlds__typecheck__STATE_VARIABLE_Info_151_151);
                    {
                      check_hlds__typecheck__Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_154, 0) = ((MR_Box) (check_hlds__typecheck__Inner_98));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_154, 1) = ((MR_Box) (check_hlds__typecheck__OrElseInners_102));
                    }
                    check_hlds__typecheck__InnerVars_110 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(check_hlds__typecheck__Var_154);
                    {
                      check_hlds__typecheck__Var_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_155, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_11[0]));
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_155, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_2));
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_155, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_155, 3) = ((MR_Box) (check_hlds__typecheck__Context_16));
                    }
                    mercury__list__foldl2_6_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &check_hlds__typecheck_scalar_common_1[3], (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__Var_155, check_hlds__typecheck__InnerVars_110, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_150_150)), &check_hlds__typecheck__conv4_STATE_VARIABLE_TypeAssignSet_118, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_151_151)), &check_hlds__typecheck__conv3_STATE_VARIABLE_Info_120);
                    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118 = ((MR_Word) check_hlds__typecheck__conv4_STATE_VARIABLE_TypeAssignSet_118);
                    *check_hlds__typecheck__STATE_VARIABLE_Info_120 = ((MR_Word) check_hlds__typecheck__conv3_STATE_VARIABLE_Info_120);
                    {
                      check_hlds__typecheck__Var_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_158, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[4]));
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_158, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_3));
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_158, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_158, 3) = ((MR_Box) (check_hlds__typecheck__GoalType_96));
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_158, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_4_p_0(check_hlds__typecheck__Var_158, (MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "GoalType != unknown_atomic_goal_type");
                    {
                      check_hlds__typecheck__ShortHand_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_95, 0) = ((MR_Box) (check_hlds__typecheck__GoalType_96));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_95, 1) = ((MR_Box) (check_hlds__typecheck__Outer_97));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_95, 2) = ((MR_Box) (check_hlds__typecheck__Inner_98));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_95, 3) = ((MR_Box) (check_hlds__typecheck__MaybeOutputVars_99));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_95, 4) = ((MR_Box) (check_hlds__typecheck__MainGoal_105));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_95, 5) = ((MR_Box) (check_hlds__typecheck__OrElseGoals_106));
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_95, 6) = ((MR_Box) (check_hlds__typecheck__OrElseInners_102));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__typecheck__MaybeIO_111 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_93, (MR_Integer) 0)));
                    MR_Word check_hlds__typecheck__ResultVar_112 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_93, (MR_Integer) 1)));
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_124_124;
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_125_125;
                    MR_Word check_hlds__typecheck__SubGoal0_261 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_93, (MR_Integer) 2)));
                    MR_Word check_hlds__typecheck__SubGoal_262;

                    check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__SubGoal0_261, &check_hlds__typecheck__SubGoal_262, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_117, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_124_124, check_hlds__typecheck__STATE_VARIABLE_Info_0_119, &check_hlds__typecheck__STATE_VARIABLE_Info_125_125);
                    if ((check_hlds__typecheck__MaybeIO_111 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_124_124;
                      *check_hlds__typecheck__STATE_VARIABLE_Info_120 = check_hlds__typecheck__STATE_VARIABLE_Info_125_125;
                    }
                    else
                    {
                      MR_Word check_hlds__typecheck__InitialIO_113;
                      MR_Word check_hlds__typecheck__FinalIO_114;
                      MR_Word check_hlds__typecheck__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeIO_111, (MR_Integer) 0)));
                      MR_Word check_hlds__typecheck__Var_127;
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_128_128;
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_129_129;
                      MR_Word check_hlds__typecheck__Var_130;
                      MR_Word check_hlds__typecheck__Var_134;
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_135_135;
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_136_136;
                      MR_Word check_hlds__typecheck__Var_137;

                      check_hlds__typecheck__InitialIO_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_126, (MR_Integer) 0)));
                      check_hlds__typecheck__FinalIO_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_126, (MR_Integer) 1)));
                      {
                        check_hlds__typecheck__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_130, 0) = ((MR_Box) (check_hlds__typecheck__FinalIO_114));
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__typecheck__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_127, 0) = ((MR_Box) (check_hlds__typecheck__InitialIO_113));
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_127, 1) = ((MR_Box) (check_hlds__typecheck__Var_130));
                      }
                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Var_127, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_124_124, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_128_128, check_hlds__typecheck__STATE_VARIABLE_Info_125_125, &check_hlds__typecheck__STATE_VARIABLE_Info_129_129);
                      check_hlds__typecheck__Var_134 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                      check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[17]), check_hlds__typecheck__Context_16, check_hlds__typecheck__InitialIO_113, check_hlds__typecheck__Var_134, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_128_128, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_135_135, check_hlds__typecheck__STATE_VARIABLE_Info_129_129, &check_hlds__typecheck__STATE_VARIABLE_Info_136_136);
                      check_hlds__typecheck__Var_137 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                      check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[18]), check_hlds__typecheck__Context_16, check_hlds__typecheck__FinalIO_114, check_hlds__typecheck__Var_137, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_135_135, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_118, check_hlds__typecheck__STATE_VARIABLE_Info_136_136, check_hlds__typecheck__STATE_VARIABLE_Info_120);
                    }
                    {
                      check_hlds__typecheck__ShortHand_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_95, 0) = ((MR_Box) (check_hlds__typecheck__MaybeIO_111));
                      MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_95, 1) = ((MR_Box) (check_hlds__typecheck__ResultVar_112));
                      MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_95, 2) = ((MR_Box) (check_hlds__typecheck__SubGoal_262));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__typecheck__GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__ShortHand_95));
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
  MR_Word check_hlds__typecheck__Goal0_8,
  MR_Word * check_hlds__typecheck__Goal_9,
  MR_Word check_hlds__typecheck__EnclosingContext_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_30,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_31)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_8, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_8, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__Context0_15;
    MR_Word check_hlds__typecheck__Context_16;
    MR_Word check_hlds__typecheck__GoalInfo_17;
    MR_Integer check_hlds__typecheck__NumTypeAssignSets_18;
    MR_Integer check_hlds__typecheck__WarnLimit_19;
    MR_Word check_hlds__typecheck__GoalExpr_24;
    MR_Word check_hlds__typecheck__Var_41;

    check_hlds__typecheck__Context0_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__typecheck__GoalInfo0_14);
    check_hlds__typecheck__Var_41 = mercury__term__context_init_0_f_0();
    check_hlds__typecheck__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck__Context0_15, check_hlds__typecheck__Var_41);
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__Context_16 = check_hlds__typecheck__EnclosingContext_10;
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalInfo0_14, &check_hlds__typecheck__GoalInfo_17);
    }
    else
    {
      check_hlds__typecheck__Context_16 = check_hlds__typecheck__Context0_15;
      check_hlds__typecheck__GoalInfo_17 = check_hlds__typecheck__GoalInfo0_14;
    }
    mercury__list__length_2_p_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, &check_hlds__typecheck__NumTypeAssignSets_18);
    check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__WarnLimit_19);
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumTypeAssignSets_18 > check_hlds__typecheck__WarnLimit_19);
    if (check_hlds__typecheck__succeeded)
    {
      MR_Integer check_hlds__typecheck__ErrorLimit_20;
      MR_Word check_hlds__typecheck__ClauseContext_21;
      MR_Word check_hlds__typecheck__OverloadedSymbolMap_22;

      check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__ErrorLimit_20);
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__ClauseContext_21);
      check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__OverloadedSymbolMap_22);
      check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumTypeAssignSets_18 > check_hlds__typecheck__ErrorLimit_20);
      if (check_hlds__typecheck__succeeded)
      {
        MR_Word check_hlds__typecheck__ErrorSpec_23;
        MR_Word check_hlds__typecheck__Var_32;

        check_hlds__typecheck__ErrorSpec_23 = check_hlds__typecheck_errors__report_error_too_much_overloading_3_f_0(check_hlds__typecheck__ClauseContext_21, check_hlds__typecheck__Context_16, check_hlds__typecheck__OverloadedSymbolMap_22);
        {
          check_hlds__typecheck__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_32, 0) = ((MR_Box) (check_hlds__typecheck__ErrorSpec_23));
        }
        check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__Var_32, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, check_hlds__typecheck__STATE_VARIABLE_Info_31);
        check_hlds__typecheck__GoalExpr_24 = check_hlds__typecheck__GoalExpr0_13;
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28;
      }
      else
      {
        MR_Word check_hlds__typecheck__MaybePrevSpec_25;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_35_35;

        check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__MaybePrevSpec_25);
        if ((check_hlds__typecheck__MaybePrevSpec_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word check_hlds__typecheck__WarnSpec_26;
          MR_Word check_hlds__typecheck__Var_34;

          check_hlds__typecheck__WarnSpec_26 = check_hlds__typecheck_errors__report_warning_too_much_overloading_3_f_0(check_hlds__typecheck__ClauseContext_21, check_hlds__typecheck__Context_16, check_hlds__typecheck__OverloadedSymbolMap_22);
          {
            check_hlds__typecheck__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_34, 0) = ((MR_Box) (check_hlds__typecheck__WarnSpec_26));
          }
          check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__Var_34, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__STATE_VARIABLE_Info_35_35);
        }
        else
          check_hlds__typecheck__STATE_VARIABLE_Info_35_35 = check_hlds__typecheck__STATE_VARIABLE_Info_0_30;
        check_hlds__typecheck__typecheck_goal_expr_7_p_0(check_hlds__typecheck__GoalExpr0_13, &check_hlds__typecheck__GoalExpr_24, check_hlds__typecheck__GoalInfo_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29, check_hlds__typecheck__STATE_VARIABLE_Info_35_35, check_hlds__typecheck__STATE_VARIABLE_Info_31);
      }
    }
    else
      check_hlds__typecheck__typecheck_goal_expr_7_p_0(check_hlds__typecheck__GoalExpr0_13, &check_hlds__typecheck__GoalExpr_24, check_hlds__typecheck__GoalInfo_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, check_hlds__typecheck__STATE_VARIABLE_Info_31);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__typecheck__Goal_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_17));
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__Purity_2,
  MR_Word check_hlds__typecheck__PredOrFunc_3,
  MR_Word check_hlds__typecheck__Var_5,
  MR_Word check_hlds__typecheck__ArgVars_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
      else
      {
        MR_Word check_hlds__typecheck__TypeAssign0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__TypeAssignSet0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__ArgVarTypes_25;
        MR_Word check_hlds__typecheck__TypeAssign1_26;
        MR_Word check_hlds__typecheck__LambdaType_27;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30;
        MR_Word check_hlds__typecheck__VarTypes0_38;
        MR_Word check_hlds__typecheck__MaybeOldVarType_39;
        MR_Word check_hlds__typecheck__VarTypes_40;

        check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(check_hlds__typecheck__ArgVars_6, &check_hlds__typecheck__ArgVarTypes_25, check_hlds__typecheck__TypeAssign0_17, &check_hlds__typecheck__TypeAssign1_26);
        parse_tree__prog_type__construct_higher_order_type_5_p_0(check_hlds__typecheck__Purity_2, check_hlds__typecheck__PredOrFunc_3, check_hlds__typecheck__ArgVarTypes_25, &check_hlds__typecheck__LambdaType_27);
        check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__VarTypes0_38);
        hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_5, check_hlds__typecheck__LambdaType_27, &check_hlds__typecheck__MaybeOldVarType_39, check_hlds__typecheck__VarTypes0_38, &check_hlds__typecheck__VarTypes_40);
        if ((check_hlds__typecheck__MaybeOldVarType_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word check_hlds__typecheck__TypeAssign_43;

          check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_40, check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeAssign_43);
          {
            check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_43));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7));
          }
        }
        else
        {
          MR_Word check_hlds__typecheck__OldVarType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_39, (MR_Integer) 0)));
          MR_Word check_hlds__typecheck__TypeAssign1_42;
          MR_Word check_hlds__typecheck__HeadTypeParams_51;
          MR_Word check_hlds__typecheck__TypeBindings0_52;
          MR_Word check_hlds__typecheck__TypeBindings_53;

          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__HeadTypeParams_51);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeBindings0_52);
          check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_41, check_hlds__typecheck__LambdaType_27, check_hlds__typecheck__HeadTypeParams_51, check_hlds__typecheck__TypeBindings0_52, &check_hlds__typecheck__TypeBindings_53);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_53, check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeAssign1_42);
            check_hlds__typecheck__succeeded = MR_TRUE;
          }
          if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_42));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7));
            }
          else
            check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
        }
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__1_1 = check_hlds__typecheck__TypeAssignSet0_18;
          MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30;

          check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__next_value_of_HeadVar__1_1;
          check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_7;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
    }
    else
    {
      MR_Word check_hlds__typecheck__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__Type_10;
      MR_Word check_hlds__typecheck__VarTypes0_13;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23;
      MR_Word check_hlds__typecheck__VarType_14;
      MR_Word * check_hlds__typecheck__AddrTypes_26;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__VarTypes0_13);
      check_hlds__typecheck__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_13, check_hlds__typecheck__Var_8, &check_hlds__typecheck__VarType_14);
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__Type_10 = check_hlds__typecheck__VarType_14;
        check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
      }
      else
      {
        MR_Word check_hlds__typecheck__TypeVarSet0_15;
        MR_Word check_hlds__typecheck__TypeVar_16;
        MR_Word check_hlds__typecheck__TypeVarSet_17;
        MR_Word check_hlds__typecheck__VarTypes1_18;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21;

        check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__TypeVarSet0_15);
        mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_16, check_hlds__typecheck__TypeVarSet0_15, &check_hlds__typecheck__TypeVarSet_17);
        check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21);
        {
          check_hlds__typecheck__Type_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_16));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__Var_8, check_hlds__typecheck__Type_10, check_hlds__typecheck__VarTypes0_13, &check_hlds__typecheck__VarTypes1_18);
        check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes1_18, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__typecheck__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Type_10));
        MR_hl_field(MR_mktag(1), base, 1) = NULL;
      }
      check_hlds__typecheck__AddrTypes_26 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1));
      check_hlds__typecheck__LCMCpr_type_assign_get_types_of_vars_1_4_p_0(check_hlds__typecheck__Vars_9, check_hlds__typecheck__AddrTypes_26, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_type_assign_get_types_of_vars_1_4_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_27,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__typecheck__AddrOfHeadVar__2_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
      }
      else
      {
        MR_Word check_hlds__typecheck__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__Type_10;
        MR_Word check_hlds__typecheck__VarTypes0_13;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23;
        MR_Word check_hlds__typecheck__VarType_14;
        MR_Word * check_hlds__typecheck__AddrTypes_26;
        MR_Word check_hlds__typecheck__HeadVar__2_28;

        check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__VarTypes0_13);
        check_hlds__typecheck__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_13, check_hlds__typecheck__Var_8, &check_hlds__typecheck__VarType_14);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__Type_10 = check_hlds__typecheck__VarType_14;
          check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
        }
        else
        {
          MR_Word check_hlds__typecheck__TypeVarSet0_15;
          MR_Word check_hlds__typecheck__TypeVar_16;
          MR_Word check_hlds__typecheck__TypeVarSet_17;
          MR_Word check_hlds__typecheck__VarTypes1_18;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21;

          check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__TypeVarSet0_15);
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_16, check_hlds__typecheck__TypeVarSet0_15, &check_hlds__typecheck__TypeVarSet_17);
          check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21);
          {
            check_hlds__typecheck__Type_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_16));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__Var_8, check_hlds__typecheck__Type_10, check_hlds__typecheck__VarTypes0_13, &check_hlds__typecheck__VarTypes1_18);
          check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes1_18, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23);
        }
        {
          check_hlds__typecheck__HeadVar__2_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_28, 0) = ((MR_Box) (check_hlds__typecheck__Type_10));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_28, 1) = NULL;
        }
        check_hlds__typecheck__AddrTypes_26 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_28, (MR_Integer) 1));
        *check_hlds__typecheck__AddrOfHeadVar__2_27 = check_hlds__typecheck__HeadVar__2_28;
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__1_1 = check_hlds__typecheck__Vars_9;
          MR_Word * check_hlds__typecheck__next_value_of_AddrOfHeadVar__2_27 = check_hlds__typecheck__AddrTypes_26;
          MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssign_0_3 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23;

          check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__next_value_of_HeadVar__1_1;
          check_hlds__typecheck__AddrOfHeadVar__2_27 = check_hlds__typecheck__next_value_of_AddrOfHeadVar__2_27;
          check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssign_0_3;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__type_assigns_unify_var_var_5_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__X_2,
  MR_Word check_hlds__typecheck__Y_3,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
      else
      {
        MR_Word check_hlds__typecheck__TypeAssign_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__TypeAssigns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;
        MR_Word check_hlds__typecheck__VarTypes0_26;
        MR_Word check_hlds__typecheck__TypeX_27;

        check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_11, &check_hlds__typecheck__VarTypes0_26);
        check_hlds__typecheck__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_26, check_hlds__typecheck__X_2, &check_hlds__typecheck__TypeX_27);
        if (check_hlds__typecheck__succeeded)
        {
          MR_Word check_hlds__typecheck__MaybeTypeY_28;
          MR_Word check_hlds__typecheck__VarTypes_29;

          hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Y_3, check_hlds__typecheck__TypeX_27, &check_hlds__typecheck__MaybeTypeY_28, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_29);
          if ((check_hlds__typecheck__MaybeTypeY_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__typecheck__TypeAssign_32;

            check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_29, check_hlds__typecheck__TypeAssign_11, &check_hlds__typecheck__TypeAssign_32);
            {
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_32));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
            }
          }
          else
          {
            MR_Word check_hlds__typecheck__TypeY_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_28, (MR_Integer) 0)));
            MR_Word check_hlds__typecheck__TypeAssign3_31;
            MR_Word check_hlds__typecheck__HeadTypeParams_58;
            MR_Word check_hlds__typecheck__TypeBindings0_59;
            MR_Word check_hlds__typecheck__TypeBindings_60;

            check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(check_hlds__typecheck__TypeAssign_11, &check_hlds__typecheck__HeadTypeParams_58);
            check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_11, &check_hlds__typecheck__TypeBindings0_59);
            check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__TypeX_27, check_hlds__typecheck__TypeY_30, check_hlds__typecheck__HeadTypeParams_58, check_hlds__typecheck__TypeBindings0_59, &check_hlds__typecheck__TypeBindings_60);
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_60, check_hlds__typecheck__TypeAssign_11, &check_hlds__typecheck__TypeAssign3_31);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            if (check_hlds__typecheck__succeeded)
              {
                check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign3_31));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
              }
            else
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
          }
        }
        else
        {
          MR_Word check_hlds__typecheck__TypeY_50;

          check_hlds__typecheck__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_26, check_hlds__typecheck__Y_3, &check_hlds__typecheck__TypeY_50);
          if (check_hlds__typecheck__succeeded)
          {
            MR_Word check_hlds__typecheck__VarTypes_45;
            MR_Word check_hlds__typecheck__TypeAssign_46;

            hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__X_2, check_hlds__typecheck__TypeY_50, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_45);
            check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_45, check_hlds__typecheck__TypeAssign_11, &check_hlds__typecheck__TypeAssign_46);
            {
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_46));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
            }
          }
          else
          {
            MR_Word check_hlds__typecheck__TypeVarSet0_33;
            MR_Word check_hlds__typecheck__TypeVar_34;
            MR_Word check_hlds__typecheck__TypeVarSet_35;
            MR_Word check_hlds__typecheck__TypeAssign1_36;
            MR_Word check_hlds__typecheck__Type_37;
            MR_Word check_hlds__typecheck__VarTypes1_38;
            MR_Word check_hlds__typecheck__VarTypes_47;
            MR_Word check_hlds__typecheck__TypeAssign_48;

            check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign_11, &check_hlds__typecheck__TypeVarSet0_33);
            mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_34, check_hlds__typecheck__TypeVarSet0_33, &check_hlds__typecheck__TypeVarSet_35);
            check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_35, check_hlds__typecheck__TypeAssign_11, &check_hlds__typecheck__TypeAssign1_36);
            {
              check_hlds__typecheck__Type_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_37, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_34));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__X_2, check_hlds__typecheck__Type_37, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes1_38);
            check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], ((MR_Box) (check_hlds__typecheck__X_2)), ((MR_Box) (check_hlds__typecheck__Y_3)));
            if (check_hlds__typecheck__succeeded)
              check_hlds__typecheck__VarTypes_47 = check_hlds__typecheck__VarTypes1_38;
            else
              hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__Y_3, check_hlds__typecheck__Type_37, check_hlds__typecheck__VarTypes1_38, &check_hlds__typecheck__VarTypes_47);
            check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_47, check_hlds__typecheck__TypeAssign1_36, &check_hlds__typecheck__TypeAssign_48);
            {
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_48));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
            }
          }
        }
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__1_1 = check_hlds__typecheck__TypeAssigns_12;
          MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;

          check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__next_value_of_HeadVar__1_1;
          check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
        }
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1)
{
  {
    MR_Box check_hlds__typecheck__wrapper_arg_2;
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv2_HeadVar__2_2;

    check_hlds__typecheck__conv2_HeadVar__2_2 = check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv2_HeadVar__2_2));
    return check_hlds__typecheck__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
{
  {
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16;

    check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16);
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16));
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(
  MR_Word check_hlds__typecheck__UnifyContext_11,
  MR_Word check_hlds__typecheck__Context_12,
  MR_Word check_hlds__typecheck__Var_13,
  MR_Word check_hlds__typecheck__ConsId_14,
  MR_Word check_hlds__typecheck__ArgVars_15,
  MR_Word check_hlds__typecheck__GoalId_16,
  MR_Word check_hlds__typecheck__TypeAssignSet0_17,
  MR_Word * check_hlds__typecheck__TypeAssignSet_18,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_54,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_55)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__ClauseContext_20;
    MR_Word check_hlds__typecheck__ConsType_21;
    MR_String check_hlds__typecheck__BuiltinTypeName_22;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_54, &check_hlds__typecheck__ClauseContext_20);
    check_hlds__typecheck__succeeded = check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(check_hlds__typecheck__ConsId_14, &check_hlds__typecheck__ConsType_21, &check_hlds__typecheck__BuiltinTypeName_22);
    if (check_hlds__typecheck__succeeded)
    {
      MR_Word check_hlds__typecheck__TypeAssignSet1_23;
      MR_Word check_hlds__typecheck__Var_56;
      MR_Box check_hlds__typecheck__conv1_TypeAssignSet1_23;

      {
        check_hlds__typecheck__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_56, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_56, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_56, 3) = ((MR_Box) (check_hlds__typecheck__ConsType_21));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_56, 4) = ((MR_Box) (check_hlds__typecheck__Var_13));
      }
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, (MR_Word) &check_hlds__typecheck_scalar_common_1[3], check_hlds__typecheck__Var_56, check_hlds__typecheck__TypeAssignSet0_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__typecheck__conv1_TypeAssignSet1_23);
      check_hlds__typecheck__TypeAssignSet1_23 = ((MR_Word) check_hlds__typecheck__conv1_TypeAssignSet1_23);
      if ((check_hlds__typecheck__TypeAssignSet1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
        if ((check_hlds__typecheck__TypeAssignSet0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_0_54;
        else
        {
          MR_Word check_hlds__typecheck__ConsTypeVarSet_28;
          MR_Word check_hlds__typecheck__EmptyConstraints_29;
          MR_Word check_hlds__typecheck__ConsDefn_30;
          MR_Word check_hlds__typecheck__ConsIdSpec_31;
          MR_Word check_hlds__typecheck__Var_60;
          MR_Word check_hlds__typecheck__Var_61;

          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__ConsTypeVarSet_28);
          hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_29);
          {
            check_hlds__typecheck__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_60, 0) = ((MR_Box) (check_hlds__typecheck__BuiltinTypeName_22));
          }
          {
            check_hlds__typecheck__ConsDefn_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_28));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_21));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_29));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 5) = ((MR_Box) (check_hlds__typecheck__Var_60));
          }
          {
            check_hlds__typecheck__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_61, 0) = ((MR_Box) (check_hlds__typecheck__ConsDefn_30));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          check_hlds__typecheck__ConsIdSpec_31 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__Var_61, check_hlds__typecheck__ConsId_14, (MR_Integer) 0, check_hlds__typecheck__TypeAssignSet0_17);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_31, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, check_hlds__typecheck__STATE_VARIABLE_Info_55);
        }
      }
      else
      {
        *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet1_23;
        *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_0_54;
      }
    }
    else
    {
      MR_Integer check_hlds__typecheck__Arity_32;
      MR_Word check_hlds__typecheck__ConsDefns_33;
      MR_Word check_hlds__typecheck__ConsErrors_34;

      mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__ArgVars_15, &check_hlds__typecheck__Arity_32);
      check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_54, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32, check_hlds__typecheck__GoalId_16, &check_hlds__typecheck__ConsDefns_33, &check_hlds__typecheck__ConsErrors_34);
      if ((check_hlds__typecheck__ConsDefns_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__typecheck__GoalContext_35;
        MR_Word check_hlds__typecheck__Spec_36;

        *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
        {
          check_hlds__typecheck__GoalContext_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalContext_35, 0) = ((MR_Box) (check_hlds__typecheck__UnifyContext_11));
        }
        check_hlds__typecheck__Spec_36 = check_hlds__typecheck_errors__report_error_undef_cons_6_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__GoalContext_35, check_hlds__typecheck__Context_12, check_hlds__typecheck__ConsErrors_34, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_36, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, check_hlds__typecheck__STATE_VARIABLE_Info_55);
      }
      else
      {
        MR_Word check_hlds__typecheck__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_33, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_33, (MR_Integer) 0)));

        if ((check_hlds__typecheck__Var_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word check_hlds__typecheck__ConsTypeAssignSet_43;
          MR_Word check_hlds__typecheck__ArgsTypeAssignSet_46;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_74_74;
          MR_Word check_hlds__typecheck__TypeAssignSet1_80;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_15_170;
          MR_Word check_hlds__typecheck__Var_44;
          MR_Word check_hlds__typecheck__Var_45;
          MR_Word check_hlds__typecheck__Var_47;
          MR_Word check_hlds__typecheck__Var_48;

          check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(check_hlds__typecheck__Var_159, check_hlds__typecheck__TypeAssignSet0_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_15_170);
          check_hlds__typecheck__get_cons_type_assigns_for_cons_defns_4_p_0(check_hlds__typecheck__Var_158, check_hlds__typecheck__TypeAssignSet0_17, check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_15_170, &check_hlds__typecheck__ConsTypeAssignSet_43);
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__ConsTypeAssignSet_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_17)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 0)));
              check_hlds__typecheck__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 1)));
            }
          }
          if (check_hlds__typecheck__succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
              return;
            }
          }
          else
          {
          }
          check_hlds__typecheck__typecheck_var_functor_types_4_p_0(check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsTypeAssignSet_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_46);
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgsTypeAssignSet_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ConsTypeAssignSet_43)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_43, (MR_Integer) 0)));
              check_hlds__typecheck__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_43, (MR_Integer) 1)));
            }
          }
          if (check_hlds__typecheck__succeeded)
          {
            MR_Word check_hlds__typecheck__ConsIdSpec_78;

            check_hlds__typecheck__ConsIdSpec_78 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32, check_hlds__typecheck__TypeAssignSet0_17);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_78, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, &check_hlds__typecheck__STATE_VARIABLE_Info_74_74);
          }
          else
            check_hlds__typecheck__STATE_VARIABLE_Info_74_74 = check_hlds__typecheck__STATE_VARIABLE_Info_0_54;
          check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(check_hlds__typecheck__ArgVars_15, check_hlds__typecheck__ArgsTypeAssignSet_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_80);
          if ((check_hlds__typecheck__TypeAssignSet1_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
            if ((check_hlds__typecheck__ArgsTypeAssignSet_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_74;
            else
            {
              MR_Word check_hlds__typecheck__ArgSpec_53;

              check_hlds__typecheck__ArgSpec_53 = check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__ArgVars_15, check_hlds__typecheck__ArgsTypeAssignSet_46);
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ArgSpec_53, check_hlds__typecheck__STATE_VARIABLE_Info_74_74, check_hlds__typecheck__STATE_VARIABLE_Info_55);
            }
          }
          else
          {
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet1_80;
            *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_74;
          }
        }
        else
        {
          MR_Word check_hlds__typecheck__Sources_41;
          MR_Word check_hlds__typecheck__Symbol_42;
          MR_Word check_hlds__typecheck__ConsTypeAssignSet_137;
          MR_Word check_hlds__typecheck__ArgsTypeAssignSet_140;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_67_148;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_74_154;
          MR_Word check_hlds__typecheck__TypeAssignSet1_157;
          MR_Word check_hlds__typecheck__ConsDefn_176;
          MR_Word check_hlds__typecheck__ConsDefns_177;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_15_182;
          MR_Word check_hlds__typecheck__Var_97;
          MR_Word check_hlds__typecheck__Var_98;
          MR_Word check_hlds__typecheck__Var_109;
          MR_Word check_hlds__typecheck__Var_110;

          check_hlds__typecheck__Sources_41 = mercury__list__map_2_f_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0, (MR_Word) &check_hlds__typecheck_scalar_common_6[3], check_hlds__typecheck__ConsDefns_33);
          {
            check_hlds__typecheck__Symbol_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Symbol_42, 0) = ((MR_Box) (check_hlds__typecheck__ConsId_14));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Symbol_42, 1) = ((MR_Box) (check_hlds__typecheck__Sources_41));
          }
          check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(check_hlds__typecheck__Symbol_42, check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, &check_hlds__typecheck__STATE_VARIABLE_Info_67_148);
          check_hlds__typecheck__ConsDefn_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_33, (MR_Integer) 0)));
          check_hlds__typecheck__ConsDefns_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_33, (MR_Integer) 1)));
          check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(check_hlds__typecheck__ConsDefn_176, check_hlds__typecheck__TypeAssignSet0_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_15_182);
          check_hlds__typecheck__get_cons_type_assigns_for_cons_defns_4_p_0(check_hlds__typecheck__ConsDefns_177, check_hlds__typecheck__TypeAssignSet0_17, check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_15_182, &check_hlds__typecheck__ConsTypeAssignSet_137);
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__ConsTypeAssignSet_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_17)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 0)));
              check_hlds__typecheck__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 1)));
            }
          }
          if (check_hlds__typecheck__succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
              return;
            }
          }
          else
          {
          }
          check_hlds__typecheck__typecheck_var_functor_types_4_p_0(check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsTypeAssignSet_137, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_140);
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgsTypeAssignSet_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ConsTypeAssignSet_137)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_137, (MR_Integer) 0)));
              check_hlds__typecheck__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_137, (MR_Integer) 1)));
            }
          }
          if (check_hlds__typecheck__succeeded)
          {
            MR_Word check_hlds__typecheck__ConsIdSpec_113;

            check_hlds__typecheck__ConsIdSpec_113 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32, check_hlds__typecheck__TypeAssignSet0_17);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_113, check_hlds__typecheck__STATE_VARIABLE_Info_67_148, &check_hlds__typecheck__STATE_VARIABLE_Info_74_154);
          }
          else
            check_hlds__typecheck__STATE_VARIABLE_Info_74_154 = check_hlds__typecheck__STATE_VARIABLE_Info_67_148;
          check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(check_hlds__typecheck__ArgVars_15, check_hlds__typecheck__ArgsTypeAssignSet_140, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_157);
          if ((check_hlds__typecheck__TypeAssignSet1_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
            if ((check_hlds__typecheck__ArgsTypeAssignSet_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_154;
            else
            {
              MR_Word check_hlds__typecheck__ArgSpec_125;

              check_hlds__typecheck__ArgSpec_125 = check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__ArgVars_15, check_hlds__typecheck__ArgsTypeAssignSet_140);
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ArgSpec_125, check_hlds__typecheck__STATE_VARIABLE_Info_74_154, check_hlds__typecheck__STATE_VARIABLE_Info_55);
            }
          }
          else
          {
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet1_157;
            *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_154;
          }
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word check_hlds__typecheck__ArgVars_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
      else
      {
        MR_Word check_hlds__typecheck__ConsTypeAssign_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__ConsTypeAssigns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__TypeAssign_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_13, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__ArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_13, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;
        MR_Word check_hlds__typecheck__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_13, (MR_Integer) 2)));

        if ((check_hlds__typecheck__ArgVars_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__typecheck__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_16));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
            }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
              return;
            }
          }
        else
        if ((check_hlds__typecheck__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
        }
        else
        {
          MR_Word check_hlds__typecheck__Type_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_17, (MR_Integer) 0)));
          MR_Word check_hlds__typecheck__Types_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_17, (MR_Integer) 1)));
          MR_Word check_hlds__typecheck__TypeAssignSet1_52;
          MR_Word check_hlds__typecheck__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word check_hlds__typecheck__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVars_2, (MR_Integer) 1)));
          MR_Word check_hlds__typecheck__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVars_2, (MR_Integer) 0)));
          MR_Word check_hlds__typecheck__VarTypes0_62;
          MR_Word check_hlds__typecheck__MaybeOldVarType_63;
          MR_Word check_hlds__typecheck__VarTypes_64;

          check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__VarTypes0_62);
          hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_55, check_hlds__typecheck__Type_48, &check_hlds__typecheck__MaybeOldVarType_63, check_hlds__typecheck__VarTypes0_62, &check_hlds__typecheck__VarTypes_64);
          if ((check_hlds__typecheck__MaybeOldVarType_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__typecheck__TypeAssign_67;

            check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_64, check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeAssign_67);
            {
              check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_67));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__Var_53));
            }
          }
          else
          {
            MR_Word check_hlds__typecheck__OldVarType_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_63, (MR_Integer) 0)));
            MR_Word check_hlds__typecheck__TypeAssign1_66;
            MR_Word check_hlds__typecheck__HeadTypeParams_75;
            MR_Word check_hlds__typecheck__TypeBindings0_76;
            MR_Word check_hlds__typecheck__TypeBindings_77;

            check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__HeadTypeParams_75);
            check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeBindings0_76);
            check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_65, check_hlds__typecheck__Type_48, check_hlds__typecheck__HeadTypeParams_75, check_hlds__typecheck__TypeBindings0_76, &check_hlds__typecheck__TypeBindings_77);
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_77, check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeAssign1_66);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            if (check_hlds__typecheck__succeeded)
              {
                check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_66));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__Var_53));
              }
            else
              check_hlds__typecheck__TypeAssignSet1_52 = check_hlds__typecheck__Var_53;
          }
          check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(check_hlds__typecheck__TypeAssignSet1_52, check_hlds__typecheck__Var_54, check_hlds__typecheck__Types_49, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21);
        }
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__3_3 = check_hlds__typecheck__ConsTypeAssigns_14;
          MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

          check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__next_value_of_HeadVar__3_3;
          check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__ArgVars_3,
  MR_Word check_hlds__typecheck__Types_4,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5;
      else
      {
        MR_Word check_hlds__typecheck__TypeAssign_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__TypeAssigns_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

        if ((check_hlds__typecheck__ArgVars_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__typecheck__Types_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_14));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5));
            }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
              return;
            }
          }
        else
        if ((check_hlds__typecheck__Types_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
        }
        else
        {
          MR_Word check_hlds__typecheck__Type_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Types_4, (MR_Integer) 0)));
          MR_Word check_hlds__typecheck__Types_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Types_4, (MR_Integer) 1)));
          MR_Word check_hlds__typecheck__TypeAssignSet1_52;
          MR_Word check_hlds__typecheck__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word check_hlds__typecheck__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVars_3, (MR_Integer) 1)));
          MR_Word check_hlds__typecheck__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVars_3, (MR_Integer) 0)));
          MR_Word check_hlds__typecheck__VarTypes0_62;
          MR_Word check_hlds__typecheck__MaybeOldVarType_63;
          MR_Word check_hlds__typecheck__VarTypes_64;

          check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_14, &check_hlds__typecheck__VarTypes0_62);
          hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_55, check_hlds__typecheck__Type_48, &check_hlds__typecheck__MaybeOldVarType_63, check_hlds__typecheck__VarTypes0_62, &check_hlds__typecheck__VarTypes_64);
          if ((check_hlds__typecheck__MaybeOldVarType_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__typecheck__TypeAssign_67;

            check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_64, check_hlds__typecheck__TypeAssign_14, &check_hlds__typecheck__TypeAssign_67);
            {
              check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_67));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__Var_53));
            }
          }
          else
          {
            MR_Word check_hlds__typecheck__OldVarType_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_63, (MR_Integer) 0)));
            MR_Word check_hlds__typecheck__TypeAssign1_66;
            MR_Word check_hlds__typecheck__HeadTypeParams_75;
            MR_Word check_hlds__typecheck__TypeBindings0_76;
            MR_Word check_hlds__typecheck__TypeBindings_77;

            check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(check_hlds__typecheck__TypeAssign_14, &check_hlds__typecheck__HeadTypeParams_75);
            check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_14, &check_hlds__typecheck__TypeBindings0_76);
            check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_65, check_hlds__typecheck__Type_48, check_hlds__typecheck__HeadTypeParams_75, check_hlds__typecheck__TypeBindings0_76, &check_hlds__typecheck__TypeBindings_77);
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_77, check_hlds__typecheck__TypeAssign_14, &check_hlds__typecheck__TypeAssign1_66);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            if (check_hlds__typecheck__succeeded)
              {
                check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_66));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__Var_53));
              }
            else
              check_hlds__typecheck__TypeAssignSet1_52 = check_hlds__typecheck__Var_53;
          }
          check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(check_hlds__typecheck__TypeAssignSet1_52, check_hlds__typecheck__Var_54, check_hlds__typecheck__Types_49, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21);
        }
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__2_2 = check_hlds__typecheck__TypeAssigns_15;
          MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

          check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__next_value_of_HeadVar__2_2;
          check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;
        }
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv1_ConsTypeInfo_16;

    check_hlds__typecheck__succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 8))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv1_ConsTypeInfo_16);
    if (check_hlds__typecheck__succeeded)
    {
      *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv1_ConsTypeInfo_16));
      check_hlds__typecheck__succeeded = MR_TRUE;
    }
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
  MR_Word check_hlds__typecheck__Info_7,
  MR_Word check_hlds__typecheck__Functor_8,
  MR_Integer check_hlds__typecheck__Arity_9,
  MR_Word check_hlds__typecheck__GoalId_10,
  MR_Word * check_hlds__typecheck__ConsInfos_11,
  MR_Word * check_hlds__typecheck__ConsErrors_12)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__IsFieldAccessFunc_13;
    MR_Word check_hlds__typecheck__PredStatus_14;
    MR_Word check_hlds__typecheck__Var_16;

    check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__IsFieldAccessFunc_13);
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__IsFieldAccessFunc_13)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__PredStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__IsFieldAccessFunc_13, (MR_Integer) 0)));
      check_hlds__typecheck__Var_16 = (MR_Word) check_hlds__typecheck__PredStatus_14;
      check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
    }
    if (check_hlds__typecheck__succeeded)
    {
      MR_Word check_hlds__typecheck__FieldAccessConsInfos_15;
      MR_Word check_hlds__typecheck__TypeCtorInfo_19_30;
      MR_Word check_hlds__typecheck__TypeInfo_20_31;
      MR_Word check_hlds__typecheck__TypeCtorInfo_23_34;
      MR_Word check_hlds__typecheck__TypeCtorInfo_24_35;
      MR_Word check_hlds__typecheck__Name_22;
      MR_Word check_hlds__typecheck__ModuleInfo_24;
      MR_Word check_hlds__typecheck__AccessType_25;
      MR_Word check_hlds__typecheck__FieldName_26;
      MR_Word check_hlds__typecheck__CtorFieldTable_27;
      MR_Word check_hlds__typecheck__FieldDefns_28;
      MR_Word check_hlds__typecheck__Var_29;
      MR_Integer check_hlds__typecheck__Var_36;
      MR_Integer check_hlds__typecheck__Var_37;
      MR_Word check_hlds__typecheck__Var_23;
      MR_Box check_hlds__typecheck__conv0_FieldDefns_28;

      check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
        check_hlds__typecheck__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
        check_hlds__typecheck__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__Var_36);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__ModuleInfo_24);
          check_hlds__typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__typecheck__ModuleInfo_24, check_hlds__typecheck__Name_22, &check_hlds__typecheck__Var_37, &check_hlds__typecheck__AccessType_25, &check_hlds__typecheck__FieldName_26);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__Var_37);
            if (check_hlds__typecheck__succeeded)
            {
              hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(check_hlds__typecheck__ModuleInfo_24, &check_hlds__typecheck__CtorFieldTable_27);
              check_hlds__typecheck__TypeCtorInfo_19_30 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
              check_hlds__typecheck__TypeInfo_20_31 = (MR_Word) &check_hlds__typecheck_scalar_common_1[4];
              check_hlds__typecheck__succeeded = mercury__map__search_3_p_0(check_hlds__typecheck__TypeCtorInfo_19_30, check_hlds__typecheck__TypeInfo_20_31, check_hlds__typecheck__CtorFieldTable_27, ((MR_Box) (check_hlds__typecheck__FieldName_26)), &check_hlds__typecheck__conv0_FieldDefns_28);
              if (check_hlds__typecheck__succeeded)
              {
                check_hlds__typecheck__FieldDefns_28 = ((MR_Word) check_hlds__typecheck__conv0_FieldDefns_28);
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
              if (check_hlds__typecheck__succeeded)
              {
                check_hlds__typecheck__TypeCtorInfo_23_34 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
                check_hlds__typecheck__TypeCtorInfo_24_35 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
                {
                  check_hlds__typecheck__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_29, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_7[0]));
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_29, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1));
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_29, 3) = ((MR_Box) (check_hlds__typecheck__Info_7));
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_29, 4) = ((MR_Box) (check_hlds__typecheck__GoalId_10));
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_29, 5) = ((MR_Box) (check_hlds__typecheck__Name_22));
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_29, 6) = ((MR_Box) (check_hlds__typecheck__Arity_9));
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_29, 7) = ((MR_Box) (check_hlds__typecheck__AccessType_25));
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_29, 8) = ((MR_Box) (check_hlds__typecheck__FieldName_26));
                }
                mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_23_34, check_hlds__typecheck__TypeCtorInfo_24_35, check_hlds__typecheck__Var_29, check_hlds__typecheck__FieldDefns_28, &check_hlds__typecheck__FieldAccessConsInfos_15);
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      if (check_hlds__typecheck__succeeded)
        check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__FieldAccessConsInfos_15, check_hlds__typecheck__ConsInfos_11, check_hlds__typecheck__ConsErrors_12);
      else
      {
        *check_hlds__typecheck__ConsInfos_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__typecheck__ConsErrors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    }
    else
      check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__ConsInfos_11, check_hlds__typecheck__ConsErrors_12);
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
  MR_Word check_hlds__typecheck__Info_7,
  MR_Word check_hlds__typecheck__Functor_8,
  MR_Integer check_hlds__typecheck__Arity_9,
  MR_Word check_hlds__typecheck__GoalId_10,
  MR_Word * check_hlds__typecheck__ConsInfos_11,
  MR_Word * check_hlds__typecheck__DataConsErrors_12)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__TypeCtorInfo_72_72;
    MR_Word check_hlds__typecheck__TypeCtorInfo_77_77;
    MR_Word check_hlds__typecheck__EmptyConstraints_13;
    MR_Word check_hlds__typecheck__Ctors_14;
    MR_Word check_hlds__typecheck__PlainMaybeConsInfos_19;
    MR_Word check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25;
    MR_Word check_hlds__typecheck__FieldAccessMaybeConsInfos_27;
    MR_Word check_hlds__typecheck__DataMaybeConsInfos_28;
    MR_Word check_hlds__typecheck__DataConsInfos_29;
    MR_Word check_hlds__typecheck__BuiltinConsInfos_35;
    MR_Word check_hlds__typecheck__TupleConsInfos_46;
    MR_Word check_hlds__typecheck__PredConsInfos_48;
    MR_Word check_hlds__typecheck__ApplyConsInfos_50;
    MR_Word check_hlds__typecheck__OtherConsInfos_51;
    MR_Word check_hlds__typecheck__Var_54;
    MR_Word check_hlds__typecheck__Var_70;
    MR_Word check_hlds__typecheck__Var_71;
    MR_Word check_hlds__typecheck__HLDS_ConsDefns_18;
    MR_Word check_hlds__typecheck__Var_15;
    MR_Integer check_hlds__typecheck__Var_16;
    MR_Word check_hlds__typecheck__Var_17;
    MR_Word check_hlds__typecheck__HLDS_ExistQConsDefns_24;
    MR_Word check_hlds__typecheck__Name_20;
    MR_Word check_hlds__typecheck__FunctorTypeCtor_21;
    MR_Word check_hlds__typecheck__OrigName_22;
    MR_Word check_hlds__typecheck__OrigFunctor_23;
    MR_Integer check_hlds__typecheck__Var_78;
    MR_Word check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26;
    MR_String check_hlds__typecheck__BuiltInTypeName_30;
    MR_Integer check_hlds__typecheck__TupleArity_36;
    MR_Word check_hlds__typecheck__PredConsInfosPrime_47;
    MR_Word check_hlds__typecheck__ApplyConsInfosPrime_49;

    hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_13);
    check_hlds__typecheck_info__typecheck_info_get_ctors_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__Ctors_14);
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
      check_hlds__typecheck__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
      check_hlds__typecheck__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
      check_hlds__typecheck__succeeded = hlds__hlds_data__search_cons_table_3_p_0(check_hlds__typecheck__Ctors_14, check_hlds__typecheck__Functor_8, &check_hlds__typecheck__HLDS_ConsDefns_18);
    }
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, (MR_Integer) 2, check_hlds__typecheck__HLDS_ConsDefns_18, &check_hlds__typecheck__PlainMaybeConsInfos_19);
    }
    else
      check_hlds__typecheck__PlainMaybeConsInfos_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
      check_hlds__typecheck__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
      check_hlds__typecheck__FunctorTypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
      check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__Var_78);
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(check_hlds__typecheck__Name_20, &check_hlds__typecheck__OrigName_22);
        if (check_hlds__typecheck__succeeded)
        {
          {
            check_hlds__typecheck__OrigFunctor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 1) = ((MR_Box) (check_hlds__typecheck__OrigName_22));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 2) = ((MR_Box) (check_hlds__typecheck__Arity_9));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 3) = ((MR_Box) (check_hlds__typecheck__FunctorTypeCtor_21));
          }
          check_hlds__typecheck__succeeded = hlds__hlds_data__search_cons_table_3_p_0(check_hlds__typecheck__Ctors_14, check_hlds__typecheck__OrigFunctor_23, &check_hlds__typecheck__HLDS_ExistQConsDefns_24);
        }
      }
    }
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, (MR_Integer) 0, check_hlds__typecheck__HLDS_ExistQConsDefns_24, &check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25);
    }
    else
      check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__typecheck__succeeded = check_hlds__typecheck__builtin_field_access_function_type_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, &check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26);
    if (check_hlds__typecheck__succeeded)
      check_hlds__typecheck__FieldAccessMaybeConsInfos_27 = check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26;
    else
      check_hlds__typecheck__FieldAccessMaybeConsInfos_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__typecheck__TypeCtorInfo_72_72 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
    check_hlds__typecheck__Var_54 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_72_72, check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25, check_hlds__typecheck__FieldAccessMaybeConsInfos_27);
    check_hlds__typecheck__DataMaybeConsInfos_28 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_72_72, check_hlds__typecheck__PlainMaybeConsInfos_19, check_hlds__typecheck__Var_54);
    check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__DataMaybeConsInfos_28, &check_hlds__typecheck__DataConsInfos_29, check_hlds__typecheck__DataConsErrors_12);
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == (MR_Integer) 0);
    if (check_hlds__typecheck__succeeded)
      switch (MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) {
        default:
          check_hlds__typecheck__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) {
            default:
              check_hlds__typecheck__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_String check_hlds__typecheck__String_90;
                MR_Word check_hlds__typecheck__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
                MR_Integer check_hlds__typecheck__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
                MR_Word check_hlds__typecheck__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
                MR_Char check_hlds__typecheck__Var_92;

                check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_94 == (MR_Integer) 0);
                if (check_hlds__typecheck__succeeded)
                {
                  check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Var_93)) == (MR_mktag((MR_Integer) 0)));
                  if (check_hlds__typecheck__succeeded)
                  {
                    check_hlds__typecheck__String_90 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_93, (MR_Integer) 0)));
                    check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "character";
                    check_hlds__typecheck__succeeded = mercury__string__char_to_string_2_p_1(&check_hlds__typecheck__Var_92, check_hlds__typecheck__String_90);
                  }
                }
              }
              break;
            case (MR_Integer) 5:
              {
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "int";
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 6:
              {
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "uint";
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 7:
              {
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "int8";
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 8:
              {
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "uint8";
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 9:
              {
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "int16";
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 10:
              {
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "uint16";
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 11:
              {
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "int32";
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 12:
              {
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "uint32";
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 13:
              {
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "float";
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 14:
              {
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "character";
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 15:
              {
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "string";
                check_hlds__typecheck__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_String check_hlds__typecheck__Name_95 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
                MR_Integer check_hlds__typecheck__lo_0;
                MR_Integer check_hlds__typecheck__hi_1;
                MR_Integer check_hlds__typecheck__mid_2;
                MR_Integer check_hlds__typecheck__result_3;

                /* binary string simple lookup switch */
                check_hlds__typecheck__lo_0 = (MR_Integer) 0;
                check_hlds__typecheck__hi_1 = (MR_Integer) 4;
                do
                {
                  check_hlds__typecheck__mid_2 = (((check_hlds__typecheck__lo_0 + check_hlds__typecheck__hi_1)) / (MR_Integer) 2);
                  check_hlds__typecheck__result_3 = MR_strcmp(check_hlds__typecheck__Name_95, ((&check_hlds__typecheck_vector_common_9[0 + check_hlds__typecheck__mid_2]))->check_hlds__typecheck__vector_common_type_9_0__vct_9_f_0);
                  if ((check_hlds__typecheck__result_3 == (MR_Integer) 0))
                  {
                    check_hlds__typecheck__BuiltInTypeName_30 = ((&check_hlds__typecheck_vector_common_9[0 + check_hlds__typecheck__mid_2]))->check_hlds__typecheck__vector_common_type_9_0__vct_9_f_1;
                    check_hlds__typecheck__succeeded = MR_TRUE;
                    /* jump out of search loop */
                    goto label_0;
                  }
                  else
                  if ((check_hlds__typecheck__result_3 < (MR_Integer) 0))
                    check_hlds__typecheck__hi_1 = (check_hlds__typecheck__mid_2 - (MR_Integer) 1);
                  else
                    check_hlds__typecheck__lo_0 = (check_hlds__typecheck__mid_2 + (MR_Integer) 1);
                }
                while ((check_hlds__typecheck__lo_0 <= check_hlds__typecheck__hi_1));
                check_hlds__typecheck__succeeded = MR_FALSE;
              label_0:;
              }
              break;
          }
          break;
      }
    if (check_hlds__typecheck__succeeded)
    {
      MR_Word check_hlds__typecheck__TypeCtor_31;
      MR_Word check_hlds__typecheck__ConsType_32;
      MR_Word check_hlds__typecheck__ConsTypeVarSet_33;
      MR_Word check_hlds__typecheck__ConsInfo_34;
      MR_Word check_hlds__typecheck__Var_55;
      MR_Word check_hlds__typecheck__Var_60;

      {
        check_hlds__typecheck__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_55, 0) = ((MR_Box) (check_hlds__typecheck__BuiltInTypeName_30));
      }
      {
        check_hlds__typecheck__TypeCtor_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_31, 0) = ((MR_Box) (check_hlds__typecheck__Var_55));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_31, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsType_32);
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__ConsTypeVarSet_33);
      {
        check_hlds__typecheck__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_60, 0) = ((MR_Box) (check_hlds__typecheck__BuiltInTypeName_30));
      }
      {
        check_hlds__typecheck__ConsInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_33));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_32));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_13));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 5) = ((MR_Box) (check_hlds__typecheck__Var_60));
      }
      {
        check_hlds__typecheck__BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__BuiltinConsInfos_35, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_34));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__BuiltinConsInfos_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      check_hlds__typecheck__BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
    {
      MR_Word check_hlds__typecheck__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
      MR_String check_hlds__typecheck__Var_63;
      MR_Word check_hlds__typecheck__Var_37;

      check_hlds__typecheck__TupleArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
      check_hlds__typecheck__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Var_62)) == (MR_mktag((MR_Integer) 0)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__Var_63 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_62, (MR_Integer) 0)));
        check_hlds__typecheck__succeeded = (strcmp(check_hlds__typecheck__Var_63, (MR_String) "{}") == 0);
      }
    }
    else
    if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
    {
      check_hlds__typecheck__TupleArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
      check_hlds__typecheck__succeeded = MR_TRUE;
    }
    else
      check_hlds__typecheck__succeeded = MR_FALSE;
    if (check_hlds__typecheck__succeeded)
    {
      MR_Word check_hlds__typecheck__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
      MR_Word check_hlds__typecheck__TupleConsTypeVarSet0_38;
      MR_Word check_hlds__typecheck__TupleArgTVars_39;
      MR_Word check_hlds__typecheck__TupleConsTypeVarSet_40;
      MR_Word check_hlds__typecheck__TupleArgTypes_41;
      MR_Word check_hlds__typecheck__TupleTypeCtor_42;
      MR_Word check_hlds__typecheck__TupleConsType_43;
      MR_Word check_hlds__typecheck__TupleConsInfo_45;
      MR_Word check_hlds__typecheck__Var_64;

      mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_74_74, &check_hlds__typecheck__TupleConsTypeVarSet0_38);
      mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_74_74, check_hlds__typecheck__TupleArity_36, &check_hlds__typecheck__TupleArgTVars_39, check_hlds__typecheck__TupleConsTypeVarSet0_38, &check_hlds__typecheck__TupleConsTypeVarSet_40);
      check_hlds__typecheck__Var_64 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__Var_64, check_hlds__typecheck__TupleArgTVars_39, &check_hlds__typecheck__TupleArgTypes_41);
      {
        check_hlds__typecheck__TupleTypeCtor_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleTypeCtor_42, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[10]));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleTypeCtor_42, 1) = ((MR_Box) (check_hlds__typecheck__TupleArity_36));
      }
      parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TupleTypeCtor_42, check_hlds__typecheck__TupleArgTypes_41, &check_hlds__typecheck__TupleConsType_43);
      {
        check_hlds__typecheck__TupleConsInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 0) = ((MR_Box) (check_hlds__typecheck__TupleConsTypeVarSet_40));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 2) = ((MR_Box) (check_hlds__typecheck__TupleConsType_43));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 3) = ((MR_Box) (check_hlds__typecheck__TupleArgTypes_41));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_13));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[11])));
      }
      {
        check_hlds__typecheck__TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TupleConsInfos_46, 0) = ((MR_Box) (check_hlds__typecheck__TupleConsInfo_45));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TupleConsInfos_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      check_hlds__typecheck__TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__typecheck__succeeded = check_hlds__typecheck__builtin_pred_type_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, check_hlds__typecheck__GoalId_10, &check_hlds__typecheck__PredConsInfosPrime_47);
    if (check_hlds__typecheck__succeeded)
      check_hlds__typecheck__PredConsInfos_48 = check_hlds__typecheck__PredConsInfosPrime_47;
    else
      check_hlds__typecheck__PredConsInfos_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__typecheck__succeeded = check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, &check_hlds__typecheck__ApplyConsInfosPrime_49);
    if (check_hlds__typecheck__succeeded)
      check_hlds__typecheck__ApplyConsInfos_50 = check_hlds__typecheck__ApplyConsInfosPrime_49;
    else
      check_hlds__typecheck__ApplyConsInfos_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__typecheck__TypeCtorInfo_77_77 = (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0;
    check_hlds__typecheck__Var_71 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__PredConsInfos_48, check_hlds__typecheck__ApplyConsInfos_50);
    check_hlds__typecheck__Var_70 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__TupleConsInfos_46, check_hlds__typecheck__Var_71);
    check_hlds__typecheck__OtherConsInfos_51 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__BuiltinConsInfos_35, check_hlds__typecheck__Var_70);
    *check_hlds__typecheck__ConsInfos_11 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__DataConsInfos_29, check_hlds__typecheck__OtherConsInfos_51);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word check_hlds__typecheck__ConsId_6,
  MR_Integer check_hlds__typecheck__Arity_7,
  MR_Word * check_hlds__typecheck__ConsTypeInfos_8)
{
  {
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word check_hlds__typecheck__TypeCtorInfo_21_42;
    MR_Word check_hlds__typecheck__TypeInfo_22_43;
    MR_Word check_hlds__typecheck__TypeCtorInfo_23_44;
    MR_String check_hlds__typecheck__ApplyName_9;
    MR_String check_hlds__typecheck__ApplyNameToUse_12;
    MR_Word check_hlds__typecheck__Purity_13;
    MR_Integer check_hlds__typecheck__Arity1_14;
    MR_Word check_hlds__typecheck__TypeVarSet_15;
    MR_Word check_hlds__typecheck__FuncType_16;
    MR_Word check_hlds__typecheck__ArgTypes_17;
    MR_Word check_hlds__typecheck__RetType_18;
    MR_Word check_hlds__typecheck__ExistQVars_19;
    MR_Word check_hlds__typecheck__EmptyConstraints_20;
    MR_Word check_hlds__typecheck__Var_21;
    MR_Integer check_hlds__typecheck__Var_22;
    MR_Integer check_hlds__typecheck__Var_23;
    MR_Word check_hlds__typecheck__Var_25;
    MR_Word check_hlds__typecheck__Var_26;
    MR_Word check_hlds__typecheck__Var_27;
    MR_Word check_hlds__typecheck__Var_28;
    MR_Word check_hlds__typecheck__TypeVarSet0_36;
    MR_Word check_hlds__typecheck__ArgTypeVars_37;
    MR_Word check_hlds__typecheck__TypeVarSet1_38;
    MR_Word check_hlds__typecheck__RetTypeVar_39;
    MR_Word check_hlds__typecheck__Var_40;
    MR_Word check_hlds__typecheck__Var_41;
    MR_Integer check_hlds__typecheck__Var_10;
    MR_Word check_hlds__typecheck__Var_11;
    MR_Integer check_hlds__typecheck__lo_0;
    MR_Integer check_hlds__typecheck__hi_1;
    MR_Integer check_hlds__typecheck__mid_2;
    MR_Integer check_hlds__typecheck__result_3;

    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 1)));
      check_hlds__typecheck__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 2)));
      check_hlds__typecheck__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 3)));
      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Var_21)) == (MR_mktag((MR_Integer) 0)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__ApplyName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_21, (MR_Integer) 0)));
        /* binary string jump switch */
        check_hlds__typecheck__lo_0 = (MR_Integer) 0;
        check_hlds__typecheck__hi_1 = (MR_Integer) 3;
        do
        {
          check_hlds__typecheck__mid_2 = (((check_hlds__typecheck__lo_0 + check_hlds__typecheck__hi_1)) / (MR_Integer) 2);
          check_hlds__typecheck__result_3 = MR_strcmp(check_hlds__typecheck__ApplyName_9, ((&check_hlds__typecheck_vector_common_8[0 + check_hlds__typecheck__mid_2]))->check_hlds__typecheck__vector_common_type_8_0__vct_8_f_0);
          if ((check_hlds__typecheck__result_3 == (MR_Integer) 0))
          {
            switch (((&check_hlds__typecheck_vector_common_8[0 + check_hlds__typecheck__mid_2]))->check_hlds__typecheck__vector_common_type_8_0__vct_8_f_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* case "" */
                  check_hlds__typecheck__ApplyNameToUse_12 = (MR_String) "apply";
                  check_hlds__typecheck__Purity_13 = (MR_Integer) 0;
                  check_hlds__typecheck__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  /* case "apply" */
                  check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
                  check_hlds__typecheck__Purity_13 = (MR_Integer) 0;
                  check_hlds__typecheck__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  /* case "impure_apply" */
                  check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
                  check_hlds__typecheck__Purity_13 = (MR_Integer) 2;
                  check_hlds__typecheck__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  /* case "semipure_apply" */
                  check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
                  check_hlds__typecheck__Purity_13 = (MR_Integer) 1;
                  check_hlds__typecheck__succeeded = MR_TRUE;
                }
                break;
            }
            /* jump out of search loop */
            goto label_0;
          }
          else
          if ((check_hlds__typecheck__result_3 < (MR_Integer) 0))
            check_hlds__typecheck__hi_1 = (check_hlds__typecheck__mid_2 - (MR_Integer) 1);
          else
            check_hlds__typecheck__lo_0 = (check_hlds__typecheck__mid_2 + (MR_Integer) 1);
        }
        while ((check_hlds__typecheck__lo_0 <= check_hlds__typecheck__hi_1));
        check_hlds__typecheck__succeeded = MR_FALSE;
      label_0:;
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__Var_22 = (MR_Integer) 1;
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_7 >= check_hlds__typecheck__Var_22);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__Var_23 = (MR_Integer) 1;
            check_hlds__typecheck__Arity1_14 = (check_hlds__typecheck__Arity_7 - check_hlds__typecheck__Var_23);
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
            check_hlds__typecheck__TypeCtorInfo_21_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
            mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, &check_hlds__typecheck__TypeVarSet0_36);
            mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, check_hlds__typecheck__Arity1_14, &check_hlds__typecheck__ArgTypeVars_37, check_hlds__typecheck__TypeVarSet0_36, &check_hlds__typecheck__TypeVarSet1_38);
            mercury__varset__new_var_3_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, &check_hlds__typecheck__RetTypeVar_39, check_hlds__typecheck__TypeVarSet1_38, &check_hlds__typecheck__TypeVarSet_15);
            check_hlds__typecheck__TypeInfo_22_43 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
            check_hlds__typecheck__TypeCtorInfo_23_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0;
            check_hlds__typecheck__Var_40 = mercury__map__init_0_f_0(check_hlds__typecheck__TypeInfo_22_43, check_hlds__typecheck__TypeCtorInfo_23_44);
            parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__Var_40, check_hlds__typecheck__ArgTypeVars_37, &check_hlds__typecheck__ArgTypes_17);
            check_hlds__typecheck__Var_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              check_hlds__typecheck__RetType_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__RetType_18, 0) = ((MR_Box) (check_hlds__typecheck__RetTypeVar_39));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__RetType_18, 1) = ((MR_Box) (check_hlds__typecheck__Var_41));
            }
            parse_tree__prog_type__construct_higher_order_func_type_5_p_0(check_hlds__typecheck__Purity_13, check_hlds__typecheck__ArgTypes_17, check_hlds__typecheck__RetType_18, &check_hlds__typecheck__FuncType_16);
            check_hlds__typecheck__ExistQVars_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_20);
            check_hlds__typecheck__Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              check_hlds__typecheck__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_26, 0) = ((MR_Box) (check_hlds__typecheck__FuncType_16));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_26, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_17));
            }
            {
              check_hlds__typecheck__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_27, 1) = ((MR_Box) (check_hlds__typecheck__ApplyNameToUse_12));
            }
            {
              check_hlds__typecheck__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_25, 0) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_15));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_25, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_19));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_25, 2) = ((MR_Box) (check_hlds__typecheck__RetType_18));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_25, 3) = ((MR_Box) (check_hlds__typecheck__Var_26));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_25, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_20));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_25, 5) = ((MR_Box) (check_hlds__typecheck__Var_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__typecheck__ConsTypeInfos_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Var_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Var_28));
            }
            check_hlds__typecheck__succeeded = MR_TRUE;
          }
        }
      }
    }
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word check_hlds__typecheck__HeadVar__4_4,
  MR_Word * check_hlds__typecheck__HeadVar__5_5)
{
  if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *check_hlds__typecheck__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word check_hlds__typecheck__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__Y_14;
    MR_Word * check_hlds__typecheck__AddrYs_16;

    check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__X_12, &check_hlds__typecheck__Y_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__typecheck__HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Y_14));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    check_hlds__typecheck__AddrYs_16 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 1));
    check_hlds__typecheck__LCMCpr_convert_cons_defn_list_1_5_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__Xs_13, check_hlds__typecheck__AddrYs_16);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_convert_cons_defn_list_1_5_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word check_hlds__typecheck__HeadVar__4_4,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__5_17)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__typecheck__AddrOfHeadVar__5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word check_hlds__typecheck__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__Y_14;
      MR_Word * check_hlds__typecheck__AddrYs_16;
      MR_Word check_hlds__typecheck__HeadVar__5_18;

      check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__X_12, &check_hlds__typecheck__Y_14);
      {
        check_hlds__typecheck__HeadVar__5_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_18, 0) = ((MR_Box) (check_hlds__typecheck__Y_14));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_18, 1) = NULL;
      }
      check_hlds__typecheck__AddrYs_16 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_18, (MR_Integer) 1));
      *check_hlds__typecheck__AddrOfHeadVar__5_17 = check_hlds__typecheck__HeadVar__5_18;
      /* direct tailcall eliminated */
      {
        MR_Word check_hlds__typecheck__next_value_of_HeadVar__4_4 = check_hlds__typecheck__Xs_13;
        MR_Word * check_hlds__typecheck__next_value_of_AddrOfHeadVar__5_17 = check_hlds__typecheck__AddrYs_16;

        check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__next_value_of_HeadVar__4_4;
        check_hlds__typecheck__AddrOfHeadVar__5_17 = check_hlds__typecheck__next_value_of_AddrOfHeadVar__5_17;
      }
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1)
{
  {
    MR_Box check_hlds__typecheck__wrapper_arg_2;
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv0_LambdaHeadVar__2_39;

    check_hlds__typecheck__conv0_LambdaHeadVar__2_39 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3467__2_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_LambdaHeadVar__2_39));
    return check_hlds__typecheck__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
  MR_Word check_hlds__typecheck__Info_6,
  MR_Word check_hlds__typecheck__GoalId_7,
  MR_Word check_hlds__typecheck__Action_8,
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__ConsTypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__ConsTypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 2)));
    MR_Word check_hlds__typecheck__ConsTypeKinds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck__ExistQVars0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 4)));
    MR_Word check_hlds__typecheck__ExistProgConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 5)));
    MR_Word check_hlds__typecheck__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 6)));
    MR_Word check_hlds__typecheck__ArgTypes_19;
    MR_Word check_hlds__typecheck__TypeTable_21;
    MR_Word check_hlds__typecheck__TypeDefn_22;
    MR_Word check_hlds__typecheck__Body_23;
    MR_Word check_hlds__typecheck__PredId_24;
    MR_Word check_hlds__typecheck__ModuleInfo_25;
    MR_Word check_hlds__typecheck__PredInfo_26;
    MR_Word check_hlds__typecheck__PredStatus_27;
    MR_Word check_hlds__typecheck__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 7)));
    MR_Word check_hlds__typecheck__Var_40;
    MR_Word check_hlds__typecheck__Var_55;
    MR_Word check_hlds__typecheck__Var_56;
    MR_Word check_hlds__typecheck__Var_57;
    MR_Word check_hlds__typecheck__Var_58;
    MR_Word check_hlds__typecheck__Var_59;
    MR_Word check_hlds__typecheck__Var_60;
    MR_Word check_hlds__typecheck__Var_61;
    MR_Word check_hlds__typecheck__Var_62;
    MR_Word check_hlds__typecheck__Var_28;
    MR_Word check_hlds__typecheck__Var_41;
    MR_Word check_hlds__typecheck__Var_65;
    MR_Word check_hlds__typecheck__Var_42;

    check_hlds__typecheck__ArgTypes_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__typecheck_scalar_common_6[2], check_hlds__typecheck__Args_17);
    check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__TypeTable_21);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_21, check_hlds__typecheck__TypeCtor_11, &check_hlds__typecheck__TypeDefn_22);
    hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__Body_23);
    check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredId_24);
    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__ModuleInfo_25);
    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__typecheck__ModuleInfo_25, check_hlds__typecheck__PredId_24, &check_hlds__typecheck__PredInfo_26);
    hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__typecheck__PredInfo_26, &check_hlds__typecheck__PredStatus_27);
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Body_23)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 0)));
      check_hlds__typecheck__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 1)));
      check_hlds__typecheck__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 2)));
      check_hlds__typecheck__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 3)));
      check_hlds__typecheck__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 4)));
      check_hlds__typecheck__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 5)));
      check_hlds__typecheck__Var_61 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) & (MR_Integer) 1);
      check_hlds__typecheck__Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      check_hlds__typecheck__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 7)));
      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Var_40)) == (MR_mktag((MR_Integer) 1)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_40, (MR_Integer) 0)));
        check_hlds__typecheck__Var_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
        hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__typecheck__PredInfo_26, &check_hlds__typecheck__Var_65);
        check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____goal_type_0_0(check_hlds__typecheck__Var_41, check_hlds__typecheck__Var_65);
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_26);
          check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__Var_42 = (MR_Word) check_hlds__typecheck__PredStatus_27;
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
          }
        }
      }
    }
    if (check_hlds__typecheck__succeeded)
    {
      MR_Word check_hlds__typecheck__Var_43;

      {
        check_hlds__typecheck__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_43, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_43, 1) = ((MR_Box) (check_hlds__typecheck__TypeDefn_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__typecheck__ConsTypeInfo_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Var_43));
      }
    }
    else
    {
      MR_Word check_hlds__typecheck__TypeStatus_29;
      MR_Word check_hlds__typecheck__Var_44;
      MR_Word check_hlds__typecheck__Var_45;

      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__TypeStatus_29);
      check_hlds__typecheck__Var_44 = (MR_Word) check_hlds__typecheck__TypeStatus_29;
      check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_26);
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__Var_45 = (MR_Word) check_hlds__typecheck__PredStatus_27;
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
        }
      }
      if (check_hlds__typecheck__succeeded)
      {
        *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[9]);
      }
      else
      {
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Action_8 == (MR_Integer) 0);
        if (check_hlds__typecheck__succeeded)
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__ExistQVars0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__typecheck__succeeded)
        {
          MR_Word check_hlds__typecheck__Var_47;

          {
            check_hlds__typecheck__Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_47, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__typecheck__ConsTypeInfo_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Var_47));
          }
        }
        else
        {
          MR_Word check_hlds__typecheck__ConsTypeArgs_30;
          MR_Word check_hlds__typecheck__ConsType_31;
          MR_Word check_hlds__typecheck__UnivProgConstraints_32;
          MR_Word check_hlds__typecheck__ProgConstraints_33;
          MR_Word check_hlds__typecheck__ExistQVars_34;
          MR_Word check_hlds__typecheck__ClassTable_35;
          MR_Word check_hlds__typecheck__Constraints_36;
          MR_Word check_hlds__typecheck__Var_49;
          MR_Word check_hlds__typecheck__Var_50;

          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__ConsTypeKinds_14, check_hlds__typecheck__ConsTypeParams_13, &check_hlds__typecheck__ConsTypeArgs_30);
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_11, check_hlds__typecheck__ConsTypeArgs_30, &check_hlds__typecheck__ConsType_31);
          check_hlds__typecheck__UnivProgConstraints_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          switch (check_hlds__typecheck__Action_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  check_hlds__typecheck__ProgConstraints_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 0) = ((MR_Box) (check_hlds__typecheck__UnivProgConstraints_32));
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
                }
                check_hlds__typecheck__ExistQVars_34 = check_hlds__typecheck__ExistQVars0_15;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  check_hlds__typecheck__ProgConstraints_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 0) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
                }
                check_hlds__typecheck__ExistQVars_34 = check_hlds__typecheck__ExistQVars0_15;
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  check_hlds__typecheck__ProgConstraints_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 0) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 1) = ((MR_Box) (check_hlds__typecheck__UnivProgConstraints_32));
                }
                check_hlds__typecheck__ExistQVars_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
          }
          hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_25, &check_hlds__typecheck__ClassTable_35);
          hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__ConsTypeVarSet_12, check_hlds__typecheck__GoalId_7, check_hlds__typecheck__ProgConstraints_33, &check_hlds__typecheck__Constraints_36);
          {
            check_hlds__typecheck__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_50, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
          }
          {
            check_hlds__typecheck__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_49, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_12));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_49, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_34));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_49, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_31));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_49, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_19));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_49, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_36));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_49, 5) = ((MR_Box) (check_hlds__typecheck__Var_50));
          }
          *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__Var_49);
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
  MR_Word * check_hlds__typecheck__HeadVar__3_3)
{
  if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *check_hlds__typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word check_hlds__typecheck__MaybeConsInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__MaybeConsInfos_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__InfosTail_8;
    MR_Word check_hlds__typecheck__ErrorsTail_9;

    check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__MaybeConsInfos_5, &check_hlds__typecheck__InfosTail_8, &check_hlds__typecheck__ErrorsTail_9);
    if (((MR_tag((MR_Word) check_hlds__typecheck__MaybeConsInfo_4)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word check_hlds__typecheck__ConsError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeConsInfo_4, (MR_Integer) 0)));

      *check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__InfosTail_8;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__typecheck__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ConsError_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__ErrorsTail_9));
      }
    }
    else
    {
      MR_Word check_hlds__typecheck__ConsInfo_10 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__MaybeConsInfo_4), (MR_Integer) 0);

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__typecheck__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__InfosTail_8));
      }
      *check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__ErrorsTail_9;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv1_ConsTypeInfo_16;

    check_hlds__typecheck__succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 8))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv1_ConsTypeInfo_16);
    if (check_hlds__typecheck__succeeded)
    {
      *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv1_ConsTypeInfo_16));
      check_hlds__typecheck__succeeded = MR_TRUE;
    }
    return check_hlds__typecheck__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
  MR_Word check_hlds__typecheck__Info_6,
  MR_Word check_hlds__typecheck__GoalId_7,
  MR_Word check_hlds__typecheck__ConsId_8,
  MR_Integer check_hlds__typecheck__Arity_9,
  MR_Word * check_hlds__typecheck__MaybeConsTypeInfos_10)
{
  {
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word check_hlds__typecheck__TypeCtorInfo_19_19;
    MR_Word check_hlds__typecheck__TypeInfo_20_20;
    MR_Word check_hlds__typecheck__TypeCtorInfo_23_23;
    MR_Word check_hlds__typecheck__TypeCtorInfo_24_24;
    MR_Word check_hlds__typecheck__Name_11;
    MR_Word check_hlds__typecheck__ModuleInfo_13;
    MR_Word check_hlds__typecheck__AccessType_14;
    MR_Word check_hlds__typecheck__FieldName_15;
    MR_Word check_hlds__typecheck__CtorFieldTable_16;
    MR_Word check_hlds__typecheck__FieldDefns_17;
    MR_Word check_hlds__typecheck__Var_18;
    MR_Integer check_hlds__typecheck__Var_25;
    MR_Integer check_hlds__typecheck__Var_26;
    MR_Word check_hlds__typecheck__Var_12;
    MR_Box check_hlds__typecheck__conv0_FieldDefns_17;

    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 1)));
      check_hlds__typecheck__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 2)));
      check_hlds__typecheck__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 3)));
      check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__Var_25);
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__ModuleInfo_13);
        check_hlds__typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__typecheck__ModuleInfo_13, check_hlds__typecheck__Name_11, &check_hlds__typecheck__Var_26, &check_hlds__typecheck__AccessType_14, &check_hlds__typecheck__FieldName_15);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__Var_26);
          if (check_hlds__typecheck__succeeded)
          {
            hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(check_hlds__typecheck__ModuleInfo_13, &check_hlds__typecheck__CtorFieldTable_16);
            check_hlds__typecheck__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            check_hlds__typecheck__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_scalar_common_1[4];
            check_hlds__typecheck__succeeded = mercury__map__search_3_p_0(check_hlds__typecheck__TypeCtorInfo_19_19, check_hlds__typecheck__TypeInfo_20_20, check_hlds__typecheck__CtorFieldTable_16, ((MR_Box) (check_hlds__typecheck__FieldName_15)), &check_hlds__typecheck__conv0_FieldDefns_17);
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__FieldDefns_17 = ((MR_Word) check_hlds__typecheck__conv0_FieldDefns_17);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
              check_hlds__typecheck__TypeCtorInfo_24_24 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
              {
                check_hlds__typecheck__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_18, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_18, 1) = ((MR_Box) (check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_18, 3) = ((MR_Box) (check_hlds__typecheck__Info_6));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_18, 4) = ((MR_Box) (check_hlds__typecheck__GoalId_7));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_18, 5) = ((MR_Box) (check_hlds__typecheck__Name_11));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_18, 6) = ((MR_Box) (check_hlds__typecheck__Arity_9));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_18, 7) = ((MR_Box) (check_hlds__typecheck__AccessType_14));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_18, 8) = ((MR_Box) (check_hlds__typecheck__FieldName_15));
              }
              mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_23_23, check_hlds__typecheck__TypeCtorInfo_24_24, check_hlds__typecheck__Var_18, check_hlds__typecheck__FieldDefns_17, check_hlds__typecheck__MaybeConsTypeInfos_10);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return check_hlds__typecheck__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
  MR_Word check_hlds__typecheck__Info_6,
  MR_Word check_hlds__typecheck__ConsId_7,
  MR_Integer check_hlds__typecheck__Arity_8,
  MR_Word check_hlds__typecheck__GoalId_9,
  MR_Word * check_hlds__typecheck__ConsTypeInfos_10)
{
  {
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word check_hlds__typecheck__SymName_11;
    MR_Word check_hlds__typecheck__PredicateTable_14;
    MR_Word check_hlds__typecheck__IsFullyQualified_15;
    MR_Word check_hlds__typecheck__PredIds_16;
    MR_Integer check_hlds__typecheck__Var_12;
    MR_Word check_hlds__typecheck__Var_13;

    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 1)));
      check_hlds__typecheck__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 2)));
      check_hlds__typecheck__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 3)));
      check_hlds__typecheck_info__typecheck_info_get_preds_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredicateTable_14);
      check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__IsFullyQualified_15);
      hlds__pred_table__predicate_table_lookup_sym_4_p_0(check_hlds__typecheck__PredicateTable_14, check_hlds__typecheck__IsFullyQualified_15, check_hlds__typecheck__SymName_11, &check_hlds__typecheck__PredIds_16);
      if ((check_hlds__typecheck__PredIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__ConsTypeInfos_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word check_hlds__typecheck__Preds_19;

        hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_14, &check_hlds__typecheck__Preds_19);
        check_hlds__typecheck__accumulate_cons_type_infos_for_pred_ids_7_p_0(check_hlds__typecheck__Info_6, check_hlds__typecheck__Preds_19, check_hlds__typecheck__GoalId_9, check_hlds__typecheck__PredIds_16, check_hlds__typecheck__Arity_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__ConsTypeInfos_10);
      }
      check_hlds__typecheck__succeeded = MR_TRUE;
    }
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__accumulate_cons_type_infos_for_pred_ids_7_p_0(
  MR_Word check_hlds__typecheck__Info_1,
  MR_Word check_hlds__typecheck__PredTable_2,
  MR_Word check_hlds__typecheck__GoalId_3,
  MR_Word check_hlds__typecheck__HeadVar__4_4,
  MR_Integer check_hlds__typecheck__Arity_5,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6;
      else
      {
        MR_Word check_hlds__typecheck__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__PredIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24;
        MR_Word check_hlds__typecheck__ModuleInfo_34;
        MR_Word check_hlds__typecheck__ClassTable_35;
        MR_Word check_hlds__typecheck__PredInfo_36;
        MR_Integer check_hlds__typecheck__PredArity_37;
        MR_Word check_hlds__typecheck__IsPredOrFunc_38;
        MR_Word check_hlds__typecheck__PredClassContext_39;
        MR_Word check_hlds__typecheck__PredTypeVarSet_40;
        MR_Word check_hlds__typecheck__PredExistQVars_41;
        MR_Word check_hlds__typecheck__CompleteArgTypes_42;
        MR_Word check_hlds__typecheck__Purity_43;
        MR_Box check_hlds__typecheck__conv0_PredInfo_36;

        check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_1, &check_hlds__typecheck__ModuleInfo_34);
        hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_34, &check_hlds__typecheck__ClassTable_35);
        mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__PredTable_2, ((MR_Box) (check_hlds__typecheck__PredId_18)), &check_hlds__typecheck__conv0_PredInfo_36);
        check_hlds__typecheck__PredInfo_36 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_36);
        check_hlds__typecheck__PredArity_37 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__PredInfo_36);
        check_hlds__typecheck__IsPredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__typecheck__PredInfo_36);
        hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__PredClassContext_39);
        hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__PredTypeVarSet_40, &check_hlds__typecheck__PredExistQVars_41, &check_hlds__typecheck__CompleteArgTypes_42);
        hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__Purity_43);
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsPredOrFunc_38 == (MR_Integer) 0);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredArity_37 >= check_hlds__typecheck__Arity_5);
          if (check_hlds__typecheck__succeeded)
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredExistQVars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        if (check_hlds__typecheck__succeeded)
        {
          MR_Word check_hlds__typecheck__ArgTypes_44;
          MR_Word check_hlds__typecheck__PredTypeParams_45;
          MR_Word check_hlds__typecheck__PredType_46;
          MR_Word check_hlds__typecheck__PredConstraints_47;
          MR_Word check_hlds__typecheck__ConsTypeInfo_48;
          MR_Word check_hlds__typecheck__Var_58;

          mercury__list__det_split_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Arity_5, check_hlds__typecheck__CompleteArgTypes_42, &check_hlds__typecheck__ArgTypes_44, &check_hlds__typecheck__PredTypeParams_45);
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
          parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(check_hlds__typecheck__Purity_43, check_hlds__typecheck__PredTypeParams_45, &check_hlds__typecheck__PredType_46);
          hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__PredTypeVarSet_40, check_hlds__typecheck__GoalId_3, check_hlds__typecheck__PredClassContext_39, &check_hlds__typecheck__PredConstraints_47);
          {
            check_hlds__typecheck__Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_58, 1) = ((MR_Box) (check_hlds__typecheck__PredId_18));
          }
          {
            check_hlds__typecheck__ConsTypeInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeInfo_48, 0) = ((MR_Box) (check_hlds__typecheck__PredTypeVarSet_40));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeInfo_48, 1) = ((MR_Box) (check_hlds__typecheck__PredExistQVars_41));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeInfo_48, 2) = ((MR_Box) (check_hlds__typecheck__PredType_46));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeInfo_48, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_44));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeInfo_48, 4) = ((MR_Box) (check_hlds__typecheck__PredConstraints_47));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeInfo_48, 5) = ((MR_Box) (check_hlds__typecheck__Var_58));
          }
          {
            check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeInfo_48));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6));
          }
        }
        else
        {
          MR_Integer check_hlds__typecheck__PredAsFuncArity_49;
          MR_Integer check_hlds__typecheck__Var_60;

          check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsPredOrFunc_38 == (MR_Integer) 1);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__Var_60 = (MR_Integer) 1;
            check_hlds__typecheck__PredAsFuncArity_49 = (check_hlds__typecheck__PredArity_37 - check_hlds__typecheck__Var_60);
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredAsFuncArity_49 >= check_hlds__typecheck__Arity_5);
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredExistQVars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (!(check_hlds__typecheck__succeeded))
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredAsFuncArity_49 == check_hlds__typecheck__Arity_5);
            }
          }
          if (check_hlds__typecheck__succeeded)
          {
            MR_Word check_hlds__typecheck__TypeCtorInfo_53_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            MR_Word check_hlds__typecheck__FuncArgTypes_50;
            MR_Word check_hlds__typecheck__FuncTypeParams_51;
            MR_Word check_hlds__typecheck__FuncArgTypeParams_52;
            MR_Word check_hlds__typecheck__FuncReturnTypeParam_53;
            MR_Word check_hlds__typecheck__FuncType_54;
            MR_Word check_hlds__typecheck__Var_62;
            MR_Word check_hlds__typecheck__PredConstraints_64;
            MR_Word check_hlds__typecheck__ConsTypeInfo_65;
            MR_Box check_hlds__typecheck__conv1_FuncReturnTypeParam_53;

            mercury__list__det_split_list_4_p_0(check_hlds__typecheck__TypeCtorInfo_53_71, check_hlds__typecheck__Arity_5, check_hlds__typecheck__CompleteArgTypes_42, &check_hlds__typecheck__FuncArgTypes_50, &check_hlds__typecheck__FuncTypeParams_51);
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(check_hlds__typecheck__TypeCtorInfo_53_71, check_hlds__typecheck__FuncTypeParams_51, &check_hlds__typecheck__FuncArgTypeParams_52, &check_hlds__typecheck__conv1_FuncReturnTypeParam_53);
            check_hlds__typecheck__FuncReturnTypeParam_53 = ((MR_Word) check_hlds__typecheck__conv1_FuncReturnTypeParam_53);
            if ((check_hlds__typecheck__FuncArgTypeParams_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              check_hlds__typecheck__FuncType_54 = check_hlds__typecheck__FuncReturnTypeParam_53;
            else
            {
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              parse_tree__prog_type__construct_higher_order_func_type_5_p_0(check_hlds__typecheck__Purity_43, check_hlds__typecheck__FuncArgTypeParams_52, check_hlds__typecheck__FuncReturnTypeParam_53, &check_hlds__typecheck__FuncType_54);
            }
            hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__PredTypeVarSet_40, check_hlds__typecheck__GoalId_3, check_hlds__typecheck__PredClassContext_39, &check_hlds__typecheck__PredConstraints_64);
            {
              check_hlds__typecheck__Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_62, 1) = ((MR_Box) (check_hlds__typecheck__PredId_18));
            }
            {
              check_hlds__typecheck__ConsTypeInfo_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeInfo_65, 0) = ((MR_Box) (check_hlds__typecheck__PredTypeVarSet_40));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeInfo_65, 1) = ((MR_Box) (check_hlds__typecheck__PredExistQVars_41));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeInfo_65, 2) = ((MR_Box) (check_hlds__typecheck__FuncType_54));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeInfo_65, 3) = ((MR_Box) (check_hlds__typecheck__FuncArgTypes_50));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeInfo_65, 4) = ((MR_Box) (check_hlds__typecheck__PredConstraints_64));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeInfo_65, 5) = ((MR_Box) (check_hlds__typecheck__Var_62));
            }
            {
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeInfo_65));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6));
            }
          }
          else
            check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6;
        }
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__4_4 = check_hlds__typecheck__PredIds_19;
          MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_ConsTypeInfos_0_6 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24;

          check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__next_value_of_HeadVar__4_4;
          check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_ConsTypeInfos_0_6;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_functor_types_4_p_0(
  MR_Word check_hlds__typecheck__Var_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3;
      else
      {
        MR_Word check_hlds__typecheck__ConsTypeAssign_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__ConsTypeAssigns_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_15_15;
        MR_Word check_hlds__typecheck__TypeAssign0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_10, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__ConsType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_10, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__ConsArgTypes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_10, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck__VarTypes0_25;
        MR_Word check_hlds__typecheck__MaybeTypeVar_26;
        MR_Word check_hlds__typecheck__VarTypes_27;

        check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_22, &check_hlds__typecheck__VarTypes0_25);
        hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_1, check_hlds__typecheck__ConsType_23, &check_hlds__typecheck__MaybeTypeVar_26, check_hlds__typecheck__VarTypes0_25, &check_hlds__typecheck__VarTypes_27);
        if ((check_hlds__typecheck__MaybeTypeVar_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word check_hlds__typecheck__TypeAssign_34;
          MR_Word check_hlds__typecheck__EmptyConstraints_35;
          MR_Word check_hlds__typecheck__ArgsTypeAssign_36;

          check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_27, check_hlds__typecheck__TypeAssign0_22, &check_hlds__typecheck__TypeAssign_34);
          hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_35);
          {
            check_hlds__typecheck__ArgsTypeAssign_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_36, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_34));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_36, 1) = ((MR_Box) (check_hlds__typecheck__ConsArgTypes_24));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_36, 2) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_35));
          }
          {
            check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_15_15, 0) = ((MR_Box) (check_hlds__typecheck__ArgsTypeAssign_36));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_15_15, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3));
          }
        }
        else
        {
          MR_Word check_hlds__typecheck__TypeVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeVar_26, (MR_Integer) 0)));
          MR_Word check_hlds__typecheck__TypeAssign_29;
          MR_Word check_hlds__typecheck__HeadTypeParams_41;
          MR_Word check_hlds__typecheck__TypeBindings0_42;
          MR_Word check_hlds__typecheck__TypeBindings_43;

          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_22, &check_hlds__typecheck__HeadTypeParams_41);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_22, &check_hlds__typecheck__TypeBindings0_42);
          check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__ConsType_23, check_hlds__typecheck__TypeVar_28, check_hlds__typecheck__HeadTypeParams_41, check_hlds__typecheck__TypeBindings0_42, &check_hlds__typecheck__TypeBindings_43);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_43, check_hlds__typecheck__TypeAssign0_22, &check_hlds__typecheck__TypeAssign_29);
            check_hlds__typecheck__succeeded = MR_TRUE;
          }
          if (check_hlds__typecheck__succeeded)
          {
            MR_Word check_hlds__typecheck__EmptyConstraints_30;
            MR_Word check_hlds__typecheck__ArgsTypeAssign_31;

            hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_30);
            {
              check_hlds__typecheck__ArgsTypeAssign_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_31, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_29));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_31, 1) = ((MR_Box) (check_hlds__typecheck__ConsArgTypes_24));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_31, 2) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_30));
            }
            {
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_15_15, 0) = ((MR_Box) (check_hlds__typecheck__ArgsTypeAssign_31));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_15_15, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3));
            }
          }
          else
            check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_15_15 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3;
        }
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__2_2 = check_hlds__typecheck__ConsTypeAssigns_11;
          MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_15_15;

          check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__next_value_of_HeadVar__2_2;
          check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__get_cons_type_assigns_for_cons_defns_4_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__TypeAssigns_2,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_3;
    else
    {
      MR_Word check_hlds__typecheck__ConsDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__ConsDefns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_15_15;

      check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(check_hlds__typecheck__ConsDefn_9, check_hlds__typecheck__TypeAssigns_2, check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_3, &check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_15_15);
      /* direct tailcall eliminated */
      {
        MR_Word check_hlds__typecheck__next_value_of_HeadVar__1_1 = check_hlds__typecheck__ConsDefns_10;
        MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_15_15;

        check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__next_value_of_HeadVar__1_1;
        check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_3 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(
  MR_Word check_hlds__typecheck__ConsDefn_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_3;
      else
      {
        MR_Word check_hlds__typecheck__TypeAssign_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__TypeAssigns_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__ConsTypeAssign_13;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_16_16;
        MR_Word check_hlds__typecheck__ConsTypeVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_1, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__ConsExistQVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_1, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__ConsType0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_1, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck__ArgTypes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_1, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck__ClassConstraints0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_1, (MR_Integer) 4)));
        MR_Word check_hlds__typecheck__ConsType_27;
        MR_Word check_hlds__typecheck__ArgTypes_28;
        MR_Word check_hlds__typecheck__TypeAssign2_29;
        MR_Word check_hlds__typecheck__ConstraintsToAdd_30;
        MR_Word check_hlds__typecheck__OldConstraints_38;
        MR_Word check_hlds__typecheck__ClassConstraints_39;
        MR_Word check_hlds__typecheck__TypeAssign_40;
        MR_Word check_hlds__typecheck___Source_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_1, (MR_Integer) 5)));

        check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ConsTypeVarSet_21);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__ConsType_27 = check_hlds__typecheck__ConsType0_23;
          check_hlds__typecheck__ArgTypes_28 = check_hlds__typecheck__ArgTypes0_24;
          check_hlds__typecheck__TypeAssign2_29 = check_hlds__typecheck__TypeAssign_10;
          check_hlds__typecheck__ConstraintsToAdd_30 = check_hlds__typecheck__ClassConstraints0_25;
        }
        else
        {
          MR_Word check_hlds__typecheck__TypeAssign1_31;
          MR_Word check_hlds__typecheck__ConsType1_32;
          MR_Word check_hlds__typecheck__ArgTypes1_33;
          MR_Word check_hlds__typecheck__Renaming_34;
          MR_Word check_hlds__typecheck__Var_41;
          MR_Word check_hlds__typecheck__Var_42;
          MR_Word check_hlds__typecheck__TypeVarSet0_54;
          MR_Word check_hlds__typecheck__TypeVarSet_55;

          {
            check_hlds__typecheck__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_41, 0) = ((MR_Box) (check_hlds__typecheck__ConsType0_23));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_41, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes0_24));
          }
          check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign_10, &check_hlds__typecheck__TypeVarSet0_54);
          parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typecheck__TypeVarSet0_54, check_hlds__typecheck__ConsTypeVarSet_21, &check_hlds__typecheck__TypeVarSet_55, &check_hlds__typecheck__Renaming_34);
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_34, check_hlds__typecheck__Var_41, &check_hlds__typecheck__Var_42);
          check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_55, check_hlds__typecheck__TypeAssign_10, &check_hlds__typecheck__TypeAssign1_31);
          check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Var_42)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__ConsType1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_42, (MR_Integer) 0)));
            check_hlds__typecheck__ArgTypes1_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_42, (MR_Integer) 1)));
            {
              MR_Word check_hlds__typecheck__ConsExistQVars_35;
              MR_Word check_hlds__typecheck__HeadTypeParams0_36;
              MR_Word check_hlds__typecheck__HeadTypeParams_37;

              parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(check_hlds__typecheck__Renaming_34, check_hlds__typecheck__ConsExistQVars0_22, &check_hlds__typecheck__ConsExistQVars_35);
              check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(check_hlds__typecheck__Renaming_34, check_hlds__typecheck__ClassConstraints0_25, &check_hlds__typecheck__ConstraintsToAdd_30);
              check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_31, &check_hlds__typecheck__HeadTypeParams0_36);
              check_hlds__typecheck__HeadTypeParams_37 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], check_hlds__typecheck__ConsExistQVars_35, check_hlds__typecheck__HeadTypeParams0_36);
              check_hlds__type_assign__type_assign_set_external_type_params_3_p_0(check_hlds__typecheck__HeadTypeParams_37, check_hlds__typecheck__TypeAssign1_31, &check_hlds__typecheck__TypeAssign2_29);
              check_hlds__typecheck__ConsType_27 = check_hlds__typecheck__ConsType1_32;
              check_hlds__typecheck__ArgTypes_28 = check_hlds__typecheck__ArgTypes1_33;
            }
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.get_cons_type_assign\'/3", (MR_String) "type_assign_rename_apart failed");
              return;
            }
          }
        }
        check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typecheck__TypeAssign2_29, &check_hlds__typecheck__OldConstraints_38);
        hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__typecheck__ConstraintsToAdd_30, check_hlds__typecheck__OldConstraints_38, &check_hlds__typecheck__ClassConstraints_39);
        check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(check_hlds__typecheck__ClassConstraints_39, check_hlds__typecheck__TypeAssign2_29, &check_hlds__typecheck__TypeAssign_40);
        {
          check_hlds__typecheck__ConsTypeAssign_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_13, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_40));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_13, 1) = ((MR_Box) (check_hlds__typecheck__ConsType_27));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_13, 2) = ((MR_Box) (check_hlds__typecheck__ArgTypes_28));
        }
        {
          check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_16_16, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeAssign_13));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_16_16, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_3));
        }
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__2_2 = check_hlds__typecheck__TypeAssigns_11;
          MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_16_16;

          check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__next_value_of_HeadVar__2_2;
          check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_3 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;
        }
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
  MR_Word check_hlds__typecheck__ConsId_4,
  MR_Word * check_hlds__typecheck__ConsType_5,
  MR_String * check_hlds__typecheck__BuiltinTypeName_6)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__BuiltinType_8;

    switch (MR_tag((MR_Word) check_hlds__typecheck__ConsId_4)) {
      default:
        check_hlds__typecheck__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_4, (MR_Integer) 0)))) {
          default:
            check_hlds__typecheck__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 5:
            {
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "int";
              check_hlds__typecheck__BuiltinType_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[4]);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 6:
            {
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "uint";
              check_hlds__typecheck__BuiltinType_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[8]);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 7:
            {
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "int8";
              check_hlds__typecheck__BuiltinType_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[3]);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "uint8";
              check_hlds__typecheck__BuiltinType_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[7]);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "int16";
              check_hlds__typecheck__BuiltinType_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[1]);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "uint16";
              check_hlds__typecheck__BuiltinType_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[5]);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 11:
            {
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "int32";
              check_hlds__typecheck__BuiltinType_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[2]);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 12:
            {
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "uint32";
              check_hlds__typecheck__BuiltinType_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[6]);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 13:
            {
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "float";
              check_hlds__typecheck__BuiltinType_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 15:
            {
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "string";
              check_hlds__typecheck__BuiltinType_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (check_hlds__typecheck__succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__typecheck__ConsType_5 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__typecheck__BuiltinType_8));
      }
      check_hlds__typecheck__succeeded = MR_TRUE;
    }
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_8_p_0(
  MR_Word check_hlds__typecheck__GoalContext_9,
  MR_Word check_hlds__typecheck__Context_10,
  MR_Word check_hlds__typecheck__Var_11,
  MR_Word check_hlds__typecheck__Type_12,
  MR_Word check_hlds__typecheck__TypeAssignSet0_13,
  MR_Word * check_hlds__typecheck__TypeAssignSet_14,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__TypeAssignSet1_16;
    MR_Word check_hlds__typecheck__Var_17;
    MR_Word check_hlds__typecheck__Var_18;

    check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_13, check_hlds__typecheck__Var_11, check_hlds__typecheck__Type_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_16);
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_13)) == (MR_mktag((MR_Integer) 1)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_13, (MR_Integer) 0)));
        check_hlds__typecheck__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_13, (MR_Integer) 1)));
      }
    }
    if (check_hlds__typecheck__succeeded)
    {
      MR_Word check_hlds__typecheck__ClauseContext_19;
      MR_Word check_hlds__typecheck__SpecAndMaybeActualExpected_20;
      MR_Word check_hlds__typecheck__Spec_21;
      MR_Word check_hlds__typecheck__Var_22;

      *check_hlds__typecheck__TypeAssignSet_14 = check_hlds__typecheck__TypeAssignSet0_13;
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ClauseContext_19);
      check_hlds__typecheck__SpecAndMaybeActualExpected_20 = check_hlds__typecheck_errors__report_error_var_6_f_0(check_hlds__typecheck__ClauseContext_19, check_hlds__typecheck__GoalContext_9, check_hlds__typecheck__Context_10, check_hlds__typecheck__Var_11, check_hlds__typecheck__Type_12, check_hlds__typecheck__TypeAssignSet0_13);
      check_hlds__typecheck__Spec_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_20, (MR_Integer) 0)));
      check_hlds__typecheck__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_20, (MR_Integer) 1)));
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_21, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
    }
    else
    {
      *check_hlds__typecheck__TypeAssignSet_14 = check_hlds__typecheck__TypeAssignSet1_16;
      *check_hlds__typecheck__STATE_VARIABLE_Info_24 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0(
  MR_Word check_hlds__typecheck__SimpleCallId_10,
  MR_Word check_hlds__typecheck__Context_11,
  MR_Word check_hlds__typecheck__GoalId_12,
  MR_Word check_hlds__typecheck__Args_13,
  MR_Word * check_hlds__typecheck__PredId_14,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_33,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_34)
{
  {
    MR_Word check_hlds__typecheck__ModuleInfo_17;
    MR_Word check_hlds__typecheck__PredicateTable_18;
    MR_Word check_hlds__typecheck__PorF_19;
    MR_Word check_hlds__typecheck__SymName_20;
    MR_Integer check_hlds__typecheck__Arity_21;
    MR_Word check_hlds__typecheck__IsFullyQualified_22;
    MR_Word check_hlds__typecheck__PredIds_23;

    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__ModuleInfo_17);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_17, &check_hlds__typecheck__PredicateTable_18);
    check_hlds__typecheck__PorF_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_10, (MR_Integer) 0)));
    check_hlds__typecheck__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_10, (MR_Integer) 1)));
    check_hlds__typecheck__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_10, (MR_Integer) 2)));
    check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__IsFullyQualified_22);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(check_hlds__typecheck__PredicateTable_18, check_hlds__typecheck__IsFullyQualified_22, check_hlds__typecheck__PorF_19, check_hlds__typecheck__SymName_20, check_hlds__typecheck__Arity_21, &check_hlds__typecheck__PredIds_23);
    if ((check_hlds__typecheck__PredIds_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word check_hlds__typecheck__ClauseContext_24;
      MR_Word check_hlds__typecheck__Spec_25;

      *check_hlds__typecheck__PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__ClauseContext_24);
      check_hlds__typecheck__Spec_25 = check_hlds__typecheck_errors__report_pred_call_error_3_f_0(check_hlds__typecheck__ClauseContext_24, check_hlds__typecheck__Context_11, check_hlds__typecheck__SimpleCallId_10);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_25, check_hlds__typecheck__STATE_VARIABLE_Info_0_33, check_hlds__typecheck__STATE_VARIABLE_Info_34);
      *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31;
    }
    else
    {
      MR_Word check_hlds__typecheck__HeadPredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__TailPredIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_38_38;

      if ((check_hlds__typecheck__TailPredIds_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__typecheck__ArgVectorKind_28;

        *check_hlds__typecheck__PredId_14 = check_hlds__typecheck__HeadPredId_26;
        {
          check_hlds__typecheck__ArgVectorKind_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorKind_28, 0) = ((MR_Box) (*check_hlds__typecheck__PredId_14));
        }
        check_hlds__typecheck__typecheck_call_pred_id_9_p_0(check_hlds__typecheck__ArgVectorKind_28, check_hlds__typecheck__Context_11, check_hlds__typecheck__GoalId_12, *check_hlds__typecheck__PredId_14, check_hlds__typecheck__Args_13, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__STATE_VARIABLE_Info_38_38);
      }
      else
      {
        MR_Word check_hlds__typecheck__Symbol_52;
        MR_Word check_hlds__typecheck__ModuleInfo_53;
        MR_Word check_hlds__typecheck__ClassTable_54;
        MR_Word check_hlds__typecheck__PredicateTable_55;
        MR_Word check_hlds__typecheck__Preds_56;
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_57;
        MR_Word check_hlds__typecheck__VarVectorKind_58;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_27_59;
        MR_Word check_hlds__typecheck__Var_61;
        MR_Word check_hlds__typecheck__PredId_71;
        MR_Word check_hlds__typecheck__PredIds_72;
        MR_Word check_hlds__typecheck__PredInfo_78;
        MR_Word check_hlds__typecheck__PredTypeVarSet_79;
        MR_Word check_hlds__typecheck__PredExistQVars_80;
        MR_Word check_hlds__typecheck__PredArgTypes_81;
        MR_Word check_hlds__typecheck__PredClassContext_82;
        MR_Word check_hlds__typecheck__TVarSet_83;
        MR_Word check_hlds__typecheck__PredConstraints_84;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_87;
        MR_Box check_hlds__typecheck__conv0_PredInfo_78;

        {
          check_hlds__typecheck__Symbol_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Symbol_52, 0) = ((MR_Box) (check_hlds__typecheck__SimpleCallId_10));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Symbol_52, 1) = ((MR_Box) (check_hlds__typecheck__PredIds_23));
        }
        check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(check_hlds__typecheck__Symbol_52, check_hlds__typecheck__Context_11, check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__STATE_VARIABLE_Info_27_59);
        check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_27_59, &check_hlds__typecheck__ModuleInfo_53);
        hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_53, &check_hlds__typecheck__ClassTable_54);
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_53, &check_hlds__typecheck__PredicateTable_55);
        hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_55, &check_hlds__typecheck__Preds_56);
        check_hlds__typecheck__PredId_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 0)));
        check_hlds__typecheck__PredIds_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 1)));
        mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__Preds_56, ((MR_Box) (check_hlds__typecheck__PredId_71)), &check_hlds__typecheck__conv0_PredInfo_78);
        check_hlds__typecheck__PredInfo_78 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_78);
        hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_78, &check_hlds__typecheck__PredTypeVarSet_79, &check_hlds__typecheck__PredExistQVars_80, &check_hlds__typecheck__PredArgTypes_81);
        hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_78, &check_hlds__typecheck__PredClassContext_82);
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__PredInfo_78, &check_hlds__typecheck__TVarSet_83);
        hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_54, check_hlds__typecheck__TVarSet_83, check_hlds__typecheck__GoalId_12, check_hlds__typecheck__PredClassContext_82, &check_hlds__typecheck__PredConstraints_84);
        check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31, check_hlds__typecheck__PredTypeVarSet_79, check_hlds__typecheck__PredExistQVars_80, check_hlds__typecheck__PredArgTypes_81, check_hlds__typecheck__PredConstraints_84, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_87);
        check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(check_hlds__typecheck__PredIds_72, check_hlds__typecheck__Preds_56, check_hlds__typecheck__ClassTable_54, check_hlds__typecheck__GoalId_12, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31, check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_87, &check_hlds__typecheck__ArgsTypeAssignSet_57);
        {
          check_hlds__typecheck__Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__typecheck__Var_61, 0) = ((MR_Box) (check_hlds__typecheck__SimpleCallId_10));
        }
        {
          check_hlds__typecheck__VarVectorKind_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__VarVectorKind_58, 0) = ((MR_Box) (check_hlds__typecheck__Var_61));
        }
        check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_58, (MR_Integer) 1, check_hlds__typecheck__Context_11, check_hlds__typecheck__Args_13, check_hlds__typecheck__ArgsTypeAssignSet_57, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_Info_27_59, &check_hlds__typecheck__STATE_VARIABLE_Info_38_38);
        *check_hlds__typecheck__PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      }
      check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_11, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32, check_hlds__typecheck__STATE_VARIABLE_Info_38_38, check_hlds__typecheck__STATE_VARIABLE_Info_34);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word check_hlds__typecheck__HeadVar__4_4,
  MR_Word check_hlds__typecheck__HeadVar__5_5,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6;
    else
    {
      MR_Word check_hlds__typecheck__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__PredIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__PredInfo_22;
      MR_Word check_hlds__typecheck__PredTypeVarSet_23;
      MR_Word check_hlds__typecheck__PredExistQVars_24;
      MR_Word check_hlds__typecheck__PredArgTypes_25;
      MR_Word check_hlds__typecheck__PredClassContext_26;
      MR_Word check_hlds__typecheck__TVarSet_27;
      MR_Word check_hlds__typecheck__PredConstraints_28;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31;
      MR_Box check_hlds__typecheck__conv0_PredInfo_22;

      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__HeadVar__2_2, ((MR_Box) (check_hlds__typecheck__PredId_15)), &check_hlds__typecheck__conv0_PredInfo_22);
      check_hlds__typecheck__PredInfo_22 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_22);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__PredTypeVarSet_23, &check_hlds__typecheck__PredExistQVars_24, &check_hlds__typecheck__PredArgTypes_25);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__PredClassContext_26);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__TVarSet_27);
      hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__TVarSet_27, check_hlds__typecheck__HeadVar__4_4, check_hlds__typecheck__PredClassContext_26, &check_hlds__typecheck__PredConstraints_28);
      check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__HeadVar__5_5, check_hlds__typecheck__PredTypeVarSet_23, check_hlds__typecheck__PredExistQVars_24, check_hlds__typecheck__PredArgTypes_25, check_hlds__typecheck__PredConstraints_28, check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6, &check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31);
      /* direct tailcall eliminated */
      {
        MR_Word check_hlds__typecheck__next_value_of_HeadVar__1_1 = check_hlds__typecheck__PredIds_16;
        MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_6 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31;

        check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__next_value_of_HeadVar__1_1;
        check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_6;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
{
  {
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv1_HeadVar__3_3;

    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv1_HeadVar__3_3);
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0(
  MR_Word check_hlds__typecheck__ArgVectorKind_10,
  MR_Word check_hlds__typecheck__Context_11,
  MR_Word check_hlds__typecheck__GoalId_12,
  MR_Word check_hlds__typecheck__PredId_13,
  MR_Word check_hlds__typecheck__Args_14,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_29,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_30)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__ModuleInfo_17;
    MR_Word check_hlds__typecheck__PredicateTable_18;
    MR_Word check_hlds__typecheck__Preds_19;
    MR_Word check_hlds__typecheck__PredInfo_20;
    MR_Word check_hlds__typecheck__PredTypeVarSet_21;
    MR_Word check_hlds__typecheck__PredExistQVars_22;
    MR_Word check_hlds__typecheck__PredArgTypes_23;
    MR_Word check_hlds__typecheck__PredClassContext_24;
    MR_Box check_hlds__typecheck__conv0_PredInfo_20;
    MR_Word check_hlds__typecheck__Var_31;
    MR_Word check_hlds__typecheck__Var_32;

    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_29, &check_hlds__typecheck__ModuleInfo_17);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_17, &check_hlds__typecheck__PredicateTable_18);
    hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_18, &check_hlds__typecheck__Preds_19);
    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__Preds_19, ((MR_Box) (check_hlds__typecheck__PredId_13)), &check_hlds__typecheck__conv0_PredInfo_20);
    check_hlds__typecheck__PredInfo_20 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_20);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_20, &check_hlds__typecheck__PredTypeVarSet_21, &check_hlds__typecheck__PredExistQVars_22, &check_hlds__typecheck__PredArgTypes_23);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_20, &check_hlds__typecheck__PredClassContext_24);
    check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__PredTypeVarSet_21);
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_24, (MR_Integer) 0)));
      check_hlds__typecheck__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_24, (MR_Integer) 1)));
      check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (check_hlds__typecheck__succeeded)
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (check_hlds__typecheck__succeeded)
    {
      MR_Word check_hlds__typecheck__Specs_51;
      MR_Word check_hlds__typecheck__MaybeArgVectorTypeErrors_52;
      MR_Word check_hlds__typecheck__ArgVectorTypeErrors_53;
      MR_Word check_hlds__typecheck__Var_64;
      MR_Word check_hlds__typecheck__Var_54;
      MR_Word check_hlds__typecheck__Var_55;
      MR_Word check_hlds__typecheck__Var_56;

      check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_29, check_hlds__typecheck__Context_11, check_hlds__typecheck__ArgVectorKind_10, (MR_Integer) 1, check_hlds__typecheck__Args_14, check_hlds__typecheck__PredArgTypes_23, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Specs_51, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[0]), &check_hlds__typecheck__MaybeArgVectorTypeErrors_52);
      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__MaybeArgVectorTypeErrors_52)) == (MR_mktag((MR_Integer) 1)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__ArgVectorTypeErrors_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeArgVectorTypeErrors_52, (MR_Integer) 0)));
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ArgVectorTypeErrors_53)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_53, (MR_Integer) 0)));
          check_hlds__typecheck__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_53, (MR_Integer) 1)));
          check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Var_64)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_64, (MR_Integer) 0)));
            check_hlds__typecheck__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_64, (MR_Integer) 1)));
          }
        }
      }
      if (check_hlds__typecheck__succeeded)
      {
        MR_Word check_hlds__typecheck__ClauseContext_57;
        MR_Word check_hlds__typecheck__AllArgsSpec_58;

        check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_29, &check_hlds__typecheck__ClauseContext_57);
        check_hlds__typecheck__AllArgsSpec_58 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(check_hlds__typecheck__ClauseContext_57, check_hlds__typecheck__Context_11, check_hlds__typecheck__ArgVectorKind_10, *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28, check_hlds__typecheck__ArgVectorTypeErrors_53);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__AllArgsSpec_58, check_hlds__typecheck__STATE_VARIABLE_Info_0_29, check_hlds__typecheck__STATE_VARIABLE_Info_30);
      }
      else
      {
        MR_Box check_hlds__typecheck__conv2_STATE_VARIABLE_Info_30;

        mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_6[1], check_hlds__typecheck__Specs_51, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_29)), &check_hlds__typecheck__conv2_STATE_VARIABLE_Info_30);
        *check_hlds__typecheck__STATE_VARIABLE_Info_30 = ((MR_Word) check_hlds__typecheck__conv2_STATE_VARIABLE_Info_30);
      }
    }
    else
    {
      MR_Word check_hlds__typecheck__ClassTable_25;
      MR_Word check_hlds__typecheck__PredConstraints_26;
      MR_Word check_hlds__typecheck__Var_35;
      MR_Word check_hlds__typecheck__ArgsTypeAssignSet_85;

      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_17, &check_hlds__typecheck__ClassTable_25);
      hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_25, check_hlds__typecheck__PredTypeVarSet_21, check_hlds__typecheck__GoalId_12, check_hlds__typecheck__PredClassContext_24, &check_hlds__typecheck__PredConstraints_26);
      {
        check_hlds__typecheck__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_35, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorKind_10));
      }
      check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27, check_hlds__typecheck__PredTypeVarSet_21, check_hlds__typecheck__PredExistQVars_22, check_hlds__typecheck__PredArgTypes_23, check_hlds__typecheck__PredConstraints_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_85);
      check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__Var_35, (MR_Integer) 1, check_hlds__typecheck__Context_11, check_hlds__typecheck__Args_14, check_hlds__typecheck__ArgsTypeAssignSet_85, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28, check_hlds__typecheck__STATE_VARIABLE_Info_0_29, check_hlds__typecheck__STATE_VARIABLE_Info_30);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
{
  {
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
    MR_Word check_hlds__typecheck__conv0_HeadVar__3_3;

    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_HeadVar__3_3);
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0(
  MR_Word check_hlds__typecheck__Context_8,
  MR_String check_hlds__typecheck__EventName_9,
  MR_Word check_hlds__typecheck__Args_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__ModuleInfo_13;
    MR_Word check_hlds__typecheck__EventSet_14;
    MR_Word check_hlds__typecheck__EventSpecMap_15;
    MR_String check_hlds__typecheck__Var_30;
    MR_Word check_hlds__typecheck__EventArgTypes_16;

    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ModuleInfo_13);
    hlds__hlds_module__module_info_get_event_set_2_p_0(check_hlds__typecheck__ModuleInfo_13, &check_hlds__typecheck__EventSet_14);
    check_hlds__typecheck__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__EventSet_14, (MR_Integer) 0)));
    check_hlds__typecheck__EventSpecMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__EventSet_14, (MR_Integer) 1)));
    check_hlds__typecheck__succeeded = parse_tree__prog_event__event_arg_types_3_p_0(check_hlds__typecheck__EventSpecMap_15, check_hlds__typecheck__EventName_9, &check_hlds__typecheck__EventArgTypes_16);
    if (check_hlds__typecheck__succeeded)
    {
      MR_Integer check_hlds__typecheck__NumArgs_17;
      MR_Integer check_hlds__typecheck__NumEventArgTypes_18;

      mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_10, &check_hlds__typecheck__NumArgs_17);
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__EventArgTypes_16, &check_hlds__typecheck__NumEventArgTypes_18);
      check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumArgs_17 == check_hlds__typecheck__NumEventArgTypes_18);
      if (check_hlds__typecheck__succeeded)
      {
        MR_Word check_hlds__typecheck__ArgVectorKind_19;
        MR_Word check_hlds__typecheck__Specs_43;
        MR_Word check_hlds__typecheck__MaybeArgVectorTypeErrors_44;
        MR_Word check_hlds__typecheck__ArgVectorTypeErrors_45;
        MR_Word check_hlds__typecheck__Var_56;
        MR_Word check_hlds__typecheck__Var_46;
        MR_Word check_hlds__typecheck__Var_47;
        MR_Word check_hlds__typecheck__Var_48;

        {
          check_hlds__typecheck__ArgVectorKind_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_19, 1) = ((MR_Box) (check_hlds__typecheck__EventName_9));
        }
        check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__Context_8, check_hlds__typecheck__ArgVectorKind_19, (MR_Integer) 1, check_hlds__typecheck__Args_10, check_hlds__typecheck__EventArgTypes_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Specs_43, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[0]), &check_hlds__typecheck__MaybeArgVectorTypeErrors_44);
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__MaybeArgVectorTypeErrors_44)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__ArgVectorTypeErrors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeArgVectorTypeErrors_44, (MR_Integer) 0)));
          check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ArgVectorTypeErrors_45)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_45, (MR_Integer) 0)));
            check_hlds__typecheck__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_45, (MR_Integer) 1)));
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Var_56)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_56, (MR_Integer) 0)));
              check_hlds__typecheck__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_56, (MR_Integer) 1)));
            }
          }
        }
        if (check_hlds__typecheck__succeeded)
        {
          MR_Word check_hlds__typecheck__ClauseContext_49;
          MR_Word check_hlds__typecheck__AllArgsSpec_50;

          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ClauseContext_49);
          check_hlds__typecheck__AllArgsSpec_50 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(check_hlds__typecheck__ClauseContext_49, check_hlds__typecheck__Context_8, check_hlds__typecheck__ArgVectorKind_19, *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22, check_hlds__typecheck__ArgVectorTypeErrors_45);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__AllArgsSpec_50, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
        }
        else
        {
          MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_24;

          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_6[0], check_hlds__typecheck__Specs_43, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_23)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_24);
          *check_hlds__typecheck__STATE_VARIABLE_Info_24 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_24);
        }
      }
      else
      {
        MR_Word check_hlds__typecheck__Spec_20;

        check_hlds__typecheck__Spec_20 = check_hlds__typecheck_errors__report_event_args_mismatch_4_f_0(check_hlds__typecheck__Context_8, check_hlds__typecheck__EventName_9, check_hlds__typecheck__EventArgTypes_16, check_hlds__typecheck__Args_10);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_20, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21;
      }
    }
    else
    {
      MR_Word check_hlds__typecheck__Spec_29;

      check_hlds__typecheck__Spec_29 = check_hlds__typecheck_errors__report_unknown_event_call_error_2_f_0(check_hlds__typecheck__Context_8, check_hlds__typecheck__EventName_9);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
      *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(
  MR_Word check_hlds__typecheck__Info_1,
  MR_Word check_hlds__typecheck__Context_2,
  MR_Word check_hlds__typecheck__ArgVectorKind_3,
  MR_Integer check_hlds__typecheck__ArgNum_4,
  MR_Word check_hlds__typecheck__HeadVar__5_5,
  MR_Word check_hlds__typecheck__HeadVar__6_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_9,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((check_hlds__typecheck__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__typecheck__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_12 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
        *check_hlds__typecheck__STATE_VARIABLE_Specs_10 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_9;
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
          return;
        }
      }
    else
    if ((check_hlds__typecheck__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word check_hlds__typecheck__Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__6_6, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__Types_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__6_6, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_79_79;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_80_80;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_81_81;
      MR_Integer check_hlds__typecheck__Var_82;
      MR_Word check_hlds__typecheck__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 0)));

      check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(check_hlds__typecheck__Info_1, check_hlds__typecheck__Context_2, check_hlds__typecheck__ArgVectorKind_3, check_hlds__typecheck__ArgNum_4, check_hlds__typecheck__Var_88, check_hlds__typecheck__Type_68, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_79_79, check_hlds__typecheck__STATE_VARIABLE_Specs_0_9, &check_hlds__typecheck__STATE_VARIABLE_Specs_80_80, check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11, &check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_81_81);
      check_hlds__typecheck__Var_82 = (check_hlds__typecheck__ArgNum_4 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      {
        MR_Integer check_hlds__typecheck__next_value_of_ArgNum_4 = check_hlds__typecheck__Var_82;
        MR_Word check_hlds__typecheck__next_value_of_HeadVar__5_5 = check_hlds__typecheck__Var_87;
        MR_Word check_hlds__typecheck__next_value_of_HeadVar__6_6 = check_hlds__typecheck__Types_69;
        MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_79_79;
        MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_Specs_0_9 = check_hlds__typecheck__STATE_VARIABLE_Specs_80_80;
        MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_81_81;

        check_hlds__typecheck__ArgNum_4 = check_hlds__typecheck__next_value_of_ArgNum_4;
        check_hlds__typecheck__HeadVar__5_5 = check_hlds__typecheck__next_value_of_HeadVar__5_5;
        check_hlds__typecheck__HeadVar__6_6 = check_hlds__typecheck__next_value_of_HeadVar__6_6;
        check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_7;
        check_hlds__typecheck__STATE_VARIABLE_Specs_0_9 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_Specs_0_9;
        check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(
  MR_Word check_hlds__typecheck__Info_13,
  MR_Word check_hlds__typecheck__Context_14,
  MR_Word check_hlds__typecheck__ArgVectorKind_15,
  MR_Integer check_hlds__typecheck__ArgNum_16,
  MR_Word check_hlds__typecheck__Var_17,
  MR_Word check_hlds__typecheck__Type_18,
  MR_Word check_hlds__typecheck__TypeAssignSet0_19,
  MR_Word * check_hlds__typecheck__TypeAssignSet_20,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_35,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_36,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__TypeAssignSet1_23;
    MR_Word check_hlds__typecheck__Var_24;
    MR_Word check_hlds__typecheck__Var_25;

    check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_19, check_hlds__typecheck__Var_17, check_hlds__typecheck__Type_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_23);
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_19)) == (MR_mktag((MR_Integer) 1)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_19, (MR_Integer) 0)));
        check_hlds__typecheck__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_19, (MR_Integer) 1)));
      }
    }
    if (check_hlds__typecheck__succeeded)
    {
      MR_Word check_hlds__typecheck__ClauseContext_26;
      MR_Word check_hlds__typecheck__GoalContext_27;
      MR_Word check_hlds__typecheck__SpecAndMaybeActualExpected_28;
      MR_Word check_hlds__typecheck__Spec_29;
      MR_Word check_hlds__typecheck__MaybeActualExpected_30;
      MR_Word check_hlds__typecheck__Var_40;

      *check_hlds__typecheck__TypeAssignSet_20 = check_hlds__typecheck__TypeAssignSet0_19;
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__Info_13, &check_hlds__typecheck__ClauseContext_26);
      {
        check_hlds__typecheck__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_40, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorKind_15));
      }
      {
        check_hlds__typecheck__GoalContext_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_27, 0) = ((MR_Box) (check_hlds__typecheck__Var_40));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_27, 1) = ((MR_Box) (check_hlds__typecheck__ArgNum_16));
      }
      check_hlds__typecheck__SpecAndMaybeActualExpected_28 = check_hlds__typecheck_errors__report_error_var_6_f_0(check_hlds__typecheck__ClauseContext_26, check_hlds__typecheck__GoalContext_27, check_hlds__typecheck__Context_14, check_hlds__typecheck__Var_17, check_hlds__typecheck__Type_18, check_hlds__typecheck__TypeAssignSet0_19);
      check_hlds__typecheck__Spec_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_28, (MR_Integer) 0)));
      check_hlds__typecheck__MaybeActualExpected_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_28, (MR_Integer) 1)));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__typecheck__STATE_VARIABLE_Specs_36 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Spec_29));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Specs_0_35));
      }
      if ((check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37;
      else
      if ((check_hlds__typecheck__MaybeActualExpected_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word check_hlds__typecheck__ArgVectorTypeErrors0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__ActualExpected_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeActualExpected_30, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__ArgVectorTypeError_33;
        MR_Word check_hlds__typecheck__ArgVectorTypeErrors_34;

        {
          check_hlds__typecheck__ArgVectorTypeError_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgVectorTypeError_33, 0) = ((MR_Box) (check_hlds__typecheck__ArgNum_16));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgVectorTypeError_33, 1) = ((MR_Box) (check_hlds__typecheck__Var_17));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgVectorTypeError_33, 2) = ((MR_Box) (check_hlds__typecheck__ActualExpected_32));
        }
        {
          check_hlds__typecheck__ArgVectorTypeErrors_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_34, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorTypeError_33));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgVectorTypeErrors0_31));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorTypeErrors_34));
        }
      }
    }
    else
    {
      *check_hlds__typecheck__TypeAssignSet_20 = check_hlds__typecheck__TypeAssignSet1_23;
      *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37;
      *check_hlds__typecheck__STATE_VARIABLE_Specs_36 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_35;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__Var_2,
  MR_Word check_hlds__typecheck__Type_3,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
      else
      {
        MR_Word check_hlds__typecheck__TypeAssign0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__TypeAssigns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;
        MR_Word check_hlds__typecheck__VarTypes0_26;
        MR_Word check_hlds__typecheck__MaybeOldVarType_27;
        MR_Word check_hlds__typecheck__VarTypes_28;

        check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__VarTypes0_26);
        hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_3, &check_hlds__typecheck__MaybeOldVarType_27, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_28);
        if ((check_hlds__typecheck__MaybeOldVarType_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word check_hlds__typecheck__TypeAssign_31;

          check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_28, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_31);
          {
            check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_31));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
          }
        }
        else
        {
          MR_Word check_hlds__typecheck__OldVarType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_27, (MR_Integer) 0)));
          MR_Word check_hlds__typecheck__TypeAssign1_30;
          MR_Word check_hlds__typecheck__HeadTypeParams_39;
          MR_Word check_hlds__typecheck__TypeBindings0_40;
          MR_Word check_hlds__typecheck__TypeBindings_41;

          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__HeadTypeParams_39);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeBindings0_40);
          check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_29, check_hlds__typecheck__Type_3, check_hlds__typecheck__HeadTypeParams_39, check_hlds__typecheck__TypeBindings0_40, &check_hlds__typecheck__TypeBindings_41);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_41, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign1_30);
            check_hlds__typecheck__succeeded = MR_TRUE;
          }
          if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_30));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
            }
          else
            check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
        }
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__1_1 = check_hlds__typecheck__TypeAssigns0_12;
          MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;

          check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__next_value_of_HeadVar__1_1;
          check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_9_p_0(
  MR_Word check_hlds__typecheck__GenericCallId_10,
  MR_Word check_hlds__typecheck__Context_11,
  MR_Word check_hlds__typecheck__PredVar_12,
  MR_Word check_hlds__typecheck__Purity_13,
  MR_Word check_hlds__typecheck__Args_14,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27)
{
  {
    MR_Word check_hlds__typecheck__TypeCtorInfo_17_45;
    MR_Integer check_hlds__typecheck__Arity_17;
    MR_Word check_hlds__typecheck__TypeVarSet_18;
    MR_Word check_hlds__typecheck__PredVarType_19;
    MR_Word check_hlds__typecheck__ArgTypes_20;
    MR_Word check_hlds__typecheck__VarVectorKind_21;
    MR_Word check_hlds__typecheck__EmptyConstraints_22;
    MR_Word check_hlds__typecheck__Var_29;
    MR_Word check_hlds__typecheck__Var_30;
    MR_Word check_hlds__typecheck__Var_31;
    MR_Word check_hlds__typecheck__TypeVarSet0_41;
    MR_Word check_hlds__typecheck__ArgTypeVars_42;
    MR_Word check_hlds__typecheck__Var_43;
    MR_Word check_hlds__typecheck__ArgsTypeAssignSet_60;

    mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_14, &check_hlds__typecheck__Arity_17);
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    check_hlds__typecheck__TypeCtorInfo_17_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_17_45, &check_hlds__typecheck__TypeVarSet0_41);
    mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_17_45, check_hlds__typecheck__Arity_17, &check_hlds__typecheck__ArgTypeVars_42, check_hlds__typecheck__TypeVarSet0_41, &check_hlds__typecheck__TypeVarSet_18);
    check_hlds__typecheck__Var_43 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__Var_43, check_hlds__typecheck__ArgTypeVars_42, &check_hlds__typecheck__ArgTypes_20);
    parse_tree__prog_type__construct_higher_order_type_5_p_0(check_hlds__typecheck__Purity_13, (MR_Integer) 0, check_hlds__typecheck__ArgTypes_20, &check_hlds__typecheck__PredVarType_19);
    {
      check_hlds__typecheck__Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_29, 1) = ((MR_Box) (check_hlds__typecheck__GenericCallId_10));
    }
    {
      check_hlds__typecheck__VarVectorKind_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__VarVectorKind_21, 0) = ((MR_Box) (check_hlds__typecheck__Var_29));
    }
    hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_22);
    {
      check_hlds__typecheck__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_30, 0) = ((MR_Box) (check_hlds__typecheck__PredVar_12));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_30, 1) = ((MR_Box) (check_hlds__typecheck__Args_14));
    }
    {
      check_hlds__typecheck__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_31, 0) = ((MR_Box) (check_hlds__typecheck__PredVarType_19));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_31, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_20));
    }
    check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24, check_hlds__typecheck__TypeVarSet_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Var_31, check_hlds__typecheck__EmptyConstraints_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_60);
    check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_21, (MR_Integer) 1, check_hlds__typecheck__Context_11, check_hlds__typecheck__Var_30, check_hlds__typecheck__ArgsTypeAssignSet_60, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__STATE_VARIABLE_Info_27);
  }
}

static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0(
  MR_Word check_hlds__typecheck__VarVectorKind_8,
  MR_Word check_hlds__typecheck__Context_9,
  MR_Word check_hlds__typecheck__Vars_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_24,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_25)
{
  if ((check_hlds__typecheck__Vars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22;
    *check_hlds__typecheck__STATE_VARIABLE_Info_25 = check_hlds__typecheck__STATE_VARIABLE_Info_0_24;
  }
  else
  {
    MR_Word check_hlds__typecheck__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    MR_Word check_hlds__typecheck__TypeVarSet0_15;
    MR_Word check_hlds__typecheck__TypeVar_16;
    MR_Word check_hlds__typecheck__TypeVarSet_17;
    MR_Word check_hlds__typecheck__Type_18;
    MR_Integer check_hlds__typecheck__NumVars_19;
    MR_Word check_hlds__typecheck__Types_20;
    MR_Word check_hlds__typecheck__EmptyConstraints_21;
    MR_Word check_hlds__typecheck__ArgsTypeAssignSet_45;

    mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, &check_hlds__typecheck__TypeVarSet0_15);
    mercury__varset__new_var_3_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, &check_hlds__typecheck__TypeVar_16, check_hlds__typecheck__TypeVarSet0_15, &check_hlds__typecheck__TypeVarSet_17);
    {
      check_hlds__typecheck__Type_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_16));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Vars_10, &check_hlds__typecheck__NumVars_19);
    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__NumVars_19, ((MR_Box) (check_hlds__typecheck__Type_18)), &check_hlds__typecheck__Types_20);
    hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_21);
    check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22, check_hlds__typecheck__TypeVarSet_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Types_20, check_hlds__typecheck__EmptyConstraints_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_45);
    check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_8, (MR_Integer) 1, check_hlds__typecheck__Context_9, check_hlds__typecheck__Vars_10, check_hlds__typecheck__ArgsTypeAssignSet_45, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23, check_hlds__typecheck__STATE_VARIABLE_Info_0_24, check_hlds__typecheck__STATE_VARIABLE_Info_25);
  }
}

static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_7_p_0(
  MR_Word check_hlds__typecheck__VarVectorKind_8,
  MR_Word check_hlds__typecheck__Context_9,
  MR_Word check_hlds__typecheck__Vars_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
{
  if ((check_hlds__typecheck__Vars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21;
    *check_hlds__typecheck__STATE_VARIABLE_Info_24 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Word check_hlds__typecheck__TypeCtorInfo_30_30;
    MR_Integer check_hlds__typecheck__NumVars_15;
    MR_Word check_hlds__typecheck__TypeVarSet0_16;
    MR_Word check_hlds__typecheck__TypeVars_17;
    MR_Word check_hlds__typecheck__TypeVarSet_18;
    MR_Word check_hlds__typecheck__Types_19;
    MR_Word check_hlds__typecheck__EmptyConstraints_20;
    MR_Word check_hlds__typecheck__Var_25;
    MR_Word check_hlds__typecheck__ArgsTypeAssignSet_45;

    mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Vars_10, &check_hlds__typecheck__NumVars_15);
    check_hlds__typecheck__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, &check_hlds__typecheck__TypeVarSet0_16);
    mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, check_hlds__typecheck__NumVars_15, &check_hlds__typecheck__TypeVars_17, check_hlds__typecheck__TypeVarSet0_16, &check_hlds__typecheck__TypeVarSet_18);
    check_hlds__typecheck__Var_25 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__Var_25, check_hlds__typecheck__TypeVars_17, &check_hlds__typecheck__Types_19);
    hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_20);
    check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21, check_hlds__typecheck__TypeVarSet_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Types_19, check_hlds__typecheck__EmptyConstraints_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_45);
    check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_8, (MR_Integer) 1, check_hlds__typecheck__Context_9, check_hlds__typecheck__Vars_10, check_hlds__typecheck__ArgsTypeAssignSet_45, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(
  MR_Word check_hlds__typecheck__VarVectorKind_1,
  MR_Integer check_hlds__typecheck__ArgNum_2,
  MR_Word check_hlds__typecheck__Context_3,
  MR_Word check_hlds__typecheck__HeadVar__4_4,
  MR_Word check_hlds__typecheck__HeadVar__5_5,
  MR_Word * check_hlds__typecheck__TypeAssignSet_6,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__typecheck__TypeAssignSet_6 = check_hlds__type_assign__convert_args_type_assign_set_check_empty_args_1_f_0(check_hlds__typecheck__HeadVar__5_5);
        *check_hlds__typecheck__STATE_VARIABLE_Info_8 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
      }
      else
      {
        MR_Word check_hlds__typecheck__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__ArgTypeAssignSet1_26;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_29_29;
        MR_Integer check_hlds__typecheck__Var_30;
        MR_Word check_hlds__typecheck__ArgTypeAssignSet1_41;
        MR_Word check_hlds__typecheck__Var_42;
        MR_Word check_hlds__typecheck__Var_43;

        check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(check_hlds__typecheck__HeadVar__5_5, check_hlds__typecheck__Var_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgTypeAssignSet1_41);
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgTypeAssignSet1_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 0)));
            check_hlds__typecheck__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 1)));
          }
        }
        if (check_hlds__typecheck__succeeded)
        {
          MR_Word check_hlds__typecheck__GoalContext_25;
          MR_Word check_hlds__typecheck__ClauseContext_44;
          MR_Word check_hlds__typecheck__Spec_45;
          MR_Word check_hlds__typecheck__ArgTypeAssign_50;
          MR_Word check_hlds__typecheck__ArgTypeAssigns_51;
          MR_Word check_hlds__typecheck__TypeAssign_52;
          MR_Word check_hlds__typecheck__Args0_53;
          MR_Word check_hlds__typecheck__Constraints_54;
          MR_Word check_hlds__typecheck__Args_56;

          {
            check_hlds__typecheck__GoalContext_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_25, 0) = ((MR_Box) (check_hlds__typecheck__VarVectorKind_1));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_25, 1) = ((MR_Box) (check_hlds__typecheck__ArgNum_2));
          }
          check_hlds__typecheck__TypeAssign_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_42, (MR_Integer) 0)));
          check_hlds__typecheck__Args0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_42, (MR_Integer) 1)));
          check_hlds__typecheck__Constraints_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_42, (MR_Integer) 2)));
          if ((check_hlds__typecheck__Args0_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.delete_first_arg_in_each_arg_type_assign\'/2", (MR_String) "skip_arg");
              return;
            }
          }
          else
          {
            MR_Word check_hlds__typecheck__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_53, (MR_Integer) 0)));

            check_hlds__typecheck__Args_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_53, (MR_Integer) 1)));
          }
          {
            check_hlds__typecheck__ArgTypeAssign_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_50, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_52));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_50, 1) = ((MR_Box) (check_hlds__typecheck__Args_56));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_50, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_54));
          }
          check_hlds__typecheck__delete_first_arg_in_each_arg_type_assign_2_p_0(check_hlds__typecheck__Var_43, &check_hlds__typecheck__ArgTypeAssigns_51);
          {
            check_hlds__typecheck__ArgTypeAssignSet1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypeAssignSet1_26, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_50));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypeAssignSet1_26, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssigns_51));
          }
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__ClauseContext_44);
          check_hlds__typecheck__Spec_45 = check_hlds__typecheck_errors__report_error_arg_var_5_f_0(check_hlds__typecheck__ClauseContext_44, check_hlds__typecheck__GoalContext_25, check_hlds__typecheck__Context_3, check_hlds__typecheck__Var_20, check_hlds__typecheck__HeadVar__5_5);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_45, check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__STATE_VARIABLE_Info_29_29);
        }
        else
        {
          check_hlds__typecheck__ArgTypeAssignSet1_26 = check_hlds__typecheck__ArgTypeAssignSet1_41;
          check_hlds__typecheck__STATE_VARIABLE_Info_29_29 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
        }
        check_hlds__typecheck__Var_30 = (check_hlds__typecheck__ArgNum_2 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer check_hlds__typecheck__next_value_of_ArgNum_2 = check_hlds__typecheck__Var_30;
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__4_4 = check_hlds__typecheck__Vars_21;
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__5_5 = check_hlds__typecheck__ArgTypeAssignSet1_26;
          MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_Info_0_7 = check_hlds__typecheck__STATE_VARIABLE_Info_29_29;

          check_hlds__typecheck__ArgNum_2 = check_hlds__typecheck__next_value_of_ArgNum_2;
          check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__next_value_of_HeadVar__4_4;
          check_hlds__typecheck__HeadVar__5_5 = check_hlds__typecheck__next_value_of_HeadVar__5_5;
          check_hlds__typecheck__STATE_VARIABLE_Info_0_7 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_Info_0_7;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__Var_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__HeadVar__3_3;
      else
      {
        MR_Word check_hlds__typecheck__ArgsTypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__ArgsTypeAssignSets_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__TypeAssign0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__ArgTypes0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__ClassContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18;
        MR_Word check_hlds__typecheck__VarTypes0_27;

        check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__VarTypes0_27);
        if ((check_hlds__typecheck__ArgTypes0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.arg_type_assign_var_has_type\'/6", (MR_String) "ArgTypes0 = []");
            return;
          }
        }
        else
        {
          MR_Word check_hlds__typecheck__Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes0_14, (MR_Integer) 0)));
          MR_Word check_hlds__typecheck__ArgTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes0_14, (MR_Integer) 1)));
          MR_Word check_hlds__typecheck__MaybeOldVarType_30;
          MR_Word check_hlds__typecheck__VarTypes_31;

          hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_28, &check_hlds__typecheck__MaybeOldVarType_30, check_hlds__typecheck__VarTypes0_27, &check_hlds__typecheck__VarTypes_31);
          if ((check_hlds__typecheck__MaybeOldVarType_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__typecheck__TypeAssign_35;
            MR_Word check_hlds__typecheck__NewTypeAssign_41;

            check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_31, check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeAssign_35);
            {
              check_hlds__typecheck__NewTypeAssign_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_35));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_29));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 2) = ((MR_Box) (check_hlds__typecheck__ClassContext_15));
            }
            {
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__NewTypeAssign_41));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__HeadVar__3_3));
            }
          }
          else
          {
            MR_Word check_hlds__typecheck__OldVarType_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_30, (MR_Integer) 0)));
            MR_Word check_hlds__typecheck__TypeAssign1_33;
            MR_Word check_hlds__typecheck__HeadTypeParams_46;
            MR_Word check_hlds__typecheck__TypeBindings0_47;
            MR_Word check_hlds__typecheck__TypeBindings_48;

            check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__HeadTypeParams_46);
            check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeBindings0_47);
            check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_32, check_hlds__typecheck__Type_28, check_hlds__typecheck__HeadTypeParams_46, check_hlds__typecheck__TypeBindings0_47, &check_hlds__typecheck__TypeBindings_48);
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_48, check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeAssign1_33);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
            if (check_hlds__typecheck__succeeded)
            {
              MR_Word check_hlds__typecheck__NewTypeAssign_34;

              {
                check_hlds__typecheck__NewTypeAssign_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_33));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_29));
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 2) = ((MR_Box) (check_hlds__typecheck__ClassContext_15));
              }
              {
                check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__NewTypeAssign_34));
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__HeadVar__3_3));
              }
            }
            else
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = check_hlds__typecheck__HeadVar__3_3;
          }
        }
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__1_1 = check_hlds__typecheck__ArgsTypeAssignSets_10;
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__3_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18;

          check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__next_value_of_HeadVar__1_1;
          check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__next_value_of_HeadVar__3_3;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__delete_first_arg_in_each_arg_type_assign_2_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__HeadVar__2_2)
{
  if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word check_hlds__typecheck__ArgTypeAssign0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__ArgTypeAssigns0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__ArgTypeAssign_5;
    MR_Word check_hlds__typecheck__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 2)));
    MR_Word check_hlds__typecheck__Args_11;
    MR_Word * check_hlds__typecheck__AddrArgTypeAssigns_15;

    if ((check_hlds__typecheck__Args0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.delete_first_arg_in_each_arg_type_assign\'/2", (MR_String) "skip_arg");
        return;
      }
    }
    else
    {
      MR_Word check_hlds__typecheck__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 0)));

      check_hlds__typecheck__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 1)));
    }
    {
      check_hlds__typecheck__ArgTypeAssign_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_7));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 1) = ((MR_Box) (check_hlds__typecheck__Args_11));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__typecheck__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_5));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    check_hlds__typecheck__AddrArgTypeAssigns_15 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1));
    check_hlds__typecheck__LCMCpr_delete_first_arg_in_each_arg_type_assign_1_2_p_0(check_hlds__typecheck__ArgTypeAssigns0_4, check_hlds__typecheck__AddrArgTypeAssigns_15);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_delete_first_arg_in_each_arg_type_assign_1_2_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_16)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__typecheck__AddrOfHeadVar__2_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word check_hlds__typecheck__ArgTypeAssign0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__ArgTypeAssigns0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__ArgTypeAssign_5;
      MR_Word check_hlds__typecheck__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 2)));
      MR_Word check_hlds__typecheck__Args_11;
      MR_Word * check_hlds__typecheck__AddrArgTypeAssigns_15;
      MR_Word check_hlds__typecheck__HeadVar__2_17;

      if ((check_hlds__typecheck__Args0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.delete_first_arg_in_each_arg_type_assign\'/2", (MR_String) "skip_arg");
          return;
        }
      }
      else
      {
        MR_Word check_hlds__typecheck__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 0)));

        check_hlds__typecheck__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 1)));
      }
      {
        check_hlds__typecheck__ArgTypeAssign_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_7));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 1) = ((MR_Box) (check_hlds__typecheck__Args_11));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_9));
      }
      {
        check_hlds__typecheck__HeadVar__2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_17, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_5));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_17, 1) = NULL;
      }
      check_hlds__typecheck__AddrArgTypeAssigns_15 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_17, (MR_Integer) 1));
      *check_hlds__typecheck__AddrOfHeadVar__2_16 = check_hlds__typecheck__HeadVar__2_17;
      /* direct tailcall eliminated */
      {
        MR_Word check_hlds__typecheck__next_value_of_HeadVar__1_1 = check_hlds__typecheck__ArgTypeAssigns0_4;
        MR_Word * check_hlds__typecheck__next_value_of_AddrOfHeadVar__2_16 = check_hlds__typecheck__AddrArgTypeAssigns_15;

        check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__next_value_of_HeadVar__1_1;
        check_hlds__typecheck__AddrOfHeadVar__2_16 = check_hlds__typecheck__next_value_of_AddrOfHeadVar__2_16;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__PredTypeVarSet_2,
  MR_Word check_hlds__typecheck__PredExistQVars_3,
  MR_Word check_hlds__typecheck__PredArgTypes_4,
  MR_Word check_hlds__typecheck__PredConstraints_5,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6;
    else
    {
      MR_Word check_hlds__typecheck__TypeAssign0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__TypeAssigns0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__TypeAssign1_22;
      MR_Word check_hlds__typecheck__ParentArgTypes_23;
      MR_Word check_hlds__typecheck__Renaming_24;
      MR_Word check_hlds__typecheck__ParentExistQVars_25;
      MR_Word check_hlds__typecheck__ParentConstraints_26;
      MR_Word check_hlds__typecheck__HeadTypeParams0_27;
      MR_Word check_hlds__typecheck__HeadTypeParams_28;
      MR_Word check_hlds__typecheck__TypeAssign_29;
      MR_Word check_hlds__typecheck__NewArgTypeAssign_30;
      MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33;
      MR_Word check_hlds__typecheck__TypeVarSet0_42;
      MR_Word check_hlds__typecheck__TypeVarSet_43;

      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_15, &check_hlds__typecheck__TypeVarSet0_42);
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typecheck__TypeVarSet0_42, check_hlds__typecheck__PredTypeVarSet_2, &check_hlds__typecheck__TypeVarSet_43, &check_hlds__typecheck__Renaming_24);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredArgTypes_4, &check_hlds__typecheck__ParentArgTypes_23);
      check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_43, check_hlds__typecheck__TypeAssign0_15, &check_hlds__typecheck__TypeAssign1_22);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredExistQVars_3, &check_hlds__typecheck__ParentExistQVars_25);
      check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredConstraints_5, &check_hlds__typecheck__ParentConstraints_26);
      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_22, &check_hlds__typecheck__HeadTypeParams0_27);
      mercury__list__append_3_p_1((MR_Word) &check_hlds__typecheck_scalar_common_1[1], check_hlds__typecheck__ParentExistQVars_25, check_hlds__typecheck__HeadTypeParams0_27, &check_hlds__typecheck__HeadTypeParams_28);
      check_hlds__type_assign__type_assign_set_external_type_params_3_p_0(check_hlds__typecheck__HeadTypeParams_28, check_hlds__typecheck__TypeAssign1_22, &check_hlds__typecheck__TypeAssign_29);
      {
        check_hlds__typecheck__NewArgTypeAssign_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_29));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 1) = ((MR_Box) (check_hlds__typecheck__ParentArgTypes_23));
        MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 2) = ((MR_Box) (check_hlds__typecheck__ParentConstraints_26));
      }
      {
        check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33, 0) = ((MR_Box) (check_hlds__typecheck__NewArgTypeAssign_30));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6));
      }
      /* direct tailcall eliminated */
      {
        MR_Word check_hlds__typecheck__next_value_of_HeadVar__1_1 = check_hlds__typecheck__TypeAssigns0_16;
        MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_ArgTypeAssigns_0_6 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33;

        check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__next_value_of_HeadVar__1_1;
        check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_ArgTypeAssigns_0_6;
      }
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1)
{
  {
    MR_Word check_hlds__typecheck__HeadVar__2_2;

    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word check_hlds__typecheck__I_3;
      MR_Word check_hlds__typecheck__O_4;
      MR_Word check_hlds__typecheck__Interfaces_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__Var_7;
      MR_Word * check_hlds__typecheck__AddrSCCcallarg8_9;

      check_hlds__typecheck__I_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_6, (MR_Integer) 0)));
      check_hlds__typecheck__O_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_6, (MR_Integer) 1)));
      {
        check_hlds__typecheck__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_7, 0) = ((MR_Box) (check_hlds__typecheck__O_4));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_7, 1) = NULL;
      }
      check_hlds__typecheck__AddrSCCcallarg8_9 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_7, (MR_Integer) 1));
      {
        check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__typecheck__I_3));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__typecheck__Var_7));
      }
      check_hlds__typecheck__LCMCfn_atomic_interface_list_to_var_list_1_2_p_0(check_hlds__typecheck__Interfaces_5, check_hlds__typecheck__AddrSCCcallarg8_9);
    }
    return check_hlds__typecheck__HeadVar__2_2;
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCfn_atomic_interface_list_to_var_list_1_2_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__typecheck__AddrOfHeadVar__2_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word check_hlds__typecheck__I_3;
      MR_Word check_hlds__typecheck__O_4;
      MR_Word check_hlds__typecheck__Interfaces_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__Var_7;
      MR_Word * check_hlds__typecheck__AddrSCCcallarg8_9;
      MR_Word check_hlds__typecheck__HeadVar__2_11;

      check_hlds__typecheck__I_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_6, (MR_Integer) 0)));
      check_hlds__typecheck__O_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_6, (MR_Integer) 1)));
      {
        check_hlds__typecheck__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_7, 0) = ((MR_Box) (check_hlds__typecheck__O_4));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_7, 1) = NULL;
      }
      check_hlds__typecheck__AddrSCCcallarg8_9 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_7, (MR_Integer) 1));
      {
        check_hlds__typecheck__HeadVar__2_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_11, 0) = ((MR_Box) (check_hlds__typecheck__I_3));
        MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_11, 1) = ((MR_Box) (check_hlds__typecheck__Var_7));
      }
      *check_hlds__typecheck__AddrOfHeadVar__2_10 = check_hlds__typecheck__HeadVar__2_11;
      /* direct tailcall eliminated */
      {
        MR_Word check_hlds__typecheck__next_value_of_HeadVar__1_1 = check_hlds__typecheck__Interfaces_5;
        MR_Word * check_hlds__typecheck__next_value_of_AddrOfHeadVar__2_10 = check_hlds__typecheck__AddrSCCcallarg8_9;

        check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__next_value_of_HeadVar__1_1;
        check_hlds__typecheck__AddrOfHeadVar__2_10 = check_hlds__typecheck__next_value_of_AddrOfHeadVar__2_10;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(
  MR_Word check_hlds__typecheck__Context_7,
  MR_Word check_hlds__typecheck__StuffToCheck_8,
  MR_Word check_hlds__typecheck__HeadVars_9,
  MR_Word check_hlds__typecheck__TypeAssignSet_10,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_28,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_29)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    if ((check_hlds__typecheck__TypeAssignSet_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_ambiguity\'/6", (MR_String) "no type-assignment");
        return;
      }
    }
    else
    {
      MR_Word check_hlds__typecheck__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_10, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_10, (MR_Integer) 0)));

      if ((check_hlds__typecheck__Var_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__STATE_VARIABLE_Info_29 = check_hlds__typecheck__STATE_VARIABLE_Info_0_28;
      else
      {
        MR_Word check_hlds__typecheck__TypeAssign2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_36, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__ErrorsSoFar_16;
        MR_Word check_hlds__typecheck__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_36, (MR_Integer) 1)));

        check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_28, &check_hlds__typecheck__ErrorsSoFar_16);
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__ErrorsSoFar_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__typecheck__succeeded)
          switch (check_hlds__typecheck__StuffToCheck_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__typecheck__VarTypes1_17;
                MR_Word check_hlds__typecheck__VarTypes2_18;
                MR_Word check_hlds__typecheck__TypeBindings1_19;
                MR_Word check_hlds__typecheck__TypeBindings2_20;
                MR_Word check_hlds__typecheck__HeadTypes1_21;
                MR_Word check_hlds__typecheck__HeadTypes2_22;
                MR_Word check_hlds__typecheck__FinalHeadTypes1_23;
                MR_Word check_hlds__typecheck__FinalHeadTypes2_24;
                MR_Word check_hlds__typecheck__Var_40;
                MR_Word check_hlds__typecheck__Var_41;

                check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__Var_37, &check_hlds__typecheck__VarTypes1_17);
                check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign2_14, &check_hlds__typecheck__VarTypes2_18);
                check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__Var_37, &check_hlds__typecheck__TypeBindings1_19);
                check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign2_14, &check_hlds__typecheck__TypeBindings2_20);
                hlds__vartypes__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes1_17, check_hlds__typecheck__HeadVars_9, &check_hlds__typecheck__HeadTypes1_21);
                hlds__vartypes__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes2_18, check_hlds__typecheck__HeadVars_9, &check_hlds__typecheck__HeadTypes2_22);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings1_19, check_hlds__typecheck__HeadTypes1_21, &check_hlds__typecheck__FinalHeadTypes1_23);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings2_20, check_hlds__typecheck__HeadTypes2_22, &check_hlds__typecheck__FinalHeadTypes2_24);
                check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes1_23, check_hlds__typecheck__FinalHeadTypes2_24, &check_hlds__typecheck__Var_40);
                if (check_hlds__typecheck__succeeded)
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes2_24, check_hlds__typecheck__FinalHeadTypes1_23, &check_hlds__typecheck__Var_41);
              }
              break;
            case (MR_Integer) 1:
              check_hlds__typecheck__succeeded = MR_TRUE;
              break;
          }
        if (check_hlds__typecheck__succeeded)
        {
          MR_Word check_hlds__typecheck__ClauseContext_25;
          MR_Word check_hlds__typecheck__OverloadedSymbolMap_26;
          MR_Word check_hlds__typecheck__Spec_27;

          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_28, &check_hlds__typecheck__ClauseContext_25);
          check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_28, &check_hlds__typecheck__OverloadedSymbolMap_26);
          check_hlds__typecheck__Spec_27 = check_hlds__typecheck_errors__report_ambiguity_error_5_f_0(check_hlds__typecheck__ClauseContext_25, check_hlds__typecheck__Context_7, check_hlds__typecheck__OverloadedSymbolMap_26, check_hlds__typecheck__Var_37, check_hlds__typecheck__TypeAssign2_14);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_27, check_hlds__typecheck__STATE_VARIABLE_Info_0_28, check_hlds__typecheck__STATE_VARIABLE_Info_29);
        }
        else
          *check_hlds__typecheck__STATE_VARIABLE_Info_29 = check_hlds__typecheck__STATE_VARIABLE_Info_0_28;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
  MR_Word check_hlds__typecheck__KindMap_8,
  MR_Word check_hlds__typecheck__ExistQVarsA_9,
  MR_Word check_hlds__typecheck__ArgTypesA_10,
  MR_Word check_hlds__typecheck__TypeConstraintsA_11,
  MR_Word check_hlds__typecheck__ExistQVarsB_12,
  MR_Word check_hlds__typecheck__ArgTypesB_13,
  MR_Word check_hlds__typecheck__TypeConstraintsB_14)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__TypeCtorInfo_29_29;
    MR_Word check_hlds__typecheck__TypeCtorInfo_17_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    MR_Word check_hlds__typecheck__TypeCtorInfo_18_43;
    MR_Word check_hlds__typecheck__ConstrainedTypesA_15;
    MR_Word check_hlds__typecheck__ConstrainedTypesB_16;
    MR_Word check_hlds__typecheck__ExistQVarTypesA_17;
    MR_Word check_hlds__typecheck__ExistQVarTypesB_18;
    MR_Word check_hlds__typecheck__TypesListA_19;
    MR_Word check_hlds__typecheck__TypesListB_20;
    MR_Word check_hlds__typecheck__Var_21;
    MR_Word check_hlds__typecheck__Var_22;
    MR_Word check_hlds__typecheck__Var_23;
    MR_Word check_hlds__typecheck__Var_24;
    MR_Word check_hlds__typecheck__Var_25;
    MR_Word check_hlds__typecheck__Var_26;
    MR_Word check_hlds__typecheck__Var_27;
    MR_Word check_hlds__typecheck__Var_28;
    MR_Word check_hlds__typecheck__UnivCsA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsA_11, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__ExistCsA_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsA_11, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__UnivCsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsB_14, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__ExistCsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsB_14, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__UnivTypesA_38;
    MR_Word check_hlds__typecheck__UnivTypesB_39;
    MR_Word check_hlds__typecheck__ExistTypesA_40;
    MR_Word check_hlds__typecheck__ExistTypesB_41;
    MR_Word check_hlds__typecheck__Var_46;
    MR_Word check_hlds__typecheck__Var_47;

    check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__UnivCsA_34, check_hlds__typecheck__UnivCsB_36);
    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__ExistCsA_35, check_hlds__typecheck__ExistCsB_37);
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__UnivCsA_34, check_hlds__typecheck__UnivCsB_36, &check_hlds__typecheck__UnivTypesA_38, &check_hlds__typecheck__UnivTypesB_39);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__ExistCsA_35, check_hlds__typecheck__ExistCsB_37, &check_hlds__typecheck__ExistTypesA_40, &check_hlds__typecheck__ExistTypesB_41);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__TypeCtorInfo_18_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            check_hlds__typecheck__ConstrainedTypesA_15 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_18_43, check_hlds__typecheck__ExistTypesA_40, check_hlds__typecheck__UnivTypesA_38);
            check_hlds__typecheck__ConstrainedTypesB_16 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_18_43, check_hlds__typecheck__ExistTypesB_41, check_hlds__typecheck__UnivTypesB_39);
            parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__KindMap_8, check_hlds__typecheck__ExistQVarsA_9, &check_hlds__typecheck__ExistQVarTypesA_17);
            parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__KindMap_8, check_hlds__typecheck__ExistQVarsB_12, &check_hlds__typecheck__ExistQVarTypesB_18);
            check_hlds__typecheck__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            check_hlds__typecheck__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            {
              check_hlds__typecheck__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_23, 0) = ((MR_Box) (check_hlds__typecheck__ConstrainedTypesA_15));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_23, 1) = ((MR_Box) (check_hlds__typecheck__Var_24));
            }
            {
              check_hlds__typecheck__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_22, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypesA_10));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_22, 1) = ((MR_Box) (check_hlds__typecheck__Var_23));
            }
            {
              check_hlds__typecheck__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_21, 0) = ((MR_Box) (check_hlds__typecheck__ExistQVarTypesA_17));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_21, 1) = ((MR_Box) (check_hlds__typecheck__Var_22));
            }
            mercury__list__condense_2_p_0(check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__Var_21, &check_hlds__typecheck__TypesListA_19);
            check_hlds__typecheck__Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              check_hlds__typecheck__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_27, 0) = ((MR_Box) (check_hlds__typecheck__ConstrainedTypesB_16));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_27, 1) = ((MR_Box) (check_hlds__typecheck__Var_28));
            }
            {
              check_hlds__typecheck__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_26, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypesB_13));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_26, 1) = ((MR_Box) (check_hlds__typecheck__Var_27));
            }
            {
              check_hlds__typecheck__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_25, 0) = ((MR_Box) (check_hlds__typecheck__ExistQVarTypesB_18));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_25, 1) = ((MR_Box) (check_hlds__typecheck__Var_26));
            }
            mercury__list__condense_2_p_0(check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__Var_25, &check_hlds__typecheck__TypesListB_20);
            check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__TypesListA_19, check_hlds__typecheck__TypesListB_20, &check_hlds__typecheck__Var_46);
            if (check_hlds__typecheck__succeeded)
              check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__TypesListB_20, check_hlds__typecheck__TypesListA_19, &check_hlds__typecheck__Var_47);
          }
        }
      }
    }
    return check_hlds__typecheck__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__HeadVar__2_2,
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (check_hlds__typecheck__succeeded)
      {
        *check_hlds__typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        check_hlds__typecheck__succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word check_hlds__typecheck__TypeCtorInfo_16_16;
      MR_Word check_hlds__typecheck__ConstraintA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__ConstraintsA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__ConstraintB_7;
      MR_Word check_hlds__typecheck__ConstraintsB_8;
      MR_Word check_hlds__typecheck__ClassName_11;
      MR_Word check_hlds__typecheck__ArgTypesA_12;
      MR_Word check_hlds__typecheck__ArgTypesB_13;
      MR_Word check_hlds__typecheck__TypesA0_14;
      MR_Word check_hlds__typecheck__TypesB0_15;
      MR_Word check_hlds__typecheck__Var_17;

      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (check_hlds__typecheck__succeeded)
      {
        check_hlds__typecheck__ConstraintB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
        check_hlds__typecheck__ConstraintsB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
        check_hlds__typecheck__ClassName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintA_5, (MR_Integer) 0)));
        check_hlds__typecheck__ArgTypesA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintA_5, (MR_Integer) 1)));
        check_hlds__typecheck__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintB_7, (MR_Integer) 0)));
        check_hlds__typecheck__ArgTypesB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintB_7, (MR_Integer) 1)));
        check_hlds__typecheck__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__typecheck__ClassName_11, check_hlds__typecheck__Var_17);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesA_12, check_hlds__typecheck__ArgTypesB_13);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__ConstraintsA_6, check_hlds__typecheck__ConstraintsB_8, &check_hlds__typecheck__TypesA0_14, &check_hlds__typecheck__TypesB0_15);
            if (check_hlds__typecheck__succeeded)
            {
              *check_hlds__typecheck__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesA_12, check_hlds__typecheck__TypesA0_14);
              *check_hlds__typecheck__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesB_13, check_hlds__typecheck__TypesB0_15);
              check_hlds__typecheck__succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return check_hlds__typecheck__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
  MR_Box check_hlds__typecheck__closure_arg,
  MR_Box check_hlds__typecheck__wrapper_arg_1)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

    check_hlds__typecheck__succeeded = check_hlds__typecheck__is_head_class_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
  MR_Word check_hlds__typecheck__HeadVar__1_1,
  MR_Word check_hlds__typecheck__ArgVarTypes_7,
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__UnprovenCs_10)
{
  {
    MR_bool check_hlds__typecheck__succeeded;
    MR_Word check_hlds__typecheck__UnivCs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck__ExistCs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck__UnivCs_8;
    MR_Word check_hlds__typecheck__ExistCs_9;
    MR_Word check_hlds__typecheck__Var_16;
    MR_Word check_hlds__typecheck__Var_11;

    {
      check_hlds__typecheck__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_16, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_16, 1) = ((MR_Box) (check_hlds__typecheck__restrict_to_head_vars_4_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_16, 3) = ((MR_Box) (check_hlds__typecheck__ArgVarTypes_7));
    }
    mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__typecheck__Var_16, check_hlds__typecheck__UnivCs0_5, &check_hlds__typecheck__UnivCs_8, check_hlds__typecheck__UnprovenCs_10);
    mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__typecheck__Var_16, check_hlds__typecheck__ExistCs0_6, &check_hlds__typecheck__ExistCs_9, &check_hlds__typecheck__Var_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__typecheck__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__UnivCs_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__ExistCs_9));
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
  MR_Word check_hlds__typecheck__ArgTypeVars_5,
  MR_Word * check_hlds__typecheck__ExistQVars_6,
  MR_Word check_hlds__typecheck__ExternalTypeParams0_7,
  MR_Word * check_hlds__typecheck__ExternalTypeParams_8)
{
  {
    MR_Word check_hlds__typecheck__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
    MR_Word check_hlds__typecheck__ArgTypeVarsSet_9;
    MR_Word check_hlds__typecheck__ExternalTypeParamsSet_10;
    MR_Word check_hlds__typecheck__ExistQVarsSet_11;
    MR_Word check_hlds__typecheck__UnivQVarsSet_12;
    MR_Word check_hlds__typecheck__UnivQVars_13;

    mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVars_5, &check_hlds__typecheck__ArgTypeVarsSet_9);
    mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ExternalTypeParams0_7, &check_hlds__typecheck__ExternalTypeParamsSet_10);
    mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVarsSet_9, check_hlds__typecheck__ExternalTypeParamsSet_10, &check_hlds__typecheck__ExistQVarsSet_11);
    mercury__set__difference_3_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVarsSet_9, check_hlds__typecheck__ExistQVarsSet_11, &check_hlds__typecheck__UnivQVarsSet_12);
    mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ExistQVarsSet_11, check_hlds__typecheck__ExistQVars_6);
    mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__UnivQVarsSet_12, &check_hlds__typecheck__UnivQVars_13);
    *check_hlds__typecheck__ExternalTypeParams_8 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__UnivQVars_13, check_hlds__typecheck__ExternalTypeParams0_7);
  }
}

static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
  MR_Word check_hlds__typecheck__Renaming_4,
  MR_Word check_hlds__typecheck__Origin0_5,
  MR_Word * check_hlds__typecheck__Origin_6)
{
  {
    MR_bool check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Origin0_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word check_hlds__typecheck__MethodName_7;
    MR_Word check_hlds__typecheck__Constraints0_8;

    if (check_hlds__typecheck__succeeded)
    {
      check_hlds__typecheck__MethodName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Origin0_5, (MR_Integer) 0)));
      check_hlds__typecheck__Constraints0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Origin0_5, (MR_Integer) 1)));
      {
        MR_Word check_hlds__typecheck__ClassId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__InstanceTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__InstanceConstraints0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck__ClassMethodClassContext0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck__InstanceTypes_13;
        MR_Word check_hlds__typecheck__InstanceConstraints_14;
        MR_Word check_hlds__typecheck__ClassMethodClassContext_15;
        MR_Word check_hlds__typecheck__Constraints_16;

        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__InstanceTypes0_10, &check_hlds__typecheck__InstanceTypes_13);
        parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__InstanceConstraints0_11, &check_hlds__typecheck__InstanceConstraints_14);
        parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__ClassMethodClassContext0_12, &check_hlds__typecheck__ClassMethodClassContext_15);
        {
          check_hlds__typecheck__Constraints_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 0) = ((MR_Box) (check_hlds__typecheck__ClassId_9));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 1) = ((MR_Box) (check_hlds__typecheck__InstanceTypes_13));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 2) = ((MR_Box) (check_hlds__typecheck__InstanceConstraints_14));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 3) = ((MR_Box) (check_hlds__typecheck__ClassMethodClassContext_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__typecheck__Origin_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__MethodName_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Constraints_16));
        }
      }
    }
    else
      *check_hlds__typecheck__Origin_6 = check_hlds__typecheck__Origin0_5;
  }
}

static void MR_CALL 
check_hlds__typecheck__construct_type_inference_messages_5_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_1,
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__typecheck__STATE_VARIABLE_Specs_5 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_4;
      else
      {
        MR_Word check_hlds__typecheck__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__PredInfo_16;
        MR_Word check_hlds__typecheck__Markers_17;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_23_23;
        MR_Word check_hlds__typecheck__TypeCtorInfo_25_25;
        MR_Word check_hlds__typecheck__Var_18;

        hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__PredId_13, &check_hlds__typecheck__PredInfo_16);
        hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Markers_17);
        check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers_17, (MR_Integer) 2);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
          check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0(check_hlds__typecheck__TypeCtorInfo_25_25, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_13)));
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Var_18);
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
          }
        }
        if (check_hlds__typecheck__succeeded)
        {
          MR_Word check_hlds__typecheck__Spec_19;
          MR_String check_hlds__typecheck__PredName_28;
          MR_Word check_hlds__typecheck__PredOrFunc_29;
          MR_Word check_hlds__typecheck__Name_30;
          MR_Word check_hlds__typecheck__Context_31;
          MR_Word check_hlds__typecheck__VarSet_32;
          MR_Word check_hlds__typecheck__ExistQVars_33;
          MR_Word check_hlds__typecheck__Types0_34;
          MR_Word check_hlds__typecheck__Types_35;
          MR_Word check_hlds__typecheck__ClassContext_36;
          MR_Word check_hlds__typecheck__Purity_37;
          MR_Word check_hlds__typecheck__MaybeDet_38;
          MR_String check_hlds__typecheck__TypeStr_40;
          MR_Word check_hlds__typecheck__Pieces_43;
          MR_Word check_hlds__typecheck__Msg_44;
          MR_Word check_hlds__typecheck__Var_48;
          MR_Word check_hlds__typecheck__Var_49;
          MR_Word check_hlds__typecheck__Var_53;
          MR_Word check_hlds__typecheck__Var_54;
          MR_Word check_hlds__typecheck__Var_57;
          MR_Word check_hlds__typecheck__Var_58;
          MR_Word check_hlds__typecheck__Var_66;

          check_hlds__typecheck__PredName_28 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__PredInfo_16);
          check_hlds__typecheck__PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__typecheck__PredInfo_16);
          {
            check_hlds__typecheck__Name_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Name_30, 0) = ((MR_Box) (check_hlds__typecheck__PredName_28));
          }
          hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Context_31);
          hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__VarSet_32, &check_hlds__typecheck__ExistQVars_33, &check_hlds__typecheck__Types0_34);
          parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(check_hlds__typecheck__Types0_34, &check_hlds__typecheck__Types_35);
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__ClassContext_36);
          hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Purity_37);
          check_hlds__typecheck__MaybeDet_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          switch (check_hlds__typecheck__PredOrFunc_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__typecheck__ArgTypes_41;
                MR_Word check_hlds__typecheck__RetType_42;
                MR_Box check_hlds__typecheck__conv0_RetType_42;

                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Types_35, &check_hlds__typecheck__ArgTypes_41, &check_hlds__typecheck__conv0_RetType_42);
                check_hlds__typecheck__RetType_42 = ((MR_Word) check_hlds__typecheck__conv0_RetType_42);
                check_hlds__typecheck__TypeStr_40 = parse_tree__parse_tree_out_pred_decl__mercury_func_type_to_string_9_f_0(check_hlds__typecheck__VarSet_32, (MR_Integer) 0, check_hlds__typecheck__ExistQVars_33, check_hlds__typecheck__Name_30, check_hlds__typecheck__ArgTypes_41, check_hlds__typecheck__RetType_42, check_hlds__typecheck__MaybeDet_38, check_hlds__typecheck__Purity_37, check_hlds__typecheck__ClassContext_36);
              }
              break;
            case (MR_Integer) 0:
              check_hlds__typecheck__TypeStr_40 = parse_tree__parse_tree_out_pred_decl__mercury_pred_type_to_string_8_f_0(check_hlds__typecheck__VarSet_32, (MR_Integer) 0, check_hlds__typecheck__ExistQVars_33, check_hlds__typecheck__Name_30, check_hlds__typecheck__Types_35, check_hlds__typecheck__MaybeDet_38, check_hlds__typecheck__Purity_37, check_hlds__typecheck__ClassContext_36);
              break;
          }
          {
            check_hlds__typecheck__Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Var_49, 1) = ((MR_Box) (check_hlds__typecheck__TypeStr_40));
          }
          {
            check_hlds__typecheck__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_48, 0) = ((MR_Box) (check_hlds__typecheck__Var_49));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[16])));
          }
          {
            check_hlds__typecheck__Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[15])));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_43, 1) = ((MR_Box) (check_hlds__typecheck__Var_48));
          }
          {
            check_hlds__typecheck__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Var_58, 0) = ((MR_Box) (check_hlds__typecheck__Pieces_43));
          }
          {
            check_hlds__typecheck__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_57, 0) = ((MR_Box) (check_hlds__typecheck__Var_58));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__typecheck__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_54, 0) = ((MR_Box) (((MR_Integer) 54 | (((MR_Integer) 1 << (MR_Integer) 10)))));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_54, 1) = ((MR_Box) (check_hlds__typecheck__Var_57));
          }
          {
            check_hlds__typecheck__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_53, 0) = ((MR_Box) (check_hlds__typecheck__Var_54));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__typecheck__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Msg_44, 0) = ((MR_Box) (check_hlds__typecheck__Context_31));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Msg_44, 1) = ((MR_Box) (check_hlds__typecheck__Var_53));
          }
          {
            check_hlds__typecheck__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_66, 0) = ((MR_Box) (check_hlds__typecheck__Msg_44));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__typecheck__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_2[0])));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 2) = ((MR_Box) (check_hlds__typecheck__Var_66));
          }
          {
            check_hlds__typecheck__STATE_VARIABLE_Specs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_Specs_23_23, 0) = ((MR_Box) (check_hlds__typecheck__Spec_19));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_Specs_23_23, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Specs_0_4));
          }
        }
        else
          check_hlds__typecheck__STATE_VARIABLE_Specs_23_23 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_4;
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__3_3 = check_hlds__typecheck__PredIds_14;
          MR_Word check_hlds__typecheck__next_value_of_STATE_VARIABLE_Specs_0_4 = check_hlds__typecheck__STATE_VARIABLE_Specs_23_23;

          check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__next_value_of_HeadVar__3_3;
          check_hlds__typecheck__STATE_VARIABLE_Specs_0_4 = check_hlds__typecheck__next_value_of_STATE_VARIABLE_Specs_0_4;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__prepare_for_typecheck_4_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_1,
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word check_hlds__typecheck__PredIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__PredIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word check_hlds__typecheck__PredIdInfo_11;
      MR_Word check_hlds__typecheck__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 0)));
      MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 1)));
      MR_Word * check_hlds__typecheck__AddrPredIdsInfos_77;

      check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_14)));
      if (check_hlds__typecheck__succeeded)
      {
        MR_Word check_hlds__typecheck__GoalIdClausesInfo0_15;
        MR_Word check_hlds__typecheck__GoalIdClausesInfo_17;
        MR_Word check_hlds__typecheck__Globals_18;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21;
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22;
        MR_Word check_hlds__typecheck__PredStatus_30;
        MR_Word check_hlds__typecheck__ClausesInfo0_31;
        MR_Word check_hlds__typecheck__ClausesRep0_32;
        MR_Word check_hlds__typecheck___ContainingGoalMap_16;
        MR_Word check_hlds__typecheck___ItemNumbers0_33;
        MR_Word check_hlds__typecheck__Var_57;
        MR_Word check_hlds__typecheck__Var_58;

        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__GoalIdClausesInfo0_15);
        hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck___ContainingGoalMap_16, check_hlds__typecheck__GoalIdClausesInfo0_15, &check_hlds__typecheck__GoalIdClausesInfo_17);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__GoalIdClausesInfo_17, check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
        hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__PredStatus_30);
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__ClausesInfo0_31);
        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesRep0_32, &check_hlds__typecheck___ItemNumbers0_33);
        check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
        if (check_hlds__typecheck__succeeded)
        {
          check_hlds__typecheck__Var_57 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_32);
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_57 == (MR_Integer) 1);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__Var_58 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__typecheck__PredStatus_30);
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_58 == (MR_Integer) 1);
          }
        }
        if (check_hlds__typecheck__succeeded)
        {
          MR_Word check_hlds__typecheck__TypeInfo_53_75;
          MR_Word check_hlds__typecheck__HeadVars_34;
          MR_Word check_hlds__typecheck__FuncArgs_35;
          MR_Word check_hlds__typecheck__FuncRetVal_36;
          MR_Word check_hlds__typecheck__Context_37;
          MR_Word check_hlds__typecheck__FuncModule_38;
          MR_String check_hlds__typecheck__FuncName_39;
          MR_Integer check_hlds__typecheck__PredArity_40;
          MR_Integer check_hlds__typecheck__FuncArity_41;
          MR_Word check_hlds__typecheck__FuncSymName_42;
          MR_Word check_hlds__typecheck__FuncConsId_43;
          MR_Word check_hlds__typecheck__FuncRHS_44;
          MR_Word check_hlds__typecheck__Goal0_45;
          MR_Word check_hlds__typecheck__GoalExpr_46;
          MR_Word check_hlds__typecheck__GoalInfo0_47;
          MR_Word check_hlds__typecheck__NonLocals_48;
          MR_Word check_hlds__typecheck__GoalInfo_49;
          MR_Word check_hlds__typecheck__Goal_50;
          MR_Word check_hlds__typecheck__Clause_51;
          MR_Word check_hlds__typecheck__ClausesRep_52;
          MR_Word check_hlds__typecheck__ItemNumbers_53;
          MR_Word check_hlds__typecheck__ClausesInfo_54;
          MR_Word check_hlds__typecheck__Markers0_55;
          MR_Word check_hlds__typecheck__Markers_56;
          MR_Word check_hlds__typecheck__Var_60;
          MR_Word check_hlds__typecheck__Var_64;
          MR_Word check_hlds__typecheck__Var_68;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72;
          MR_Box check_hlds__typecheck__conv0_FuncRetVal_36;

          hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__HeadVars_34);
          check_hlds__typecheck__TypeInfo_53_75 = (MR_Word) &check_hlds__typecheck_scalar_common_1[2];
          hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34, &check_hlds__typecheck__FuncArgs_35, &check_hlds__typecheck__conv0_FuncRetVal_36);
          check_hlds__typecheck__FuncRetVal_36 = ((MR_Word) check_hlds__typecheck__conv0_FuncRetVal_36);
          hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_37);
          check_hlds__typecheck__FuncModule_38 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
          check_hlds__typecheck__FuncName_39 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
          check_hlds__typecheck__PredArity_40 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
          parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &check_hlds__typecheck__FuncArity_41, check_hlds__typecheck__PredArity_40);
          {
            check_hlds__typecheck__FuncSymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 0) = ((MR_Box) (check_hlds__typecheck__FuncModule_38));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 1) = ((MR_Box) (check_hlds__typecheck__FuncName_39));
          }
          check_hlds__typecheck__Var_60 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          {
            check_hlds__typecheck__FuncConsId_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 1) = ((MR_Box) (check_hlds__typecheck__FuncSymName_42));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 2) = ((MR_Box) (check_hlds__typecheck__FuncArity_41));
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 3) = ((MR_Box) (check_hlds__typecheck__Var_60));
          }
          {
            check_hlds__typecheck__FuncRHS_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 0) = ((MR_Box) (check_hlds__typecheck__FuncConsId_43));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 2) = ((MR_Box) (check_hlds__typecheck__FuncArgs_35));
          }
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__typecheck__FuncRetVal_36, check_hlds__typecheck__FuncRHS_44, check_hlds__typecheck__Context_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Goal0_45);
          check_hlds__typecheck__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 0)));
          check_hlds__typecheck__GoalInfo0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 1)));
          check_hlds__typecheck__Var_64 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34);
          check_hlds__typecheck__NonLocals_48 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck__Var_64);
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__typecheck__NonLocals_48, check_hlds__typecheck__GoalInfo0_47, &check_hlds__typecheck__GoalInfo_49);
          {
            check_hlds__typecheck__Goal_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_46));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_49));
          }
          {
            check_hlds__typecheck__Clause_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 1) = ((MR_Box) (check_hlds__typecheck__Goal_50));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 3) = ((MR_Box) (check_hlds__typecheck__Context_37));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__typecheck__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_68, 0) = ((MR_Box) (check_hlds__typecheck__Clause_51));
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__Var_68, &check_hlds__typecheck__ClausesRep_52);
          check_hlds__typecheck__ItemNumbers_53 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
          hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_52, check_hlds__typecheck__ItemNumbers_53, check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesInfo_54);
          hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71);
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__ClausesInfo_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72);
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__Markers0_55);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, check_hlds__typecheck__Markers0_55, &check_hlds__typecheck__Markers_56);
          hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_56, check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21);
        }
        else
          check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
        hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__Globals_18);
        hlds__headvar_names__maybe_improve_headvar_names_3_p_0(check_hlds__typecheck__Globals_18, check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22);
        {
          check_hlds__typecheck__PredIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 0) = ((MR_Box) (check_hlds__typecheck__PredId_14));
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22));
        }
      }
      else
        check_hlds__typecheck__PredIdInfo_11 = check_hlds__typecheck__PredIdInfo0_9;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__typecheck__HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__PredIdInfo_11));
        MR_hl_field(MR_mktag(1), base, 1) = NULL;
      }
      check_hlds__typecheck__AddrPredIdsInfos_77 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1));
      check_hlds__typecheck__LCMCpr_prepare_for_typecheck_1_4_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__PredIdsInfos0_10, check_hlds__typecheck__AddrPredIdsInfos_77);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_prepare_for_typecheck_1_4_p_0(
  MR_Word check_hlds__typecheck__ModuleInfo_1,
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
  MR_Word check_hlds__typecheck__HeadVar__3_3,
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4_78)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__typecheck__succeeded;

      if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__typecheck__AddrOfHeadVar__4_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Word check_hlds__typecheck__PredIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__PredIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck__PredIdInfo_11;
        MR_Word check_hlds__typecheck__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 1)));
        MR_Word * check_hlds__typecheck__AddrPredIdsInfos_77;
        MR_Word check_hlds__typecheck__HeadVar__4_79;

        check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_14)));
        if (check_hlds__typecheck__succeeded)
        {
          MR_Word check_hlds__typecheck__GoalIdClausesInfo0_15;
          MR_Word check_hlds__typecheck__GoalIdClausesInfo_17;
          MR_Word check_hlds__typecheck__Globals_18;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21;
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22;
          MR_Word check_hlds__typecheck__PredStatus_30;
          MR_Word check_hlds__typecheck__ClausesInfo0_31;
          MR_Word check_hlds__typecheck__ClausesRep0_32;
          MR_Word check_hlds__typecheck___ContainingGoalMap_16;
          MR_Word check_hlds__typecheck___ItemNumbers0_33;
          MR_Word check_hlds__typecheck__Var_57;
          MR_Word check_hlds__typecheck__Var_58;

          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__GoalIdClausesInfo0_15);
          hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck___ContainingGoalMap_16, check_hlds__typecheck__GoalIdClausesInfo0_15, &check_hlds__typecheck__GoalIdClausesInfo_17);
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__GoalIdClausesInfo_17, check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
          hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__PredStatus_30);
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__ClausesInfo0_31);
          hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesRep0_32, &check_hlds__typecheck___ItemNumbers0_33);
          check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
          if (check_hlds__typecheck__succeeded)
          {
            check_hlds__typecheck__Var_57 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_32);
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_57 == (MR_Integer) 1);
            if (check_hlds__typecheck__succeeded)
            {
              check_hlds__typecheck__Var_58 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__typecheck__PredStatus_30);
              check_hlds__typecheck__succeeded = (check_hlds__typecheck__Var_58 == (MR_Integer) 1);
            }
          }
          if (check_hlds__typecheck__succeeded)
          {
            MR_Word check_hlds__typecheck__TypeInfo_53_75;
            MR_Word check_hlds__typecheck__HeadVars_34;
            MR_Word check_hlds__typecheck__FuncArgs_35;
            MR_Word check_hlds__typecheck__FuncRetVal_36;
            MR_Word check_hlds__typecheck__Context_37;
            MR_Word check_hlds__typecheck__FuncModule_38;
            MR_String check_hlds__typecheck__FuncName_39;
            MR_Integer check_hlds__typecheck__PredArity_40;
            MR_Integer check_hlds__typecheck__FuncArity_41;
            MR_Word check_hlds__typecheck__FuncSymName_42;
            MR_Word check_hlds__typecheck__FuncConsId_43;
            MR_Word check_hlds__typecheck__FuncRHS_44;
            MR_Word check_hlds__typecheck__Goal0_45;
            MR_Word check_hlds__typecheck__GoalExpr_46;
            MR_Word check_hlds__typecheck__GoalInfo0_47;
            MR_Word check_hlds__typecheck__NonLocals_48;
            MR_Word check_hlds__typecheck__GoalInfo_49;
            MR_Word check_hlds__typecheck__Goal_50;
            MR_Word check_hlds__typecheck__Clause_51;
            MR_Word check_hlds__typecheck__ClausesRep_52;
            MR_Word check_hlds__typecheck__ItemNumbers_53;
            MR_Word check_hlds__typecheck__ClausesInfo_54;
            MR_Word check_hlds__typecheck__Markers0_55;
            MR_Word check_hlds__typecheck__Markers_56;
            MR_Word check_hlds__typecheck__Var_60;
            MR_Word check_hlds__typecheck__Var_64;
            MR_Word check_hlds__typecheck__Var_68;
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71;
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72;
            MR_Box check_hlds__typecheck__conv0_FuncRetVal_36;

            hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__HeadVars_34);
            check_hlds__typecheck__TypeInfo_53_75 = (MR_Word) &check_hlds__typecheck_scalar_common_1[2];
            hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34, &check_hlds__typecheck__FuncArgs_35, &check_hlds__typecheck__conv0_FuncRetVal_36);
            check_hlds__typecheck__FuncRetVal_36 = ((MR_Word) check_hlds__typecheck__conv0_FuncRetVal_36);
            hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_37);
            check_hlds__typecheck__FuncModule_38 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            check_hlds__typecheck__FuncName_39 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            check_hlds__typecheck__PredArity_40 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &check_hlds__typecheck__FuncArity_41, check_hlds__typecheck__PredArity_40);
            {
              check_hlds__typecheck__FuncSymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 0) = ((MR_Box) (check_hlds__typecheck__FuncModule_38));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 1) = ((MR_Box) (check_hlds__typecheck__FuncName_39));
            }
            check_hlds__typecheck__Var_60 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
            {
              check_hlds__typecheck__FuncConsId_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 1) = ((MR_Box) (check_hlds__typecheck__FuncSymName_42));
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 2) = ((MR_Box) (check_hlds__typecheck__FuncArity_41));
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 3) = ((MR_Box) (check_hlds__typecheck__Var_60));
            }
            {
              check_hlds__typecheck__FuncRHS_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 0) = ((MR_Box) (check_hlds__typecheck__FuncConsId_43));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 2) = ((MR_Box) (check_hlds__typecheck__FuncArgs_35));
            }
            hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__typecheck__FuncRetVal_36, check_hlds__typecheck__FuncRHS_44, check_hlds__typecheck__Context_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Goal0_45);
            check_hlds__typecheck__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 0)));
            check_hlds__typecheck__GoalInfo0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 1)));
            check_hlds__typecheck__Var_64 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34);
            check_hlds__typecheck__NonLocals_48 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck__Var_64);
            hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__typecheck__NonLocals_48, check_hlds__typecheck__GoalInfo0_47, &check_hlds__typecheck__GoalInfo_49);
            {
              check_hlds__typecheck__Goal_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_46));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_49));
            }
            {
              check_hlds__typecheck__Clause_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 1) = ((MR_Box) (check_hlds__typecheck__Goal_50));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 3) = ((MR_Box) (check_hlds__typecheck__Context_37));
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__typecheck__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_68, 0) = ((MR_Box) (check_hlds__typecheck__Clause_51));
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__Var_68, &check_hlds__typecheck__ClausesRep_52);
            check_hlds__typecheck__ItemNumbers_53 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
            hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_52, check_hlds__typecheck__ItemNumbers_53, check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesInfo_54);
            hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71);
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__ClausesInfo_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72);
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__Markers0_55);
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, check_hlds__typecheck__Markers0_55, &check_hlds__typecheck__Markers_56);
            hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_56, check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21);
          }
          else
            check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__Globals_18);
          hlds__headvar_names__maybe_improve_headvar_names_3_p_0(check_hlds__typecheck__Globals_18, check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22);
          {
            check_hlds__typecheck__PredIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 0) = ((MR_Box) (check_hlds__typecheck__PredId_14));
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22));
          }
        }
        else
          check_hlds__typecheck__PredIdInfo_11 = check_hlds__typecheck__PredIdInfo0_9;
        {
          check_hlds__typecheck__HeadVar__4_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_79, 0) = ((MR_Box) (check_hlds__typecheck__PredIdInfo_11));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_79, 1) = NULL;
        }
        check_hlds__typecheck__AddrPredIdsInfos_77 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_79, (MR_Integer) 1));
        *check_hlds__typecheck__AddrOfHeadVar__4_78 = check_hlds__typecheck__HeadVar__4_79;
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__typecheck__next_value_of_HeadVar__3_3 = check_hlds__typecheck__PredIdsInfos0_10;
          MR_Word * check_hlds__typecheck__next_value_of_AddrOfHeadVar__4_78 = check_hlds__typecheck__AddrPredIdsInfos_77;

          check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__next_value_of_HeadVar__3_3;
          check_hlds__typecheck__AddrOfHeadVar__4_78 = check_hlds__typecheck__next_value_of_AddrOfHeadVar__4_78;
        }
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_constraints_action_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box check_hlds__typecheck__wrapper_arg_3)
{
  {
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

    check_hlds__typecheck____Compare____cons_constraints_action_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_0_0_10001(
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_type_assign_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_0_0_10001(
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box check_hlds__typecheck__wrapper_arg_3)
{
  {
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

    check_hlds__typecheck____Compare____cons_type_assign_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_type_assign_set_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box check_hlds__typecheck__wrapper_arg_3)
{
  {
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

    check_hlds__typecheck____Compare____cons_type_assign_set_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box check_hlds__typecheck__wrapper_arg_3)
{
  {
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

    check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
  MR_Box check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck__succeeded;

    check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____stuff_to_check_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    return check_hlds__typecheck__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
  MR_Box check_hlds__typecheck__wrapper_arg_2,
  MR_Box check_hlds__typecheck__wrapper_arg_3)
{
  {
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

    check_hlds__typecheck____Compare____stuff_to_check_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
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

/* :- end_module check_hlds.typecheck. */
