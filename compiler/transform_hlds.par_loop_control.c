/*
** Automatically generated from `par_loop_control.m'
** by the Mercury compiler,
** version rotd-2025-12-07
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


// :- module transform_hlds.par_loop_control.
// :- implementation.

/*
INIT mercury__transform_hlds__par_loop_control__init
ENDINIT
*/

#include "transform_hlds.par_loop_control.mih"


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
#include "hlds.goal_path.mih"
#include "hlds.goal_refs.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
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
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s {
  MR_Word transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1;
  MR_bool transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11;
  jmp_buf transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15;
};

struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s {
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6;
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70;
  MR_bool transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded;
  jmp_buf transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_106;
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Var_196;
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Var_197;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__libs__dependency_graph__pti_dependency_info_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0;

static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_ordinal_ordered_fixup_goal_info_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_fixup_goal_info_0[2];

static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_fixup_goal_info_0[2];

static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0;

static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_ordinal_ordered_goal_is_last_goal_on_path_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_goal_is_last_goal_on_path_0[2];

static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_goal_is_last_goal_on_path_0[2];

static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_loop_control_info_0_0[10];

static const MR_ConstString transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_names_loop_control_info_0_0[10];

static const MR_DuArgLocn transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_locns_loop_control_info_0_0[10];

static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_loop_control_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0[1];

static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_loop_control_info_0[1];

static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0;

static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_ordinal_ordered_preserve_tail_recursion_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_preserve_tail_recursion_0[2];

static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_preserve_tail_recursion_0[2];

static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0;

static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1;

static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2;

static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_seen_usable_recursion_0_3[1];

static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3;

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_0[3];

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_1[1];

static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_seen_usable_recursion_0[2];

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_seen_usable_recursion_0[4];

static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_seen_usable_recursion_0[4];

static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1451__1_4_p_0(
  MR_Word Remap_4,
  MR_Word LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18,
  MR_Word * LambdaHeadVar__3_19);

static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1362__1_3_p_0(
  MR_Word Remap_22,
  MR_Word HeadVar__2_104,
  MR_Word * HeadVar__3_105);

static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1136__1_2_p_0(
  MR_Word RecPredProcId_41,
  MR_Word HeadVar__2_81);

static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1147__1_2_p_0(
  MR_Word ConjType_48,
  MR_Word HeadVar__2_86);

static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__par_loop_control__add_old_var_to_sets_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OldVarTable_10,
  MR_Word OldVar_11,
  MR_Word VarType_12,
  MR_Word STATE_VARIABLE_VarTable_0_22,
  MR_Word * STATE_VARIABLE_VarTable_23,
  MR_Word STATE_VARIABLE_Remap_0_24,
  MR_Word * STATE_VARIABLE_Remap_25);

static void MR_CALL 
transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(
  MR_Word Info_6,
  MR_Word RecParConjIds_7,
  MR_Word STATE_VARIABLE_Case_0_11,
  MR_Word * STATE_VARIABLE_Case_12,
  MR_Word * FixupGoalInfo_9);

static void MR_CALL 
transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(
  MR_Word Info_7,
  MR_Word IsLastGoal_8,
  MR_Word STATE_VARIABLE_Case_0_13,
  MR_Word * STATE_VARIABLE_Case_14,
  MR_Word * UseParentStack_10,
  MR_Word * FixupGoalInfo_11);

static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_7_p_0(
  MR_Word Info_8,
  MR_Word IsLastGoal_9,
  MR_Word GoalPath0_10,
  MR_Word STATE_VARIABLE_Goal_0_45,
  MR_Word * STATE_VARIABLE_Goal_46,
  MR_Word STATE_VARIABLE_VarTable_0_47,
  MR_Word * STATE_VARIABLE_VarTable_48);

static void MR_CALL 
transform_hlds__par_loop_control__par_conj_loop_control_7_p_0(
  MR_Word Info_8,
  MR_Word Conjuncts0_9,
  MR_Word IsLastGoal_10,
  MR_Word GoalInfo_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarTable_0_24,
  MR_Word * STATE_VARIABLE_VarTable_25);

static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(
  MR_Word Info_7,
  MR_Word IsLastGoal_8,
  MR_Word STATE_VARIABLE_Goal_0_116,
  MR_Word * STATE_VARIABLE_Goal_117,
  MR_Word * UseParentStack_10,
  MR_Word * FixupGoalInfo_11);

static void MR_CALL 
transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_6_p_0(
  MR_Word Info_1,
  MR_Word UseParentStack_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarTable_0_5,
  MR_Word * STATE_VARIABLE_VarTable_6);

static void MR_CALL 
transform_hlds__par_loop_control__create_get_free_slot_goal_5_p_0(
  MR_Word Info_6,
  MR_Word * LCSVar_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_VarTable_0_19,
  MR_Word * STATE_VARIABLE_VarTable_20);

static void MR_CALL 
transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(
  MR_Word SelfPredProcId_4,
  MR_Word HeadVar__2_2,
  MR_Word * SeenUsableRecursion_8);

static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(
  MR_Word DepInfo_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_19,
  MR_Word * STATE_VARIABLE_ProcInfo_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22);

static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0(
  MR_Word PredProcId_7,
  MR_Word InnerPredProcId_8,
  MR_Word InnerPredName_9,
  MR_Word ModuleInfo_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_47,
  MR_Word * STATE_VARIABLE_ProcInfo_48);

static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0(
  MR_Word Remap_4,
  MR_Word OldInstmapDelta_5,
  MR_Word * STATE_VARIABLE_InstmapDelta_13);

static void MR_CALL 
transform_hlds__par_loop_control__create_create_loop_control_goal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word NumContextsVar_8,
  MR_Word * LCVar_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18);

static void MR_CALL 
transform_hlds__par_loop_control__create_inner_proc_8_p_0(
  MR_Word RecParConjIds_9,
  MR_Word OldPredProcId_10,
  MR_Word OldProcInfo_11,
  MR_Word ContainingGoalMap_12,
  MR_Word * PredProcId_13,
  MR_Word * TransformedSymName_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58);

static void MR_CALL 
transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__par_loop_control__loop_control_var_type_0_f_0(void);

static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(
  MR_Word Info_6,
  MR_Word RecParConjIds_7,
  MR_Word * FixupGoalInfo_8,
  MR_Word STATE_VARIABLE_Goal_0_70,
  MR_Word * STATE_VARIABLE_Goal_71);

static void MR_CALL 
transform_hlds__par_loop_control__fixup_goal_info_3_p_0(
  MR_Word Info_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6);

static void MR_CALL 
transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0(
  MR_Word Info_3,
  MR_Word * Goal_4);

static void MR_CALL 
transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(
  MR_Word List_3,
  MR_Word * Fixup_4);

static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_7_p_0(
  MR_Word Info_8,
  MR_Word GoalIds_9,
  MR_Word ContainingGoalMap_10,
  MR_Word STATE_VARIABLE_Goal_0_14,
  MR_Word * STATE_VARIABLE_Goal_15,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17);

static void MR_CALL 
transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SelfPredProcId_2,
  MR_Word STATE_VARIABLE_SeenUsableRecursion_0_3,
  MR_Word * STATE_VARIABLE_SeenUsableRecursion_4);

static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(
  MR_Word Conj_5,
  MR_Word Conjs_6,
  MR_Word SelfPredProcId_7,
  MR_Word * SeenUsableRecursion_8);

static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(
  MR_Word Goal_4,
  MR_Word SelfPredProcId_5,
  MR_Word * SeenUsableRecursion_6);

static void MR_CALL 
transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Seen0_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_1[5][2];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_2[4][3];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_3[2][1];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_4[3][9];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_5[4][6];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_6[1][10];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_7[2][5];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_8[1][8];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_9[1][7];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_10[1][11];




static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row   3 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(1, &transform_hlds__par_loop_control_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__par_loop_control_scalar_common_1[3])))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "LCS")),
    ((MR_Box) (MR_mkword(2, &transform_hlds__par_loop_control_scalar_common_3[1]))),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { ((MR_Box) (MR_mkword(1, &transform_hlds__par_loop_control_scalar_common_3[0]))) },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_4[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__par_loop_control__libs__dependency_graph__pti_dependency_info_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_goal_is_last_goal_on_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_goal_is_last_goal_on_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_5[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_goal_is_last_goal_on_path_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_7[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_8[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_9[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_10[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__libs__dependency_graph__pti_dependency_info_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0 = {
  (MR_String) "fixup_goal_info",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1 = {
  (MR_String) "do_not_fixup_goal_info",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_ordinal_ordered_fixup_goal_info_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_fixup_goal_info_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_fixup_goal_info_0_0
};

static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_fixup_goal_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "fixup_goal_info",
  { transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_fixup_goal_info_0 },
  { transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_ordinal_ordered_fixup_goal_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_fixup_goal_info_0,

};

static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0 = {
  (MR_String) "goal_is_last_goal_on_path",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1 = {
  (MR_String) "goal_is_not_last_goal_on_path",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_ordinal_ordered_goal_is_last_goal_on_path_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_goal_is_last_goal_on_path_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_goal_is_last_goal_on_path_0_1
};

static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_goal_is_last_goal_on_path_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_goal_is_last_goal_on_path_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "goal_is_last_goal_on_path",
  { transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_goal_is_last_goal_on_path_0 },
  { transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_ordinal_ordered_goal_is_last_goal_on_path_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_goal_is_last_goal_on_path_0,

};

static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_loop_control_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_preserve_tail_recursion_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_names_loop_control_info_0_0[10] = {
  (MR_String) "lci_module_info",
  (MR_String) "lci_lc_var",
  (MR_String) "lci_rec_pred_proc_id",
  (MR_String) "lci_inner_pred_proc_id",
  (MR_String) "lci_inner_pred_name",
  (MR_String) "lci_preserve_tail_recursion",
  (MR_String) "lci_wait_free_slot_proc",
  (MR_String) "lci_wait_free_slot_proc_name",
  (MR_String) "lci_join_and_terminate_proc",
  (MR_String) "lci_join_and_terminate_proc_name"
};

static const MR_DuArgLocn transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_locns_loop_control_info_0_0[10] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0 = {
  (MR_String) "loop_control_info",
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_loop_control_info_0_0,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_names_loop_control_info_0_0,
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_locns_loop_control_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0[1] = { &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0 };

static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_loop_control_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0[1] = { &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0 };

static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_loop_control_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "loop_control_info",
  { transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0 },
  { transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_loop_control_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_loop_control_info_0,

};

static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0 = {
  (MR_String) "preserve_tail_recursion",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1 = {
  (MR_String) "do_not_preserve_tail_recursion",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_ordinal_ordered_preserve_tail_recursion_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_preserve_tail_recursion_0[2] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_functor_desc_preserve_tail_recursion_0_0
};

static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_preserve_tail_recursion_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_preserve_tail_recursion_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "preserve_tail_recursion",
  { transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_preserve_tail_recursion_0 },
  { transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_ordinal_ordered_preserve_tail_recursion_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_preserve_tail_recursion_0,

};

static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0 = {
  (MR_String) "have_not_seen_recursive_call",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1 = {
  (MR_String) "seen_one_recursive_call_on_every_branch",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2 = {
  (MR_String) "seen_unusable_recursion",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0) }
};

static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_seen_usable_recursion_0_3[1] = { (MR_PseudoTypeInfo) (&transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0) };

static const MR_DuFunctorDesc transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3 = {
  (MR_String) "seen_usable_recursion_in_par_conj",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(3),
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_seen_usable_recursion_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_0[3] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2
};

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_1[1] = { &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3 };

static const MR_DuPtagLayout transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_seen_usable_recursion_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_seen_usable_recursion_0[4] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_0,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_1,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_2,
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3
};

static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_seen_usable_recursion_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "seen_usable_recursion",
  { transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_seen_usable_recursion_0 },
  { transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_seen_usable_recursion_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_seen_usable_recursion_0,

};

static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1451__1_4_p_0(
  MR_Word Remap_4,
  MR_Word LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18,
  MR_Word * LambdaHeadVar__3_19)
{
  MR_Word Var_12;
  MR_Word OldVar_20 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_17, 0))));
  MR_Word Inst_21 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_17, 1))));
  MR_Box conv0_Var_12;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), Remap_4, ((MR_Box) (OldVar_20)), &conv0_Var_12);
  Var_12 = ((MR_Word) (conv0_Var_12));
  hlds__instmap__instmap_delta_set_var_4_p_0(Var_12, Inst_21, LambdaHeadVar__2_18, LambdaHeadVar__3_19);
}

static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1362__1_3_p_0(
  MR_Word Remap_22,
  MR_Word HeadVar__2_104,
  MR_Word * HeadVar__3_105)
{
  MR_Box conv0_HeadVar__3_105;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), Remap_22, ((MR_Box) (HeadVar__2_104)), &conv0_HeadVar__3_105);
  *HeadVar__3_105 = ((MR_Word) (conv0_HeadVar__3_105));
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1136__1_2_p_0(
  MR_Word RecPredProcId_41,
  MR_Word HeadVar__2_81)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(RecPredProcId_41, HeadVar__2_81);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1147__1_2_p_0(
  MR_Word ConjType_48,
  MR_Word HeadVar__2_86)
{
  MR_bool succeeded = (ConjType_48 == HeadVar__2_86);

  return succeeded;
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
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
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_9_9;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_9_9 = (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(
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
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_33 == CastY_34);
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
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 5))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 5))) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;
              MR_Integer Var_45 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_46 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_45 < Var_46);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_45 > Var_46);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult9_30, ArgX9_28, ArgY9_29);
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX10_31, ArgY10_32);
                  }
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
transform_hlds__par_loop_control____Unify____loop_control_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_26_26;
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
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 5))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 5))) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_26_26 = (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX9_19, ArgY9_20);
                    if (succeeded)
                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX10_21, ArgY10_22);
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
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(
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
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(
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
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__par_loop_control__add_old_var_to_sets_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OldVarTable_10,
  MR_Word OldVar_11,
  MR_Word VarType_12,
  MR_Word STATE_VARIABLE_VarTable_0_22,
  MR_Word * STATE_VARIABLE_VarTable_23,
  MR_Word STATE_VARIABLE_Remap_0_24,
  MR_Word * STATE_VARIABLE_Remap_25)
{
  MR_Word OldVarEntry_15;
  MR_String OldName_16;
  MR_Word VarTypeIsDummy_19;
  MR_Word Entry_20;
  MR_Word Var_21;

  parse_tree__var_table__lookup_var_entry_3_p_0(OldVarTable_10, OldVar_11, &OldVarEntry_15);
  OldName_16 = ((MR_String) ((MR_hl_field(0, OldVarEntry_15, 0))));
  VarTypeIsDummy_19 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_9, VarType_12);
  {
    Entry_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_20, 0) = ((MR_Box) (OldName_16));
    MR_hl_field(0, Entry_20, 1) = ((MR_Box) (VarType_12));
    MR_hl_field(0, Entry_20, 2) = (MR_Box) ((MR_Unsigned) (VarTypeIsDummy_19));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_20, &Var_21, STATE_VARIABLE_VarTable_0_22, STATE_VARIABLE_VarTable_23);
  mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), ((MR_Box) (OldVar_11)), ((MR_Box) (Var_21)), STATE_VARIABLE_Remap_0_24, STATE_VARIABLE_Remap_25);
}

static void MR_CALL 
transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(
  MR_Word Info_6,
  MR_Word RecParConjIds_7,
  MR_Word STATE_VARIABLE_Case_0_11,
  MR_Word * STATE_VARIABLE_Case_12,
  MR_Word * FixupGoalInfo_9)
{
  MR_Word STATE_VARIABLE_Goal_1_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_11, 2))));
  MR_Word STATE_VARIABLE_Goal_2_14;
  MR_Word Var_17;
  MR_Word Var_18;

  transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(Info_6, RecParConjIds_7, FixupGoalInfo_9, STATE_VARIABLE_Goal_1_13, &STATE_VARIABLE_Goal_2_14);
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_11, 0))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_11, 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Case_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_Goal_2_14));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(
  MR_Word Info_7,
  MR_Word IsLastGoal_8,
  MR_Word STATE_VARIABLE_Case_0_13,
  MR_Word * STATE_VARIABLE_Case_14,
  MR_Word * UseParentStack_10,
  MR_Word * FixupGoalInfo_11)
{
  MR_Word STATE_VARIABLE_Goal_1_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_13, 2))));
  MR_Word STATE_VARIABLE_Goal_2_16;
  MR_Word Var_19;
  MR_Word Var_20;

  transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, STATE_VARIABLE_Goal_1_15, &STATE_VARIABLE_Goal_2_16, UseParentStack_10, FixupGoalInfo_11);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_13, 0))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_13, 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Case_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_Goal_2_16));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_7_p_0(
  MR_Word Info_8,
  MR_Word IsLastGoal_9,
  MR_Word GoalPath0_10,
  MR_Word STATE_VARIABLE_Goal_0_45,
  MR_Word * STATE_VARIABLE_Goal_46,
  MR_Word STATE_VARIABLE_VarTable_0_47,
  MR_Word * STATE_VARIABLE_VarTable_48)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_45, 0))));
  MR_Word GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_45, 1))));
  MR_Word GoalPath_15;
  MR_Word Step_16;

  succeeded = mdbcomp__goal_path__goal_path_remove_first_3_p_0(GoalPath0_10, &GoalPath_15, &Step_16);
  if (succeeded)
  {
    MR_String ErrorString_17;
    MR_Word GoalExpr_24;
    MR_String Var_52;
    MR_Word STATE_VARIABLE_Goal_1_73;
    MR_String Var_104;

    Var_52 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0), ((MR_Box) (Step_16)));
    Var_104 = mercury__string__f_43_43_2_f_0(Var_52, (MR_String) "\"");
    ErrorString_17 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t follow goal path step: \"", Var_104);
    switch (MR_tag((MR_Word) Step_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Step_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            {
              MR_String Var_67;
              MR_String Var_71;
              MR_String Var_107;

              Var_71 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0), ((MR_Box) (Step_16)));
              Var_107 = mercury__string__f_43_43_2_f_0(Var_71, (MR_String) "\"");
              Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", Var_107);
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/7", Var_67);
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_33;
              MR_Word Cond_34;
              MR_Word Then0_35;
              MR_Word Else_36;

              succeeded = ((((MR_tag((MR_Word) GoalExpr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Vars_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
                Cond_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
                Then0_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 3))));
                Else_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 4))));
                {
                  MR_Word Then_37;

                  transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_7_p_0(Info_8, IsLastGoal_9, GoalPath_15, Then0_35, &Then_37, STATE_VARIABLE_VarTable_0_47, STATE_VARIABLE_VarTable_48);
                  {
                    GoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, GoalExpr_24, 1) = ((MR_Box) (Vars_33));
                    MR_hl_field(3, GoalExpr_24, 2) = ((MR_Box) (Cond_34));
                    MR_hl_field(3, GoalExpr_24, 3) = ((MR_Box) (Then_37));
                    MR_hl_field(3, GoalExpr_24, 4) = ((MR_Box) (Else_36));
                  }
                }
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/7", ErrorString_17);
                  return;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Else0_38;
              MR_Word Vars_82;
              MR_Word Cond_83;
              MR_Word Then_85;

              succeeded = ((((MR_tag((MR_Word) GoalExpr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Vars_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
                Cond_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
                Then_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 3))));
                Else0_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 4))));
                {
                  MR_Word Else_81;

                  transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_7_p_0(Info_8, IsLastGoal_9, GoalPath_15, Else0_38, &Else_81, STATE_VARIABLE_VarTable_0_47, STATE_VARIABLE_VarTable_48);
                  {
                    GoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, GoalExpr_24, 1) = ((MR_Box) (Vars_82));
                    MR_hl_field(3, GoalExpr_24, 2) = ((MR_Box) (Cond_83));
                    MR_hl_field(3, GoalExpr_24, 3) = ((MR_Box) (Then_85));
                    MR_hl_field(3, GoalExpr_24, 4) = ((MR_Box) (Else_81));
                  }
                }
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/7", ErrorString_17);
                  return;
                }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer N_18 = ((MR_Integer) ((MR_hl_field(1, Step_16, 0))));
          MR_Word Conjs0_19;
          MR_Word Conj0_20;
          MR_Word TypeCtorInfo_97_97;
          MR_Word Var_54;
          MR_Box conv0_Conj0_20;

          succeeded = ((((MR_tag((MR_Word) GoalExpr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_54 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 1))) & (MR_Integer) 1);
            Conjs0_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
            succeeded = (Var_54 == (MR_Integer) 0);
            if (succeeded)
            {
              TypeCtorInfo_97_97 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
              succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_97_97, Conjs0_19, N_18, &conv0_Conj0_20);
              if (succeeded)
              {
                Conj0_20 = ((MR_Word) (conv0_Conj0_20));
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
          {
            MR_Word IsLastGoalConj_21;
            MR_Word Conj_22;
            MR_Word Conjs_23;

            switch (IsLastGoal_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_102;

                  Var_102 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_19);
                  succeeded = (N_18 == Var_102);
                  if (succeeded)
                    IsLastGoalConj_21 = (MR_Integer) 0;
                  else
                    IsLastGoalConj_21 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 1:
                IsLastGoalConj_21 = IsLastGoal_9;
                break;
            }
            transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_7_p_0(Info_8, IsLastGoalConj_21, GoalPath_15, Conj0_20, &Conj_22, STATE_VARIABLE_VarTable_0_47, STATE_VARIABLE_VarTable_48);
            mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_19, N_18, ((MR_Box) (Conj_22)), &Conjs_23);
            {
              GoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, GoalExpr_24, 2) = ((MR_Box) (Conjs_23));
            }
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/7", ErrorString_17);
              return;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_67;
          MR_String Var_71;
          MR_String Var_107;

          Var_71 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0), ((MR_Box) (Step_16)));
          Var_107 = mercury__string__f_43_43_2_f_0(Var_71, (MR_String) "\"");
          Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", Var_107);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/7", Var_67);
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Step_16, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer N_80 = ((MR_Integer) ((MR_hl_field(3, Step_16, 1))));
              MR_Word Var_26;
              MR_Word CanFail_27;
              MR_Word Cases0_28;
              MR_Word Case0_29;
              MR_Word TypeCtorInfo_100_100;
              MR_Box conv1_Case0_29;

              succeeded = ((((MR_tag((MR_Word) GoalExpr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
                CanFail_27 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 2))) & (MR_Integer) 1);
                Cases0_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 3))));
                TypeCtorInfo_100_100 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_100_100, Cases0_28, N_80, &conv1_Case0_29);
                if (succeeded)
                {
                  Case0_29 = ((MR_Word) (conv1_Case0_29));
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word Goal_11;
                MR_Word Goal0_30 = ((MR_Word) ((MR_hl_field(0, Case0_29, 2))));
                MR_Word Case_31;
                MR_Word Cases_32;
                MR_Word Var_93;
                MR_Word Var_94;

                transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_7_p_0(Info_8, IsLastGoal_9, GoalPath_15, Goal0_30, &Goal_11, STATE_VARIABLE_VarTable_0_47, STATE_VARIABLE_VarTable_48);
                Var_93 = ((MR_Word) ((MR_hl_field(0, Case0_29, 0))));
                Var_94 = ((MR_Word) ((MR_hl_field(0, Case0_29, 1))));
                {
                  Case_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Case_31, 0) = ((MR_Box) (Var_93));
                  MR_hl_field(0, Case_31, 1) = ((MR_Box) (Var_94));
                  MR_hl_field(0, Case_31, 2) = ((MR_Box) (Goal_11));
                }
                mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases0_28, N_80, ((MR_Box) (Case_31)), &Cases_32);
                {
                  GoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, GoalExpr_24, 1) = ((MR_Box) (Var_26));
                  MR_hl_field(3, GoalExpr_24, 2) = (MR_Box) ((MR_Unsigned) (CanFail_27));
                  MR_hl_field(3, GoalExpr_24, 3) = ((MR_Box) (Cases_32));
                }
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/7", ErrorString_17);
                  return;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Reason_40;
              MR_Word SubGoal0_41;

              succeeded = ((((MR_tag((MR_Word) GoalExpr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                Reason_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
                SubGoal0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
                {
                  MR_Word SubGoal_42;

                  transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_7_p_0(Info_8, IsLastGoal_9, GoalPath_15, SubGoal0_41, &SubGoal_42, STATE_VARIABLE_VarTable_0_47, STATE_VARIABLE_VarTable_48);
                  {
                    GoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_24, 1) = ((MR_Box) (Reason_40));
                    MR_hl_field(3, GoalExpr_24, 2) = ((MR_Box) (SubGoal_42));
                  }
                }
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/7", ErrorString_17);
                  return;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_67;
              MR_String Var_71;
              MR_String Var_107;

              Var_71 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0), ((MR_Box) (Step_16)));
              Var_107 = mercury__string__f_43_43_2_f_0(Var_71, (MR_String) "\"");
              Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", Var_107);
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/7", Var_67);
                return;
              }
            }
            break;
        }
        break;
    }
    {
      STATE_VARIABLE_Goal_1_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Goal_1_73, 0) = ((MR_Box) (GoalExpr_24));
      MR_hl_field(0, STATE_VARIABLE_Goal_1_73, 1) = ((MR_Box) (GoalInfo_14));
    }
    transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_8, STATE_VARIABLE_Goal_1_73, STATE_VARIABLE_Goal_46);
  }
  else
  {
    MR_Word Conjs_90;
    MR_Word Var_75;

    succeeded = ((((MR_tag((MR_Word) GoalExpr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_75 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 1))) & (MR_Integer) 1);
      Conjs_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
      succeeded = (Var_75 == (MR_Integer) 1);
    }
    if (succeeded)
      transform_hlds__par_loop_control__par_conj_loop_control_7_p_0(Info_8, Conjs_90, IsLastGoal_9, GoalInfo_14, STATE_VARIABLE_Goal_46, STATE_VARIABLE_VarTable_0_47, STATE_VARIABLE_VarTable_48);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/7", (MR_String) "expected parallel conjunction");
        return;
      }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__par_conj_loop_control_7_p_0(
  MR_Word Info_8,
  MR_Word Conjuncts0_9,
  MR_Word IsLastGoal_10,
  MR_Word GoalInfo_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarTable_0_24,
  MR_Word * STATE_VARIABLE_VarTable_25)
{
  MR_Word EarlierConjuncts0_14;
  MR_Word LastConjunct0_15;
  MR_Word LastConjunct_16;
  MR_Word UseParentStack_17;
  MR_Word LastConjGoals_19;
  MR_Word EarlierConjuncts_20;
  MR_Word Conjuncts_21;
  MR_Word Goal0_22;
  MR_Word GoalExpr_31;
  MR_Word LCVar_32;
  MR_Word STATE_VARIABLE_NonLocals_1_34;
  MR_Word STATE_VARIABLE_NonLocals_2_35;
  MR_Word STATE_VARIABLE_GoalInfo_2_36;
  MR_Word STATE_VARIABLE_GoalInfo_3_38;
  MR_Box conv0_LastConjunct0_15;
  MR_Word Var_18;

  mercury__list__det_split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_9, &EarlierConjuncts0_14, &conv0_LastConjunct0_15);
  LastConjunct0_15 = ((MR_Word) (conv0_LastConjunct0_15));
  transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_8, IsLastGoal_10, LastConjunct0_15, &LastConjunct_16, &UseParentStack_17, &Var_18);
  hlds__hlds_goal__goal_to_conj_list_2_p_0(LastConjunct_16, &LastConjGoals_19);
  transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_6_p_0(Info_8, UseParentStack_17, EarlierConjuncts0_14, &EarlierConjuncts_20, STATE_VARIABLE_VarTable_0_24, STATE_VARIABLE_VarTable_25);
  Conjuncts_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), EarlierConjuncts_20, LastConjGoals_19);
  hlds__goal_util__create_conj_from_list_3_p_0(Conjuncts_21, (MR_Integer) 0, &Goal0_22);
  GoalExpr_31 = ((MR_Word) ((MR_hl_field(0, Goal0_22, 0))));
  LCVar_32 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
  STATE_VARIABLE_NonLocals_1_34 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_32, STATE_VARIABLE_NonLocals_1_34, &STATE_VARIABLE_NonLocals_2_35);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(STATE_VARIABLE_NonLocals_2_35, GoalInfo_11, &STATE_VARIABLE_GoalInfo_2_36);
  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_GoalInfo_2_36, &STATE_VARIABLE_GoalInfo_3_38);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_31));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_3_38));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Case_14;
  MR_Word conv8_UseParentStack_10;
  MR_Word conv7_FixupGoalInfo_11;

  transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv9_STATE_VARIABLE_Case_14, &conv8_UseParentStack_10, &conv7_FixupGoalInfo_11);
  *wrapper_arg_2 = ((MR_Box) (conv9_STATE_VARIABLE_Case_14));
  *wrapper_arg_3 = ((MR_Box) (conv8_UseParentStack_10));
  *wrapper_arg_4 = ((MR_Box) (conv7_FixupGoalInfo_11));
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Goal_117;
  MR_Word conv5_UseParentStack_10;
  MR_Word conv4_FixupGoalInfo_11;

  transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv6_STATE_VARIABLE_Goal_117, &conv5_UseParentStack_10, &conv4_FixupGoalInfo_11);
  *wrapper_arg_2 = ((MR_Box) (conv6_STATE_VARIABLE_Goal_117));
  *wrapper_arg_3 = ((MR_Box) (conv5_UseParentStack_10));
  *wrapper_arg_4 = ((MR_Box) (conv4_FixupGoalInfo_11));
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Goal_117;
  MR_Word conv2_UseParentStack_10;
  MR_Word conv1_FixupGoalInfo_11;

  transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Goal_117, &conv2_UseParentStack_10, &conv1_FixupGoalInfo_11);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Goal_117));
  *wrapper_arg_3 = ((MR_Box) (conv2_UseParentStack_10));
  *wrapper_arg_4 = ((MR_Box) (conv1_FixupGoalInfo_11));
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(
  MR_Word Info_7,
  MR_Word IsLastGoal_8,
  MR_Word STATE_VARIABLE_Goal_0_116,
  MR_Word * STATE_VARIABLE_Goal_117,
  MR_Word * UseParentStack_10,
  MR_Word * FixupGoalInfo_11)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_116, 0))));
  MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_116, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_99 = (MR_Word) ((MR_Word) (GoalExpr0_12));
        MR_Word SubGoal_100;
        MR_Word STATE_VARIABLE_Goal_4_221;
        MR_Word GoalExpr_222;

        transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, SubGoal0_99, &SubGoal_100, UseParentStack_10, FixupGoalInfo_11);
        GoalExpr_222 = (MR_Word) ((MR_Word) (SubGoal_100));
        {
          STATE_VARIABLE_Goal_4_221 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Goal_4_221, 0) = ((MR_Box) (GoalExpr_222));
          MR_hl_field(0, STATE_VARIABLE_Goal_4_221, 1) = ((MR_Box) (GoalInfo_13));
        }
        switch (*FixupGoalInfo_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *STATE_VARIABLE_Goal_117 = STATE_VARIABLE_Goal_4_221;
            break;
          case (MR_Integer) 0:
            transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_7, STATE_VARIABLE_Goal_4_221, STATE_VARIABLE_Goal_117);
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *UseParentStack_10 = (MR_Integer) 0;
        *FixupGoalInfo_11 = (MR_Integer) 1;
        *STATE_VARIABLE_Goal_117 = STATE_VARIABLE_Goal_0_116;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CallPredId0_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, 0))));
        MR_Integer CallProcId0_15 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_12, 1))));
        MR_Word Args0_16 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, 2))));
        MR_Word Builtin_17 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_12, 3))) & (MR_Integer) 1);
        MR_Word MaybeUnify_18 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, 4))));
        MR_Word RecPredProcId_20 = ((MR_Word) ((MR_hl_field(0, Info_7, 2))));
        MR_Word Var_211 = ((MR_Word) ((MR_hl_field(0, RecPredProcId_20, 0))));
        MR_Integer Var_212 = ((MR_Integer) ((MR_hl_field(0, RecPredProcId_20, 1))));

        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(CallPredId0_14, Var_211);
        if (succeeded)
          succeeded = (CallProcId0_15 == Var_212);
        if (succeeded)
        {
          MR_Word NewPredProcId_21 = ((MR_Word) ((MR_hl_field(0, Info_7, 3))));
          MR_Word CallPredId_22 = ((MR_Word) ((MR_hl_field(0, NewPredProcId_21, 0))));
          MR_Integer CallProcId_23 = ((MR_Integer) ((MR_hl_field(0, NewPredProcId_21, 1))));
          MR_Word LCVar_24 = ((MR_Word) ((MR_hl_field(0, Info_7, 1))));
          MR_Word Args_25;
          MR_Word Name_26 = ((MR_Word) ((MR_hl_field(0, Info_7, 4))));
          MR_Word GoalExpr_27;
          MR_Word PreserveTailRecursion_28 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, 5))) & (MR_Integer) 1);
          MR_Word STATE_VARIABLE_Goal_1_118;
          MR_Word STATE_VARIABLE_Goal_2_120;

          {
            Args_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Args_25, 0) = ((MR_Box) (LCVar_24));
            MR_hl_field(1, Args_25, 1) = ((MR_Box) (Args0_16));
          }
          {
            GoalExpr_27 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, GoalExpr_27, 0) = ((MR_Box) (CallPredId_22));
            MR_hl_field(2, GoalExpr_27, 1) = ((MR_Box) (CallProcId_23));
            MR_hl_field(2, GoalExpr_27, 2) = ((MR_Box) (Args_25));
            MR_hl_field(2, GoalExpr_27, 3) = (MR_Box) ((MR_Unsigned) (Builtin_17));
            MR_hl_field(2, GoalExpr_27, 4) = ((MR_Box) (MaybeUnify_18));
            MR_hl_field(2, GoalExpr_27, 5) = ((MR_Box) (Name_26));
          }
          {
            STATE_VARIABLE_Goal_1_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Goal_1_118, 0) = ((MR_Box) (GoalExpr_27));
            MR_hl_field(0, STATE_VARIABLE_Goal_1_118, 1) = ((MR_Box) (GoalInfo_13));
          }
          succeeded = (IsLastGoal_8 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (PreserveTailRecursion_28 == (MR_Integer) 0);
          if (succeeded)
          {
            *UseParentStack_10 = (MR_Integer) 1;
            STATE_VARIABLE_Goal_2_120 = STATE_VARIABLE_Goal_1_118;
          }
          else
          {
            *UseParentStack_10 = (MR_Integer) 0;
            hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 26, STATE_VARIABLE_Goal_1_118, &STATE_VARIABLE_Goal_2_120);
          }
          transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_7, STATE_VARIABLE_Goal_2_120, STATE_VARIABLE_Goal_117);
          *FixupGoalInfo_11 = (MR_Integer) 0;
        }
        else
        {
          *UseParentStack_10 = (MR_Integer) 0;
          *FixupGoalInfo_11 = (MR_Integer) 1;
          *STATE_VARIABLE_Goal_117 = STATE_VARIABLE_Goal_0_116;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            *UseParentStack_10 = (MR_Integer) 0;
            *FixupGoalInfo_11 = (MR_Integer) 1;
            *STATE_VARIABLE_Goal_117 = STATE_VARIABLE_Goal_0_116;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_76 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, 1))) & (MR_Integer) 1);
            MR_Word Conjs0_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word EarlierConjs0_78;
            MR_Word LastConj0_79;
            MR_Word LastConj_80;
            MR_Word UseParentStackLastConj_81;
            MR_Word FixupGoalInfoLastConj_82;
            MR_Word EarlierConjs_83;
            MR_Word UseParentStackEarlierConjs_84;
            MR_Word FixupGoalInfoEarlierConjs_85;
            MR_Word FixupGoalInfoConjs_86;
            MR_Word UseParentStack0_87;
            MR_Word Conjs_88;
            MR_Word Var_122;
            MR_Word Var_124;
            MR_Word STATE_VARIABLE_Goal_4_215;
            MR_Word GoalExpr_216;
            MR_Box conv0_LastConj0_79;

            mercury__list__det_split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_77, &EarlierConjs0_78, &conv0_LastConj0_79);
            LastConj0_79 = ((MR_Word) (conv0_LastConj0_79));
            transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, LastConj0_79, &LastConj_80, &UseParentStackLastConj_81, &FixupGoalInfoLastConj_82);
            {
              Var_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_122, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[1]));
              MR_hl_field(0, Var_122, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1));
              MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_122, 3) = ((MR_Box) (Info_7));
              MR_hl_field(0, Var_122, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__list__map3_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_122, EarlierConjs0_78, &EarlierConjs_83, &UseParentStackEarlierConjs_84, &FixupGoalInfoEarlierConjs_85);
            {
              FixupGoalInfoConjs_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, FixupGoalInfoConjs_86, 0) = ((MR_Box) (FixupGoalInfoLastConj_82));
              MR_hl_field(1, FixupGoalInfoConjs_86, 1) = ((MR_Box) (FixupGoalInfoEarlierConjs_85));
            }
            transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfoConjs_86, FixupGoalInfo_11);
            transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(UseParentStackEarlierConjs_84, &UseParentStack0_87);
            transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(UseParentStackLastConj_81, UseParentStack0_87, UseParentStack_10);
            {
              Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_124, 0) = ((MR_Box) (LastConj_80));
              MR_hl_field(1, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Conjs_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), EarlierConjs_83, Var_124);
            {
              GoalExpr_216 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_216, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_216, 1) = (MR_Box) ((MR_Unsigned) (ConjType_76));
              MR_hl_field(3, GoalExpr_216, 2) = ((MR_Box) (Conjs_88));
            }
            {
              STATE_VARIABLE_Goal_4_215 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Goal_4_215, 0) = ((MR_Box) (GoalExpr_216));
              MR_hl_field(0, STATE_VARIABLE_Goal_4_215, 1) = ((MR_Box) (GoalInfo_13));
            }
            switch (*FixupGoalInfo_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *STATE_VARIABLE_Goal_117 = STATE_VARIABLE_Goal_4_215;
                break;
              case (MR_Integer) 0:
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_7, STATE_VARIABLE_Goal_4_215, STATE_VARIABLE_Goal_117);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjs0_89 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word Disjs_90;
            MR_Word UseParentStackDisjs_91;
            MR_Word FixupGoalInfoDisjs_92;
            MR_Word Var_126;
            MR_Word STATE_VARIABLE_Goal_4_217;
            MR_Word GoalExpr_218;

            {
              Var_126 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_126, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[1]));
              MR_hl_field(0, Var_126, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2));
              MR_hl_field(0, Var_126, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_126, 3) = ((MR_Box) (Info_7));
              MR_hl_field(0, Var_126, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__list__map3_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_126, Disjs0_89, &Disjs_90, &UseParentStackDisjs_91, &FixupGoalInfoDisjs_92);
            transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(UseParentStackDisjs_91, UseParentStack_10);
            transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfoDisjs_92, FixupGoalInfo_11);
            {
              GoalExpr_218 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_218, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_218, 1) = ((MR_Box) (Disjs_90));
            }
            {
              STATE_VARIABLE_Goal_4_217 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Goal_4_217, 0) = ((MR_Box) (GoalExpr_218));
              MR_hl_field(0, STATE_VARIABLE_Goal_4_217, 1) = ((MR_Box) (GoalInfo_13));
            }
            switch (*FixupGoalInfo_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *STATE_VARIABLE_Goal_117 = STATE_VARIABLE_Goal_4_217;
                break;
              case (MR_Integer) 0:
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_7, STATE_VARIABLE_Goal_4_217, STATE_VARIABLE_Goal_117);
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_93 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word CanFail_94 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, 2))) & (MR_Integer) 1);
            MR_Word Cases0_95 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 3))));
            MR_Word Cases_96;
            MR_Word UseParentStackCases_97;
            MR_Word FixupGoalInfoCases_98;
            MR_Word Var_128;
            MR_Word STATE_VARIABLE_Goal_4_225;
            MR_Word GoalExpr_226;

            {
              Var_128 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_128, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[2]));
              MR_hl_field(0, Var_128, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3));
              MR_hl_field(0, Var_128, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_128, 3) = ((MR_Box) (Info_7));
              MR_hl_field(0, Var_128, 4) = ((MR_Box) (IsLastGoal_8));
            }
            mercury__list__map3_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_128, Cases0_95, &Cases_96, &UseParentStackCases_97, &FixupGoalInfoCases_98);
            transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(UseParentStackCases_97, UseParentStack_10);
            transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfoCases_98, FixupGoalInfo_11);
            {
              GoalExpr_226 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_226, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_226, 1) = ((MR_Box) (Var_93));
              MR_hl_field(3, GoalExpr_226, 2) = (MR_Box) ((MR_Unsigned) (CanFail_94));
              MR_hl_field(3, GoalExpr_226, 3) = ((MR_Box) (Cases_96));
            }
            {
              STATE_VARIABLE_Goal_4_225 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Goal_4_225, 0) = ((MR_Box) (GoalExpr_226));
              MR_hl_field(0, STATE_VARIABLE_Goal_4_225, 1) = ((MR_Box) (GoalInfo_13));
            }
            switch (*FixupGoalInfo_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *STATE_VARIABLE_Goal_117 = STATE_VARIABLE_Goal_4_225;
                break;
              case (MR_Integer) 0:
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_7, STATE_VARIABLE_Goal_4_225, STATE_VARIABLE_Goal_117);
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word SubGoal0_142 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word SubGoal_143;
            MR_Word STATE_VARIABLE_Goal_4_223;
            MR_Word GoalExpr_224;

            transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, SubGoal0_142, &SubGoal_143, UseParentStack_10, FixupGoalInfo_11);
            {
              GoalExpr_224 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_224, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_224, 1) = ((MR_Box) (Reason_101));
              MR_hl_field(3, GoalExpr_224, 2) = ((MR_Box) (SubGoal_143));
            }
            {
              STATE_VARIABLE_Goal_4_223 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Goal_4_223, 0) = ((MR_Box) (GoalExpr_224));
              MR_hl_field(0, STATE_VARIABLE_Goal_4_223, 1) = ((MR_Box) (GoalInfo_13));
            }
            switch (*FixupGoalInfo_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *STATE_VARIABLE_Goal_117 = STATE_VARIABLE_Goal_4_223;
                break;
              case (MR_Integer) 0:
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_7, STATE_VARIABLE_Goal_4_223, STATE_VARIABLE_Goal_117);
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_102 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word Cond0_103 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word Then0_104 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 3))));
            MR_Word Else0_105 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 4))));
            MR_Word Cond_106;
            MR_Word FixupGoalInfoCond_108;
            MR_Word Then_109;
            MR_Word FixupGoalInfoThen_111;
            MR_Word Else_112;
            MR_Word FixupGoalInfoElse_114;
            MR_Word Var_130;
            MR_Word Var_131;
            MR_Word Var_132;
            MR_Word STATE_VARIABLE_Goal_4_219;
            MR_Word GoalExpr_220;
            MR_Word X_227;
            MR_Word UseParentStack0_230;
            MR_Word X_231;
            MR_Word Xs_232;
            MR_Word UseParentStack0_234;
            MR_Word X_235;
            MR_Word Xs_228;

            transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, (MR_Integer) 0, Cond0_103, &Cond_106, &X_227, &FixupGoalInfoCond_108);
            transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, Then0_104, &Then_109, &X_231, &FixupGoalInfoThen_111);
            transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, Else0_105, &Else_112, &X_235, &FixupGoalInfoElse_114);
            {
              Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_132, 0) = ((MR_Box) (FixupGoalInfoElse_114));
              MR_hl_field(1, Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_131, 0) = ((MR_Box) (FixupGoalInfoThen_111));
              MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_132));
            }
            {
              Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_130, 0) = ((MR_Box) (FixupGoalInfoCond_108));
              MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
            }
            transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(Var_130, FixupGoalInfo_11);
            {
              Xs_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Xs_232, 0) = ((MR_Box) (X_235));
              MR_hl_field(1, Xs_232, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Xs_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Xs_228, 0) = ((MR_Box) (X_231));
              MR_hl_field(1, Xs_228, 1) = ((MR_Box) (Xs_232));
            }
            switch (X_235) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                UseParentStack0_234 = (MR_Integer) 1;
                break;
              case (MR_Integer) 0:
                UseParentStack0_234 = (MR_Integer) 0;
                break;
            }
            switch (X_231) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                switch (UseParentStack0_234) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    UseParentStack0_230 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 0:
                    UseParentStack0_230 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 0:
                switch (UseParentStack0_234) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    UseParentStack0_230 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 0:
                    UseParentStack0_230 = (MR_Integer) 0;
                    break;
                }
                break;
            }
            switch (X_227) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                switch (UseParentStack0_230) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    *UseParentStack_10 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 0:
                    *UseParentStack_10 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 0:
                switch (UseParentStack0_230) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    *UseParentStack_10 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 0:
                    *UseParentStack_10 = (MR_Integer) 0;
                    break;
                }
                break;
            }
            {
              GoalExpr_220 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_220, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_220, 1) = ((MR_Box) (Vars_102));
              MR_hl_field(3, GoalExpr_220, 2) = ((MR_Box) (Cond_106));
              MR_hl_field(3, GoalExpr_220, 3) = ((MR_Box) (Then_109));
              MR_hl_field(3, GoalExpr_220, 4) = ((MR_Box) (Else_112));
            }
            {
              STATE_VARIABLE_Goal_4_219 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Goal_4_219, 0) = ((MR_Box) (GoalExpr_220));
              MR_hl_field(0, STATE_VARIABLE_Goal_4_219, 1) = ((MR_Box) (GoalInfo_13));
            }
            switch (*FixupGoalInfo_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *STATE_VARIABLE_Goal_117 = STATE_VARIABLE_Goal_4_219;
                break;
              case (MR_Integer) 0:
                transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_7, STATE_VARIABLE_Goal_4_219, STATE_VARIABLE_Goal_117);
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_rewrite_recursive_call\'/6", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word X_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Xs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word UseParentStack0_6;

    transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(Xs_4, &UseParentStack0_6);
    switch (X_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (UseParentStack0_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            *HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (UseParentStack0_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            *HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_6_p_0(
  MR_Word Info_1,
  MR_Word UseParentStack_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarTable_0_5,
  MR_Word * STATE_VARIABLE_VarTable_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_6 = STATE_VARIABLE_VarTable_0_5;
  }
  else
  {
    MR_Word Conjunct0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Conjuncts0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word LCSVar_18;
    MR_Word GetFreeSlotGoal_19;
    MR_Word LCVar_20;
    MR_Word JoinAndTerminateGoal_21;
    MR_Word Conjunct0GoalInfo_22;
    MR_Word Conjunct0Goals_23;
    MR_Word ConjunctGoals_24;
    MR_Word Conjunct_27;
    MR_Word ScopeGoalInfo_28;
    MR_Word ScopeGoalExpr_29;
    MR_Word ScopeGoal_30;
    MR_Word TailGoals_31;
    MR_Word STATE_VARIABLE_VarTable_1_34;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_NonLocals_1_37;
    MR_Word STATE_VARIABLE_NonLocals_2_38;
    MR_Word STATE_VARIABLE_NonLocals_3_39;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_51;
    MR_Word PredId_55;
    MR_Integer ProcId_56;
    MR_Word SymName_57;
    MR_Word GoalExpr_58;
    MR_Word NonLocals_59;
    MR_Word InstmapDelta_60;
    MR_Word GoalInfo_61;
    MR_Word Var_63;
    MR_Word Var_64;

    transform_hlds__par_loop_control__create_get_free_slot_goal_5_p_0(Info_1, &LCSVar_18, &GetFreeSlotGoal_19, STATE_VARIABLE_VarTable_0_5, &STATE_VARIABLE_VarTable_1_34);
    Conjunct0GoalInfo_22 = ((MR_Word) ((MR_hl_field(0, Conjunct0_14, 1))));
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Conjunct0_14, &Conjunct0Goals_23);
    LCVar_20 = ((MR_Word) ((MR_hl_field(0, Info_1, 1))));
    Var_51 = ((MR_Word) ((MR_hl_field(0, Info_1, 8))));
    SymName_57 = ((MR_Word) ((MR_hl_field(0, Info_1, 9))));
    PredId_55 = ((MR_Word) ((MR_hl_field(0, Var_51, 0))));
    ProcId_56 = ((MR_Integer) ((MR_hl_field(0, Var_51, 1))));
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (LCSVar_18));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) (LCVar_20));
      MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      GoalExpr_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, GoalExpr_58, 0) = ((MR_Box) (PredId_55));
      MR_hl_field(2, GoalExpr_58, 1) = ((MR_Box) (ProcId_56));
      MR_hl_field(2, GoalExpr_58, 2) = ((MR_Box) (Var_63));
      MR_hl_field(2, GoalExpr_58, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, GoalExpr_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, GoalExpr_58, 5) = ((MR_Box) (SymName_57));
    }
    NonLocals_59 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_63);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstmapDelta_60);
    GoalInfo_61 = hlds__hlds_goal__impure_init_goal_info_3_f_0(NonLocals_59, InstmapDelta_60, (MR_Integer) 0);
    {
      JoinAndTerminateGoal_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, JoinAndTerminateGoal_21, 0) = ((MR_Box) (GoalExpr_58));
      MR_hl_field(0, JoinAndTerminateGoal_21, 1) = ((MR_Box) (GoalInfo_61));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (JoinAndTerminateGoal_21));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ConjunctGoals_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjunct0Goals_23, Var_35);
    STATE_VARIABLE_NonLocals_1_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(Conjunct0GoalInfo_22);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_18, STATE_VARIABLE_NonLocals_1_37, &STATE_VARIABLE_NonLocals_2_38);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_20, STATE_VARIABLE_NonLocals_2_38, &STATE_VARIABLE_NonLocals_3_39);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(STATE_VARIABLE_NonLocals_3_39, Conjunct0GoalInfo_22, &ScopeGoalInfo_28);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(ConjunctGoals_24, ScopeGoalInfo_28, &Conjunct_27);
    {
      Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_40, 1) = ((MR_Box) (LCVar_20));
      MR_hl_field(3, Var_40, 2) = ((MR_Box) (LCSVar_18));
      MR_hl_field(3, Var_40, 3) = (MR_Box) ((MR_Unsigned) (UseParentStack_2));
    }
    {
      ScopeGoalExpr_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ScopeGoalExpr_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ScopeGoalExpr_29, 1) = ((MR_Box) (Var_40));
      MR_hl_field(3, ScopeGoalExpr_29, 2) = ((MR_Box) (Conjunct_27));
    }
    {
      ScopeGoal_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ScopeGoal_30, 0) = ((MR_Box) (ScopeGoalExpr_29));
      MR_hl_field(0, ScopeGoal_30, 1) = ((MR_Box) (ScopeGoalInfo_28));
    }
    transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_6_p_0(Info_1, UseParentStack_2, Conjuncts0_15, &TailGoals_31, STATE_VARIABLE_VarTable_1_34, STATE_VARIABLE_VarTable_6);
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (ScopeGoal_30));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (TailGoals_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (GetFreeSlotGoal_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_42));
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__create_get_free_slot_goal_5_p_0(
  MR_Word Info_6,
  MR_Word * LCSVar_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_VarTable_0_19,
  MR_Word * STATE_VARIABLE_VarTable_20)
{
  MR_Word LCVar_11;
  MR_Word PredId_12;
  MR_Integer ProcId_13;
  MR_Word SymName_14;
  MR_Word GoalExpr_15;
  MR_Word NonLocals_16;
  MR_Word InstmapDelta_17;
  MR_Word GoalInfo_18;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_40;

  parse_tree__var_table__add_var_entry_4_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_2[3]), LCSVar_7, STATE_VARIABLE_VarTable_0_19, STATE_VARIABLE_VarTable_20);
  LCVar_11 = ((MR_Word) ((MR_hl_field(0, Info_6, 1))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, Info_6, 6))));
  SymName_14 = ((MR_Word) ((MR_hl_field(0, Info_6, 7))));
  PredId_12 = ((MR_Word) ((MR_hl_field(0, Var_40, 0))));
  ProcId_13 = ((MR_Integer) ((MR_hl_field(0, Var_40, 1))));
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (*LCSVar_7));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (LCVar_11));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_27));
  }
  {
    GoalExpr_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_15, 0) = ((MR_Box) (PredId_12));
    MR_hl_field(2, GoalExpr_15, 1) = ((MR_Box) (ProcId_13));
    MR_hl_field(2, GoalExpr_15, 2) = ((MR_Box) (Var_26));
    MR_hl_field(2, GoalExpr_15, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, GoalExpr_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_15, 5) = ((MR_Box) (SymName_14));
  }
  NonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_26);
  InstmapDelta_17 = hlds__instmap__instmap_delta_bind_var_1_f_0(*LCSVar_7);
  GoalInfo_18 = hlds__hlds_goal__impure_init_goal_info_3_f_0(NonLocals_16, InstmapDelta_17, (MR_Integer) 0);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(
  MR_Word SelfPredProcId_4,
  MR_Word HeadVar__2_2,
  MR_Word * SeenUsableRecursion_8)
{
  MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

  transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(Goal_7, SelfPredProcId_4, SeenUsableRecursion_8);
}

static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(
  MR_Word DepInfo_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_19,
  MR_Word * STATE_VARIABLE_ProcInfo_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_12_33;
  MR_Word HasParallelConj_24;
  MR_Word Detism_25;
  MR_Word DepGraph_26;
  MR_Word SelfKey_27;
  MR_Word DepGraphWOSelfEdge_28;
  MR_Word TCDepGraphWOSelfEdge_29;

  hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_ProcInfo_0_19, &HasParallelConj_24);
  succeeded = (HasParallelConj_24 == (MR_Integer) 0);
  if (succeeded)
  {
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_19, &Detism_25);
    switch (Detism_25) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 4:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      TypeCtorInfo_12_33 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
      DepGraph_26 = libs__dependency_graph__dependency_info_get_graph_1_f_0(TypeCtorInfo_12_33, DepInfo_7);
      mercury__digraph__lookup_key_3_p_0(TypeCtorInfo_12_33, DepGraph_26, ((MR_Box) (PredProcId_8)), &SelfKey_27);
      succeeded = mercury__digraph__is_edge_3_p_1(TypeCtorInfo_12_33, DepGraph_26, SelfKey_27, SelfKey_27);
      if (succeeded)
      {
        mercury__digraph__delete_edge_4_p_0(TypeCtorInfo_12_33, SelfKey_27, SelfKey_27, DepGraph_26, &DepGraphWOSelfEdge_28);
        mercury__digraph__tc_2_p_0(TypeCtorInfo_12_33, DepGraphWOSelfEdge_28, &TCDepGraphWOSelfEdge_29);
        succeeded = mercury__digraph__is_edge_3_p_1(TypeCtorInfo_12_33, TCDepGraphWOSelfEdge_29, SelfKey_27, SelfKey_27);
        succeeded = !(succeeded);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Body0_11;
    MR_Word VarTable_12;
    MR_Word ContainingGoalMap_13;
    MR_Word Body_14;
    MR_Word RecursiveParConjIds_15;
    MR_Word STATE_VARIABLE_ProcInfo_1_23;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_19, &Body0_11);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_19, &VarTable_12);
    hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(STATE_VARIABLE_ModuleInfo_0_21, VarTable_12, &ContainingGoalMap_13, Body0_11, &Body_14);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Body_14, STATE_VARIABLE_ProcInfo_0_19, &STATE_VARIABLE_ProcInfo_1_23);
    transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(Body_14, PredProcId_8, &RecursiveParConjIds_15);
    switch (MR_tag((MR_Word) RecursiveParConjIds_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(RecursiveParConjIds_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_ProcInfo_20 = STATE_VARIABLE_ProcInfo_1_23;
              *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_ProcInfo_20 = STATE_VARIABLE_ProcInfo_1_23;
              *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
            }
            break;
          case (MR_Integer) 2:
            {
              *STATE_VARIABLE_ProcInfo_20 = STATE_VARIABLE_ProcInfo_1_23;
              *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GoalIds_16 = ((MR_Word) ((MR_hl_field(1, RecursiveParConjIds_15, 0))));
          MR_Word InnerPredProcId_17;
          MR_Word InnerPredName_18;

          transform_hlds__par_loop_control__create_inner_proc_8_p_0(GoalIds_16, PredProcId_8, STATE_VARIABLE_ProcInfo_1_23, ContainingGoalMap_13, &InnerPredProcId_17, &InnerPredName_18, STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ModuleInfo_22);
          transform_hlds__par_loop_control__update_outer_proc_6_p_0(PredProcId_8, InnerPredProcId_17, InnerPredName_18, *STATE_VARIABLE_ModuleInfo_22, STATE_VARIABLE_ProcInfo_1_23, STATE_VARIABLE_ProcInfo_20);
        }
        break;
    }
  }
  else
  {
    *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
    *STATE_VARIABLE_ProcInfo_20 = STATE_VARIABLE_ProcInfo_0_19;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_105;

  transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1362__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__3_105);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_105));
}

static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VarTable_23;
  MR_Word conv0_STATE_VARIABLE_Remap_25;

  transform_hlds__par_loop_control__add_old_var_to_sets_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_VarTable_23, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Remap_25);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_VarTable_23));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Remap_25));
}

static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0(
  MR_Word PredProcId_7,
  MR_Word InnerPredProcId_8,
  MR_Word InnerPredName_9,
  MR_Word ModuleInfo_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_47,
  MR_Word * STATE_VARIABLE_ProcInfo_48)
{
  MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(0, PredProcId_7, 0))));
  MR_Word PredInfo_14;
  MR_Word HeadVarTypes_15;
  MR_Word HeadVars0_16;
  MR_Word Detism_17;
  MR_Word OrigGoal_18;
  MR_Word OrigInstmapDelta_19;
  MR_Word OldVarTable_21;
  MR_Word Remap_22;
  MR_Word HeadVars_23;
  MR_Word RttiVarmaps0_24;
  MR_Word RttiVarmaps_25;
  MR_Word NumContextsEntry_26;
  MR_Word NumContextsVar_27;
  MR_Word LCDefaultNumContextsPredId_28;
  MR_Integer LCDefaultNumContextsProcId_29;
  MR_Word GetNumContextsGoalInfo_30;
  MR_Word GetNumContextsGoalExpr_31;
  MR_Word GetNumContextsGoal_32;
  MR_Word LCVar_33;
  MR_Word LCCreateGoal_34;
  MR_Word InnerCallArgs_35;
  MR_Word NonLocals_36;
  MR_Word InstmapDelta_37;
  MR_Word InnerProcCallGoalInfo_38;
  MR_Word InnerPredId_39;
  MR_Integer InnerProcId_40;
  MR_Word InnerProcCallGoal_41;
  MR_Word ConjGoalInfo_42;
  MR_Word ConjGoal_43;
  MR_Word OrigPurity_44;
  MR_Word Body_45;
  MR_Word Var_49;
  MR_Word STATE_VARIABLE_VarTable_1_50;
  MR_Word Var_51;
  MR_Word STATE_VARIABLE_VarTable_2_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word STATE_VARIABLE_ProcInfo_1_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word STATE_VARIABLE_ProcInfo_2_58;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_VarTable_3_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_67;
  MR_Word Var_73;
  MR_Word STATE_VARIABLE_VarTable_4_74;
  MR_Word Var_76;
  MR_Word Var_79;
  MR_Word Var_81;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_ProcInfo_3_91;
  MR_Word Var_111;
  MR_Word Var_115;
  MR_Box conv3_STATE_VARIABLE_VarTable_2_52;
  MR_Box conv2_Remap_22;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_12, &PredInfo_14);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_14, &HeadVarTypes_15);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_47, &HeadVars0_16);
  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_47, &Detism_17);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_47, &OrigGoal_18);
  Var_49 = ((MR_Word) ((MR_hl_field(0, OrigGoal_18, 1))));
  OrigInstmapDelta_19 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_49);
  parse_tree__var_table__init_var_table_1_p_0(&STATE_VARIABLE_VarTable_1_50);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_47, &OldVarTable_21);
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_10[0]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (transform_hlds__par_loop_control__update_outer_proc_6_p_0_1));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Var_51, 4) = ((MR_Box) (OldVarTable_21));
  }
  Var_53 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]));
  mercury__list__foldl2_corresponding_7_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_2[0]), Var_51, HeadVars0_16, HeadVarTypes_15, ((MR_Box) (STATE_VARIABLE_VarTable_1_50)), &conv3_STATE_VARIABLE_VarTable_2_52, ((MR_Box) (Var_53)), &conv2_Remap_22);
  STATE_VARIABLE_VarTable_2_52 = ((MR_Word) (conv3_STATE_VARIABLE_VarTable_2_52));
  Remap_22 = ((MR_Word) (conv2_Remap_22));
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[3]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (transform_hlds__par_loop_control__update_outer_proc_6_p_0_2));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (Remap_22));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), Var_54, HeadVars0_16, &HeadVars_23);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_23, STATE_VARIABLE_ProcInfo_0_47, &STATE_VARIABLE_ProcInfo_1_55);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_1_55, &RttiVarmaps0_24);
  Var_56 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[1]), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[1]));
  Var_57 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
  hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(Var_56, Var_57, Remap_22, RttiVarmaps0_24, &RttiVarmaps_25);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarmaps_25, STATE_VARIABLE_ProcInfo_1_55, &STATE_VARIABLE_ProcInfo_2_58);
  Var_60 = parse_tree__builtin_lib_types__int_type_0_f_0();
  {
    NumContextsEntry_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NumContextsEntry_26, 0) = ((MR_Box) ((MR_String) "NumContexts"));
    MR_hl_field(0, NumContextsEntry_26, 1) = ((MR_Box) (Var_60));
    MR_hl_field(0, NumContextsEntry_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(NumContextsEntry_26, &NumContextsVar_27, STATE_VARIABLE_VarTable_2_52, &STATE_VARIABLE_VarTable_3_62);
  Var_111 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_10, Var_111, (MR_String) "lc_default_num_contexts", (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Integer) 1))), (MR_Word) ((MR_Unsigned) 0U), &LCDefaultNumContextsPredId_28, &LCDefaultNumContextsProcId_29);
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (NumContextsVar_27));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_63 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_67);
  Var_64 = hlds__instmap__instmap_delta_bind_var_1_f_0(NumContextsVar_27);
  hlds__hlds_goal__goal_info_init_5_p_0(Var_63, Var_64, (MR_Integer) 0, (MR_Integer) 0, &GetNumContextsGoalInfo_30);
  Var_115 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_115));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_String) "lc_default_num_contexts"));
  }
  {
    GetNumContextsGoalExpr_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GetNumContextsGoalExpr_31, 0) = ((MR_Box) (LCDefaultNumContextsPredId_28));
    MR_hl_field(2, GetNumContextsGoalExpr_31, 1) = ((MR_Box) (LCDefaultNumContextsProcId_29));
    MR_hl_field(2, GetNumContextsGoalExpr_31, 2) = ((MR_Box) (Var_67));
    MR_hl_field(2, GetNumContextsGoalExpr_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, GetNumContextsGoalExpr_31, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GetNumContextsGoalExpr_31, 5) = ((MR_Box) (Var_73));
  }
  {
    GetNumContextsGoal_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GetNumContextsGoal_32, 0) = ((MR_Box) (GetNumContextsGoalExpr_31));
    MR_hl_field(0, GetNumContextsGoal_32, 1) = ((MR_Box) (GetNumContextsGoalInfo_30));
  }
  transform_hlds__par_loop_control__create_create_loop_control_goal_6_p_0(ModuleInfo_10, NumContextsVar_27, &LCVar_33, &LCCreateGoal_34, STATE_VARIABLE_VarTable_3_62, &STATE_VARIABLE_VarTable_4_74);
  {
    InnerCallArgs_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InnerCallArgs_35, 0) = ((MR_Box) (LCVar_33));
    MR_hl_field(1, InnerCallArgs_35, 1) = ((MR_Box) (HeadVars_23));
  }
  NonLocals_36 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerCallArgs_35);
  transform_hlds__par_loop_control__remap_instmap_3_p_0(Remap_22, OrigInstmapDelta_19, &InstmapDelta_37);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_36, InstmapDelta_37, Detism_17, (MR_Integer) 2, &InnerProcCallGoalInfo_38);
  InnerPredId_39 = ((MR_Word) ((MR_hl_field(0, InnerPredProcId_8, 0))));
  InnerProcId_40 = ((MR_Integer) ((MR_hl_field(0, InnerPredProcId_8, 1))));
  {
    Var_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_76, 0) = ((MR_Box) (InnerPredId_39));
    MR_hl_field(2, Var_76, 1) = ((MR_Box) (InnerProcId_40));
    MR_hl_field(2, Var_76, 2) = ((MR_Box) (InnerCallArgs_35));
    MR_hl_field(2, Var_76, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, Var_76, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Var_76, 5) = ((MR_Box) (InnerPredName_9));
  }
  {
    InnerProcCallGoal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InnerProcCallGoal_41, 0) = ((MR_Box) (Var_76));
    MR_hl_field(0, InnerProcCallGoal_41, 1) = ((MR_Box) (InnerProcCallGoalInfo_38));
  }
  Var_79 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_23);
  hlds__hlds_goal__goal_info_init_5_p_0(Var_79, InstmapDelta_37, Detism_17, (MR_Integer) 2, &ConjGoalInfo_42);
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (InnerProcCallGoal_41));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (LCCreateGoal_34));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (GetNumContextsGoal_32));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_81, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_81, 2) = ((MR_Box) (Var_83));
  }
  {
    ConjGoal_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ConjGoal_43, 0) = ((MR_Box) (Var_81));
    MR_hl_field(0, ConjGoal_43, 1) = ((MR_Box) (ConjGoalInfo_42));
  }
  Var_87 = ((MR_Word) ((MR_hl_field(0, OrigGoal_18, 1))));
  OrigPurity_44 = hlds__hlds_goal__goal_info_get_purity_1_f_0(Var_87);
  switch (OrigPurity_44) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      Body_45 = ConjGoal_43;
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word ScopeGoalInfo_46;
        MR_Word Var_89;
        MR_Word Var_90;

        hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, ConjGoalInfo_42, &ScopeGoalInfo_46);
        {
          Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_90, 1) = (MR_Box) ((MR_Unsigned) (OrigPurity_44));
        }
        {
          Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_89, 1) = ((MR_Box) (Var_90));
          MR_hl_field(3, Var_89, 2) = ((MR_Box) (ConjGoal_43));
        }
        {
          Body_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Body_45, 0) = ((MR_Box) (Var_89));
          MR_hl_field(0, Body_45, 1) = ((MR_Box) (ScopeGoalInfo_46));
        }
      }
      break;
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Body_45, STATE_VARIABLE_ProcInfo_2_58, &STATE_VARIABLE_ProcInfo_3_91);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_4_74, STATE_VARIABLE_ProcInfo_3_91, STATE_VARIABLE_ProcInfo_48);
}

static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_19;

  transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1451__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_19));
}

static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0(
  MR_Word Remap_4,
  MR_Word OldInstmapDelta_5,
  MR_Word * STATE_VARIABLE_InstmapDelta_13)
{
  MR_Word VarInsts_7;
  MR_Word STATE_VARIABLE_InstmapDelta_1_14;
  MR_Word Var_15;
  MR_Box conv1_STATE_VARIABLE_InstmapDelta_13;

  hlds__instmap__instmap_delta_to_assoc_list_2_p_0(OldInstmapDelta_5, &VarInsts_7);
  hlds__instmap__instmap_delta_init_reachable_1_p_0(&STATE_VARIABLE_InstmapDelta_1_14);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_9[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__par_loop_control__remap_instmap_3_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Remap_4));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_2[1]), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), Var_15, VarInsts_7, ((MR_Box) (STATE_VARIABLE_InstmapDelta_1_14)), &conv1_STATE_VARIABLE_InstmapDelta_13);
  *STATE_VARIABLE_InstmapDelta_13 = ((MR_Word) (conv1_STATE_VARIABLE_InstmapDelta_13));
}

static void MR_CALL 
transform_hlds__par_loop_control__create_create_loop_control_goal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word NumContextsVar_8,
  MR_Word * LCVar_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18)
{
  MR_Word LCVarEntry_12;
  MR_Word LCCreatePredId_13;
  MR_Integer LCCreateProcId_14;
  MR_Word GoalExpr_15;
  MR_Word GoalInfo_16;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Sym_37;
  MR_Word Var_40;
  MR_Word Var_44;
  MR_Word Var_48;

  Var_40 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  {
    Sym_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Sym_37, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Sym_37, 1) = ((MR_Box) ((MR_String) "loop_control"));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Sym_37));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Var_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LCVarEntry_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LCVarEntry_12, 0) = ((MR_Box) ((MR_String) "LC"));
    MR_hl_field(0, LCVarEntry_12, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, LCVarEntry_12, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(LCVarEntry_12, LCVar_9, STATE_VARIABLE_VarTable_0_17, STATE_VARIABLE_VarTable_18);
  Var_44 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_7, Var_44, (MR_String) "lc_create", (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Integer) 2))), (MR_Word) ((MR_Unsigned) 0U), &LCCreatePredId_13, &LCCreateProcId_14);
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (*LCVar_9));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (NumContextsVar_8));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_24));
  }
  Var_48 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_String) "lc_create"));
  }
  {
    GoalExpr_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_15, 0) = ((MR_Box) (LCCreatePredId_13));
    MR_hl_field(2, GoalExpr_15, 1) = ((MR_Box) (LCCreateProcId_14));
    MR_hl_field(2, GoalExpr_15, 2) = ((MR_Box) (Var_23));
    MR_hl_field(2, GoalExpr_15, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, GoalExpr_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_15, 5) = ((MR_Box) (Var_28));
  }
  Var_29 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_23);
  Var_30 = hlds__instmap__instmap_delta_bind_var_1_f_0(*LCVar_9);
  hlds__hlds_goal__goal_info_init_5_p_0(Var_29, Var_30, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_16));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__create_inner_proc_8_p_0(
  MR_Word RecParConjIds_9,
  MR_Word OldPredProcId_10,
  MR_Word OldProcInfo_11,
  MR_Word ContainingGoalMap_12,
  MR_Word * PredProcId_13,
  MR_Word * TransformedSymName_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58)
{
  MR_Word OldPredId_16 = ((MR_Word) ((MR_hl_field(0, OldPredProcId_10, 0))));
  MR_Integer OldProcId_17 = ((MR_Integer) ((MR_hl_field(0, OldPredProcId_10, 1))));
  MR_Word OldPredInfo_18;
  MR_Word ModuleName_19;
  MR_Word PredOrFunc_20;
  MR_Word Transform_21;
  MR_String TransformedName_22;
  MR_Word Context_23;
  MR_Word OldOrigin_24;
  MR_Word Origin_25;
  MR_Word Markers_26;
  MR_Word TypeVarSet_27;
  MR_Word ExistQVars_28;
  MR_Word ClassConstraints_29;
  MR_Word ArgTypes0_30;
  MR_Integer ProcId_35;
  MR_Word PredId_37;
  MR_Word ArgModes0_38;
  MR_Word HeadVars0_39;
  MR_Word LCVarEntry_40;
  MR_Word LCVar_41;
  MR_Word PreserveTailRecursion_42;
  MR_Word WaitFreeSlotProc_43;
  MR_Word JoinAndTerminateProc_44;
  MR_Word Info_45;
  MR_Word HeadVars_48;
  MR_Word ArgTypes_49;
  MR_Word ArgModes_52;
  MR_Word InstVarSet_53;
  MR_Word RttiVarMaps_54;
  MR_Word Detism_55;
  MR_Word ProcInfo_56;
  MR_Integer Var_59;
  MR_String Var_60;
  MR_Word STATE_VARIABLE_Markers_1_62;
  MR_Word STATE_VARIABLE_Markers_2_64;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word STATE_VARIABLE_PredInfo_1_71;
  MR_Word STATE_VARIABLE_PredTable_1_73;
  MR_Word STATE_VARIABLE_PredTable_2_74;
  MR_Word STATE_VARIABLE_ModuleInfo_1_75;
  MR_Word STATE_VARIABLE_VarTable_1_76;
  MR_Word STATE_VARIABLE_Body_1_77;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_VarTable_2_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word STATE_VARIABLE_Body_2_84;
  MR_Word STATE_VARIABLE_VarTable_3_85;
  MR_Word STATE_VARIABLE_Body_3_86;
  MR_Word Var_87;
  MR_Word Var_94;
  MR_Word STATE_VARIABLE_PredInfo_2_95;
  MR_Word STATE_VARIABLE_PredInfo_3_96;
  MR_Word Sym_100;
  MR_Word Var_103;
  MR_Word Globals_105;
  MR_Word PreserveTailRecursionBool_106;
  MR_Word Var_108;
  MR_Word Var_110;
  MR_Word Var_46;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_57, OldPredId_16, &OldPredInfo_18);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_57, &ModuleName_19);
  PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(OldPredInfo_18);
  Var_59 = hlds__hlds_pred__proc_id_to_int_1_f_0(OldProcId_17);
  {
    Transform_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_21, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(3, Transform_21, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
    MR_hl_field(3, Transform_21, 2) = ((MR_Box) (Var_59));
  }
  Var_60 = hlds__hlds_pred__pred_info_name_1_f_0(OldPredInfo_18);
  hlds__pred_name__make_transformed_pred_name_3_p_0(Var_60, Transform_21, &TransformedName_22);
  hlds__hlds_pred__pred_info_get_context_2_p_0(OldPredInfo_18, &Context_23);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(OldPredInfo_18, &OldOrigin_24);
  {
    Origin_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Origin_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Origin_25, 1) = ((MR_Box) (OldOrigin_24));
    MR_hl_field(3, Origin_25, 2) = ((MR_Box) (OldPredId_16));
    MR_hl_field(3, Origin_25, 3) = ((MR_Box) (OldProcId_17));
  }
  hlds__hlds_markers__init_markers_1_p_0(&STATE_VARIABLE_Markers_1_62);
  hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 15, STATE_VARIABLE_Markers_1_62, &STATE_VARIABLE_Markers_2_64);
  hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 23, STATE_VARIABLE_Markers_2_64, &Markers_26);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(OldPredInfo_18, &TypeVarSet_27);
  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(OldPredInfo_18, &ExistQVars_28);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(OldPredInfo_18, &ClassConstraints_29);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(OldPredInfo_18, &ArgTypes0_30);
  Var_69 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0));
  Var_70 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  hlds__hlds_pred__pred_info_create_17_p_0(PredOrFunc_20, ModuleName_19, TransformedName_22, Context_23, Origin_25, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Markers_26, ArgTypes0_30, TypeVarSet_27, ExistQVars_28, ClassConstraints_29, Var_69, Var_70, (MR_Word) (&transform_hlds__par_loop_control_scalar_common_3[0]), OldProcInfo_11, &ProcId_35, &STATE_VARIABLE_PredInfo_1_71);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_57, &STATE_VARIABLE_PredTable_1_73);
  hlds__pred_table__predicate_table_insert_4_p_0(STATE_VARIABLE_PredInfo_1_71, &PredId_37, STATE_VARIABLE_PredTable_1_73, &STATE_VARIABLE_PredTable_2_74);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(STATE_VARIABLE_PredTable_2_74, STATE_VARIABLE_ModuleInfo_0_57, &STATE_VARIABLE_ModuleInfo_1_75);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *PredProcId_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredId_37));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_35));
  }
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(OldProcInfo_11, &ArgModes0_38);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(OldProcInfo_11, &HeadVars0_39);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(OldProcInfo_11, &STATE_VARIABLE_VarTable_1_76);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(OldProcInfo_11, &STATE_VARIABLE_Body_1_77);
  Var_103 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  {
    Sym_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Sym_100, 0) = ((MR_Box) (Var_103));
    MR_hl_field(1, Sym_100, 1) = ((MR_Box) ((MR_String) "loop_control"));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Sym_100));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Var_79, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LCVarEntry_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LCVarEntry_40, 0) = ((MR_Box) ((MR_String) "LC"));
    MR_hl_field(0, LCVarEntry_40, 1) = ((MR_Box) (Var_79));
    MR_hl_field(0, LCVarEntry_40, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(LCVarEntry_40, &LCVar_41, STATE_VARIABLE_VarTable_1_76, &STATE_VARIABLE_VarTable_2_81);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_1_75, &Globals_105);
  libs__globals__lookup_bool_option_3_p_0(Globals_105, (MR_Integer) 683, &PreserveTailRecursionBool_106);
  switch (PreserveTailRecursionBool_106) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PreserveTailRecursion_42 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      PreserveTailRecursion_42 = (MR_Integer) 0;
      break;
  }
  transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(STATE_VARIABLE_ModuleInfo_1_75, &WaitFreeSlotProc_43);
  transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(STATE_VARIABLE_ModuleInfo_1_75, &JoinAndTerminateProc_44);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TransformedSymName_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_19));
    MR_hl_field(1, base, 1) = ((MR_Box) (TransformedName_22));
  }
  Var_108 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_108));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_String) "lc_wait_free_slot"));
  }
  Var_110 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_110));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_String) "lc_join_and_terminate"));
  }
  {
    Info_45 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_45, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_75));
    MR_hl_field(0, Info_45, 1) = ((MR_Box) (LCVar_41));
    MR_hl_field(0, Info_45, 2) = ((MR_Box) (OldPredProcId_10));
    MR_hl_field(0, Info_45, 3) = ((MR_Box) (*PredProcId_13));
    MR_hl_field(0, Info_45, 4) = ((MR_Box) (*TransformedSymName_14));
    MR_hl_field(0, Info_45, 5) = (MR_Box) ((MR_Unsigned) (PreserveTailRecursion_42));
    MR_hl_field(0, Info_45, 6) = ((MR_Box) (WaitFreeSlotProc_43));
    MR_hl_field(0, Info_45, 7) = ((MR_Box) (Var_82));
    MR_hl_field(0, Info_45, 8) = ((MR_Box) (JoinAndTerminateProc_44));
    MR_hl_field(0, Info_45, 9) = ((MR_Box) (Var_83));
  }
  transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_7_p_0(Info_45, RecParConjIds_9, ContainingGoalMap_12, STATE_VARIABLE_Body_1_77, &STATE_VARIABLE_Body_2_84, STATE_VARIABLE_VarTable_2_81, &STATE_VARIABLE_VarTable_3_85);
  transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(Info_45, RecParConjIds_9, &Var_46, STATE_VARIABLE_Body_2_84, &STATE_VARIABLE_Body_3_86);
  {
    HeadVars_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVars_48, 0) = ((MR_Box) (LCVar_41));
    MR_hl_field(1, HeadVars_48, 1) = ((MR_Box) (HeadVars0_39));
  }
  Var_87 = transform_hlds__par_loop_control__loop_control_var_type_0_f_0();
  {
    ArgTypes_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgTypes_49, 0) = ((MR_Box) (Var_87));
    MR_hl_field(1, ArgTypes_49, 1) = ((MR_Box) (ArgTypes0_30));
  }
  {
    ArgModes_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgModes_52, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[4]));
    MR_hl_field(1, ArgModes_52, 1) = ((MR_Box) (ArgModes0_38));
  }
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(OldProcInfo_11, &InstVarSet_53);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(OldProcInfo_11, &RttiVarMaps_54);
  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(OldProcInfo_11, &Detism_55);
  Var_94 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  hlds__hlds_pred__proc_info_create_14_p_0(Context_23, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_VarTable_3_85, HeadVars_48, InstVarSet_53, ArgModes_52, (MR_Integer) 2, Detism_55, STATE_VARIABLE_Body_3_86, RttiVarMaps_54, (MR_Integer) 1, (MR_Integer) 0, Var_94, &ProcInfo_56);
  hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_27, ExistQVars_28, ArgTypes_49, STATE_VARIABLE_PredInfo_1_71, &STATE_VARIABLE_PredInfo_2_95);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_35, ProcInfo_56, STATE_VARIABLE_PredInfo_2_95, &STATE_VARIABLE_PredInfo_3_96);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_37, STATE_VARIABLE_PredInfo_3_96, STATE_VARIABLE_ModuleInfo_1_75, STATE_VARIABLE_ModuleInfo_58);
}

static void MR_CALL 
transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word PredId_4;
  MR_Integer ProcId_5;
  MR_Word Var_8;

  Var_8 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_3, Var_8, (MR_String) "lc_join_and_terminate", (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Integer) 2))), (MR_Word) ((MR_Unsigned) 0U), &PredId_4, &ProcId_5);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredId_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_5));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word PredId_4;
  MR_Integer ProcId_5;
  MR_Word Var_8;

  Var_8 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_3, Var_8, (MR_String) "lc_wait_free_slot", (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Integer) 2))), (MR_Word) ((MR_Unsigned) 0U), &PredId_4, &ProcId_5);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredId_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_5));
  }
}

static MR_Word MR_CALL 
transform_hlds__par_loop_control__loop_control_var_type_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Sym_2;
  MR_Word Var_5;

  Var_5 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  {
    Sym_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Sym_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, Sym_2, 1) = ((MR_Box) ((MR_String) "loop_control"));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (Sym_2));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__goal_refs__goal_calls_2_p_0((env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11, (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15);
  (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded);
  if ((env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded)
    transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, 3))));
        MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, 2))));
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_42;
        MR_Word Var_43;

        (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15 = Var_41;
        transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(env_ptr);
        (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15 = Var_40;
        transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(env_ptr);
      }
      (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s env;

  (env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1 = HeadVar__1_1;
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Integer) 1;
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Conjs0_12;
    MR_Word Conj_13;
    MR_Word Conjs_14;

    (env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    Conjs0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(&env);
    if ((env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded)
    {
      Conj_13 = (env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11;
      transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0((env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Conjs0_12, &Conjs_14);
    }
    else
    {
      transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, (env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11, &Conj_13);
      Conjs_14 = Conjs0_12;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Conj_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Conjs_14));
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Case_12;
  MR_Word conv0_FixupGoalInfo_9;

  transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Case_12, &conv0_FixupGoalInfo_9);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Case_12));
  *wrapper_arg_3 = ((MR_Box) (conv0_FixupGoalInfo_9));
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1136__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1147__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_190;
    MR_Word Var_191;
    MR_Word Var_192;
    MR_Word Var_193;
    MR_Word Var_194;
    MR_Word Var_195;
    MR_Word Var_198;
    MR_Word Var_199;

    (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Var_197 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, 2))));
    (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Var_196 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, 3))));
    (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_106, (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Var_197);
    if (!((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded))
      (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_106, (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Var_196);
    if ((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
      transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0) == 0)
    {
      hlds__goal_refs__goal_calls_2_p_1((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, &(env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_106, transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2, env_ptr);
      (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(
  MR_Word Info_6,
  MR_Word RecParConjIds_7,
  MR_Word * FixupGoalInfo_8,
  MR_Word STATE_VARIABLE_Goal_0_70,
  MR_Word * STATE_VARIABLE_Goal_71)
{
  struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s env;

  (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6 = Info_6;
  (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70 = STATE_VARIABLE_Goal_0_70;
  {
    MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, 1))));
    MR_Word GoalId_11;
    MR_Word Var_109;

    GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_10);
    (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), ((MR_Box) (GoalId_11)), RecParConjIds_7);
    if ((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
    {
      *FixupGoalInfo_8 = (MR_Integer) 1;
      *STATE_VARIABLE_Goal_71 = (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70;
    }
    else
    {
      transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(&env);
      (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = !((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded);
      if ((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
      {
        MR_Word Conjs0_13;
        MR_Word FinishLCGoal_14;
        MR_Word Conjs_15;
        MR_Word Var_72;
        MR_Word STATE_VARIABLE_Goal_1_74;

        hlds__hlds_goal__goal_to_conj_list_2_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, &Conjs0_13);
        transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, &FinishLCGoal_14);
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (FinishLCGoal_14));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Conjs_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_13, Var_72);
        hlds__hlds_goal__conj_list_to_goal_3_p_0(Conjs_15, GoalInfo0_10, &STATE_VARIABLE_Goal_1_74);
        transform_hlds__par_loop_control__fixup_goal_info_3_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, STATE_VARIABLE_Goal_1_74, STATE_VARIABLE_Goal_71);
        *FixupGoalInfo_8 = (MR_Integer) 0;
      }
      else
      {
        MR_Word GoalExpr0_16 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, 0))));
        MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, 1))));
        MR_Word GoalExpr_47;
        MR_Word STATE_VARIABLE_Goal_3_97;

        switch (MR_tag((MR_Word) GoalExpr0_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "negation");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "Non-recursive atomic goal");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_35 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_16, 0))));
              MR_Integer ProcId_36 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_16, 1))));
              MR_Word Args0_37 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_16, 2))));
              MR_Word Builtin_38 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_16, 3))) & (MR_Integer) 1);
              MR_Word MaybeContext_39 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_16, 4))));
              MR_Word RecPredProcId_41 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, 2))));
              MR_Word InnerPredId_42;
              MR_Integer InnerProcId_43;
              MR_Word LCVar_44;
              MR_Word Args_45;
              MR_Word SymName_46;
              MR_Word Var_78;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word _SymName0_40;
              MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(2, GoalExpr0_16, 3)));
              MR_Word Var_128;
              MR_Word Var_129;
              MR_Word Var_130;
              MR_Word Var_131;
              MR_Word Var_132;
              MR_Word Var_133;
              MR_Word Var_134;
              MR_Word Var_135;
              MR_Word Var_136;
              MR_Word Var_137;
              MR_Word Var_139;
              MR_Word Var_141;
              MR_Word Var_142;
              MR_Word Var_143;
              MR_Word Var_144;
              MR_Word Var_145;

              {
                Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_81, 0) = ((MR_Box) (PredId_35));
                MR_hl_field(0, Var_81, 1) = ((MR_Box) (ProcId_36));
              }
              {
                Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_78, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_7[1]));
                MR_hl_field(0, Var_78, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5));
                MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_78, 3) = ((MR_Box) (RecPredProcId_41));
                MR_hl_field(0, Var_78, 4) = ((MR_Box) (Var_81));
              }
              mercury__require__expect_3_p_0(Var_78, (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "Expected recursive call");
              LCVar_44 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, 1))));
              Var_82 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, 3))));
              SymName_46 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, 4))));
              InnerPredId_42 = ((MR_Word) ((MR_hl_field(0, Var_82, 0))));
              InnerProcId_43 = ((MR_Integer) ((MR_hl_field(0, Var_82, 1))));
              {
                Args_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Args_45, 0) = ((MR_Box) (LCVar_44));
                MR_hl_field(1, Args_45, 1) = ((MR_Box) (Args0_37));
              }
              {
                GoalExpr_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, GoalExpr_47, 0) = ((MR_Box) (InnerPredId_42));
                MR_hl_field(2, GoalExpr_47, 1) = ((MR_Box) (InnerProcId_43));
                MR_hl_field(2, GoalExpr_47, 2) = ((MR_Box) (Args_45));
                MR_hl_field(2, GoalExpr_47, 3) = (MR_Box) ((MR_Unsigned) (Builtin_38));
                MR_hl_field(2, GoalExpr_47, 4) = ((MR_Box) (MaybeContext_39));
                MR_hl_field(2, GoalExpr_47, 5) = ((MR_Box) (SymName_46));
              }
              *FixupGoalInfo_8 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_16, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "Non-recursive atomic goal");
                  return;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ConjType_48 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_16, 1))) & (MR_Integer) 1);
                  MR_Word Var_83;
                  MR_Word Conjs0_107 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_16, 2))));
                  MR_Word Conjs_108;
                  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, GoalExpr0_16, 1)));

                  {
                    Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_83, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_7[0]));
                    MR_hl_field(0, Var_83, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4));
                    MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_83, 3) = ((MR_Box) (ConjType_48));
                    MR_hl_field(0, Var_83, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mercury__require__expect_3_p_0(Var_83, (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "parallel conjunction");
                  transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, RecParConjIds_7, FixupGoalInfo_8, Conjs0_107, &Conjs_108);
                  {
                    GoalExpr_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, GoalExpr_47, 1) = (MR_Box) ((MR_Unsigned) (ConjType_48));
                    MR_hl_field(3, GoalExpr_47, 2) = ((MR_Box) (Conjs_108));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "disjunction");
                  return;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_16, 1))));
                  MR_Word CanFail_51 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_16, 2))) & (MR_Integer) 1);
                  MR_Word Cases0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_16, 3))));
                  MR_Word Cases_53;
                  MR_Word FixupGoalInfos_54;
                  MR_Word Var_89;
                  MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, GoalExpr0_16, 2)));

                  {
                    Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_89, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_8[0]));
                    MR_hl_field(0, Var_89, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6));
                    MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_89, 3) = ((MR_Box) ((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6));
                    MR_hl_field(0, Var_89, 4) = ((MR_Box) (RecParConjIds_7));
                  }
                  mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_89, Cases0_52, &Cases_53, &FixupGoalInfos_54);
                  transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfos_54, FixupGoalInfo_8);
                  {
                    GoalExpr_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(3, GoalExpr_47, 1) = ((MR_Box) (Var_50));
                    MR_hl_field(3, GoalExpr_47, 2) = (MR_Box) ((MR_Unsigned) (CanFail_51));
                    MR_hl_field(3, GoalExpr_47, 3) = ((MR_Box) (Cases_53));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_16, 1))));
                  MR_Word SubGoal0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_16, 2))));
                  MR_Word SubGoal_58;

                  transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, RecParConjIds_7, FixupGoalInfo_8, SubGoal0_57, &SubGoal_58);
                  {
                    GoalExpr_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_47, 1) = ((MR_Box) (Reason_56));
                    MR_hl_field(3, GoalExpr_47, 2) = ((MR_Box) (SubGoal_58));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ExistVars_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_16, 1))));
                  MR_Word Cond_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_16, 2))));
                  MR_Word Then0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_16, 3))));
                  MR_Word Else0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_16, 4))));
                  MR_Word FixupGoalInfoThen_63;
                  MR_Word Then_64;
                  MR_Word FixupGoalInfoElse_65;
                  MR_Word Else_66;
                  MR_Word Var_92;
                  MR_Word Var_93;

                  transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, RecParConjIds_7, &FixupGoalInfoThen_63, Then0_61, &Then_64);
                  transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, RecParConjIds_7, &FixupGoalInfoElse_65, Else0_62, &Else_66);
                  {
                    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_93, 0) = ((MR_Box) (FixupGoalInfoElse_65));
                    MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_92, 0) = ((MR_Box) (FixupGoalInfoThen_63));
                    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
                  }
                  transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(Var_92, FixupGoalInfo_8);
                  {
                    GoalExpr_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, GoalExpr_47, 1) = ((MR_Box) (ExistVars_59));
                    MR_hl_field(3, GoalExpr_47, 2) = ((MR_Box) (Cond_60));
                    MR_hl_field(3, GoalExpr_47, 3) = ((MR_Box) (Then_64));
                    MR_hl_field(3, GoalExpr_47, 4) = ((MR_Box) (Else_66));
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "shorthand");
                  return;
                }
                break;
            }
            break;
        }
        {
          STATE_VARIABLE_Goal_3_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Goal_3_97, 0) = ((MR_Box) (GoalExpr_47));
          MR_hl_field(0, STATE_VARIABLE_Goal_3_97, 1) = ((MR_Box) (Var_17));
        }
        switch (*FixupGoalInfo_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *STATE_VARIABLE_Goal_71 = STATE_VARIABLE_Goal_3_97;
            break;
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_NonLocals_1_99;
              MR_Word Var_100;
              MR_Word STATE_VARIABLE_NonLocals_2_101;
              MR_Word STATE_VARIABLE_GoalInfo_2_102;
              MR_Word STATE_VARIABLE_GoalInfo_3_104;
              MR_Word Var_167;
              MR_Word Var_168;
              MR_Word Var_169;
              MR_Word Var_170;
              MR_Word Var_171;
              MR_Word Var_172;
              MR_Word Var_173;
              MR_Word Var_174;
              MR_Word Var_175;
              MR_Word Var_176;
              MR_Word Var_177;

              STATE_VARIABLE_NonLocals_1_99 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(Var_17);
              Var_100 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, 1))));
              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_100, STATE_VARIABLE_NonLocals_1_99, &STATE_VARIABLE_NonLocals_2_101);
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(STATE_VARIABLE_NonLocals_2_101, Var_17, &STATE_VARIABLE_GoalInfo_2_102);
              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_GoalInfo_2_102, &STATE_VARIABLE_GoalInfo_3_104);
              Var_176 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_3_97, 0))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_71 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_176));
                MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_3_104));
              }
            }
            break;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__fixup_goal_info_3_p_0(
  MR_Word Info_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word LCVar_10 = ((MR_Word) ((MR_hl_field(0, Info_4, 1))));
  MR_Word STATE_VARIABLE_GoalInfo_1_11 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));
  MR_Word STATE_VARIABLE_NonLocals_1_12;
  MR_Word STATE_VARIABLE_NonLocals_2_13;
  MR_Word STATE_VARIABLE_GoalInfo_2_14;
  MR_Word STATE_VARIABLE_GoalInfo_3_16;

  STATE_VARIABLE_NonLocals_1_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_1_11);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_10, STATE_VARIABLE_NonLocals_1_12, &STATE_VARIABLE_NonLocals_2_13);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(STATE_VARIABLE_NonLocals_2_13, STATE_VARIABLE_GoalInfo_1_11, &STATE_VARIABLE_GoalInfo_2_14);
  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_GoalInfo_2_14, &STATE_VARIABLE_GoalInfo_3_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_3_16));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0(
  MR_Word Info_3,
  MR_Word * Goal_4)
{
  MR_Word PredId_5;
  MR_Integer ProcId_6;
  MR_Word LCVar_7;
  MR_Word GoalExpr_8;
  MR_Word NonLocals_9;
  MR_Word InstmapDelta_10;
  MR_Word GoalInfo_11;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));
  MR_Word Var_13;
  MR_Word Var_17;
  MR_Word Var_42;
  MR_Word Var_46;

  Var_42 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(Var_12, Var_42, (MR_String) "lc_finish", (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Integer) 1))), (MR_Word) ((MR_Unsigned) 0U), &PredId_5, &ProcId_6);
  LCVar_7 = ((MR_Word) ((MR_hl_field(0, Info_3, 1))));
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (LCVar_7));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_46 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_46));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_String) "lc_finish"));
  }
  {
    GoalExpr_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_8, 0) = ((MR_Box) (PredId_5));
    MR_hl_field(2, GoalExpr_8, 1) = ((MR_Box) (ProcId_6));
    MR_hl_field(2, GoalExpr_8, 2) = ((MR_Box) (Var_13));
    MR_hl_field(2, GoalExpr_8, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, GoalExpr_8, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_8, 5) = ((MR_Box) (Var_17));
  }
  NonLocals_9 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_13);
  hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstmapDelta_10);
  GoalInfo_11 = hlds__hlds_goal__impure_init_goal_info_3_f_0(NonLocals_9, InstmapDelta_10, (MR_Integer) 0);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(
  MR_Word List_3,
  MR_Word * Fixup_4)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), List_3, ((MR_Box) ((MR_Integer) 0)));
  if (succeeded)
    *Fixup_4 = (MR_Integer) 0;
  else
    *Fixup_4 = (MR_Integer) 1;
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Goal_46;
  MR_Word conv1_STATE_VARIABLE_VarTable_48;

  transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Goal_46, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_VarTable_48);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Goal_46));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_VarTable_48));
}

static MR_Box MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_7_p_0(
  MR_Word Info_8,
  MR_Word GoalIds_9,
  MR_Word ContainingGoalMap_10,
  MR_Word STATE_VARIABLE_Goal_0_14,
  MR_Word * STATE_VARIABLE_Goal_15,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17)
{
  MR_Word GoalPaths_13;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Box conv4_STATE_VARIABLE_Goal_15;
  MR_Box conv3_STATE_VARIABLE_VarTable_17;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[2]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_7_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (ContainingGoalMap_10));
  }
  GoalPaths_13 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0), Var_18, GoalIds_9);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_6[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_7_p_0_2));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Info_8));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_19, GoalPaths_13, ((MR_Box) (STATE_VARIABLE_Goal_0_14)), &conv4_STATE_VARIABLE_Goal_15, ((MR_Box) (STATE_VARIABLE_VarTable_0_16)), &conv3_STATE_VARIABLE_VarTable_17);
  *STATE_VARIABLE_Goal_15 = ((MR_Word) (conv4_STATE_VARIABLE_Goal_15));
  *STATE_VARIABLE_VarTable_17 = ((MR_Word) (conv3_STATE_VARIABLE_VarTable_17));
}

static void MR_CALL 
transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SelfPredProcId_2,
  MR_Word STATE_VARIABLE_SeenUsableRecursion_0_3,
  MR_Word * STATE_VARIABLE_SeenUsableRecursion_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SeenUsableRecursion_4 = STATE_VARIABLE_SeenUsableRecursion_0_3;
    else
    {
      MR_Word Conj_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Conjs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word SeenUsableRecursionConj_13;

      transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(Conj_9, SelfPredProcId_2, &SeenUsableRecursionConj_13);
      switch (MR_tag((MR_Word) SeenUsableRecursionConj_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(SeenUsableRecursionConj_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_HeadVar__1_1 = Conjs_10;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) STATE_VARIABLE_SeenUsableRecursion_0_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(STATE_VARIABLE_SeenUsableRecursion_0_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word next_value_of_HeadVar__1_1 = Conjs_10;

                        // direct tailcall eliminated
                        ;
                        HeadVar__1_1 = next_value_of_HeadVar__1_1;
                        STATE_VARIABLE_SeenUsableRecursion_0_3 = (MR_Word) ((MR_Unsigned) 4U);
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) ((MR_Unsigned) 8U);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) ((MR_Unsigned) 8U);
                  break;
              }
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) ((MR_Unsigned) 8U);
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) STATE_VARIABLE_SeenUsableRecursion_0_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(STATE_VARIABLE_SeenUsableRecursion_0_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_HeadVar__1_1 = Conjs_10;
                    MR_Word next_value_of_STATE_VARIABLE_SeenUsableRecursion_0_3 = SeenUsableRecursionConj_13;

                    // direct tailcall eliminated
                    ;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    STATE_VARIABLE_SeenUsableRecursion_0_3 = next_value_of_STATE_VARIABLE_SeenUsableRecursion_0_3;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) ((MR_Unsigned) 8U);
                  break;
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_SeenUsableRecursion_4 = (MR_Word) ((MR_Unsigned) 8U);
              break;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(
  MR_Word Conj_5,
  MR_Word Conjs_6,
  MR_Word SelfPredProcId_7,
  MR_Word * SeenUsableRecursion_8)
{
  while (MR_TRUE)
  {
    MR_Word SeenUsableRecursion0_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(Conj_5, SelfPredProcId_7, &SeenUsableRecursion0_9);
    if ((Conjs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *SeenUsableRecursion_8 = SeenUsableRecursion0_9;
    else
    {
      MR_Word Head_10 = ((MR_Word) ((MR_hl_field(1, Conjs_6, 0))));
      MR_Word Tail_11 = ((MR_Word) ((MR_hl_field(1, Conjs_6, 1))));

      switch (MR_tag((MR_Word) SeenUsableRecursion0_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(SeenUsableRecursion0_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_Conj_5 = Head_10;
                MR_Word next_value_of_Conjs_6 = Tail_11;

                // direct tailcall eliminated
                ;
                Conj_5 = next_value_of_Conj_5;
                Conjs_6 = next_value_of_Conjs_6;
                continue;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              *SeenUsableRecursion_8 = (MR_Word) ((MR_Unsigned) 8U);
              break;
          }
          break;
        case (MR_Integer) 1:
          *SeenUsableRecursion_8 = (MR_Word) ((MR_Unsigned) 8U);
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_SeenUsableRecursion_8;

  transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_SeenUsableRecursion_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_SeenUsableRecursion_8));
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(
  MR_Word Goal_4,
  MR_Word SelfPredProcId_5,
  MR_Word * SeenUsableRecursion_6)
{
  MR_bool succeeded;
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_4, 0))));
  MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, Goal_4, 1))));
  MR_Word Detism_9;
  MR_Word InstmapDelta_10;

  Detism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_8);
  InstmapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_8);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta_10);
  if (succeeded)
    switch (MR_tag((MR_Word) GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_43 = (MR_Word) ((MR_Word) (GoalExpr_7));
          MR_Word SeenUsableRecursion0_84;

          transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(SubGoal_43, SelfPredProcId_5, &SeenUsableRecursion0_84);
          switch (MR_tag((MR_Word) SeenUsableRecursion0_84)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(SeenUsableRecursion0_84)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  *SeenUsableRecursion_6 = SeenUsableRecursion0_84;
                  break;
                case (MR_Integer) 1:
                  switch (Detism_9) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 4:
                    case (MR_Integer) 0:
                      *SeenUsableRecursion_6 = SeenUsableRecursion0_84;
                      break;
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 1:
                      *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (Detism_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                case (MR_Integer) 0:
                  *SeenUsableRecursion_6 = SeenUsableRecursion0_84;
                  break;
                case (MR_Integer) 5:
                case (MR_Integer) 6:
                case (MR_Integer) 7:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                case (MR_Integer) 1:
                  *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, 0))));
          MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_7, 1))));
          MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, SelfPredProcId_5, 0))));
          MR_Integer Var_65 = ((MR_Integer) ((MR_hl_field(0, SelfPredProcId_5, 1))));

          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_17, Var_64);
          if (succeeded)
            succeeded = (ProcId_18 == Var_65);
          if (succeeded)
            switch (Detism_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
              case (MR_Integer) 0:
                *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 4U);
                break;
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 1:
                *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                break;
            }
          else
            *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_7, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_35 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_7, 1))) & (MR_Integer) 1);
              MR_Word Conjs_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 2))));

              switch (ConjType_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word GoalId_37;

                    GoalId_37 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_8);
                    if ((Conjs_36 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.par_conj_get_loop_control_par_conjs\'/4", (MR_String) "Empty parallel conjunction");
                        return;
                      }
                    else
                    {
                      MR_Word Head_68 = ((MR_Word) ((MR_hl_field(1, Conjs_36, 0))));
                      MR_Word Tail_69 = ((MR_Word) ((MR_hl_field(1, Conjs_36, 1))));
                      MR_Word SeenUsableRecursion0_70;

                      transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(Head_68, Tail_69, SelfPredProcId_5, &SeenUsableRecursion0_70);
                      switch (MR_tag((MR_Word) SeenUsableRecursion0_70)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(SeenUsableRecursion0_70)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              *SeenUsableRecursion_6 = SeenUsableRecursion0_70;
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word Var_74;
                                MR_Word SeenUsableRecursion0_90;

                                {
                                  Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_74, 0) = ((MR_Box) (GoalId_37));
                                  MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                }
                                {
                                  SeenUsableRecursion0_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, SeenUsableRecursion0_90, 0) = ((MR_Box) (Var_74));
                                }
                                switch (Detism_9) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 4:
                                  case (MR_Integer) 0:
                                    *SeenUsableRecursion_6 = SeenUsableRecursion0_90;
                                    break;
                                  case (MR_Integer) 5:
                                  case (MR_Integer) 6:
                                  case (MR_Integer) 7:
                                  case (MR_Integer) 2:
                                  case (MR_Integer) 3:
                                  case (MR_Integer) 1:
                                    *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                                    break;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                          break;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word SeenUsableRecursion0_89;

                    transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(Conjs_36, SelfPredProcId_5, (MR_Word) ((MR_Unsigned) 0U), &SeenUsableRecursion0_89);
                    switch (MR_tag((MR_Word) SeenUsableRecursion0_89)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(SeenUsableRecursion0_89)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                          case (MR_Integer) 2:
                            *SeenUsableRecursion_6 = SeenUsableRecursion0_89;
                            break;
                          case (MR_Integer) 1:
                            switch (Detism_9) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 4:
                              case (MR_Integer) 0:
                                *SeenUsableRecursion_6 = SeenUsableRecursion0_89;
                                break;
                              case (MR_Integer) 5:
                              case (MR_Integer) 6:
                              case (MR_Integer) 7:
                              case (MR_Integer) 2:
                              case (MR_Integer) 3:
                              case (MR_Integer) 1:
                                *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                                break;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        switch (Detism_9) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 4:
                          case (MR_Integer) 0:
                            *SeenUsableRecursion_6 = SeenUsableRecursion0_89;
                            break;
                          case (MR_Integer) 5:
                          case (MR_Integer) 6:
                          case (MR_Integer) 7:
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                          case (MR_Integer) 1:
                            *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                            break;
                        }
                        break;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              succeeded = hlds__goal_refs__goal_calls_2_p_0(Goal_4, SelfPredProcId_5);
              if (succeeded)
                *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
              else
                *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 3))));
              MR_Word SeenUsableRecursionCases_42;
              MR_Word Var_56;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_56, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[0]));
                MR_hl_field(0, Var_56, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1));
                MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_56, 3) = ((MR_Box) (SelfPredProcId_5));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0), Var_56, Cases_41, &SeenUsableRecursionCases_42);
              if ((SeenUsableRecursionCases_42 == (MR_Word) ((MR_Unsigned) 0U)))
                *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Seen_76 = ((MR_Word) ((MR_hl_field(1, SeenUsableRecursionCases_42, 0))));
                MR_Word Seens_77 = ((MR_Word) ((MR_hl_field(1, SeenUsableRecursionCases_42, 1))));
                MR_Word SeenUsableRecursion0_94;
                MR_Box conv2_SeenUsableRecursion0_94;

                mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_2[2]), Seens_77, ((MR_Box) (Seen_76)), &conv2_SeenUsableRecursion0_94);
                SeenUsableRecursion0_94 = ((MR_Word) (conv2_SeenUsableRecursion0_94));
                switch (MR_tag((MR_Word) SeenUsableRecursion0_94)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(SeenUsableRecursion0_94)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 2:
                        *SeenUsableRecursion_6 = SeenUsableRecursion0_94;
                        break;
                      case (MR_Integer) 1:
                        switch (Detism_9) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 4:
                          case (MR_Integer) 0:
                            *SeenUsableRecursion_6 = SeenUsableRecursion0_94;
                            break;
                          case (MR_Integer) 5:
                          case (MR_Integer) 6:
                          case (MR_Integer) 7:
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                          case (MR_Integer) 1:
                            *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                            break;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    switch (Detism_9) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 4:
                      case (MR_Integer) 0:
                        *SeenUsableRecursion_6 = SeenUsableRecursion0_94;
                        break;
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 1:
                        *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                        break;
                    }
                    break;
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 2))));
              MR_Word SeenUsableRecursion0_86;

              transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(SubGoal_59, SelfPredProcId_5, &SeenUsableRecursion0_86);
              switch (MR_tag((MR_Word) SeenUsableRecursion0_86)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(SeenUsableRecursion0_86)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                      *SeenUsableRecursion_6 = SeenUsableRecursion0_86;
                      break;
                    case (MR_Integer) 1:
                      switch (Detism_9) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 4:
                        case (MR_Integer) 0:
                          *SeenUsableRecursion_6 = SeenUsableRecursion0_86;
                          break;
                        case (MR_Integer) 5:
                        case (MR_Integer) 6:
                        case (MR_Integer) 7:
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                        case (MR_Integer) 1:
                          *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                          break;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  switch (Detism_9) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 4:
                    case (MR_Integer) 0:
                      *SeenUsableRecursion_6 = SeenUsableRecursion0_86;
                      break;
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 1:
                      *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 2))));
              MR_Word Then_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 3))));
              MR_Word Else_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 4))));
              MR_Word SeenUsableRecursionCond_49;

              transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(Cond_46, SelfPredProcId_5, &SeenUsableRecursionCond_49);
              switch (MR_tag((MR_Word) SeenUsableRecursionCond_49)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(SeenUsableRecursionCond_49)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word SeenUsableRecursionThen_50;
                        MR_Word SeenUsableRecursionElse_51;
                        MR_Word SeenUsableRecursion0_83;

                        transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(Then_47, SelfPredProcId_5, &SeenUsableRecursionThen_50);
                        transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(Else_48, SelfPredProcId_5, &SeenUsableRecursionElse_51);
                        transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(SeenUsableRecursionThen_50, SeenUsableRecursionElse_51, &SeenUsableRecursion0_83);
                        switch (MR_tag((MR_Word) SeenUsableRecursion0_83)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(SeenUsableRecursion0_83)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                              case (MR_Integer) 2:
                                *SeenUsableRecursion_6 = SeenUsableRecursion0_83;
                                break;
                              case (MR_Integer) 1:
                                switch (Detism_9) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 4:
                                  case (MR_Integer) 0:
                                    *SeenUsableRecursion_6 = SeenUsableRecursion0_83;
                                    break;
                                  case (MR_Integer) 5:
                                  case (MR_Integer) 6:
                                  case (MR_Integer) 7:
                                  case (MR_Integer) 2:
                                  case (MR_Integer) 3:
                                  case (MR_Integer) 1:
                                    *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                                    break;
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            switch (Detism_9) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 4:
                              case (MR_Integer) 0:
                                *SeenUsableRecursion_6 = SeenUsableRecursion0_83;
                                break;
                              case (MR_Integer) 5:
                              case (MR_Integer) 6:
                              case (MR_Integer) 7:
                              case (MR_Integer) 2:
                              case (MR_Integer) 3:
                              case (MR_Integer) 1:
                                *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                                break;
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_get_loop_control_par_conjs\'/3", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  else
    *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Seen0_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) Seen0_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Seen0_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 8U);
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__3_3 = Seen0_2;
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) Seen0_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Seen0_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 8U);
                  break;
                case (MR_Integer) 1:
                  *HeadVar__3_3 = Seen0_2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 8U);
              break;
          }
          break;
        case (MR_Integer) 2:
          *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 8U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word GoalIdsA_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

        switch (MR_tag((MR_Word) Seen0_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Seen0_2)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__3_3 = HeadVar__1_1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 8U);
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word GoalIdsB_14 = ((MR_Word) ((MR_hl_field(1, Seen0_2, 0))));
              MR_Word GoalIds_15;

              GoalIds_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), GoalIdsA_11, GoalIdsB_14);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (GoalIds_15));
              }
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProcInfo_20;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_22;

  transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcInfo_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_22);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcInfo_20));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_22));
}

void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  MR_Word DepInfo_4;
  MR_Word STATE_VARIABLE_ModuleInfo_1_7;
  MR_Word Var_8;
  MR_Word Var_10;

  hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_1_7, &DepInfo_4);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (DepInfo_4));
  }
  {
    Var_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_8, 1) = ((MR_Box) (Var_10));
  }
  hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_8, STATE_VARIABLE_ModuleInfo_1_7, STATE_VARIABLE_ModuleInfo_6);
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__par_loop_control____Unify____loop_control_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__par_loop_control____Compare____loop_control_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__par_loop_control__init(void)
{
}

void mercury__transform_hlds__par_loop_control__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0);
  MR_register_type_ctor_info(&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_goal_is_last_goal_on_path_0);
  MR_register_type_ctor_info(&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0);
  MR_register_type_ctor_info(&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_preserve_tail_recursion_0);
  MR_register_type_ctor_info(&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0);
}

void mercury__transform_hlds__par_loop_control__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__par_loop_control__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.par_loop_control.
