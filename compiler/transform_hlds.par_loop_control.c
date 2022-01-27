/*
** Automatically generated from `par_loop_control.m'
** by the Mercury compiler,
** version rotd-2022-01-07
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



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
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Var_200;
  MR_Word transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Var_201;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__libs__dependency_graph__pti_dependency_info_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

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
transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1453__1_4_p_0(
  MR_Word Remap_4,
  MR_Word LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18,
  MR_Word * LambdaHeadVar__3_19);

static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1362__1_3_p_0(
  MR_Word Remap_23,
  MR_Word HeadVar__2_115,
  MR_Word * HeadVar__3_116);

static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1133__1_2_p_0(
  MR_Word RecPredProcId_41,
  MR_Word HeadVar__2_93);

static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1144__1_2_p_0(
  MR_Word ConjType_48,
  MR_Word HeadVar__2_89);

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
  MR_Word HeadVar__2_1,
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__par_loop_control__add_old_var_to_sets_9_p_0(
  MR_Word OldVarSet_10,
  MR_Word OldVar_11,
  MR_Word VarType_12,
  MR_Word STATE_VARIABLE_VarSet_0_18,
  MR_Word * STATE_VARIABLE_VarSet_19,
  MR_Word STATE_VARIABLE_VarTypes_0_20,
  MR_Word * STATE_VARIABLE_VarTypes_21,
  MR_Word STATE_VARIABLE_Remap_0_22,
  MR_Word * STATE_VARIABLE_Remap_23);

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
transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(
  MR_Word Info_10,
  MR_Word IsLastGoal_11,
  MR_Word GoalPath0_12,
  MR_Word STATE_VARIABLE_Goal_0_48,
  MR_Word * STATE_VARIABLE_Goal_49,
  MR_Word STATE_VARIABLE_VarSet_0_50,
  MR_Word * STATE_VARIABLE_VarSet_51,
  MR_Word STATE_VARIABLE_VarTypes_0_52,
  MR_Word * STATE_VARIABLE_VarTypes_53);

static void MR_CALL 
transform_hlds__par_loop_control__par_conj_loop_control_9_p_0(
  MR_Word Info_10,
  MR_Word Conjuncts0_11,
  MR_Word IsLastGoal_12,
  MR_Word GoalInfo_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28,
  MR_Word STATE_VARIABLE_VarTypes_0_29,
  MR_Word * STATE_VARIABLE_VarTypes_30);

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
transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(
  MR_Word Info_1,
  MR_Word UseParentStack_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_VarTypes_0_7,
  MR_Word * STATE_VARIABLE_VarTypes_8);

static void MR_CALL 
transform_hlds__par_loop_control__create_join_and_terminate_goal_4_p_0(
  MR_Word Info_5,
  MR_Word LCVar_6,
  MR_Word LCSVar_7,
  MR_Word * Goal_8);

static void MR_CALL 
transform_hlds__par_loop_control__create_get_free_slot_goal_7_p_0(
  MR_Word Info_8,
  MR_Word * LCSVar_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24);

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
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0(
  MR_Word PredProcId_7,
  MR_Word InnerPredProcId_8,
  MR_Word InnerPredName_9,
  MR_Word ModuleInfo_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_46,
  MR_Word * STATE_VARIABLE_ProcInfo_47);

static void MR_CALL 
transform_hlds__par_loop_control__get_lc_default_num_contexts_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word * PredId_5,
  MR_Integer * ProcId_6);

static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_default_num_contexts_name_0_f_0(void);

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
transform_hlds__par_loop_control__create_create_loop_control_goal_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word NumContextsVar_10,
  MR_Word * LCVar_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22);

static void MR_CALL 
transform_hlds__par_loop_control__create_inner_proc_8_p_0(
  MR_Word RecParConjIds_9,
  MR_Word OldPredProcId_10,
  MR_Word OldProcInfo_11,
  MR_Word ContainingGoalMap_12,
  MR_Word * PredProcId_13,
  MR_Word * PredSym_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58);

static void MR_CALL 
transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_join_and_terminate_name_0_f_0(void);

static void MR_CALL 
transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_wait_free_slot_name_0_f_0(void);

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
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_Box MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0(
  MR_Word Info_10,
  MR_Word GoalIds_11,
  MR_Word ContainingGoalMap_12,
  MR_Word STATE_VARIABLE_Goal_0_17,
  MR_Word * STATE_VARIABLE_Goal_18,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22);

static void MR_CALL 
transform_hlds__par_loop_control__should_preserve_tail_recursion_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * PreserveTailRecursion_4);

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


static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_2[5][3];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_3[3][1];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_4[3][9];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_5[4][6];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_6[2][12];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_7[2][5];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_8[1][8];

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_9[1][7];




static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__par_loop_control_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__par_loop_control_scalar_common_2[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2])),
    ((MR_Box) ((MR_String) "lc_finish"))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2])),
    ((MR_Box) ((MR_String) "loop_control"))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2])),
    ((MR_Box) ((MR_String) "lc_wait_free_slot"))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2])),
    ((MR_Box) ((MR_String) "lc_join_and_terminate"))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2])),
    ((MR_Box) ((MR_String) "lc_create"))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_3[2])),
    ((MR_Box) ((MR_String) "lc_default_num_contexts"))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_3[3][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_3[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "par_builtin"))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_4[3][9] = {
  /* row 0 */
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
  /* row 1 */
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
  /* row 2 */
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_6[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_goal_is_last_goal_on_path_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_7[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__par_loop_control_scalar_common_8[1][8] = {
  /* row 0 */
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
  /* row 0 */
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__libs__dependency_graph__pti_dependency_info_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__par_loop_control__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__par_loop_control__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__par_loop_control__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_fixup_goal_info_0 },
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_ordinal_ordered_fixup_goal_info_0 },
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
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_goal_is_last_goal_on_path_0 },
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_ordinal_ordered_goal_is_last_goal_on_path_0 },
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

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_loop_control_info_0_0[1] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0
};

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

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0[1] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_loop_control_info_0_0
};

static const MR_Integer transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_loop_control_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_loop_control_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001)),
  ((MR_Box) (transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001)),
  (MR_String) "transform_hlds.par_loop_control",
  (MR_String) "loop_control_info",
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_loop_control_info_0 },
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_loop_control_info_0 },
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
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_name_ordered_preserve_tail_recursion_0 },
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__enum_ordinal_ordered_preserve_tail_recursion_0 },
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
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__par_loop_control__transform_hlds__par_loop_control__field_types_seen_usable_recursion_0_3[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__par_loop_control__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0)
};

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

static const MR_DuFunctorDescPtr transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_stag_ordered_seen_usable_recursion_0_1[1] = {
  &transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_functor_desc_seen_usable_recursion_0_3
};

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
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_name_ordered_seen_usable_recursion_0 },
  {     transform_hlds__par_loop_control__transform_hlds__par_loop_control__du_ptag_ordered_seen_usable_recursion_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  transform_hlds__par_loop_control__transform_hlds__par_loop_control__functor_number_map_seen_usable_recursion_0,

};

static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1453__1_4_p_0(
  MR_Word Remap_4,
  MR_Word LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18,
  MR_Word * LambdaHeadVar__3_19)
{
  {
    MR_Word Var_12;
    MR_Word OldVar_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_17, (MR_Integer) 0))));
    MR_Word Inst_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_17, (MR_Integer) 1))));
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), Remap_4, ((MR_Box) (OldVar_20)), &conv0_Var_12);
    Var_12 = ((MR_Word) (conv0_Var_12));
    hlds__instmap__instmap_delta_set_var_4_p_0(Var_12, Inst_21, LambdaHeadVar__2_18, LambdaHeadVar__3_19);
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1362__1_3_p_0(
  MR_Word Remap_23,
  MR_Word HeadVar__2_115,
  MR_Word * HeadVar__3_116)
{
  {
    MR_Box conv0_HeadVar__3_116;

    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), Remap_23, ((MR_Box) (HeadVar__2_115)), &conv0_HeadVar__3_116);
    *HeadVar__3_116 = ((MR_Word) (conv0_HeadVar__3_116));
  }
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1133__1_2_p_0(
  MR_Word RecPredProcId_41,
  MR_Word HeadVar__2_93)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(RecPredProcId_41, HeadVar__2_93);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1144__1_2_p_0(
  MR_Word ConjType_48,
  MR_Word HeadVar__2_89)
{
  {
    MR_bool succeeded = (ConjType_48 == HeadVar__2_89);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
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
                      *HeadVar__1_1 = (MR_Integer) 1;
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
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
          {
            MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_15)), ((MR_Box) (ArgY1_11)));
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_13_13;
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_13_13 = (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_33 == CastY_34);
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
      MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 1);
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
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
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult6_21 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
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
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));

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
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__add_old_var_to_sets_9_p_0(
  MR_Word OldVarSet_10,
  MR_Word OldVar_11,
  MR_Word VarType_12,
  MR_Word STATE_VARIABLE_VarSet_0_18,
  MR_Word * STATE_VARIABLE_VarSet_19,
  MR_Word STATE_VARIABLE_VarTypes_0_20,
  MR_Word * STATE_VARIABLE_VarTypes_21,
  MR_Word STATE_VARIABLE_Remap_0_22,
  MR_Word * STATE_VARIABLE_Remap_23)
{
  {
    MR_bool succeeded;
    MR_Word Var_17;
    MR_String Name_16;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVarSet_10, OldVar_11, &Name_16);
    if (succeeded)
      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_16, &Var_17, STATE_VARIABLE_VarSet_0_18, STATE_VARIABLE_VarSet_19);
    else
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_17, STATE_VARIABLE_VarSet_0_18, STATE_VARIABLE_VarSet_19);
    hlds__vartypes__add_var_type_4_p_0(Var_17, VarType_12, STATE_VARIABLE_VarTypes_0_20, STATE_VARIABLE_VarTypes_21);
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), ((MR_Box) (OldVar_11)), ((MR_Box) (Var_17)), STATE_VARIABLE_Remap_0_22, STATE_VARIABLE_Remap_23);
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(
  MR_Word Info_6,
  MR_Word RecParConjIds_7,
  MR_Word STATE_VARIABLE_Case_0_11,
  MR_Word * STATE_VARIABLE_Case_12,
  MR_Word * FixupGoalInfo_9)
{
  {
    MR_Word STATE_VARIABLE_Goal_13_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_11, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_Goal_14_14;
    MR_Word Var_18;
    MR_Word Var_19;

    transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(Info_6, RecParConjIds_7, FixupGoalInfo_9, STATE_VARIABLE_Goal_13_13, &STATE_VARIABLE_Goal_14_14);
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_11, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_11, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Case_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (STATE_VARIABLE_Goal_14_14));
    }
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
  {
    MR_Word STATE_VARIABLE_Goal_15_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_13, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_Goal_16_16;
    MR_Word Var_20;
    MR_Word Var_21;

    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, STATE_VARIABLE_Goal_15_15, &STATE_VARIABLE_Goal_16_16, UseParentStack_10, FixupGoalInfo_11);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_13, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_13, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Case_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (STATE_VARIABLE_Goal_16_16));
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(
  MR_Word Info_10,
  MR_Word IsLastGoal_11,
  MR_Word GoalPath0_12,
  MR_Word STATE_VARIABLE_Goal_0_48,
  MR_Word * STATE_VARIABLE_Goal_49,
  MR_Word STATE_VARIABLE_VarSet_0_50,
  MR_Word * STATE_VARIABLE_VarSet_51,
  MR_Word STATE_VARIABLE_VarTypes_0_52,
  MR_Word * STATE_VARIABLE_VarTypes_53)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_48, (MR_Integer) 0))));
    MR_Word GoalInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_48, (MR_Integer) 1))));
    MR_Word GoalPath_18;
    MR_Word Step_19;

    succeeded = mdbcomp__goal_path__goal_path_remove_first_3_p_0(GoalPath0_12, &GoalPath_18, &Step_19);
    if (succeeded)
    {
      MR_String ErrorString_20;
      MR_Word GoalExpr_27;
      MR_String Var_57;
      MR_Word STATE_VARIABLE_Goal_83_83;
      MR_String Var_115;

      Var_57 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0), ((MR_Box) (Step_19)));
      Var_115 = mercury__string__f_43_43_2_f_0(Var_57, (MR_String) "\"");
      ErrorString_20 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t follow goal path step: \"", Var_115);
      switch (MR_tag((MR_Word) Step_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Step_19)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
              {
                MR_String Var_60;
                MR_String Var_64;
                MR_String Var_118;

                Var_64 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0), ((MR_Box) (Step_19)));
                Var_118 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) "\"");
                Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", Var_118);
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", Var_60);
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Vars_36;
                MR_Word Cond_37;
                MR_Word Then0_38;
                MR_Word Else_39;

                succeeded = ((((MR_tag((MR_Word) GoalExpr0_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Vars_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
                  Cond_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
                  Then0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 3))));
                  Else_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 4))));
                  {
                    MR_Word Then_40;

                    transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(Info_10, IsLastGoal_11, GoalPath_18, Then0_38, &Then_40, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51, STATE_VARIABLE_VarTypes_0_52, STATE_VARIABLE_VarTypes_53);
                    {
                      GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 1) = ((MR_Box) (Vars_36));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 2) = ((MR_Box) (Cond_37));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 3) = ((MR_Box) (Then_40));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 4) = ((MR_Box) (Else_39));
                    }
                  }
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", ErrorString_20);
                    return;
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Else0_41;
                MR_Word Vars_93;
                MR_Word Cond_94;
                MR_Word Then_96;

                succeeded = ((((MR_tag((MR_Word) GoalExpr0_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Vars_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
                  Cond_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
                  Then_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 3))));
                  Else0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 4))));
                  {
                    MR_Word Else_92;

                    transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(Info_10, IsLastGoal_11, GoalPath_18, Else0_41, &Else_92, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51, STATE_VARIABLE_VarTypes_0_52, STATE_VARIABLE_VarTypes_53);
                    {
                      GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 1) = ((MR_Box) (Vars_93));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 2) = ((MR_Box) (Cond_94));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 3) = ((MR_Box) (Then_96));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 4) = ((MR_Box) (Else_92));
                    }
                  }
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", ErrorString_20);
                    return;
                  }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer N_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Step_19, (MR_Integer) 0))));
            MR_Word Conjs0_22;
            MR_Word Conj0_23;
            MR_Word TypeCtorInfo_108_108;
            MR_Word Var_78;
            MR_Box conv0_Conj0_23;

            succeeded = ((((MR_tag((MR_Word) GoalExpr0_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Var_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))) & (MR_Integer) 1);
              Conjs0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
              succeeded = (Var_78 == (MR_Integer) 0);
              if (succeeded)
              {
                TypeCtorInfo_108_108 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_108_108, Conjs0_22, N_21, &conv0_Conj0_23);
                if (succeeded)
                {
                  Conj0_23 = ((MR_Word) (conv0_Conj0_23));
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
            {
              MR_Word IsLastGoalConj_24;
              MR_Word Conj_25;
              MR_Word Conjs_26;

              switch (IsLastGoal_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer Var_113;

                    Var_113 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_22);
                    succeeded = (N_21 == Var_113);
                    if (succeeded)
                      IsLastGoalConj_24 = (MR_Integer) 0;
                    else
                      IsLastGoalConj_24 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 1:
                  IsLastGoalConj_24 = IsLastGoal_11;
                  break;
              }
              transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(Info_10, IsLastGoalConj_24, GoalPath_18, Conj0_23, &Conj_25, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51, STATE_VARIABLE_VarTypes_0_52, STATE_VARIABLE_VarTypes_53);
              mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_22, N_21, ((MR_Box) (Conj_25)), &Conjs_26);
              {
                GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), GoalExpr_27, 2) = ((MR_Box) (Conjs_26));
              }
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", ErrorString_20);
                return;
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_60;
            MR_String Var_64;
            MR_String Var_118;

            Var_64 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0), ((MR_Box) (Step_19)));
            Var_118 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) "\"");
            Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", Var_118);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", Var_60);
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Step_19, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer N_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Step_19, (MR_Integer) 1))));
                MR_Word Var_29;
                MR_Word CanFail_30;
                MR_Word Cases0_31;
                MR_Word Case0_32;
                MR_Word TypeCtorInfo_111_111;
                MR_Box conv1_Case0_32;

                succeeded = ((((MR_tag((MR_Word) GoalExpr0_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
                  CanFail_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))) & (MR_Integer) 1);
                  Cases0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 3))));
                  TypeCtorInfo_111_111 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
                  succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_111_111, Cases0_31, N_91, &conv1_Case0_32);
                  if (succeeded)
                  {
                    Case0_32 = ((MR_Word) (conv1_Case0_32));
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                {
                  MR_Word Goal_13;
                  MR_Word Goal0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_32, (MR_Integer) 2))));
                  MR_Word Case_34;
                  MR_Word Cases_35;
                  MR_Word Var_104;
                  MR_Word Var_105;

                  transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(Info_10, IsLastGoal_11, GoalPath_18, Goal0_33, &Goal_13, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51, STATE_VARIABLE_VarTypes_0_52, STATE_VARIABLE_VarTypes_53);
                  Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_32, (MR_Integer) 0))));
                  Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_32, (MR_Integer) 1))));
                  {
                    Case_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Case_34, 0) = ((MR_Box) (Var_104));
                    MR_hl_field(MR_mktag(0), Case_34, 1) = ((MR_Box) (Var_105));
                    MR_hl_field(MR_mktag(0), Case_34, 2) = ((MR_Box) (Goal_13));
                  }
                  mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases0_31, N_91, ((MR_Box) (Case_34)), &Cases_35);
                  {
                    GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), GoalExpr_27, 1) = ((MR_Box) (Var_29));
                    MR_hl_field(MR_mktag(3), GoalExpr_27, 2) = (MR_Box) ((MR_Unsigned) (CanFail_30));
                    MR_hl_field(MR_mktag(3), GoalExpr_27, 3) = ((MR_Box) (Cases_35));
                  }
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", ErrorString_20);
                    return;
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Reason_43;
                MR_Word SubGoal0_44;

                succeeded = ((((MR_tag((MR_Word) GoalExpr0_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  Reason_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
                  SubGoal0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
                  {
                    MR_Word SubGoal_45;

                    transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(Info_10, IsLastGoal_11, GoalPath_18, SubGoal0_44, &SubGoal_45, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51, STATE_VARIABLE_VarTypes_0_52, STATE_VARIABLE_VarTypes_53);
                    {
                      GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 1) = ((MR_Box) (Reason_43));
                      MR_hl_field(MR_mktag(3), GoalExpr_27, 2) = ((MR_Box) (SubGoal_45));
                    }
                  }
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", ErrorString_20);
                    return;
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Var_60;
                MR_String Var_64;
                MR_String Var_118;

                Var_64 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0), ((MR_Box) (Step_19)));
                Var_118 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) "\"");
                Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "Unexpected step in goal path \"", Var_118);
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", Var_60);
                  return;
                }
              }
              break;
          }
          break;
      }
      {
        STATE_VARIABLE_Goal_83_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_83_83, 0) = ((MR_Box) (GoalExpr_27));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_83_83, 1) = ((MR_Box) (GoalInfo_17));
      }
      transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_10, STATE_VARIABLE_Goal_83_83, STATE_VARIABLE_Goal_49);
    }
    else
    {
      MR_Word Conjs_101;
      MR_Word Var_85;

      succeeded = ((((MR_tag((MR_Word) GoalExpr0_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))) & (MR_Integer) 1);
        Conjs_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
        succeeded = (Var_85 == (MR_Integer) 1);
      }
      if (succeeded)
        transform_hlds__par_loop_control__par_conj_loop_control_9_p_0(Info_10, Conjs_101, IsLastGoal_11, GoalInfo_17, STATE_VARIABLE_Goal_49, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51, STATE_VARIABLE_VarTypes_0_52, STATE_VARIABLE_VarTypes_53);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.par_loop_control.goal_loop_control_one_recursive_path\'/9", (MR_String) "expected parallel conjunction");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__par_conj_loop_control_9_p_0(
  MR_Word Info_10,
  MR_Word Conjuncts0_11,
  MR_Word IsLastGoal_12,
  MR_Word GoalInfo_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28,
  MR_Word STATE_VARIABLE_VarTypes_0_29,
  MR_Word * STATE_VARIABLE_VarTypes_30)
{
  {
    MR_Word EarlierConjuncts0_17;
    MR_Word LastConjunct0_18;
    MR_Word LastConjunct_19;
    MR_Word UseParentStack_20;
    MR_Word LastConjGoals_22;
    MR_Word EarlierConjuncts_23;
    MR_Word Conjuncts_24;
    MR_Word Goal0_25;
    MR_Word GoalExpr_42;
    MR_Word LCVar_43;
    MR_Word STATE_VARIABLE_NonLocals_12_45;
    MR_Word STATE_VARIABLE_NonLocals_13_46;
    MR_Word STATE_VARIABLE_GoalInfo_14_47;
    MR_Word STATE_VARIABLE_GoalInfo_16_49;
    MR_Box conv0_LastConjunct0_18;
    MR_Word Var_21;

    mercury__list__det_split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_11, &EarlierConjuncts0_17, &conv0_LastConjunct0_18);
    LastConjunct0_18 = ((MR_Word) (conv0_LastConjunct0_18));
    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_10, IsLastGoal_12, LastConjunct0_18, &LastConjunct_19, &UseParentStack_20, &Var_21);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(LastConjunct_19, &LastConjGoals_22);
    transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(Info_10, UseParentStack_20, EarlierConjuncts0_17, &EarlierConjuncts_23, STATE_VARIABLE_VarSet_0_27, STATE_VARIABLE_VarSet_28, STATE_VARIABLE_VarTypes_0_29, STATE_VARIABLE_VarTypes_30);
    Conjuncts_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), EarlierConjuncts_23, LastConjGoals_22);
    hlds__goal_util__create_conj_from_list_3_p_0(Conjuncts_24, (MR_Integer) 0, &Goal0_25);
    GoalExpr_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_25, (MR_Integer) 0))));
    LCVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))));
    STATE_VARIABLE_NonLocals_12_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_43, STATE_VARIABLE_NonLocals_12_45, &STATE_VARIABLE_NonLocals_13_46);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(STATE_VARIABLE_NonLocals_13_46, GoalInfo_13, &STATE_VARIABLE_GoalInfo_14_47);
    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_GoalInfo_14_47, &STATE_VARIABLE_GoalInfo_16_49);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_42));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_16_49));
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_Case_14;
    MR_Word conv8_UseParentStack_10;
    MR_Word conv7_FixupGoalInfo_11;

    transform_hlds__par_loop_control__case_rewrite_recursive_call_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv9_STATE_VARIABLE_Case_14, &conv8_UseParentStack_10, &conv7_FixupGoalInfo_11);
    *wrapper_arg_2 = ((MR_Box) (conv9_STATE_VARIABLE_Case_14));
    *wrapper_arg_3 = ((MR_Box) (conv8_UseParentStack_10));
    *wrapper_arg_4 = ((MR_Box) (conv7_FixupGoalInfo_11));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Goal_117;
    MR_Word conv5_UseParentStack_10;
    MR_Word conv4_FixupGoalInfo_11;

    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv6_STATE_VARIABLE_Goal_117, &conv5_UseParentStack_10, &conv4_FixupGoalInfo_11);
    *wrapper_arg_2 = ((MR_Box) (conv6_STATE_VARIABLE_Goal_117));
    *wrapper_arg_3 = ((MR_Box) (conv5_UseParentStack_10));
    *wrapper_arg_4 = ((MR_Box) (conv4_FixupGoalInfo_11));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Goal_117;
    MR_Word conv2_UseParentStack_10;
    MR_Word conv1_FixupGoalInfo_11;

    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Goal_117, &conv2_UseParentStack_10, &conv1_FixupGoalInfo_11);
    *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Goal_117));
    *wrapper_arg_3 = ((MR_Box) (conv2_UseParentStack_10));
    *wrapper_arg_4 = ((MR_Box) (conv1_FixupGoalInfo_11));
  }
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
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_116, (MR_Integer) 0))));
    MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_116, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_Goal_136_136;
          MR_Word GoalExpr_144;

          switch (MR_tag((MR_Word) GoalExpr0_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubGoal0_99 = (MR_Word) ((MR_Word) (GoalExpr0_12));
                MR_Word SubGoal_100;

                transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, SubGoal0_99, &SubGoal_100, UseParentStack_10, FixupGoalInfo_11);
                GoalExpr_144 = (MR_Word) ((MR_Word) (SubGoal_100));
              }
              break;
            case (MR_Integer) 1:
              {
                GoalExpr_144 = GoalExpr0_12;
                *UseParentStack_10 = (MR_Integer) 0;
                *FixupGoalInfo_11 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    GoalExpr_144 = GoalExpr0_12;
                    *UseParentStack_10 = (MR_Integer) 0;
                    *FixupGoalInfo_11 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ConjType_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Conjs0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
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
                    MR_Word Var_132;
                    MR_Word Var_134;
                    MR_Box conv0_LastConj0_79;

                    mercury__list__det_split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_77, &EarlierConjs0_78, &conv0_LastConj0_79);
                    LastConj0_79 = ((MR_Word) (conv0_LastConj0_79));
                    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, LastConj0_79, &LastConj_80, &UseParentStackLastConj_81, &FixupGoalInfoLastConj_82);
                    {
                      Var_132 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[1]));
                      MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_132, 3) = ((MR_Box) (Info_7));
                      MR_hl_field(MR_mktag(0), Var_132, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__list__map3_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_132, EarlierConjs0_78, &EarlierConjs_83, &UseParentStackEarlierConjs_84, &FixupGoalInfoEarlierConjs_85);
                    {
                      FixupGoalInfoConjs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), FixupGoalInfoConjs_86, 0) = ((MR_Box) (FixupGoalInfoLastConj_82));
                      MR_hl_field(MR_mktag(1), FixupGoalInfoConjs_86, 1) = ((MR_Box) (FixupGoalInfoEarlierConjs_85));
                    }
                    transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfoConjs_86, FixupGoalInfo_11);
                    transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(UseParentStackEarlierConjs_84, &UseParentStack0_87);
                    transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(UseParentStackLastConj_81, UseParentStack0_87, UseParentStack_10);
                    {
                      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (LastConj_80));
                      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    Conjs_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), EarlierConjs_83, Var_134);
                    {
                      GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = (MR_Box) ((MR_Unsigned) (ConjType_76));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = ((MR_Box) (Conjs_88));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Disjs0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                    MR_Word Disjs_90;
                    MR_Word UseParentStackDisjs_91;
                    MR_Word FixupGoalInfoDisjs_92;
                    MR_Word Var_130;

                    {
                      Var_130 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[1]));
                      MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_130, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_130, 3) = ((MR_Box) (Info_7));
                      MR_hl_field(MR_mktag(0), Var_130, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__list__map3_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_130, Disjs0_89, &Disjs_90, &UseParentStackDisjs_91, &FixupGoalInfoDisjs_92);
                    transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(UseParentStackDisjs_91, UseParentStack_10);
                    transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfoDisjs_92, FixupGoalInfo_11);
                    {
                      GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Disjs_90));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                    MR_Word CanFail_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
                    MR_Word Cases0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
                    MR_Word Cases_96;
                    MR_Word UseParentStackCases_97;
                    MR_Word FixupGoalInfoCases_98;
                    MR_Word Var_129;

                    {
                      Var_129 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[2]));
                      MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_129, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_129, 3) = ((MR_Box) (Info_7));
                      MR_hl_field(MR_mktag(0), Var_129, 4) = ((MR_Box) (IsLastGoal_8));
                    }
                    mercury__list__map3_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_129, Cases0_95, &Cases_96, &UseParentStackCases_97, &FixupGoalInfoCases_98);
                    transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(UseParentStackCases_97, UseParentStack_10);
                    transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfoCases_98, FixupGoalInfo_11);
                    {
                      GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Var_93));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = (MR_Box) ((MR_Unsigned) (CanFail_94));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 3) = ((MR_Box) (Cases_96));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Reason_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                    MR_Word SubGoal0_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
                    MR_Word SubGoal_143;

                    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, SubGoal0_142, &SubGoal_143, UseParentStack_10, FixupGoalInfo_11);
                    {
                      GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Reason_101));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = ((MR_Box) (SubGoal_143));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word Vars_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                    MR_Word Cond0_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
                    MR_Word Then0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
                    MR_Word Else0_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));
                    MR_Word Cond_106;
                    MR_Word UseParentStackCond_107;
                    MR_Word FixupGoalInfoCond_108;
                    MR_Word Then_109;
                    MR_Word UseParentStackThen_110;
                    MR_Word FixupGoalInfoThen_111;
                    MR_Word Else_112;
                    MR_Word UseParentStackElse_113;
                    MR_Word FixupGoalInfoElse_114;
                    MR_Word Var_121;
                    MR_Word Var_122;
                    MR_Word Var_123;
                    MR_Word Var_125;
                    MR_Word Var_126;
                    MR_Word Var_127;

                    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, (MR_Integer) 0, Cond0_103, &Cond_106, &UseParentStackCond_107, &FixupGoalInfoCond_108);
                    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, Then0_104, &Then_109, &UseParentStackThen_110, &FixupGoalInfoThen_111);
                    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, Else0_105, &Else_112, &UseParentStackElse_113, &FixupGoalInfoElse_114);
                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (FixupGoalInfoElse_114));
                      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (FixupGoalInfoThen_111));
                      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
                    }
                    {
                      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (FixupGoalInfoCond_108));
                      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
                    }
                    transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(Var_121, FixupGoalInfo_11);
                    {
                      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (UseParentStackElse_113));
                      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (UseParentStackThen_110));
                      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_127));
                    }
                    {
                      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (UseParentStackCond_107));
                      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_126));
                    }
                    transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(Var_125, UseParentStack_10);
                    {
                      GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Vars_102));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = ((MR_Box) (Cond_106));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 3) = ((MR_Box) (Then_109));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 4) = ((MR_Box) (Else_112));
                    }
                  }
                  break;
              }
              break;
          }
          {
            STATE_VARIABLE_Goal_136_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_136_136, 0) = ((MR_Box) (GoalExpr_144));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_136_136, 1) = ((MR_Box) (GoalInfo_13));
          }
          switch (*FixupGoalInfo_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_Goal_117 = STATE_VARIABLE_Goal_136_136;
              break;
            case (MR_Integer) 0:
              transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_7, STATE_VARIABLE_Goal_136_136, STATE_VARIABLE_Goal_117);
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Goal_136_136;
          MR_Word GoalExpr_144;

          switch (MR_tag((MR_Word) GoalExpr0_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubGoal0_99 = (MR_Word) ((MR_Word) (GoalExpr0_12));
                MR_Word SubGoal_100;

                transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, SubGoal0_99, &SubGoal_100, UseParentStack_10, FixupGoalInfo_11);
                GoalExpr_144 = (MR_Word) ((MR_Word) (SubGoal_100));
              }
              break;
            case (MR_Integer) 1:
              {
                GoalExpr_144 = GoalExpr0_12;
                *UseParentStack_10 = (MR_Integer) 0;
                *FixupGoalInfo_11 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    GoalExpr_144 = GoalExpr0_12;
                    *UseParentStack_10 = (MR_Integer) 0;
                    *FixupGoalInfo_11 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ConjType_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Conjs0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
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
                    MR_Word Var_132;
                    MR_Word Var_134;
                    MR_Box conv0_LastConj0_79;

                    mercury__list__det_split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_77, &EarlierConjs0_78, &conv0_LastConj0_79);
                    LastConj0_79 = ((MR_Word) (conv0_LastConj0_79));
                    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, LastConj0_79, &LastConj_80, &UseParentStackLastConj_81, &FixupGoalInfoLastConj_82);
                    {
                      Var_132 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[1]));
                      MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_132, 3) = ((MR_Box) (Info_7));
                      MR_hl_field(MR_mktag(0), Var_132, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__list__map3_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_132, EarlierConjs0_78, &EarlierConjs_83, &UseParentStackEarlierConjs_84, &FixupGoalInfoEarlierConjs_85);
                    {
                      FixupGoalInfoConjs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), FixupGoalInfoConjs_86, 0) = ((MR_Box) (FixupGoalInfoLastConj_82));
                      MR_hl_field(MR_mktag(1), FixupGoalInfoConjs_86, 1) = ((MR_Box) (FixupGoalInfoEarlierConjs_85));
                    }
                    transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfoConjs_86, FixupGoalInfo_11);
                    transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(UseParentStackEarlierConjs_84, &UseParentStack0_87);
                    transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(UseParentStackLastConj_81, UseParentStack0_87, UseParentStack_10);
                    {
                      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (LastConj_80));
                      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    Conjs_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), EarlierConjs_83, Var_134);
                    {
                      GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = (MR_Box) ((MR_Unsigned) (ConjType_76));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = ((MR_Box) (Conjs_88));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Disjs0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                    MR_Word Disjs_90;
                    MR_Word UseParentStackDisjs_91;
                    MR_Word FixupGoalInfoDisjs_92;
                    MR_Word Var_130;

                    {
                      Var_130 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[1]));
                      MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_130, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_130, 3) = ((MR_Box) (Info_7));
                      MR_hl_field(MR_mktag(0), Var_130, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__list__map3_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_130, Disjs0_89, &Disjs_90, &UseParentStackDisjs_91, &FixupGoalInfoDisjs_92);
                    transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(UseParentStackDisjs_91, UseParentStack_10);
                    transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfoDisjs_92, FixupGoalInfo_11);
                    {
                      GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Disjs_90));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                    MR_Word CanFail_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
                    MR_Word Cases0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
                    MR_Word Cases_96;
                    MR_Word UseParentStackCases_97;
                    MR_Word FixupGoalInfoCases_98;
                    MR_Word Var_129;

                    {
                      Var_129 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[2]));
                      MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_129, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_129, 3) = ((MR_Box) (Info_7));
                      MR_hl_field(MR_mktag(0), Var_129, 4) = ((MR_Box) (IsLastGoal_8));
                    }
                    mercury__list__map3_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_129, Cases0_95, &Cases_96, &UseParentStackCases_97, &FixupGoalInfoCases_98);
                    transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(UseParentStackCases_97, UseParentStack_10);
                    transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfoCases_98, FixupGoalInfo_11);
                    {
                      GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Var_93));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = (MR_Box) ((MR_Unsigned) (CanFail_94));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 3) = ((MR_Box) (Cases_96));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Reason_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                    MR_Word SubGoal0_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
                    MR_Word SubGoal_143;

                    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, SubGoal0_142, &SubGoal_143, UseParentStack_10, FixupGoalInfo_11);
                    {
                      GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Reason_101));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = ((MR_Box) (SubGoal_143));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word Vars_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                    MR_Word Cond0_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
                    MR_Word Then0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
                    MR_Word Else0_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));
                    MR_Word Cond_106;
                    MR_Word UseParentStackCond_107;
                    MR_Word FixupGoalInfoCond_108;
                    MR_Word Then_109;
                    MR_Word UseParentStackThen_110;
                    MR_Word FixupGoalInfoThen_111;
                    MR_Word Else_112;
                    MR_Word UseParentStackElse_113;
                    MR_Word FixupGoalInfoElse_114;
                    MR_Word Var_121;
                    MR_Word Var_122;
                    MR_Word Var_123;
                    MR_Word Var_125;
                    MR_Word Var_126;
                    MR_Word Var_127;

                    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, (MR_Integer) 0, Cond0_103, &Cond_106, &UseParentStackCond_107, &FixupGoalInfoCond_108);
                    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, Then0_104, &Then_109, &UseParentStackThen_110, &FixupGoalInfoThen_111);
                    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, Else0_105, &Else_112, &UseParentStackElse_113, &FixupGoalInfoElse_114);
                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (FixupGoalInfoElse_114));
                      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (FixupGoalInfoThen_111));
                      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
                    }
                    {
                      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (FixupGoalInfoCond_108));
                      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
                    }
                    transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(Var_121, FixupGoalInfo_11);
                    {
                      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (UseParentStackElse_113));
                      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (UseParentStackThen_110));
                      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_127));
                    }
                    {
                      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (UseParentStackCond_107));
                      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_126));
                    }
                    transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(Var_125, UseParentStack_10);
                    {
                      GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Vars_102));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = ((MR_Box) (Cond_106));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 3) = ((MR_Box) (Then_109));
                      MR_hl_field(MR_mktag(3), GoalExpr_144, 4) = ((MR_Box) (Else_112));
                    }
                  }
                  break;
              }
              break;
          }
          {
            STATE_VARIABLE_Goal_136_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_136_136, 0) = ((MR_Box) (GoalExpr_144));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_136_136, 1) = ((MR_Box) (GoalInfo_13));
          }
          switch (*FixupGoalInfo_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_Goal_117 = STATE_VARIABLE_Goal_136_136;
              break;
            case (MR_Integer) 0:
              transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_7, STATE_VARIABLE_Goal_136_136, STATE_VARIABLE_Goal_117);
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CallPredId0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 0))));
          MR_Integer CallProcId0_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 1))));
          MR_Word Args0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 2))));
          MR_Word Builtin_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word MaybeUnify_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 4))));
          MR_Word RecPredProcId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))));
          MR_Word Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecPredProcId_20, (MR_Integer) 0))));
          MR_Integer Var_212 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RecPredProcId_20, (MR_Integer) 1))));

          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(CallPredId0_14, Var_211);
          if (succeeded)
            succeeded = (CallProcId0_15 == Var_212);
          if (succeeded)
          {
            MR_Word NewPredProcId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3))));
            MR_Word CallPredId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPredProcId_21, (MR_Integer) 0))));
            MR_Integer CallProcId_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NewPredProcId_21, (MR_Integer) 1))));
            MR_Word LCVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
            MR_Word Args_25;
            MR_Word Name_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4))));
            MR_Word GoalExpr_27;
            MR_Word PreserveTailRecursion_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5))) & (MR_Integer) 1);
            MR_Word STATE_VARIABLE_Goal_138_138;
            MR_Word STATE_VARIABLE_Goal_140_140;

            {
              Args_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Args_25, 0) = ((MR_Box) (LCVar_24));
              MR_hl_field(MR_mktag(1), Args_25, 1) = ((MR_Box) (Args0_16));
            }
            {
              GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), GoalExpr_27, 0) = ((MR_Box) (CallPredId_22));
              MR_hl_field(MR_mktag(2), GoalExpr_27, 1) = ((MR_Box) (CallProcId_23));
              MR_hl_field(MR_mktag(2), GoalExpr_27, 2) = ((MR_Box) (Args_25));
              MR_hl_field(MR_mktag(2), GoalExpr_27, 3) = (MR_Box) ((MR_Unsigned) (Builtin_17));
              MR_hl_field(MR_mktag(2), GoalExpr_27, 4) = ((MR_Box) (MaybeUnify_18));
              MR_hl_field(MR_mktag(2), GoalExpr_27, 5) = ((MR_Box) (Name_26));
            }
            {
              STATE_VARIABLE_Goal_138_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_138_138, 0) = ((MR_Box) (GoalExpr_27));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_138_138, 1) = ((MR_Box) (GoalInfo_13));
            }
            succeeded = (IsLastGoal_8 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (PreserveTailRecursion_28 == (MR_Integer) 0);
            if (succeeded)
            {
              *UseParentStack_10 = (MR_Integer) 1;
              STATE_VARIABLE_Goal_140_140 = STATE_VARIABLE_Goal_138_138;
            }
            else
            {
              *UseParentStack_10 = (MR_Integer) 0;
              hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 25, STATE_VARIABLE_Goal_138_138, &STATE_VARIABLE_Goal_140_140);
            }
            transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_7, STATE_VARIABLE_Goal_140_140, STATE_VARIABLE_Goal_117);
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            {
              MR_Word STATE_VARIABLE_Goal_136_136;
              MR_Word GoalExpr_144;

              switch (MR_tag((MR_Word) GoalExpr0_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubGoal0_99 = (MR_Word) ((MR_Word) (GoalExpr0_12));
                    MR_Word SubGoal_100;

                    transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, SubGoal0_99, &SubGoal_100, UseParentStack_10, FixupGoalInfo_11);
                    GoalExpr_144 = (MR_Word) ((MR_Word) (SubGoal_100));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    GoalExpr_144 = GoalExpr0_12;
                    *UseParentStack_10 = (MR_Integer) 0;
                    *FixupGoalInfo_11 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      {
                        GoalExpr_144 = GoalExpr0_12;
                        *UseParentStack_10 = (MR_Integer) 0;
                        *FixupGoalInfo_11 = (MR_Integer) 1;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ConjType_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
                        MR_Word Conjs0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
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
                        MR_Word Var_132;
                        MR_Word Var_134;
                        MR_Box conv0_LastConj0_79;

                        mercury__list__det_split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_77, &EarlierConjs0_78, &conv0_LastConj0_79);
                        LastConj0_79 = ((MR_Word) (conv0_LastConj0_79));
                        transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, LastConj0_79, &LastConj_80, &UseParentStackLastConj_81, &FixupGoalInfoLastConj_82);
                        {
                          Var_132 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[1]));
                          MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_1));
                          MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), Var_132, 3) = ((MR_Box) (Info_7));
                          MR_hl_field(MR_mktag(0), Var_132, 4) = ((MR_Box) ((MR_Integer) 1));
                        }
                        mercury__list__map3_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_132, EarlierConjs0_78, &EarlierConjs_83, &UseParentStackEarlierConjs_84, &FixupGoalInfoEarlierConjs_85);
                        {
                          FixupGoalInfoConjs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), FixupGoalInfoConjs_86, 0) = ((MR_Box) (FixupGoalInfoLastConj_82));
                          MR_hl_field(MR_mktag(1), FixupGoalInfoConjs_86, 1) = ((MR_Box) (FixupGoalInfoEarlierConjs_85));
                        }
                        transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfoConjs_86, FixupGoalInfo_11);
                        transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(UseParentStackEarlierConjs_84, &UseParentStack0_87);
                        transform_hlds__par_loop_control__combine_use_parent_stack_3_p_0(UseParentStackLastConj_81, UseParentStack0_87, UseParentStack_10);
                        {
                          Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (LastConj_80));
                          MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Conjs_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), EarlierConjs_83, Var_134);
                        {
                          GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = (MR_Box) ((MR_Unsigned) (ConjType_76));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = ((MR_Box) (Conjs_88));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Disjs0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                        MR_Word Disjs_90;
                        MR_Word UseParentStackDisjs_91;
                        MR_Word FixupGoalInfoDisjs_92;
                        MR_Word Var_130;

                        {
                          Var_130 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[1]));
                          MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_2));
                          MR_hl_field(MR_mktag(0), Var_130, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), Var_130, 3) = ((MR_Box) (Info_7));
                          MR_hl_field(MR_mktag(0), Var_130, 4) = ((MR_Box) ((MR_Integer) 1));
                        }
                        mercury__list__map3_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_130, Disjs0_89, &Disjs_90, &UseParentStackDisjs_91, &FixupGoalInfoDisjs_92);
                        transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(UseParentStackDisjs_91, UseParentStack_10);
                        transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfoDisjs_92, FixupGoalInfo_11);
                        {
                          GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Disjs_90));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                        MR_Word CanFail_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
                        MR_Word Cases0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
                        MR_Word Cases_96;
                        MR_Word UseParentStackCases_97;
                        MR_Word FixupGoalInfoCases_98;
                        MR_Word Var_129;

                        {
                          Var_129 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[2]));
                          MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0_3));
                          MR_hl_field(MR_mktag(0), Var_129, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), Var_129, 3) = ((MR_Box) (Info_7));
                          MR_hl_field(MR_mktag(0), Var_129, 4) = ((MR_Box) (IsLastGoal_8));
                        }
                        mercury__list__map3_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_lc_use_parent_stack_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_129, Cases0_95, &Cases_96, &UseParentStackCases_97, &FixupGoalInfoCases_98);
                        transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(UseParentStackCases_97, UseParentStack_10);
                        transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfoCases_98, FixupGoalInfo_11);
                        {
                          GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Var_93));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = (MR_Box) ((MR_Unsigned) (CanFail_94));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 3) = ((MR_Box) (Cases_96));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word Reason_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                        MR_Word SubGoal0_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
                        MR_Word SubGoal_143;

                        transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, SubGoal0_142, &SubGoal_143, UseParentStack_10, FixupGoalInfo_11);
                        {
                          GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Reason_101));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = ((MR_Box) (SubGoal_143));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Vars_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                        MR_Word Cond0_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
                        MR_Word Then0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
                        MR_Word Else0_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));
                        MR_Word Cond_106;
                        MR_Word UseParentStackCond_107;
                        MR_Word FixupGoalInfoCond_108;
                        MR_Word Then_109;
                        MR_Word UseParentStackThen_110;
                        MR_Word FixupGoalInfoThen_111;
                        MR_Word Else_112;
                        MR_Word UseParentStackElse_113;
                        MR_Word FixupGoalInfoElse_114;
                        MR_Word Var_121;
                        MR_Word Var_122;
                        MR_Word Var_123;
                        MR_Word Var_125;
                        MR_Word Var_126;
                        MR_Word Var_127;

                        transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, (MR_Integer) 0, Cond0_103, &Cond_106, &UseParentStackCond_107, &FixupGoalInfoCond_108);
                        transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, Then0_104, &Then_109, &UseParentStackThen_110, &FixupGoalInfoThen_111);
                        transform_hlds__par_loop_control__goal_rewrite_recursive_call_6_p_0(Info_7, IsLastGoal_8, Else0_105, &Else_112, &UseParentStackElse_113, &FixupGoalInfoElse_114);
                        {
                          Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (FixupGoalInfoElse_114));
                          MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (FixupGoalInfoThen_111));
                          MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
                        }
                        {
                          Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (FixupGoalInfoCond_108));
                          MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
                        }
                        transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(Var_121, FixupGoalInfo_11);
                        {
                          Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (UseParentStackElse_113));
                          MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (UseParentStackThen_110));
                          MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_127));
                        }
                        {
                          Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (UseParentStackCond_107));
                          MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_126));
                        }
                        transform_hlds__par_loop_control__goals_use_parent_stack_2_p_0(Var_125, UseParentStack_10);
                        {
                          GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Vars_102));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = ((MR_Box) (Cond_106));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 3) = ((MR_Box) (Then_109));
                          MR_hl_field(MR_mktag(3), GoalExpr_144, 4) = ((MR_Box) (Else_112));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                STATE_VARIABLE_Goal_136_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_136_136, 0) = ((MR_Box) (GoalExpr_144));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_136_136, 1) = ((MR_Box) (GoalInfo_13));
              }
              switch (*FixupGoalInfo_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Goal_117 = STATE_VARIABLE_Goal_136_136;
                  break;
                case (MR_Integer) 0:
                  transform_hlds__par_loop_control__fixup_goal_info_3_p_0(Info_7, STATE_VARIABLE_Goal_136_136, STATE_VARIABLE_Goal_117);
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
    MR_Word X_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Xs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(
  MR_Word Info_1,
  MR_Word UseParentStack_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_VarTypes_0_7,
  MR_Word * STATE_VARIABLE_VarTypes_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTypes_8 = STATE_VARIABLE_VarTypes_0_7;
    *STATE_VARIABLE_VarSet_6 = STATE_VARIABLE_VarSet_0_5;
  }
  else
  {
    MR_Word Conjunct0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Conjuncts0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word LCSVar_24;
    MR_Word GetFreeSlotGoal_25;
    MR_Word LCVar_26;
    MR_Word JoinAndTerminateGoal_27;
    MR_Word Conjunct0GoalInfo_28;
    MR_Word Conjunct0Goals_29;
    MR_Word ConjunctGoals_30;
    MR_Word Conjunct_33;
    MR_Word ScopeGoalInfo_34;
    MR_Word ScopeGoalExpr_35;
    MR_Word ScopeGoal_36;
    MR_Word TailGoals_37;
    MR_Word STATE_VARIABLE_VarSet_42_42;
    MR_Word STATE_VARIABLE_VarTypes_43_43;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_NonLocals_46_46;
    MR_Word STATE_VARIABLE_NonLocals_47_47;
    MR_Word STATE_VARIABLE_NonLocals_48_48;
    MR_Word Var_49;
    MR_Word Var_52;

    transform_hlds__par_loop_control__create_get_free_slot_goal_7_p_0(Info_1, &LCSVar_24, &GetFreeSlotGoal_25, STATE_VARIABLE_VarSet_0_5, &STATE_VARIABLE_VarSet_42_42, STATE_VARIABLE_VarTypes_0_7, &STATE_VARIABLE_VarTypes_43_43);
    Conjunct0GoalInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conjunct0_19, (MR_Integer) 1))));
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Conjunct0_19, &Conjunct0Goals_29);
    LCVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1))));
    transform_hlds__par_loop_control__create_join_and_terminate_goal_4_p_0(Info_1, LCVar_26, LCSVar_24, &JoinAndTerminateGoal_27);
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (JoinAndTerminateGoal_27));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ConjunctGoals_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjunct0Goals_29, Var_44);
    STATE_VARIABLE_NonLocals_46_46 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(Conjunct0GoalInfo_28);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_24, STATE_VARIABLE_NonLocals_46_46, &STATE_VARIABLE_NonLocals_47_47);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_26, STATE_VARIABLE_NonLocals_47_47, &STATE_VARIABLE_NonLocals_48_48);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(STATE_VARIABLE_NonLocals_48_48, Conjunct0GoalInfo_28, &ScopeGoalInfo_34);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(ConjunctGoals_30, ScopeGoalInfo_34, &Conjunct_33);
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (LCVar_26));
      MR_hl_field(MR_mktag(3), Var_49, 2) = ((MR_Box) (LCSVar_24));
      MR_hl_field(MR_mktag(3), Var_49, 3) = (MR_Box) ((MR_Unsigned) (UseParentStack_2));
    }
    {
      ScopeGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ScopeGoalExpr_35, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), ScopeGoalExpr_35, 1) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(3), ScopeGoalExpr_35, 2) = ((MR_Box) (Conjunct_33));
    }
    {
      ScopeGoal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ScopeGoal_36, 0) = ((MR_Box) (ScopeGoalExpr_35));
      MR_hl_field(MR_mktag(0), ScopeGoal_36, 1) = ((MR_Box) (ScopeGoalInfo_34));
    }
    transform_hlds__par_loop_control__rewrite_nonrecursive_par_conjuncts_8_p_0(Info_1, UseParentStack_2, Conjuncts0_20, &TailGoals_37, STATE_VARIABLE_VarSet_42_42, STATE_VARIABLE_VarSet_6, STATE_VARIABLE_VarTypes_43_43, STATE_VARIABLE_VarTypes_8);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (ScopeGoal_36));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (TailGoals_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GetFreeSlotGoal_25));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_52));
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__create_join_and_terminate_goal_4_p_0(
  MR_Word Info_5,
  MR_Word LCVar_6,
  MR_Word LCSVar_7,
  MR_Word * Goal_8)
{
  {
    MR_Word PredId_9;
    MR_Integer ProcId_10;
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 9))));
    MR_Word GoalExpr_12;
    MR_Word NonLocals_13;
    MR_Word InstmapDelta_14;
    MR_Word GoalInfo_15;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8))));
    MR_Word Var_17;
    MR_Word Var_18;

    PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
    ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (LCSVar_7));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (LCVar_6));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_12, 0) = ((MR_Box) (PredId_9));
      MR_hl_field(MR_mktag(2), GoalExpr_12, 1) = ((MR_Box) (ProcId_10));
      MR_hl_field(MR_mktag(2), GoalExpr_12, 2) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(2), GoalExpr_12, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), GoalExpr_12, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), GoalExpr_12, 5) = ((MR_Box) (SymName_11));
    }
    NonLocals_13 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_17);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstmapDelta_14);
    GoalInfo_15 = hlds__hlds_goal__impure_init_goal_info_3_f_0(NonLocals_13, InstmapDelta_14, (MR_Integer) 0);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_15));
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__create_get_free_slot_goal_7_p_0(
  MR_Word Info_8,
  MR_Word * LCSVar_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24)
{
  {
    MR_Word LCVar_13;
    MR_Word PredId_14;
    MR_Integer ProcId_15;
    MR_Word SymName_16;
    MR_Word GoalExpr_17;
    MR_Word NonLocals_18;
    MR_Word InstmapDelta_19;
    MR_Word GoalInfo_20;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_44;

    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "LCS", LCSVar_9, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22);
    hlds__vartypes__add_var_type_4_p_0(*LCSVar_9, (MR_Word) (MR_mkword(MR_mktag(2), &transform_hlds__par_loop_control_scalar_common_3[1])), STATE_VARIABLE_VarTypes_0_23, STATE_VARIABLE_VarTypes_24);
    LCVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6))));
    SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7))));
    PredId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
    ProcId_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1))));
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (*LCSVar_9));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (LCVar_13));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_17, 0) = ((MR_Box) (PredId_14));
      MR_hl_field(MR_mktag(2), GoalExpr_17, 1) = ((MR_Box) (ProcId_15));
      MR_hl_field(MR_mktag(2), GoalExpr_17, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(2), GoalExpr_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), GoalExpr_17, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), GoalExpr_17, 5) = ((MR_Box) (SymName_16));
    }
    NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_30);
    InstmapDelta_19 = hlds__instmap__instmap_delta_bind_var_1_f_0(*LCSVar_9);
    GoalInfo_20 = hlds__hlds_goal__impure_init_goal_info_3_f_0(NonLocals_18, InstmapDelta_19, (MR_Integer) 0);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_20));
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(
  MR_Word SelfPredProcId_4,
  MR_Word HeadVar__2_2,
  MR_Word * SeenUsableRecursion_8)
{
  {
    MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

    transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(Goal_7, SelfPredProcId_4, SeenUsableRecursion_8);
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_12_40;
    MR_Word HasParallelConj_29;
    MR_Word Detism_30;
    MR_Word DepGraph_33;
    MR_Word SelfKey_34;
    MR_Word DepGraphWOSelfEdge_35;
    MR_Word TCDepGraphWOSelfEdge_36;

    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_ProcInfo_0_19, &HasParallelConj_29);
    succeeded = (HasParallelConj_29 == (MR_Integer) 0);
    if (succeeded)
    {
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_19, &Detism_30);
      switch (Detism_30) {
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
        TypeCtorInfo_12_40 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
        DepGraph_33 = libs__dependency_graph__dependency_info_get_graph_1_f_0(TypeCtorInfo_12_40, DepInfo_7);
        mercury__digraph__lookup_key_3_p_0(TypeCtorInfo_12_40, DepGraph_33, ((MR_Box) (PredProcId_8)), &SelfKey_34);
        succeeded = mercury__digraph__is_edge_3_p_1(TypeCtorInfo_12_40, DepGraph_33, SelfKey_34, SelfKey_34);
        if (succeeded)
        {
          mercury__digraph__delete_edge_4_p_0(TypeCtorInfo_12_40, SelfKey_34, SelfKey_34, DepGraph_33, &DepGraphWOSelfEdge_35);
          mercury__digraph__tc_2_p_0(TypeCtorInfo_12_40, DepGraphWOSelfEdge_35, &TCDepGraphWOSelfEdge_36);
          succeeded = mercury__digraph__is_edge_3_p_1(TypeCtorInfo_12_40, TCDepGraphWOSelfEdge_36, SelfKey_34, SelfKey_34);
          succeeded = !(succeeded);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Body0_11;
      MR_Word VarTypes_12;
      MR_Word ContainingGoalMap_13;
      MR_Word Body_14;
      MR_Word RecursiveParConjIds_15;
      MR_Word STATE_VARIABLE_ProcInfo_23_23;

      hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_19, &Body0_11);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_19, &VarTypes_12);
      hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(STATE_VARIABLE_ModuleInfo_0_21, VarTypes_12, &ContainingGoalMap_13, Body0_11, &Body_14);
      hlds__hlds_pred__proc_info_set_goal_3_p_0(Body_14, STATE_VARIABLE_ProcInfo_0_19, &STATE_VARIABLE_ProcInfo_23_23);
      transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(Body_14, PredProcId_8, &RecursiveParConjIds_15);
      switch (MR_tag((MR_Word) RecursiveParConjIds_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(RecursiveParConjIds_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_ProcInfo_20 = STATE_VARIABLE_ProcInfo_23_23;
                *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_ProcInfo_20 = STATE_VARIABLE_ProcInfo_23_23;
                *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
              }
              break;
            case (MR_Integer) 2:
              {
                *STATE_VARIABLE_ProcInfo_20 = STATE_VARIABLE_ProcInfo_23_23;
                *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word GoalIds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RecursiveParConjIds_15, (MR_Integer) 0))));
            MR_Word InnerPredProcId_17;
            MR_Word InnerPredName_18;

            transform_hlds__par_loop_control__create_inner_proc_8_p_0(GoalIds_16, PredProcId_8, STATE_VARIABLE_ProcInfo_23_23, ContainingGoalMap_13, &InnerPredProcId_17, &InnerPredName_18, STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ModuleInfo_22);
            transform_hlds__par_loop_control__update_outer_proc_6_p_0(PredProcId_8, InnerPredProcId_17, InnerPredName_18, *STATE_VARIABLE_ModuleInfo_22, STATE_VARIABLE_ProcInfo_23_23, STATE_VARIABLE_ProcInfo_20);
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
}

static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__3_116;

    transform_hlds__par_loop_control__IntroducedFrom__pred__update_outer_proc__1362__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__3_116);
    *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__3_116));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_VarSet_19;
    MR_Word conv1_STATE_VARIABLE_VarTypes_21;
    MR_Word conv0_STATE_VARIABLE_Remap_23;

    transform_hlds__par_loop_control__add_old_var_to_sets_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarSet_19, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_VarTypes_21, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Remap_23);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_19));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_VarTypes_21));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Remap_23));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__update_outer_proc_6_p_0(
  MR_Word PredProcId_7,
  MR_Word InnerPredProcId_8,
  MR_Word InnerPredName_9,
  MR_Word ModuleInfo_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_46,
  MR_Word * STATE_VARIABLE_ProcInfo_47)
{
  {
    MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_7, (MR_Integer) 0))));
    MR_Word PredInfo_14;
    MR_Word HeadVarTypes_15;
    MR_Word HeadVars0_16;
    MR_Word Detism_17;
    MR_Word OrigGoal_18;
    MR_Word OrigInstmapDelta_19;
    MR_Word OldVarSet_22;
    MR_Word Remap_23;
    MR_Word HeadVars_24;
    MR_Word RttiVarmaps0_25;
    MR_Word RttiVarmaps_26;
    MR_Word NumContextsVar_27;
    MR_Word LCDefaultNumContextsPredId_28;
    MR_Integer LCDefaultNumContextsProcId_29;
    MR_Word GetNumContextsGoalInfo_30;
    MR_Word GetNumContextsGoal_31;
    MR_Word LCVar_32;
    MR_Word LCCreateGoal_33;
    MR_Word InnerCallArgs_34;
    MR_Word NonLocals_35;
    MR_Word InstmapDelta_36;
    MR_Word InnerProcCallGoalInfo_37;
    MR_Word InnerPredId_38;
    MR_Integer InnerProcId_39;
    MR_Word InnerProcCallGoal_40;
    MR_Word ConjGoalInfo_41;
    MR_Word ConjGoal_42;
    MR_Word OrigPurity_43;
    MR_Word Body_44;
    MR_Word Var_48;
    MR_Word STATE_VARIABLE_VarSet_49_49;
    MR_Word STATE_VARIABLE_VarTypes_50_50;
    MR_Word Var_51;
    MR_Word STATE_VARIABLE_VarSet_52_52;
    MR_Word STATE_VARIABLE_VarTypes_53_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_ProcInfo_56_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word STATE_VARIABLE_ProcInfo_59_59;
    MR_Word STATE_VARIABLE_VarSet_61_61;
    MR_Word STATE_VARIABLE_VarTypes_63_63;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_77;
    MR_Word STATE_VARIABLE_VarSet_78_78;
    MR_Word STATE_VARIABLE_VarTypes_79_79;
    MR_Word Var_81;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word STATE_VARIABLE_ProcInfo_96_96;
    MR_Word STATE_VARIABLE_ProcInfo_97_97;
    MR_Box conv5_STATE_VARIABLE_VarSet_52_52;
    MR_Box conv4_STATE_VARIABLE_VarTypes_53_53;
    MR_Box conv3_Remap_23;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_12, &PredInfo_14);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_14, &HeadVarTypes_15);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_46, &HeadVars0_16);
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_46, &Detism_17);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_46, &OrigGoal_18);
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigGoal_18, (MR_Integer) 1))));
    OrigInstmapDelta_19 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_48);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_VarSet_49_49);
    hlds__vartypes__init_vartypes_1_p_0(&STATE_VARIABLE_VarTypes_50_50);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_46, &OldVarSet_22);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (transform_hlds__par_loop_control__update_outer_proc_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (OldVarSet_22));
    }
    Var_54 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]));
    mercury__list__foldl3_corresponding_9_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[1]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_2[0]), Var_51, HeadVars0_16, HeadVarTypes_15, ((MR_Box) (STATE_VARIABLE_VarSet_49_49)), &conv5_STATE_VARIABLE_VarSet_52_52, ((MR_Box) (STATE_VARIABLE_VarTypes_50_50)), &conv4_STATE_VARIABLE_VarTypes_53_53, ((MR_Box) (Var_54)), &conv3_Remap_23);
    STATE_VARIABLE_VarSet_52_52 = ((MR_Word) (conv5_STATE_VARIABLE_VarSet_52_52));
    STATE_VARIABLE_VarTypes_53_53 = ((MR_Word) (conv4_STATE_VARIABLE_VarTypes_53_53));
    Remap_23 = ((MR_Word) (conv3_Remap_23));
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (transform_hlds__par_loop_control__update_outer_proc_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Remap_23));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), Var_55, HeadVars0_16, &HeadVars_24);
    hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_24, STATE_VARIABLE_ProcInfo_0_46, &STATE_VARIABLE_ProcInfo_56_56);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_56_56, &RttiVarmaps0_25);
    Var_57 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[2]), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[2]));
    Var_58 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(Var_57, Var_58, Remap_23, RttiVarmaps0_25, &RttiVarmaps_26);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarmaps_26, STATE_VARIABLE_ProcInfo_56_56, &STATE_VARIABLE_ProcInfo_59_59);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "NumContexts", &NumContextsVar_27, STATE_VARIABLE_VarSet_52_52, &STATE_VARIABLE_VarSet_61_61);
    hlds__vartypes__add_var_type_4_p_0(NumContextsVar_27, (MR_Word) (MR_mkword(MR_mktag(2), &transform_hlds__par_loop_control_scalar_common_3[1])), STATE_VARIABLE_VarTypes_53_53, &STATE_VARIABLE_VarTypes_63_63);
    transform_hlds__par_loop_control__get_lc_default_num_contexts_proc_3_p_0(ModuleInfo_10, &LCDefaultNumContextsPredId_28, &LCDefaultNumContextsProcId_29);
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (NumContextsVar_27));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_66 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_70);
    Var_67 = hlds__instmap__instmap_delta_bind_var_1_f_0(NumContextsVar_27);
    hlds__hlds_goal__goal_info_init_5_p_0(Var_66, Var_67, (MR_Integer) 0, (MR_Integer) 0, &GetNumContextsGoalInfo_30);
    Var_77 = transform_hlds__par_loop_control__lc_default_num_contexts_name_0_f_0();
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_72, 0) = ((MR_Box) (LCDefaultNumContextsPredId_28));
      MR_hl_field(MR_mktag(2), Var_72, 1) = ((MR_Box) (LCDefaultNumContextsProcId_29));
      MR_hl_field(MR_mktag(2), Var_72, 2) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(2), Var_72, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_72, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), Var_72, 5) = ((MR_Box) (Var_77));
    }
    {
      GetNumContextsGoal_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GetNumContextsGoal_31, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), GetNumContextsGoal_31, 1) = ((MR_Box) (GetNumContextsGoalInfo_30));
    }
    transform_hlds__par_loop_control__create_create_loop_control_goal_8_p_0(ModuleInfo_10, NumContextsVar_27, &LCVar_32, &LCCreateGoal_33, STATE_VARIABLE_VarSet_61_61, &STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_VarTypes_63_63, &STATE_VARIABLE_VarTypes_79_79);
    {
      InnerCallArgs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InnerCallArgs_34, 0) = ((MR_Box) (LCVar_32));
      MR_hl_field(MR_mktag(1), InnerCallArgs_34, 1) = ((MR_Box) (HeadVars_24));
    }
    NonLocals_35 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerCallArgs_34);
    transform_hlds__par_loop_control__remap_instmap_3_p_0(Remap_23, OrigInstmapDelta_19, &InstmapDelta_36);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_35, InstmapDelta_36, Detism_17, (MR_Integer) 2, &InnerProcCallGoalInfo_37);
    InnerPredId_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InnerPredProcId_8, (MR_Integer) 0))));
    InnerProcId_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InnerPredProcId_8, (MR_Integer) 1))));
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (InnerPredId_38));
      MR_hl_field(MR_mktag(2), Var_81, 1) = ((MR_Box) (InnerProcId_39));
      MR_hl_field(MR_mktag(2), Var_81, 2) = ((MR_Box) (InnerCallArgs_34));
      MR_hl_field(MR_mktag(2), Var_81, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_81, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), Var_81, 5) = ((MR_Box) (InnerPredName_9));
    }
    {
      InnerProcCallGoal_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InnerProcCallGoal_40, 0) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), InnerProcCallGoal_40, 1) = ((MR_Box) (InnerProcCallGoalInfo_37));
    }
    Var_84 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_24);
    hlds__hlds_goal__goal_info_init_5_p_0(Var_84, InstmapDelta_36, Detism_17, (MR_Integer) 2, &ConjGoalInfo_41);
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (InnerProcCallGoal_40));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (LCCreateGoal_33));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (GetNumContextsGoal_31));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_86, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_86, 2) = ((MR_Box) (Var_88));
    }
    {
      ConjGoal_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConjGoal_42, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), ConjGoal_42, 1) = ((MR_Box) (ConjGoalInfo_41));
    }
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigGoal_18, (MR_Integer) 1))));
    OrigPurity_43 = hlds__hlds_goal__goal_info_get_purity_1_f_0(Var_92);
    switch (OrigPurity_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        Body_44 = ConjGoal_42;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word ScopeGoalInfo_45;
          MR_Word Var_94;
          MR_Word Var_95;

          hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, ConjGoalInfo_41, &ScopeGoalInfo_45);
          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_95, 1) = (MR_Box) ((MR_Unsigned) (OrigPurity_43));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(3), Var_94, 2) = ((MR_Box) (ConjGoal_42));
          }
          {
            Body_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Body_44, 0) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(0), Body_44, 1) = ((MR_Box) (ScopeGoalInfo_45));
          }
        }
        break;
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Body_44, STATE_VARIABLE_ProcInfo_59_59, &STATE_VARIABLE_ProcInfo_96_96);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_ProcInfo_96_96, &STATE_VARIABLE_ProcInfo_97_97);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(STATE_VARIABLE_VarTypes_79_79, STATE_VARIABLE_ProcInfo_97_97, STATE_VARIABLE_ProcInfo_47);
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__get_lc_default_num_contexts_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word * PredId_5,
  MR_Integer * ProcId_6)
{
  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_4, (MR_Word) (&transform_hlds__par_loop_control_scalar_common_3[2]), (MR_String) "lc_default_num_contexts", (MR_Integer) 0, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredId_5, ProcId_6);
}

static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_default_num_contexts_name_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[10]));
}

static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_19;

    transform_hlds__par_loop_control__IntroducedFrom__pred__remap_instmap__1453__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_19));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__remap_instmap_3_p_0(
  MR_Word Remap_4,
  MR_Word OldInstmapDelta_5,
  MR_Word * STATE_VARIABLE_InstmapDelta_13)
{
  {
    MR_Word VarInsts_7;
    MR_Word STATE_VARIABLE_InstmapDelta_14_14;
    MR_Word Var_15;
    MR_Box conv1_STATE_VARIABLE_InstmapDelta_13;

    hlds__instmap__instmap_delta_to_assoc_list_2_p_0(OldInstmapDelta_5, &VarInsts_7);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&STATE_VARIABLE_InstmapDelta_14_14);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__par_loop_control__remap_instmap_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Remap_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_2[1]), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), Var_15, VarInsts_7, ((MR_Box) (STATE_VARIABLE_InstmapDelta_14_14)), &conv1_STATE_VARIABLE_InstmapDelta_13);
    *STATE_VARIABLE_InstmapDelta_13 = ((MR_Word) (conv1_STATE_VARIABLE_InstmapDelta_13));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__create_create_loop_control_goal_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word NumContextsVar_10,
  MR_Word * LCVar_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22)
{
  {
    MR_Word LCCreatePredId_15;
    MR_Integer LCCreateProcId_16;
    MR_Word GoalExpr_17;
    MR_Word GoalInfo_18;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_33;
    MR_Word Var_34;

    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "LC", LCVar_11, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20);
    hlds__vartypes__add_var_type_4_p_0(*LCVar_11, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_2[4])), STATE_VARIABLE_VarTypes_0_21, STATE_VARIABLE_VarTypes_22);
    hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_9, (MR_Word) (&transform_hlds__par_loop_control_scalar_common_3[2]), (MR_String) "lc_create", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &LCCreatePredId_15, &LCCreateProcId_16);
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (*LCVar_11));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (NumContextsVar_10));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
    }
    {
      GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_17, 0) = ((MR_Box) (LCCreatePredId_15));
      MR_hl_field(MR_mktag(2), GoalExpr_17, 1) = ((MR_Box) (LCCreateProcId_16));
      MR_hl_field(MR_mktag(2), GoalExpr_17, 2) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(2), GoalExpr_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), GoalExpr_17, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), GoalExpr_17, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[9])));
    }
    Var_33 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_27);
    Var_34 = hlds__instmap__instmap_delta_bind_var_1_f_0(*LCVar_11);
    hlds__hlds_goal__goal_info_init_5_p_0(Var_33, Var_34, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__create_inner_proc_8_p_0(
  MR_Word RecParConjIds_9,
  MR_Word OldPredProcId_10,
  MR_Word OldProcInfo_11,
  MR_Word ContainingGoalMap_12,
  MR_Word * PredProcId_13,
  MR_Word * PredSym_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58)
{
  {
    MR_Word OldPredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldPredProcId_10, (MR_Integer) 0))));
    MR_Integer OldProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OldPredProcId_10, (MR_Integer) 1))));
    MR_Word OldPredInfo_18;
    MR_Word ModuleName_19;
    MR_Word PredOrFunc_20;
    MR_Word PredSym0_21;
    MR_Integer OldProcInt_22;
    MR_Word Context_23;
    MR_Word OldOrigin_24;
    MR_Word Origin_25;
    MR_Word Markers_26;
    MR_Word TypeVarSet_27;
    MR_Word ExistQVars_28;
    MR_Word ClassConstraints_29;
    MR_Word ArgTypes0_30;
    MR_Integer ProcId_36;
    MR_Word PredId_38;
    MR_Word ArgModes0_39;
    MR_Word HeadVars0_40;
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
    MR_Word Var_60;
    MR_String Var_61;
    MR_String Var_63;
    MR_String Var_65;
    MR_Word STATE_VARIABLE_Markers_67_67;
    MR_Word STATE_VARIABLE_Markers_69_69;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word STATE_VARIABLE_PredInfo_76_76;
    MR_Word STATE_VARIABLE_PredTable_78_78;
    MR_Word STATE_VARIABLE_PredTable_79_79;
    MR_Word STATE_VARIABLE_ModuleInfo_80_80;
    MR_Word STATE_VARIABLE_VarSet_81_81;
    MR_Word STATE_VARIABLE_VarTypes_82_82;
    MR_Word STATE_VARIABLE_Body_83_83;
    MR_Word STATE_VARIABLE_VarSet_85_85;
    MR_Word Var_86;
    MR_Word STATE_VARIABLE_VarTypes_87_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word STATE_VARIABLE_Body_90_90;
    MR_Word STATE_VARIABLE_VarSet_91_91;
    MR_Word STATE_VARIABLE_VarTypes_92_92;
    MR_Word STATE_VARIABLE_Body_93_93;
    MR_Word Var_94;
    MR_Word Var_101;
    MR_Word STATE_VARIABLE_PredInfo_102_102;
    MR_Word STATE_VARIABLE_PredInfo_103_103;
    MR_Word Var_46;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_57, OldPredId_16, &OldPredInfo_18);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_57, &ModuleName_19);
    PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(OldPredInfo_18);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (PredOrFunc_20));
    }
    Var_61 = hlds__hlds_pred__pred_info_name_1_f_0(OldPredInfo_18);
    parse_tree__prog_util__make_pred_name_6_p_0(ModuleName_19, (MR_String) "LoopControl", Var_60, Var_61, (MR_Word) ((MR_Unsigned) 0U), &PredSym0_21);
    hlds__hlds_pred__proc_id_to_int_2_p_0(OldProcId_17, &OldProcInt_22);
    Var_65 = mercury__string__int_to_string_1_f_0(OldProcInt_22);
    Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_65);
    mdbcomp__sym_name__add_sym_name_suffix_3_p_0(PredSym0_21, Var_63, PredSym_14);
    hlds__hlds_pred__pred_info_get_context_2_p_0(OldPredInfo_18, &Context_23);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(OldPredInfo_18, &OldOrigin_24);
    {
      Origin_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Origin_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Origin_25, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Origin_25, 2) = ((MR_Box) (OldOrigin_24));
      MR_hl_field(MR_mktag(3), Origin_25, 3) = ((MR_Box) (OldPredId_16));
    }
    hlds__hlds_pred__init_markers_1_p_0(&STATE_VARIABLE_Markers_67_67);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 13, STATE_VARIABLE_Markers_67_67, &STATE_VARIABLE_Markers_69_69);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, STATE_VARIABLE_Markers_69_69, &Markers_26);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(OldPredInfo_18, &TypeVarSet_27);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(OldPredInfo_18, &ExistQVars_28);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(OldPredInfo_18, &ClassConstraints_29);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(OldPredInfo_18, &ArgTypes0_30);
    Var_74 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0));
    Var_75 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    hlds__hlds_pred__pred_info_create_17_p_0(ModuleName_19, *PredSym_14, PredOrFunc_20, Context_23, Origin_25, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Markers_26, ArgTypes0_30, TypeVarSet_27, ExistQVars_28, ClassConstraints_29, Var_74, Var_75, (MR_Word) (&transform_hlds__par_loop_control_scalar_common_3[0]), OldProcInfo_11, &ProcId_36, &STATE_VARIABLE_PredInfo_76_76);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_57, &STATE_VARIABLE_PredTable_78_78);
    hlds__pred_table__predicate_table_insert_4_p_0(STATE_VARIABLE_PredInfo_76_76, &PredId_38, STATE_VARIABLE_PredTable_78_78, &STATE_VARIABLE_PredTable_79_79);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(STATE_VARIABLE_PredTable_79_79, STATE_VARIABLE_ModuleInfo_0_57, &STATE_VARIABLE_ModuleInfo_80_80);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *PredProcId_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_36));
    }
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(OldProcInfo_11, &ArgModes0_39);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(OldProcInfo_11, &HeadVars0_40);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(OldProcInfo_11, &STATE_VARIABLE_VarSet_81_81);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(OldProcInfo_11, &STATE_VARIABLE_VarTypes_82_82);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(OldProcInfo_11, &STATE_VARIABLE_Body_83_83);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "LC", &LCVar_41, STATE_VARIABLE_VarSet_81_81, &STATE_VARIABLE_VarSet_85_85);
    Var_86 = transform_hlds__par_loop_control__loop_control_var_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(LCVar_41, Var_86, STATE_VARIABLE_VarTypes_82_82, &STATE_VARIABLE_VarTypes_87_87);
    transform_hlds__par_loop_control__should_preserve_tail_recursion_2_p_0(STATE_VARIABLE_ModuleInfo_80_80, &PreserveTailRecursion_42);
    transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(STATE_VARIABLE_ModuleInfo_80_80, &WaitFreeSlotProc_43);
    transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(STATE_VARIABLE_ModuleInfo_80_80, &JoinAndTerminateProc_44);
    Var_88 = transform_hlds__par_loop_control__lc_wait_free_slot_name_0_f_0();
    Var_89 = transform_hlds__par_loop_control__lc_join_and_terminate_name_0_f_0();
    {
      Info_45 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_45, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_80_80));
      MR_hl_field(MR_mktag(0), Info_45, 1) = ((MR_Box) (LCVar_41));
      MR_hl_field(MR_mktag(0), Info_45, 2) = ((MR_Box) (OldPredProcId_10));
      MR_hl_field(MR_mktag(0), Info_45, 3) = ((MR_Box) (*PredProcId_13));
      MR_hl_field(MR_mktag(0), Info_45, 4) = ((MR_Box) (*PredSym_14));
      MR_hl_field(MR_mktag(0), Info_45, 5) = (MR_Box) ((MR_Unsigned) (PreserveTailRecursion_42));
      MR_hl_field(MR_mktag(0), Info_45, 6) = ((MR_Box) (WaitFreeSlotProc_43));
      MR_hl_field(MR_mktag(0), Info_45, 7) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), Info_45, 8) = ((MR_Box) (JoinAndTerminateProc_44));
      MR_hl_field(MR_mktag(0), Info_45, 9) = ((MR_Box) (Var_89));
    }
    transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0(Info_45, RecParConjIds_9, ContainingGoalMap_12, STATE_VARIABLE_Body_83_83, &STATE_VARIABLE_Body_90_90, STATE_VARIABLE_VarSet_85_85, &STATE_VARIABLE_VarSet_91_91, STATE_VARIABLE_VarTypes_87_87, &STATE_VARIABLE_VarTypes_92_92);
    transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(Info_45, RecParConjIds_9, &Var_46, STATE_VARIABLE_Body_90_90, &STATE_VARIABLE_Body_93_93);
    {
      HeadVars_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVars_48, 0) = ((MR_Box) (LCVar_41));
      MR_hl_field(MR_mktag(1), HeadVars_48, 1) = ((MR_Box) (HeadVars0_40));
    }
    Var_94 = transform_hlds__par_loop_control__loop_control_var_type_0_f_0();
    {
      ArgTypes_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgTypes_49, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(1), ArgTypes_49, 1) = ((MR_Box) (ArgTypes0_30));
    }
    {
      ArgModes_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgModes_52, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_1[4]));
      MR_hl_field(MR_mktag(1), ArgModes_52, 1) = ((MR_Box) (ArgModes0_39));
    }
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(OldProcInfo_11, &InstVarSet_53);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(OldProcInfo_11, &RttiVarMaps_54);
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(OldProcInfo_11, &Detism_55);
    Var_101 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    hlds__hlds_pred__proc_info_create_15_p_0(Context_23, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_VarSet_91_91, STATE_VARIABLE_VarTypes_92_92, HeadVars_48, InstVarSet_53, ArgModes_52, (MR_Integer) 2, Detism_55, STATE_VARIABLE_Body_93_93, RttiVarMaps_54, (MR_Integer) 1, (MR_Integer) 0, Var_101, &ProcInfo_56);
    hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_27, ExistQVars_28, ArgTypes_49, STATE_VARIABLE_PredInfo_76_76, &STATE_VARIABLE_PredInfo_102_102);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_36, ProcInfo_56, STATE_VARIABLE_PredInfo_102_102, &STATE_VARIABLE_PredInfo_103_103);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_38, STATE_VARIABLE_PredInfo_103_103, STATE_VARIABLE_ModuleInfo_80_80, STATE_VARIABLE_ModuleInfo_58);
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__get_lc_join_and_terminate_proc_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word PredId_4;
    MR_Integer ProcId_5;

    hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_3, (MR_Word) (&transform_hlds__par_loop_control_scalar_common_3[2]), (MR_String) "lc_join_and_terminate", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &PredId_4, &ProcId_5);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_5));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_join_and_terminate_name_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[8]));
}

static void MR_CALL 
transform_hlds__par_loop_control__get_lc_wait_free_slot_proc_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word PredId_4;
    MR_Integer ProcId_5;

    hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_3, (MR_Word) (&transform_hlds__par_loop_control_scalar_common_3[2]), (MR_String) "lc_wait_free_slot", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &PredId_4, &ProcId_5);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_5));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__par_loop_control__lc_wait_free_slot_name_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[7]));
}

static MR_Word MR_CALL 
transform_hlds__par_loop_control__loop_control_var_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_2[4]));
}

static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__goal_util__goal_calls_2_p_0((env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11, (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Callee_15);
    (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__succeeded)
      transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s * env_ptr = (struct transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 3))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 2))));
          MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 9))));
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 8))));
          MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 7))));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 6))));
          MR_Word Var_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 1);
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 4))));
          MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 1))));
          MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 0))));
          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__HeadVar__1_1, (MR_Integer) 5)));

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
}

static void MR_CALL 
transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
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

      (env).transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0_env_0__Conj0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      Conjs0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Conj_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Conjs_14));
      }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Case_12;
    MR_Word conv0_FixupGoalInfo_9;

    transform_hlds__par_loop_control__case_update_non_loop_control_paths_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Case_12, &conv0_FixupGoalInfo_9);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Case_12));
    *wrapper_arg_3 = ((MR_Box) (conv0_FixupGoalInfo_9));
  }
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1133__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__par_loop_control__IntroducedFrom__pred__goal_update_non_loop_control_paths__1144__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_194;
      MR_Word Var_195;
      MR_Word Var_196;
      MR_Word Var_197;
      MR_Word Var_198;
      MR_Word Var_199;
      MR_Word Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1))));
      MR_Word Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0))));
      MR_Unsigned packed_word_0;

      (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2))));
      (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3))));
      Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
      Var_198 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5))) & (MR_Integer) 1);
      Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6))));
      Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7))));
      Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8))));
      Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9))));
      (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_106, (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Var_201);
      if (!((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded))
        (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_106, (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Var_200);
      if ((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded)
        transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s * env_ptr = (struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__commit_0) == 0)
      {
        hlds__goal_util__goal_calls_2_p_1((env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, &(env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Callee_106, transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_2, env_ptr);
        (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0(
  MR_Word Info_6,
  MR_Word RecParConjIds_7,
  MR_Word * FixupGoalInfo_8,
  MR_Word STATE_VARIABLE_Goal_0_70,
  MR_Word * STATE_VARIABLE_Goal_71)
{
  {
    struct transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0_s env;

    (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6 = Info_6;
    (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70 = STATE_VARIABLE_Goal_0_70;
    {
      MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 1))));
      MR_Word GoalId_11;
      MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 0))));

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
          MR_Word STATE_VARIABLE_Goal_74_74;

          hlds__hlds_goal__goal_to_conj_list_2_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, &Conjs0_13);
          transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, &FinishLCGoal_14);
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (FinishLCGoal_14));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Conjs_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_13, Var_72);
          hlds__hlds_goal__conj_list_to_goal_3_p_0(Conjs_15, GoalInfo0_10, &STATE_VARIABLE_Goal_74_74);
          transform_hlds__par_loop_control__fixup_goal_info_3_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, STATE_VARIABLE_Goal_74_74, STATE_VARIABLE_Goal_71);
          *FixupGoalInfo_8 = (MR_Integer) 0;
        }
        else
        {
          MR_Word GoalExpr0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 0))));
          MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__STATE_VARIABLE_Goal_0_70, (MR_Integer) 1))));
          MR_Word GoalExpr_47;
          MR_Word STATE_VARIABLE_Goal_97_97;

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
                MR_Word PredId_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 0))));
                MR_Integer ProcId_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 1))));
                MR_Word Args0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 2))));
                MR_Word Builtin_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 3))) & (MR_Integer) 1);
                MR_Word MaybeContext_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 4))));
                MR_Word RecPredProcId_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2))));
                MR_Word InnerPredId_42;
                MR_Integer InnerProcId_43;
                MR_Word LCVar_44;
                MR_Word Args_45;
                MR_Word SymName_46;
                MR_Word Var_90;
                MR_Word Var_93;
                MR_Word Var_94;
                MR_Word _SymName0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 5))));
                MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 3)));
                MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0))));
                MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1))));
                MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3))));
                MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4))));
                MR_Word Var_136 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5))) & (MR_Integer) 1);
                MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6))));
                MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7))));
                MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8))));
                MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9))));
                MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
                MR_Word Var_141;
                MR_Word Var_143;
                MR_Word Var_145;
                MR_Word Var_146;
                MR_Word Var_147;
                MR_Word Var_148;
                MR_Word Var_149;
                MR_Unsigned packed_word_4;

                {
                  Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (PredId_35));
                  MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (ProcId_36));
                }
                {
                  Var_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_7[1]));
                  MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (RecPredProcId_41));
                  MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (Var_93));
                }
                mercury__require__expect_3_p_0(Var_90, (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "Expected recursive call");
                Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0))));
                LCVar_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1))));
                Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2))));
                Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3))));
                SymName_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4))));
                packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
                Var_145 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5))) & (MR_Integer) 1);
                Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6))));
                Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7))));
                Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8))));
                Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9))));
                InnerPredId_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_94, (MR_Integer) 0))));
                InnerProcId_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_94, (MR_Integer) 1))));
                {
                  Args_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Args_45, 0) = ((MR_Box) (LCVar_44));
                  MR_hl_field(MR_mktag(1), Args_45, 1) = ((MR_Box) (Args0_37));
                }
                {
                  GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), GoalExpr_47, 0) = ((MR_Box) (InnerPredId_42));
                  MR_hl_field(MR_mktag(2), GoalExpr_47, 1) = ((MR_Box) (InnerProcId_43));
                  MR_hl_field(MR_mktag(2), GoalExpr_47, 2) = ((MR_Box) (Args_45));
                  MR_hl_field(MR_mktag(2), GoalExpr_47, 3) = (MR_Box) ((MR_Unsigned) (Builtin_38));
                  MR_hl_field(MR_mktag(2), GoalExpr_47, 4) = ((MR_Box) (MaybeContext_39));
                  MR_hl_field(MR_mktag(2), GoalExpr_47, 5) = ((MR_Box) (SymName_46));
                }
                *FixupGoalInfo_8 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 0))))) {
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
                    MR_Word ConjType_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Var_86;
                    MR_Word Conjs0_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
                    MR_Word Conjs_108;
                    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1)));

                    {
                      Var_86 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_7[0]));
                      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_4));
                      MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (ConjType_48));
                      MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_86, (MR_String) "predicate \140transform_hlds.par_loop_control.goal_update_non_loop_control_paths\'/5", (MR_String) "parallel conjunction");
                    transform_hlds__par_loop_control__conj_update_non_loop_control_paths_5_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, RecParConjIds_7, FixupGoalInfo_8, Conjs0_107, &Conjs_108);
                    {
                      GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 1) = (MR_Box) ((MR_Unsigned) (ConjType_48));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 2) = ((MR_Box) (Conjs_108));
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
                    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
                    MR_Word CanFail_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))) & (MR_Integer) 1);
                    MR_Word Cases0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 3))));
                    MR_Word Cases_53;
                    MR_Word FixupGoalInfos_54;
                    MR_Word Var_83;
                    MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2)));

                    {
                      Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_8[0]));
                      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_6));
                      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) ((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6));
                      MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) (RecParConjIds_7));
                    }
                    mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), Var_83, Cases0_52, &Cases_53, &FixupGoalInfos_54);
                    transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(FixupGoalInfos_54, FixupGoalInfo_8);
                    {
                      GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 1) = ((MR_Box) (Var_50));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 2) = (MR_Box) ((MR_Unsigned) (CanFail_51));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 3) = ((MR_Box) (Cases_53));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Reason_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
                    MR_Word SubGoal0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
                    MR_Word SubGoal_58;

                    transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, RecParConjIds_7, FixupGoalInfo_8, SubGoal0_57, &SubGoal_58);
                    {
                      GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 1) = ((MR_Box) (Reason_56));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 2) = ((MR_Box) (SubGoal_58));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word ExistVars_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
                    MR_Word Cond_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
                    MR_Word Then0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 3))));
                    MR_Word Else0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 4))));
                    MR_Word FixupGoalInfoThen_63;
                    MR_Word Then_64;
                    MR_Word FixupGoalInfoElse_65;
                    MR_Word Else_66;
                    MR_Word Var_78;
                    MR_Word Var_79;

                    transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, RecParConjIds_7, &FixupGoalInfoThen_63, Then0_61, &Then_64);
                    transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0((env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, RecParConjIds_7, &FixupGoalInfoElse_65, Else0_62, &Else_66);
                    {
                      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (FixupGoalInfoElse_65));
                      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (FixupGoalInfoThen_63));
                      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_79));
                    }
                    transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(Var_78, FixupGoalInfo_8);
                    {
                      GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 1) = ((MR_Box) (ExistVars_59));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 2) = ((MR_Box) (Cond_60));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 3) = ((MR_Box) (Then_64));
                      MR_hl_field(MR_mktag(3), GoalExpr_47, 4) = ((MR_Box) (Else_66));
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
            STATE_VARIABLE_Goal_97_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_97_97, 0) = ((MR_Box) (GoalExpr_47));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_97_97, 1) = ((MR_Box) (Var_17));
          }
          switch (*FixupGoalInfo_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_Goal_71 = STATE_VARIABLE_Goal_97_97;
              break;
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_NonLocals_99_99;
                MR_Word Var_100;
                MR_Word STATE_VARIABLE_NonLocals_101_101;
                MR_Word STATE_VARIABLE_GoalInfo_102_102;
                MR_Word STATE_VARIABLE_GoalInfo_104_104;
                MR_Word Var_171;
                MR_Word Var_172;
                MR_Word Var_173;
                MR_Word Var_174;
                MR_Word Var_175;
                MR_Word Var_176;
                MR_Word Var_177;
                MR_Word Var_178;
                MR_Word Var_179;
                MR_Unsigned packed_word_6;
                MR_Word Var_180;
                MR_Word Var_181;

                STATE_VARIABLE_NonLocals_99_99 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(Var_17);
                Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 0))));
                Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 1))));
                Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 2))));
                Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 3))));
                Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 4))));
                packed_word_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5)));
                Var_175 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 5))) & (MR_Integer) 1);
                Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 6))));
                Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 7))));
                Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 8))));
                Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__par_loop_control__goal_update_non_loop_control_paths_5_p_0_env_0__Info_6, (MR_Integer) 9))));
                parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_100, STATE_VARIABLE_NonLocals_99_99, &STATE_VARIABLE_NonLocals_101_101);
                hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(STATE_VARIABLE_NonLocals_101_101, Var_17, &STATE_VARIABLE_GoalInfo_102_102);
                hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_GoalInfo_102_102, &STATE_VARIABLE_GoalInfo_104_104);
                Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_97_97, (MR_Integer) 0))));
                Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_97_97, (MR_Integer) 1))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Goal_71 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_180));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_104_104));
                }
              }
              break;
          }
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
  {
    MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word LCVar_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_GoalInfo_11_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_NonLocals_12_12;
    MR_Word STATE_VARIABLE_NonLocals_13_13;
    MR_Word STATE_VARIABLE_GoalInfo_14_14;
    MR_Word STATE_VARIABLE_GoalInfo_16_16;

    STATE_VARIABLE_NonLocals_12_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_11_11);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_10, STATE_VARIABLE_NonLocals_12_12, &STATE_VARIABLE_NonLocals_13_13);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(STATE_VARIABLE_NonLocals_13_13, STATE_VARIABLE_GoalInfo_11_11, &STATE_VARIABLE_GoalInfo_14_14);
    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_GoalInfo_14_14, &STATE_VARIABLE_GoalInfo_16_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_16_16));
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__create_finish_loop_control_goal_2_p_0(
  MR_Word Info_3,
  MR_Word * Goal_4)
{
  {
    MR_Word PredId_5;
    MR_Integer ProcId_6;
    MR_Word LCVar_7;
    MR_Word GoalExpr_8;
    MR_Word NonLocals_9;
    MR_Word InstmapDelta_10;
    MR_Word GoalInfo_11;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_13;

    hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(Var_12, (MR_Word) (&transform_hlds__par_loop_control_scalar_common_3[2]), (MR_String) "lc_finish", (MR_Integer) 0, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &PredId_5, &ProcId_6);
    LCVar_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (LCVar_7));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_8, 0) = ((MR_Box) (PredId_5));
      MR_hl_field(MR_mktag(2), GoalExpr_8, 1) = ((MR_Box) (ProcId_6));
      MR_hl_field(MR_mktag(2), GoalExpr_8, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(2), GoalExpr_8, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), GoalExpr_8, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), GoalExpr_8, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__par_loop_control_scalar_common_1[5])));
    }
    NonLocals_9 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_13);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstmapDelta_10);
    GoalInfo_11 = hlds__hlds_goal__impure_init_goal_info_3_f_0(NonLocals_9, InstmapDelta_10, (MR_Integer) 0);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
    }
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goals_fixup_goal_info_2_p_0(
  MR_Word List_3,
  MR_Word * Fixup_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_fixup_goal_info_0), List_3, ((MR_Box) ((MR_Integer) 0)));
    if (succeeded)
      *Fixup_4 = (MR_Integer) 0;
    else
      *Fixup_4 = (MR_Integer) 1;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Goal_49;
    MR_Word conv2_STATE_VARIABLE_VarSet_51;
    MR_Word conv1_STATE_VARIABLE_VarTypes_53;

    transform_hlds__par_loop_control__goal_loop_control_one_recursive_path_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Goal_49, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_VarSet_51, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_VarTypes_53);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Goal_49));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_51));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_VarTypes_53));
  }
}

static MR_Box MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0(
  MR_Word Info_10,
  MR_Word GoalIds_11,
  MR_Word ContainingGoalMap_12,
  MR_Word STATE_VARIABLE_Goal_0_17,
  MR_Word * STATE_VARIABLE_Goal_18,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22)
{
  {
    MR_Word GoalPaths_16;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Box conv6_STATE_VARIABLE_Goal_18;
    MR_Box conv5_STATE_VARIABLE_VarSet_20;
    MR_Box conv4_STATE_VARIABLE_VarTypes_22;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (ContainingGoalMap_12));
    }
    GoalPaths_16 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0), Var_23, GoalIds_11);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_loop_control_all_recursive_paths_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Info_10));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_1[1]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_24, GoalPaths_16, ((MR_Box) (STATE_VARIABLE_Goal_0_17)), &conv6_STATE_VARIABLE_Goal_18, ((MR_Box) (STATE_VARIABLE_VarSet_0_19)), &conv5_STATE_VARIABLE_VarSet_20, ((MR_Box) (STATE_VARIABLE_VarTypes_0_21)), &conv4_STATE_VARIABLE_VarTypes_22);
    *STATE_VARIABLE_Goal_18 = ((MR_Word) (conv6_STATE_VARIABLE_Goal_18));
    *STATE_VARIABLE_VarSet_20 = ((MR_Word) (conv5_STATE_VARIABLE_VarSet_20));
    *STATE_VARIABLE_VarTypes_22 = ((MR_Word) (conv4_STATE_VARIABLE_VarTypes_22));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__should_preserve_tail_recursion_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * PreserveTailRecursion_4)
{
  {
    MR_Word Globals_5;
    MR_Word PreserveTailRecursionBool_6;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_5);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 723, &PreserveTailRecursionBool_6);
    switch (PreserveTailRecursionBool_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *PreserveTailRecursion_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        *PreserveTailRecursion_4 = (MR_Integer) 0;
        break;
    }
  }
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
      MR_Word Conj_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Conjs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
      MR_Word Head_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjs_6, (MR_Integer) 0))));
      MR_Word Tail_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjs_6, (MR_Integer) 1))));

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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_SeenUsableRecursion_8;

    transform_hlds__par_loop_control__case_get_loop_control_par_conjs_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_SeenUsableRecursion_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_SeenUsableRecursion_8));
  }
}

static void MR_CALL 
transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(
  MR_Word Goal_4,
  MR_Word SelfPredProcId_5,
  MR_Word * SeenUsableRecursion_6)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));
    MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));
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
            MR_Word SeenUsableRecursion0_92;

            transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(SubGoal_43, SelfPredProcId_5, &SeenUsableRecursion0_92);
            switch (MR_tag((MR_Word) SeenUsableRecursion0_92)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(SeenUsableRecursion0_92)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    *SeenUsableRecursion_6 = SeenUsableRecursion0_92;
                    break;
                  case (MR_Integer) 1:
                    switch (Detism_9) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 4:
                      case (MR_Integer) 0:
                        *SeenUsableRecursion_6 = SeenUsableRecursion0_92;
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
                    *SeenUsableRecursion_6 = SeenUsableRecursion0_92;
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
            MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
            MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
            MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelfPredProcId_5, (MR_Integer) 0))));
            MR_Integer Var_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SelfPredProcId_5, (MR_Integer) 1))));

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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Conjs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

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
                        MR_Word Head_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjs_36, (MR_Integer) 0))));
                        MR_Word Tail_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjs_36, (MR_Integer) 1))));
                        MR_Word SeenUsableRecursion0_74;

                        transform_hlds__par_loop_control__par_conj_get_loop_control_par_conjs_lag_4_p_0(Head_72, Tail_73, SelfPredProcId_5, &SeenUsableRecursion0_74);
                        switch (MR_tag((MR_Word) SeenUsableRecursion0_74)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(SeenUsableRecursion0_74)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *SeenUsableRecursion_6 = SeenUsableRecursion0_74;
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word Var_76;
                                  MR_Word SeenUsableRecursion0_98;

                                  {
                                    Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (GoalId_37));
                                    MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                  }
                                  {
                                    SeenUsableRecursion0_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), SeenUsableRecursion0_98, 0) = ((MR_Box) (Var_76));
                                  }
                                  switch (Detism_9) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 4:
                                    case (MR_Integer) 0:
                                      *SeenUsableRecursion_6 = SeenUsableRecursion0_98;
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
                      MR_Word SeenUsableRecursion0_97;

                      transform_hlds__par_loop_control__conj_get_loop_control_par_conjs_4_p_0(Conjs_36, SelfPredProcId_5, (MR_Word) ((MR_Unsigned) 0U), &SeenUsableRecursion0_97);
                      switch (MR_tag((MR_Word) SeenUsableRecursion0_97)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(SeenUsableRecursion0_97)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                            case (MR_Integer) 2:
                              *SeenUsableRecursion_6 = SeenUsableRecursion0_97;
                              break;
                            case (MR_Integer) 1:
                              switch (Detism_9) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 4:
                                case (MR_Integer) 0:
                                  *SeenUsableRecursion_6 = SeenUsableRecursion0_97;
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
                              *SeenUsableRecursion_6 = SeenUsableRecursion0_97;
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
                succeeded = hlds__goal_util__goal_calls_2_p_0(Goal_4, SelfPredProcId_5);
                if (succeeded)
                  *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 8U);
                else
                  *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                MR_Word SeenUsableRecursionCases_42;
                MR_Word Var_57;

                {
                  Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (SelfPredProcId_5));
                }
                mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0), Var_57, Cases_41, &SeenUsableRecursionCases_42);
                if ((SeenUsableRecursionCases_42 == (MR_Word) ((MR_Unsigned) 0U)))
                  *SeenUsableRecursion_6 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Word Seen_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SeenUsableRecursionCases_42, (MR_Integer) 0))));
                  MR_Word Seens_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SeenUsableRecursionCases_42, (MR_Integer) 1))));
                  MR_Word SeenUsableRecursion0_102;
                  MR_Box conv2_SeenUsableRecursion0_102;

                  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0), (MR_Word) (&transform_hlds__par_loop_control__transform_hlds__par_loop_control__type_ctor_info_seen_usable_recursion_0), (MR_Word) (&transform_hlds__par_loop_control_scalar_common_2[3]), Seens_81, ((MR_Box) (Seen_80)), &conv2_SeenUsableRecursion0_102);
                  SeenUsableRecursion0_102 = ((MR_Word) (conv2_SeenUsableRecursion0_102));
                  switch (MR_tag((MR_Word) SeenUsableRecursion0_102)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(SeenUsableRecursion0_102)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 2:
                          *SeenUsableRecursion_6 = SeenUsableRecursion0_102;
                          break;
                        case (MR_Integer) 1:
                          switch (Detism_9) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 4:
                            case (MR_Integer) 0:
                              *SeenUsableRecursion_6 = SeenUsableRecursion0_102;
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
                          *SeenUsableRecursion_6 = SeenUsableRecursion0_102;
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
                MR_Word SubGoal_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                MR_Word SeenUsableRecursion0_94;

                transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(SubGoal_59, SelfPredProcId_5, &SeenUsableRecursion0_94);
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
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                MR_Word Then_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                MR_Word Else_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
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
                          MR_Word SeenUsableRecursion0_91;

                          transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(Then_47, SelfPredProcId_5, &SeenUsableRecursionThen_50);
                          transform_hlds__par_loop_control__goal_get_loop_control_par_conjs_3_p_0(Else_48, SelfPredProcId_5, &SeenUsableRecursionElse_51);
                          transform_hlds__par_loop_control__merge_loop_control_par_conjs_between_branches_3_p_0(SeenUsableRecursionThen_50, SeenUsableRecursionElse_51, &SeenUsableRecursion0_91);
                          switch (MR_tag((MR_Word) SeenUsableRecursion0_91)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(SeenUsableRecursion0_91)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                case (MR_Integer) 2:
                                  *SeenUsableRecursion_6 = SeenUsableRecursion0_91;
                                  break;
                                case (MR_Integer) 1:
                                  switch (Detism_9) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 4:
                                    case (MR_Integer) 0:
                                      *SeenUsableRecursion_6 = SeenUsableRecursion0_91;
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
                                  *SeenUsableRecursion_6 = SeenUsableRecursion0_91;
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
        MR_Word GoalIdsA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

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
              MR_Word GoalIdsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Seen0_2, (MR_Integer) 0))));
              MR_Word GoalIds_15;

              GoalIds_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), GoalIdsA_11, GoalIdsB_14);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GoalIds_15));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ProcInfo_20;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_22;

    transform_hlds__par_loop_control__maybe_par_loop_control_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcInfo_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_22);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcInfo_20));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_22));
  }
}

void MR_CALL 
transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_Word DepInfo_4;
    MR_Word STATE_VARIABLE_ModuleInfo_7_7;
    MR_Word Var_8;
    MR_Word Var_10;

    hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_7_7, &DepInfo_4);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__par_loop_control_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (DepInfo_4));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_8, 1) = ((MR_Box) (Var_10));
    }
    hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_8, STATE_VARIABLE_ModuleInfo_7_7, STATE_VARIABLE_ModuleInfo_6);
  }
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__par_loop_control____Unify____fixup_goal_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__par_loop_control____Compare____fixup_goal_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__par_loop_control____Unify____goal_is_last_goal_on_path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__par_loop_control____Compare____goal_is_last_goal_on_path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____loop_control_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__par_loop_control____Unify____loop_control_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____loop_control_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__par_loop_control____Compare____loop_control_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__par_loop_control____Unify____preserve_tail_recursion_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__par_loop_control____Compare____preserve_tail_recursion_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__par_loop_control____Unify____seen_usable_recursion_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__par_loop_control____Compare____seen_usable_recursion_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
