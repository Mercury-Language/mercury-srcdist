/*
** Automatically generated from `deep_profiling.m'
** by the Mercury compiler,
** version rotd-2025-11-30
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


// :- module ll_backend.deep_profiling.
// :- implementation.

/*
INIT mercury__ll_backend__deep_profiling__init
ENDINIT
*/

#include "ll_backend.deep_profiling.mih"


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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "set_ctree234.mih"
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
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_transform.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.mode_top_functor.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
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
#include "ll_backend.coverage_profiling.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_0[1];

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0;

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_1[2];

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1;

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_2[1];

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2;

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_2[1];

static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_call_class_0[3];

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_call_class_0[3];

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_call_class_0[3];

static const MR_FA_TypeInfo_Struct2 ll_backend__deep_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__cord__ti_cord_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0;

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_info_0_0[9];

static const MR_ConstString ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_info_0_0[9];

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_info_0_0[1];

static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_info_0[1];

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_info_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__deep_profiling__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_prof_tail_rec_info_0_0[4];

static const MR_ConstString ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_prof_tail_rec_info_0_0[4];

static const MR_DuArgLocn ll_backend__deep_profiling__ll_backend__deep_profiling__field_locns_deep_prof_tail_rec_info_0_0[4];

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_prof_tail_rec_info_0_0[1];

static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_prof_tail_rec_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_prof_tail_rec_info_0[1];

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_prof_tail_rec_info_0[1];

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__deep_profiling____Compare____call_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____call_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__deep_profiling__generate_depth_var_4_p_0(
  MR_Integer CSN_5,
  MR_Word * DepthVar_6,
  MR_Word STATE_VARIABLE_DeepInfo_0_11,
  MR_Word * STATE_VARIABLE_DeepInfo_12);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_maybe_transform_proc_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcTable_0_19,
  MR_Word * STATE_VARIABLE_ProcTable_20);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredProcId_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_44,
  MR_Word * STATE_VARIABLE_ProcInfo_45,
  MR_Word * DeepLayoutInfo_9);

static void MR_CALL 
ll_backend__deep_profiling__generate_outermost_proc_dyns_8_p_0(
  MR_Word UseActivationCounts_9,
  MR_Word TopCSD_10,
  MR_Word MiddleCSD_11,
  MR_Word * MaybeOldActivationPtr_12,
  MR_Word * NewOutermostProcDyn_13,
  MR_Word * ExcpVars_14,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18);

static void MR_CALL 
ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(
  MR_Word UseActivationCounts_8,
  MR_Word TopCSD_9,
  MR_Word MiddleCSD_10,
  MR_Word * MaybeActivationPtr_11,
  MR_Word * ExcpVars_12,
  MR_Word STATE_VARIABLE_VarTable_0_15,
  MR_Word * STATE_VARIABLE_VarTable_16);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeepInfo_0_4,
  MR_Word * STATE_VARIABLE_DeepInfo_5);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeepInfo_0_4,
  MR_Word * STATE_VARIABLE_DeepInfo_5);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(
  MR_Word ConjType_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_DeepInfo_0_5,
  MR_Word * STATE_VARIABLE_DeepInfo_6);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word * AddedImpurity_8,
  MR_Word STATE_VARIABLE_DeepInfo_0_83,
  MR_Word * STATE_VARIABLE_DeepInfo_84);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_foreign_code_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_DeepInfo_0_28,
  MR_Word * STATE_VARIABLE_DeepInfo_29);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_DeepInfo_0_96,
  MR_Word * STATE_VARIABLE_DeepInfo_97);

static MR_String MR_CALL 
ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_p_0(
  MR_Word CSNs_9,
  MR_Word CSDVar_10,
  MR_Word * CallGoals_11,
  MR_Word * ExitGoals_12,
  MR_Word * FailGoals_13,
  MR_Word * ExtraVars_14,
  MR_Word STATE_VARIABLE_DeepInfo_0_17,
  MR_Word * STATE_VARIABLE_DeepInfo_18);

static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CSDVar_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_DeepInfo_0_7,
  MR_Word * STATE_VARIABLE_DeepInfo_8);

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0(
  MR_Integer Length_8,
  MR_Word CSNs_9,
  MR_Word * CSNVars_10,
  MR_Word * UnifyGoals_11,
  MR_Word * CellVar_12,
  MR_Word STATE_VARIABLE_DeepInfo_0_21,
  MR_Word * STATE_VARIABLE_DeepInfo_22);

static void MR_CALL 
ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(
  MR_Integer CSN_5,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeepInfo_0_12,
  MR_Word * STATE_VARIABLE_DeepInfo_13);

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_cell_6_p_0(
  MR_Integer Length_7,
  MR_Word CSNVars_8,
  MR_Word * CellVar_9,
  MR_Word * CellGoal_10,
  MR_Word STATE_VARIABLE_DeepInfo_0_21,
  MR_Word * STATE_VARIABLE_DeepInfo_22);

static MR_Word MR_CALL 
ll_backend__deep_profiling__classify_call_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Expr_5);

static void MR_CALL 
ll_backend__deep_profiling__compress_filename_3_p_0(
  MR_Word Deep_4,
  MR_String FileName0_5,
  MR_String * FileName_6);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_p_0(
  MR_Word Globals_7,
  MR_Word CodeModel_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_DeepInfo_0_35,
  MR_Word * STATE_VARIABLE_DeepInfo_36);

static void MR_CALL 
ll_backend__deep_profiling__build_non_proc_body_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word TopCSD_12,
  MR_Word MiddleCSD_13,
  MR_Word ProcStaticVar_14,
  MR_Word MaybeOldActivationPtr_15,
  MR_Word NewOutermostProcDyn_16,
  MR_Word GoalInfo0_17,
  MR_Word BindProcStaticVarGoal_18,
  MR_Word Goal0_19,
  MR_Word * Goal_20);

static void MR_CALL 
ll_backend__deep_profiling__make_impure_2_p_0(
  MR_Word STATE_VARIABLE_GoalInfo_0_5,
  MR_Word * STATE_VARIABLE_GoalInfo_6);

static void MR_CALL 
ll_backend__deep_profiling__build_semi_proc_body_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TopCSD_11,
  MR_Word MiddleCSD_12,
  MR_Word ProcStaticVar_13,
  MR_Word MaybeActivationPtr_14,
  MR_Word GoalInfo0_15,
  MR_Word BindProcStaticVarGoal_16,
  MR_Word Goal0_17,
  MR_Word * Goal_18);

static MR_Word MR_CALL 
ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_f_0(
  MR_Word STATE_VARIABLE_GoalInfo_0_8,
  MR_Word NewNonLocals_5);

static void MR_CALL 
ll_backend__deep_profiling__generate_deep_det_call_6_p_0(
  MR_Word ModuleInfo_7,
  MR_String Name_8,
  MR_Integer Arity_9,
  MR_Word ArgVars_10,
  MR_Word OutputVars_11,
  MR_Word * Goal_12);

static void MR_CALL 
ll_backend__deep_profiling__build_det_proc_body_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TopCSD_11,
  MR_Word MiddleCSD_12,
  MR_Word ProcStaticVar_13,
  MR_Word MaybeActivationPtr_14,
  MR_Word GoalInfo0_15,
  MR_Word BindProcStaticVarGoal_16,
  MR_Word Goal0_17,
  MR_Word * Goal_18);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_PredMap_0_15,
  MR_Word * STATE_VARIABLE_PredMap_16);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_transform_to_scc_3_p_0(
  MR_Word SCC_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(
  MR_Word Goal_6,
  MR_Integer STATE_VARIABLE_N_0_50,
  MR_Integer * STATE_VARIABLE_N_51,
  MR_Word STATE_VARIABLE_TailCallSites_0_52,
  MR_Word * STATE_VARIABLE_TailCallSites_53);

static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_N_0_2,
  MR_Integer * STATE_VARIABLE_N_3,
  MR_Word STATE_VARIABLE_TailCallSites_0_4,
  MR_Word * STATE_VARIABLE_TailCallSites_5);

static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_N_0_2,
  MR_Integer * STATE_VARIABLE_N_3,
  MR_Word STATE_VARIABLE_TailCallSites_0_4,
  MR_Word * STATE_VARIABLE_TailCallSites_5);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word TailRecInfo_3,
  MR_Word STATE_VARIABLE_FoundTailCall_0_4,
  MR_Word * STATE_VARIABLE_FoundTailCall_5);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word TailRecInfo_3,
  MR_Word STATE_VARIABLE_FoundTailCall_0_4,
  MR_Word * STATE_VARIABLE_FoundTailCall_5);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word TailRecInfo_3,
  MR_Word STATE_VARIABLE_FoundTailCall_0_4,
  MR_Word * STATE_VARIABLE_FoundTailCall_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word TailRecInfo_9,
  MR_Word STATE_VARIABLE_FoundTailCall_0_88,
  MR_Word * STATE_VARIABLE_FoundTailCall_89,
  MR_Word * Continue_11);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ToVar_2,
  MR_Word FromVar_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Vars_7,
  MR_Word Types_8,
  MR_Word Modes_9,
  MR_Word * STATE_VARIABLE_Outputs_11);

static MR_Word MR_CALL 
ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(
  MR_Word Goal_3);

static MR_Word MR_CALL 
ll_backend__deep_profiling__cases_contain_builtin_unify_or_compare_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0(
  MR_Word IsMDProfInst_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____call_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__deep_profiling____Compare____call_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_1[10][3];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_2[10][2];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_3[3][1];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_4[1][6];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_5[1][8];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_6[1][4];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_7[1][9];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_8[2][5];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_9[2][7];




static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_1[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[1])),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_4[0])),
    ((MR_Box) (ll_backend__deep_profiling__apply_deep_profiling_transform_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_9[0])),
    ((MR_Box) (ll_backend__deep_profiling__generate_csn_vector_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_9[1])),
    ((MR_Box) (ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_8[1])),
    ((MR_Box) (ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_8[1])),
    ((MR_Box) (ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_2[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_1[4]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[1]))
  },
  /* row   6 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_3[3][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__deep_profiling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_6[1][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__deep_profiling_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__deep_profiling_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__deep_profiling_scalar_common_2[6])))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_8[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_9[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__deep_profiling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__deep_profiling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) };

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0 = {
  (MR_String) "call_class_normal",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1 = {
  (MR_String) "call_class_special",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_2[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0) };

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2 = {
  (MR_String) "call_class_generic",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_0[1] = { &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0 };

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_1[1] = { &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1 };

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_2[1] = { &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2 };

static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_call_class_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_call_class_0[3] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2,
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0,
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1
};

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_call_class_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_call_class_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__deep_profiling____Unify____call_class_0_0_10001)),
  ((MR_Box) (ll_backend__deep_profiling____Compare____call_class_0_0_10001)),
  (MR_String) "ll_backend.deep_profiling",
  (MR_String) "call_class",
  { ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_call_class_0 },
  { ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_call_class_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_call_class_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__deep_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__cord__ti_cord_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0) }
};

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__deep_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0),
  (MR_PseudoTypeInfo) (&ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&ll_backend__deep_profiling__cord__ti_cord_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ll_backend__deep_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0)
};

static const MR_ConstString ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_info_0_0[9] = {
  (MR_String) "deep_module_info",
  (MR_String) "deep_pred_proc_id",
  (MR_String) "deep_containing_goal_map",
  (MR_String) "deep_current_csd",
  (MR_String) "deep_site_num_counter",
  (MR_String) "deep_call_sites",
  (MR_String) "deep_var_table",
  (MR_String) "deep_proc_filename",
  (MR_String) "deep_maybe_rec_info"
};

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0 = {
  (MR_String) "deep_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_info_0_0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_info_0_0[1] = { &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0 };

static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_info_0[1] = { &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0 };

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__deep_profiling____Unify____deep_info_0_0_10001)),
  ((MR_Box) (ll_backend__deep_profiling____Compare____deep_info_0_0_10001)),
  (MR_String) "ll_backend.deep_profiling",
  (MR_String) "deep_info",
  { ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_info_0 },
  { ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_info_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__deep_profiling__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__deep_profiling__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_prof_tail_rec_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__deep_profiling__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0),
  (MR_PseudoTypeInfo) (&ll_backend__deep_profiling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_prof_tail_rec_info_0_0[4] = {
  (MR_String) "dptri_moduleinfo",
  (MR_String) "dptri_scc_ppids",
  (MR_String) "dptri_detism",
  (MR_String) "dptri_outputs"
};

static const MR_DuArgLocn ll_backend__deep_profiling__ll_backend__deep_profiling__field_locns_deep_prof_tail_rec_info_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0 = {
  (MR_String) "deep_prof_tail_rec_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_prof_tail_rec_info_0_0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_prof_tail_rec_info_0_0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_locns_deep_prof_tail_rec_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_prof_tail_rec_info_0_0[1] = { &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0 };

static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_prof_tail_rec_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_prof_tail_rec_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_prof_tail_rec_info_0[1] = { &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0 };

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_prof_tail_rec_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_prof_tail_rec_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0_10001)),
  ((MR_Box) (ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0_10001)),
  (MR_String) "ll_backend.deep_profiling",
  (MR_String) "deep_prof_tail_rec_info",
  { ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_prof_tail_rec_info_0 },
  { ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_prof_tail_rec_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_prof_tail_rec_info_0,

};

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0(
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
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 7);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 7);
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

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_21 > Var_22);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0(
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
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 7);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 7);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&ll_backend__deep_profiling_scalar_common_2[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&ll_backend__deep_profiling_scalar_common_2[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
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
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_String ArgX8_25 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_String ArgY8_26 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__counter____Compare____counter_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                parse_tree__var_table____Compare____var_table_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_30_30;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_String ArgX8_17 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_String ArgY8_18 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_25_25 = (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_26_26 = (MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = mercury__counter____Unify____counter_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_28_28 = (MR_Word) (&ll_backend__deep_profiling_scalar_common_2[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX8_17, ArgY8_18) == 0);
                  if (succeeded)
                  {
                    TypeInfo_30_30 = (MR_Word) (&ll_backend__deep_profiling_scalar_common_2[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__deep_profiling____Compare____call_class_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
              MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

              hlds__hlds_pred____Compare____pred_proc_id_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_8;

              hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              hlds__hlds_goal____Compare____generic_call_0_0(HeadVar__1_1, ArgX1_11, ArgY1_12);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____call_class_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_16_16;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_5, ArgY1_6);
            if (succeeded)
            {
              TypeInfo_16_16 = (MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = hlds__hlds_goal____Unify____generic_call_0_0(ArgX1_9, ArgY1_10);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
ll_backend__deep_profiling__generate_depth_var_4_p_0(
  MR_Integer CSN_5,
  MR_Word * DepthVar_6,
  MR_Word STATE_VARIABLE_DeepInfo_0_11,
  MR_Word * STATE_VARIABLE_DeepInfo_12)
{
  MR_Word VarTable0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_11, 6))));
  MR_String VarName_9;
  MR_Word VarTable_10;
  MR_String Var_34;
  MR_Word Entry_42;
  MR_Word Var_43;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_String Var_32;
  MR_Word Var_33;

  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_3[1]), CSN_5, &Var_34);
  VarName_9 = mercury__string__f_43_43_2_f_0((MR_String) "Depth", Var_34);
  Var_43 = parse_tree__builtin_lib_types__int_type_0_f_0();
  {
    Entry_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_42, 0) = ((MR_Box) (VarName_9));
    MR_hl_field(0, Entry_42, 1) = ((MR_Box) (Var_43));
    MR_hl_field(0, Entry_42, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_42, DepthVar_6, VarTable0_8, &VarTable_10);
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_11, 0))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_11, 1))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_11, 2))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_11, 3))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_11, 4))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_11, 5))));
  Var_32 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_11, 7))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_11, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_DeepInfo_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 6) = ((MR_Box) (VarTable_10));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_33));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4)
{
  MR_Word GoalExpr0_5 = ((MR_Word) ((MR_hl_field(0, Goal0_3, 0))));
  MR_Word GoalInfo0_6 = ((MR_Word) ((MR_hl_field(0, Goal0_3, 1))));
  MR_Word GoalInfo_7;

  ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 1, GoalInfo0_6, &GoalInfo_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_7));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_maybe_transform_proc_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcTable_0_19,
  MR_Word * STATE_VARIABLE_ProcTable_20)
{
  MR_bool succeeded;
  MR_Word ProcInfo0_12;
  MR_Word PredModuleName_13;
  MR_Box conv0_ProcInfo0_12;
  MR_Word Var_32;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_19, ((MR_Box) (ProcId_10)), &conv0_ProcInfo0_12);
  ProcInfo0_12 = ((MR_Word) (conv0_ProcInfo0_12));
  PredModuleName_13 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_8, PredId_9);
  Var_32 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PredModuleName_13, Var_32);
  if (succeeded)
    *STATE_VARIABLE_ProcTable_20 = STATE_VARIABLE_ProcTable_0_19;
  else
  {
    MR_Word ProcInfo_18;
    MR_Word Var_29;
    MR_Word MaybeDeepInfo_37;
    MR_Word MaybeDeepRecInfo_39;
    MR_Word OrigBody_41;
    MR_Word MaybeDeepLayoutInfo_44;
    MR_Word DeepInfo_46;
    MR_Word STATE_VARIABLE_ProcInfo_1_48;
    MR_Word Var_49;
    MR_Word Globals_15;
    MR_Word VeryVerbose_16;
    MR_String ProcName_17;
    MR_String Var_23;
    MR_String Var_34;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 132, &VeryVerbose_16);
    ProcName_17 = hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_user_string_3_f_0(ModuleInfo_8, PredId_9, ProcId_10);
    Var_34 = mercury__string__f_43_43_2_f_0(ProcName_17, (MR_String) "\n");
    Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "% Deep profiling: ", Var_34);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, VeryVerbose_16, Var_23);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (PredId_9));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (ProcId_10));
    }
    hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ProcInfo0_12, &MaybeDeepInfo_37);
    if ((MaybeDeepInfo_37 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DeepLayoutInfo_50;
      MR_Word Body_52;
      MR_Word HeadVars_53;
      MR_Word Instmap_54;
      MR_Word VarTable_55;
      MR_Word MaybeDetism_56;
      MR_Word Detism_57;

      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_12, &Body_52);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_12, &HeadVars_53);
      hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo_8, ProcInfo0_12, &Instmap_54);
      hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_12, &VarTable_55);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_12, &MaybeDetism_56);
      if ((MaybeDetism_56 == (MR_Word) ((MR_Unsigned) 0U)))
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo0_12, &Detism_57);
      else
        Detism_57 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_56, 0))));
      {
        OrigBody_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OrigBody_41, 0) = ((MR_Box) (Body_52));
        MR_hl_field(0, OrigBody_41, 1) = ((MR_Box) (HeadVars_53));
        MR_hl_field(0, OrigBody_41, 2) = ((MR_Box) (Instmap_54));
        MR_hl_field(0, OrigBody_41, 3) = ((MR_Box) (VarTable_55));
        MR_hl_field(0, OrigBody_41, 4) = (MR_Box) ((MR_Unsigned) (Detism_57));
      }
      ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(ModuleInfo_8, Var_29, ProcInfo0_12, &STATE_VARIABLE_ProcInfo_1_48, &DeepLayoutInfo_50);
      {
        MaybeDeepLayoutInfo_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeDeepLayoutInfo_44, 0) = ((MR_Box) (DeepLayoutInfo_50));
      }
      MaybeDeepRecInfo_39 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word DeepInfo0_38 = ((MR_Word) ((MR_hl_field(1, MaybeDeepInfo_37, 0))));
      MR_Word RecInfo_42;
      MR_Word Var_47;

      MaybeDeepRecInfo_39 = ((MR_Word) ((MR_hl_field(0, DeepInfo0_38, 0))));
      OrigBody_41 = ((MR_Word) ((MR_hl_field(0, DeepInfo0_38, 2))));
      succeeded = (MaybeDeepRecInfo_39 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        RecInfo_42 = ((MR_Word) ((MR_hl_field(1, MaybeDeepRecInfo_39, 0))));
        Var_47 = ((MR_Word) ((MR_hl_field(0, RecInfo_42, 0))));
        succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
      }
      if (succeeded)
      {
        MR_Word ContainingGoalMap_58;
        MR_Word Goal0_59;
        MR_Word GoalInfo0_61;
        MR_Word VarTable0_62;
        MR_Word MiddleCSD_63;
        MR_Word VarTable1_64;
        MR_String FileName_65;
        MR_Word MaybeDeepProfInfo_67;
        MR_Word MaybeRecInfo_68;
        MR_Word DeepInfo0_69;
        MR_Word Goal_70;
        MR_Word DeepInfo_72;
        MR_Word VarTable_73;
        MR_Word STATE_VARIABLE_ProcInfo_1_74;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_79;
        MR_Word STATE_VARIABLE_ProcInfo_2_80;
        MR_Word Entry_90;
        MR_Word Var_91;
        MR_Word Var_71;

        hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ModuleInfo_8, &ContainingGoalMap_58, ProcInfo0_12, &STATE_VARIABLE_ProcInfo_1_74);
        hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_1_74, &Goal0_59);
        GoalInfo0_61 = ((MR_Word) ((MR_hl_field(0, Goal0_59, 1))));
        hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_1_74, &VarTable0_62);
        Var_91 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        {
          Entry_90 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_90, 0) = ((MR_Box) ((MR_String) "MiddleCSD"));
          MR_hl_field(0, Entry_90, 1) = ((MR_Box) (Var_91));
          MR_hl_field(0, Entry_90, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(Entry_90, &MiddleCSD_63, VarTable0_62, &VarTable1_64);
        Var_76 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_61);
        FileName_65 = ((MR_String) ((MR_hl_field(0, Var_76, 0))));
        hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(STATE_VARIABLE_ProcInfo_1_74, &MaybeDeepProfInfo_67);
        if ((MaybeDeepProfInfo_67 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeRecInfo_68 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word DeepProfInfo_93 = ((MR_Word) ((MR_hl_field(1, MaybeDeepProfInfo_67, 0))));

          MaybeRecInfo_68 = ((MR_Word) ((MR_hl_field(0, DeepProfInfo_93, 0))));
        }
        Var_77 = mercury__counter__init_1_f_0((MR_Integer) 0);
        Var_79 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0));
        {
          DeepInfo0_69 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DeepInfo0_69, 0) = ((MR_Box) (ModuleInfo_8));
          MR_hl_field(0, DeepInfo0_69, 1) = ((MR_Box) (Var_29));
          MR_hl_field(0, DeepInfo0_69, 2) = ((MR_Box) (ContainingGoalMap_58));
          MR_hl_field(0, DeepInfo0_69, 3) = ((MR_Box) (MiddleCSD_63));
          MR_hl_field(0, DeepInfo0_69, 4) = ((MR_Box) (Var_77));
          MR_hl_field(0, DeepInfo0_69, 5) = ((MR_Box) (Var_79));
          MR_hl_field(0, DeepInfo0_69, 6) = ((MR_Box) (VarTable1_64));
          MR_hl_field(0, DeepInfo0_69, 7) = ((MR_Box) (FileName_65));
          MR_hl_field(0, DeepInfo0_69, 8) = ((MR_Box) (MaybeRecInfo_68));
        }
        ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Goal0_59, &Goal_70, &Var_71, DeepInfo0_69, &DeepInfo_72);
        VarTable_73 = ((MR_Word) ((MR_hl_field(0, DeepInfo_72, 6))));
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_73, STATE_VARIABLE_ProcInfo_1_74, &STATE_VARIABLE_ProcInfo_2_80);
        hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_70, STATE_VARIABLE_ProcInfo_2_80, &STATE_VARIABLE_ProcInfo_1_48);
        MaybeDeepLayoutInfo_44 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word DeepLayoutInfo_45;

        ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(ModuleInfo_8, Var_29, ProcInfo0_12, &STATE_VARIABLE_ProcInfo_1_48, &DeepLayoutInfo_45);
        {
          MaybeDeepLayoutInfo_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeDeepLayoutInfo_44, 0) = ((MR_Box) (DeepLayoutInfo_45));
        }
      }
    }
    {
      DeepInfo_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DeepInfo_46, 0) = ((MR_Box) (MaybeDeepRecInfo_39));
      MR_hl_field(0, DeepInfo_46, 1) = ((MR_Box) (MaybeDeepLayoutInfo_44));
      MR_hl_field(0, DeepInfo_46, 2) = ((MR_Box) (OrigBody_41));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (DeepInfo_46));
    }
    hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_p_0(Var_49, STATE_VARIABLE_ProcInfo_1_48, &ProcInfo_18);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_10)), ((MR_Box) (ProcInfo_18)), STATE_VARIABLE_ProcTable_0_19, STATE_VARIABLE_ProcTable_20);
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredProcId_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_44,
  MR_Word * STATE_VARIABLE_ProcInfo_45,
  MR_Word * DeepLayoutInfo_9)
{
  MR_bool succeeded;
  MR_Word ContainingGoalMap_10;
  MR_Word Globals_11;
  MR_Word GoalInfo0_16;
  MR_Word TopCSD_17;
  MR_Word MiddleCSD_18;
  MR_Word ProcStaticVar_19;
  MR_Word Context_20;
  MR_String FileName_21;
  MR_Integer LineNumber_22;
  MR_Word MaybeDeepProfInfo_23;
  MR_Word MaybeRecInfo_24;
  MR_Word CallSites_26;
  MR_Word DoCoverageProfiling_27;
  MR_Word CoveragePoints_28;
  MR_Word PredId_31;
  MR_Integer ProcId_32;
  MR_Word UseActivationCounts_33;
  MR_Word IsInInterface_34;
  MR_Word ProcStatic_35;
  MR_Word ShroudedPredProcId_36;
  MR_Word ProcStaticConsId_37;
  MR_Word BindProcStaticVarGoal_38;
  MR_Word CodeModel_39;
  MR_Word ExcpVars_41;
  MR_Word STATE_VARIABLE_ProcInfo_1_46;
  MR_Word STATE_VARIABLE_VarTable_1_47;
  MR_Word STATE_VARIABLE_Goal_1_48;
  MR_Word STATE_VARIABLE_VarTable_2_50;
  MR_Word STATE_VARIABLE_VarTable_3_52;
  MR_Word STATE_VARIABLE_VarTable_4_54;
  MR_Word STATE_VARIABLE_DeepInfo_1_55;
  MR_Word Var_56;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_Goal_2_59;
  MR_Word STATE_VARIABLE_DeepInfo_2_60;
  MR_Word STATE_VARIABLE_VarTable_5_61;
  MR_Word STATE_VARIABLE_Goal_3_64;
  MR_Word STATE_VARIABLE_VarTable_6_65;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_VarTable_7_69;
  MR_Word STATE_VARIABLE_Goal_4_70;
  MR_Word STATE_VARIABLE_ProcInfo_2_75;
  MR_Word Var_83;
  MR_Word Entry_96;
  MR_Word Var_97;
  MR_Word Entry_99;
  MR_Word Var_100;
  MR_Word Entry_102;
  MR_Word Var_103;
  MR_Word PredInfo_108;
  MR_Word Var_25;
  MR_Word OuterPredProcId_30;
  MR_Word RecInfo_29;
  MR_Word Var_66;

  hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ModuleInfo_6, &ContainingGoalMap_10, STATE_VARIABLE_ProcInfo_0_44, &STATE_VARIABLE_ProcInfo_1_46);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_11);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_1_46, &STATE_VARIABLE_VarTable_1_47);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_1_46, &STATE_VARIABLE_Goal_1_48);
  GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_1_48, 1))));
  Var_97 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  {
    Entry_96 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_96, 0) = ((MR_Box) ((MR_String) "TopCSD"));
    MR_hl_field(0, Entry_96, 1) = ((MR_Box) (Var_97));
    MR_hl_field(0, Entry_96, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_96, &TopCSD_17, STATE_VARIABLE_VarTable_1_47, &STATE_VARIABLE_VarTable_2_50);
  Var_100 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  {
    Entry_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_99, 0) = ((MR_Box) ((MR_String) "MiddleCSD"));
    MR_hl_field(0, Entry_99, 1) = ((MR_Box) (Var_100));
    MR_hl_field(0, Entry_99, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_99, &MiddleCSD_18, STATE_VARIABLE_VarTable_2_50, &STATE_VARIABLE_VarTable_3_52);
  Var_103 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  {
    Entry_102 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_102, 0) = ((MR_Box) ((MR_String) "ProcStaticLayout"));
    MR_hl_field(0, Entry_102, 1) = ((MR_Box) (Var_103));
    MR_hl_field(0, Entry_102, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_102, &ProcStaticVar_19, STATE_VARIABLE_VarTable_3_52, &STATE_VARIABLE_VarTable_4_54);
  hlds__hlds_pred__proc_info_get_context_2_p_0(STATE_VARIABLE_ProcInfo_1_46, &Context_20);
  FileName_21 = ((MR_String) ((MR_hl_field(0, Context_20, 0))));
  LineNumber_22 = ((MR_Integer) ((MR_hl_field(0, Context_20, 1))));
  hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(STATE_VARIABLE_ProcInfo_1_46, &MaybeDeepProfInfo_23);
  if ((MaybeDeepProfInfo_23 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeRecInfo_24 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DeepProfInfo_105 = ((MR_Word) ((MR_hl_field(1, MaybeDeepProfInfo_23, 0))));

    MaybeRecInfo_24 = ((MR_Word) ((MR_hl_field(0, DeepProfInfo_105, 0))));
  }
  Var_56 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_58 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0));
  {
    STATE_VARIABLE_DeepInfo_1_55 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_1_55, 0) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_1_55, 1) = ((MR_Box) (PredProcId_7));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_1_55, 2) = ((MR_Box) (ContainingGoalMap_10));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_1_55, 3) = ((MR_Box) (MiddleCSD_18));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_1_55, 4) = ((MR_Box) (Var_56));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_1_55, 5) = ((MR_Box) (Var_58));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_1_55, 6) = ((MR_Box) (STATE_VARIABLE_VarTable_4_54));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_1_55, 7) = ((MR_Box) (FileName_21));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_1_55, 8) = ((MR_Box) (MaybeRecInfo_24));
  }
  ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(STATE_VARIABLE_Goal_1_48, &STATE_VARIABLE_Goal_2_59, &Var_25, STATE_VARIABLE_DeepInfo_1_55, &STATE_VARIABLE_DeepInfo_2_60);
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_60, 5))));
  STATE_VARIABLE_VarTable_5_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_60, 6))));
  CallSites_26 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), Var_83);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 72, &DoCoverageProfiling_27);
  switch (DoCoverageProfiling_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        CoveragePoints_28 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_VarTable_6_65 = STATE_VARIABLE_VarTable_5_61;
        STATE_VARIABLE_Goal_3_64 = STATE_VARIABLE_Goal_2_59;
      }
      break;
    case (MR_Integer) 1:
      ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_p_0(ModuleInfo_6, PredProcId_7, ContainingGoalMap_10, MaybeRecInfo_24, &CoveragePoints_28, STATE_VARIABLE_Goal_2_59, &STATE_VARIABLE_Goal_3_64, STATE_VARIABLE_VarTable_5_61, &STATE_VARIABLE_VarTable_6_65);
      break;
  }
  succeeded = (MaybeRecInfo_24 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    RecInfo_29 = ((MR_Word) ((MR_hl_field(1, MaybeRecInfo_24, 0))));
    Var_66 = ((MR_Word) ((MR_hl_field(0, RecInfo_29, 0))));
    succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_Integer) 0);
    if (succeeded)
      OuterPredProcId_30 = (MR_Word) ((MR_Word) (Var_66));
  }
  if (succeeded)
  {
    PredId_31 = ((MR_Word) ((MR_hl_field(0, OuterPredProcId_30, 0))));
    ProcId_32 = ((MR_Integer) ((MR_hl_field(0, OuterPredProcId_30, 1))));
  }
  else
  {
    PredId_31 = ((MR_Word) ((MR_hl_field(0, PredProcId_7, 0))));
    ProcId_32 = ((MR_Integer) ((MR_hl_field(0, PredProcId_7, 1))));
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 68, &UseActivationCounts_33);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_31, &PredInfo_108);
  succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_108);
  if (!(succeeded))
    succeeded = hlds__hlds_pred__pred_info_is_pseudo_exported_1_p_0(PredInfo_108);
  if (succeeded)
    IsInInterface_34 = (MR_Integer) 1;
  else
    IsInInterface_34 = (MR_Integer) 0;
  {
    ProcStatic_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcStatic_35, 0) = ((MR_Box) (FileName_21));
    MR_hl_field(0, ProcStatic_35, 1) = ((MR_Box) (LineNumber_22));
    MR_hl_field(0, ProcStatic_35, 2) = (MR_Box) ((MR_Unsigned) (IsInInterface_34));
    MR_hl_field(0, ProcStatic_35, 3) = ((MR_Box) (CallSites_26));
    MR_hl_field(0, ProcStatic_35, 4) = ((MR_Box) (CoveragePoints_28));
  }
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (PredId_31));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) (ProcId_32));
  }
  ShroudedPredProcId_36 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_68);
  {
    ProcStaticConsId_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ProcStaticConsId_37, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, ProcStaticConsId_37, 1) = ((MR_Box) (ShroudedPredProcId_36));
  }
  ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ProcStaticConsId_37, ProcStaticVar_19, &BindProcStaticVarGoal_38);
  CodeModel_39 = hlds__code_model__proc_info_interface_code_model_1_f_0(STATE_VARIABLE_ProcInfo_1_46);
  switch (CodeModel_39) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeActivationPtr_40;

        ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(UseActivationCounts_33, TopCSD_17, MiddleCSD_18, &MaybeActivationPtr_40, &ExcpVars_41, STATE_VARIABLE_VarTable_6_65, &STATE_VARIABLE_VarTable_7_69);
        ll_backend__deep_profiling__build_det_proc_body_9_p_0(ModuleInfo_6, TopCSD_17, MiddleCSD_18, ProcStaticVar_19, MaybeActivationPtr_40, GoalInfo0_16, BindProcStaticVarGoal_38, STATE_VARIABLE_Goal_3_64, &STATE_VARIABLE_Goal_4_70);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeOldActivationPtr_42;
        MR_Word NewOutermostProcDyn_43;

        ll_backend__deep_profiling__generate_outermost_proc_dyns_8_p_0(UseActivationCounts_33, TopCSD_17, MiddleCSD_18, &MaybeOldActivationPtr_42, &NewOutermostProcDyn_43, &ExcpVars_41, STATE_VARIABLE_VarTable_6_65, &STATE_VARIABLE_VarTable_7_69);
        ll_backend__deep_profiling__build_non_proc_body_10_p_0(ModuleInfo_6, TopCSD_17, MiddleCSD_18, ProcStaticVar_19, MaybeOldActivationPtr_42, NewOutermostProcDyn_43, GoalInfo0_16, BindProcStaticVarGoal_38, STATE_VARIABLE_Goal_3_64, &STATE_VARIABLE_Goal_4_70);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeActivationPtr_77;

        ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(UseActivationCounts_33, TopCSD_17, MiddleCSD_18, &MaybeActivationPtr_77, &ExcpVars_41, STATE_VARIABLE_VarTable_6_65, &STATE_VARIABLE_VarTable_7_69);
        ll_backend__deep_profiling__build_semi_proc_body_9_p_0(ModuleInfo_6, TopCSD_17, MiddleCSD_18, ProcStaticVar_19, MaybeActivationPtr_77, GoalInfo0_16, BindProcStaticVarGoal_38, STATE_VARIABLE_Goal_3_64, &STATE_VARIABLE_Goal_4_70);
      }
      break;
  }
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_7_69, STATE_VARIABLE_ProcInfo_1_46, &STATE_VARIABLE_ProcInfo_2_75);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_4_70, STATE_VARIABLE_ProcInfo_2_75, STATE_VARIABLE_ProcInfo_45);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DeepLayoutInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ProcStatic_35));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExcpVars_41));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_outermost_proc_dyns_8_p_0(
  MR_Word UseActivationCounts_9,
  MR_Word TopCSD_10,
  MR_Word MiddleCSD_11,
  MR_Word * MaybeOldActivationPtr_12,
  MR_Word * NewOutermostProcDyn_13,
  MR_Word * ExcpVars_14,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18)
{
  MR_Word STATE_VARIABLE_VarTable_1_20;
  MR_Word Entry_25;
  MR_Word Var_26;

  switch (UseActivationCounts_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OldOutermostProcDyn0_16;
        MR_Word Entry_22;
        MR_Word Var_23;

        Var_23 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        {
          Entry_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_22, 0) = ((MR_Box) ((MR_String) "OldOutermost"));
          MR_hl_field(0, Entry_22, 1) = ((MR_Box) (Var_23));
          MR_hl_field(0, Entry_22, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(Entry_22, &OldOutermostProcDyn0_16, STATE_VARIABLE_VarTable_0_17, &STATE_VARIABLE_VarTable_1_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeOldActivationPtr_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (OldOutermostProcDyn0_16));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *MaybeOldActivationPtr_12 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_VarTable_1_20 = STATE_VARIABLE_VarTable_0_17;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ExcpVars_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TopCSD_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (MiddleCSD_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (*MaybeOldActivationPtr_12));
  }
  Var_26 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  {
    Entry_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_25, 0) = ((MR_Box) ((MR_String) "NewOutermost"));
    MR_hl_field(0, Entry_25, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, Entry_25, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_25, NewOutermostProcDyn_13, STATE_VARIABLE_VarTable_1_20, STATE_VARIABLE_VarTable_18);
}

static void MR_CALL 
ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(
  MR_Word UseActivationCounts_8,
  MR_Word TopCSD_9,
  MR_Word MiddleCSD_10,
  MR_Word * MaybeActivationPtr_11,
  MR_Word * ExcpVars_12,
  MR_Word STATE_VARIABLE_VarTable_0_15,
  MR_Word * STATE_VARIABLE_VarTable_16)
{
  switch (UseActivationCounts_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ActivationPtr0_14;
        MR_Word Entry_18;
        MR_Word Var_19;

        Var_19 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        {
          Entry_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_18, 0) = ((MR_Box) ((MR_String) "ActivationPtr"));
          MR_hl_field(0, Entry_18, 1) = ((MR_Box) (Var_19));
          MR_hl_field(0, Entry_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(Entry_18, &ActivationPtr0_14, STATE_VARIABLE_VarTable_0_15, STATE_VARIABLE_VarTable_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeActivationPtr_11 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ActivationPtr0_14));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *MaybeActivationPtr_11 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarTable_16 = STATE_VARIABLE_VarTable_0_15;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ExcpVars_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TopCSD_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (MiddleCSD_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (*MaybeActivationPtr_11));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeepInfo_0_4,
  MR_Word * STATE_VARIABLE_DeepInfo_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Integer) 0;
    *STATE_VARIABLE_DeepInfo_5 = STATE_VARIABLE_DeepInfo_0_4;
  }
  else
  {
    MR_Word Case0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_11;
    MR_Word Cases_12;
    MR_Word MainConsId_15 = ((MR_Word) ((MR_hl_field(0, Case0_9, 0))));
    MR_Word OtherConsIds_16 = ((MR_Word) ((MR_hl_field(0, Case0_9, 1))));
    MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(0, Case0_9, 2))));
    MR_Word Goal_18;
    MR_Word AddedImpurityFirst_19;
    MR_Word AddedImpurityLater_20;
    MR_Word STATE_VARIABLE_DeepInfo_1_23;

    ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Goal0_17, &Goal_18, &AddedImpurityFirst_19, STATE_VARIABLE_DeepInfo_0_4, &STATE_VARIABLE_DeepInfo_1_23);
    {
      Case_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_11, 0) = ((MR_Box) (MainConsId_15));
      MR_hl_field(0, Case_11, 1) = ((MR_Box) (OtherConsIds_16));
      MR_hl_field(0, Case_11, 2) = ((MR_Box) (Goal_18));
    }
    ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(Cases0_10, &Cases_12, &AddedImpurityLater_20, STATE_VARIABLE_DeepInfo_1_23, STATE_VARIABLE_DeepInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_12));
    }
    mercury__bool__or_3_p_0(AddedImpurityFirst_19, AddedImpurityLater_20, HeadVar__3_3);
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeepInfo_0_4,
  MR_Word * STATE_VARIABLE_DeepInfo_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Integer) 0;
    *STATE_VARIABLE_DeepInfo_5 = STATE_VARIABLE_DeepInfo_0_4;
  }
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;
    MR_Word AddedImpurityFirst_15;
    MR_Word AddedImpurityLater_16;
    MR_Word STATE_VARIABLE_DeepInfo_1_19;

    ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Goal0_9, &Goal_11, &AddedImpurityFirst_15, STATE_VARIABLE_DeepInfo_0_4, &STATE_VARIABLE_DeepInfo_1_19);
    ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(Goals0_10, &Goals_12, &AddedImpurityLater_16, STATE_VARIABLE_DeepInfo_1_19, STATE_VARIABLE_DeepInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_12));
    }
    mercury__bool__or_3_p_0(AddedImpurityFirst_15, AddedImpurityLater_16, HeadVar__3_3);
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(
  MR_Word ConjType_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_DeepInfo_0_5,
  MR_Word * STATE_VARIABLE_DeepInfo_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_DeepInfo_6 = STATE_VARIABLE_DeepInfo_0_5;
  }
  else
  {
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Goal_17;
    MR_Word AddedImpurityFirst_18;
    MR_Word TailGoals_19;
    MR_Word AddedImpurityLater_20;
    MR_Word GoalExpr_21;
    MR_Word STATE_VARIABLE_DeepInfo_1_26;
    MR_Word Conjuncts_23;
    MR_Word Var_28;

    ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Goal0_12, &Goal_17, &AddedImpurityFirst_18, STATE_VARIABLE_DeepInfo_0_5, &STATE_VARIABLE_DeepInfo_1_26);
    ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(ConjType_1, Goals0_13, &TailGoals_19, &AddedImpurityLater_20, STATE_VARIABLE_DeepInfo_1_26, STATE_VARIABLE_DeepInfo_6);
    GoalExpr_21 = ((MR_Word) ((MR_hl_field(0, Goal_17, 0))));
    succeeded = (ConjType_1 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) GoalExpr_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_21, 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_28 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_21, 1))) & (MR_Integer) 1);
        Conjuncts_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_21, 2))));
        succeeded = (Var_28 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts_23, TailGoals_19);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals_19));
      }
    mercury__bool__or_3_p_0(AddedImpurityFirst_18, AddedImpurityLater_20, HeadVar__4_4);
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_4;

  ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Goal_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_4));
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_4;

  ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Goal_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Goal_4));
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word * AddedImpurity_8,
  MR_Word STATE_VARIABLE_DeepInfo_0_83,
  MR_Word * STATE_VARIABLE_DeepInfo_84)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_6, 0))));
  MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(0, Goal0_6, 1))));
  MR_Word GoalInfo1_12;
  MR_Word Goal1_13;

  ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 1, GoalInfo0_11, &GoalInfo1_12);
  {
    Goal1_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal1_13, 0) = ((MR_Box) (GoalExpr0_10));
    MR_hl_field(0, Goal1_13, 1) = ((MR_Box) (GoalInfo1_12));
  }
  switch (MR_tag((MR_Word) GoalExpr0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_58 = (MR_Word) ((MR_Word) (GoalExpr0_10));
        MR_Word SubGoal_59;
        MR_Word GoalInfo_113;
        MR_Word GoalExpr_114;

        ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(SubGoal0_58, &SubGoal_59, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_83, STATE_VARIABLE_DeepInfo_84);
        ll_backend__deep_profiling__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_113);
        GoalExpr_114 = (MR_Word) ((MR_Word) (SubGoal_59));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_7 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_114));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_113));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *Goal_7 = Goal1_13;
        *AddedImpurity_8 = (MR_Integer) 0;
        *STATE_VARIABLE_DeepInfo_84 = STATE_VARIABLE_DeepInfo_0_83;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinState_17 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_10, 3))) & (MR_Integer) 1);

        switch (BuiltinState_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Goal_7 = Goal1_13;
              *AddedImpurity_8 = (MR_Integer) 0;
              *STATE_VARIABLE_DeepInfo_84 = STATE_VARIABLE_DeepInfo_0_83;
            }
            break;
          case (MR_Integer) 1:
            {
              ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(Goal1_13, Goal_7, STATE_VARIABLE_DeepInfo_0_83, STATE_VARIABLE_DeepInfo_84);
              *AddedImpurity_8 = (MR_Integer) 1;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));

            switch (MR_tag((MR_Word) GenericCall_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(Goal1_13, Goal_7, STATE_VARIABLE_DeepInfo_0_83, STATE_VARIABLE_DeepInfo_84);
                  *AddedImpurity_8 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  *Goal_7 = Goal1_13;
                  *AddedImpurity_8 = (MR_Integer) 0;
                  *STATE_VARIABLE_DeepInfo_84 = STATE_VARIABLE_DeepInfo_0_83;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attrs_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word MayCallMercury_43;

            MayCallMercury_43 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attrs_36);
            switch (MayCallMercury_43) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  ll_backend__deep_profiling__deep_prof_wrap_foreign_code_4_p_0(Goal1_13, Goal_7, STATE_VARIABLE_DeepInfo_0_83, STATE_VARIABLE_DeepInfo_84);
                  *AddedImpurity_8 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 1:
                {
                  *Goal_7 = Goal1_13;
                  *AddedImpurity_8 = (MR_Integer) 0;
                  *STATE_VARIABLE_DeepInfo_84 = STATE_VARIABLE_DeepInfo_0_83;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_49 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 1))) & (MR_Integer) 1);
            MR_Word Goals0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Goals_51;
            MR_Word GoalInfo_52;
            MR_Word GoalExpr_53;

            ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(ConjType_49, Goals0_50, &Goals_51, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_83, STATE_VARIABLE_DeepInfo_84);
            ll_backend__deep_profiling__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_52);
            {
              GoalExpr_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_53, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_53, 1) = (MR_Box) ((MR_Unsigned) (ConjType_49));
              MR_hl_field(3, GoalExpr_53, 2) = ((MR_Box) (Goals_51));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_53));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_52));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_107 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Goals_108;
            MR_Word GoalInfo_109;
            MR_Word GoalExpr_110;

            ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(Goals0_107, &Goals_108, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_83, STATE_VARIABLE_DeepInfo_84);
            ll_backend__deep_profiling__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_109);
            {
              GoalExpr_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_110, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_110, 1) = ((MR_Box) (Goals_108));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_110));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_109));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word CanFail_55 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 2))) & (MR_Integer) 1);
            MR_Word Cases0_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Cases_57;
            MR_Word GoalInfo_111;
            MR_Word GoalExpr_112;

            ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(Cases0_56, &Cases_57, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_83, STATE_VARIABLE_DeepInfo_84);
            ll_backend__deep_profiling__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_111);
            {
              GoalExpr_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_112, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_112, 1) = ((MR_Box) (Var_54));
              MR_hl_field(3, GoalExpr_112, 2) = (MR_Box) ((MR_Unsigned) (CanFail_55));
              MR_hl_field(3, GoalExpr_112, 3) = ((MR_Box) (Cases_57));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_112));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_111));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word InnerInfo_72;
            MR_Word OuterDetism_73;
            MR_Word InnerDetism_74;
            MR_Word SubGoal0_118 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));

            InnerInfo_72 = ((MR_Word) ((MR_hl_field(0, SubGoal0_118, 1))));
            OuterDetism_73 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo1_12);
            InnerDetism_74 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(InnerInfo_72);
            succeeded = (InnerDetism_74 == OuterDetism_73);
            if (succeeded)
            {
              MR_Word Var_99;
              MR_Word GoalInfo_117;
              MR_Word SubGoal_119;
              MR_Word FGT_79;

              succeeded = ((((MR_tag((MR_Word) Reason0_70)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason0_70, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_79 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_70, 2))) & (MR_Integer) 3);
                switch (FGT_79) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
              {
                hlds__goal_transform__transform_all_goals_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_1[8]), SubGoal0_118, &SubGoal_119);
                *AddedImpurity_8 = (MR_Integer) 0;
                *STATE_VARIABLE_DeepInfo_84 = STATE_VARIABLE_DeepInfo_0_83;
              }
              else
                ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(SubGoal0_118, &SubGoal_119, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_83, STATE_VARIABLE_DeepInfo_84);
              ll_backend__deep_profiling__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_117);
              {
                Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Var_99, 1) = ((MR_Box) (Reason0_70));
                MR_hl_field(3, Var_99, 2) = ((MR_Box) (SubGoal_119));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_7 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_99));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_117));
              }
            }
            else
            {
              succeeded = ((((MR_tag((MR_Word) Reason0_70)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason0_70, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                MR_Word Var_135;
                MR_Word GoalInfo_143;
                MR_Word SubGoal_144;

                ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(SubGoal0_118, &SubGoal_144, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_83, STATE_VARIABLE_DeepInfo_84);
                ll_backend__deep_profiling__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_143);
                {
                  Var_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_135, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, Var_135, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__deep_profiling_scalar_common_2[8])));
                  MR_hl_field(3, Var_135, 2) = ((MR_Box) (SubGoal_144));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_7 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_135));
                  MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_143));
                }
              }
              else
              {
                MR_Word InnerGoalInfo_80;
                MR_Word InnerGoal_81;
                MR_Word Var_101;
                MR_Word Var_102;
                MR_Word GoalInfo_158;
                MR_Word SubGoal_159;
                MR_Word FGT_148;

                succeeded = ((((MR_tag((MR_Word) Reason0_70)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason0_70, 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_148 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_70, 2))) & (MR_Integer) 3);
                  switch (FGT_148) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                if (succeeded)
                {
                  hlds__goal_transform__transform_all_goals_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_1[9]), SubGoal0_118, &SubGoal_159);
                  *AddedImpurity_8 = (MR_Integer) 0;
                  *STATE_VARIABLE_DeepInfo_84 = STATE_VARIABLE_DeepInfo_0_83;
                }
                else
                  ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(SubGoal0_118, &SubGoal_159, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_83, STATE_VARIABLE_DeepInfo_84);
                ll_backend__deep_profiling__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_158);
                ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, GoalInfo_158, &InnerGoalInfo_80);
                {
                  Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, Var_101, 1) = ((MR_Box) (Reason0_70));
                  MR_hl_field(3, Var_101, 2) = ((MR_Box) (SubGoal_159));
                }
                {
                  InnerGoal_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, InnerGoal_81, 0) = ((MR_Box) (Var_101));
                  MR_hl_field(0, InnerGoal_81, 1) = ((MR_Box) (InnerGoalInfo_80));
                }
                {
                  Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, Var_102, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__deep_profiling_scalar_common_2[8])));
                  MR_hl_field(3, Var_102, 2) = ((MR_Box) (InnerGoal_81));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_7 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_102));
                  MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_158));
                }
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word IVars_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Cond0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Then0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Else0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 4))));
            MR_Word Cond_64;
            MR_Word AddedImpurityC_65;
            MR_Word Then_66;
            MR_Word AddedImpurityT_67;
            MR_Word Else_68;
            MR_Word AddedImpurityE_69;
            MR_Word STATE_VARIABLE_DeepInfo_8_93;
            MR_Word STATE_VARIABLE_DeepInfo_9_94;
            MR_Word GoalInfo_115;
            MR_Word GoalExpr_116;

            ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Cond0_61, &Cond_64, &AddedImpurityC_65, STATE_VARIABLE_DeepInfo_0_83, &STATE_VARIABLE_DeepInfo_8_93);
            ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Then0_62, &Then_66, &AddedImpurityT_67, STATE_VARIABLE_DeepInfo_8_93, &STATE_VARIABLE_DeepInfo_9_94);
            ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Else0_63, &Else_68, &AddedImpurityE_69, STATE_VARIABLE_DeepInfo_9_94, STATE_VARIABLE_DeepInfo_84);
            succeeded = (AddedImpurityC_65 == (MR_Integer) 1);
            if (!(succeeded))
            {
              succeeded = (AddedImpurityT_67 == (MR_Integer) 1);
              if (!(succeeded))
                succeeded = (AddedImpurityE_69 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_Word Purity_124;

              *AddedImpurity_8 = (MR_Integer) 1;
              Purity_124 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo1_12);
              switch (Purity_124) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  GoalInfo_115 = GoalInfo1_12;
                  break;
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_GoalInfo_1_126;

                    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo1_12, &STATE_VARIABLE_GoalInfo_1_126);
                    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 3, STATE_VARIABLE_GoalInfo_1_126, &GoalInfo_115);
                  }
                  break;
              }
            }
            else
            {
              *AddedImpurity_8 = (MR_Integer) 0;
              GoalInfo_115 = GoalInfo1_12;
            }
            {
              GoalExpr_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_116, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_116, 1) = ((MR_Box) (IVars_60));
              MR_hl_field(3, GoalExpr_116, 2) = ((MR_Box) (Cond_64));
              MR_hl_field(3, GoalExpr_116, 3) = ((MR_Box) (Then_66));
              MR_hl_field(3, GoalExpr_116, 4) = ((MR_Box) (Else_68));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_116));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_115));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.deep_prof_transform_goal\'/5", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_foreign_code_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_DeepInfo_0_28,
  MR_Word * STATE_VARIABLE_DeepInfo_29)
{
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));
  MR_Word GoalId_10;
  MR_Word ContainingGoalMap_11;
  MR_Word GoalPath_12;
  MR_Word SiteNumCounter0_13;
  MR_Integer SiteNum_14;
  MR_Word SiteNumCounter_15;
  MR_Word SiteNumVar_16;
  MR_Word VarTable_17;
  MR_Word SiteNumVarGoal_18;
  MR_Word ModuleInfo_19;
  MR_Word PrepareGoal_20;
  MR_String FileName0_21;
  MR_Integer LineNumber_22;
  MR_String FileName_23;
  MR_Word CallSite_24;
  MR_Word GoalInfo1_25;
  MR_Word GoalInfo_26;
  MR_Word GoalExpr_27;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_DeepInfo_2_47;
  MR_Word Var_49;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_88;
  MR_String Var_90;
  MR_Word Var_91;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_115;
  MR_String Var_116;
  MR_Word Var_117;

  GoalId_10 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_9);
  ContainingGoalMap_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_28, 2))));
  GoalPath_12 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_11, GoalId_10);
  SiteNumCounter0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_28, 4))));
  mercury__counter__allocate_3_p_0(&SiteNum_14, SiteNumCounter0_13, &SiteNumCounter_15);
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_28, 6))));
  ll_backend__deep_profiling__generate_var_int_4_p_0((MR_String) "SiteNum", &SiteNumVar_16, Var_31, &VarTable_17);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (SiteNum_14));
  }
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (Var_33));
  }
  ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(Var_32, SiteNumVar_16, &SiteNumVarGoal_18);
  ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_28, 0))));
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (SiteNumVar_16));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_19, (MR_String) "prepare_for_callback", (MR_Integer) 1, Var_36, (MR_Word) ((MR_Unsigned) 0U), &PrepareGoal_20);
  Var_39 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
  FileName0_21 = ((MR_String) ((MR_hl_field(0, Var_39, 0))));
  LineNumber_22 = ((MR_Integer) ((MR_hl_field(0, Var_39, 1))));
  ll_backend__deep_profiling__compress_filename_3_p_0(STATE_VARIABLE_DeepInfo_0_28, FileName0_21, &FileName_23);
  {
    CallSite_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CallSite_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, CallSite_24, 1) = ((MR_Box) (FileName_23));
    MR_hl_field(3, CallSite_24, 2) = ((MR_Box) (LineNumber_22));
    MR_hl_field(3, CallSite_24, 3) = ((MR_Box) (GoalPath_12));
  }
  ll_backend__deep_profiling__make_impure_2_p_0(GoalInfo0_9, &GoalInfo1_25);
  ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, GoalInfo1_25, &GoalInfo_26);
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Goal0_5));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (PrepareGoal_20));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (SiteNumVarGoal_18));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
  }
  {
    GoalExpr_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_27, 2) = ((MR_Box) (Var_42));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_26));
  }
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_28, 0))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_28, 1))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_28, 2))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_28, 3))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_28, 5))));
  Var_90 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_28, 7))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_28, 8))));
  {
    STATE_VARIABLE_DeepInfo_2_47 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 0) = ((MR_Box) (Var_83));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 1) = ((MR_Box) (Var_84));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 2) = ((MR_Box) (Var_85));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 3) = ((MR_Box) (Var_86));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 4) = ((MR_Box) (SiteNumCounter_15));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 5) = ((MR_Box) (Var_88));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 6) = ((MR_Box) (VarTable_17));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 7) = ((MR_Box) (Var_90));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 8) = ((MR_Box) (Var_91));
  }
  Var_49 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), Var_88, ((MR_Box) (CallSite_24)));
  Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 0))));
  Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 1))));
  Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 2))));
  Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 3))));
  Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 4))));
  Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 6))));
  Var_116 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 7))));
  Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_47, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_DeepInfo_29 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_109));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_110));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_111));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_112));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_113));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_115));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_116));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_117));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_DeepInfo_0_96,
  MR_Word * STATE_VARIABLE_DeepInfo_97)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));
  MR_Word GoalId_10;
  MR_Word ContainingGoalMap_11;
  MR_Word GoalPath_12;
  MR_Word ModuleInfo_13;
  MR_Word GoalFeatures_14;
  MR_Word GoalInfo1_15;
  MR_Word GoalInfo2_16;
  MR_Word MdprofInstGoalInfo_17;
  MR_Word Goal1_18;
  MR_Word SiteNumCounter0_19;
  MR_Integer SiteNum_20;
  MR_Word SiteNumCounter_21;
  MR_Word VarTable0_22;
  MR_Word SiteNumVar_23;
  MR_Word VarTable1_24;
  MR_Word SiteNumVarGoal_25;
  MR_String FileName0_26;
  MR_Integer LineNumber_27;
  MR_String FileName_28;
  MR_Word CallKind_29;
  MR_Word PrepareGoal_31;
  MR_Word CallSite_43;
  MR_Word Goal2_44;
  MR_Word GoalExpr_84;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word STATE_VARIABLE_DeepInfo_2_104;
  MR_Word Var_105;
  MR_Word STATE_VARIABLE_DeepInfo_4_152;
  MR_Word STATE_VARIABLE_DeepInfo_5_153;
  MR_Word Var_154;
  MR_Word Var_155;
  MR_Word Var_239;
  MR_Word Var_240;
  MR_Word Var_241;
  MR_Word Var_242;
  MR_Word Var_244;
  MR_String Var_246;
  MR_Word Var_247;
  MR_Word Var_308;
  MR_Word Var_309;
  MR_Word Var_310;
  MR_Word Var_311;
  MR_Word Var_312;
  MR_Word Var_314;
  MR_String Var_315;
  MR_Word Var_316;
  MR_Word Var_320;
  MR_Word Var_325;
  MR_Word RecInfo_70;
  MR_Word Var_157;
  MR_Word Var_158;

  GoalId_10 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_9);
  ContainingGoalMap_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_96, 2))));
  GoalPath_12 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_11, GoalId_10);
  ModuleInfo_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_96, 0))));
  GoalFeatures_14 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo0_9);
  hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 10, GoalInfo0_9, &GoalInfo1_15);
  ll_backend__deep_profiling__make_impure_2_p_0(GoalInfo1_15, &GoalInfo2_16);
  ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, GoalInfo2_16, &MdprofInstGoalInfo_17);
  {
    Goal1_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal1_18, 0) = ((MR_Box) (GoalExpr0_8));
    MR_hl_field(0, Goal1_18, 1) = ((MR_Box) (GoalInfo2_16));
  }
  SiteNumCounter0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_96, 4))));
  mercury__counter__allocate_3_p_0(&SiteNum_20, SiteNumCounter0_19, &SiteNumCounter_21);
  VarTable0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_96, 6))));
  ll_backend__deep_profiling__generate_var_int_4_p_0((MR_String) "SiteNum", &SiteNumVar_23, VarTable0_22, &VarTable1_24);
  {
    Var_102 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_102, 0) = ((MR_Box) (SiteNum_20));
  }
  {
    Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_101, 1) = ((MR_Box) (Var_102));
  }
  ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(Var_101, SiteNumVar_23, &SiteNumVarGoal_25);
  Var_239 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_96, 0))));
  Var_240 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_96, 1))));
  Var_241 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_96, 2))));
  Var_242 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_96, 3))));
  Var_244 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_96, 5))));
  Var_246 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_96, 7))));
  Var_247 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_96, 8))));
  {
    STATE_VARIABLE_DeepInfo_2_104 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 0) = ((MR_Box) (Var_239));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 1) = ((MR_Box) (Var_240));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 2) = ((MR_Box) (Var_241));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 3) = ((MR_Box) (Var_242));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 4) = ((MR_Box) (SiteNumCounter_21));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 5) = ((MR_Box) (Var_244));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 6) = ((MR_Box) (VarTable1_24));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 7) = ((MR_Box) (Var_246));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 8) = ((MR_Box) (Var_247));
  }
  Var_105 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
  FileName0_26 = ((MR_String) ((MR_hl_field(0, Var_105, 0))));
  LineNumber_27 = ((MR_Integer) ((MR_hl_field(0, Var_105, 1))));
  ll_backend__deep_profiling__compress_filename_3_p_0(STATE_VARIABLE_DeepInfo_2_104, FileName0_26, &FileName_28);
  CallKind_29 = ll_backend__deep_profiling__classify_call_2_f_0(ModuleInfo_13, GoalExpr0_8);
  switch (MR_tag((MR_Word) CallKind_29)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredProcId_30 = (MR_Word) ((MR_Word) (CallKind_29));
        MR_Word PredId_32;
        MR_Integer ProcId_33;
        MR_String TypeSubst_34;
        MR_Word MaybeRecInfo_35;
        MR_Word RttiProcLabel_40;
        MR_Word OuterPredProcId_37;
        MR_Word RecInfo1_36;
        MR_Word Var_117;
        MR_Word Var_343;

        succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), ((MR_Box) ((MR_Integer) 10)), GoalFeatures_14);
        if (succeeded)
        {
          MR_Word Var_109;

          {
            Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_109, 0) = ((MR_Box) (SiteNumVar_23));
            MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_13, (MR_String) "prepare_for_tail_call", (MR_Integer) 1, Var_109, (MR_Word) ((MR_Unsigned) 0U), &PrepareGoal_31);
        }
        else
        {
          MR_Word Var_114;

          {
            Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_114, 0) = ((MR_Box) (SiteNumVar_23));
            MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_13, (MR_String) "prepare_for_normal_call", (MR_Integer) 1, Var_114, (MR_Word) ((MR_Unsigned) 0U), &PrepareGoal_31);
        }
        PredId_32 = ((MR_Word) ((MR_hl_field(0, PredProcId_30, 0))));
        ProcId_33 = ((MR_Integer) ((MR_hl_field(0, PredProcId_30, 1))));
        TypeSubst_34 = ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_f_0();
        MaybeRecInfo_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 8))));
        succeeded = (MaybeRecInfo_35 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          RecInfo1_36 = ((MR_Word) ((MR_hl_field(1, MaybeRecInfo_35, 0))));
          Var_117 = ((MR_Word) ((MR_hl_field(0, RecInfo1_36, 0))));
          succeeded = ((MR_tag((MR_Word) Var_117)) == (MR_Integer) 0);
          if (succeeded)
          {
            OuterPredProcId_37 = (MR_Word) ((MR_Word) (Var_117));
            Var_343 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 1))));
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PredProcId_30, Var_343);
          }
        }
        if (succeeded)
        {
          MR_Word OuterPredId_38 = ((MR_Word) ((MR_hl_field(0, OuterPredProcId_37, 0))));
          MR_Integer OuterProcId_39 = ((MR_Integer) ((MR_hl_field(0, OuterPredProcId_37, 1))));

          RttiProcLabel_40 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_13, OuterPredId_38, OuterProcId_39);
        }
        else
        {
          MR_Word RecInfo2_41;
          MR_Word InnerPredProcId_42;
          MR_Word Var_118;

          succeeded = (MaybeRecInfo_35 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RecInfo2_41 = ((MR_Word) ((MR_hl_field(1, MaybeRecInfo_35, 0))));
            Var_118 = ((MR_Word) ((MR_hl_field(0, RecInfo2_41, 0))));
            succeeded = ((MR_tag((MR_Word) Var_118)) == (MR_Integer) 1);
            if (succeeded)
            {
              InnerPredProcId_42 = (MR_Word) (MR_body((MR_Word) (Var_118), (MR_Integer) 1));
              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PredProcId_30, InnerPredProcId_42);
            }
          }
          if (succeeded)
          {
            MR_Word OuterPredProcId_200 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 1))));
            MR_Word OuterPredId_201 = ((MR_Word) ((MR_hl_field(0, OuterPredProcId_200, 0))));
            MR_Integer OuterProcId_202 = ((MR_Integer) ((MR_hl_field(0, OuterPredProcId_200, 1))));

            RttiProcLabel_40 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_13, OuterPredId_201, OuterProcId_202);
          }
          else
            RttiProcLabel_40 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_13, PredId_32, ProcId_33);
        }
        {
          CallSite_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CallSite_43, 0) = ((MR_Box) (RttiProcLabel_40));
          MR_hl_field(0, CallSite_43, 1) = ((MR_Box) (TypeSubst_34));
          MR_hl_field(0, CallSite_43, 2) = ((MR_Box) (FileName_28));
          MR_hl_field(0, CallSite_43, 3) = ((MR_Box) (LineNumber_27));
          MR_hl_field(0, CallSite_43, 4) = ((MR_Box) (GoalPath_12));
        }
        Goal2_44 = Goal1_18;
        STATE_VARIABLE_DeepInfo_4_152 = STATE_VARIABLE_DeepInfo_2_104;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfoVar_46 = ((MR_Word) ((MR_hl_field(1, CallKind_29, 1))));
        MR_Word Var_121;
        MR_Word Var_123;

        {
          Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_123, 0) = ((MR_Box) (TypeInfoVar_46));
          MR_hl_field(1, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_121, 0) = ((MR_Box) (SiteNumVar_23));
          MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_123));
        }
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_13, (MR_String) "prepare_for_special_call", (MR_Integer) 2, Var_121, (MR_Word) ((MR_Unsigned) 0U), &PrepareGoal_31);
        {
          CallSite_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CallSite_43, 0) = ((MR_Box) (FileName_28));
          MR_hl_field(1, CallSite_43, 1) = ((MR_Box) (LineNumber_27));
          MR_hl_field(1, CallSite_43, 2) = ((MR_Box) (GoalPath_12));
        }
        Goal2_44 = Goal1_18;
        STATE_VARIABLE_DeepInfo_4_152 = STATE_VARIABLE_DeepInfo_2_104;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Generic_47 = ((MR_Word) ((MR_hl_field(2, CallKind_29, 0))));
        MR_Word GoalCodeModel_67;
        MR_Word Globals_68;
        MR_Word UseZeroing_69;
        MR_Word STATE_VARIABLE_DeepInfo_3_133;

        switch (MR_tag((MR_Word) Generic_47)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ClosureVar_48 = ((MR_Word) ((MR_hl_field(0, Generic_47, 0))));
              MR_Word Var_127;
              MR_Word Var_129;

              {
                Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_129, 0) = ((MR_Box) (ClosureVar_48));
                MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_127, 0) = ((MR_Box) (SiteNumVar_23));
                MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_129));
              }
              ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_13, (MR_String) "prepare_for_ho_call", (MR_Integer) 2, Var_127, (MR_Word) ((MR_Unsigned) 0U), &PrepareGoal_31);
              {
                CallSite_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, CallSite_43, 0) = ((MR_Box) (FileName_28));
                MR_hl_field(2, CallSite_43, 1) = ((MR_Box) (LineNumber_27));
                MR_hl_field(2, CallSite_43, 2) = ((MR_Box) (GoalPath_12));
              }
              STATE_VARIABLE_DeepInfo_3_133 = STATE_VARIABLE_DeepInfo_2_104;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeClassInfoVar_53 = ((MR_Word) ((MR_hl_field(1, Generic_47, 0))));
              MR_Integer MethodNum_54;
              MR_Word VarTable2_57;
              MR_Word MethodNumVar_58;
              MR_Word VarTable3_59;
              MR_Word MethodNumVarGoal_60;
              MR_Word PrepareCallGoal_61;
              MR_Word PrepareCallGoalInfo_63;
              MR_Word PrepareGoalExpr_64;
              MR_Word Var_131 = ((MR_Word) ((MR_hl_field(1, Generic_47, 1))));
              MR_Word Var_134;
              MR_Word Var_135;
              MR_Word Var_138;
              MR_Word Var_140;
              MR_Word Var_141;
              MR_Word Var_144;
              MR_Word Var_145;
              MR_Word Var_291;
              MR_Word Var_292;
              MR_Word Var_293;
              MR_Word Var_294;
              MR_Word Var_295;
              MR_Word Var_296;
              MR_String Var_298;
              MR_Word Var_299;

              MethodNum_54 = (MR_Integer) (Var_131);
              VarTable2_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 6))));
              ll_backend__deep_profiling__generate_var_int_4_p_0((MR_String) "MethodNum", &MethodNumVar_58, VarTable2_57, &VarTable3_59);
              Var_291 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 0))));
              Var_292 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 1))));
              Var_293 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 2))));
              Var_294 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 3))));
              Var_295 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 4))));
              Var_296 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 5))));
              Var_298 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 7))));
              Var_299 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_2_104, 8))));
              {
                STATE_VARIABLE_DeepInfo_3_133 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_DeepInfo_3_133, 0) = ((MR_Box) (Var_291));
                MR_hl_field(0, STATE_VARIABLE_DeepInfo_3_133, 1) = ((MR_Box) (Var_292));
                MR_hl_field(0, STATE_VARIABLE_DeepInfo_3_133, 2) = ((MR_Box) (Var_293));
                MR_hl_field(0, STATE_VARIABLE_DeepInfo_3_133, 3) = ((MR_Box) (Var_294));
                MR_hl_field(0, STATE_VARIABLE_DeepInfo_3_133, 4) = ((MR_Box) (Var_295));
                MR_hl_field(0, STATE_VARIABLE_DeepInfo_3_133, 5) = ((MR_Box) (Var_296));
                MR_hl_field(0, STATE_VARIABLE_DeepInfo_3_133, 6) = ((MR_Box) (VarTable3_59));
                MR_hl_field(0, STATE_VARIABLE_DeepInfo_3_133, 7) = ((MR_Box) (Var_298));
                MR_hl_field(0, STATE_VARIABLE_DeepInfo_3_133, 8) = ((MR_Box) (Var_299));
              }
              {
                Var_135 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_135, 0) = ((MR_Box) (MethodNum_54));
              }
              {
                Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_134, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Var_134, 1) = ((MR_Box) (Var_135));
              }
              ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(Var_134, MethodNumVar_58, &MethodNumVarGoal_60);
              {
                Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_141, 0) = ((MR_Box) (MethodNumVar_58));
                MR_hl_field(1, Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_140, 0) = ((MR_Box) (TypeClassInfoVar_53));
                MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_141));
              }
              {
                Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_138, 0) = ((MR_Box) (SiteNumVar_23));
                MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_140));
              }
              ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_13, (MR_String) "prepare_for_method_call", (MR_Integer) 3, Var_138, (MR_Word) ((MR_Unsigned) 0U), &PrepareCallGoal_61);
              PrepareCallGoalInfo_63 = ((MR_Word) ((MR_hl_field(0, PrepareCallGoal_61, 1))));
              {
                Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_145, 0) = ((MR_Box) (PrepareCallGoal_61));
                MR_hl_field(1, Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_144, 0) = ((MR_Box) (MethodNumVarGoal_60));
                MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_145));
              }
              {
                PrepareGoalExpr_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, PrepareGoalExpr_64, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, PrepareGoalExpr_64, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(3, PrepareGoalExpr_64, 2) = ((MR_Box) (Var_144));
              }
              {
                PrepareGoal_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PrepareGoal_31, 0) = ((MR_Box) (PrepareGoalExpr_64));
                MR_hl_field(0, PrepareGoal_31, 1) = ((MR_Box) (PrepareCallGoalInfo_63));
              }
              {
                CallSite_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, CallSite_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, CallSite_43, 1) = ((MR_Box) (FileName_28));
                MR_hl_field(3, CallSite_43, 2) = ((MR_Box) (LineNumber_27));
                MR_hl_field(3, CallSite_43, 3) = ((MR_Box) (GoalPath_12));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.deep_prof_wrap_call\'/4", (MR_String) "event_call");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.deep_prof_wrap_call\'/4", (MR_String) "cast");
              return;
            }
            break;
        }
        GoalCodeModel_67 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_9);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_13, &Globals_68);
        libs__globals__lookup_bool_option_3_p_0(Globals_68, (MR_Integer) 69, &UseZeroing_69);
        switch (UseZeroing_69) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Goal2_44 = Goal1_18;
              STATE_VARIABLE_DeepInfo_4_152 = STATE_VARIABLE_DeepInfo_3_133;
            }
            break;
          case (MR_Integer) 1:
            ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_p_0(Globals_68, GoalCodeModel_67, Goal1_18, &Goal2_44, STATE_VARIABLE_DeepInfo_3_133, &STATE_VARIABLE_DeepInfo_4_152);
            break;
        }
      }
      break;
  }
  Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_4_152, 5))));
  Var_154 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), Var_155, ((MR_Box) (CallSite_43)));
  Var_308 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_4_152, 0))));
  Var_309 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_4_152, 1))));
  Var_310 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_4_152, 2))));
  Var_311 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_4_152, 3))));
  Var_312 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_4_152, 4))));
  Var_314 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_4_152, 6))));
  Var_315 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_4_152, 7))));
  Var_316 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_4_152, 8))));
  {
    STATE_VARIABLE_DeepInfo_5_153 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_5_153, 0) = ((MR_Box) (Var_308));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_5_153, 1) = ((MR_Box) (Var_309));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_5_153, 2) = ((MR_Box) (Var_310));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_5_153, 3) = ((MR_Box) (Var_311));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_5_153, 4) = ((MR_Box) (Var_312));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_5_153, 5) = ((MR_Box) (Var_154));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_5_153, 6) = ((MR_Box) (Var_314));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_5_153, 7) = ((MR_Box) (Var_315));
    MR_hl_field(0, STATE_VARIABLE_DeepInfo_5_153, 8) = ((MR_Box) (Var_316));
  }
  succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), ((MR_Box) ((MR_Integer) 10)), GoalFeatures_14);
  if (succeeded)
  {
    Var_320 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_5_153, 3))));
    Var_157 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_5_153, 8))));
    succeeded = (Var_157 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RecInfo_70 = ((MR_Word) ((MR_hl_field(1, Var_157, 0))));
      Var_158 = ((MR_Word) ((MR_hl_field(0, RecInfo_70, 0))));
      Var_325 = ((MR_Word) ((MR_hl_field(0, RecInfo_70, 1))));
      succeeded = ((MR_tag((MR_Word) Var_158)) == (MR_Integer) 1);
    }
  }
  if (succeeded)
  {
    MR_Word CallGoals_74;
    MR_Word ExitGoals_75;
    MR_Word FailGoals_76;
    MR_Word SaveRestoreVars_77;
    MR_Word CodeModel_82;

    if ((Var_325 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      CallGoals_74 = (MR_Word) ((MR_Unsigned) 0U);
      ExitGoals_75 = (MR_Word) ((MR_Unsigned) 0U);
      FailGoals_76 = (MR_Word) ((MR_Unsigned) 0U);
      SaveRestoreVars_77 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_DeepInfo_97 = STATE_VARIABLE_DeepInfo_5_153;
    }
    else
    {
      MR_Word Var_344 = ((MR_Word) ((MR_hl_field(1, Var_325, 1))));
      MR_Word Var_345 = ((MR_Word) ((MR_hl_field(1, Var_325, 0))));

      if ((Var_344 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_160 = ((MR_Word) ((MR_hl_field(0, Var_345, 2))));

        ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_p_0(Var_160, Var_320, &CallGoals_74, &ExitGoals_75, &FailGoals_76, &SaveRestoreVars_77, STATE_VARIABLE_DeepInfo_5_153, STATE_VARIABLE_DeepInfo_97);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.deep_prof_wrap_call\'/4", (MR_String) "multi-procedure SCCs not yet implemented");
          return;
        }
    }
    CodeModel_82 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_9);
    switch (CodeModel_82) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goals_83;
          MR_Word Var_165;
          MR_Word Var_166;
          MR_Word Var_167;
          MR_Word Var_168;

          {
            Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_168, 0) = ((MR_Box) (Goal2_44));
            MR_hl_field(1, Var_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_167, 0) = ((MR_Box) (PrepareGoal_31));
            MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_168));
          }
          {
            Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_166, 0) = ((MR_Box) (SiteNumVarGoal_25));
            MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_167));
          }
          Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_166, ExitGoals_75);
          Goals_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CallGoals_74, Var_165);
          {
            GoalExpr_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, GoalExpr_84, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, GoalExpr_84, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, GoalExpr_84, 2) = ((MR_Box) (Goals_83));
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word ExtraVars_85;
          MR_Word WrappedGoalGoalInfo0_86;
          MR_Word WrappedGoalGoalInfo_87;
          MR_Word ReturnFailsGoalInfo0_88;
          MR_Word ReturnFailsGoalInfo_89;
          MR_Word FailGoalInfo0_90;
          MR_Word FailGoalInfo_91;
          MR_Word FailGoal_92;
          MR_Word FailGoalsAndFail_93;
          MR_Word DisjGoalExpr_94;
          MR_Word DisjGoal_95;
          MR_Word Var_171;
          MR_Word Var_178;
          MR_Word Var_180;
          MR_Word Var_181;
          MR_Word Var_182;
          MR_Word Var_184;
          MR_Word Var_185;
          MR_Word Var_186;
          MR_Word Var_187;
          MR_Word Var_188;
          MR_Word Var_189;
          MR_Word Var_192;
          MR_Word Goals_206;

          {
            Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_171, 0) = ((MR_Box) (Var_320));
            MR_hl_field(1, Var_171, 1) = ((MR_Box) (SaveRestoreVars_77));
          }
          ExtraVars_85 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_171);
          WrappedGoalGoalInfo0_86 = ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_f_0(MdprofInstGoalInfo_17, ExtraVars_85);
          ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, WrappedGoalGoalInfo0_86, &WrappedGoalGoalInfo_87);
          ReturnFailsGoalInfo0_88 = hlds__hlds_goal__impure_unreachable_init_goal_info_2_f_0(ExtraVars_85, (MR_Integer) 7);
          ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ReturnFailsGoalInfo0_88, &ReturnFailsGoalInfo_89);
          FailGoalInfo0_90 = hlds__make_goal__fail_goal_info_0_f_0();
          ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, FailGoalInfo0_90, &FailGoalInfo_91);
          {
            FailGoal_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FailGoal_92, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__deep_profiling_scalar_common_2[9])));
            MR_hl_field(0, FailGoal_92, 1) = ((MR_Box) (FailGoalInfo_91));
          }
          {
            Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_178, 0) = ((MR_Box) (FailGoal_92));
            MR_hl_field(1, Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          FailGoalsAndFail_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FailGoals_76, Var_178);
          {
            Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_186, 0) = ((MR_Box) (Goal2_44));
            MR_hl_field(1, Var_186, 1) = ((MR_Box) (ExitGoals_75));
          }
          {
            Var_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_185, 0) = ((MR_Box) (PrepareGoal_31));
            MR_hl_field(1, Var_185, 1) = ((MR_Box) (Var_186));
          }
          {
            Var_184 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_184, 0) = ((MR_Box) (SiteNumVarGoal_25));
            MR_hl_field(1, Var_184, 1) = ((MR_Box) (Var_185));
          }
          {
            Var_182 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_182, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, Var_182, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, Var_182, 2) = ((MR_Box) (Var_184));
          }
          {
            Var_181 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_181, 0) = ((MR_Box) (Var_182));
            MR_hl_field(0, Var_181, 1) = ((MR_Box) (WrappedGoalGoalInfo_87));
          }
          {
            Var_189 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_189, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, Var_189, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, Var_189, 2) = ((MR_Box) (FailGoalsAndFail_93));
          }
          {
            Var_188 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_188, 0) = ((MR_Box) (Var_189));
            MR_hl_field(0, Var_188, 1) = ((MR_Box) (ReturnFailsGoalInfo_89));
          }
          {
            Var_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_187, 0) = ((MR_Box) (Var_188));
            MR_hl_field(1, Var_187, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_180, 0) = ((MR_Box) (Var_181));
            MR_hl_field(1, Var_180, 1) = ((MR_Box) (Var_187));
          }
          {
            DisjGoalExpr_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, DisjGoalExpr_94, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, DisjGoalExpr_94, 1) = ((MR_Box) (Var_180));
          }
          {
            DisjGoal_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DisjGoal_95, 0) = ((MR_Box) (DisjGoalExpr_94));
            MR_hl_field(0, DisjGoal_95, 1) = ((MR_Box) (WrappedGoalGoalInfo_87));
          }
          {
            Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_192, 0) = ((MR_Box) (DisjGoal_95));
            MR_hl_field(1, Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Goals_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CallGoals_74, Var_192);
          {
            GoalExpr_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, GoalExpr_84, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, GoalExpr_84, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, GoalExpr_84, 2) = ((MR_Box) (Goals_206));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word Var_196;
    MR_Word Var_197;
    MR_Word Var_198;

    {
      Var_198 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_198, 0) = ((MR_Box) (Goal2_44));
      MR_hl_field(1, Var_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_197, 0) = ((MR_Box) (PrepareGoal_31));
      MR_hl_field(1, Var_197, 1) = ((MR_Box) (Var_198));
    }
    {
      Var_196 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_196, 0) = ((MR_Box) (SiteNumVarGoal_25));
      MR_hl_field(1, Var_196, 1) = ((MR_Box) (Var_197));
    }
    {
      GoalExpr_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_84, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, GoalExpr_84, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, GoalExpr_84, 2) = ((MR_Box) (Var_196));
    }
    *STATE_VARIABLE_DeepInfo_97 = STATE_VARIABLE_DeepInfo_5_153;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_84));
    MR_hl_field(0, base, 1) = ((MR_Box) (MdprofInstGoalInfo_17));
  }
}

static MR_String MR_CALL 
ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  return (MR_String) "";
}

static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_p_0(
  MR_Word CSNs_9,
  MR_Word CSDVar_10,
  MR_Word * CallGoals_11,
  MR_Word * ExitGoals_12,
  MR_Word * FailGoals_13,
  MR_Word * ExtraVars_14,
  MR_Word STATE_VARIABLE_DeepInfo_0_17,
  MR_Word * STATE_VARIABLE_DeepInfo_18)
{
  MR_Word CSNChunks_16;

  mercury__list__chunk_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CSNs_9, (MR_Integer) 9, &CSNChunks_16);
  ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(CSNChunks_16, CSDVar_10, CallGoals_11, ExitGoals_12, FailGoals_13, ExtraVars_14, STATE_VARIABLE_DeepInfo_0_17, STATE_VARIABLE_DeepInfo_18);
}

static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_DepthVar_6;
  MR_Word conv0_STATE_VARIABLE_DeepInfo_12;

  ll_backend__deep_profiling__generate_depth_var_4_p_0(((MR_Integer) (wrapper_arg_1)), &conv1_DepthVar_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_DeepInfo_12);
  *wrapper_arg_2 = ((MR_Box) (conv1_DepthVar_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_DeepInfo_12));
}

static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CSDVar_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_DeepInfo_0_7,
  MR_Word * STATE_VARIABLE_DeepInfo_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DeepInfo_8 = STATE_VARIABLE_DeepInfo_0_7;
  }
  else
  {
    MR_Word Chunk_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Chunks_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word DepthVars_21;
    MR_Integer Length_22;
    MR_Word CSNCallVars_23;
    MR_Word CSNCallGoals_24;
    MR_Word CallCellVar_25;
    MR_Word CSNExitVars_26;
    MR_Word CSNExitGoals_27;
    MR_Word ExitCellVar_28;
    MR_Word CSNFailVars_29;
    MR_Word CSNFailGoals_30;
    MR_Word FailCellVar_31;
    MR_Word CSNExtraVars_32;
    MR_String CallPredName_33;
    MR_String ExitPredName_34;
    MR_String FailPredName_35;
    MR_Word ModuleInfo_36;
    MR_Word CallCellGoal_37;
    MR_Word ExitCellGoal_38;
    MR_Word FailCellGoal_39;
    MR_Word TailCallGoals_40;
    MR_Word TailExitGoals_41;
    MR_Word TailFailGoals_42;
    MR_Word TailExtraVars_43;
    MR_Word STATE_VARIABLE_DeepInfo_1_47;
    MR_Word STATE_VARIABLE_DeepInfo_2_48;
    MR_Word STATE_VARIABLE_DeepInfo_3_49;
    MR_Word STATE_VARIABLE_DeepInfo_4_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Integer Var_67;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Integer Var_71;
    MR_Word Var_72;
    MR_Word Var_75;
    MR_Integer Var_76;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_String Var_101;
    MR_String Var_109;
    MR_String Var_117;
    MR_Word Var_125;
    MR_Word Var_127;
    MR_Box conv2_STATE_VARIABLE_DeepInfo_1_47;

    mercury__list__map_foldl_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), (MR_Word) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[7]), Chunk_13, &DepthVars_21, ((MR_Box) (STATE_VARIABLE_DeepInfo_0_7)), &conv2_STATE_VARIABLE_DeepInfo_1_47);
    STATE_VARIABLE_DeepInfo_1_47 = ((MR_Word) (conv2_STATE_VARIABLE_DeepInfo_1_47));
    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Chunk_13, &Length_22);
    ll_backend__deep_profiling__generate_csn_vector_7_p_0(Length_22, Chunk_13, &CSNCallVars_23, &CSNCallGoals_24, &CallCellVar_25, STATE_VARIABLE_DeepInfo_1_47, &STATE_VARIABLE_DeepInfo_2_48);
    ll_backend__deep_profiling__generate_csn_vector_7_p_0(Length_22, Chunk_13, &CSNExitVars_26, &CSNExitGoals_27, &ExitCellVar_28, STATE_VARIABLE_DeepInfo_2_48, &STATE_VARIABLE_DeepInfo_3_49);
    ll_backend__deep_profiling__generate_csn_vector_7_p_0(Length_22, Chunk_13, &CSNFailVars_29, &CSNFailGoals_30, &FailCellVar_31, STATE_VARIABLE_DeepInfo_3_49, &STATE_VARIABLE_DeepInfo_4_50);
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (CSNFailVars_29));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (CSNExitVars_26));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (CSNCallVars_23));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
    }
    mercury__list__condense_2_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), Var_51, &CSNExtraVars_32);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_3[1]), Length_22, &Var_101);
    CallPredName_33 = mercury__string__f_43_43_2_f_0((MR_String) "save_recursion_depth_", Var_101);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_3[1]), Length_22, &Var_109);
    ExitPredName_34 = mercury__string__f_43_43_2_f_0((MR_String) "restore_recursion_depth_exit_", Var_109);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_3[1]), Length_22, &Var_117);
    FailPredName_35 = mercury__string__f_43_43_2_f_0((MR_String) "restore_recursion_depth_fail_", Var_117);
    ModuleInfo_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_4_50, 0))));
    Var_67 = (MR_Integer) ((MR_Unsigned) Length_22 + (MR_Unsigned) 2);
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (CallCellVar_25));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (DepthVars_21));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (CSDVar_2));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_125, 0) = ((MR_Box) (DepthVars_21));
    }
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_36, CallPredName_33, Var_67, Var_68, Var_125, (MR_Integer) 0, &CallCellGoal_37);
    Var_71 = (MR_Integer) ((MR_Unsigned) Length_22 + (MR_Unsigned) 2);
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (ExitCellVar_28));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) (DepthVars_21));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (CSDVar_2));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
    }
    Var_127 = (MR_Word) (MR_mkword(1, &ll_backend__deep_profiling_scalar_common_3[2]));
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_36, ExitPredName_34, Var_71, Var_72, Var_127, (MR_Integer) 0, &ExitCellGoal_38);
    Var_76 = (MR_Integer) ((MR_Unsigned) Length_22 + (MR_Unsigned) 2);
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (FailCellVar_31));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) (DepthVars_21));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (CSDVar_2));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
    }
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_36, FailPredName_35, Var_76, Var_77, Var_127, (MR_Integer) 0, &FailCellGoal_39);
    ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(Chunks_14, CSDVar_2, &TailCallGoals_40, &TailExitGoals_41, &TailFailGoals_42, &TailExtraVars_43, STATE_VARIABLE_DeepInfo_4_50, STATE_VARIABLE_DeepInfo_8);
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (CallCellGoal_37));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (TailCallGoals_40));
    }
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CSNCallGoals_24, Var_82);
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (ExitCellGoal_38));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) (TailExitGoals_41));
    }
    *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CSNExitGoals_27, Var_83);
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (FailCellGoal_39));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) (TailFailGoals_42));
    }
    *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CSNFailGoals_30, Var_84);
    *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), CSNExtraVars_32, TailExtraVars_43);
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;
  MR_Word conv0_STATE_VARIABLE_DeepInfo_13;

  ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(((MR_Integer) (wrapper_arg_1)), &conv1_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_DeepInfo_13);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_DeepInfo_13));
}

static MR_bool MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0(
  MR_Integer Length_8,
  MR_Word CSNs_9,
  MR_Word * CSNVars_10,
  MR_Word * UnifyGoals_11,
  MR_Word * CellVar_12,
  MR_Word STATE_VARIABLE_DeepInfo_0_21,
  MR_Word * STATE_VARIABLE_DeepInfo_22)
{
  MR_bool succeeded = (CSNs_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer CSN_14;
  MR_Word Var_23;

  if (succeeded)
  {
    CSN_14 = ((MR_Integer) ((MR_hl_field(1, CSNs_9, 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(1, CSNs_9, 1))));
    succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word UnifyGoal_16;
    MR_Word Var_24;

    ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(CSN_14, &Var_24, STATE_VARIABLE_DeepInfo_0_21, STATE_VARIABLE_DeepInfo_22);
    *CellVar_12 = ((MR_Word) ((MR_hl_field(0, Var_24, 0))));
    UnifyGoal_16 = ((MR_Word) ((MR_hl_field(0, Var_24, 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CSNVars_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (*CellVar_12));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *UnifyGoals_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (UnifyGoal_16));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word CSNVarsGoals_17;
    MR_Word InnerVars_18;
    MR_Word InnerGoals_19;
    MR_Word CellGoal_20;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_DeepInfo_2_33;
    MR_Word Var_35;
    MR_Box conv2_STATE_VARIABLE_DeepInfo_2_33;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_8[0]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (ll_backend__deep_profiling__generate_csn_vector_7_p_0_1));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (Length_8));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) ((MR_Integer) 9));
    }
    mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140ll_backend.deep_profiling.generate_csn_vector\'/7", (MR_String) "too long");
    mercury__list__map_foldl_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[2]), (MR_Word) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[6]), CSNs_9, &CSNVarsGoals_17, ((MR_Box) (STATE_VARIABLE_DeepInfo_0_21)), &conv2_STATE_VARIABLE_DeepInfo_2_33);
    STATE_VARIABLE_DeepInfo_2_33 = ((MR_Word) (conv2_STATE_VARIABLE_DeepInfo_2_33));
    InnerVars_18 = mercury__assoc_list__keys_1_f_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CSNVarsGoals_17);
    InnerGoals_19 = mercury__assoc_list__values_1_f_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CSNVarsGoals_17);
    ll_backend__deep_profiling__generate_csn_vector_cell_6_p_0(Length_8, InnerVars_18, CellVar_12, &CellGoal_20, STATE_VARIABLE_DeepInfo_2_33, STATE_VARIABLE_DeepInfo_22);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CSNVars_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (*CellVar_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (InnerVars_18));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (CellGoal_20));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *UnifyGoals_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), InnerGoals_19, Var_35);
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(
  MR_Integer CSN_5,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeepInfo_0_12,
  MR_Word * STATE_VARIABLE_DeepInfo_13)
{
  MR_Word CSNVar_6;
  MR_Word UnifyGoal_7;
  MR_Word VarTable0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_12, 6))));
  MR_String VarName_10;
  MR_Word VarTable_11;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_String Var_38;
  MR_Word Entry_46;
  MR_Word Var_47;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_String Var_36;
  MR_Word Var_37;

  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_3[1]), CSN_5, &Var_38);
  VarName_10 = mercury__string__f_43_43_2_f_0((MR_String) "CSN", Var_38);
  Var_47 = parse_tree__builtin_lib_types__int_type_0_f_0();
  {
    Entry_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_46, 0) = ((MR_Box) (VarName_10));
    MR_hl_field(0, Entry_46, 1) = ((MR_Box) (Var_47));
    MR_hl_field(0, Entry_46, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_46, &CSNVar_6, VarTable0_9, &VarTable_11);
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_12, 0))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_12, 1))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_12, 2))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_12, 3))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_12, 4))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_12, 5))));
  Var_36 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_12, 7))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_12, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_DeepInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 6) = ((MR_Box) (VarTable_11));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_37));
  }
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (CSN_5));
  }
  {
    Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_19, 1) = ((MR_Box) (Var_20));
  }
  ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(Var_19, CSNVar_6, &UnifyGoal_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CSNVar_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (UnifyGoal_7));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_cell_6_p_0(
  MR_Integer Length_7,
  MR_Word CSNVars_8,
  MR_Word * CellVar_9,
  MR_Word * CellGoal_10,
  MR_Word STATE_VARIABLE_DeepInfo_0_21,
  MR_Word * STATE_VARIABLE_DeepInfo_22)
{
  MR_Word ProfilingBuiltin_12;
  MR_String CellTypeName_13;
  MR_Word CellTypeCtor_14;
  MR_Word CellType_15;
  MR_Word CellVarEntry_16;
  MR_Word VarTable0_17;
  MR_Word VarTable_18;
  MR_Word DuCtor_19;
  MR_Word ConsId_20;
  MR_Word Var_27;
  MR_String Var_51;
  MR_Word ArgModes_61;
  MR_Word Unification_62;
  MR_Word GoalExpr_63;
  MR_Word NonLocals_64;
  MR_Word InstMapDelta_65;
  MR_Word GoalInfo_67;
  MR_Word Var_77;
  MR_Word Var_82;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_String Var_49;
  MR_Word Var_50;

  ProfilingBuiltin_12 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_3[1]), Length_7, &Var_51);
  CellTypeName_13 = mercury__string__f_43_43_2_f_0((MR_String) "call_site_nums_", Var_51);
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (ProfilingBuiltin_12));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (CellTypeName_13));
  }
  {
    CellTypeCtor_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CellTypeCtor_14, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, CellTypeCtor_14, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type_construct__construct_type_3_p_0(CellTypeCtor_14, (MR_Word) ((MR_Unsigned) 0U), &CellType_15);
  {
    CellVarEntry_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CellVarEntry_16, 0) = ((MR_Box) ((MR_String) "CSNCell"));
    MR_hl_field(0, CellVarEntry_16, 1) = ((MR_Box) (CellType_15));
    MR_hl_field(0, CellVarEntry_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  VarTable0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_21, 6))));
  parse_tree__var_table__add_var_entry_4_p_0(CellVarEntry_16, CellVar_9, VarTable0_17, &VarTable_18);
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_21, 0))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_21, 1))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_21, 2))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_21, 3))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_21, 4))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_21, 5))));
  Var_49 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_21, 7))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_21, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_DeepInfo_22 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 6) = ((MR_Box) (VarTable_18));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_50));
  }
  {
    DuCtor_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtor_19, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, DuCtor_19, 1) = ((MR_Box) (Length_7));
    MR_hl_field(0, DuCtor_19, 2) = ((MR_Box) (CellTypeCtor_14));
  }
  ConsId_20 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_19)));
  mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Length_7, ((MR_Box) (&ll_backend__deep_profiling_scalar_common_6[0])), &ArgModes_61);
  {
    Unification_62 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Unification_62, 0) = ((MR_Box) (*CellVar_9));
    MR_hl_field(0, Unification_62, 1) = ((MR_Box) (ConsId_20));
    MR_hl_field(0, Unification_62, 2) = ((MR_Box) (CSNVars_8));
    MR_hl_field(0, Unification_62, 3) = ((MR_Box) (ArgModes_61));
    MR_hl_field(0, Unification_62, 4) = ((MR_Box) (MR_mkword(2, &ll_backend__deep_profiling_scalar_common_3[0])));
    MR_hl_field(0, Unification_62, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Unification_62, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (ConsId_20));
    MR_hl_field(1, Var_77, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_77, 2) = ((MR_Box) (CSNVars_8));
  }
  {
    GoalExpr_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalExpr_63, 0) = ((MR_Box) (*CellVar_9));
    MR_hl_field(1, GoalExpr_63, 1) = ((MR_Box) (Var_77));
    MR_hl_field(1, GoalExpr_63, 2) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_6[0]));
    MR_hl_field(1, GoalExpr_63, 3) = ((MR_Box) (Unification_62));
    MR_hl_field(1, GoalExpr_63, 4) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[7]));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (*CellVar_9));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (CSNVars_8));
  }
  NonLocals_64 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_82);
  InstMapDelta_65 = hlds__instmap__instmap_delta_bind_var_1_f_0(*CellVar_9);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_64, InstMapDelta_65, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_67);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CellGoal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_63));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_67));
  }
}

static MR_Word MR_CALL 
ll_backend__deep_profiling__classify_call_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Expr_5)
{
  MR_bool succeeded;
  MR_Word Class_6;

  switch (MR_tag((MR_Word) Expr_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.deep_profiling.classify_call\'/2", (MR_String) "unexpected goal type");
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(2, Expr_5, 0))));
        MR_Integer ProcId_8 = ((MR_Integer) ((MR_hl_field(2, Expr_5, 1))));
        MR_Word ArgVars_9 = ((MR_Word) ((MR_hl_field(2, Expr_5, 2))));
        MR_Word PredInfo_13;
        MR_Word PredProcId_14;
        MR_Word TypeInfoVar_18;
        MR_Word PredModule_15;
        MR_String PredName_16;
        MR_Word UserArity_17;
        MR_Word Var_54;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Integer Var_59;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_7, &PredInfo_13);
        {
          PredProcId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredProcId_14, 0) = ((MR_Box) (PredId_7));
          MR_hl_field(0, PredProcId_14, 1) = ((MR_Box) (ProcId_8));
        }
        hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_13, &PredModule_15);
        Var_57 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PredModule_15, Var_57);
        if (succeeded)
        {
          hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_13, &PredName_16);
          UserArity_17 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_13);
          Var_59 = (MR_Integer) (UserArity_17);
          if ((strcmp(PredName_16, (MR_String) "unify") == 0))
            succeeded = (Var_59 == (MR_Integer) 2);
          else
          if ((strcmp(PredName_16, (MR_String) "compare") == 0))
            succeeded = (Var_59 == (MR_Integer) 3);
          else
          if ((strcmp(PredName_16, (MR_String) "compare_representation") == 0))
            succeeded = (Var_59 == (MR_Integer) 3);
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            Var_54 = (MR_Integer) 0;
            Var_58 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_13);
            succeeded = (Var_54 == Var_58);
            if (succeeded)
            {
              succeeded = (ArgVars_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                TypeInfoVar_18 = ((MR_Word) ((MR_hl_field(1, ArgVars_9, 0))));
            }
          }
        }
        if (succeeded)
          {
            Class_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Class_6, 0) = ((MR_Box) (PredProcId_14));
            MR_hl_field(1, Class_6, 1) = ((MR_Box) (TypeInfoVar_18));
          }
        else
          Class_6 = (MR_Word) ((MR_Word) (PredProcId_14));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Expr_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Generic_20 = ((MR_Word) ((MR_hl_field(3, Expr_5, 1))));

            {
              Class_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Class_6, 0) = ((MR_Box) (Generic_20));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
          mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.deep_profiling.classify_call\'/2", (MR_String) "unexpected goal type");
          break;
      }
      break;
  }
  return Class_6;
}

static void MR_CALL 
ll_backend__deep_profiling__compress_filename_3_p_0(
  MR_Word Deep_4,
  MR_String FileName0_5,
  MR_String * FileName_6)
{
  MR_bool succeeded;
  MR_String Var_15 = ((MR_String) ((MR_hl_field(0, Deep_4, 7))));

  succeeded = (strcmp(FileName0_5, Var_15) == 0);
  if (succeeded)
    *FileName_6 = (MR_String) "";
  else
    *FileName_6 = FileName0_5;
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_p_0(
  MR_Word Globals_7,
  MR_Word CodeModel_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_DeepInfo_0_35,
  MR_Word * STATE_VARIABLE_DeepInfo_36)
{
  MR_Word SavedPtrVar_13;
  MR_Word UseActivationCounts_14;
  MR_Word ExtraNonLocals_16;
  MR_Word SaveStuff_17;
  MR_Word RestoreStuff_18;
  MR_Word ReZeroStuff_19;
  MR_Word GoalInfo0_21;
  MR_Word ExtGoalInfo0_22;
  MR_Word ExtGoalInfo_23;
  MR_Word EmptyDelta_24;
  MR_Word NoBindExtGoalInfo_25;
  MR_Word FailGoalInfo0_26;
  MR_Word FailGoalInfo_27;
  MR_Word FailGoal_28;
  MR_Word RestoreFailGoalInfo0_29;
  MR_Word RestoreFailGoalInfo_30;
  MR_Word RezeroFailGoalInfo0_31;
  MR_Word RezeroFailGoalInfo_32;
  MR_Word GoalInfo_33;
  MR_Word STATE_VARIABLE_VarTable_1_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 6))));
  MR_Word STATE_VARIABLE_VarTable_2_39;
  MR_Word STATE_VARIABLE_VarTable_3_42;
  MR_Word Var_92;
  MR_Word Var_211;
  MR_Word Var_212;
  MR_Word Var_213;
  MR_Word Var_214;
  MR_Word Var_215;
  MR_Word Var_216;
  MR_String Var_218;
  MR_Word Var_219;

  ll_backend__deep_profiling__generate_var_c_ptr_4_p_0((MR_String) "SavedPtr", &SavedPtrVar_13, STATE_VARIABLE_VarTable_1_37, &STATE_VARIABLE_VarTable_2_39);
  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 68, &UseActivationCounts_14);
  switch (UseActivationCounts_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_67;
        MR_Word Var_70;
        MR_Word Var_74;
        MR_Word Var_80;

        ExtraNonLocals_16 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SavedPtrVar_13);
        Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 0))));
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (SavedPtrVar_13));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(Var_67, (MR_String) "save_and_zero_activation_info_sr", (MR_Integer) 1, Var_70, Var_70, &SaveStuff_17);
        Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 0))));
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(Var_74, (MR_String) "reset_activation_info_sr", (MR_Integer) 1, Var_70, (MR_Word) ((MR_Unsigned) 0U), &RestoreStuff_18);
        Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 0))));
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(Var_80, (MR_String) "rezero_activation_info_sr", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ReZeroStuff_19);
        STATE_VARIABLE_VarTable_3_42 = STATE_VARIABLE_VarTable_2_39;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SavedCountVar_15;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_46;
        MR_Word Var_55;
        MR_Word Var_62;

        ll_backend__deep_profiling__generate_var_int_4_p_0((MR_String) "SavedCounter", &SavedCountVar_15, STATE_VARIABLE_VarTable_2_39, &STATE_VARIABLE_VarTable_3_42);
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (SavedPtrVar_13));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (SavedCountVar_15));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
        }
        ExtraNonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_43);
        Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 0))));
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(Var_46, (MR_String) "save_and_zero_activation_info_ac", (MR_Integer) 2, Var_43, Var_43, &SaveStuff_17);
        Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 0))));
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(Var_55, (MR_String) "reset_activation_info_ac", (MR_Integer) 2, Var_43, (MR_Word) ((MR_Unsigned) 0U), &RestoreStuff_18);
        Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 0))));
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(Var_62, (MR_String) "rezero_activation_info_ac", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ReZeroStuff_19);
      }
      break;
  }
  Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 0))));
  Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 1))));
  Var_213 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 2))));
  Var_214 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 3))));
  Var_215 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 4))));
  Var_216 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 5))));
  Var_218 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 7))));
  Var_219 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeepInfo_0_35, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_DeepInfo_36 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_211));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_212));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_213));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_214));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_215));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_216));
    MR_hl_field(0, base, 6) = ((MR_Box) (STATE_VARIABLE_VarTable_3_42));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_218));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_219));
  }
  GoalInfo0_21 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 1))));
  ExtGoalInfo0_22 = ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_f_0(GoalInfo0_21, ExtraNonLocals_16);
  ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ExtGoalInfo0_22, &ExtGoalInfo_23);
  hlds__instmap__instmap_delta_init_reachable_1_p_0(&EmptyDelta_24);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(EmptyDelta_24, ExtGoalInfo_23, &NoBindExtGoalInfo_25);
  FailGoalInfo0_26 = hlds__make_goal__fail_goal_info_0_f_0();
  ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, FailGoalInfo0_26, &FailGoalInfo_27);
  {
    FailGoal_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FailGoal_28, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__deep_profiling_scalar_common_2[9])));
    MR_hl_field(0, FailGoal_28, 1) = ((MR_Box) (FailGoalInfo_27));
  }
  RestoreFailGoalInfo0_29 = hlds__hlds_goal__impure_unreachable_init_goal_info_2_f_0(ExtraNonLocals_16, (MR_Integer) 7);
  ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, RestoreFailGoalInfo0_29, &RestoreFailGoalInfo_30);
  Var_92 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  RezeroFailGoalInfo0_31 = hlds__hlds_goal__impure_unreachable_init_goal_info_2_f_0(Var_92, (MR_Integer) 7);
  ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, RezeroFailGoalInfo0_31, &RezeroFailGoalInfo_32);
  ll_backend__deep_profiling__make_impure_2_p_0(GoalInfo0_21, &GoalInfo_33);
  switch (CodeModel_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GoalExpr_34;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;

        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (RestoreStuff_18));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_97, 0) = ((MR_Box) (Goal0_9));
          MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_98));
        }
        {
          Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_96, 0) = ((MR_Box) (SaveStuff_17));
          MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
        }
        {
          GoalExpr_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, GoalExpr_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, GoalExpr_34, 2) = ((MR_Box) (Var_96));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_34));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_33));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word Var_133;
        MR_Word Var_134;
        MR_Word Var_135;
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Word Var_139;
        MR_Word Var_140;
        MR_Word Var_144;
        MR_Word Var_145;
        MR_Word Var_146;
        MR_Word Var_148;
        MR_Word GoalExpr_154;

        {
          Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_140, 0) = ((MR_Box) (FailGoal_28));
          MR_hl_field(1, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_139, 0) = ((MR_Box) (ReZeroStuff_19));
          MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_140));
        }
        {
          Var_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_137, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_137, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_137, 2) = ((MR_Box) (Var_139));
        }
        {
          Var_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_136, 0) = ((MR_Box) (Var_137));
          MR_hl_field(0, Var_136, 1) = ((MR_Box) (RezeroFailGoalInfo_32));
        }
        {
          Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_136));
          MR_hl_field(1, Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_134, 0) = ((MR_Box) (RestoreStuff_18));
          MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_135));
        }
        {
          Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_133, 1) = ((MR_Box) (Var_134));
        }
        {
          Var_132 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_132, 0) = ((MR_Box) (Var_133));
          MR_hl_field(0, Var_132, 1) = ((MR_Box) (NoBindExtGoalInfo_25));
        }
        {
          Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_131, 0) = ((MR_Box) (Var_132));
          MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_130, 0) = ((MR_Box) (Goal0_9));
          MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
        }
        {
          Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_128, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_128, 2) = ((MR_Box) (Var_130));
        }
        {
          Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_127, 0) = ((MR_Box) (Var_128));
          MR_hl_field(0, Var_127, 1) = ((MR_Box) (ExtGoalInfo_23));
        }
        {
          Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_148, 0) = ((MR_Box) (RestoreStuff_18));
          MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_140));
        }
        {
          Var_146 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_146, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_146, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_146, 2) = ((MR_Box) (Var_148));
        }
        {
          Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_145, 0) = ((MR_Box) (Var_146));
          MR_hl_field(0, Var_145, 1) = ((MR_Box) (RestoreFailGoalInfo_30));
        }
        {
          Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
          MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
          MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_144));
        }
        {
          Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_125, 1) = ((MR_Box) (Var_126));
        }
        {
          Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_124, 0) = ((MR_Box) (Var_125));
          MR_hl_field(0, Var_124, 1) = ((MR_Box) (ExtGoalInfo_23));
        }
        {
          Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
          MR_hl_field(1, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_122, 0) = ((MR_Box) (SaveStuff_17));
          MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_123));
        }
        {
          GoalExpr_154 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_154, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, GoalExpr_154, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, GoalExpr_154, 2) = ((MR_Box) (Var_122));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_154));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_33));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word GoalExpr_153;

        {
          Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_110, 0) = ((MR_Box) (RestoreStuff_18));
          MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_109, 0) = ((MR_Box) (Goal0_9));
          MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
        }
        {
          Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_107, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_107, 2) = ((MR_Box) (Var_109));
        }
        {
          Var_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_106, 0) = ((MR_Box) (Var_107));
          MR_hl_field(0, Var_106, 1) = ((MR_Box) (ExtGoalInfo_23));
        }
        {
          Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_117, 0) = ((MR_Box) (FailGoal_28));
          MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_116, 0) = ((MR_Box) (RestoreStuff_18));
          MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_117));
        }
        {
          Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_114, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_114, 2) = ((MR_Box) (Var_116));
        }
        {
          Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_113, 0) = ((MR_Box) (Var_114));
          MR_hl_field(0, Var_113, 1) = ((MR_Box) (RestoreFailGoalInfo_30));
        }
        {
          Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
          MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
          MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_112));
        }
        {
          Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_104, 1) = ((MR_Box) (Var_105));
        }
        {
          Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_103, 0) = ((MR_Box) (Var_104));
          MR_hl_field(0, Var_103, 1) = ((MR_Box) (ExtGoalInfo_23));
        }
        {
          Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (SaveStuff_17));
          MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
        }
        {
          GoalExpr_153 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_153, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, GoalExpr_153, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, GoalExpr_153, 2) = ((MR_Box) (Var_101));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_153));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_33));
        }
      }
      break;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__build_non_proc_body_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word TopCSD_12,
  MR_Word MiddleCSD_13,
  MR_Word ProcStaticVar_14,
  MR_Word MaybeOldActivationPtr_15,
  MR_Word NewOutermostProcDyn_16,
  MR_Word GoalInfo0_17,
  MR_Word BindProcStaticVarGoal_18,
  MR_Word Goal0_19,
  MR_Word * Goal_20)
{
  MR_Word CallPortCode_23;
  MR_Word ExitPortCode_24;
  MR_Word FailPortCode_25;
  MR_Word RedoPortCode0_26;
  MR_Word NewNonlocals_27;
  MR_Word RedoPortExpr_28;
  MR_Word RedoPortGoalInfo0_29;
  MR_Word RedoPortGoalInfo_30;
  MR_Word RedoPortCode_31;
  MR_Word Detism0_32;
  MR_Word CanFail_33;
  MR_Word Detism_35;
  MR_Word GoalInfo1_36;
  MR_Word ExitRedoNonLocals_37;
  MR_Word ExitRedoGoalInfo_38;
  MR_Word CallExitRedoGoalInfo_39;
  MR_Word GoalInfo_40;
  MR_Word GoalExpr_41;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_138;
  MR_Word Var_34;

  if ((MaybeOldActivationPtr_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word CallPortCode0_141;

    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (NewOutermostProcDyn_16));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (MiddleCSD_13));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (TopCSD_12));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (ProcStaticVar_14));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_86));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_11, (MR_String) "non_call_port_code_ac", (MR_Integer) 4, Var_84, Var_86, &CallPortCode0_141);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 8, CallPortCode0_141, &CallPortCode_23);
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (MiddleCSD_13));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) (TopCSD_12));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_98));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_11, (MR_String) "non_exit_port_code_ac", (MR_Integer) 2, Var_96, (MR_Word) ((MR_Unsigned) 0U), &ExitPortCode_24);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_11, (MR_String) "non_fail_port_code_ac", (MR_Integer) 2, Var_96, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 7, &FailPortCode_25);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_11, (MR_String) "non_redo_port_code_ac", (MR_Integer) 2, Var_87, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 7, &RedoPortCode0_26);
    NewNonlocals_27 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_96);
  }
  else
  {
    MR_Word OldOutermostProcDyn2_21 = ((MR_Word) ((MR_hl_field(1, MaybeOldActivationPtr_15, 0))));
    MR_Word CallPortCode0_22;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_73;

    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (NewOutermostProcDyn_16));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (OldOutermostProcDyn2_21));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (MiddleCSD_13));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (TopCSD_12));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (ProcStaticVar_14));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_11, (MR_String) "non_call_port_code_sr", (MR_Integer) 5, Var_44, Var_46, &CallPortCode0_22);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 8, CallPortCode0_22, &CallPortCode_23);
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (OldOutermostProcDyn2_21));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (MiddleCSD_13));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (TopCSD_12));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_11, (MR_String) "non_exit_port_code_sr", (MR_Integer) 3, Var_58, (MR_Word) ((MR_Unsigned) 0U), &ExitPortCode_24);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_11, (MR_String) "non_fail_port_code_sr", (MR_Integer) 3, Var_58, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 7, &FailPortCode_25);
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (MiddleCSD_13));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_49));
    }
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_11, (MR_String) "non_redo_port_code_sr", (MR_Integer) 2, Var_73, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 7, &RedoPortCode0_26);
    NewNonlocals_27 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_58);
  }
  RedoPortExpr_28 = ((MR_Word) ((MR_hl_field(0, RedoPortCode0_26, 0))));
  RedoPortGoalInfo0_29 = ((MR_Word) ((MR_hl_field(0, RedoPortCode0_26, 1))));
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 7, RedoPortGoalInfo0_29, &RedoPortGoalInfo_30);
  {
    RedoPortCode_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RedoPortCode_31, 0) = ((MR_Box) (RedoPortExpr_28));
    MR_hl_field(0, RedoPortCode_31, 1) = ((MR_Box) (RedoPortGoalInfo_30));
  }
  Detism0_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_17);
  parse_tree__prog_data__determinism_components_3_p_0(Detism0_32, &CanFail_33, &Var_34);
  parse_tree__prog_data__determinism_components_3_p_1(&Detism_35, CanFail_33, (MR_Integer) 3);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_35, GoalInfo0_17, &GoalInfo1_36);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewOutermostProcDyn_16, NewNonlocals_27, &ExitRedoNonLocals_37);
  ExitRedoGoalInfo_38 = hlds__hlds_goal__impure_reachable_init_goal_info_2_f_0(ExitRedoNonLocals_37, (MR_Integer) 2);
  CallExitRedoGoalInfo_39 = ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_f_0(GoalInfo1_36, ExitRedoNonLocals_37);
  ll_backend__deep_profiling__make_impure_2_p_0(GoalInfo1_36, &GoalInfo_40);
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (RedoPortCode_31));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (ExitPortCode_24));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_133, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_132 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_132, 0) = ((MR_Box) (Var_133));
    MR_hl_field(0, Var_132, 1) = ((MR_Box) (ExitRedoGoalInfo_38));
  }
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (Var_132));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_130, 0) = ((MR_Box) (Goal0_19));
    MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
  }
  {
    Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_128, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_128, 2) = ((MR_Box) (Var_130));
  }
  {
    Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_127, 0) = ((MR_Box) (Var_128));
    MR_hl_field(0, Var_127, 1) = ((MR_Box) (CallExitRedoGoalInfo_39));
  }
  {
    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_138, 0) = ((MR_Box) (FailPortCode_25));
    MR_hl_field(1, Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
    MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_138));
  }
  {
    Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_125, 1) = ((MR_Box) (Var_126));
  }
  {
    Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_124, 0) = ((MR_Box) (Var_125));
    MR_hl_field(0, Var_124, 1) = ((MR_Box) (CallExitRedoGoalInfo_39));
  }
  {
    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
    MR_hl_field(1, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) (CallPortCode_23));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_123));
  }
  {
    Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_121, 0) = ((MR_Box) (BindProcStaticVarGoal_18));
    MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_122));
  }
  {
    GoalExpr_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_41, 2) = ((MR_Box) (Var_121));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_41));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_40));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__make_impure_2_p_0(
  MR_Word STATE_VARIABLE_GoalInfo_0_5,
  MR_Word * STATE_VARIABLE_GoalInfo_6)
{
  MR_Word Purity_4;

  Purity_4 = hlds__hlds_goal__goal_info_get_purity_1_f_0(STATE_VARIABLE_GoalInfo_0_5);
  switch (Purity_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      *STATE_VARIABLE_GoalInfo_6 = STATE_VARIABLE_GoalInfo_0_5;
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_GoalInfo_1_8;

        hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_GoalInfo_0_5, &STATE_VARIABLE_GoalInfo_1_8);
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 3, STATE_VARIABLE_GoalInfo_1_8, STATE_VARIABLE_GoalInfo_6);
      }
      break;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__build_semi_proc_body_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TopCSD_11,
  MR_Word MiddleCSD_12,
  MR_Word ProcStaticVar_13,
  MR_Word MaybeActivationPtr_14,
  MR_Word GoalInfo0_15,
  MR_Word BindProcStaticVarGoal_16,
  MR_Word Goal0_17,
  MR_Word * Goal_18)
{
  MR_Word CallPortCode_21;
  MR_Word ExitPortCode_22;
  MR_Word FailPortCode_23;
  MR_Word NewNonlocals_24;
  MR_Word ExitConjGoalInfo_25;
  MR_Word GoalInfo_26;
  MR_Word GoalExpr_27;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_98;
  MR_Word Purity_104;

  if ((MaybeActivationPtr_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word CallPortCode0_101;

    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (MiddleCSD_12));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) (TopCSD_11));
      MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (ProcStaticVar_13));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_63));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_10, (MR_String) "semi_call_port_code_ac", (MR_Integer) 3, Var_61, Var_63, &CallPortCode0_101);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 8, CallPortCode0_101, &CallPortCode_21);
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_10, (MR_String) "semi_exit_port_code_ac", (MR_Integer) 2, Var_63, (MR_Word) ((MR_Unsigned) 0U), &ExitPortCode_22);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_10, (MR_String) "semi_fail_port_code_ac", (MR_Integer) 2, Var_63, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 7, &FailPortCode_23);
    NewNonlocals_24 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_63);
  }
  else
  {
    MR_Word ActivationPtr1_19 = ((MR_Word) ((MR_hl_field(1, MaybeActivationPtr_14, 0))));
    MR_Word CallPortCode0_20;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (ActivationPtr1_19));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (MiddleCSD_12));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (TopCSD_11));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (ProcStaticVar_13));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_10, (MR_String) "semi_call_port_code_sr", (MR_Integer) 4, Var_30, Var_32, &CallPortCode0_20);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 8, CallPortCode0_20, &CallPortCode_21);
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_10, (MR_String) "semi_exit_port_code_sr", (MR_Integer) 3, Var_32, (MR_Word) ((MR_Unsigned) 0U), &ExitPortCode_22);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_10, (MR_String) "semi_fail_port_code_sr", (MR_Integer) 3, Var_32, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 7, &FailPortCode_23);
    NewNonlocals_24 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_32);
  }
  ExitConjGoalInfo_25 = ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_f_0(GoalInfo0_15, NewNonlocals_24);
  Purity_104 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_15);
  switch (Purity_104) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      GoalInfo_26 = GoalInfo0_15;
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_GoalInfo_1_106;

        hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo0_15, &STATE_VARIABLE_GoalInfo_1_106);
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 3, STATE_VARIABLE_GoalInfo_1_106, &GoalInfo_26);
      }
      break;
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (ExitPortCode_22));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (Goal0_17));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_96));
  }
  {
    Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_93, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_93, 2) = ((MR_Box) (Var_95));
  }
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) (ExitConjGoalInfo_25));
  }
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (FailPortCode_23));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_98));
  }
  {
    Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_90, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) (Var_90));
    MR_hl_field(0, Var_89, 1) = ((MR_Box) (ExitConjGoalInfo_25));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (CallPortCode_21));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (BindProcStaticVarGoal_16));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
  }
  {
    GoalExpr_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_27, 2) = ((MR_Box) (Var_86));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_26));
  }
}

static MR_Word MR_CALL 
ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_f_0(
  MR_Word STATE_VARIABLE_GoalInfo_0_8,
  MR_Word NewNonLocals_5)
{
  MR_Word STATE_VARIABLE_GoalInfo_9;
  MR_Word NonLocals0_6;
  MR_Word NonLocals_7;
  MR_Word STATE_VARIABLE_GoalInfo_1_10;
  MR_Word Purity_12;

  NonLocals0_6 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_0_8);
  NonLocals_7 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_6, NewNonLocals_5);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_7, STATE_VARIABLE_GoalInfo_0_8, &STATE_VARIABLE_GoalInfo_1_10);
  Purity_12 = hlds__hlds_goal__goal_info_get_purity_1_f_0(STATE_VARIABLE_GoalInfo_1_10);
  switch (Purity_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      STATE_VARIABLE_GoalInfo_9 = STATE_VARIABLE_GoalInfo_1_10;
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_GoalInfo_1_14;

        hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_GoalInfo_1_10, &STATE_VARIABLE_GoalInfo_1_14);
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 3, STATE_VARIABLE_GoalInfo_1_14, &STATE_VARIABLE_GoalInfo_9);
      }
      break;
  }
  return STATE_VARIABLE_GoalInfo_9;
}

static void MR_CALL 
ll_backend__deep_profiling__generate_deep_det_call_6_p_0(
  MR_Word ModuleInfo_7,
  MR_String Name_8,
  MR_Integer Arity_9,
  MR_Word ArgVars_10,
  MR_Word OutputVars_11,
  MR_Word * Goal_12)
{
  MR_Word Var_13;

  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (OutputVars_11));
  }
  ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_7, Name_8, Arity_9, ArgVars_10, Var_13, (MR_Integer) 0, Goal_12);
}

static void MR_CALL 
ll_backend__deep_profiling__build_det_proc_body_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TopCSD_11,
  MR_Word MiddleCSD_12,
  MR_Word ProcStaticVar_13,
  MR_Word MaybeActivationPtr_14,
  MR_Word GoalInfo0_15,
  MR_Word BindProcStaticVarGoal_16,
  MR_Word Goal0_17,
  MR_Word * Goal_18)
{
  MR_Word CallPortCode_21;
  MR_Word ExitPortCode_22;
  MR_Word GoalInfo_23;
  MR_Word GoalExpr_24;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Purity_75;

  if ((MaybeActivationPtr_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word CallPortCode0_66;
    MR_Word Var_67;

    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (MiddleCSD_12));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (TopCSD_11));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (ProcStaticVar_13));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_48));
    }
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_10, (MR_String) "det_call_port_code_ac", (MR_Integer) 3, Var_46, Var_67, (MR_Integer) 0, &CallPortCode0_66);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 8, CallPortCode0_66, &CallPortCode_21);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_10, (MR_String) "det_exit_port_code_ac", (MR_Integer) 2, Var_48, (MR_Word) (MR_mkword(1, &ll_backend__deep_profiling_scalar_common_3[2])), (MR_Integer) 0, &ExitPortCode_22);
  }
  else
  {
    MR_Word ActivationPtr1_19 = ((MR_Word) ((MR_hl_field(1, MaybeActivationPtr_14, 0))));
    MR_Word CallPortCode0_20;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_71;

    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (ActivationPtr1_19));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (MiddleCSD_12));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (TopCSD_11));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (ProcStaticVar_13));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_29));
    }
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_10, (MR_String) "det_call_port_code_sr", (MR_Integer) 4, Var_27, Var_71, (MR_Integer) 0, &CallPortCode0_20);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 8, CallPortCode0_20, &CallPortCode_21);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_10, (MR_String) "det_exit_port_code_sr", (MR_Integer) 3, Var_29, (MR_Word) (MR_mkword(1, &ll_backend__deep_profiling_scalar_common_3[2])), (MR_Integer) 0, &ExitPortCode_22);
  }
  Purity_75 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_15);
  switch (Purity_75) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      GoalInfo_23 = GoalInfo0_15;
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_GoalInfo_1_77;

        hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo0_15, &STATE_VARIABLE_GoalInfo_1_77);
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 3, STATE_VARIABLE_GoalInfo_1_77, &GoalInfo_23);
      }
      break;
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (ExitPortCode_22));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Goal0_17));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (CallPortCode_21));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (BindProcStaticVarGoal_16));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    GoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_24, 2) = ((MR_Box) (Var_61));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_23));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProcTable_20;

  ll_backend__deep_profiling__deep_prof_maybe_transform_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcTable_20);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcTable_20));
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_PredMap_0_15,
  MR_Word * STATE_VARIABLE_PredMap_16)
{
  MR_Word PredInfo0_10;
  MR_Word ProcIds_11;
  MR_Word ProcTable0_12;
  MR_Word ProcTable_13;
  MR_Word PredInfo_14;
  MR_Word Var_17;
  MR_Box conv0_PredInfo0_10;
  MR_Box conv2_ProcTable_13;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredMap_0_15, ((MR_Box) (PredId_8)), &conv0_PredInfo0_10);
  PredInfo0_10 = ((MR_Word) (conv0_PredInfo0_10));
  ProcIds_11 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo0_10);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_10, &ProcTable0_12);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_7[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (ll_backend__deep_profiling__deep_prof_transform_pred_5_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (ProgressStream_6));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (ModuleInfo_7));
    MR_hl_field(0, Var_17, 5) = ((MR_Box) (PredId_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[1]), Var_17, ProcIds_11, ((MR_Box) (ProcTable0_12)), &conv2_ProcTable_13);
  ProcTable_13 = ((MR_Word) (conv2_ProcTable_13));
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_13, PredInfo0_10, &PredInfo_14);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_8)), ((MR_Box) (PredInfo_14)), STATE_VARIABLE_PredMap_0_15, STATE_VARIABLE_PredMap_16);
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_transform_to_scc_3_p_0(
  MR_Word SCC_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_bool succeeded;
  MR_Word PredProcId_6;
  MR_Box conv0_PredProcId_6;

  succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_4, &conv0_PredProcId_6);
  if (succeeded)
  {
    PredProcId_6 = ((MR_Word) (conv0_PredProcId_6));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(0, PredProcId_6, 0))));
    MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(0, PredProcId_6, 1))));
    MR_Word PredInfo0_12;
    MR_Word Types_13;
    MR_Word Origin_14;
    MR_Word ProcTable0_15;
    MR_Word ProcInfo0_16;
    MR_Word Goal0_17;
    MR_Word Detism_18;
    MR_Box conv1_ProcInfo0_16;
    MR_Integer CloneProcId_24;
    MR_Word ClonePredProcId_25;
    MR_Word Goal_27;
    MR_Word SolnCount_20;
    MR_Word HeadVars_21;
    MR_Word Modes_22;
    MR_Word Outputs_23;
    MR_Word TailRecInfo_26;
    MR_Word FoundTailCall_28;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word _CanFail_19;
    MR_Word STATE_VARIABLE_Outputs_1_69;
    MR_Word _Continue_29;
    MR_Word Var_49;
    MR_Word Var_50;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_7, PredId_10, &PredInfo0_12);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_12, &Types_13);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_12, &Origin_14);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_12, &ProcTable0_15);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_15, ((MR_Box) (ProcId_11)), &conv1_ProcInfo0_16);
    ProcInfo0_16 = ((MR_Word) (conv1_ProcInfo0_16));
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_16, &Goal0_17);
    hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo0_16, &Detism_18);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_18, &_CanFail_19, &SolnCount_20);
    succeeded = (SolnCount_20 != (MR_Integer) 3);
    if (succeeded)
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_16, &HeadVars_21);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_16, &Modes_22);
      succeeded = ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(STATE_VARIABLE_ModuleInfo_0_7, HeadVars_21, Types_13, Modes_22, &STATE_VARIABLE_Outputs_1_69);
      if (succeeded)
        Outputs_23 = STATE_VARIABLE_Outputs_1_69;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.find_list_of_output_args\'/5", (MR_String) "list length mismatch");
          return;
        }
      hlds__hlds_proc_util__clone_proc_id_3_p_0(ProcTable0_15, ProcId_11, &CloneProcId_24);
      Var_47 = (MR_Word) ((MR_Unsigned) 0U);
      Var_48 = (MR_Integer) 0;
      {
        ClonePredProcId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ClonePredProcId_25, 0) = ((MR_Box) (PredId_10));
        MR_hl_field(0, ClonePredProcId_25, 1) = ((MR_Box) (CloneProcId_24));
      }
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (PredProcId_6));
        MR_hl_field(0, Var_46, 1) = ((MR_Box) (ClonePredProcId_25));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
      }
      {
        TailRecInfo_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TailRecInfo_26, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_7));
        MR_hl_field(0, TailRecInfo_26, 1) = ((MR_Box) (Var_45));
        MR_hl_field(0, TailRecInfo_26, 2) = (MR_Box) ((MR_Unsigned) (Detism_18));
        MR_hl_field(0, TailRecInfo_26, 3) = ((MR_Box) (Outputs_23));
      }
      ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Goal0_17, &Goal_27, TailRecInfo_26, Var_48, &FoundTailCall_28, &_Continue_29);
      succeeded = (FoundTailCall_28 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Origin_14)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_49 = ((MR_Word) ((MR_hl_field(1, Origin_14, 0))));
          succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_50 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(Goal_27);
            succeeded = (Var_50 != (MR_Integer) 0);
          }
        }
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word ProcInfo1_32;
      MR_Word TailCallSites_34;
      MR_Word OrigDeepRecInfo_35;
      MR_Word DeepOriginalBody_36;
      MR_Word OrigDeepProfileInfo_37;
      MR_Word CloneDeepRecInfo_38;
      MR_Word CloneDeepProfileInfo_39;
      MR_Word ProcInfo_40;
      MR_Word CloneProcInfo_41;
      MR_Word ProcTable1_42;
      MR_Word ProcTable_43;
      MR_Word PredInfo_44;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Body_72;
      MR_Word HeadVars_73;
      MR_Word Instmap_74;
      MR_Word VarTable_75;
      MR_Word MaybeDetism_76;
      MR_Word Detism_77;
      MR_Integer _Num_33;

      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_27, ProcInfo0_16, &ProcInfo1_32);
      ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(Goal_27, (MR_Integer) 0, &_Num_33, (MR_Word) ((MR_Unsigned) 0U), &TailCallSites_34);
      Var_54 = (MR_Word) (MR_mkword(1, (MR_Word) (ClonePredProcId_25)));
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_56, 0) = ((MR_Box) (PredProcId_6));
        MR_hl_field(0, Var_56, 1) = ((MR_Box) (ClonePredProcId_25));
        MR_hl_field(0, Var_56, 2) = ((MR_Box) (TailCallSites_34));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(0, Var_53, 1) = ((MR_Box) (Var_55));
      }
      {
        OrigDeepRecInfo_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, OrigDeepRecInfo_35, 0) = ((MR_Box) (Var_53));
      }
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_16, &Body_72);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_16, &HeadVars_73);
      hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_7, ProcInfo0_16, &Instmap_74);
      hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_16, &VarTable_75);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_16, &MaybeDetism_76);
      if ((MaybeDetism_76 == (MR_Word) ((MR_Unsigned) 0U)))
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo0_16, &Detism_77);
      else
        Detism_77 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_76, 0))));
      {
        DeepOriginalBody_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DeepOriginalBody_36, 0) = ((MR_Box) (Body_72));
        MR_hl_field(0, DeepOriginalBody_36, 1) = ((MR_Box) (HeadVars_73));
        MR_hl_field(0, DeepOriginalBody_36, 2) = ((MR_Box) (Instmap_74));
        MR_hl_field(0, DeepOriginalBody_36, 3) = ((MR_Box) (VarTable_75));
        MR_hl_field(0, DeepOriginalBody_36, 4) = (MR_Box) ((MR_Unsigned) (Detism_77));
      }
      {
        OrigDeepProfileInfo_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OrigDeepProfileInfo_37, 0) = ((MR_Box) (OrigDeepRecInfo_35));
        MR_hl_field(0, OrigDeepProfileInfo_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, OrigDeepProfileInfo_37, 2) = ((MR_Box) (DeepOriginalBody_36));
      }
      Var_60 = (MR_Word) ((MR_Word) (PredProcId_6));
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(0, Var_59, 1) = ((MR_Box) (Var_55));
      }
      {
        CloneDeepRecInfo_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CloneDeepRecInfo_38, 0) = ((MR_Box) (Var_59));
      }
      {
        CloneDeepProfileInfo_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CloneDeepProfileInfo_39, 0) = ((MR_Box) (CloneDeepRecInfo_38));
        MR_hl_field(0, CloneDeepProfileInfo_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, CloneDeepProfileInfo_39, 2) = ((MR_Box) (DeepOriginalBody_36));
      }
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (OrigDeepProfileInfo_37));
      }
      hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_p_0(Var_65, ProcInfo1_32, &ProcInfo_40);
      {
        Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_66, 0) = ((MR_Box) (CloneDeepProfileInfo_39));
      }
      hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_p_0(Var_66, ProcInfo1_32, &CloneProcInfo_41);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_11)), ((MR_Box) (ProcInfo_40)), ProcTable0_15, &ProcTable1_42);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (CloneProcId_24)), ((MR_Box) (CloneProcInfo_41)), ProcTable1_42, &ProcTable_43);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_43, PredInfo0_12, &PredInfo_44);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_10, PredInfo_44, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
    }
    else
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
  }
  else
    *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
}

static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(
  MR_Word Goal_6,
  MR_Integer STATE_VARIABLE_N_0_50,
  MR_Integer * STATE_VARIABLE_N_51,
  MR_Word STATE_VARIABLE_TailCallSites_0_52,
  MR_Word * STATE_VARIABLE_TailCallSites_53)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal_6, 0))));
    MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, Goal_6, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_45 = (MR_Word) ((MR_Word) (GoalExpr_9));
          MR_Word next_value_of_Goal_6 = SubGoal_45;

          // direct tailcall eliminated
          ;
          Goal_6 = next_value_of_Goal_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_N_51 = STATE_VARIABLE_N_0_50;
          *STATE_VARIABLE_TailCallSites_53 = STATE_VARIABLE_TailCallSites_0_52;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinState_22 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_9, 3))) & (MR_Integer) 1);
          MR_Word Features_25;

          Features_25 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_10);
          succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), ((MR_Box) ((MR_Integer) 10)), Features_25);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_TailCallSites_53 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_N_0_50));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TailCallSites_0_52));
            }
          else
            *STATE_VARIABLE_TailCallSites_53 = STATE_VARIABLE_TailCallSites_0_52;
          switch (BuiltinState_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_N_51 = STATE_VARIABLE_N_0_50;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_N_51 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_50 + (MR_Unsigned) 1);
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_N_51 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_50 + (MR_Unsigned) 1);
              *STATE_VARIABLE_TailCallSites_53 = STATE_VARIABLE_TailCallSites_0_52;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attrs_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));
              MR_Word MayCallMercury_18;

              MayCallMercury_18 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attrs_11);
              switch (MayCallMercury_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_N_51 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_50 + (MR_Unsigned) 1);
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_N_51 = STATE_VARIABLE_N_0_50;
                  break;
              }
              *STATE_VARIABLE_TailCallSites_53 = STATE_VARIABLE_TailCallSites_0_52;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));

              ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(Goals_37, STATE_VARIABLE_N_0_50, STATE_VARIABLE_N_51, STATE_VARIABLE_TailCallSites_0_52, STATE_VARIABLE_TailCallSites_53);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));

              ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(Goals_80, STATE_VARIABLE_N_0_50, STATE_VARIABLE_N_51, STATE_VARIABLE_TailCallSites_0_52, STATE_VARIABLE_TailCallSites_53);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 3))));

              ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_p_0(Cases_40, STATE_VARIABLE_N_0_50, STATE_VARIABLE_N_51, STATE_VARIABLE_TailCallSites_0_52, STATE_VARIABLE_TailCallSites_53);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));
              MR_Word SubGoal_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));
              MR_Word FGT_48;

              succeeded = ((((MR_tag((MR_Word) Reason_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_46, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_48 = ((MR_Unsigned) ((MR_hl_field(3, Reason_46, 2))) & (MR_Integer) 3);
                switch (FGT_48) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
              {
                *STATE_VARIABLE_TailCallSites_53 = STATE_VARIABLE_TailCallSites_0_52;
                *STATE_VARIABLE_N_51 = STATE_VARIABLE_N_0_50;
              }
              else
              {
                MR_Word next_value_of_Goal_6 = SubGoal_81;

                // direct tailcall eliminated
                ;
                Goal_6 = next_value_of_Goal_6;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));
              MR_Word Then_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 3))));
              MR_Word Else_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 4))));
              MR_Integer STATE_VARIABLE_N_7_68;
              MR_Word STATE_VARIABLE_TailCallSites_5_69;
              MR_Integer STATE_VARIABLE_N_8_70;
              MR_Word STATE_VARIABLE_TailCallSites_6_71;
              MR_Word next_value_of_Goal_6;
              MR_Integer next_value_of_STATE_VARIABLE_N_0_50;
              MR_Word next_value_of_STATE_VARIABLE_TailCallSites_0_52;

              ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(Cond_42, STATE_VARIABLE_N_0_50, &STATE_VARIABLE_N_7_68, STATE_VARIABLE_TailCallSites_0_52, &STATE_VARIABLE_TailCallSites_5_69);
              ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(Then_43, STATE_VARIABLE_N_7_68, &STATE_VARIABLE_N_8_70, STATE_VARIABLE_TailCallSites_5_69, &STATE_VARIABLE_TailCallSites_6_71);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = Else_44;
              next_value_of_STATE_VARIABLE_N_0_50 = STATE_VARIABLE_N_8_70;
              next_value_of_STATE_VARIABLE_TailCallSites_0_52 = STATE_VARIABLE_TailCallSites_6_71;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_N_0_50 = next_value_of_STATE_VARIABLE_N_0_50;
              STATE_VARIABLE_TailCallSites_0_52 = next_value_of_STATE_VARIABLE_TailCallSites_0_52;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.figure_out_rec_call_numbers\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_N_0_2,
  MR_Integer * STATE_VARIABLE_N_3,
  MR_Word STATE_VARIABLE_TailCallSites_0_4,
  MR_Word * STATE_VARIABLE_TailCallSites_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TailCallSites_5 = STATE_VARIABLE_TailCallSites_0_4;
      *STATE_VARIABLE_N_3 = STATE_VARIABLE_N_0_2;
    }
    else
    {
      MR_Word Case_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(0, Case_12, 2))));
      MR_Integer STATE_VARIABLE_N_1_23;
      MR_Word STATE_VARIABLE_TailCallSites_1_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_2;
      MR_Word next_value_of_STATE_VARIABLE_TailCallSites_0_4;

      ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(Goal_18, STATE_VARIABLE_N_0_2, &STATE_VARIABLE_N_1_23, STATE_VARIABLE_TailCallSites_0_4, &STATE_VARIABLE_TailCallSites_1_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_13;
      next_value_of_STATE_VARIABLE_N_0_2 = STATE_VARIABLE_N_1_23;
      next_value_of_STATE_VARIABLE_TailCallSites_0_4 = STATE_VARIABLE_TailCallSites_1_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_N_0_2 = next_value_of_STATE_VARIABLE_N_0_2;
      STATE_VARIABLE_TailCallSites_0_4 = next_value_of_STATE_VARIABLE_TailCallSites_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_N_0_2,
  MR_Integer * STATE_VARIABLE_N_3,
  MR_Word STATE_VARIABLE_TailCallSites_0_4,
  MR_Word * STATE_VARIABLE_TailCallSites_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TailCallSites_5 = STATE_VARIABLE_TailCallSites_0_4;
      *STATE_VARIABLE_N_3 = STATE_VARIABLE_N_0_2;
    }
    else
    {
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer STATE_VARIABLE_N_1_20;
      MR_Word STATE_VARIABLE_TailCallSites_1_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_2;
      MR_Word next_value_of_STATE_VARIABLE_TailCallSites_0_4;

      ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(Goal_12, STATE_VARIABLE_N_0_2, &STATE_VARIABLE_N_1_20, STATE_VARIABLE_TailCallSites_0_4, &STATE_VARIABLE_TailCallSites_1_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_STATE_VARIABLE_N_0_2 = STATE_VARIABLE_N_1_20;
      next_value_of_STATE_VARIABLE_TailCallSites_0_4 = STATE_VARIABLE_TailCallSites_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_N_0_2 = next_value_of_STATE_VARIABLE_N_0_2;
      STATE_VARIABLE_TailCallSites_0_4 = next_value_of_STATE_VARIABLE_TailCallSites_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word TailRecInfo_3,
  MR_Word STATE_VARIABLE_FoundTailCall_0_4,
  MR_Word * STATE_VARIABLE_FoundTailCall_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_FoundTailCall_5 = STATE_VARIABLE_FoundTailCall_0_4;
  }
  else
  {
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, Case0_10, 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, Case0_10, 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, Case0_10, 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_FoundTailCall_1_23;
    MR_Word Var_20;

    ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Goal0_18, &Goal_19, TailRecInfo_3, STATE_VARIABLE_FoundTailCall_0_4, &STATE_VARIABLE_FoundTailCall_1_23, &Var_20);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(0, Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(0, Case_12, 2) = ((MR_Box) (Goal_19));
    }
    ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(Cases0_11, &Cases_13, TailRecInfo_3, STATE_VARIABLE_FoundTailCall_1_23, STATE_VARIABLE_FoundTailCall_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_13));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word TailRecInfo_3,
  MR_Word STATE_VARIABLE_FoundTailCall_0_4,
  MR_Word * STATE_VARIABLE_FoundTailCall_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_FoundTailCall_5 = STATE_VARIABLE_FoundTailCall_0_4;
  }
  else
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((Var_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goal_11;
      MR_Word Var_14;

      ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Var_30, &Goal_11, TailRecInfo_3, STATE_VARIABLE_FoundTailCall_0_4, STATE_VARIABLE_FoundTailCall_5, &Var_14);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Goals_22;
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));

      if ((Var_50 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Goal_35;
        MR_Word Var_37;

        ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Var_51, &Goal_35, TailRecInfo_3, STATE_VARIABLE_FoundTailCall_0_4, STATE_VARIABLE_FoundTailCall_5, &Var_37);
        {
          Goals_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Goals_22, 0) = ((MR_Box) (Goal_35));
          MR_hl_field(1, Goals_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Goals_44;

        ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(Var_50, &Goals_44, TailRecInfo_3, STATE_VARIABLE_FoundTailCall_0_4, STATE_VARIABLE_FoundTailCall_5);
        {
          Goals_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Goals_22, 0) = ((MR_Box) (Var_51));
          MR_hl_field(1, Goals_22, 1) = ((MR_Box) (Goals_44));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_30));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals_22));
      }
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word TailRecInfo_3,
  MR_Word STATE_VARIABLE_FoundTailCall_0_4,
  MR_Word * STATE_VARIABLE_FoundTailCall_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_11;

    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    Var_11 = ((MR_Word) ((MR_hl_field(0, TailRecInfo_3, 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
    }
    *STATE_VARIABLE_FoundTailCall_5 = STATE_VARIABLE_FoundTailCall_0_4;
  }
  else
  {
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Word TailContinue_19;
    MR_Word STATE_VARIABLE_FoundTailCall_1_24;

    ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(Goals0_13, &Goals_15, TailRecInfo_3, STATE_VARIABLE_FoundTailCall_0_4, &STATE_VARIABLE_FoundTailCall_1_24, &TailContinue_19);
    if ((TailContinue_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Goal_14 = Goal0_12;
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_FoundTailCall_5 = STATE_VARIABLE_FoundTailCall_1_24;
    }
    else
    {
      MR_Word Outputs_20 = ((MR_Word) ((MR_hl_field(1, TailContinue_19, 0))));
      MR_Word HeadTailRecInfo_21;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, TailRecInfo_3, 0))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, TailRecInfo_3, 1))));
      MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(0, TailRecInfo_3, 2))) & (MR_Integer) 7);

      {
        HeadTailRecInfo_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadTailRecInfo_21, 0) = ((MR_Box) (Var_28));
        MR_hl_field(0, HeadTailRecInfo_21, 1) = ((MR_Box) (Var_29));
        MR_hl_field(0, HeadTailRecInfo_21, 2) = (MR_Box) ((MR_Unsigned) (Var_30));
        MR_hl_field(0, HeadTailRecInfo_21, 3) = ((MR_Box) (Outputs_20));
      }
      ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Goal0_12, &Goal_14, HeadTailRecInfo_21, STATE_VARIABLE_FoundTailCall_1_24, STATE_VARIABLE_FoundTailCall_5, HeadVar__6_6);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_15));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word TailRecInfo_9,
  MR_Word STATE_VARIABLE_FoundTailCall_0_88,
  MR_Word * STATE_VARIABLE_FoundTailCall_89,
  MR_Word * Continue_11)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Goal_8 = Goal0_7;
        *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_FoundTailCall_89 = STATE_VARIABLE_FoundTailCall_0_88;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unify0_47 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, 3))));

        *Goal_8 = Goal0_7;
        switch (MR_tag((MR_Word) Unify0_47)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
            *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word ToVar_49 = ((MR_Word) ((MR_hl_field(2, Unify0_47, 0))));
              MR_Word FromVar_50 = ((MR_Word) ((MR_hl_field(2, Unify0_47, 1))));
              MR_Word Outputs_51;
              MR_Word Var_95 = ((MR_Word) ((MR_hl_field(0, TailRecInfo_9, 3))));

              ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(Var_95, ToVar_49, FromVar_50, &Outputs_51);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Continue_11 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Outputs_51));
              }
            }
            break;
        }
        *STATE_VARIABLE_FoundTailCall_89 = STATE_VARIABLE_FoundTailCall_0_88;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, 0))));
        MR_Integer ProcId_22 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_12, 1))));
        MR_Word ArgVars_23 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, 2))));
        MR_Word Builtin_24 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_12, 3))) & (MR_Integer) 1);
        MR_Word UnifyContext_25 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, 4))));
        MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, 5))));
        MR_Word ClonePredProcId_28;
        MR_Word TypeInfo_133_133;
        MR_Word PredProcId_27;
        MR_Word PredInfo_29;
        MR_Word ProcInfo_30;
        MR_Word CallDetism_31;
        MR_Word Types_32;
        MR_Word Modes_33;
        MR_Word CallOutputs_34;
        MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, TailRecInfo_9, 1))));
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Box conv0_ClonePredProcId_28;

        {
          PredProcId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredProcId_27, 0) = ((MR_Box) (PredId_21));
          MR_hl_field(0, PredProcId_27, 1) = ((MR_Box) (ProcId_22));
        }
        succeeded = mercury__assoc_list__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_90, ((MR_Box) (PredProcId_27)), &conv0_ClonePredProcId_28);
        if (succeeded)
        {
          ClonePredProcId_28 = ((MR_Word) (conv0_ClonePredProcId_28));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_91 = ((MR_Word) ((MR_hl_field(0, TailRecInfo_9, 0))));
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(Var_91, PredId_21, ProcId_22, &PredInfo_29, &ProcInfo_30);
          hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo_30, &CallDetism_31);
          Var_131 = ((MR_Unsigned) ((MR_hl_field(0, TailRecInfo_9, 2))) & (MR_Integer) 7);
          succeeded = (CallDetism_31 == Var_131);
          if (succeeded)
          {
            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_29, &Types_32);
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_30, &Modes_33);
            Var_92 = ((MR_Word) ((MR_hl_field(0, TailRecInfo_9, 0))));
            ll_backend__deep_profiling__find_list_of_output_args_5_p_0(Var_92, ArgVars_23, Types_32, Modes_33, &CallOutputs_34);
            Var_132 = ((MR_Word) ((MR_hl_field(0, TailRecInfo_9, 3))));
            TypeInfo_133_133 = (MR_Word) (&ll_backend__deep_profiling_scalar_common_2[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_133_133, ((MR_Box) (CallOutputs_34)), ((MR_Box) (Var_132)));
            if (succeeded)
              succeeded = (Builtin_24 == (MR_Integer) 1);
          }
        }
        if (succeeded)
        {
          MR_Word ClonePredId_35 = ((MR_Word) ((MR_hl_field(0, ClonePredProcId_28, 0))));
          MR_Integer CloneProcId_36 = ((MR_Integer) ((MR_hl_field(0, ClonePredProcId_28, 1))));
          MR_Word GoalExpr_37;
          MR_Word GoalInfo_38;

          {
            GoalExpr_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, GoalExpr_37, 0) = ((MR_Box) (ClonePredId_35));
            MR_hl_field(2, GoalExpr_37, 1) = ((MR_Box) (CloneProcId_36));
            MR_hl_field(2, GoalExpr_37, 2) = ((MR_Box) (ArgVars_23));
            MR_hl_field(2, GoalExpr_37, 3) = (MR_Box) ((MR_Unsigned) (Builtin_24));
            MR_hl_field(2, GoalExpr_37, 4) = ((MR_Box) (UnifyContext_25));
            MR_hl_field(2, GoalExpr_37, 5) = ((MR_Box) (SymName_26));
          }
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 10, GoalInfo0_13, &GoalInfo_38);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_37));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_38));
          }
          *STATE_VARIABLE_FoundTailCall_89 = (MR_Integer) 1;
        }
        else
        {
          *Goal_8 = Goal0_7;
          *STATE_VARIABLE_FoundTailCall_89 = STATE_VARIABLE_FoundTailCall_0_88;
        }
        *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Goal_8 = Goal0_7;
            *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_FoundTailCall_89 = STATE_VARIABLE_FoundTailCall_0_88;
          }
          break;
        case (MR_Integer) 1:
          {
            *Goal_8 = Goal0_7;
            *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_FoundTailCall_89 = STATE_VARIABLE_FoundTailCall_0_88;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_69 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, 1))) & (MR_Integer) 1);
            MR_Word Goals0_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));

            switch (ConjType_69) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *Goal_8 = Goal0_7;
                  *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_FoundTailCall_89 = STATE_VARIABLE_FoundTailCall_0_88;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Goals_71;
                  MR_Word GoalExpr_104;

                  ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(Goals0_70, &Goals_71, TailRecInfo_9, STATE_VARIABLE_FoundTailCall_0_88, STATE_VARIABLE_FoundTailCall_89, Continue_11);
                  {
                    GoalExpr_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_104, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, GoalExpr_104, 1) = (MR_Box) ((MR_Unsigned) (ConjType_69));
                    MR_hl_field(3, GoalExpr_104, 2) = ((MR_Box) (Goals_71));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_8 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_104));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GoalExpr_107;
            MR_Word Goals0_108 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word Goals_109;

            ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(Goals0_108, &Goals_109, TailRecInfo_9, STATE_VARIABLE_FoundTailCall_0_88, STATE_VARIABLE_FoundTailCall_89);
            {
              GoalExpr_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_107, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_107, 1) = ((MR_Box) (Goals_109));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_107));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
            *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word CanFail_73 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, 2))) & (MR_Integer) 1);
            MR_Word Cases0_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 3))));
            MR_Word Cases_75;
            MR_Word GoalExpr_110;

            ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(Cases0_74, &Cases_75, TailRecInfo_9, STATE_VARIABLE_FoundTailCall_0_88, STATE_VARIABLE_FoundTailCall_89);
            {
              GoalExpr_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_110, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_110, 1) = ((MR_Box) (Var_72));
              MR_hl_field(3, GoalExpr_110, 2) = (MR_Box) ((MR_Unsigned) (CanFail_73));
              MR_hl_field(3, GoalExpr_110, 3) = ((MR_Box) (Cases_75));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_110));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
            *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 5:
          {
            *Goal_8 = Goal0_7;
            *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_FoundTailCall_89 = STATE_VARIABLE_FoundTailCall_0_88;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word Cond_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word Then0_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 3))));
            MR_Word Else0_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 4))));
            MR_Word Then_80;
            MR_Word Else_82;
            MR_Word STATE_VARIABLE_FoundTailCall_5_99;
            MR_Word GoalExpr_111;
            MR_Word Var_81;
            MR_Word Var_83;

            ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Then0_78, &Then_80, TailRecInfo_9, STATE_VARIABLE_FoundTailCall_0_88, &STATE_VARIABLE_FoundTailCall_5_99, &Var_81);
            ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Else0_79, &Else_82, TailRecInfo_9, STATE_VARIABLE_FoundTailCall_5_99, STATE_VARIABLE_FoundTailCall_89, &Var_83);
            {
              GoalExpr_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_111, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_111, 1) = ((MR_Box) (Vars_76));
              MR_hl_field(3, GoalExpr_111, 2) = ((MR_Box) (Cond_77));
              MR_hl_field(3, GoalExpr_111, 3) = ((MR_Box) (Then_80));
              MR_hl_field(3, GoalExpr_111, 4) = ((MR_Box) (Else_82));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_111));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
            *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.apply_deep_prof_tail_rec_to_goal\'/6", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ToVar_2,
  MR_Word FromVar_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Output0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Outputs0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Output_11;
    MR_Word Outputs_12;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), ((MR_Box) (ToVar_2)), ((MR_Box) (Output0_7)));
    if (succeeded)
      Output_11 = FromVar_3;
    else
      Output_11 = Output0_7;
    ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(Outputs0_8, ToVar_2, FromVar_3, &Outputs_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Output_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Outputs_12));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Vars_7,
  MR_Word Types_8,
  MR_Word Modes_9,
  MR_Word * STATE_VARIABLE_Outputs_11)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Outputs_1_12;

  succeeded = ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(ModuleInfo_6, Vars_7, Types_8, Modes_9, &STATE_VARIABLE_Outputs_1_12);
  if (succeeded)
    *STATE_VARIABLE_Outputs_11 = STATE_VARIABLE_Outputs_1_12;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.find_list_of_output_args\'/5", (MR_String) "list length mismatch");
      return;
    }
}

static MR_Word MR_CALL 
ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(
  MR_Word Goal_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Contains_4;
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_40 = (MR_Word) ((MR_Word) (GoalExpr_5));
          MR_Word next_value_of_Goal_3 = SubGoal_40;

          // direct tailcall eliminated
          ;
          Goal_3 = next_value_of_Goal_3;
          continue;
        }
        break;
      case (MR_Integer) 1:
        Contains_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        Contains_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Contains_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 1))));
              MR_Word MayCallMercury_30;

              MayCallMercury_30 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_23);
              switch (MayCallMercury_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Contains_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  Contains_4 = (MR_Integer) 0;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));

              Contains_4 = ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(Goals_32);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 1))));

              Contains_4 = ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(Goals_48);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 3))));

              Contains_4 = ll_backend__deep_profiling__cases_contain_builtin_unify_or_compare_1_f_0(Cases_35);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));
              MR_Word next_value_of_Goal_3 = SubGoal_49;

              // direct tailcall eliminated
              ;
              Goal_3 = next_value_of_Goal_3;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));
              MR_Word Then_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 3))));
              MR_Word Else_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 4))));
              MR_Word Var_43;
              MR_Word Var_44;
              MR_Word Var_45;

              Var_43 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(Cond_37);
              succeeded = (Var_43 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_44 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(Then_38);
                succeeded = (Var_44 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_45 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(Else_39);
                  succeeded = (Var_45 == (MR_Integer) 0);
                }
              }
              if (succeeded)
                Contains_4 = (MR_Integer) 0;
              else
                Contains_4 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 7:
            mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.deep_profiling.goal_contains_builtin_unify_or_compare\'/1", (MR_String) "shorthand");
            break;
        }
        break;
    }
    return Contains_4;
    break;
  }
}

static MR_Word MR_CALL 
ll_backend__deep_profiling__cases_contain_builtin_unify_or_compare_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Case_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cases_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(0, Case_3, 2))));
      MR_Word Var_9;

      Var_9 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(Goal_8);
      succeeded = (Var_9 == (MR_Integer) 1);
      if (succeeded)
        HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static MR_Word MR_CALL 
ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_6;

      Var_6 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(Goal_3);
      succeeded = (Var_6 == (MR_Integer) 1);
      if (succeeded)
        HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
  }
  else
  {
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Type_10;
    MR_Word Types_11;
    MR_Word Mode_12;
    MR_Word Modes_13;
    MR_Word LaterOutputs_15;
    MR_Word TopFunctorMode_16;

    succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Type_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      Types_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Mode_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        Modes_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
        succeeded = ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(ModuleInfo_1, Vars_9, Types_11, Modes_13, &LaterOutputs_15);
        if (succeeded)
        {
          hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_1, Mode_12, Type_10, &TopFunctorMode_16);
          switch (TopFunctorMode_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__5_5 = LaterOutputs_15;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
                MR_hl_field(1, base, 1) = ((MR_Box) (LaterOutputs_15));
              }
              break;
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__deep_profiling__add_impurity_if_needed_3_p_0(
  MR_Word AddedImpurity_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_6,
  MR_Word * STATE_VARIABLE_GoalInfo_7)
{
  switch (AddedImpurity_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_GoalInfo_7 = STATE_VARIABLE_GoalInfo_0_6;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Purity_8;

        Purity_8 = hlds__hlds_goal__goal_info_get_purity_1_f_0(STATE_VARIABLE_GoalInfo_0_6);
        switch (Purity_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            *STATE_VARIABLE_GoalInfo_7 = STATE_VARIABLE_GoalInfo_0_6;
            break;
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_GoalInfo_1_10;

              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_GoalInfo_0_6, &STATE_VARIABLE_GoalInfo_1_10);
              hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 3, STATE_VARIABLE_GoalInfo_1_10, STATE_VARIABLE_GoalInfo_7);
            }
            break;
        }
      }
      break;
  }
}

void MR_CALL 
ll_backend__deep_profiling__generate_var_c_ptr_4_p_0(
  MR_String Name_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  MR_Word Entry_8;
  MR_Word Var_11;

  Var_11 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  {
    Entry_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_8, 0) = ((MR_Box) (Name_5));
    MR_hl_field(0, Entry_8, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, Entry_8, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_8, Var_6, STATE_VARIABLE_VarTable_0_9, STATE_VARIABLE_VarTable_10);
}

void MR_CALL 
ll_backend__deep_profiling__generate_var_int_4_p_0(
  MR_String Name_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  MR_Word Entry_8;
  MR_Word Var_11;

  Var_11 = parse_tree__builtin_lib_types__int_type_0_f_0();
  {
    Entry_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_8, 0) = ((MR_Box) (Name_5));
    MR_hl_field(0, Entry_8, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, Entry_8, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_8, Var_6, STATE_VARIABLE_VarTable_0_9, STATE_VARIABLE_VarTable_10);
}

void MR_CALL 
ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(
  MR_Word ConsId_4,
  MR_Word Var_5,
  MR_Word * Goal_6)
{
  MR_Word Unification_9;
  MR_Word GoalExpr_10;
  MR_Word NonLocals_11;
  MR_Word InstMapDelta_12;
  MR_Word GoalInfo1_13;
  MR_Word GoalInfo_14;
  MR_Word Var_26;

  {
    Unification_9 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Unification_9, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, Unification_9, 1) = ((MR_Box) (ConsId_4));
    MR_hl_field(0, Unification_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Unification_9, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Unification_9, 4) = ((MR_Box) (MR_mkword(2, &ll_backend__deep_profiling_scalar_common_3[0])));
    MR_hl_field(0, Unification_9, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Unification_9, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (ConsId_4));
    MR_hl_field(1, Var_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    GoalExpr_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalExpr_10, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, GoalExpr_10, 1) = ((MR_Box) (Var_26));
    MR_hl_field(1, GoalExpr_10, 2) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_6[0]));
    MR_hl_field(1, GoalExpr_10, 3) = ((MR_Box) (Unification_9));
    MR_hl_field(1, GoalExpr_10, 4) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[7]));
  }
  NonLocals_11 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5);
  InstMapDelta_12 = hlds__instmap__instmap_delta_bind_var_1_f_0(Var_5);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_11, InstMapDelta_12, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo1_13);
  ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, GoalInfo1_13, &GoalInfo_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_14));
  }
}

void MR_CALL 
ll_backend__deep_profiling__generate_deep_call_7_p_0(
  MR_Word ModuleInfo_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word ArgVars_11,
  MR_Word MaybeOutputVars_12,
  MR_Word Detism_13,
  MR_Word * Goal_14)
{
  MR_Word PredId_15;
  MR_Integer ProcId_16;
  MR_Word NonLocals_17;
  MR_Word InstMapDelta_19;
  MR_Word SymName_20;
  MR_Word GoalExpr_21;
  MR_Word GoalInfo1_22;
  MR_Word GoalInfo_23;

  ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_p_0(ModuleInfo_8, Name_9, Arity_10, &PredId_15, &ProcId_16);
  NonLocals_17 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_11);
  if ((MaybeOutputVars_12 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_19);
  else
  {
    MR_Word OutputVars_18 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_12, 0))));

    InstMapDelta_19 = hlds__instmap__instmap_delta_bind_vars_1_f_0(OutputVars_18);
  }
  {
    SymName_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SymName_20, 0) = ((MR_Box) (Name_9));
  }
  {
    GoalExpr_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_21, 0) = ((MR_Box) (PredId_15));
    MR_hl_field(2, GoalExpr_21, 1) = ((MR_Box) (ProcId_16));
    MR_hl_field(2, GoalExpr_21, 2) = ((MR_Box) (ArgVars_11));
    MR_hl_field(2, GoalExpr_21, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, GoalExpr_21, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_21, 5) = ((MR_Box) (SymName_20));
  }
  GoalInfo1_22 = hlds__hlds_goal__impure_init_goal_info_3_f_0(NonLocals_17, InstMapDelta_19, Detism_13);
  ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, GoalInfo1_22, &GoalInfo_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_23));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__goal_info_set_mdprof_inst_3_p_0(
  MR_Word IsMDProfInst_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  MR_Word MaybeDPInfo0_6;
  MR_Word MaybeDPInfo_9;

  MaybeDPInfo0_6 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
  if ((MaybeDPInfo0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = (MR_Box) ((MR_Unsigned) (IsMDProfInst_4));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeDPInfo_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeDPInfo_9, 0) = ((MR_Box) (Var_14));
    }
  }
  else
  {
    MR_Word DPCoverageInfo_8;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, MaybeDPInfo0_6, 0))));
    MR_Word Var_13;

    DPCoverageInfo_8 = ((MR_Word) ((MR_hl_field(0, Var_12, 1))));
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = (MR_Box) ((MR_Unsigned) (IsMDProfInst_4));
      MR_hl_field(0, Var_13, 1) = ((MR_Box) (DPCoverageInfo_8));
    }
    {
      MaybeDPInfo_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeDPInfo_9, 0) = ((MR_Box) (Var_13));
    }
  }
  hlds__hlds_goal__goal_info_set_maybe_dp_info_3_p_0(MaybeDPInfo_9, STATE_VARIABLE_GoalInfo_0_10, STATE_VARIABLE_GoalInfo_11);
}

void MR_CALL 
ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_p_0(
  MR_Word ModuleInfo_6,
  MR_String Name_7,
  MR_Integer Arity_8,
  MR_Word * PredId_9,
  MR_Integer * ProcId_10)
{
  MR_Word ModuleName_11;
  MR_Word PredTable_12;
  MR_Word PredIds_13;
  MR_Word Var_24;

  ModuleName_11 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_6, &PredTable_12);
  Var_24 = (MR_Word) (Arity_8);
  hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(PredTable_12, (MR_Integer) 0, ModuleName_11, Name_7, Var_24, &PredIds_13);
  if ((PredIds_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.get_deep_profile_builtin_ppid\'/5", (MR_String) "no pred_id");
      return;
    }
  else
  {
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, PredIds_13, 1))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, PredIds_13, 0))));

    if ((Var_39 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredIdTable_14;
      MR_Word PredInfo_15;
      MR_Word ProcIds_16;
      MR_Box conv0_PredInfo_15;

      *PredId_9 = Var_40;
      hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredTable_12, &PredIdTable_14);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_14, ((MR_Box) (*PredId_9)), &conv0_PredInfo_15);
      PredInfo_15 = ((MR_Word) (conv0_PredInfo_15));
      ProcIds_16 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_15);
      if ((ProcIds_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.get_deep_profile_builtin_ppid\'/5", (MR_String) "no proc_id");
          return;
        }
      else
      {
        MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, ProcIds_16, 1))));
        MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(1, ProcIds_16, 0))));

        if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
          *ProcId_10 = Var_42;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.get_deep_profile_builtin_ppid\'/5", (MR_String) "proc_id not unique");
            return;
          }
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.get_deep_profile_builtin_ppid\'/5", (MR_String) "pred_id not unique");
        return;
      }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_PredMap_16;

  ll_backend__deep_profiling__deep_prof_transform_pred_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PredMap_16);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PredMap_16));
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_8;

  ll_backend__deep_profiling__apply_deep_prof_tail_rec_transform_to_scc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_8));
}

void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  MR_Word Globals_8;
  MR_Word TailRecursion_9;
  MR_Word PredIds_10;
  MR_Word PredIdTable0_11;
  MR_Word PredIdTable_12;
  MR_Word STATE_VARIABLE_ModuleInfo_1_16;
  MR_Word STATE_VARIABLE_ModuleInfo_2_18;
  MR_Word Var_19;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Box conv3_PredIdTable_12;

  transform_hlds__dead_proc_elim__dead_proc_elim_5_p_0((MR_Integer) 0, &Var_6, &Var_7, STATE_VARIABLE_ModuleInfo_0_13, &STATE_VARIABLE_ModuleInfo_1_16);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_1_16, &Globals_8);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 71, &TailRecursion_9);
  switch (TailRecursion_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_ModuleInfo_2_18 = STATE_VARIABLE_ModuleInfo_1_16;
      break;
    case (MR_Integer) 1:
      {
        MR_Word DepInfo_25;
        MR_Word SCCs_26;
        MR_Word STATE_VARIABLE_ModuleInfo_1_27;
        MR_Box conv1_STATE_VARIABLE_ModuleInfo_2_18;

        hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_1_16, &STATE_VARIABLE_ModuleInfo_1_27, &DepInfo_25);
        SCCs_26 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_25);
        mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[5]), SCCs_26, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_27)), &conv1_STATE_VARIABLE_ModuleInfo_2_18);
        STATE_VARIABLE_ModuleInfo_2_18 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_2_18));
      }
      break;
  }
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_2_18, &PredIds_10);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_2_18, &PredIdTable0_11);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_5[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (ll_backend__deep_profiling__apply_deep_profiling_transform_3_p_0_2));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (ProgressStream_4));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_2_18));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[0]), Var_19, PredIds_10, ((MR_Box) (PredIdTable0_11)), &conv3_PredIdTable_12);
  PredIdTable_12 = ((MR_Word) (conv3_PredIdTable_12));
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_12, STATE_VARIABLE_ModuleInfo_2_18, STATE_VARIABLE_ModuleInfo_14);
}

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____call_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__deep_profiling____Unify____call_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__deep_profiling____Compare____call_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__deep_profiling____Compare____call_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__deep_profiling____Unify____deep_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__deep_profiling____Compare____deep_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__deep_profiling__init(void)
{
}

void mercury__ll_backend__deep_profiling__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_call_class_0);
  MR_register_type_ctor_info(&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0);
  MR_register_type_ctor_info(&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_prof_tail_rec_info_0);
}

void mercury__ll_backend__deep_profiling__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__deep_profiling__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.deep_profiling.
