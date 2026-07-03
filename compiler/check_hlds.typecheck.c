/*
** Automatically generated from `typecheck.m'
** by the Mercury compiler,
** version rotd-2026-07-03
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.typecheck_clauses.mih"
#include "check_hlds.typecheck_error_overload.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "hlds.var_table_hlds.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s {
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3;
  MR_bool check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6;
  jmp_buf check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0;
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

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

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__handle_stubs__449__1_2_p_0(
  MR_Word STATE_VARIABLE_Specs_1_41,
  MR_Word HeadVar__2_51);

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
check_hlds__typecheck__report_coercion_4_p_0(
  MR_Word TypeAssign_5,
  MR_Word Coercion_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

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
check_hlds__typecheck__do_typecheck_pred_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Word STATE_VARIABLE_PredInfo_0_76,
  MR_Word * STATE_VARIABLE_PredInfo_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79,
  MR_Word * NextIteration_14);

static void MR_CALL 
check_hlds__typecheck__typecheck_check_remaining_coercion_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__typecheck_check_remaining_coercion_constraints_3_p_0(
  MR_Word TypeAssignSet_4,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

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
  MR_Word STATE_VARIABLE_Constraints_0_13,
  MR_Word * STATE_VARIABLE_Constraints_14,
  MR_Word * UnprovenCs_7);

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


static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[1][1];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[2][5];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[1][7];




static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[4][2] = {
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
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((MR_Unsigned) 1U << 1)) },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[2][5] = {
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
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[1][7] = {
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
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

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__handle_stubs__449__1_2_p_0(
  MR_Word STATE_VARIABLE_Specs_1_41,
  MR_Word HeadVar__2_51)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[0]), ((MR_Box) (STATE_VARIABLE_Specs_1_41)), ((MR_Box) (HeadVar__2_51)));
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
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_15 < Var_16);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 > Var_16);
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
      ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck__report_coercion_4_p_0(
  MR_Word TypeAssign_5,
  MR_Word Coercion_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word FromType0_8 = ((MR_Word) ((MR_hl_field(0, Coercion_6, 0))));
  MR_Word ToType0_9 = ((MR_Word) ((MR_hl_field(0, Coercion_6, 1))));
  MR_Word Context_10 = ((MR_Word) ((MR_hl_field(0, Coercion_6, 2))));
  MR_Word FromVar_11 = ((MR_Word) ((MR_hl_field(0, Coercion_6, 3))));
  MR_Word Status_12 = ((MR_Unsigned) ((MR_hl_field(0, Coercion_6, 4))) & (MR_Integer) 3);
  MR_Word TVarSet_13;
  MR_Word TypeBindings_14;
  MR_Word FromType_15;
  MR_Word ToType_16;
  MR_Word ClauseContext_17;
  MR_Word Spec_18;

  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_5, &TVarSet_13);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &TypeBindings_14);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_14, FromType0_8, &FromType_15);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_14, ToType0_9, &ToType_16);
  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_19, &ClauseContext_17);
  switch (Status_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.report_coercion\'/4", (MR_String) "need to check");
        return;
      }
      break;
    case (MR_Integer) 2:
      Spec_18 = check_hlds__typecheck_errors__report_unresolved_coerce_from_to_6_f_0(ClauseContext_17, Context_10, FromVar_11, TVarSet_13, FromType_15, ToType_16);
      break;
    case (MR_Integer) 3:
      Spec_18 = check_hlds__typecheck_errors__report_redundant_coerce_5_f_0(ClauseContext_17, Context_10, FromVar_11, TVarSet_13, FromType_15);
      break;
    case (MR_Integer) 1:
      Spec_18 = check_hlds__typecheck_errors__report_invalid_coerce_from_to_6_f_0(ClauseContext_17, Context_10, FromVar_11, TVarSet_13, FromType_15, ToType_16);
      break;
  }
  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_18, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
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
      parse_tree__prog_type_scan__type_list_contains_var_2_p_0((env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6, &(env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7, check_hlds__typecheck__is_head_class_constraint_2_p_0_2, env_ptr);
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
    MR_Word _ClassName_5;

    (env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6 = ((MR_Word) ((MR_hl_field(0, Constraint_4, 1))));
    check_hlds__typecheck__is_head_class_constraint_2_p_0_3(&env);
    (env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
    return (env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
  }
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
  libs__globals__lookup_int_option_3_p_0(Globals_12, (MR_Integer) 124, &MaxIterations_13);
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
    MR_Word STATE_VARIABLE_ModuleInfo_1_44;
    MR_Word STATE_VARIABLE_ModuleInfo_2_45;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &PredIdTable0_22);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_22, &PredIdsInfos0_23);
    check_hlds__typecheck__typecheck_module_one_iteration_14_p_0(ProgressStream_12, STATE_VARIABLE_ModuleInfo_0_37, OrigValidPredIdSet_17, PredIdsInfos0_23, (MR_Word) ((MR_Unsigned) 0U), &RevPredIdsInfos_24, (MR_Word) ((MR_Unsigned) 0U), &NewlyInvalidPredIds_25, (MR_Word) ((MR_Unsigned) 0U), &CurSpecs_26, (MR_Integer) 0, &CurFoundSyntaxError_27, (MR_Integer) 0, &NextIteration_28);
    mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), RevPredIdsInfos_24, &PredIdTable_29);
    hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_29, STATE_VARIABLE_ModuleInfo_0_37, &STATE_VARIABLE_ModuleInfo_1_44);
    hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(NewlyInvalidPredIds_25, STATE_VARIABLE_ModuleInfo_1_44, &STATE_VARIABLE_ModuleInfo_2_45);
    hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(STATE_VARIABLE_ModuleInfo_2_45, &NewValidPredIdSet_30);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_2_45, &Globals_31);
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
      *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_2_45;
    }
    else
    {
      MR_Word DebugTypes_32;

      libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 697, &DebugTypes_32);
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

            check_hlds__typecheck_msgs__construct_type_inference_messages_5_p_0(STATE_VARIABLE_ModuleInfo_2_45, NewValidPredIdSet_30, OrigValidPredIds_16, (MR_Word) ((MR_Unsigned) 0U), &ProgressSpecs_33);
            hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_2_45, &ModuleName_35);
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
        MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_37 = STATE_VARIABLE_ModuleInfo_2_45;

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
        *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_2_45;
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
      MR_Word HeadPredIdInfo0_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word TailPredIdsInfos0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word PredId_43 = ((MR_Word) ((MR_hl_field(0, HeadPredIdInfo0_36, 0))));
      MR_Word PredInfo0_44 = ((MR_Word) ((MR_hl_field(0, HeadPredIdInfo0_36, 1))));

      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_44);
      if (!(succeeded))
      {
        succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_3, ((MR_Box) (PredId_43)));
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_RevPredIdsInfos_1_61;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_RevPredIdsInfos_0_5;

        {
          STATE_VARIABLE_RevPredIdsInfos_1_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevPredIdsInfos_1_61, 0) = ((MR_Box) (HeadPredIdInfo0_36));
          MR_hl_field(1, STATE_VARIABLE_RevPredIdsInfos_1_61, 1) = ((MR_Box) (STATE_VARIABLE_RevPredIdsInfos_0_5));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = TailPredIdsInfos0_37;
        next_value_of_STATE_VARIABLE_RevPredIdsInfos_0_5 = STATE_VARIABLE_RevPredIdsInfos_1_61;
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
        MR_Word STATE_VARIABLE_NewlyInvalidPredIds_2_67;
        MR_Word STATE_VARIABLE_Specs_2_68;
        MR_Word STATE_VARIABLE_FoundSyntaxError_2_69;
        MR_Word STATE_VARIABLE_NextIteration_2_70;
        MR_Word STATE_VARIABLE_RevPredIdsInfos_3_71;
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
            STATE_VARIABLE_NewlyInvalidPredIds_2_67 = STATE_VARIABLE_NewlyInvalidPredIds_0_7;
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_NewlyInvalidPredIds_2_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_NewlyInvalidPredIds_2_67, 0) = ((MR_Box) (PredId_43));
              MR_hl_field(1, STATE_VARIABLE_NewlyInvalidPredIds_2_67, 1) = ((MR_Box) (STATE_VARIABLE_NewlyInvalidPredIds_0_7));
            }
            break;
        }
        {
          HeadPredIdInfo_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadPredIdInfo_50, 0) = ((MR_Box) (PredId_43));
          MR_hl_field(0, HeadPredIdInfo_50, 1) = ((MR_Box) (PredInfo_45));
        }
        STATE_VARIABLE_Specs_2_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), PredSpecs_46, STATE_VARIABLE_Specs_0_9);
        switch (PredSyntaxError_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_FoundSyntaxError_2_69 = STATE_VARIABLE_FoundSyntaxError_0_11;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_FoundSyntaxError_2_69 = (MR_Integer) 1;
            break;
        }
        switch (PredNextIteration_49) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_NextIteration_2_70 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_NextIteration_2_70 = STATE_VARIABLE_NextIteration_0_13;
            break;
        }
        {
          STATE_VARIABLE_RevPredIdsInfos_3_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevPredIdsInfos_3_71, 0) = ((MR_Box) (HeadPredIdInfo_50));
          MR_hl_field(1, STATE_VARIABLE_RevPredIdsInfos_3_71, 1) = ((MR_Box) (STATE_VARIABLE_RevPredIdsInfos_0_5));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = TailPredIdsInfos0_37;
        next_value_of_STATE_VARIABLE_RevPredIdsInfos_0_5 = STATE_VARIABLE_RevPredIdsInfos_3_71;
        next_value_of_STATE_VARIABLE_NewlyInvalidPredIds_0_7 = STATE_VARIABLE_NewlyInvalidPredIds_2_67;
        next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_2_68;
        next_value_of_STATE_VARIABLE_FoundSyntaxError_0_11 = STATE_VARIABLE_FoundSyntaxError_2_69;
        next_value_of_STATE_VARIABLE_NextIteration_0_13 = STATE_VARIABLE_NextIteration_2_70;
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

  succeeded = check_hlds__typecheck__IntroducedFrom__pred__handle_stubs__449__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
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
  MR_Word STATE_VARIABLE_PredInfo_1_24;
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
        Var_40 = ((MR_Word) ((MR_hl_field(1, Origin_34, 0))));
        succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
        if (succeeded)
        {
          SpecialPredId_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_40, 0))) & (MR_Integer) 3);
          TypeCtor_36 = ((MR_Word) ((MR_hl_field(0, Var_40, 1))));
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
      succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_28, Var_33);
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
        STATE_VARIABLE_PredInfo_1_24 = STATE_VARIABLE_PredInfo_0_21;
        break;
      case (MR_Integer) 1:
        hlds__hlds_pred__pred_info_mark_as_external_2_p_0(STATE_VARIABLE_PredInfo_0_21, &STATE_VARIABLE_PredInfo_1_24);
        break;
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *STATE_VARIABLE_PredInfo_22 = STATE_VARIABLE_PredInfo_1_24;
    *STATE_VARIABLE_Specs_23 = (MR_Word) ((MR_Unsigned) 0U);
    *FoundSyntaxError_15 = (MR_Integer) 0;
    *ContainsErrors_16 = (MR_Integer) 0;
    *NextIteration_17 = (MR_Integer) 0;
  }
  else
  {
    MR_Word ClausesInfo0_18;
    MR_Word MaybeNeedTypecheck_19;
    MR_Word STATE_VARIABLE_PredInfo_2_26;
    MR_Word STATE_VARIABLE_Specs_2_27;
    MR_Word Markers0_43;
    MR_Word ClausesInfo0_44;
    MR_Word ClausesRep0_45;
    MR_Word ClausesRep0IsEmpty_47;
    MR_Word ClausesInfo1_49;
    MR_Word ClausesRep1_50;
    MR_Word ClausesRep1IsEmpty_52;
    MR_Word STATE_VARIABLE_Specs_1_67;
    MR_Word STATE_VARIABLE_PredInfo_1_68;
    MR_Word _ItemNumbers0_46;
    MR_Word _ItemNumbers_51;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_21, &ClausesInfo0_18);
    hlds__hlds_clauses__clauses_info_get_had_syntax_errors_2_p_0(ClausesInfo0_18, FoundSyntaxError_15);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_21, &Markers0_43);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_21, &ClausesInfo0_44);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_44, &ClausesRep0_45, &_ItemNumbers0_46);
    ClausesRep0IsEmpty_47 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_45);
    switch (ClausesRep0IsEmpty_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_1_67 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_PredInfo_1_68 = STATE_VARIABLE_PredInfo_0_21;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Globals_48;
          MR_Word Var_66;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_48);
          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_48, (MR_Integer) 126, (MR_Integer) 1);
          if (succeeded)
          {
            Var_66 = (MR_Integer) 12;
            succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers0_43, Var_66);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            STATE_VARIABLE_Specs_1_67 = check_hlds__typecheck_error_undef__maybe_report_no_clauses_stub_3_f_0(ModuleInfo_11, PredId_12, STATE_VARIABLE_PredInfo_0_21);
            check_hlds__typecheck__generate_and_add_stub_clause_4_p_0(ModuleInfo_11, PredId_12, STATE_VARIABLE_PredInfo_0_21, &STATE_VARIABLE_PredInfo_1_68);
          }
          else
          {
            succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers0_43, (MR_Integer) 1);
            if (succeeded)
            {
              STATE_VARIABLE_Specs_1_67 = (MR_Word) ((MR_Unsigned) 0U);
              check_hlds__typecheck__generate_and_add_stub_clause_4_p_0(ModuleInfo_11, PredId_12, STATE_VARIABLE_PredInfo_0_21, &STATE_VARIABLE_PredInfo_1_68);
            }
            else
            {
              STATE_VARIABLE_Specs_1_67 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_PredInfo_1_68 = STATE_VARIABLE_PredInfo_0_21;
            }
          }
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_1_68, &ClausesInfo1_49);
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
                STATE_VARIABLE_Specs_2_27 = STATE_VARIABLE_Specs_1_67;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Specs_2_27 = (MR_Word) ((MR_Unsigned) 0U);
                MaybeNeedTypecheck_19 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_scalar_common_2[0]));
              }
              break;
          }
          STATE_VARIABLE_PredInfo_2_26 = STATE_VARIABLE_PredInfo_1_68;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ContainsErrors_63;
          MR_Word Var_70;

          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_70, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[1]));
            MR_hl_field(0, Var_70, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_pred_if_needed_9_p_0_1));
            MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_70, 3) = ((MR_Box) (STATE_VARIABLE_Specs_1_67));
            MR_hl_field(0, Var_70, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140check_hlds.typecheck.handle_stubs\'/7", (MR_String) "starting Specs not empty");
          succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers0_43, (MR_Integer) 12);
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
            MR_Word STATE_VARIABLE_PredInfo_3_75;
            MR_Word _ArgTypeVarSet_54;
            MR_Word _ExistQVars_55;

            hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo1_49, &HeadVars_53);
            hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_1_68, &_ArgTypeVarSet_54, &_ExistQVars_55, &ArgTypes_56);
            parse_tree__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_53, ArgTypes_56, &VarTypes_57);
            hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo1_49, &VarSet_58);
            hlds__var_table_hlds__corresponding_vars_types_to_var_table_5_p_0(ModuleInfo_11, VarSet_58, HeadVars_53, ArgTypes_56, &VarTable_59);
            hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(VarTypes_57, ClausesInfo1_49, &ClausesInfo2_60);
            hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_59, ClausesInfo2_60, &ClausesInfo_61);
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_61, STATE_VARIABLE_PredInfo_1_68, &STATE_VARIABLE_PredInfo_3_75);
            parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_56, &HeadVarsInclExistentials_62);
            hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(HeadVarsInclExistentials_62, STATE_VARIABLE_PredInfo_3_75, &STATE_VARIABLE_PredInfo_2_26);
            ContainsErrors_63 = (MR_Integer) 0;
            STATE_VARIABLE_Specs_2_27 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            ContainsErrors_63 = (MR_Integer) 1;
            switch (*FoundSyntaxError_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Specs_2_27 = check_hlds__typecheck_error_undef__maybe_report_no_clauses_3_f_0(ModuleInfo_11, PredId_12, STATE_VARIABLE_PredInfo_1_68);
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Specs_2_27 = (MR_Word) ((MR_Unsigned) 0U);
                break;
            }
            STATE_VARIABLE_PredInfo_2_26 = STATE_VARIABLE_PredInfo_1_68;
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

      check_hlds__typecheck__do_typecheck_pred_8_p_0(ProgressStream_10, ModuleInfo_11, PredId_12, STATE_VARIABLE_PredInfo_2_26, STATE_VARIABLE_PredInfo_22, STATE_VARIABLE_Specs_2_27, STATE_VARIABLE_Specs_23, NextIteration_17);
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_20);
      *ContainsErrors_16 = parse_tree__error_util__contains_errors_2_f_0(Globals_20, *STATE_VARIABLE_Specs_23);
    }
    else
    {
      *ContainsErrors_16 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeNeedTypecheck_19, 0))) >> 1)) & (MR_Integer) 1);
      *NextIteration_17 = ((MR_Unsigned) ((MR_hl_field(1, MaybeNeedTypecheck_19, 0))) & (MR_Integer) 1);
      *STATE_VARIABLE_PredInfo_22 = STATE_VARIABLE_PredInfo_2_26;
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_2_27;
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
  MR_Word STATE_VARIABLE_ClausesInfo_1_34;
  MR_Word Var_38;
  MR_Word STATE_VARIABLE_ClausesInfo_2_40;
  MR_Word STATE_VARIABLE_PredInfo_1_43;
  MR_Word PredNameVar_46;
  MR_Word Context_47;
  MR_Word UnifyGoal_48;
  MR_Word PredModuleName_49;
  MR_String CalleeName_50;
  MR_Word CallGoal_51;
  MR_Word GoalInfo_52;
  MR_Word Body_53;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_74;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_32, &STATE_VARIABLE_ClausesInfo_1_34);
  VarSet0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_1_34, 0))));
  RttiVarMaps_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_1_34, 3))));
  TVarNameMap_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_1_34, 4))));
  ArgVec_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_1_34, 5))));
  PredPieces_19 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_6);
  PredName_20 = parse_tree__write_error_spec__error_pieces_to_one_line_string_1_f_0(PredPieces_19);
  HeadVars_21 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgVec_14);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_0_32, &ArgTypes_22);
  parse_tree__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_21, ArgTypes_22, &VarTypes1_23);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "PredName", &PredNameVar_46, VarSet0_9, &VarSet_25);
  Var_55 = parse_tree__builtin_lib_types__string_type_0_f_0();
  parse_tree__vartypes__add_var_type_4_p_0(PredNameVar_46, Var_55, VarTypes1_23, &VarTypes_26);
  hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_0_32, &Context_47);
  hlds__make_goal__make_string_const_construction_4_p_0(Context_47, PredNameVar_46, PredName_20, &UnifyGoal_48);
  PredModuleName_49 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_32);
  succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(PredModuleName_49);
  if (succeeded)
    CalleeName_50 = (MR_String) "sorry";
  else
    CalleeName_50 = (MR_String) "no_clauses";
  Var_57 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (PredNameVar_46));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_60 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_5, (MR_Integer) 0, Var_57, CalleeName_50, (MR_Word) ((MR_Unsigned) 0U), Var_59, Var_60, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_47, &CallGoal_51);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_47, &GoalInfo_52);
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (CallGoal_51));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (UnifyGoal_48));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_69));
  }
  {
    Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_66, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_66, 2) = ((MR_Box) (Var_68));
  }
  {
    Body_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Body_53, 0) = ((MR_Box) (Var_66));
    MR_hl_field(0, Body_53, 1) = ((MR_Box) (GoalInfo_52));
  }
  Var_74 = hlds__hlds_clauses__init_unused_statevar_arg_map_0_f_0();
  {
    StubClause_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StubClause_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, StubClause_24, 1) = ((MR_Box) (Body_53));
    MR_hl_field(0, StubClause_24, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, StubClause_24, 3) = ((MR_Box) (Context_47));
    MR_hl_field(0, StubClause_24, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, StubClause_24, 5) = ((MR_Box) (Var_74));
    MR_hl_field(0, StubClause_24, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__var_table_hlds__make_var_table_4_p_0(ModuleInfo_5, VarSet_25, VarTypes_26, &VarTable_27);
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (StubClause_24));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_clauses__set_clause_list_2_p_0(Var_38, &ClausesRep_28);
  ItemNumbers_29 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  {
    STATE_VARIABLE_ClausesInfo_2_40 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_2_40, 0) = ((MR_Box) (VarSet_25));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_2_40, 1) = ((MR_Box) (VarTypes_26));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_2_40, 2) = ((MR_Box) (VarTable_27));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_2_40, 3) = ((MR_Box) (RttiVarMaps_12));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_2_40, 4) = ((MR_Box) (TVarNameMap_13));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_2_40, 5) = ((MR_Box) (ArgVec_14));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_2_40, 6) = ((MR_Box) (ClausesRep_28));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_2_40, 7) = ((MR_Box) (ItemNumbers_29));
    MR_hl_field(0, STATE_VARIABLE_ClausesInfo_2_40, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_2_40, STATE_VARIABLE_PredInfo_0_32, &STATE_VARIABLE_PredInfo_1_43);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_1_43, &Markers0_30);
  hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 0, Markers0_30, &Markers_31);
  hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_31, STATE_VARIABLE_PredInfo_1_43, STATE_VARIABLE_PredInfo_33);
}

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Word STATE_VARIABLE_PredInfo_0_76,
  MR_Word * STATE_VARIABLE_PredInfo_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79,
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
  MR_Word ConstraintDb_35;
  MR_Word PredMarkers0_36;
  MR_Word Clauses0_37;
  MR_Word Clauses_38;
  MR_Word MaybeRHSLambda_39;
  MR_Word Context_41;
  MR_Word TypeVarSet_42;
  MR_Word InferredVarTypes_43;
  MR_Word InferredTypeConstraints0_44;
  MR_Word ConstraintProofMap_45;
  MR_Word ConstraintMap_46;
  MR_Word TVarRenaming_47;
  MR_Word ExistTypeRenaming_48;
  MR_Word VarsTypes_49;
  MR_Word VarTable0_50;
  MR_Word VarTable_51;
  MR_Word ExplicitVarTypes1_52;
  MR_Word ExplicitVarTypes_55;
  MR_Word ClausesRep_56;
  MR_Word ArgTypes_57;
  MR_Word ArgTypeVars_58;
  MR_Word InferredTypeConstraints_59;
  MR_Word UnprovenBodyConstraints_60;
  MR_Word STATE_VARIABLE_ClausesInfo_1_80;
  MR_Word STATE_VARIABLE_ExternalTypeParams_1_85;
  MR_Word STATE_VARIABLE_TypeAssignSet_1_96;
  MR_Word STATE_VARIABLE_Info_1_97;
  MR_Word STATE_VARIABLE_TypeAssignSet_2_98;
  MR_Word STATE_VARIABLE_Info_2_99;
  MR_Word STATE_VARIABLE_PredInfo_1_101;
  MR_Word STATE_VARIABLE_TypeAssignSet_3_102;
  MR_Word STATE_VARIABLE_Info_3_103;
  MR_Word STATE_VARIABLE_Info_4_105;
  MR_Word STATE_VARIABLE_Info_5_106;
  MR_Word STATE_VARIABLE_ExternalTypeParams_6_107;
  MR_Word STATE_VARIABLE_ClausesInfo_2_108;
  MR_Word STATE_VARIABLE_ClausesInfo_3_109;
  MR_Word STATE_VARIABLE_ClausesInfo_4_110;
  MR_Word STATE_VARIABLE_PredInfo_2_111;
  MR_Word STATE_VARIABLE_PredInfo_3_112;
  MR_Word STATE_VARIABLE_PredInfo_4_113;
  MR_Word STATE_VARIABLE_PredInfo_5_114;
  MR_Word STATE_VARIABLE_PredInfo_6_115;
  MR_Word _ArgTypeVarSet_26;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_76, &STATE_VARIABLE_ClausesInfo_1_80);
  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(STATE_VARIABLE_ClausesInfo_1_80, &ClausesRep0_19, &ItemNumbers_20);
  hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(STATE_VARIABLE_ClausesInfo_1_80, &HeadVars_21);
  hlds__hlds_clauses__clauses_info_get_varset_2_p_0(STATE_VARIABLE_ClausesInfo_1_80, &ClauseVarSet_22);
  hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(STATE_VARIABLE_ClausesInfo_1_80, &ExplicitVarTypes0_23);
  hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_0_76, &PredStatus_24);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_76, &TypeVarSet0_25);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_0_76, &_ArgTypeVarSet_26, &ExistQVars0_27, &ArgTypes0_28);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_76, &Markers0_29);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers0_29, (MR_Integer) 2);
  if (succeeded)
  {
    Inferring_30 = (MR_Integer) 1;
    hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_9, ModuleInfo_10, (MR_String) "Inferring type of", PredId_11);
    STATE_VARIABLE_ExternalTypeParams_1_85 = (MR_Word) ((MR_Unsigned) 0U);
    PredConstraints_32 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[3]);
  }
  else
  {
    MR_Word UnivTVars_33;
    MR_Word STATE_VARIABLE_ExternalTypeParams_2_91;
    MR_Word Var_92;
    MR_Word STATE_VARIABLE_ExternalTypeParams_3_93;
    MR_Word STATE_VARIABLE_ExternalTypeParams_4_94;

    Inferring_30 = (MR_Integer) 0;
    hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_9, ModuleInfo_10, (MR_String) "Type-checking", PredId_11);
    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes0_28, &STATE_VARIABLE_ExternalTypeParams_2_91);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(STATE_VARIABLE_PredInfo_0_76, &PredConstraints_32);
    Var_92 = ((MR_Word) ((MR_hl_field(0, PredConstraints_32, 0))));
    parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(Var_92, &UnivTVars_33);
    STATE_VARIABLE_ExternalTypeParams_3_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), UnivTVars_33, STATE_VARIABLE_ExternalTypeParams_2_91);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), STATE_VARIABLE_ExternalTypeParams_3_93, &STATE_VARIABLE_ExternalTypeParams_4_94);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), STATE_VARIABLE_ExternalTypeParams_4_94, ExistQVars0_27, &STATE_VARIABLE_ExternalTypeParams_1_85);
  }
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_10, &ClassTable_34);
  hlds__hlds_class__make_head_hlds_constraint_db_4_p_0(ClassTable_34, TypeVarSet0_25, PredConstraints_32, &ConstraintDb_35);
  check_hlds__type_assign__type_assign_set_init_5_p_0(TypeVarSet0_25, ExplicitVarTypes0_23, STATE_VARIABLE_ExternalTypeParams_1_85, ConstraintDb_35, &STATE_VARIABLE_TypeAssignSet_1_96);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_76, &PredMarkers0_36);
  check_hlds__typecheck_info__typecheck_info_init_9_p_0(ProgressStream_9, ModuleInfo_10, PredId_11, STATE_VARIABLE_PredInfo_0_76, ClauseVarSet_22, PredStatus_24, PredMarkers0_36, STATE_VARIABLE_Specs_0_78, &STATE_VARIABLE_Info_1_97);
  hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_19, &Clauses0_37);
  check_hlds__typecheck_clauses__typecheck_clauses_8_p_0(HeadVars_21, ArgTypes0_28, Clauses0_37, &Clauses_38, STATE_VARIABLE_TypeAssignSet_1_96, &STATE_VARIABLE_TypeAssignSet_2_98, STATE_VARIABLE_Info_1_97, &STATE_VARIABLE_Info_2_99);
  check_hlds__typecheck_info__typecheck_info_get_rhs_lambda_2_p_0(STATE_VARIABLE_Info_2_99, &MaybeRHSLambda_39);
  switch (MaybeRHSLambda_39) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_PredInfo_1_101 = STATE_VARIABLE_PredInfo_0_76;
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredMarkers_40;

        hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 29, PredMarkers0_36, &PredMarkers_40);
        hlds__hlds_pred__pred_info_set_markers_3_p_0(PredMarkers_40, STATE_VARIABLE_PredInfo_0_76, &STATE_VARIABLE_PredInfo_1_101);
      }
      break;
  }
  hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_1_101, &Context_41);
  check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_41, STATE_VARIABLE_TypeAssignSet_2_98, &STATE_VARIABLE_TypeAssignSet_3_102, STATE_VARIABLE_Info_2_99, &STATE_VARIABLE_Info_3_103);
  check_hlds__typecheck_error_overload__typecheck_check_for_ambiguity_6_p_0(Context_41, (MR_Integer) 1, HeadVars_21, STATE_VARIABLE_TypeAssignSet_3_102, STATE_VARIABLE_Info_3_103, &STATE_VARIABLE_Info_4_105);
  check_hlds__typecheck__typecheck_check_remaining_coercion_constraints_3_p_0(STATE_VARIABLE_TypeAssignSet_3_102, STATE_VARIABLE_Info_4_105, &STATE_VARIABLE_Info_5_106);
  check_hlds__type_assign__type_assign_set_get_final_info_12_p_0(STATE_VARIABLE_TypeAssignSet_3_102, STATE_VARIABLE_ExternalTypeParams_1_85, ExistQVars0_27, ExplicitVarTypes0_23, &TypeVarSet_42, &STATE_VARIABLE_ExternalTypeParams_6_107, &InferredVarTypes_43, &InferredTypeConstraints0_44, &ConstraintProofMap_45, &ConstraintMap_46, &TVarRenaming_47, &ExistTypeRenaming_48);
  parse_tree__vartypes__vartypes_to_sorted_assoc_list_2_p_0(InferredVarTypes_43, &VarsTypes_49);
  hlds__var_table_hlds__vars_types_to_var_table_4_p_0(ModuleInfo_10, ClauseVarSet_22, VarsTypes_49, &VarTable0_50);
  parse_tree__var_table__var_table_optimize_2_p_0(VarTable0_50, &VarTable_51);
  hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_51, STATE_VARIABLE_ClausesInfo_1_80, &STATE_VARIABLE_ClausesInfo_2_108);
  if ((ExistQVars0_27 == (MR_Word) ((MR_Unsigned) 0U)))
    ExplicitVarTypes1_52 = ExplicitVarTypes0_23;
  else
    parse_tree__vartypes__rename_vars_in_vartypes_3_p_0(ExistTypeRenaming_48, ExplicitVarTypes0_23, &ExplicitVarTypes1_52);
  parse_tree__vartypes__rename_vars_in_vartypes_3_p_0(TVarRenaming_47, ExplicitVarTypes1_52, &ExplicitVarTypes_55);
  hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(ExplicitVarTypes_55, STATE_VARIABLE_ClausesInfo_2_108, &STATE_VARIABLE_ClausesInfo_3_109);
  hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_38, &ClausesRep_56);
  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_56, ItemNumbers_20, STATE_VARIABLE_ClausesInfo_3_109, &STATE_VARIABLE_ClausesInfo_4_110);
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_4_110, STATE_VARIABLE_PredInfo_1_101, &STATE_VARIABLE_PredInfo_2_111);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_42, STATE_VARIABLE_PredInfo_2_111, &STATE_VARIABLE_PredInfo_3_112);
  hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(ConstraintProofMap_45, STATE_VARIABLE_PredInfo_3_112, &STATE_VARIABLE_PredInfo_4_113);
  hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(ConstraintMap_46, STATE_VARIABLE_PredInfo_4_113, &STATE_VARIABLE_PredInfo_5_114);
  parse_tree__vartypes__lookup_var_types_3_p_0(InferredVarTypes_43, HeadVars_21, &ArgTypes_57);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_57, &ArgTypeVars_58);
  check_hlds__typecheck__restrict_constraints_to_head_vars_4_p_0(ArgTypeVars_58, InferredTypeConstraints0_44, &InferredTypeConstraints_59, &UnprovenBodyConstraints_60);
  hlds__hlds_pred__pred_info_set_unproven_body_constraints_3_p_0(UnprovenBodyConstraints_60, STATE_VARIABLE_PredInfo_5_114, &STATE_VARIABLE_PredInfo_6_115);
  switch (Inferring_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Origin0_66;
        MR_Word ExistQVars1_67;
        MR_Word ArgTypes1_68;
        MR_Word PredConstraints1_69;
        MR_Word Origin1_70;
        MR_Word RenamedOldArgTypes_73;
        MR_Word RenamedOldConstraints_74;
        MR_Word Origin_75;
        MR_Word STATE_VARIABLE_PredInfo_10_120;
        MR_Word STATE_VARIABLE_PredInfo_11_121;
        MR_Word STATE_VARIABLE_PredInfo_12_122;
        MR_Word ExistQVars_125;

        hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(STATE_VARIABLE_ExternalTypeParams_6_107, STATE_VARIABLE_PredInfo_6_115, &STATE_VARIABLE_PredInfo_10_120);
        hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_10_120, &Origin0_66);
        if ((ExistQVars0_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ExistQVars1_67 = (MR_Word) ((MR_Unsigned) 0U);
          ArgTypes1_68 = ArgTypes0_28;
          PredConstraints1_69 = PredConstraints_32;
          Origin1_70 = Origin0_66;
        }
        else
        {
          mercury__term_subst__apply_renaming_in_vars_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), ExistTypeRenaming_48, ExistQVars0_27, &ExistQVars1_67);
          parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0(ExistTypeRenaming_48, ArgTypes0_28, &ArgTypes1_68);
          parse_tree__prog_type_subst__apply_renaming_to_univ_exist_constraints_3_p_0(ExistTypeRenaming_48, PredConstraints_32, &PredConstraints1_69);
          check_hlds__typecheck__rename_instance_method_constraints_3_p_0(ExistTypeRenaming_48, Origin0_66, &Origin1_70);
        }
        mercury__term_subst__apply_renaming_in_vars_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarRenaming_47, ExistQVars1_67, &ExistQVars_125);
        parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0(TVarRenaming_47, ArgTypes1_68, &RenamedOldArgTypes_73);
        parse_tree__prog_type_subst__apply_renaming_to_univ_exist_constraints_3_p_0(TVarRenaming_47, PredConstraints1_69, &RenamedOldConstraints_74);
        check_hlds__typecheck__rename_instance_method_constraints_3_p_0(TVarRenaming_47, Origin1_70, &Origin_75);
        hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_42, ExistQVars_125, RenamedOldArgTypes_73, STATE_VARIABLE_PredInfo_10_120, &STATE_VARIABLE_PredInfo_11_121);
        hlds__hlds_pred__pred_info_set_class_context_3_p_0(RenamedOldConstraints_74, STATE_VARIABLE_PredInfo_11_121, &STATE_VARIABLE_PredInfo_12_122);
        hlds__hlds_pred__pred_info_set_origin_3_p_0(Origin_75, STATE_VARIABLE_PredInfo_12_122, STATE_VARIABLE_PredInfo_77);
        *NextIteration_14 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExistQVars_61;
        MR_Word OldTypeConstraints_62;
        MR_Word STATE_VARIABLE_ExternalTypeParams_7_116;
        MR_Word STATE_VARIABLE_PredInfo_7_117;
        MR_Word STATE_VARIABLE_PredInfo_8_118;

        check_hlds__typecheck__infer_existential_types_4_p_0(ArgTypeVars_58, &ExistQVars_61, STATE_VARIABLE_ExternalTypeParams_6_107, &STATE_VARIABLE_ExternalTypeParams_7_116);
        hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(STATE_VARIABLE_ExternalTypeParams_7_116, STATE_VARIABLE_PredInfo_6_115, &STATE_VARIABLE_PredInfo_7_117);
        hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_42, ExistQVars_61, ArgTypes_57, STATE_VARIABLE_PredInfo_7_117, &STATE_VARIABLE_PredInfo_8_118);
        hlds__hlds_pred__pred_info_get_class_context_2_p_0(STATE_VARIABLE_PredInfo_8_118, &OldTypeConstraints_62);
        hlds__hlds_pred__pred_info_set_class_context_3_p_0(InferredTypeConstraints_59, STATE_VARIABLE_PredInfo_8_118, STATE_VARIABLE_PredInfo_77);
        {
          MR_Word TVarKindMap_63;

          hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(*STATE_VARIABLE_PredInfo_77, &TVarKindMap_63);
          succeeded = check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(TVarKindMap_63, ExistQVars0_27, ArgTypes0_28, OldTypeConstraints_62, ExistQVars_61, ArgTypes_57, InferredTypeConstraints_59);
        }
        if (!(succeeded))
        {
          MR_Word GoalType_64;

          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(*STATE_VARIABLE_PredInfo_77, &GoalType_64);
          succeeded = ((MR_tag((MR_Word) GoalType_64)) == (MR_Integer) 1);
        }
        if (succeeded)
          *NextIteration_14 = (MR_Integer) 0;
        else
          *NextIteration_14 = (MR_Integer) 1;
      }
      break;
  }
  check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(STATE_VARIABLE_Info_5_106, STATE_VARIABLE_Specs_79);
}

static void MR_CALL 
check_hlds__typecheck__typecheck_check_remaining_coercion_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_20;

  check_hlds__typecheck__report_coercion_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
check_hlds__typecheck__typecheck_check_remaining_coercion_constraints_3_p_0(
  MR_Word TypeAssignSet_4,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  if ((TypeAssignSet_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_check_remaining_coercion_constraints\'/3", (MR_String) "no type-assignment");
      return;
    }
  else
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_4, 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_4, 0))));

    if ((Var_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Coercions_7;
      MR_Word Var_16;
      MR_Box conv1_STATE_VARIABLE_Info_12;

      check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(Var_25, &Coercions_7);
      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_16, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[0]));
        MR_hl_field(0, Var_16, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_check_remaining_coercion_constraints_3_p_0_1));
        MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_16, 3) = ((MR_Box) (Var_25));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_16, Coercions_7, ((MR_Box) (STATE_VARIABLE_Info_0_11)), &conv1_STATE_VARIABLE_Info_12);
      *STATE_VARIABLE_Info_12 = ((MR_Word) (conv1_STATE_VARIABLE_Info_12));
    }
    else
      *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
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
  MR_Word UnivCsA_30 = ((MR_Word) ((MR_hl_field(0, TypeConstraintsA_11, 0))));
  MR_Word ExistCsA_31 = ((MR_Word) ((MR_hl_field(0, TypeConstraintsA_11, 1))));
  MR_Word UnivCsB_32 = ((MR_Word) ((MR_hl_field(0, TypeConstraintsB_14, 0))));
  MR_Word ExistCsB_33 = ((MR_Word) ((MR_hl_field(0, TypeConstraintsB_14, 1))));
  MR_Word UnivTypesA_34;
  MR_Word UnivTypesB_35;
  MR_Word ExistTypesA_36;
  MR_Word ExistTypesB_37;

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
          succeeded = parse_tree__prog_type_unify__identical_up_to_renaming_2_p_0(TypesListA_19, TypesListB_20);
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
    MR_Word ConstraintA_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ConstraintsA_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
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
      ConstraintB_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ConstraintsB_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ClassName_11 = ((MR_Word) ((MR_hl_field(0, ConstraintA_5, 0))));
      ArgTypesA_12 = ((MR_Word) ((MR_hl_field(0, ConstraintA_5, 1))));
      Var_17 = ((MR_Word) ((MR_hl_field(0, ConstraintB_7, 0))));
      ArgTypesB_13 = ((MR_Word) ((MR_hl_field(0, ConstraintB_7, 1))));
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

  succeeded = check_hlds__typecheck__is_head_class_constraint_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck__restrict_constraints_to_head_vars_4_p_0(
  MR_Word ArgVarTypes_5,
  MR_Word STATE_VARIABLE_Constraints_0_13,
  MR_Word * STATE_VARIABLE_Constraints_14,
  MR_Word * UnprovenCs_7)
{
  MR_bool succeeded;
  MR_Word UnivCs0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_13, 0))));
  MR_Word ExistCs0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_13, 1))));
  MR_Word UnivCs_10;
  MR_Word ExistCs_11;
  MR_Word Var_15;
  MR_Word Var_12;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (check_hlds__typecheck__restrict_constraints_to_head_vars_4_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (ArgVarTypes_5));
  }
  mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_15, UnivCs0_8, &UnivCs_10, UnprovenCs_7);
  mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_15, ExistCs0_9, &ExistCs_11, &Var_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraints_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (UnivCs_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExistCs_11));
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
    OriginUser0_7 = ((MR_Word) ((MR_hl_field(0, Origin0_5, 0))));
    succeeded = ((((MR_tag((MR_Word) OriginUser0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OriginUser0_7, 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      PFSymNameArity_8 = ((MR_Word) ((MR_hl_field(3, OriginUser0_7, 1))));
      Constraints0_9 = ((MR_Word) ((MR_hl_field(3, OriginUser0_7, 2))));
    }
  }
  if (succeeded)
  {
    MR_Word ClassId_10 = ((MR_Word) ((MR_hl_field(0, Constraints0_9, 0))));
    MR_Word InstanceTypes0_11 = ((MR_Word) ((MR_hl_field(0, Constraints0_9, 1))));
    MR_Word InstanceConstraints0_12 = ((MR_Word) ((MR_hl_field(0, Constraints0_9, 2))));
    MR_Word ClassMethodClassContext0_13 = ((MR_Word) ((MR_hl_field(0, Constraints0_9, 3))));
    MR_Word InstanceTypes_14;
    MR_Word InstanceConstraints_15;
    MR_Word ClassMethodClassContext_16;
    MR_Word Constraints_17;
    MR_Word OriginUser_18;

    parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0(Renaming_4, InstanceTypes0_11, &InstanceTypes_14);
    parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(Renaming_4, InstanceConstraints0_12, &InstanceConstraints_15);
    parse_tree__prog_type_subst__apply_renaming_to_univ_exist_constraints_3_p_0(Renaming_4, ClassMethodClassContext0_13, &ClassMethodClassContext_16);
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

void mercury__check_hlds__typecheck__init(void)
{
}

void mercury__check_hlds__typecheck__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_need_typecheck_0);
  MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_next_iteration_0);
  MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_number_of_iterations_0);
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
