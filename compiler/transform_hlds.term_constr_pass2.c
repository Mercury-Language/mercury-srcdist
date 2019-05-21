/*
** Automatically generated from `term_constr_pass2.m'
** by the Mercury compiler,
** version rotd-2017-08-07
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module transform_hlds.term_constr_pass2. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_pass2__init
ENDINIT
*/

#include "transform_hlds.term_constr_pass2.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
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
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



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
  MR_Word transform_hlds__term_constr_pass2__Coeff_5,
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_8);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__522__1_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_22,
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_23,
  MR_Word * transform_hlds__term_constr_pass2__LambdaHeadVar__3_24);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__421__1_2_p_0(
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_26);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__387__1_2_p_0(
  MR_Word transform_hlds__term_constr_pass2__ProcId_5,
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_13);

static void MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__181__1_6_p_0(
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_5,
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_6,
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_7,
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_15,
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_16,
  MR_Word * transform_hlds__term_constr_pass2__LambdaHeadVar__3_17);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__152__1_1_f_0(
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_19);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2__write_edge_5_p_0(
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_6,
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_7,
  MR_Word transform_hlds__term_constr_pass2__Edge_8);

static void MR_CALL 
transform_hlds__term_constr_pass2__write_cycles_5_p_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_pass2__write_cycles_5_p_0(
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_1,
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

static void MR_CALL 
transform_hlds__term_constr_pass2__write_cycle_4_p_0(
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__Map_4,
  MR_Word transform_hlds__term_constr_pass2__Old_5);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__Map_4,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__Map_4,
  MR_Word transform_hlds__term_constr_pass2__Eqn0_5);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__StartPPId_4,
  MR_Word transform_hlds__term_constr_pass2__Cycle_5);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__build_edge_map_1_f_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1);

static void MR_CALL 
transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(
  MR_Word transform_hlds__term_constr_pass2__StartPPId_5,
  MR_Word transform_hlds__term_constr_pass2__CurrPPId_6,
  MR_Word transform_hlds__term_constr_pass2__Map_7,
  MR_Word * transform_hlds__term_constr_pass2__Edges_8);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_3,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_5,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_7);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(
  MR_Word transform_hlds__term_constr_pass2__PPId_3,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(
  MR_Word transform_hlds__term_constr_pass2__Start_8,
  MR_Word transform_hlds__term_constr_pass2__SoFar_9,
  MR_Word transform_hlds__term_constr_pass2__Map_10,
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
  MR_Word transform_hlds__term_constr_pass2__Edge_12,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__direct_call_2_p_0(
  MR_Word transform_hlds__term_constr_pass2__Edge_3,
  MR_Word * transform_hlds__term_constr_pass2__Cycle_4);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__fix_edges_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__Poly_4,
  MR_Word transform_hlds__term_constr_pass2__Edge0_5);

static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(
  MR_Word transform_hlds__term_constr_pass2__Proc_1,
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_2,
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_3,
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_4,
  MR_Word transform_hlds__term_constr_pass2__TopPoly_5,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__6_6,
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7,
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_4,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_5,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_6,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_7,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_8,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_9);

static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(
  MR_Word transform_hlds__term_constr_pass2__Proc_14,
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_15,
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_16,
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_17,
  MR_Word transform_hlds__term_constr_pass2__Goal_18,
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60,
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_3(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_2(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3(
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_1,
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0(
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_5,
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_6,
  MR_Word transform_hlds__term_constr_pass2__PPId_7,
  MR_Word transform_hlds__term_constr_pass2__Loop_8);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__Vars_4,
  MR_Word transform_hlds__term_constr_pass2__Coeff_5);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__PPId_2);

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__Cycles0_2);

static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__Map0_2);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__Edges0_2);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_3[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__tree234__pti_tree234_2__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0__plain_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_abstract_ppids_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "abstract_ppids",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
};

static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_0_0[2] = {
  (MR_String) "tcgc_nodes",
  (MR_String) "tcgc_edges"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0 = {
  (MR_String) "term_cg_cycle",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_0_0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "cycle",
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_0 },
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_0
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_set_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
};

static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_set_0_0[2] = {
  (MR_String) "tcgcs_start",
  (MR_String) "tcgcs_cycles"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0 = {
  (MR_String) "term_cg_cycle_set",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_set_0_0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_set_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "cycle_set",
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0 },
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycles_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "cycles",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_edge_0_0[6] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
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
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_edge_0_0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_edge_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____edge_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____edge_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "edge",
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_edge_0 },
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_edge_0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edges_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____edges_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____edges_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "edges",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 = {
  (MR_String) "pass2_options",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_String) "max_matrix_size",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "pass2_options",
  {     &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 },
  {     &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0
};

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__548__1_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__Coeff_5,
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_8)
{
  {
    MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_9;

    {
      transform_hlds__term_constr_pass2__LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__2_9, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__LambdaHeadVar__1_8));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__2_9, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Coeff_5));
    }
    return transform_hlds__term_constr_pass2__LambdaHeadVar__2_9;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__522__1_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_22,
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_23,
  MR_Word * transform_hlds__term_constr_pass2__LambdaHeadVar__3_24)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__LambdaHeadVar__2_23 == (MR_Integer) 1);

    if (transform_hlds__term_constr_pass2__succeeded)
    {
      *transform_hlds__term_constr_pass2__LambdaHeadVar__3_24 = transform_hlds__term_constr_pass2__LambdaHeadVar__1_22;
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
    }
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__421__1_2_p_0(
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_26)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_pass2__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_pass2__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 2)));
    MR_Word transform_hlds__term_constr_pass2__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_pass2__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 4)));
    MR_Word transform_hlds__term_constr_pass2__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 5)));

    transform_hlds__term_constr_pass2__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, ((MR_Box) (transform_hlds__term_constr_pass2__Var_27)), transform_hlds__term_constr_pass2__Visited_11);
    transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__387__1_2_p_0(
  MR_Word transform_hlds__term_constr_pass2__ProcId_5,
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_13)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_pass2__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_pass2__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 2)));
    MR_Word transform_hlds__term_constr_pass2__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_pass2__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 4)));
    MR_Word transform_hlds__term_constr_pass2__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 5)));

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__ProcId_5, transform_hlds__term_constr_pass2__Var_25);
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__181__1_6_p_0(
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_5,
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_6,
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_7,
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_15,
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_16,
  MR_Word * transform_hlds__term_constr_pass2__LambdaHeadVar__3_17)
{
  {
    MR_Word transform_hlds__term_constr_pass2__ProcEdges_13;
    MR_Word transform_hlds__term_constr_pass2__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, (MR_Integer) 5)));
    MR_Word transform_hlds__term_constr_pass2__Var_22;
    MR_Word transform_hlds__term_constr_pass2__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_pass2__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_pass2__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, (MR_Integer) 2)));
    MR_Word transform_hlds__term_constr_pass2__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, (MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_pass2__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, (MR_Integer) 4)));
    MR_Word transform_hlds__term_constr_pass2__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, (MR_Integer) 6)));
    MR_Word transform_hlds__term_constr_pass2__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, (MR_Integer) 7)));
    MR_Word transform_hlds__term_constr_pass2__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, (MR_Integer) 8)));
    MR_Word transform_hlds__term_constr_pass2__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, (MR_Integer) 9)));
    MR_Integer transform_hlds__term_constr_pass2__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, (MR_Integer) 10)));
    MR_Word transform_hlds__term_constr_pass2__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, (MR_Integer) 11)));
    MR_Integer transform_hlds__term_constr_pass2__Var_11;
    MR_Word transform_hlds__term_constr_pass2__Var_12;
    MR_Word transform_hlds__term_constr_pass2__Var_14;

    transform_hlds__term_constr_pass2__Var_22 = libs__polyhedron__universe_0_f_0();
    transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(transform_hlds__term_constr_pass2__LambdaHeadVar__1_15, transform_hlds__term_constr_pass2__AbstractSCC_5, transform_hlds__term_constr_pass2__ModuleInfo_6, transform_hlds__term_constr_pass2__MaxMatrixSize_7, transform_hlds__term_constr_pass2__Var_20, (MR_Integer) 1, &transform_hlds__term_constr_pass2__Var_11, transform_hlds__term_constr_pass2__Var_22, &transform_hlds__term_constr_pass2__Var_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_pass2__ProcEdges_13, (MR_Integer) 1, &transform_hlds__term_constr_pass2__Var_14);
    mercury__list__append_3_p_1((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__ProcEdges_13, transform_hlds__term_constr_pass2__LambdaHeadVar__2_16, transform_hlds__term_constr_pass2__LambdaHeadVar__3_17);
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__152__1_1_f_0(
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_19)
{
  {
    MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_20 = (MR_Word) transform_hlds__term_constr_pass2__LambdaHeadVar__1_19;

    return transform_hlds__term_constr_pass2__LambdaHeadVar__2_20;
  }
}

void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Integer transform_hlds__term_constr_pass2__CastX_6 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_pass2__CastY_7 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_6 == transform_hlds__term_constr_pass2__CastY_7);
    if (transform_hlds__term_constr_pass2__succeeded)
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer transform_hlds__term_constr_pass2__ArgX1_4 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
      MR_Integer transform_hlds__term_constr_pass2__ArgY1_5 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_pass2__HeadVar__1_1, transform_hlds__term_constr_pass2__ArgX1_4, transform_hlds__term_constr_pass2__ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Integer transform_hlds__term_constr_pass2__CastX_5 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_pass2__CastY_6 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_5 == transform_hlds__term_constr_pass2__CastY_6);
    if (transform_hlds__term_constr_pass2__succeeded)
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
    else
    {
      MR_Integer transform_hlds__term_constr_pass2__ArgX1_3 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
      MR_Integer transform_hlds__term_constr_pass2__ArgY1_4 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

      transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__ArgX1_3 == transform_hlds__term_constr_pass2__ArgY1_4);
    }
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_5 = transform_hlds__term_constr_pass2__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_3 = transform_hlds__term_constr_pass2__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;

    transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_4)));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Integer transform_hlds__term_constr_pass2__CastX_21 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_pass2__CastY_22 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_21 == transform_hlds__term_constr_pass2__CastY_22);
    if (transform_hlds__term_constr_pass2__succeeded)
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word transform_hlds__term_constr_pass2__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__term_constr_pass2__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word transform_hlds__term_constr_pass2__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word transform_hlds__term_constr_pass2__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word transform_hlds__term_constr_pass2__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word transform_hlds__term_constr_pass2__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word transform_hlds__term_constr_pass2__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word transform_hlds__term_constr_pass2__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word transform_hlds__term_constr_pass2__Var_16;

      transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_pass2__Var_16, transform_hlds__term_constr_pass2__ArgX1_4, transform_hlds__term_constr_pass2__ArgY1_5);
      transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__Var_16 == (MR_Integer) 0);
      transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
      if (transform_hlds__term_constr_pass2__succeeded)
        *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__Var_16;
      else
      {
        MR_Word transform_hlds__term_constr_pass2__Var_17;

        transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_pass2__Var_17, transform_hlds__term_constr_pass2__ArgX2_6, transform_hlds__term_constr_pass2__ArgY2_7);
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__Var_17 == (MR_Integer) 0);
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
        if (transform_hlds__term_constr_pass2__succeeded)
          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__Var_17;
        else
        {
          MR_Word transform_hlds__term_constr_pass2__Var_18;

          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4], &transform_hlds__term_constr_pass2__Var_18, ((MR_Box) (transform_hlds__term_constr_pass2__ArgX3_8)), ((MR_Box) (transform_hlds__term_constr_pass2__ArgY3_9)));
          transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__Var_18 == (MR_Integer) 0);
          transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
          if (transform_hlds__term_constr_pass2__succeeded)
            *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__Var_18;
          else
          {
            MR_Word transform_hlds__term_constr_pass2__Var_19;

            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4], &transform_hlds__term_constr_pass2__Var_19, ((MR_Box) (transform_hlds__term_constr_pass2__ArgX4_10)), ((MR_Box) (transform_hlds__term_constr_pass2__ArgY4_11)));
            transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__Var_19 == (MR_Integer) 0);
            transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
            if (transform_hlds__term_constr_pass2__succeeded)
              *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__Var_19;
            else
            {
              MR_Word transform_hlds__term_constr_pass2__Var_20;

              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[5], &transform_hlds__term_constr_pass2__Var_20, ((MR_Box) (transform_hlds__term_constr_pass2__ArgX5_12)), ((MR_Box) (transform_hlds__term_constr_pass2__ArgY5_13)));
              transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__Var_20 == (MR_Integer) 0);
              transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
              if (transform_hlds__term_constr_pass2__succeeded)
                *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__Var_20;
              else
                libs__polyhedron____Compare____polyhedron_0_0(transform_hlds__term_constr_pass2__HeadVar__1_1, transform_hlds__term_constr_pass2__ArgX6_14, transform_hlds__term_constr_pass2__ArgY6_15);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Integer transform_hlds__term_constr_pass2__CastX_15 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_pass2__CastY_16 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_15 == transform_hlds__term_constr_pass2__CastY_16);
    if (transform_hlds__term_constr_pass2__succeeded)
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
    else
    {
      MR_Word transform_hlds__term_constr_pass2__TypeInfo_19_19;
      MR_Word transform_hlds__term_constr_pass2__TypeInfo_20_20;
      MR_Word transform_hlds__term_constr_pass2__TypeInfo_21_21;
      MR_Word transform_hlds__term_constr_pass2__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word transform_hlds__term_constr_pass2__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__term_constr_pass2__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word transform_hlds__term_constr_pass2__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word transform_hlds__term_constr_pass2__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word transform_hlds__term_constr_pass2__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word transform_hlds__term_constr_pass2__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word transform_hlds__term_constr_pass2__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 5)));

      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__ArgX1_3, transform_hlds__term_constr_pass2__ArgY1_4);
      if (transform_hlds__term_constr_pass2__succeeded)
      {
        transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__ArgX2_5, transform_hlds__term_constr_pass2__ArgY2_6);
        if (transform_hlds__term_constr_pass2__succeeded)
        {
          transform_hlds__term_constr_pass2__TypeInfo_19_19 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4];
          transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_19_19, ((MR_Box) (transform_hlds__term_constr_pass2__ArgX3_7)), ((MR_Box) (transform_hlds__term_constr_pass2__ArgY3_8)));
          if (transform_hlds__term_constr_pass2__succeeded)
          {
            transform_hlds__term_constr_pass2__TypeInfo_20_20 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4];
            transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_20_20, ((MR_Box) (transform_hlds__term_constr_pass2__ArgX4_9)), ((MR_Box) (transform_hlds__term_constr_pass2__ArgY4_10)));
            if (transform_hlds__term_constr_pass2__succeeded)
            {
              transform_hlds__term_constr_pass2__TypeInfo_21_21 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[5];
              transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_21_21, ((MR_Box) (transform_hlds__term_constr_pass2__ArgX5_11)), ((MR_Box) (transform_hlds__term_constr_pass2__ArgY5_12)));
              if (transform_hlds__term_constr_pass2__succeeded)
                transform_hlds__term_constr_pass2__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_pass2__ArgX6_13, transform_hlds__term_constr_pass2__ArgY6_14);
            }
          }
        }
      }
    }
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_5 = transform_hlds__term_constr_pass2__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_3 = transform_hlds__term_constr_pass2__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;

    transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_4)));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Integer transform_hlds__term_constr_pass2__CastX_9 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_pass2__CastY_10 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_9 == transform_hlds__term_constr_pass2__CastY_10);
    if (transform_hlds__term_constr_pass2__succeeded)
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word transform_hlds__term_constr_pass2__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__Var_8;

      transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_pass2__Var_8, transform_hlds__term_constr_pass2__ArgX1_4, transform_hlds__term_constr_pass2__ArgY1_5);
      transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__Var_8 == (MR_Integer) 0);
      transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
      if (transform_hlds__term_constr_pass2__succeeded)
        *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__ArgX2_6)), ((MR_Box) (transform_hlds__term_constr_pass2__ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Integer transform_hlds__term_constr_pass2__CastX_7 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_pass2__CastY_8 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_7 == transform_hlds__term_constr_pass2__CastY_8);
    if (transform_hlds__term_constr_pass2__succeeded)
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
    else
    {
      MR_Word transform_hlds__term_constr_pass2__TypeInfo_10_10;
      MR_Word transform_hlds__term_constr_pass2__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));

      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__ArgX1_3, transform_hlds__term_constr_pass2__ArgY1_4);
      if (transform_hlds__term_constr_pass2__succeeded)
      {
        transform_hlds__term_constr_pass2__TypeInfo_10_10 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0];
        transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_10_10, ((MR_Box) (transform_hlds__term_constr_pass2__ArgX2_5)), ((MR_Box) (transform_hlds__term_constr_pass2__ArgY2_6)));
      }
    }
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Integer transform_hlds__term_constr_pass2__CastX_9 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_pass2__CastY_10 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_9 == transform_hlds__term_constr_pass2__CastY_10);
    if (transform_hlds__term_constr_pass2__succeeded)
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word transform_hlds__term_constr_pass2__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], &transform_hlds__term_constr_pass2__Var_8, ((MR_Box) (transform_hlds__term_constr_pass2__ArgX1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__ArgY1_5)));
      transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__Var_8 == (MR_Integer) 0);
      transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
      if (transform_hlds__term_constr_pass2__succeeded)
        *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__ArgX2_6)), ((MR_Box) (transform_hlds__term_constr_pass2__ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Integer transform_hlds__term_constr_pass2__CastX_7 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_pass2__CastY_8 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_7 == transform_hlds__term_constr_pass2__CastY_8);
    if (transform_hlds__term_constr_pass2__succeeded)
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
    else
    {
      MR_Word transform_hlds__term_constr_pass2__TypeInfo_10_10;
      MR_Word transform_hlds__term_constr_pass2__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));

      transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_pass2__ArgX1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__ArgY1_4)));
      if (transform_hlds__term_constr_pass2__succeeded)
      {
        transform_hlds__term_constr_pass2__TypeInfo_10_10 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0];
        transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_10_10, ((MR_Box) (transform_hlds__term_constr_pass2__ArgX2_5)), ((MR_Box) (transform_hlds__term_constr_pass2__ArgY2_6)));
      }
    }
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0(
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_5 = transform_hlds__term_constr_pass2__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_3 = transform_hlds__term_constr_pass2__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;

    transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_4)));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__write_edge_5_p_0(
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_6,
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_7,
  MR_Word transform_hlds__term_constr_pass2__Edge_8)
{
  {
    MR_Word transform_hlds__term_constr_pass2__PredProcId_10;
    MR_Word transform_hlds__term_constr_pass2__CallPredProcId_11;
    MR_Word transform_hlds__term_constr_pass2__Var_16;
    MR_Word transform_hlds__term_constr_pass2__Var_20;
    MR_Word transform_hlds__term_constr_pass2__Var_26;
    MR_Word transform_hlds__term_constr_pass2__Var_30;
    MR_Word transform_hlds__term_constr_pass2__Var_34;
    MR_Word transform_hlds__term_constr_pass2__Var_39;
    MR_Word transform_hlds__term_constr_pass2__Var_40;
    MR_Word transform_hlds__term_constr_pass2__Var_41;
    MR_Word transform_hlds__term_constr_pass2__Var_42;
    MR_Word transform_hlds__term_constr_pass2__Var_43;
    MR_Word transform_hlds__term_constr_pass2__Var_44;
    MR_Word transform_hlds__term_constr_pass2__Var_45;
    MR_Word transform_hlds__term_constr_pass2__Var_46;
    MR_Word transform_hlds__term_constr_pass2__Var_47;
    MR_Word transform_hlds__term_constr_pass2__Var_48;
    MR_Word transform_hlds__term_constr_pass2__Var_49;
    MR_Word transform_hlds__term_constr_pass2__Var_50;
    MR_Word transform_hlds__term_constr_pass2__Var_51;
    MR_Word transform_hlds__term_constr_pass2__Var_52;
    MR_Word transform_hlds__term_constr_pass2__Var_53;
    MR_Word transform_hlds__term_constr_pass2__Var_54;
    MR_Word transform_hlds__term_constr_pass2__Var_55;
    MR_Word transform_hlds__term_constr_pass2__Var_56;
    MR_Word transform_hlds__term_constr_pass2__Var_57;
    MR_Word transform_hlds__term_constr_pass2__Var_58;
    MR_Word transform_hlds__term_constr_pass2__Var_59;
    MR_Word transform_hlds__term_constr_pass2__Var_60;
    MR_Word transform_hlds__term_constr_pass2__Var_61;
    MR_Word transform_hlds__term_constr_pass2__Var_62;
    MR_Word transform_hlds__term_constr_pass2__Var_63;

    mercury__io__write_string_3_p_0((MR_String) "Edge is:\n\tHead: ");
    transform_hlds__term_constr_pass2__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 0)));
    transform_hlds__term_constr_pass2__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 1)));
    transform_hlds__term_constr_pass2__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 2)));
    transform_hlds__term_constr_pass2__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 3)));
    transform_hlds__term_constr_pass2__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 4)));
    transform_hlds__term_constr_pass2__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 5)));
    transform_hlds__term_constr_pass2__PredProcId_10 = (MR_Word) transform_hlds__term_constr_pass2__Var_16;
    hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_pass2__ModuleInfo_6, transform_hlds__term_constr_pass2__PredProcId_10);
    mercury__io__write_string_3_p_0((MR_String) " : ");
    transform_hlds__term_constr_pass2__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 0)));
    transform_hlds__term_constr_pass2__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 1)));
    transform_hlds__term_constr_pass2__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 2)));
    transform_hlds__term_constr_pass2__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 3)));
    transform_hlds__term_constr_pass2__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 4)));
    transform_hlds__term_constr_pass2__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 5)));
    transform_hlds__term_constr_util__write_size_vars_4_p_0(transform_hlds__term_constr_pass2__SizeVarSet_7, transform_hlds__term_constr_pass2__Var_20);
    mercury__io__write_string_3_p_0((MR_String) " :- \n");
    mercury__io__write_string_3_p_0((MR_String) "\tConstraints are:  \n");
    transform_hlds__term_constr_pass2__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 0)));
    transform_hlds__term_constr_pass2__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 1)));
    transform_hlds__term_constr_pass2__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 2)));
    transform_hlds__term_constr_pass2__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 3)));
    transform_hlds__term_constr_pass2__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 4)));
    transform_hlds__term_constr_pass2__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 5)));
    libs__polyhedron__write_polyhedron_4_p_0(transform_hlds__term_constr_pass2__Var_26, transform_hlds__term_constr_pass2__SizeVarSet_7);
    mercury__io__write_string_3_p_0((MR_String) "\n\tCall is:  ");
    transform_hlds__term_constr_pass2__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 0)));
    transform_hlds__term_constr_pass2__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 1)));
    transform_hlds__term_constr_pass2__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 2)));
    transform_hlds__term_constr_pass2__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 3)));
    transform_hlds__term_constr_pass2__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 4)));
    transform_hlds__term_constr_pass2__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 5)));
    transform_hlds__term_constr_pass2__CallPredProcId_11 = (MR_Word) transform_hlds__term_constr_pass2__Var_30;
    hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_pass2__ModuleInfo_6, transform_hlds__term_constr_pass2__CallPredProcId_11);
    mercury__io__write_string_3_p_0((MR_String) " : ");
    transform_hlds__term_constr_pass2__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 0)));
    transform_hlds__term_constr_pass2__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 1)));
    transform_hlds__term_constr_pass2__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 2)));
    transform_hlds__term_constr_pass2__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 3)));
    transform_hlds__term_constr_pass2__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 4)));
    transform_hlds__term_constr_pass2__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_8, (MR_Integer) 5)));
    transform_hlds__term_constr_util__write_size_vars_4_p_0(transform_hlds__term_constr_pass2__SizeVarSet_7, transform_hlds__term_constr_pass2__Var_34);
    mercury__io__write_string_3_p_0((MR_String) " :- \n");
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__write_cycles_5_p_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

    transform_hlds__term_constr_pass2__write_edge_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__write_cycles_5_p_0(
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_1,
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if (!((transform_hlds__term_constr_pass2__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word transform_hlds__term_constr_pass2__Cycle_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__Cycles_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__Var_20;
      MR_Word transform_hlds__term_constr_pass2__Var_22;
      MR_Word transform_hlds__term_constr_pass2__Var_24;
      MR_Word transform_hlds__term_constr_pass2__Var_28;
      MR_Word transform_hlds__term_constr_pass2__Var_29;

      mercury__io__write_string_3_p_0((MR_String) "Cycle in SCC:\n");
      transform_hlds__term_constr_pass2__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_13, (MR_Integer) 0)));
      transform_hlds__term_constr_pass2__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_13, (MR_Integer) 1)));
      transform_hlds__term_constr_pass2__write_cycle_4_p_0(transform_hlds__term_constr_pass2__ModuleInfo_1, transform_hlds__term_constr_pass2__Var_20);
      transform_hlds__term_constr_pass2__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_13, (MR_Integer) 0)));
      transform_hlds__term_constr_pass2__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_13, (MR_Integer) 1)));
      {
        transform_hlds__term_constr_pass2__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_24, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_9[1]));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_24, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__write_cycles_5_p_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_24, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__ModuleInfo_1));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_24, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__SizeVarSet_2));
      }
      mercury__io__write_list_5_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__Var_22, (MR_String) "\n", transform_hlds__term_constr_pass2__Var_24);
      mercury__io__nl_2_p_0();
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__term_constr_pass2__next_value_of_HeadVar__3_3 = transform_hlds__term_constr_pass2__Cycles_14;

        transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__next_value_of_HeadVar__3_3;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__write_cycle_4_p_0(
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_1,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if (!((transform_hlds__term_constr_pass2__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word transform_hlds__term_constr_pass2__Proc_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__Procs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__PredProcId_13;

      mercury__io__write_string_3_p_0((MR_String) "\t- ");
      transform_hlds__term_constr_pass2__PredProcId_13 = (MR_Word) transform_hlds__term_constr_pass2__Proc_10;
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_pass2__ModuleInfo_1, transform_hlds__term_constr_pass2__PredProcId_13);
      mercury__io__nl_2_p_0();
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__term_constr_pass2__next_value_of_HeadVar__2_2 = transform_hlds__term_constr_pass2__Procs_11;

        transform_hlds__term_constr_pass2__HeadVar__2_2 = transform_hlds__term_constr_pass2__next_value_of_HeadVar__2_2;
      }
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__Map_4,
  MR_Word transform_hlds__term_constr_pass2__Old_5)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;
    MR_Word transform_hlds__term_constr_pass2__New_6;
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_7_7 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
    MR_Box transform_hlds__term_constr_pass2__conv0_New_6;

    transform_hlds__term_constr_pass2__succeeded = mercury__bimap__search_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_7_7, transform_hlds__term_constr_pass2__TypeInfo_7_7, transform_hlds__term_constr_pass2__Map_4, ((MR_Box) (transform_hlds__term_constr_pass2__Old_5)), &transform_hlds__term_constr_pass2__conv0_New_6);
    if (transform_hlds__term_constr_pass2__succeeded)
    {
      transform_hlds__term_constr_pass2__New_6 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_New_6);
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
    }
    if (transform_hlds__term_constr_pass2__succeeded)
      transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__New_6;
    else
      transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__Old_5;
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__Map_4,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;
    MR_Word transform_hlds__term_constr_pass2__Var0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_pass2__Coeff_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_pass2__Var_7;
    MR_Word transform_hlds__term_constr_pass2__New_10;
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_7_11 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
    MR_Box transform_hlds__term_constr_pass2__conv0_New_10;

    transform_hlds__term_constr_pass2__succeeded = mercury__bimap__search_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_7_11, transform_hlds__term_constr_pass2__TypeInfo_7_11, transform_hlds__term_constr_pass2__Map_4, ((MR_Box) (transform_hlds__term_constr_pass2__Var0_5)), &transform_hlds__term_constr_pass2__conv0_New_10);
    if (transform_hlds__term_constr_pass2__succeeded)
    {
      transform_hlds__term_constr_pass2__New_10 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_New_10);
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
    }
    if (transform_hlds__term_constr_pass2__succeeded)
      transform_hlds__term_constr_pass2__Var_7 = transform_hlds__term_constr_pass2__New_10;
    else
      transform_hlds__term_constr_pass2__Var_7 = transform_hlds__term_constr_pass2__Var0_5;
    {
      transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_7));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Coeff_6));
    }
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__3_3;

    transform_hlds__term_constr_pass2__conv0_HeadVar__3_3 = transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__3_3));
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__Map_4,
  MR_Word transform_hlds__term_constr_pass2__Eqn0_5)
{
  {
    MR_Word transform_hlds__term_constr_pass2__Eqn_6;
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_12_12;
    MR_Word transform_hlds__term_constr_pass2__Coeffs0_7;
    MR_Word transform_hlds__term_constr_pass2__Operator_8;
    MR_Word transform_hlds__term_constr_pass2__Constant_9;
    MR_Word transform_hlds__term_constr_pass2__Coeffs_10;
    MR_Word transform_hlds__term_constr_pass2__Var_11;

    libs__lp_rational__deconstruct_constraint_4_p_0(transform_hlds__term_constr_pass2__Eqn0_5, &transform_hlds__term_constr_pass2__Coeffs0_7, &transform_hlds__term_constr_pass2__Operator_8, &transform_hlds__term_constr_pass2__Constant_9);
    transform_hlds__term_constr_pass2__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0];
    {
      transform_hlds__term_constr_pass2__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_11, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[6]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_11, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_11, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Map_4));
    }
    transform_hlds__term_constr_pass2__Coeffs_10 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_12_12, transform_hlds__term_constr_pass2__TypeInfo_12_12, transform_hlds__term_constr_pass2__Var_11, transform_hlds__term_constr_pass2__Coeffs0_7);
    transform_hlds__term_constr_pass2__Eqn_6 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_pass2__Coeffs_10, transform_hlds__term_constr_pass2__Operator_8, transform_hlds__term_constr_pass2__Constant_9);
    return transform_hlds__term_constr_pass2__Eqn_6;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__StartPPId_4,
  MR_Word transform_hlds__term_constr_pass2__Cycle_5)
{
  {
    MR_Word transform_hlds__term_constr_pass2__CollapsedCycle_6;
    MR_Word transform_hlds__term_constr_pass2__Edges0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_5, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_pass2__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_5, (MR_Integer) 0)));

    if ((transform_hlds__term_constr_pass2__Edges0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "function \140transform_hlds.term_constr_pass2.collapse_cycle\'/2", (MR_String) "trying to collapse a cycle with no edges");
    }
    else
    {
      MR_Word transform_hlds__term_constr_pass2__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Edges0_8, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Edges0_8, (MR_Integer) 0)));

      if ((transform_hlds__term_constr_pass2__Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        transform_hlds__term_constr_pass2__CollapsedCycle_6 = transform_hlds__term_constr_pass2__Var_35;
      else
      {
        MR_Word transform_hlds__term_constr_pass2__StartEdge_14;
        MR_Word transform_hlds__term_constr_pass2__Rest_15;
        MR_Word transform_hlds__term_constr_pass2__HeadVars_18;
        MR_Word transform_hlds__term_constr_pass2__CallVars0_19;
        MR_Word transform_hlds__term_constr_pass2__Zeros0_20;
        MR_Word transform_hlds__term_constr_pass2__Polyhedron0_21;
        MR_Word transform_hlds__term_constr_pass2__Zeros_22;
        MR_Word transform_hlds__term_constr_pass2__CallVars_23;
        MR_Word transform_hlds__term_constr_pass2__Polyhedron_24;
        MR_Word transform_hlds__term_constr_pass2__EdgeMap_40;
        MR_Word transform_hlds__term_constr_pass2__Var_41;
        MR_Word transform_hlds__term_constr_pass2__Var_51;
        MR_Word transform_hlds__term_constr_pass2__Var_52;
        MR_Word transform_hlds__term_constr_pass2__Var_53;
        MR_Word transform_hlds__term_constr_pass2__Var_54;
        MR_Word transform_hlds__term_constr_pass2__Var_55;
        MR_Word transform_hlds__term_constr_pass2__Var_56;
        MR_Word transform_hlds__term_constr_pass2__Var_57;
        MR_Box transform_hlds__term_constr_pass2__conv0_StartEdge_14;
        MR_Word transform_hlds__term_constr_pass2__Var_42;
        MR_Word transform_hlds__term_constr_pass2__Var_43;
        MR_Word transform_hlds__term_constr_pass2__Var_44;
        MR_Word transform_hlds__term_constr_pass2__Var_45;
        MR_Word transform_hlds__term_constr_pass2__Var_46;
        MR_Word transform_hlds__term_constr_pass2__Var_16;
        MR_Word transform_hlds__term_constr_pass2__Var_17;

        transform_hlds__term_constr_pass2__Var_51 = transform_hlds__term_constr_pass2__build_edge_map_1_f_0(transform_hlds__term_constr_pass2__Var_34);
        transform_hlds__term_constr_pass2__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_35, (MR_Integer) 0)));
        transform_hlds__term_constr_pass2__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_35, (MR_Integer) 1)));
        transform_hlds__term_constr_pass2__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_35, (MR_Integer) 2)));
        transform_hlds__term_constr_pass2__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_35, (MR_Integer) 3)));
        transform_hlds__term_constr_pass2__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_35, (MR_Integer) 4)));
        transform_hlds__term_constr_pass2__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_35, (MR_Integer) 5)));
        transform_hlds__term_constr_pass2__EdgeMap_40 = mercury__map__det_insert_3_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__Var_51, ((MR_Box) (transform_hlds__term_constr_pass2__Var_52)), ((MR_Box) (transform_hlds__term_constr_pass2__Var_35)));
        mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__EdgeMap_40, ((MR_Box) (transform_hlds__term_constr_pass2__StartPPId_4)), &transform_hlds__term_constr_pass2__conv0_StartEdge_14);
        transform_hlds__term_constr_pass2__StartEdge_14 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_StartEdge_14);
        transform_hlds__term_constr_pass2__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 0)));
        transform_hlds__term_constr_pass2__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 1)));
        transform_hlds__term_constr_pass2__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 2)));
        transform_hlds__term_constr_pass2__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 3)));
        transform_hlds__term_constr_pass2__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 4)));
        transform_hlds__term_constr_pass2__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 5)));
        transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(transform_hlds__term_constr_pass2__StartPPId_4, transform_hlds__term_constr_pass2__Var_41, transform_hlds__term_constr_pass2__EdgeMap_40, &transform_hlds__term_constr_pass2__Rest_15);
        transform_hlds__term_constr_pass2__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 0)));
        transform_hlds__term_constr_pass2__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 1)));
        transform_hlds__term_constr_pass2__HeadVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 2)));
        transform_hlds__term_constr_pass2__CallVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 3)));
        transform_hlds__term_constr_pass2__Zeros0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 4)));
        transform_hlds__term_constr_pass2__Polyhedron0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 5)));
        transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(transform_hlds__term_constr_pass2__Rest_15, transform_hlds__term_constr_pass2__Zeros0_20, &transform_hlds__term_constr_pass2__Zeros_22, transform_hlds__term_constr_pass2__CallVars0_19, &transform_hlds__term_constr_pass2__CallVars_23, transform_hlds__term_constr_pass2__Polyhedron0_21, &transform_hlds__term_constr_pass2__Polyhedron_24);
        {
          transform_hlds__term_constr_pass2__CollapsedCycle_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__StartPPId_4));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__StartPPId_4));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 2) = ((MR_Box) (transform_hlds__term_constr_pass2__HeadVars_18));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__CallVars_23));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__Zeros_22));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Polyhedron_24));
        }
      }
    }
    return transform_hlds__term_constr_pass2__CollapsedCycle_6;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__build_edge_map_1_f_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1)
{
  {
    MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2;

    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      transform_hlds__term_constr_pass2__HeadVar__2_2 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0);
    }
    else
    {
      MR_Word transform_hlds__term_constr_pass2__Edge_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__Edges_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__Var_5;
      MR_Word transform_hlds__term_constr_pass2__Var_6;
      MR_Word transform_hlds__term_constr_pass2__Var_7;
      MR_Word transform_hlds__term_constr_pass2__Var_8;
      MR_Word transform_hlds__term_constr_pass2__Var_9;
      MR_Word transform_hlds__term_constr_pass2__Var_10;
      MR_Word transform_hlds__term_constr_pass2__Var_11;

      transform_hlds__term_constr_pass2__Var_5 = transform_hlds__term_constr_pass2__build_edge_map_1_f_0(transform_hlds__term_constr_pass2__Edges_4);
      transform_hlds__term_constr_pass2__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 0)));
      transform_hlds__term_constr_pass2__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 1)));
      transform_hlds__term_constr_pass2__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 2)));
      transform_hlds__term_constr_pass2__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 3)));
      transform_hlds__term_constr_pass2__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 4)));
      transform_hlds__term_constr_pass2__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 5)));
      transform_hlds__term_constr_pass2__HeadVar__2_2 = mercury__map__det_insert_3_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__Var_5, ((MR_Box) (transform_hlds__term_constr_pass2__Var_6)), ((MR_Box) (transform_hlds__term_constr_pass2__Edge_3)));
    }
    return transform_hlds__term_constr_pass2__HeadVar__2_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(
  MR_Word transform_hlds__term_constr_pass2__StartPPId_5,
  MR_Word transform_hlds__term_constr_pass2__CurrPPId_6,
  MR_Word transform_hlds__term_constr_pass2__Map_7,
  MR_Word * transform_hlds__term_constr_pass2__Edges_8)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__StartPPId_5, transform_hlds__term_constr_pass2__CurrPPId_6);
    if (transform_hlds__term_constr_pass2__succeeded)
      *transform_hlds__term_constr_pass2__Edges_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word transform_hlds__term_constr_pass2__Edge_9;
      MR_Word transform_hlds__term_constr_pass2__Edges0_10;
      MR_Word transform_hlds__term_constr_pass2__Var_11;
      MR_Box transform_hlds__term_constr_pass2__conv0_Edge_9;
      MR_Word transform_hlds__term_constr_pass2__Var_12;
      MR_Word transform_hlds__term_constr_pass2__Var_13;
      MR_Word transform_hlds__term_constr_pass2__Var_14;
      MR_Word transform_hlds__term_constr_pass2__Var_15;
      MR_Word transform_hlds__term_constr_pass2__Var_16;

      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__Map_7, ((MR_Box) (transform_hlds__term_constr_pass2__CurrPPId_6)), &transform_hlds__term_constr_pass2__conv0_Edge_9);
      transform_hlds__term_constr_pass2__Edge_9 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_Edge_9);
      transform_hlds__term_constr_pass2__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 0)));
      transform_hlds__term_constr_pass2__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 1)));
      transform_hlds__term_constr_pass2__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 2)));
      transform_hlds__term_constr_pass2__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 3)));
      transform_hlds__term_constr_pass2__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 4)));
      transform_hlds__term_constr_pass2__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 5)));
      transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(transform_hlds__term_constr_pass2__StartPPId_5, transform_hlds__term_constr_pass2__Var_11, transform_hlds__term_constr_pass2__Map_7, &transform_hlds__term_constr_pass2__Edges0_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__term_constr_pass2__Edges_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Edges0_10));
      }
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv1_Eqn_6;

    transform_hlds__term_constr_pass2__conv1_Eqn_6 = transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_Eqn_6));
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__3_3;

    transform_hlds__term_constr_pass2__conv0_HeadVar__3_3 = transform_hlds__term_constr_pass2__subst_size_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__3_3));
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_3,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_5,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_7 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6;
      *transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_5 = transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4;
      *transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_3 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2;
    }
    else
    {
      MR_Word transform_hlds__term_constr_pass2__TypeInfo_67_67 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
      MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_70_70;
      MR_Word transform_hlds__term_constr_pass2__Edge_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__Edges_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__HeadVars_22;
      MR_Word transform_hlds__term_constr_pass2__Subst0_23;
      MR_Word transform_hlds__term_constr_pass2__Subst_24;
      MR_Word transform_hlds__term_constr_pass2__Constraints0_25;
      MR_Word transform_hlds__term_constr_pass2__Constraints1_26;
      MR_Word transform_hlds__term_constr_pass2__Constraints2_27;
      MR_Word transform_hlds__term_constr_pass2__Constraints3_28;
      MR_Word transform_hlds__term_constr_pass2__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
      MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_36_36;
      MR_Word transform_hlds__term_constr_pass2__Var_37;
      MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_38_38;
      MR_Word transform_hlds__term_constr_pass2__Var_39;
      MR_Word transform_hlds__term_constr_pass2__Var_40;
      MR_Word transform_hlds__term_constr_pass2__Var_41;
      MR_Word transform_hlds__term_constr_pass2__Var_42;
      MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_43_43;
      MR_Word transform_hlds__term_constr_pass2__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
      MR_Word transform_hlds__term_constr_pass2__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
      MR_Word transform_hlds__term_constr_pass2__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
      MR_Word transform_hlds__term_constr_pass2__Var_52;
      MR_Word transform_hlds__term_constr_pass2__Var_53;
      MR_Word transform_hlds__term_constr_pass2__Var_54;
      MR_Word transform_hlds__term_constr_pass2__Var_55;
      MR_Word transform_hlds__term_constr_pass2__Var_56;
      MR_Word transform_hlds__term_constr_pass2__Var_57;
      MR_Word transform_hlds__term_constr_pass2__Var_58;
      MR_Word transform_hlds__term_constr_pass2__Var_59;
      MR_Word transform_hlds__term_constr_pass2__Var_60;
      MR_Word transform_hlds__term_constr_pass2__Var_61;
      MR_Word transform_hlds__term_constr_pass2__Var_62;
      MR_Word transform_hlds__term_constr_pass2__Var_63;
      MR_Word transform_hlds__term_constr_pass2__Var_64;
      MR_Word transform_hlds__term_constr_pass2__Var_65;
      MR_Word transform_hlds__term_constr_pass2__Var_66;

      mercury__set__union_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__Var_35, transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_36_36);
      transform_hlds__term_constr_pass2__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
      transform_hlds__term_constr_pass2__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
      transform_hlds__term_constr_pass2__HeadVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
      transform_hlds__term_constr_pass2__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
      transform_hlds__term_constr_pass2__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
      transform_hlds__term_constr_pass2__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
      transform_hlds__term_constr_pass2__Subst0_23 = mercury__assoc_list__from_corresponding_lists_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__HeadVars_22, transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4);
      transform_hlds__term_constr_pass2__Var_37 = mercury__bimap__init_0_f_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67);
      mercury__bimap__set_from_assoc_list_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__Subst0_23, transform_hlds__term_constr_pass2__Var_37, &transform_hlds__term_constr_pass2__Subst_24);
      {
        transform_hlds__term_constr_pass2__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_39, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[4]));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_39, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_39, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Subst_24));
      }
      transform_hlds__term_constr_pass2__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
      transform_hlds__term_constr_pass2__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
      transform_hlds__term_constr_pass2__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
      transform_hlds__term_constr_pass2__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
      transform_hlds__term_constr_pass2__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
      transform_hlds__term_constr_pass2__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
      transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_38_38 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__Var_39, transform_hlds__term_constr_pass2__Var_40);
      transform_hlds__term_constr_pass2__Constraints0_25 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6);
      transform_hlds__term_constr_pass2__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
      transform_hlds__term_constr_pass2__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
      transform_hlds__term_constr_pass2__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
      transform_hlds__term_constr_pass2__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
      transform_hlds__term_constr_pass2__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
      transform_hlds__term_constr_pass2__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
      transform_hlds__term_constr_pass2__Constraints1_26 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__Var_41);
      transform_hlds__term_constr_pass2__TypeCtorInfo_70_70 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
      {
        transform_hlds__term_constr_pass2__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_42, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[5]));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_42, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_42, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Subst_24));
      }
      transform_hlds__term_constr_pass2__Constraints2_27 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_70_70, transform_hlds__term_constr_pass2__TypeCtorInfo_70_70, transform_hlds__term_constr_pass2__Var_42, transform_hlds__term_constr_pass2__Constraints1_26);
      transform_hlds__term_constr_pass2__Constraints3_28 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_70_70, transform_hlds__term_constr_pass2__Constraints0_25, transform_hlds__term_constr_pass2__Constraints2_27);
      transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_43_43 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_pass2__Constraints3_28);
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__term_constr_pass2__next_value_of_HeadVar__1_1 = transform_hlds__term_constr_pass2__Edges_18;
        MR_Word transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_Zeros_0_2 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_36_36;
        MR_Word transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_CallVars_0_4 = transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_38_38;
        MR_Word transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_Polyhedron_0_6 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_43_43;

        transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__next_value_of_HeadVar__1_1;
        transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2 = transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_Zeros_0_2;
        transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4 = transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_CallVars_0_4;
        transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6 = transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_Polyhedron_0_6;
      }
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(
  MR_Word transform_hlds__term_constr_pass2__PPId_3,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__Nodes_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_pass2__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));

    transform_hlds__term_constr_pass2__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, ((MR_Box) (transform_hlds__term_constr_pass2__PPId_3)), transform_hlds__term_constr_pass2__Nodes_4);
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20;

    transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20);
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__421__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(
  MR_Word transform_hlds__term_constr_pass2__Start_8,
  MR_Word transform_hlds__term_constr_pass2__SoFar_9,
  MR_Word transform_hlds__term_constr_pass2__Map_10,
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
  MR_Word transform_hlds__term_constr_pass2__Edge_12,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_pass2__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_pass2__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
    MR_Word transform_hlds__term_constr_pass2__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_pass2__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
    MR_Word transform_hlds__term_constr_pass2__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__Start_8, transform_hlds__term_constr_pass2__Var_68);
    if (transform_hlds__term_constr_pass2__succeeded)
    {
      MR_Word transform_hlds__term_constr_pass2__Cycle_14;
      MR_Word transform_hlds__term_constr_pass2__Var_21;
      MR_Word transform_hlds__term_constr_pass2__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__Var_23;
      MR_Word transform_hlds__term_constr_pass2__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
      MR_Word transform_hlds__term_constr_pass2__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
      MR_Word transform_hlds__term_constr_pass2__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
      MR_Word transform_hlds__term_constr_pass2__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));

      {
        transform_hlds__term_constr_pass2__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_21, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_22));
        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_21, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Visited_11));
      }
      {
        transform_hlds__term_constr_pass2__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_23, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_12));
        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_23, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__SoFar_9));
      }
      {
        transform_hlds__term_constr_pass2__Cycle_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_14, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_21));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_14, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_23));
      }
      mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0, ((MR_Box) (transform_hlds__term_constr_pass2__Cycle_14)), transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19, transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20);
    }
    else
    {
      MR_Word transform_hlds__term_constr_pass2__MoreEdges0_15;
      MR_Word transform_hlds__term_constr_pass2__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
      MR_Word transform_hlds__term_constr_pass2__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
      MR_Word transform_hlds__term_constr_pass2__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
      MR_Word transform_hlds__term_constr_pass2__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));
      MR_Box transform_hlds__term_constr_pass2__conv0_MoreEdges0_15;

      transform_hlds__term_constr_pass2__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__Map_10, ((MR_Box) (transform_hlds__term_constr_pass2__Var_25)), &transform_hlds__term_constr_pass2__conv0_MoreEdges0_15);
      if (transform_hlds__term_constr_pass2__succeeded)
      {
        transform_hlds__term_constr_pass2__MoreEdges0_15 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_MoreEdges0_15);
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
      }
      if (transform_hlds__term_constr_pass2__succeeded)
      {
        MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_63_63;
        MR_Word transform_hlds__term_constr_pass2__NotVisited_16;
        MR_Word transform_hlds__term_constr_pass2__MoreEdges_18;
        MR_Word transform_hlds__term_constr_pass2__Var_28;
        MR_Word transform_hlds__term_constr_pass2__Var_30;
        MR_Word transform_hlds__term_constr_pass2__Var_31;
        MR_Word transform_hlds__term_constr_pass2__Var_32;
        MR_Word transform_hlds__term_constr_pass2__Var_54;
        MR_Word transform_hlds__term_constr_pass2__Var_55;
        MR_Word transform_hlds__term_constr_pass2__Var_56;
        MR_Word transform_hlds__term_constr_pass2__Var_57;
        MR_Word transform_hlds__term_constr_pass2__Var_58;
        MR_Box transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Cycles_20;

        {
          transform_hlds__term_constr_pass2__NotVisited_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_3[4]));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Visited_11));
        }
        transform_hlds__term_constr_pass2__TypeCtorInfo_63_63 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0;
        transform_hlds__term_constr_pass2__MoreEdges_18 = mercury__list__filter_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_63_63, transform_hlds__term_constr_pass2__NotVisited_16, transform_hlds__term_constr_pass2__MoreEdges0_15);
        {
          transform_hlds__term_constr_pass2__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_30, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_12));
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_30, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__SoFar_9));
        }
        transform_hlds__term_constr_pass2__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
        transform_hlds__term_constr_pass2__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
        transform_hlds__term_constr_pass2__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
        transform_hlds__term_constr_pass2__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
        transform_hlds__term_constr_pass2__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
        transform_hlds__term_constr_pass2__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));
        {
          transform_hlds__term_constr_pass2__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_31, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_32));
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_31, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Visited_11));
        }
        {
          transform_hlds__term_constr_pass2__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_28, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_28, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_28, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Start_8));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_28, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_30));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_28, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Map_10));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_28, 6) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_31));
        }
        mercury__list__foldl_4_p_0(transform_hlds__term_constr_pass2__TypeCtorInfo_63_63, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], transform_hlds__term_constr_pass2__Var_28, transform_hlds__term_constr_pass2__MoreEdges_18, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19)), &transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Cycles_20);
        *transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20 = ((MR_Word) transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Cycles_20);
      }
      else
        *transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__direct_call_2_p_0(
  MR_Word transform_hlds__term_constr_pass2__Edge_3,
  MR_Word * transform_hlds__term_constr_pass2__Cycle_4)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_pass2__Var_6;
    MR_Word transform_hlds__term_constr_pass2__Var_7;
    MR_Word transform_hlds__term_constr_pass2__Var_8;
    MR_Word transform_hlds__term_constr_pass2__Var_9;
    MR_Word transform_hlds__term_constr_pass2__Var_10;
    MR_Word transform_hlds__term_constr_pass2__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_pass2__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 2)));
    MR_Word transform_hlds__term_constr_pass2__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_pass2__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 4)));
    MR_Word transform_hlds__term_constr_pass2__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 5)));
    MR_Word transform_hlds__term_constr_pass2__Var_21;
    MR_Word transform_hlds__term_constr_pass2__Var_22;
    MR_Word transform_hlds__term_constr_pass2__Var_23;
    MR_Word transform_hlds__term_constr_pass2__Var_24;
    MR_Word transform_hlds__term_constr_pass2__Var_25;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__Var_5, transform_hlds__term_constr_pass2__Var_11);
    if (transform_hlds__term_constr_pass2__succeeded)
    {
      transform_hlds__term_constr_pass2__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 0)));
      transform_hlds__term_constr_pass2__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 1)));
      transform_hlds__term_constr_pass2__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 2)));
      transform_hlds__term_constr_pass2__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 3)));
      transform_hlds__term_constr_pass2__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 4)));
      transform_hlds__term_constr_pass2__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 5)));
      transform_hlds__term_constr_pass2__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      transform_hlds__term_constr_pass2__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        transform_hlds__term_constr_pass2__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_6, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_7));
        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_6, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_8));
      }
      {
        transform_hlds__term_constr_pass2__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_9, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_3));
        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_9, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *transform_hlds__term_constr_pass2__Cycle_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_6));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_9));
      }
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
    }
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__fix_edges_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__Poly_4,
  MR_Word transform_hlds__term_constr_pass2__Edge0_5)
{
  {
    MR_Word transform_hlds__term_constr_pass2__Edge_6;
    MR_Word transform_hlds__term_constr_pass2__Label0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 5)));
    MR_Word transform_hlds__term_constr_pass2__Label_8;
    MR_Word transform_hlds__term_constr_pass2__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_pass2__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_pass2__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 2)));
    MR_Word transform_hlds__term_constr_pass2__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_pass2__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 4)));
    MR_Word transform_hlds__term_constr_pass2__Var_14;
    MR_Word transform_hlds__term_constr_pass2__Var_15;
    MR_Word transform_hlds__term_constr_pass2__Var_16;
    MR_Word transform_hlds__term_constr_pass2__Var_17;
    MR_Word transform_hlds__term_constr_pass2__Var_18;
    MR_Word transform_hlds__term_constr_pass2__Var_19;

    transform_hlds__term_constr_pass2__Label_8 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_pass2__Poly_4, transform_hlds__term_constr_pass2__Label0_7);
    transform_hlds__term_constr_pass2__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 0)));
    transform_hlds__term_constr_pass2__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 1)));
    transform_hlds__term_constr_pass2__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 2)));
    transform_hlds__term_constr_pass2__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 3)));
    transform_hlds__term_constr_pass2__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 4)));
    transform_hlds__term_constr_pass2__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 5)));
    {
      transform_hlds__term_constr_pass2__Edge_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_14));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_15));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 2) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_16));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_17));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_18));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Label_8));
    }
    return transform_hlds__term_constr_pass2__Edge_6;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(
  MR_Word transform_hlds__term_constr_pass2__Proc_1,
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_2,
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_3,
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_4,
  MR_Word transform_hlds__term_constr_pass2__TopPoly_5,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__6_6,
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7,
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__term_constr_pass2__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13;
      *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11;
      *transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9;
      *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7;
    }
    else
    {
      MR_Word transform_hlds__term_constr_pass2__Disj_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__6_6, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__Disjs_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__6_6, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__Constrs_43;
      MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52;
      MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53;
      MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54;
      MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55;

      transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(transform_hlds__term_constr_pass2__Proc_1, transform_hlds__term_constr_pass2__AbstractSCC_2, transform_hlds__term_constr_pass2__ModuleInfo_3, transform_hlds__term_constr_pass2__MaxMatrixSize_4, transform_hlds__term_constr_pass2__Disj_37, transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52, transform_hlds__term_constr_pass2__TopPoly_5, &transform_hlds__term_constr_pass2__Constrs_43, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53, transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54);
      mercury__list__cons_3_p_0((MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, ((MR_Box) (transform_hlds__term_constr_pass2__Constrs_43)), transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9, &transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55);
      switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52;
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55;
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53;
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54;
          }
          break;
        case (MR_Integer) 1:
          {
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_constr_pass2__next_value_of_HeadVar__6_6 = transform_hlds__term_constr_pass2__Disjs_38;
              MR_Integer transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_Calls_0_7 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52;
              MR_Word transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_DisjConstrs_0_9 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55;
              MR_Word transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_Edges_0_11 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53;
              MR_Word transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_Continue_0_13 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54;

              transform_hlds__term_constr_pass2__HeadVar__6_6 = transform_hlds__term_constr_pass2__next_value_of_HeadVar__6_6;
              transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7 = transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_Calls_0_7;
              transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9 = transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_DisjConstrs_0_9;
              transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11 = transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_Edges_0_11;
              transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13 = transform_hlds__term_constr_pass2__next_value_of_STATE_VARIABLE_Continue_0_13;
            }
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
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv9_HeadVar__5_5;

    transform_hlds__term_constr_pass2__conv9_HeadVar__5_5 = libs__polyhedron__convex_union_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv9_HeadVar__5_5));
    return transform_hlds__term_constr_pass2__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv8_Edge_6;

    transform_hlds__term_constr_pass2__conv8_Edge_6 = transform_hlds__term_constr_pass2__fix_edges_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv8_Edge_6));
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_4,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_5,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_6,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_7,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_8,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_9)
{
  {
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Integer transform_hlds__term_constr_pass2__conv3_STATE_VARIABLE_Calls_61;
    MR_Word transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Polyhedron_63;
    MR_Word transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Edges_65;
    MR_Word transform_hlds__term_constr_pass2__conv0_STATE_VARIABLE_Continue_67;

    transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Integer) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv3_STATE_VARIABLE_Calls_61, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_4), &transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Polyhedron_63, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_6), &transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Edges_65, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_8), &transform_hlds__term_constr_pass2__conv0_STATE_VARIABLE_Continue_67);
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv3_STATE_VARIABLE_Calls_61));
    *transform_hlds__term_constr_pass2__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Polyhedron_63));
    *transform_hlds__term_constr_pass2__wrapper_arg_7 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Edges_65));
    *transform_hlds__term_constr_pass2__wrapper_arg_9 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_STATE_VARIABLE_Continue_67));
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(
  MR_Word transform_hlds__term_constr_pass2__Proc_14,
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_15,
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_16,
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_17,
  MR_Word transform_hlds__term_constr_pass2__Goal_18,
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60,
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65,
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66,
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__term_constr_pass2__Goal_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__term_constr_pass2__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_pass2__Locals_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));
          MR_Integer transform_hlds__term_constr_pass2__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_pass2__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 3)));

          switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60;
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64;
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_181_181;
                MR_Word transform_hlds__term_constr_pass2__DisjConstrs0_27;
                MR_Word transform_hlds__term_constr_pass2__Edges1_28;
                MR_Word transform_hlds__term_constr_pass2__Edges2_29;
                MR_Word transform_hlds__term_constr_pass2__Var_91;
                MR_Word transform_hlds__term_constr_pass2__Var_96;

                transform_hlds__term_constr_pass2__Var_91 = libs__polyhedron__universe_0_f_0();
                transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(transform_hlds__term_constr_pass2__Proc_14, transform_hlds__term_constr_pass2__AbstractSCC_15, transform_hlds__term_constr_pass2__ModuleInfo_16, transform_hlds__term_constr_pass2__MaxMatrixSize_17, transform_hlds__term_constr_pass2__Var_91, transform_hlds__term_constr_pass2__Goals_23, transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60, transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_pass2__DisjConstrs0_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_pass2__Edges1_28, transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66, transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67);
                transform_hlds__term_constr_pass2__TypeCtorInfo_181_181 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0;
                {
                  transform_hlds__term_constr_pass2__Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_96, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[3]));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_96, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_96, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62));
                }
                transform_hlds__term_constr_pass2__Edges2_29 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_181_181, transform_hlds__term_constr_pass2__TypeCtorInfo_181_181, transform_hlds__term_constr_pass2__Var_96, transform_hlds__term_constr_pass2__Edges1_28);
                mercury__list__append_3_p_1(transform_hlds__term_constr_pass2__TypeCtorInfo_181_181, transform_hlds__term_constr_pass2__Edges2_29, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65);
                switch (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_184_184;
                      MR_Word transform_hlds__term_constr_pass2__SizeVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
                      MR_Word transform_hlds__term_constr_pass2__DisjConstrs_31;
                      MR_Word transform_hlds__term_constr_pass2__Constrs2_32;
                      MR_Word transform_hlds__term_constr_pass2__Var_98;
                      MR_Word transform_hlds__term_constr_pass2__Var_99;
                      MR_Word transform_hlds__term_constr_pass2__Var_100;
                      MR_Word transform_hlds__term_constr_pass2__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
                      MR_Word transform_hlds__term_constr_pass2__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
                      MR_Word transform_hlds__term_constr_pass2__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
                      MR_Word transform_hlds__term_constr_pass2__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
                      MR_Word transform_hlds__term_constr_pass2__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
                      MR_Word transform_hlds__term_constr_pass2__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
                      MR_Word transform_hlds__term_constr_pass2__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
                      MR_Word transform_hlds__term_constr_pass2__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
                      MR_Word transform_hlds__term_constr_pass2__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
                      MR_Integer transform_hlds__term_constr_pass2__Var_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
                      MR_Word transform_hlds__term_constr_pass2__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));
                      MR_Box transform_hlds__term_constr_pass2__conv10_Constrs2_32;

                      transform_hlds__term_constr_pass2__DisjConstrs_31 = libs__polyhedron__project_all_3_f_0(transform_hlds__term_constr_pass2__SizeVarSet_30, transform_hlds__term_constr_pass2__Locals_25, transform_hlds__term_constr_pass2__DisjConstrs0_27);
                      transform_hlds__term_constr_pass2__TypeCtorInfo_184_184 = (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0;
                      {
                        transform_hlds__term_constr_pass2__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_99, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__MaxMatrixSize_17));
                      }
                      {
                        transform_hlds__term_constr_pass2__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_98, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_9[0]));
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_98, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3));
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_98, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_98, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__SizeVarSet_30));
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_98, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_99));
                      }
                      transform_hlds__term_constr_pass2__Var_100 = libs__polyhedron__empty_0_f_0();
                      transform_hlds__term_constr_pass2__conv10_Constrs2_32 = mercury__list__foldl_3_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_184_184, transform_hlds__term_constr_pass2__TypeCtorInfo_184_184, transform_hlds__term_constr_pass2__Var_98, transform_hlds__term_constr_pass2__DisjConstrs_31, ((MR_Box) (transform_hlds__term_constr_pass2__Var_100)));
                      transform_hlds__term_constr_pass2__Constrs2_32 = ((MR_Word) transform_hlds__term_constr_pass2__conv10_Constrs2_32);
                      libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_pass2__Constrs2_32, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
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
          MR_Word transform_hlds__term_constr_pass2__Goals_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_pass2__Locals_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_pass2__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));

          switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60;
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64;
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__term_constr_pass2__Var_84;
                MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86;
                MR_Box transform_hlds__term_constr_pass2__conv7_STATE_VARIABLE_Calls_61;
                MR_Box transform_hlds__term_constr_pass2__conv6_STATE_VARIABLE_Polyhedron_86_86;
                MR_Box transform_hlds__term_constr_pass2__conv5_STATE_VARIABLE_Edges_65;
                MR_Box transform_hlds__term_constr_pass2__conv4_STATE_VARIABLE_Continue_67;

                {
                  transform_hlds__term_constr_pass2__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_84, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_84, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_84, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_14));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_84, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__AbstractSCC_15));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_84, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__ModuleInfo_16));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_84, 6) = ((MR_Box) (transform_hlds__term_constr_pass2__MaxMatrixSize_17));
                }
                mercury__list__foldl4_10_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_constr_pass2__Var_84, transform_hlds__term_constr_pass2__Goals_102, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60)), &transform_hlds__term_constr_pass2__conv7_STATE_VARIABLE_Calls_61, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62)), &transform_hlds__term_constr_pass2__conv6_STATE_VARIABLE_Polyhedron_86_86, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64)), &transform_hlds__term_constr_pass2__conv5_STATE_VARIABLE_Edges_65, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66)), &transform_hlds__term_constr_pass2__conv4_STATE_VARIABLE_Continue_67);
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = ((MR_Integer) transform_hlds__term_constr_pass2__conv7_STATE_VARIABLE_Calls_61);
                transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86 = ((MR_Word) transform_hlds__term_constr_pass2__conv6_STATE_VARIABLE_Polyhedron_86_86);
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = ((MR_Word) transform_hlds__term_constr_pass2__conv5_STATE_VARIABLE_Edges_65);
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = ((MR_Word) transform_hlds__term_constr_pass2__conv4_STATE_VARIABLE_Continue_67);
                switch (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word transform_hlds__term_constr_pass2__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
                      MR_Word transform_hlds__term_constr_pass2__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
                      MR_Word transform_hlds__term_constr_pass2__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
                      MR_Word transform_hlds__term_constr_pass2__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
                      MR_Word transform_hlds__term_constr_pass2__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
                      MR_Word transform_hlds__term_constr_pass2__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
                      MR_Word transform_hlds__term_constr_pass2__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
                      MR_Word transform_hlds__term_constr_pass2__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
                      MR_Word transform_hlds__term_constr_pass2__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
                      MR_Word transform_hlds__term_constr_pass2__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
                      MR_Integer transform_hlds__term_constr_pass2__Var_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
                      MR_Word transform_hlds__term_constr_pass2__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));

                      libs__polyhedron__project_4_p_0(transform_hlds__term_constr_pass2__Locals_103, transform_hlds__term_constr_pass2__Var_89, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
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
          MR_Word transform_hlds__term_constr_pass2__CallPPId0_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_pass2__CallVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));
          MR_Word transform_hlds__term_constr_pass2__ZeroVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 3)));
          MR_Word transform_hlds__term_constr_pass2__Edge_41;
          MR_Word transform_hlds__term_constr_pass2__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_pass2__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
          MR_Word transform_hlds__term_constr_pass2__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
          MR_Word transform_hlds__term_constr_pass2__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_pass2__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 4)));
          MR_Word transform_hlds__term_constr_pass2__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 5)));
          MR_Word transform_hlds__term_constr_pass2__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 6)));
          MR_Word transform_hlds__term_constr_pass2__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_pass2__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
          MR_Word transform_hlds__term_constr_pass2__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
          MR_Word transform_hlds__term_constr_pass2__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
          MR_Word transform_hlds__term_constr_pass2__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
          MR_Word transform_hlds__term_constr_pass2__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
          MR_Word transform_hlds__term_constr_pass2__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
          MR_Integer transform_hlds__term_constr_pass2__Var_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
          MR_Word transform_hlds__term_constr_pass2__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));
          MR_Integer transform_hlds__term_constr_pass2__Var_75;
          MR_Word transform_hlds__term_constr_pass2__Var_159;
          MR_Word transform_hlds__term_constr_pass2__Var_160;
          MR_Word transform_hlds__term_constr_pass2__Var_161;
          MR_Word transform_hlds__term_constr_pass2__Var_162;
          MR_Word transform_hlds__term_constr_pass2__Var_163;
          MR_Word transform_hlds__term_constr_pass2__Var_164;
          MR_Word transform_hlds__term_constr_pass2__Var_165;
          MR_Word transform_hlds__term_constr_pass2__Var_166;
          MR_Word transform_hlds__term_constr_pass2__Var_167;
          MR_Word transform_hlds__term_constr_pass2__Var_168;
          MR_Word transform_hlds__term_constr_pass2__Var_169;

          {
            transform_hlds__term_constr_pass2__Edge_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_69));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__CallPPId0_34));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 2) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_128));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__CallVars_36));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_133));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62));
          }
          mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, ((MR_Box) (transform_hlds__term_constr_pass2__Edge_41)), transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65);
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = (transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60 + (MR_Integer) 1);
          transform_hlds__term_constr_pass2__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
          transform_hlds__term_constr_pass2__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
          transform_hlds__term_constr_pass2__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
          transform_hlds__term_constr_pass2__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
          transform_hlds__term_constr_pass2__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
          transform_hlds__term_constr_pass2__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
          transform_hlds__term_constr_pass2__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
          transform_hlds__term_constr_pass2__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
          transform_hlds__term_constr_pass2__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
          transform_hlds__term_constr_pass2__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
          transform_hlds__term_constr_pass2__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
          transform_hlds__term_constr_pass2__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));
          transform_hlds__term_constr_pass2__succeeded = (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 > transform_hlds__term_constr_pass2__Var_75);
          if (transform_hlds__term_constr_pass2__succeeded)
          {
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = (MR_Integer) 0;
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
          }
          else
          {
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
            switch (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__term_constr_pass2__CallPPId_42 = (MR_Word) transform_hlds__term_constr_pass2__CallPPId0_34;
                  MR_Word transform_hlds__term_constr_pass2__CallProcInfo_44;
                  MR_Word transform_hlds__term_constr_pass2__CallTerm2Info_45;
                  MR_Word transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46;
                  MR_Word transform_hlds__term_constr_pass2__Var_43;

                  hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_pass2__ModuleInfo_16, transform_hlds__term_constr_pass2__CallPPId_42, &transform_hlds__term_constr_pass2__Var_43, &transform_hlds__term_constr_pass2__CallProcInfo_44);
                  hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_pass2__CallProcInfo_44, &transform_hlds__term_constr_pass2__CallTerm2Info_45);
                  transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(transform_hlds__term_constr_pass2__CallTerm2Info_45);
                  if ((transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "predicate \140transform_hlds.term_constr_pass2.find_edges_in_goal\'/13", (MR_String) "proc with no arg size info in pass 2");
                      return;
                    }
                  }
                  else
                  {
                    MR_Word transform_hlds__term_constr_pass2__ArgSizePolyhedron0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46, (MR_Integer) 0)));

                    transform_hlds__term_constr_pass2__succeeded = libs__polyhedron__is_universe_1_p_0(transform_hlds__term_constr_pass2__ArgSizePolyhedron0_47);
                    if (transform_hlds__term_constr_pass2__succeeded)
                      *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
                    else
                    {
                      MR_Word transform_hlds__term_constr_pass2__TypeInfo_203_203;
                      MR_Word transform_hlds__term_constr_pass2__MaybeCallProc_48;
                      MR_Word transform_hlds__term_constr_pass2__CallProc_50;
                      MR_Word transform_hlds__term_constr_pass2__HeadVars_51;
                      MR_Word transform_hlds__term_constr_pass2__Subst_52;
                      MR_Word transform_hlds__term_constr_pass2__Eqns0_53;
                      MR_Word transform_hlds__term_constr_pass2__Eqns1_54;
                      MR_Word transform_hlds__term_constr_pass2__Eqns_55;
                      MR_Word transform_hlds__term_constr_pass2__ArgSizePolyhedron_56;
                      MR_Word transform_hlds__term_constr_pass2__Var_170;
                      MR_Word transform_hlds__term_constr_pass2__Var_171;
                      MR_Word transform_hlds__term_constr_pass2__Var_172;
                      MR_Word transform_hlds__term_constr_pass2__Var_173;
                      MR_Word transform_hlds__term_constr_pass2__Var_174;
                      MR_Word transform_hlds__term_constr_pass2__Var_175;
                      MR_Word transform_hlds__term_constr_pass2__Var_176;
                      MR_Word transform_hlds__term_constr_pass2__Var_177;
                      MR_Word transform_hlds__term_constr_pass2__Var_178;
                      MR_Integer transform_hlds__term_constr_pass2__Var_179;
                      MR_Word transform_hlds__term_constr_pass2__Var_180;

                      transform_hlds__term_constr_pass2__MaybeCallProc_48 = transform_hlds__term_constr_main_types__term2_info_get_abstract_rep_1_f_0(transform_hlds__term_constr_pass2__CallTerm2Info_45);
                      if ((transform_hlds__term_constr_pass2__MaybeCallProc_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "predicate \140transform_hlds.term_constr_pass2.find_edges_in_goal\'/13", (MR_String) "no abstract representation for proc");
                          return;
                        }
                      }
                      else
                        transform_hlds__term_constr_pass2__CallProc_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__MaybeCallProc_48, (MR_Integer) 0)));
                      transform_hlds__term_constr_pass2__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 0)));
                      transform_hlds__term_constr_pass2__Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 1)));
                      transform_hlds__term_constr_pass2__Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 2)));
                      transform_hlds__term_constr_pass2__HeadVars_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 3)));
                      transform_hlds__term_constr_pass2__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 4)));
                      transform_hlds__term_constr_pass2__Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 5)));
                      transform_hlds__term_constr_pass2__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 6)));
                      transform_hlds__term_constr_pass2__Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 7)));
                      transform_hlds__term_constr_pass2__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 8)));
                      transform_hlds__term_constr_pass2__Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 9)));
                      transform_hlds__term_constr_pass2__Var_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 10)));
                      transform_hlds__term_constr_pass2__Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 11)));
                      transform_hlds__term_constr_pass2__TypeInfo_203_203 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
                      transform_hlds__term_constr_pass2__Subst_52 = mercury__map__from_corresponding_lists_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_203_203, transform_hlds__term_constr_pass2__TypeInfo_203_203, transform_hlds__term_constr_pass2__HeadVars_51, transform_hlds__term_constr_pass2__CallVars_36);
                      transform_hlds__term_constr_pass2__Eqns0_53 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__ArgSizePolyhedron0_47);
                      transform_hlds__term_constr_pass2__Eqns1_54 = transform_hlds__term_constr_util__substitute_size_vars_2_f_0(transform_hlds__term_constr_pass2__Eqns0_53, transform_hlds__term_constr_pass2__Subst_52);
                      transform_hlds__term_constr_pass2__Eqns_55 = libs__lp_rational__set_vars_to_zero_2_f_0(transform_hlds__term_constr_pass2__ZeroVars_37, transform_hlds__term_constr_pass2__Eqns1_54);
                      transform_hlds__term_constr_pass2__ArgSizePolyhedron_56 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_pass2__Eqns_55);
                      libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_pass2__ArgSizePolyhedron_56, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
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
          MR_Word transform_hlds__term_constr_pass2__Primitive_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_pass2__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_pass2__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));

          switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
              break;
            case (MR_Integer) 1:
              libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_pass2__Primitive_57, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
              break;
          }
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60;
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64;
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_3(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv3_Cycle_4;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__direct_call_2_p_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), &transform_hlds__term_constr_pass2__conv3_Cycle_4);
    if (transform_hlds__term_constr_pass2__succeeded)
    {
      *transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv3_Cycle_4));
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
    }
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_2(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__3_17;

    transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__181__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__3_17);
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__3_17));
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_20;

    transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_20 = transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__152__1_1_f_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_20));
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
  }
}

void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0(
  MR_Word transform_hlds__term_constr_pass2__Options_5,
  MR_Word transform_hlds__term_constr_pass2__SCC0_6,
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_7,
  MR_Word * transform_hlds__term_constr_pass2__Result_8)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;

    transform_hlds__term_constr_pass2__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_pass2__SCC0_6);
    if (transform_hlds__term_constr_pass2__succeeded)
    {
      *transform_hlds__term_constr_pass2__Result_8 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_6[0];
    }
    else
    {
      MR_Word transform_hlds__term_constr_pass2__AbstractSCC_9;

      transform_hlds__term_constr_pass2__AbstractSCC_9 = transform_hlds__term_constr_util__get_abstract_scc_2_f_0(transform_hlds__term_constr_pass2__ModuleInfo_7, transform_hlds__term_constr_pass2__SCC0_6);
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data__scc_contains_recursion_1_p_0(transform_hlds__term_constr_pass2__AbstractSCC_9);
      if (transform_hlds__term_constr_pass2__succeeded)
      {
        MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_26_26 = (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0;
        MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_14_76;
        MR_Word transform_hlds__term_constr_pass2__PPIdSCC_10;
        MR_Word transform_hlds__term_constr_pass2__PPIds_12;
        MR_Word transform_hlds__term_constr_pass2__SizeVarSet_13;
        MR_Word transform_hlds__term_constr_pass2__Edges_14;
        MR_Word transform_hlds__term_constr_pass2__Cycles_15;
        MR_Word transform_hlds__term_constr_pass2__CycleSets_16;
        MR_Integer transform_hlds__term_constr_pass2__Var_21;
        MR_Word transform_hlds__term_constr_pass2__FindEdges_31;
        MR_Word transform_hlds__term_constr_pass2__Cycles0_69;
        MR_Word transform_hlds__term_constr_pass2__Edges_70;
        MR_Word transform_hlds__term_constr_pass2__Cycles1_71;
        MR_Word transform_hlds__term_constr_pass2__EdgeMap_80;
        MR_Box transform_hlds__term_constr_pass2__conv2_Edges_14;

        transform_hlds__term_constr_pass2__PPIdSCC_10 = mercury__set__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_pass2__TypeCtorInfo_26_26, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[2], transform_hlds__term_constr_pass2__SCC0_6);
        mercury__set__to_sorted_list_2_p_0(transform_hlds__term_constr_pass2__TypeCtorInfo_26_26, transform_hlds__term_constr_pass2__PPIdSCC_10, &transform_hlds__term_constr_pass2__PPIds_12);
        transform_hlds__term_constr_pass2__SizeVarSet_13 = transform_hlds__term_constr_data__size_varset_from_abstract_scc_1_f_0(transform_hlds__term_constr_pass2__AbstractSCC_9);
        transform_hlds__term_constr_pass2__Var_21 = (MR_Integer) transform_hlds__term_constr_pass2__Options_5;
        {
          transform_hlds__term_constr_pass2__FindEdges_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_31, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_31, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_2));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_31, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__AbstractSCC_9));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_31, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__ModuleInfo_7));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_31, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_21));
        }
        mercury__set__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__FindEdges_31, transform_hlds__term_constr_pass2__AbstractSCC_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_pass2__conv2_Edges_14);
        transform_hlds__term_constr_pass2__Edges_14 = ((MR_Word) transform_hlds__term_constr_pass2__conv2_Edges_14);
        transform_hlds__term_constr_pass2__TypeCtorInfo_14_76 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;
        mercury__list__filter_map_4_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__TypeCtorInfo_14_76, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[3], transform_hlds__term_constr_pass2__Edges_14, &transform_hlds__term_constr_pass2__Cycles0_69, &transform_hlds__term_constr_pass2__Edges_70);
        transform_hlds__term_constr_pass2__EdgeMap_80 = transform_hlds__term_constr_pass2__partition_edges_2_f_0(transform_hlds__term_constr_pass2__PPIds_12, transform_hlds__term_constr_pass2__Edges_70);
        transform_hlds__term_constr_pass2__Cycles1_71 = transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(transform_hlds__term_constr_pass2__PPIds_12, transform_hlds__term_constr_pass2__EdgeMap_80);
        transform_hlds__term_constr_pass2__Cycles_15 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_14_76, transform_hlds__term_constr_pass2__Cycles0_69, transform_hlds__term_constr_pass2__Cycles1_71);
        transform_hlds__term_constr_pass2__CycleSets_16 = transform_hlds__term_constr_pass2__partition_cycles_2_f_0(transform_hlds__term_constr_pass2__PPIds_12, transform_hlds__term_constr_pass2__Cycles_15);
        transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(transform_hlds__term_constr_pass2__AbstractSCC_9, transform_hlds__term_constr_pass2__SizeVarSet_13, transform_hlds__term_constr_pass2__CycleSets_16);
        if (transform_hlds__term_constr_pass2__succeeded)
        {
          *transform_hlds__term_constr_pass2__Result_8 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_6[0];
        }
        else
        {
          MR_Word transform_hlds__term_constr_pass2__Error_85;
          MR_Word transform_hlds__term_constr_pass2__Var_87;
          MR_Word transform_hlds__term_constr_pass2__Var_89;

          transform_hlds__term_constr_pass2__Var_87 = mercury__term__context_init_0_f_0();
          {
            transform_hlds__term_constr_pass2__Error_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Error_85, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_87));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Error_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          }
          {
            transform_hlds__term_constr_pass2__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_89, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Error_85));
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__term_constr_pass2__Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_89));
          }
        }
      }
      else
      {
        *transform_hlds__term_constr_pass2__Result_8 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_6[0];
      }
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3(
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

    (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21 = ((MR_Word) (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21);
    transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(transform_hlds__term_constr_pass2__env_ptr);
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

    (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21);
    (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = !((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded);
    if ((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded)
      transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(transform_hlds__term_constr_pass2__env_ptr);
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, &(transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11, transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3, transform_hlds__term_constr_pass2__env_ptr);
        }
        (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_1,
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_2,
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
{
  {
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s transform_hlds__term_constr_pass2__env;

    (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1 = transform_hlds__term_constr_pass2__AbstractSCC_1;
    (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2 = transform_hlds__term_constr_pass2__SizeVarSet_2;
    while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((transform_hlds__term_constr_pass2__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
      else
      {
        MR_Word transform_hlds__term_constr_pass2__CycleSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_pass2__CycleSets_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));

        (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CycleSet_8, (MR_Integer) 0)));
        (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CycleSet_8, (MR_Integer) 1)));
        if (((transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
        else
        {
          transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(&transform_hlds__term_constr_pass2__env);
          (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = !((transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded);
        }
        if ((transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word transform_hlds__term_constr_pass2__next_value_of_HeadVar__3_3 = transform_hlds__term_constr_pass2__CycleSets_9;

            transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__next_value_of_HeadVar__3_3;
          }
          continue;
        }
      }
      return (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded;
      break;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__2_9;

    transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__2_9 = transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__548__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__2_9));
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__3_24;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__522__1_2_f_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__3_24);
    if (transform_hlds__term_constr_pass2__succeeded)
    {
      *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__3_24));
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
    }
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0(
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_5,
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_6,
  MR_Word transform_hlds__term_constr_pass2__PPId_7,
  MR_Word transform_hlds__term_constr_pass2__Loop_8)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_76_76;
    MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_77_77;
    MR_Word transform_hlds__term_constr_pass2__IsActive_9;
    MR_Word transform_hlds__term_constr_pass2__Proc_12;
    MR_Word transform_hlds__term_constr_pass2__Inputs_13;
    MR_Word transform_hlds__term_constr_pass2__HeadArgs_14;
    MR_Word transform_hlds__term_constr_pass2__CallArgs_15;
    MR_Word transform_hlds__term_constr_pass2__Terms_16;
    MR_Word transform_hlds__term_constr_pass2__Condition_17;
    MR_Word transform_hlds__term_constr_pass2__Label_18;
    MR_Word transform_hlds__term_constr_pass2__Var_25;
    MR_Word transform_hlds__term_constr_pass2__Var_26;
    MR_Word transform_hlds__term_constr_pass2__Var_27;
    MR_Word transform_hlds__term_constr_pass2__Var_28;
    MR_Word transform_hlds__term_constr_pass2__Var_29;
    MR_Word transform_hlds__term_constr_pass2__Var_30;
    MR_Word transform_hlds__term_constr_pass2__Var_31;
    MR_Word transform_hlds__term_constr_pass2__Var_32;
    MR_Word transform_hlds__term_constr_pass2__Var_34;
    MR_Word transform_hlds__term_constr_pass2__Var_35;
    MR_Word transform_hlds__term_constr_pass2__Var_36;
    MR_Word transform_hlds__term_constr_pass2__Var_86;
    MR_Word transform_hlds__term_constr_pass2__Var_49;
    MR_Word transform_hlds__term_constr_pass2__Var_50;
    MR_Word transform_hlds__term_constr_pass2__Var_51;
    MR_Word transform_hlds__term_constr_pass2__Var_52;
    MR_Word transform_hlds__term_constr_pass2__Var_53;
    MR_Word transform_hlds__term_constr_pass2__Var_54;
    MR_Word transform_hlds__term_constr_pass2__Var_55;
    MR_Word transform_hlds__term_constr_pass2__Var_56;
    MR_Word transform_hlds__term_constr_pass2__Var_57;
    MR_Integer transform_hlds__term_constr_pass2__Var_58;
    MR_Word transform_hlds__term_constr_pass2__Var_59;
    MR_Word transform_hlds__term_constr_pass2__Var_60;
    MR_Word transform_hlds__term_constr_pass2__Var_61;
    MR_Word transform_hlds__term_constr_pass2__Var_62;
    MR_Word transform_hlds__term_constr_pass2__Var_63;
    MR_Word transform_hlds__term_constr_pass2__Var_64;
    MR_Word transform_hlds__term_constr_pass2__Var_65;
    MR_Word transform_hlds__term_constr_pass2__Var_66;
    MR_Word transform_hlds__term_constr_pass2__Var_67;
    MR_Word transform_hlds__term_constr_pass2__Var_68;
    MR_Word transform_hlds__term_constr_pass2__Var_69;
    MR_Word transform_hlds__term_constr_pass2__Var_70;
    MR_Word transform_hlds__term_constr_pass2__Var_71;
    MR_Word transform_hlds__term_constr_pass2__Var_72;
    MR_Word transform_hlds__term_constr_pass2__Var_73;
    MR_Word transform_hlds__term_constr_pass2__Var_74;

    {
      MR_Word transform_hlds__term_constr_pass2__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
      MR_Word transform_hlds__term_constr_pass2__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
      MR_Word transform_hlds__term_constr_pass2__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
      MR_Word transform_hlds__term_constr_pass2__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));

      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__PPId_7, transform_hlds__term_constr_pass2__Var_79);
      transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
    }
    if (!(transform_hlds__term_constr_pass2__succeeded))
    {
      MR_Word transform_hlds__term_constr_pass2__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
      MR_Word transform_hlds__term_constr_pass2__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
      MR_Word transform_hlds__term_constr_pass2__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
      MR_Word transform_hlds__term_constr_pass2__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));

      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__PPId_7, transform_hlds__term_constr_pass2__Var_80);
      transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
    }
    if (transform_hlds__term_constr_pass2__succeeded)
    {
      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "predicate \140transform_hlds.term_constr_pass2.strict_decrease_around_loop\'/4", (MR_String) "badly formed loop");
    }
    else
    {
    }
    transform_hlds__term_constr_pass2__IsActive_9 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[1];
    transform_hlds__term_constr_pass2__Var_25 = mercury__set__to_sorted_list_1_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, transform_hlds__term_constr_pass2__AbstractSCC_5);
    transform_hlds__term_constr_pass2__Proc_12 = transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(transform_hlds__term_constr_pass2__Var_25, transform_hlds__term_constr_pass2__PPId_7);
    transform_hlds__term_constr_pass2__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 0)));
    transform_hlds__term_constr_pass2__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 1)));
    transform_hlds__term_constr_pass2__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 2)));
    transform_hlds__term_constr_pass2__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 3)));
    transform_hlds__term_constr_pass2__Inputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 4)));
    transform_hlds__term_constr_pass2__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 5)));
    transform_hlds__term_constr_pass2__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 6)));
    transform_hlds__term_constr_pass2__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 7)));
    transform_hlds__term_constr_pass2__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 8)));
    transform_hlds__term_constr_pass2__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 9)));
    transform_hlds__term_constr_pass2__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 10)));
    transform_hlds__term_constr_pass2__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 11)));
    transform_hlds__term_constr_pass2__TypeInfo_76_76 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
    transform_hlds__term_constr_pass2__TypeCtorInfo_77_77 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
    transform_hlds__term_constr_pass2__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
    transform_hlds__term_constr_pass2__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
    transform_hlds__term_constr_pass2__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
    transform_hlds__term_constr_pass2__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
    transform_hlds__term_constr_pass2__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
    transform_hlds__term_constr_pass2__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));
    transform_hlds__term_constr_pass2__HeadArgs_14 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__term_constr_pass2__TypeInfo_76_76, transform_hlds__term_constr_pass2__TypeCtorInfo_77_77, transform_hlds__term_constr_pass2__TypeInfo_76_76, transform_hlds__term_constr_pass2__IsActive_9, transform_hlds__term_constr_pass2__Var_26, transform_hlds__term_constr_pass2__Inputs_13);
    transform_hlds__term_constr_pass2__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
    transform_hlds__term_constr_pass2__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
    transform_hlds__term_constr_pass2__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
    transform_hlds__term_constr_pass2__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
    transform_hlds__term_constr_pass2__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
    transform_hlds__term_constr_pass2__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));
    transform_hlds__term_constr_pass2__CallArgs_15 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__term_constr_pass2__TypeInfo_76_76, transform_hlds__term_constr_pass2__TypeCtorInfo_77_77, transform_hlds__term_constr_pass2__TypeInfo_76_76, transform_hlds__term_constr_pass2__IsActive_9, transform_hlds__term_constr_pass2__Var_27, transform_hlds__term_constr_pass2__Inputs_13);
    transform_hlds__term_constr_pass2__Var_30 = libs__rat__one_0_f_0();
    transform_hlds__term_constr_pass2__Var_29 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_pass2__Var_30);
    {
      transform_hlds__term_constr_pass2__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_86, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_86, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_86, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_29));
    }
    transform_hlds__term_constr_pass2__Var_28 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1], (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0], transform_hlds__term_constr_pass2__Var_86, transform_hlds__term_constr_pass2__HeadArgs_14);
    transform_hlds__term_constr_pass2__Var_32 = libs__rat__one_0_f_0();
    transform_hlds__term_constr_pass2__Var_31 = transform_hlds__term_constr_pass2__make_coeffs_2_f_0(transform_hlds__term_constr_pass2__CallArgs_15, transform_hlds__term_constr_pass2__Var_32);
    transform_hlds__term_constr_pass2__Terms_16 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0], transform_hlds__term_constr_pass2__Var_28, transform_hlds__term_constr_pass2__Var_31);
    transform_hlds__term_constr_pass2__Var_35 = libs__rat__one_0_f_0();
    transform_hlds__term_constr_pass2__Var_34 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_pass2__Var_35);
    transform_hlds__term_constr_pass2__Condition_17 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_pass2__Terms_16, (MR_Integer) 0, transform_hlds__term_constr_pass2__Var_34);
    transform_hlds__term_constr_pass2__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
    transform_hlds__term_constr_pass2__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
    transform_hlds__term_constr_pass2__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
    transform_hlds__term_constr_pass2__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
    transform_hlds__term_constr_pass2__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
    transform_hlds__term_constr_pass2__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));
    transform_hlds__term_constr_pass2__Label_18 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__Var_36);
    transform_hlds__term_constr_pass2__succeeded = libs__lp_rational__entailed_3_p_0(transform_hlds__term_constr_pass2__SizeVarSet_6, transform_hlds__term_constr_pass2__Label_18, transform_hlds__term_constr_pass2__Condition_17);
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_9;

    transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_9 = transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__548__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_9));
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__Vars_4,
  MR_Word transform_hlds__term_constr_pass2__Coeff_5)
{
  {
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;
    MR_Word transform_hlds__term_constr_pass2__Var_7;

    {
      transform_hlds__term_constr_pass2__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_7, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_7, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_7, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Coeff_5));
    }
    transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1], (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0], transform_hlds__term_constr_pass2__Var_7, transform_hlds__term_constr_pass2__Vars_4);
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__PPId_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__term_constr_pass2__succeeded;
      MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

      if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "function \140transform_hlds.term_constr_pass2.get_proc_from_abstract_scc\'/2", (MR_String) "cannot find proc");
      }
      else
      {
        MR_Word transform_hlds__term_constr_pass2__Proc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_pass2__Procs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_pass2__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_pass2__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_pass2__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 2)));
        MR_Word transform_hlds__term_constr_pass2__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_pass2__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_pass2__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 5)));
        MR_Word transform_hlds__term_constr_pass2__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 6)));
        MR_Word transform_hlds__term_constr_pass2__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 7)));
        MR_Word transform_hlds__term_constr_pass2__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 8)));
        MR_Word transform_hlds__term_constr_pass2__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 9)));
        MR_Integer transform_hlds__term_constr_pass2__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 10)));
        MR_Word transform_hlds__term_constr_pass2__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 11)));

        transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__PPId_2, transform_hlds__term_constr_pass2__Var_23);
        if (transform_hlds__term_constr_pass2__succeeded)
          transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__Proc_9;
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Word transform_hlds__term_constr_pass2__next_value_of_HeadVar__1_1 = transform_hlds__term_constr_pass2__Procs_10;

            transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return transform_hlds__term_constr_pass2__HeadVar__3_3;
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv0_CollapsedCycle_6;

    transform_hlds__term_constr_pass2__conv0_CollapsedCycle_6 = transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_CollapsedCycle_6));
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__Cycles0_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word transform_hlds__term_constr_pass2__Proc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__Procs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__PCycles_9;
      MR_Word transform_hlds__term_constr_pass2__Cycles1_10;
      MR_Word transform_hlds__term_constr_pass2__CycleSets0_11;
      MR_Word transform_hlds__term_constr_pass2__PEdges_12;
      MR_Word transform_hlds__term_constr_pass2__Var_15;
      MR_Word transform_hlds__term_constr_pass2__Var_21;

      {
        transform_hlds__term_constr_pass2__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_15, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_15, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_15, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_5));
      }
      mercury__list__filter_4_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0, transform_hlds__term_constr_pass2__Var_15, transform_hlds__term_constr_pass2__Cycles0_2, &transform_hlds__term_constr_pass2__PCycles_9, &transform_hlds__term_constr_pass2__Cycles1_10);
      transform_hlds__term_constr_pass2__CycleSets0_11 = transform_hlds__term_constr_pass2__partition_cycles_2_f_0(transform_hlds__term_constr_pass2__Procs_6, transform_hlds__term_constr_pass2__Cycles1_10);
      {
        transform_hlds__term_constr_pass2__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_21, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_21, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_21, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_5));
      }
      transform_hlds__term_constr_pass2__PEdges_12 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__Var_21, transform_hlds__term_constr_pass2__PCycles_9);
      if ((transform_hlds__term_constr_pass2__PEdges_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__CycleSets0_11;
      else
      {
        MR_Word transform_hlds__term_constr_pass2__Var_16;

        {
          transform_hlds__term_constr_pass2__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_16, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_5));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_16, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__PEdges_12));
        }
        {
          transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_16));
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__CycleSets0_11));
        }
      }
    }
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
    MR_Word transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20;

    transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20);
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20));
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__Map0_2)
{
  {
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word transform_hlds__term_constr_pass2__HeadPPId_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__TailPPId_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__HeadCycles_9;
      MR_Word transform_hlds__term_constr_pass2__Map1_10;
      MR_Word transform_hlds__term_constr_pass2__TailCycles_11;
      MR_Word transform_hlds__term_constr_pass2__InitialEdges_18;
      MR_Word transform_hlds__term_constr_pass2__Var_19;
      MR_Box transform_hlds__term_constr_pass2__conv0_InitialEdges_18;
      MR_Box transform_hlds__term_constr_pass2__conv2_HeadCycles_9;

      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__Map0_2, ((MR_Box) (transform_hlds__term_constr_pass2__HeadPPId_5)), &transform_hlds__term_constr_pass2__conv0_InitialEdges_18);
      transform_hlds__term_constr_pass2__InitialEdges_18 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_InitialEdges_18);
      {
        transform_hlds__term_constr_pass2__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_19, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_19, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_19, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__HeadPPId_5));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_19, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Map0_2));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_19, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], transform_hlds__term_constr_pass2__Var_19, transform_hlds__term_constr_pass2__InitialEdges_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_pass2__conv2_HeadCycles_9);
      transform_hlds__term_constr_pass2__HeadCycles_9 = ((MR_Word) transform_hlds__term_constr_pass2__conv2_HeadCycles_9);
      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_pass2__HeadPPId_5)), transform_hlds__term_constr_pass2__Map0_2, &transform_hlds__term_constr_pass2__Map1_10);
      transform_hlds__term_constr_pass2__TailCycles_11 = transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(transform_hlds__term_constr_pass2__TailPPId_6, transform_hlds__term_constr_pass2__Map1_10);
      transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0, transform_hlds__term_constr_pass2__HeadCycles_9, transform_hlds__term_constr_pass2__TailCycles_11);
    }
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0_1(
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__387__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0(
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_pass2__Edges0_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0]);
    }
    else
    {
      MR_Word transform_hlds__term_constr_pass2__ProcId_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_pass2__SCC_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__term_constr_pass2__Map0_9;
      MR_Word transform_hlds__term_constr_pass2__Edges_10;
      MR_Word transform_hlds__term_constr_pass2__Var_12;

      transform_hlds__term_constr_pass2__Map0_9 = transform_hlds__term_constr_pass2__partition_edges_2_f_0(transform_hlds__term_constr_pass2__SCC_6, transform_hlds__term_constr_pass2__Edges0_2);
      {
        transform_hlds__term_constr_pass2__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_12, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_12, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_edges_2_f_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Var_12, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__ProcId_5));
      }
      transform_hlds__term_constr_pass2__Edges_10 = mercury__list__filter_2_f_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__Var_12, transform_hlds__term_constr_pass2__Edges0_2);
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_pass2__ProcId_5)), ((MR_Box) (transform_hlds__term_constr_pass2__Edges_10)), transform_hlds__term_constr_pass2__Map0_9, &transform_hlds__term_constr_pass2__HeadVar__3_3);
    }
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_pass2__pass2_options_init_1_f_0(
  MR_Integer transform_hlds__term_constr_pass2__MaxSize_3)
{
  {
    MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2 = (MR_Word) transform_hlds__term_constr_pass2__MaxSize_3;

    return transform_hlds__term_constr_pass2__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____cycle_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____cycle_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____cycles_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____cycles_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____edge_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____edge_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____edges_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____edges_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001(
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_pass2__succeeded;

    transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____pass2_options_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    return transform_hlds__term_constr_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001(
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

    transform_hlds__term_constr_pass2____Compare____pass2_options_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
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

/* :- end_module transform_hlds.term_constr_pass2. */
