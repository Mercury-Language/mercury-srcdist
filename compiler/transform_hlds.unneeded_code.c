/*
** Automatically generated from `unneeded_code.m'
** by the Mercury compiler,
** version rotd-2025-04-28
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
#include "counter.mih"
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
#include "libs.maybe_util.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




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

static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__maybe__ti_maybe_1io__type_ctor_info_text_output_stream_0;

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_uc_option_values_0_0[4];

static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_uc_option_values_0_0[4];

static const MR_DuArgLocn transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_locns_uc_option_values_0_0[4];

static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0[1];

static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0[1];

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0[1];

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
transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__561__1_2_p_0(
  MR_Word HeadVar__1_40,
  MR_Integer * HeadVar__2_41);

static MR_bool MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__382__1_1_p_0(
  MR_Word RefinedGoalMap_51);

static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__323__1_3_p_0(
  MR_Word LambdaHeadVar__1_65,
  MR_Word LambdaHeadVar__2_66,
  MR_Word * LambdaHeadVar__3_67);

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
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_13,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_14);

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
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_12,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_13);

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
  MR_Word ProgressStream_8,
  MR_Word PredId_9,
  MR_Integer Pass_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_60,
  MR_Word * STATE_VARIABLE_ProcInfo_61,
  MR_Word STATE_VARIABLE_ModuleInfo_0_62,
  MR_Word * STATE_VARIABLE_ModuleInfo_63);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(
  MR_Word GoalId_1,
  MR_Integer BranchNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_5,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_6);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(
  MR_Word GoalId_1,
  MR_Integer BranchNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_5,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_6);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_3,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_4);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_56,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_57);

static void MR_CALL 
transform_hlds__unneeded_code__insert_refine_goals_3_p_0(
  MR_Word ToInsertGoals_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6);

static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_51_93_95_48_11_p_0(
  MR_Word UnneededInfo_12,
  MR_Word InitInstMap_13,
  MR_Word Goals0_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_22,
  MR_Word * STATE_VARIABLE_WhereNeededMap_23,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_24,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_25,
  MR_Word STATE_VARIABLE_Changed_0_26,
  MR_Word * STATE_VARIABLE_Changed_27);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(
  MR_Word UnneededInfo_18,
  MR_Word CurrentId_19,
  MR_Word BranchPoint_20,
  MR_Word InitInstMap_21,
  MR_Word FinalInstMap_22,
  MR_Word Cond0_23,
  MR_Word * Cond_24,
  MR_Word Then0_25,
  MR_Word * Then_26,
  MR_Word Else0_27,
  MR_Word * Else_28,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_45,
  MR_Word * STATE_VARIABLE_WhereNeededMap_46,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_47,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_48,
  MR_Word STATE_VARIABLE_Changed_0_49,
  MR_Word * STATE_VARIABLE_Changed_50);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(
  MR_Word UnneededInfo_1,
  MR_Word CurrentId_2,
  MR_Word StartWhereNeededMap_3,
  MR_Word InitInstMap_4,
  MR_Word FinalInstMap_5,
  MR_Word BranchPoint_6,
  MR_Integer BranchNum_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_10,
  MR_Word * STATE_VARIABLE_WhereNeededMap_11,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_12,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_13,
  MR_Word STATE_VARIABLE_Changed_0_14,
  MR_Word * STATE_VARIABLE_Changed_15);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(
  MR_Word UnneededInfo_1,
  MR_Word CurrentId_2,
  MR_Word StartWhereNeededMap_3,
  MR_Word InitInstMap_4,
  MR_Word FinalInstMap_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_8,
  MR_Word * STATE_VARIABLE_WhereNeededMap_9,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_10,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_11,
  MR_Word STATE_VARIABLE_Changed_0_12,
  MR_Word * STATE_VARIABLE_Changed_13);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(
  MR_Word UnneededInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_4,
  MR_Word * STATE_VARIABLE_WhereNeededMap_5,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_6,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_7,
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
  MR_Word InitInstMap_13,
  MR_Word FinalInstMap_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_87,
  MR_Word * STATE_VARIABLE_WhereNeededMap_88,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_89,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_90,
  MR_Word STATE_VARIABLE_Changed_0_91,
  MR_Word * STATE_VARIABLE_Changed_92);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(
  MR_Word UnneededInfo_12,
  MR_Word InitInstMap_13,
  MR_Word FinalInstMap_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_31,
  MR_Word * STATE_VARIABLE_WhereNeededMap_32,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_33,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_34,
  MR_Word STATE_VARIABLE_Changed_0_35,
  MR_Word * STATE_VARIABLE_Changed_36);

static void MR_CALL 
transform_hlds__unneeded_code__build_bracketed_rev_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InitInstMap_2,
  MR_Word STATE_VARIABLE_RevBracketedGoals_0_3,
  MR_Word * STATE_VARIABLE_RevBracketedGoals_4);

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
  MR_Word InitInstMap_8,
  MR_Word Goal_9,
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
  MR_Word InitInstMap_8,
  MR_Word FinalInstMap_9,
  MR_Word Goal_10,
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


static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_2[14][3];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_4[2][9];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_5[2][5];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_6[3][6];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_7[1][7];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_8[1][4];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_9[1][8];




static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_2[14][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[2]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_2[1])),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[2]))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_4[2][9] = {
  /* row   0 */
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
  /* row   1 */
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
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unneeded_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_6[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
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
  /* row   0 */
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
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_9[1][8] = {
  /* row   0 */
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
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
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
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
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

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0 };

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

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0 };

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_bracketed_goal_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_bracketed_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "bracketed_goal",
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0 },
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_bracketed_goal_0 },
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

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_alts_0_1[1] = { (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0) };

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

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_0[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_1[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1 };

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
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_alts_0 },
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_alts_0 },
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

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0 };

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

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0 };

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_point_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____branch_point_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____branch_point_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "branch_point",
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0 },
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_point_0 },
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

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0 };

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

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0 };

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_location_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_location_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____location_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____location_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "location",
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0 },
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_location_0 },
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
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__maybe__ti_maybe_1io__type_ctor_info_text_output_stream_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0) }
};

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_uc_option_values_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__maybe__ti_maybe_1io__type_ctor_info_text_output_stream_0),
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
  },
  {
    (MR_Integer) 2,
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

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0 };

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

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0 };

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_uc_option_values_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "uc_option_values",
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0 },
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0,

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
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_uc_option_values_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0)
};

static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_unneeded_code_info_0_0[4] = {
  (MR_String) "uci_module_info",
  (MR_String) "uci_var_table",
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

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0 };

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

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0 };

static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_unneeded_code_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_unneeded_code_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "unneeded_code_info",
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0 },
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_unneeded_code_info_0 },
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

static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_where_needed_0_1[1] = { (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0) };

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

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_0[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_1[1] = { &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1 };

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
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_where_needed_0 },
  { transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_where_needed_0 },
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
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0) },
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
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unneeded_code__type_ctor_info_where_needed_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__561__1_2_p_0(
  MR_Word HeadVar__1_40,
  MR_Integer * HeadVar__2_41)
{
  mercury__set__count_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_40, HeadVar__2_41);
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__382__1_1_p_0(
  MR_Word RefinedGoalMap_51)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), RefinedGoalMap_51);
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__323__1_3_p_0(
  MR_Word LambdaHeadVar__1_65,
  MR_Word LambdaHeadVar__2_66,
  MR_Word * LambdaHeadVar__3_67)
{
  mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), ((MR_Box) (LambdaHeadVar__1_65)), ((MR_Box) ((MR_Unsigned) 0U)), LambdaHeadVar__2_66, LambdaHeadVar__3_67);
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(
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

      parse_tree__var_table____Compare____var_table_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
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

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(
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
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
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

static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0(
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
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

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
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

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0(
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
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
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

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = transform_hlds__unneeded_code____Unify____branch_point_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_Unsigned Var_13 = (MR_Unsigned) (ArgX1_4);
    MR_Unsigned Var_14 = (MR_Unsigned) (ArgY1_5);

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

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned Var_10 = (MR_Unsigned) (ArgX1_3);
    MR_Unsigned Var_11 = (MR_Unsigned) (ArgY1_4);

    succeeded = (Var_10 == Var_11);
    if (succeeded)
      succeeded = transform_hlds__unneeded_code____Unify____branch_alts_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
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

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

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
  MR_bool succeeded;
  MR_Word Inst_7;

  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_5, Var_6, &Inst_7);
  succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_4, Inst_7);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstMap_5,
  MR_Word Var_6)
{
  MR_bool succeeded;
  MR_Word Inst_7;

  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_5, Var_6, &Inst_7);
  succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_4, Inst_7);
  return succeeded;
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
      MR_Word BranchesA_17 = ((MR_Word) ((MR_hl_field(1, Where_12, 0))));

      if ((STATE_VARIABLE_WhereInfo_0_13 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_WhereInfo_14 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word BranchesB_18 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_WhereInfo_0_13, 0))));
        MR_Word BranchesList_19;

        mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), BranchesA_17, &BranchesList_19);
        transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(ContainingGoalMap_7, CurrentId_8, BranchesList_19, BranchesB_18, STATE_VARIABLE_WhereInfo_14);
      }
    }
  else
    *STATE_VARIABLE_WhereInfo_14 = STATE_VARIABLE_WhereInfo_0_13;
}

static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(
  MR_Word Goal_6,
  MR_Word GoalPath_7,
  MR_Integer BranchNum_8,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_13,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_14)
{
  MR_bool succeeded;
  MR_Word Key_10;
  MR_Word Goals0_11;
  MR_Box conv0_Goals0_11;

  {
    Key_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Key_10, 0) = ((MR_Box) (GoalPath_7));
    MR_hl_field(0, Key_10, 1) = ((MR_Box) (BranchNum_8));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), STATE_VARIABLE_RefinedGoalMap_0_13, ((MR_Box) (Key_10)), &conv0_Goals0_11);
  if (succeeded)
  {
    Goals0_11 = ((MR_Word) (conv0_Goals0_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Goals_12;

    {
      Goals_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Goals_12, 0) = ((MR_Box) (Goal_6));
      MR_hl_field(1, Goals_12, 1) = ((MR_Box) (Goals0_11));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), ((MR_Box) (Key_10)), ((MR_Box) (Goals_12)), STATE_VARIABLE_RefinedGoalMap_0_13, STATE_VARIABLE_RefinedGoalMap_14);
  }
  else
  {
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (Goal_6));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), ((MR_Box) (Key_10)), ((MR_Box) (Var_16)), STATE_VARIABLE_RefinedGoalMap_0_13, STATE_VARIABLE_RefinedGoalMap_14);
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RefinedGoalMap_14;

  transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RefinedGoalMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RefinedGoalMap_14));
}

static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(
  MR_Word Goal_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_12,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_13)
{
  MR_Word BranchPoint_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word BranchNumSet_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word GoalPath_9 = ((MR_Word) ((MR_hl_field(0, BranchPoint_6, 0))));
  MR_Word BranchNums_11;
  MR_Word Var_14;
  MR_Box conv1_STATE_VARIABLE_RefinedGoalMap_13;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), BranchNumSet_7, &BranchNums_11);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_9[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Goal_5));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (GoalPath_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[3]), Var_14, BranchNums_11, ((MR_Box) (STATE_VARIABLE_RefinedGoalMap_0_12)), &conv1_STATE_VARIABLE_RefinedGoalMap_13);
  *STATE_VARIABLE_RefinedGoalMap_13 = ((MR_Word) (conv1_STATE_VARIABLE_RefinedGoalMap_13));
}

void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_msg_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * STATE_VARIABLE_ProcInfo_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  MR_Word PredId_12;
  MR_Word STATE_VARIABLE_ProcInfo_21_21;
  MR_Word HeadVars_23;
  MR_Word Goal0_24;
  MR_Word VarTable0_25;
  MR_Word RttiVarMaps0_26;
  MR_Word Goal_28;
  MR_Word VarTable_29;
  MR_Word RttiVarMaps_30;
  MR_Word STATE_VARIABLE_ProcInfo_15_32;
  MR_Word STATE_VARIABLE_ProcInfo_16_33;
  MR_Word _Warnings_27;

  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_7, STATE_VARIABLE_ModuleInfo_0_16, (MR_String) "Removing dead code in", PredProcId_8);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &HeadVars_23);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &Goal0_24);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &VarTable0_25);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &RttiVarMaps0_26);
  hlds__quantification__implicitly_quantify_clause_body_general_9_p_0((MR_Integer) 1, HeadVars_23, &_Warnings_27, Goal0_24, &Goal_28, VarTable0_25, &VarTable_29, RttiVarMaps0_26, &RttiVarMaps_30);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_28, STATE_VARIABLE_ProcInfo_0_14, &STATE_VARIABLE_ProcInfo_15_32);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_29, STATE_VARIABLE_ProcInfo_15_32, &STATE_VARIABLE_ProcInfo_16_33);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_30, STATE_VARIABLE_ProcInfo_16_33, &STATE_VARIABLE_ProcInfo_21_21);
  PredId_12 = ((MR_Word) ((MR_hl_field(0, PredProcId_8, 0))));
  transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(ProgressStream_7, PredId_12, (MR_Integer) 1, STATE_VARIABLE_ProcInfo_21_21, STATE_VARIABLE_ProcInfo_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__382__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_67;

  transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__323__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_67);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_67));
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word PredId_9,
  MR_Integer Pass_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_60,
  MR_Word * STATE_VARIABLE_ProcInfo_61,
  MR_Word STATE_VARIABLE_ModuleInfo_0_62,
  MR_Word * STATE_VARIABLE_ModuleInfo_63)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ContainingGoalMap_13;
    MR_Word Goal0_14;
    MR_Word VarTable0_15;
    MR_Word InitInstMap_16;
    MR_Word GoalInfo0_18;
    MR_Word InstMapDelta_19;
    MR_Word FinalInstMap_20;
    MR_Word NeededVarsList_21;
    MR_Word WhereNeededMap0_22;
    MR_Word WhereNeededMap1_27;
    MR_Word Globals_28;
    MR_Word ReorderConj_29;
    MR_Word FullyStrict_30;
    MR_Word OptTuple_31;
    MR_Integer Limit_32;
    MR_Word Debug_33;
    MR_Word Options_35;
    MR_Word UnneededInfo_45;
    MR_Word Goal1_46;
    MR_Word RefinedGoalMap1_48;
    MR_Word Changed_49;
    MR_Word Goal2_50;
    MR_Word RefinedGoalMap_51;
    MR_Word STATE_VARIABLE_ProcInfo_64_64;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Box conv1_WhereNeededMap1_27;
    MR_Word Var_47;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(STATE_VARIABLE_ModuleInfo_0_62, &ContainingGoalMap_13, STATE_VARIABLE_ProcInfo_0_60, &STATE_VARIABLE_ProcInfo_64_64);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_64_64, &Goal0_14);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_64_64, &VarTable0_15);
    hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_62, STATE_VARIABLE_ProcInfo_64_64, &InitInstMap_16);
    GoalInfo0_18 = ((MR_Word) ((MR_hl_field(0, Goal0_14, 1))));
    InstMapDelta_19 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_18);
    hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_19, InitInstMap_16, &FinalInstMap_20);
    hlds__hlds_proc_util__proc_info_instantiated_head_vars_3_p_0(STATE_VARIABLE_ModuleInfo_0_62, STATE_VARIABLE_ProcInfo_64_64, &NeededVarsList_21);
    mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), &WhereNeededMap0_22);
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[13]), NeededVarsList_21, ((MR_Box) (WhereNeededMap0_22)), &conv1_WhereNeededMap1_27);
    WhereNeededMap1_27 = ((MR_Word) (conv1_WhereNeededMap1_27));
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_62, &Globals_28);
    libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 240, &ReorderConj_29);
    libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 242, &FullyStrict_30);
    libs__globals__get_opt_tuple_2_p_0(Globals_28, &OptTuple_31);
    Limit_32 = ((MR_Integer) ((MR_hl_field(0, OptTuple_31, 19))));
    libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 237, &Debug_33);
    switch (Debug_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Options_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Options_35, 0) = (MR_Box) (((((MR_Unsigned) (FullyStrict_30) << 1)) | (MR_Unsigned) (ReorderConj_29)));
          MR_hl_field(0, Options_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Options_35, 2) = ((MR_Box) (Limit_32));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeDebugStream_265;
          MR_Word PredInfo_37;
          MR_String PredName_38;
          MR_Word DebugPredNames_39;

          {
            MaybeDebugStream_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeDebugStream_265, 0) = ((MR_Box) (ProgressStream_8));
          }
          {
            Options_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Options_35, 0) = (MR_Box) (((((MR_Unsigned) (FullyStrict_30) << 1)) | (MR_Unsigned) (ReorderConj_29)));
            MR_hl_field(0, Options_35, 1) = ((MR_Box) (MaybeDebugStream_265));
            MR_hl_field(0, Options_35, 2) = ((MR_Box) (Limit_32));
          }
          hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_62, PredId_9, &PredInfo_37);
          PredName_38 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_37);
          libs__globals__lookup_accumulating_option_3_p_0(Globals_28, (MR_Integer) 238, &DebugPredNames_39);
          if ((DebugPredNames_39 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_257;

            mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "% Starting unneededed code pass ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_3[0]), Pass_10, &Var_257);
            mercury__io__write_string_4_p_0(ProgressStream_8, Var_257);
            mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\n");
          }
          else
          {
            succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (PredName_38)), DebugPredNames_39);
            if (succeeded)
            {
              MR_Word OutInfo_42;
              MR_Word TVarSet_43;
              MR_Word InstVarSet0_44;
              MR_Word Var_85;
              MR_String Var_246;

              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "% Starting unneededed code pass ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_3[0]), Pass_10, &Var_246);
              mercury__io__write_string_4_p_0(ProgressStream_8, Var_246);
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\n");
              OutInfo_42 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_28, (MR_Integer) 1);
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_37, &TVarSet_43);
              hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_64_64, &InstVarSet0_44);
              {
                Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_85, 0) = ((MR_Box) (VarTable0_15));
              }
              hlds__hlds_out__hlds_out_goal__write_goal_12_p_0(OutInfo_42, ProgressStream_8, STATE_VARIABLE_ModuleInfo_0_62, Var_85, (MR_Integer) 1, TVarSet_43, InstVarSet0_44, (MR_Unsigned) 0U, (MR_String) ".\n", Goal0_14);
            }
          }
        }
        break;
    }
    {
      UnneededInfo_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnneededInfo_45, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_62));
      MR_hl_field(0, UnneededInfo_45, 1) = ((MR_Box) (VarTable0_15));
      MR_hl_field(0, UnneededInfo_45, 2) = ((MR_Box) (Options_35));
      MR_hl_field(0, UnneededInfo_45, 3) = ((MR_Box) (ContainingGoalMap_13));
    }
    Var_90 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]));
    transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_45, InitInstMap_16, FinalInstMap_20, Goal0_14, &Goal1_46, WhereNeededMap1_27, &Var_47, Var_90, &RefinedGoalMap1_48, (MR_Integer) 0, &Changed_49);
    transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Goal1_46, &Goal2_50, RefinedGoalMap1_48, &RefinedGoalMap_51);
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_92, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_8[0]));
      MR_hl_field(0, Var_92, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2));
      MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_92, 3) = ((MR_Box) (RefinedGoalMap_51));
    }
    mercury__require__expect_3_p_0(Var_92, (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_proc\'/7", (MR_String) "goal reattachment unsuccessful");
    switch (Changed_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word HeadVars_52;
          MR_Word InstVarSet_53;
          MR_Word RttiVarMaps0_54;
          MR_Word Goal3_56;
          MR_Word VarTable_57;
          MR_Word RttiVarMaps_58;
          MR_Word Goal_59;
          MR_Word STATE_VARIABLE_ModuleInfo_97_97;
          MR_Word STATE_VARIABLE_ProcInfo_98_98;
          MR_Word STATE_VARIABLE_ProcInfo_99_99;
          MR_Word STATE_VARIABLE_ProcInfo_100_100;
          MR_Word _Warnings_55;

          hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_64_64, &HeadVars_52);
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_64_64, &InstVarSet_53);
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_64_64, &RttiVarMaps0_54);
          hlds__quantification__implicitly_quantify_clause_body_general_9_p_0((MR_Integer) 1, HeadVars_52, &_Warnings_55, Goal2_50, &Goal3_56, VarTable0_15, &VarTable_57, RttiVarMaps0_54, &RttiVarMaps_58);
          check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 1, VarTable_57, InstVarSet_53, InitInstMap_16, Goal3_56, &Goal_59, STATE_VARIABLE_ModuleInfo_0_62, &STATE_VARIABLE_ModuleInfo_97_97);
          hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_59, STATE_VARIABLE_ProcInfo_64_64, &STATE_VARIABLE_ProcInfo_98_98);
          hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_57, STATE_VARIABLE_ProcInfo_98_98, &STATE_VARIABLE_ProcInfo_99_99);
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_58, STATE_VARIABLE_ProcInfo_99_99, &STATE_VARIABLE_ProcInfo_100_100);
          succeeded = (Pass_10 > (MR_Integer) 3);
          if (succeeded)
          {
            *STATE_VARIABLE_ModuleInfo_63 = STATE_VARIABLE_ModuleInfo_97_97;
            *STATE_VARIABLE_ProcInfo_61 = STATE_VARIABLE_ProcInfo_100_100;
          }
          else
          {
            MR_Integer Var_102 = (MR_Integer) ((MR_Unsigned) Pass_10 + (MR_Unsigned) 1);
            MR_Integer next_value_of_Pass_10 = Var_102;
            MR_Word next_value_of_STATE_VARIABLE_ProcInfo_0_60 = STATE_VARIABLE_ProcInfo_100_100;
            MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_62 = STATE_VARIABLE_ModuleInfo_97_97;

            // direct tailcall eliminated
            ;
            Pass_10 = next_value_of_Pass_10;
            STATE_VARIABLE_ProcInfo_0_60 = next_value_of_STATE_VARIABLE_ProcInfo_0_60;
            STATE_VARIABLE_ModuleInfo_0_62 = next_value_of_STATE_VARIABLE_ModuleInfo_0_62;
            continue;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_ProcInfo_61 = STATE_VARIABLE_ProcInfo_64_64;
          *STATE_VARIABLE_ModuleInfo_63 = STATE_VARIABLE_ModuleInfo_0_62;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(
  MR_Word GoalId_1,
  MR_Integer BranchNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_5,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RefinedGoalMap_6 = STATE_VARIABLE_RefinedGoalMap_0_5;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word Goal1_19;
    MR_Word STATE_VARIABLE_RefinedGoalMap_23_23;
    MR_Word STATE_VARIABLE_RefinedGoalMap_26_26;
    MR_Integer Var_27;
    MR_Word ToInsertGoals_20;
    MR_Word Var_24;
    MR_Box conv0_ToInsertGoals_20;

    transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Goal0_14, &Goal1_19, STATE_VARIABLE_RefinedGoalMap_0_5, &STATE_VARIABLE_RefinedGoalMap_23_23);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (GoalId_1));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (BranchNum_2));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), STATE_VARIABLE_RefinedGoalMap_23_23, ((MR_Box) (Var_24)), &conv0_ToInsertGoals_20);
    if (succeeded)
    {
      ToInsertGoals_20 = ((MR_Word) (conv0_ToInsertGoals_20));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Conj_34;
      MR_Word GoalInfo0_36;
      MR_Word Var_37;

      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (Goal1_19));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ToInsertGoals_20, Var_37, &Conj_34);
      GoalInfo0_36 = ((MR_Word) ((MR_hl_field(0, Goal1_19, 1))));
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_34, GoalInfo0_36, &Goal_16);
      mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), ((MR_Box) (Var_24)), STATE_VARIABLE_RefinedGoalMap_23_23, &STATE_VARIABLE_RefinedGoalMap_26_26);
    }
    else
    {
      Goal_16 = Goal1_19;
      STATE_VARIABLE_RefinedGoalMap_26_26 = STATE_VARIABLE_RefinedGoalMap_23_23;
    }
    Var_27 = (MR_Integer) ((MR_Unsigned) BranchNum_2 + (MR_Unsigned) 1);
    transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(GoalId_1, Var_27, Goals0_15, &Goals_17, STATE_VARIABLE_RefinedGoalMap_26_26, STATE_VARIABLE_RefinedGoalMap_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(
  MR_Word GoalId_1,
  MR_Integer BranchNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_5,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RefinedGoalMap_6 = STATE_VARIABLE_RefinedGoalMap_0_5;
  }
  else
  {
    MR_Word Case0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Cases0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Case_16;
    MR_Word Cases_17;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_14, 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_14, 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_14, 2))));
    MR_Word Goal1_22;
    MR_Word Goal_24;
    MR_Word STATE_VARIABLE_RefinedGoalMap_27_27;
    MR_Word STATE_VARIABLE_RefinedGoalMap_30_30;
    MR_Integer Var_31;
    MR_Word ToInsertGoals_23;
    MR_Word Var_28;
    MR_Box conv0_ToInsertGoals_23;

    transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Goal0_21, &Goal1_22, STATE_VARIABLE_RefinedGoalMap_0_5, &STATE_VARIABLE_RefinedGoalMap_27_27);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (GoalId_1));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (BranchNum_2));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), STATE_VARIABLE_RefinedGoalMap_27_27, ((MR_Box) (Var_28)), &conv0_ToInsertGoals_23);
    if (succeeded)
    {
      ToInsertGoals_23 = ((MR_Word) (conv0_ToInsertGoals_23));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Conj_38;
      MR_Word GoalInfo0_40;
      MR_Word Var_41;

      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (Goal1_22));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ToInsertGoals_23, Var_41, &Conj_38);
      GoalInfo0_40 = ((MR_Word) ((MR_hl_field(0, Goal1_22, 1))));
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_38, GoalInfo0_40, &Goal_24);
      mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), ((MR_Box) (Var_28)), STATE_VARIABLE_RefinedGoalMap_27_27, &STATE_VARIABLE_RefinedGoalMap_30_30);
    }
    else
    {
      Goal_24 = Goal1_22;
      STATE_VARIABLE_RefinedGoalMap_30_30 = STATE_VARIABLE_RefinedGoalMap_27_27;
    }
    {
      Case_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_16, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(0, Case_16, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(0, Case_16, 2) = ((MR_Box) (Goal_24));
    }
    Var_31 = (MR_Integer) ((MR_Unsigned) BranchNum_2 + (MR_Unsigned) 1);
    transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(GoalId_1, Var_31, Cases0_15, &Cases_17, STATE_VARIABLE_RefinedGoalMap_30_30, STATE_VARIABLE_RefinedGoalMap_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_17));
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_3,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RefinedGoalMap_4 = STATE_VARIABLE_RefinedGoalMap_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word HeadGoal_12;
    MR_Word TailGoals_13;
    MR_Word STATE_VARIABLE_RefinedGoalMap_18_18;
    MR_Word HeadGoals_14;
    MR_Word Var_20;
    MR_Word Var_21;

    transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Goal0_8, &HeadGoal_12, STATE_VARIABLE_RefinedGoalMap_0_3, &STATE_VARIABLE_RefinedGoalMap_18_18);
    transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(Goals0_9, &TailGoals_13, STATE_VARIABLE_RefinedGoalMap_18_18, STATE_VARIABLE_RefinedGoalMap_4);
    Var_20 = ((MR_Word) ((MR_hl_field(0, HeadGoal_12, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_20, 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_21 = ((MR_Unsigned) ((MR_hl_field(3, Var_20, 1))) & (MR_Integer) 1);
      HeadGoals_14 = ((MR_Word) ((MR_hl_field(3, Var_20, 2))));
      succeeded = (Var_21 == (MR_Integer) 0);
    }
    if (succeeded)
      *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoals_14, TailGoals_13);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadGoal_12));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals_13));
      }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_56,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_57)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_51 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word SubGoal_52;
        MR_Word GoalExpr_74;

        transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(SubGoal0_51, &SubGoal_52, STATE_VARIABLE_RefinedGoalMap_0_56, STATE_VARIABLE_RefinedGoalMap_57);
        GoalExpr_74 = (MR_Word) ((MR_Word) (SubGoal_52));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_74));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *Goal_6 = Goal0_5;
        *STATE_VARIABLE_RefinedGoalMap_57 = STATE_VARIABLE_RefinedGoalMap_0_56;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            *Goal_6 = Goal0_5;
            *STATE_VARIABLE_RefinedGoalMap_57 = STATE_VARIABLE_RefinedGoalMap_0_56;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));

            switch (ConjType_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *Goal_6 = Goal0_5;
                  *STATE_VARIABLE_RefinedGoalMap_57 = STATE_VARIABLE_RefinedGoalMap_0_56;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Conjuncts_35;
                  MR_Word GoalExpr_36;

                  transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(Conjuncts0_34, &Conjuncts_35, STATE_VARIABLE_RefinedGoalMap_0_56, STATE_VARIABLE_RefinedGoalMap_57);
                  {
                    GoalExpr_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, GoalExpr_36, 1) = (MR_Box) ((MR_Unsigned) (ConjType_33));
                    MR_hl_field(3, GoalExpr_36, 2) = ((MR_Box) (Conjuncts_35));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_6 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_36));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word Disjuncts_43;
            MR_Word GoalExpr_70;
            MR_Word GoalId_71;

            GoalId_71 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_9);
            transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(GoalId_71, (MR_Integer) 1, Disjuncts0_42, &Disjuncts_43, STATE_VARIABLE_RefinedGoalMap_0_56, STATE_VARIABLE_RefinedGoalMap_57);
            {
              GoalExpr_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_70, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_70, 1) = ((MR_Box) (Disjuncts_43));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_70));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word CanFail_38 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 2))) & (MR_Integer) 1);
            MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));
            MR_Word GoalId_40;
            MR_Word Cases_41;
            MR_Word GoalExpr_69;

            GoalId_40 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_9);
            transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(GoalId_40, (MR_Integer) 1, Cases0_39, &Cases_41, STATE_VARIABLE_RefinedGoalMap_0_56, STATE_VARIABLE_RefinedGoalMap_57);
            {
              GoalExpr_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_69, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_69, 1) = ((MR_Box) (SwitchVar_37));
              MR_hl_field(3, GoalExpr_69, 2) = (MR_Box) ((MR_Unsigned) (CanFail_38));
              MR_hl_field(3, GoalExpr_69, 3) = ((MR_Box) (Cases_41));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_69));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word SubGoal0_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word Var_65;

            succeeded = ((((MR_tag((MR_Word) Reason_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_53, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_65 = ((MR_Unsigned) ((MR_hl_field(3, Reason_53, 2))) & (MR_Integer) 3);
              succeeded = (Var_65 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              *Goal_6 = Goal0_5;
              *STATE_VARIABLE_RefinedGoalMap_57 = STATE_VARIABLE_RefinedGoalMap_0_56;
            }
            else
            {
              MR_Word GoalExpr_75;
              MR_Word SubGoal_76;

              transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(SubGoal0_80, &SubGoal_76, STATE_VARIABLE_RefinedGoalMap_0_56, STATE_VARIABLE_RefinedGoalMap_57);
              {
                GoalExpr_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_75, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_75, 1) = ((MR_Box) (Reason_53));
                MR_hl_field(3, GoalExpr_75, 2) = ((MR_Box) (SubGoal_76));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_75));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Quant_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word Cond0_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word Then0_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));
            MR_Word Else0_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 4))));
            MR_Word Cond_48;
            MR_Word Then_49;
            MR_Word Else_50;
            MR_Word GoalExpr_72;
            MR_Word GoalId_73;
            MR_Word Then1_81;
            MR_Word Else1_82;
            MR_Word STATE_VARIABLE_RefinedGoalMap_24_85;
            MR_Word STATE_VARIABLE_RefinedGoalMap_25_86;
            MR_Word STATE_VARIABLE_RefinedGoalMap_26_87;
            MR_Word STATE_VARIABLE_RefinedGoalMap_30_91;
            MR_Word ToInsertGoalsThen_83;
            MR_Word Var_88;
            MR_Box conv0_ToInsertGoalsThen_83;
            MR_Word ToInsertGoalsElse_84;
            MR_Word Var_93;
            MR_Box conv1_ToInsertGoalsElse_84;

            GoalId_73 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_9);
            transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Cond0_45, &Cond_48, STATE_VARIABLE_RefinedGoalMap_0_56, &STATE_VARIABLE_RefinedGoalMap_24_85);
            transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Then0_46, &Then1_81, STATE_VARIABLE_RefinedGoalMap_24_85, &STATE_VARIABLE_RefinedGoalMap_25_86);
            transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(Else0_47, &Else1_82, STATE_VARIABLE_RefinedGoalMap_25_86, &STATE_VARIABLE_RefinedGoalMap_26_87);
            {
              Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_88, 0) = ((MR_Box) (GoalId_73));
              MR_hl_field(0, Var_88, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), STATE_VARIABLE_RefinedGoalMap_26_87, ((MR_Box) (Var_88)), &conv0_ToInsertGoalsThen_83);
            if (succeeded)
            {
              ToInsertGoalsThen_83 = ((MR_Word) (conv0_ToInsertGoalsThen_83));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              transform_hlds__unneeded_code__insert_refine_goals_3_p_0(ToInsertGoalsThen_83, Then1_81, &Then_49);
              mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), ((MR_Box) (Var_88)), STATE_VARIABLE_RefinedGoalMap_26_87, &STATE_VARIABLE_RefinedGoalMap_30_91);
            }
            else
            {
              Then_49 = Then1_81;
              STATE_VARIABLE_RefinedGoalMap_30_91 = STATE_VARIABLE_RefinedGoalMap_26_87;
            }
            {
              Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_93, 0) = ((MR_Box) (GoalId_73));
              MR_hl_field(0, Var_93, 1) = ((MR_Box) ((MR_Integer) 2));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), STATE_VARIABLE_RefinedGoalMap_30_91, ((MR_Box) (Var_93)), &conv1_ToInsertGoalsElse_84);
            if (succeeded)
            {
              ToInsertGoalsElse_84 = ((MR_Word) (conv1_ToInsertGoalsElse_84));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              transform_hlds__unneeded_code__insert_refine_goals_3_p_0(ToInsertGoalsElse_84, Else1_82, &Else_50);
              mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[1]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[1]), ((MR_Box) (Var_93)), STATE_VARIABLE_RefinedGoalMap_30_91, STATE_VARIABLE_RefinedGoalMap_57);
            }
            else
            {
              Else_50 = Else1_82;
              *STATE_VARIABLE_RefinedGoalMap_57 = STATE_VARIABLE_RefinedGoalMap_30_91;
            }
            {
              GoalExpr_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_72, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_72, 1) = ((MR_Box) (Quant_44));
              MR_hl_field(3, GoalExpr_72, 2) = ((MR_Box) (Cond_48));
              MR_hl_field(3, GoalExpr_72, 3) = ((MR_Box) (Then_49));
              MR_hl_field(3, GoalExpr_72, 4) = ((MR_Box) (Else_50));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_72));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
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

static void MR_CALL 
transform_hlds__unneeded_code__insert_refine_goals_3_p_0(
  MR_Word ToInsertGoals_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  MR_Word Conj_7;
  MR_Word GoalInfo0_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Goal0_5));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ToInsertGoals_4, Var_10, &Conj_7);
  GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_7, GoalInfo0_9, Goal_6);
}

static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_51_93_95_48_11_p_0(
  MR_Word UnneededInfo_12,
  MR_Word InitInstMap_13,
  MR_Word Goals0_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_22,
  MR_Word * STATE_VARIABLE_WhereNeededMap_23,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_24,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_25,
  MR_Word STATE_VARIABLE_Changed_0_26,
  MR_Word * STATE_VARIABLE_Changed_27)
{
  MR_Word RevBracketedGoals_20;
  MR_Word RevGoals_21;

  transform_hlds__unneeded_code__build_bracketed_rev_conj_4_p_0(Goals0_15, InitInstMap_13, (MR_Word) ((MR_Unsigned) 0U), &RevBracketedGoals_20);
  transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(UnneededInfo_12, RevBracketedGoals_20, &RevGoals_21, STATE_VARIABLE_WhereNeededMap_0_22, STATE_VARIABLE_WhereNeededMap_23, STATE_VARIABLE_RefinedGoalMap_0_24, STATE_VARIABLE_RefinedGoalMap_25, STATE_VARIABLE_Changed_0_26, STATE_VARIABLE_Changed_27);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevGoals_21, Goals_16);
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(
  MR_Word UnneededInfo_18,
  MR_Word CurrentId_19,
  MR_Word BranchPoint_20,
  MR_Word InitInstMap_21,
  MR_Word FinalInstMap_22,
  MR_Word Cond0_23,
  MR_Word * Cond_24,
  MR_Word Then0_25,
  MR_Word * Then_26,
  MR_Word Else0_27,
  MR_Word * Else_28,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_45,
  MR_Word * STATE_VARIABLE_WhereNeededMap_46,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_47,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_48,
  MR_Word STATE_VARIABLE_Changed_0_49,
  MR_Word * STATE_VARIABLE_Changed_50)
{
  MR_Word CondInfo0_33 = ((MR_Word) ((MR_hl_field(0, Cond0_23, 1))));
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
  MR_Word STATE_VARIABLE_RefinedGoalMap_51_51;
  MR_Word STATE_VARIABLE_Changed_52_52;
  MR_Word STATE_VARIABLE_RefinedGoalMap_53_53;
  MR_Word STATE_VARIABLE_Changed_54_54;
  MR_Word WhereNeededList1_62;

  InstMapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo0_33);
  hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_34, InitInstMap_21, &InstMapCond_35);
  transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_18, InitInstMap_21, FinalInstMap_22, Else0_27, Else_28, STATE_VARIABLE_WhereNeededMap_0_45, &WhereNeededMapElse_36, STATE_VARIABLE_RefinedGoalMap_0_47, &STATE_VARIABLE_RefinedGoalMap_51_51, STATE_VARIABLE_Changed_0_49, &STATE_VARIABLE_Changed_52_52);
  transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_18, InstMapCond_35, FinalInstMap_22, Then0_25, Then_26, STATE_VARIABLE_WhereNeededMap_0_45, &WhereNeededMapThen_37, STATE_VARIABLE_RefinedGoalMap_51_51, &STATE_VARIABLE_RefinedGoalMap_53_53, STATE_VARIABLE_Changed_52_52, &STATE_VARIABLE_Changed_54_54);
  ContainingGoalMap_38 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_18, 3))));
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), &BranchNeededMap0_39);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), WhereNeededMapElse_36, &WhereNeededListElse_40);
  transform_hlds__unneeded_code__add_alt_start_7_p_0(ContainingGoalMap_38, WhereNeededListElse_40, BranchPoint_20, (MR_Integer) 2, CurrentId_19, BranchNeededMap0_39, &BranchNeededMap1_41);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), WhereNeededMapThen_37, &WhereNeededListThen_42);
  transform_hlds__unneeded_code__add_alt_start_7_p_0(ContainingGoalMap_38, WhereNeededListThen_42, BranchPoint_20, (MR_Integer) 1, CurrentId_19, BranchNeededMap1_41, &BranchNeededMap_43);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), STATE_VARIABLE_WhereNeededMap_0_45, &WhereNeededList1_62);
  transform_hlds__unneeded_code__add_where_needed_list_5_p_0(ContainingGoalMap_38, WhereNeededList1_62, CurrentId_19, BranchNeededMap_43, &WhereNeededMapCond_44);
  transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_18, InitInstMap_21, InstMapCond_35, Cond0_23, Cond_24, WhereNeededMapCond_44, STATE_VARIABLE_WhereNeededMap_46, STATE_VARIABLE_RefinedGoalMap_53_53, STATE_VARIABLE_RefinedGoalMap_48, STATE_VARIABLE_Changed_54_54, STATE_VARIABLE_Changed_50);
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(
  MR_Word UnneededInfo_1,
  MR_Word CurrentId_2,
  MR_Word StartWhereNeededMap_3,
  MR_Word InitInstMap_4,
  MR_Word FinalInstMap_5,
  MR_Word BranchPoint_6,
  MR_Integer BranchNum_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_10,
  MR_Word * STATE_VARIABLE_WhereNeededMap_11,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_12,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_13,
  MR_Word STATE_VARIABLE_Changed_0_14,
  MR_Word * STATE_VARIABLE_Changed_15)
{
  if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_15 = STATE_VARIABLE_Changed_0_14;
    *STATE_VARIABLE_RefinedGoalMap_13 = STATE_VARIABLE_RefinedGoalMap_0_12;
    *STATE_VARIABLE_WhereNeededMap_11 = STATE_VARIABLE_WhereNeededMap_0_10;
  }
  else
  {
    MR_Word Case0_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 0))));
    MR_Word Cases0_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 1))));
    MR_Word Case_41;
    MR_Word Cases_42;
    MR_Word MainConsId_46 = ((MR_Word) ((MR_hl_field(0, Case0_39, 0))));
    MR_Word OtherConsIds_47 = ((MR_Word) ((MR_hl_field(0, Case0_39, 1))));
    MR_Word Goal0_48 = ((MR_Word) ((MR_hl_field(0, Case0_39, 2))));
    MR_Word Goal_49;
    MR_Word WhereNeededMapFirst_50;
    MR_Word WhereNeededList_51;
    MR_Word ContainingGoalMap_52;
    MR_Word STATE_VARIABLE_RefinedGoalMap_59_59;
    MR_Word STATE_VARIABLE_Changed_60_60;
    MR_Word STATE_VARIABLE_WhereNeededMap_61_61;
    MR_Integer Var_62;

    transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_1, InitInstMap_4, FinalInstMap_5, Goal0_48, &Goal_49, StartWhereNeededMap_3, &WhereNeededMapFirst_50, STATE_VARIABLE_RefinedGoalMap_0_12, &STATE_VARIABLE_RefinedGoalMap_59_59, STATE_VARIABLE_Changed_0_14, &STATE_VARIABLE_Changed_60_60);
    {
      Case_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_41, 0) = ((MR_Box) (MainConsId_46));
      MR_hl_field(0, Case_41, 1) = ((MR_Box) (OtherConsIds_47));
      MR_hl_field(0, Case_41, 2) = ((MR_Box) (Goal_49));
    }
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), WhereNeededMapFirst_50, &WhereNeededList_51);
    ContainingGoalMap_52 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_1, 3))));
    transform_hlds__unneeded_code__add_alt_start_7_p_0(ContainingGoalMap_52, WhereNeededList_51, BranchPoint_6, BranchNum_7, CurrentId_2, STATE_VARIABLE_WhereNeededMap_0_10, &STATE_VARIABLE_WhereNeededMap_61_61);
    Var_62 = (MR_Integer) ((MR_Unsigned) BranchNum_7 + (MR_Unsigned) 1);
    transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(UnneededInfo_1, CurrentId_2, StartWhereNeededMap_3, InitInstMap_4, FinalInstMap_5, BranchPoint_6, Var_62, Cases0_40, &Cases_42, STATE_VARIABLE_WhereNeededMap_61_61, STATE_VARIABLE_WhereNeededMap_11, STATE_VARIABLE_RefinedGoalMap_59_59, STATE_VARIABLE_RefinedGoalMap_13, STATE_VARIABLE_Changed_60_60, STATE_VARIABLE_Changed_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_41));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_42));
    }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(
  MR_Word UnneededInfo_1,
  MR_Word CurrentId_2,
  MR_Word StartWhereNeededMap_3,
  MR_Word InitInstMap_4,
  MR_Word FinalInstMap_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_8,
  MR_Word * STATE_VARIABLE_WhereNeededMap_9,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_10,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_11,
  MR_Word STATE_VARIABLE_Changed_0_12,
  MR_Word * STATE_VARIABLE_Changed_13)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_13 = STATE_VARIABLE_Changed_0_12;
    *STATE_VARIABLE_RefinedGoalMap_11 = STATE_VARIABLE_RefinedGoalMap_0_10;
    *STATE_VARIABLE_WhereNeededMap_9 = STATE_VARIABLE_WhereNeededMap_0_8;
  }
  else
  {
    MR_Word Goal0_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
    MR_Word Goals0_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
    MR_Word Goal_35;
    MR_Word Goals_36;
    MR_Word WhereNeededMapFirst_40;
    MR_Word WhereNeededList_41;
    MR_Word ContainingGoalMap_42;
    MR_Word STATE_VARIABLE_RefinedGoalMap_49_49;
    MR_Word STATE_VARIABLE_Changed_50_50;
    MR_Word STATE_VARIABLE_WhereNeededMap_51_51;

    transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_1, InitInstMap_4, FinalInstMap_5, Goal0_33, &Goal_35, StartWhereNeededMap_3, &WhereNeededMapFirst_40, STATE_VARIABLE_RefinedGoalMap_0_10, &STATE_VARIABLE_RefinedGoalMap_49_49, STATE_VARIABLE_Changed_0_12, &STATE_VARIABLE_Changed_50_50);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), WhereNeededMapFirst_40, &WhereNeededList_41);
    ContainingGoalMap_42 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_1, 3))));
    transform_hlds__unneeded_code__add_where_needed_list_5_p_0(ContainingGoalMap_42, WhereNeededList_41, CurrentId_2, STATE_VARIABLE_WhereNeededMap_0_8, &STATE_VARIABLE_WhereNeededMap_51_51);
    transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(UnneededInfo_1, CurrentId_2, StartWhereNeededMap_3, InitInstMap_4, FinalInstMap_5, Goals0_34, &Goals_36, STATE_VARIABLE_WhereNeededMap_51_51, STATE_VARIABLE_WhereNeededMap_9, STATE_VARIABLE_RefinedGoalMap_49_49, STATE_VARIABLE_RefinedGoalMap_11, STATE_VARIABLE_Changed_50_50, STATE_VARIABLE_Changed_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_35));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_36));
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
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_6,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_7,
  MR_Word STATE_VARIABLE_Changed_0_8,
  MR_Word * STATE_VARIABLE_Changed_9)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_9 = STATE_VARIABLE_Changed_0_8;
    *STATE_VARIABLE_RefinedGoalMap_7 = STATE_VARIABLE_RefinedGoalMap_0_6;
    *STATE_VARIABLE_WhereNeededMap_5 = STATE_VARIABLE_WhereNeededMap_0_4;
  }
  else
  {
    MR_Word RevBracketedGoal_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word RevBracketedGoals_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word RevGoal0_27 = ((MR_Word) ((MR_hl_field(0, RevBracketedGoal_21, 0))));
    MR_Word InitInstMap_28 = ((MR_Word) ((MR_hl_field(0, RevBracketedGoal_21, 1))));
    MR_Word FinalInstMap_29 = ((MR_Word) ((MR_hl_field(0, RevBracketedGoal_21, 2))));
    MR_Word RevGoal1_30;
    MR_Word RevGoals1_31;
    MR_Word STATE_VARIABLE_WhereNeededMap_39_39;
    MR_Word STATE_VARIABLE_RefinedGoalMap_40_40;
    MR_Word STATE_VARIABLE_Changed_41_41;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_1, InitInstMap_28, FinalInstMap_29, RevGoal0_27, &RevGoal1_30, STATE_VARIABLE_WhereNeededMap_0_4, &STATE_VARIABLE_WhereNeededMap_39_39, STATE_VARIABLE_RefinedGoalMap_0_6, &STATE_VARIABLE_RefinedGoalMap_40_40, STATE_VARIABLE_Changed_0_8, &STATE_VARIABLE_Changed_41_41);
    transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(UnneededInfo_1, RevBracketedGoals_22, &RevGoals1_31, STATE_VARIABLE_WhereNeededMap_39_39, STATE_VARIABLE_WhereNeededMap_5, STATE_VARIABLE_RefinedGoalMap_40_40, STATE_VARIABLE_RefinedGoalMap_7, STATE_VARIABLE_Changed_41_41, STATE_VARIABLE_Changed_9);
    Var_45 = ((MR_Word) ((MR_hl_field(0, RevGoal1_30, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_45, 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_46 = ((MR_Unsigned) ((MR_hl_field(3, Var_45, 1))) & (MR_Integer) 1);
      Var_47 = ((MR_Word) ((MR_hl_field(3, Var_45, 2))));
      succeeded = (Var_46 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      *HeadVar__3_3 = RevGoals1_31;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (RevGoal1_30));
        MR_hl_field(1, base, 1) = ((MR_Box) (RevGoals1_31));
      }
  }
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(
  MR_Word UnneededInfo_12,
  MR_Word InitInstMap_13,
  MR_Word FinalInstMap_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_87,
  MR_Word * STATE_VARIABLE_WhereNeededMap_88,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_89,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_90,
  MR_Word STATE_VARIABLE_Changed_0_91,
  MR_Word * STATE_VARIABLE_Changed_92)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 0))));
  MR_Word GoalInfo0_21 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_82 = (MR_Word) ((MR_Word) (GoalExpr0_20));
        MR_Word SubGoal_83;
        MR_Word GoalExpr_138;

        transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_12, InitInstMap_13, FinalInstMap_14, SubGoal0_82, &SubGoal_83, STATE_VARIABLE_WhereNeededMap_0_87, STATE_VARIABLE_WhereNeededMap_88, STATE_VARIABLE_RefinedGoalMap_0_89, STATE_VARIABLE_RefinedGoalMap_90, STATE_VARIABLE_Changed_0_91, STATE_VARIABLE_Changed_92);
        GoalExpr_138 = (MR_Word) ((MR_Word) (SubGoal_83));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_16 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_138));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_21));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *Goal_16 = Goal0_15;
        transform_hlds__unneeded_code__demand_inputs_6_p_0(UnneededInfo_12, InitInstMap_13, *Goal_16, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_WhereNeededMap_0_87, STATE_VARIABLE_WhereNeededMap_88);
        *STATE_VARIABLE_RefinedGoalMap_90 = STATE_VARIABLE_RefinedGoalMap_0_89;
        *STATE_VARIABLE_Changed_92 = STATE_VARIABLE_Changed_0_91;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_20, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            *Goal_16 = Goal0_15;
            transform_hlds__unneeded_code__demand_inputs_6_p_0(UnneededInfo_12, InitInstMap_13, *Goal_16, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_WhereNeededMap_0_87, STATE_VARIABLE_WhereNeededMap_88);
            *STATE_VARIABLE_RefinedGoalMap_90 = STATE_VARIABLE_RefinedGoalMap_0_89;
            *STATE_VARIABLE_Changed_92 = STATE_VARIABLE_Changed_0_91;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_45 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_20, 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 2))));

            switch (ConjType_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *Goal_16 = Goal0_15;
                  transform_hlds__unneeded_code__demand_inputs_6_p_0(UnneededInfo_12, InitInstMap_13, *Goal_16, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_WhereNeededMap_0_87, STATE_VARIABLE_WhereNeededMap_88);
                  *STATE_VARIABLE_RefinedGoalMap_90 = STATE_VARIABLE_RefinedGoalMap_0_89;
                  *STATE_VARIABLE_Changed_92 = STATE_VARIABLE_Changed_0_91;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Conjuncts_47;
                  MR_Word GoalExpr_48;

                  transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_51_93_95_48_11_p_0(UnneededInfo_12, InitInstMap_13, Conjuncts0_46, &Conjuncts_47, STATE_VARIABLE_WhereNeededMap_0_87, STATE_VARIABLE_WhereNeededMap_88, STATE_VARIABLE_RefinedGoalMap_0_89, STATE_VARIABLE_RefinedGoalMap_90, STATE_VARIABLE_Changed_0_91, STATE_VARIABLE_Changed_92);
                  {
                    GoalExpr_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, GoalExpr_48, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(3, GoalExpr_48, 2) = ((MR_Box) (Conjuncts_47));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_16 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_48));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_21));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 1))));
            MR_Word StartWhereNeededMap_73;
            MR_Word Disjuncts_74;
            MR_Word GoalExpr_133;
            MR_Word GoalId_134;

            GoalId_134 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_21);
            mercury__map__map_values_only_3_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[10]), STATE_VARIABLE_WhereNeededMap_0_87, &StartWhereNeededMap_73);
            transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(UnneededInfo_12, GoalId_134, StartWhereNeededMap_73, InitInstMap_13, FinalInstMap_14, Disjuncts0_72, &Disjuncts_74, StartWhereNeededMap_73, STATE_VARIABLE_WhereNeededMap_88, STATE_VARIABLE_RefinedGoalMap_0_89, STATE_VARIABLE_RefinedGoalMap_90, STATE_VARIABLE_Changed_0_91, STATE_VARIABLE_Changed_92);
            {
              GoalExpr_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_133, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_133, 1) = ((MR_Box) (Disjuncts_74));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_133));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_21));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 1))));
            MR_Word CanFail_50 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_20, 2))) & (MR_Integer) 1);
            MR_Word Cases0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 3))));
            MR_Word ContainingGoalMap_52 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_12, 3))));
            MR_Word MaybeNumAlt_66;
            MR_Word GoalId_67;
            MR_Word BranchPoint_68;
            MR_Word BranchNeededMap0_69;
            MR_Word Cases_70;
            MR_Word BranchNeededMap_71;
            MR_Word Var_103;
            MR_Word STATE_VARIABLE_WhereNeededMap_105_105;
            MR_Word STATE_VARIABLE_WhereNeededMap_109_109;
            MR_Word GoalExpr_132;
            MR_Word MaybeNumAltPrime_65;
            MR_Word TypeCtorInfo_148_148;
            MR_Word TypeCtorInfo_149_149;
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
              FirstCase0_53 = ((MR_Word) ((MR_hl_field(1, Cases0_51, 0))));
              FirstCaseGoal0_57 = ((MR_Word) ((MR_hl_field(0, FirstCase0_53, 2))));
              FirstCaseGoalInfo0_59 = ((MR_Word) ((MR_hl_field(0, FirstCaseGoal0_57, 1))));
              FirstCaseGoalId0_60 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(FirstCaseGoalInfo0_59);
              TypeCtorInfo_148_148 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
              TypeCtorInfo_149_149 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0);
              mercury__map__lookup_3_p_0(TypeCtorInfo_148_148, TypeCtorInfo_149_149, ContainingGoalMap_52, ((MR_Box) (FirstCaseGoalId0_60)), &conv2_GoalContaining0_61);
              GoalContaining0_61 = ((MR_Word) (conv2_GoalContaining0_61));
              succeeded = (GoalContaining0_61 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FirstCaseLastStep_63 = ((MR_Word) ((MR_hl_field(1, GoalContaining0_61, 1))));
                succeeded = ((((MR_tag((MR_Word) FirstCaseLastStep_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstCaseLastStep_63, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                  MaybeNumAltPrime_65 = ((MR_Word) ((MR_hl_field(3, FirstCaseLastStep_63, 2))));
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
              Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_103, 0) = ((MR_Box) (MaybeNumAlt_66));
            }
            {
              BranchPoint_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BranchPoint_68, 0) = ((MR_Box) (GoalId_67));
              MR_hl_field(0, BranchPoint_68, 1) = ((MR_Box) (Var_103));
            }
            mercury__map__map_values_only_3_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[12]), STATE_VARIABLE_WhereNeededMap_0_87, &STATE_VARIABLE_WhereNeededMap_105_105);
            mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), &BranchNeededMap0_69);
            transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(UnneededInfo_12, GoalId_67, STATE_VARIABLE_WhereNeededMap_105_105, InitInstMap_13, FinalInstMap_14, BranchPoint_68, (MR_Integer) 1, Cases0_51, &Cases_70, BranchNeededMap0_69, &BranchNeededMap_71, STATE_VARIABLE_RefinedGoalMap_0_89, STATE_VARIABLE_RefinedGoalMap_90, STATE_VARIABLE_Changed_0_91, STATE_VARIABLE_Changed_92);
            transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(ContainingGoalMap_52, GoalId_67, STATE_VARIABLE_WhereNeededMap_105_105, BranchNeededMap_71, &STATE_VARIABLE_WhereNeededMap_109_109);
            transform_hlds__unneeded_code__demand_var_6_p_0(ContainingGoalMap_52, GoalId_67, (MR_Word) ((MR_Unsigned) 0U), SwitchVar_49, STATE_VARIABLE_WhereNeededMap_109_109, STATE_VARIABLE_WhereNeededMap_88);
            {
              GoalExpr_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_132, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_132, 1) = ((MR_Box) (SwitchVar_49));
              MR_hl_field(3, GoalExpr_132, 2) = (MR_Box) ((MR_Unsigned) (CanFail_50));
              MR_hl_field(3, GoalExpr_132, 3) = ((MR_Box) (Cases_70));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_132));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_21));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_84 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 1))));
            MR_Word SubGoal0_144 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 2))));
            MR_Word Var_126;

            succeeded = ((((MR_tag((MR_Word) Reason_84)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_84, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_126 = ((MR_Unsigned) ((MR_hl_field(3, Reason_84, 2))) & (MR_Integer) 3);
              succeeded = (Var_126 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              *Goal_16 = Goal0_15;
              *STATE_VARIABLE_Changed_92 = STATE_VARIABLE_Changed_0_91;
              *STATE_VARIABLE_RefinedGoalMap_90 = STATE_VARIABLE_RefinedGoalMap_0_89;
              *STATE_VARIABLE_WhereNeededMap_88 = STATE_VARIABLE_WhereNeededMap_0_87;
            }
            else
            {
              MR_Word GoalExpr_139;
              MR_Word SubGoal_140;

              transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(UnneededInfo_12, InitInstMap_13, FinalInstMap_14, SubGoal0_144, &SubGoal_140, STATE_VARIABLE_WhereNeededMap_0_87, STATE_VARIABLE_WhereNeededMap_88, STATE_VARIABLE_RefinedGoalMap_0_89, STATE_VARIABLE_RefinedGoalMap_90, STATE_VARIABLE_Changed_0_91, STATE_VARIABLE_Changed_92);
              {
                GoalExpr_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_139, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_139, 1) = ((MR_Box) (Reason_84));
                MR_hl_field(3, GoalExpr_139, 2) = ((MR_Box) (SubGoal_140));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_16 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_139));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_21));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Quant_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 1))));
            MR_Word Cond0_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 2))));
            MR_Word Then0_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 3))));
            MR_Word Else0_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 4))));
            MR_Word Cond_79;
            MR_Word Then_80;
            MR_Word Else_81;
            MR_Word STATE_VARIABLE_WhereNeededMap_119_119;
            MR_Word GoalExpr_135;
            MR_Word GoalId_136;
            MR_Word BranchPoint_137;

            GoalId_136 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_21);
            {
              BranchPoint_137 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BranchPoint_137, 0) = ((MR_Box) (GoalId_136));
              MR_hl_field(0, BranchPoint_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__map__map_values_only_3_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[11]), STATE_VARIABLE_WhereNeededMap_0_87, &STATE_VARIABLE_WhereNeededMap_119_119);
            transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(UnneededInfo_12, GoalId_136, BranchPoint_137, InitInstMap_13, FinalInstMap_14, Cond0_76, &Cond_79, Then0_77, &Then_80, Else0_78, &Else_81, STATE_VARIABLE_WhereNeededMap_119_119, STATE_VARIABLE_WhereNeededMap_88, STATE_VARIABLE_RefinedGoalMap_0_89, STATE_VARIABLE_RefinedGoalMap_90, STATE_VARIABLE_Changed_0_91, STATE_VARIABLE_Changed_92);
            {
              GoalExpr_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_135, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_135, 1) = ((MR_Box) (Quant_75));
              MR_hl_field(3, GoalExpr_135, 2) = ((MR_Box) (Cond_79));
              MR_hl_field(3, GoalExpr_135, 3) = ((MR_Box) (Then_80));
              MR_hl_field(3, GoalExpr_135, 4) = ((MR_Box) (Else_81));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_135));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_21));
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

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_WhereNeededMap_7;

  transform_hlds__unneeded_code__undemand_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_WhereNeededMap_7);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_WhereNeededMap_7));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_RefinedGoalMap_13;

  transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_RefinedGoalMap_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_RefinedGoalMap_13));
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_WhereNeededMap_15;

  transform_hlds__unneeded_code__demand_var_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_WhereNeededMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_WhereNeededMap_15));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(
  MR_Word UnneededInfo_12,
  MR_Word InitInstMap_13,
  MR_Word FinalInstMap_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_31,
  MR_Word * STATE_VARIABLE_WhereNeededMap_32,
  MR_Word STATE_VARIABLE_RefinedGoalMap_0_33,
  MR_Word * STATE_VARIABLE_RefinedGoalMap_34,
  MR_Word STATE_VARIABLE_Changed_0_35,
  MR_Word * STATE_VARIABLE_Changed_36)
{
  MR_bool succeeded;
  MR_Word WhereInfo_20;
  MR_Word ModuleInfo_30;
  MR_Word STATE_VARIABLE_WhereNeededMap_37_37;
  MR_Word STATE_VARIABLE_WhereNeededMap_51_51;
  MR_Word GoalInfo_106;
  MR_Word NonLocalSet_107;
  MR_Word NonLocals_108;
  MR_Word VirginOutputs_109;
  MR_Word Var_110;
  MR_Box conv5_STATE_VARIABLE_WhereNeededMap_51_51;
  MR_Word Var_52;

  transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(UnneededInfo_12, InitInstMap_13, FinalInstMap_14, Goal0_15, STATE_VARIABLE_WhereNeededMap_0_31, &WhereInfo_20);
  if ((WhereInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
    transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(UnneededInfo_12, InitInstMap_13, FinalInstMap_14, Goal0_15, Goal_16, STATE_VARIABLE_WhereNeededMap_0_31, &STATE_VARIABLE_WhereNeededMap_37_37, STATE_VARIABLE_RefinedGoalMap_0_33, STATE_VARIABLE_RefinedGoalMap_34, STATE_VARIABLE_Changed_0_35, STATE_VARIABLE_Changed_36);
  else
  {
    MR_Word Branches_21 = ((MR_Word) ((MR_hl_field(1, WhereInfo_20, 0))));
    MR_Word BranchList_22;
    MR_Word Options_23;
    MR_Word Debug_24;
    MR_Word Var_41;
    MR_Word GoalInfo_87 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 1))));
    MR_Word NonLocalSet_88;
    MR_Word GoalId_89;
    MR_Word NonLocals_90;
    MR_Word ModuleInfo_91;
    MR_Word Inputs_92;
    MR_Word ContainingGoalMap_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Box conv1_STATE_VARIABLE_WhereNeededMap_37_37;
    MR_Box conv3_STATE_VARIABLE_RefinedGoalMap_34;

    NonLocalSet_88 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_87);
    GoalId_89 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_87);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalSet_88, &NonLocals_90);
    ModuleInfo_91 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_12, 0))));
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_94, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[1]));
      MR_hl_field(0, Var_94, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1));
      MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_94, 3) = ((MR_Box) (ModuleInfo_91));
      MR_hl_field(0, Var_94, 4) = ((MR_Box) (InitInstMap_13));
    }
    mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), Var_94, NonLocals_90, &Inputs_92);
    ContainingGoalMap_93 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_12, 3))));
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_95, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_4[1]));
      MR_hl_field(0, Var_95, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2));
      MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_95, 3) = ((MR_Box) (ContainingGoalMap_93));
      MR_hl_field(0, Var_95, 4) = ((MR_Box) (GoalId_89));
      MR_hl_field(0, Var_95, 5) = ((MR_Box) (WhereInfo_20));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[0]), Var_95, Inputs_92, ((MR_Box) (STATE_VARIABLE_WhereNeededMap_0_31)), &conv1_STATE_VARIABLE_WhereNeededMap_37_37);
    STATE_VARIABLE_WhereNeededMap_37_37 = ((MR_Word) (conv1_STATE_VARIABLE_WhereNeededMap_37_37));
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), Branches_21, &BranchList_22);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_7[0]));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_3));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_41, 3) = ((MR_Box) (Goal0_15));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[2]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[3]), Var_41, BranchList_22, ((MR_Box) (STATE_VARIABLE_RefinedGoalMap_0_33)), &conv3_STATE_VARIABLE_RefinedGoalMap_34);
    *STATE_VARIABLE_RefinedGoalMap_34 = ((MR_Word) (conv3_STATE_VARIABLE_RefinedGoalMap_34));
    *Goal_16 = hlds__make_goal__true_goal_0_f_0();
    *STATE_VARIABLE_Changed_36 = (MR_Integer) 1;
    Options_23 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_12, 2))));
    Debug_24 = ((MR_Word) ((MR_hl_field(0, Options_23, 1))));
    if (!((Debug_24 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Stream_25 = ((MR_Word) ((MR_hl_field(1, Debug_24, 0))));
      MR_Word GoalInfo0_27 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 1))));
      MR_Unsigned GoalIdNum0_28;
      MR_Word Var_44;
      MR_String Var_78;

      Var_44 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_27);
      GoalIdNum0_28 = (MR_Unsigned) (Var_44);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "unneeded code at goal id ");
      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_3[0]), (MR_Integer) 1, GoalIdNum0_28, &Var_78);
      mercury__io__write_string_4_p_0(Stream_25, Var_78);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "\n");
    }
  }
  ModuleInfo_30 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_12, 0))));
  GoalInfo_106 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 1))));
  NonLocalSet_107 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_106);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalSet_107, &NonLocals_108);
  {
    Var_110 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_110, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[1]));
    MR_hl_field(0, Var_110, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_4));
    MR_hl_field(0, Var_110, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_110, 3) = ((MR_Box) (ModuleInfo_30));
    MR_hl_field(0, Var_110, 4) = ((MR_Box) (InitInstMap_13));
  }
  mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), Var_110, NonLocals_108, &VirginOutputs_109);
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[8]), VirginOutputs_109, ((MR_Box) (STATE_VARIABLE_WhereNeededMap_37_37)), &conv5_STATE_VARIABLE_WhereNeededMap_51_51);
  STATE_VARIABLE_WhereNeededMap_51_51 = ((MR_Word) (conv5_STATE_VARIABLE_WhereNeededMap_51_51));
  Var_52 = hlds__hlds_goal__goal_get_purity_1_f_0(*Goal_16);
  succeeded = (Var_52 == (MR_Integer) 2);
  if (succeeded)
    mercury__map__map_values_only_3_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[9]), STATE_VARIABLE_WhereNeededMap_51_51, STATE_VARIABLE_WhereNeededMap_32);
  else
    *STATE_VARIABLE_WhereNeededMap_32 = STATE_VARIABLE_WhereNeededMap_51_51;
}

static void MR_CALL 
transform_hlds__unneeded_code__build_bracketed_rev_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InitInstMap_2,
  MR_Word STATE_VARIABLE_RevBracketedGoals_0_3,
  MR_Word * STATE_VARIABLE_RevBracketedGoals_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevBracketedGoals_4 = STATE_VARIABLE_RevBracketedGoals_0_3;
    else
    {
      MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

      succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InitInstMap_2);
      if (succeeded)
        *STATE_VARIABLE_RevBracketedGoals_4 = STATE_VARIABLE_RevBracketedGoals_0_3;
      else
      {
        MR_Word GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Goal_9, 1))));
        MR_Word InstMapDelta_15;
        MR_Word AfterGoalInstMap_16;
        MR_Word BracketedGoal_17;
        MR_Word STATE_VARIABLE_RevBracketedGoals_20_20;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_InitInstMap_2;
        MR_Word next_value_of_STATE_VARIABLE_RevBracketedGoals_0_3;

        InstMapDelta_15 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_14);
        hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_15, InitInstMap_2, &AfterGoalInstMap_16);
        {
          BracketedGoal_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BracketedGoal_17, 0) = ((MR_Box) (Goal_9));
          MR_hl_field(0, BracketedGoal_17, 1) = ((MR_Box) (InitInstMap_2));
          MR_hl_field(0, BracketedGoal_17, 2) = ((MR_Box) (AfterGoalInstMap_16));
        }
        {
          STATE_VARIABLE_RevBracketedGoals_20_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevBracketedGoals_20_20, 0) = ((MR_Box) (BracketedGoal_17));
          MR_hl_field(1, STATE_VARIABLE_RevBracketedGoals_20_20, 1) = ((MR_Box) (STATE_VARIABLE_RevBracketedGoals_0_3));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals_10;
        next_value_of_InitInstMap_2 = AfterGoalInstMap_16;
        next_value_of_STATE_VARIABLE_RevBracketedGoals_0_3 = STATE_VARIABLE_RevBracketedGoals_20_20;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        InitInstMap_2 = next_value_of_InitInstMap_2;
        STATE_VARIABLE_RevBracketedGoals_0_3 = next_value_of_STATE_VARIABLE_RevBracketedGoals_0_3;
        continue;
      }
    }
    break;
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
  MR_Word WhereNeededList1_11;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), WhereNeededMap1_8, &WhereNeededList1_11);
  transform_hlds__unneeded_code__add_where_needed_list_5_p_0(ContainingGoalMap_6, WhereNeededList1_11, CurrentId_7, WhereNeededMap2_9, WhereNeededMap_10);
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
      MR_Word WhereNeededList_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word BranchWhere_25;
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word STATE_VARIABLE_WhereNeededMap_32_32;
      MR_Word OldWhere_27;
      MR_Box conv0_OldWhere_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_WhereNeededMap_0_6;

      Var_16 = ((MR_Word) ((MR_hl_field(0, Var_31, 0))));
      BranchWhere0_17 = ((MR_Word) ((MR_hl_field(0, Var_31, 1))));
      if ((BranchWhere0_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word BranchNumSet_23;
        MR_Word BranchMap_24;

        BranchNumSet_23 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (BranchNum_4)));
        BranchMap_24 = mercury__map__singleton_2_f_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), ((MR_Box) (BranchPoint_3)), ((MR_Box) (BranchNumSet_23)));
        {
          BranchWhere_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, BranchWhere_25, 0) = ((MR_Box) (BranchMap_24));
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
        MR_Word BranchesA_42 = ((MR_Word) ((MR_hl_field(1, BranchWhere_25, 0))));

        if ((OldWhere_27 == (MR_Word) ((MR_Unsigned) 0U)))
          CombinedWhere_28 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word BranchesB_43 = ((MR_Word) ((MR_hl_field(1, OldWhere_27, 0))));
          MR_Word BranchesList_44;

          mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), BranchesA_42, &BranchesList_44);
          transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(ContainingGoalMap_1, CurrentId_5, BranchesList_44, BranchesB_43, &CombinedWhere_28);
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
      MR_Word WhereNeededList_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word STATE_VARIABLE_WhereNeededMap_22_22;
      MR_Word OldWhere_17;
      MR_Box conv0_OldWhere_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_WhereNeededMap_0_4;

      Var_12 = ((MR_Word) ((MR_hl_field(0, Var_21, 0))));
      BranchWhere_13 = ((MR_Word) ((MR_hl_field(0, Var_21, 1))));
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
          MR_Word BranchesA_29 = ((MR_Word) ((MR_hl_field(1, BranchWhere_13, 0))));

          if ((OldWhere_17 == (MR_Word) ((MR_Unsigned) 0U)))
            CombinedWhere_18 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word BranchesB_30 = ((MR_Word) ((MR_hl_field(1, OldWhere_17, 0))));
            MR_Word BranchesList_31;

            mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), BranchesA_29, &BranchesList_31);
            transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(ContainingGoalMap_1, CurrentId_3, BranchesList_31, BranchesB_30, &CombinedWhere_18);
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
      MR_Word BranchesA_22 = ((MR_Word) ((MR_hl_field(1, WhereNeeded_9, 0))));

      if ((Where0_12 == (MR_Word) ((MR_Unsigned) 0U)))
        Where_13 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word BranchesB_23 = ((MR_Word) ((MR_hl_field(1, Where0_12, 0))));
        MR_Word BranchesList_24;

        mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), BranchesA_22, &BranchesList_24);
        transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(ContainingGoalMap_7, CurrentId_8, BranchesList_24, BranchesB_23, &Where_13);
      }
    }
    mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), ((MR_Box) (Var_10)), ((MR_Box) (Where_13)), STATE_VARIABLE_WhereNeededMap_0_14, STATE_VARIABLE_WhereNeededMap_15);
  }
  else
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), ((MR_Box) (Var_10)), ((MR_Box) (WhereNeeded_9)), STATE_VARIABLE_WhereNeededMap_0_14, STATE_VARIABLE_WhereNeededMap_15);
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
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar__4_4));
      }
    else
    {
      MR_Word First_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word BranchPoint_15 = ((MR_Word) ((MR_hl_field(0, First_11, 0))));
      MR_Word NewAlts_16 = ((MR_Word) ((MR_hl_field(0, First_11, 1))));
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
        BranchGoalId_19 = ((MR_Word) ((MR_hl_field(0, BranchPoint_15, 0))));
        BranchAlts_20 = ((MR_Word) ((MR_hl_field(0, BranchPoint_15, 1))));
        if ((BranchAlts_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer NumAlts_41;

          mercury__set__count_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Alts_18, &NumAlts_41);
          succeeded = (NumAlts_41 == (MR_Integer) 2);
        }
        else
        {
          MR_Word TypeCtorInfo_10_46;
          MR_Word MaybeSwitchNumFunctors_42 = ((MR_Word) ((MR_hl_field(1, BranchAlts_20, 0))));
          MR_Integer NumFunctors_43;
          MR_Integer NumAlts_44;

          succeeded = (MaybeSwitchNumFunctors_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NumFunctors_43 = ((MR_Integer) ((MR_hl_field(1, MaybeSwitchNumFunctors_42, 0))));
            TypeCtorInfo_10_46 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
            mercury__set__count_2_p_0(TypeCtorInfo_10_46, Alts_18, &NumAlts_44);
            succeeded = (NumAlts_44 == NumFunctors_43);
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
              MR_hl_field(0, ParentBranchPoint_26, 0) = ((MR_Box) (ParentBranchGoalId_21));
              MR_hl_field(0, ParentBranchPoint_26, 1) = ((MR_Box) (ParentBranchAlt_23));
            }
            ParentAlts_27 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ParentBranchNum_24)));
            {
              Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_29, 0) = ((MR_Box) (ParentBranchPoint_26));
              MR_hl_field(0, Var_29, 1) = ((MR_Box) (ParentAlts_27));
            }
            {
              Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
              MR_hl_field(1, Var_28, 1) = ((MR_Box) (Rest_12));
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
      ContainingGoalId_14 = ((MR_Word) ((MR_hl_field(1, GoalContaining_13, 0))));
      LastStep_15 = ((MR_Word) ((MR_hl_field(1, GoalContaining_13, 1))));
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
          switch (((MR_Integer) ((MR_hl_field(3, LastStep_15, 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word MaybeNumAlts_17;

                *BranchNum_12 = ((MR_Integer) ((MR_hl_field(3, LastStep_15, 1))));
                MaybeNumAlts_17 = ((MR_Word) ((MR_hl_field(3, LastStep_15, 2))));
                *BranchGoalId_9 = ContainingGoalId_14;
                *BranchArmGoalId_10 = GoalId_8;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *BranchAlt_11 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (MaybeNumAlts_17));
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
transform_hlds__unneeded_code__demand_inputs_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_WhereNeededMap_15;

  transform_hlds__unneeded_code__demand_var_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_WhereNeededMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_WhereNeededMap_15));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0(
  MR_Word UnneededInfo_7,
  MR_Word InitInstMap_8,
  MR_Word Goal_9,
  MR_Word WhereNeeded_10,
  MR_Word STATE_VARIABLE_WhereNeededMap_0_20,
  MR_Word * STATE_VARIABLE_WhereNeededMap_21)
{
  MR_bool succeeded;
  MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(0, Goal_9, 1))));
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
  ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_7, 0))));
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[1]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (transform_hlds__unneeded_code__demand_inputs_6_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (ModuleInfo_17));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (InitInstMap_8));
  }
  mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), Var_22, NonLocals_16, &Inputs_18);
  ContainingGoalMap_19 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_7, 3))));
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_4[1]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (transform_hlds__unneeded_code__demand_inputs_6_p_0_2));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (ContainingGoalMap_19));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (GoalId_15));
    MR_hl_field(0, Var_23, 5) = ((MR_Box) (WhereNeeded_10));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[0]), Var_23, Inputs_18, ((MR_Box) (STATE_VARIABLE_WhereNeededMap_0_20)), &conv1_STATE_VARIABLE_WhereNeededMap_21);
  *STATE_VARIABLE_WhereNeededMap_21 = ((MR_Word) (conv1_STATE_VARIABLE_WhereNeededMap_21));
}

static MR_Box MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_HeadVar__2_41;

  transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__561__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_41);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_41));
}

static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_WhereInfo_14;

  transform_hlds__unneeded_code__collect_where_needed_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_WhereInfo_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_WhereInfo_14));
}

static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(
  MR_Word UnneededInfo_7,
  MR_Word InitInstMap_8,
  MR_Word FinalInstMap_9,
  MR_Word Goal_10,
  MR_Word WhereNeededMap_11,
  MR_Word * STATE_VARIABLE_WhereInfo_23)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_7, 0))));
  MR_Word VarTable_14 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_7, 1))));
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
  MR_Word GoalExpr_47;
  MR_Word GoalInfo_48;

  hlds__instmap__instmap_changed_vars_5_p_0(ModuleInfo_13, VarTable_14, InitInstMap_8, FinalInstMap_9, &ChangedVarSet_15);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVarSet_15, &ChangedVars_16);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0), (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]), &Empty_17);
  {
    STATE_VARIABLE_WhereInfo_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_WhereInfo_24_24, 0) = ((MR_Box) (Empty_17));
  }
  GoalInfo_19 = ((MR_Word) ((MR_hl_field(0, Goal_10, 1))));
  CurrentId_20 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_19);
  ContainingGoalMap_21 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_7, 3))));
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_4[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (ContainingGoalMap_21));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (CurrentId_20));
    MR_hl_field(0, Var_25, 5) = ((MR_Box) (WhereNeededMap_11));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[0]), (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0), Var_25, ChangedVars_16, ((MR_Box) (STATE_VARIABLE_WhereInfo_24_24)), &conv1_STATE_VARIABLE_WhereInfo_26_26);
  STATE_VARIABLE_WhereInfo_26_26 = ((MR_Word) (conv1_STATE_VARIABLE_WhereInfo_26_26));
  Options_22 = ((MR_Word) ((MR_hl_field(0, UnneededInfo_7, 2))));
  GoalExpr_47 = ((MR_Word) ((MR_hl_field(0, Goal_10, 0))));
  GoalInfo_48 = ((MR_Word) ((MR_hl_field(0, Goal_10, 1))));
  {
    MR_Word Detism_49;

    Detism_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_48);
    switch (Detism_49) {
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
      MR_Word Var_55;

      Var_55 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_48);
      succeeded = (Var_55 != (MR_Integer) 0);
    }
    if (!(succeeded))
    {
      {
        MR_Word Var_56 = ((((MR_Unsigned) ((MR_hl_field(0, Options_22, 0))) >> 1)) & (MR_Integer) 1);

        succeeded = (Var_56 == (MR_Integer) 1);
        if (succeeded)
          succeeded = hlds__goal_form__goal_can_loop_or_throw_1_p_0(Goal_10);
      }
      if (!(succeeded))
      {
        {
          MR_Word BranchMap_50;
          MR_Word Var_57 = ((MR_Unsigned) ((MR_hl_field(0, Options_22, 0))) & (MR_Integer) 1);
          MR_Word TypeCtorInfo_36_72;
          MR_Word TypeInfo_37_73;

          succeeded = (Var_57 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = hlds__goal_form__goal_can_loop_or_throw_1_p_0(Goal_10);
            if (succeeded)
            {
              succeeded = (STATE_VARIABLE_WhereInfo_26_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BranchMap_50 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_WhereInfo_26_26, 0))));
                TypeCtorInfo_36_72 = (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0);
                TypeInfo_37_73 = (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]);
                succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_36_72, TypeInfo_37_73, BranchMap_50);
                succeeded = !(succeeded);
              }
            }
          }
        }
        if (!(succeeded))
        {
          {
            MR_Word Var_78;

            Var_78 = hlds__make_goal__true_goal_expr_0_f_0();
            succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(GoalExpr_47, Var_78);
          }
          if (!(succeeded))
          {
            MR_Word TypeCtorInfo_38_74;
            MR_Word TypeInfo_39_75;
            MR_Word TypeCtorInfo_43_76;
            MR_Word BranchArms_51;
            MR_Word BranchArmCounts_52;
            MR_Integer BranchArmCount_53;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Integer Var_60;
            MR_Integer Var_61;
            MR_Word BranchMap_62;
            MR_Box conv4_BranchArmCount_53;

            succeeded = (STATE_VARIABLE_WhereInfo_26_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              BranchMap_62 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_WhereInfo_26_26, 0))));
              TypeCtorInfo_38_74 = (MR_Word) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0);
              TypeInfo_39_75 = (MR_Word) (&transform_hlds__unneeded_code_scalar_common_1[2]);
              mercury__map__values_2_p_0(TypeCtorInfo_38_74, TypeInfo_39_75, BranchMap_62, &BranchArms_51);
              Var_58 = (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[6]);
              TypeCtorInfo_43_76 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
              mercury__list__map_3_p_0(TypeInfo_39_75, TypeCtorInfo_43_76, Var_58, BranchArms_51, &BranchArmCounts_52);
              Var_59 = (MR_Word) (&transform_hlds__unneeded_code_scalar_common_2[7]);
              Var_60 = (MR_Integer) 0;
              conv4_BranchArmCount_53 = mercury__list__foldl_3_f_0(TypeCtorInfo_43_76, TypeCtorInfo_43_76, Var_59, BranchArmCounts_52, ((MR_Box) (Var_60)));
              BranchArmCount_53 = ((MR_Integer) (conv4_BranchArmCount_53));
              Var_61 = ((MR_Integer) ((MR_hl_field(0, Options_22, 2))));
              succeeded = (BranchArmCount_53 > Var_61);
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

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unneeded_code____Unify____branch_alts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unneeded_code____Compare____branch_alts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unneeded_code____Unify____branch_point_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unneeded_code____Compare____branch_point_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unneeded_code____Unify____location_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unneeded_code____Compare____location_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unneeded_code____Unify____uc_option_values_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unneeded_code____Compare____uc_option_values_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unneeded_code____Unify____where_needed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unneeded_code____Compare____where_needed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unneeded_code____Unify____where_needed_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unneeded_code____Compare____where_needed_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
