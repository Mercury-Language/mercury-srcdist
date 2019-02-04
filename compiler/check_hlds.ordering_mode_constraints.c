/*
** Automatically generated from `ordering_mode_constraints.m'
** by the Mercury compiler,
** version DEV
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


// :- module check_hlds.ordering_mode_constraints.
// :- implementation.

/*
INIT mercury__check_hlds__ordering_mode_constraints__init
ENDINIT
*/

#include "check_hlds.ordering_mode_constraints.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.abstract_mode_constraints.mih"
#include "check_hlds.build_mode_constraints.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mcsolver.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.prop_mode_constraints.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s {
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__ContainingGoalMap_10;
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__VarMap_12;
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__PredId_13;
  MR_bool check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded;
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Goal0_18;
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__SolverConstraints_22;
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__STATE_VARIABLE_Goal_23_46;
  jmp_buf check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__commit_0;
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Bindings_44;
  jmp_buf check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__commit_1;
};


static const MR_FA_TypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_VA_TypeInfo_Struct2 check_hlds__ordering_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_0[1];

static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_0[1];

static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_1[2];

static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_1[2];

static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_1;

static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_2[1];

static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_2;

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_2[1];

static const MR_DuPtagLayout check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_analysis_failure_0[3];

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_mode_analysis_failure_0[3];

static const MR_Integer check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_mode_analysis_failure_0[3];

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0;

static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_ordering_constraint_0_0[2];

static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_ordering_constraint_0_0[2];

static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_ordering_constraint_0_0;

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_ordering_constraint_0_0[1];

static const MR_DuPtagLayout check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_ordering_constraint_0[1];

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_mode_ordering_constraint_0[1];

static const MR_Integer check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_mode_ordering_constraint_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__set_ordlist__ti_set_ordlist_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0;

static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_ordering_constraints_info_0_0[3];

static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_ordering_constraints_info_0_0[3];

static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_ordering_constraints_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_ordering_constraints_info_0_0[1];

static const MR_DuPtagLayout check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_ordering_constraints_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_ordering_constraints_info_0[1];

static const MR_Integer check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_ordering_constraints_info_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__topological_sort_min_reordering__679__1_2_p_0(
  MR_Integer First_11,
  MR_Word LambdaHeadVar__1_22);

static MR_Integer MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__func__topological_sort_min_reordering__673__1_1_f_0(
  MR_Word LambdaHeadVar__1_19);

static void MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__make_conjunct_nonlocal_repvars__507__1_5_p_0(
  MR_Word PredId_5,
  MR_Word GoalId_11,
  MR_Word LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word * LambdaHeadVar__3_21);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__447__1_2_f_0(
  MR_Integer To_9,
  MR_Word LambdaHeadVar__1_20,
  MR_Integer * LambdaHeadVar__2_21);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__445__1_2_f_0(
  MR_Integer From_8,
  MR_Word LambdaHeadVar__1_17,
  MR_Integer * LambdaHeadVar__2_18);

static void MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__goal_reordering__356__1_3_p_0(
  MR_Word Goals0_40,
  MR_Integer HeadVar__2_75,
  MR_Word * HeadVar__3_76);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__187__1_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word LambdaHeadVar__1_22);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__add_ordering_constraint__427__1_1_p_0(
  MR_Word LambdaHeadVar__1_13);

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____prog_var_at_conjuncts_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____prog_var_at_conjuncts_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failures_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failures_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failure_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failure_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_p_0(
  MR_Word Globals_6,
  MR_Word ProcTable_7,
  MR_Integer ProcId_8);

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(
  MR_Word Globals_6,
  MR_Integer Indent_7,
  MR_Word Goal_8);

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6);

static void MR_CALL 
check_hlds__ordering_mode_constraints__constrain_if_possible_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_OCI_0_2,
  MR_Word * STATE_VARIABLE_OCI_3);

static void MR_CALL 
check_hlds__ordering_mode_constraints__original_order_constraints_2_p_0(
  MR_Integer N_3,
  MR_Word * MOCs_4);

static void MR_CALL 
check_hlds__ordering_mode_constraints__add_complete_order_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__ordering_mode_constraints__add_complete_order_constraints_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MOCs_0_2,
  MR_Word * STATE_VARIABLE_MOCs_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__get_position_in_conj_3_p_0(
  MR_Word ContainingGoalMap_4,
  MR_Word HeadVar__2_2,
  MR_Integer * N_8);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__produced_at_path_3_p_0(
  MR_Word VarMap_4,
  MR_Word Bindings_5,
  MR_Word RepVar_6);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__prog_var_ordering_constraints_6_p_0(
  MR_Word VarMap_7,
  MR_Word Bindings_8,
  MR_Word _ProgVar_9,
  MR_Word RepVars_10,
  MR_Word STATE_VARIABLE_OCInfo_0_18,
  MR_Word * STATE_VARIABLE_OCInfo_19);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word VarMap_7,
  MR_Word Bindings_8,
  MR_Word RepVars_10,
  MR_Word STATE_VARIABLE_OCInfo_0_18,
  MR_Word * STATE_VARIABLE_OCInfo_19);

static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_p_0(
  MR_Word PredId_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_RepvarMap_0_15,
  MR_Word * STATE_VARIABLE_RepvarMap_16);

static void MR_CALL 
check_hlds__ordering_mode_constraints__insert_lt_constraint_4_p_0(
  MR_Integer A_5,
  MR_Integer B_6,
  MR_Word STATE_VARIABLE_Cs_0_8,
  MR_Word * STATE_VARIABLE_Cs_9);

static void MR_CALL 
check_hlds__ordering_mode_constraints__insert_lt_constraints_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__ordering_mode_constraints__insert_lt_constraints_4_p_0(
  MR_Word Bs_5,
  MR_Integer A_6,
  MR_Word STATE_VARIABLE_Cs_0_8,
  MR_Word * STATE_VARIABLE_Cs_9);

static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0(
  MR_Word ContainingGoalMap_10,
  MR_Word PredConstraints_11,
  MR_Word VarMap_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word STATE_VARIABLE_Errors_0_27,
  MR_Word * STATE_VARIABLE_Errors_28,
  MR_Word STATE_VARIABLE_PredInfo_0_29,
  MR_Word * STATE_VARIABLE_PredInfo_30);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(
  MR_Word ContainingGoalMap_7,
  MR_Word PredId_8,
  MR_Word VarMap_9,
  MR_Word Bindings_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__minimum_reordering_2_p_0(
  MR_Word OCI_3,
  MR_Word * Order_4);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0(
  MR_Word Constraints0_4,
  MR_Word Conjuncts0_5,
  MR_Word * Ordering_6);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_p_0(
  MR_Word VarMap_6,
  MR_Word Bindings_7,
  MR_Word RepVarMap_8,
  MR_Word STATE_VARIABLE_OCInfo_0_10,
  MR_Word * STATE_VARIABLE_OCInfo_11);

static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjuncts_nonlocal_repvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjuncts_nonlocal_repvars_3_p_0(
  MR_Word PredId_4,
  MR_Word Goals_5,
  MR_Word * RepvarMap_6);

static void MR_CALL 
check_hlds__ordering_mode_constraints__pred_reordering_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__ordering_mode_constraints__pred_reordering_5_p_0(
  MR_Word PredConstraintsMap_6,
  MR_Word VarMap_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21);

static void MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0(
  MR_Word PredConstraintsMap_6,
  MR_Word VarMap_7,
  MR_Word SCC0_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19);

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__ordering_mode_constraints__mode_reordering_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____conjunct_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____conjunct_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failures_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failures_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____ordering_constraints_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____ordering_constraints_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____prog_var_at_conjuncts_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____prog_var_at_conjuncts_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_1[16][2];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_3[2][4];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_4[5][8];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_5[4][6];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_6[5][7];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_7[4][5];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_8[1][12];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_9[2][9];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_10[1][1];




static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__ordering_mode_constraints_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__ordering_mode_constraints_scalar_common_10[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Goal paths for"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__ordering_mode_constraints_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__ordering_mode_constraints_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_1[3])),
    ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_1[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_3[1])),
    ((MR_Box) (check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_7[1])),
    ((MR_Box) (check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_7[3])),
    ((MR_Box) (check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_2[0])),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_4[5][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_5[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_6[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_7[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_9[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_10[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_VA_TypeInfo_Struct2 check_hlds__ordering_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&check_hlds__ordering_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0),
    (MR_TypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0),
    (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_conjunct_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____conjunct_id_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____conjunct_id_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "conjunct_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_0[1] = {
  (MR_String) "failing_predicate"
};

static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_0 = {
  (MR_String) "no_producer_consumer_sols",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_0,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_1[2] = {
  (MR_String) "caller",
  (MR_String) "scc"
};

static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_1 = {
  (MR_String) "mode_inference_failed",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_1,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_2[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_2 = {
  (MR_String) "conjunct_ordering_failed",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_0[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_0
};

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_1[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_2
};

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_2[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_1
};

static const MR_DuPtagLayout check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_analysis_failure_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_mode_analysis_failure_0[3] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_2,
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_1,
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_0
};

static const MR_Integer check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_mode_analysis_failure_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____mode_analysis_failure_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____mode_analysis_failure_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "mode_analysis_failure",
  {     check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_mode_analysis_failure_0 },
  {     check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_analysis_failure_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_mode_analysis_failure_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failures_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____mode_analysis_failures_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____mode_analysis_failures_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "mode_analysis_failures",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_ordering_constraint_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_ordering_constraint_0_0[2] = {
  (MR_String) "first",
  (MR_String) "second"
};

static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_ordering_constraint_0_0 = {
  (MR_String) "lt",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_ordering_constraint_0_0,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_ordering_constraint_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_ordering_constraint_0_0[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_ordering_constraint_0_0
};

static const MR_DuPtagLayout check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_ordering_constraint_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_ordering_constraint_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_mode_ordering_constraint_0[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_ordering_constraint_0_0
};

static const MR_Integer check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_mode_ordering_constraint_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraint_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "mode_ordering_constraint",
  {     check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_mode_ordering_constraint_0 },
  {     check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_ordering_constraint_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_mode_ordering_constraint_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraints_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraints_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "mode_ordering_constraints",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__set_ordlist__ti_set_ordlist_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_ordering_constraints_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints__set_ordlist__ti_set_ordlist_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0)
};

static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_ordering_constraints_info_0_0[3] = {
  (MR_String) "oci_containing_map",
  (MR_String) "oci_num_conjuncts",
  (MR_String) "oci_constraints"
};

static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_ordering_constraints_info_0_0 = {
  (MR_String) "ordering_constraints_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_ordering_constraints_info_0_0,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_ordering_constraints_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_ordering_constraints_info_0_0[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_ordering_constraints_info_0_0
};

static const MR_DuPtagLayout check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_ordering_constraints_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_ordering_constraints_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_ordering_constraints_info_0[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_ordering_constraints_info_0_0
};

static const MR_Integer check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_ordering_constraints_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____ordering_constraints_info_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____ordering_constraints_info_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "ordering_constraints_info",
  {     check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_ordering_constraints_info_0 },
  {     check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_ordering_constraints_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_ordering_constraints_info_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__ordering_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_prog_var_at_conjuncts_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____prog_var_at_conjuncts_map_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____prog_var_at_conjuncts_map_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "prog_var_at_conjuncts_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__ordering_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__topological_sort_min_reordering__679__1_2_p_0(
  MR_Integer First_11,
  MR_Word LambdaHeadVar__1_22)
{
  {
    MR_bool succeeded;
    MR_Integer From_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 0))));

    succeeded = (From_27 != First_11);
    return succeeded;
  }
}

static MR_Integer MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__func__topological_sort_min_reordering__673__1_1_f_0(
  MR_Word LambdaHeadVar__1_19)
{
  {
    MR_Integer LambdaHeadVar__2_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 1))));

    return LambdaHeadVar__2_20;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__make_conjunct_nonlocal_repvars__507__1_5_p_0(
  MR_Word PredId_5,
  MR_Word GoalId_11,
  MR_Word LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word * LambdaHeadVar__3_21)
{
  {
    MR_Word Var_22;
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (LambdaHeadVar__1_19));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (PredId_5));
    }
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (GoalId_11));
    }
    mercury__multi_map__set_4_p_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[3]), (MR_Word) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0), ((MR_Box) (LambdaHeadVar__1_19)), ((MR_Box) (Var_22)), LambdaHeadVar__2_20, LambdaHeadVar__3_21);
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__447__1_2_f_0(
  MR_Integer To_9,
  MR_Word LambdaHeadVar__1_20,
  MR_Integer * LambdaHeadVar__2_21)
{
  {
    MR_bool succeeded;
    MR_Integer T_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 0))));

    *LambdaHeadVar__2_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 1))));
    succeeded = (T_28 == To_9);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__445__1_2_f_0(
  MR_Integer From_8,
  MR_Word LambdaHeadVar__1_17,
  MR_Integer * LambdaHeadVar__2_18)
{
  {
    MR_bool succeeded;
    MR_Integer F_27;

    *LambdaHeadVar__2_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_17, (MR_Integer) 0))));
    F_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_17, (MR_Integer) 1))));
    succeeded = (F_27 == From_8);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__goal_reordering__356__1_3_p_0(
  MR_Word Goals0_40,
  MR_Integer HeadVar__2_75,
  MR_Word * HeadVar__3_76)
{
  {
    MR_Box conv0_HeadVar__3_76;

    mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_40, HeadVar__2_75, &conv0_HeadVar__3_76);
    *HeadVar__3_76 = ((MR_Word) (conv0_HeadVar__3_76));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__187__1_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word LambdaHeadVar__1_22)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_13;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_18, LambdaHeadVar__1_22, &PredInfo_13);
    succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(PredInfo_13);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__add_ordering_constraint__427__1_1_p_0(
  MR_Word LambdaHeadVar__1_13)
{
  {
    MR_bool succeeded;
    MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_13, (MR_Integer) 1))));
    MR_Integer X_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_13, (MR_Integer) 0))));

    succeeded = (Var_14 == X_18);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____prog_var_at_conjuncts_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____prog_var_at_conjuncts_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____ordering_constraints_info_0_0(
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
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____ordering_constraints_info_0_0(
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
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraint_0_0(
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
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
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

MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraint_0_0(
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failures_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failures_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failure_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Word Var_38 = (MR_Word) ((MR_Word) (HeadVar__2_2));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

                  hlds__hlds_pred____Compare____pred_proc_id_0_0(HeadVar__1_1, Var_38, ArgY1_5);
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
            MR_Word Var_35 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_28 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

                  hlds__hlds_pred____Compare____pred_proc_id_0_0(HeadVar__1_1, Var_35, ArgY1_28);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_16;

                  hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_16, Var_37, ArgY1_15);
                  succeeded = (SubResult1_16 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_16;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_36)), ((MR_Box) (ArgY2_18)));
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failure_0_0(
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
            MR_Word ArgX1_9 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_10 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_9, ArgY1_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_15_15;
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_5, ArgY1_6);
              if (succeeded)
              {
                TypeInfo_15_15 = (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____conjunct_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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

MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____conjunct_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_p_0(
  MR_Word Globals_6,
  MR_Word ProcTable_7,
  MR_Integer ProcId_8)
{
  {
    MR_String ProcIdString_10;
    MR_Word ProcHeaderFormat_11;
    MR_Word ProcInfo_12;
    MR_Word Goal_13;
    MR_Integer Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Box conv0_ProcInfo_12;

    Var_17 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_8);
    ProcIdString_10 = mercury__string__from_int_1_f_0(Var_17);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (ProcIdString_10));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_1[15])));
    }
    {
      ProcHeaderFormat_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ProcHeaderFormat_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__ordering_mode_constraints_scalar_common_1[13])));
      MR_hl_field(MR_mktag(1), ProcHeaderFormat_11, 1) = ((MR_Box) (Var_20));
    }
    parse_tree__error_util__write_error_pieces_plain_4_p_0(Globals_6, ProcHeaderFormat_11);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_7, ((MR_Box) (ProcId_8)), &conv0_ProcInfo_12);
    ProcInfo_12 = ((MR_Word) (conv0_ProcInfo_12));
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Goal_13);
    check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(Globals_6, (MR_Integer) 0, Goal_13);
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(
  MR_Word Globals_6,
  MR_Integer Indent_7,
  MR_Word Goal_8)
{
  while (MR_TRUE)
  {
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
    MR_Word GoalId_12;
    MR_Integer GoalIdNum_13;
    MR_Word GoalIdPieces_14;
    MR_Integer SubGoalIndent_15;
    MR_Word Var_65;
    MR_String Var_66;

    // setup for model_det tailcalls optimized into a loop
    ;
    GoalId_12 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_11);
    GoalIdNum_13 = (MR_Integer) (GoalId_12);
    Var_66 = mercury__string__int_to_string_1_f_0(GoalIdNum_13);
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Var_66));
    }
    {
      GoalIdPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalIdPieces_14, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(1), GoalIdPieces_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_1[7])));
    }
    parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(Globals_6, (MR_Word) ((MR_Unsigned) 0U), Indent_7, GoalIdPieces_14);
    SubGoalIndent_15 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_48 = (MR_Word) ((MR_Word) (GoalExpr_10));
          MR_Integer next_value_of_Indent_7 = SubGoalIndent_15;
          MR_Word next_value_of_Goal_8 = SubGoal_48;

          // direct tailcall eliminated
          ;
          Indent_7 = next_value_of_Indent_7;
          Goal_8 = next_value_of_Goal_8;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 2:
        {
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
              MR_Word Var_90;
              MR_Box conv0_STATE_VARIABLE_IO_64;

              {
                Var_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[3]));
                MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (Globals_6));
                MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (SubGoalIndent_15));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_90, Goals_40, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_64);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_88;
              MR_Word Goals_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
              MR_Box conv1_STATE_VARIABLE_IO_64;

              {
                Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[3]));
                MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (Globals_6));
                MR_hl_field(MR_mktag(0), Var_88, 4) = ((MR_Box) (SubGoalIndent_15));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_88, Goals_92, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_64);
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.ordering_mode_constraints.dump_goal_goal_paths\'/5", (MR_String) "switch");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
              MR_Integer next_value_of_Indent_7 = SubGoalIndent_15;
              MR_Word next_value_of_Goal_8 = SubGoal_94;

              // direct tailcall eliminated
              ;
              Indent_7 = next_value_of_Indent_7;
              Goal_8 = next_value_of_Goal_8;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
              MR_Word ThenGoal_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
              MR_Word ElseGoal_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_84;
              MR_Word Goals_93;
              MR_Box conv2_STATE_VARIABLE_IO_64;

              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (ElseGoal_47));
                MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (ThenGoal_46));
                MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_82));
              }
              {
                Goals_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Goals_93, 0) = ((MR_Box) (CondGoal_45));
                MR_hl_field(MR_mktag(1), Goals_93, 1) = ((MR_Box) (Var_81));
              }
              {
                Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[3]));
                MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_3));
                MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (Globals_6));
                MR_hl_field(MR_mktag(0), Var_84, 4) = ((MR_Box) (SubGoalIndent_15));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_84, Goals_93, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_64);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_50)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.ordering_mode_constraints.dump_goal_goal_paths\'/5", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_50, (MR_Integer) 4))));
                    MR_Word OrElseGoals_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_50, (MR_Integer) 5))));
                    MR_Word Var_77;
                    MR_Word Goals_95;
                    MR_Box conv3_STATE_VARIABLE_IO_64;

                    {
                      Goals_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Goals_95, 0) = ((MR_Box) (MainGoal_55));
                      MR_hl_field(MR_mktag(1), Goals_95, 1) = ((MR_Box) (OrElseGoals_56));
                    }
                    {
                      Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[3]));
                      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_4));
                      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Globals_6));
                      MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (SubGoalIndent_15));
                    }
                    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, Goals_95, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_64);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.ordering_mode_constraints.dump_goal_goal_paths\'/5", (MR_String) "try_goal");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6)
{
  {
    MR_Word PredInfo_8;
    MR_Word ProcTable_9;
    MR_Word ProcIds_10;
    MR_Word Globals_11;
    MR_Word PredHeaderFormat_12;
    MR_Word Var_33;
    MR_Word Var_34;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_8);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_8, &ProcTable_9);
    ProcIds_10 = mercury__map__keys_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_9);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_11);
    parse_tree__error_util__write_error_pieces_plain_4_p_0(Globals_11, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_1[10])));
    Var_34 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, PredInfo_8);
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_34, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_1[9])));
    PredHeaderFormat_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_1[12])), Var_33);
    parse_tree__error_util__write_error_pieces_plain_4_p_0(Globals_11, PredHeaderFormat_12);
    if ((ProcIds_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ClausesInfo_13;
      MR_Word ClausesRep_14;
      MR_Word Clauses_16;
      MR_Word Goals_17;
      MR_Word Var_48;
      MR_Word _ItemNumbers_15;
      MR_Box conv1_STATE_VARIABLE_IO_23;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_8, &ClausesInfo_13);
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_13, &ClausesRep_14, &_ItemNumbers_15);
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_14, &Clauses_16);
      Goals_17 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_2[4]), Clauses_16);
      {
        Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Globals_11));
        MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, Goals_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23);
    }
    else
    {
      MR_Word Var_43;
      MR_Box conv2_STATE_VARIABLE_IO_23;

      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[4]));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_3));
        MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Globals_11));
        MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (ProcTable_9));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, ProcIds_10, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_23);
    }
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__constrain_if_possible_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_OCI_0_2,
  MR_Word * STATE_VARIABLE_OCI_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_OCI_3 = STATE_VARIABLE_OCI_0_2;
    else
    {
      MR_Word Constraint_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_OCI_12_12;

      succeeded = check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0(Constraint_7, STATE_VARIABLE_OCI_0_2, &STATE_VARIABLE_OCI_12_12);
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__1_1 = Constraints_8;
        MR_Word next_value_of_STATE_VARIABLE_OCI_0_2 = STATE_VARIABLE_OCI_12_12;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_OCI_0_2 = next_value_of_STATE_VARIABLE_OCI_0_2;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Constraints_8;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__original_order_constraints_2_p_0(
  MR_Integer N_3,
  MR_Word * MOCs_4)
{
  {
    MR_Word Var_5;
    MR_Word MOCs0_9;
    MR_Word Var_10;

    Var_5 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, N_3);
    Var_10 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0));
    check_hlds__ordering_mode_constraints__add_complete_order_constraints_3_p_0(Var_5, Var_10, &MOCs0_9);
    *MOCs_4 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0), MOCs0_9);
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__add_complete_order_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Cs_9;

    check_hlds__ordering_mode_constraints__insert_lt_constraint_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Cs_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Cs_9));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__add_complete_order_constraints_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MOCs_0_2,
  MR_Word * STATE_VARIABLE_MOCs_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_MOCs_3 = STATE_VARIABLE_MOCs_0_2;
    else
    {
      MR_Integer Conjunct_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Conjuncts_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_12;
      MR_Word STATE_VARIABLE_MOCs_13_13;
      MR_Box conv1_STATE_VARIABLE_MOCs_13_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MOCs_0_2;

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_6[3]));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__add_complete_order_constraints_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Conjunct_7));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[2]), Var_12, Conjuncts_8, ((MR_Box) (STATE_VARIABLE_MOCs_0_2)), &conv1_STATE_VARIABLE_MOCs_13_13);
      STATE_VARIABLE_MOCs_13_13 = ((MR_Word) (conv1_STATE_VARIABLE_MOCs_13_13));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Conjuncts_8;
      next_value_of_STATE_VARIABLE_MOCs_0_2 = STATE_VARIABLE_MOCs_13_13;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MOCs_0_2 = next_value_of_STATE_VARIABLE_MOCs_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__get_position_in_conj_3_p_0(
  MR_Word ContainingGoalMap_4,
  MR_Word HeadVar__2_2,
  MR_Integer * N_8)
{
  {
    MR_bool succeeded;
    MR_Word GoalId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ContainingGoal_9;
    MR_Word LastStep_11;
    MR_Box conv0_ContainingGoal_9;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ContainingGoalMap_4, ((MR_Box) (GoalId_7)), &conv0_ContainingGoal_9);
    ContainingGoal_9 = ((MR_Word) (conv0_ContainingGoal_9));
    succeeded = (ContainingGoal_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      LastStep_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ContainingGoal_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) LastStep_11)) == (MR_Integer) 1);
      if (succeeded)
        *N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LastStep_11, (MR_Integer) 0))));
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__produced_at_path_3_p_0(
  MR_Word VarMap_4,
  MR_Word Bindings_5,
  MR_Word RepVar_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Box conv0_Var_8;
    MR_Box conv1_Var_7;

    conv0_Var_8 = mercury__bimap__lookup_2_f_0((MR_Word) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0), (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[5]), VarMap_4, ((MR_Box) (RepVar_6)));
    Var_8 = ((MR_Word) (conv0_Var_8));
    conv1_Var_7 = mercury__map__lookup_2_f_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[5]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Bindings_5, ((MR_Box) (Var_8)));
    Var_7 = ((MR_Word) (conv1_Var_7));
    succeeded = (Var_7 == (MR_Integer) 1);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__prog_var_ordering_constraints_6_p_0(
  MR_Word VarMap_7,
  MR_Word Bindings_8,
  MR_Word _ProgVar_9,
  MR_Word RepVars_10,
  MR_Word STATE_VARIABLE_OCInfo_0_18,
  MR_Word * STATE_VARIABLE_OCInfo_19)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0(VarMap_7, Bindings_8, RepVars_10, STATE_VARIABLE_OCInfo_0_18, STATE_VARIABLE_OCInfo_19);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_OCI_9;

    succeeded = check_hlds__ordering_mode_constraints__add_lt_constraint_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_OCI_9);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_OCI_9));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv1_N_8;

    succeeded = check_hlds__ordering_mode_constraints__get_position_in_conj_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_N_8);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__ordering_mode_constraints__produced_at_path_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word VarMap_7,
  MR_Word Bindings_8,
  MR_Word RepVars_10,
  MR_Word STATE_VARIABLE_OCInfo_0_18,
  MR_Word * STATE_VARIABLE_OCInfo_19)
{
  {
    MR_bool succeeded;
    MR_Word ProgVarAtProducers_12;
    MR_Word ProgVarAtConsumers_13;
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (VarMap_7));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (Bindings_8));
    }
    mercury__list__filter_4_p_0((MR_Word) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0), Var_20, RepVars_10, &ProgVarAtProducers_12, &ProgVarAtConsumers_13);
    if ((ProgVarAtProducers_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_OCInfo_19 = STATE_VARIABLE_OCInfo_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_31_31;
      MR_Word TypeCtorInfo_35_35;
      MR_Word TypeCtorInfo_13_45;
      MR_Word TypeCtorInfo_14_46;
      MR_Word RepVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProgVarAtProducers_12, (MR_Integer) 0))));
      MR_Word ContainingGoalMap_15;
      MR_Integer First_16;
      MR_Word Laters_17;
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProgVarAtProducers_12, (MR_Integer) 1))));
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word GoalId_40;
      MR_Word ContainingGoal_41;
      MR_Word LastStep_43;
      MR_Box conv0_ContainingGoal_41;
      MR_Box conv3_STATE_VARIABLE_OCInfo_19;

      succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ContainingGoalMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OCInfo_0_18, (MR_Integer) 0))));
        GoalId_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RepVar_14, (MR_Integer) 1))));
        TypeCtorInfo_13_45 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
        TypeCtorInfo_14_46 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0);
        mercury__map__lookup_3_p_0(TypeCtorInfo_13_45, TypeCtorInfo_14_46, ContainingGoalMap_15, ((MR_Box) (GoalId_40)), &conv0_ContainingGoal_41);
        ContainingGoal_41 = ((MR_Word) (conv0_ContainingGoal_41));
        succeeded = (ContainingGoal_41 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LastStep_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ContainingGoal_41, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) LastStep_43)) == (MR_Integer) 1);
          if (succeeded)
          {
            First_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LastStep_43, (MR_Integer) 0))));
            TypeCtorInfo_31_31 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
            {
              Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_5[3]));
              MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_2));
              MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ContainingGoalMap_15));
            }
            succeeded = mercury__list__map_3_p_2((MR_Word) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0), TypeCtorInfo_31_31, Var_22, ProgVarAtConsumers_13, &Laters_17);
            if (succeeded)
            {
              TypeCtorInfo_35_35 = (MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0);
              {
                Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_6[4]));
                MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_3));
                MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (First_16));
              }
              succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_31_31, TypeCtorInfo_35_35, Var_23, Laters_17, ((MR_Box) (STATE_VARIABLE_OCInfo_0_18)), &conv3_STATE_VARIABLE_OCInfo_19);
              if (succeeded)
              {
                *STATE_VARIABLE_OCInfo_19 = ((MR_Word) (conv3_STATE_VARIABLE_OCInfo_19));
                succeeded = MR_TRUE;
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
check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_21;

    check_hlds__ordering_mode_constraints__IntroducedFrom__pred__make_conjunct_nonlocal_repvars__507__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_21));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_p_0(
  MR_Word PredId_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_RepvarMap_0_15,
  MR_Word * STATE_VARIABLE_RepvarMap_16)
{
  {
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));
    MR_Word Nonlocals_10;
    MR_Word GoalId_11;
    MR_Word Var_17;
    MR_Box conv1_STATE_VARIABLE_RepvarMap_16;

    Nonlocals_10 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
    GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_9);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (PredId_5));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (GoalId_11));
    }
    parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_2[1]), Var_17, Nonlocals_10, ((MR_Box) (STATE_VARIABLE_RepvarMap_0_15)), &conv1_STATE_VARIABLE_RepvarMap_16);
    *STATE_VARIABLE_RepvarMap_16 = ((MR_Word) (conv1_STATE_VARIABLE_RepvarMap_16));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__insert_lt_constraint_4_p_0(
  MR_Integer A_5,
  MR_Integer B_6,
  MR_Word STATE_VARIABLE_Cs_0_8,
  MR_Word * STATE_VARIABLE_Cs_9)
{
  {
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (A_5));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (B_6));
    }
    mercury__set__insert_3_p_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0), ((MR_Box) (Var_10)), STATE_VARIABLE_Cs_0_8, STATE_VARIABLE_Cs_9);
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__insert_lt_constraints_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Cs_9;

    check_hlds__ordering_mode_constraints__insert_lt_constraint_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Cs_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Cs_9));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__insert_lt_constraints_4_p_0(
  MR_Word Bs_5,
  MR_Integer A_6,
  MR_Word STATE_VARIABLE_Cs_0_8,
  MR_Word * STATE_VARIABLE_Cs_9)
{
  {
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_Cs_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__insert_lt_constraints_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (A_6));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[2]), Var_10, Bs_5, ((MR_Box) (STATE_VARIABLE_Cs_0_8)), &conv1_STATE_VARIABLE_Cs_9);
    *STATE_VARIABLE_Cs_9 = ((MR_Word) (conv1_STATE_VARIABLE_Cs_9));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s * env_ptr = (struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s * env_ptr = (struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0((env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__ContainingGoalMap_10, (env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__PredId_13, (env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__VarMap_12, (env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Bindings_44, (env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Goal0_18, &(env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__STATE_VARIABLE_Goal_23_46);
    if ((env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded)
      check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s * env_ptr = (struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__commit_0) == 0)
      {
        check_hlds__mcsolver__solve_2_p_0((env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__SolverConstraints_22, &(env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Bindings_44, check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_2, env_ptr);
        (env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s * env_ptr = (struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s * env_ptr = (struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__commit_1) == 0)
      {
        {
          MR_Word Var_45;

          check_hlds__mcsolver__solve_2_p_0((env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__SolverConstraints_22, &Var_45, check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_4, env_ptr);
        }
        (env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0(
  MR_Word ContainingGoalMap_10,
  MR_Word PredConstraints_11,
  MR_Word VarMap_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word STATE_VARIABLE_Errors_0_27,
  MR_Word * STATE_VARIABLE_Errors_28,
  MR_Word STATE_VARIABLE_PredInfo_0_29,
  MR_Word * STATE_VARIABLE_PredInfo_30)
{
  {
    struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s env;

    (env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__ContainingGoalMap_10 = ContainingGoalMap_10;
    (env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__VarMap_12 = VarMap_12;
    (env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__PredId_13 = PredId_13;
    {
      MR_Word ProcInfo0_17;
      MR_Word ConstraintsForProc_19;
      MR_Word PrepConstraints0_20;
      MR_Word PrepConstraints1_21;
      MR_Word Goal_25;
      MR_Word ProcInfo_26;

      hlds__hlds_pred__pred_info_proc_info_3_p_0(STATE_VARIABLE_PredInfo_0_29, ProcId_14, &ProcInfo0_17);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_17, &(env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Goal0_18);
      ConstraintsForProc_19 = check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0(ProcId_14, PredConstraints_11);
      PrepConstraints0_20 = check_hlds__mcsolver__new_prep_cstrts_0_f_0();
      check_hlds__mcsolver__prepare_abstract_constraints_3_p_0(ConstraintsForProc_19, PrepConstraints0_20, &PrepConstraints1_21);
      (env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__SolverConstraints_22 = check_hlds__mcsolver__make_solver_cstrts_1_f_0(PrepConstraints1_21);
      check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_3(&env);
      if ((env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded)
      {
        Goal_25 = (env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__STATE_VARIABLE_Goal_23_46;
        *STATE_VARIABLE_Errors_28 = STATE_VARIABLE_Errors_0_27;
      }
      else
      {
        check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_5(&env);
        if ((env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded)
        {
          MR_Word Var_47;
          MR_Word Var_49;

          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) ((env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__PredId_13));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (ProcId_14));
          }
          Var_47 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_49)));
          mercury__list__cons_3_p_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0), ((MR_Box) (Var_47)), STATE_VARIABLE_Errors_0_27, STATE_VARIABLE_Errors_28);
        }
        else
        {
          MR_Word Var_50;
          MR_Word Var_52;

          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) ((env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__PredId_13));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ProcId_14));
          }
          Var_50 = (MR_Word) ((MR_Word) (Var_52));
          mercury__list__cons_3_p_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0), ((MR_Box) (Var_50)), STATE_VARIABLE_Errors_0_27, STATE_VARIABLE_Errors_28);
        }
        Goal_25 = (env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Goal0_18;
      }
      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_25, ProcInfo0_17, &ProcInfo_26);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_14, ProcInfo_26, STATE_VARIABLE_PredInfo_0_29, STATE_VARIABLE_PredInfo_30);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_Goal_12;

    succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv3_Goal_12);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv3_Goal_12));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_12;

    succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_12);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_Goal_12));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_76;

    check_hlds__ordering_mode_constraints__IntroducedFrom__pred__goal_reordering__356__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv1_HeadVar__3_76);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_76));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Goal_12;

    succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_Goal_12);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Goal_12));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(
  MR_Word ContainingGoalMap_7,
  MR_Word PredId_8,
  MR_Word VarMap_9,
  MR_Word Bindings_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 0))));
    MR_Word GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1))));
    MR_Word GoalExpr_38;

    switch (MR_tag((MR_Word) GoalExpr0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_57 = (MR_Word) ((MR_Word) (GoalExpr0_13));
          MR_Word SubGoal_58;

          succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(ContainingGoalMap_7, PredId_8, VarMap_9, Bindings_10, SubGoal0_57, &SubGoal_58);
          if (succeeded)
          {
            GoalExpr_38 = (MR_Word) ((MR_Word) (SubGoal_58));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          GoalExpr_38 = GoalExpr0_13;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              GoalExpr_38 = GoalExpr0_13;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
              MR_Word Goals_46;

              switch (ConjType_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_66;

                    {
                      Var_66 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_9[1]));
                      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (ContainingGoalMap_7));
                      MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (PredId_8));
                      MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) (VarMap_9));
                      MR_hl_field(MR_mktag(0), Var_66, 6) = ((MR_Box) (Bindings_10));
                    }
                    succeeded = mercury__list__map_3_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_66, Goals0_40, &Goals_46);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word TypeCtorInfo_78_78;
                    MR_Word RepVarMap_41;
                    MR_Word OCInfo0_42;
                    MR_Word OCInfo_43;
                    MR_Word Order_44;
                    MR_Word Goals1_45;
                    MR_Integer Var_67;
                    MR_Word Var_68;
                    MR_Word Var_69;
                    MR_Word Var_89;

                    check_hlds__ordering_mode_constraints__make_conjuncts_nonlocal_repvars_3_p_0(PredId_8, Goals0_40, &RepVarMap_41);
                    Var_67 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_40);
                    Var_89 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0));
                    {
                      OCInfo0_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), OCInfo0_42, 0) = ((MR_Box) (ContainingGoalMap_7));
                      MR_hl_field(MR_mktag(0), OCInfo0_42, 1) = ((MR_Box) (Var_67));
                      MR_hl_field(MR_mktag(0), OCInfo0_42, 2) = ((MR_Box) (Var_89));
                    }
                    succeeded = check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_p_0(VarMap_9, Bindings_10, RepVarMap_41, OCInfo0_42, &OCInfo_43);
                    if (succeeded)
                    {
                      succeeded = check_hlds__ordering_mode_constraints__minimum_reordering_2_p_0(OCInfo_43, &Order_44);
                      if (succeeded)
                      {
                        TypeCtorInfo_78_78 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                        {
                          Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_5[1]));
                          MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_2));
                          MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Goals0_40));
                        }
                        mercury__list__map_3_p_0(TypeCtorInfo_78_78, (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_68, Order_44, &Goals1_45);
                        {
                          Var_69 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_9[1]));
                          MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_3));
                          MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (ContainingGoalMap_7));
                          MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (PredId_8));
                          MR_hl_field(MR_mktag(0), Var_69, 5) = ((MR_Box) (VarMap_9));
                          MR_hl_field(MR_mktag(0), Var_69, 6) = ((MR_Box) (Bindings_10));
                        }
                        succeeded = mercury__list__map_3_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_69, Goals1_45, &Goals_46);
                      }
                    }
                  }
                  break;
              }
              if (succeeded)
              {
                {
                  GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), GoalExpr_38, 1) = (MR_Box) ((MR_Unsigned) (ConjType_39));
                  MR_hl_field(MR_mktag(3), GoalExpr_38, 2) = ((MR_Box) (Goals_46));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_65;
              MR_Word Goals0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
              MR_Word Goals_71;

              {
                Var_65 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_9[1]));
                MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_4));
                MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (ContainingGoalMap_7));
                MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (PredId_8));
                MR_hl_field(MR_mktag(0), Var_65, 5) = ((MR_Box) (VarMap_9));
                MR_hl_field(MR_mktag(0), Var_65, 6) = ((MR_Box) (Bindings_10));
              }
              succeeded = mercury__list__map_3_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_65, Goals0_70, &Goals_71);
              if (succeeded)
              {
                {
                  GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), GoalExpr_38, 1) = ((MR_Box) (Goals_71));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.ordering_mode_constraints.goal_reordering\'/6", (MR_String) "switch");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
              MR_Word SubGoal0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
              MR_Word SubGoal_73;

              succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(ContainingGoalMap_7, PredId_8, VarMap_9, Bindings_10, SubGoal0_72, &SubGoal_73);
              if (succeeded)
              {
                {
                  GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_38, 1) = ((MR_Box) (Reason_59));
                  MR_hl_field(MR_mktag(3), GoalExpr_38, 2) = ((MR_Box) (SubGoal_73));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
              MR_Word Cond0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
              MR_Word Then0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
              MR_Word Else0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 4))));
              MR_Word Cond_54;
              MR_Word Then_55;
              MR_Word Else_56;

              succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(ContainingGoalMap_7, PredId_8, VarMap_9, Bindings_10, Cond0_51, &Cond_54);
              if (succeeded)
              {
                succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(ContainingGoalMap_7, PredId_8, VarMap_9, Bindings_10, Then0_52, &Then_55);
                if (succeeded)
                {
                  succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(ContainingGoalMap_7, PredId_8, VarMap_9, Bindings_10, Else0_53, &Else_56);
                  if (succeeded)
                  {
                    {
                      GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), GoalExpr_38, 1) = ((MR_Box) (Vars_50));
                      MR_hl_field(MR_mktag(3), GoalExpr_38, 2) = ((MR_Box) (Cond_54));
                      MR_hl_field(MR_mktag(3), GoalExpr_38, 3) = ((MR_Box) (Then_55));
                      MR_hl_field(MR_mktag(3), GoalExpr_38, 4) = ((MR_Box) (Else_56));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.ordering_mode_constraints.goal_reordering\'/6", (MR_String) "NYI: shorthand");
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_38));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_14));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__minimum_reordering_2_p_0(
  MR_Word OCI_3,
  MR_Word * Order_4)
{
  {
    MR_bool succeeded;
    MR_Word Conjuncts_5;
    MR_Word Var_6;
    MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OCI_3, (MR_Integer) 1))));
    MR_Word Var_9;

    Var_6 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, Var_8);
    Conjuncts_5 = mercury__set__from_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_6);
    Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OCI_3, (MR_Integer) 2))));
    succeeded = check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0(Var_9, Conjuncts_5, Order_4);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__ordering_mode_constraints__IntroducedFrom__pred__topological_sort_min_reordering__679__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__2_20;

    conv0_LambdaHeadVar__2_20 = check_hlds__ordering_mode_constraints__IntroducedFrom__func__topological_sort_min_reordering__673__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0(
  MR_Word Constraints0_4,
  MR_Word Conjuncts0_5,
  MR_Word * Ordering_6)
{
  {
    MR_bool succeeded;
    MR_Word NotFirst_7;
    MR_Word CandidatesForFirst_10;
    MR_Integer First_11;
    MR_Word Var_12;
    MR_Box conv1_First_11;

    NotFirst_7 = mercury__set__map_2_f_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_2[3]), Constraints0_4);
    CandidatesForFirst_10 = mercury__set__difference_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Conjuncts0_5, NotFirst_7);
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &conv1_First_11, CandidatesForFirst_10, &Var_12);
    if (succeeded)
    {
      First_11 = ((MR_Integer) (conv1_First_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Conjuncts_13;
      MR_Word Constraints_14;
      MR_Word Ordering0_17;
      MR_Word Var_21;

      succeeded = mercury__set__remove_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (First_11)), Conjuncts0_5, &Conjuncts_13);
      if (succeeded)
      {
        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_7[2]));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0_2));
          MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (First_11));
        }
        Constraints_14 = mercury__set__filter_2_f_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0), Var_21, Constraints0_4);
        succeeded = check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0(Constraints_14, Conjuncts_13, &Ordering0_17);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Ordering_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (First_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Ordering0_17));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Conjuncts0_5);
      if (succeeded)
      {
        *Ordering_6 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_OCInfo_19;

    succeeded = check_hlds__ordering_mode_constraints__prog_var_ordering_constraints_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_OCInfo_19);
    if (succeeded)
    {
      *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_OCInfo_19));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_p_0(
  MR_Word VarMap_6,
  MR_Word Bindings_7,
  MR_Word RepVarMap_8,
  MR_Word STATE_VARIABLE_OCInfo_0_10,
  MR_Word * STATE_VARIABLE_OCInfo_11)
{
  {
    MR_bool succeeded;
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_OCInfo_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (VarMap_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Bindings_7));
    }
    succeeded = mercury__map__foldl_4_p_3((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[3]), (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[4]), (MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0), Var_12, RepVarMap_8, ((MR_Box) (STATE_VARIABLE_OCInfo_0_10)), &conv1_STATE_VARIABLE_OCInfo_11);
    if (succeeded)
    {
      *STATE_VARIABLE_OCInfo_11 = ((MR_Word) (conv1_STATE_VARIABLE_OCInfo_11));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjuncts_nonlocal_repvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RepvarMap_16;

    check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RepvarMap_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RepvarMap_16));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjuncts_nonlocal_repvars_3_p_0(
  MR_Word PredId_4,
  MR_Word Goals_5,
  MR_Word * RepvarMap_6)
{
  {
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Box conv1_RepvarMap_6;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__make_conjuncts_nonlocal_repvars_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (PredId_4));
    }
    Var_8 = mercury__multi_map__init_0_f_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[3]), (MR_Word) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_2[1]), Var_7, Goals_5, ((MR_Box) (Var_8)), &conv1_RepvarMap_6);
    *RepvarMap_6 = ((MR_Word) (conv1_RepvarMap_6));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__pred_reordering_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Errors_28;
    MR_Word conv1_STATE_VARIABLE_PredInfo_30;

    check_hlds__ordering_mode_constraints__proc_reordering_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Errors_28, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_PredInfo_30);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Errors_28));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_PredInfo_30));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__pred_reordering_5_p_0(
  MR_Word PredConstraintsMap_6,
  MR_Word VarMap_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo0_10;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, PredId_8, &PredInfo0_10);
    succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(PredInfo0_10);
    if (succeeded)
    {
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.ordering_mode_constraints.pred_reordering\'/5", (MR_String) "mode inference constraints");
        return;
      }
    }
    else
    {
      MR_Word PredInfo1_11;
      MR_Word ContainingGoalMap_12;
      MR_Word PredConstraints_13;
      MR_Word ProcIds_14;
      MR_Word Errors_15;
      MR_Word PredInfo_16;
      MR_Word STATE_VARIABLE_ModuleInfo_24_24;
      MR_Tuple Var_25;
      MR_Word Var_26;
      MR_Box conv0_Var_25;
      MR_Box conv4_Errors_15;
      MR_Box conv3_PredInfo_16;

      check_hlds__clause_to_proc__copy_clauses_to_procs_for_pred_in_module_info_3_p_0(PredId_8, STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_24_24);
      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_24_24, PredId_8, &PredInfo1_11);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_3[0]), PredConstraintsMap_6, ((MR_Box) (PredId_8)), &conv0_Var_25);
      Var_25 = ((MR_Tuple) (conv0_Var_25));
      ContainingGoalMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
      PredConstraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
      ProcIds_14 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo1_11);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__pred_reordering_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ContainingGoalMap_12));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (PredConstraints_13));
        MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (VarMap_7));
        MR_hl_field(MR_mktag(0), Var_26, 6) = ((MR_Box) (PredId_8));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[1]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_26, ProcIds_14, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Errors_15, ((MR_Box) (PredInfo1_11)), &conv3_PredInfo_16);
      Errors_15 = ((MR_Word) (conv4_Errors_15));
      PredInfo_16 = ((MR_Word) (conv3_PredInfo_16));
      if ((Errors_15 == (MR_Word) ((MR_Unsigned) 0U)))
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_16, STATE_VARIABLE_ModuleInfo_24_24, STATE_VARIABLE_ModuleInfo_21);
      else
      {
        MR_String ErrorsString_19;
        MR_String Var_29;

        ErrorsString_19 = mercury__string__string_1_f_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[1]), ((MR_Box) (Errors_15)));
        Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "mode checking failure: ", ErrorsString_19);
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.ordering_mode_constraints.pred_reordering\'/5", Var_29);
          return;
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_21;

    check_hlds__ordering_mode_constraints__pred_reordering_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_21));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__187__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0(
  MR_Word PredConstraintsMap_6,
  MR_Word VarMap_7,
  MR_Word SCC0_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19)
{
  {
    MR_bool succeeded;
    MR_Word SCC_11;
    MR_Word PredsToInfer_14;
    MR_Word PredsToCheck_15;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_25;
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_19;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_18));
    }
    mercury__list__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_20, SCC0_8, &Var_10, &SCC_11);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_18));
    }
    mercury__list__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_21, SCC_11, &PredsToInfer_14, &PredsToCheck_15);
    if (!((PredsToInfer_14 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.ordering_mode_constraints.scc_reordering\'/5", (MR_String) "NYI: mode inference");
        return;
      }
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (PredConstraintsMap_6));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (VarMap_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_25, PredsToCheck_15, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_18)), &conv1_STATE_VARIABLE_ModuleInfo_19);
    *STATE_VARIABLE_ModuleInfo_19 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_19));
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredIds0_6)
{
  {
    MR_bool succeeded;
    MR_Word PredIds_9;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_8;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_5));
    }
    mercury__list__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_12, PredIds0_6, &Var_8, &PredIds_9);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleInfo_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, PredIds_9, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_lt_constraint_4_p_0(
  MR_Integer A_5,
  MR_Integer B_6,
  MR_Word STATE_VARIABLE_OCI_0_8,
  MR_Word * STATE_VARIABLE_OCI_9)
{
  {
    MR_bool succeeded;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (A_5));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (B_6));
    }
    succeeded = check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0(Var_10, STATE_VARIABLE_OCI_0_8, STATE_VARIABLE_OCI_9);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__ordering_mode_constraints__IntroducedFrom__pred__add_ordering_constraint__427__1_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Cs_9;

    check_hlds__ordering_mode_constraints__insert_lt_constraints_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Cs_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Cs_9));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv1_LambdaHeadVar__2_21;

    succeeded = check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__447__1_2_f_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_21);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_21));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__2_18;

    succeeded = check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__445__1_2_f_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_18);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_18));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_OCI_0_8,
  MR_Word * STATE_VARIABLE_OCI_9)
{
  {
    MR_bool succeeded;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OCI_0_8, (MR_Integer) 2))));

    succeeded = mercury__set__member_2_p_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0), ((MR_Box) (Constraint_4)), Var_10);
    if (succeeded)
    {
      *STATE_VARIABLE_OCI_9 = STATE_VARIABLE_OCI_0_8;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word NewConstraints_6;
      MR_Word Var_11;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Constraints_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OCI_0_8, (MR_Integer) 2))));
      MR_Integer From_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 0))));
      MR_Integer To_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 1))));
      MR_Word ComesBefore_34;
      MR_Word ComesAfter_37;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Box conv3_NewConstraints_6;
      MR_Word Var_23;
      MR_Integer Var_24;

      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (From_32));
      }
      ComesBefore_34 = mercury__set__filter_map_2_f_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_40, Constraints_31);
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_2));
        MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (To_33));
      }
      ComesAfter_37 = mercury__set__filter_map_2_f_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_43, Constraints_31);
      Var_49 = mercury__set__insert_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ComesAfter_37, ((MR_Box) (To_33)));
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_3));
        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Var_49));
      }
      Var_47 = mercury__set__insert_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ComesBefore_34, ((MR_Box) (From_32)));
      Var_48 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0));
      mercury__set__fold_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[2]), Var_46, Var_47, ((MR_Box) (Var_48)), &conv3_NewConstraints_6);
      NewConstraints_6 = ((MR_Word) (conv3_NewConstraints_6));
      Var_11 = mercury__set__filter_2_f_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0), (MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_2[2]), NewConstraints_6);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0), Var_11);
      if (succeeded)
      {
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OCI_0_8, (MR_Integer) 2))));
        Var_16 = mercury__set__union_2_f_0((MR_Word) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0), NewConstraints_6, Var_17);
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OCI_0_8, (MR_Integer) 0))));
        Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OCI_0_8, (MR_Integer) 1))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_OCI_9 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_16));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints__mode_reordering_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_19;

    check_hlds__ordering_mode_constraints__scc_reordering_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_19));
  }
}

void MR_CALL 
check_hlds__ordering_mode_constraints__mode_reordering_5_p_0(
  MR_Word PredConstraintsMap_6,
  MR_Word VarMap_7,
  MR_Word SCCs_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  {
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__mode_reordering_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (PredConstraintsMap_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (VarMap_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__ordering_mode_constraints_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_12, SCCs_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_10)), &conv1_STATE_VARIABLE_ModuleInfo_11);
    *STATE_VARIABLE_ModuleInfo_11 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_11));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____conjunct_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__ordering_mode_constraints____Unify____conjunct_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____conjunct_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__ordering_mode_constraints____Compare____conjunct_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__ordering_mode_constraints____Unify____mode_analysis_failure_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__ordering_mode_constraints____Compare____mode_analysis_failure_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failures_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__ordering_mode_constraints____Unify____mode_analysis_failures_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failures_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__ordering_mode_constraints____Compare____mode_analysis_failures_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____ordering_constraints_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__ordering_mode_constraints____Unify____ordering_constraints_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____ordering_constraints_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__ordering_mode_constraints____Compare____ordering_constraints_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____prog_var_at_conjuncts_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__ordering_mode_constraints____Unify____prog_var_at_conjuncts_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____prog_var_at_conjuncts_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__ordering_mode_constraints____Compare____prog_var_at_conjuncts_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__ordering_mode_constraints__init(void)
{
}

void mercury__check_hlds__ordering_mode_constraints__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_conjunct_id_0);
	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0);
	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failures_0);
	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0);
	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraints_0);
	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0);
	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_prog_var_at_conjuncts_map_0);
}

void mercury__check_hlds__ordering_mode_constraints__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__ordering_mode_constraints__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.ordering_mode_constraints.
