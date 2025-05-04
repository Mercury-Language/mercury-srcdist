/*
** Automatically generated from `simplify_proc.m'
** by the Mercury compiler,
** version rotd-2025-05-04
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


// :- module check_hlds.simplify.simplify_proc.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_proc__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_proc.mih"


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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.det_infer_goal.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.simplify.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.direct_arg_in_out.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.format_call.mih"
#include "check_hlds.simplify.mark_trace_goals.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "check_hlds.simplify.split_switch_arms.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_functor_desc_maybe_allow_splitting_switch_arms_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_functor_desc_maybe_allow_splitting_switch_arms_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_ordinal_ordered_maybe_allow_splitting_switch_arms_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_name_ordered_maybe_allow_splitting_switch_arms_0[2];

static const MR_Integer check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__functor_number_map_maybe_allow_splitting_switch_arms_0[2];

static void MR_CALL 
check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__304__1_4_p_0(
  MR_Word LambdaHeadVar__1_74,
  MR_String LambdaHeadVar__2_75,
  MR_Word LambdaHeadVar__3_76,
  MR_Word * LambdaHeadVar__4_77);

static void MR_CALL 
check_hlds__simplify__simplify_proc____Compare____maybe_allow_splitting_switch_arms_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc____Unify____maybe_allow_splitting_switch_arms_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word SimplifyTasks0_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word * STATE_VARIABLE_Specs_57,
  MR_Word STATE_VARIABLE_ProcInfo_0_58,
  MR_Word * STATE_VARIABLE_ProcInfo_59,
  MR_Word STATE_VARIABLE_ModuleInfo_0_60,
  MR_Word * STATE_VARIABLE_ModuleInfo_61);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_top_level_goal_7_p_0(
  MR_Word NestedContext0_8,
  MR_Word InstMap0_9,
  MR_Word AllowSplitSwitchArms_10,
  MR_Word STATE_VARIABLE_Goal_0_26,
  MR_Word * STATE_VARIABLE_Goal_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
check_hlds__simplify__simplify_proc__maybe_recompute_fields_after_top_level_goal_6_p_0(
  MR_Word GoalInfo0_7,
  MR_Word InstMap0_8,
  MR_Word STATE_VARIABLE_Goal_0_34,
  MR_Word * STATE_VARIABLE_Goal_35,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static void MR_CALL 
check_hlds__simplify__simplify_proc__do_simplify_top_level_goal_6_p_0(
  MR_Word NestedContext0_7,
  MR_Word InstMap0_8,
  MR_Word STATE_VARIABLE_Goal_0_16,
  MR_Word * STATE_VARIABLE_Goal_17,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_attribute_conflict_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
check_hlds__simplify__simplify_proc__maybe_warn_about_may_export_body_attribute_5_p_0(
  MR_Word MayExportBody_6,
  MR_Word Markers_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_9_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word PredId_11,
  MR_Word PredInfo0_12,
  MR_Integer ProcId_13,
  MR_Word STATE_VARIABLE_ProcInfo_0_28,
  MR_Word * STATE_VARIABLE_ProcInfo_29,
  MR_Word ImplicitStreamWarnings_15,
  MR_Word * FormatSpecs_16);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_SimplifyTasks_0_18,
  MR_Word * STATE_VARIABLE_SimplifyTasks_19);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc____Unify____maybe_allow_splitting_switch_arms_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_proc____Compare____maybe_allow_splitting_switch_arms_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_1[27][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_5[2][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_6[1][7];




static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_1[27][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attribute"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_duplicate"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "no_inline"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "on the foreign_proc is"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not compatible"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with the"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "on the predicate."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_not_duplicate"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[3])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[7])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_export_body"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[3])))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_2[1][4] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_5[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_4[0])),
    ((MR_Box) (check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_6[0])),
    ((MR_Box) (check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_functor_desc_maybe_allow_splitting_switch_arms_0_0 = {
  (MR_String) "do_not_allow_splitting_switch_arms",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_functor_desc_maybe_allow_splitting_switch_arms_0_1 = {
  (MR_String) "allow_splitting_switch_arms",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_ordinal_ordered_maybe_allow_splitting_switch_arms_0[2] = {
  &check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_functor_desc_maybe_allow_splitting_switch_arms_0_0,
  &check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_functor_desc_maybe_allow_splitting_switch_arms_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_name_ordered_maybe_allow_splitting_switch_arms_0[2] = {
  &check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_functor_desc_maybe_allow_splitting_switch_arms_0_1,
  &check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_functor_desc_maybe_allow_splitting_switch_arms_0_0
};

static const MR_Integer check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__functor_number_map_maybe_allow_splitting_switch_arms_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__type_ctor_info_maybe_allow_splitting_switch_arms_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_proc____Unify____maybe_allow_splitting_switch_arms_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_proc____Compare____maybe_allow_splitting_switch_arms_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_proc",
  (MR_String) "maybe_allow_splitting_switch_arms",
  { check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_name_ordered_maybe_allow_splitting_switch_arms_0 },
  { check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__enum_ordinal_ordered_maybe_allow_splitting_switch_arms_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__functor_number_map_maybe_allow_splitting_switch_arms_0,

};

static void MR_CALL 
check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__304__1_4_p_0(
  MR_Word LambdaHeadVar__1_74,
  MR_String LambdaHeadVar__2_75,
  MR_Word LambdaHeadVar__3_76,
  MR_Word * LambdaHeadVar__4_77)
{
  MR_Word E0_45;
  MR_Word E_46;
  MR_Word Var_152;
  MR_Word Var_153;

  parse_tree__var_table__lookup_var_entry_3_p_0(LambdaHeadVar__3_76, LambdaHeadVar__1_74, &E0_45);
  Var_152 = ((MR_Word) ((MR_hl_field(0, E0_45, 1))));
  Var_153 = ((MR_Unsigned) ((MR_hl_field(0, E0_45, 2))) & (MR_Integer) 1);
  {
    E_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, E_46, 0) = ((MR_Box) (LambdaHeadVar__2_75));
    MR_hl_field(0, E_46, 1) = ((MR_Box) (Var_152));
    MR_hl_field(0, E_46, 2) = (MR_Box) ((MR_Unsigned) (Var_153));
  }
  parse_tree__var_table__update_var_entry_4_p_0(LambdaHeadVar__1_74, E_46, LambdaHeadVar__3_76, LambdaHeadVar__4_77);
}

static void MR_CALL 
check_hlds__simplify__simplify_proc____Compare____maybe_allow_splitting_switch_arms_0_0(
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
check_hlds__simplify__simplify_proc____Unify____maybe_allow_splitting_switch_arms_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_goal_update_vars_in_proc_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word SimplifyTasks_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word InstMap0_17,
  MR_Integer * CostDelta_18,
  MR_Word STATE_VARIABLE_Goal_0_31,
  MR_Word * STATE_VARIABLE_Goal_32,
  MR_Word STATE_VARIABLE_ProcInfo_0_33,
  MR_Word * STATE_VARIABLE_ProcInfo_34,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36)
{
  MR_Word SimplifyInfo0_22;
  MR_Word SimplifyInfo_28;
  MR_Word VarTable_29;
  MR_Word RttiVarMaps_30;
  MR_Word STATE_VARIABLE_ProcInfo_40_40;

  check_hlds__simplify__simplify_info__simplify_info_init_7_p_0(ProgressStream_13, STATE_VARIABLE_ModuleInfo_0_35, PredId_15, ProcId_16, STATE_VARIABLE_ProcInfo_0_33, SimplifyTasks_14, &SimplifyInfo0_22);
  check_hlds__simplify__simplify_proc__simplify_top_level_goal_7_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_2[0]), InstMap0_17, (MR_Integer) 0, STATE_VARIABLE_Goal_0_31, STATE_VARIABLE_Goal_32, SimplifyInfo0_22, &SimplifyInfo_28);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(SimplifyInfo_28, STATE_VARIABLE_ModuleInfo_36);
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(SimplifyInfo_28, &VarTable_29);
  check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(SimplifyInfo_28, &RttiVarMaps_30);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_29, STATE_VARIABLE_ProcInfo_0_33, &STATE_VARIABLE_ProcInfo_40_40);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_30, STATE_VARIABLE_ProcInfo_40_40, STATE_VARIABLE_ProcInfo_34);
  check_hlds__simplify__simplify_info__simplify_info_get_cost_delta_2_p_0(SimplifyInfo_28, CostDelta_18);
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_9_p_0(
  MR_Word MaybeProgressStream_10,
  MR_Word ProgressStream_11,
  MR_Word SimplifyTasks_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_20,
  MR_Word * STATE_VARIABLE_ProcInfo_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  MR_Word Var_19;

  if (!((MaybeProgressStream_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Stream_18 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_10, 0))));

    hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(Stream_18, STATE_VARIABLE_ModuleInfo_0_22, (MR_String) "Simplifying", PredId_13);
  }
  check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_9_p_0(ProgressStream_11, SimplifyTasks_12, PredId_13, ProcId_14, &Var_19, STATE_VARIABLE_ProcInfo_0_20, STATE_VARIABLE_ProcInfo_21, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_pred_procs_10_p_0(
  MR_Word ProgressStream_1,
  MR_Word SimplifyTasks_2,
  MR_Word PredId_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredInfo_0_5,
  MR_Word * STATE_VARIABLE_PredInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
      *STATE_VARIABLE_PredInfo_6 = STATE_VARIABLE_PredInfo_0_5;
    }
    else
    {
      MR_Integer ProcId_26 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ProcIds_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_PredInfo_37_37;
      MR_Word STATE_VARIABLE_ModuleInfo_38_38;
      MR_Word STATE_VARIABLE_Specs_39_39;
      MR_Word ProcTable0_40;
      MR_Word ProcInfo0_41;
      MR_Word ProcSpecs_42;
      MR_Word ProcInfo_43;
      MR_Word HasParallelConj_44;
      MR_Word HasUserEvent_45;
      MR_Word ProcTable_46;
      MR_Word STATE_VARIABLE_ModuleInfo_31_47;
      MR_Word STATE_VARIABLE_ModuleInfo_32_48;
      MR_Box conv0_ProcInfo0_41;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PredInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_5, &ProcTable0_40);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_40, ((MR_Box) (ProcId_26)), &conv0_ProcInfo0_41);
      ProcInfo0_41 = ((MR_Word) (conv0_ProcInfo0_41));
      check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_9_p_0(ProgressStream_1, SimplifyTasks_2, PredId_3, ProcId_26, &ProcSpecs_42, ProcInfo0_41, &ProcInfo_43, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_31_47);
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_43, &HasParallelConj_44);
      switch (HasParallelConj_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_ModuleInfo_32_48 = STATE_VARIABLE_ModuleInfo_31_47;
          break;
        case (MR_Integer) 0:
          hlds__hlds_module__module_info_set_has_parallel_conj_2_p_0(STATE_VARIABLE_ModuleInfo_31_47, &STATE_VARIABLE_ModuleInfo_32_48);
          break;
      }
      hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(ProcInfo_43, &HasUserEvent_45);
      switch (HasUserEvent_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_ModuleInfo_38_38 = STATE_VARIABLE_ModuleInfo_32_48;
          break;
        case (MR_Integer) 0:
          hlds__hlds_module__module_info_set_has_user_event_2_p_0(STATE_VARIABLE_ModuleInfo_32_48, &STATE_VARIABLE_ModuleInfo_38_38);
          break;
      }
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_26)), ((MR_Box) (ProcInfo_43)), ProcTable0_40, &ProcTable_46);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_46, STATE_VARIABLE_PredInfo_0_5, &STATE_VARIABLE_PredInfo_37_37);
      parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(ProcSpecs_42, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_39_39);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ProcIds_27;
      next_value_of_STATE_VARIABLE_PredInfo_0_5 = STATE_VARIABLE_PredInfo_37_37;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_7 = STATE_VARIABLE_ModuleInfo_38_38;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_39_39;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_PredInfo_0_5 = next_value_of_STATE_VARIABLE_PredInfo_0_5;
      STATE_VARIABLE_ModuleInfo_0_7 = next_value_of_STATE_VARIABLE_ModuleInfo_0_7;
      STATE_VARIABLE_Specs_0_9 = next_value_of_STATE_VARIABLE_Specs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__4_77;

  check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__304__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_77);
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_77));
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word SimplifyTasks0_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word * STATE_VARIABLE_Specs_57,
  MR_Word STATE_VARIABLE_ProcInfo_0_58,
  MR_Word * STATE_VARIABLE_ProcInfo_59,
  MR_Word STATE_VARIABLE_ModuleInfo_0_60,
  MR_Word * STATE_VARIABLE_ModuleInfo_61)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_17;
  MR_Word PredInfo0_18;
  MR_Word Markers0_19;
  MR_Word FormatSpecs_21;
  MR_Word Info0_22;
  MR_Word CodeModel_24;
  MR_Word ProcIsModelNon_25;
  MR_Word NestedContext0_28;
  MR_Word InstMap0_29;
  MR_Word Goal0_30;
  MR_Word Goal_31;
  MR_Word Info_32;
  MR_Word VarTable0_33;
  MR_Word RttiVarMaps_34;
  MR_Word ElimVarsLists0_35;
  MR_Word ElimVarsLists_36;
  MR_Word ElimVars_37;
  MR_Word VarTable1_38;
  MR_Word VarTable_47;
  MR_Word HasParallelConj_50;
  MR_Word HasUserEvent_51;
  MR_Word CurDeletedCallCallees_52;
  MR_Word DeletedCallCallees0_53;
  MR_Word DeletedCallCallees_54;
  MR_Word Status_55;
  MR_Word IsDefinedHere_56;
  MR_Word STATE_VARIABLE_ProcInfo_63_63;
  MR_Word STATE_VARIABLE_ModuleInfo_68_68;
  MR_Word STATE_VARIABLE_ProcInfo_69_69;
  MR_Word STATE_VARIABLE_ProcInfo_72_72;
  MR_Word STATE_VARIABLE_ModuleInfo_73_73;
  MR_Word STATE_VARIABLE_ProcInfo_79_79;
  MR_Word STATE_VARIABLE_ProcInfo_81_81;
  MR_Word STATE_VARIABLE_ProcInfo_82_82;
  MR_Word STATE_VARIABLE_ProcInfo_83_83;
  MR_Word STATE_VARIABLE_ProcInfo_84_84;
  MR_Word STATE_VARIABLE_Specs_86_86;
  MR_Word STATE_VARIABLE_Specs_87_87;
  MR_Word STATE_VARIABLE_Specs_88_88;
  MR_Word Var_96;
  MR_Word Var_65;

  check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(STATE_VARIABLE_ModuleInfo_0_60, PredId_12, STATE_VARIABLE_ProcInfo_0_58, SimplifyTasks0_11, &SimplifyTasks_17);
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_60, PredId_12, &PredInfo0_18);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_18, &Markers0_19);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers0_19, (MR_Integer) 23);
  if (succeeded)
  {
    MR_Word Goal0_160;
    MR_Word GoalExpr0_161;
    MR_Word GoalInfo0_162;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_58, &Goal0_160);
    GoalExpr0_161 = ((MR_Word) ((MR_hl_field(0, Goal0_160, 0))));
    GoalInfo0_162 = ((MR_Word) ((MR_hl_field(0, Goal0_160, 1))));
    if (((((MR_tag((MR_Word) GoalExpr0_161)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_161, 0)))) == (MR_Integer) 3))))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) GoalExpr0_161)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_161, 0)))) == (MR_Integer) 4))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word GoalInfo_167;
      MR_Word Goal_168;

      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, GoalInfo0_162, &GoalInfo_167);
      {
        Goal_168 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_168, 0) = ((MR_Box) (GoalExpr0_161));
        MR_hl_field(0, Goal_168, 1) = ((MR_Box) (GoalInfo_167));
      }
      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_168, STATE_VARIABLE_ProcInfo_0_58, &STATE_VARIABLE_ProcInfo_63_63);
    }
    else
      STATE_VARIABLE_ProcInfo_63_63 = STATE_VARIABLE_ProcInfo_0_58;
  }
  else
    STATE_VARIABLE_ProcInfo_63_63 = STATE_VARIABLE_ProcInfo_0_58;
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers0_19, (MR_Integer) 27);
  if (succeeded)
  {
    Var_96 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks_17, 0))) >> 17)) & (MR_Integer) 1);
    Var_65 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks_17, 0))) >> 16)) & (MR_Integer) 1);
    succeeded = (Var_65 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word ImplicitStreamWarnings_20;

    switch (Var_96) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ImplicitStreamWarnings_20 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ImplicitStreamWarnings_20 = (MR_Integer) 1;
        break;
    }
    check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_9_p_0(STATE_VARIABLE_ModuleInfo_0_60, &STATE_VARIABLE_ModuleInfo_68_68, PredId_12, PredInfo0_18, ProcId_13, STATE_VARIABLE_ProcInfo_63_63, &STATE_VARIABLE_ProcInfo_69_69, ImplicitStreamWarnings_20, &FormatSpecs_21);
  }
  else
  {
    FormatSpecs_21 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ModuleInfo_68_68 = STATE_VARIABLE_ModuleInfo_0_60;
    STATE_VARIABLE_ProcInfo_69_69 = STATE_VARIABLE_ProcInfo_63_63;
  }
  check_hlds__simplify__simplify_info__simplify_info_init_7_p_0(ProgressStream_10, STATE_VARIABLE_ModuleInfo_68_68, PredId_12, ProcId_13, STATE_VARIABLE_ProcInfo_69_69, SimplifyTasks_17, &Info0_22);
  CodeModel_24 = hlds__code_model__proc_info_interface_code_model_1_f_0(STATE_VARIABLE_ProcInfo_69_69);
  switch (CodeModel_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      ProcIsModelNon_25 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      ProcIsModelNon_25 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_3[0]));
      break;
  }
  {
    NestedContext0_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NestedContext0_28, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, NestedContext0_28, 1) = ((MR_Box) (ProcIsModelNon_25));
    MR_hl_field(0, NestedContext0_28, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, NestedContext0_28, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_68_68, STATE_VARIABLE_ProcInfo_69_69, &InstMap0_29);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_69_69, &Goal0_30);
  check_hlds__simplify__simplify_proc__simplify_top_level_goal_7_p_0(NestedContext0_28, InstMap0_29, (MR_Integer) 1, Goal0_30, &Goal_31, Info0_22, &Info_32);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_31, STATE_VARIABLE_ProcInfo_69_69, &STATE_VARIABLE_ProcInfo_72_72);
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(Info_32, &VarTable0_33);
  check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(Info_32, &RttiVarMaps_34);
  check_hlds__simplify__simplify_info__simplify_info_get_elim_vars_2_p_0(Info_32, &ElimVarsLists0_35);
  mercury__list__sort_2_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[1]), ElimVarsLists0_35, &ElimVarsLists_36);
  mercury__list__condense_2_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]), ElimVarsLists_36, &ElimVars_37);
  parse_tree__var_table__delete_var_entries_3_p_0(ElimVars_37, VarTable0_33, &VarTable1_38);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_32, &STATE_VARIABLE_ModuleInfo_73_73);
  succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(Info_32);
  if (succeeded)
  {
    MR_Word VarNameRemap_39;
    MR_Word HeadVars_48;
    MR_Word ArgModes_49;
    MR_Word Var_78;
    MR_Box conv1_VarTable_47;

    hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(STATE_VARIABLE_ProcInfo_72_72, &VarNameRemap_39);
    mercury__map__foldl_4_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_5[1]), VarNameRemap_39, ((MR_Box) (VarTable1_38)), &conv1_VarTable_47);
    VarTable_47 = ((MR_Word) (conv1_VarTable_47));
    Var_78 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    hlds__hlds_pred__proc_info_set_var_name_remap_3_p_0(Var_78, STATE_VARIABLE_ProcInfo_72_72, &STATE_VARIABLE_ProcInfo_79_79);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_79_79, &HeadVars_48);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_79_79, &ArgModes_49);
    transform_hlds__direct_arg_in_out__find_and_record_any_direct_arg_in_out_posns_7_p_0(PredId_12, ProcId_13, VarTable_47, HeadVars_48, ArgModes_49, STATE_VARIABLE_ModuleInfo_73_73, STATE_VARIABLE_ModuleInfo_61);
  }
  else
  {
    VarTable_47 = VarTable1_38;
    *STATE_VARIABLE_ModuleInfo_61 = STATE_VARIABLE_ModuleInfo_73_73;
    STATE_VARIABLE_ProcInfo_79_79 = STATE_VARIABLE_ProcInfo_72_72;
  }
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_47, STATE_VARIABLE_ProcInfo_79_79, &STATE_VARIABLE_ProcInfo_81_81);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_34, STATE_VARIABLE_ProcInfo_81_81, &STATE_VARIABLE_ProcInfo_82_82);
  check_hlds__simplify__simplify_info__simplify_info_get_has_parallel_conj_2_p_0(Info_32, &HasParallelConj_50);
  hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0(HasParallelConj_50, STATE_VARIABLE_ProcInfo_82_82, &STATE_VARIABLE_ProcInfo_83_83);
  check_hlds__simplify__simplify_info__simplify_info_get_has_user_event_2_p_0(Info_32, &HasUserEvent_51);
  hlds__hlds_pred__proc_info_set_has_user_event_3_p_0(HasUserEvent_51, STATE_VARIABLE_ProcInfo_83_83, &STATE_VARIABLE_ProcInfo_84_84);
  check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(Info_32, &CurDeletedCallCallees_52);
  hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_ProcInfo_84_84, &DeletedCallCallees0_53);
  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CurDeletedCallCallees_52, DeletedCallCallees0_53, &DeletedCallCallees_54);
  hlds__hlds_pred__proc_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_54, STATE_VARIABLE_ProcInfo_84_84, STATE_VARIABLE_ProcInfo_59);
  check_hlds__simplify__simplify_info__simplify_info_get_error_specs_2_p_0(Info_32, &STATE_VARIABLE_Specs_86_86);
  STATE_VARIABLE_Specs_87_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FormatSpecs_21, STATE_VARIABLE_Specs_86_86);
  check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_attribute_conflict_5_p_0(*STATE_VARIABLE_ModuleInfo_61, PredId_12, *STATE_VARIABLE_ProcInfo_59, STATE_VARIABLE_Specs_87_87, &STATE_VARIABLE_Specs_88_88);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_18, &Status_55);
  IsDefinedHere_56 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_55);
  switch (IsDefinedHere_56) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_57 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_88_88;
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_top_level_goal_7_p_0(
  MR_Word NestedContext0_8,
  MR_Word InstMap0_9,
  MR_Word AllowSplitSwitchArms_10,
  MR_Word STATE_VARIABLE_Goal_0_26,
  MR_Word * STATE_VARIABLE_Goal_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word OriginalSimplifyTasks_14;
  MR_Word ToSplitArms_15;
  MR_Word FoundContainsTrace_24;
  MR_Word STATE_VARIABLE_Goal_39_39;
  MR_Word STATE_VARIABLE_Info_50_50;
  MR_Word STATE_VARIABLE_Goal_51_51;
  MR_Word STATE_VARIABLE_Info_52_52;
  MR_Word STATE_VARIABLE_Goal_69_69;
  MR_Word Var_259;
  MR_Word Var_262;
  MR_Word Var_264;
  MR_Word Var_53;

  check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(STATE_VARIABLE_Info_0_28, &OriginalSimplifyTasks_14);
  Var_264 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 9)) & (MR_Integer) 1);
  Var_262 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 7)) & (MR_Integer) 1);
  Var_259 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 4)) & (MR_Integer) 1);
  succeeded = (Var_262 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (Var_259 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (Var_264 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_SimplifyTasks_36_36;
    MR_Word STATE_VARIABLE_Info_38_38;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word STATE_VARIABLE_Info_43_43;
    MR_Word STATE_VARIABLE_SimplifyTasks_48_48;
    MR_Word Var_135 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 19)) & (MR_Integer) 1);
    MR_Word Var_136 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 18)) & (MR_Integer) 1);
    MR_Word Var_137 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 17)) & (MR_Integer) 1);
    MR_Word Var_138 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 16)) & (MR_Integer) 1);
    MR_Word Var_139 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 15)) & (MR_Integer) 1);
    MR_Word Var_141 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 13)) & (MR_Integer) 1);
    MR_Word Var_143 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 11)) & (MR_Integer) 1);
    MR_Word Var_144 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 10)) & (MR_Integer) 1);
    MR_Word Var_145 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 9)) & (MR_Integer) 1);
    MR_Word Var_146 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word Var_147 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word Var_148 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 6)) & (MR_Integer) 1);
    MR_Word Var_149 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 5)) & (MR_Integer) 1);
    MR_Word Var_150 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word Var_151 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word Var_152 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word Var_153 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_154 = ((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) & (MR_Integer) 1);
    MR_Word Var_175;
    MR_Word Var_176;
    MR_Word Var_177;
    MR_Word Var_178;
    MR_Word Var_179;
    MR_Word Var_180;
    MR_Word Var_181;
    MR_Word Var_182;
    MR_Word Var_183;
    MR_Word Var_184;
    MR_Word Var_186;
    MR_Word Var_188;
    MR_Word Var_189;
    MR_Word Var_191;
    MR_Word Var_192;
    MR_Word Var_193;
    MR_Word Var_194;

    {
      STATE_VARIABLE_SimplifyTasks_36_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_36_36, 0) = (MR_Box) (((((MR_Unsigned) (Var_135) << 19)) | (((((MR_Unsigned) (Var_136) << 18)) | (((((MR_Unsigned) (Var_137) << 17)) | (((((MR_Unsigned) (Var_138) << 16)) | (((((MR_Unsigned) (Var_139) << 15)) | (((((MR_Unsigned) ((MR_Integer) 0) << 14)) | (((((MR_Unsigned) (Var_141) << 13)) | (((((MR_Unsigned) ((MR_Integer) 1) << 12)) | (((((MR_Unsigned) (Var_143) << 11)) | (((((MR_Unsigned) (Var_144) << 10)) | (((((MR_Unsigned) (Var_145) << 9)) | (((((MR_Unsigned) (Var_146) << 8)) | (((((MR_Unsigned) (Var_147) << 7)) | (((((MR_Unsigned) (Var_148) << 6)) | (((((MR_Unsigned) (Var_149) << 5)) | (((((MR_Unsigned) (Var_150) << 4)) | (((((MR_Unsigned) (Var_151) << 3)) | (((((MR_Unsigned) (Var_152) << 2)) | (((((MR_Unsigned) (Var_153) << 1)) | (MR_Unsigned) (Var_154)))))))))))))))))))))))))))))))))))))));
    }
    check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(STATE_VARIABLE_SimplifyTasks_36_36, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_38_38);
    check_hlds__simplify__simplify_proc__do_simplify_top_level_goal_6_p_0(NestedContext0_8, InstMap0_9, STATE_VARIABLE_Goal_0_26, &STATE_VARIABLE_Goal_39_39, STATE_VARIABLE_Info_38_38, &STATE_VARIABLE_Info_40_40);
    check_hlds__simplify__simplify_info__simplify_info_set_allow_messages_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_43_43);
    Var_175 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 19)) & (MR_Integer) 1);
    Var_176 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 18)) & (MR_Integer) 1);
    Var_177 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 17)) & (MR_Integer) 1);
    Var_178 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 16)) & (MR_Integer) 1);
    Var_179 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 15)) & (MR_Integer) 1);
    Var_180 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 14)) & (MR_Integer) 1);
    Var_181 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 13)) & (MR_Integer) 1);
    Var_182 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 12)) & (MR_Integer) 1);
    Var_183 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 11)) & (MR_Integer) 1);
    Var_184 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 10)) & (MR_Integer) 1);
    Var_186 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 8)) & (MR_Integer) 1);
    Var_188 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 6)) & (MR_Integer) 1);
    Var_189 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 5)) & (MR_Integer) 1);
    Var_191 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 3)) & (MR_Integer) 1);
    Var_192 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 2)) & (MR_Integer) 1);
    Var_193 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) >> 1)) & (MR_Integer) 1);
    Var_194 = ((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) & (MR_Integer) 1);
    {
      STATE_VARIABLE_SimplifyTasks_48_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_48_48, 0) = (MR_Box) (((((MR_Unsigned) (Var_175) << 19)) | (((((MR_Unsigned) (Var_176) << 18)) | (((((MR_Unsigned) (Var_177) << 17)) | (((((MR_Unsigned) (Var_178) << 16)) | (((((MR_Unsigned) (Var_179) << 15)) | (((((MR_Unsigned) (Var_180) << 14)) | (((((MR_Unsigned) (Var_181) << 13)) | (((((MR_Unsigned) (Var_182) << 12)) | (((((MR_Unsigned) (Var_183) << 11)) | (((((MR_Unsigned) (Var_184) << 10)) | (((((MR_Unsigned) ((MR_Integer) 1) << 9)) | (((((MR_Unsigned) (Var_186) << 8)) | (((((MR_Unsigned) ((MR_Integer) 1) << 7)) | (((((MR_Unsigned) (Var_188) << 6)) | (((((MR_Unsigned) (Var_189) << 5)) | (((((MR_Unsigned) ((MR_Integer) 0) << 4)) | (((((MR_Unsigned) (Var_191) << 3)) | (((((MR_Unsigned) (Var_192) << 2)) | (((((MR_Unsigned) (Var_193) << 1)) | (MR_Unsigned) (Var_194)))))))))))))))))))))))))))))))))))))));
    }
    check_hlds__simplify__simplify_info__simplify_info_reinit_3_p_0(STATE_VARIABLE_SimplifyTasks_48_48, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_50_50);
  }
  else
  {
    STATE_VARIABLE_Info_50_50 = STATE_VARIABLE_Info_0_28;
    STATE_VARIABLE_Goal_39_39 = STATE_VARIABLE_Goal_0_26;
  }
  check_hlds__simplify__simplify_proc__do_simplify_top_level_goal_6_p_0(NestedContext0_8, InstMap0_9, STATE_VARIABLE_Goal_39_39, &STATE_VARIABLE_Goal_51_51, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_52_52);
  check_hlds__simplify__simplify_info__simplify_info_get_switch_arms_to_split_2_p_0(STATE_VARIABLE_Info_52_52, &ToSplitArms_15);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_switch_arm_0), ToSplitArms_15);
  if (succeeded)
  {
    succeeded = (AllowSplitSwitchArms_10 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_53 = ((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_14, 0))) & (MR_Integer) 1);
      succeeded = (Var_53 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_Word GoalInfo0_23;
    MR_Word STATE_VARIABLE_Goal_60_60;
    MR_Word STATE_VARIABLE_Info_67_67;
    MR_Word STATE_VARIABLE_Info_68_68;
    MR_Word TVarSet_16;
    MR_Word InstVarSet_17;

    check_hlds__simplify__simplify_info__simplify_info_get_tvarset_2_p_0(STATE_VARIABLE_Info_52_52, &TVarSet_16);
    check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(STATE_VARIABLE_Info_52_52, &InstVarSet_17);
    check_hlds__simplify__split_switch_arms__split_switch_arms_in_goal_3_p_0(ToSplitArms_15, STATE_VARIABLE_Goal_51_51, &STATE_VARIABLE_Goal_60_60);
    GoalInfo0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_60_60, 1))));
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_67_67);
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_68_68);
    check_hlds__simplify__simplify_proc__maybe_recompute_fields_after_top_level_goal_6_p_0(GoalInfo0_23, InstMap0_9, STATE_VARIABLE_Goal_60_60, &STATE_VARIABLE_Goal_69_69, STATE_VARIABLE_Info_68_68, STATE_VARIABLE_Info_29);
  }
  else
  {
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_52_52;
    STATE_VARIABLE_Goal_69_69 = STATE_VARIABLE_Goal_51_51;
  }
  check_hlds__simplify__simplify_info__simplify_info_get_found_contains_trace_2_p_0(*STATE_VARIABLE_Info_29, &FoundContainsTrace_24);
  switch (FoundContainsTrace_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Goal_27 = STATE_VARIABLE_Goal_69_69;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_25;

        check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(STATE_VARIABLE_Goal_69_69, STATE_VARIABLE_Goal_27, &Var_25);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__maybe_recompute_fields_after_top_level_goal_6_p_0(
  MR_Word GoalInfo0_7,
  MR_Word InstMap0_8,
  MR_Word STATE_VARIABLE_Goal_0_34,
  MR_Word * STATE_VARIABLE_Goal_35,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  MR_Word RerunQuantDelta_11;
  MR_Word RerunDet_25;
  MR_Word STATE_VARIABLE_Goal_64_64;
  MR_Word STATE_VARIABLE_Info_66_66;

  check_hlds__simplify__simplify_info__simplify_info_get_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_0_36, &RerunQuantDelta_11);
  switch (RerunQuantDelta_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_Goal_64_64 = STATE_VARIABLE_Goal_0_34;
        STATE_VARIABLE_Info_66_66 = STATE_VARIABLE_Info_0_36;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word NonLocals_12;
        MR_Word InstVarSet_17;
        MR_Word STATE_VARIABLE_VarTable_38_38;
        MR_Word STATE_VARIABLE_RttiVarMaps_50_50;
        MR_Word STATE_VARIABLE_Goal_52_52;
        MR_Word STATE_VARIABLE_VarTable_53_53;
        MR_Word STATE_VARIABLE_RttiVarMaps_54_54;
        MR_Word STATE_VARIABLE_Info_60_60;
        MR_Word STATE_VARIABLE_Info_61_61;
        MR_Word STATE_VARIABLE_ModuleInfo_62_62;
        MR_Word STATE_VARIABLE_ModuleInfo_65_65;
        MR_Word TVarSet_16;
        MR_Word Var_24;

        NonLocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
        check_hlds__simplify__simplify_info__simplify_info_get_tvarset_2_p_0(STATE_VARIABLE_Info_0_36, &TVarSet_16);
        check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(STATE_VARIABLE_Info_0_36, &InstVarSet_17);
        check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_VarTable_38_38);
        check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_RttiVarMaps_50_50);
        hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 0, NonLocals_12, &Var_24, STATE_VARIABLE_Goal_0_34, &STATE_VARIABLE_Goal_52_52, STATE_VARIABLE_VarTable_38_38, &STATE_VARIABLE_VarTable_53_53, STATE_VARIABLE_RttiVarMaps_50_50, &STATE_VARIABLE_RttiVarMaps_54_54);
        check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_53_53, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_60_60);
        check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_54_54, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_61_61);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_ModuleInfo_62_62);
        check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 0, STATE_VARIABLE_VarTable_53_53, InstVarSet_17, InstMap0_8, STATE_VARIABLE_Goal_52_52, &STATE_VARIABLE_Goal_64_64, STATE_VARIABLE_ModuleInfo_62_62, &STATE_VARIABLE_ModuleInfo_65_65);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_65_65, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_66_66);
      }
      break;
  }
  check_hlds__simplify__simplify_info__simplify_info_get_rerun_det_2_p_0(STATE_VARIABLE_Info_66_66, &RerunDet_25);
  switch (RerunDet_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Goal_35 = STATE_VARIABLE_Goal_64_64;
        *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_66_66;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Detism_26;
        MR_Word SolnContext_27;
        MR_Word PredProcId_29;
        MR_Word PredInfo_30;
        MR_Word DetInfo0_31;
        MR_Word DetInfo_33;
        MR_Word STATE_VARIABLE_ModuleInfo_72_72;
        MR_Word STATE_VARIABLE_VarTable_73_73;
        MR_Word STATE_VARIABLE_RttiVarMaps_74_74;
        MR_Word STATE_VARIABLE_ProcInfo_75_75;
        MR_Word STATE_VARIABLE_ProcInfo_76_76;
        MR_Word STATE_VARIABLE_ProcInfo_77_77;
        MR_Word STATE_VARIABLE_ModuleInfo_78_78;
        MR_Word STATE_VARIABLE_Info_79_79;
        MR_Word STATE_VARIABLE_ModuleInfo_83_83;
        MR_Word STATE_VARIABLE_VarTable_84_84;
        MR_Word STATE_VARIABLE_Info_85_85;
        MR_Word _Detism_32;

        Detism_26 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
        check_hlds__det_infer_goal__det_get_soln_context_2_p_0(Detism_26, &SolnContext_27);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_ModuleInfo_72_72);
        check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_VarTable_73_73);
        check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_RttiVarMaps_74_74);
        check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_66_66, &PredProcId_29);
        hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_72_72, PredProcId_29, &PredInfo_30, &STATE_VARIABLE_ProcInfo_75_75);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_73_73, STATE_VARIABLE_ProcInfo_75_75, &STATE_VARIABLE_ProcInfo_76_76);
        hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_74_74, STATE_VARIABLE_ProcInfo_76_76, &STATE_VARIABLE_ProcInfo_77_77);
        hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_29, PredInfo_30, STATE_VARIABLE_ProcInfo_77_77, STATE_VARIABLE_ModuleInfo_72_72, &STATE_VARIABLE_ModuleInfo_78_78);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_78_78, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_79_79);
        check_hlds__det_util__det_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_78_78, PredProcId_29, STATE_VARIABLE_VarTable_73_73, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &DetInfo0_31);
        check_hlds__det_infer_goal__det_infer_proc_goal_7_p_0(InstMap0_8, SolnContext_27, &_Detism_32, STATE_VARIABLE_Goal_64_64, STATE_VARIABLE_Goal_35, DetInfo0_31, &DetInfo_33);
        check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_33, &STATE_VARIABLE_ModuleInfo_83_83);
        check_hlds__det_util__det_info_get_var_table_2_p_0(DetInfo_33, &STATE_VARIABLE_VarTable_84_84);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_83_83, STATE_VARIABLE_Info_79_79, &STATE_VARIABLE_Info_85_85);
        check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_84_84, STATE_VARIABLE_Info_85_85, STATE_VARIABLE_Info_37);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__do_simplify_top_level_goal_6_p_0(
  MR_Word NestedContext0_7,
  MR_Word InstMap0_8,
  MR_Word STATE_VARIABLE_Goal_0_16,
  MR_Word * STATE_VARIABLE_Goal_17,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_16, 1))));
  MR_Word SimplifyTasks_13;
  MR_Word Common0_14;
  MR_Word STATE_VARIABLE_Goal_20_20;
  MR_Word STATE_VARIABLE_Info_21_21;
  MR_Word RerunQuantDelta_22;
  MR_Word RerunDet_29;
  MR_Word STATE_VARIABLE_Goal_64_63;
  MR_Word STATE_VARIABLE_Info_66_65;
  MR_Word _Common_15;

  check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(STATE_VARIABLE_Info_0_18, &SimplifyTasks_13);
  Common0_14 = check_hlds__simplify__common__common_info_init_1_f_0(SimplifyTasks_13);
  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(STATE_VARIABLE_Goal_0_16, &STATE_VARIABLE_Goal_20_20, NestedContext0_7, InstMap0_8, Common0_14, &_Common_15, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_21_21);
  check_hlds__simplify__simplify_info__simplify_info_get_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_21_21, &RerunQuantDelta_22);
  switch (RerunQuantDelta_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_Goal_64_63 = STATE_VARIABLE_Goal_20_20;
        STATE_VARIABLE_Info_66_65 = STATE_VARIABLE_Info_21_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word NonLocals_23;
        MR_Word InstVarSet_25;
        MR_Word STATE_VARIABLE_VarTable_38_37;
        MR_Word STATE_VARIABLE_RttiVarMaps_50_49;
        MR_Word STATE_VARIABLE_Goal_52_51;
        MR_Word STATE_VARIABLE_VarTable_53_52;
        MR_Word STATE_VARIABLE_RttiVarMaps_54_53;
        MR_Word STATE_VARIABLE_Info_60_59;
        MR_Word STATE_VARIABLE_Info_61_60;
        MR_Word STATE_VARIABLE_ModuleInfo_62_61;
        MR_Word STATE_VARIABLE_ModuleInfo_65_64;
        MR_Word TVarSet_24;
        MR_Word Var_28;

        NonLocals_23 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_12);
        check_hlds__simplify__simplify_info__simplify_info_get_tvarset_2_p_0(STATE_VARIABLE_Info_21_21, &TVarSet_24);
        check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(STATE_VARIABLE_Info_21_21, &InstVarSet_25);
        check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_VarTable_38_37);
        check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_RttiVarMaps_50_49);
        hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 0, NonLocals_23, &Var_28, STATE_VARIABLE_Goal_20_20, &STATE_VARIABLE_Goal_52_51, STATE_VARIABLE_VarTable_38_37, &STATE_VARIABLE_VarTable_53_52, STATE_VARIABLE_RttiVarMaps_50_49, &STATE_VARIABLE_RttiVarMaps_54_53);
        check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_53_52, STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_Info_60_59);
        check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_54_53, STATE_VARIABLE_Info_60_59, &STATE_VARIABLE_Info_61_60);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_61_60, &STATE_VARIABLE_ModuleInfo_62_61);
        check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 0, STATE_VARIABLE_VarTable_53_52, InstVarSet_25, InstMap0_8, STATE_VARIABLE_Goal_52_51, &STATE_VARIABLE_Goal_64_63, STATE_VARIABLE_ModuleInfo_62_61, &STATE_VARIABLE_ModuleInfo_65_64);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_65_64, STATE_VARIABLE_Info_61_60, &STATE_VARIABLE_Info_66_65);
      }
      break;
  }
  check_hlds__simplify__simplify_info__simplify_info_get_rerun_det_2_p_0(STATE_VARIABLE_Info_66_65, &RerunDet_29);
  switch (RerunDet_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Goal_17 = STATE_VARIABLE_Goal_64_63;
        *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_66_65;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Detism_30;
        MR_Word SolnContext_31;
        MR_Word PredProcId_32;
        MR_Word PredInfo_33;
        MR_Word DetInfo0_34;
        MR_Word DetInfo_36;
        MR_Word STATE_VARIABLE_ModuleInfo_72_71;
        MR_Word STATE_VARIABLE_VarTable_73_72;
        MR_Word STATE_VARIABLE_RttiVarMaps_74_73;
        MR_Word STATE_VARIABLE_ProcInfo_75_74;
        MR_Word STATE_VARIABLE_ProcInfo_76_75;
        MR_Word STATE_VARIABLE_ProcInfo_77_76;
        MR_Word STATE_VARIABLE_ModuleInfo_78_77;
        MR_Word STATE_VARIABLE_Info_79_78;
        MR_Word STATE_VARIABLE_ModuleInfo_83_81;
        MR_Word STATE_VARIABLE_VarTable_84_82;
        MR_Word STATE_VARIABLE_Info_85_83;
        MR_Word _Detism_35;

        Detism_30 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_12);
        check_hlds__det_infer_goal__det_get_soln_context_2_p_0(Detism_30, &SolnContext_31);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_66_65, &STATE_VARIABLE_ModuleInfo_72_71);
        check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_66_65, &STATE_VARIABLE_VarTable_73_72);
        check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_66_65, &STATE_VARIABLE_RttiVarMaps_74_73);
        check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_66_65, &PredProcId_32);
        hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_72_71, PredProcId_32, &PredInfo_33, &STATE_VARIABLE_ProcInfo_75_74);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_73_72, STATE_VARIABLE_ProcInfo_75_74, &STATE_VARIABLE_ProcInfo_76_75);
        hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_74_73, STATE_VARIABLE_ProcInfo_76_75, &STATE_VARIABLE_ProcInfo_77_76);
        hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_32, PredInfo_33, STATE_VARIABLE_ProcInfo_77_76, STATE_VARIABLE_ModuleInfo_72_71, &STATE_VARIABLE_ModuleInfo_78_77);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_78_77, STATE_VARIABLE_Info_66_65, &STATE_VARIABLE_Info_79_78);
        check_hlds__det_util__det_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_78_77, PredProcId_32, STATE_VARIABLE_VarTable_73_72, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &DetInfo0_34);
        check_hlds__det_infer_goal__det_infer_proc_goal_7_p_0(InstMap0_8, SolnContext_31, &_Detism_35, STATE_VARIABLE_Goal_64_63, STATE_VARIABLE_Goal_17, DetInfo0_34, &DetInfo_36);
        check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_36, &STATE_VARIABLE_ModuleInfo_83_81);
        check_hlds__det_util__det_info_get_var_table_2_p_0(DetInfo_36, &STATE_VARIABLE_VarTable_84_82);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_83_81, STATE_VARIABLE_Info_79_78, &STATE_VARIABLE_Info_85_83);
        check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_84_82, STATE_VARIABLE_Info_85_83, STATE_VARIABLE_Info_19);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_attribute_conflict_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word PredInfo_10;
  MR_Word Markers_11;
  MR_Word Goal_12;
  MR_Word GoalExpr_13;
  MR_Word GoalInfo_14;
  MR_Word Attributes_15;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_7, &PredInfo_10);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_11);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_8, &Goal_12);
  GoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Goal_12, 0))));
  GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Goal_12, 1))));
  succeeded = ((((MR_tag((MR_Word) GoalExpr_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_13, 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    Attributes_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 1))));
    {
      MR_Word Context_22;
      MR_Word MaybeMayDuplicate_23;
      MR_Word MaybeMayExportBody_25;
      MR_Word STATE_VARIABLE_Specs_29_29;

      Context_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
      MaybeMayDuplicate_23 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attributes_15);
      if ((MaybeMayDuplicate_23 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_29_29 = STATE_VARIABLE_Specs_0_27;
      else
      {
        MR_Word MayDuplicate_24 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_23, 0))));

        switch (MayDuplicate_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_11, (MR_Integer) 8);
              if (succeeded)
              {
                MR_Word Pieces_32;
                MR_Word Spec_33;
                MR_Word Var_39;
                MR_Word Var_40;
                MR_Word Var_41;
                MR_Word Var_46;
                MR_Word Var_47;
                MR_Word Var_52;
                MR_Word Var_57;
                MR_Word Var_58;

                Var_40 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[5])));
                Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[15])));
                Var_58 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[9])));
                Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[20])));
                Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[17])), Var_57);
                Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_52);
                Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[13])), Var_46);
                Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_41);
                Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[11])), Var_39);
                {
                  Spec_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_proc.maybe_warn_about_may_duplicate_attributes\'/5"));
                  MR_hl_field(0, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_33, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_3[1])));
                  MR_hl_field(0, Spec_33, 3) = ((MR_Box) (Context_22));
                  MR_hl_field(0, Spec_33, 4) = ((MR_Box) (Pieces_32));
                }
                {
                  STATE_VARIABLE_Specs_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_29_29, 0) = ((MR_Box) (Spec_33));
                  MR_hl_field(1, STATE_VARIABLE_Specs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
                }
              }
              else
                STATE_VARIABLE_Specs_29_29 = STATE_VARIABLE_Specs_0_27;
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_11, (MR_Integer) 6);
              if (succeeded)
              {
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_76;
                MR_Word Var_77;
                MR_Word Var_82;
                MR_Word Var_87;
                MR_Word Var_88;
                MR_Word Pieces_96;
                MR_Word Spec_97;

                Var_70 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[22])));
                Var_77 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[15])));
                Var_88 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[24])));
                Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[20])));
                Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[17])), Var_87);
                Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_82);
                Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[13])), Var_76);
                Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_71);
                Pieces_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[11])), Var_69);
                {
                  Spec_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_97, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_proc.maybe_warn_about_may_duplicate_attributes\'/5"));
                  MR_hl_field(0, Spec_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_97, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_3[1])));
                  MR_hl_field(0, Spec_97, 3) = ((MR_Box) (Context_22));
                  MR_hl_field(0, Spec_97, 4) = ((MR_Box) (Pieces_96));
                }
                {
                  STATE_VARIABLE_Specs_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_29_29, 0) = ((MR_Box) (Spec_97));
                  MR_hl_field(1, STATE_VARIABLE_Specs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
                }
              }
              else
                STATE_VARIABLE_Specs_29_29 = STATE_VARIABLE_Specs_0_27;
            }
            break;
        }
      }
      MaybeMayExportBody_25 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attributes_15);
      if ((MaybeMayExportBody_25 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_29_29;
      else
      {
        MR_Word MayExportBody_26 = ((MR_Word) ((MR_hl_field(1, MaybeMayExportBody_25, 0))));

        check_hlds__simplify__simplify_proc__maybe_warn_about_may_export_body_attribute_5_p_0(MayExportBody_26, Markers_11, Context_22, STATE_VARIABLE_Specs_29_29, STATE_VARIABLE_Specs_28);
      }
    }
  }
  else
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__maybe_warn_about_may_export_body_attribute_5_p_0(
  MR_Word MayExportBody_6,
  MR_Word Markers_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_bool succeeded;

  switch (MayExportBody_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_7, (MR_Integer) 8);
        if (succeeded)
        {
          MR_Word Pieces_12;
          MR_Word Spec_13;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_46;
          MR_Word Var_51;
          MR_Word Var_52;

          Var_34 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[26])));
          Var_41 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[15])));
          Var_52 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[24])));
          Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[20])));
          Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[17])), Var_51);
          Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_46);
          Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[13])), Var_40);
          Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_35);
          Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[11])), Var_33);
          {
            Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_proc.maybe_warn_about_may_export_body_attribute\'/5"));
            MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_13, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_3[1])));
            MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Context_8));
            MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_15 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_13));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
          }
        }
        else
          *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_9_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word PredId_11,
  MR_Word PredInfo0_12,
  MR_Integer ProcId_13,
  MR_Word STATE_VARIABLE_ProcInfo_0_28,
  MR_Word * STATE_VARIABLE_ProcInfo_29,
  MR_Word ImplicitStreamWarnings_15,
  MR_Word * FormatSpecs_16)
{
  MR_Word Goal0_17;
  MR_Word VarTable0_18;
  MR_Word MaybeGoal_19;
  MR_Word VarTable_20;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_28, &Goal0_17);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_28, &VarTable0_18);
  check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0(STATE_VARIABLE_ModuleInfo_0_26, PredInfo0_12, STATE_VARIABLE_ProcInfo_0_28, ImplicitStreamWarnings_15, Goal0_17, &MaybeGoal_19, FormatSpecs_16, VarTable0_18, &VarTable_20);
  if ((MaybeGoal_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
    *STATE_VARIABLE_ProcInfo_29 = STATE_VARIABLE_ProcInfo_0_28;
  }
  else
  {
    MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_19, 0))));
    MR_Word PredInfo1_22;
    MR_Word Markers1_23;
    MR_Word Markers_24;
    MR_Word PredInfo_25;
    MR_Word STATE_VARIABLE_ProcInfo_30_30;
    MR_Word STATE_VARIABLE_ProcInfo_31_31;
    MR_Word STATE_VARIABLE_ProcInfo_33_33;
    MR_Word STATE_VARIABLE_ModuleInfo_36_36;

    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_21, STATE_VARIABLE_ProcInfo_0_28, &STATE_VARIABLE_ProcInfo_30_30);
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_20, STATE_VARIABLE_ProcInfo_30_30, &STATE_VARIABLE_ProcInfo_31_31);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_31_31, &STATE_VARIABLE_ProcInfo_33_33);
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_33_33, STATE_VARIABLE_ProcInfo_29, STATE_VARIABLE_ModuleInfo_0_26, &STATE_VARIABLE_ModuleInfo_36_36);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_13, *STATE_VARIABLE_ProcInfo_29, PredInfo0_12, &PredInfo1_22);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo1_22, &Markers1_23);
    hlds__hlds_markers__remove_marker_3_p_0((MR_Integer) 27, Markers1_23, &Markers_24);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_24, PredInfo1_22, &PredInfo_25);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_11, PredInfo_25, STATE_VARIABLE_ModuleInfo_36_36, STATE_VARIABLE_ModuleInfo_27);
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  succeeded = mercury__string__to_int_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_SimplifyTasks_0_18,
  MR_Word * STATE_VARIABLE_SimplifyTasks_19)
{
  MR_bool succeeded;
  MR_Word Globals_10;
  MR_String CommonStructPreds_11;
  MR_Word TurnOffCommonStructByRequest_12;
  MR_Word VarTable0_16;
  MR_Integer NumVars_17;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 239, &CommonStructPreds_11);
  succeeded = (strcmp(CommonStructPreds_11, (MR_String) "") == 0);
  if (succeeded)
    TurnOffCommonStructByRequest_12 = (MR_Integer) 0;
  else
  {
    MR_Word CommonStructPredIdStrs_13;
    MR_Word CommonStructPredIdInts_14;

    CommonStructPredIdStrs_13 = mercury__string__split_at_char_2_f_0((MR_Char) 44, CommonStructPreds_11);
    succeeded = mercury__list__map_3_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_5[0]), CommonStructPredIdStrs_13, &CommonStructPredIdInts_14);
    if (succeeded)
    {
      MR_Integer PredIdInt_15;

      PredIdInt_15 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_7);
      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (PredIdInt_15)), CommonStructPredIdInts_14);
      if (succeeded)
        TurnOffCommonStructByRequest_12 = (MR_Integer) 0;
      else
        TurnOffCommonStructByRequest_12 = (MR_Integer) 1;
    }
    else
      TurnOffCommonStructByRequest_12 = (MR_Integer) 0;
  }
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_8, &VarTable0_16);
  parse_tree__var_table__var_table_count_2_p_0(VarTable0_16, &NumVars_17);
  succeeded = (TurnOffCommonStructByRequest_12 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (NumVars_17 > (MR_Integer) 12000);
  if (succeeded)
  {
    MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 19)) & (MR_Integer) 1);
    MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 18)) & (MR_Integer) 1);
    MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 17)) & (MR_Integer) 1);
    MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 16)) & (MR_Integer) 1);
    MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 15)) & (MR_Integer) 1);
    MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 14)) & (MR_Integer) 1);
    MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 13)) & (MR_Integer) 1);
    MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 12)) & (MR_Integer) 1);
    MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 11)) & (MR_Integer) 1);
    MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 10)) & (MR_Integer) 1);
    MR_Word Var_36 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 9)) & (MR_Integer) 1);
    MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 6)) & (MR_Integer) 1);
    MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 5)) & (MR_Integer) 1);
    MR_Word Var_41 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word Var_43 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word Var_44 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_45 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, 0))) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_SimplifyTasks_19 = base;
      MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) (Var_26) << 19)) | (((((MR_Unsigned) (Var_27) << 18)) | (((((MR_Unsigned) (Var_28) << 17)) | (((((MR_Unsigned) (Var_29) << 16)) | (((((MR_Unsigned) (Var_30) << 15)) | (((((MR_Unsigned) (Var_31) << 14)) | (((((MR_Unsigned) (Var_32) << 13)) | (((((MR_Unsigned) (Var_33) << 12)) | (((((MR_Unsigned) (Var_34) << 11)) | (((((MR_Unsigned) (Var_35) << 10)) | (((((MR_Unsigned) (Var_36) << 9)) | (((((MR_Unsigned) (Var_37) << 8)) | (((((MR_Unsigned) ((MR_Integer) 1) << 7)) | (((((MR_Unsigned) (Var_39) << 6)) | (((((MR_Unsigned) (Var_40) << 5)) | (((((MR_Unsigned) (Var_41) << 4)) | (((((MR_Unsigned) (Var_42) << 3)) | (((((MR_Unsigned) (Var_43) << 2)) | (((((MR_Unsigned) (Var_44) << 1)) | (MR_Unsigned) (Var_45)))))))))))))))))))))))))))))))))))))));
    }
  }
  else
    *STATE_VARIABLE_SimplifyTasks_19 = STATE_VARIABLE_SimplifyTasks_0_18;
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc____Unify____maybe_allow_splitting_switch_arms_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_proc____Unify____maybe_allow_splitting_switch_arms_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_proc____Compare____maybe_allow_splitting_switch_arms_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_proc____Compare____maybe_allow_splitting_switch_arms_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__simplify_proc__init(void)
{
}

void mercury__check_hlds__simplify__simplify_proc__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__simplify__simplify_proc__check_hlds__simplify__simplify_proc__type_ctor_info_maybe_allow_splitting_switch_arms_0);
}

void mercury__check_hlds__simplify__simplify_proc__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_proc__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_proc.
