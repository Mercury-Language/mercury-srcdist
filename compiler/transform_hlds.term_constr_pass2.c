/*
** Automatically generated from `term_constr_pass2.m'
** by the Mercury compiler,
** version rotd-2020-07-17
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


// :- module transform_hlds.term_constr_pass2.
// :- implementation.

/*
INIT mercury__transform_hlds__term_constr_pass2__init
ENDINIT
*/

#include "transform_hlds.term_constr_pass2.mih"


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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s {
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1;
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2;
  MR_bool transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded;
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10;
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11;
  jmp_buf transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0;
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21;
  MR_Box transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__tree234__pti_tree234_2__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0__plain_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_0_0[2];

static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_0[1];

static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_0[1];

static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_set_0_0[2];

static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_set_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0[1];

static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_edge_0_0[6];

static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_edge_0_0[6];

static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_edge_0[1];

static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_edge_0[1];

static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0[1];

static const MR_NotagFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0;

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__548__1_2_f_0(
  MR_Word Coeff_5,
  MR_Word LambdaHeadVar__1_8);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__521__1_2_f_0(
  MR_Word LambdaHeadVar__1_21,
  MR_Word LambdaHeadVar__2_22,
  MR_Word * LambdaHeadVar__3_23);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__420__1_2_p_0(
  MR_Word Visited_11,
  MR_Word LambdaHeadVar__1_26);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__386__1_2_p_0(
  MR_Word ProcId_5,
  MR_Word LambdaHeadVar__1_13);

static void MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__181__1_6_p_0(
  MR_Word AbstractSCC_5,
  MR_Word ModuleInfo_6,
  MR_Integer MaxMatrixSize_7,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__152__1_1_f_0(
  MR_Word LambdaHeadVar__1_19);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2__write_edge_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SizeVarSet_7,
  MR_Word Edge_8);

static void MR_CALL 
transform_hlds__term_constr_pass2__write_cycles_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_pass2__write_cycles_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word SizeVarSet_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__term_constr_pass2__write_cycle_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_2_f_0(
  MR_Word Map_4,
  MR_Word Old_5);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(
  MR_Word Map_4,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(
  MR_Word Map_4,
  MR_Word Eqn0_5);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(
  MR_Word StartPPId_4,
  MR_Word Cycle_5);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__build_edge_map_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(
  MR_Word StartPPId_5,
  MR_Word CurrPPId_6,
  MR_Word Map_7,
  MR_Word * Edges_8);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Zeros_0_2,
  MR_Word * STATE_VARIABLE_Zeros_3,
  MR_Word STATE_VARIABLE_CallVars_0_4,
  MR_Word * STATE_VARIABLE_CallVars_5,
  MR_Word STATE_VARIABLE_Polyhedron_0_6,
  MR_Word * STATE_VARIABLE_Polyhedron_7);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(
  MR_Word PPId_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(
  MR_Word Start_8,
  MR_Word SoFar_9,
  MR_Word Map_10,
  MR_Word Visited_11,
  MR_Word Edge_12,
  MR_Word STATE_VARIABLE_Cycles_0_19,
  MR_Word * STATE_VARIABLE_Cycles_20);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__direct_call_2_p_0(
  MR_Word Edge_3,
  MR_Word * Cycle_4);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__fix_edges_2_f_0(
  MR_Word Poly_4,
  MR_Word Edge0_5);

static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(
  MR_Word Proc_1,
  MR_Word AbstractSCC_2,
  MR_Word ModuleInfo_3,
  MR_Integer MaxMatrixSize_4,
  MR_Word TopPoly_5,
  MR_Word HeadVar__6_6,
  MR_Integer STATE_VARIABLE_Calls_0_7,
  MR_Integer * STATE_VARIABLE_Calls_8,
  MR_Word STATE_VARIABLE_DisjConstrs_0_9,
  MR_Word * STATE_VARIABLE_DisjConstrs_10,
  MR_Word STATE_VARIABLE_Edges_0_11,
  MR_Word * STATE_VARIABLE_Edges_12,
  MR_Word STATE_VARIABLE_Continue_0_13,
  MR_Word * STATE_VARIABLE_Continue_14);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(
  MR_Word Proc_14,
  MR_Word AbstractSCC_15,
  MR_Word ModuleInfo_16,
  MR_Integer MaxMatrixSize_17,
  MR_Word Goal_18,
  MR_Integer STATE_VARIABLE_Calls_0_60,
  MR_Integer * STATE_VARIABLE_Calls_61,
  MR_Word STATE_VARIABLE_Polyhedron_0_62,
  MR_Word * STATE_VARIABLE_Polyhedron_63,
  MR_Word STATE_VARIABLE_Edges_0_64,
  MR_Word * STATE_VARIABLE_Edges_65,
  MR_Word STATE_VARIABLE_Continue_0_66,
  MR_Word * STATE_VARIABLE_Continue_67);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(
  MR_Word AbstractSCC_1,
  MR_Word SizeVarSet_2,
  MR_Word HeadVar__3_3);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0(
  MR_Word AbstractSCC_5,
  MR_Word SizeVarSet_6,
  MR_Word PPId_7,
  MR_Word Loop_8);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0(
  MR_Word Vars_4,
  MR_Word Coeff_5);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word PPId_2);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Cycles0_2);

static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Map0_2);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Edges0_2);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_2[4][3];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_3[5][5];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_4[1][10];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_5[7][6];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_6[1][1];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_7[1][9];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_8[1][16];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_9[2][8];




static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_1[1])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_3[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__tree234__pti_tree234_2__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0__plain_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_5[7][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_8[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_9[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__tree234__pti_tree234_2__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0__plain_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&libs__rat__libs__rat__type_ctor_info_rat_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_abstract_ppids_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "abstract_ppids",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0)
};

static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_0_0[2] = {
  (MR_String) "tcgc_nodes",
  (MR_String) "tcgc_edges"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0 = {
  (MR_String) "term_cg_cycle",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_0_0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0
};

static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "cycle",
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_0 },
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_0
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_set_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0)
};

static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_set_0_0[2] = {
  (MR_String) "tcgcs_start",
  (MR_String) "tcgcs_cycles"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0 = {
  (MR_String) "term_cg_cycle_set",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_set_0_0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_set_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0
};

static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "cycle_set",
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0 },
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycles_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "cycles",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_edge_0_0[6] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)
};

static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_edge_0_0[6] = {
  (MR_String) "tcge_caller",
  (MR_String) "tcge_callee",
  (MR_String) "tcge_head_args",
  (MR_String) "tcge_call_args",
  (MR_String) "tcge_zeros",
  (MR_String) "tcge_label"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0 = {
  (MR_String) "term_cg_edge",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_edge_0_0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_edge_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_edge_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0
};

static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_edge_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____edge_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____edge_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "edge",
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_edge_0 },
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_edge_0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edges_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____edges_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____edges_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "edges",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 = {
  (MR_String) "pass2_options",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_String) "max_matrix_size",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "pass2_options",
  {     &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 },
  {     &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0
};

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__548__1_2_f_0(
  MR_Word Coeff_5,
  MR_Word LambdaHeadVar__1_8)
{
  {
    MR_Word LambdaHeadVar__2_9;

    {
      LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_9, 0) = ((MR_Box) (LambdaHeadVar__1_8));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_9, 1) = ((MR_Box) (Coeff_5));
    }
    return LambdaHeadVar__2_9;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__521__1_2_f_0(
  MR_Word LambdaHeadVar__1_21,
  MR_Word LambdaHeadVar__2_22,
  MR_Word * LambdaHeadVar__3_23)
{
  {
    MR_bool succeeded = (LambdaHeadVar__2_22 == (MR_Integer) 1);

    if (succeeded)
    {
      *LambdaHeadVar__3_23 = LambdaHeadVar__1_21;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__420__1_2_p_0(
  MR_Word Visited_11,
  MR_Word LambdaHeadVar__1_26)
{
  {
    MR_bool succeeded;
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 0))));

    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), ((MR_Box) (Var_27)), Visited_11);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__386__1_2_p_0(
  MR_Word ProcId_5,
  MR_Word LambdaHeadVar__1_13)
{
  {
    MR_bool succeeded;
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_13, (MR_Integer) 0))));

    succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(ProcId_5, Var_25);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__181__1_6_p_0(
  MR_Word AbstractSCC_5,
  MR_Word ModuleInfo_6,
  MR_Integer MaxMatrixSize_7,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17)
{
  {
    MR_Word ProcEdges_13;
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_15, (MR_Integer) 4))));
    MR_Word Var_22;
    MR_Integer Var_11;
    MR_Word Var_12;
    MR_Word Var_14;

    Var_22 = libs__polyhedron__universe_0_f_0();
    transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(LambdaHeadVar__1_15, AbstractSCC_5, ModuleInfo_6, MaxMatrixSize_7, Var_20, (MR_Integer) 1, &Var_11, Var_22, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &ProcEdges_13, (MR_Integer) 1, &Var_14);
    mercury__list__append_3_p_1((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), ProcEdges_13, LambdaHeadVar__2_16, LambdaHeadVar__3_17);
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__152__1_1_f_0(
  MR_Word LambdaHeadVar__1_19)
{
  {
    MR_Word LambdaHeadVar__2_20 = (MR_Word) (LambdaHeadVar__1_19);

    return LambdaHeadVar__2_20;
  }
}

void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
      MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
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
      MR_Word SubResult1_6;

      transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[5]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                libs__polyhedron____Compare____polyhedron_0_0(HeadVar__1_1, ArgX6_19, ArgY6_20);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
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

      succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
                succeeded = libs__polyhedron____Unify____polyhedron_0_0(ArgX6_13, ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(
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

      transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(
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
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0(
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
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__write_edge_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SizeVarSet_7,
  MR_Word Edge_8)
{
  {
    MR_Word PredProcId_10;
    MR_Word CallPredProcId_11;
    MR_Word Var_16;
    MR_Word Var_20;
    MR_Word Var_26;
    MR_Word Var_30;
    MR_Word Var_34;

    mercury__io__write_string_3_p_0((MR_String) "Edge is:\n\tHead: ");
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_8, (MR_Integer) 0))));
    PredProcId_10 = (MR_Word) (Var_16);
    hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(ModuleInfo_6, PredProcId_10);
    mercury__io__write_string_3_p_0((MR_String) " : ");
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_8, (MR_Integer) 2))));
    transform_hlds__term_constr_util__write_size_vars_4_p_0(SizeVarSet_7, Var_20);
    mercury__io__write_string_3_p_0((MR_String) " :- \n");
    mercury__io__write_string_3_p_0((MR_String) "\tConstraints are:  \n");
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_8, (MR_Integer) 5))));
    libs__polyhedron__write_polyhedron_4_p_0(Var_26, SizeVarSet_7);
    mercury__io__write_string_3_p_0((MR_String) "\n\tCall is:  ");
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_8, (MR_Integer) 1))));
    CallPredProcId_11 = (MR_Word) (Var_30);
    hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(ModuleInfo_6, CallPredProcId_11);
    mercury__io__write_string_3_p_0((MR_String) " : ");
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_8, (MR_Integer) 3))));
    transform_hlds__term_constr_util__write_size_vars_4_p_0(SizeVarSet_7, Var_34);
    mercury__io__write_string_3_p_0((MR_String) " :- \n");
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__write_cycles_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__term_constr_pass2__write_edge_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__write_cycles_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word SizeVarSet_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Cycle_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Cycles_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_20;
      MR_Word Var_22;
      MR_Word Var_24;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__io__write_string_3_p_0((MR_String) "Cycle in SCC:\n");
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cycle_13, (MR_Integer) 0))));
      transform_hlds__term_constr_pass2__write_cycle_4_p_0(ModuleInfo_1, Var_20);
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cycle_13, (MR_Integer) 1))));
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_9[1]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__write_cycles_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (SizeVarSet_2));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), Var_22, (MR_String) "\n", Var_24);
      mercury__io__nl_2_p_0();
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Cycles_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__write_cycle_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Proc_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Procs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredProcId_13;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0((MR_String) "\t- ");
      PredProcId_13 = (MR_Word) (Proc_10);
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(ModuleInfo_1, PredProcId_13);
      mercury__io__nl_2_p_0();
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Procs_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_2_f_0(
  MR_Word Map_4,
  MR_Word Old_5)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word New_6;
    MR_Box conv0_New_6;

    succeeded = mercury__bimap__search_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), Map_4, ((MR_Box) (Old_5)), &conv0_New_6);
    if (succeeded)
    {
      New_6 = ((MR_Word) (conv0_New_6));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      HeadVar__3_3 = New_6;
    else
      HeadVar__3_3 = Old_5;
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(
  MR_Word Map_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word Var0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Coeff_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_7;
    MR_Word New_10;
    MR_Box conv0_New_10;

    succeeded = mercury__bimap__search_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), Map_4, ((MR_Box) (Var0_5)), &conv0_New_10);
    if (succeeded)
    {
      New_10 = ((MR_Word) (conv0_New_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Var_7 = New_10;
    else
      Var_7 = Var0_5;
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Coeff_6));
    }
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(
  MR_Word Map_4,
  MR_Word Eqn0_5)
{
  {
    MR_Word Eqn_6;
    MR_Word Coeffs0_7;
    MR_Word Operator_8;
    MR_Word Constant_9;
    MR_Word Coeffs_10;
    MR_Word Var_11;

    libs__lp_rational__deconstruct_constraint_4_p_0(Eqn0_5, &Coeffs0_7, &Operator_8, &Constant_9);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[6]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Map_4));
    }
    Coeffs_10 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_2[0]), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_2[0]), Var_11, Coeffs0_7);
    Eqn_6 = libs__lp_rational__construct_constraint_3_f_0(Coeffs_10, Operator_8, Constant_9);
    return Eqn_6;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(
  MR_Word StartPPId_4,
  MR_Word Cycle_5)
{
  {
    MR_Word CollapsedCycle_6;
    MR_Word Edges0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cycle_5, (MR_Integer) 1))));

    if ((Edges0_8 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_pass2.collapse_cycle\'/2", (MR_String) "trying to collapse a cycle with no edges");
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Edges0_8, (MR_Integer) 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Edges0_8, (MR_Integer) 0))));

      if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
        CollapsedCycle_6 = Var_33;
      else
      {
        MR_Word StartEdge_14;
        MR_Word Rest_15;
        MR_Word HeadVars_18;
        MR_Word CallVars0_19;
        MR_Word Zeros0_20;
        MR_Word Polyhedron0_21;
        MR_Word Zeros_22;
        MR_Word CallVars_23;
        MR_Word Polyhedron_24;
        MR_Word EdgeMap_38;
        MR_Word Var_39;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Box conv0_StartEdge_14;

        Var_49 = transform_hlds__term_constr_pass2__build_edge_map_1_f_0(Var_32);
        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
        EdgeMap_38 = mercury__map__det_insert_3_f_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), (MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), Var_49, ((MR_Box) (Var_50)), ((MR_Box) (Var_33)));
        mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), (MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), EdgeMap_38, ((MR_Box) (StartPPId_4)), &conv0_StartEdge_14);
        StartEdge_14 = ((MR_Word) (conv0_StartEdge_14));
        Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StartEdge_14, (MR_Integer) 1))));
        transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(StartPPId_4, Var_39, EdgeMap_38, &Rest_15);
        HeadVars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StartEdge_14, (MR_Integer) 2))));
        CallVars0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StartEdge_14, (MR_Integer) 3))));
        Zeros0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StartEdge_14, (MR_Integer) 4))));
        Polyhedron0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StartEdge_14, (MR_Integer) 5))));
        transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(Rest_15, Zeros0_20, &Zeros_22, CallVars0_19, &CallVars_23, Polyhedron0_21, &Polyhedron_24);
        {
          CollapsedCycle_6 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CollapsedCycle_6, 0) = ((MR_Box) (StartPPId_4));
          MR_hl_field(MR_mktag(0), CollapsedCycle_6, 1) = ((MR_Box) (StartPPId_4));
          MR_hl_field(MR_mktag(0), CollapsedCycle_6, 2) = ((MR_Box) (HeadVars_18));
          MR_hl_field(MR_mktag(0), CollapsedCycle_6, 3) = ((MR_Box) (CallVars_23));
          MR_hl_field(MR_mktag(0), CollapsedCycle_6, 4) = ((MR_Box) (Zeros_22));
          MR_hl_field(MR_mktag(0), CollapsedCycle_6, 5) = ((MR_Box) (Polyhedron_24));
        }
      }
    }
    return CollapsedCycle_6;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__build_edge_map_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), (MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0));
    else
    {
      MR_Word Edge_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Edges_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_5;
      MR_Word Var_6;

      Var_5 = transform_hlds__term_constr_pass2__build_edge_map_1_f_0(Edges_4);
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_3, (MR_Integer) 0))));
      HeadVar__2_2 = mercury__map__det_insert_3_f_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), (MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), Var_5, ((MR_Box) (Var_6)), ((MR_Box) (Edge_3)));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(
  MR_Word StartPPId_5,
  MR_Word CurrPPId_6,
  MR_Word Map_7,
  MR_Word * Edges_8)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(StartPPId_5, CurrPPId_6);
    if (succeeded)
      *Edges_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Edge_9;
      MR_Word Edges0_10;
      MR_Word Var_11;
      MR_Box conv0_Edge_9;

      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), (MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), Map_7, ((MR_Box) (CurrPPId_6)), &conv0_Edge_9);
      Edge_9 = ((MR_Word) (conv0_Edge_9));
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_9, (MR_Integer) 1))));
      transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(StartPPId_5, Var_11, Map_7, &Edges0_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Edges_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Edge_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Edges0_10));
      }
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Eqn_6;

    conv1_Eqn_6 = transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Eqn_6));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = transform_hlds__term_constr_pass2__subst_size_var_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Zeros_0_2,
  MR_Word * STATE_VARIABLE_Zeros_3,
  MR_Word STATE_VARIABLE_CallVars_0_4,
  MR_Word * STATE_VARIABLE_CallVars_5,
  MR_Word STATE_VARIABLE_Polyhedron_0_6,
  MR_Word * STATE_VARIABLE_Polyhedron_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Polyhedron_7 = STATE_VARIABLE_Polyhedron_0_6;
      *STATE_VARIABLE_CallVars_5 = STATE_VARIABLE_CallVars_0_4;
      *STATE_VARIABLE_Zeros_3 = STATE_VARIABLE_Zeros_0_2;
    }
    else
    {
      MR_Word Edge_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Edges_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadVars_22;
      MR_Word Subst0_23;
      MR_Word Subst_24;
      MR_Word Constraints0_25;
      MR_Word Constraints1_26;
      MR_Word Constraints2_27;
      MR_Word Constraints3_28;
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_17, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_Zeros_36_36;
      MR_Word Var_37;
      MR_Word STATE_VARIABLE_CallVars_38_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_Polyhedron_43_43;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Zeros_0_2;
      MR_Word next_value_of_STATE_VARIABLE_CallVars_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Polyhedron_0_6;

      mercury__set__union_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), Var_35, STATE_VARIABLE_Zeros_0_2, &STATE_VARIABLE_Zeros_36_36);
      HeadVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_17, (MR_Integer) 2))));
      Subst0_23 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), HeadVars_22, STATE_VARIABLE_CallVars_0_4);
      Var_37 = mercury__bimap__init_0_f_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]));
      mercury__bimap__set_from_assoc_list_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), Subst0_23, Var_37, &Subst_24);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[4]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Subst_24));
      }
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_17, (MR_Integer) 3))));
      STATE_VARIABLE_CallVars_38_38 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), Var_39, Var_40);
      Constraints0_25 = libs__polyhedron__non_false_constraints_1_f_0(STATE_VARIABLE_Polyhedron_0_6);
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_17, (MR_Integer) 5))));
      Constraints1_26 = libs__polyhedron__non_false_constraints_1_f_0(Var_41);
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[5]));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Subst_24));
      }
      Constraints2_27 = mercury__list__map_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Var_42, Constraints1_26);
      Constraints3_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Constraints0_25, Constraints2_27);
      STATE_VARIABLE_Polyhedron_43_43 = libs__polyhedron__from_constraints_1_f_0(Constraints3_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Edges_18;
      next_value_of_STATE_VARIABLE_Zeros_0_2 = STATE_VARIABLE_Zeros_36_36;
      next_value_of_STATE_VARIABLE_CallVars_0_4 = STATE_VARIABLE_CallVars_38_38;
      next_value_of_STATE_VARIABLE_Polyhedron_0_6 = STATE_VARIABLE_Polyhedron_43_43;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Zeros_0_2 = next_value_of_STATE_VARIABLE_Zeros_0_2;
      STATE_VARIABLE_CallVars_0_4 = next_value_of_STATE_VARIABLE_CallVars_0_4;
      STATE_VARIABLE_Polyhedron_0_6 = next_value_of_STATE_VARIABLE_Polyhedron_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(
  MR_Word PPId_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Nodes_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), ((MR_Box) (PPId_3)), Nodes_4);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Cycles_20;

    transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Cycles_20);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Cycles_20));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__420__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(
  MR_Word Start_8,
  MR_Word SoFar_9,
  MR_Word Map_10,
  MR_Word Visited_11,
  MR_Word Edge_12,
  MR_Word STATE_VARIABLE_Cycles_0_19,
  MR_Word * STATE_VARIABLE_Cycles_20)
{
  {
    MR_bool succeeded;
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_12, (MR_Integer) 1))));

    succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(Start_8, Var_68);
    if (succeeded)
    {
      MR_Word Cycle_14;
      MR_Word Var_21;
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_12, (MR_Integer) 0))));
      MR_Word Var_23;

      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Visited_11));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Edge_12));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (SoFar_9));
      }
      {
        Cycle_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Cycle_14, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), Cycle_14, 1) = ((MR_Box) (Var_23));
      }
      mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0), ((MR_Box) (Cycle_14)), STATE_VARIABLE_Cycles_0_19, STATE_VARIABLE_Cycles_20);
    }
    else
    {
      MR_Word MoreEdges0_15;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_12, (MR_Integer) 1))));
      MR_Box conv0_MoreEdges0_15;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]), Map_10, ((MR_Box) (Var_25)), &conv0_MoreEdges0_15);
      if (succeeded)
      {
        MoreEdges0_15 = ((MR_Word) (conv0_MoreEdges0_15));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word NotVisited_16;
        MR_Word MoreEdges_18;
        MR_Word Var_28;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Box conv2_STATE_VARIABLE_Cycles_20;

        {
          NotVisited_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NotVisited_16, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_3[4]));
          MR_hl_field(MR_mktag(0), NotVisited_16, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1));
          MR_hl_field(MR_mktag(0), NotVisited_16, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), NotVisited_16, 3) = ((MR_Box) (Visited_11));
        }
        MoreEdges_18 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), NotVisited_16, MoreEdges0_15);
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Edge_12));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (SoFar_9));
        }
        Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_12, (MR_Integer) 0))));
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Visited_11));
        }
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2));
          MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Start_8));
          MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (Map_10));
          MR_hl_field(MR_mktag(0), Var_28, 6) = ((MR_Box) (Var_31));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[2]), Var_28, MoreEdges_18, ((MR_Box) (STATE_VARIABLE_Cycles_0_19)), &conv2_STATE_VARIABLE_Cycles_20);
        *STATE_VARIABLE_Cycles_20 = ((MR_Word) (conv2_STATE_VARIABLE_Cycles_20));
      }
      else
        *STATE_VARIABLE_Cycles_20 = STATE_VARIABLE_Cycles_0_19;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__direct_call_2_p_0(
  MR_Word Edge_3,
  MR_Word * Cycle_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_3, (MR_Integer) 0))));
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_3, (MR_Integer) 1))));

    succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(Var_5, Var_11);
    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge_3, (MR_Integer) 0))));
      Var_8 = (MR_Word) ((MR_Unsigned) 0U);
      Var_10 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Var_7));
        MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (Var_8));
      }
      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Edge_3));
        MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Cycle_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_6));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_9));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__fix_edges_2_f_0(
  MR_Word Poly_4,
  MR_Word Edge0_5)
{
  {
    MR_Word Edge_6;
    MR_Word Label0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge0_5, (MR_Integer) 5))));
    MR_Word Label_8;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    Label_8 = libs__polyhedron__intersection_2_f_0(Poly_4, Label0_7);
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge0_5, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge0_5, (MR_Integer) 1))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge0_5, (MR_Integer) 2))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge0_5, (MR_Integer) 3))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Edge0_5, (MR_Integer) 4))));
    {
      Edge_6 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Edge_6, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Edge_6, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), Edge_6, 2) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), Edge_6, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Edge_6, 4) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Edge_6, 5) = ((MR_Box) (Label_8));
    }
    return Edge_6;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(
  MR_Word Proc_1,
  MR_Word AbstractSCC_2,
  MR_Word ModuleInfo_3,
  MR_Integer MaxMatrixSize_4,
  MR_Word TopPoly_5,
  MR_Word HeadVar__6_6,
  MR_Integer STATE_VARIABLE_Calls_0_7,
  MR_Integer * STATE_VARIABLE_Calls_8,
  MR_Word STATE_VARIABLE_DisjConstrs_0_9,
  MR_Word * STATE_VARIABLE_DisjConstrs_10,
  MR_Word STATE_VARIABLE_Edges_0_11,
  MR_Word * STATE_VARIABLE_Edges_12,
  MR_Word STATE_VARIABLE_Continue_0_13,
  MR_Word * STATE_VARIABLE_Continue_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Continue_14 = STATE_VARIABLE_Continue_0_13;
      *STATE_VARIABLE_Edges_12 = STATE_VARIABLE_Edges_0_11;
      *STATE_VARIABLE_DisjConstrs_10 = STATE_VARIABLE_DisjConstrs_0_9;
      *STATE_VARIABLE_Calls_8 = STATE_VARIABLE_Calls_0_7;
    }
    else
    {
      MR_Word Disj_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Disjs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Constrs_43;
      MR_Integer STATE_VARIABLE_Calls_52_52;
      MR_Word STATE_VARIABLE_Edges_53_53;
      MR_Word STATE_VARIABLE_Continue_54_54;
      MR_Word STATE_VARIABLE_DisjConstrs_55_55;

      transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(Proc_1, AbstractSCC_2, ModuleInfo_3, MaxMatrixSize_4, Disj_37, STATE_VARIABLE_Calls_0_7, &STATE_VARIABLE_Calls_52_52, TopPoly_5, &Constrs_43, STATE_VARIABLE_Edges_0_11, &STATE_VARIABLE_Edges_53_53, STATE_VARIABLE_Continue_0_13, &STATE_VARIABLE_Continue_54_54);
      mercury__list__cons_3_p_0((MR_Word) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0), ((MR_Box) (Constrs_43)), STATE_VARIABLE_DisjConstrs_0_9, &STATE_VARIABLE_DisjConstrs_55_55);
      switch (STATE_VARIABLE_Continue_54_54) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Calls_8 = STATE_VARIABLE_Calls_52_52;
            *STATE_VARIABLE_DisjConstrs_10 = STATE_VARIABLE_DisjConstrs_55_55;
            *STATE_VARIABLE_Edges_12 = STATE_VARIABLE_Edges_53_53;
            *STATE_VARIABLE_Continue_14 = STATE_VARIABLE_Continue_54_54;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__6_6 = Disjs_38;
            MR_Integer next_value_of_STATE_VARIABLE_Calls_0_7 = STATE_VARIABLE_Calls_52_52;
            MR_Word next_value_of_STATE_VARIABLE_DisjConstrs_0_9 = STATE_VARIABLE_DisjConstrs_55_55;
            MR_Word next_value_of_STATE_VARIABLE_Edges_0_11 = STATE_VARIABLE_Edges_53_53;
            MR_Word next_value_of_STATE_VARIABLE_Continue_0_13 = STATE_VARIABLE_Continue_54_54;

            // direct tailcall eliminated
            ;
            HeadVar__6_6 = next_value_of_HeadVar__6_6;
            STATE_VARIABLE_Calls_0_7 = next_value_of_STATE_VARIABLE_Calls_0_7;
            STATE_VARIABLE_DisjConstrs_0_9 = next_value_of_STATE_VARIABLE_DisjConstrs_0_9;
            STATE_VARIABLE_Edges_0_11 = next_value_of_STATE_VARIABLE_Edges_0_11;
            STATE_VARIABLE_Continue_0_13 = next_value_of_STATE_VARIABLE_Continue_0_13;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__5_5;

    conv9_HeadVar__5_5 = libs__polyhedron__convex_union_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__5_5));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_Edge_6;

    conv8_Edge_6 = transform_hlds__term_constr_pass2__fix_edges_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_Edge_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv3_STATE_VARIABLE_Calls_61;
    MR_Word conv2_STATE_VARIABLE_Polyhedron_63;
    MR_Word conv1_STATE_VARIABLE_Edges_65;
    MR_Word conv0_STATE_VARIABLE_Continue_67;

    transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Calls_61, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Polyhedron_63, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_Edges_65, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_Continue_67);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Calls_61));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Polyhedron_63));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_Edges_65));
    *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Continue_67));
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(
  MR_Word Proc_14,
  MR_Word AbstractSCC_15,
  MR_Word ModuleInfo_16,
  MR_Integer MaxMatrixSize_17,
  MR_Word Goal_18,
  MR_Integer STATE_VARIABLE_Calls_0_60,
  MR_Integer * STATE_VARIABLE_Calls_61,
  MR_Word STATE_VARIABLE_Polyhedron_0_62,
  MR_Word * STATE_VARIABLE_Polyhedron_63,
  MR_Word STATE_VARIABLE_Edges_0_64,
  MR_Word * STATE_VARIABLE_Edges_65,
  MR_Word STATE_VARIABLE_Continue_0_66,
  MR_Word * STATE_VARIABLE_Continue_67)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Goal_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goals_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
          MR_Word Locals_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 2))));

          switch (STATE_VARIABLE_Continue_0_66) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_Calls_61 = STATE_VARIABLE_Calls_0_60;
                *STATE_VARIABLE_Polyhedron_63 = STATE_VARIABLE_Polyhedron_0_62;
                *STATE_VARIABLE_Edges_65 = STATE_VARIABLE_Edges_0_64;
                *STATE_VARIABLE_Continue_67 = STATE_VARIABLE_Continue_0_66;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word DisjConstrs0_27;
                MR_Word Edges1_28;
                MR_Word Edges2_29;
                MR_Word Var_89;
                MR_Word Var_94;

                Var_89 = libs__polyhedron__universe_0_f_0();
                transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(Proc_14, AbstractSCC_15, ModuleInfo_16, MaxMatrixSize_17, Var_89, Goals_23, STATE_VARIABLE_Calls_0_60, STATE_VARIABLE_Calls_61, (MR_Word) ((MR_Unsigned) 0U), &DisjConstrs0_27, (MR_Word) ((MR_Unsigned) 0U), &Edges1_28, STATE_VARIABLE_Continue_0_66, STATE_VARIABLE_Continue_67);
                {
                  Var_94 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[3]));
                  MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (STATE_VARIABLE_Polyhedron_0_62));
                }
                Edges2_29 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), (MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), Var_94, Edges1_28);
                mercury__list__append_3_p_1((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), Edges2_29, STATE_VARIABLE_Edges_0_64, STATE_VARIABLE_Edges_65);
                switch (*STATE_VARIABLE_Continue_67) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Polyhedron_63 = STATE_VARIABLE_Polyhedron_0_62;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word SizeVarSet_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_14, (MR_Integer) 6))));
                      MR_Word DisjConstrs_31;
                      MR_Word Constrs2_32;
                      MR_Word Var_96;
                      MR_Word Var_97;
                      MR_Word Var_98;
                      MR_Box conv10_Constrs2_32;

                      DisjConstrs_31 = libs__polyhedron__project_all_3_f_0(SizeVarSet_30, Locals_25, DisjConstrs0_27);
                      {
                        Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (MaxMatrixSize_17));
                      }
                      {
                        Var_96 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_9[0]));
                        MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3));
                        MR_hl_field(MR_mktag(0), Var_96, 2) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_96, 3) = ((MR_Box) (SizeVarSet_30));
                        MR_hl_field(MR_mktag(0), Var_96, 4) = ((MR_Box) (Var_97));
                      }
                      Var_98 = libs__polyhedron__empty_0_f_0();
                      conv10_Constrs2_32 = mercury__list__foldl_3_f_0((MR_Word) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0), (MR_Word) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0), Var_96, DisjConstrs_31, ((MR_Box) (Var_98)));
                      Constrs2_32 = ((MR_Word) (conv10_Constrs2_32));
                      libs__polyhedron__intersection_3_p_0(Constrs2_32, STATE_VARIABLE_Polyhedron_0_62, STATE_VARIABLE_Polyhedron_63);
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Goals_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 0))));
          MR_Word Locals_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 1))));

          switch (STATE_VARIABLE_Continue_0_66) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_Calls_61 = STATE_VARIABLE_Calls_0_60;
                *STATE_VARIABLE_Polyhedron_63 = STATE_VARIABLE_Polyhedron_0_62;
                *STATE_VARIABLE_Edges_65 = STATE_VARIABLE_Edges_0_64;
                *STATE_VARIABLE_Continue_67 = STATE_VARIABLE_Continue_0_66;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_82;
                MR_Word STATE_VARIABLE_Polyhedron_84_84;
                MR_Box conv7_STATE_VARIABLE_Calls_61;
                MR_Box conv6_STATE_VARIABLE_Polyhedron_84_84;
                MR_Box conv5_STATE_VARIABLE_Edges_65;
                MR_Box conv4_STATE_VARIABLE_Continue_67;

                {
                  Var_82 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (Proc_14));
                  MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (AbstractSCC_15));
                  MR_hl_field(MR_mktag(0), Var_82, 5) = ((MR_Box) (ModuleInfo_16));
                  MR_hl_field(MR_mktag(0), Var_82, 6) = ((MR_Box) (MaxMatrixSize_17));
                }
                mercury__list__foldl4_10_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_82, Goals_100, ((MR_Box) (STATE_VARIABLE_Calls_0_60)), &conv7_STATE_VARIABLE_Calls_61, ((MR_Box) (STATE_VARIABLE_Polyhedron_0_62)), &conv6_STATE_VARIABLE_Polyhedron_84_84, ((MR_Box) (STATE_VARIABLE_Edges_0_64)), &conv5_STATE_VARIABLE_Edges_65, ((MR_Box) (STATE_VARIABLE_Continue_0_66)), &conv4_STATE_VARIABLE_Continue_67);
                *STATE_VARIABLE_Calls_61 = ((MR_Integer) (conv7_STATE_VARIABLE_Calls_61));
                STATE_VARIABLE_Polyhedron_84_84 = ((MR_Word) (conv6_STATE_VARIABLE_Polyhedron_84_84));
                *STATE_VARIABLE_Edges_65 = ((MR_Word) (conv5_STATE_VARIABLE_Edges_65));
                *STATE_VARIABLE_Continue_67 = ((MR_Word) (conv4_STATE_VARIABLE_Continue_67));
                switch (*STATE_VARIABLE_Continue_67) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Polyhedron_63 = STATE_VARIABLE_Polyhedron_84_84;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_14, (MR_Integer) 6))));

                      libs__polyhedron__project_4_p_0(Locals_101, Var_87, STATE_VARIABLE_Polyhedron_84_84, STATE_VARIABLE_Polyhedron_63);
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CallPPId0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 0))));
          MR_Word CallVars_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 2))));
          MR_Word ZeroVars_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 3))));
          MR_Word Edge_41;
          MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_14, (MR_Integer) 0))));
          MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_14, (MR_Integer) 2))));
          MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_14, (MR_Integer) 7))));
          MR_Integer Var_75;

          {
            Edge_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Edge_41, 0) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(0), Edge_41, 1) = ((MR_Box) (CallPPId0_34));
            MR_hl_field(MR_mktag(0), Edge_41, 2) = ((MR_Box) (Var_125));
            MR_hl_field(MR_mktag(0), Edge_41, 3) = ((MR_Box) (CallVars_36));
            MR_hl_field(MR_mktag(0), Edge_41, 4) = ((MR_Box) (Var_130));
            MR_hl_field(MR_mktag(0), Edge_41, 5) = ((MR_Box) (STATE_VARIABLE_Polyhedron_0_62));
          }
          mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), ((MR_Box) (Edge_41)), STATE_VARIABLE_Edges_0_64, STATE_VARIABLE_Edges_65);
          *STATE_VARIABLE_Calls_61 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Calls_0_60 + (MR_Unsigned) 1);
          Var_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proc_14, (MR_Integer) 9))));
          succeeded = (*STATE_VARIABLE_Calls_61 > Var_75);
          if (succeeded)
          {
            *STATE_VARIABLE_Continue_67 = (MR_Integer) 0;
            *STATE_VARIABLE_Polyhedron_63 = STATE_VARIABLE_Polyhedron_0_62;
          }
          else
          {
            *STATE_VARIABLE_Continue_67 = STATE_VARIABLE_Continue_0_66;
            switch (*STATE_VARIABLE_Continue_67) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Polyhedron_63 = STATE_VARIABLE_Polyhedron_0_62;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word CallPPId_42 = (MR_Word) (CallPPId0_34);
                  MR_Word CallProcInfo_44;
                  MR_Word CallTerm2Info_45;
                  MR_Word MaybeArgSizeInfo_46;
                  MR_Word Var_43;

                  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_16, CallPPId_42, &Var_43, &CallProcInfo_44);
                  hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(CallProcInfo_44, &CallTerm2Info_45);
                  MaybeArgSizeInfo_46 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(CallTerm2Info_45);
                  if ((MaybeArgSizeInfo_46 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_pass2.find_edges_in_goal\'/13", (MR_String) "proc with no arg size info in pass 2");
                      return;
                    }
                  else
                  {
                    MR_Word ArgSizePolyhedron0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgSizeInfo_46, (MR_Integer) 0))));

                    succeeded = libs__polyhedron__is_universe_1_p_0(ArgSizePolyhedron0_47);
                    if (succeeded)
                      *STATE_VARIABLE_Polyhedron_63 = STATE_VARIABLE_Polyhedron_0_62;
                    else
                    {
                      MR_Word MaybeCallProc_48;
                      MR_Word CallProc_50;
                      MR_Word HeadVars_51;
                      MR_Word Subst_52;
                      MR_Word Eqns0_53;
                      MR_Word Eqns1_54;
                      MR_Word Eqns_55;
                      MR_Word ArgSizePolyhedron_56;

                      MaybeCallProc_48 = transform_hlds__term_constr_main_types__term2_info_get_abstract_rep_1_f_0(CallTerm2Info_45);
                      if ((MaybeCallProc_48 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_pass2.find_edges_in_goal\'/13", (MR_String) "no abstract representation for proc");
                          return;
                        }
                      else
                        CallProc_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCallProc_48, (MR_Integer) 0))));
                      HeadVars_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallProc_50, (MR_Integer) 2))));
                      Subst_52 = mercury__map__from_corresponding_lists_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), HeadVars_51, CallVars_36);
                      Eqns0_53 = libs__polyhedron__non_false_constraints_1_f_0(ArgSizePolyhedron0_47);
                      Eqns1_54 = transform_hlds__term_constr_util__substitute_size_vars_2_f_0(Eqns0_53, Subst_52);
                      Eqns_55 = libs__lp_rational__set_vars_to_zero_2_f_0(ZeroVars_37, Eqns1_54);
                      ArgSizePolyhedron_56 = libs__polyhedron__from_constraints_1_f_0(Eqns_55);
                      libs__polyhedron__intersection_3_p_0(ArgSizePolyhedron_56, STATE_VARIABLE_Polyhedron_0_62, STATE_VARIABLE_Polyhedron_63);
                    }
                  }
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Primitive_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 0))));

          switch (STATE_VARIABLE_Continue_0_66) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Polyhedron_63 = STATE_VARIABLE_Polyhedron_0_62;
              break;
            case (MR_Integer) 1:
              libs__polyhedron__intersection_3_p_0(Primitive_57, STATE_VARIABLE_Polyhedron_0_62, STATE_VARIABLE_Polyhedron_63);
              break;
          }
          *STATE_VARIABLE_Calls_61 = STATE_VARIABLE_Calls_0_60;
          *STATE_VARIABLE_Edges_65 = STATE_VARIABLE_Edges_0_64;
          *STATE_VARIABLE_Continue_67 = STATE_VARIABLE_Continue_0_66;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_Cycle_4;

    succeeded = transform_hlds__term_constr_pass2__direct_call_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_Cycle_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv3_Cycle_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__3_17;

    transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__181__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_17);
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_17));
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_20;

    conv0_LambdaHeadVar__2_20 = transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__152__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
    return wrapper_arg_2;
  }
}

void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0(
  MR_Word Options_5,
  MR_Word SCC0_6,
  MR_Word ModuleInfo_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC0_6);
    if (succeeded)
      *Result_8 = (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_6[0]);
    else
    {
      MR_Word AbstractSCC_9;

      AbstractSCC_9 = transform_hlds__term_constr_util__get_abstract_scc_2_f_0(ModuleInfo_7, SCC0_6);
      succeeded = transform_hlds__term_constr_data__scc_contains_recursion_1_p_0(AbstractSCC_9);
      if (succeeded)
      {
        MR_Word PPIdSCC_10;
        MR_Word PPIds_12;
        MR_Word SizeVarSet_13;
        MR_Word Edges_14;
        MR_Word Cycles_15;
        MR_Word CycleSets_16;
        MR_Integer Var_21;
        MR_Word FindEdges_31;
        MR_Word Cycles0_69;
        MR_Word Edges_70;
        MR_Word Cycles1_71;
        MR_Word EdgeMap_80;
        MR_Box conv2_Edges_14;

        PPIdSCC_10 = mercury__set__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_2[2]), SCC0_6);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), PPIdSCC_10, &PPIds_12);
        SizeVarSet_13 = transform_hlds__term_constr_data__size_varset_from_abstract_scc_1_f_0(AbstractSCC_9);
        Var_21 = (MR_Integer) (Options_5);
        {
          FindEdges_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FindEdges_31, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), FindEdges_31, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_2));
          MR_hl_field(MR_mktag(0), FindEdges_31, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), FindEdges_31, 3) = ((MR_Box) (AbstractSCC_9));
          MR_hl_field(MR_mktag(0), FindEdges_31, 4) = ((MR_Box) (ModuleInfo_7));
          MR_hl_field(MR_mktag(0), FindEdges_31, 5) = ((MR_Box) (Var_21));
        }
        mercury__set__foldl_4_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]), FindEdges_31, AbstractSCC_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Edges_14);
        Edges_14 = ((MR_Word) (conv2_Edges_14));
        mercury__list__filter_map_4_p_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), (MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_2[3]), Edges_14, &Cycles0_69, &Edges_70);
        EdgeMap_80 = transform_hlds__term_constr_pass2__partition_edges_2_f_0(PPIds_12, Edges_70);
        Cycles1_71 = transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(PPIds_12, EdgeMap_80);
        Cycles_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0), Cycles0_69, Cycles1_71);
        CycleSets_16 = transform_hlds__term_constr_pass2__partition_cycles_2_f_0(PPIds_12, Cycles_15);
        succeeded = transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(AbstractSCC_9, SizeVarSet_13, CycleSets_16);
        if (succeeded)
          *Result_8 = (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_6[0]);
        else
        {
          MR_Word Error_85;
          MR_Word Var_87;
          MR_Word Var_89;

          Var_87 = mercury__term__context_init_0_f_0();
          {
            Error_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Error_85, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(0), Error_85, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Error_85));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_89));
          }
        }
      }
      else
        *Result_8 = (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_6[0]);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21 = ((MR_Word) ((env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21));
    transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0((env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1, (env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2, (env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10, (env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21);
    (env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded)
      transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), &(env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21, (env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11, transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(
  MR_Word AbstractSCC_1,
  MR_Word SizeVarSet_2,
  MR_Word HeadVar__3_3)
{
  {
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s env;

    (env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1 = AbstractSCC_1;
    (env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2 = SizeVarSet_2;
    while (MR_TRUE)
    {
      // setup for model_semi tailcalls optimized into a loop
      ;
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        (env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
      else
      {
        MR_Word CycleSet_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word CycleSets_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word next_value_of_HeadVar__3_3;

        (env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CycleSet_8, (MR_Integer) 0))));
        (env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CycleSet_8, (MR_Integer) 1))));
        if (((env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11 == (MR_Word) ((MR_Unsigned) 0U)))
          (env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
        else
        {
          transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(&env);
          (env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = !((env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded);
        }
        if ((env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = CycleSets_9;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
      return (env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded;
      break;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_9;

    conv1_LambdaHeadVar__2_9 = transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__548__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_9));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_23;

    succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__521__1_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_23);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_23));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0(
  MR_Word AbstractSCC_5,
  MR_Word SizeVarSet_6,
  MR_Word PPId_7,
  MR_Word Loop_8)
{
  {
    MR_bool succeeded;
    MR_Word Proc_12;
    MR_Word Inputs_13;
    MR_Word HeadArgs_14;
    MR_Word CallArgs_15;
    MR_Word Terms_16;
    MR_Word Condition_17;
    MR_Word Label_18;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_85;

    {
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Loop_8, (MR_Integer) 0))));

      succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(PPId_7, Var_78);
      succeeded = !(succeeded);
    }
    if (!(succeeded))
    {
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Loop_8, (MR_Integer) 1))));

      succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(PPId_7, Var_79);
      succeeded = !(succeeded);
    }
    if (succeeded)
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_pass2.strict_decrease_around_loop\'/4", (MR_String) "badly formed loop");
    Var_24 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0), AbstractSCC_5);
    Proc_12 = transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(Var_24, PPId_7);
    Inputs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_12, (MR_Integer) 3))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Loop_8, (MR_Integer) 2))));
    HeadArgs_14 = mercury__list__filter_map_corresponding_3_f_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_2[1]), Var_25, Inputs_13);
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Loop_8, (MR_Integer) 3))));
    CallArgs_15 = mercury__list__filter_map_corresponding_3_f_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_2[1]), Var_26, Inputs_13);
    Var_29 = libs__rat__one_0_f_0();
    Var_28 = libs__rat__f_minus_1_f_0(Var_29);
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (Var_28));
    }
    Var_27 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_2[0]), Var_85, HeadArgs_14);
    Var_31 = libs__rat__one_0_f_0();
    Var_30 = transform_hlds__term_constr_pass2__make_coeffs_2_f_0(CallArgs_15, Var_31);
    Terms_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_2[0]), Var_27, Var_30);
    Var_34 = libs__rat__one_0_f_0();
    Var_33 = libs__rat__f_minus_1_f_0(Var_34);
    Condition_17 = libs__lp_rational__construct_constraint_3_f_0(Terms_16, (MR_Integer) 0, Var_33);
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Loop_8, (MR_Integer) 5))));
    Label_18 = libs__polyhedron__non_false_constraints_1_f_0(Var_35);
    succeeded = libs__lp_rational__entailed_3_p_0(SizeVarSet_6, Label_18, Condition_17);
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_9;

    conv0_LambdaHeadVar__2_9 = transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__548__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0(
  MR_Word Vars_4,
  MR_Word Coeff_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Coeff_5));
    }
    HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_2[0]), Var_7, Vars_4);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word PPId_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_pass2.get_proc_from_abstract_scc\'/2", (MR_String) "cannot find proc");
    else
    {
      MR_Word Proc_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Procs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_8, (MR_Integer) 0))));

      succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(PPId_2, Var_22);
      if (succeeded)
        HeadVar__3_3 = Proc_8;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Procs_9;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_CollapsedCycle_6;

    conv0_CollapsedCycle_6 = transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_CollapsedCycle_6));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Cycles0_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Proc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Procs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PCycles_9;
      MR_Word Cycles1_10;
      MR_Word CycleSets0_11;
      MR_Word PEdges_12;
      MR_Word Var_15;
      MR_Word Var_21;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Proc_5));
      }
      mercury__list__filter_4_p_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0), Var_15, Cycles0_2, &PCycles_9, &Cycles1_10);
      CycleSets0_11 = transform_hlds__term_constr_pass2__partition_cycles_2_f_0(Procs_6, Cycles1_10);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Proc_5));
      }
      PEdges_12 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0), (MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), Var_21, PCycles_9);
      if ((PEdges_12 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__3_3 = CycleSets0_11;
      else
      {
        MR_Word Var_16;

        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Proc_5));
          MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (PEdges_12));
        }
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_16));
          MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (CycleSets0_11));
        }
      }
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Cycles_20;

    transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Cycles_20);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Cycles_20));
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Map0_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadPPId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailPPId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadCycles_9;
      MR_Word Map1_10;
      MR_Word TailCycles_11;
      MR_Word InitialEdges_18;
      MR_Word Var_19;
      MR_Box conv0_InitialEdges_18;
      MR_Box conv2_HeadCycles_9;

      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]), Map0_2, ((MR_Box) (HeadPPId_5)), &conv0_InitialEdges_18);
      InitialEdges_18 = ((MR_Word) (conv0_InitialEdges_18));
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1));
        MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (HeadPPId_5));
        MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (Map0_2));
        MR_hl_field(MR_mktag(0), Var_19, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[2]), Var_19, InitialEdges_18, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_HeadCycles_9);
      HeadCycles_9 = ((MR_Word) (conv2_HeadCycles_9));
      mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]), ((MR_Box) (HeadPPId_5)), Map0_2, &Map1_10);
      TailCycles_11 = transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(TailPPId_6, Map1_10);
      HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0), HeadCycles_9, TailCycles_11);
    }
    return HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__386__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Edges0_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]));
    else
    {
      MR_Word ProcId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SCC_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Map0_9;
      MR_Word Edges_10;
      MR_Word Var_12;

      Map0_9 = transform_hlds__term_constr_pass2__partition_edges_2_f_0(SCC_6, Edges0_2);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_edges_2_f_0_1));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ProcId_5));
      }
      Edges_10 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0), Var_12, Edges0_2);
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0), (MR_Word) (&transform_hlds__term_constr_pass2_scalar_common_1[0]), ((MR_Box) (ProcId_5)), ((MR_Box) (Edges_10)), Map0_9, &HeadVar__3_3);
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_pass2__pass2_options_init_1_f_0(
  MR_Integer MaxSize_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) (MaxSize_3);

    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_pass2____Unify____cycle_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____cycle_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_pass2____Unify____cycles_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____cycles_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_pass2____Unify____edge_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____edge_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_pass2____Unify____edges_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____edges_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_pass2____Unify____pass2_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____pass2_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__term_constr_pass2__init(void)
{
}

void mercury__transform_hlds__term_constr_pass2__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_abstract_ppids_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_set_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycles_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edges_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0);
}

void mercury__transform_hlds__term_constr_pass2__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_constr_pass2__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_constr_pass2.
