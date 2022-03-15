/*
** Automatically generated from `deep_profiling.m'
** by the Mercury compiler,
** version rotd-2022-03-15
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
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_top_functor.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




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
ll_backend__deep_profiling__deep_prof_maybe_transform_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ProcTable_0_18,
  MR_Word * STATE_VARIABLE_ProcTable_19);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_inner_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_28,
  MR_Word * STATE_VARIABLE_ProcInfo_29);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredProcId_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_48,
  MR_Word * STATE_VARIABLE_ProcInfo_49,
  MR_Word * DeepLayoutInfo_9);

static MR_Word MR_CALL 
ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6);

static void MR_CALL 
ll_backend__deep_profiling__extract_deep_rec_info_2_p_0(
  MR_Word MaybeDeepProfInfo_3,
  MR_Word * MaybeRecInfo_4);

static void MR_CALL 
ll_backend__deep_profiling__generate_outermost_proc_dyns_8_p_0(
  MR_Word UseActivationCounts_9,
  MR_Word TopCSD_10,
  MR_Word MiddleCSD_11,
  MR_Word * MaybeOldActivationPtr_12,
  MR_Word * NewOutermostProcDyn_13,
  MR_Word * ExcpVars_14,
  MR_Word STATE_VARIABLE_VarInfo_0_17,
  MR_Word * STATE_VARIABLE_VarInfo_18);

static void MR_CALL 
ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(
  MR_Word UseActivationCounts_8,
  MR_Word TopCSD_9,
  MR_Word MiddleCSD_10,
  MR_Word * MaybeActivationPtr_11,
  MR_Word * ExcpVars_12,
  MR_Word STATE_VARIABLE_VarInfo_0_15,
  MR_Word * STATE_VARIABLE_VarInfo_16);

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
  MR_Word STATE_VARIABLE_DeepInfo_0_82,
  MR_Word * STATE_VARIABLE_DeepInfo_83);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_foreign_code_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_DeepInfo_0_29,
  MR_Word * STATE_VARIABLE_DeepInfo_30);

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
  MR_Word STATE_VARIABLE_DeepInfo_0_19,
  MR_Word * STATE_VARIABLE_DeepInfo_20);

static void MR_CALL 
ll_backend__deep_profiling__generate_deep_cell_unify_5_p_0(
  MR_Integer Length_6,
  MR_Word ConsId_7,
  MR_Word Args_8,
  MR_Word Var_9,
  MR_Word * Goal_10);

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
ll_backend__deep_profiling__generate_deep_det_call_6_p_0(
  MR_Word ModuleInfo_7,
  MR_String Name_8,
  MR_Integer Arity_9,
  MR_Word ArgVars_10,
  MR_Word OutputVars_11,
  MR_Word * Goal_12);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredMap_0_13,
  MR_Word * STATE_VARIABLE_PredMap_14);

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
  MR_Word Vars_6,
  MR_Word Modes_7,
  MR_Word Types_8,
  MR_Word ModuleInfo_9,
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word ModuleInfo_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_1(
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


static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_1[11][3];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_2[9][2];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_3[4][1];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_4[1][6];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_5[3][7];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_6[1][4];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_7[1][8];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_8[2][5];




static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_1[11][3] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_4[0])),
    ((MR_Box) (ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_5[1])),
    ((MR_Box) (ll_backend__deep_profiling__generate_csn_vector_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_5[2])),
    ((MR_Box) (ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_8[1])),
    ((MR_Box) (ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_8[1])),
    ((MR_Box) (ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_2[9][2] = {
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
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_3[4][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
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

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_5[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__deep_profiling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0))
  },
  /* row   2 */
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

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_6[1][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_1[5])))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

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

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_2[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0)
};

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

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_1[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1
};

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_2[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2
};

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
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__deep_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0),
  (MR_PseudoTypeInfo) (&ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&ll_backend__deep_profiling__cord__ti_cord_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0),
  (MR_PseudoTypeInfo) (&hlds__vartypes__hlds__vartypes__type_ctor_info_prog_var_set_types_0),
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
  (MR_String) "deep_varinfo",
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

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_info_0_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0
};

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

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_info_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0
};

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_info_0[1] = {
  (MR_Integer) 0
};

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
  {
    (MR_TypeInfo) (&ll_backend__deep_profiling__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_prof_tail_rec_info_0_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0
};

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

static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_prof_tail_rec_info_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0
};

static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_prof_tail_rec_info_0[1] = {
  (MR_Integer) 0
};

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 7);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 7);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
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
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 7);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 7);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
    MR_String ArgX8_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_String ArgY8_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
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

                hlds__vartypes____Compare____prog_var_set_types_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_String ArgX8_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
    MR_String ArgY8_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));

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
                succeeded = hlds__vartypes____Unify____prog_var_set_types_0_0(ArgX7_15, ArgY7_16);
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
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_29 == CastY_30);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_36 = (MR_Word) ((MR_Word) (HeadVar__2_2));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

                hlds__hlds_pred____Compare____pred_proc_id_0_0(HeadVar__1_1, Var_36, ArgY1_5);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_16;

                hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_16, Var_38, ArgY1_15);
                succeeded = (SubResult1_16 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_16;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Var_37)), ((MR_Box) (ArgY2_18)));
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                hlds__hlds_goal____Compare____generic_call_0_0(HeadVar__1_1, Var_35, ArgY1_28);
              }
              break;
          }
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
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
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
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
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
  MR_Word VarInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 6))));
  MR_String VarName_9;
  MR_Word VarInfo_10;
  MR_Word Var_17;
  MR_String Var_36;
  MR_Word STATE_VARIABLE_VarSet_14_52;
  MR_Word STATE_VARIABLE_VarTypes_15_53;
  MR_Word STATE_VARIABLE_VarSet_16_54;
  MR_Word STATE_VARIABLE_VarTypes_17_55;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_String Var_34;
  MR_Word Var_35;

  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_3[2]), CSN_5, &Var_36);
  VarName_9 = mercury__string__f_43_43_2_f_0((MR_String) "Depth", Var_36);
  Var_17 = parse_tree__builtin_lib_types__int_type_0_f_0();
  STATE_VARIABLE_VarSet_14_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInfo0_8, (MR_Integer) 0))));
  STATE_VARIABLE_VarTypes_15_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInfo0_8, (MR_Integer) 1))));
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_9, DepthVar_6, STATE_VARIABLE_VarSet_14_52, &STATE_VARIABLE_VarSet_16_54);
  hlds__vartypes__add_var_type_4_p_0(*DepthVar_6, Var_17, STATE_VARIABLE_VarTypes_15_53, &STATE_VARIABLE_VarTypes_17_55);
  {
    VarInfo_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarInfo_10, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_16_54));
    MR_hl_field(MR_mktag(0), VarInfo_10, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_17_55));
  }
  Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 0))));
  Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 4))));
  Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 5))));
  Var_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 7))));
  Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_DeepInfo_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (VarInfo_10));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_34));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_35));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4)
{
  MR_Word GoalExpr0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_3, (MR_Integer) 0))));
  MR_Word GoalInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_3, (MR_Integer) 1))));
  MR_Word GoalInfo_7;

  hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 1, GoalInfo0_6, &GoalInfo_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_4 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_5));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_7));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_maybe_transform_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ProcTable_0_18,
  MR_Word * STATE_VARIABLE_ProcTable_19)
{
  MR_bool succeeded;
  MR_Word ProcInfo0_10;
  MR_Word PredModuleName_11;
  MR_Box conv0_ProcInfo0_10;
  MR_Word Var_33;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_18, ((MR_Box) (ProcId_8)), &conv0_ProcInfo0_10);
  ProcInfo0_10 = ((MR_Word) (conv0_ProcInfo0_10));
  PredModuleName_11 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_6, PredId_7);
  Var_33 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PredModuleName_11, Var_33);
  if (succeeded)
    *STATE_VARIABLE_ProcTable_19 = STATE_VARIABLE_ProcTable_0_18;
  else
  {
    MR_Word ProcInfo_17;
    MR_Word Var_29;
    MR_Word MaybeDeepInfo_43;
    MR_Word MaybeDeepRecInfo_45;
    MR_Word OrigBody_47;
    MR_Word MaybeDeepLayoutInfo_50;
    MR_Word DeepInfo_52;
    MR_Word STATE_VARIABLE_ProcInfo_22_55;
    MR_Word Var_57;
    MR_Word Globals_13;
    MR_Word VeryVerbose_14;
    MR_String ProcName_15;
    MR_Word ProgressStream_16;
    MR_String Var_23;
    MR_String Var_35;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 71, &VeryVerbose_14);
    ProcName_15 = hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(ModuleInfo_6, PredId_7, ProcId_8);
    hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_6, &ProgressStream_16);
    Var_35 = mercury__string__f_43_43_2_f_0(ProcName_15, (MR_String) "\n");
    Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "% Deep profiling: ", Var_35);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_16, VeryVerbose_14, Var_23);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (PredId_7));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ProcId_8));
    }
    hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ProcInfo0_10, &MaybeDeepInfo_43);
    if ((MaybeDeepInfo_43 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DeepLayoutInfo_59;
      MR_Word Body_64;
      MR_Word HeadVars_65;
      MR_Word Instmap_66;
      MR_Word Vartypes_67;
      MR_Word MaybeDetism_68;
      MR_Word Detism_69;
      MR_Word Varset_70;

      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_10, &Body_64);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_10, &HeadVars_65);
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ModuleInfo_6, ProcInfo0_10, &Instmap_66);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_10, &Vartypes_67);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_10, &MaybeDetism_68);
      if ((MaybeDetism_68 == (MR_Word) ((MR_Unsigned) 0U)))
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo0_10, &Detism_69);
      else
        Detism_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_68, (MR_Integer) 0))));
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo0_10, &Varset_70);
      {
        OrigBody_47 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OrigBody_47, 0) = ((MR_Box) (Body_64));
        MR_hl_field(MR_mktag(0), OrigBody_47, 1) = ((MR_Box) (HeadVars_65));
        MR_hl_field(MR_mktag(0), OrigBody_47, 2) = ((MR_Box) (Instmap_66));
        MR_hl_field(MR_mktag(0), OrigBody_47, 3) = ((MR_Box) (Vartypes_67));
        MR_hl_field(MR_mktag(0), OrigBody_47, 4) = (MR_Box) ((MR_Unsigned) (Detism_69));
        MR_hl_field(MR_mktag(0), OrigBody_47, 5) = ((MR_Box) (Varset_70));
      }
      ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(ModuleInfo_6, Var_29, ProcInfo0_10, &STATE_VARIABLE_ProcInfo_22_55, &DeepLayoutInfo_59);
      {
        MaybeDeepLayoutInfo_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDeepLayoutInfo_50, 0) = ((MR_Box) (DeepLayoutInfo_59));
      }
      MaybeDeepRecInfo_45 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word DeepInfo0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeepInfo_43, (MR_Integer) 0))));
      MR_Word RecInfo_48;
      MR_Word Var_54;

      MaybeDeepRecInfo_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepInfo0_44, (MR_Integer) 0))));
      OrigBody_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepInfo0_44, (MR_Integer) 2))));
      succeeded = (MaybeDeepRecInfo_45 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        RecInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeepRecInfo_45, (MR_Integer) 0))));
        Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecInfo_48, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        ll_backend__deep_profiling__deep_prof_transform_inner_proc_4_p_0(ModuleInfo_6, Var_29, ProcInfo0_10, &STATE_VARIABLE_ProcInfo_22_55);
        MaybeDeepLayoutInfo_50 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word DeepLayoutInfo_51;

        ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(ModuleInfo_6, Var_29, ProcInfo0_10, &STATE_VARIABLE_ProcInfo_22_55, &DeepLayoutInfo_51);
        {
          MaybeDeepLayoutInfo_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeDeepLayoutInfo_50, 0) = ((MR_Box) (DeepLayoutInfo_51));
        }
      }
    }
    {
      DeepInfo_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DeepInfo_52, 0) = ((MR_Box) (MaybeDeepRecInfo_45));
      MR_hl_field(MR_mktag(0), DeepInfo_52, 1) = ((MR_Box) (MaybeDeepLayoutInfo_50));
      MR_hl_field(MR_mktag(0), DeepInfo_52, 2) = ((MR_Box) (OrigBody_47));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (DeepInfo_52));
    }
    hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_p_0(Var_57, STATE_VARIABLE_ProcInfo_22_55, &ProcInfo_17);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_8)), ((MR_Box) (ProcInfo_17)), STATE_VARIABLE_ProcTable_0_18, STATE_VARIABLE_ProcTable_19);
  }
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_inner_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_28,
  MR_Word * STATE_VARIABLE_ProcInfo_29)
{
  MR_Word ContainingGoalMap_8;
  MR_Word Goal0_9;
  MR_Word GoalInfo0_11;
  MR_Word VarSet0_12;
  MR_Word VarTypes0_13;
  MR_Word VarInfo0_14;
  MR_Word MiddleCSD_15;
  MR_Word VarInfo1_16;
  MR_Word Context_17;
  MR_String FileName_18;
  MR_Word MaybeDeepProfInfo_19;
  MR_Word MaybeRecInfo_20;
  MR_Word DeepInfo0_21;
  MR_Word Goal_22;
  MR_Word DeepInfo_24;
  MR_Word VarInfo_25;
  MR_Word VarSet_26;
  MR_Word VarTypes_27;
  MR_Word STATE_VARIABLE_ProcInfo_30_30;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_ProcInfo_36_36;
  MR_Word STATE_VARIABLE_ProcInfo_37_37;
  MR_Word STATE_VARIABLE_VarSet_14_56;
  MR_Word STATE_VARIABLE_VarTypes_15_57;
  MR_Word STATE_VARIABLE_VarSet_16_58;
  MR_Word STATE_VARIABLE_VarTypes_17_59;
  MR_Word Var_23;

  hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ModuleInfo_5, &ContainingGoalMap_8, STATE_VARIABLE_ProcInfo_0_28, &STATE_VARIABLE_ProcInfo_30_30);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_30_30, &Goal0_9);
  GoalInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));
  hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_30_30, &VarSet0_12);
  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_30_30, &VarTypes0_13);
  {
    VarInfo0_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarInfo0_14, 0) = ((MR_Box) (VarSet0_12));
    MR_hl_field(MR_mktag(0), VarInfo0_14, 1) = ((MR_Box) (VarTypes0_13));
  }
  Var_32 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  STATE_VARIABLE_VarSet_14_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInfo0_14, (MR_Integer) 0))));
  STATE_VARIABLE_VarTypes_15_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInfo0_14, (MR_Integer) 1))));
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "MiddleCSD", &MiddleCSD_15, STATE_VARIABLE_VarSet_14_56, &STATE_VARIABLE_VarSet_16_58);
  hlds__vartypes__add_var_type_4_p_0(MiddleCSD_15, Var_32, STATE_VARIABLE_VarTypes_15_57, &STATE_VARIABLE_VarTypes_17_59);
  {
    VarInfo1_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarInfo1_16, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_16_58));
    MR_hl_field(MR_mktag(0), VarInfo1_16, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_17_59));
  }
  Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
  FileName_18 = mercury__term__context_file_1_f_0(Context_17);
  hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(STATE_VARIABLE_ProcInfo_30_30, &MaybeDeepProfInfo_19);
  if ((MaybeDeepProfInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeRecInfo_20 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DeepProfInfo_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeepProfInfo_19, (MR_Integer) 0))));

    MaybeRecInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepProfInfo_75, (MR_Integer) 0))));
  }
  Var_33 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_35 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0));
  {
    DeepInfo0_21 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), DeepInfo0_21, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(MR_mktag(0), DeepInfo0_21, 1) = ((MR_Box) (PredProcId_6));
    MR_hl_field(MR_mktag(0), DeepInfo0_21, 2) = ((MR_Box) (ContainingGoalMap_8));
    MR_hl_field(MR_mktag(0), DeepInfo0_21, 3) = ((MR_Box) (MiddleCSD_15));
    MR_hl_field(MR_mktag(0), DeepInfo0_21, 4) = ((MR_Box) (Var_33));
    MR_hl_field(MR_mktag(0), DeepInfo0_21, 5) = ((MR_Box) (Var_35));
    MR_hl_field(MR_mktag(0), DeepInfo0_21, 6) = ((MR_Box) (VarInfo1_16));
    MR_hl_field(MR_mktag(0), DeepInfo0_21, 7) = ((MR_Box) (FileName_18));
    MR_hl_field(MR_mktag(0), DeepInfo0_21, 8) = ((MR_Box) (MaybeRecInfo_20));
  }
  ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Goal0_9, &Goal_22, &Var_23, DeepInfo0_21, &DeepInfo_24);
  VarInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepInfo_24, (MR_Integer) 6))));
  VarSet_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInfo_25, (MR_Integer) 0))));
  VarTypes_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInfo_25, (MR_Integer) 1))));
  hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_26, STATE_VARIABLE_ProcInfo_30_30, &STATE_VARIABLE_ProcInfo_36_36);
  hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_27, STATE_VARIABLE_ProcInfo_36_36, &STATE_VARIABLE_ProcInfo_37_37);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_22, STATE_VARIABLE_ProcInfo_37_37, STATE_VARIABLE_ProcInfo_29);
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredProcId_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_48,
  MR_Word * STATE_VARIABLE_ProcInfo_49,
  MR_Word * DeepLayoutInfo_9)
{
  MR_bool succeeded;
  MR_Word ContainingGoalMap_10;
  MR_Word Globals_11;
  MR_Word VarSet0_12;
  MR_Word VarTypes0_13;
  MR_Word GoalInfo0_18;
  MR_Word TopCSD_19;
  MR_Word MiddleCSD_20;
  MR_Word ProcStaticVar_21;
  MR_Word Context_22;
  MR_String FileName_23;
  MR_Integer LineNumber_24;
  MR_Word MaybeDeepProfInfo_25;
  MR_Word MaybeRecInfo_26;
  MR_Word CallSites_28;
  MR_Word DoCoverageProfiling_29;
  MR_Word CoveragePoints_30;
  MR_Word PredId_33;
  MR_Integer ProcId_34;
  MR_Word UseActivationCounts_35;
  MR_Word IsInInterface_36;
  MR_Word ProcStatic_37;
  MR_Word ShroudedPredProcId_38;
  MR_Word ProcStaticConsId_39;
  MR_Word BindProcStaticVarGoal_40;
  MR_Word CodeModel_41;
  MR_Word ExcpVars_43;
  MR_Word Vars_46;
  MR_Word VarTypes_47;
  MR_Word STATE_VARIABLE_ProcInfo_50_50;
  MR_Word STATE_VARIABLE_Goal_51_51;
  MR_Word STATE_VARIABLE_VarInfo_52_52;
  MR_Word Var_54;
  MR_Word STATE_VARIABLE_VarInfo_55_55;
  MR_Word Var_57;
  MR_Word STATE_VARIABLE_VarInfo_58_58;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_VarInfo_61_61;
  MR_Word STATE_VARIABLE_DeepInfo_62_62;
  MR_Word Var_63;
  MR_Word Var_65;
  MR_Word STATE_VARIABLE_Goal_66_66;
  MR_Word STATE_VARIABLE_DeepInfo_67_67;
  MR_Word STATE_VARIABLE_VarInfo_68_68;
  MR_Word STATE_VARIABLE_Goal_71_71;
  MR_Word STATE_VARIABLE_VarInfo_72_72;
  MR_Word Var_75;
  MR_Word STATE_VARIABLE_VarInfo_80_80;
  MR_Word STATE_VARIABLE_Goal_81_81;
  MR_Word STATE_VARIABLE_ProcInfo_82_82;
  MR_Word STATE_VARIABLE_ProcInfo_83_83;
  MR_Word Var_91;
  MR_Word Var_27;
  MR_Word OuterPredProcId_32;
  MR_Word RecInfo_31;
  MR_Word Var_73;

  hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ModuleInfo_6, &ContainingGoalMap_10, STATE_VARIABLE_ProcInfo_0_48, &STATE_VARIABLE_ProcInfo_50_50);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_11);
  hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_50_50, &VarSet0_12);
  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_50_50, &VarTypes0_13);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_50_50, &STATE_VARIABLE_Goal_51_51);
  GoalInfo0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_51_51, (MR_Integer) 1))));
  {
    STATE_VARIABLE_VarInfo_52_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_52_52, 0) = ((MR_Box) (VarSet0_12));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_52_52, 1) = ((MR_Box) (VarTypes0_13));
  }
  Var_54 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "TopCSD", Var_54, &TopCSD_19, STATE_VARIABLE_VarInfo_52_52, &STATE_VARIABLE_VarInfo_55_55);
  Var_57 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "MiddleCSD", Var_57, &MiddleCSD_20, STATE_VARIABLE_VarInfo_55_55, &STATE_VARIABLE_VarInfo_58_58);
  Var_60 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "ProcStaticLayout", Var_60, &ProcStaticVar_21, STATE_VARIABLE_VarInfo_58_58, &STATE_VARIABLE_VarInfo_61_61);
  hlds__hlds_pred__proc_info_get_context_2_p_0(STATE_VARIABLE_ProcInfo_50_50, &Context_22);
  FileName_23 = mercury__term__context_file_1_f_0(Context_22);
  LineNumber_24 = mercury__term__context_line_1_f_0(Context_22);
  hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(STATE_VARIABLE_ProcInfo_50_50, &MaybeDeepProfInfo_25);
  ll_backend__deep_profiling__extract_deep_rec_info_2_p_0(MaybeDeepProfInfo_25, &MaybeRecInfo_26);
  Var_63 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_65 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0));
  {
    STATE_VARIABLE_DeepInfo_62_62 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_62_62, 0) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_62_62, 1) = ((MR_Box) (PredProcId_7));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_62_62, 2) = ((MR_Box) (ContainingGoalMap_10));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_62_62, 3) = ((MR_Box) (MiddleCSD_20));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_62_62, 4) = ((MR_Box) (Var_63));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_62_62, 5) = ((MR_Box) (Var_65));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_62_62, 6) = ((MR_Box) (STATE_VARIABLE_VarInfo_61_61));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_62_62, 7) = ((MR_Box) (FileName_23));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_62_62, 8) = ((MR_Box) (MaybeRecInfo_26));
  }
  ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(STATE_VARIABLE_Goal_51_51, &STATE_VARIABLE_Goal_66_66, &Var_27, STATE_VARIABLE_DeepInfo_62_62, &STATE_VARIABLE_DeepInfo_67_67);
  Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 5))));
  STATE_VARIABLE_VarInfo_68_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 6))));
  CallSites_28 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), Var_91);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 241, &DoCoverageProfiling_29);
  switch (DoCoverageProfiling_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        CoveragePoints_30 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_VarInfo_72_72 = STATE_VARIABLE_VarInfo_68_68;
        STATE_VARIABLE_Goal_71_71 = STATE_VARIABLE_Goal_66_66;
      }
      break;
    case (MR_Integer) 1:
      ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_p_0(ModuleInfo_6, PredProcId_7, ContainingGoalMap_10, MaybeRecInfo_26, STATE_VARIABLE_Goal_66_66, &STATE_VARIABLE_Goal_71_71, STATE_VARIABLE_VarInfo_68_68, &STATE_VARIABLE_VarInfo_72_72, &CoveragePoints_30);
      break;
  }
  succeeded = (MaybeRecInfo_26 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    RecInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRecInfo_26, (MR_Integer) 0))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecInfo_31, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_73)) == (MR_Integer) 0);
    if (succeeded)
      OuterPredProcId_32 = (MR_Word) ((MR_Word) (Var_73));
  }
  if (succeeded)
  {
    PredId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OuterPredProcId_32, (MR_Integer) 0))));
    ProcId_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OuterPredProcId_32, (MR_Integer) 1))));
  }
  else
  {
    PredId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_7, (MR_Integer) 0))));
    ProcId_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_7, (MR_Integer) 1))));
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 238, &UseActivationCounts_35);
  IsInInterface_36 = ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_f_0(ModuleInfo_6, PredId_33);
  {
    ProcStatic_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ProcStatic_37, 0) = ((MR_Box) (FileName_23));
    MR_hl_field(MR_mktag(0), ProcStatic_37, 1) = ((MR_Box) (LineNumber_24));
    MR_hl_field(MR_mktag(0), ProcStatic_37, 2) = (MR_Box) ((MR_Unsigned) (IsInInterface_36));
    MR_hl_field(MR_mktag(0), ProcStatic_37, 3) = ((MR_Box) (CallSites_28));
    MR_hl_field(MR_mktag(0), ProcStatic_37, 4) = ((MR_Box) (CoveragePoints_30));
  }
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (PredId_33));
    MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (ProcId_34));
  }
  ShroudedPredProcId_38 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_75);
  {
    ProcStaticConsId_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ProcStaticConsId_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), ProcStaticConsId_39, 1) = ((MR_Box) (ShroudedPredProcId_38));
  }
  ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ProcStaticConsId_39, ProcStaticVar_21, &BindProcStaticVarGoal_40);
  CodeModel_41 = hlds__code_model__proc_info_interface_code_model_1_f_0(STATE_VARIABLE_ProcInfo_50_50);
  switch (CodeModel_41) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeActivationPtr_42;

        ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(UseActivationCounts_35, TopCSD_19, MiddleCSD_20, &MaybeActivationPtr_42, &ExcpVars_43, STATE_VARIABLE_VarInfo_72_72, &STATE_VARIABLE_VarInfo_80_80);
        ll_backend__deep_profiling__build_det_proc_body_9_p_0(ModuleInfo_6, TopCSD_19, MiddleCSD_20, ProcStaticVar_21, MaybeActivationPtr_42, GoalInfo0_18, BindProcStaticVarGoal_40, STATE_VARIABLE_Goal_71_71, &STATE_VARIABLE_Goal_81_81);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeOldActivationPtr_44;
        MR_Word NewOutermostProcDyn_45;

        ll_backend__deep_profiling__generate_outermost_proc_dyns_8_p_0(UseActivationCounts_35, TopCSD_19, MiddleCSD_20, &MaybeOldActivationPtr_44, &NewOutermostProcDyn_45, &ExcpVars_43, STATE_VARIABLE_VarInfo_72_72, &STATE_VARIABLE_VarInfo_80_80);
        ll_backend__deep_profiling__build_non_proc_body_10_p_0(ModuleInfo_6, TopCSD_19, MiddleCSD_20, ProcStaticVar_21, MaybeOldActivationPtr_44, NewOutermostProcDyn_45, GoalInfo0_18, BindProcStaticVarGoal_40, STATE_VARIABLE_Goal_71_71, &STATE_VARIABLE_Goal_81_81);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeActivationPtr_85;

        ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(UseActivationCounts_35, TopCSD_19, MiddleCSD_20, &MaybeActivationPtr_85, &ExcpVars_43, STATE_VARIABLE_VarInfo_72_72, &STATE_VARIABLE_VarInfo_80_80);
        ll_backend__deep_profiling__build_semi_proc_body_9_p_0(ModuleInfo_6, TopCSD_19, MiddleCSD_20, ProcStaticVar_21, MaybeActivationPtr_85, GoalInfo0_18, BindProcStaticVarGoal_40, STATE_VARIABLE_Goal_71_71, &STATE_VARIABLE_Goal_81_81);
      }
      break;
  }
  Vars_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_80_80, (MR_Integer) 0))));
  VarTypes_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_80_80, (MR_Integer) 1))));
  hlds__hlds_pred__proc_info_set_varset_3_p_0(Vars_46, STATE_VARIABLE_ProcInfo_50_50, &STATE_VARIABLE_ProcInfo_82_82);
  hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_47, STATE_VARIABLE_ProcInfo_82_82, &STATE_VARIABLE_ProcInfo_83_83);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_81_81, STATE_VARIABLE_ProcInfo_83_83, STATE_VARIABLE_ProcInfo_49);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DeepLayoutInfo_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ProcStatic_37));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExcpVars_43));
  }
}

static MR_Word MR_CALL 
ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6)
{
  MR_bool succeeded;
  MR_Word IsInInterface_8;
  MR_Word PredInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_9);
  succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_9);
  if (!(succeeded))
    succeeded = hlds__hlds_pred__pred_info_is_pseudo_exported_1_p_0(PredInfo_9);
  if (succeeded)
    IsInInterface_8 = (MR_Integer) 1;
  else
    IsInInterface_8 = (MR_Integer) 0;
  return IsInInterface_8;
}

static void MR_CALL 
ll_backend__deep_profiling__extract_deep_rec_info_2_p_0(
  MR_Word MaybeDeepProfInfo_3,
  MR_Word * MaybeRecInfo_4)
{
  if ((MaybeDeepProfInfo_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeRecInfo_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DeepProfInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeepProfInfo_3, (MR_Integer) 0))));

    *MaybeRecInfo_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepProfInfo_5, (MR_Integer) 0))));
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
  MR_Word STATE_VARIABLE_VarInfo_0_17,
  MR_Word * STATE_VARIABLE_VarInfo_18)
{
  MR_Word STATE_VARIABLE_VarInfo_21_21;
  MR_Word Var_23;
  MR_Word STATE_VARIABLE_VarSet_14_58;
  MR_Word STATE_VARIABLE_VarTypes_15_59;
  MR_Word STATE_VARIABLE_VarSet_16_60;
  MR_Word STATE_VARIABLE_VarTypes_17_61;

  switch (UseActivationCounts_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OldOutermostProcDyn0_16;
        MR_Word Var_20;
        MR_Word STATE_VARIABLE_VarSet_14_33;
        MR_Word STATE_VARIABLE_VarTypes_15_34;
        MR_Word STATE_VARIABLE_VarSet_16_35;
        MR_Word STATE_VARIABLE_VarTypes_17_36;

        Var_20 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        STATE_VARIABLE_VarSet_14_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_17, (MR_Integer) 0))));
        STATE_VARIABLE_VarTypes_15_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_17, (MR_Integer) 1))));
        mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "OldOutermost", &OldOutermostProcDyn0_16, STATE_VARIABLE_VarSet_14_33, &STATE_VARIABLE_VarSet_16_35);
        hlds__vartypes__add_var_type_4_p_0(OldOutermostProcDyn0_16, Var_20, STATE_VARIABLE_VarTypes_15_34, &STATE_VARIABLE_VarTypes_17_36);
        {
          STATE_VARIABLE_VarInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_21_21, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_16_35));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_21_21, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_17_36));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeOldActivationPtr_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OldOutermostProcDyn0_16));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *MaybeOldActivationPtr_12 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_VarInfo_21_21 = STATE_VARIABLE_VarInfo_0_17;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ExcpVars_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TopCSD_10));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MiddleCSD_11));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (*MaybeOldActivationPtr_12));
  }
  Var_23 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  STATE_VARIABLE_VarSet_14_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_21_21, (MR_Integer) 0))));
  STATE_VARIABLE_VarTypes_15_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_21_21, (MR_Integer) 1))));
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "NewOutermost", NewOutermostProcDyn_13, STATE_VARIABLE_VarSet_14_58, &STATE_VARIABLE_VarSet_16_60);
  hlds__vartypes__add_var_type_4_p_0(*NewOutermostProcDyn_13, Var_23, STATE_VARIABLE_VarTypes_15_59, &STATE_VARIABLE_VarTypes_17_61);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarInfo_18 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_16_60));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_17_61));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(
  MR_Word UseActivationCounts_8,
  MR_Word TopCSD_9,
  MR_Word MiddleCSD_10,
  MR_Word * MaybeActivationPtr_11,
  MR_Word * ExcpVars_12,
  MR_Word STATE_VARIABLE_VarInfo_0_15,
  MR_Word * STATE_VARIABLE_VarInfo_16)
{
  switch (UseActivationCounts_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ActivationPtr0_14;
        MR_Word Var_18;
        MR_Word STATE_VARIABLE_VarSet_14_28;
        MR_Word STATE_VARIABLE_VarTypes_15_29;
        MR_Word STATE_VARIABLE_VarSet_16_30;
        MR_Word STATE_VARIABLE_VarTypes_17_31;

        Var_18 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        STATE_VARIABLE_VarSet_14_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_15, (MR_Integer) 0))));
        STATE_VARIABLE_VarTypes_15_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_15, (MR_Integer) 1))));
        mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "ActivationPtr", &ActivationPtr0_14, STATE_VARIABLE_VarSet_14_28, &STATE_VARIABLE_VarSet_16_30);
        hlds__vartypes__add_var_type_4_p_0(ActivationPtr0_14, Var_18, STATE_VARIABLE_VarTypes_15_29, &STATE_VARIABLE_VarTypes_17_31);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_VarInfo_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_16_30));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_17_31));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeActivationPtr_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ActivationPtr0_14));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *MaybeActivationPtr_11 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarInfo_16 = STATE_VARIABLE_VarInfo_0_15;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ExcpVars_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TopCSD_9));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MiddleCSD_10));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (*MaybeActivationPtr_11));
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
    MR_Word Case0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_11;
    MR_Word Cases_12;
    MR_Word MainConsId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 0))));
    MR_Word OtherConsIds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 1))));
    MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 2))));
    MR_Word Goal_18;
    MR_Word AddedImpurityFirst_19;
    MR_Word AddedImpurityLater_20;
    MR_Word STATE_VARIABLE_DeepInfo_23_23;

    ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Goal0_17, &Goal_18, &AddedImpurityFirst_19, STATE_VARIABLE_DeepInfo_0_4, &STATE_VARIABLE_DeepInfo_23_23);
    {
      Case_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_11, 0) = ((MR_Box) (MainConsId_15));
      MR_hl_field(MR_mktag(0), Case_11, 1) = ((MR_Box) (OtherConsIds_16));
      MR_hl_field(MR_mktag(0), Case_11, 2) = ((MR_Box) (Goal_18));
    }
    ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(Cases0_10, &Cases_12, &AddedImpurityLater_20, STATE_VARIABLE_DeepInfo_23_23, STATE_VARIABLE_DeepInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_12));
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
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;
    MR_Word AddedImpurityFirst_15;
    MR_Word AddedImpurityLater_16;
    MR_Word STATE_VARIABLE_DeepInfo_19_19;

    ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Goal0_9, &Goal_11, &AddedImpurityFirst_15, STATE_VARIABLE_DeepInfo_0_4, &STATE_VARIABLE_DeepInfo_19_19);
    ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(Goals0_10, &Goals_12, &AddedImpurityLater_16, STATE_VARIABLE_DeepInfo_19_19, STATE_VARIABLE_DeepInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_12));
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
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_17;
    MR_Word AddedImpurityFirst_18;
    MR_Word TailGoals_19;
    MR_Word AddedImpurityLater_20;
    MR_Word GoalExpr_21;
    MR_Word STATE_VARIABLE_DeepInfo_26_26;
    MR_Word Conjuncts_23;
    MR_Word Var_28;

    ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Goal0_12, &Goal_17, &AddedImpurityFirst_18, STATE_VARIABLE_DeepInfo_0_5, &STATE_VARIABLE_DeepInfo_26_26);
    ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(ConjType_1, Goals0_13, &TailGoals_19, &AddedImpurityLater_20, STATE_VARIABLE_DeepInfo_26_26, STATE_VARIABLE_DeepInfo_6);
    GoalExpr_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 0))));
    succeeded = (ConjType_1 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) GoalExpr_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_21, (MR_Integer) 1))) & (MR_Integer) 1);
        Conjuncts_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_21, (MR_Integer) 2))));
        succeeded = (Var_28 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts_23, TailGoals_19);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailGoals_19));
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
  MR_Word STATE_VARIABLE_DeepInfo_0_82,
  MR_Word * STATE_VARIABLE_DeepInfo_83)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0))));
  MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1))));
  MR_Word GoalInfo1_12;
  MR_Word Goal1_13;

  hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 1, GoalInfo0_11, &GoalInfo1_12);
  {
    Goal1_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Goal1_13, 0) = ((MR_Box) (GoalExpr0_10));
    MR_hl_field(MR_mktag(0), Goal1_13, 1) = ((MR_Box) (GoalInfo1_12));
  }
  switch (MR_tag((MR_Word) GoalExpr0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_57 = (MR_Word) ((MR_Word) (GoalExpr0_10));
        MR_Word SubGoal_58;
        MR_Word GoalInfo_112;
        MR_Word GoalExpr_113;

        ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(SubGoal0_57, &SubGoal_58, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_82, STATE_VARIABLE_DeepInfo_83);
        hlds__hlds_goal__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_112);
        GoalExpr_113 = (MR_Word) ((MR_Word) (SubGoal_58));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_113));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_112));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *Goal_7 = Goal1_13;
        *AddedImpurity_8 = (MR_Integer) 0;
        *STATE_VARIABLE_DeepInfo_83 = STATE_VARIABLE_DeepInfo_0_82;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinState_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_10, (MR_Integer) 3))) & (MR_Integer) 1);

        switch (BuiltinState_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Goal_7 = Goal1_13;
              *AddedImpurity_8 = (MR_Integer) 0;
              *STATE_VARIABLE_DeepInfo_83 = STATE_VARIABLE_DeepInfo_0_82;
            }
            break;
          case (MR_Integer) 1:
            {
              ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(Goal1_13, Goal_7, STATE_VARIABLE_DeepInfo_0_82, STATE_VARIABLE_DeepInfo_83);
              *AddedImpurity_8 = (MR_Integer) 1;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) GenericCall_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(Goal1_13, Goal_7, STATE_VARIABLE_DeepInfo_0_82, STATE_VARIABLE_DeepInfo_83);
                  *AddedImpurity_8 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  *Goal_7 = Goal1_13;
                  *AddedImpurity_8 = (MR_Integer) 0;
                  *STATE_VARIABLE_DeepInfo_83 = STATE_VARIABLE_DeepInfo_0_82;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attrs_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
            MR_Word MayCallMercury_42;

            MayCallMercury_42 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attrs_35);
            switch (MayCallMercury_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  ll_backend__deep_profiling__deep_prof_wrap_foreign_code_4_p_0(Goal1_13, Goal_7, STATE_VARIABLE_DeepInfo_0_82, STATE_VARIABLE_DeepInfo_83);
                  *AddedImpurity_8 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 1:
                {
                  *Goal_7 = Goal1_13;
                  *AddedImpurity_8 = (MR_Integer) 0;
                  *STATE_VARIABLE_DeepInfo_83 = STATE_VARIABLE_DeepInfo_0_82;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
            MR_Word Goals_50;
            MR_Word GoalInfo_51;
            MR_Word GoalExpr_52;

            ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(ConjType_48, Goals0_49, &Goals_50, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_82, STATE_VARIABLE_DeepInfo_83);
            hlds__hlds_goal__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_51);
            {
              GoalExpr_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), GoalExpr_52, 1) = (MR_Box) ((MR_Unsigned) (ConjType_48));
              MR_hl_field(MR_mktag(3), GoalExpr_52, 2) = ((MR_Box) (Goals_50));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_52));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_51));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
            MR_Word Goals_107;
            MR_Word GoalInfo_108;
            MR_Word GoalExpr_109;

            ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(Goals0_106, &Goals_107, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_82, STATE_VARIABLE_DeepInfo_83);
            hlds__hlds_goal__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_108);
            {
              GoalExpr_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_109, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), GoalExpr_109, 1) = ((MR_Box) (Goals_107));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_109));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_108));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
            MR_Word CanFail_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
            MR_Word Cases_56;
            MR_Word GoalInfo_110;
            MR_Word GoalExpr_111;

            ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(Cases0_55, &Cases_56, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_82, STATE_VARIABLE_DeepInfo_83);
            hlds__hlds_goal__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_110);
            {
              GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_111, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), GoalExpr_111, 1) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(3), GoalExpr_111, 2) = (MR_Box) ((MR_Unsigned) (CanFail_54));
              MR_hl_field(MR_mktag(3), GoalExpr_111, 3) = ((MR_Box) (Cases_56));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_111));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_110));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
            MR_Word InnerInfo_71;
            MR_Word OuterDetism_72;
            MR_Word InnerDetism_73;
            MR_Word SubGoal0_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));

            InnerInfo_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_117, (MR_Integer) 1))));
            OuterDetism_72 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo1_12);
            InnerDetism_73 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(InnerInfo_71);
            succeeded = (InnerDetism_73 == OuterDetism_72);
            if (succeeded)
            {
              MR_Word Var_95;
              MR_Word GoalInfo_116;
              MR_Word SubGoal_118;
              MR_Word FGT_78;

              succeeded = ((((MR_tag((MR_Word) Reason0_69)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_69, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_69, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_78) {
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
                hlds__goal_util__transform_all_goals_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_1[9]), SubGoal0_117, &SubGoal_118);
                *AddedImpurity_8 = (MR_Integer) 0;
                *STATE_VARIABLE_DeepInfo_83 = STATE_VARIABLE_DeepInfo_0_82;
              }
              else
                ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(SubGoal0_117, &SubGoal_118, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_82, STATE_VARIABLE_DeepInfo_83);
              hlds__hlds_goal__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_116);
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (Reason0_69));
                MR_hl_field(MR_mktag(3), Var_95, 2) = ((MR_Box) (SubGoal_118));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_95));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_116));
              }
            }
            else
            {
              succeeded = ((((MR_tag((MR_Word) Reason0_69)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_69, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                MR_Word Var_128;
                MR_Word GoalInfo_136;
                MR_Word SubGoal_137;

                ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(SubGoal0_117, &SubGoal_137, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_82, STATE_VARIABLE_DeepInfo_83);
                hlds__hlds_goal__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_136);
                {
                  Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_2[7])));
                  MR_hl_field(MR_mktag(3), Var_128, 2) = ((MR_Box) (SubGoal_137));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_128));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_136));
                }
              }
              else
              {
                MR_Word InnerGoalInfo_79;
                MR_Word InnerGoal_80;
                MR_Word Var_91;
                MR_Word Var_92;
                MR_Word GoalInfo_151;
                MR_Word SubGoal_152;
                MR_Word FGT_141;

                succeeded = ((((MR_tag((MR_Word) Reason0_69)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_69, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_141 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_69, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_141) {
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
                  hlds__goal_util__transform_all_goals_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_1[10]), SubGoal0_117, &SubGoal_152);
                  *AddedImpurity_8 = (MR_Integer) 0;
                  *STATE_VARIABLE_DeepInfo_83 = STATE_VARIABLE_DeepInfo_0_82;
                }
                else
                  ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(SubGoal0_117, &SubGoal_152, AddedImpurity_8, STATE_VARIABLE_DeepInfo_0_82, STATE_VARIABLE_DeepInfo_83);
                hlds__hlds_goal__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_151);
                hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, GoalInfo_151, &InnerGoalInfo_79);
                {
                  Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (Reason0_69));
                  MR_hl_field(MR_mktag(3), Var_91, 2) = ((MR_Box) (SubGoal_152));
                }
                {
                  InnerGoal_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InnerGoal_80, 0) = ((MR_Box) (Var_91));
                  MR_hl_field(MR_mktag(0), InnerGoal_80, 1) = ((MR_Box) (InnerGoalInfo_79));
                }
                {
                  Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_2[7])));
                  MR_hl_field(MR_mktag(3), Var_92, 2) = ((MR_Box) (InnerGoal_80));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_92));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_151));
                }
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word IVars_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
            MR_Word Cond0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
            MR_Word Then0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
            MR_Word Else0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 4))));
            MR_Word Cond_63;
            MR_Word AddedImpurityC_64;
            MR_Word Then_65;
            MR_Word AddedImpurityT_66;
            MR_Word Else_67;
            MR_Word AddedImpurityE_68;
            MR_Word STATE_VARIABLE_DeepInfo_96_96;
            MR_Word STATE_VARIABLE_DeepInfo_97_97;
            MR_Word GoalInfo_114;
            MR_Word GoalExpr_115;

            ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Cond0_60, &Cond_63, &AddedImpurityC_64, STATE_VARIABLE_DeepInfo_0_82, &STATE_VARIABLE_DeepInfo_96_96);
            ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Then0_61, &Then_65, &AddedImpurityT_66, STATE_VARIABLE_DeepInfo_96_96, &STATE_VARIABLE_DeepInfo_97_97);
            ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(Else0_62, &Else_67, &AddedImpurityE_68, STATE_VARIABLE_DeepInfo_97_97, STATE_VARIABLE_DeepInfo_83);
            succeeded = (AddedImpurityC_64 == (MR_Integer) 1);
            if (!(succeeded))
            {
              succeeded = (AddedImpurityT_66 == (MR_Integer) 1);
              if (!(succeeded))
                succeeded = (AddedImpurityE_68 == (MR_Integer) 1);
            }
            if (succeeded)
              *AddedImpurity_8 = (MR_Integer) 1;
            else
              *AddedImpurity_8 = (MR_Integer) 0;
            hlds__hlds_goal__add_impurity_if_needed_3_p_0(*AddedImpurity_8, GoalInfo1_12, &GoalInfo_114);
            {
              GoalExpr_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_115, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), GoalExpr_115, 1) = ((MR_Box) (IVars_59));
              MR_hl_field(MR_mktag(3), GoalExpr_115, 2) = ((MR_Box) (Cond_63));
              MR_hl_field(MR_mktag(3), GoalExpr_115, 3) = ((MR_Box) (Then_65));
              MR_hl_field(MR_mktag(3), GoalExpr_115, 4) = ((MR_Box) (Else_67));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_115));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_114));
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
  MR_Word STATE_VARIABLE_DeepInfo_0_29,
  MR_Word * STATE_VARIABLE_DeepInfo_30)
{
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
  MR_Word GoalId_10;
  MR_Word ContainingGoalMap_11;
  MR_Word GoalPath_12;
  MR_Word SiteNumCounter0_13;
  MR_Integer SiteNum_14;
  MR_Word SiteNumCounter_15;
  MR_Word SiteNumVar_16;
  MR_Word VarInfo_17;
  MR_Word SiteNumVarGoal_18;
  MR_Word ModuleInfo_19;
  MR_Word PrepareGoal_20;
  MR_Word Context_21;
  MR_Integer LineNumber_22;
  MR_String FileName0_23;
  MR_String FileName_24;
  MR_Word CallSite_25;
  MR_Word GoalInfo1_26;
  MR_Word GoalInfo_27;
  MR_Word GoalExpr_28;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word STATE_VARIABLE_DeepInfo_48_48;
  MR_Word Var_50;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_String Var_91;
  MR_Word Var_92;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_116;
  MR_String Var_117;
  MR_Word Var_118;

  GoalId_10 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_9);
  ContainingGoalMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 2))));
  GoalPath_12 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_11, GoalId_10);
  SiteNumCounter0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 4))));
  mercury__counter__allocate_3_p_0(&SiteNum_14, SiteNumCounter0_13, &SiteNumCounter_15);
  Var_32 = parse_tree__builtin_lib_types__int_type_0_f_0();
  Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 6))));
  ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "SiteNum", Var_32, &SiteNumVar_16, Var_33, &VarInfo_17);
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (SiteNum_14));
  }
  {
    Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Var_35));
  }
  ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(Var_34, SiteNumVar_16, &SiteNumVarGoal_18);
  ModuleInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 0))));
  {
    Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (SiteNumVar_16));
    MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_19, (MR_String) "prepare_for_callback", (MR_Integer) 1, Var_38, (MR_Word) ((MR_Unsigned) 0U), &PrepareGoal_20);
  Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
  LineNumber_22 = mercury__term__context_line_1_f_0(Context_21);
  FileName0_23 = mercury__term__context_file_1_f_0(Context_21);
  ll_backend__deep_profiling__compress_filename_3_p_0(STATE_VARIABLE_DeepInfo_0_29, FileName0_23, &FileName_24);
  {
    CallSite_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), CallSite_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), CallSite_25, 1) = ((MR_Box) (FileName_24));
    MR_hl_field(MR_mktag(3), CallSite_25, 2) = ((MR_Box) (LineNumber_22));
    MR_hl_field(MR_mktag(3), CallSite_25, 3) = ((MR_Box) (GoalPath_12));
  }
  hlds__hlds_goal__make_impure_2_p_0(GoalInfo0_9, &GoalInfo1_26);
  hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, GoalInfo1_26, &GoalInfo_27);
  {
    Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Goal0_5));
    MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (PrepareGoal_20));
    MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (SiteNumVarGoal_18));
    MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
  }
  {
    GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), GoalExpr_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), GoalExpr_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), GoalExpr_28, 2) = ((MR_Box) (Var_43));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_28));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_27));
  }
  Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 0))));
  Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 1))));
  Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 2))));
  Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 3))));
  Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 5))));
  Var_91 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 7))));
  Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 8))));
  {
    STATE_VARIABLE_DeepInfo_48_48 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, 0) = ((MR_Box) (Var_84));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, 1) = ((MR_Box) (Var_85));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, 2) = ((MR_Box) (Var_86));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, 3) = ((MR_Box) (Var_87));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, 4) = ((MR_Box) (SiteNumCounter_15));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, 5) = ((MR_Box) (Var_89));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, 6) = ((MR_Box) (VarInfo_17));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, 7) = ((MR_Box) (Var_91));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, 8) = ((MR_Box) (Var_92));
  }
  Var_50 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), Var_89, ((MR_Box) (CallSite_25)));
  Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, (MR_Integer) 0))));
  Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, (MR_Integer) 1))));
  Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, (MR_Integer) 2))));
  Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, (MR_Integer) 3))));
  Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, (MR_Integer) 4))));
  Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, (MR_Integer) 6))));
  Var_117 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, (MR_Integer) 7))));
  Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_48_48, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_DeepInfo_30 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_110));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_111));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_112));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_113));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_114));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_50));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_116));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_117));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_118));
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
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
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
  MR_Word VarInfo0_22;
  MR_Word SiteNumVar_23;
  MR_Word VarInfo1_24;
  MR_Word SiteNumVarGoal_25;
  MR_Word Context_26;
  MR_String FileName0_27;
  MR_Integer LineNumber_28;
  MR_String FileName_29;
  MR_Word CallKind_30;
  MR_Word PrepareGoal_32;
  MR_Word CallSite_44;
  MR_Word Goal2_45;
  MR_Word GoalExpr_84;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word STATE_VARIABLE_DeepInfo_105_105;
  MR_Word STATE_VARIABLE_DeepInfo_133_133;
  MR_Word STATE_VARIABLE_DeepInfo_153_153;
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
  ContainingGoalMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 2))));
  GoalPath_12 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_11, GoalId_10);
  ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 0))));
  GoalFeatures_14 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo0_9);
  hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 9, GoalInfo0_9, &GoalInfo1_15);
  hlds__hlds_goal__make_impure_2_p_0(GoalInfo1_15, &GoalInfo2_16);
  hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, GoalInfo2_16, &MdprofInstGoalInfo_17);
  {
    Goal1_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Goal1_18, 0) = ((MR_Box) (GoalExpr0_8));
    MR_hl_field(MR_mktag(0), Goal1_18, 1) = ((MR_Box) (GoalInfo2_16));
  }
  SiteNumCounter0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 4))));
  mercury__counter__allocate_3_p_0(&SiteNum_20, SiteNumCounter0_19, &SiteNumCounter_21);
  VarInfo0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 6))));
  Var_101 = parse_tree__builtin_lib_types__int_type_0_f_0();
  ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "SiteNum", Var_101, &SiteNumVar_23, VarInfo0_22, &VarInfo1_24);
  {
    Var_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (SiteNum_20));
  }
  {
    Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (Var_103));
  }
  ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(Var_102, SiteNumVar_23, &SiteNumVarGoal_25);
  Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 0))));
  Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 1))));
  Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 2))));
  Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 3))));
  Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 5))));
  Var_246 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 7))));
  Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 8))));
  {
    STATE_VARIABLE_DeepInfo_105_105 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, 0) = ((MR_Box) (Var_239));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, 1) = ((MR_Box) (Var_240));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, 2) = ((MR_Box) (Var_241));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, 3) = ((MR_Box) (Var_242));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, 4) = ((MR_Box) (SiteNumCounter_21));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, 5) = ((MR_Box) (Var_244));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, 6) = ((MR_Box) (VarInfo1_24));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, 7) = ((MR_Box) (Var_246));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, 8) = ((MR_Box) (Var_247));
  }
  Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
  FileName0_27 = mercury__term__context_file_1_f_0(Context_26);
  LineNumber_28 = mercury__term__context_line_1_f_0(Context_26);
  ll_backend__deep_profiling__compress_filename_3_p_0(STATE_VARIABLE_DeepInfo_105_105, FileName0_27, &FileName_29);
  CallKind_30 = ll_backend__deep_profiling__classify_call_2_f_0(ModuleInfo_13, GoalExpr0_8);
  switch (MR_tag((MR_Word) CallKind_30)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredProcId_31 = (MR_Word) ((MR_Word) (CallKind_30));
        MR_Word PredId_33;
        MR_Integer ProcId_34;
        MR_String TypeSubst_35;
        MR_Word MaybeRecInfo_36;
        MR_Word RttiProcLabel_41;
        MR_Word OuterPredProcId_38;
        MR_Word RecInfo1_37;
        MR_Word Var_151;
        MR_Word Var_343;

        succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), ((MR_Box) ((MR_Integer) 9)), GoalFeatures_14);
        if (succeeded)
        {
          MR_Word Var_143;

          {
            Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (SiteNumVar_23));
            MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_13, (MR_String) "prepare_for_tail_call", (MR_Integer) 1, Var_143, (MR_Word) ((MR_Unsigned) 0U), &PrepareGoal_32);
        }
        else
        {
          MR_Word Var_148;

          {
            Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (SiteNumVar_23));
            MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_13, (MR_String) "prepare_for_normal_call", (MR_Integer) 1, Var_148, (MR_Word) ((MR_Unsigned) 0U), &PrepareGoal_32);
        }
        PredId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_31, (MR_Integer) 0))));
        ProcId_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_31, (MR_Integer) 1))));
        TypeSubst_35 = ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_f_0();
        MaybeRecInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, (MR_Integer) 8))));
        succeeded = (MaybeRecInfo_36 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          RecInfo1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRecInfo_36, (MR_Integer) 0))));
          Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecInfo1_37, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_151)) == (MR_Integer) 0);
          if (succeeded)
          {
            OuterPredProcId_38 = (MR_Word) ((MR_Word) (Var_151));
            Var_343 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, (MR_Integer) 1))));
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PredProcId_31, Var_343);
          }
        }
        if (succeeded)
        {
          MR_Word OuterPredId_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OuterPredProcId_38, (MR_Integer) 0))));
          MR_Integer OuterProcId_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OuterPredProcId_38, (MR_Integer) 1))));

          RttiProcLabel_41 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_13, OuterPredId_39, OuterProcId_40);
        }
        else
        {
          MR_Word RecInfo2_42;
          MR_Word InnerPredProcId_43;
          MR_Word Var_152;

          succeeded = (MaybeRecInfo_36 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RecInfo2_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRecInfo_36, (MR_Integer) 0))));
            Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecInfo2_42, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_152)) == (MR_Integer) 1);
            if (succeeded)
            {
              InnerPredProcId_43 = (MR_Word) (MR_body((MR_Word) (Var_152), (MR_Integer) 1));
              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PredProcId_31, InnerPredProcId_43);
            }
          }
          if (succeeded)
          {
            MR_Word OuterPredProcId_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, (MR_Integer) 1))));
            MR_Word OuterPredId_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OuterPredProcId_200, (MR_Integer) 0))));
            MR_Integer OuterProcId_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OuterPredProcId_200, (MR_Integer) 1))));

            RttiProcLabel_41 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_13, OuterPredId_201, OuterProcId_202);
          }
          else
            RttiProcLabel_41 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_13, PredId_33, ProcId_34);
        }
        {
          CallSite_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CallSite_44, 0) = ((MR_Box) (RttiProcLabel_41));
          MR_hl_field(MR_mktag(0), CallSite_44, 1) = ((MR_Box) (TypeSubst_35));
          MR_hl_field(MR_mktag(0), CallSite_44, 2) = ((MR_Box) (FileName_29));
          MR_hl_field(MR_mktag(0), CallSite_44, 3) = ((MR_Box) (LineNumber_28));
          MR_hl_field(MR_mktag(0), CallSite_44, 4) = ((MR_Box) (GoalPath_12));
        }
        Goal2_45 = Goal1_18;
        STATE_VARIABLE_DeepInfo_133_133 = STATE_VARIABLE_DeepInfo_105_105;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfoVar_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallKind_30, (MR_Integer) 1))));
        MR_Word Var_136;
        MR_Word Var_138;

        {
          Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (TypeInfoVar_47));
          MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (SiteNumVar_23));
          MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_138));
        }
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_13, (MR_String) "prepare_for_special_call", (MR_Integer) 2, Var_136, (MR_Word) ((MR_Unsigned) 0U), &PrepareGoal_32);
        {
          CallSite_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CallSite_44, 0) = ((MR_Box) (FileName_29));
          MR_hl_field(MR_mktag(1), CallSite_44, 1) = ((MR_Box) (LineNumber_28));
          MR_hl_field(MR_mktag(1), CallSite_44, 2) = ((MR_Box) (GoalPath_12));
        }
        Goal2_45 = Goal1_18;
        STATE_VARIABLE_DeepInfo_133_133 = STATE_VARIABLE_DeepInfo_105_105;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Generic_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallKind_30, (MR_Integer) 0))));
        MR_Word GoalCodeModel_67;
        MR_Word Globals_68;
        MR_Word UseZeroing_69;
        MR_Word STATE_VARIABLE_DeepInfo_112_112;

        switch (MR_tag((MR_Word) Generic_48)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ClosureVar_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Generic_48, (MR_Integer) 0))));
              MR_Word Var_128;
              MR_Word Var_130;

              {
                Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (ClosureVar_49));
                MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (SiteNumVar_23));
                MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_130));
              }
              ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_13, (MR_String) "prepare_for_ho_call", (MR_Integer) 2, Var_128, (MR_Word) ((MR_Unsigned) 0U), &PrepareGoal_32);
              {
                CallSite_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), CallSite_44, 0) = ((MR_Box) (FileName_29));
                MR_hl_field(MR_mktag(2), CallSite_44, 1) = ((MR_Box) (LineNumber_28));
                MR_hl_field(MR_mktag(2), CallSite_44, 2) = ((MR_Box) (GoalPath_12));
              }
              STATE_VARIABLE_DeepInfo_112_112 = STATE_VARIABLE_DeepInfo_105_105;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeClassInfoVar_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Generic_48, (MR_Integer) 0))));
              MR_Integer MethodNum_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Generic_48, (MR_Integer) 1))));
              MR_Word VarInfo2_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, (MR_Integer) 6))));
              MR_Word MethodNumVar_58;
              MR_Word VarInfo3_59;
              MR_Word MethodNumVarGoal_60;
              MR_Word PrepareCallGoal_61;
              MR_Word PrepareCallGoalInfo_63;
              MR_Word PrepareGoalExpr_64;
              MR_Word Var_111;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_117;
              MR_Word Var_119;
              MR_Word Var_120;
              MR_Word Var_123;
              MR_Word Var_124;
              MR_Word Var_291;
              MR_Word Var_292;
              MR_Word Var_293;
              MR_Word Var_294;
              MR_Word Var_295;
              MR_Word Var_296;
              MR_String Var_298;
              MR_Word Var_299;

              Var_111 = parse_tree__builtin_lib_types__int_type_0_f_0();
              ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "MethodNum", Var_111, &MethodNumVar_58, VarInfo2_57, &VarInfo3_59);
              Var_291 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, (MR_Integer) 0))));
              Var_292 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, (MR_Integer) 1))));
              Var_293 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, (MR_Integer) 2))));
              Var_294 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, (MR_Integer) 3))));
              Var_295 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, (MR_Integer) 4))));
              Var_296 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, (MR_Integer) 5))));
              Var_298 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, (MR_Integer) 7))));
              Var_299 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_105_105, (MR_Integer) 8))));
              {
                STATE_VARIABLE_DeepInfo_112_112 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_112_112, 0) = ((MR_Box) (Var_291));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_112_112, 1) = ((MR_Box) (Var_292));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_112_112, 2) = ((MR_Box) (Var_293));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_112_112, 3) = ((MR_Box) (Var_294));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_112_112, 4) = ((MR_Box) (Var_295));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_112_112, 5) = ((MR_Box) (Var_296));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_112_112, 6) = ((MR_Box) (VarInfo3_59));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_112_112, 7) = ((MR_Box) (Var_298));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_112_112, 8) = ((MR_Box) (Var_299));
              }
              {
                Var_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (MethodNum_54));
              }
              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Var_114));
              }
              ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(Var_113, MethodNumVar_58, &MethodNumVarGoal_60);
              {
                Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (MethodNumVar_58));
                MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (TypeClassInfoVar_53));
                MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_120));
              }
              {
                Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (SiteNumVar_23));
                MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_119));
              }
              ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_13, (MR_String) "prepare_for_method_call", (MR_Integer) 3, Var_117, (MR_Word) ((MR_Unsigned) 0U), &PrepareCallGoal_61);
              PrepareCallGoalInfo_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrepareCallGoal_61, (MR_Integer) 1))));
              {
                Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (PrepareCallGoal_61));
                MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (MethodNumVarGoal_60));
                MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_124));
              }
              {
                PrepareGoalExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PrepareGoalExpr_64, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), PrepareGoalExpr_64, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), PrepareGoalExpr_64, 2) = ((MR_Box) (Var_123));
              }
              {
                PrepareGoal_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PrepareGoal_32, 0) = ((MR_Box) (PrepareGoalExpr_64));
                MR_hl_field(MR_mktag(0), PrepareGoal_32, 1) = ((MR_Box) (PrepareCallGoalInfo_63));
              }
              {
                CallSite_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CallSite_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), CallSite_44, 1) = ((MR_Box) (FileName_29));
                MR_hl_field(MR_mktag(3), CallSite_44, 2) = ((MR_Box) (LineNumber_28));
                MR_hl_field(MR_mktag(3), CallSite_44, 3) = ((MR_Box) (GoalPath_12));
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
        libs__globals__lookup_bool_option_3_p_0(Globals_68, (MR_Integer) 251, &UseZeroing_69);
        switch (UseZeroing_69) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Goal2_45 = Goal1_18;
              STATE_VARIABLE_DeepInfo_133_133 = STATE_VARIABLE_DeepInfo_112_112;
            }
            break;
          case (MR_Integer) 1:
            ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_p_0(Globals_68, GoalCodeModel_67, Goal1_18, &Goal2_45, STATE_VARIABLE_DeepInfo_112_112, &STATE_VARIABLE_DeepInfo_133_133);
            break;
        }
      }
      break;
  }
  Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 5))));
  Var_154 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), Var_155, ((MR_Box) (CallSite_44)));
  Var_308 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 0))));
  Var_309 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 1))));
  Var_310 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 2))));
  Var_311 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 3))));
  Var_312 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 4))));
  Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 6))));
  Var_315 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 7))));
  Var_316 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 8))));
  {
    STATE_VARIABLE_DeepInfo_153_153 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_153_153, 0) = ((MR_Box) (Var_308));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_153_153, 1) = ((MR_Box) (Var_309));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_153_153, 2) = ((MR_Box) (Var_310));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_153_153, 3) = ((MR_Box) (Var_311));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_153_153, 4) = ((MR_Box) (Var_312));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_153_153, 5) = ((MR_Box) (Var_154));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_153_153, 6) = ((MR_Box) (Var_314));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_153_153, 7) = ((MR_Box) (Var_315));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_153_153, 8) = ((MR_Box) (Var_316));
  }
  succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), ((MR_Box) ((MR_Integer) 9)), GoalFeatures_14);
  if (succeeded)
  {
    Var_320 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 3))));
    Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 8))));
    succeeded = (Var_157 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RecInfo_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_157, (MR_Integer) 0))));
      Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecInfo_70, (MR_Integer) 0))));
      Var_325 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecInfo_70, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_158)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
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
      *STATE_VARIABLE_DeepInfo_97 = STATE_VARIABLE_DeepInfo_153_153;
    }
    else
    {
      MR_Word Var_344 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_325, (MR_Integer) 1))));
      MR_Word Var_345 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_325, (MR_Integer) 0))));

      if ((Var_344 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_345, (MR_Integer) 2))));

        ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_p_0(Var_163, Var_320, &CallGoals_74, &ExitGoals_75, &FailGoals_76, &SaveRestoreVars_77, STATE_VARIABLE_DeepInfo_153_153, STATE_VARIABLE_DeepInfo_97);
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
          MR_Word Var_189;
          MR_Word Var_190;
          MR_Word Var_191;
          MR_Word Var_192;

          {
            Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (Goal2_45));
            MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (PrepareGoal_32));
            MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (Var_192));
          }
          {
            Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (SiteNumVarGoal_25));
            MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (Var_191));
          }
          Var_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_190, ExitGoals_75);
          Goals_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CallGoals_74, Var_189);
          {
            GoalExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr_84, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), GoalExpr_84, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), GoalExpr_84, 2) = ((MR_Box) (Goals_83));
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
          MR_Word Var_165;
          MR_Word Var_172;
          MR_Word Var_174;
          MR_Word Var_175;
          MR_Word Var_176;
          MR_Word Var_178;
          MR_Word Var_179;
          MR_Word Var_180;
          MR_Word Var_181;
          MR_Word Var_182;
          MR_Word Var_183;
          MR_Word Var_186;
          MR_Word Goals_206;

          {
            Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (Var_320));
            MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (SaveRestoreVars_77));
          }
          ExtraVars_85 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_165);
          WrappedGoalGoalInfo0_86 = hlds__hlds_goal__goal_info_add_nonlocals_make_impure_2_f_0(MdprofInstGoalInfo_17, ExtraVars_85);
          hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, WrappedGoalGoalInfo0_86, &WrappedGoalGoalInfo_87);
          ReturnFailsGoalInfo0_88 = hlds__hlds_goal__impure_unreachable_init_goal_info_2_f_0(ExtraVars_85, (MR_Integer) 7);
          hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ReturnFailsGoalInfo0_88, &ReturnFailsGoalInfo_89);
          FailGoalInfo0_90 = hlds__make_goal__fail_goal_info_0_f_0();
          hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, FailGoalInfo0_90, &FailGoalInfo_91);
          {
            FailGoal_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FailGoal_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_2[8])));
            MR_hl_field(MR_mktag(0), FailGoal_92, 1) = ((MR_Box) (FailGoalInfo_91));
          }
          {
            Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (FailGoal_92));
            MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          FailGoalsAndFail_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FailGoals_76, Var_172);
          {
            Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (Goal2_45));
            MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (ExitGoals_75));
          }
          {
            Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (PrepareGoal_32));
            MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_180));
          }
          {
            Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (SiteNumVarGoal_25));
            MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_179));
          }
          {
            Var_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_176, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_176, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_176, 2) = ((MR_Box) (Var_178));
          }
          {
            Var_175 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (Var_176));
            MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) (WrappedGoalGoalInfo_87));
          }
          {
            Var_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_183, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_183, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_183, 2) = ((MR_Box) (FailGoalsAndFail_93));
          }
          {
            Var_182 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_182, 0) = ((MR_Box) (Var_183));
            MR_hl_field(MR_mktag(0), Var_182, 1) = ((MR_Box) (ReturnFailsGoalInfo_89));
          }
          {
            Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (Var_182));
            MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (Var_175));
            MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) (Var_181));
          }
          {
            DisjGoalExpr_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DisjGoalExpr_94, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), DisjGoalExpr_94, 1) = ((MR_Box) (Var_174));
          }
          {
            DisjGoal_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DisjGoal_95, 0) = ((MR_Box) (DisjGoalExpr_94));
            MR_hl_field(MR_mktag(0), DisjGoal_95, 1) = ((MR_Box) (WrappedGoalGoalInfo_87));
          }
          {
            Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (DisjGoal_95));
            MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Goals_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CallGoals_74, Var_186);
          {
            GoalExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr_84, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), GoalExpr_84, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), GoalExpr_84, 2) = ((MR_Box) (Goals_206));
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
      Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (Goal2_45));
      MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (PrepareGoal_32));
      MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (Var_198));
    }
    {
      Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (SiteNumVarGoal_25));
      MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Var_197));
    }
    {
      GoalExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_84, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_84, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_84, 2) = ((MR_Box) (Var_196));
    }
    *STATE_VARIABLE_DeepInfo_97 = STATE_VARIABLE_DeepInfo_153_153;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_84));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MdprofInstGoalInfo_17));
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
    MR_Word Chunk_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Chunks_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
    MR_Word STATE_VARIABLE_DeepInfo_47_47;
    MR_Word STATE_VARIABLE_DeepInfo_48_48;
    MR_Word STATE_VARIABLE_DeepInfo_49_49;
    MR_Word STATE_VARIABLE_DeepInfo_50_50;
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
    MR_Box conv2_STATE_VARIABLE_DeepInfo_47_47;

    mercury__list__map_foldl_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), (MR_Word) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[8]), Chunk_13, &DepthVars_21, ((MR_Box) (STATE_VARIABLE_DeepInfo_0_7)), &conv2_STATE_VARIABLE_DeepInfo_47_47);
    STATE_VARIABLE_DeepInfo_47_47 = ((MR_Word) (conv2_STATE_VARIABLE_DeepInfo_47_47));
    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Chunk_13, &Length_22);
    ll_backend__deep_profiling__generate_csn_vector_7_p_0(Length_22, Chunk_13, &CSNCallVars_23, &CSNCallGoals_24, &CallCellVar_25, STATE_VARIABLE_DeepInfo_47_47, &STATE_VARIABLE_DeepInfo_48_48);
    ll_backend__deep_profiling__generate_csn_vector_7_p_0(Length_22, Chunk_13, &CSNExitVars_26, &CSNExitGoals_27, &ExitCellVar_28, STATE_VARIABLE_DeepInfo_48_48, &STATE_VARIABLE_DeepInfo_49_49);
    ll_backend__deep_profiling__generate_csn_vector_7_p_0(Length_22, Chunk_13, &CSNFailVars_29, &CSNFailGoals_30, &FailCellVar_31, STATE_VARIABLE_DeepInfo_49_49, &STATE_VARIABLE_DeepInfo_50_50);
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (CSNFailVars_29));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (CSNExitVars_26));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (CSNCallVars_23));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
    }
    mercury__list__condense_2_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), Var_51, &CSNExtraVars_32);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_3[2]), Length_22, &Var_101);
    CallPredName_33 = mercury__string__f_43_43_2_f_0((MR_String) "save_recursion_depth_", Var_101);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_3[2]), Length_22, &Var_109);
    ExitPredName_34 = mercury__string__f_43_43_2_f_0((MR_String) "restore_recursion_depth_exit_", Var_109);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_3[2]), Length_22, &Var_117);
    FailPredName_35 = mercury__string__f_43_43_2_f_0((MR_String) "restore_recursion_depth_fail_", Var_117);
    ModuleInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 0))));
    Var_67 = (MR_Integer) ((MR_Unsigned) Length_22 + (MR_Unsigned) 2);
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (CallCellVar_25));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (DepthVars_21));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (CSDVar_2));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_36, CallPredName_33, Var_67, Var_68, DepthVars_21, &CallCellGoal_37);
    Var_71 = (MR_Integer) ((MR_Unsigned) Length_22 + (MR_Unsigned) 2);
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (ExitCellVar_28));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (DepthVars_21));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (CSDVar_2));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_36, ExitPredName_34, Var_71, Var_72, (MR_Word) ((MR_Unsigned) 0U), &ExitCellGoal_38);
    Var_76 = (MR_Integer) ((MR_Unsigned) Length_22 + (MR_Unsigned) 2);
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (FailCellVar_31));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (DepthVars_21));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (CSDVar_2));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_36, FailPredName_35, Var_76, Var_77, (MR_Word) ((MR_Unsigned) 0U), &FailCellGoal_39);
    ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(Chunks_14, CSDVar_2, &TailCallGoals_40, &TailExitGoals_41, &TailFailGoals_42, &TailExtraVars_43, STATE_VARIABLE_DeepInfo_50_50, STATE_VARIABLE_DeepInfo_8);
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (CallCellGoal_37));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (TailCallGoals_40));
    }
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CSNCallGoals_24, Var_82);
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (ExitCellGoal_38));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (TailExitGoals_41));
    }
    *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CSNExitGoals_27, Var_83);
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (FailCellGoal_39));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (TailFailGoals_42));
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

  succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    CSN_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), CSNs_9, (MR_Integer) 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CSNs_9, (MR_Integer) 1))));
    succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word UnifyGoal_16;
    MR_Word Var_24;

    ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(CSN_14, &Var_24, STATE_VARIABLE_DeepInfo_0_21, STATE_VARIABLE_DeepInfo_22);
    *CellVar_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
    UnifyGoal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CSNVars_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*CellVar_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *UnifyGoals_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UnifyGoal_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word CSNVarsGoals_17;
    MR_Word InnerVars_18;
    MR_Word InnerGoals_19;
    MR_Word CellGoal_20;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_DeepInfo_33_33;
    MR_Word Var_35;
    MR_Box conv2_STATE_VARIABLE_DeepInfo_33_33;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ll_backend__deep_profiling__generate_csn_vector_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Length_8));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) ((MR_Integer) 9));
    }
    mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140ll_backend.deep_profiling.generate_csn_vector\'/7", (MR_String) "too long");
    mercury__list__map_foldl_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[2]), (MR_Word) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[7]), CSNs_9, &CSNVarsGoals_17, ((MR_Box) (STATE_VARIABLE_DeepInfo_0_21)), &conv2_STATE_VARIABLE_DeepInfo_33_33);
    STATE_VARIABLE_DeepInfo_33_33 = ((MR_Word) (conv2_STATE_VARIABLE_DeepInfo_33_33));
    InnerVars_18 = mercury__assoc_list__keys_1_f_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CSNVarsGoals_17);
    InnerGoals_19 = mercury__assoc_list__values_1_f_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CSNVarsGoals_17);
    ll_backend__deep_profiling__generate_csn_vector_cell_6_p_0(Length_8, InnerVars_18, CellVar_12, &CellGoal_20, STATE_VARIABLE_DeepInfo_33_33, STATE_VARIABLE_DeepInfo_22);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CSNVars_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*CellVar_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InnerVars_18));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (CellGoal_20));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
  MR_Word VarInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 6))));
  MR_String VarName_10;
  MR_Word VarInfo_11;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_String Var_39;
  MR_Word STATE_VARIABLE_VarSet_14_55;
  MR_Word STATE_VARIABLE_VarTypes_15_56;
  MR_Word STATE_VARIABLE_VarSet_16_57;
  MR_Word STATE_VARIABLE_VarTypes_17_58;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_String Var_37;
  MR_Word Var_38;

  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_3[2]), CSN_5, &Var_39);
  VarName_10 = mercury__string__f_43_43_2_f_0((MR_String) "CSN", Var_39);
  Var_18 = parse_tree__builtin_lib_types__int_type_0_f_0();
  STATE_VARIABLE_VarSet_14_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInfo0_9, (MR_Integer) 0))));
  STATE_VARIABLE_VarTypes_15_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInfo0_9, (MR_Integer) 1))));
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_10, &CSNVar_6, STATE_VARIABLE_VarSet_14_55, &STATE_VARIABLE_VarSet_16_57);
  hlds__vartypes__add_var_type_4_p_0(CSNVar_6, Var_18, STATE_VARIABLE_VarTypes_15_56, &STATE_VARIABLE_VarTypes_17_58);
  {
    VarInfo_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarInfo_11, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_16_57));
    MR_hl_field(MR_mktag(0), VarInfo_11, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_17_58));
  }
  Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 0))));
  Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 1))));
  Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 2))));
  Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 3))));
  Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 4))));
  Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 5))));
  Var_37 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 7))));
  Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_DeepInfo_13 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_33));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (VarInfo_11));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_37));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_38));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (CSN_5));
  }
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Var_21));
  }
  ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(Var_20, CSNVar_6, &UnifyGoal_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CSNVar_6));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (UnifyGoal_7));
  }
}

static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_cell_6_p_0(
  MR_Integer Length_7,
  MR_Word CSNVars_8,
  MR_Word * CellVar_9,
  MR_Word * CellGoal_10,
  MR_Word STATE_VARIABLE_DeepInfo_0_19,
  MR_Word * STATE_VARIABLE_DeepInfo_20)
{
  MR_Word VarInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 6))));
  MR_Word ProfilingBuiltin_13;
  MR_String CellTypeName_14;
  MR_Word CellTypeCtor_15;
  MR_Word CellType_16;
  MR_Word VarInfo_17;
  MR_Word ConsId_18;
  MR_Word Var_25;
  MR_String Var_48;
  MR_Word STATE_VARIABLE_VarSet_14_64;
  MR_Word STATE_VARIABLE_VarTypes_15_65;
  MR_Word STATE_VARIABLE_VarSet_16_66;
  MR_Word STATE_VARIABLE_VarTypes_17_67;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_String Var_46;
  MR_Word Var_47;

  ProfilingBuiltin_13 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_3[2]), Length_7, &Var_48);
  CellTypeName_14 = mercury__string__f_43_43_2_f_0((MR_String) "call_site_nums_", Var_48);
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ProfilingBuiltin_13));
    MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (CellTypeName_14));
  }
  {
    CellTypeCtor_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), CellTypeCtor_15, 0) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(0), CellTypeCtor_15, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(CellTypeCtor_15, (MR_Word) ((MR_Unsigned) 0U), &CellType_16);
  STATE_VARIABLE_VarSet_14_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInfo0_12, (MR_Integer) 0))));
  STATE_VARIABLE_VarTypes_15_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInfo0_12, (MR_Integer) 1))));
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "CSNCell", CellVar_9, STATE_VARIABLE_VarSet_14_64, &STATE_VARIABLE_VarSet_16_66);
  hlds__vartypes__add_var_type_4_p_0(*CellVar_9, CellType_16, STATE_VARIABLE_VarTypes_15_65, &STATE_VARIABLE_VarTypes_17_67);
  {
    VarInfo_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarInfo_17, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_16_66));
    MR_hl_field(MR_mktag(0), VarInfo_17, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_17_67));
  }
  Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 0))));
  Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 1))));
  Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 2))));
  Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 3))));
  Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 4))));
  Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 5))));
  Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 7))));
  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_DeepInfo_20 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_40));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_41));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_42));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_43));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_44));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (VarInfo_17));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_46));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_47));
  }
  {
    ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(3), ConsId_18, 2) = ((MR_Box) (Length_7));
    MR_hl_field(MR_mktag(3), ConsId_18, 3) = ((MR_Box) (CellTypeCtor_15));
  }
  ll_backend__deep_profiling__generate_deep_cell_unify_5_p_0(Length_7, ConsId_18, CSNVars_8, *CellVar_9, CellGoal_10);
}

static void MR_CALL 
ll_backend__deep_profiling__generate_deep_cell_unify_5_p_0(
  MR_Integer Length_6,
  MR_Word ConsId_7,
  MR_Word Args_8,
  MR_Word Var_9,
  MR_Word * Goal_10)
{
  MR_Word ArgModes_13;
  MR_Word Unification_14;
  MR_Word GoalExpr_15;
  MR_Word NonLocals_16;
  MR_Word InstMapDelta_17;
  MR_Word GoalInfo_19;
  MR_Word Var_29;
  MR_Word Var_34;

  mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Length_6, ((MR_Box) (&ll_backend__deep_profiling_scalar_common_6[0])), &ArgModes_13);
  {
    Unification_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Unification_14, 0) = ((MR_Box) (Var_9));
    MR_hl_field(MR_mktag(0), Unification_14, 1) = ((MR_Box) (ConsId_7));
    MR_hl_field(MR_mktag(0), Unification_14, 2) = ((MR_Box) (Args_8));
    MR_hl_field(MR_mktag(0), Unification_14, 3) = ((MR_Box) (ArgModes_13));
    MR_hl_field(MR_mktag(0), Unification_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__deep_profiling_scalar_common_3[0])));
    MR_hl_field(MR_mktag(0), Unification_14, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Unification_14, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (ConsId_7));
    MR_hl_field(MR_mktag(1), Var_29, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), Var_29, 2) = ((MR_Box) (Args_8));
  }
  {
    GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), GoalExpr_15, 0) = ((MR_Box) (Var_9));
    MR_hl_field(MR_mktag(1), GoalExpr_15, 1) = ((MR_Box) (Var_29));
    MR_hl_field(MR_mktag(1), GoalExpr_15, 2) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_6[0]));
    MR_hl_field(MR_mktag(1), GoalExpr_15, 3) = ((MR_Box) (Unification_14));
    MR_hl_field(MR_mktag(1), GoalExpr_15, 4) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[6]));
  }
  {
    Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_9));
    MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Args_8));
  }
  NonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_34);
  InstMapDelta_17 = hlds__instmap__instmap_delta_bind_var_1_f_0(Var_9);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_16, InstMapDelta_17, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_19);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_15));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_19));
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
      mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.deep_profiling.classify_call\'/2", (MR_String) "unexpected goal type");
      break;
    case (MR_Integer) 1:
      mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.deep_profiling.classify_call\'/2", (MR_String) "unexpected goal type");
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 0))));
        MR_Integer ProcId_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 1))));
        MR_Word Args_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 2))));
        MR_Word TypeInfoVar_14;
        MR_Word Var_53;
        MR_Word Var_80;
        MR_Integer Var_13;

        Var_53 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_4, Var_53, (MR_String) "unify", (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Integer) 2))), (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__deep_profiling_scalar_common_3[1])), &Var_80, &Var_13);
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_7, Var_80);
        if (succeeded)
        {
          succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            TypeInfoVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word Var_60;

          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (PredId_7));
            MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (ProcId_8));
          }
          {
            Class_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Class_6, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(1), Class_6, 1) = ((MR_Box) (TypeInfoVar_14));
          }
        }
        else
        {
          MR_Word TypeInfoVar_79;
          MR_Word Var_61;
          MR_Word Var_81;
          MR_Integer Var_16;

          Var_61 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_4, Var_61, (MR_String) "compare", (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Integer) 3))), (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__deep_profiling_scalar_common_3[1])), &Var_81, &Var_16);
          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_7, Var_81);
          if (succeeded)
          {
            succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              TypeInfoVar_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word Var_68;

            {
              Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (PredId_7));
              MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (ProcId_8));
            }
            {
              Class_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Class_6, 0) = ((MR_Box) (Var_68));
              MR_hl_field(MR_mktag(1), Class_6, 1) = ((MR_Box) (TypeInfoVar_79));
            }
          }
          else
          {
            MR_Word TypeInfoVar_78;
            MR_Word Var_69;
            MR_Word Var_82;
            MR_Integer Var_18;

            Var_69 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_4, Var_69, (MR_String) "compare_representation", (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Integer) 3))), (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__deep_profiling_scalar_common_3[1])), &Var_82, &Var_18);
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_7, Var_82);
            if (succeeded)
            {
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                TypeInfoVar_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word Var_76;

              {
                Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (PredId_7));
                MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (ProcId_8));
              }
              {
                Class_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Class_6, 0) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(1), Class_6, 1) = ((MR_Box) (TypeInfoVar_78));
              }
            }
            else
            {
              MR_Word Var_77;

              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (PredId_7));
                MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (ProcId_8));
              }
              Class_6 = (MR_Word) ((MR_Word) (Var_77));
            }
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Generic_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_5, (MR_Integer) 1))));

            {
              Class_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Class_6, 0) = ((MR_Box) (Generic_20));
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
  MR_String Var_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 7))));

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
  MR_Word STATE_VARIABLE_VarInfo_37_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6))));
  MR_Word Var_39;
  MR_Word STATE_VARIABLE_VarInfo_40_40;
  MR_Word STATE_VARIABLE_VarInfo_62_62;
  MR_Word Var_94;
  MR_Word Var_213;
  MR_Word Var_214;
  MR_Word Var_215;
  MR_Word Var_216;
  MR_Word Var_217;
  MR_Word Var_218;
  MR_String Var_220;
  MR_Word Var_221;

  Var_39 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "SavedPtr", Var_39, &SavedPtrVar_13, STATE_VARIABLE_VarInfo_37_37, &STATE_VARIABLE_VarInfo_40_40);
  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 238, &UseActivationCounts_14);
  switch (UseActivationCounts_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_42;
        MR_Word Var_45;
        MR_Word Var_49;
        MR_Word Var_55;

        ExtraNonLocals_16 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SavedPtrVar_13);
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0))));
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (SavedPtrVar_13));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(Var_42, (MR_String) "save_and_zero_activation_info_sr", (MR_Integer) 1, Var_45, Var_45, &SaveStuff_17);
        Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0))));
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(Var_49, (MR_String) "reset_activation_info_sr", (MR_Integer) 1, Var_45, (MR_Word) ((MR_Unsigned) 0U), &RestoreStuff_18);
        Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0))));
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(Var_55, (MR_String) "rezero_activation_info_sr", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ReZeroStuff_19);
        STATE_VARIABLE_VarInfo_62_62 = STATE_VARIABLE_VarInfo_40_40;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SavedCountVar_15;
        MR_Word Var_61;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_66;
        MR_Word Var_75;
        MR_Word Var_82;

        Var_61 = parse_tree__builtin_lib_types__int_type_0_f_0();
        ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "SavedCounter", Var_61, &SavedCountVar_15, STATE_VARIABLE_VarInfo_40_40, &STATE_VARIABLE_VarInfo_62_62);
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (SavedPtrVar_13));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (SavedCountVar_15));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
        }
        ExtraNonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_63);
        Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0))));
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(Var_66, (MR_String) "save_and_zero_activation_info_ac", (MR_Integer) 2, Var_63, Var_63, &SaveStuff_17);
        Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0))));
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(Var_75, (MR_String) "reset_activation_info_ac", (MR_Integer) 2, Var_63, (MR_Word) ((MR_Unsigned) 0U), &RestoreStuff_18);
        Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0))));
        ll_backend__deep_profiling__generate_deep_det_call_6_p_0(Var_82, (MR_String) "rezero_activation_info_ac", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ReZeroStuff_19);
      }
      break;
  }
  Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0))));
  Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1))));
  Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2))));
  Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3))));
  Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4))));
  Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5))));
  Var_220 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7))));
  Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_DeepInfo_36 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_213));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_214));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_215));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_216));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_217));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_218));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (STATE_VARIABLE_VarInfo_62_62));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_220));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_221));
  }
  GoalInfo0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));
  ExtGoalInfo0_22 = hlds__hlds_goal__goal_info_add_nonlocals_make_impure_2_f_0(GoalInfo0_21, ExtraNonLocals_16);
  hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ExtGoalInfo0_22, &ExtGoalInfo_23);
  hlds__instmap__instmap_delta_init_reachable_1_p_0(&EmptyDelta_24);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(EmptyDelta_24, ExtGoalInfo_23, &NoBindExtGoalInfo_25);
  FailGoalInfo0_26 = hlds__make_goal__fail_goal_info_0_f_0();
  hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, FailGoalInfo0_26, &FailGoalInfo_27);
  {
    FailGoal_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FailGoal_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_2[8])));
    MR_hl_field(MR_mktag(0), FailGoal_28, 1) = ((MR_Box) (FailGoalInfo_27));
  }
  RestoreFailGoalInfo0_29 = hlds__hlds_goal__impure_unreachable_init_goal_info_2_f_0(ExtraNonLocals_16, (MR_Integer) 7);
  hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, RestoreFailGoalInfo0_29, &RestoreFailGoalInfo_30);
  Var_94 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  RezeroFailGoalInfo0_31 = hlds__hlds_goal__impure_unreachable_init_goal_info_2_f_0(Var_94, (MR_Integer) 7);
  hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, RezeroFailGoalInfo0_31, &RezeroFailGoalInfo_32);
  hlds__hlds_goal__make_impure_2_p_0(GoalInfo0_21, &GoalInfo_33);
  switch (CodeModel_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GoalExpr_34;
        MR_Word Var_151;
        MR_Word Var_152;
        MR_Word Var_153;

        {
          Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (RestoreStuff_18));
          MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (Goal0_9));
          MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (Var_153));
        }
        {
          Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (SaveStuff_17));
          MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_152));
        }
        {
          GoalExpr_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), GoalExpr_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), GoalExpr_34, 2) = ((MR_Box) (Var_151));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_34));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_33));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_120;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_124;
        MR_Word GoalExpr_156;

        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (FailGoal_28));
          MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (ReZeroStuff_19));
          MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
        }
        {
          Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_113, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_113, 2) = ((MR_Box) (Var_115));
        }
        {
          Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (Var_113));
          MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (RezeroFailGoalInfo_32));
        }
        {
          Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
          MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (RestoreStuff_18));
          MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_111));
        }
        {
          Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (Var_110));
        }
        {
          Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (NoBindExtGoalInfo_25));
        }
        {
          Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Goal0_9));
          MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_107));
        }
        {
          Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_104, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_104, 2) = ((MR_Box) (Var_106));
        }
        {
          Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (ExtGoalInfo_23));
        }
        {
          Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (RestoreStuff_18));
          MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_116));
        }
        {
          Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_122, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_122, 2) = ((MR_Box) (Var_124));
        }
        {
          Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (Var_122));
          MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (RestoreFailGoalInfo_30));
        }
        {
          Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_121));
          MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_120));
        }
        {
          Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_101, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_101, 1) = ((MR_Box) (Var_102));
        }
        {
          Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (ExtGoalInfo_23));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (SaveStuff_17));
          MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
        }
        {
          GoalExpr_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), GoalExpr_156, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), GoalExpr_156, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), GoalExpr_156, 2) = ((MR_Box) (Var_98));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_156));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_33));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word Var_133;
        MR_Word Var_134;
        MR_Word Var_135;
        MR_Word Var_136;
        MR_Word Var_138;
        MR_Word Var_139;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_145;
        MR_Word Var_146;
        MR_Word GoalExpr_155;

        {
          Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (RestoreStuff_18));
          MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Goal0_9));
          MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_139));
        }
        {
          Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_136, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_136, 2) = ((MR_Box) (Var_138));
        }
        {
          Var_135 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (Var_136));
          MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (ExtGoalInfo_23));
        }
        {
          Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (FailGoal_28));
          MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (RestoreStuff_18));
          MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_146));
        }
        {
          Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_143, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_143, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_143, 2) = ((MR_Box) (Var_145));
        }
        {
          Var_142 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (Var_143));
          MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) (RestoreFailGoalInfo_30));
        }
        {
          Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
          MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
          MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_141));
        }
        {
          Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_133, 1) = ((MR_Box) (Var_134));
        }
        {
          Var_132 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (Var_133));
          MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (ExtGoalInfo_23));
        }
        {
          Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_132));
          MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (SaveStuff_17));
          MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_131));
        }
        {
          GoalExpr_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), GoalExpr_155, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), GoalExpr_155, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), GoalExpr_155, 2) = ((MR_Box) (Var_130));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_155));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_33));
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
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word CallPortCode0_141;

    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (NewOutermostProcDyn_16));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MiddleCSD_13));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (TopCSD_12));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (ProcStaticVar_14));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_11, (MR_String) "non_call_port_code_ac", (MR_Integer) 4, Var_44, Var_46, &CallPortCode0_141);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, CallPortCode0_141, &CallPortCode_23);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MiddleCSD_13));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (TopCSD_12));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_11, (MR_String) "non_exit_port_code_ac", (MR_Integer) 2, Var_56, (MR_Word) ((MR_Unsigned) 0U), &ExitPortCode_24);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_11, (MR_String) "non_fail_port_code_ac", (MR_Integer) 2, Var_56, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 7, &FailPortCode_25);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_11, (MR_String) "non_redo_port_code_ac", (MR_Integer) 2, Var_47, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 7, &RedoPortCode0_26);
    NewNonlocals_27 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_56);
  }
  else
  {
    MR_Word OldOutermostProcDyn2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldActivationPtr_15, (MR_Integer) 0))));
    MR_Word CallPortCode0_22;
    MR_Word Var_79;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_108;

    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (NewOutermostProcDyn_16));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (OldOutermostProcDyn2_21));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MiddleCSD_13));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (TopCSD_12));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (ProcStaticVar_14));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_81));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_11, (MR_String) "non_call_port_code_sr", (MR_Integer) 5, Var_79, Var_81, &CallPortCode0_22);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, CallPortCode0_22, &CallPortCode_23);
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (OldOutermostProcDyn2_21));
      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (MiddleCSD_13));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (TopCSD_12));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_11, (MR_String) "non_exit_port_code_sr", (MR_Integer) 3, Var_93, (MR_Word) ((MR_Unsigned) 0U), &ExitPortCode_24);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_11, (MR_String) "non_fail_port_code_sr", (MR_Integer) 3, Var_93, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 7, &FailPortCode_25);
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (MiddleCSD_13));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_84));
    }
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_11, (MR_String) "non_redo_port_code_sr", (MR_Integer) 2, Var_108, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 7, &RedoPortCode0_26);
    NewNonlocals_27 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_93);
  }
  RedoPortExpr_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RedoPortCode0_26, (MR_Integer) 0))));
  RedoPortGoalInfo0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RedoPortCode0_26, (MR_Integer) 1))));
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, RedoPortGoalInfo0_29, &RedoPortGoalInfo_30);
  {
    RedoPortCode_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), RedoPortCode_31, 0) = ((MR_Box) (RedoPortExpr_28));
    MR_hl_field(MR_mktag(0), RedoPortCode_31, 1) = ((MR_Box) (RedoPortGoalInfo_30));
  }
  Detism0_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_17);
  parse_tree__prog_data__determinism_components_3_p_0(Detism0_32, &CanFail_33, &Var_34);
  parse_tree__prog_data__determinism_components_3_p_1(&Detism_35, CanFail_33, (MR_Integer) 3);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_35, GoalInfo0_17, &GoalInfo1_36);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewOutermostProcDyn_16, NewNonlocals_27, &ExitRedoNonLocals_37);
  ExitRedoGoalInfo_38 = hlds__hlds_goal__impure_reachable_init_goal_info_2_f_0(ExitRedoNonLocals_37, (MR_Integer) 2);
  CallExitRedoGoalInfo_39 = hlds__hlds_goal__goal_info_add_nonlocals_make_impure_2_f_0(GoalInfo1_36, ExitRedoNonLocals_37);
  hlds__hlds_goal__make_impure_2_p_0(GoalInfo1_36, &GoalInfo_40);
  {
    Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (RedoPortCode_31));
    MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (ExitPortCode_24));
    MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(MR_mktag(3), Var_133, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_132 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (Var_133));
    MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (ExitRedoGoalInfo_38));
  }
  {
    Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_132));
    MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Goal0_19));
    MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_131));
  }
  {
    Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_128, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_128, 2) = ((MR_Box) (Var_130));
  }
  {
    Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (Var_128));
    MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (CallExitRedoGoalInfo_39));
  }
  {
    Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (FailPortCode_25));
    MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_127));
    MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_138));
  }
  {
    Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (Var_126));
  }
  {
    Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (Var_125));
    MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (CallExitRedoGoalInfo_39));
  }
  {
    Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
    MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (CallPortCode_23));
    MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
  }
  {
    Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (BindProcStaticVarGoal_18));
    MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
  }
  {
    GoalExpr_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), GoalExpr_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), GoalExpr_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), GoalExpr_41, 2) = ((MR_Box) (Var_121));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_20 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_41));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_40));
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

  if ((MaybeActivationPtr_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word CallPortCode0_101;

    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MiddleCSD_12));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (TopCSD_11));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (ProcStaticVar_13));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_10, (MR_String) "semi_call_port_code_ac", (MR_Integer) 3, Var_30, Var_32, &CallPortCode0_101);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, CallPortCode0_101, &CallPortCode_21);
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_10, (MR_String) "semi_exit_port_code_ac", (MR_Integer) 2, Var_32, (MR_Word) ((MR_Unsigned) 0U), &ExitPortCode_22);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_10, (MR_String) "semi_fail_port_code_ac", (MR_Integer) 2, Var_32, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 7, &FailPortCode_23);
    NewNonlocals_24 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_32);
  }
  else
  {
    MR_Word ActivationPtr1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeActivationPtr_14, (MR_Integer) 0))));
    MR_Word CallPortCode0_20;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;

    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ActivationPtr1_19));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MiddleCSD_12));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (TopCSD_11));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (ProcStaticVar_13));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
    }
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_10, (MR_String) "semi_call_port_code_sr", (MR_Integer) 4, Var_56, Var_58, &CallPortCode0_20);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, CallPortCode0_20, &CallPortCode_21);
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_10, (MR_String) "semi_exit_port_code_sr", (MR_Integer) 3, Var_58, (MR_Word) ((MR_Unsigned) 0U), &ExitPortCode_22);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_10, (MR_String) "semi_fail_port_code_sr", (MR_Integer) 3, Var_58, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 7, &FailPortCode_23);
    NewNonlocals_24 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_58);
  }
  ExitConjGoalInfo_25 = hlds__hlds_goal__goal_info_add_nonlocals_make_impure_2_f_0(GoalInfo0_15, NewNonlocals_24);
  hlds__hlds_goal__make_impure_2_p_0(GoalInfo0_15, &GoalInfo_26);
  {
    Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (ExitPortCode_22));
    MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Goal0_17));
    MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
  }
  {
    Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_93, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_93, 2) = ((MR_Box) (Var_95));
  }
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (ExitConjGoalInfo_25));
  }
  {
    Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (FailPortCode_23));
    MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_98));
  }
  {
    Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (Var_90));
    MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (ExitConjGoalInfo_25));
  }
  {
    Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
    MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (CallPortCode_21));
    MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_88));
  }
  {
    Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (BindProcStaticVarGoal_16));
    MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_87));
  }
  {
    GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), GoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), GoalExpr_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), GoalExpr_27, 2) = ((MR_Box) (Var_86));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_18 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_27));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_26));
  }
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

  if ((MaybeActivationPtr_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word CallPortCode0_66;
    MR_Word Var_73;

    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MiddleCSD_12));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (TopCSD_11));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (ProcStaticVar_13));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_29));
    }
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_10, (MR_String) "det_call_port_code_ac", (MR_Integer) 3, Var_27, Var_73, (MR_Integer) 0, &CallPortCode0_66);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, CallPortCode0_66, &CallPortCode_21);
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_10, (MR_String) "det_exit_port_code_ac", (MR_Integer) 2, Var_29, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__deep_profiling_scalar_common_3[3])), (MR_Integer) 0, &ExitPortCode_22);
  }
  else
  {
    MR_Word ActivationPtr1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeActivationPtr_14, (MR_Integer) 0))));
    MR_Word CallPortCode0_20;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_89;

    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ActivationPtr1_19));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MiddleCSD_12));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (TopCSD_11));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (ProcStaticVar_13));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_45));
    }
    ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_10, (MR_String) "det_call_port_code_sr", (MR_Integer) 4, Var_43, Var_89, (MR_Integer) 0, &CallPortCode0_20);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, CallPortCode0_20, &CallPortCode_21);
    ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ModuleInfo_10, (MR_String) "det_exit_port_code_sr", (MR_Integer) 3, Var_45, (MR_Word) ((MR_Unsigned) 0U), &ExitPortCode_22);
  }
  hlds__hlds_goal__make_impure_2_p_0(GoalInfo0_15, &GoalInfo_23);
  {
    Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (ExitPortCode_22));
    MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Goal0_17));
    MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (CallPortCode_21));
    MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (BindProcStaticVarGoal_16));
    MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), GoalExpr_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), GoalExpr_24, 2) = ((MR_Box) (Var_61));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_18 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_24));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_23));
  }
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
    Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (OutputVars_11));
  }
  ll_backend__deep_profiling__generate_deep_call_7_p_0(ModuleInfo_7, Name_8, Arity_9, ArgVars_10, Var_13, (MR_Integer) 0, Goal_12);
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProcTable_19;

  ll_backend__deep_profiling__deep_prof_maybe_transform_proc_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcTable_19);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcTable_19));
}

static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredMap_0_13,
  MR_Word * STATE_VARIABLE_PredMap_14)
{
  MR_Word PredInfo0_8;
  MR_Word ProcIds_9;
  MR_Word ProcTable0_10;
  MR_Word ProcTable_11;
  MR_Word PredInfo_12;
  MR_Word Var_15;
  MR_Box conv0_PredInfo0_8;
  MR_Box conv2_ProcTable_11;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredMap_0_13, ((MR_Box) (PredId_6)), &conv0_PredInfo0_8);
  PredInfo0_8 = ((MR_Word) (conv0_PredInfo0_8));
  ProcIds_9 = hlds__hlds_pred__pred_info_valid_non_imported_procids_1_f_0(PredInfo0_8);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_8, &ProcTable0_10);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (PredId_6));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[1]), Var_15, ProcIds_9, ((MR_Box) (ProcTable0_10)), &conv2_ProcTable_11);
  ProcTable_11 = ((MR_Word) (conv2_ProcTable_11));
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_11, PredInfo0_8, &PredInfo_12);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_12)), STATE_VARIABLE_PredMap_0_13, STATE_VARIABLE_PredMap_14);
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
    MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0))));
    MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1))));
    MR_Word PredInfo0_17;
    MR_Word Types_18;
    MR_Word Origin_19;
    MR_Word ProcTable0_20;
    MR_Word ProcInfo0_21;
    MR_Word Goal0_22;
    MR_Word Detism_23;
    MR_Box conv1_ProcInfo0_21;
    MR_Integer CloneProcId_29;
    MR_Word ClonePredProcId_30;
    MR_Word Goal_32;
    MR_Word SolnCount_25;
    MR_Word HeadVars_26;
    MR_Word Modes_27;
    MR_Word Outputs_28;
    MR_Word TailRecInfo_31;
    MR_Word FoundTailCall_33;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word _CanFail_24;
    MR_Word STATE_VARIABLE_Outputs_12_80;
    MR_Word _Continue_34;
    MR_Word Var_54;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_7, PredId_15, &PredInfo0_17);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_17, &Types_18);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_17, &Origin_19);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_17, &ProcTable0_20);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_20, ((MR_Box) (ProcId_16)), &conv1_ProcInfo0_21);
    ProcInfo0_21 = ((MR_Word) (conv1_ProcInfo0_21));
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_21, &Goal0_22);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo0_21, &Detism_23);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_23, &_CanFail_24, &SolnCount_25);
    succeeded = (SolnCount_25 != (MR_Integer) 3);
    if (succeeded)
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_21, &HeadVars_26);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_21, &Modes_27);
      succeeded = ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(HeadVars_26, Modes_27, Types_18, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_Outputs_12_80);
      if (succeeded)
        Outputs_28 = STATE_VARIABLE_Outputs_12_80;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.deep_profiling.find_list_of_output_args\'/5", (MR_String) "list length mismatch");
          return;
        }
      hlds__hlds_pred__clone_proc_id_3_p_0(ProcTable0_20, ProcId_16, &CloneProcId_29);
      Var_52 = (MR_Word) ((MR_Unsigned) 0U);
      Var_53 = (MR_Integer) 0;
      {
        ClonePredProcId_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClonePredProcId_30, 0) = ((MR_Box) (PredId_15));
        MR_hl_field(MR_mktag(0), ClonePredProcId_30, 1) = ((MR_Box) (CloneProcId_29));
      }
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (PredProcId_6));
        MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (ClonePredProcId_30));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
      }
      {
        TailRecInfo_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TailRecInfo_31, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_7));
        MR_hl_field(MR_mktag(0), TailRecInfo_31, 1) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), TailRecInfo_31, 2) = (MR_Box) ((MR_Unsigned) (Detism_23));
        MR_hl_field(MR_mktag(0), TailRecInfo_31, 3) = ((MR_Box) (Outputs_28));
      }
      ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Goal0_22, &Goal_32, TailRecInfo_31, Var_53, &FoundTailCall_33, &_Continue_34);
      succeeded = (FoundTailCall_33 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Origin_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_54 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(Goal_32);
          succeeded = (Var_54 != (MR_Integer) 0);
        }
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word ProcInfo1_37;
      MR_Word TailCallSites_39;
      MR_Word OrigDeepRecInfo_40;
      MR_Word DeepOriginalBody_41;
      MR_Word OrigDeepProfileInfo_42;
      MR_Word CloneDeepRecInfo_43;
      MR_Word CloneDeepProfileInfo_44;
      MR_Word ProcInfo_45;
      MR_Word CloneProcInfo_46;
      MR_Word ProcTable1_47;
      MR_Word ProcTable_48;
      MR_Word PredInfo_49;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Body_87;
      MR_Word HeadVars_88;
      MR_Word Instmap_89;
      MR_Word Vartypes_90;
      MR_Word MaybeDetism_91;
      MR_Word Detism_92;
      MR_Word Varset_93;
      MR_Integer _Num_38;

      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_32, ProcInfo0_21, &ProcInfo1_37);
      ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(Goal_32, (MR_Integer) 0, &_Num_38, (MR_Word) ((MR_Unsigned) 0U), &TailCallSites_39);
      Var_58 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClonePredProcId_30)));
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (PredProcId_6));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (ClonePredProcId_30));
        MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (TailCallSites_39));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (Var_59));
      }
      {
        OrigDeepRecInfo_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), OrigDeepRecInfo_40, 0) = ((MR_Box) (Var_57));
      }
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_21, &Body_87);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_21, &HeadVars_88);
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_7, ProcInfo0_21, &Instmap_89);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_21, &Vartypes_90);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_21, &MaybeDetism_91);
      if ((MaybeDetism_91 == (MR_Word) ((MR_Unsigned) 0U)))
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo0_21, &Detism_92);
      else
        Detism_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_91, (MR_Integer) 0))));
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo0_21, &Varset_93);
      {
        DeepOriginalBody_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DeepOriginalBody_41, 0) = ((MR_Box) (Body_87));
        MR_hl_field(MR_mktag(0), DeepOriginalBody_41, 1) = ((MR_Box) (HeadVars_88));
        MR_hl_field(MR_mktag(0), DeepOriginalBody_41, 2) = ((MR_Box) (Instmap_89));
        MR_hl_field(MR_mktag(0), DeepOriginalBody_41, 3) = ((MR_Box) (Vartypes_90));
        MR_hl_field(MR_mktag(0), DeepOriginalBody_41, 4) = (MR_Box) ((MR_Unsigned) (Detism_92));
        MR_hl_field(MR_mktag(0), DeepOriginalBody_41, 5) = ((MR_Box) (Varset_93));
      }
      {
        OrigDeepProfileInfo_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OrigDeepProfileInfo_42, 0) = ((MR_Box) (OrigDeepRecInfo_40));
        MR_hl_field(MR_mktag(0), OrigDeepProfileInfo_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), OrigDeepProfileInfo_42, 2) = ((MR_Box) (DeepOriginalBody_41));
      }
      Var_64 = (MR_Word) ((MR_Word) (PredProcId_6));
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (Var_59));
      }
      {
        CloneDeepRecInfo_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CloneDeepRecInfo_43, 0) = ((MR_Box) (Var_63));
      }
      {
        CloneDeepProfileInfo_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CloneDeepProfileInfo_44, 0) = ((MR_Box) (CloneDeepRecInfo_43));
        MR_hl_field(MR_mktag(0), CloneDeepProfileInfo_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), CloneDeepProfileInfo_44, 2) = ((MR_Box) (DeepOriginalBody_41));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (OrigDeepProfileInfo_42));
      }
      hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_p_0(Var_69, ProcInfo1_37, &ProcInfo_45);
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (CloneDeepProfileInfo_44));
      }
      hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_p_0(Var_70, ProcInfo1_37, &CloneProcInfo_46);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_16)), ((MR_Box) (ProcInfo_45)), ProcTable0_20, &ProcTable1_47);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (CloneProcId_29)), ((MR_Box) (CloneProcInfo_46)), ProcTable1_47, &ProcTable_48);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_48, PredInfo0_17, &PredInfo_49);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_15, PredInfo_49, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
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
    MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));
    MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));

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
          MR_Word BuiltinState_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_9, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word Features_25;

          Features_25 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_10);
          succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), ((MR_Box) ((MR_Integer) 9)), Features_25);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_TailCallSites_53 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (STATE_VARIABLE_N_0_50));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TailCallSites_0_52));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_N_51 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_50 + (MR_Unsigned) 1);
              *STATE_VARIABLE_TailCallSites_53 = STATE_VARIABLE_TailCallSites_0_52;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attrs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
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
              MR_Word Goals_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));

              ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(Goals_37, STATE_VARIABLE_N_0_50, STATE_VARIABLE_N_51, STATE_VARIABLE_TailCallSites_0_52, STATE_VARIABLE_TailCallSites_53);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));

              ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(Goals_80, STATE_VARIABLE_N_0_50, STATE_VARIABLE_N_51, STATE_VARIABLE_TailCallSites_0_52, STATE_VARIABLE_TailCallSites_53);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3))));

              ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_p_0(Cases_40, STATE_VARIABLE_N_0_50, STATE_VARIABLE_N_51, STATE_VARIABLE_TailCallSites_0_52, STATE_VARIABLE_TailCallSites_53);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Word SubGoal_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
              MR_Word FGT_48;

              succeeded = ((((MR_tag((MR_Word) Reason_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_46, (MR_Integer) 2))) & (MR_Integer) 3);
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
              MR_Word Cond_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
              MR_Word Then_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3))));
              MR_Word Else_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 4))));
              MR_Integer STATE_VARIABLE_N_60_60;
              MR_Word STATE_VARIABLE_TailCallSites_61_61;
              MR_Integer STATE_VARIABLE_N_62_62;
              MR_Word STATE_VARIABLE_TailCallSites_63_63;
              MR_Word next_value_of_Goal_6;
              MR_Integer next_value_of_STATE_VARIABLE_N_0_50;
              MR_Word next_value_of_STATE_VARIABLE_TailCallSites_0_52;

              ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(Cond_42, STATE_VARIABLE_N_0_50, &STATE_VARIABLE_N_60_60, STATE_VARIABLE_TailCallSites_0_52, &STATE_VARIABLE_TailCallSites_61_61);
              ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(Then_43, STATE_VARIABLE_N_60_60, &STATE_VARIABLE_N_62_62, STATE_VARIABLE_TailCallSites_61_61, &STATE_VARIABLE_TailCallSites_63_63);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = Else_44;
              next_value_of_STATE_VARIABLE_N_0_50 = STATE_VARIABLE_N_62_62;
              next_value_of_STATE_VARIABLE_TailCallSites_0_52 = STATE_VARIABLE_TailCallSites_63_63;
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
      MR_Word Case_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_12, (MR_Integer) 2))));
      MR_Integer STATE_VARIABLE_N_23_23;
      MR_Word STATE_VARIABLE_TailCallSites_24_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_2;
      MR_Word next_value_of_STATE_VARIABLE_TailCallSites_0_4;

      ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(Goal_18, STATE_VARIABLE_N_0_2, &STATE_VARIABLE_N_23_23, STATE_VARIABLE_TailCallSites_0_4, &STATE_VARIABLE_TailCallSites_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_13;
      next_value_of_STATE_VARIABLE_N_0_2 = STATE_VARIABLE_N_23_23;
      next_value_of_STATE_VARIABLE_TailCallSites_0_4 = STATE_VARIABLE_TailCallSites_24_24;
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
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_N_20_20;
      MR_Word STATE_VARIABLE_TailCallSites_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_2;
      MR_Word next_value_of_STATE_VARIABLE_TailCallSites_0_4;

      ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(Goal_12, STATE_VARIABLE_N_0_2, &STATE_VARIABLE_N_20_20, STATE_VARIABLE_TailCallSites_0_4, &STATE_VARIABLE_TailCallSites_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_STATE_VARIABLE_N_0_2 = STATE_VARIABLE_N_20_20;
      next_value_of_STATE_VARIABLE_TailCallSites_0_4 = STATE_VARIABLE_TailCallSites_21_21;
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
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_FoundTailCall_23_23;
    MR_Word Var_20;

    ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Goal0_18, &Goal_19, TailRecInfo_3, STATE_VARIABLE_FoundTailCall_0_4, &STATE_VARIABLE_FoundTailCall_23_23, &Var_20);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(MR_mktag(0), Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(MR_mktag(0), Case_12, 2) = ((MR_Box) (Goal_19));
    }
    ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(Cases0_11, &Cases_13, TailRecInfo_3, STATE_VARIABLE_FoundTailCall_23_23, STATE_VARIABLE_FoundTailCall_5);
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
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goal_11;
      MR_Word Var_14;

      ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Var_31, &Goal_11, TailRecInfo_3, STATE_VARIABLE_FoundTailCall_0_4, STATE_VARIABLE_FoundTailCall_5, &Var_14);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Goals_22;
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));

      if ((Var_56 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Goal_37;
        MR_Word Var_40;

        ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Var_57, &Goal_37, TailRecInfo_3, STATE_VARIABLE_FoundTailCall_0_4, STATE_VARIABLE_FoundTailCall_5, &Var_40);
        {
          Goals_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Goals_22, 0) = ((MR_Box) (Goal_37));
          MR_hl_field(MR_mktag(1), Goals_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Goals_48;

        ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(Var_56, &Goals_48, TailRecInfo_3, STATE_VARIABLE_FoundTailCall_0_4, STATE_VARIABLE_FoundTailCall_5);
        {
          Goals_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Goals_22, 0) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(1), Goals_22, 1) = ((MR_Box) (Goals_48));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_22));
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
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TailRecInfo_3, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
    }
    *STATE_VARIABLE_FoundTailCall_5 = STATE_VARIABLE_FoundTailCall_0_4;
  }
  else
  {
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Word TailContinue_19;
    MR_Word STATE_VARIABLE_FoundTailCall_24_24;

    ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(Goals0_13, &Goals_15, TailRecInfo_3, STATE_VARIABLE_FoundTailCall_0_4, &STATE_VARIABLE_FoundTailCall_24_24, &TailContinue_19);
    if ((TailContinue_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Goal_14 = Goal0_12;
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_FoundTailCall_5 = STATE_VARIABLE_FoundTailCall_24_24;
    }
    else
    {
      MR_Word Outputs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailContinue_19, (MR_Integer) 0))));
      MR_Word HeadTailRecInfo_21;
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TailRecInfo_3, (MR_Integer) 0))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TailRecInfo_3, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TailRecInfo_3, (MR_Integer) 2))) & (MR_Integer) 7);

      {
        HeadTailRecInfo_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadTailRecInfo_21, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), HeadTailRecInfo_21, 1) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), HeadTailRecInfo_21, 2) = (MR_Box) ((MR_Unsigned) (Var_31));
        MR_hl_field(MR_mktag(0), HeadTailRecInfo_21, 3) = ((MR_Box) (Outputs_20));
      }
      ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Goal0_12, &Goal_14, HeadTailRecInfo_21, STATE_VARIABLE_FoundTailCall_24_24, STATE_VARIABLE_FoundTailCall_5, HeadVar__6_6);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_15));
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
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));

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
        MR_Word Unify0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 3))));

        *Goal_8 = Goal0_7;
        switch (MR_tag((MR_Word) Unify0_47)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word ToVar_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unify0_47, (MR_Integer) 0))));
              MR_Word FromVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unify0_47, (MR_Integer) 1))));
              MR_Word Outputs_51;
              MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TailRecInfo_9, (MR_Integer) 3))));

              ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(Var_97, ToVar_49, FromVar_50, &Outputs_51);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Continue_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Outputs_51));
              }
            }
            break;
          case (MR_Integer) 3:
            *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        *STATE_VARIABLE_FoundTailCall_89 = STATE_VARIABLE_FoundTailCall_0_88;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 0))));
        MR_Integer ProcId_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 1))));
        MR_Word Args_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 2))));
        MR_Word Builtin_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word UnifyContext_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 4))));
        MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 5))));
        MR_Word ClonePredProcId_28;
        MR_Word TypeInfo_133_133;
        MR_Word PredProcId_27;
        MR_Word PredInfo_29;
        MR_Word ProcInfo_30;
        MR_Word CallDetism_31;
        MR_Word Types_32;
        MR_Word Modes_33;
        MR_Word CallOutputs_34;
        MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TailRecInfo_9, (MR_Integer) 1))));
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Box conv0_ClonePredProcId_28;

        {
          PredProcId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredProcId_27, 0) = ((MR_Box) (PredId_21));
          MR_hl_field(MR_mktag(0), PredProcId_27, 1) = ((MR_Box) (ProcId_22));
        }
        succeeded = mercury__assoc_list__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_98, ((MR_Box) (PredProcId_27)), &conv0_ClonePredProcId_28);
        if (succeeded)
        {
          ClonePredProcId_28 = ((MR_Word) (conv0_ClonePredProcId_28));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TailRecInfo_9, (MR_Integer) 0))));
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(Var_99, PredId_21, ProcId_22, &PredInfo_29, &ProcInfo_30);
          hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_30, &CallDetism_31);
          Var_131 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TailRecInfo_9, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (CallDetism_31 == Var_131);
          if (succeeded)
          {
            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_29, &Types_32);
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_30, &Modes_33);
            Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TailRecInfo_9, (MR_Integer) 0))));
            ll_backend__deep_profiling__find_list_of_output_args_5_p_0(Args_23, Modes_33, Types_32, Var_100, &CallOutputs_34);
            Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TailRecInfo_9, (MR_Integer) 3))));
            TypeInfo_133_133 = (MR_Word) (&ll_backend__deep_profiling_scalar_common_2[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_133_133, ((MR_Box) (CallOutputs_34)), ((MR_Box) (Var_132)));
            if (succeeded)
              succeeded = (Builtin_24 == (MR_Integer) 1);
          }
        }
        if (succeeded)
        {
          MR_Word ClonePredId_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClonePredProcId_28, (MR_Integer) 0))));
          MR_Integer CloneProcId_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClonePredProcId_28, (MR_Integer) 1))));
          MR_Word GoalExpr_37;
          MR_Word GoalInfo_38;

          {
            GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), GoalExpr_37, 0) = ((MR_Box) (ClonePredId_35));
            MR_hl_field(MR_mktag(2), GoalExpr_37, 1) = ((MR_Box) (CloneProcId_36));
            MR_hl_field(MR_mktag(2), GoalExpr_37, 2) = ((MR_Box) (Args_23));
            MR_hl_field(MR_mktag(2), GoalExpr_37, 3) = (MR_Box) ((MR_Unsigned) (Builtin_24));
            MR_hl_field(MR_mktag(2), GoalExpr_37, 4) = ((MR_Box) (UnifyContext_25));
            MR_hl_field(MR_mktag(2), GoalExpr_37, 5) = ((MR_Box) (SymName_26));
          }
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 9, GoalInfo0_13, &GoalInfo_38);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_37));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_38));
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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
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
            MR_Word ConjType_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));

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
                    GoalExpr_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_104, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), GoalExpr_104, 1) = (MR_Box) ((MR_Unsigned) (ConjType_69));
                    MR_hl_field(MR_mktag(3), GoalExpr_104, 2) = ((MR_Box) (Goals_71));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_104));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GoalExpr_107;
            MR_Word Goals0_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Goals_109;

            ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(Goals0_108, &Goals_109, TailRecInfo_9, STATE_VARIABLE_FoundTailCall_0_88, STATE_VARIABLE_FoundTailCall_89);
            {
              GoalExpr_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_107, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), GoalExpr_107, 1) = ((MR_Box) (Goals_109));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_107));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
            }
            *Continue_11 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word CanFail_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Cases_75;
            MR_Word GoalExpr_110;

            ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(Cases0_74, &Cases_75, TailRecInfo_9, STATE_VARIABLE_FoundTailCall_0_88, STATE_VARIABLE_FoundTailCall_89);
            {
              GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_110, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), GoalExpr_110, 1) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(3), GoalExpr_110, 2) = (MR_Box) ((MR_Unsigned) (CanFail_73));
              MR_hl_field(MR_mktag(3), GoalExpr_110, 3) = ((MR_Box) (Cases_75));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_110));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
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
            MR_Word Vars_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Cond_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Then0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Else0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));
            MR_Word Then_80;
            MR_Word Else_82;
            MR_Word STATE_VARIABLE_FoundTailCall_92_92;
            MR_Word GoalExpr_111;
            MR_Word Var_81;
            MR_Word Var_83;

            ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Then0_78, &Then_80, TailRecInfo_9, STATE_VARIABLE_FoundTailCall_0_88, &STATE_VARIABLE_FoundTailCall_92_92, &Var_81);
            ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(Else0_79, &Else_82, TailRecInfo_9, STATE_VARIABLE_FoundTailCall_92_92, STATE_VARIABLE_FoundTailCall_89, &Var_83);
            {
              GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_111, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), GoalExpr_111, 1) = ((MR_Box) (Vars_76));
              MR_hl_field(MR_mktag(3), GoalExpr_111, 2) = ((MR_Box) (Cond_77));
              MR_hl_field(MR_mktag(3), GoalExpr_111, 3) = ((MR_Box) (Then_80));
              MR_hl_field(MR_mktag(3), GoalExpr_111, 4) = ((MR_Box) (Else_82));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_111));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
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
    MR_Word Output0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Outputs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Output_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Outputs_12));
    }
  }
}

static void MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_5_p_0(
  MR_Word Vars_6,
  MR_Word Modes_7,
  MR_Word Types_8,
  MR_Word ModuleInfo_9,
  MR_Word * STATE_VARIABLE_Outputs_11)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Outputs_12_12;

  succeeded = ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(Vars_6, Modes_7, Types_8, ModuleInfo_9, &STATE_VARIABLE_Outputs_12_12);
  if (succeeded)
    *STATE_VARIABLE_Outputs_11 = STATE_VARIABLE_Outputs_12_12;
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
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));

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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Contains_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
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
              MR_Word Goals_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

              Contains_4 = ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(Goals_32);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              Contains_4 = ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(Goals_48);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));

              Contains_4 = ll_backend__deep_profiling__cases_contain_builtin_unify_or_compare_1_f_0(Cases_35);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_3 = SubGoal_49;

              // direct tailcall eliminated
              ;
              Goal_3 = next_value_of_Goal_3;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word Then_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
              MR_Word Else_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4))));
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Word Var_47;

              Var_45 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(Cond_37);
              succeeded = (Var_45 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_46 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(Then_38);
                succeeded = (Var_46 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_47 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(Else_39);
                  succeeded = (Var_47 == (MR_Integer) 0);
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
      MR_Word Case_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 2))));
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
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word ModuleInfo_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
  }
  else
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Mode_9;
    MR_Word Modes_10;
    MR_Word Type_11;
    MR_Word Types_12;
    MR_Word LaterOutputs_15;
    MR_Word TopFunctorMode_16;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Mode_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Modes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        Types_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        succeeded = ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(Vars_8, Modes_10, Types_12, ModuleInfo_4, &LaterOutputs_15);
        if (succeeded)
        {
          check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_4, Mode_9, Type_11, &TopFunctorMode_16);
          switch (TopFunctorMode_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__5_5 = LaterOutputs_15;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_7));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterOutputs_15));
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
ll_backend__deep_profiling__generate_var_5_p_0(
  MR_String Name_6,
  MR_Word Type_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_VarInfo_0_12,
  MR_Word * STATE_VARIABLE_VarInfo_13)
{
  MR_Word STATE_VARIABLE_VarSet_14_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_12, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_VarTypes_15_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_12, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_VarSet_16_16;
  MR_Word STATE_VARIABLE_VarTypes_17_17;

  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_6, Var_8, STATE_VARIABLE_VarSet_14_14, &STATE_VARIABLE_VarSet_16_16);
  hlds__vartypes__add_var_type_4_p_0(*Var_8, Type_7, STATE_VARIABLE_VarTypes_15_15, &STATE_VARIABLE_VarTypes_17_17);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarInfo_13 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_16_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_17_17));
  }
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
    MR_hl_field(MR_mktag(0), Unification_9, 0) = ((MR_Box) (Var_5));
    MR_hl_field(MR_mktag(0), Unification_9, 1) = ((MR_Box) (ConsId_4));
    MR_hl_field(MR_mktag(0), Unification_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_9, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_9, 4) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__deep_profiling_scalar_common_3[0])));
    MR_hl_field(MR_mktag(0), Unification_9, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Unification_9, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (ConsId_4));
    MR_hl_field(MR_mktag(1), Var_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), Var_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), GoalExpr_10, 0) = ((MR_Box) (Var_5));
    MR_hl_field(MR_mktag(1), GoalExpr_10, 1) = ((MR_Box) (Var_26));
    MR_hl_field(MR_mktag(1), GoalExpr_10, 2) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_6[0]));
    MR_hl_field(MR_mktag(1), GoalExpr_10, 3) = ((MR_Box) (Unification_9));
    MR_hl_field(MR_mktag(1), GoalExpr_10, 4) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[6]));
  }
  NonLocals_11 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5);
  InstMapDelta_12 = hlds__instmap__instmap_delta_bind_var_1_f_0(Var_5);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_11, InstMapDelta_12, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo1_13);
  hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, GoalInfo1_13, &GoalInfo_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_10));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_14));
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
    MR_Word OutputVars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars_12, (MR_Integer) 0))));

    InstMapDelta_19 = hlds__instmap__instmap_delta_bind_vars_1_f_0(OutputVars_18);
  }
  {
    SymName_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SymName_20, 0) = ((MR_Box) (Name_9));
  }
  {
    GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), GoalExpr_21, 0) = ((MR_Box) (PredId_15));
    MR_hl_field(MR_mktag(2), GoalExpr_21, 1) = ((MR_Box) (ProcId_16));
    MR_hl_field(MR_mktag(2), GoalExpr_21, 2) = ((MR_Box) (ArgVars_11));
    MR_hl_field(MR_mktag(2), GoalExpr_21, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(2), GoalExpr_21, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(2), GoalExpr_21, 5) = ((MR_Box) (SymName_20));
  }
  GoalInfo1_22 = hlds__hlds_goal__impure_init_goal_info_3_f_0(NonLocals_17, InstMapDelta_19, Detism_13);
  hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, GoalInfo1_22, &GoalInfo_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_21));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_23));
  }
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
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_13, (MR_Integer) 1))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_13, (MR_Integer) 0))));

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
        MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcIds_16, (MR_Integer) 1))));
        MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcIds_16, (MR_Integer) 0))));

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
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_PredMap_14;

  ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PredMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PredMap_14));
}

static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_1(
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
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  MR_Word Globals_4;
  MR_Word TailRecursion_5;
  MR_Word PredIds_6;
  MR_Word PredIdTable0_7;
  MR_Word PredIdTable_8;
  MR_Word STATE_VARIABLE_ModuleInfo_12_12;
  MR_Word STATE_VARIABLE_ModuleInfo_14_14;
  MR_Word Var_15;
  MR_Box conv3_PredIdTable_8;

  transform_hlds__dead_proc_elim__dead_proc_elim_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_12_12);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_12_12, &Globals_4);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 253, &TailRecursion_5);
  switch (TailRecursion_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_ModuleInfo_14_14 = STATE_VARIABLE_ModuleInfo_12_12;
      break;
    case (MR_Integer) 1:
      {
        MR_Word DepInfo_25;
        MR_Word SCCs_26;
        MR_Word STATE_VARIABLE_ModuleInfo_8_27;
        MR_Box conv1_STATE_VARIABLE_ModuleInfo_14_14;

        hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_12_12, &STATE_VARIABLE_ModuleInfo_8_27, &DepInfo_25);
        SCCs_26 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_25);
        mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__deep_profiling_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[6]), SCCs_26, ((MR_Box) (STATE_VARIABLE_ModuleInfo_8_27)), &conv1_STATE_VARIABLE_ModuleInfo_14_14);
        STATE_VARIABLE_ModuleInfo_14_14 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_14_14));
      }
      break;
  }
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_14_14, &PredIds_6);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_14_14, &PredIdTable0_7);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_2));
    MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_14_14));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&ll_backend__deep_profiling_scalar_common_1[0]), Var_15, PredIds_6, ((MR_Box) (PredIdTable0_7)), &conv3_PredIdTable_8);
  PredIdTable_8 = ((MR_Word) (conv3_PredIdTable_8));
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_8, STATE_VARIABLE_ModuleInfo_14_14, STATE_VARIABLE_ModuleInfo_10);
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
