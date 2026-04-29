/*
** Automatically generated from `unused_args_optimize.m'
** by the Mercury compiler,
** version rotd-2026-04-29
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


// :- module transform_hlds.unused_args_optimize.
// :- implementation.

/*
INIT mercury__transform_hlds__unused_args_optimize__init
ENDINIT
*/

#include "transform_hlds.unused_args_optimize.mih"


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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.mode_test.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.unused_args_analysis.mih"
#include "transform_hlds.unused_args_base_ops.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_optimize__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_optimize__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args_optimize__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_optimize__analysis__framework__pti_analysis_result_2__plain_transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args_optimize__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args_optimize__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_optimize__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__field_types_delete_info_0_0[4];

static const MR_ConstString transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__field_names_delete_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_functor_desc_delete_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_stag_ordered_delete_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_ptag_ordered_delete_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_name_ordered_delete_info_0[1];

static const MR_Integer transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__functor_number_map_delete_info_0[1];

static const MR_PseudoTypeInfo transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__field_types_new_proc_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_functor_desc_new_proc_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_stag_ordered_new_proc_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_ptag_ordered_new_proc_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_name_ordered_new_proc_info_0[1];

static const MR_Integer transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__functor_number_map_new_proc_info_0[1];

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize__IntroducedFrom__pred__unused_args_create_new_pred__166__1_3_p_0(
  MR_Word FuncInfo_26,
  MR_Word Answer_27,
  MR_Word LambdaHeadVar__1_57);

static MR_Word MR_CALL 
transform_hlds__unused_args_optimize__IntroducedFrom__func__unused_args_create_new_pred__159__1_1_f_0(
  MR_Word LambdaHeadVar__1_55);

static void MR_CALL 
transform_hlds__unused_args_optimize____Compare____delete_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize____Unify____delete_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args_optimize__rename_apart_unused_foreign_arg_8_p_0(
  MR_Word Arg0_9,
  MR_Word * Arg_10,
  MR_Word STATE_VARIABLE_Subst_0_23,
  MR_Word * STATE_VARIABLE_Subst_24,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Changed_0_27,
  MR_Word * STATE_VARIABLE_Changed_28);

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_proc_msg_6_p_0(
  MR_Word VeryVerbose_7,
  MR_Word GlobalVarUsageMap_8,
  MR_Word NewProcMap_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_proc_5_p_0(
  MR_Word GlobalVarUsageMap_6,
  MR_Word OldPredProcId_7,
  MR_Word NewProcMap_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41);

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6);

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_disjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6);

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_conjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6);

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77,
  MR_Word * Changed_9);

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16,
  MR_Word * Changed_9);

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize__need_unify_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word UnusedVars_6,
  MR_Word Unify_7,
  MR_Word * Changed_8);

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize__check_deconstruct_args_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word UnusedVars_8,
  MR_Word Vars_9,
  MR_Word ArgModes_10,
  MR_Word STATE_VARIABLE_SomeUsed_0_26,
  MR_Word * Changed_12);

static void MR_CALL 
transform_hlds__unused_args_optimize__make_intermod_proc_10_p_0(
  MR_Word PredId_11,
  MR_Word NewPredId_12,
  MR_Integer ProcId_13,
  MR_String NewPredName_14,
  MR_Word OrigPredInfo_15,
  MR_Word OrigProcInfo_16,
  MR_Word UnusedArgs_17,
  MR_Word UnusedArgs2_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36);

static void MR_CALL 
transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0(
  MR_Word ProcToUnusedArgsMap_7,
  MR_Word OrigPredProcId_8,
  MR_Word STATE_VARIABLE_NewProcMap_0_48,
  MR_Word * STATE_VARIABLE_NewProcMap_49,
  MR_Word STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * STATE_VARIABLE_ModuleInfo_51);

static void MR_CALL 
transform_hlds__unused_args_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
  MR_Word UnusedArgs_8,
  MR_Word PredStatus_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredInfo_0_43,
  MR_Word * STATE_VARIABLE_PredInfo_44);

static void MR_CALL 
transform_hlds__unused_args_optimize__optimize_unused_args_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args_optimize__optimize_unused_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize____Unify____delete_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_optimize____Compare____delete_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize____Unify____new_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_optimize____Compare____new_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize____Unify____new_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_optimize____Compare____new_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_1[5][2];

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_2[10][3];

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_3[4][5];

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_4[2][6];

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_5[2][1];

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_6[2][9];

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_7[1][13];

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_8[1][11];




static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args_analysis__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args_analysis__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_result_2)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_1[1]))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_3[4][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__call_pattern__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_2[1])),
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_2[2])),
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__analysis__framework__pti_analysis_result_2__plain_transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_4[2][6] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__transform_hlds__unused_args_analysis__unused_args_func_info__arity0__transform_hlds__unused_args_analysis__unused_args_call__arity0__transform_hlds__unused_args_analysis__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_3[1])),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0)),
    ((MR_Box) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_5[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_6[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_7[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_optimize_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_delete_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_delete_info_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_optimize__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_optimize__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_optimize__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args_optimize__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__unused_args_optimize__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_optimize__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_optimize__analysis__framework__pti_analysis_result_2__plain_transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0 = {
  &analysis__framework__analysis__framework__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_call_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args_optimize__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_optimize__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_optimize__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_optimize__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args_optimize__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_optimize__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__unused_args_optimize__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__field_types_delete_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args_optimize__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args_optimize__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

static const MR_ConstString transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__field_names_delete_info_0_0[4] = {
  (MR_String) "delete_module_info",
  (MR_String) "delete_new_proc_map",
  (MR_String) "delete_unused_vars",
  (MR_String) "delete_var_table"
};

static const MR_DuFunctorDesc transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_functor_desc_delete_info_0_0 = {
  (MR_String) "delete_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__field_types_delete_info_0_0,
  transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__field_names_delete_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_stag_ordered_delete_info_0_0[1] = { &transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_functor_desc_delete_info_0_0 };

static const MR_DuPtagLayout transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_ptag_ordered_delete_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_stag_ordered_delete_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_name_ordered_delete_info_0[1] = { &transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_functor_desc_delete_info_0_0 };

static const MR_Integer transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__functor_number_map_delete_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_delete_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args_optimize____Unify____delete_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_optimize____Compare____delete_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_optimize",
  (MR_String) "delete_info",
  { transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_name_ordered_delete_info_0 },
  { transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_ptag_ordered_delete_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__functor_number_map_delete_info_0,

};

static const MR_PseudoTypeInfo transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__field_types_new_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args_optimize__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_functor_desc_new_proc_info_0_0 = {
  (MR_String) "new_proc_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__field_types_new_proc_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_stag_ordered_new_proc_info_0_0[1] = { &transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_functor_desc_new_proc_info_0_0 };

static const MR_DuPtagLayout transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_ptag_ordered_new_proc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_stag_ordered_new_proc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_name_ordered_new_proc_info_0[1] = { &transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_functor_desc_new_proc_info_0_0 };

static const MR_Integer transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__functor_number_map_new_proc_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args_optimize____Unify____new_proc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_optimize____Compare____new_proc_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_optimize",
  (MR_String) "new_proc_info",
  { transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_name_ordered_new_proc_info_0 },
  { transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__du_ptag_ordered_new_proc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__functor_number_map_new_proc_info_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args_optimize____Unify____new_proc_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_optimize____Compare____new_proc_map_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_optimize",
  (MR_String) "new_proc_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args_optimize__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize__IntroducedFrom__pred__unused_args_create_new_pred__166__1_3_p_0(
  MR_Word FuncInfo_26,
  MR_Word Answer_27,
  MR_Word LambdaHeadVar__1_57)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_partial_order_79;
  MR_Word Var_58;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

  succeeded = transform_hlds__unused_args_analysis____Unify____unused_args_answer_0_0(LambdaHeadVar__1_57, Answer_27);
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_58 = (MR_Word) (LambdaHeadVar__1_57);
    succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeClassInfo_for_partial_order_79 = (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[2]);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_partial_order_79, 0)), 5))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_79)), ((MR_Box) (FuncInfo_26)), ((MR_Box) (Answer_27)), ((MR_Box) (LambdaHeadVar__1_57)));
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__unused_args_optimize__IntroducedFrom__func__unused_args_create_new_pred__159__1_1_f_0(
  MR_Word LambdaHeadVar__1_55)
{
  MR_Word LambdaHeadVar__2_56 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_55, 1))));

  return LambdaHeadVar__2_56;
}

void MR_CALL 
transform_hlds__unused_args_optimize____Compare____new_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__unused_args_optimize____Unify____new_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args_optimize____Compare____new_proc_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__unused_args_optimize____Unify____new_proc_info_0_0(
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
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_optimize____Compare____delete_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize____Unify____delete_info_0_0(
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
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_optimize__rename_apart_unused_foreign_arg_8_p_0(
  MR_Word Arg0_9,
  MR_Word * Arg_10,
  MR_Word STATE_VARIABLE_Subst_0_23,
  MR_Word * STATE_VARIABLE_Subst_24,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Changed_0_27,
  MR_Word * STATE_VARIABLE_Changed_28)
{
  MR_Word OldVar_14 = ((MR_Word) ((MR_hl_field(0, Arg0_9, 0))));
  MR_Word MaybeName_15 = ((MR_Word) ((MR_hl_field(0, Arg0_9, 1))));
  MR_Word OrigType_16 = ((MR_Word) ((MR_hl_field(0, Arg0_9, 2))));
  MR_Word BoxPolicy_17 = ((MR_Unsigned) ((MR_hl_field(0, Arg0_9, 3))) & (MR_Integer) 1);

  if ((MaybeName_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word VarTable0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 3))));
    MR_Word OldVarEntry_20;
    MR_Word NewVar_21;
    MR_Word VarTable_22;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_19, OldVar_14, &OldVarEntry_20);
    parse_tree__var_table__add_var_entry_4_p_0(OldVarEntry_20, &NewVar_21, VarTable0_19, &VarTable_22);
    Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 1))));
    Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_26 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 3) = ((MR_Box) (VarTable_22));
    }
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), ((MR_Box) (OldVar_14)), ((MR_Box) (NewVar_21)), STATE_VARIABLE_Subst_0_23, STATE_VARIABLE_Subst_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Arg_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (NewVar_21));
      MR_hl_field(0, base, 1) = ((MR_Box) (MaybeName_15));
      MR_hl_field(0, base, 2) = ((MR_Box) (OrigType_16));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_17));
    }
    *STATE_VARIABLE_Changed_28 = (MR_Integer) 1;
  }
  else
  {
    *Arg_10 = Arg0_9;
    *STATE_VARIABLE_Subst_24 = STATE_VARIABLE_Subst_0_23;
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
    *STATE_VARIABLE_Changed_28 = STATE_VARIABLE_Changed_0_27;
  }
}

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_proc_msg_6_p_0(
  MR_Word VeryVerbose_7,
  MR_Word GlobalVarUsageMap_8,
  MR_Word NewProcMap_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  switch (VeryVerbose_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DebugStream_13;
        MR_Word PredId_14;
        MR_Integer ProcId_15;
        MR_Word PredInfo_16;
        MR_String Name_17;
        MR_Word PredOrFunc_18;
        MR_Word PredFormArity_19;
        MR_Integer UserArityInt_20;
        MR_Integer ProcInt_21;
        MR_Word Var_26;
        MR_String Var_31;
        MR_String Var_48;
        MR_String Var_58;

        hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_22, &DebugStream_13);
        PredId_14 = ((MR_Word) ((MR_hl_field(0, PredProcId_10, 0))));
        ProcId_15 = ((MR_Integer) ((MR_hl_field(0, PredProcId_10, 1))));
        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_22, PredId_14, &PredInfo_16);
        hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_16, &Name_17);
        hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_16, &PredOrFunc_18);
        hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_16, &PredFormArity_19);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &Var_26, PredFormArity_19);
        UserArityInt_20 = (MR_Integer) (Var_26);
        hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_15, &ProcInt_21);
        Var_31 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_18);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "% Fixing up ");
        mercury__io__write_string_4_p_0(DebugStream_13, Var_31);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) " \140");
        mercury__io__write_string_4_p_0(DebugStream_13, Name_17);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "/");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_5[1]), UserArityInt_20, &Var_48);
        mercury__io__write_string_4_p_0(DebugStream_13, Var_48);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) " in mode ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_5[1]), ProcInt_21, &Var_58);
        mercury__io__write_string_4_p_0(DebugStream_13, Var_58);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "\n");
      }
      break;
  }
  transform_hlds__unused_args_optimize__delete_unused_args_in_proc_5_p_0(GlobalVarUsageMap_8, PredProcId_10, NewProcMap_9, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
}

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_proc_5_p_0(
  MR_Word GlobalVarUsageMap_6,
  MR_Word OldPredProcId_7,
  MR_Word NewProcMap_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41)
{
  MR_bool succeeded;
  MR_Word PredId_11;
  MR_Integer ProcId_12;
  MR_Word UnusedArgs_14;
  MR_Word OldProcLocalVarUsageMap_15;
  MR_Word UnusedVars_16;
  MR_Word PredInfo0_17;
  MR_Word VarTable0_19;
  MR_Word HeadVars0_20;
  MR_Word ArgModes0_21;
  MR_Word HeadVars_23;
  MR_Word ArgModes_24;
  MR_Word ProcInfo_25;
  MR_Word DeleteInfo0_27;
  MR_Word DeleteInfo_28;
  MR_Word Changed_29;
  MR_Word PredInfo_39;
  MR_Word STATE_VARIABLE_ProcInfo_1_42;
  MR_Word STATE_VARIABLE_Goal_1_43;
  MR_Word STATE_VARIABLE_ProcInfo_2_44;
  MR_Word STATE_VARIABLE_ProcInfo_3_45;
  MR_Word Goal1_60;
  MR_Word GoalExpr1_61;
  MR_Word GoalInfo1_62;
  MR_Word NewProcInfo_10;
  MR_Box conv0_NewProcInfo_10;
  MR_Box conv1_OldProcLocalVarUsageMap_15;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0), NewProcMap_8, ((MR_Box) (OldPredProcId_7)), &conv0_NewProcInfo_10);
  if (succeeded)
  {
    NewProcInfo_10 = ((MR_Word) (conv0_NewProcInfo_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    PredId_11 = ((MR_Word) ((MR_hl_field(0, NewProcInfo_10, 0))));
    ProcId_12 = ((MR_Integer) ((MR_hl_field(0, NewProcInfo_10, 1))));
    UnusedArgs_14 = ((MR_Word) ((MR_hl_field(0, NewProcInfo_10, 3))));
  }
  else
  {
    PredId_11 = ((MR_Word) ((MR_hl_field(0, OldPredProcId_7, 0))));
    ProcId_12 = ((MR_Integer) ((MR_hl_field(0, OldPredProcId_7, 1))));
    UnusedArgs_14 = (MR_Word) ((MR_Unsigned) 0U);
  }
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[4]), GlobalVarUsageMap_6, ((MR_Box) (OldPredProcId_7)), &conv1_OldProcLocalVarUsageMap_15);
  OldProcLocalVarUsageMap_15 = ((MR_Word) (conv1_OldProcLocalVarUsageMap_15));
  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), OldProcLocalVarUsageMap_15, &UnusedVars_16);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, PredId_11, ProcId_12, &PredInfo0_17, &STATE_VARIABLE_ProcInfo_1_42);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_1_42, &VarTable0_19);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_1_42, &HeadVars0_20);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_1_42, &ArgModes0_21);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_1_42, &STATE_VARIABLE_Goal_1_43);
  transform_hlds__unused_args_base_ops__remove_specified_positions_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), UnusedArgs_14, HeadVars0_20, &HeadVars_23);
  transform_hlds__unused_args_base_ops__remove_specified_positions_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UnusedArgs_14, ArgModes0_21, &ArgModes_24);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_23, STATE_VARIABLE_ProcInfo_1_42, &STATE_VARIABLE_ProcInfo_2_44);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_24, STATE_VARIABLE_ProcInfo_2_44, &STATE_VARIABLE_ProcInfo_3_45);
  {
    DeleteInfo0_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DeleteInfo0_27, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
    MR_hl_field(0, DeleteInfo0_27, 1) = ((MR_Box) (NewProcMap_8));
    MR_hl_field(0, DeleteInfo0_27, 2) = ((MR_Box) (UnusedVars_16));
    MR_hl_field(0, DeleteInfo0_27, 3) = ((MR_Box) (VarTable0_19));
  }
  transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0(STATE_VARIABLE_Goal_1_43, &Goal1_60, DeleteInfo0_27, &DeleteInfo_28, &Changed_29);
  GoalExpr1_61 = ((MR_Word) ((MR_hl_field(0, Goal1_60, 0))));
  GoalInfo1_62 = ((MR_Word) ((MR_hl_field(0, Goal1_60, 1))));
  switch (Changed_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word VarTable1_33 = ((MR_Word) ((MR_hl_field(0, DeleteInfo_28, 3))));
        MR_Word NonLocals_34;
        MR_Word RttiVarMaps0_35;
        MR_Word VarTable_37;
        MR_Word RttiVarMaps_38;
        MR_Word STATE_VARIABLE_Goal_2_46;
        MR_Word STATE_VARIABLE_Goal_3_48;
        MR_Word STATE_VARIABLE_ProcInfo_4_49;
        MR_Word STATE_VARIABLE_ProcInfo_5_50;
        MR_Word UnusedVars_63 = ((MR_Word) ((MR_hl_field(0, DeleteInfo_28, 2))));
        MR_Word GoalInfo_64;
        MR_Word InstMap0_68;
        MR_Word InstMap_69;
        MR_Word Var_36;

        InstMap0_68 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_62);
        hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_63, InstMap0_68, &InstMap_69);
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_69, GoalInfo1_62, &GoalInfo_64);
        {
          STATE_VARIABLE_Goal_2_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Goal_2_46, 0) = ((MR_Box) (GoalExpr1_61));
          MR_hl_field(0, STATE_VARIABLE_Goal_2_46, 1) = ((MR_Box) (GoalInfo_64));
        }
        NonLocals_34 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_23);
        hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_3_45, &RttiVarMaps0_35);
        hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 1, NonLocals_34, &Var_36, STATE_VARIABLE_Goal_2_46, &STATE_VARIABLE_Goal_3_48, VarTable1_33, &VarTable_37, RttiVarMaps0_35, &RttiVarMaps_38);
        hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_3_48, STATE_VARIABLE_ProcInfo_3_45, &STATE_VARIABLE_ProcInfo_4_49);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_37, STATE_VARIABLE_ProcInfo_4_49, &STATE_VARIABLE_ProcInfo_5_50);
        hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_38, STATE_VARIABLE_ProcInfo_5_50, &ProcInfo_25);
      }
      break;
    case (MR_Integer) 0:
      ProcInfo_25 = STATE_VARIABLE_ProcInfo_3_45;
      break;
  }
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_12, ProcInfo_25, PredInfo0_17, &PredInfo_39);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_11, PredInfo_39, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
}

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_6 = STATE_VARIABLE_Changed_0_5;
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Case0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_15;
    MR_Word Cases_16;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_13, 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_13, 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_13, 2))));
    MR_Word Goal_22;
    MR_Word LocalChanged_23;
    MR_Word STATE_VARIABLE_Info_1_28;
    MR_Word STATE_VARIABLE_Changed_1_29;
    MR_Word Goal1_30;
    MR_Word GoalExpr1_31;
    MR_Word GoalInfo1_32;

    transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0(Goal0_21, &Goal1_30, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_28, &LocalChanged_23);
    GoalExpr1_31 = ((MR_Word) ((MR_hl_field(0, Goal1_30, 0))));
    GoalInfo1_32 = ((MR_Word) ((MR_hl_field(0, Goal1_30, 1))));
    switch (LocalChanged_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word UnusedVars_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_28, 2))));
          MR_Word GoalInfo_34;
          MR_Word InstMap0_38;
          MR_Word InstMap_39;

          InstMap0_38 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_32);
          hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_33, InstMap0_38, &InstMap_39);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_39, GoalInfo1_32, &GoalInfo_34);
          {
            Goal_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Goal_22, 0) = ((MR_Box) (GoalExpr1_31));
            MR_hl_field(0, Goal_22, 1) = ((MR_Box) (GoalInfo_34));
          }
          STATE_VARIABLE_Changed_1_29 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          Goal_22 = Goal0_21;
          STATE_VARIABLE_Changed_1_29 = STATE_VARIABLE_Changed_0_5;
        }
        break;
    }
    {
      Case_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_15, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(0, Case_15, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(0, Case_15, 2) = ((MR_Box) (Goal_22));
    }
    transform_hlds__unused_args_optimize__delete_unused_args_in_cases_6_p_0(Cases0_14, &Cases_16, STATE_VARIABLE_Info_1_28, STATE_VARIABLE_Info_4, STATE_VARIABLE_Changed_1_29, STATE_VARIABLE_Changed_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_16));
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_disjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_6 = STATE_VARIABLE_Changed_0_5;
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_15;
    MR_Word Goals_16;
    MR_Word LocalChanged_19;
    MR_Word STATE_VARIABLE_Info_1_24;
    MR_Word STATE_VARIABLE_Changed_1_25;
    MR_Word Goal1_26;
    MR_Word GoalExpr1_27;
    MR_Word GoalInfo1_28;

    transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0(Goal0_13, &Goal1_26, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_24, &LocalChanged_19);
    GoalExpr1_27 = ((MR_Word) ((MR_hl_field(0, Goal1_26, 0))));
    GoalInfo1_28 = ((MR_Word) ((MR_hl_field(0, Goal1_26, 1))));
    switch (LocalChanged_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word UnusedVars_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_24, 2))));
          MR_Word GoalInfo_30;
          MR_Word InstMap0_34;
          MR_Word InstMap_35;

          InstMap0_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_28);
          hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_29, InstMap0_34, &InstMap_35);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_35, GoalInfo1_28, &GoalInfo_30);
          {
            Goal_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Goal_15, 0) = ((MR_Box) (GoalExpr1_27));
            MR_hl_field(0, Goal_15, 1) = ((MR_Box) (GoalInfo_30));
          }
          STATE_VARIABLE_Changed_1_25 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          Goal_15 = Goal0_13;
          STATE_VARIABLE_Changed_1_25 = STATE_VARIABLE_Changed_0_5;
        }
        break;
    }
    transform_hlds__unused_args_optimize__delete_unused_args_in_disjuncts_6_p_0(Goals0_14, &Goals_16, STATE_VARIABLE_Info_1_24, STATE_VARIABLE_Info_4, STATE_VARIABLE_Changed_1_25, STATE_VARIABLE_Changed_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_16));
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_conjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_6 = STATE_VARIABLE_Changed_0_5;
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_18;
    MR_Word LocalChanged_19;
    MR_Word Goals1_21;
    MR_Word STATE_VARIABLE_Info_1_26;
    MR_Word STATE_VARIABLE_Changed_1_27;
    MR_Word Goal1_32;
    MR_Word GoalExpr1_33;
    MR_Word GoalInfo1_34;
    MR_Word Var_28;
    MR_Word Var_30;

    transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0(Goal0_13, &Goal1_32, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_26, &LocalChanged_19);
    GoalExpr1_33 = ((MR_Word) ((MR_hl_field(0, Goal1_32, 0))));
    GoalInfo1_34 = ((MR_Word) ((MR_hl_field(0, Goal1_32, 1))));
    switch (LocalChanged_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word UnusedVars_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_26, 2))));
          MR_Word GoalInfo_36;
          MR_Word InstMap0_40;
          MR_Word InstMap_41;

          InstMap0_40 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_34);
          hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_35, InstMap0_40, &InstMap_41);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_41, GoalInfo1_34, &GoalInfo_36);
          {
            Goal_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Goal_18, 0) = ((MR_Box) (GoalExpr1_33));
            MR_hl_field(0, Goal_18, 1) = ((MR_Box) (GoalInfo_36));
          }
          STATE_VARIABLE_Changed_1_27 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          Goal_18 = Goal0_13;
          STATE_VARIABLE_Changed_1_27 = STATE_VARIABLE_Changed_0_5;
        }
        break;
    }
    transform_hlds__unused_args_optimize__delete_unused_args_in_conjuncts_6_p_0(Goals0_14, &Goals1_21, STATE_VARIABLE_Info_1_26, STATE_VARIABLE_Info_4, STATE_VARIABLE_Changed_1_27, STATE_VARIABLE_Changed_6);
    Var_28 = ((MR_Word) ((MR_hl_field(0, Goal_18, 0))));
    Var_30 = hlds__make_goal__true_goal_expr_0_f_0();
    succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(Var_28, Var_30);
    if (succeeded)
      *HeadVar__2_2 = Goals1_21;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals1_21));
      }
  }
}

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_Arg_10;
  MR_Word conv9_STATE_VARIABLE_Subst_24;
  MR_Word conv8_STATE_VARIABLE_Info_26;
  MR_Word conv7_STATE_VARIABLE_Changed_28;

  transform_hlds__unused_args_optimize__rename_apart_unused_foreign_arg_8_p_0(((MR_Word) (wrapper_arg_1)), &conv10_Arg_10, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_Subst_24, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_Info_26, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Changed_28);
  *wrapper_arg_2 = ((MR_Box) (conv10_Arg_10));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Subst_24));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_Info_26));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Changed_28));
}

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Arg_10;
  MR_Word conv2_STATE_VARIABLE_Subst_24;
  MR_Word conv1_STATE_VARIABLE_Info_26;
  MR_Word conv0_STATE_VARIABLE_Changed_28;

  transform_hlds__unused_args_optimize__rename_apart_unused_foreign_arg_8_p_0(((MR_Word) (wrapper_arg_1)), &conv3_Arg_10, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Subst_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_Info_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Changed_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Arg_10));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Subst_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Info_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Changed_28));
}

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77,
  MR_Word * Changed_9)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_6, 0))));
  MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(0, Goal0_6, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NegGoal0_59 = (MR_Word) ((MR_Word) (GoalExpr0_10));
        MR_Word NegGoal_60;
        MR_Word GoalExpr_111;

        transform_hlds__unused_args_optimize__delete_unused_args_in_goal_5_p_0(NegGoal0_59, &NegGoal_60, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, Changed_9);
        GoalExpr_111 = (MR_Word) ((MR_Word) (NegGoal_60));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_7 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_111));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unify_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 3))));
        MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_76, 0))));
        MR_Word UnusedVars_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_76, 2))));
        MR_Word ChangedPrime_19;

        succeeded = transform_hlds__unused_args_optimize__need_unify_4_p_0(ModuleInfo_17, UnusedVars_18, Unify_15, &ChangedPrime_19);
        if (succeeded)
        {
          *Goal_7 = Goal0_6;
          *Changed_9 = ChangedPrime_19;
        }
        else
        {
          MR_Word Var_78;

          Var_78 = hlds__make_goal__true_goal_expr_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_7 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
          }
          *Changed_9 = (MR_Integer) 1;
        }
        *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_10, 0))));
        MR_Integer ProcId_21 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_10, 1))));
        MR_Word ArgVars0_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_10, 2))));
        MR_Word Builtin_23 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_10, 3))) & (MR_Integer) 1);
        MR_Word UnifyContext_24 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_10, 4))));
        MR_Word NewProcMap_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_76, 1))));
        MR_Word NewProcInfo_27;
        MR_Word Var_79;
        MR_Box conv14_NewProcInfo_27;

        {
          Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_79, 0) = ((MR_Box) (PredId_20));
          MR_hl_field(0, Var_79, 1) = ((MR_Box) (ProcId_21));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0), NewProcMap_26, ((MR_Box) (Var_79)), &conv14_NewProcInfo_27);
        if (succeeded)
        {
          NewProcInfo_27 = ((MR_Word) (conv14_NewProcInfo_27));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word NewPredId_28 = ((MR_Word) ((MR_hl_field(0, NewProcInfo_27, 0))));
          MR_Integer NewProcId_29 = ((MR_Integer) ((MR_hl_field(0, NewProcInfo_27, 1))));
          MR_Word NewSymName_30 = ((MR_Word) ((MR_hl_field(0, NewProcInfo_27, 2))));
          MR_Word UnusedArgs_31 = ((MR_Word) ((MR_hl_field(0, NewProcInfo_27, 3))));
          MR_Word ArgVars_32;
          MR_Word GoalExpr_33;

          *Changed_9 = (MR_Integer) 1;
          transform_hlds__unused_args_base_ops__remove_specified_positions_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), UnusedArgs_31, ArgVars0_22, &ArgVars_32);
          {
            GoalExpr_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, GoalExpr_33, 0) = ((MR_Box) (NewPredId_28));
            MR_hl_field(2, GoalExpr_33, 1) = ((MR_Box) (NewProcId_29));
            MR_hl_field(2, GoalExpr_33, 2) = ((MR_Box) (ArgVars_32));
            MR_hl_field(2, GoalExpr_33, 3) = (MR_Box) ((MR_Unsigned) (Builtin_23));
            MR_hl_field(2, GoalExpr_33, 4) = ((MR_Box) (UnifyContext_24));
            MR_hl_field(2, GoalExpr_33, 5) = ((MR_Box) (NewSymName_30));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_7 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_33));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
          }
        }
        else
        {
          *Changed_9 = (MR_Integer) 0;
          *Goal_7 = Goal0_6;
        }
        *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Goal_7 = Goal0_6;
            *Changed_9 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Args0_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 4))));
            MR_Word ExtraArgs0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 5))));
            MR_Word MaybeTraceRuntimeCond_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 6))));
            MR_Word Impl_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 7))));
            MR_Word Subst0_45;
            MR_Word Args_46;
            MR_Word Subst1_47;
            MR_Word ArgsChanged_48;
            MR_Word ExtraArgs_49;
            MR_Word Subst_50;
            MR_Word GoalInfo_51;
            MR_Word STATE_VARIABLE_Info_1_81;
            MR_Word PredId_103 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Integer ProcId_104 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word GoalExpr_105;
            MR_Box conv6_Subst1_47;
            MR_Box conv5_STATE_VARIABLE_Info_1_81;
            MR_Box conv4_ArgsChanged_48;
            MR_Box conv13_Subst_50;
            MR_Box conv12_STATE_VARIABLE_Info_77;
            MR_Box conv11_Changed_9;

            mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), &Subst0_45);
            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[5]), (MR_Word) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_delete_info_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[8]), Args0_40, &Args_46, ((MR_Box) (Subst0_45)), &conv6_Subst1_47, ((MR_Box) (STATE_VARIABLE_Info_0_76)), &conv5_STATE_VARIABLE_Info_1_81, ((MR_Box) ((MR_Integer) 0)), &conv4_ArgsChanged_48);
            Subst1_47 = ((MR_Word) (conv6_Subst1_47));
            STATE_VARIABLE_Info_1_81 = ((MR_Word) (conv5_STATE_VARIABLE_Info_1_81));
            ArgsChanged_48 = ((MR_Word) (conv4_ArgsChanged_48));
            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[5]), (MR_Word) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_delete_info_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[9]), ExtraArgs0_41, &ExtraArgs_49, ((MR_Box) (Subst1_47)), &conv13_Subst_50, ((MR_Box) (STATE_VARIABLE_Info_1_81)), &conv12_STATE_VARIABLE_Info_77, ((MR_Box) (ArgsChanged_48)), &conv11_Changed_9);
            Subst_50 = ((MR_Word) (conv13_Subst_50));
            *STATE_VARIABLE_Info_77 = ((MR_Word) (conv12_STATE_VARIABLE_Info_77));
            *Changed_9 = ((MR_Word) (conv11_Changed_9));
            {
              GoalExpr_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_105, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, GoalExpr_105, 1) = ((MR_Box) (Attributes_39));
              MR_hl_field(3, GoalExpr_105, 2) = ((MR_Box) (PredId_103));
              MR_hl_field(3, GoalExpr_105, 3) = ((MR_Box) (ProcId_104));
              MR_hl_field(3, GoalExpr_105, 4) = ((MR_Box) (Args_46));
              MR_hl_field(3, GoalExpr_105, 5) = ((MR_Box) (ExtraArgs_49));
              MR_hl_field(3, GoalExpr_105, 6) = ((MR_Box) (MaybeTraceRuntimeCond_42));
              MR_hl_field(3, GoalExpr_105, 7) = ((MR_Box) (Impl_43));
            }
            hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, Subst_50, GoalInfo0_11, &GoalInfo_51);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_105));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_51));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_52 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 1))) & (MR_Integer) 1);
            MR_Word Goals0_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Goals_54;
            MR_Word GoalExpr_106;

            transform_hlds__unused_args_optimize__delete_unused_args_in_conjuncts_6_p_0(Goals0_53, &Goals_54, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, (MR_Integer) 0, Changed_9);
            {
              GoalExpr_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_106, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_106, 1) = (MR_Box) ((MR_Unsigned) (ConjType_52));
              MR_hl_field(3, GoalExpr_106, 2) = ((MR_Box) (Goals_54));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_106));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GoalExpr_107;
            MR_Word Goals0_108 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Goals_109;

            transform_hlds__unused_args_optimize__delete_unused_args_in_disjuncts_6_p_0(Goals0_108, &Goals_109, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, (MR_Integer) 0, Changed_9);
            {
              GoalExpr_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_107, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_107, 1) = ((MR_Box) (Goals_109));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_107));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word CanFail_56 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 2))) & (MR_Integer) 1);
            MR_Word Cases0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Cases_58;
            MR_Word GoalExpr_110;

            transform_hlds__unused_args_optimize__delete_unused_args_in_cases_6_p_0(Cases0_57, &Cases_58, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, (MR_Integer) 0, Changed_9);
            {
              GoalExpr_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_110, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_110, 1) = ((MR_Box) (Var_55));
              MR_hl_field(3, GoalExpr_110, 2) = (MR_Box) ((MR_Unsigned) (CanFail_56));
              MR_hl_field(3, GoalExpr_110, 3) = ((MR_Box) (Cases_58));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_110));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word SubGoal0_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word TermVar_73;
            MR_Word Var_99;

            succeeded = ((((MR_tag((MR_Word) Reason_71)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_71, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              TermVar_73 = ((MR_Word) ((MR_hl_field(3, Reason_71, 1))));
              Var_99 = ((MR_Unsigned) ((MR_hl_field(3, Reason_71, 2))) & (MR_Integer) 3);
              succeeded = (Var_99 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_Word UnusedVars_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_76, 2))));

              succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), ((MR_Box) (TermVar_73)), UnusedVars_113);
              if (succeeded)
              {
                *Goal_7 = hlds__make_goal__true_goal_0_f_0();
                *Changed_9 = (MR_Integer) 0;
              }
              else
              {
                *Goal_7 = Goal0_6;
                *Changed_9 = (MR_Integer) 0;
              }
              *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
            }
            else
            {
              MR_Word SubGoal_74;
              MR_Word GoalExpr_114;

              transform_hlds__unused_args_optimize__delete_unused_args_in_goal_5_p_0(SubGoal0_72, &SubGoal_74, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, Changed_9);
              {
                GoalExpr_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_114, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_114, 1) = ((MR_Box) (Reason_71));
                MR_hl_field(3, GoalExpr_114, 2) = ((MR_Box) (SubGoal_74));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_7 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_114));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Cond0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Then0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Else0_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 4))));
            MR_Word Cond_65;
            MR_Word Changed1_66;
            MR_Word Then_67;
            MR_Word Changed2_68;
            MR_Word Else_69;
            MR_Word Changed3_70;
            MR_Word STATE_VARIABLE_Info_7_92;
            MR_Word STATE_VARIABLE_Info_8_93;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word GoalExpr_112;

            transform_hlds__unused_args_optimize__delete_unused_args_in_goal_5_p_0(Cond0_62, &Cond_65, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_7_92, &Changed1_66);
            transform_hlds__unused_args_optimize__delete_unused_args_in_goal_5_p_0(Then0_63, &Then_67, STATE_VARIABLE_Info_7_92, &STATE_VARIABLE_Info_8_93, &Changed2_68);
            transform_hlds__unused_args_optimize__delete_unused_args_in_goal_5_p_0(Else0_64, &Else_69, STATE_VARIABLE_Info_8_93, STATE_VARIABLE_Info_77, &Changed3_70);
            {
              Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_97, 0) = ((MR_Box) (Changed3_70));
              MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_96, 0) = ((MR_Box) (Changed2_68));
              MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
            }
            {
              Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_95, 0) = ((MR_Box) (Changed1_66));
              MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_96));
            }
            *Changed_9 = libs__maybe_util__or_list_1_f_0(Var_95);
            {
              GoalExpr_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_112, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_112, 1) = ((MR_Box) (Vars_61));
              MR_hl_field(3, GoalExpr_112, 2) = ((MR_Box) (Cond_65));
              MR_hl_field(3, GoalExpr_112, 3) = ((MR_Box) (Then_67));
              MR_hl_field(3, GoalExpr_112, 4) = ((MR_Box) (Else_69));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_112));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args_optimize.delete_unused_args_in_goal_expr\'/5", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__unused_args_optimize__delete_unused_args_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16,
  MR_Word * Changed_9)
{
  MR_Word Goal1_10;
  MR_Word GoalExpr1_11;
  MR_Word GoalInfo1_12;

  transform_hlds__unused_args_optimize__delete_unused_args_in_goal_expr_5_p_0(Goal0_6, &Goal1_10, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16, Changed_9);
  GoalExpr1_11 = ((MR_Word) ((MR_hl_field(0, Goal1_10, 0))));
  GoalInfo1_12 = ((MR_Word) ((MR_hl_field(0, Goal1_10, 1))));
  switch (*Changed_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word UnusedVars_13 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Info_16, 2))));
        MR_Word GoalInfo_14;
        MR_Word InstMap0_20;
        MR_Word InstMap_21;

        InstMap0_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_12);
        hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_13, InstMap0_20, &InstMap_21);
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_21, GoalInfo1_12, &GoalInfo_14);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_7 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr1_11));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_14));
        }
      }
      break;
    case (MR_Integer) 0:
      *Goal_7 = Goal0_6;
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize__need_unify_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word UnusedVars_6,
  MR_Word Unify_7,
  MR_Word * Changed_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unify_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LVar_13 = ((MR_Word) ((MR_hl_field(0, Unify_7, 0))));

        succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), ((MR_Box) (LVar_13)), UnusedVars_6);
        succeeded = !(succeeded);
        if (succeeded)
        {
          *Changed_8 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_21 = ((MR_Word) ((MR_hl_field(1, Unify_7, 2))));
        MR_Word ArgModes_22 = ((MR_Word) ((MR_hl_field(1, Unify_7, 3))));
        MR_Word CanFail_23 = ((((MR_Unsigned) ((MR_hl_field(1, Unify_7, 4))) >> 1)) & (MR_Integer) 1);
        MR_Word LVar_31 = ((MR_Word) ((MR_hl_field(1, Unify_7, 0))));

        succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), ((MR_Box) (LVar_31)), UnusedVars_6);
        succeeded = !(succeeded);
        if (succeeded)
          switch (CanFail_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *Changed_8 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              succeeded = transform_hlds__unused_args_optimize__check_deconstruct_args_6_p_0(ModuleInfo_5, UnusedVars_6, ArgVars_21, ArgModes_22, (MR_Integer) 0, Changed_8);
              break;
          }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Target_11 = ((MR_Word) ((MR_hl_field(2, Unify_7, 0))));

        succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), ((MR_Box) (Target_11)), UnusedVars_6);
        succeeded = !(succeeded);
        if (succeeded)
        {
          *Changed_8 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unify_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Changed_8 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args_optimize.need_unify\'/4", (MR_String) "complicated unify");
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize__check_deconstruct_args_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word UnusedVars_8,
  MR_Word Vars_9,
  MR_Word ArgModes_10,
  MR_Word STATE_VARIABLE_SomeUsed_0_26,
  MR_Word * Changed_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Vars_9 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((ArgModes_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = (STATE_VARIABLE_SomeUsed_0_26 == (MR_Integer) 1);
        if (succeeded)
        {
          *Changed_12 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args_optimize.check_deconstruct_args\'/6", (MR_String) "mismatched lists");
        succeeded = MR_TRUE;
      }
    else
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Vars_9, 1))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, Vars_9, 0))));

      if ((ArgModes_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args_optimize.check_deconstruct_args\'/6", (MR_String) "mismatched lists");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word HeadArgMode_19 = ((MR_Word) ((MR_hl_field(1, ArgModes_10, 0))));
        MR_Word TailArgModes_20 = ((MR_Word) ((MR_hl_field(1, ArgModes_10, 1))));
        MR_Word TypeInfo_33_33;
        MR_Word InitX_21 = ((MR_Word) ((MR_hl_field(0, HeadArgMode_19, 0))));
        MR_Word InitY_23 = ((MR_Word) ((MR_hl_field(0, HeadArgMode_19, 2))));
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (InitX_21));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) (InitY_23));
        }
        succeeded = hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_7, Var_31);
        if (succeeded)
        {
          TypeInfo_33_33 = (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]);
          succeeded = mercury__list__member_2_p_0(TypeInfo_33_33, ((MR_Box) (Var_35)), UnusedVars_8);
        }
        if (succeeded)
        {
          MR_Word Var_25;

          succeeded = transform_hlds__unused_args_optimize__check_deconstruct_args_6_p_0(ModuleInfo_7, UnusedVars_8, Var_34, TailArgModes_20, STATE_VARIABLE_SomeUsed_0_26, &Var_25);
          if (succeeded)
          {
            *Changed_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word next_value_of_Vars_9 = Var_34;
          MR_Word next_value_of_ArgModes_10 = TailArgModes_20;

          // direct tailcall eliminated
          ;
          Vars_9 = next_value_of_Vars_9;
          ArgModes_10 = next_value_of_ArgModes_10;
          STATE_VARIABLE_SomeUsed_0_26 = (MR_Integer) 1;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args_optimize__make_intermod_proc_10_p_0(
  MR_Word PredId_11,
  MR_Word NewPredId_12,
  MR_Integer ProcId_13,
  MR_String NewPredName_14,
  MR_Word OrigPredInfo_15,
  MR_Word OrigProcInfo_16,
  MR_Word UnusedArgs_17,
  MR_Word UnusedArgs2_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36)
{
  MR_Word ExtraPredInfo0_20;
  MR_Word PredModuleName_21;
  MR_Word ExtraProc0_22;
  MR_Word HeadVars0_23;
  MR_Word ArgModes0_24;
  MR_Word IntermodHeadVars_25;
  MR_Word IntermodArgModes_26;
  MR_Word ExtraProc1_27;
  MR_Word ExtraProc_28;
  MR_Word ExtraProcs0_29;
  MR_Word ExtraProcs_30;
  MR_Word ExtraPredInfo_31;
  MR_Word PredTable0_32;
  MR_Word PredTable_34;
  MR_Word Var_38;
  MR_Word HeadVars_44;
  MR_Word Goal0_45;
  MR_Word GoalInfo0_47;
  MR_Word Determinism_48;
  MR_Word GoalInfo1_49;
  MR_Word VarTable0_50;
  MR_Word NonLocals_51;
  MR_Word HeadVarEntries_52;
  MR_Word VarTable1_53;
  MR_Word RttiVarMaps0_54;
  MR_Word NewHeadVars_55;
  MR_Word GoalExpr_56;
  MR_Word Goal1_57;
  MR_Word Goal_59;
  MR_Word VarTable_60;
  MR_Word RttiVarMaps_61;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word STATE_VARIABLE_OldProc_1_67;
  MR_Word STATE_VARIABLE_OldProc_2_68;
  MR_Word Var_58;
  MR_Word Var_33;

  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (PredId_11));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (ProcId_13));
  }
  transform_hlds__unused_args_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(UnusedArgs2_18, (MR_Word) (((MR_Box) ((MR_Unsigned) 12U))), Var_38, OrigPredInfo_15, &ExtraPredInfo0_20);
  PredModuleName_21 = hlds__hlds_pred__pred_info_module_1_f_0(OrigPredInfo_15);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(OrigProcInfo_16, &HeadVars_44);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(OrigProcInfo_16, &Goal0_45);
  GoalInfo0_47 = ((MR_Word) ((MR_hl_field(0, Goal0_45, 1))));
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(OrigProcInfo_16, &Determinism_48);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_48, GoalInfo0_47, &GoalInfo1_49);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(OrigProcInfo_16, &VarTable0_50);
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), HeadVars_44, &NonLocals_51);
  parse_tree__var_table__lookup_var_entries_3_p_0(VarTable0_50, HeadVars_44, &HeadVarEntries_52);
  parse_tree__var_table__var_table_from_corresponding_lists_3_p_0(HeadVars_44, HeadVarEntries_52, &VarTable1_53);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(OrigProcInfo_16, &RttiVarMaps0_54);
  transform_hlds__unused_args_base_ops__remove_specified_positions_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), UnusedArgs_17, HeadVars_44, &NewHeadVars_55);
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (PredModuleName_21));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (NewPredName_14));
  }
  {
    GoalExpr_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_56, 0) = ((MR_Box) (NewPredId_12));
    MR_hl_field(2, GoalExpr_56, 1) = ((MR_Box) (ProcId_13));
    MR_hl_field(2, GoalExpr_56, 2) = ((MR_Box) (NewHeadVars_55));
    MR_hl_field(2, GoalExpr_56, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, GoalExpr_56, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_56, 5) = ((MR_Box) (Var_64));
  }
  {
    Goal1_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal1_57, 0) = ((MR_Box) (GoalExpr_56));
    MR_hl_field(0, Goal1_57, 1) = ((MR_Box) (GoalInfo1_49));
  }
  Var_66 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_51);
  hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 1, Var_66, &Var_58, Goal1_57, &Goal_59, VarTable1_53, &VarTable_60, RttiVarMaps0_54, &RttiVarMaps_61);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_59, OrigProcInfo_16, &STATE_VARIABLE_OldProc_1_67);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_60, STATE_VARIABLE_OldProc_1_67, &STATE_VARIABLE_OldProc_2_68);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_61, STATE_VARIABLE_OldProc_2_68, &ExtraProc0_22);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(OrigProcInfo_16, &HeadVars0_23);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(OrigProcInfo_16, &ArgModes0_24);
  transform_hlds__unused_args_base_ops__remove_specified_positions_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), UnusedArgs2_18, HeadVars0_23, &IntermodHeadVars_25);
  transform_hlds__unused_args_base_ops__remove_specified_positions_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UnusedArgs2_18, ArgModes0_24, &IntermodArgModes_26);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(IntermodHeadVars_25, ExtraProc0_22, &ExtraProc1_27);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(IntermodArgModes_26, ExtraProc1_27, &ExtraProc_28);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ExtraPredInfo0_20, &ExtraProcs0_29);
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_13)), ((MR_Box) (ExtraProc_28)), ExtraProcs0_29, &ExtraProcs_30);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ExtraProcs_30, ExtraPredInfo0_20, &ExtraPredInfo_31);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &PredTable0_32);
  hlds__pred_table__predicate_table_insert_4_p_0(ExtraPredInfo_31, &Var_33, PredTable0_32, &PredTable_34);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_34, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
}

static void MR_CALL 
transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_36;

  transform_hlds__unused_args_optimize__make_intermod_proc_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_36);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_36));
}

static MR_Box MR_CALL 
transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = transform_hlds__unused_args_analysis__get_unused_args_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args_optimize__IntroducedFrom__pred__unused_args_create_new_pred__166__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_56;

  conv1_LambdaHeadVar__2_56 = transform_hlds__unused_args_optimize__IntroducedFrom__func__unused_args_create_new_pred__159__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_56));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0(
  MR_Word ProcToUnusedArgsMap_7,
  MR_Word OrigPredProcId_8,
  MR_Word STATE_VARIABLE_NewProcMap_0_48,
  MR_Word * STATE_VARIABLE_NewProcMap_49,
  MR_Word STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * STATE_VARIABLE_ModuleInfo_51)
{
  MR_bool succeeded;
  MR_Word UnusedArgs_11;
  MR_Word OrigPredInfo_12;
  MR_Word OrigProcInfo_13;
  MR_Word PredModuleName_14;
  MR_Word OrigPredId_15;
  MR_Integer ProcId_16;
  MR_Word Globals_17;
  MR_Word IntermodAnalysis_18;
  MR_Word IntermodResultsTriples_22;
  MR_Word IntermodOldArgLists_30;
  MR_Box conv0_UnusedArgs_11;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[0]), ProcToUnusedArgsMap_7, ((MR_Box) (OrigPredProcId_8)), &conv0_UnusedArgs_11);
  UnusedArgs_11 = ((MR_Word) (conv0_UnusedArgs_11));
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_50, OrigPredProcId_8, &OrigPredInfo_12, &OrigProcInfo_13);
  PredModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(OrigPredInfo_12);
  OrigPredId_15 = ((MR_Word) ((MR_hl_field(0, OrigPredProcId_8, 0))));
  ProcId_16 = ((MR_Integer) ((MR_hl_field(0, OrigPredProcId_8, 1))));
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_50, &Globals_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 435, &IntermodAnalysis_18);
  switch (IntermodAnalysis_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        IntermodResultsTriples_22 = (MR_Word) ((MR_Unsigned) 0U);
        IntermodOldArgLists_30 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word AnalysisInfo0_19;
        MR_Word ModuleId_20;
        MR_Word FuncId_21;
        MR_Word IntermodOldAnswers_23;
        MR_Word PredFormArity_25;
        MR_Word FuncInfo_26;
        MR_Word Answer_27;
        MR_Word FilterUnused_28;
        MR_Word Var_60;

        hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_50, &AnalysisInfo0_19);
        transform_hlds__mmc_analysis__pred_info_proc_id_to_module_name_func_id_4_p_0(OrigPredInfo_12, ProcId_16, &ModuleId_20, &FuncId_21);
        analysis__operations__lookup_results_4_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_4[0]), AnalysisInfo0_19, ModuleId_20, FuncId_21, &IntermodResultsTriples_22);
        IntermodOldAnswers_23 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[3]), (MR_Word) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[6]), IntermodResultsTriples_22);
        hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(OrigPredInfo_12, &PredFormArity_25);
        FuncInfo_26 = (MR_Word) (PredFormArity_25);
        Answer_27 = (MR_Word) (UnusedArgs_11);
        {
          FilterUnused_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FilterUnused_28, 0) = ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_4[1]));
          MR_hl_field(0, FilterUnused_28, 1) = ((MR_Box) (transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0_2));
          MR_hl_field(0, FilterUnused_28, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, FilterUnused_28, 3) = ((MR_Box) (FuncInfo_26));
          MR_hl_field(0, FilterUnused_28, 4) = ((MR_Box) (Answer_27));
        }
        Var_60 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0), FilterUnused_28, IntermodOldAnswers_23);
        IntermodOldArgLists_30 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__unused_args_analysis__transform_hlds__unused_args_analysis__type_ctor_info_unused_args_answer_0), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[7]), Var_60);
      }
      break;
  }
  if ((UnusedArgs_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_NewProcMap_49 = STATE_VARIABLE_NewProcMap_0_48;
    *STATE_VARIABLE_ModuleInfo_51 = STATE_VARIABLE_ModuleInfo_0_50;
  }
  else
  {
    MR_Word PredStatus0_33;
    MR_Word PredStatus_36;
    MR_Word NewPredInfo0_37;
    MR_String NewPredName_38;
    MR_Word NewProcs0_39;
    MR_Word NewProcs_40;
    MR_Word NewPredInfo_41;
    MR_Word PredTable0_42;
    MR_Word NewPredId_43;
    MR_Word PredTable_44;
    MR_Word PredSymName_45;
    MR_Word OrigToNew_46;
    MR_Word ForwardingProcInfo_47;
    MR_Word STATE_VARIABLE_ModuleInfo_1_65;
    MR_Word STATE_VARIABLE_ModuleInfo_2_67;
    MR_Word Var_68;
    MR_Word HeadVars_89;
    MR_Word Goal0_90;
    MR_Word GoalInfo0_92;
    MR_Word Determinism_93;
    MR_Word GoalInfo1_94;
    MR_Word VarTable0_95;
    MR_Word NonLocals_96;
    MR_Word HeadVarEntries_97;
    MR_Word VarTable1_98;
    MR_Word RttiVarMaps0_99;
    MR_Word NewHeadVars_100;
    MR_Word GoalExpr_101;
    MR_Word Goal1_102;
    MR_Word Goal_104;
    MR_Word VarTable_105;
    MR_Word RttiVarMaps_106;
    MR_Word Var_111;
    MR_Word STATE_VARIABLE_OldProc_1_112;
    MR_Word STATE_VARIABLE_OldProc_2_113;
    MR_Word Var_61;
    MR_Word Var_103;
    MR_Box conv4_STATE_VARIABLE_ModuleInfo_51;

    hlds__hlds_pred__pred_info_get_status_2_p_0(OrigPredInfo_12, &PredStatus0_33);
    succeeded = (IntermodResultsTriples_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (IntermodOldArgLists_30 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_61 = (MR_Word) (PredStatus0_33);
        succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      PredStatus_36 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
    else
    {
      MR_Word Var_63;

      Var_63 = hlds__status__pred_status_is_exported_1_f_0(PredStatus0_33);
      succeeded = (Var_63 == (MR_Integer) 1);
      if (succeeded)
        PredStatus_36 = PredStatus0_33;
      else
        PredStatus_36 = (MR_Word) (((MR_Box) ((MR_Unsigned) 32U)));
    }
    transform_hlds__unused_args_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(UnusedArgs_11, PredStatus_36, OrigPredProcId_8, OrigPredInfo_12, &NewPredInfo0_37);
    NewPredName_38 = hlds__hlds_pred__pred_info_name_1_f_0(NewPredInfo0_37);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(NewPredInfo0_37, &NewProcs0_39);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_16)), ((MR_Box) (OrigProcInfo_13)), NewProcs0_39, &NewProcs_40);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(NewProcs_40, NewPredInfo0_37, &NewPredInfo_41);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_50, &PredTable0_42);
    hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_41, &NewPredId_43, PredTable0_42, &PredTable_44);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_44, STATE_VARIABLE_ModuleInfo_0_50, &STATE_VARIABLE_ModuleInfo_1_65);
    {
      PredSymName_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredSymName_45, 0) = ((MR_Box) (PredModuleName_14));
      MR_hl_field(1, PredSymName_45, 1) = ((MR_Box) (NewPredName_38));
    }
    {
      OrigToNew_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OrigToNew_46, 0) = ((MR_Box) (NewPredId_43));
      MR_hl_field(0, OrigToNew_46, 1) = ((MR_Box) (ProcId_16));
      MR_hl_field(0, OrigToNew_46, 2) = ((MR_Box) (PredSymName_45));
      MR_hl_field(0, OrigToNew_46, 3) = ((MR_Box) (UnusedArgs_11));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0), ((MR_Box) (OrigPredProcId_8)), ((MR_Box) (OrigToNew_46)), STATE_VARIABLE_NewProcMap_0_48, STATE_VARIABLE_NewProcMap_49);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(OrigProcInfo_13, &HeadVars_89);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(OrigProcInfo_13, &Goal0_90);
    GoalInfo0_92 = ((MR_Word) ((MR_hl_field(0, Goal0_90, 1))));
    hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(OrigProcInfo_13, &Determinism_93);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_93, GoalInfo0_92, &GoalInfo1_94);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(OrigProcInfo_13, &VarTable0_95);
    mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), HeadVars_89, &NonLocals_96);
    parse_tree__var_table__lookup_var_entries_3_p_0(VarTable0_95, HeadVars_89, &HeadVarEntries_97);
    parse_tree__var_table__var_table_from_corresponding_lists_3_p_0(HeadVars_89, HeadVarEntries_97, &VarTable1_98);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(OrigProcInfo_13, &RttiVarMaps0_99);
    transform_hlds__unused_args_base_ops__remove_specified_positions_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), UnusedArgs_11, HeadVars_89, &NewHeadVars_100);
    {
      GoalExpr_101 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, GoalExpr_101, 0) = ((MR_Box) (NewPredId_43));
      MR_hl_field(2, GoalExpr_101, 1) = ((MR_Box) (ProcId_16));
      MR_hl_field(2, GoalExpr_101, 2) = ((MR_Box) (NewHeadVars_100));
      MR_hl_field(2, GoalExpr_101, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, GoalExpr_101, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, GoalExpr_101, 5) = ((MR_Box) (PredSymName_45));
    }
    {
      Goal1_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal1_102, 0) = ((MR_Box) (GoalExpr_101));
      MR_hl_field(0, Goal1_102, 1) = ((MR_Box) (GoalInfo1_94));
    }
    Var_111 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_96);
    hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 1, Var_111, &Var_103, Goal1_102, &Goal_104, VarTable1_98, &VarTable_105, RttiVarMaps0_99, &RttiVarMaps_106);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_104, OrigProcInfo_13, &STATE_VARIABLE_OldProc_1_112);
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_105, STATE_VARIABLE_OldProc_1_112, &STATE_VARIABLE_OldProc_2_113);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_106, STATE_VARIABLE_OldProc_2_113, &ForwardingProcInfo_47);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(OrigPredId_15, ProcId_16, OrigPredInfo_12, ForwardingProcInfo_47, STATE_VARIABLE_ModuleInfo_1_65, &STATE_VARIABLE_ModuleInfo_2_67);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_68, 0) = ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_7[0]));
      MR_hl_field(0, Var_68, 1) = ((MR_Box) (transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0_4));
      MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(0, Var_68, 3) = ((MR_Box) (OrigPredId_15));
      MR_hl_field(0, Var_68, 4) = ((MR_Box) (NewPredId_43));
      MR_hl_field(0, Var_68, 5) = ((MR_Box) (ProcId_16));
      MR_hl_field(0, Var_68, 6) = ((MR_Box) (NewPredName_38));
      MR_hl_field(0, Var_68, 7) = ((MR_Box) (OrigPredInfo_12));
      MR_hl_field(0, Var_68, 8) = ((MR_Box) (OrigProcInfo_13));
      MR_hl_field(0, Var_68, 9) = ((MR_Box) (UnusedArgs_11));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_68, IntermodOldArgLists_30, ((MR_Box) (STATE_VARIABLE_ModuleInfo_2_67)), &conv4_STATE_VARIABLE_ModuleInfo_51);
    *STATE_VARIABLE_ModuleInfo_51 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_51));
  }
}

void MR_CALL 
transform_hlds__unused_args_optimize__make_imported_unused_args_pred_info_6_p_0(
  MR_Word OptProc_7,
  MR_Word UnusedArgs_8,
  MR_Word STATE_VARIABLE_NewProcMap_0_32,
  MR_Word * STATE_VARIABLE_NewProcMap_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
{
  MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(0, OptProc_7, 0))));
  MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(0, OptProc_7, 1))));
  MR_Word PredInfo0_13;
  MR_Word ProcInfo0_14;
  MR_Word NewPredInfo0_15;
  MR_Word NewProcs0_16;
  MR_Word HeadVars0_17;
  MR_Word HeadVars_18;
  MR_Word ProcInfo1_19;
  MR_Word ArgModes0_20;
  MR_Word ArgModes_21;
  MR_Word ProcInfo_22;
  MR_Word NewProcs_23;
  MR_Word NewPredInfo_24;
  MR_Word PredTable0_25;
  MR_Word NewPredId_26;
  MR_Word PredTable1_27;
  MR_Word PredModuleName_28;
  MR_String PredName_29;
  MR_Word PredSymName_30;
  MR_Word NewProcInfo_31;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_34, PredId_11, ProcId_12, &PredInfo0_13, &ProcInfo0_14);
  transform_hlds__unused_args_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(UnusedArgs_8, (MR_Word) (((MR_Box) (MR_mkword(2, &transform_hlds__unused_args_optimize_scalar_common_5[0])))), OptProc_7, PredInfo0_13, &NewPredInfo0_15);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(NewPredInfo0_15, &NewProcs0_16);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_14, &HeadVars0_17);
  transform_hlds__unused_args_base_ops__remove_specified_positions_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[1]), UnusedArgs_8, HeadVars0_17, &HeadVars_18);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_18, ProcInfo0_14, &ProcInfo1_19);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo1_19, &ArgModes0_20);
  transform_hlds__unused_args_base_ops__remove_specified_positions_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UnusedArgs_8, ArgModes0_20, &ArgModes_21);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_21, ProcInfo1_19, &ProcInfo_22);
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_12)), ((MR_Box) (ProcInfo_22)), NewProcs0_16, &NewProcs_23);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(NewProcs_23, NewPredInfo0_15, &NewPredInfo_24);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &PredTable0_25);
  hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_24, &NewPredId_26, PredTable0_25, &PredTable1_27);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable1_27, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
  PredModuleName_28 = hlds__hlds_pred__pred_info_module_1_f_0(NewPredInfo_24);
  PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(NewPredInfo_24);
  {
    PredSymName_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_30, 0) = ((MR_Box) (PredModuleName_28));
    MR_hl_field(1, PredSymName_30, 1) = ((MR_Box) (PredName_29));
  }
  {
    NewProcInfo_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NewProcInfo_31, 0) = ((MR_Box) (NewPredId_26));
    MR_hl_field(0, NewProcInfo_31, 1) = ((MR_Box) (ProcId_12));
    MR_hl_field(0, NewProcInfo_31, 2) = ((MR_Box) (PredSymName_30));
    MR_hl_field(0, NewProcInfo_31, 3) = ((MR_Box) (UnusedArgs_8));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0), ((MR_Box) (OptProc_7)), ((MR_Box) (NewProcInfo_31)), STATE_VARIABLE_NewProcMap_0_32, STATE_VARIABLE_NewProcMap_33);
}

static void MR_CALL 
transform_hlds__unused_args_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
  MR_Word UnusedArgs_8,
  MR_Word PredStatus_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredInfo_0_43,
  MR_Word * STATE_VARIABLE_PredInfo_44)
{
  MR_bool succeeded;
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 0))));
  MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__4_4, 1))));
  MR_Word PredModuleName_13;
  MR_String Name0_14;
  MR_Word PredOrFunc_15;
  MR_Word Tvars_16;
  MR_Word ExistQVars_17;
  MR_Word ArgTypes0_18;
  MR_Word OrigOrigin_19;
  MR_String Name1_26;
  MR_Word Transform_27;
  MR_String TransformedName_28;
  MR_Word PredFormArity_29;
  MR_Word TypeVars_30;
  MR_Word ArgTypes_31;
  MR_Word Context_32;
  MR_Word ClausesInfo_33;
  MR_Word Markers_34;
  MR_Word GoalType_35;
  MR_Word ClassContext_36;
  MR_Word VarNameRemap_37;
  MR_Word Proofs_38;
  MR_Word ConstraintMap_39;
  MR_Word ProcTransform_40;
  MR_Word Origin_41;
  MR_Integer Var_59;
  MR_Word STATE_VARIABLE_PredInfo_1_60;
  MR_String Var_46;

  PredModuleName_13 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_43);
  Name0_14 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_43);
  PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_0_43);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_0_43, &Tvars_16, &ExistQVars_17, &ArgTypes0_18);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_0_43, &OrigOrigin_19);
  succeeded = mercury__string__prefix_2_p_0(Name0_14, (MR_String) "__");
  if (succeeded)
  {
    Var_46 = (MR_String) "__LambdaGoal__";
    succeeded = mercury__string__prefix_2_p_0(Name0_14, Var_46);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word TypeCtor_21;
    MR_Word Var_47;

    succeeded = ((MR_tag((MR_Word) OrigOrigin_19)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_47 = ((MR_Word) ((MR_hl_field(1, OrigOrigin_19, 0))));
      succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
      if (succeeded)
        TypeCtor_21 = ((MR_Word) ((MR_hl_field(0, Var_47, 1))));
    }
    if (succeeded)
    {
      MR_Word TypeModule_22;
      MR_String TypeName_23;
      MR_Integer TypeArity_24;
      MR_String TypeModuleStr_25;
      MR_String Var_65;
      MR_String Var_73;
      MR_String Var_74;
      MR_String Var_76;
      MR_String Var_77;
      MR_String Var_79;

      hlds__type_util__type_ctor_module_name_arity_4_p_0(TypeCtor_21, &TypeModule_22, &TypeName_23, &TypeArity_24);
      TypeModuleStr_25 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(TypeModule_22, (MR_String) "__");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_5[1]), TypeArity_24, &Var_65);
      Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_65);
      Var_74 = mercury__string__f_43_43_2_f_0(TypeName_23, Var_73);
      Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_74);
      Var_77 = mercury__string__f_43_43_2_f_0(TypeModuleStr_25, Var_76);
      Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_77);
      Name1_26 = mercury__string__f_43_43_2_f_0(Name0_14, Var_79);
    }
    else
      Name1_26 = Name0_14;
  }
  else
    Name1_26 = Name0_14;
  Var_59 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_11);
  {
    Transform_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_27, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Transform_27, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
    MR_hl_field(3, Transform_27, 2) = ((MR_Box) (Var_59));
    MR_hl_field(3, Transform_27, 3) = ((MR_Box) (UnusedArgs_8));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(Name1_26, Transform_27, &TransformedName_28);
  PredFormArity_29 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(STATE_VARIABLE_PredInfo_0_43);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_43, &TypeVars_30);
  transform_hlds__unused_args_base_ops__remove_specified_positions_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), UnusedArgs_8, ArgTypes0_18, &ArgTypes_31);
  hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_0_43, &Context_32);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_43, &ClausesInfo_33);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_43, &Markers_34);
  hlds__hlds_pred__pred_info_get_goal_type_2_p_0(STATE_VARIABLE_PredInfo_0_43, &GoalType_35);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(STATE_VARIABLE_PredInfo_0_43, &ClassContext_36);
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(STATE_VARIABLE_PredInfo_0_43, &VarNameRemap_37);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_38);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_39);
  {
    ProcTransform_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ProcTransform_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, ProcTransform_40, 1) = ((MR_Box) (UnusedArgs_8));
  }
  {
    Origin_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Origin_41, 0) = ((MR_Box) (ProcTransform_40));
    MR_hl_field(3, Origin_41, 1) = ((MR_Box) (OrigOrigin_19));
    MR_hl_field(3, Origin_41, 2) = ((MR_Box) (PredId_10));
    MR_hl_field(3, Origin_41, 3) = ((MR_Box) (ProcId_11));
  }
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_15, PredModuleName_13, TransformedName_28, PredFormArity_29, Context_32, Origin_41, PredStatus_9, (MR_Word) ((MR_Unsigned) 0U), GoalType_35, Markers_34, ArgTypes_31, Tvars_16, ExistQVars_17, ClassContext_36, Proofs_38, ConstraintMap_39, ClausesInfo_33, VarNameRemap_37, &STATE_VARIABLE_PredInfo_1_60);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVars_30, STATE_VARIABLE_PredInfo_1_60, STATE_VARIABLE_PredInfo_44);
}

static void MR_CALL 
transform_hlds__unused_args_optimize__optimize_unused_args_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ModuleInfo_23;

  transform_hlds__unused_args_optimize__delete_unused_args_in_proc_msg_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ModuleInfo_23);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_23));
}

static void MR_CALL 
transform_hlds__unused_args_optimize__optimize_unused_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_NewProcMap_49;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_51;

  transform_hlds__unused_args_optimize__unused_args_create_new_pred_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NewProcMap_49, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_51);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NewProcMap_49));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_51));
}

void MR_CALL 
transform_hlds__unused_args_optimize__optimize_unused_args_7_p_0(
  MR_Word VeryVerbose_8,
  MR_Word ProcToUnusedArgsMap_9,
  MR_Word GlobalVarUsageMap_10,
  MR_Word FixpointPredProcIds_11,
  MR_Word NewProcMap0_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  MR_bool succeeded;
  MR_Word PredProcIdsToFix_14;
  MR_Word NewProcMap_15;
  MR_Word Var_18;
  MR_Word STATE_VARIABLE_ModuleInfo_1_19;
  MR_Word STATE_VARIABLE_ModuleInfo_2_20;
  MR_Word Var_31;
  MR_Box conv3_NewProcMap_15;
  MR_Box conv2_STATE_VARIABLE_ModuleInfo_1_19;
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_2_20;

  mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_1[0]), ProcToUnusedArgsMap_9, &PredProcIdsToFix_14);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_6[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (transform_hlds__unused_args_optimize__optimize_unused_args_7_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (ProcToUnusedArgsMap_9));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_optimize_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_18, PredProcIdsToFix_14, ((MR_Box) (NewProcMap0_12)), &conv3_NewProcMap_15, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16)), &conv2_STATE_VARIABLE_ModuleInfo_1_19);
  NewProcMap_15 = ((MR_Word) (conv3_NewProcMap_15));
  STATE_VARIABLE_ModuleInfo_1_19 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_1_19));
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&transform_hlds__unused_args_optimize_scalar_common_6[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (transform_hlds__unused_args_optimize__optimize_unused_args_7_p_0_2));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (VeryVerbose_8));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (GlobalVarUsageMap_10));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (NewProcMap_15));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_31, FixpointPredProcIds_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_19)), &conv5_STATE_VARIABLE_ModuleInfo_2_20);
  STATE_VARIABLE_ModuleInfo_2_20 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_2_20));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0), NewProcMap_15);
  if (succeeded)
    *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_2_20;
  else
    hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_2_20, STATE_VARIABLE_ModuleInfo_17);
}

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize____Unify____delete_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_optimize____Unify____delete_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_optimize____Compare____delete_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_optimize____Compare____delete_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize____Unify____new_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_optimize____Unify____new_proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_optimize____Compare____new_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_optimize____Compare____new_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_optimize____Unify____new_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_optimize____Unify____new_proc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_optimize____Compare____new_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_optimize____Compare____new_proc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__unused_args_optimize__init(void)
{
}

void mercury__transform_hlds__unused_args_optimize__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_delete_info_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_info_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_optimize__transform_hlds__unused_args_optimize__type_ctor_info_new_proc_map_0);
}

void mercury__transform_hlds__unused_args_optimize__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__unused_args_optimize__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.unused_args_optimize.
