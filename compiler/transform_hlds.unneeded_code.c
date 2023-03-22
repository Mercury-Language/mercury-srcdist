/*
** Automatically generated from `unneeded_code.m'
** by the Mercury compiler,
** version 22.01.6-beta-2023-03-22
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


// :- module transform_hlds.unneeded_code.
// :- implementation.

/*
INIT mercury__transform_hlds__unneeded_code__init
ENDINIT
*/

#include "transform_hlds.unneeded_code.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
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
#include "hlds.quantification.mih"
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
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__pair__pti_pair_2__plain_transform_hlds__unneeded_code__type_ctor_info_branch_point_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_bracketed_goal_0_0[3];

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0[1];

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_bracketed_goal_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0[1];

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_bracketed_goal_0[1];

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0;

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_alts_0_1[1];

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1;

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_1[1];

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_alts_0[2];

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_alts_0[2];

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_alts_0[2];

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_point_0_0[2];

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0[1];

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_point_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0[1];

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_point_0[1];

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_location_0_0[2];

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0[1];

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_location_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0[1];

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_location_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_uc_option_values_0_0[4];

static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_uc_option_values_0_0[4];

static const MR_DuArgLocn transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_locns_uc_option_values_0_0[4];

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0[1];

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0[1];

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_unneeded_code_info_0_0[4];

static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_unneeded_code_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_unneeded_code_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0[1];

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_unneeded_code_info_0[1];

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_where_needed_0_1[1];

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1;

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_1[1];

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_where_needed_0[2];

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_where_needed_0[2];

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_where_needed_0[2];

static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unneeded_code__type_ctor_info_where_needed_0;

static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__547__1_2_p_0(
  MR_Word HeadVar__1_40,
  MR_Integer * HeadVar__2_41);

static MR_bool MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__362__1_1_p_0(
  MR_Word RefinedGoals_50);

static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__315__1_3_p_0(
  MR_Word LambdaHeadVar__1_66,
  MR_Word LambdaHeadVar__2_67,
  MR_Word * LambdaHeadVar__3_68);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(
  MR_Word _WhereNeeded0_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_109_97_110_100_95_118_97_114_95_101_118_101_114_121_119_104_101_114_101_95_95_91_49_93_95_48_2_p_0(
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__unneeded_code__undemand_var_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_6,
  MR_Word * STATE_VARIABLE_WhereNeededMap_7);

static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstMap_5,
  MR_Word Var_6);

static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstMap_5,
  MR_Word Var_6);

static void MR_CALL 
transform_hlds__unneeded_code__collect_where_needed_6_p_0(
  MR_Word ContainingGoalMap_7,
  MR_Word CurrentId_8,
  MR_Word WhereNeededMap_9,
  MR_Word ChangedVar_10,
  MR_Word STATE_VARIABLE_WhereInfo_0_13,
  MR_Word * STATE_VARIABLE_WhereInfo_14);

static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(
  MR_Word Goal_6,
  MR_Word GoalPath_7,
  MR_Integer BranchNum_8,
  MR_Word STATE_VARIABLE_RefinedGoals_0_13,
  MR_Word * STATE_VARIABLE_RefinedGoals_14);

static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(
  MR_Word Goal_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RefinedGoals_0_12,
  MR_Word * STATE_VARIABLE_RefinedGoals_13);

static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_61,
  MR_Word * STATE_VARIABLE_ProcInfo_62,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word PredId_10,
  MR_Integer Pass_11,
  MR_Word * Successful_12);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_ite_9_p_0(
  MR_Word Cond0_10,
  MR_Word * Cond_11,
  MR_Word Then0_12,
  MR_Word * Then_13,
  MR_Word Else0_14,
  MR_Word * Else_15,
  MR_Word STATE_VARIABLE_RefinedGoals_0_22,
  MR_Word * STATE_VARIABLE_RefinedGoals_23,
  MR_Word GoalId_17);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RefinedGoals_0_3,
  MR_Word * STATE_VARIABLE_RefinedGoals_4,
  MR_Word GoalId_5,
  MR_Integer BranchNum_6);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RefinedGoals_0_3,
  MR_Word * STATE_VARIABLE_RefinedGoals_4,
  MR_Word GoalId_5,
  MR_Integer BranchNum_6);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RefinedGoals_0_3,
  MR_Word * STATE_VARIABLE_RefinedGoals_4);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_RefinedGoals_0_58,
  MR_Word * STATE_VARIABLE_RefinedGoals_59);

static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_53_93_95_48_11_p_0(
  MR_Word UnneededInfo_12,
  MR_Word Goals0_13,
  MR_Word * Goals_14,
  MR_Word InitInstMap_15,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_23,
  MR_Word * STATE_VARIABLE_WhereNeededMap_24,
  MR_Word STATE_VARIABLE_RefinedGoals_0_25,
  MR_Word * STATE_VARIABLE_RefinedGoals_26,
  MR_Word STATE_VARIABLE_Changed_0_27,
  MR_Word * STATE_VARIABLE_Changed_28);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(
  MR_Word UnneededInfo_18,
  MR_Word Cond0_19,
  MR_Word * Cond_20,
  MR_Word Then0_21,
  MR_Word * Then_22,
  MR_Word Else0_23,
  MR_Word * Else_24,
  MR_Word BranchPoint_25,
  MR_Word InitInstMap_26,
  MR_Word FinalInstMap_27,
  MR_Word CurrentId_28,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_45,
  MR_Word * STATE_VARIABLE_WhereNeededMap_46,
  MR_Word STATE_VARIABLE_RefinedGoals_0_47,
  MR_Word * STATE_VARIABLE_RefinedGoals_48,
  MR_Word STATE_VARIABLE_Changed_0_49,
  MR_Word * STATE_VARIABLE_Changed_50);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(
  MR_Word UnneededInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word BranchPoint_4,
  MR_Integer BranchNum_5,
  MR_Word InitInstMap_6,
  MR_Word FinalInstMap_7,
  MR_Word CurrentId_8,
  MR_Word StartWhereNeededMap_9,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_10,
  MR_Word * STATE_VARIABLE_WhereNeededMap_11,
  MR_Word STATE_VARIABLE_RefinedGoals_0_12,
  MR_Word * STATE_VARIABLE_RefinedGoals_13,
  MR_Word STATE_VARIABLE_Changed_0_14,
  MR_Word * STATE_VARIABLE_Changed_15);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(
  MR_Word UnneededInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word InitInstMap_4,
  MR_Word FinalInstMap_5,
  MR_Word CurrentId_6,
  MR_Word StartWhereNeededMap_7,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_8,
  MR_Word * STATE_VARIABLE_WhereNeededMap_9,
  MR_Word STATE_VARIABLE_RefinedGoals_0_10,
  MR_Word * STATE_VARIABLE_RefinedGoals_11,
  MR_Word STATE_VARIABLE_Changed_0_12,
  MR_Word * STATE_VARIABLE_Changed_13);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(
  MR_Word UnneededInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_4,
  MR_Word * STATE_VARIABLE_WhereNeededMap_5,
  MR_Word STATE_VARIABLE_RefinedGoals_0_6,
  MR_Word * STATE_VARIABLE_RefinedGoals_7,
  MR_Word STATE_VARIABLE_Changed_0_8,
  MR_Word * STATE_VARIABLE_Changed_9);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(
  MR_Word UnneededInfo_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word InitInstMap_15,
  MR_Word FinalInstMap_16,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_88,
  MR_Word * STATE_VARIABLE_WhereNeededMap_89,
  MR_Word STATE_VARIABLE_RefinedGoals_0_90,
  MR_Word * STATE_VARIABLE_RefinedGoals_91,
  MR_Word STATE_VARIABLE_Changed_0_92,
  MR_Word * STATE_VARIABLE_Changed_93);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(
  MR_Word UnneededInfo_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word InitInstMap_15,
  MR_Word FinalInstMap_16,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_31,
  MR_Word * STATE_VARIABLE_WhereNeededMap_32,
  MR_Word STATE_VARIABLE_RefinedGoals_0_33,
  MR_Word * STATE_VARIABLE_RefinedGoals_34,
  MR_Word STATE_VARIABLE_Changed_0_35,
  MR_Word * STATE_VARIABLE_Changed_36);

static void MR_CALL 
transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InitInstMap_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(
  MR_Word ContainingGoalMap_6,
  MR_Word CurrentId_7,
  MR_Word WhereNeededMap1_8,
  MR_Word WhereNeededMap2_9,
  MR_Word * WhereNeededMap_10);

static void MR_CALL 
transform_hlds__unneeded_code__add_alt_start_7_p_0(
  MR_Word ContainingGoalMap_1,
  MR_Word HeadVar__2_2,
  MR_Word BranchPoint_3,
  MR_Integer BranchNum_4,
  MR_Word CurrentId_5,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_6,
  MR_Word * STATE_VARIABLE_WhereNeededMap_7);

static void MR_CALL 
transform_hlds__unneeded_code__add_where_needed_list_5_p_0(
  MR_Word ContainingGoalMap_1,
  MR_Word HeadVar__2_2,
  MR_Word CurrentId_3,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_4,
  MR_Word * STATE_VARIABLE_WhereNeededMap_5);

static void MR_CALL 
transform_hlds__unneeded_code__demand_var_6_p_0(
  MR_Word ContainingGoalMap_7,
  MR_Word CurrentId_8,
  MR_Word WhereNeeded_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_14,
  MR_Word * STATE_VARIABLE_WhereNeededMap_15);

static void MR_CALL 
transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(
  MR_Word ContainingGoalMap_1,
  MR_Word CurrentId_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
transform_hlds__unneeded_code__get_parent_branch_point_6_p_0(
  MR_Word ContainingGoalMap_7,
  MR_Word GoalId_8,
  MR_Word * BranchGoalId_9,
  MR_Word * BranchArmGoalId_10,
  MR_Word * BranchAlt_11,
  MR_Integer * BranchNum_12);

static void MR_CALL 
transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0(
  MR_Word Goal_6,
  MR_Word ModuleInfo_7,
  MR_Word InstMap_8,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_15,
  MR_Word * STATE_VARIABLE_WhereNeededMap_16);

static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0(
  MR_Word UnneededInfo_7,
  MR_Word Goal_8,
  MR_Word InitInstMap_9,
  MR_Word WhereNeeded_10,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_20,
  MR_Word * STATE_VARIABLE_WhereNeededMap_21);

static MR_Box MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(
  MR_Word UnneededInfo_7,
  MR_Word Goal_8,
  MR_Word InitInstMap_9,
  MR_Word FinalInstMap_10,
  MR_Word WhereNeededMap_11,
  MR_Word * STATE_VARIABLE_WhereInfo_23);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_2[14][3];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_4[2][9];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_5[2][5];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_6[3][6];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_7[1][7];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_8[1][4];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_9[1][8];




static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_2[1])),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_4[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unneeded_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_6[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__pair__pti_pair_2__plain_transform_hlds__unneeded_code__type_ctor_info_branch_point_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_8[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_9[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__pair__pti_pair_2__plain_transform_hlds__unneeded_code__type_ctor_info_branch_point_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_bracketed_goal_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)
};

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0 = {
  (MR_String) "bracketed_goal",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_bracketed_goal_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0
};

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_bracketed_goal_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0
};

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_bracketed_goal_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_bracketed_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "bracketed_goal",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_bracketed_goal_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_bracketed_goal_0,

};

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0 = {
  (MR_String) "alt_ite",
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

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_alts_0_1[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0)
};

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1 = {
  (MR_String) "alt_switch",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_alts_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_1[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1
};

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_alts_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_alts_0[2] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0,
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1
};

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_alts_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_alts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____branch_alts_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____branch_alts_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "branch_alts",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_alts_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_alts_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_alts_0,

};

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_point_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_alts_0)
};

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0 = {
  (MR_String) "branch_point",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_point_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0
};

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_point_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0
};

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_point_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____branch_point_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____branch_point_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "branch_point",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_point_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_point_0,

};

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_location_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0 = {
  (MR_String) "location",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_location_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0
};

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_location_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0
};

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_location_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_location_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____location_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____location_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "location",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_location_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_location_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_refined_goal_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____refined_goal_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____refined_goal_map_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "refined_goal_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_uc_option_values_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_uc_option_values_0_0[4] = {
  (MR_String) "uc_fully_strict",
  (MR_String) "uc_reorder_conj",
  (MR_String) "uc_debug",
  (MR_String) "uc_copy_limit"
};

static const MR_DuArgLocn transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_locns_uc_option_values_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0 = {
  (MR_String) "uc_option_values",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_uc_option_values_0_0,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_uc_option_values_0_0,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_locns_uc_option_values_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0
};

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0
};

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_uc_option_values_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "uc_option_values",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_unneeded_code_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_uc_option_values_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0)
};

static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_unneeded_code_info_0_0[4] = {
  (MR_String) "uci_module_info",
  (MR_String) "uci_vartypes",
  (MR_String) "uci_options",
  (MR_String) "uci_containing_goal_map"
};

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0 = {
  (MR_String) "unneeded_code_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_unneeded_code_info_0_0,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_unneeded_code_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0
};

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_unneeded_code_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0
};

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_unneeded_code_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_unneeded_code_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "unneeded_code_info",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_unneeded_code_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_unneeded_code_info_0,

};

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0 = {
  (MR_String) "everywhere",
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

static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0),
    (MR_TypeInfo) (&transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_where_needed_0_1[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1 = {
  (MR_String) "branches",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_where_needed_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_1[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1
};

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_where_needed_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_where_needed_0[2] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1,
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0
};

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_where_needed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____where_needed_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____where_needed_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "where_needed",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_where_needed_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_where_needed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_where_needed_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_branches_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____where_needed_branches_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____where_needed_branches_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "where_needed_branches",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unneeded_code__type_ctor_info_where_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____where_needed_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____where_needed_map_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "where_needed_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unneeded_code__type_ctor_info_where_needed_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__547__1_2_p_0(
  MR_Word HeadVar__1_40,
  MR_Integer * HeadVar__2_41)
{
  mercury__set__count_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_40, HeadVar__2_41);
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__362__1_1_p_0(
  MR_Word RefinedGoals_50)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), RefinedGoals_50);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__315__1_3_p_0(
  MR_Word LambdaHeadVar__1_66,
  MR_Word LambdaHeadVar__2_67,
  MR_Word * LambdaHeadVar__3_68)
{
  mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), ((MR_Box) (LambdaHeadVar__1_66)), ((MR_Box) ((MR_Unsigned) 0U)), LambdaHeadVar__2_67, LambdaHeadVar__3_68);
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
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

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          transform_hlds__unneeded_code____Compare____uc_option_values_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(
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
    {
      MR_Word TypeCtorInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeCtorInfo_14_14 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = transform_hlds__unneeded_code____Unify____uc_option_values_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_15_15 = (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;
      MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_21 < Var_22);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_21 > Var_22);
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
        MR_Word SubResult2_9;
        MR_Integer Var_23 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_24 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_23 < Var_24);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_23 > Var_24);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_25 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_26 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_25 < Var_26);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_25 > Var_26);
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
          {
            succeeded = (ArgX4_13 < ArgY4_14);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX4_13 > ArgY4_14);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0(
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
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      transform_hlds__unneeded_code____Compare____branch_point_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = transform_hlds__unneeded_code____Unify____branch_point_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
        transform_hlds__unneeded_code____Compare____branch_alts_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_10 = (MR_Integer) (ArgX1_3);
      MR_Integer Var_11 = (MR_Integer) (ArgY1_4);

      succeeded = (Var_10 == Var_11);
      if (succeeded)
        succeeded = transform_hlds__unneeded_code____Unify____branch_alts_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(
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
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        hlds__instmap____Compare____instmap_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          hlds__instmap____Compare____instmap_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__instmap____Unify____instmap_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = hlds__instmap____Unify____instmap_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(
  MR_Word _WhereNeeded0_3,
  MR_Word * HeadVar__2_2)
{
  transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_109_97_110_100_95_118_97_114_95_101_118_101_114_121_119_104_101_114_101_95_95_91_49_93_95_48_2_p_0(HeadVar__2_2);
}

static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_109_97_110_100_95_118_97_114_95_101_118_101_114_121_119_104_101_114_101_95_95_91_49_93_95_48_2_p_0(
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
transform_hlds__unneeded_code__undemand_var_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_6,
  MR_Word * STATE_VARIABLE_WhereNeededMap_7)
{
  mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), ((MR_Box) (Var_4)), STATE_VARIABLE_WhereNeededMap_0_6, STATE_VARIABLE_WhereNeededMap_7);
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstMap_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word Inst_7;

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_5, Var_6, &Inst_7);
    succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_4, Inst_7);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstMap_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word Inst_7;

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_5, Var_6, &Inst_7);
    succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_4, Inst_7);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__collect_where_needed_6_p_0(
  MR_Word ContainingGoalMap_7,
  MR_Word CurrentId_8,
  MR_Word WhereNeededMap_9,
  MR_Word ChangedVar_10,
  MR_Word STATE_VARIABLE_WhereInfo_0_13,
  MR_Word * STATE_VARIABLE_WhereInfo_14)
{
  {
    MR_bool succeeded;
    MR_Word Where_12;
    MR_Box conv0_Where_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), WhereNeededMap_9, ((MR_Box) (ChangedVar_10)), &conv0_Where_12);
    if (succeeded)
    {
      Where_12 = ((MR_Word) (conv0_Where_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      if ((Where_12 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_WhereInfo_14 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word BranchesA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Where_12, (MR_Integer) 0))));

        if ((STATE_VARIABLE_WhereInfo_0_13 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_WhereInfo_14 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word BranchesB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_WhereInfo_0_13, (MR_Integer) 0))));
          MR_Word BranchesList_30;

          mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), BranchesA_23, &BranchesList_30);
          transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(ContainingGoalMap_7, CurrentId_8, BranchesList_30, BranchesB_24, STATE_VARIABLE_WhereInfo_14);
        }
      }
    else
      *STATE_VARIABLE_WhereInfo_14 = STATE_VARIABLE_WhereInfo_0_13;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(
  MR_Word Goal_6,
  MR_Word GoalPath_7,
  MR_Integer BranchNum_8,
  MR_Word STATE_VARIABLE_RefinedGoals_0_13,
  MR_Word * STATE_VARIABLE_RefinedGoals_14)
{
  {
    MR_bool succeeded;
    MR_Word Key_10;
    MR_Word Goals0_11;
    MR_Box conv0_Goals0_11;

    {
      Key_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Key_10, 0) = ((MR_Box) (GoalPath_7));
      MR_hl_field(MR_mktag(0), Key_10, 1) = ((MR_Box) (BranchNum_8));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), STATE_VARIABLE_RefinedGoals_0_13, ((MR_Box) (Key_10)), &conv0_Goals0_11);
    if (succeeded)
    {
      Goals0_11 = ((MR_Word) (conv0_Goals0_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Goals_12;

      {
        Goals_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Goals_12, 0) = ((MR_Box) (Goal_6));
        MR_hl_field(MR_mktag(1), Goals_12, 1) = ((MR_Box) (Goals0_11));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), ((MR_Box) (Key_10)), ((MR_Box) (Goals_12)), STATE_VARIABLE_RefinedGoals_0_13, STATE_VARIABLE_RefinedGoals_14);
    }
    else
    {
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Goal_6));
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), ((MR_Box) (Key_10)), ((MR_Box) (Var_16)), STATE_VARIABLE_RefinedGoals_0_13, STATE_VARIABLE_RefinedGoals_14);
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RefinedGoals_14;

    transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RefinedGoals_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RefinedGoals_14));
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(
  MR_Word Goal_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RefinedGoals_0_12,
  MR_Word * STATE_VARIABLE_RefinedGoals_13)
{
  {
    MR_Word BranchPoint_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word BranchNumSet_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word GoalPath_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BranchPoint_6, (MR_Integer) 0))));
    MR_Word BranchNums_11;
    MR_Word Var_14;
    MR_Box conv1_STATE_VARIABLE_RefinedGoals_13;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), BranchNumSet_7, &BranchNums_11);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Goal_5));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (GoalPath_9));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[3]), Var_14, BranchNums_11, ((MR_Box) (STATE_VARIABLE_RefinedGoals_0_12)), &conv1_STATE_VARIABLE_RefinedGoals_13);
    *STATE_VARIABLE_RefinedGoals_13 = ((MR_Word) (conv1_STATE_VARIABLE_RefinedGoals_13));
  }
}

void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_msg_5_p_0(
  MR_Word PredProcId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_13,
  MR_Word * STATE_VARIABLE_ProcInfo_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16)
{
  {
    MR_Word PredId_10;
    MR_Word STATE_VARIABLE_ProcInfo_20_20;
    MR_Word HeadVars_27;
    MR_Word Goal0_28;
    MR_Word VarSet0_29;
    MR_Word VarTypes0_30;
    MR_Word RttiVarMaps0_31;
    MR_Word Goal_33;
    MR_Word VarSet_34;
    MR_Word VarTypes_35;
    MR_Word RttiVarMaps_36;
    MR_Word STATE_VARIABLE_ProcInfo_17_38;
    MR_Word STATE_VARIABLE_ProcInfo_18_39;
    MR_Word STATE_VARIABLE_ProcInfo_19_40;
    MR_Word _Warnings_32;
    MR_Word _Successful_12;

    hlds__passes_aux__write_proc_progress_message_5_p_0(STATE_VARIABLE_ModuleInfo_0_15, (MR_String) "Removing dead code in", PredProcId_6);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_13, &HeadVars_27);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_13, &Goal0_28);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_13, &VarSet0_29);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_13, &VarTypes0_30);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_13, &RttiVarMaps0_31);
    hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, HeadVars_27, &_Warnings_32, Goal0_28, &Goal_33, VarSet0_29, &VarSet_34, VarTypes0_30, &VarTypes_35, RttiVarMaps0_31, &RttiVarMaps_36);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_33, STATE_VARIABLE_ProcInfo_0_13, &STATE_VARIABLE_ProcInfo_17_38);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_34, STATE_VARIABLE_ProcInfo_17_38, &STATE_VARIABLE_ProcInfo_18_39);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_35, STATE_VARIABLE_ProcInfo_18_39, &STATE_VARIABLE_ProcInfo_19_40);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_36, STATE_VARIABLE_ProcInfo_19_40, &STATE_VARIABLE_ProcInfo_20_20);
    PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0))));
    transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(STATE_VARIABLE_ProcInfo_20_20, STATE_VARIABLE_ProcInfo_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, PredId_10, (MR_Integer) 1, &_Successful_12);
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__362__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_68;

    transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__315__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_68);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_68));
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_61,
  MR_Word * STATE_VARIABLE_ProcInfo_62,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word PredId_10,
  MR_Integer Pass_11,
  MR_Word * Successful_12)
{
  {
    MR_bool succeeded;
    MR_Word ContainingGoalMap_13;
    MR_Word Goal0_14;
    MR_Word VarSet0_15;
    MR_Word VarTypes0_16;
    MR_Word InitInstMap_17;
    MR_Word GoalInfo0_19;
    MR_Word InstMapDelta_20;
    MR_Word FinalInstMap_21;
    MR_Word NeededVarsList_22;
    MR_Word WhereNeededMap0_23;
    MR_Word WhereNeededMap1_28;
    MR_Word Globals_29;
    MR_Word ReorderConj_30;
    MR_Word FullyStrict_31;
    MR_Word OptTuple_32;
    MR_Integer Limit_33;
    MR_Word Debug_34;
    MR_Word Options_35;
    MR_Word UnneededInfo_44;
    MR_Word Goal1_45;
    MR_Word RefinedGoals1_47;
    MR_Word Changed_48;
    MR_Word Goal2_49;
    MR_Word RefinedGoals_50;
    MR_Word STATE_VARIABLE_ProcInfo_65_65;
    MR_Word Var_91;
    MR_Word Var_93;
    MR_Box conv1_WhereNeededMap1_28;
    MR_Word Var_46;

    hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(STATE_VARIABLE_ModuleInfo_0_63, &ContainingGoalMap_13, STATE_VARIABLE_ProcInfo_0_61, &STATE_VARIABLE_ProcInfo_65_65);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_65_65, &Goal0_14);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_65_65, &VarSet0_15);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_65_65, &VarTypes0_16);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_63, STATE_VARIABLE_ProcInfo_65_65, &InitInstMap_17);
    GoalInfo0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_14, (MR_Integer) 1))));
    InstMapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_19);
    hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_20, InitInstMap_17, &FinalInstMap_21);
    hlds__hlds_pred__proc_info_instantiated_head_vars_3_p_0(STATE_VARIABLE_ModuleInfo_0_63, STATE_VARIABLE_ProcInfo_65_65, &NeededVarsList_22);
    mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), &WhereNeededMap0_23);
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[13]), NeededVarsList_22, ((MR_Box) (WhereNeededMap0_23)), &conv1_WhereNeededMap1_28);
    WhereNeededMap1_28 = ((MR_Word) (conv1_WhereNeededMap1_28));
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_63, &Globals_29);
    libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 209, &ReorderConj_30);
    libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 211, &FullyStrict_31);
    libs__globals__get_opt_tuple_2_p_0(Globals_29, &OptTuple_32);
    Limit_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_32, (MR_Integer) 19))));
    libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 206, &Debug_34);
    {
      Options_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Options_35, 0) = (MR_Box) (((((MR_Unsigned) (FullyStrict_31) << 2)) | (((((MR_Unsigned) (ReorderConj_30) << 1)) | (MR_Unsigned) (Debug_34)))));
      MR_hl_field(MR_mktag(0), Options_35, 1) = ((MR_Box) (Limit_33));
    }
    switch (Debug_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Stream_37;
          MR_Word PredInfo_38;
          MR_String PredName_39;
          MR_Word DebugPredNames_40;

          mercury__io__output_stream_3_p_0(&Stream_37);
          hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_63, PredId_10, &PredInfo_38);
          PredName_39 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_38);
          libs__globals__lookup_accumulating_option_3_p_0(Globals_29, (MR_Integer) 207, &DebugPredNames_40);
          if ((DebugPredNames_40 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_259;

            mercury__io__write_string_4_p_0(Stream_37, (MR_String) "% Starting unneededed code pass ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_3[0]), Pass_11, &Var_259);
            mercury__io__write_string_4_p_0(Stream_37, Var_259);
            mercury__io__write_string_4_p_0(Stream_37, (MR_String) "\n");
          }
          else
          {
            succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (PredName_39)), DebugPredNames_40);
            if (succeeded)
            {
              MR_Word OutInfo_43;
              MR_String Var_248;

              mercury__io__write_string_4_p_0(Stream_37, (MR_String) "% Starting unneededed code pass ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_3[0]), Pass_11, &Var_248);
              mercury__io__write_string_4_p_0(Stream_37, Var_248);
              mercury__io__write_string_4_p_0(Stream_37, (MR_String) "\n");
              OutInfo_43 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_29, (MR_Integer) 1);
              hlds__hlds_out__hlds_out_goal__write_goal_10_p_0(OutInfo_43, Stream_37, STATE_VARIABLE_ModuleInfo_0_63, VarSet0_15, (MR_Integer) 1, (MR_Integer) 0, (MR_String) ".\n", Goal0_14);
            }
          }
        }
        break;
    }
    {
      UnneededInfo_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnneededInfo_44, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_63));
      MR_hl_field(MR_mktag(0), UnneededInfo_44, 1) = ((MR_Box) (VarTypes0_16));
      MR_hl_field(MR_mktag(0), UnneededInfo_44, 2) = ((MR_Box) (Options_35));
      MR_hl_field(MR_mktag(0), UnneededInfo_44, 3) = ((MR_Box) (ContainingGoalMap_13));
    }
    Var_91 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]));
    transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_44, Goal0_14, &Goal1_45, InitInstMap_17, FinalInstMap_21, WhereNeededMap1_28, &Var_46, Var_91, &RefinedGoals1_47, (MR_Integer) 0, &Changed_48);
    transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Goal1_45, &Goal2_49, RefinedGoals1_47, &RefinedGoals_50);
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (RefinedGoals_50));
    }
    mercury__require__expect_3_p_0(Var_93, (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_proc\'/7", (MR_String) "goal reattachment unsuccessful");
    switch (Changed_48) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Successful_12 = (MR_Integer) 0;
          *STATE_VARIABLE_ProcInfo_62 = STATE_VARIABLE_ProcInfo_65_65;
          *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_0_63;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadVars_51;
          MR_Word InstVarSet_52;
          MR_Word RttiVarMaps0_53;
          MR_Word Goal3_55;
          MR_Word VarSet_56;
          MR_Word VarTypes_57;
          MR_Word RttiVarMaps_58;
          MR_Word Goal_59;
          MR_Word STATE_VARIABLE_ModuleInfo_98_98;
          MR_Word STATE_VARIABLE_ProcInfo_99_99;
          MR_Word STATE_VARIABLE_ProcInfo_100_100;
          MR_Word STATE_VARIABLE_ProcInfo_101_101;
          MR_Word STATE_VARIABLE_ProcInfo_102_102;
          MR_Word _Warnings_54;

          hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_65_65, &HeadVars_51);
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_65_65, &InstVarSet_52);
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_65_65, &RttiVarMaps0_53);
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, HeadVars_51, &_Warnings_54, Goal2_49, &Goal3_55, VarSet0_15, &VarSet_56, VarTypes0_16, &VarTypes_57, RttiVarMaps0_53, &RttiVarMaps_58);
          check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 1, Goal3_55, &Goal_59, VarTypes_57, InstVarSet_52, InitInstMap_17, STATE_VARIABLE_ModuleInfo_0_63, &STATE_VARIABLE_ModuleInfo_98_98);
          hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_59, STATE_VARIABLE_ProcInfo_65_65, &STATE_VARIABLE_ProcInfo_99_99);
          hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_56, STATE_VARIABLE_ProcInfo_99_99, &STATE_VARIABLE_ProcInfo_100_100);
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_57, STATE_VARIABLE_ProcInfo_100_100, &STATE_VARIABLE_ProcInfo_101_101);
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_58, STATE_VARIABLE_ProcInfo_101_101, &STATE_VARIABLE_ProcInfo_102_102);
          succeeded = (Pass_11 > (MR_Integer) 3);
          if (succeeded)
          {
            *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_98_98;
            *STATE_VARIABLE_ProcInfo_62 = STATE_VARIABLE_ProcInfo_102_102;
          }
          else
          {
            MR_Integer Var_106 = (MR_Integer) ((MR_Unsigned) Pass_11 + (MR_Unsigned) 1);
            MR_Word Var_60;

            transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(STATE_VARIABLE_ProcInfo_102_102, STATE_VARIABLE_ProcInfo_62, STATE_VARIABLE_ModuleInfo_98_98, STATE_VARIABLE_ModuleInfo_64, PredId_10, Var_106, &Var_60);
          }
          *Successful_12 = (MR_Integer) 1;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_ite_9_p_0(
  MR_Word Cond0_10,
  MR_Word * Cond_11,
  MR_Word Then0_12,
  MR_Word * Then_13,
  MR_Word Else0_14,
  MR_Word * Else_15,
  MR_Word STATE_VARIABLE_RefinedGoals_0_22,
  MR_Word * STATE_VARIABLE_RefinedGoals_23,
  MR_Word GoalId_17)
{
  {
    MR_bool succeeded;
    MR_Word Then1_18;
    MR_Word Else1_19;
    MR_Word STATE_VARIABLE_RefinedGoals_24_24;
    MR_Word STATE_VARIABLE_RefinedGoals_25_25;
    MR_Word STATE_VARIABLE_RefinedGoals_26_26;
    MR_Word STATE_VARIABLE_RefinedGoals_30_30;
    MR_Word ToInsertGoalsThen_20;
    MR_Word Var_27;
    MR_Box conv0_ToInsertGoalsThen_20;
    MR_Word ToInsertGoalsElse_21;
    MR_Word Var_32;
    MR_Box conv1_ToInsertGoalsElse_21;

    transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Cond0_10, Cond_11, STATE_VARIABLE_RefinedGoals_0_22, &STATE_VARIABLE_RefinedGoals_24_24);
    transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Then0_12, &Then1_18, STATE_VARIABLE_RefinedGoals_24_24, &STATE_VARIABLE_RefinedGoals_25_25);
    transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Else0_14, &Else1_19, STATE_VARIABLE_RefinedGoals_25_25, &STATE_VARIABLE_RefinedGoals_26_26);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (GoalId_17));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), STATE_VARIABLE_RefinedGoals_26_26, ((MR_Box) (Var_27)), &conv0_ToInsertGoalsThen_20);
    if (succeeded)
    {
      ToInsertGoalsThen_20 = ((MR_Word) (conv0_ToInsertGoalsThen_20));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Conj_48;
      MR_Word GoalInfo0_50;
      MR_Word Var_51;

      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Then1_18));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ToInsertGoalsThen_20, Var_51, &Conj_48);
      GoalInfo0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then1_18, (MR_Integer) 1))));
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_48, GoalInfo0_50, Then_13);
      mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), ((MR_Box) (Var_27)), STATE_VARIABLE_RefinedGoals_26_26, &STATE_VARIABLE_RefinedGoals_30_30);
    }
    else
    {
      *Then_13 = Then1_18;
      STATE_VARIABLE_RefinedGoals_30_30 = STATE_VARIABLE_RefinedGoals_26_26;
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (GoalId_17));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) ((MR_Integer) 2));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), STATE_VARIABLE_RefinedGoals_30_30, ((MR_Box) (Var_32)), &conv1_ToInsertGoalsElse_21);
    if (succeeded)
    {
      ToInsertGoalsElse_21 = ((MR_Word) (conv1_ToInsertGoalsElse_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Conj_57;
      MR_Word GoalInfo0_59;
      MR_Word Var_60;

      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Else1_19));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ToInsertGoalsElse_21, Var_60, &Conj_57);
      GoalInfo0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else1_19, (MR_Integer) 1))));
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_57, GoalInfo0_59, Else_15);
      mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), ((MR_Box) (Var_32)), STATE_VARIABLE_RefinedGoals_30_30, STATE_VARIABLE_RefinedGoals_23);
    }
    else
    {
      *Else_15 = Else1_19;
      *STATE_VARIABLE_RefinedGoals_23 = STATE_VARIABLE_RefinedGoals_30_30;
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RefinedGoals_0_3,
  MR_Word * STATE_VARIABLE_RefinedGoals_4,
  MR_Word GoalId_5,
  MR_Integer BranchNum_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RefinedGoals_4 = STATE_VARIABLE_RefinedGoals_0_3;
    }
    else
    {
      MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_14;
      MR_Word Goals_15;
      MR_Word Goal1_19;
      MR_Word STATE_VARIABLE_RefinedGoals_23_23;
      MR_Word STATE_VARIABLE_RefinedGoals_26_26;
      MR_Integer Var_28;
      MR_Word ToInsertGoals_20;
      MR_Word Var_24;
      MR_Box conv0_ToInsertGoals_20;

      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Goal0_12, &Goal1_19, STATE_VARIABLE_RefinedGoals_0_3, &STATE_VARIABLE_RefinedGoals_23_23);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (GoalId_5));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (BranchNum_6));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), STATE_VARIABLE_RefinedGoals_23_23, ((MR_Box) (Var_24)), &conv0_ToInsertGoals_20);
      if (succeeded)
      {
        ToInsertGoals_20 = ((MR_Word) (conv0_ToInsertGoals_20));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Conj_37;
        MR_Word GoalInfo0_39;
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Goal1_19));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ToInsertGoals_20, Var_40, &Conj_37);
        GoalInfo0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_19, (MR_Integer) 1))));
        hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_37, GoalInfo0_39, &Goal_14);
        mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), ((MR_Box) (Var_24)), STATE_VARIABLE_RefinedGoals_23_23, &STATE_VARIABLE_RefinedGoals_26_26);
      }
      else
      {
        Goal_14 = Goal1_19;
        STATE_VARIABLE_RefinedGoals_26_26 = STATE_VARIABLE_RefinedGoals_23_23;
      }
      Var_28 = (MR_Integer) ((MR_Unsigned) BranchNum_6 + (MR_Unsigned) 1);
      transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(Goals0_13, &Goals_15, STATE_VARIABLE_RefinedGoals_26_26, STATE_VARIABLE_RefinedGoals_4, GoalId_5, Var_28);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_15));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RefinedGoals_0_3,
  MR_Word * STATE_VARIABLE_RefinedGoals_4,
  MR_Word GoalId_5,
  MR_Integer BranchNum_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RefinedGoals_4 = STATE_VARIABLE_RefinedGoals_0_3;
    }
    else
    {
      MR_Word Case0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Case_14;
      MR_Word Cases_15;
      MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_12, (MR_Integer) 0))));
      MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_12, (MR_Integer) 1))));
      MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_12, (MR_Integer) 2))));
      MR_Word Goal1_22;
      MR_Word Goal_24;
      MR_Word STATE_VARIABLE_RefinedGoals_27_27;
      MR_Word STATE_VARIABLE_RefinedGoals_30_30;
      MR_Integer Var_32;
      MR_Word ToInsertGoals_23;
      MR_Word Var_28;
      MR_Box conv0_ToInsertGoals_23;

      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Goal0_21, &Goal1_22, STATE_VARIABLE_RefinedGoals_0_3, &STATE_VARIABLE_RefinedGoals_27_27);
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (GoalId_5));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (BranchNum_6));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), STATE_VARIABLE_RefinedGoals_27_27, ((MR_Box) (Var_28)), &conv0_ToInsertGoals_23);
      if (succeeded)
      {
        ToInsertGoals_23 = ((MR_Word) (conv0_ToInsertGoals_23));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Conj_41;
        MR_Word GoalInfo0_43;
        MR_Word Var_44;

        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Goal1_22));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ToInsertGoals_23, Var_44, &Conj_41);
        GoalInfo0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_22, (MR_Integer) 1))));
        hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_41, GoalInfo0_43, &Goal_24);
        mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), ((MR_Box) (Var_28)), STATE_VARIABLE_RefinedGoals_27_27, &STATE_VARIABLE_RefinedGoals_30_30);
      }
      else
      {
        Goal_24 = Goal1_22;
        STATE_VARIABLE_RefinedGoals_30_30 = STATE_VARIABLE_RefinedGoals_27_27;
      }
      {
        Case_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_14, 0) = ((MR_Box) (MainConsId_19));
        MR_hl_field(MR_mktag(0), Case_14, 1) = ((MR_Box) (OtherConsIds_20));
        MR_hl_field(MR_mktag(0), Case_14, 2) = ((MR_Box) (Goal_24));
      }
      Var_32 = (MR_Integer) ((MR_Unsigned) BranchNum_6 + (MR_Unsigned) 1);
      transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(Cases0_13, &Cases_15, STATE_VARIABLE_RefinedGoals_30_30, STATE_VARIABLE_RefinedGoals_4, GoalId_5, Var_32);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_15));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RefinedGoals_0_3,
  MR_Word * STATE_VARIABLE_RefinedGoals_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RefinedGoals_4 = STATE_VARIABLE_RefinedGoals_0_3;
    }
    else
    {
      MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadGoal_12;
      MR_Word TailGoals_13;
      MR_Word STATE_VARIABLE_RefinedGoals_18_18;
      MR_Word HeadGoals_14;
      MR_Word Var_20;
      MR_Word Var_21;

      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Goal0_8, &HeadGoal_12, STATE_VARIABLE_RefinedGoals_0_3, &STATE_VARIABLE_RefinedGoals_18_18);
      transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(Goals0_9, &TailGoals_13, STATE_VARIABLE_RefinedGoals_18_18, STATE_VARIABLE_RefinedGoals_4);
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadGoal_12, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 1))) & (MR_Integer) 1);
        HeadGoals_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 2))));
        succeeded = (Var_21 == (MR_Integer) 0);
      }
      if (succeeded)
        *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoals_14, TailGoals_13);
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadGoal_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailGoals_13));
        }
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_RefinedGoals_0_58,
  MR_Word * STATE_VARIABLE_RefinedGoals_59)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NegGoal0_51 = (MR_Word) ((MR_Word) (GoalExpr0_8));
          MR_Word NegGoal_52;
          MR_Word GoalExpr_76;

          transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(NegGoal0_51, &NegGoal_52, STATE_VARIABLE_RefinedGoals_0_58, STATE_VARIABLE_RefinedGoals_59);
          GoalExpr_76 = (MR_Word) ((MR_Word) (NegGoal_52));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_76));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Goal_6 = Goal0_5;
          *STATE_VARIABLE_RefinedGoals_59 = STATE_VARIABLE_RefinedGoals_0_58;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_6 = Goal0_5;
              *STATE_VARIABLE_RefinedGoals_59 = STATE_VARIABLE_RefinedGoals_0_58;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));

              switch (ConjType_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *Goal_6 = Goal0_5;
                    *STATE_VARIABLE_RefinedGoals_59 = STATE_VARIABLE_RefinedGoals_0_58;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Conjuncts_35;
                    MR_Word GoalExpr_36;

                    transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(Conjuncts0_34, &Conjuncts_35, STATE_VARIABLE_RefinedGoals_0_58, STATE_VARIABLE_RefinedGoals_59);
                    {
                      GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), GoalExpr_36, 1) = (MR_Box) ((MR_Unsigned) (ConjType_33));
                      MR_hl_field(MR_mktag(3), GoalExpr_36, 2) = ((MR_Box) (Conjuncts_35));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_36));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Disjuncts_43;
              MR_Word GoalExpr_72;
              MR_Word GoalId_73;

              GoalId_73 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_9);
              transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(Disjuncts0_42, &Disjuncts_43, STATE_VARIABLE_RefinedGoals_0_58, STATE_VARIABLE_RefinedGoals_59, GoalId_73, (MR_Integer) 1);
              {
                GoalExpr_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 1) = ((MR_Box) (Disjuncts_43));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_72));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word CanFail_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word GoalId_40;
              MR_Word Cases_41;
              MR_Word GoalExpr_71;

              GoalId_40 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_9);
              transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(Cases0_39, &Cases_41, STATE_VARIABLE_RefinedGoals_0_58, STATE_VARIABLE_RefinedGoals_59, GoalId_40, (MR_Integer) 1);
              {
                GoalExpr_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_71, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_71, 1) = ((MR_Box) (SwitchVar_37));
                MR_hl_field(MR_mktag(3), GoalExpr_71, 2) = (MR_Box) ((MR_Unsigned) (CanFail_38));
                MR_hl_field(MR_mktag(3), GoalExpr_71, 3) = ((MR_Box) (Cases_41));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_71));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word SomeGoal0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Var_62;

              succeeded = ((((MR_tag((MR_Word) Reason_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_53, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_53, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_62 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                *Goal_6 = Goal0_5;
                *STATE_VARIABLE_RefinedGoals_59 = STATE_VARIABLE_RefinedGoals_0_58;
              }
              else
              {
                MR_Word SomeGoal_56;
                MR_Word GoalExpr_77;

                transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(SomeGoal0_54, &SomeGoal_56, STATE_VARIABLE_RefinedGoals_0_58, STATE_VARIABLE_RefinedGoals_59);
                {
                  GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_77, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_77, 1) = ((MR_Box) (Reason_53));
                  MR_hl_field(MR_mktag(3), GoalExpr_77, 2) = ((MR_Box) (SomeGoal_56));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_77));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Quant_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Cond0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Then0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Else0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Cond_48;
              MR_Word Then_49;
              MR_Word Else_50;
              MR_Word GoalExpr_74;
              MR_Word GoalId_75;

              GoalId_75 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_9);
              transform_hlds__unneeded_code__unneeded_refine_ite_9_p_0(Cond0_45, &Cond_48, Then0_46, &Then_49, Else0_47, &Else_50, STATE_VARIABLE_RefinedGoals_0_58, STATE_VARIABLE_RefinedGoals_59, GoalId_75);
              {
                GoalExpr_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_74, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_74, 1) = ((MR_Box) (Quant_44));
                MR_hl_field(MR_mktag(3), GoalExpr_74, 2) = ((MR_Box) (Cond_48));
                MR_hl_field(MR_mktag(3), GoalExpr_74, 3) = ((MR_Box) (Then_49));
                MR_hl_field(MR_mktag(3), GoalExpr_74, 4) = ((MR_Box) (Else_50));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_74));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_refine_goal\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_53_93_95_48_11_p_0(
  MR_Word UnneededInfo_12,
  MR_Word Goals0_13,
  MR_Word * Goals_14,
  MR_Word InitInstMap_15,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_23,
  MR_Word * STATE_VARIABLE_WhereNeededMap_24,
  MR_Word STATE_VARIABLE_RefinedGoals_0_25,
  MR_Word * STATE_VARIABLE_RefinedGoals_26,
  MR_Word STATE_VARIABLE_Changed_0_27,
  MR_Word * STATE_VARIABLE_Changed_28)
{
  {
    MR_Word BracketedGoals_20;
    MR_Word RevBracketedGoals_21;
    MR_Word RevGoals_22;

    transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(Goals0_13, InitInstMap_15, &BracketedGoals_20);
    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_bracketed_goal_0), BracketedGoals_20, &RevBracketedGoals_21);
    transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(UnneededInfo_12, RevBracketedGoals_21, &RevGoals_22, STATE_VARIABLE_WhereNeededMap_0_23, STATE_VARIABLE_WhereNeededMap_24, STATE_VARIABLE_RefinedGoals_0_25, STATE_VARIABLE_RefinedGoals_26, STATE_VARIABLE_Changed_0_27, STATE_VARIABLE_Changed_28);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevGoals_22, Goals_14);
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(
  MR_Word UnneededInfo_18,
  MR_Word Cond0_19,
  MR_Word * Cond_20,
  MR_Word Then0_21,
  MR_Word * Then_22,
  MR_Word Else0_23,
  MR_Word * Else_24,
  MR_Word BranchPoint_25,
  MR_Word InitInstMap_26,
  MR_Word FinalInstMap_27,
  MR_Word CurrentId_28,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_45,
  MR_Word * STATE_VARIABLE_WhereNeededMap_46,
  MR_Word STATE_VARIABLE_RefinedGoals_0_47,
  MR_Word * STATE_VARIABLE_RefinedGoals_48,
  MR_Word STATE_VARIABLE_Changed_0_49,
  MR_Word * STATE_VARIABLE_Changed_50)
{
  {
    MR_Word CondInfo0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_19, (MR_Integer) 1))));
    MR_Word InstMapDelta_34;
    MR_Word InstMapCond_35;
    MR_Word WhereNeededMapElse_36;
    MR_Word WhereNeededMapThen_37;
    MR_Word ContainingGoalMap_38;
    MR_Word BranchNeededMap0_39;
    MR_Word WhereNeededListElse_40;
    MR_Word BranchNeededMap1_41;
    MR_Word WhereNeededListThen_42;
    MR_Word BranchNeededMap_43;
    MR_Word WhereNeededMapCond_44;
    MR_Word STATE_VARIABLE_RefinedGoals_51_51;
    MR_Word STATE_VARIABLE_Changed_52_52;
    MR_Word STATE_VARIABLE_RefinedGoals_53_53;
    MR_Word STATE_VARIABLE_Changed_54_54;
    MR_Word WhereNeededList1_70;

    InstMapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo0_33);
    hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_34, InitInstMap_26, &InstMapCond_35);
    transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_18, Else0_23, Else_24, InitInstMap_26, FinalInstMap_27, STATE_VARIABLE_WhereNeededMap_0_45, &WhereNeededMapElse_36, STATE_VARIABLE_RefinedGoals_0_47, &STATE_VARIABLE_RefinedGoals_51_51, STATE_VARIABLE_Changed_0_49, &STATE_VARIABLE_Changed_52_52);
    transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_18, Then0_21, Then_22, InstMapCond_35, FinalInstMap_27, STATE_VARIABLE_WhereNeededMap_0_45, &WhereNeededMapThen_37, STATE_VARIABLE_RefinedGoals_51_51, &STATE_VARIABLE_RefinedGoals_53_53, STATE_VARIABLE_Changed_52_52, &STATE_VARIABLE_Changed_54_54);
    ContainingGoalMap_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnneededInfo_18, (MR_Integer) 3))));
    mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), &BranchNeededMap0_39);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), WhereNeededMapElse_36, &WhereNeededListElse_40);
    transform_hlds__unneeded_code__add_alt_start_7_p_0(ContainingGoalMap_38, WhereNeededListElse_40, BranchPoint_25, (MR_Integer) 2, CurrentId_28, BranchNeededMap0_39, &BranchNeededMap1_41);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), WhereNeededMapThen_37, &WhereNeededListThen_42);
    transform_hlds__unneeded_code__add_alt_start_7_p_0(ContainingGoalMap_38, WhereNeededListThen_42, BranchPoint_25, (MR_Integer) 1, CurrentId_28, BranchNeededMap1_41, &BranchNeededMap_43);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), STATE_VARIABLE_WhereNeededMap_0_45, &WhereNeededList1_70);
    transform_hlds__unneeded_code__add_where_needed_list_5_p_0(ContainingGoalMap_38, WhereNeededList1_70, CurrentId_28, BranchNeededMap_43, &WhereNeededMapCond_44);
    transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_18, Cond0_19, Cond_20, InitInstMap_26, InstMapCond_35, WhereNeededMapCond_44, STATE_VARIABLE_WhereNeededMap_46, STATE_VARIABLE_RefinedGoals_53_53, STATE_VARIABLE_RefinedGoals_48, STATE_VARIABLE_Changed_54_54, STATE_VARIABLE_Changed_50);
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(
  MR_Word UnneededInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word BranchPoint_4,
  MR_Integer BranchNum_5,
  MR_Word InitInstMap_6,
  MR_Word FinalInstMap_7,
  MR_Word CurrentId_8,
  MR_Word StartWhereNeededMap_9,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_10,
  MR_Word * STATE_VARIABLE_WhereNeededMap_11,
  MR_Word STATE_VARIABLE_RefinedGoals_0_12,
  MR_Word * STATE_VARIABLE_RefinedGoals_13,
  MR_Word STATE_VARIABLE_Changed_0_14,
  MR_Word * STATE_VARIABLE_Changed_15)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_15 = STATE_VARIABLE_Changed_0_14;
    *STATE_VARIABLE_RefinedGoals_13 = STATE_VARIABLE_RefinedGoals_0_12;
    *STATE_VARIABLE_WhereNeededMap_11 = STATE_VARIABLE_WhereNeededMap_0_10;
  }
  else
  {
    MR_Word Case0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_35;
    MR_Word Cases_36;
    MR_Word MainConsId_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_33, (MR_Integer) 0))));
    MR_Word OtherConsIds_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_33, (MR_Integer) 1))));
    MR_Word Goal0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_33, (MR_Integer) 2))));
    MR_Word Goal_49;
    MR_Word WhereNeededMapFirst_50;
    MR_Word WhereNeededList_51;
    MR_Word ContainingGoalMap_52;
    MR_Word STATE_VARIABLE_RefinedGoals_59_59;
    MR_Word STATE_VARIABLE_Changed_60_60;
    MR_Word STATE_VARIABLE_WhereNeededMap_61_61;
    MR_Integer Var_62;

    transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_1, Goal0_48, &Goal_49, InitInstMap_6, FinalInstMap_7, StartWhereNeededMap_9, &WhereNeededMapFirst_50, STATE_VARIABLE_RefinedGoals_0_12, &STATE_VARIABLE_RefinedGoals_59_59, STATE_VARIABLE_Changed_0_14, &STATE_VARIABLE_Changed_60_60);
    {
      Case_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_35, 0) = ((MR_Box) (MainConsId_46));
      MR_hl_field(MR_mktag(0), Case_35, 1) = ((MR_Box) (OtherConsIds_47));
      MR_hl_field(MR_mktag(0), Case_35, 2) = ((MR_Box) (Goal_49));
    }
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), WhereNeededMapFirst_50, &WhereNeededList_51);
    ContainingGoalMap_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnneededInfo_1, (MR_Integer) 3))));
    transform_hlds__unneeded_code__add_alt_start_7_p_0(ContainingGoalMap_52, WhereNeededList_51, BranchPoint_4, BranchNum_5, CurrentId_8, STATE_VARIABLE_WhereNeededMap_0_10, &STATE_VARIABLE_WhereNeededMap_61_61);
    Var_62 = (MR_Integer) ((MR_Unsigned) BranchNum_5 + (MR_Unsigned) 1);
    transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(UnneededInfo_1, Cases0_34, &Cases_36, BranchPoint_4, Var_62, InitInstMap_6, FinalInstMap_7, CurrentId_8, StartWhereNeededMap_9, STATE_VARIABLE_WhereNeededMap_61_61, STATE_VARIABLE_WhereNeededMap_11, STATE_VARIABLE_RefinedGoals_59_59, STATE_VARIABLE_RefinedGoals_13, STATE_VARIABLE_Changed_60_60, STATE_VARIABLE_Changed_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_35));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_36));
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(
  MR_Word UnneededInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word InitInstMap_4,
  MR_Word FinalInstMap_5,
  MR_Word CurrentId_6,
  MR_Word StartWhereNeededMap_7,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_8,
  MR_Word * STATE_VARIABLE_WhereNeededMap_9,
  MR_Word STATE_VARIABLE_RefinedGoals_0_10,
  MR_Word * STATE_VARIABLE_RefinedGoals_11,
  MR_Word STATE_VARIABLE_Changed_0_12,
  MR_Word * STATE_VARIABLE_Changed_13)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_13 = STATE_VARIABLE_Changed_0_12;
    *STATE_VARIABLE_RefinedGoals_11 = STATE_VARIABLE_RefinedGoals_0_10;
    *STATE_VARIABLE_WhereNeededMap_9 = STATE_VARIABLE_WhereNeededMap_0_8;
  }
  else
  {
    MR_Word Goal0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_31;
    MR_Word Goals_32;
    MR_Word WhereNeededMapFirst_40;
    MR_Word WhereNeededList_41;
    MR_Word ContainingGoalMap_42;
    MR_Word STATE_VARIABLE_RefinedGoals_49_49;
    MR_Word STATE_VARIABLE_Changed_50_50;
    MR_Word STATE_VARIABLE_WhereNeededMap_51_51;

    transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_1, Goal0_29, &Goal_31, InitInstMap_4, FinalInstMap_5, StartWhereNeededMap_7, &WhereNeededMapFirst_40, STATE_VARIABLE_RefinedGoals_0_10, &STATE_VARIABLE_RefinedGoals_49_49, STATE_VARIABLE_Changed_0_12, &STATE_VARIABLE_Changed_50_50);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), WhereNeededMapFirst_40, &WhereNeededList_41);
    ContainingGoalMap_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnneededInfo_1, (MR_Integer) 3))));
    transform_hlds__unneeded_code__add_where_needed_list_5_p_0(ContainingGoalMap_42, WhereNeededList_41, CurrentId_6, STATE_VARIABLE_WhereNeededMap_0_8, &STATE_VARIABLE_WhereNeededMap_51_51);
    transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(UnneededInfo_1, Goals0_30, &Goals_32, InitInstMap_4, FinalInstMap_5, CurrentId_6, StartWhereNeededMap_7, STATE_VARIABLE_WhereNeededMap_51_51, STATE_VARIABLE_WhereNeededMap_9, STATE_VARIABLE_RefinedGoals_49_49, STATE_VARIABLE_RefinedGoals_11, STATE_VARIABLE_Changed_50_50, STATE_VARIABLE_Changed_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_31));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_32));
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(
  MR_Word UnneededInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_4,
  MR_Word * STATE_VARIABLE_WhereNeededMap_5,
  MR_Word STATE_VARIABLE_RefinedGoals_0_6,
  MR_Word * STATE_VARIABLE_RefinedGoals_7,
  MR_Word STATE_VARIABLE_Changed_0_8,
  MR_Word * STATE_VARIABLE_Changed_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Changed_9 = STATE_VARIABLE_Changed_0_8;
      *STATE_VARIABLE_RefinedGoals_7 = STATE_VARIABLE_RefinedGoals_0_6;
      *STATE_VARIABLE_WhereNeededMap_5 = STATE_VARIABLE_WhereNeededMap_0_4;
    }
    else
    {
      MR_Word BracketedGoal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BracketedGoals_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BracketedGoal_21, (MR_Integer) 0))));
      MR_Word InitInstMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BracketedGoal_21, (MR_Integer) 1))));
      MR_Word FinalInstMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BracketedGoal_21, (MR_Integer) 2))));
      MR_Word Goal1_30;
      MR_Word Goals1_31;
      MR_Word STATE_VARIABLE_WhereNeededMap_39_39;
      MR_Word STATE_VARIABLE_RefinedGoals_40_40;
      MR_Word STATE_VARIABLE_Changed_41_41;
      MR_Word Var_45;
      MR_Word Var_46;

      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_1, Goal0_27, &Goal1_30, InitInstMap_28, FinalInstMap_29, STATE_VARIABLE_WhereNeededMap_0_4, &STATE_VARIABLE_WhereNeededMap_39_39, STATE_VARIABLE_RefinedGoals_0_6, &STATE_VARIABLE_RefinedGoals_40_40, STATE_VARIABLE_Changed_0_8, &STATE_VARIABLE_Changed_41_41);
      transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(UnneededInfo_1, BracketedGoals_22, &Goals1_31, STATE_VARIABLE_WhereNeededMap_39_39, STATE_VARIABLE_WhereNeededMap_5, STATE_VARIABLE_RefinedGoals_40_40, STATE_VARIABLE_RefinedGoals_7, STATE_VARIABLE_Changed_41_41, STATE_VARIABLE_Changed_9);
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_30, (MR_Integer) 0))));
      Var_46 = hlds__make_goal__true_goal_expr_0_f_0();
      succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(Var_45, Var_46);
      if (succeeded)
        *HeadVar__3_3 = Goals1_31;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal1_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_31));
        }
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(
  MR_Word UnneededInfo_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word InitInstMap_15,
  MR_Word FinalInstMap_16,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_88,
  MR_Word * STATE_VARIABLE_WhereNeededMap_89,
  MR_Word STATE_VARIABLE_RefinedGoals_0_90,
  MR_Word * STATE_VARIABLE_RefinedGoals_91,
  MR_Word STATE_VARIABLE_Changed_0_92,
  MR_Word * STATE_VARIABLE_Changed_93)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0))));
    MR_Word GoalInfo0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NegGoal0_81 = (MR_Word) ((MR_Word) (GoalExpr0_20));
          MR_Word NegGoal_82;
          MR_Word GoalExpr_140;

          transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_12, NegGoal0_81, &NegGoal_82, InitInstMap_15, FinalInstMap_16, STATE_VARIABLE_WhereNeededMap_0_88, STATE_VARIABLE_WhereNeededMap_89, STATE_VARIABLE_RefinedGoals_0_90, STATE_VARIABLE_RefinedGoals_91, STATE_VARIABLE_Changed_0_92, STATE_VARIABLE_Changed_93);
          GoalExpr_140 = (MR_Word) ((MR_Word) (NegGoal_82));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_140));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Goal_14 = Goal0_13;
          transform_hlds__unneeded_code__demand_inputs_6_p_0(UnneededInfo_12, *Goal_14, InitInstMap_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_WhereNeededMap_0_88, STATE_VARIABLE_WhereNeededMap_89);
          *STATE_VARIABLE_RefinedGoals_91 = STATE_VARIABLE_RefinedGoals_0_90;
          *STATE_VARIABLE_Changed_93 = STATE_VARIABLE_Changed_0_92;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_14 = Goal0_13;
              transform_hlds__unneeded_code__demand_inputs_6_p_0(UnneededInfo_12, *Goal_14, InitInstMap_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_WhereNeededMap_0_88, STATE_VARIABLE_WhereNeededMap_89);
              *STATE_VARIABLE_RefinedGoals_91 = STATE_VARIABLE_RefinedGoals_0_90;
              *STATE_VARIABLE_Changed_93 = STATE_VARIABLE_Changed_0_92;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 2))));

              switch (ConjType_45) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *Goal_14 = Goal0_13;
                    transform_hlds__unneeded_code__demand_inputs_6_p_0(UnneededInfo_12, *Goal_14, InitInstMap_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_WhereNeededMap_0_88, STATE_VARIABLE_WhereNeededMap_89);
                    *STATE_VARIABLE_RefinedGoals_91 = STATE_VARIABLE_RefinedGoals_0_90;
                    *STATE_VARIABLE_Changed_93 = STATE_VARIABLE_Changed_0_92;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Conjuncts_47;
                    MR_Word GoalExpr_48;

                    transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_53_93_95_48_11_p_0(UnneededInfo_12, Conjuncts0_46, &Conjuncts_47, InitInstMap_15, STATE_VARIABLE_WhereNeededMap_0_88, STATE_VARIABLE_WhereNeededMap_89, STATE_VARIABLE_RefinedGoals_0_90, STATE_VARIABLE_RefinedGoals_91, STATE_VARIABLE_Changed_0_92, STATE_VARIABLE_Changed_93);
                    {
                      GoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), GoalExpr_48, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), GoalExpr_48, 2) = ((MR_Box) (Conjuncts_47));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_14 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_48));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1))));
              MR_Word Disjuncts_73;
              MR_Word STATE_VARIABLE_WhereNeededMap_110_110;
              MR_Word GoalExpr_135;
              MR_Word GoalId_136;

              GoalId_136 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_21);
              mercury__map__map_values_only_3_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[10]), STATE_VARIABLE_WhereNeededMap_0_88, &STATE_VARIABLE_WhereNeededMap_110_110);
              transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(UnneededInfo_12, Disjuncts0_72, &Disjuncts_73, InitInstMap_15, FinalInstMap_16, GoalId_136, STATE_VARIABLE_WhereNeededMap_110_110, STATE_VARIABLE_WhereNeededMap_110_110, STATE_VARIABLE_WhereNeededMap_89, STATE_VARIABLE_RefinedGoals_0_90, STATE_VARIABLE_RefinedGoals_91, STATE_VARIABLE_Changed_0_92, STATE_VARIABLE_Changed_93);
              {
                GoalExpr_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_135, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_135, 1) = ((MR_Box) (Disjuncts_73));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_135));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1))));
              MR_Word CanFail_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 3))));
              MR_Word ContainingGoalMap_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnneededInfo_12, (MR_Integer) 3))));
              MR_Word MaybeNumAlt_66;
              MR_Word GoalId_67;
              MR_Word BranchPoint_68;
              MR_Word BranchNeededMap0_69;
              MR_Word Cases_70;
              MR_Word BranchNeededMap_71;
              MR_Word Var_117;
              MR_Word STATE_VARIABLE_WhereNeededMap_119_119;
              MR_Word STATE_VARIABLE_WhereNeededMap_123_123;
              MR_Word GoalExpr_134;
              MR_Word MaybeNumAltPrime_65;
              MR_Word TypeCtorInfo_147_147;
              MR_Word TypeCtorInfo_148_148;
              MR_Word FirstCase0_53;
              MR_Word FirstCaseGoal0_57;
              MR_Word FirstCaseGoalInfo0_59;
              MR_Word FirstCaseGoalId0_60;
              MR_Word GoalContaining0_61;
              MR_Word FirstCaseLastStep_63;
              MR_Box conv2_GoalContaining0_61;

              succeeded = (Cases0_51 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FirstCase0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases0_51, (MR_Integer) 0))));
                FirstCaseGoal0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstCase0_53, (MR_Integer) 2))));
                FirstCaseGoalInfo0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstCaseGoal0_57, (MR_Integer) 1))));
                FirstCaseGoalId0_60 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(FirstCaseGoalInfo0_59);
                TypeCtorInfo_147_147 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
                TypeCtorInfo_148_148 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0);
                mercury__map__lookup_3_p_0(TypeCtorInfo_147_147, TypeCtorInfo_148_148, ContainingGoalMap_52, ((MR_Box) (FirstCaseGoalId0_60)), &conv2_GoalContaining0_61);
                GoalContaining0_61 = ((MR_Word) (conv2_GoalContaining0_61));
                succeeded = (GoalContaining0_61 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FirstCaseLastStep_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalContaining0_61, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) FirstCaseLastStep_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FirstCaseLastStep_63, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                    MaybeNumAltPrime_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstCaseLastStep_63, (MR_Integer) 2))));
                }
              }
              if (succeeded)
                MaybeNumAlt_66 = MaybeNumAltPrime_65;
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_goal_internal\'/11", (MR_String) "switch count");
                  return;
                }
              GoalId_67 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_21);
              {
                Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (MaybeNumAlt_66));
              }
              {
                BranchPoint_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BranchPoint_68, 0) = ((MR_Box) (GoalId_67));
                MR_hl_field(MR_mktag(0), BranchPoint_68, 1) = ((MR_Box) (Var_117));
              }
              mercury__map__map_values_only_3_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[12]), STATE_VARIABLE_WhereNeededMap_0_88, &STATE_VARIABLE_WhereNeededMap_119_119);
              mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), &BranchNeededMap0_69);
              transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(UnneededInfo_12, Cases0_51, &Cases_70, BranchPoint_68, (MR_Integer) 1, InitInstMap_15, FinalInstMap_16, GoalId_67, STATE_VARIABLE_WhereNeededMap_119_119, BranchNeededMap0_69, &BranchNeededMap_71, STATE_VARIABLE_RefinedGoals_0_90, STATE_VARIABLE_RefinedGoals_91, STATE_VARIABLE_Changed_0_92, STATE_VARIABLE_Changed_93);
              transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(ContainingGoalMap_52, GoalId_67, STATE_VARIABLE_WhereNeededMap_119_119, BranchNeededMap_71, &STATE_VARIABLE_WhereNeededMap_123_123);
              transform_hlds__unneeded_code__demand_var_6_p_0(ContainingGoalMap_52, GoalId_67, (MR_Word) ((MR_Unsigned) 0U), SwitchVar_49, STATE_VARIABLE_WhereNeededMap_123_123, STATE_VARIABLE_WhereNeededMap_89);
              {
                GoalExpr_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_134, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_134, 1) = ((MR_Box) (SwitchVar_49));
                MR_hl_field(MR_mktag(3), GoalExpr_134, 2) = (MR_Box) ((MR_Unsigned) (CanFail_50));
                MR_hl_field(MR_mktag(3), GoalExpr_134, 3) = ((MR_Box) (Cases_70));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_134));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1))));
              MR_Word SomeGoal0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 2))));
              MR_Word Var_96;

              succeeded = ((((MR_tag((MR_Word) Reason_83)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_83, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_96 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_83, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_96 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                *Goal_14 = Goal0_13;
                *STATE_VARIABLE_Changed_93 = STATE_VARIABLE_Changed_0_92;
                *STATE_VARIABLE_RefinedGoals_91 = STATE_VARIABLE_RefinedGoals_0_90;
                *STATE_VARIABLE_WhereNeededMap_89 = STATE_VARIABLE_WhereNeededMap_0_88;
              }
              else
              {
                MR_Word SomeGoal_86;
                MR_Word GoalExpr_141;

                transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_12, SomeGoal0_84, &SomeGoal_86, InitInstMap_15, FinalInstMap_16, STATE_VARIABLE_WhereNeededMap_0_88, STATE_VARIABLE_WhereNeededMap_89, STATE_VARIABLE_RefinedGoals_0_90, STATE_VARIABLE_RefinedGoals_91, STATE_VARIABLE_Changed_0_92, STATE_VARIABLE_Changed_93);
                {
                  GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_141, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_141, 1) = ((MR_Box) (Reason_83));
                  MR_hl_field(MR_mktag(3), GoalExpr_141, 2) = ((MR_Box) (SomeGoal_86));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_141));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Quant_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1))));
              MR_Word Cond0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 2))));
              MR_Word Then0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 3))));
              MR_Word Else0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 4))));
              MR_Word Cond_78;
              MR_Word Then_79;
              MR_Word Else_80;
              MR_Word STATE_VARIABLE_WhereNeededMap_105_105;
              MR_Word GoalExpr_137;
              MR_Word GoalId_138;
              MR_Word BranchPoint_139;

              GoalId_138 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_21);
              {
                BranchPoint_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BranchPoint_139, 0) = ((MR_Box) (GoalId_138));
                MR_hl_field(MR_mktag(0), BranchPoint_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__map__map_values_only_3_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[11]), STATE_VARIABLE_WhereNeededMap_0_88, &STATE_VARIABLE_WhereNeededMap_105_105);
              transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(UnneededInfo_12, Cond0_75, &Cond_78, Then0_76, &Then_79, Else0_77, &Else_80, BranchPoint_139, InitInstMap_15, FinalInstMap_16, GoalId_138, STATE_VARIABLE_WhereNeededMap_105_105, STATE_VARIABLE_WhereNeededMap_89, STATE_VARIABLE_RefinedGoals_0_90, STATE_VARIABLE_RefinedGoals_91, STATE_VARIABLE_Changed_0_92, STATE_VARIABLE_Changed_93);
              {
                GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_137, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_137, 1) = ((MR_Box) (Quant_74));
                MR_hl_field(MR_mktag(3), GoalExpr_137, 2) = ((MR_Box) (Cond_78));
                MR_hl_field(MR_mktag(3), GoalExpr_137, 3) = ((MR_Box) (Then_79));
                MR_hl_field(MR_mktag(3), GoalExpr_137, 4) = ((MR_Box) (Else_80));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_137));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_goal_internal\'/11", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RefinedGoals_13;

    transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RefinedGoals_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RefinedGoals_13));
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(
  MR_Word UnneededInfo_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word InitInstMap_15,
  MR_Word FinalInstMap_16,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_31,
  MR_Word * STATE_VARIABLE_WhereNeededMap_32,
  MR_Word STATE_VARIABLE_RefinedGoals_0_33,
  MR_Word * STATE_VARIABLE_RefinedGoals_34,
  MR_Word STATE_VARIABLE_Changed_0_35,
  MR_Word * STATE_VARIABLE_Changed_36)
{
  {
    MR_bool succeeded;
    MR_Word WhereInfo_20;
    MR_Word ModuleInfo_30;
    MR_Word STATE_VARIABLE_WhereNeededMap_49_49;
    MR_Word STATE_VARIABLE_WhereNeededMap_52_52;
    MR_Word Var_53;

    transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(UnneededInfo_12, Goal0_13, InitInstMap_15, FinalInstMap_16, STATE_VARIABLE_WhereNeededMap_0_31, &WhereInfo_20);
    if ((WhereInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
      transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(UnneededInfo_12, Goal0_13, Goal_14, InitInstMap_15, FinalInstMap_16, STATE_VARIABLE_WhereNeededMap_0_31, &STATE_VARIABLE_WhereNeededMap_49_49, STATE_VARIABLE_RefinedGoals_0_33, STATE_VARIABLE_RefinedGoals_34, STATE_VARIABLE_Changed_0_35, STATE_VARIABLE_Changed_36);
    else
    {
      MR_Word Branches_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WhereInfo_20, (MR_Integer) 0))));
      MR_Word BranchList_22;
      MR_Word Options_23;
      MR_Word Debug_24;
      MR_Word Var_38;
      MR_Box conv1_STATE_VARIABLE_RefinedGoals_34;

      transform_hlds__unneeded_code__demand_inputs_6_p_0(UnneededInfo_12, Goal0_13, InitInstMap_15, WhereInfo_20, STATE_VARIABLE_WhereNeededMap_0_31, &STATE_VARIABLE_WhereNeededMap_49_49);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), Branches_21, &BranchList_22);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Goal0_13));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[2]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[3]), Var_38, BranchList_22, ((MR_Box) (STATE_VARIABLE_RefinedGoals_0_33)), &conv1_STATE_VARIABLE_RefinedGoals_34);
      *STATE_VARIABLE_RefinedGoals_34 = ((MR_Word) (conv1_STATE_VARIABLE_RefinedGoals_34));
      *Goal_14 = hlds__make_goal__true_goal_0_f_0();
      *STATE_VARIABLE_Changed_36 = (MR_Integer) 1;
      Options_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnneededInfo_12, (MR_Integer) 2))));
      Debug_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Options_23, (MR_Integer) 0))) & (MR_Integer) 1);
      switch (Debug_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word GoalInfo0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 1))));
            MR_Integer GoalIdNum0_27;
            MR_Word Var_41;
            MR_Word Stream_29;
            MR_String Var_79;

            Var_41 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_26);
            GoalIdNum0_27 = (MR_Integer) (Var_41);
            mercury__io__output_stream_3_p_0(&Stream_29);
            mercury__io__write_string_4_p_0(Stream_29, (MR_String) "unneeded code at goal id ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_3[0]), GoalIdNum0_27, &Var_79);
            mercury__io__write_string_4_p_0(Stream_29, Var_79);
            mercury__io__write_string_4_p_0(Stream_29, (MR_String) "\n");
          }
          break;
      }
    }
    ModuleInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnneededInfo_12, (MR_Integer) 0))));
    transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0(Goal0_13, ModuleInfo_30, InitInstMap_15, STATE_VARIABLE_WhereNeededMap_49_49, &STATE_VARIABLE_WhereNeededMap_52_52);
    Var_53 = hlds__hlds_goal__goal_get_purity_1_f_0(*Goal_14);
    succeeded = (Var_53 == (MR_Integer) 2);
    if (succeeded)
      mercury__map__map_values_only_3_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[9]), STATE_VARIABLE_WhereNeededMap_52_52, STATE_VARIABLE_WhereNeededMap_32);
    else
      *STATE_VARIABLE_WhereNeededMap_32 = STATE_VARIABLE_WhereNeededMap_52_52;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InitInstMap_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InitInstMap_2);
      if (succeeded)
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
        MR_Word InstMapDelta_11;
        MR_Word FinalInstMap_12;
        MR_Word BracketedTail_13;
        MR_Word BracketedGoal_14;

        InstMapDelta_11 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_10);
        hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_11, InitInstMap_2, &FinalInstMap_12);
        transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(Goals_6, FinalInstMap_12, &BracketedTail_13);
        {
          BracketedGoal_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BracketedGoal_14, 0) = ((MR_Box) (Goal_5));
          MR_hl_field(MR_mktag(0), BracketedGoal_14, 1) = ((MR_Box) (InitInstMap_2));
          MR_hl_field(MR_mktag(0), BracketedGoal_14, 2) = ((MR_Box) (FinalInstMap_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BracketedGoal_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BracketedTail_13));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(
  MR_Word ContainingGoalMap_6,
  MR_Word CurrentId_7,
  MR_Word WhereNeededMap1_8,
  MR_Word WhereNeededMap2_9,
  MR_Word * WhereNeededMap_10)
{
  {
    MR_Word WhereNeededList1_11;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), WhereNeededMap1_8, &WhereNeededList1_11);
    transform_hlds__unneeded_code__add_where_needed_list_5_p_0(ContainingGoalMap_6, WhereNeededList1_11, CurrentId_7, WhereNeededMap2_9, WhereNeededMap_10);
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__add_alt_start_7_p_0(
  MR_Word ContainingGoalMap_1,
  MR_Word HeadVar__2_2,
  MR_Word BranchPoint_3,
  MR_Integer BranchNum_4,
  MR_Word CurrentId_5,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_6,
  MR_Word * STATE_VARIABLE_WhereNeededMap_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_WhereNeededMap_7 = STATE_VARIABLE_WhereNeededMap_0_6;
    else
    {
      MR_Word Var_16;
      MR_Word BranchWhere0_17;
      MR_Word WhereNeededList_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word BranchWhere_25;
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_WhereNeededMap_32_32;
      MR_Word OldWhere_27;
      MR_Box conv0_OldWhere_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_WhereNeededMap_0_6;

      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0))));
      BranchWhere0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1))));
      if ((BranchWhere0_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word BranchNumSet_23;
        MR_Word BranchMap_24;

        BranchNumSet_23 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (BranchNum_4)));
        BranchMap_24 = mercury__map__singleton_2_f_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), ((MR_Box) (BranchPoint_3)), ((MR_Box) (BranchNumSet_23)));
        {
          BranchWhere_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), BranchWhere_25, 0) = ((MR_Box) (BranchMap_24));
        }
      }
      else
        BranchWhere_25 = BranchWhere0_17;
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), STATE_VARIABLE_WhereNeededMap_0_6, ((MR_Box) (Var_16)), &conv0_OldWhere_27);
      if (succeeded)
      {
        OldWhere_27 = ((MR_Word) (conv0_OldWhere_27));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word CombinedWhere_28;
        MR_Word BranchesA_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BranchWhere_25, (MR_Integer) 0))));

        if ((OldWhere_27 == (MR_Word) ((MR_Unsigned) 0U)))
          CombinedWhere_28 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word BranchesB_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldWhere_27, (MR_Integer) 0))));
          MR_Word BranchesList_56;

          mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), BranchesA_49, &BranchesList_56);
          transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(ContainingGoalMap_1, CurrentId_5, BranchesList_56, BranchesB_50, &CombinedWhere_28);
        }
        mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), ((MR_Box) (Var_16)), ((MR_Box) (CombinedWhere_28)), STATE_VARIABLE_WhereNeededMap_0_6, &STATE_VARIABLE_WhereNeededMap_32_32);
      }
      else
        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), ((MR_Box) (Var_16)), ((MR_Box) (BranchWhere_25)), STATE_VARIABLE_WhereNeededMap_0_6, &STATE_VARIABLE_WhereNeededMap_32_32);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = WhereNeededList_18;
      next_value_of_STATE_VARIABLE_WhereNeededMap_0_6 = STATE_VARIABLE_WhereNeededMap_32_32;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_WhereNeededMap_0_6 = next_value_of_STATE_VARIABLE_WhereNeededMap_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__add_where_needed_list_5_p_0(
  MR_Word ContainingGoalMap_1,
  MR_Word HeadVar__2_2,
  MR_Word CurrentId_3,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_4,
  MR_Word * STATE_VARIABLE_WhereNeededMap_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_WhereNeededMap_5 = STATE_VARIABLE_WhereNeededMap_0_4;
    else
    {
      MR_Word Var_12;
      MR_Word BranchWhere_13;
      MR_Word WhereNeededList_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_WhereNeededMap_22_22;
      MR_Word OldWhere_17;
      MR_Box conv0_OldWhere_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_WhereNeededMap_0_4;

      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
      BranchWhere_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), STATE_VARIABLE_WhereNeededMap_0_4, ((MR_Box) (Var_12)), &conv0_OldWhere_17);
      if (succeeded)
      {
        OldWhere_17 = ((MR_Word) (conv0_OldWhere_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word CombinedWhere_18;

        if ((BranchWhere_13 == (MR_Word) ((MR_Unsigned) 0U)))
          CombinedWhere_18 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word BranchesA_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BranchWhere_13, (MR_Integer) 0))));

          if ((OldWhere_17 == (MR_Word) ((MR_Unsigned) 0U)))
            CombinedWhere_18 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word BranchesB_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldWhere_17, (MR_Integer) 0))));
            MR_Word BranchesList_43;

            mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), BranchesA_36, &BranchesList_43);
            transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(ContainingGoalMap_1, CurrentId_3, BranchesList_43, BranchesB_37, &CombinedWhere_18);
          }
        }
        mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), ((MR_Box) (Var_12)), ((MR_Box) (CombinedWhere_18)), STATE_VARIABLE_WhereNeededMap_0_4, &STATE_VARIABLE_WhereNeededMap_22_22);
      }
      else
        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), ((MR_Box) (Var_12)), ((MR_Box) (BranchWhere_13)), STATE_VARIABLE_WhereNeededMap_0_4, &STATE_VARIABLE_WhereNeededMap_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = WhereNeededList_14;
      next_value_of_STATE_VARIABLE_WhereNeededMap_0_4 = STATE_VARIABLE_WhereNeededMap_22_22;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_WhereNeededMap_0_4 = next_value_of_STATE_VARIABLE_WhereNeededMap_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__demand_var_6_p_0(
  MR_Word ContainingGoalMap_7,
  MR_Word CurrentId_8,
  MR_Word WhereNeeded_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_14,
  MR_Word * STATE_VARIABLE_WhereNeededMap_15)
{
  {
    MR_bool succeeded;
    MR_Word Where0_12;
    MR_Box conv0_Where0_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), STATE_VARIABLE_WhereNeededMap_0_14, ((MR_Box) (Var_10)), &conv0_Where0_12);
    if (succeeded)
    {
      Where0_12 = ((MR_Word) (conv0_Where0_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Where_13;

      if ((WhereNeeded_9 == (MR_Word) ((MR_Unsigned) 0U)))
        Where_13 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word BranchesA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WhereNeeded_9, (MR_Integer) 0))));

        if ((Where0_12 == (MR_Word) ((MR_Unsigned) 0U)))
          Where_13 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word BranchesB_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Where0_12, (MR_Integer) 0))));
          MR_Word BranchesList_36;

          mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), BranchesA_29, &BranchesList_36);
          transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(ContainingGoalMap_7, CurrentId_8, BranchesList_36, BranchesB_30, &Where_13);
        }
      }
      mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), ((MR_Box) (Var_10)), ((MR_Box) (Where_13)), STATE_VARIABLE_WhereNeededMap_0_14, STATE_VARIABLE_WhereNeededMap_15);
    }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), ((MR_Box) (Var_10)), ((MR_Box) (WhereNeeded_9)), STATE_VARIABLE_WhereNeededMap_0_14, STATE_VARIABLE_WhereNeededMap_15);
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(
  MR_Word ContainingGoalMap_1,
  MR_Word CurrentId_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar__4_4));
      }
    else
    {
      MR_Word First_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word BranchPoint_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), First_11, (MR_Integer) 0))));
      MR_Word NewAlts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), First_11, (MR_Integer) 1))));
      MR_Word OldAlts_17;
      MR_Box conv0_OldAlts_17;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), HeadVar__4_4, ((MR_Box) (BranchPoint_15)), &conv0_OldAlts_17);
      if (succeeded)
      {
        OldAlts_17 = ((MR_Word) (conv0_OldAlts_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Alts_18;
        MR_Word BranchGoalId_19;
        MR_Word BranchAlts_20;

        mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), OldAlts_17, NewAlts_16, &Alts_18);
        BranchGoalId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BranchPoint_15, (MR_Integer) 0))));
        BranchAlts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BranchPoint_15, (MR_Integer) 1))));
        if ((BranchAlts_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer NumAlts_43;

          mercury__set__count_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Alts_18, &NumAlts_43);
          succeeded = (NumAlts_43 == (MR_Integer) 2);
        }
        else
        {
          MR_Word TypeCtorInfo_10_48;
          MR_Word MaybeSwitchNumFunctors_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BranchAlts_20, (MR_Integer) 0))));
          MR_Integer NumFunctors_45;
          MR_Integer NumAlts_46;

          succeeded = (MaybeSwitchNumFunctors_44 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NumFunctors_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSwitchNumFunctors_44, (MR_Integer) 0))));
            TypeCtorInfo_10_48 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
            mercury__set__count_2_p_0(TypeCtorInfo_10_48, Alts_18, &NumAlts_46);
            succeeded = (NumAlts_46 == NumFunctors_45);
          }
        }
        if (succeeded)
        {
          MR_Word ParentBranchGoalId_21;
          MR_Word ParentBranchAlt_23;
          MR_Integer ParentBranchNum_24;
          MR_Word ParentBranchArmGoalId_22;

          succeeded = transform_hlds__unneeded_code__get_parent_branch_point_6_p_0(ContainingGoalMap_1, BranchGoalId_19, &ParentBranchGoalId_21, &ParentBranchArmGoalId_22, &ParentBranchAlt_23, &ParentBranchNum_24);
          if (succeeded)
          {
            succeeded = mdbcomp__goal_path__goal_id_inside_3_p_0(ContainingGoalMap_1, ParentBranchArmGoalId_22, CurrentId_2);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word Branches1_25;
            MR_Word ParentBranchPoint_26;
            MR_Word ParentAlts_27;
            MR_Word Var_28;
            MR_Word Var_29;
            MR_Word next_value_of_HeadVar__3_3;
            MR_Word next_value_of_HeadVar__4_4;

            mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), ((MR_Box) (BranchPoint_15)), HeadVar__4_4, &Branches1_25);
            {
              ParentBranchPoint_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ParentBranchPoint_26, 0) = ((MR_Box) (ParentBranchGoalId_21));
              MR_hl_field(MR_mktag(0), ParentBranchPoint_26, 1) = ((MR_Box) (ParentBranchAlt_23));
            }
            ParentAlts_27 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ParentBranchNum_24)));
            {
              Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (ParentBranchPoint_26));
              MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ParentAlts_27));
            }
            {
              Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
              MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Rest_12));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__3_3 = Var_28;
            next_value_of_HeadVar__4_4 = Branches1_25;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            continue;
          }
          else
            *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Branches1_30;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__4_4;

          mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), ((MR_Box) (BranchPoint_15)), ((MR_Box) (Alts_18)), HeadVar__4_4, &Branches1_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Rest_12;
          next_value_of_HeadVar__4_4 = Branches1_30;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
      }
      else
      {
        MR_Word Branches1_31;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;

        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), ((MR_Box) (BranchPoint_15)), ((MR_Box) (NewAlts_16)), HeadVar__4_4, &Branches1_31);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Rest_12;
        next_value_of_HeadVar__4_4 = Branches1_31;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__get_parent_branch_point_6_p_0(
  MR_Word ContainingGoalMap_7,
  MR_Word GoalId_8,
  MR_Word * BranchGoalId_9,
  MR_Word * BranchArmGoalId_10,
  MR_Word * BranchAlt_11,
  MR_Integer * BranchNum_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalContaining_13;
    MR_Word ContainingGoalId_14;
    MR_Word LastStep_15;
    MR_Box conv0_GoalContaining_13;

    // setup for model_semi tailcalls optimized into a loop
    ;
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ContainingGoalMap_7, ((MR_Box) (GoalId_8)), &conv0_GoalContaining_13);
    GoalContaining_13 = ((MR_Word) (conv0_GoalContaining_13));
    succeeded = (GoalContaining_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ContainingGoalId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalContaining_13, (MR_Integer) 0))));
      LastStep_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalContaining_13, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) LastStep_15)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(LastStep_15)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
            case (MR_Integer) 3:
              {
                MR_Word next_value_of_GoalId_8 = ContainingGoalId_14;

                // direct tailcall eliminated
                ;
                GoalId_8 = next_value_of_GoalId_8;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                *BranchGoalId_9 = ContainingGoalId_14;
                *BranchArmGoalId_10 = GoalId_8;
                *BranchAlt_11 = (MR_Word) ((MR_Unsigned) 0U);
                *BranchNum_12 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                *BranchGoalId_9 = ContainingGoalId_14;
                *BranchArmGoalId_10 = GoalId_8;
                *BranchAlt_11 = (MR_Word) ((MR_Unsigned) 0U);
                *BranchNum_12 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_GoalId_8 = ContainingGoalId_14;

            // direct tailcall eliminated
            ;
            GoalId_8 = next_value_of_GoalId_8;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), LastStep_15, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word MaybeNumAlts_17;

                *BranchNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), LastStep_15, (MR_Integer) 1))));
                MaybeNumAlts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastStep_15, (MR_Integer) 2))));
                *BranchGoalId_9 = ContainingGoalId_14;
                *BranchArmGoalId_10 = GoalId_8;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *BranchAlt_11 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeNumAlts_17));
                }
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_GoalId_8 = ContainingGoalId_14;

                // direct tailcall eliminated
                ;
                GoalId_8 = next_value_of_GoalId_8;
                continue;
              }
              break;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_WhereNeededMap_7;

    transform_hlds__unneeded_code__undemand_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_WhereNeededMap_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_WhereNeededMap_7));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0(
  MR_Word Goal_6,
  MR_Word ModuleInfo_7,
  MR_Word InstMap_8,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_15,
  MR_Word * STATE_VARIABLE_WhereNeededMap_16)
{
  {
    MR_bool succeeded;
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));
    MR_Word NonLocalSet_12;
    MR_Word NonLocals_13;
    MR_Word VirginOutputs_14;
    MR_Word Var_17;
    MR_Box conv1_STATE_VARIABLE_WhereNeededMap_16;

    NonLocalSet_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalSet_12, &NonLocals_13);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (InstMap_8));
    }
    mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), Var_17, NonLocals_13, &VirginOutputs_14);
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[8]), VirginOutputs_14, ((MR_Box) (STATE_VARIABLE_WhereNeededMap_0_15)), &conv1_STATE_VARIABLE_WhereNeededMap_16);
    *STATE_VARIABLE_WhereNeededMap_16 = ((MR_Word) (conv1_STATE_VARIABLE_WhereNeededMap_16));
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_WhereNeededMap_15;

    transform_hlds__unneeded_code__demand_var_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_WhereNeededMap_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_WhereNeededMap_15));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0(
  MR_Word UnneededInfo_7,
  MR_Word Goal_8,
  MR_Word InitInstMap_9,
  MR_Word WhereNeeded_10,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_20,
  MR_Word * STATE_VARIABLE_WhereNeededMap_21)
{
  {
    MR_bool succeeded;
    MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
    MR_Word NonLocalSet_14;
    MR_Word GoalId_15;
    MR_Word NonLocals_16;
    MR_Word ModuleInfo_17;
    MR_Word Inputs_18;
    MR_Word ContainingGoalMap_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Box conv1_STATE_VARIABLE_WhereNeededMap_21;

    NonLocalSet_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
    GoalId_15 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_13);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalSet_14, &NonLocals_16);
    ModuleInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnneededInfo_7, (MR_Integer) 0))));
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__unneeded_code__demand_inputs_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ModuleInfo_17));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (InitInstMap_9));
    }
    mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), Var_22, NonLocals_16, &Inputs_18);
    ContainingGoalMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnneededInfo_7, (MR_Integer) 3))));
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (transform_hlds__unneeded_code__demand_inputs_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (ContainingGoalMap_19));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (GoalId_15));
      MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (WhereNeeded_10));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[0]), Var_23, Inputs_18, ((MR_Box) (STATE_VARIABLE_WhereNeededMap_0_20)), &conv1_STATE_VARIABLE_WhereNeededMap_21);
    *STATE_VARIABLE_WhereNeededMap_21 = ((MR_Word) (conv1_STATE_VARIABLE_WhereNeededMap_21));
  }
}

static MR_Box MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv3_HeadVar__3_3;

    conv3_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_HeadVar__2_41;

    transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__547__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_41);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_41));
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_WhereInfo_14;

    transform_hlds__unneeded_code__collect_where_needed_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_WhereInfo_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_WhereInfo_14));
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(
  MR_Word UnneededInfo_7,
  MR_Word Goal_8,
  MR_Word InitInstMap_9,
  MR_Word FinalInstMap_10,
  MR_Word WhereNeededMap_11,
  MR_Word * STATE_VARIABLE_WhereInfo_23)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnneededInfo_7, (MR_Integer) 0))));
    MR_Word VarTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnneededInfo_7, (MR_Integer) 1))));
    MR_Word ChangedVarSet_15;
    MR_Word ChangedVars_16;
    MR_Word Empty_17;
    MR_Word GoalInfo_19;
    MR_Word CurrentId_20;
    MR_Word ContainingGoalMap_21;
    MR_Word Options_22;
    MR_Word STATE_VARIABLE_WhereInfo_24_24;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_WhereInfo_26_26;
    MR_Box conv1_STATE_VARIABLE_WhereInfo_26_26;
    MR_Word GoalExpr_53;
    MR_Word GoalInfo_54;

    hlds__instmap__instmap_changed_vars_5_p_0(ModuleInfo_13, VarTypes_14, InitInstMap_9, FinalInstMap_10, &ChangedVarSet_15);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVarSet_15, &ChangedVars_16);
    mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), &Empty_17);
    {
      STATE_VARIABLE_WhereInfo_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_WhereInfo_24_24, 0) = ((MR_Box) (Empty_17));
    }
    GoalInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
    CurrentId_20 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_19);
    ContainingGoalMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnneededInfo_7, (MR_Integer) 3))));
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (ContainingGoalMap_21));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (CurrentId_20));
      MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (WhereNeededMap_11));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), Var_25, ChangedVars_16, ((MR_Box) (STATE_VARIABLE_WhereInfo_24_24)), &conv1_STATE_VARIABLE_WhereInfo_26_26);
    STATE_VARIABLE_WhereInfo_26_26 = ((MR_Word) (conv1_STATE_VARIABLE_WhereInfo_26_26));
    Options_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnneededInfo_7, (MR_Integer) 2))));
    GoalExpr_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
    GoalInfo_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
    {
      MR_Word Detism_55;

      Detism_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_54);
      switch (Detism_55) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
          succeeded = ((MR_Integer) 0 == (MR_Integer) 1);
          break;
        case (MR_Integer) 5:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = ((MR_Integer) 0 == (MR_Integer) 1);
          break;
        case (MR_Integer) 6:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 7:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 2:
          succeeded = ((MR_Integer) 0 == (MR_Integer) 1);
          break;
        case (MR_Integer) 3:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
    }
    if (!(succeeded))
    {
      {
        MR_Word Var_66;

        Var_66 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_54);
        succeeded = (Var_66 != (MR_Integer) 0);
      }
      if (!(succeeded))
      {
        {
          MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Options_22, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

          succeeded = (Var_65 == (MR_Integer) 1);
          if (succeeded)
            succeeded = hlds__goal_form__goal_can_loop_or_throw_1_p_0(Goal_8);
        }
        if (!(succeeded))
        {
          {
            MR_Word BranchMap_56;
            MR_Word Var_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Options_22, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
            MR_Word TypeCtorInfo_36_79;
            MR_Word TypeInfo_37_80;

            succeeded = (Var_64 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = hlds__goal_form__goal_can_loop_or_throw_1_p_0(Goal_8);
              if (succeeded)
              {
                succeeded = (STATE_VARIABLE_WhereInfo_26_26 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BranchMap_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_WhereInfo_26_26, (MR_Integer) 0))));
                  TypeCtorInfo_36_79 = (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0);
                  TypeInfo_37_80 = (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]);
                  succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_36_79, TypeInfo_37_80, BranchMap_56);
                  succeeded = !(succeeded);
                }
              }
            }
          }
          if (!(succeeded))
          {
            {
              MR_Word Var_91;

              Var_91 = hlds__make_goal__true_goal_expr_0_f_0();
              succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(GoalExpr_53, Var_91);
            }
            if (!(succeeded))
            {
              MR_Word TypeCtorInfo_38_81;
              MR_Word TypeInfo_39_82;
              MR_Word TypeCtorInfo_43_86;
              MR_Word BranchArms_57;
              MR_Word BranchArmCounts_58;
              MR_Integer BranchArmCount_59;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Integer Var_62;
              MR_Integer Var_63;
              MR_Word BranchMap_69;
              MR_Box conv4_BranchArmCount_59;

              succeeded = (STATE_VARIABLE_WhereInfo_26_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BranchMap_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_WhereInfo_26_26, (MR_Integer) 0))));
                TypeCtorInfo_38_81 = (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0);
                TypeInfo_39_82 = (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]);
                mercury__map__values_2_p_0(TypeCtorInfo_38_81, TypeInfo_39_82, BranchMap_69, &BranchArms_57);
                Var_60 = (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[6]);
                TypeCtorInfo_43_86 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                mercury__list__map_3_p_0(TypeInfo_39_82, TypeCtorInfo_43_86, Var_60, BranchArms_57, &BranchArmCounts_58);
                Var_61 = (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[7]);
                Var_62 = (MR_Integer) 0;
                conv4_BranchArmCount_59 = mercury__list__foldl_3_f_0(TypeCtorInfo_43_86, TypeCtorInfo_43_86, Var_61, BranchArmCounts_58, ((MR_Box) (Var_62)));
                BranchArmCount_59 = ((MR_Integer) (conv4_BranchArmCount_59));
                Var_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Options_22, (MR_Integer) 1))));
                succeeded = (BranchArmCount_59 > Var_63);
              }
            }
          }
        }
      }
    }
    if (succeeded)
      *STATE_VARIABLE_WhereInfo_23 = (MR_Word) ((MR_Unsigned) 0U);
    else
      *STATE_VARIABLE_WhereInfo_23 = STATE_VARIABLE_WhereInfo_26_26;
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__unneeded_code____Unify____branch_alts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__unneeded_code____Compare____branch_alts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__unneeded_code____Unify____branch_point_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__unneeded_code____Compare____branch_point_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__unneeded_code____Unify____location_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__unneeded_code____Compare____location_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__unneeded_code____Unify____uc_option_values_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__unneeded_code____Compare____uc_option_values_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__unneeded_code____Unify____where_needed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__unneeded_code____Compare____where_needed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__unneeded_code____Unify____where_needed_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__unneeded_code____Compare____where_needed_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__unneeded_code__init(void)
{
}

void mercury__transform_hlds__unneeded_code__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_bracketed_goal_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_alts_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_location_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_refined_goal_map_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_uc_option_values_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_unneeded_code_info_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_branches_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_map_0);
}

void mercury__transform_hlds__unneeded_code__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__unneeded_code__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.unneeded_code.
