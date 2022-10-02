/*
** Automatically generated from `tupling.m'
** by the Mercury compiler,
** version rotd-2022-10-02
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


// :- module transform_hlds.tupling.
// :- implementation.

/*
INIT mercury__transform_hlds__tupling__init
ENDINIT
*/

#include "transform_hlds.tupling.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "float.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.interval.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.live_vars.mih"
#include "ll_backend.liveness.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s {
  MR_bool transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14;
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19;
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVarArgPos_20;
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26;
  jmp_buf transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_82_82;
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32;
  MR_Box transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__conv1_Var_32;
};

struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s {
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13;
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14;
  MR_bool transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded;
  jmp_buf transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__commit_0;
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_80;
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeInfo_8_81;
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeProc_76;
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeKey_78;
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CallingKeys_79;
  MR_Box transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__conv1_CalleeProc_76;
};


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_tupling_proposal_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_costs_0_0[2];

static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_costs_0_0[2];

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_costs_0_0;

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_costs_0_0[1];

static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_costs_0[1];

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_costs_0[1];

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_costs_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0;

static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_count_info_0_0[8];

static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_count_info_0_0[8];

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_info_0[1];

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_count_state_0_0[4];

static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_count_state_0_0[4];

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_state_0_0;

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_state_0_0[1];

static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_state_0[1];

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_state_0[1];

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_state_0[1];

static const MR_EnumFunctorDesc transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0;

static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_ordinal_ordered_opt_tuple_alloc_0[1];

static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_name_ordered_opt_tuple_alloc_0[1];

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_opt_tuple_alloc_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_transformed_proc_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_transformed_proc_0_0[4];

static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_transformed_proc_0_0[4];

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_transformed_proc_0_0;

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_transformed_proc_0_0[1];

static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_transformed_proc_0[1];

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_transformed_proc_0[1];

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_transformed_proc_0[1];

static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_tuning_params_0_0[8];

static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_tuning_params_0_0[8];

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tuning_params_0_0;

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tuning_params_0_0[1];

static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tuning_params_0[1];

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tuning_params_0[1];

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tuning_params_0[1];

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_tupling_proposal_0_1[3];

static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_tupling_proposal_0_1[3];

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1;

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_1[1];

static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tupling_proposal_0[2];

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tupling_proposal_0[2];

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tupling_proposal_0[2];

static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1914__1_3_p_0(
  MR_Word ArgList_5,
  MR_Integer HeadVar__2_11,
  MR_Word * HeadVar__3_12);

static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__make_transformed_proc__716__1_4_p_0(
  MR_Word FieldVarsList_8,
  MR_Word LambdaHeadVar__1_34,
  MR_Word LambdaHeadVar__2_35,
  MR_Word * LambdaHeadVar__3_36);

static MR_Integer MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__add_transformed_proc__687__1_2_f_0(
  MR_Word HeadVars_36,
  MR_Word HeadVar__2_63);

static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__add_tupling_proposal__593__1_3_f_0(
  MR_Word PredProcId_10,
  MR_Word HeadVars_15,
  MR_Word LambdaHeadVar__1_29,
  MR_Word * LambdaHeadVar__2_30);

static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__521__1_3_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_22,
  MR_Word * HeadVar__3_23);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0(
  MR_Word * HeadVar__1_1);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0(void);

static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling__get_switch_total_count_2_5_p_0(
  MR_Word SwitchGoalPath_6,
  MR_Word PathPort_7,
  MR_Word LineNoAndCount_8,
  MR_Integer STATE_VARIABLE_TotalAcc_0_10,
  MR_Integer * STATE_VARIABLE_TotalAcc_11);

static void MR_CALL 
transform_hlds__tupling__get_proc_calls_2_p_0(
  MR_Word ProcCounts_3,
  MR_Integer * Count_4);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_p_0(
  MR_Word TransformMap_6,
  MR_Word HeadVar__2_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_p_0(
  MR_Word TransformMap_6,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_proc_4_p_0(
  MR_Word TransformMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_cases_7_p_0(
  MR_Word TransformMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_6,
  MR_Word * STATE_VARIABLE_RttiVarMaps_7);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_list_7_p_0(
  MR_Word TransformMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_6,
  MR_Word * STATE_VARIABLE_RttiVarMaps_7);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_conj_7_p_0(
  MR_Word TransformMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_6,
  MR_Word * STATE_VARIABLE_RttiVarMaps_7);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_7_p_0(
  MR_Word TransformMap_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarTable_0_76,
  MR_Word * STATE_VARIABLE_VarTable_77,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_78,
  MR_Word * STATE_VARIABLE_RttiVarMaps_79);

static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0(
  MR_Word ArgList_5,
  MR_Word Indices_6,
  MR_Word * Selected_7,
  MR_Word * NotSelected_8);

static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0(
  MR_Word TransformMap_5,
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__tupling__build_insert_map_2_7_p_0(
  MR_Word CellVar_8,
  MR_Word FieldVars_9,
  MR_Word FieldVarsSet_10,
  MR_Word Anchor_11,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_InsertMap_0_18,
  MR_Word * STATE_VARIABLE_InsertMap_19);

static void MR_CALL 
transform_hlds__tupling__combine_inserts_3_p_0(
  MR_Word A_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TuningParams_2,
  MR_Word Var_3,
  MR_Word STATE_VARIABLE_CountState_0_4,
  MR_Word * STATE_VARIABLE_CountState_5);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(
  MR_Word TraceCounts_11,
  MR_Word TuningParams_12,
  MR_Word ModuleInfo_13,
  MR_Word TuplingScheme_14,
  MR_Word ReverseGoalPathMapMap_15,
  MR_Word PredProcId_16,
  MR_Float STATE_VARIABLE_Loads_0_34,
  MR_Float * STATE_VARIABLE_Loads_35,
  MR_Float STATE_VARIABLE_Stores_0_36,
  MR_Float * STATE_VARIABLE_Stores_37);

static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0(
  MR_Word Goal_5,
  MR_Word CountInfo_6,
  MR_Word STATE_VARIABLE_CountState_0_112,
  MR_Word * STATE_VARIABLE_CountState_113);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_cases_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CountState_0_3,
  MR_Word * STATE_VARIABLE_CountState_4);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_disj_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CountState_0_3,
  MR_Word * STATE_VARIABLE_CountState_4);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CountState_0_3,
  MR_Word * STATE_VARIABLE_CountState_4);

static void MR_CALL 
transform_hlds__tupling__get_ite_relative_frequencies_6_p_0(
  MR_Word ProcCounts_7,
  MR_Word ReverseGoalPathMap_8,
  MR_Word ThenGoalId_9,
  MR_Word ElseGoalId_10,
  MR_Float * ThenRelFreq_11,
  MR_Float * ElseRelFreq_12);

static void MR_CALL 
transform_hlds__tupling__reset_count_state_counts_2_p_0(
  MR_Word STATE_VARIABLE_CountState_0_4,
  MR_Word * STATE_VARIABLE_CountState_5);

static void MR_CALL 
transform_hlds__tupling__cls_clobber_regs_3_p_0(
  MR_Word NewVars_4,
  MR_Word STATE_VARIABLE_CountState_0_6,
  MR_Word * STATE_VARIABLE_CountState_7);

static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0(
  MR_Word CountInfo_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_CountState_0_10,
  MR_Word * STATE_VARIABLE_CountState_11);

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0(
  MR_Word CountInfo_6,
  MR_Word DeconstructCellVar_7,
  MR_Word DeconstructFieldVars_8,
  MR_Word STATE_VARIABLE_State_0_18,
  MR_Word * STATE_VARIABLE_State_19);

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_CountState_0_8,
  MR_Word * STATE_VARIABLE_CountState_9);

static void MR_CALL 
transform_hlds__tupling__cls_require_in_reg_4_p_0(
  MR_Word CountInfo_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_CountState_0_12,
  MR_Word * STATE_VARIABLE_CountState_13);

static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0(
  MR_Word CountInfo_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_CountState_0_8,
  MR_Word * STATE_VARIABLE_CountState_9);

static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0(
  MR_Word ProcCounts_5,
  MR_Word ReverseGoalPathMap_6,
  MR_Word GoalId_7,
  MR_Float * RelFreq_8);

static void MR_CALL 
transform_hlds__tupling__get_disjunct_relative_frequency_4_p_0(
  MR_Word ProcCounts_5,
  MR_Word ReverseGoalPathMap_6,
  MR_Word GoalId_7,
  MR_Float * RelFreq_8);

static void MR_CALL 
transform_hlds__tupling__add_branch_costs_4_p_0(
  MR_Word BranchState_5,
  MR_Float Weight_6,
  MR_Word STATE_VARIABLE_CountState_0_16,
  MR_Word * STATE_VARIABLE_CountState_17);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0(
  MR_Word GoalExpr_6,
  MR_Word GoalInfo_7,
  MR_Word CountInfo_8,
  MR_Word STATE_VARIABLE_CountState_0_27,
  MR_Word * STATE_VARIABLE_CountState_28);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0(
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word CountInfo_9,
  MR_Word CalleeTuplingProposal_10,
  MR_Word STATE_VARIABLE_CountState_0_39,
  MR_Word * STATE_VARIABLE_CountState_40);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(
  MR_Word CountInfo_8,
  MR_Word Inputs_9,
  MR_Word Outputs_10,
  MR_Word MaybeNeedAcrossCall_11,
  MR_Word STATE_VARIABLE_CountState_0_19,
  MR_Word * STATE_VARIABLE_CountState_20);

static void MR_CALL 
transform_hlds__tupling__cls_require_normal_var_in_reg_4_p_0(
  MR_Word CountInfo_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_CountState_0_10,
  MR_Word * STATE_VARIABLE_CountState_11);

static void MR_CALL 
transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(
  MR_Integer LoadCost_5,
  MR_Word Var_6,
  MR_Word CountState0_7,
  MR_Word * CountState_8);

static void MR_CALL 
transform_hlds__tupling__prepare_proc_for_counting_5_p_0(
  MR_Word PredProcId_6,
  MR_Word STATE_VARIABLE_ReverseGoalPathMapMap_0_30,
  MR_Word * STATE_VARIABLE_ReverseGoalPathMapMap_31,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33);

static MR_Word MR_CALL 
transform_hlds__tupling__get_tupling_proposal_2_f_0(
  MR_Word CountInfo_4,
  MR_Word PredProcId_5);

static MR_Box MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0(
  MR_Word PredProcId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0(
  MR_Word CellVar_5,
  MR_Word FieldVars_6,
  MR_Word IntervalInfo_7,
  MR_Word * InsertMap_8);

static void MR_CALL 
transform_hlds__tupling__create_tupling_aux_pred_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word PredInfo_12,
  MR_Word ProcInfo_13,
  MR_Integer SeqNum_14,
  MR_Word * AuxPredProcId_15,
  MR_Word * CallAux_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43);

static MR_bool MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0(
  MR_Word InsertMap_6,
  MR_Word CellVar_7,
  MR_Word FieldVarsList_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_31,
  MR_Word * STATE_VARIABLE_ProcInfo_32);

static MR_bool MR_CALL 
transform_hlds__tupling__add_tupling_proposal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling__add_tupling_proposal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word CandidateHeadVars_8,
  MR_Integer MinArgsToTuple_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_TuplingScheme_0_26,
  MR_Word * STATE_VARIABLE_TuplingScheme_27);

static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0(
  MR_String HeadVarName_5,
  MR_Word ListOfOrigins_6,
  MR_Word CandidateHeadVars0_7,
  MR_Word * CandidateHeadVars_8);

static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_2_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word VarTable_9,
  MR_Word HeadVar_10,
  MR_Word ArgMode_11,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_individual_procs_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6,
  MR_Word STATE_VARIABLE_Counter_0_7,
  MR_Word * STATE_VARIABLE_Counter_8,
  MR_Word STATE_VARIABLE_TransformMap_0_9,
  MR_Word * STATE_VARIABLE_TransformMap_10);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0(
  MR_Word TraceCounts_11,
  MR_Word TuningParams_12,
  MR_Word DepGraph_13,
  MR_Word SCC_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Counter_0_30,
  MR_Word * STATE_VARIABLE_Counter_31,
  MR_Word STATE_VARIABLE_TransformMap_0_32,
  MR_Word * STATE_VARIABLE_TransformMap_33);

static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_2,
  MR_Word * CandidateHeadVars_8);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0(
  MR_Word TraceCounts_12,
  MR_Word TuningParams_13,
  MR_Word PredProcIds_14,
  MR_Word CandidateHeadVars_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Counter_0_28,
  MR_Word * STATE_VARIABLE_Counter_29,
  MR_Word STATE_VARIABLE_TransformMap_0_30,
  MR_Word * STATE_VARIABLE_TransformMap_31,
  MR_Word VeryVerbose_19);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_3_13_p_0(
  MR_Word TraceCounts_14,
  MR_Word TuningParams_15,
  MR_Word ReverseGoalPathMapMap_16,
  MR_Word SCC_17,
  MR_Word CandidateHeadVars_18,
  MR_Word CostsWithoutTupling_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Counter_0_33,
  MR_Word * STATE_VARIABLE_Counter_34,
  MR_Word STATE_VARIABLE_TransformMap_0_35,
  MR_Word * STATE_VARIABLE_TransformMap_36,
  MR_Word VeryVerbose_23);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_p_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word Var_26,
  MR_Word HeadVar__2_2,
  MR_Integer MinLength_3,
  MR_Word STATE_VARIABLE_Acc_0_4,
  MR_Word * STATE_VARIABLE_Acc_5);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Word Var_20,
  MR_Word Var_21,
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word List_7,
  MR_Integer Length_8,
  MR_Word STATE_VARIABLE_Acc_0_11,
  MR_Word * STATE_VARIABLE_Acc_12);

static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0(
  MR_Word TraceCounts_9,
  MR_Word TuningParams_10,
  MR_Word ModuleInfo_11,
  MR_Word ReverseGoalPathMapMap_12,
  MR_Word SCC_13,
  MR_Word CandidateHeadVars_14,
  MR_Word MaybeBestScheme0_15,
  MR_Word * MaybeBestScheme_16);

static void MR_CALL 
transform_hlds__tupling__add_transformed_procs_7_p_0_1(
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
transform_hlds__tupling__add_transformed_procs_7_p_0(
  MR_Word TuplingScheme_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word STATE_VARIABLE_Counter_0_14,
  MR_Word * STATE_VARIABLE_Counter_15,
  MR_Word STATE_VARIABLE_TransformMap_0_16,
  MR_Word * STATE_VARIABLE_TransformMap_17);

static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word TraceCounts0_5);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_transformed_procs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_transformed_procs_3_p_0(
  MR_Word TransformMap_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);


static /* final */ const MR_Box transform_hlds__tupling_scalar_common_1[14][2];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_2[16][3];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_3[5][1];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_4[4][8];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_5[2][13];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_6[7][7];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_7[1][11];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_8[2][9];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_9[5][6];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_10[1][10];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_11[1][5];




static /* final */ const MR_Box transform_hlds__tupling_scalar_common_1[14][2] = {
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
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_2[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_2[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__transform_hlds__tupling__opt_tuple_alloc__arity0__)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_opt_tuple_alloc_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[7]))
  },
  /* row   9 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__unit__unit__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[1]))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_2[6]))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_2[16][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_2[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_2[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[1])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[10]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__tupling__add_transformed_procs_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_10_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_9[2])),
    ((MR_Box) (transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_11[0])),
    ((MR_Box) (transform_hlds__tupling__count_load_stores_in_goal_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_11[0])),
    ((MR_Box) (transform_hlds__tupling__count_load_stores_in_goal_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_3[5][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row   3 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_4[4][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tuning_params_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_5[2][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tuning_params_0)),
    ((MR_Box) (&transform_hlds__tupling__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tuning_params_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_tupling_proposal_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_6[7][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&transform_hlds__tupling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_info_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_8[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_tupling_proposal_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_tupling_proposal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__tupling__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_9[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_10[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_11[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0),
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_tupling_proposal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0),
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_candidate_headvar_origins_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____candidate_headvar_origins_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____candidate_headvar_origins_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "candidate_headvar_origins",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_candidate_headvars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____candidate_headvars_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____candidate_headvars_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "candidate_headvars",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__tupling__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_costs_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_costs_0_0[2] = {
  (MR_String) "avg_loads",
  (MR_String) "avg_stores"
};

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_costs_0_0 = {
  (MR_String) "costs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__tupling__transform_hlds__tupling__field_types_costs_0_0,
  transform_hlds__tupling__transform_hlds__tupling__field_names_costs_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_costs_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_costs_0_0
};

static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_costs_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_costs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_costs_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_costs_0_0
};

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_costs_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_costs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____costs_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____costs_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "costs",
  { transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_costs_0 },
  { transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_costs_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_costs_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_count_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0),
  (MR_PseudoTypeInfo) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tuning_params_0),
  (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0),
  (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
};

static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_count_info_0_0[8] = {
  (MR_String) "ci_module",
  (MR_String) "ci_pred_proc_id",
  (MR_String) "ci_pred_info",
  (MR_String) "ci_proc_info",
  (MR_String) "ci_proc_counts",
  (MR_String) "ci_params",
  (MR_String) "ci_tupling_scheme",
  (MR_String) "ci_rev_goal_path_map"
};

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_info_0_0 = {
  (MR_String) "count_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__tupling__transform_hlds__tupling__field_types_count_info_0_0,
  transform_hlds__tupling__transform_hlds__tupling__field_names_count_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_info_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_info_0_0
};

static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_info_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_info_0_0
};

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____count_info_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____count_info_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "count_info",
  { transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_info_0 },
  { transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_info_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_count_state_0_0[4] = {
  (MR_PseudoTypeInfo) (&transform_hlds__tupling__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__tupling__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_count_state_0_0[4] = {
  (MR_String) "cs_reg_vars",
  (MR_String) "cs_stack_vars",
  (MR_String) "cs_load_costs",
  (MR_String) "cs_store_costs"
};

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_state_0_0 = {
  (MR_String) "count_state",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__tupling__transform_hlds__tupling__field_types_count_state_0_0,
  transform_hlds__tupling__transform_hlds__tupling__field_names_count_state_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_state_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_state_0_0
};

static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_state_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_state_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_state_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_state_0_0
};

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_state_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____count_state_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____count_state_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "count_state",
  { transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_state_0 },
  { transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_state_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_state_0,

};

static const MR_EnumFunctorDesc transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0 = {
  (MR_String) "opt_tuple_alloc",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_ordinal_ordered_opt_tuple_alloc_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0
};

static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_name_ordered_opt_tuple_alloc_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0
};

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_opt_tuple_alloc_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_opt_tuple_alloc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__tupling____Unify____opt_tuple_alloc_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____opt_tuple_alloc_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "opt_tuple_alloc",
  { transform_hlds__tupling__transform_hlds__tupling__enum_name_ordered_opt_tuple_alloc_0 },
  { transform_hlds__tupling__transform_hlds__tupling__enum_ordinal_ordered_opt_tuple_alloc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_opt_tuple_alloc_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transform_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____transform_map_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____transform_map_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "transform_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_transformed_proc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_transformed_proc_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__tupling__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_transformed_proc_0_0[4] = {
  (MR_String) "transformed_pred_proc_id",
  (MR_String) "tuple_cons_type",
  (MR_String) "args_to_tuple",
  (MR_String) "call_template"
};

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_transformed_proc_0_0 = {
  (MR_String) "transformed_proc",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__tupling__transform_hlds__tupling__field_types_transformed_proc_0_0,
  transform_hlds__tupling__transform_hlds__tupling__field_names_transformed_proc_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_transformed_proc_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_transformed_proc_0_0
};

static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_transformed_proc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_transformed_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_transformed_proc_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_transformed_proc_0_0
};

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_transformed_proc_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____transformed_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____transformed_proc_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "transformed_proc",
  { transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_transformed_proc_0 },
  { transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_transformed_proc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_transformed_proc_0,

};

static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_tuning_params_0_0[8] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_tuning_params_0_0[8] = {
  (MR_String) "tp_normal_var_load_cost",
  (MR_String) "tp_normal_var_store_cost",
  (MR_String) "tp_cell_var_load_cost",
  (MR_String) "tp_cell_var_store_cost",
  (MR_String) "tp_field_var_load_cost",
  (MR_String) "tp_field_var_store_cost",
  (MR_String) "tp_costs_ratio",
  (MR_String) "tp_min_args_to_tuple"
};

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tuning_params_0_0 = {
  (MR_String) "tuning_params",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__tupling__transform_hlds__tupling__field_types_tuning_params_0_0,
  transform_hlds__tupling__transform_hlds__tupling__field_names_tuning_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tuning_params_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tuning_params_0_0
};

static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tuning_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tuning_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tuning_params_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tuning_params_0_0
};

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tuning_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tuning_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____tuning_params_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____tuning_params_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "tuning_params",
  { transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tuning_params_0 },
  { transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tuning_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tuning_params_0,

};

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0 = {
  (MR_String) "no_tupling",
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__tupling__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_tupling_proposal_0_1[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__tupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__tupling__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_tupling_proposal_0_1[3] = {
  (MR_String) "cell_var",
  (MR_String) "field_vars",
  (MR_String) "field_var_arg_pos"
};

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1 = {
  (MR_String) "tupling",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__tupling__transform_hlds__tupling__field_types_tupling_proposal_0_1,
  transform_hlds__tupling__transform_hlds__tupling__field_names_tupling_proposal_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_1[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1
};

static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tupling_proposal_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tupling_proposal_0[2] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0,
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1
};

static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tupling_proposal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____tupling_proposal_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____tupling_proposal_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "tupling_proposal",
  { transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tupling_proposal_0 },
  { transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tupling_proposal_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tupling_proposal_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_scheme_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____tupling_scheme_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____tupling_scheme_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "tupling_scheme",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_BaseTypeclassInfo base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__transform_hlds__tupling__opt_tuple_alloc__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001)),
  ((MR_Box) (transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001)),
  ((MR_Box) (transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001)),
  ((MR_Box) (transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__unit__unit__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0_10001))
};

static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1914__1_3_p_0(
  MR_Word ArgList_5,
  MR_Integer HeadVar__2_11,
  MR_Word * HeadVar__3_12)
{
  MR_Box conv0_HeadVar__3_12;

  mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), ArgList_5, HeadVar__2_11, &conv0_HeadVar__3_12);
  *HeadVar__3_12 = ((MR_Word) (conv0_HeadVar__3_12));
}

static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__make_transformed_proc__716__1_4_p_0(
  MR_Word FieldVarsList_8,
  MR_Word LambdaHeadVar__1_34,
  MR_Word LambdaHeadVar__2_35,
  MR_Word * LambdaHeadVar__3_36)
{
  MR_bool succeeded;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), ((MR_Box) (LambdaHeadVar__1_34)), FieldVarsList_8);
  succeeded = !(succeeded);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__3_36 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LambdaHeadVar__1_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LambdaHeadVar__2_35));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Integer MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__add_transformed_proc__687__1_2_f_0(
  MR_Word HeadVars_36,
  MR_Word HeadVar__2_63)
{
  MR_Integer HeadVar__3_64;

  HeadVar__3_64 = mercury__list__det_index1_of_first_occurrence_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), HeadVars_36, ((MR_Box) (HeadVar__2_63)));
  return HeadVar__3_64;
}

static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__add_tupling_proposal__593__1_3_f_0(
  MR_Word PredProcId_10,
  MR_Word HeadVars_15,
  MR_Word LambdaHeadVar__1_29,
  MR_Word * LambdaHeadVar__2_30)
{
  MR_bool succeeded;
  MR_Word Var_19;
  MR_Integer Pos_20;
  MR_Word Annotation_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_29, (MR_Integer) 1))));
  MR_Box conv0_Var_19;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), Annotation_38, ((MR_Box) (PredProcId_10)), &conv0_Var_19);
  if (succeeded)
  {
    Var_19 = ((MR_Word) (conv0_Var_19));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), HeadVars_15, ((MR_Box) (Var_19)), &Pos_20);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *LambdaHeadVar__2_30 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Pos_20));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__521__1_3_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_22,
  MR_Word * HeadVar__3_23)
{
  mercury__map__old_merge_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), HeadVar__1_21, HeadVar__2_22, HeadVar__3_23);
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  *HeadVar__6_6 = HeadVar__5_5;
}

static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
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
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_12;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), &SubResult1_12, ((MR_Box) (Var_25)), ((MR_Box) (ArgY1_11)));
      succeeded = (SubResult1_12 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_12;
      else
      {
        MR_Word SubResult2_15;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[12]), &SubResult2_15, ((MR_Box) (Var_24)), ((MR_Box) (ArgY2_14)));
        succeeded = (SubResult2_15 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_15;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[13]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY3_17)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      TypeInfo_13_13 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[12]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[13]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0(
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
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[11]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[11]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0(
  MR_Word * HeadVar__1_1)
{
  transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0(void)
{
  return MR_TRUE;
}

static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0(
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
    MR_Float ArgX3_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
    MR_Float ArgY3_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
    MR_Float ArgX4_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
    MR_Float ArgY4_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[7]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
    MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    MR_Float ArgY4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
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

static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
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
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
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

        hlds__hlds_pred____Compare____pred_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          hlds__hlds_pred____Compare____proc_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[9]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              transform_hlds__tupling____Compare____tuning_params_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[5]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
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
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
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
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
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

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX7_22 > ArgY7_23);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  succeeded = (ArgX8_25 < ArgY8_26);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX8_25 > ArgY8_26);
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
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
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
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) (&transform_hlds__tupling_scalar_common_2[9]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = transform_hlds__tupling____Unify____tuning_params_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&transform_hlds__tupling_scalar_common_2[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) (&transform_hlds__tupling_scalar_common_2[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                  succeeded = (ArgX8_17 == ArgY8_18);
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
transform_hlds__tupling____Compare____costs_0_0(
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
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Float ArgX2_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Float ArgY2_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0(
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
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgX2_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Float ArgY2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling__get_switch_total_count_2_5_p_0(
  MR_Word SwitchGoalPath_6,
  MR_Word PathPort_7,
  MR_Word LineNoAndCount_8,
  MR_Integer STATE_VARIABLE_TotalAcc_0_10,
  MR_Integer * STATE_VARIABLE_TotalAcc_11)
{
  MR_bool succeeded = ((MR_tag((MR_Word) PathPort_7)) == (MR_Integer) 1);
  MR_Word LastStep_17;
  MR_Word Var_20;

  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PathPort_7, (MR_Integer) 0))));
    succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(SwitchGoalPath_6, Var_20);
    if (succeeded)
    {
      succeeded = (SwitchGoalPath_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        LastStep_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SwitchGoalPath_6, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) LastStep_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), LastStep_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LineNoAndCount_8, (MR_Integer) 1))));

    *STATE_VARIABLE_TotalAcc_11 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalAcc_0_10 + (MR_Unsigned) Var_13);
  }
  else
    *STATE_VARIABLE_TotalAcc_11 = STATE_VARIABLE_TotalAcc_0_10;
}

static void MR_CALL 
transform_hlds__tupling__get_proc_calls_2_p_0(
  MR_Word ProcCounts_3,
  MR_Integer * Count_4)
{
  MR_Word ContextCount_5;
  MR_Box conv0_ContextCount_5;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcCounts_3, ((MR_Box) (&transform_hlds__tupling_scalar_common_3[3])), &conv0_ContextCount_5);
  ContextCount_5 = ((MR_Word) (conv0_ContextCount_5));
  *Count_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ContextCount_5, (MR_Integer) 1))));
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_p_0(
  MR_Word TransformMap_6,
  MR_Word HeadVar__2_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_p_0(TransformMap_6, HeadVar__3_3, STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14);
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_p_0(
  MR_Word TransformMap_6,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  MR_Word PredProcId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

  transform_hlds__tupling__fix_calls_in_proc_4_p_0(TransformMap_6, PredProcId_8, STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14);
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_proc_4_p_0(
  MR_Word TransformMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  MR_bool succeeded;
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word PredInfo_10;
  MR_Word Origin_11;
  MR_Word STATE_VARIABLE_ProcInfo_24_24;
  MR_Word PredTransform_12;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_22, PredId_6, ProcId_7, &PredInfo_10, &STATE_VARIABLE_ProcInfo_24_24);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &Origin_11);
  succeeded = ((MR_tag((MR_Word) Origin_11)) == (MR_Integer) 2);
  if (succeeded)
  {
    PredTransform_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_11, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) PredTransform_12)) == (MR_Integer) 1);
    if (succeeded)
    {
    }
  }
  if (succeeded)
    *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
  else
  {
    MR_Word Goal0_16;
    MR_Word VarTable0_17;
    MR_Word RttiVarMaps0_18;
    MR_Word Goal_19;
    MR_Word VarTable_20;
    MR_Word RttiVarMaps_21;
    MR_Word STATE_VARIABLE_ProcInfo_25_25;
    MR_Word STATE_VARIABLE_ProcInfo_26_26;
    MR_Word STATE_VARIABLE_ProcInfo_27_27;
    MR_Word STATE_VARIABLE_ProcInfo_29_29;
    MR_Word STATE_VARIABLE_ProcInfo_31_31;
    MR_Word STATE_VARIABLE_ModuleInfo_32_32;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_24_24, &Goal0_16);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_24_24, &VarTable0_17);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_24_24, &RttiVarMaps0_18);
    transform_hlds__tupling__fix_calls_in_goal_7_p_0(TransformMap_5, Goal0_16, &Goal_19, VarTable0_17, &VarTable_20, RttiVarMaps0_18, &RttiVarMaps_21);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_19, STATE_VARIABLE_ProcInfo_24_24, &STATE_VARIABLE_ProcInfo_25_25);
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_20, STATE_VARIABLE_ProcInfo_25_25, &STATE_VARIABLE_ProcInfo_26_26);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_21, STATE_VARIABLE_ProcInfo_26_26, &STATE_VARIABLE_ProcInfo_27_27);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_27_27, &STATE_VARIABLE_ProcInfo_29_29);
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_29_29, &STATE_VARIABLE_ProcInfo_31_31, STATE_VARIABLE_ModuleInfo_0_22, &STATE_VARIABLE_ModuleInfo_32_32);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_6, ProcId_7, PredInfo_10, STATE_VARIABLE_ProcInfo_31_31, STATE_VARIABLE_ModuleInfo_32_32, STATE_VARIABLE_ModuleInfo_23);
  }
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_cases_7_p_0(
  MR_Word TransformMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_6,
  MR_Word * STATE_VARIABLE_RttiVarMaps_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RttiVarMaps_7 = STATE_VARIABLE_RttiVarMaps_0_6;
    *STATE_VARIABLE_VarTable_5 = STATE_VARIABLE_VarTable_0_4;
  }
  else
  {
    MR_Word Case0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_18;
    MR_Word Cases_19;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_VarTable_30_30;
    MR_Word STATE_VARIABLE_RttiVarMaps_31_31;

    transform_hlds__tupling__fix_calls_in_goal_7_p_0(TransformMap_1, Goal0_24, &Goal_25, STATE_VARIABLE_VarTable_0_4, &STATE_VARIABLE_VarTable_30_30, STATE_VARIABLE_RttiVarMaps_0_6, &STATE_VARIABLE_RttiVarMaps_31_31);
    {
      Case_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_18, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(MR_mktag(0), Case_18, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(MR_mktag(0), Case_18, 2) = ((MR_Box) (Goal_25));
    }
    transform_hlds__tupling__fix_calls_in_cases_7_p_0(TransformMap_1, Cases0_17, &Cases_19, STATE_VARIABLE_VarTable_30_30, STATE_VARIABLE_VarTable_5, STATE_VARIABLE_RttiVarMaps_31_31, STATE_VARIABLE_RttiVarMaps_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_19));
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_list_7_p_0(
  MR_Word TransformMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_6,
  MR_Word * STATE_VARIABLE_RttiVarMaps_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RttiVarMaps_7 = STATE_VARIABLE_RttiVarMaps_0_6;
    *STATE_VARIABLE_VarTable_5 = STATE_VARIABLE_VarTable_0_4;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word STATE_VARIABLE_VarTable_26_26;
    MR_Word STATE_VARIABLE_RttiVarMaps_27_27;

    transform_hlds__tupling__fix_calls_in_goal_7_p_0(TransformMap_1, Goal0_16, &Goal_18, STATE_VARIABLE_VarTable_0_4, &STATE_VARIABLE_VarTable_26_26, STATE_VARIABLE_RttiVarMaps_0_6, &STATE_VARIABLE_RttiVarMaps_27_27);
    transform_hlds__tupling__fix_calls_in_goal_list_7_p_0(TransformMap_1, Goals0_17, &Goals_19, STATE_VARIABLE_VarTable_26_26, STATE_VARIABLE_VarTable_5, STATE_VARIABLE_RttiVarMaps_27_27, STATE_VARIABLE_RttiVarMaps_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_19));
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_conj_7_p_0(
  MR_Word TransformMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_6,
  MR_Word * STATE_VARIABLE_RttiVarMaps_7)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RttiVarMaps_7 = STATE_VARIABLE_RttiVarMaps_0_6;
    *STATE_VARIABLE_VarTable_5 = STATE_VARIABLE_VarTable_0_4;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal1_21;
    MR_Word Goals1_22;
    MR_Word STATE_VARIABLE_VarTable_29_29;
    MR_Word STATE_VARIABLE_RttiVarMaps_30_30;
    MR_Word ConjGoals_23;
    MR_Word Var_33;
    MR_Word Var_34;

    transform_hlds__tupling__fix_calls_in_goal_7_p_0(TransformMap_1, Goal0_16, &Goal1_21, STATE_VARIABLE_VarTable_0_4, &STATE_VARIABLE_VarTable_29_29, STATE_VARIABLE_RttiVarMaps_0_6, &STATE_VARIABLE_RttiVarMaps_30_30);
    transform_hlds__tupling__fix_calls_in_conj_7_p_0(TransformMap_1, Goals0_17, &Goals1_22, STATE_VARIABLE_VarTable_29_29, STATE_VARIABLE_VarTable_5, STATE_VARIABLE_RttiVarMaps_30_30, STATE_VARIABLE_RttiVarMaps_7);
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_21, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_33, (MR_Integer) 1))) & (MR_Integer) 1);
      ConjGoals_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_33, (MR_Integer) 2))));
      succeeded = (Var_34 == (MR_Integer) 0);
    }
    if (succeeded)
      *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConjGoals_23, Goals1_22);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal1_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_22));
      }
  }
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_7_p_0(
  MR_Word TransformMap_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarTable_0_76,
  MR_Word * STATE_VARIABLE_VarTable_77,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_78,
  MR_Word * STATE_VARIABLE_RttiVarMaps_79)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_55 = (MR_Word) ((MR_Word) (GoalExpr0_13));
        MR_Word SubGoal_56;
        MR_Word GoalExpr_57;

        transform_hlds__tupling__fix_calls_in_goal_7_p_0(TransformMap_8, SubGoal0_55, &SubGoal_56, STATE_VARIABLE_VarTable_0_76, STATE_VARIABLE_VarTable_77, STATE_VARIABLE_RttiVarMaps_0_78, STATE_VARIABLE_RttiVarMaps_79);
        GoalExpr_57 = (MR_Word) ((MR_Word) (SubGoal_56));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_57));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *Goal_10 = Goal0_9;
        *STATE_VARIABLE_VarTable_77 = STATE_VARIABLE_VarTable_0_76;
        *STATE_VARIABLE_RttiVarMaps_79 = STATE_VARIABLE_RttiVarMaps_0_78;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CalledPredId0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 0))));
        MR_Integer CalledProcId0_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 1))));
        MR_Word Args0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 2))));
        MR_Word Builtin_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word TupleConsType_40;
        MR_Word ArgsToTuple_41;
        MR_Word CallAux0_42;
        MR_Word CallAuxInfo_43;
        MR_Word TypeCtorInfo_135_135;
        MR_Word TypeCtorInfo_136_136;
        MR_Word TransformedProc_38;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Box conv0_TransformedProc_38;

        succeeded = (Builtin_35 == (MR_Integer) 1);
        if (succeeded)
        {
          TypeCtorInfo_135_135 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
          TypeCtorInfo_136_136 = (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0);
          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (CalledPredId0_32));
            MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (CalledProcId0_33));
          }
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_135_135, TypeCtorInfo_136_136, TransformMap_8, ((MR_Box) (Var_80)), &conv0_TransformedProc_38);
          if (succeeded)
          {
            TransformedProc_38 = ((MR_Word) (conv0_TransformedProc_38));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            TupleConsType_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TransformedProc_38, (MR_Integer) 1))));
            ArgsToTuple_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TransformedProc_38, (MR_Integer) 2))));
            Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TransformedProc_38, (MR_Integer) 3))));
            CallAux0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_81, (MR_Integer) 0))));
            CallAuxInfo_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_81, (MR_Integer) 1))));
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word CellVarEntry_44;
          MR_Word CellVar_45;
          MR_Word TupledArgs_46;
          MR_Word UntupledArgs_47;
          MR_Word ConstructGoal_48;
          MR_Word CallGoal_51;
          MR_Word Goal1_52;
          MR_Word RequantifyVars_53;
          MR_Word STATE_VARIABLE_VarTable_84_84;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_92;
          MR_Word CallAux_50;
          MR_Word NewArgs_49;
          MR_Word Var_85;
          MR_Word Var_129;
          MR_Integer Var_130;
          MR_Word Var_132;
          MR_Word Var_133;
          MR_Word Var_134;
          MR_Word Var_54;

          {
            CellVarEntry_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CellVarEntry_44, 0) = ((MR_Box) ((MR_String) "TuplingCellVarForCall"));
            MR_hl_field(MR_mktag(0), CellVarEntry_44, 1) = ((MR_Box) (TupleConsType_40));
            MR_hl_field(MR_mktag(0), CellVarEntry_44, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          parse_tree__var_table__add_var_entry_4_p_0(CellVarEntry_44, &CellVar_45, STATE_VARIABLE_VarTable_0_76, &STATE_VARIABLE_VarTable_84_84);
          transform_hlds__tupling__extract_tupled_args_from_list_4_p_0(Args0_34, ArgsToTuple_41, &TupledArgs_46, &UntupledArgs_47);
          hlds__make_goal__construct_tuple_3_p_0(CellVar_45, TupledArgs_46, &ConstructGoal_48);
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (CellVar_45));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          NewArgs_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), UntupledArgs_47, Var_85);
          succeeded = ((MR_tag((MR_Word) CallAux0_42)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallAux0_42, (MR_Integer) 0))));
            Var_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), CallAux0_42, (MR_Integer) 1))));
            Var_132 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), CallAux0_42, (MR_Integer) 3))) & (MR_Integer) 1);
            Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallAux0_42, (MR_Integer) 4))));
            Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallAux0_42, (MR_Integer) 5))));
            {
              CallAux_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), CallAux_50, 0) = ((MR_Box) (Var_129));
              MR_hl_field(MR_mktag(2), CallAux_50, 1) = ((MR_Box) (Var_130));
              MR_hl_field(MR_mktag(2), CallAux_50, 2) = ((MR_Box) (NewArgs_49));
              MR_hl_field(MR_mktag(2), CallAux_50, 3) = (MR_Box) ((MR_Unsigned) (Var_132));
              MR_hl_field(MR_mktag(2), CallAux_50, 4) = ((MR_Box) (Var_133));
              MR_hl_field(MR_mktag(2), CallAux_50, 5) = ((MR_Box) (Var_134));
            }
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              CallGoal_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CallGoal_51, 0) = ((MR_Box) (CallAux_50));
              MR_hl_field(MR_mktag(0), CallGoal_51, 1) = ((MR_Box) (CallAuxInfo_43));
            }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.fix_calls_in_goal\'/7", (MR_String) "not a call template");
              return;
            }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (CallGoal_51));
            MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (ConstructGoal_48));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
          }
          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_89, GoalInfo0_14, &Goal1_52);
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (CellVar_45));
            MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Args0_34));
          }
          RequantifyVars_53 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_92);
          hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 1, RequantifyVars_53, &Var_54, Goal1_52, Goal_10, STATE_VARIABLE_VarTable_84_84, STATE_VARIABLE_VarTable_77, STATE_VARIABLE_RttiVarMaps_0_78, STATE_VARIABLE_RttiVarMaps_79);
        }
        else
        {
          *Goal_10 = Goal0_9;
          *STATE_VARIABLE_RttiVarMaps_79 = STATE_VARIABLE_RttiVarMaps_0_78;
          *STATE_VARIABLE_VarTable_77 = STATE_VARIABLE_VarTable_0_76;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            *Goal_10 = Goal0_9;
            *STATE_VARIABLE_VarTable_77 = STATE_VARIABLE_VarTable_0_76;
            *STATE_VARIABLE_RttiVarMaps_79 = STATE_VARIABLE_RttiVarMaps_0_78;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
            MR_Word Goals_63;
            MR_Word GoalExpr_123;

            switch (ConjType_61) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                transform_hlds__tupling__fix_calls_in_goal_list_7_p_0(TransformMap_8, Goals0_62, &Goals_63, STATE_VARIABLE_VarTable_0_76, STATE_VARIABLE_VarTable_77, STATE_VARIABLE_RttiVarMaps_0_78, STATE_VARIABLE_RttiVarMaps_79);
                break;
              case (MR_Integer) 0:
                transform_hlds__tupling__fix_calls_in_conj_7_p_0(TransformMap_8, Goals0_62, &Goals_63, STATE_VARIABLE_VarTable_0_76, STATE_VARIABLE_VarTable_77, STATE_VARIABLE_RttiVarMaps_0_78, STATE_VARIABLE_RttiVarMaps_79);
                break;
            }
            {
              GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_123, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), GoalExpr_123, 1) = (MR_Box) ((MR_Unsigned) (ConjType_61));
              MR_hl_field(MR_mktag(3), GoalExpr_123, 2) = ((MR_Box) (Goals_63));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_123));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GoalExpr_124;
            MR_Word Goals0_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word Goals_126;

            transform_hlds__tupling__fix_calls_in_goal_list_7_p_0(TransformMap_8, Goals0_125, &Goals_126, STATE_VARIABLE_VarTable_0_76, STATE_VARIABLE_VarTable_77, STATE_VARIABLE_RttiVarMaps_0_78, STATE_VARIABLE_RttiVarMaps_79);
            {
              GoalExpr_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_124, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), GoalExpr_124, 1) = ((MR_Box) (Goals_126));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_124));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word CanFail_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
            MR_Word Cases_67;
            MR_Word GoalExpr_127;

            transform_hlds__tupling__fix_calls_in_cases_7_p_0(TransformMap_8, Cases0_66, &Cases_67, STATE_VARIABLE_VarTable_0_76, STATE_VARIABLE_VarTable_77, STATE_VARIABLE_RttiVarMaps_0_78, STATE_VARIABLE_RttiVarMaps_79);
            {
              GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_127, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), GoalExpr_127, 1) = ((MR_Box) (Var_64));
              MR_hl_field(MR_mktag(3), GoalExpr_127, 2) = (MR_Box) ((MR_Unsigned) (CanFail_65));
              MR_hl_field(MR_mktag(3), GoalExpr_127, 3) = ((MR_Box) (Cases_67));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_127));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word SubGoal0_120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
            MR_Word FGT_60;

            succeeded = ((((MR_tag((MR_Word) Reason_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 2))) & (MR_Integer) 3);
              switch (FGT_60) {
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
              *Goal_10 = Goal0_9;
              *STATE_VARIABLE_RttiVarMaps_79 = STATE_VARIABLE_RttiVarMaps_0_78;
              *STATE_VARIABLE_VarTable_77 = STATE_VARIABLE_VarTable_0_76;
            }
            else
            {
              MR_Word SubGoal_116;
              MR_Word GoalExpr_117;

              transform_hlds__tupling__fix_calls_in_goal_7_p_0(TransformMap_8, SubGoal0_120, &SubGoal_116, STATE_VARIABLE_VarTable_0_76, STATE_VARIABLE_VarTable_77, STATE_VARIABLE_RttiVarMaps_0_78, STATE_VARIABLE_RttiVarMaps_79);
              {
                GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_117, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_117, 1) = ((MR_Box) (Reason_58));
                MR_hl_field(MR_mktag(3), GoalExpr_117, 2) = ((MR_Box) (SubGoal_116));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_117));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word Cond0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
            MR_Word Then0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
            MR_Word Else0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 4))));
            MR_Word Cond_72;
            MR_Word Then_73;
            MR_Word Else_74;
            MR_Word STATE_VARIABLE_VarTable_108_108;
            MR_Word STATE_VARIABLE_RttiVarMaps_109_109;
            MR_Word STATE_VARIABLE_VarTable_110_110;
            MR_Word STATE_VARIABLE_RttiVarMaps_111_111;
            MR_Word GoalExpr_128;

            transform_hlds__tupling__fix_calls_in_goal_7_p_0(TransformMap_8, Cond0_69, &Cond_72, STATE_VARIABLE_VarTable_0_76, &STATE_VARIABLE_VarTable_108_108, STATE_VARIABLE_RttiVarMaps_0_78, &STATE_VARIABLE_RttiVarMaps_109_109);
            transform_hlds__tupling__fix_calls_in_goal_7_p_0(TransformMap_8, Then0_70, &Then_73, STATE_VARIABLE_VarTable_108_108, &STATE_VARIABLE_VarTable_110_110, STATE_VARIABLE_RttiVarMaps_109_109, &STATE_VARIABLE_RttiVarMaps_111_111);
            transform_hlds__tupling__fix_calls_in_goal_7_p_0(TransformMap_8, Else0_71, &Else_74, STATE_VARIABLE_VarTable_110_110, STATE_VARIABLE_VarTable_77, STATE_VARIABLE_RttiVarMaps_111_111, STATE_VARIABLE_RttiVarMaps_79);
            {
              GoalExpr_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_128, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), GoalExpr_128, 1) = ((MR_Box) (Vars_68));
              MR_hl_field(MR_mktag(3), GoalExpr_128, 2) = ((MR_Box) (Cond_72));
              MR_hl_field(MR_mktag(3), GoalExpr_128, 3) = ((MR_Box) (Then_73));
              MR_hl_field(MR_mktag(3), GoalExpr_128, 4) = ((MR_Box) (Else_74));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_128));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.fix_calls_in_goal\'/7", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_12;

  transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1914__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__3_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_12));
}

static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0(
  MR_Word ArgList_5,
  MR_Word Indices_6,
  MR_Word * Selected_7,
  MR_Word * NotSelected_8)
{
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_9[4]));
    MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (transform_hlds__tupling__extract_tupled_args_from_list_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (ArgList_5));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), Var_9, Indices_6, Selected_7);
  transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(ArgList_5, (MR_Integer) 1, Indices_6, NotSelected_8);
}

static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word H_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3);
      if (succeeded)
      {
        MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
        MR_Word next_value_of_HeadVar__1_1 = T_8;
        MR_Integer next_value_of_HeadVar__2_2 = Var_13;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word NotSelectedTail_12;
        MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);

        transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(T_8, Var_15, HeadVar__3_3, &NotSelectedTail_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (H_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NotSelectedTail_12));
        }
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_23;

  transform_hlds__tupling__fix_calls_in_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_23);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_23));
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0(
  MR_Word TransformMap_5,
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word Var_10;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[6]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__tupling__fix_calls_in_procs_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (TransformMap_5));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, SCC_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
  *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
}

static void MR_CALL 
transform_hlds__tupling__build_insert_map_2_7_p_0(
  MR_Word CellVar_8,
  MR_Word FieldVars_9,
  MR_Word FieldVarsSet_10,
  MR_Word Anchor_11,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_InsertMap_0_18,
  MR_Word * STATE_VARIABLE_InsertMap_19)
{
  MR_bool succeeded;
  MR_Word FollowVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
  MR_Word NeededFieldVars_15;

  NeededFieldVars_15 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FieldVarsSet_10, FollowVars_12);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededFieldVars_15);
  if (succeeded)
    *STATE_VARIABLE_InsertMap_19 = STATE_VARIABLE_InsertMap_0_18;
  else
  {
    MR_Word Goal_16;
    MR_Word InsertSpec_17;
    MR_Word InsertSpecs0_21;
    MR_Box conv0_InsertSpecs0_21;

    hlds__make_goal__deconstruct_tuple_3_p_0(CellVar_8, FieldVars_9, &Goal_16);
    {
      InsertSpec_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InsertSpec_17, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(MR_mktag(0), InsertSpec_17, 1) = ((MR_Box) (NeededFieldVars_15));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[10]), STATE_VARIABLE_InsertMap_0_18, ((MR_Box) (Anchor_11)), &conv0_InsertSpecs0_21);
    if (succeeded)
    {
      InsertSpecs0_21 = ((MR_Word) (conv0_InsertSpecs0_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word InsertSpecs_22;

      transform_hlds__tupling__combine_inserts_3_p_0(InsertSpec_17, InsertSpecs0_21, &InsertSpecs_22);
      mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[10]), ((MR_Box) (Anchor_11)), ((MR_Box) (InsertSpecs_22)), STATE_VARIABLE_InsertMap_0_18, STATE_VARIABLE_InsertMap_19);
    }
    else
    {
      MR_Word Var_23;

      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (InsertSpec_17));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[10]), ((MR_Box) (Anchor_11)), ((MR_Box) (Var_23)), STATE_VARIABLE_InsertMap_0_18, STATE_VARIABLE_InsertMap_19);
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__combine_inserts_3_p_0(
  MR_Word A_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (A_1));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_Word B_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Bs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word C_9;
    MR_Word Cs_10;
    MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_1, (MR_Integer) 0))));
    MR_Word ASet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_1, (MR_Integer) 1))));
    MR_Word BSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), B_7, (MR_Integer) 1))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), B_7, (MR_Integer) 0))));

    succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(Goal_11, Var_16);
    if (succeeded)
    {
      MR_Word Var_14;

      Var_14 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ASet_12, BSet_13);
      {
        C_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), C_9, 0) = ((MR_Box) (Goal_11));
        MR_hl_field(MR_mktag(0), C_9, 1) = ((MR_Box) (Var_14));
      }
      Cs_10 = Bs_8;
    }
    else
    {
      C_9 = B_7;
      transform_hlds__tupling__combine_inserts_3_p_0(A_1, Bs_8, &Cs_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (C_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cs_10));
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TuningParams_2,
  MR_Word Var_3,
  MR_Word STATE_VARIABLE_CountState_0_4,
  MR_Word * STATE_VARIABLE_CountState_5)
{
  MR_bool succeeded;
  MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_2, (MR_Integer) 5))));
  MR_Integer Var_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_2, (MR_Integer) 1))));

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word RegVars_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 0))));
    MR_Word StackVars0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 1))));
    MR_Float Loads_63 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
    MR_Float Stores0_64 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));
    MR_Word StackVars_65;
    MR_Float Stores_66;

    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVars0_62, Var_3);
    if (succeeded)
    {
      StackVars_65 = StackVars0_62;
      Stores_66 = Stores0_64;
    }
    else
    {
      MR_Float Var_67;

      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_3, StackVars0_62, &StackVars_65);
      Var_67 = mercury__float__float_1_f_0(Var_59);
      Stores_66 = (Stores0_64 + Var_67);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CountState_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_61));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StackVars_65));
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Loads_63);
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Stores_66);
    }
  }
  else
  {
    MR_Word CellVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word FieldVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), ((MR_Box) (Var_3)), FieldVars_14);
    if (succeeded)
    {
      MR_Word RegVars_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 0))));
      MR_Word StackVars0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 1))));
      MR_Float Loads_72 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
      MR_Float Stores0_73 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));
      MR_Word StackVars_74;
      MR_Float Stores_75;

      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVars0_71, CellVar_13);
      if (succeeded)
      {
        StackVars_74 = StackVars0_71;
        Stores_75 = Stores0_73;
      }
      else
      {
        MR_Float Var_76;

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CellVar_13, StackVars0_71, &StackVars_74);
        Var_76 = mercury__float__float_1_f_0(Var_55);
        Stores_75 = (Stores0_73 + Var_76);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_CountState_5 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_70));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StackVars_74));
        MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Loads_72);
        MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Stores_75);
      }
    }
    else
    {
      MR_Word RegVars_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 0))));
      MR_Word StackVars0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 1))));
      MR_Float Loads_81 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
      MR_Float Stores0_82 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));
      MR_Word StackVars_83;
      MR_Float Stores_84;

      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVars0_80, Var_3);
      if (succeeded)
      {
        StackVars_83 = StackVars0_80;
        Stores_84 = Stores0_82;
      }
      else
      {
        MR_Float Var_85;

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_3, StackVars0_80, &StackVars_83);
        Var_85 = mercury__float__float_1_f_0(Var_59);
        Stores_84 = (Stores0_82 + Var_85);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_CountState_5 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_79));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StackVars_83));
        MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Loads_81);
        MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Stores_84);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_CountState_13;

  transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_CountState_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_CountState_13));
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(
  MR_Word TraceCounts_11,
  MR_Word TuningParams_12,
  MR_Word ModuleInfo_13,
  MR_Word TuplingScheme_14,
  MR_Word ReverseGoalPathMapMap_15,
  MR_Word PredProcId_16,
  MR_Float STATE_VARIABLE_Loads_0_34,
  MR_Float * STATE_VARIABLE_Loads_35,
  MR_Float STATE_VARIABLE_Stores_0_36,
  MR_Float * STATE_VARIABLE_Stores_37)
{
  MR_bool succeeded;
  MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_16, (MR_Integer) 0))));
  MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_16, (MR_Integer) 1))));
  MR_Word PredInfo_21;
  MR_Word ProcInfo_22;
  MR_Word ProcLabel_23;
  MR_Word Context_24;
  MR_String FileName_25;
  MR_Word ProcLabelInContext_27;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_String Var_41;
  MR_Integer Var_42;
  MR_Integer Var_43;
  MR_Word Var_44;
  MR_Word ProcCounts_28;
  MR_Word Var_45;
  MR_Word ProcCounts_54;
  MR_Box conv0_ProcCounts_54;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_13, PredId_19, ProcId_20, &PredInfo_21, &ProcInfo_22);
  Var_38 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_21);
  Var_39 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_21);
  Var_40 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_21);
  Var_41 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_21);
  Var_42 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_21);
  Var_43 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_20);
  {
    ProcLabel_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ProcLabel_23, 0) = ((MR_Box) (Var_38));
    MR_hl_field(MR_mktag(0), ProcLabel_23, 1) = (MR_Box) ((MR_Unsigned) (Var_39));
    MR_hl_field(MR_mktag(0), ProcLabel_23, 2) = ((MR_Box) (Var_40));
    MR_hl_field(MR_mktag(0), ProcLabel_23, 3) = ((MR_Box) (Var_41));
    MR_hl_field(MR_mktag(0), ProcLabel_23, 4) = ((MR_Box) (Var_42));
    MR_hl_field(MR_mktag(0), ProcLabel_23, 5) = ((MR_Box) (Var_43));
  }
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_21, &Context_24);
  FileName_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), Context_24, (MR_Integer) 0))));
  Var_44 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_21);
  {
    ProcLabelInContext_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ProcLabelInContext_27, 0) = ((MR_Box) (Var_44));
    MR_hl_field(MR_mktag(0), ProcLabelInContext_27, 1) = ((MR_Box) (FileName_25));
    MR_hl_field(MR_mktag(0), ProcLabelInContext_27, 2) = ((MR_Box) (ProcLabel_23));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[9]), TraceCounts_11, ((MR_Box) (ProcLabelInContext_27)), &conv0_ProcCounts_54);
  if (succeeded)
  {
    ProcCounts_54 = ((MR_Word) (conv0_ProcCounts_54));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ProcCounts_54));
    }
  else
    Var_45 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ProcCounts_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))));
    {
      MR_Word ReverseGoalPathMap_29;
      MR_Word CountInfo_30;
      MR_Float ProcLoads_31;
      MR_Float ProcStores_32;
      MR_Float Var_47;
      MR_Float Var_48;
      MR_Float Var_50;
      MR_Float Var_51;
      MR_Word InitialLiveness_60;
      MR_Word CountState0_61;
      MR_Word Goal_62;
      MR_Word CountState1_63;
      MR_Word OutputArgs_65;
      MR_Word CountState_67;
      MR_Word Var_70;
      MR_Word Var_73;
      MR_Word Var_97;
      MR_Box conv1_ReverseGoalPathMap_29;
      MR_Word Var_64;
      MR_Word Var_66;
      MR_Box conv3_CountState_67;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[3]), ReverseGoalPathMapMap_15, ((MR_Box) (PredProcId_16)), &conv1_ReverseGoalPathMap_29);
      ReverseGoalPathMap_29 = ((MR_Word) (conv1_ReverseGoalPathMap_29));
      {
        CountInfo_30 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CountInfo_30, 0) = ((MR_Box) (ModuleInfo_13));
        MR_hl_field(MR_mktag(0), CountInfo_30, 1) = ((MR_Box) (PredProcId_16));
        MR_hl_field(MR_mktag(0), CountInfo_30, 2) = ((MR_Box) (PredInfo_21));
        MR_hl_field(MR_mktag(0), CountInfo_30, 3) = ((MR_Box) (ProcInfo_22));
        MR_hl_field(MR_mktag(0), CountInfo_30, 4) = ((MR_Box) (ProcCounts_28));
        MR_hl_field(MR_mktag(0), CountInfo_30, 5) = ((MR_Box) (TuningParams_12));
        MR_hl_field(MR_mktag(0), CountInfo_30, 6) = ((MR_Box) (TuplingScheme_14));
        MR_hl_field(MR_mktag(0), CountInfo_30, 7) = ((MR_Box) (ReverseGoalPathMap_29));
      }
      ll_backend__liveness__initial_liveness_4_p_0(ModuleInfo_13, PredInfo_21, ProcInfo_22, &InitialLiveness_60);
      Var_70 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      {
        CountState0_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CountState0_61, 0) = ((MR_Box) (InitialLiveness_60));
        MR_hl_field(MR_mktag(0), CountState0_61, 1) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), CountState0_61, 2) = MR_box_float((MR_Float) 0.0000000000000000);
        MR_hl_field(MR_mktag(0), CountState0_61, 3) = MR_box_float((MR_Float) 0.0000000000000000);
      }
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_22, &Goal_62);
      transform_hlds__tupling__count_load_stores_in_goal_4_p_0(Goal_62, CountInfo_30, CountState0_61, &CountState1_63);
      hlds__arg_info__partition_proc_args_5_p_0(ModuleInfo_13, ProcInfo_22, &Var_64, &OutputArgs_65, &Var_66);
      Var_73 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), OutputArgs_65);
      {
        Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[4]));
        MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (CountInfo_30));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_97, Var_73, ((MR_Box) (CountState1_63)), &conv3_CountState_67);
      CountState_67 = ((MR_Word) (conv3_CountState_67));
      ProcLoads_31 = MR_unbox_float((MR_hl_field(MR_mktag(0), CountState_67, (MR_Integer) 2)));
      ProcStores_32 = MR_unbox_float((MR_hl_field(MR_mktag(0), CountState_67, (MR_Integer) 3)));
      Var_48 = mercury__float__float_1_f_0((MR_Integer) 1);
      Var_47 = (Var_48 * ProcLoads_31);
      *STATE_VARIABLE_Loads_35 = (STATE_VARIABLE_Loads_0_34 + Var_47);
      Var_51 = mercury__float__float_1_f_0((MR_Integer) 1);
      Var_50 = (Var_51 * ProcStores_32);
      *STATE_VARIABLE_Stores_37 = (STATE_VARIABLE_Stores_0_36 + Var_50);
    }
  }
  else
  {
    *STATE_VARIABLE_Stores_37 = STATE_VARIABLE_Stores_0_36;
    *STATE_VARIABLE_Loads_35 = STATE_VARIABLE_Loads_0_34;
  }
}

static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0(
  MR_Word Goal_5,
  MR_Word CountInfo_6,
  MR_Word STATE_VARIABLE_CountState_0_112,
  MR_Word * STATE_VARIABLE_CountState_113)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ResumePoint_96;
          MR_Word Var_149;
          MR_Word STATE_VARIABLE_CountState_150_150;
          MR_Word SubGoal_182 = (MR_Word) ((MR_Word) (GoalExpr_8));
          MR_Word next_value_of_Goal_5;
          MR_Word next_value_of_STATE_VARIABLE_CountState_0_112;

          Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_182, (MR_Integer) 1))));
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Var_149, &ResumePoint_96);
          if ((ResumePoint_96 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "no_resume_point for not");
              return;
            }
          else
          {
            MR_Word LiveVars_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_96, (MR_Integer) 0))));

            transform_hlds__tupling__cls_require_flushed_4_p_0(CountInfo_6, LiveVars_97, STATE_VARIABLE_CountState_0_112, &STATE_VARIABLE_CountState_150_150);
          }
          // direct tailcall eliminated
          ;
          next_value_of_Goal_5 = SubGoal_182;
          next_value_of_STATE_VARIABLE_CountState_0_112 = STATE_VARIABLE_CountState_150_150;
          Goal_5 = next_value_of_Goal_5;
          STATE_VARIABLE_CountState_0_112 = next_value_of_STATE_VARIABLE_CountState_0_112;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Unification_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_13, (MR_Integer) 0))));
                MR_Word ArgVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_13, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_CountState_114_114;
                MR_Word Var_115;

                transform_hlds__tupling__cls_require_in_regs_4_p_0(CountInfo_6, ArgVars_17, STATE_VARIABLE_CountState_0_112, &STATE_VARIABLE_CountState_114_114);
                {
                  Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (CellVar_15));
                  MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                transform_hlds__tupling__cls_put_in_regs_3_p_0(Var_115, STATE_VARIABLE_CountState_114_114, STATE_VARIABLE_CountState_113);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CellVar_168 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_13, (MR_Integer) 0))));
                MR_Word ArgVars_170 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_13, (MR_Integer) 2))));

                transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0(CountInfo_6, CellVar_168, ArgVars_170, STATE_VARIABLE_CountState_0_112, STATE_VARIABLE_CountState_113);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ToVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_13, (MR_Integer) 0))));
                MR_Word FromVar_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_13, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_CountState_119_119;
                MR_Word Var_120;

                transform_hlds__tupling__cls_require_in_reg_4_p_0(CountInfo_6, FromVar_25, STATE_VARIABLE_CountState_0_112, &STATE_VARIABLE_CountState_119_119);
                {
                  Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (ToVar_24));
                  MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                transform_hlds__tupling__cls_put_in_regs_3_p_0(Var_120, STATE_VARIABLE_CountState_119_119, STATE_VARIABLE_CountState_113);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_13, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_13, (MR_Integer) 1))));
                    MR_Word Var2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_13, (MR_Integer) 2))));
                    MR_Word Var_123;
                    MR_Word Var_125;

                    {
                      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var2_27));
                      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var1_26));
                      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_125));
                    }
                    transform_hlds__tupling__cls_require_in_regs_4_p_0(CountInfo_6, Var_123, STATE_VARIABLE_CountState_0_112, STATE_VARIABLE_CountState_113);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "complicated_unify");
                    return;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 0))));
          MR_Integer ProcId_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 1))));
          MR_Word Builtin_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word TuplingProposal_37;
          MR_Word Var_129;

          succeeded = (Builtin_34 == (MR_Integer) 1);
          if (succeeded)
          {
            {
              Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (PredId_31));
              MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (ProcId_32));
            }
            TuplingProposal_37 = transform_hlds__tupling__get_tupling_proposal_2_f_0(CountInfo_6, Var_129);
            succeeded = (TuplingProposal_37 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
            transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0(GoalExpr_8, GoalInfo_9, CountInfo_6, TuplingProposal_37, STATE_VARIABLE_CountState_0_112, STATE_VARIABLE_CountState_113);
          else
            transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0(GoalExpr_8, GoalInfo_9, CountInfo_6, STATE_VARIABLE_CountState_0_112, STATE_VARIABLE_CountState_113);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
              MR_Word ArgModes_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
              MR_Word MaybeArgRegs_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
              MR_Word ModuleInfo_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 0))));
              MR_Word ProcInfo_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 3))));
              MR_Word VarTable_47;
              MR_Word ArgRegTypes_48;
              MR_Word InputArgsR_49;
              MR_Word InputArgsF_50;
              MR_Word OutputArgsR_51;
              MR_Word OutputArgsF_52;
              MR_Word InputArgs_53;
              MR_Word OutputArgs_54;
              MR_Word ArgVars_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

              hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_46, &VarTable_47);
              hlds__arg_info__generic_call_arg_reg_types_5_p_0(ModuleInfo_45, GenericCall_41, ArgVars_172, MaybeArgRegs_43, &ArgRegTypes_48);
              hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ModuleInfo_45, VarTable_47, ArgVars_172, ArgModes_42, ArgRegTypes_48, &InputArgsR_49, &InputArgsF_50, &OutputArgsR_51, &OutputArgsF_52);
              InputArgs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgsR_49, InputArgsF_50);
              OutputArgs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), OutputArgsR_51, OutputArgsF_52);
              switch (MR_tag((MR_Word) GenericCall_41)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word Globals_64;
                    MR_Word GenericVarsArgInfos_66;
                    MR_Word GenericVars_69;
                    MR_Word Inputs_70;
                    MR_Word Outputs_71;
                    MR_Word MaybeNeedAcrossCall_72;
                    MR_Integer Var_132;
                    MR_Integer Var_133;
                    MR_Word Var_65;
                    MR_Integer Var_67;
                    MR_Word Var_68;

                    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_45, &Globals_64);
                    Var_132 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgsR_49);
                    Var_133 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgsF_50);
                    ll_backend__call_gen__generic_call_info_8_p_0(Globals_64, GenericCall_41, Var_132, Var_133, &Var_65, &GenericVarsArgInfos_66, &Var_67, &Var_68);
                    mercury__assoc_list__keys_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), GenericVarsArgInfos_66, &GenericVars_69);
                    mercury__list__append_3_p_1((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), GenericVars_69, InputArgs_53, &Inputs_70);
                    Outputs_71 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), OutputArgs_54);
                    hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_9, &MaybeNeedAcrossCall_72);
                    transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(CountInfo_6, Inputs_70, Outputs_71, MaybeNeedAcrossCall_72, STATE_VARIABLE_CountState_0_112, STATE_VARIABLE_CountState_113);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word STATE_VARIABLE_CountState_135_135;

                    transform_hlds__tupling__cls_require_in_regs_4_p_0(CountInfo_6, InputArgs_53, STATE_VARIABLE_CountState_0_112, &STATE_VARIABLE_CountState_135_135);
                    transform_hlds__tupling__cls_put_in_regs_3_p_0(OutputArgs_54, STATE_VARIABLE_CountState_135_135, STATE_VARIABLE_CountState_113);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
              MR_Word ExtraArgs_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 5))));
              MR_Word ExtraVars_80;
              MR_Word CallingProcInfo_81;
              MR_Word InputArgVarSet_82;
              MR_Word OutputArgVarSet_83;
              MR_Word InputArgVars_85;
              MR_Word InputVars_86;
              MR_Word ArgVars_174;
              MR_Word PredId_175 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Integer ProcId_176 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
              MR_Word ModuleInfo_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 0))));
              MR_Word ProcInfo_178;
              MR_Word VarTable_179;
              MR_Word _PredInfo_79;
              MR_Word Var_84;
              MR_Word MaybeNeedAcrossCall_173;

              hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_177, PredId_175, ProcId_176, &_PredInfo_79, &ProcInfo_178);
              ArgVars_174 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[14]), Args_75);
              ExtraVars_80 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[15]), ExtraArgs_76);
              CallingProcInfo_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 3))));
              hlds__hlds_pred__proc_info_get_var_table_2_p_0(CallingProcInfo_81, &VarTable_179);
              hlds__arg_info__partition_proc_call_args_7_p_0(ModuleInfo_177, ProcInfo_178, VarTable_179, ArgVars_174, &InputArgVarSet_82, &OutputArgVarSet_83, &Var_84);
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgVarSet_82, &InputArgVars_85);
              mercury__list__append_3_p_1((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgVars_85, ExtraVars_80, &InputVars_86);
              succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(GoalInfo_9, &MaybeNeedAcrossCall_173);
              if (succeeded)
              {
                succeeded = (MaybeNeedAcrossCall_173 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
              }
              if (succeeded)
                transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(CountInfo_6, InputVars_86, OutputArgVarSet_83, MaybeNeedAcrossCall_173, STATE_VARIABLE_CountState_0_112, STATE_VARIABLE_CountState_113);
              else
              {
                MR_Word STATE_VARIABLE_CountState_140_140;

                transform_hlds__tupling__cls_require_in_regs_4_p_0(CountInfo_6, InputVars_86, STATE_VARIABLE_CountState_0_112, &STATE_VARIABLE_CountState_140_140);
                transform_hlds__tupling__cls_clobber_regs_3_p_0(OutputArgVarSet_83, STATE_VARIABLE_CountState_140_140, STATE_VARIABLE_CountState_113);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

              switch (ConjType_91) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "tupling with parallel conjunctions");
                    return;
                  }
                  break;
                case (MR_Integer) 0:
                  transform_hlds__tupling__count_load_stores_in_conj_4_p_0(Goals_92, CountInfo_6, STATE_VARIABLE_CountState_0_112, STATE_VARIABLE_CountState_113);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));

              transform_hlds__tupling__count_load_stores_in_disj_4_p_0(Goals_181, CountInfo_6, STATE_VARIABLE_CountState_0_112, STATE_VARIABLE_CountState_113);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));

              transform_hlds__tupling__count_load_stores_in_cases_4_p_0(Cases_95, CountInfo_6, STATE_VARIABLE_CountState_0_112, STATE_VARIABLE_CountState_113);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
              MR_Word SubGoal_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Word Var_142;

              succeeded = ((((MR_tag((MR_Word) Reason_88)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_88, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_142 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_88, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_142 == (MR_Integer) 1);
              }
              if (succeeded)
                *STATE_VARIABLE_CountState_113 = STATE_VARIABLE_CountState_0_112;
              else
              {
                MR_Word next_value_of_Goal_5 = SubGoal_89;

                // direct tailcall eliminated
                ;
                Goal_5 = next_value_of_Goal_5;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Word Then_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
              MR_Word Else_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
              MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_100, (MR_Integer) 1))));
              MR_Word ResumePoint_188;

              hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Var_154, &ResumePoint_188);
              if ((ResumePoint_188 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "no_resume_point for if_then_else");
                  return;
                }
              else
              {
                MR_Word ResetCountInfo_103;
                MR_Word ThenCountInfo_104;
                MR_Word ElseCountInfo_105;
                MR_Word ProcCounts_106;
                MR_Word ThenGoalId_107;
                MR_Word ElseGoalId_108;
                MR_Float ThenRelFreq_109;
                MR_Float ElseRelFreq_110;
                MR_Word STATE_VARIABLE_CountState_155_155;
                MR_Word STATE_VARIABLE_CountState_156_156;
                MR_Word Var_157;
                MR_Word Var_158;
                MR_Word Var_159;
                MR_Word STATE_VARIABLE_CountState_160_160;
                MR_Word LiveVars_184 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_188, (MR_Integer) 0))));

                transform_hlds__tupling__cls_require_flushed_4_p_0(CountInfo_6, LiveVars_184, STATE_VARIABLE_CountState_0_112, &STATE_VARIABLE_CountState_155_155);
                transform_hlds__tupling__count_load_stores_in_goal_4_p_0(Cond_100, CountInfo_6, STATE_VARIABLE_CountState_155_155, &STATE_VARIABLE_CountState_156_156);
                transform_hlds__tupling__reset_count_state_counts_2_p_0(STATE_VARIABLE_CountState_156_156, &ResetCountInfo_103);
                transform_hlds__tupling__count_load_stores_in_goal_4_p_0(Then_101, CountInfo_6, ResetCountInfo_103, &ThenCountInfo_104);
                transform_hlds__tupling__count_load_stores_in_goal_4_p_0(Else_102, CountInfo_6, ResetCountInfo_103, &ElseCountInfo_105);
                ProcCounts_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 4))));
                Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then_101, (MR_Integer) 1))));
                ThenGoalId_107 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_157);
                Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else_102, (MR_Integer) 1))));
                ElseGoalId_108 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_158);
                Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 7))));
                transform_hlds__tupling__get_ite_relative_frequencies_6_p_0(ProcCounts_106, Var_159, ThenGoalId_107, ElseGoalId_108, &ThenRelFreq_109, &ElseRelFreq_110);
                transform_hlds__tupling__add_branch_costs_4_p_0(ThenCountInfo_104, ThenRelFreq_109, STATE_VARIABLE_CountState_156_156, &STATE_VARIABLE_CountState_160_160);
                transform_hlds__tupling__add_branch_costs_4_p_0(ElseCountInfo_105, ElseRelFreq_110, STATE_VARIABLE_CountState_160_160, STATE_VARIABLE_CountState_113);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "shorthand");
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
transform_hlds__tupling__count_load_stores_in_cases_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_CountState_5;

  transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CountState_5);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_CountState_5));
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CountState_0_3,
  MR_Word * STATE_VARIABLE_CountState_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CountState_4 = STATE_VARIABLE_CountState_0_3;
    else
    {
      MR_Word Case_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_9, (MR_Integer) 2))));
      MR_Word GoalInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_15, (MR_Integer) 1))));
      MR_Word ResumePoint_18;
      MR_Word BranchCountState0_21;
      MR_Word BranchCountState_22;
      MR_Word ProcCounts_23;
      MR_Word GoalId_24;
      MR_Float RelFreq_25;
      MR_Word STATE_VARIABLE_CountState_28_28;
      MR_Word Var_29;
      MR_Word STATE_VARIABLE_CountState_30_30;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CountState_0_3;

      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo_17, &ResumePoint_18);
      if ((ResumePoint_18 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_CountState_28_28 = STATE_VARIABLE_CountState_0_3;
      else
      {
        MR_Word LiveVars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_18, (MR_Integer) 0))));
        MR_Word TuplingProposal_45;
        MR_Word TuningParams_46;
        MR_Word Var_47;
        MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Probe_65;
        MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
        MR_Box conv0_Probe_65;
        MR_Box conv2_STATE_VARIABLE_CountState_28_28;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_66, ((MR_Box) (Var_57)), &conv0_Probe_65);
        if (succeeded)
        {
          Probe_65 = ((MR_Word) (conv0_Probe_65));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          TuplingProposal_45 = Probe_65;
        else
          TuplingProposal_45 = (MR_Word) ((MR_Unsigned) 0U);
        TuningParams_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_cases_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (TuplingProposal_45));
          MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (TuningParams_46));
        }
        parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_47, LiveVars_19, ((MR_Box) (STATE_VARIABLE_CountState_0_3)), &conv2_STATE_VARIABLE_CountState_28_28);
        STATE_VARIABLE_CountState_28_28 = ((MR_Word) (conv2_STATE_VARIABLE_CountState_28_28));
      }
      Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_28_28, (MR_Integer) 0))));
      Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_28_28, (MR_Integer) 1))));
      {
        BranchCountState0_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BranchCountState0_21, 0) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), BranchCountState0_21, 1) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), BranchCountState0_21, 2) = MR_box_float((MR_Float) 0.0000000000000000);
        MR_hl_field(MR_mktag(0), BranchCountState0_21, 3) = MR_box_float((MR_Float) 0.0000000000000000);
      }
      transform_hlds__tupling__count_load_stores_in_goal_4_p_0(Goal_15, HeadVar__2_2, BranchCountState0_21, &BranchCountState_22);
      ProcCounts_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      GoalId_24 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_17);
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      transform_hlds__tupling__get_case_relative_frequency_4_p_0(ProcCounts_23, Var_29, GoalId_24, &RelFreq_25);
      transform_hlds__tupling__add_branch_costs_4_p_0(BranchCountState_22, RelFreq_25, STATE_VARIABLE_CountState_28_28, &STATE_VARIABLE_CountState_30_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_10;
      next_value_of_STATE_VARIABLE_CountState_0_3 = STATE_VARIABLE_CountState_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CountState_0_3 = next_value_of_STATE_VARIABLE_CountState_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_disj_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_CountState_5;

  transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CountState_5);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_CountState_5));
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CountState_0_3,
  MR_Word * STATE_VARIABLE_CountState_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CountState_4 = STATE_VARIABLE_CountState_0_3;
    else
    {
      MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 1))));
      MR_Word ResumePoint_15;
      MR_Word BranchCountState0_18;
      MR_Word BranchCountState_19;
      MR_Word ProcCounts_20;
      MR_Word GoalId_21;
      MR_Float RelFreq_22;
      MR_Word STATE_VARIABLE_CountState_25_25;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_CountState_27_27;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CountState_0_3;

      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo_14, &ResumePoint_15);
      if ((ResumePoint_15 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_CountState_25_25 = STATE_VARIABLE_CountState_0_3;
      else
      {
        MR_Word LiveVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_15, (MR_Integer) 0))));
        MR_Word TuplingProposal_42;
        MR_Word TuningParams_43;
        MR_Word Var_44;
        MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Probe_62;
        MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
        MR_Box conv0_Probe_62;
        MR_Box conv2_STATE_VARIABLE_CountState_25_25;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_63, ((MR_Box) (Var_54)), &conv0_Probe_62);
        if (succeeded)
        {
          Probe_62 = ((MR_Word) (conv0_Probe_62));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          TuplingProposal_42 = Probe_62;
        else
          TuplingProposal_42 = (MR_Word) ((MR_Unsigned) 0U);
        TuningParams_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
        {
          Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_disj_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (TuplingProposal_42));
          MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (TuningParams_43));
        }
        parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_44, LiveVars_16, ((MR_Box) (STATE_VARIABLE_CountState_0_3)), &conv2_STATE_VARIABLE_CountState_25_25);
        STATE_VARIABLE_CountState_25_25 = ((MR_Word) (conv2_STATE_VARIABLE_CountState_25_25));
      }
      Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_25_25, (MR_Integer) 0))));
      Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_25_25, (MR_Integer) 1))));
      {
        BranchCountState0_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BranchCountState0_18, 0) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), BranchCountState0_18, 1) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), BranchCountState0_18, 2) = MR_box_float((MR_Float) 0.0000000000000000);
        MR_hl_field(MR_mktag(0), BranchCountState0_18, 3) = MR_box_float((MR_Float) 0.0000000000000000);
      }
      transform_hlds__tupling__count_load_stores_in_goal_4_p_0(Goal_9, HeadVar__2_2, BranchCountState0_18, &BranchCountState_19);
      ProcCounts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      GoalId_21 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_14);
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      transform_hlds__tupling__get_disjunct_relative_frequency_4_p_0(ProcCounts_20, Var_26, GoalId_21, &RelFreq_22);
      transform_hlds__tupling__add_branch_costs_4_p_0(BranchCountState_19, RelFreq_22, STATE_VARIABLE_CountState_25_25, &STATE_VARIABLE_CountState_27_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_10;
      next_value_of_STATE_VARIABLE_CountState_0_3 = STATE_VARIABLE_CountState_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CountState_0_3 = next_value_of_STATE_VARIABLE_CountState_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CountState_0_3,
  MR_Word * STATE_VARIABLE_CountState_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CountState_4 = STATE_VARIABLE_CountState_0_3;
    else
    {
      MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_CountState_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CountState_0_3;

      transform_hlds__tupling__count_load_stores_in_goal_4_p_0(Goal_9, HeadVar__2_2, STATE_VARIABLE_CountState_0_3, &STATE_VARIABLE_CountState_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_10;
      next_value_of_STATE_VARIABLE_CountState_0_3 = STATE_VARIABLE_CountState_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CountState_0_3 = next_value_of_STATE_VARIABLE_CountState_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__tupling__get_ite_relative_frequencies_6_p_0(
  MR_Word ProcCounts_7,
  MR_Word ReverseGoalPathMap_8,
  MR_Word ThenGoalId_9,
  MR_Word ElseGoalId_10,
  MR_Float * ThenRelFreq_11,
  MR_Float * ElseRelFreq_12)
{
  MR_bool succeeded;
  MR_Word ThenGoalPath_13;
  MR_Word ElseGoalPath_14;
  MR_Integer ThenCounts_15;
  MR_Integer ElseCounts_16;
  MR_Integer Total_17;
  MR_Word PathPort_25;
  MR_Word PathPort_31;
  MR_Box conv0_ThenGoalPath_13;
  MR_Box conv1_ElseGoalPath_14;
  MR_Word ContextCount_26;
  MR_Box conv2_ContextCount_26;
  MR_Word ContextCount_32;
  MR_Box conv3_ContextCount_32;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), ReverseGoalPathMap_8, ((MR_Box) (ThenGoalId_9)), &conv0_ThenGoalPath_13);
  ThenGoalPath_13 = ((MR_Word) (conv0_ThenGoalPath_13));
  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), ReverseGoalPathMap_8, ((MR_Box) (ElseGoalId_10)), &conv1_ElseGoalPath_14);
  ElseGoalPath_14 = ((MR_Word) (conv1_ElseGoalPath_14));
  {
    PathPort_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), PathPort_25, 0) = ((MR_Box) (ThenGoalPath_13));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcCounts_7, ((MR_Box) (PathPort_25)), &conv2_ContextCount_26);
  if (succeeded)
  {
    ContextCount_26 = ((MR_Word) (conv2_ContextCount_26));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    ThenCounts_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ContextCount_26, (MR_Integer) 1))));
  else
    ThenCounts_15 = (MR_Integer) 0;
  {
    PathPort_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), PathPort_31, 0) = ((MR_Box) (ElseGoalPath_14));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcCounts_7, ((MR_Box) (PathPort_31)), &conv3_ContextCount_32);
  if (succeeded)
  {
    ContextCount_32 = ((MR_Word) (conv3_ContextCount_32));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    ElseCounts_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ContextCount_32, (MR_Integer) 1))));
  else
    ElseCounts_16 = (MR_Integer) 0;
  Total_17 = (MR_Integer) ((MR_Unsigned) ThenCounts_15 + (MR_Unsigned) ElseCounts_16);
  succeeded = (Total_17 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Float Var_19;
    MR_Float Var_20;
    MR_Float Var_21;
    MR_Float Var_22;

    Var_19 = mercury__float__float_1_f_0(ThenCounts_15);
    Var_20 = mercury__float__float_1_f_0(Total_17);
    *ThenRelFreq_11 = mercury__float__f_slash_2_f_0(Var_19, Var_20);
    Var_21 = mercury__float__float_1_f_0(ElseCounts_16);
    Var_22 = mercury__float__float_1_f_0(Total_17);
    *ElseRelFreq_12 = mercury__float__f_slash_2_f_0(Var_21, Var_22);
  }
  else
  {
    *ThenRelFreq_11 = (MR_Float) 0.50000000000000000;
    *ElseRelFreq_12 = (MR_Float) 0.50000000000000000;
  }
}

static void MR_CALL 
transform_hlds__tupling__reset_count_state_counts_2_p_0(
  MR_Word STATE_VARIABLE_CountState_0_4,
  MR_Word * STATE_VARIABLE_CountState_5)
{
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 1))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CountState_5 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 2) = MR_box_float((MR_Float) 0.0000000000000000);
    MR_hl_field(MR_mktag(0), base, 3) = MR_box_float((MR_Float) 0.0000000000000000);
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_clobber_regs_3_p_0(
  MR_Word NewVars_4,
  MR_Word STATE_VARIABLE_CountState_0_6,
  MR_Word * STATE_VARIABLE_CountState_7)
{
  MR_Word Var_9;
  MR_Word Var_11;
  MR_Float Var_12;
  MR_Float Var_13;

  Var_9 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewVars_4);
  Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_6, (MR_Integer) 1))));
  Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_6, (MR_Integer) 2)));
  Var_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_6, (MR_Integer) 3)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CountState_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_12);
    MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Var_13);
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_CountState_5;

  transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CountState_5);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_CountState_5));
}

static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0(
  MR_Word CountInfo_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_CountState_0_10,
  MR_Word * STATE_VARIABLE_CountState_11)
{
  MR_bool succeeded;
  MR_Word TuplingProposal_8;
  MR_Word TuningParams_9;
  MR_Word Var_12;
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 1))));
  MR_Word Probe_33;
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 6))));
  MR_Box conv0_Probe_33;
  MR_Box conv2_STATE_VARIABLE_CountState_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_34, ((MR_Box) (Var_25)), &conv0_Probe_33);
  if (succeeded)
  {
    Probe_33 = ((MR_Word) (conv0_Probe_33));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    TuplingProposal_8 = Probe_33;
  else
    TuplingProposal_8 = (MR_Word) ((MR_Unsigned) 0U);
  TuningParams_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 5))));
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[2]));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__tupling__cls_require_flushed_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (TuplingProposal_8));
    MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (TuningParams_9));
  }
  parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_12, Vars_6, ((MR_Box) (STATE_VARIABLE_CountState_0_10)), &conv2_STATE_VARIABLE_CountState_11);
  *STATE_VARIABLE_CountState_11 = ((MR_Word) (conv2_STATE_VARIABLE_CountState_11));
}

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_CountState_8;

  transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_CountState_8);
  *wrapper_arg_3 = ((MR_Box) (conv5_CountState_8));
}

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_CountState_8;

  transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_CountState_8);
  *wrapper_arg_3 = ((MR_Box) (conv3_CountState_8));
}

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_CountState_8;

  transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_CountState_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_CountState_8));
}

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0(
  MR_Word CountInfo_6,
  MR_Word DeconstructCellVar_7,
  MR_Word DeconstructFieldVars_8,
  MR_Word STATE_VARIABLE_State_0_18,
  MR_Word * STATE_VARIABLE_State_19)
{
  MR_bool succeeded;
  MR_Word TuningParams_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 5))));
  MR_Integer CvLoadCost_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_10, (MR_Integer) 2))));
  MR_Integer FvLoadCost_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_10, (MR_Integer) 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 1))));
  MR_Word Probe_66;
  MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 6))));
  MR_Box conv0_Probe_66;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_67, ((MR_Box) (Var_28)), &conv0_Probe_66);
  if (succeeded)
  {
    Probe_66 = ((MR_Word) (conv0_Probe_66));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    if ((Probe_66 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word STATE_VARIABLE_State_20_20;
      MR_Word Var_21;
      MR_Box conv2_STATE_VARIABLE_State_19;

      transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(CvLoadCost_11, DeconstructCellVar_7, STATE_VARIABLE_State_0_18, &STATE_VARIABLE_State_20_20);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[5]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (FvLoadCost_12));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_21, DeconstructFieldVars_8, ((MR_Box) (STATE_VARIABLE_State_20_20)), &conv2_STATE_VARIABLE_State_19);
      *STATE_VARIABLE_State_19 = ((MR_Word) (conv2_STATE_VARIABLE_State_19));
    }
    else
    {
      MR_Word TupleFieldVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Probe_66, (MR_Integer) 1))));
      MR_Word VarsToLoad_17;
      MR_Word Var_23;
      MR_Word Var_24;

      Var_23 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), DeconstructFieldVars_8);
      Var_24 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), TupleFieldVars_15);
      VarsToLoad_17 = mercury__set__difference_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), Var_23, Var_24);
      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), VarsToLoad_17);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_State_25_25;
        MR_Word Var_26;
        MR_Box conv4_STATE_VARIABLE_State_19;

        transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(CvLoadCost_11, DeconstructCellVar_7, STATE_VARIABLE_State_0_18, &STATE_VARIABLE_State_25_25);
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[5]));
          MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_2));
          MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (FvLoadCost_12));
        }
        mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_26, VarsToLoad_17, ((MR_Box) (STATE_VARIABLE_State_25_25)), &conv4_STATE_VARIABLE_State_19);
        *STATE_VARIABLE_State_19 = ((MR_Word) (conv4_STATE_VARIABLE_State_19));
      }
      else
        *STATE_VARIABLE_State_19 = STATE_VARIABLE_State_0_18;
    }
  else
  {
    MR_Word STATE_VARIABLE_State_20_79;
    MR_Word Var_80;
    MR_Box conv6_STATE_VARIABLE_State_19;

    transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(CvLoadCost_11, DeconstructCellVar_7, STATE_VARIABLE_State_0_18, &STATE_VARIABLE_State_20_79);
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[5]));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (FvLoadCost_12));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_80, DeconstructFieldVars_8, ((MR_Box) (STATE_VARIABLE_State_20_79)), &conv6_STATE_VARIABLE_State_19);
    *STATE_VARIABLE_State_19 = ((MR_Word) (conv6_STATE_VARIABLE_State_19));
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_CountState_0_8,
  MR_Word * STATE_VARIABLE_CountState_9)
{
  MR_Word RegVars0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_8, (MR_Integer) 0))));
  MR_Word RegVars_7;
  MR_Word Var_14;
  MR_Float Var_15;
  MR_Float Var_16;

  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_4, RegVars0_6, &RegVars_7);
  Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_8, (MR_Integer) 1))));
  Var_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_8, (MR_Integer) 2)));
  Var_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_8, (MR_Integer) 3)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CountState_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_15);
    MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Var_16);
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_require_in_reg_4_p_0(
  MR_Word CountInfo_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_CountState_0_12,
  MR_Word * STATE_VARIABLE_CountState_13)
{
  MR_bool succeeded;
  MR_Word TuplingProposal_8;
  MR_Word TypeInfo_14_14;
  MR_Word FieldVars_10;
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 1))));
  MR_Word Probe_23;
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 6))));
  MR_Box conv0_Probe_23;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_24, ((MR_Box) (Var_15)), &conv0_Probe_23);
  if (succeeded)
  {
    Probe_23 = ((MR_Word) (conv0_Probe_23));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    TuplingProposal_8 = Probe_23;
  else
    TuplingProposal_8 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (TuplingProposal_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    FieldVars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TuplingProposal_8, (MR_Integer) 1))));
    TypeInfo_14_14 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]);
    succeeded = mercury__list__member_2_p_0(TypeInfo_14_14, ((MR_Box) (Var_6)), FieldVars_10);
  }
  if (succeeded)
  {
    MR_Word RegVars0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_12, (MR_Integer) 0))));
    MR_Word StackVars_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_12, (MR_Integer) 1))));
    MR_Float Loads0_36 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_12, (MR_Integer) 2)));
    MR_Float Stores_37 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_12, (MR_Integer) 3)));

    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegVars0_34, Var_6);
    if (succeeded)
      *STATE_VARIABLE_CountState_13 = STATE_VARIABLE_CountState_0_12;
    else
    {
      MR_Word CellVar_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TuplingProposal_8, (MR_Integer) 0))));
      MR_Word TuningParams_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 5))));
      MR_Float CvLoadCost_42;
      MR_Float FvLoadCost_43;
      MR_Word RegVars_44;
      MR_Float Loads_45;
      MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_41, (MR_Integer) 2))));
      MR_Integer Var_47;

      CvLoadCost_42 = mercury__float__float_1_f_0(Var_46);
      Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_41, (MR_Integer) 4))));
      FvLoadCost_43 = mercury__float__float_1_f_0(Var_47);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegVars0_34, CellVar_38);
      if (succeeded)
      {
        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, RegVars0_34, &RegVars_44);
        Loads_45 = (Loads0_36 + FvLoadCost_43);
      }
      else
      {
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Float Var_51;

        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_6));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (CellVar_38));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
        }
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_48, RegVars0_34, &RegVars_44);
        Var_51 = (Loads0_36 + CvLoadCost_42);
        Loads_45 = (Var_51 + FvLoadCost_43);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_CountState_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_44));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StackVars_35));
        MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Loads_45);
        MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Stores_37);
      }
    }
  }
  else
  {
    MR_Word TuningParams_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 5))));
    MR_Integer NormalLoadCost_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_77, (MR_Integer) 0))));

    transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(NormalLoadCost_78, Var_6, STATE_VARIABLE_CountState_0_12, STATE_VARIABLE_CountState_13);
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CountState_13;

  transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CountState_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CountState_13));
}

static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0(
  MR_Word CountInfo_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_CountState_0_8,
  MR_Word * STATE_VARIABLE_CountState_9)
{
  MR_Word Var_10;
  MR_Box conv1_STATE_VARIABLE_CountState_9;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[4]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__tupling__cls_require_in_regs_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (CountInfo_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_10, Vars_6, ((MR_Box) (STATE_VARIABLE_CountState_0_8)), &conv1_STATE_VARIABLE_CountState_9);
  *STATE_VARIABLE_CountState_9 = ((MR_Word) (conv1_STATE_VARIABLE_CountState_9));
}

static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_STATE_VARIABLE_TotalAcc_11;

  transform_hlds__tupling__get_switch_total_count_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TotalAcc_11);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TotalAcc_11));
}

static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0(
  MR_Word ProcCounts_5,
  MR_Word ReverseGoalPathMap_6,
  MR_Word GoalId_7,
  MR_Float * RelFreq_8)
{
  MR_bool succeeded;
  MR_Word GoalPath_9;
  MR_Integer CaseTotal_10;
  MR_Integer SwitchTotal_11;
  MR_Word PathPort_16;
  MR_Word Var_22;
  MR_Box conv0_GoalPath_9;
  MR_Word ContextCount_17;
  MR_Box conv1_ContextCount_17;
  MR_Box conv3_SwitchTotal_11;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), ReverseGoalPathMap_6, ((MR_Box) (GoalId_7)), &conv0_GoalPath_9);
  GoalPath_9 = ((MR_Word) (conv0_GoalPath_9));
  {
    PathPort_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), PathPort_16, 0) = ((MR_Box) (GoalPath_9));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcCounts_5, ((MR_Box) (PathPort_16)), &conv1_ContextCount_17);
  if (succeeded)
  {
    ContextCount_17 = ((MR_Word) (conv1_ContextCount_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    CaseTotal_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ContextCount_17, (MR_Integer) 1))));
  else
    CaseTotal_10 = (MR_Integer) 0;
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[3]));
    MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__tupling__get_case_relative_frequency_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (GoalPath_9));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_22, ProcCounts_5, ((MR_Box) ((MR_Integer) 0)), &conv3_SwitchTotal_11);
  SwitchTotal_11 = ((MR_Integer) (conv3_SwitchTotal_11));
  succeeded = (SwitchTotal_11 == (MR_Integer) 0);
  if (succeeded)
    *RelFreq_8 = (MR_Float) 0.0000000000000000;
  else
  {
    MR_Float Var_12;
    MR_Float Var_13;

    Var_12 = mercury__float__float_1_f_0(CaseTotal_10);
    Var_13 = mercury__float__float_1_f_0(SwitchTotal_11);
    *RelFreq_8 = mercury__float__f_slash_2_f_0(Var_12, Var_13);
  }
}

static void MR_CALL 
transform_hlds__tupling__get_disjunct_relative_frequency_4_p_0(
  MR_Word ProcCounts_5,
  MR_Word ReverseGoalPathMap_6,
  MR_Word GoalId_7,
  MR_Float * RelFreq_8)
{
  MR_bool succeeded;
  MR_Word RevGoalPath_9;
  MR_Box conv0_RevGoalPath_9;
  MR_Word RevPrevGoalPath_10;
  MR_Word LastStep_11;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), ReverseGoalPathMap_6, ((MR_Box) (GoalId_7)), &conv0_RevGoalPath_9);
  RevGoalPath_9 = ((MR_Word) (conv0_RevGoalPath_9));
  succeeded = (RevGoalPath_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    RevPrevGoalPath_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevGoalPath_9, (MR_Integer) 0))));
    LastStep_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevGoalPath_9, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) LastStep_11)) == (MR_Integer) 2);
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word RevFirstDisjGoalPath_13;
    MR_Integer DisjCount_14;
    MR_Integer FirstDisjCount_15;
    MR_Word PathPort_24;
    MR_Word PathPort_30;
    MR_Word ContextCount_25;
    MR_Box conv1_ContextCount_25;
    MR_Word ContextCount_31;
    MR_Box conv2_ContextCount_31;

    {
      RevFirstDisjGoalPath_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevFirstDisjGoalPath_13, 0) = ((MR_Box) (RevPrevGoalPath_10));
      MR_hl_field(MR_mktag(1), RevFirstDisjGoalPath_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__tupling_scalar_common_3[4])));
    }
    {
      PathPort_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PathPort_24, 0) = ((MR_Box) (RevGoalPath_9));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcCounts_5, ((MR_Box) (PathPort_24)), &conv1_ContextCount_25);
    if (succeeded)
    {
      ContextCount_25 = ((MR_Word) (conv1_ContextCount_25));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      DisjCount_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ContextCount_25, (MR_Integer) 1))));
    else
      DisjCount_14 = (MR_Integer) 0;
    {
      PathPort_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PathPort_30, 0) = ((MR_Box) (RevFirstDisjGoalPath_13));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcCounts_5, ((MR_Box) (PathPort_30)), &conv2_ContextCount_31);
    if (succeeded)
    {
      ContextCount_31 = ((MR_Word) (conv2_ContextCount_31));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      FirstDisjCount_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ContextCount_31, (MR_Integer) 1))));
    else
      FirstDisjCount_15 = (MR_Integer) 0;
    succeeded = (FirstDisjCount_15 == (MR_Integer) 0);
    if (succeeded)
      *RelFreq_8 = (MR_Float) 0.0000000000000000;
    else
    {
      MR_Float Var_18;
      MR_Float Var_19;

      Var_18 = mercury__float__float_1_f_0(DisjCount_14);
      Var_19 = mercury__float__float_1_f_0(FirstDisjCount_15);
      *RelFreq_8 = mercury__float__f_slash_2_f_0(Var_18, Var_19);
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.get_disjunct_relative_frequency\'/4", (MR_String) "did not see disj(N) at head of goal path");
      return;
    }
}

static void MR_CALL 
transform_hlds__tupling__add_branch_costs_4_p_0(
  MR_Word BranchState_5,
  MR_Float Weight_6,
  MR_Word STATE_VARIABLE_CountState_0_16,
  MR_Word * STATE_VARIABLE_CountState_17)
{
  MR_Float BranchLoads_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), BranchState_5, (MR_Integer) 2)));
  MR_Float BranchStores_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), BranchState_5, (MR_Integer) 3)));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_16, (MR_Integer) 0))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_16, (MR_Integer) 1))));
  MR_Float Loads0_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_16, (MR_Integer) 2)));
  MR_Float Stores0_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_16, (MR_Integer) 3)));
  MR_Float Var_19;
  MR_Float Var_20 = (Weight_6 * BranchLoads_10);
  MR_Float Var_22;
  MR_Float Var_23;

  Var_19 = (Loads0_14 + Var_20);
  Var_23 = (Weight_6 * BranchStores_11);
  Var_22 = (Stores0_15 + Var_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CountState_17 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_19);
    MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Var_22);
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CountState_13;

  transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CountState_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CountState_13));
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0(
  MR_Word GoalExpr_6,
  MR_Word GoalInfo_7,
  MR_Word CountInfo_8,
  MR_Word STATE_VARIABLE_CountState_0_27,
  MR_Word * STATE_VARIABLE_CountState_28)
{
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0))));
  MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1))));
  MR_Word ArgVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));
  MR_Word Builtin_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_8, (MR_Integer) 0))));
  MR_Word CalleeProcInfo_18;
  MR_Word ProcInfo_19;
  MR_Word VarTable_20;
  MR_Word InputArgs_21;
  MR_Word OutputArgs_22;
  MR_Word Inputs_24;
  MR_Word Outputs_25;
  MR_Word _PredInfo_17;
  MR_Word Var_23;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_16, PredId_10, ProcId_11, &_PredInfo_17, &CalleeProcInfo_18);
  ProcInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_8, (MR_Integer) 3))));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_19, &VarTable_20);
  hlds__arg_info__partition_proc_call_args_7_p_0(ModuleInfo_16, CalleeProcInfo_18, VarTable_20, ArgVars_12, &InputArgs_21, &OutputArgs_22, &Var_23);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgs_21, &Inputs_24);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), OutputArgs_22, &Outputs_25);
  switch (Builtin_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_CountState_29_29;
        MR_Word Var_45;
        MR_Word RegVars0_48;
        MR_Word RegVars_49;
        MR_Box conv1_STATE_VARIABLE_CountState_29_29;
        MR_Word Var_54;
        MR_Float Var_55;
        MR_Float Var_56;

        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[4]));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (CountInfo_8));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_45, Inputs_24, ((MR_Box) (STATE_VARIABLE_CountState_0_27)), &conv1_STATE_VARIABLE_CountState_29_29);
        STATE_VARIABLE_CountState_29_29 = ((MR_Word) (conv1_STATE_VARIABLE_CountState_29_29));
        RegVars0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_29_29, (MR_Integer) 0))));
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Outputs_25, RegVars0_48, &RegVars_49);
        Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_29_29, (MR_Integer) 1))));
        Var_55 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_29_29, (MR_Integer) 2)));
        Var_56 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_29_29, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_CountState_28 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_49));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_55);
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Var_56);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeNeedAcrossCall_26;

        hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_26);
        transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(CountInfo_8, Inputs_24, OutputArgs_22, MaybeNeedAcrossCall_26, STATE_VARIABLE_CountState_0_27, STATE_VARIABLE_CountState_28);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32 = ((MR_Word) ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__conv1_Var_32));
  transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word TypeCtorInfo_83_83;
    MR_Integer Pos_33;
    MR_Integer Var_86;
    MR_Box conv2_Pos_33;

    (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__set__member_2_p_0((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_82_82, ((MR_Box) ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32)), (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26);
    if ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
    {
      TypeCtorInfo_83_83 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
      (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__assoc_list__search_3_p_0((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_82_82, TypeCtorInfo_83_83, (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVarArgPos_20, ((MR_Box) ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32)), &conv2_Pos_33);
      if ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
      {
        Pos_33 = ((MR_Integer) (conv2_Pos_33));
        (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_TRUE;
      }
      if ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
      {
        (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__list__index1_of_first_occurrence_3_p_0((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_82_82, (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14, ((MR_Box) ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32)), &Var_86);
        if ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
          (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = (Pos_33 == Var_86);
      }
    }
    (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
      transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__commit_0) == 0)
    {
      (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_82_82 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]);
      mercury__list__member_2_p_1((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_82_82, &(env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__conv1_Var_32, (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19, transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0(
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word CountInfo_9,
  MR_Word CalleeTuplingProposal_10,
  MR_Word STATE_VARIABLE_CountState_0_39,
  MR_Word * STATE_VARIABLE_CountState_40)
{
  struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s env;

  {
    MR_Word CalleePredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
    MR_Integer CalleeProcId_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
    MR_Word CellVar_18;
    MR_Word ModuleInfo_21;
    MR_Word CalleeProcInfo_23;
    MR_Word CallingProcInfo_24;
    MR_Word VarTable_25;
    MR_Word Outputs_27;
    MR_Word InputArgs_34;
    MR_Word Inputs_37;
    MR_Word MaybeNeedAcrossCall_38;
    MR_Word STATE_VARIABLE_CountState_42_42;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Unsigned packed_word_0;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_22;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_28;
    MR_Word Var_87;
    MR_Word Var_93;
    MR_Word Probe_95;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_94;
    MR_Box conv0_Probe_95;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;

    (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3)));
    Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3))) & (MR_Integer) 1);
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 4))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 5))));
    CellVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeTuplingProposal_10, (MR_Integer) 0))));
    (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeTuplingProposal_10, (MR_Integer) 1))));
    (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVarArgPos_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeTuplingProposal_10, (MR_Integer) 2))));
    ModuleInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 1))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 2))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 3))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 4))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 5))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 6))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 7))));
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_21, CalleePredId_12, CalleeProcId_13, &Var_22, &CalleeProcInfo_23);
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 0))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 1))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 2))));
    CallingProcInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 3))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 4))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 5))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 6))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 7))));
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(CallingProcInfo_24, &VarTable_25);
    hlds__arg_info__partition_proc_call_args_7_p_0(ModuleInfo_21, CalleeProcInfo_23, VarTable_25, (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14, &(env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26, &Outputs_27, &Var_28);
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 0))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 1))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 2))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 3))));
    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 4))));
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 5))));
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 6))));
    Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 7))));
    (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_93, ((MR_Box) (Var_87)), &conv0_Probe_95);
    if ((env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
    {
      Probe_95 = ((MR_Word) (conv0_Probe_95));
      (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
    {
      (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = (Probe_95 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Probe_95, (MR_Integer) 0))));
        Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Probe_95, (MR_Integer) 1))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Probe_95, (MR_Integer) 2))));
        transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_4(&env);
        (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = !((env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded);
      }
    }
    if ((env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
    {
      transform_hlds__tupling__cls_require_normal_var_in_reg_4_p_0(CountInfo_9, CellVar_18, STATE_VARIABLE_CountState_0_39, &STATE_VARIABLE_CountState_42_42);
      mercury__set__delete_list_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19, (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26, &InputArgs_34);
    }
    else
    {
      MR_Word TuplingParams_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 5))));
      MR_Float CellVarStoreCost_36;
      MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 3))));
      MR_Float Var_45;
      MR_Float Var_46;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Float Var_77;
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 0))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 1))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 2))));
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 3))));
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 4))));
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 6))));
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 7))));
      MR_Integer Var_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 0))));
      MR_Integer Var_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 1))));
      MR_Integer Var_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 2))));
      MR_Integer Var_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 4))));
      MR_Integer Var_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 5))));
      MR_Integer Var_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 6))));
      MR_Integer Var_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 7))));

      CellVarStoreCost_36 = mercury__float__float_1_f_0(Var_43);
      Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_39, (MR_Integer) 0))));
      Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_39, (MR_Integer) 1))));
      Var_77 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_39, (MR_Integer) 2)));
      Var_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_39, (MR_Integer) 3)));
      Var_45 = (Var_46 + CellVarStoreCost_36);
      {
        STATE_VARIABLE_CountState_42_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_42_42, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_42_42, 1) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_42_42, 2) = MR_box_float(Var_77);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_42_42, 3) = MR_box_float(Var_45);
      }
      InputArgs_34 = (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26;
    }
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgs_34, &Inputs_37);
    hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_8, &MaybeNeedAcrossCall_38);
    transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(CountInfo_9, Inputs_37, Outputs_27, MaybeNeedAcrossCall_38, STATE_VARIABLE_CountState_42_42, STATE_VARIABLE_CountState_40);
  }
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_CountState_5;

  transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_CountState_5);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_CountState_5));
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CountState_13;

  transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CountState_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CountState_13));
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(
  MR_Word CountInfo_8,
  MR_Word Inputs_9,
  MR_Word Outputs_10,
  MR_Word MaybeNeedAcrossCall_11,
  MR_Word STATE_VARIABLE_CountState_0_19,
  MR_Word * STATE_VARIABLE_CountState_20)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_CountState_21_21;
  MR_Word Var_31;
  MR_Box conv1_STATE_VARIABLE_CountState_21_21;

  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[4]));
    MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (CountInfo_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_31, Inputs_9, ((MR_Box) (STATE_VARIABLE_CountState_0_19)), &conv1_STATE_VARIABLE_CountState_21_21);
  STATE_VARIABLE_CountState_21_21 = ((MR_Word) (conv1_STATE_VARIABLE_CountState_21_21));
  if ((MaybeNeedAcrossCall_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.count_load_stores_for_call\'/7", (MR_String) "no need across call");
      return;
    }
  else
  {
    MR_Word NeedAcrossCall_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNeedAcrossCall_11, (MR_Integer) 0))));
    MR_Word ForwardVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall_14, (MR_Integer) 0))));
    MR_Word ResumeVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall_14, (MR_Integer) 1))));
    MR_Word NondetLiveVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall_14, (MR_Integer) 2))));
    MR_Word AllVars_18;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_CountState_26_26;
    MR_Word TuplingProposal_34;
    MR_Word TuningParams_35;
    MR_Word Var_36;
    MR_Word Var_46;
    MR_Word Var_65;
    MR_Word Probe_54;
    MR_Word Var_55;
    MR_Box conv2_Probe_54;
    MR_Box conv4_STATE_VARIABLE_CountState_26_26;
    MR_Word Var_67;
    MR_Float Var_68;
    MR_Float Var_69;

    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (NondetLiveVars_17));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (ResumeVars_16));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (ForwardVars_15));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
    }
    AllVars_18 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_22);
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_8, (MR_Integer) 1))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_8, (MR_Integer) 6))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_55, ((MR_Box) (Var_46)), &conv2_Probe_54);
    if (succeeded)
    {
      Probe_54 = ((MR_Word) (conv2_Probe_54));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      TuplingProposal_34 = Probe_54;
    else
      TuplingProposal_34 = (MR_Word) ((MR_Unsigned) 0U);
    TuningParams_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_8, (MR_Integer) 5))));
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (TuplingProposal_34));
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (TuningParams_35));
    }
    parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_36, AllVars_18, ((MR_Box) (STATE_VARIABLE_CountState_21_21)), &conv4_STATE_VARIABLE_CountState_26_26);
    STATE_VARIABLE_CountState_26_26 = ((MR_Word) (conv4_STATE_VARIABLE_CountState_26_26));
    Var_65 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Outputs_10);
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_26_26, (MR_Integer) 1))));
    Var_68 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_26_26, (MR_Integer) 2)));
    Var_69 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_26_26, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CountState_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_68);
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Var_69);
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_require_normal_var_in_reg_4_p_0(
  MR_Word CountInfo_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_CountState_0_10,
  MR_Word * STATE_VARIABLE_CountState_11)
{
  MR_Word TuningParams_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 5))));
  MR_Integer NormalLoadCost_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_8, (MR_Integer) 0))));

  transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(NormalLoadCost_9, Var_6, STATE_VARIABLE_CountState_0_10, STATE_VARIABLE_CountState_11);
}

static void MR_CALL 
transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(
  MR_Integer LoadCost_5,
  MR_Word Var_6,
  MR_Word CountState0_7,
  MR_Word * CountState_8)
{
  MR_bool succeeded;
  MR_Word RegVars0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountState0_7, (MR_Integer) 0))));
  MR_Word StackVars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountState0_7, (MR_Integer) 1))));
  MR_Float Loads0_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), CountState0_7, (MR_Integer) 2)));
  MR_Float Stores_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), CountState0_7, (MR_Integer) 3)));

  succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegVars0_9, Var_6);
  if (succeeded)
    *CountState_8 = CountState0_7;
  else
  {
    MR_Word RegVars_13;
    MR_Float Loads_14;
    MR_Float Var_15;

    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, RegVars0_9, &RegVars_13);
    Var_15 = mercury__float__float_1_f_0(LoadCost_5);
    Loads_14 = (Loads0_11 + Var_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *CountState_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StackVars_10));
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Loads_14);
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Stores_12);
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__prepare_proc_for_counting_5_p_0(
  MR_Word PredProcId_6,
  MR_Word STATE_VARIABLE_ReverseGoalPathMapMap_0_30,
  MR_Word * STATE_VARIABLE_ReverseGoalPathMapMap_31,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33)
{
  MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0))));
  MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1))));
  MR_Word PredInfo_12;
  MR_Word Markers_13;
  MR_Word ArgTypes_14;
  MR_Word Liveness0_15;
  MR_Word Globals_16;
  MR_Word TypeInfoLiveness_17;
  MR_Word OptNoReturnCalls_18;
  MR_Word AllocData_19;
  MR_Word ContainingGoalMap_20;
  MR_Word ReverseGoalPathMap_21;
  MR_Word Goal0_22;
  MR_Word FailVars_24;
  MR_Word NondetLiveness0_25;
  MR_Word Goal_26;
  MR_Word STATE_VARIABLE_ProcInfo_34_34;
  MR_Word STATE_VARIABLE_ProcInfo_35_35;
  MR_Word STATE_VARIABLE_ProcInfo_36_36;
  MR_Word STATE_VARIABLE_ProcInfo_39_39;
  MR_Word STATE_VARIABLE_ProcInfo_41_41;
  MR_Word _Liveness_28;
  MR_Word _NondetLiveness_29;
  MR_Box conv0__OptTupleAlloc_27;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_32, PredId_9, ProcId_10, &PredInfo_12, &STATE_VARIABLE_ProcInfo_34_34);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_12, &Markers_13);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_12, &ArgTypes_14);
  hlds__arg_info__generate_proc_arg_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_32, Markers_13, ArgTypes_14, STATE_VARIABLE_ProcInfo_34_34, &STATE_VARIABLE_ProcInfo_35_35);
  ll_backend__liveness__detect_liveness_proc_4_p_0(STATE_VARIABLE_ModuleInfo_0_32, PredProcId_6, STATE_VARIABLE_ProcInfo_35_35, &STATE_VARIABLE_ProcInfo_36_36);
  ll_backend__liveness__initial_liveness_4_p_0(STATE_VARIABLE_ModuleInfo_0_32, PredInfo_12, STATE_VARIABLE_ProcInfo_36_36, &Liveness0_15);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_32, &Globals_16);
  hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(PredInfo_12, Globals_16, &TypeInfoLiveness_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 365, &OptNoReturnCalls_18);
  {
    AllocData_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), AllocData_19, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_32));
    MR_hl_field(MR_mktag(0), AllocData_19, 1) = ((MR_Box) (STATE_VARIABLE_ProcInfo_36_36));
    MR_hl_field(MR_mktag(0), AllocData_19, 2) = ((MR_Box) (PredProcId_6));
    MR_hl_field(MR_mktag(0), AllocData_19, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), AllocData_19, 4) = (MR_Box) (((((MR_Unsigned) (TypeInfoLiveness_17) << 1)) | (MR_Unsigned) (OptNoReturnCalls_18)));
  }
  hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(STATE_VARIABLE_ModuleInfo_0_32, &ContainingGoalMap_20, STATE_VARIABLE_ProcInfo_36_36, &STATE_VARIABLE_ProcInfo_39_39);
  ReverseGoalPathMap_21 = mdbcomp__goal_path__create_reverse_goal_path_map_1_f_0(ContainingGoalMap_20);
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[3]), ((MR_Box) (PredProcId_6)), ((MR_Box) (ReverseGoalPathMap_21)), STATE_VARIABLE_ReverseGoalPathMapMap_0_30, STATE_VARIABLE_ReverseGoalPathMapMap_31);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_39_39, &Goal0_22);
  FailVars_24 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  NondetLiveness0_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[5]), AllocData_19, FailVars_24, Goal0_22, &Goal_26, ((MR_Box) ((MR_Integer) 0)), &conv0__OptTupleAlloc_27, Liveness0_15, &_Liveness_28, NondetLiveness0_25, &_NondetLiveness_29);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_26, STATE_VARIABLE_ProcInfo_39_39, &STATE_VARIABLE_ProcInfo_41_41);
  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_9, ProcId_10, PredInfo_12, STATE_VARIABLE_ProcInfo_41_41, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33);
}

static MR_Word MR_CALL 
transform_hlds__tupling__get_tupling_proposal_2_f_0(
  MR_Word CountInfo_4,
  MR_Word PredProcId_5)
{
  MR_bool succeeded;
  MR_Word TuplingProposal_6;
  MR_Word Probe_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_4, (MR_Integer) 6))));
  MR_Box conv0_Probe_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_8, ((MR_Box) (PredProcId_5)), &conv0_Probe_7);
  if (succeeded)
  {
    Probe_7 = ((MR_Word) (conv0_Probe_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    TuplingProposal_6 = Probe_7;
  else
    TuplingProposal_6 = (MR_Word) ((MR_Unsigned) 0U);
  return TuplingProposal_6;
}

static MR_Box MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__3_64;

  conv1_HeadVar__3_64 = transform_hlds__tupling__IntroducedFrom__func__add_transformed_proc__687__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_64));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0(
  MR_Word PredProcId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = HeadVar__7_7;
    *HeadVar__6_6 = HeadVar__5_5;
    *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
  }
  else
  {
    MR_Word FieldVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word PredId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_1, (MR_Integer) 0))));
    MR_Integer ProcId_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_1, (MR_Integer) 1))));
    MR_Word PredInfo_29;
    MR_Word IntervalInfo_30;
    MR_Integer TupleArity_31;
    MR_Word VarTable_32;
    MR_Word TupleArgTypes_33;
    MR_Word TupleConsType_34;
    MR_Word CellVar_35;
    MR_Word HeadVars_36;
    MR_Word ArgsToTuple_37;
    MR_Word InsertMap_38;
    MR_Integer Num_39;
    MR_Word AuxPredProcId_40;
    MR_Word CallAux_41;
    MR_Word TransformedProc_42;
    MR_Word STATE_VARIABLE_ProcInfo_49_49;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_ProcInfo_55_55;
    MR_Word Var_56;
    MR_Word STATE_VARIABLE_ProcInfo_57_57;
    MR_Word STATE_VARIABLE_ProcInfo_59_59;
    MR_Word STATE_VARIABLE_ModuleInfo_60_60;
    MR_Word Goal_68;
    MR_Word VarTable_69;
    MR_Word OutputArgs_71;
    MR_Word Counter0_73;
    MR_Integer CurInterval_74;
    MR_Word Counter_75;
    MR_Word CurIntervalId_76;
    MR_Word EndMap_77;
    MR_Word StartMap_78;
    MR_Word SuccMap_79;
    MR_Word VarsMap_80;
    MR_Word IntParams_81;
    MR_Word IntervalInfo0_82;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word _InputArgs_70;
    MR_Word _UnusedArgs_72;
    MR_Box conv0_Var_83;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_26, ProcId_27, &PredInfo_29, &STATE_VARIABLE_ProcInfo_49_49);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_49_49, &Goal_68);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_49_49, &VarTable_69);
    hlds__arg_info__partition_proc_args_5_p_0(STATE_VARIABLE_ModuleInfo_0_3, STATE_VARIABLE_ProcInfo_49_49, &_InputArgs_70, &OutputArgs_71, &_UnusedArgs_72);
    Counter0_73 = mercury__counter__init_1_f_0((MR_Integer) 1);
    mercury__counter__allocate_3_p_0(&CurInterval_74, Counter0_73, &Counter_75);
    CurIntervalId_76 = (MR_Word) (CurInterval_74);
    EndMap_77 = mercury__map__singleton_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (CurIntervalId_76)), ((MR_Box) ((MR_Unsigned) 4U)));
    StartMap_78 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0));
    SuccMap_79 = mercury__map__singleton_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[6]), ((MR_Box) (CurIntervalId_76)), ((MR_Box) ((MR_Unsigned) 0U)));
    Var_87 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputArgs_71);
    VarsMap_80 = mercury__map__singleton_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[7]), ((MR_Box) (CurIntervalId_76)), ((MR_Box) (Var_87)));
    {
      IntParams_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IntParams_81, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_3));
      MR_hl_field(MR_mktag(0), IntParams_81, 1) = ((MR_Box) (VarTable_69));
      MR_hl_field(MR_mktag(0), IntParams_81, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_89 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_90 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputArgs_71);
    Var_91 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0));
    Var_92 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0));
    Var_93 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0));
    Var_94 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), ((MR_Box) (CurIntervalId_76)));
    Var_95 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0));
    Var_96 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0));
    Var_97 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[8]));
    {
      IntervalInfo0_82 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 0) = ((MR_Box) (IntParams_81));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 1) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 2) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 3) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 4) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 5) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 6) = ((MR_Box) (CurIntervalId_76));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 7) = ((MR_Box) (Counter_75));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 8) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 9) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 10) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 11) = ((MR_Box) (StartMap_78));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 12) = ((MR_Box) (EndMap_77));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 13) = ((MR_Box) (SuccMap_79));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 14) = ((MR_Box) (VarsMap_80));
      MR_hl_field(MR_mktag(0), IntervalInfo0_82, 15) = ((MR_Box) (Var_97));
    }
    backend_libs__interval__build_interval_info_in_goal_5_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[9]), Goal_68, IntervalInfo0_82, &IntervalInfo_30, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_83);
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), FieldVars_21, &TupleArity_31);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_49_49, &VarTable_32);
    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_32, FieldVars_21, &TupleArgTypes_33);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (TupleArity_31));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_50, TupleArgTypes_33, &TupleConsType_34);
    hlds__hlds_pred__proc_info_create_var_from_type_6_p_0((MR_String) "TuplingCellVar", TupleConsType_34, (MR_Integer) 1, &CellVar_35, STATE_VARIABLE_ProcInfo_49_49, &STATE_VARIABLE_ProcInfo_55_55);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_55_55, &HeadVars_36);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (transform_hlds__tupling__add_transformed_proc_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (HeadVars_36));
    }
    ArgsToTuple_37 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_56, FieldVars_21);
    transform_hlds__tupling__build_insert_map_4_p_0(CellVar_35, FieldVars_21, IntervalInfo_30, &InsertMap_38);
    transform_hlds__tupling__make_transformed_proc_5_p_0(InsertMap_38, CellVar_35, FieldVars_21, STATE_VARIABLE_ProcInfo_55_55, &STATE_VARIABLE_ProcInfo_57_57);
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_57_57, &STATE_VARIABLE_ProcInfo_59_59, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_60_60);
    mercury__counter__allocate_3_p_0(&Num_39, HeadVar__5_5, HeadVar__6_6);
    transform_hlds__tupling__create_tupling_aux_pred_9_p_0(PredId_26, ProcId_27, PredInfo_29, STATE_VARIABLE_ProcInfo_59_59, Num_39, &AuxPredProcId_40, &CallAux_41, STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_ModuleInfo_4);
    {
      TransformedProc_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TransformedProc_42, 0) = ((MR_Box) (AuxPredProcId_40));
      MR_hl_field(MR_mktag(0), TransformedProc_42, 1) = ((MR_Box) (TupleConsType_34));
      MR_hl_field(MR_mktag(0), TransformedProc_42, 2) = ((MR_Box) (ArgsToTuple_37));
      MR_hl_field(MR_mktag(0), TransformedProc_42, 3) = ((MR_Box) (CallAux_41));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0), ((MR_Box) (PredProcId_1)), ((MR_Box) (TransformedProc_42)), HeadVar__7_7, HeadVar__8_8);
  }
}

static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InsertMap_19;

  transform_hlds__tupling__build_insert_map_2_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InsertMap_19);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InsertMap_19));
}

static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0(
  MR_Word CellVar_5,
  MR_Word FieldVars_6,
  MR_Word IntervalInfo_7,
  MR_Word * InsertMap_8)
{
  MR_Word FieldVarsSet_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Box conv1_InsertMap_8;

  FieldVarsSet_9 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FieldVars_6);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_10[0]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__tupling__build_insert_map_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (CellVar_5));
    MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (FieldVars_6));
    MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (FieldVarsSet_9));
  }
  Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_7, (MR_Integer) 9))));
  Var_12 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[10]));
  mercury__map__foldl_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[8]), Var_10, Var_11, ((MR_Box) (Var_12)), &conv1_InsertMap_8);
  *InsertMap_8 = ((MR_Word) (conv1_InsertMap_8));
}

static void MR_CALL 
transform_hlds__tupling__create_tupling_aux_pred_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word PredInfo_12,
  MR_Word ProcInfo_13,
  MR_Integer SeqNum_14,
  MR_Word * AuxPredProcId_15,
  MR_Word * CallAux_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43)
{
  MR_Word AuxHeadVars_18;
  MR_Word Goal_19;
  MR_Word GoalInfo_21;
  MR_Word InitialAuxInstMap_22;
  MR_Word TVarSet_23;
  MR_Word VarTable_24;
  MR_Word ClassContext_25;
  MR_Word RttiVarMaps_26;
  MR_Word InstVarSet_27;
  MR_Word Markers_28;
  MR_Word OrigOrigin_29;
  MR_Word HasParallelConj_30;
  MR_Word VarNameRemap_31;
  MR_Word PredModule_32;
  MR_String PredName_33;
  MR_Word PredOrFunc_34;
  MR_Integer ProcNum_35;
  MR_Word Context_36;
  MR_Integer LineNum_37;
  MR_Word Transform_38;
  MR_Word AuxPredSymName_39;
  MR_Word Origin_40;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word _ExtraArgs_41;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_13, &AuxHeadVars_18);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_13, &Goal_19);
  GoalInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_19, (MR_Integer) 1))));
  hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_42, ProcInfo_13, &InitialAuxInstMap_22);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_12, &TVarSet_23);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_13, &VarTable_24);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_12, &ClassContext_25);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_13, &RttiVarMaps_26);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_13, &InstVarSet_27);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_12, &Markers_28);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_12, &OrigOrigin_29);
  hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_13, &HasParallelConj_30);
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo_12, &VarNameRemap_31);
  PredModule_32 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
  PredName_33 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
  PredOrFunc_34 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_12);
  ProcNum_35 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_11);
  Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
  LineNum_37 = mercury__term_context__context_line_1_f_0(Context_36);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (LineNum_37));
    MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (SeqNum_14));
  }
  {
    Transform_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Transform_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(3), Transform_38, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_34));
    MR_hl_field(MR_mktag(3), Transform_38, 2) = ((MR_Box) (ProcNum_35));
    MR_hl_field(MR_mktag(3), Transform_38, 3) = ((MR_Box) (Var_45));
  }
  hlds__pred_name__make_transformed_pred_sym_name_4_p_0(PredModule_32, PredName_33, Transform_38, &AuxPredSymName_39);
  {
    Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (LineNum_37));
    MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (SeqNum_14));
  }
  {
    Origin_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Origin_40, 0) = ((MR_Box) (Var_46));
    MR_hl_field(MR_mktag(3), Origin_40, 1) = ((MR_Box) (OrigOrigin_29));
    MR_hl_field(MR_mktag(3), Origin_40, 2) = ((MR_Box) (PredId_10));
    MR_hl_field(MR_mktag(3), Origin_40, 3) = ((MR_Box) (ProcId_11));
  }
  hlds__hlds_pred__define_new_pred_19_p_0(AuxPredSymName_39, Origin_40, TVarSet_23, InstVarSet_27, VarTable_24, RttiVarMaps_26, ClassContext_25, InitialAuxInstMap_22, VarNameRemap_31, Markers_28, (MR_Integer) 1, HasParallelConj_30, AuxPredProcId_15, AuxHeadVars_18, &_ExtraArgs_41, Goal_19, CallAux_16, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43);
}

static MR_bool MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_36;

  succeeded = transform_hlds__tupling__IntroducedFrom__pred__make_transformed_proc__716__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_36);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_36));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0(
  MR_Word InsertMap_6,
  MR_Word CellVar_7,
  MR_Word FieldVarsList_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_31,
  MR_Word * STATE_VARIABLE_ProcInfo_32)
{
  MR_bool succeeded;
  MR_Word HeadVars0_10;
  MR_Word ArgModes0_11;
  MR_Word HeadVarsAndModes_14;
  MR_Word HeadVars_15;
  MR_Word ArgModes_16;
  MR_Word Goal0_17;
  MR_Word VarTable0_18;
  MR_Word Goal1_20;
  MR_Word VarTable1_21;
  MR_Word RenameMapA_22;
  MR_Word ProcStartDeconstruct_23;
  MR_Word ProcStartInsert_24;
  MR_Word Goal2_25;
  MR_Word VarTable_26;
  MR_Word RenameMapB_27;
  MR_Word Goal3_28;
  MR_Word RenameMap_29;
  MR_Word Goal_30;
  MR_Word Var_33;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_ProcInfo_38_38;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word STATE_VARIABLE_ProcInfo_42_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word STATE_VARIABLE_ProcInfo_50_50;
  MR_Word STATE_VARIABLE_ProcInfo_51_51;
  MR_Word InsertGoal_61;
  MR_Word GoalInfo_63;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_31, &HeadVars0_10);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_31, &ArgModes0_11);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[3]));
    MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (transform_hlds__tupling__make_transformed_proc_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (FieldVarsList_8));
  }
  mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[7]), Var_33, HeadVars0_10, ArgModes0_11, &HeadVarsAndModes_14);
  mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadVarsAndModes_14, &HeadVars_15, &ArgModes_16);
  {
    Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (CellVar_7));
    MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), HeadVars_15, Var_39);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(Var_37, STATE_VARIABLE_ProcInfo_0_31, &STATE_VARIABLE_ProcInfo_38_38);
  Var_44 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_16, Var_43);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(Var_41, STATE_VARIABLE_ProcInfo_38_38, &STATE_VARIABLE_ProcInfo_42_42);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_42_42, &Goal0_17);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_42_42, &VarTable0_18);
  Var_47 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]));
  backend_libs__interval__record_decisions_in_goal_8_p_0((MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__tupling_scalar_common_3[2])), InsertMap_6, Goal0_17, &Goal1_20, VarTable0_18, &VarTable1_21, Var_47, &RenameMapA_22);
  hlds__make_goal__deconstruct_tuple_3_p_0(CellVar_7, FieldVarsList_8, &ProcStartDeconstruct_23);
  Var_48 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FieldVarsList_8);
  {
    ProcStartInsert_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ProcStartInsert_24, 0) = ((MR_Box) (ProcStartDeconstruct_23));
    MR_hl_field(MR_mktag(0), ProcStartInsert_24, 1) = ((MR_Box) (Var_48));
  }
  Var_65 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]));
  backend_libs__interval__make_inserted_goal_7_p_0((MR_Word) ((MR_Unsigned) 0U), ProcStartInsert_24, &InsertGoal_61, VarTable1_21, &VarTable_26, Var_65, &RenameMapB_27);
  GoalInfo_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_20, (MR_Integer) 1))));
  {
    Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Goal1_20));
    MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (InsertGoal_61));
    MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_67));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_66, GoalInfo_63, &Goal2_25);
  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(RenameMapB_27, Goal2_25, &Goal3_28);
  mercury__map__old_merge_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), RenameMapA_22, RenameMapB_27, &RenameMap_29);
  Var_49 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_15);
  backend_libs__interval__apply_headvar_correction_4_p_0(Var_49, RenameMap_29, Goal3_28, &Goal_30);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_30, STATE_VARIABLE_ProcInfo_42_42, &STATE_VARIABLE_ProcInfo_50_50);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_26, STATE_VARIABLE_ProcInfo_50_50, &STATE_VARIABLE_ProcInfo_51_51);
  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_51_51, STATE_VARIABLE_ProcInfo_32);
}

static MR_bool MR_CALL 
transform_hlds__tupling__add_tupling_proposal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_30;

  succeeded = transform_hlds__tupling__IntroducedFrom__func__add_tupling_proposal__593__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_30);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_30));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling__add_tupling_proposal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word CandidateHeadVars_8,
  MR_Integer MinArgsToTuple_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_TuplingScheme_0_26,
  MR_Word * STATE_VARIABLE_TuplingScheme_27)
{
  MR_bool succeeded;
  MR_Word ProcInfo_13;
  MR_Word VarTable_14;
  MR_Word HeadVars_15;
  MR_Word FieldVarArgPos_16;
  MR_Word TuplingProposal_21;
  MR_Word Var_28;
  MR_Word Var_12;
  MR_Integer Var_31;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_7, PredProcId_10, &Var_12, &ProcInfo_13);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_13, &VarTable_14);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_13, &HeadVars_15);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[2]));
    MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (transform_hlds__tupling__add_tupling_proposal_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (PredProcId_10));
    MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (HeadVars_15));
  }
  FieldVarArgPos_16 = mercury__list__filter_map_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[2]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[6]), Var_28, CandidateHeadVars_8);
  Var_31 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[6]), FieldVarArgPos_16);
  succeeded = (Var_31 < MinArgsToTuple_9);
  if (succeeded)
    TuplingProposal_21 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DummyVarEntry_22;
    MR_Word DummyCellVar_23;
    MR_Word FieldVars_25;
    MR_Word Var_33;
    MR_Word Var_24;

    Var_33 = parse_tree__builtin_lib_types__void_type_0_f_0();
    {
      DummyVarEntry_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DummyVarEntry_22, 0) = ((MR_Box) ((MR_String) "DummyCellVar"));
      MR_hl_field(MR_mktag(0), DummyVarEntry_22, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), DummyVarEntry_22, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    parse_tree__var_table__add_var_entry_4_p_0(DummyVarEntry_22, &DummyCellVar_23, VarTable_14, &Var_24);
    FieldVars_25 = mercury__assoc_list__keys_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FieldVarArgPos_16);
    {
      TuplingProposal_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TuplingProposal_21, 0) = ((MR_Box) (DummyCellVar_23));
      MR_hl_field(MR_mktag(1), TuplingProposal_21, 1) = ((MR_Box) (FieldVars_25));
      MR_hl_field(MR_mktag(1), TuplingProposal_21, 2) = ((MR_Box) (FieldVarArgPos_16));
    }
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), ((MR_Box) (PredProcId_10)), ((MR_Box) (TuplingProposal_21)), STATE_VARIABLE_TuplingScheme_0_26, STATE_VARIABLE_TuplingScheme_27);
}

static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_23;

  transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__521__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_23);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_23));
}

static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0(
  MR_String HeadVarName_5,
  MR_Word ListOfOrigins_6,
  MR_Word CandidateHeadVars0_7,
  MR_Word * CandidateHeadVars_8)
{
  if ((ListOfOrigins_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *CandidateHeadVars_8 = CandidateHeadVars0_7;
  else
  {
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListOfOrigins_6, (MR_Integer) 1))));

    if ((Var_30 == (MR_Word) ((MR_Unsigned) 0U)))
      *CandidateHeadVars_8 = CandidateHeadVars0_7;
    else
    {
      MR_Word Origins_13;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Box conv1_Origins_13;

      Var_17 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]));
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[13]), ListOfOrigins_6, ((MR_Box) (Var_17)), &conv1_Origins_13);
      Origins_13 = ((MR_Word) (conv1_Origins_13));
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (HeadVarName_5));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Origins_13));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *CandidateHeadVars_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[2]), CandidateHeadVars0_7, Var_18);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_2_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word VarTable_9,
  MR_Word HeadVar_10,
  MR_Word ArgMode_11,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_17_17;
  MR_Word TypeInfo_18_18;
  MR_String Name_12;
  MR_Word Origins_13;
  MR_Word Entry_14;
  MR_Word Type_15;

  succeeded = check_hlds__mode_test__mode_is_input_2_p_0(ModuleInfo_7, ArgMode_11);
  if (succeeded)
  {
    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_9, HeadVar_10, &Entry_14);
    Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Entry_14, (MR_Integer) 0))));
    Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_14, (MR_Integer) 1))));
    succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_15);
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = (strcmp(Name_12, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_17_17 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
        TypeInfo_18_18 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]);
        Origins_13 = mercury__map__singleton_2_f_0(TypeCtorInfo_17_17, TypeInfo_18_18, ((MR_Box) (PredProcId_8)), ((MR_Box) (HeadVar_10)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Origins_13));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_individual_procs_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6,
  MR_Word STATE_VARIABLE_Counter_0_7,
  MR_Word * STATE_VARIABLE_Counter_8,
  MR_Word STATE_VARIABLE_TransformMap_0_9,
  MR_Word * STATE_VARIABLE_TransformMap_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TransformMap_10 = STATE_VARIABLE_TransformMap_0_9;
      *STATE_VARIABLE_Counter_8 = STATE_VARIABLE_Counter_0_7;
      *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
    }
    else
    {
      MR_Word Proc_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Procs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Var_37;
      MR_Word STATE_VARIABLE_ModuleInfo_38_38;
      MR_Word STATE_VARIABLE_Counter_39_39;
      MR_Word STATE_VARIABLE_TransformMap_40_40;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Counter_0_7;
      MR_Word next_value_of_STATE_VARIABLE_TransformMap_0_9;

      Var_37 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Proc_26)));
      transform_hlds__tupling__maybe_tuple_scc_10_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Var_37, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_38_38, STATE_VARIABLE_Counter_0_7, &STATE_VARIABLE_Counter_39_39, STATE_VARIABLE_TransformMap_0_9, &STATE_VARIABLE_TransformMap_40_40);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Procs_27;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_5 = STATE_VARIABLE_ModuleInfo_38_38;
      next_value_of_STATE_VARIABLE_Counter_0_7 = STATE_VARIABLE_Counter_39_39;
      next_value_of_STATE_VARIABLE_TransformMap_0_9 = STATE_VARIABLE_TransformMap_40_40;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_ModuleInfo_0_5 = next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      STATE_VARIABLE_Counter_0_7 = next_value_of_STATE_VARIABLE_Counter_0_7;
      STATE_VARIABLE_TransformMap_0_9 = next_value_of_STATE_VARIABLE_TransformMap_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_CandidateHeadVars_8;

  transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_CandidateHeadVars_8);
  *wrapper_arg_4 = ((MR_Box) (conv4_CandidateHeadVars_8));
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_CandidateHeadVars_8;

  transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_CandidateHeadVars_8);
  *wrapper_arg_2 = ((MR_Box) (conv3_CandidateHeadVars_8));
}

static MR_Box MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeProc_76 = ((MR_Word) ((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__conv1_CalleeProc_76));
  transform_hlds__tupling__maybe_tuple_scc_10_p_0_3(env_ptr);
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_80 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
  mercury__digraph__lookup_key_3_p_0((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_80, (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13, ((MR_Box) ((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeProc_76)), &(env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeKey_78);
  mercury__digraph__lookup_to_3_p_0((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_80, (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13, (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeKey_78, &(env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CallingKeys_79);
  (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeInfo_8_81 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[2]);
  (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = mercury__set__is_non_empty_1_p_0((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeInfo_8_81, (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CallingKeys_79);
  if ((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
    transform_hlds__tupling__maybe_tuple_scc_10_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__commit_0) == 0)
    {
      mercury__set__member_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &(env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__conv1_CalleeProc_76, (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, transform_hlds__tupling__maybe_tuple_scc_10_p_0_4, env_ptr);
      (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0(
  MR_Word TraceCounts_11,
  MR_Word TuningParams_12,
  MR_Word DepGraph_13,
  MR_Word SCC_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Counter_0_30,
  MR_Word * STATE_VARIABLE_Counter_31,
  MR_Word STATE_VARIABLE_TransformMap_0_32,
  MR_Word * STATE_VARIABLE_TransformMap_33)
{
  struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s env;

  (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13 = DepGraph_13;
  (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14 = SCC_14;
  {
    MR_Word Globals_18;
    MR_Word VeryVerbose_19;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_28, &Globals_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 73, &VeryVerbose_19);
    switch (VeryVerbose_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SccStrSet_21;
          MR_Word SccStrs_22;
          MR_String SccStr_23;
          MR_Word Var_36;
          MR_Word ProgressStream_56;

          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_10_p_0_1));
            MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_28));
          }
          SccStrSet_21 = mercury__set__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_36, (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14);
          SccStrs_22 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SccStrSet_21);
          SccStr_23 = mercury__string__join_list_2_f_0((MR_String) ", ", SccStrs_22);
          hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_28, &ProgressStream_56);
          mercury__io__write_string_4_p_0(ProgressStream_56, (MR_String) "% Considering tupling in ");
          mercury__io__write_string_4_p_0(ProgressStream_56, SccStr_23);
          mercury__io__write_string_4_p_0(ProgressStream_56, (MR_String) "...\n");
        }
        break;
    }
    transform_hlds__tupling__maybe_tuple_scc_10_p_0_5(&env);
    if ((env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
    {
      MR_Word CandidateHeadVars_26;
      MR_Integer MinArgsToTuple_27;
      MR_Word SingleProc_25;
      MR_Box conv2_SingleProc_25;
      MR_Integer Var_59;
      MR_Integer Var_60;
      MR_Integer Var_61;
      MR_Integer Var_62;
      MR_Integer Var_63;
      MR_Integer Var_64;
      MR_Integer Var_65;
      MR_Integer Var_44;

      (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, &conv2_SingleProc_25);
      if ((env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
      {
        SingleProc_25 = ((MR_Word) (conv2_SingleProc_25));
        (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = MR_TRUE;
      }
      if ((env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
        transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(STATE_VARIABLE_ModuleInfo_0_28, SingleProc_25, &CandidateHeadVars_26);
      else
      {
        MR_Word ListsOfCandidates_82;
        MR_Word FlatListOfCandidates_83;
        MR_Word CandidatesMultiMap_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Box conv5_CandidateHeadVars_26;

        {
          Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_9[1]));
          MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_10_p_0_6));
          MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_28));
        }
        Var_86 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14);
        mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[3]), Var_85, Var_86, &ListsOfCandidates_82);
        mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[2]), ListsOfCandidates_82, &FlatListOfCandidates_83);
        mercury__multi_map__from_flat_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[1]), FlatListOfCandidates_83, &CandidatesMultiMap_84);
        mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[4]), (MR_Word) (&transform_hlds__tupling_scalar_common_1[3]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[12]), CandidatesMultiMap_84, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_CandidateHeadVars_26);
        CandidateHeadVars_26 = ((MR_Word) (conv5_CandidateHeadVars_26));
      }
      Var_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 0))));
      Var_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 1))));
      Var_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 2))));
      Var_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 3))));
      Var_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 4))));
      Var_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 5))));
      Var_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 6))));
      MinArgsToTuple_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 7))));
      Var_44 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[2]), CandidateHeadVars_26);
      (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = (Var_44 < MinArgsToTuple_27);
      if ((env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
      {
        switch (VeryVerbose_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_57;

              hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_28, &ProgressStream_57);
              mercury__io__write_string_4_p_0(ProgressStream_57, (MR_String) "% Too few candidate headvars.\n");
            }
            break;
        }
        *STATE_VARIABLE_TransformMap_33 = STATE_VARIABLE_TransformMap_0_32;
        *STATE_VARIABLE_Counter_31 = STATE_VARIABLE_Counter_0_30;
        *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
      }
      else
        transform_hlds__tupling__maybe_tuple_scc_2_11_p_0(TraceCounts_11, TuningParams_12, (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, CandidateHeadVars_26, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29, STATE_VARIABLE_Counter_0_30, STATE_VARIABLE_Counter_31, STATE_VARIABLE_TransformMap_0_32, STATE_VARIABLE_TransformMap_33, VeryVerbose_19);
    }
    else
    {
      switch (VeryVerbose_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProgressStream_58;

            hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_28, &ProgressStream_58);
            mercury__io__write_string_4_p_0(ProgressStream_58, (MR_String) "% SCC has no local callers.\n");
          }
          break;
      }
      *STATE_VARIABLE_TransformMap_33 = STATE_VARIABLE_TransformMap_0_32;
      *STATE_VARIABLE_Counter_31 = STATE_VARIABLE_Counter_0_30;
      *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__6_6;

  succeeded = transform_hlds__tupling__candidate_headvars_of_proc_2_5_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_2,
  MR_Word * CandidateHeadVars_8)
{
  MR_bool succeeded;
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_2, (MR_Integer) 0))));
  MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_2, (MR_Integer) 1))));
  MR_Word ProcInfo_10;
  MR_Word VarTable_11;
  MR_Word HeadVars_12;
  MR_Word ArgModes_13;
  MR_Word Var_14;
  MR_Word Var_9;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_4, PredId_6, ProcId_7, &Var_9, &ProcInfo_10);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_10, &VarTable_11);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_10, &HeadVars_12);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_10, &ArgModes_13);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_8[1]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__tupling__candidate_headvars_of_proc_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ModuleInfo_4));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (PredProcId_2));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (VarTable_11));
  }
  *CandidateHeadVars_8 = mercury__list__filter_map_corresponding_3_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[2]), Var_14, HeadVars_12, ArgModes_13);
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Float conv5_STATE_VARIABLE_Loads_35;
  MR_Float conv4_STATE_VARIABLE_Stores_37;

  transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2), &conv5_STATE_VARIABLE_Loads_35, MR_unbox_float(wrapper_arg_4), &conv4_STATE_VARIABLE_Stores_37);
  *wrapper_arg_3 = MR_box_float(conv5_STATE_VARIABLE_Loads_35);
  *wrapper_arg_5 = MR_box_float(conv4_STATE_VARIABLE_Stores_37);
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ReverseGoalPathMapMap_31;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_33;

  transform_hlds__tupling__prepare_proc_for_counting_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ReverseGoalPathMapMap_31, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_33);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ReverseGoalPathMapMap_31));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_33));
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0(
  MR_Word TraceCounts_12,
  MR_Word TuningParams_13,
  MR_Word PredProcIds_14,
  MR_Word CandidateHeadVars_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Counter_0_28,
  MR_Word * STATE_VARIABLE_Counter_29,
  MR_Word STATE_VARIABLE_TransformMap_0_30,
  MR_Word * STATE_VARIABLE_TransformMap_31,
  MR_Word VeryVerbose_19)
{
  MR_bool succeeded;
  MR_Word ReverseGoalPathMapMap_20;
  MR_Word CostsWithoutTupling_21;
  MR_Word Var_33;
  MR_Word STATE_VARIABLE_ModuleInfo_34_34;
  MR_Word Var_35;
  MR_Float Loads_80;
  MR_Float Stores_81;
  MR_Word Var_82;
  MR_Box conv3_ReverseGoalPathMapMap_20;
  MR_Box conv2_STATE_VARIABLE_ModuleInfo_34_34;
  MR_Box conv7_Loads_80;
  MR_Box conv6_Stores_81;
  MR_Float Var_45;
  MR_Float Var_46;

  Var_33 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[3]));
  mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[4]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[11]), PredProcIds_14, ((MR_Box) (Var_33)), &conv3_ReverseGoalPathMapMap_20, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_26)), &conv2_STATE_VARIABLE_ModuleInfo_34_34);
  ReverseGoalPathMapMap_20 = ((MR_Word) (conv3_ReverseGoalPathMapMap_20));
  STATE_VARIABLE_ModuleInfo_34_34 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_34_34));
  Var_35 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0));
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[1]));
    MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_2));
    MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (TraceCounts_12));
    MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (TuningParams_13));
    MR_hl_field(MR_mktag(0), Var_82, 5) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_34_34));
    MR_hl_field(MR_mktag(0), Var_82, 6) = ((MR_Box) (Var_35));
    MR_hl_field(MR_mktag(0), Var_82, 7) = ((MR_Box) (ReverseGoalPathMapMap_20));
  }
  mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_82, PredProcIds_14, MR_box_float((MR_Float) 0.0000000000000000), &conv7_Loads_80, MR_box_float((MR_Float) 0.0000000000000000), &conv6_Stores_81);
  Loads_80 = MR_unbox_float(conv7_Loads_80);
  Stores_81 = MR_unbox_float(conv6_Stores_81);
  {
    CostsWithoutTupling_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), CostsWithoutTupling_21, 0) = MR_box_float(Loads_80);
    MR_hl_field(MR_mktag(0), CostsWithoutTupling_21, 1) = MR_box_float(Stores_81);
  }
  switch (VeryVerbose_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProgressStream_25;
        MR_String Var_60;
        MR_String Var_71;

        hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_34_34, &ProgressStream_25);
        mercury__io__write_string_4_p_0(ProgressStream_25, (MR_String) "% SCC costs without tupling = {");
        mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_3[0]), (MR_Integer) 4, Loads_80, &Var_60);
        mercury__io__write_string_4_p_0(ProgressStream_25, Var_60);
        mercury__io__write_string_4_p_0(ProgressStream_25, (MR_String) ", ");
        mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_3[0]), (MR_Integer) 4, Stores_81, &Var_71);
        mercury__io__write_string_4_p_0(ProgressStream_25, Var_71);
        mercury__io__write_string_4_p_0(ProgressStream_25, (MR_String) "}\n");
      }
      break;
  }
  Var_45 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithoutTupling_21, (MR_Integer) 0)));
  Var_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithoutTupling_21, (MR_Integer) 1)));
  succeeded = (Var_45 == ((MR_Float) 0.0000000000000000));
  if (succeeded)
    succeeded = (Var_46 == ((MR_Float) 0.0000000000000000));
  if (succeeded)
  {
    *STATE_VARIABLE_TransformMap_31 = STATE_VARIABLE_TransformMap_0_30;
    *STATE_VARIABLE_Counter_29 = STATE_VARIABLE_Counter_0_28;
    *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_34_34;
  }
  else
    transform_hlds__tupling__maybe_tuple_scc_3_13_p_0(TraceCounts_12, TuningParams_13, ReverseGoalPathMapMap_20, PredProcIds_14, CandidateHeadVars_15, CostsWithoutTupling_21, STATE_VARIABLE_ModuleInfo_34_34, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_Counter_0_28, STATE_VARIABLE_Counter_29, STATE_VARIABLE_TransformMap_0_30, STATE_VARIABLE_TransformMap_31, VeryVerbose_19);
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_3_13_p_0(
  MR_Word TraceCounts_14,
  MR_Word TuningParams_15,
  MR_Word ReverseGoalPathMapMap_16,
  MR_Word SCC_17,
  MR_Word CandidateHeadVars_18,
  MR_Word CostsWithoutTupling_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Counter_0_33,
  MR_Word * STATE_VARIABLE_Counter_34,
  MR_Word STATE_VARIABLE_TransformMap_0_35,
  MR_Word * STATE_VARIABLE_TransformMap_36,
  MR_Word VeryVerbose_23)
{
  MR_bool succeeded;
  MR_Word MaybeBestScheme_24;
  MR_Integer MinArgsToTuple_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_15, (MR_Integer) 7))));

  transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_p_0(TraceCounts_14, TuningParams_15, STATE_VARIABLE_ModuleInfo_0_31, ReverseGoalPathMapMap_16, SCC_17, CandidateHeadVars_18, MinArgsToTuple_79, (MR_Word) ((MR_Unsigned) 0U), &MaybeBestScheme_24);
  if ((MaybeBestScheme_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
    *STATE_VARIABLE_Counter_34 = STATE_VARIABLE_Counter_0_33;
    *STATE_VARIABLE_TransformMap_36 = STATE_VARIABLE_TransformMap_0_35;
  }
  else
  {
    MR_Word CostsWithTupling_25;
    MR_Word TuplingScheme_26;
    MR_Float LoadsWithTupling_27;
    MR_Float StoresWithTupling_28;
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBestScheme_24, (MR_Integer) 0))));
    MR_Float LoadsWithoutTupling_91;
    MR_Float StoresWithoutTupling_92;
    MR_Float LoadsWithTupling_93;
    MR_Float StoresWithTupling_94;
    MR_Float CostsRatio_95;
    MR_Float TotalWithoutTupling_96;
    MR_Float TotalWithTupling_97;
    MR_Integer Var_98;

    CostsWithTupling_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));
    TuplingScheme_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
    LoadsWithTupling_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithTupling_25, (MR_Integer) 0)));
    StoresWithTupling_28 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithTupling_25, (MR_Integer) 1)));
    switch (VeryVerbose_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProgressStream_54;
          MR_String Var_59;
          MR_String Var_70;

          hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, &ProgressStream_54);
          mercury__io__write_string_4_p_0(ProgressStream_54, (MR_String) "% SCC costs with tupling = {");
          mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_3[0]), (MR_Integer) 4, LoadsWithTupling_27, &Var_59);
          mercury__io__write_string_4_p_0(ProgressStream_54, Var_59);
          mercury__io__write_string_4_p_0(ProgressStream_54, (MR_String) ", ");
          mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_3[0]), (MR_Integer) 4, StoresWithTupling_28, &Var_70);
          mercury__io__write_string_4_p_0(ProgressStream_54, Var_70);
          mercury__io__write_string_4_p_0(ProgressStream_54, (MR_String) "}\n");
        }
        break;
    }
    LoadsWithoutTupling_91 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithoutTupling_19, (MR_Integer) 0)));
    StoresWithoutTupling_92 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithoutTupling_19, (MR_Integer) 1)));
    LoadsWithTupling_93 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithTupling_25, (MR_Integer) 0)));
    StoresWithTupling_94 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithTupling_25, (MR_Integer) 1)));
    Var_98 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_15, (MR_Integer) 6))));
    CostsRatio_95 = mercury__float__float_1_f_0(Var_98);
    TotalWithoutTupling_96 = (LoadsWithoutTupling_91 + StoresWithoutTupling_92);
    TotalWithTupling_97 = (LoadsWithTupling_93 + StoresWithTupling_94);
    succeeded = (TotalWithTupling_97 == ((MR_Float) 0.0000000000000000));
    if (succeeded)
      succeeded = (TotalWithoutTupling_96 > ((MR_Float) 0.0000000000000000));
    else
    {
      MR_Float Var_100;
      MR_Float Var_101 = (TotalWithoutTupling_96 * ((MR_Float) 100.00000000000000));

      Var_100 = mercury__float__f_slash_2_f_0(Var_101, TotalWithTupling_97);
      succeeded = (Var_100 >= CostsRatio_95);
    }
    if (succeeded)
    {
      switch (VeryVerbose_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProgressStream_55;

            hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, &ProgressStream_55);
            mercury__io__write_string_4_p_0(ProgressStream_55, (MR_String) "% Proceeding with tupling\n");
          }
          break;
      }
      transform_hlds__tupling__add_transformed_procs_7_p_0(TuplingScheme_26, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32, STATE_VARIABLE_Counter_0_33, STATE_VARIABLE_Counter_34, STATE_VARIABLE_TransformMap_0_35, STATE_VARIABLE_TransformMap_36);
    }
    else
    {
      *STATE_VARIABLE_TransformMap_36 = STATE_VARIABLE_TransformMap_0_35;
      *STATE_VARIABLE_Counter_34 = STATE_VARIABLE_Counter_0_33;
      *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_p_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word Var_26,
  MR_Word HeadVar__2_2,
  MR_Integer MinLength_3,
  MR_Word STATE_VARIABLE_Acc_0_4,
  MR_Word * STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_0_4;
    else
    {
      MR_Word Tail_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Acc_19_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_4;

      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_p_0(Var_22, Var_23, Var_24, Var_25, Var_26, HeadVar__2_2, MinLength_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Tail_14;
      next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Word Var_20,
  MR_Word Var_21,
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word List_7,
  MR_Integer Length_8,
  MR_Word STATE_VARIABLE_Acc_0_11,
  MR_Word * STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Front_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__list__take_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[2]), Length_8, List_7, &Front_10);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Acc_13_13;
      MR_Integer Var_14;
      MR_Integer next_value_of_Length_8;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_11;

      transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0(Var_19, Var_20, Var_21, Var_22, Var_23, Front_10, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_13_13);
      Var_14 = (MR_Integer) ((MR_Unsigned) Length_8 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Length_8 = Var_14;
      next_value_of_STATE_VARIABLE_Acc_0_11 = STATE_VARIABLE_Acc_13_13;
      Length_8 = next_value_of_Length_8;
      STATE_VARIABLE_Acc_0_11 = next_value_of_STATE_VARIABLE_Acc_0_11;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
    break;
  }
}

static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Float conv3_STATE_VARIABLE_Loads_35;
  MR_Float conv2_STATE_VARIABLE_Stores_37;

  transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2), &conv3_STATE_VARIABLE_Loads_35, MR_unbox_float(wrapper_arg_4), &conv2_STATE_VARIABLE_Stores_37);
  *wrapper_arg_3 = MR_box_float(conv3_STATE_VARIABLE_Loads_35);
  *wrapper_arg_5 = MR_box_float(conv2_STATE_VARIABLE_Stores_37);
}

static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TuplingScheme_27;

  transform_hlds__tupling__add_tupling_proposal_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TuplingScheme_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TuplingScheme_27));
}

static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0(
  MR_Word TraceCounts_9,
  MR_Word TuningParams_10,
  MR_Word ModuleInfo_11,
  MR_Word ReverseGoalPathMapMap_12,
  MR_Word SCC_13,
  MR_Word CandidateHeadVars_14,
  MR_Word MaybeBestScheme0_15,
  MR_Word * MaybeBestScheme_16)
{
  MR_bool succeeded;
  MR_Integer MinArgsToTuple_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_10, (MR_Integer) 7))));
  MR_Word TuplingScheme_18;
  MR_Word Costs_19;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Float Loads_39;
  MR_Float Stores_40;
  MR_Word Var_41;
  MR_Box conv1_TuplingScheme_18;
  MR_Box conv5_Loads_39;
  MR_Box conv4_Stores_40;

  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_1));
    MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ModuleInfo_11));
    MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (CandidateHeadVars_14));
    MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (MinArgsToTuple_17));
  }
  Var_23 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0));
  mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[5]), Var_22, SCC_13, ((MR_Box) (Var_23)), &conv1_TuplingScheme_18);
  TuplingScheme_18 = ((MR_Word) (conv1_TuplingScheme_18));
  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[1]));
    MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_2));
    MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (TraceCounts_9));
    MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (TuningParams_10));
    MR_hl_field(MR_mktag(0), Var_41, 5) = ((MR_Box) (ModuleInfo_11));
    MR_hl_field(MR_mktag(0), Var_41, 6) = ((MR_Box) (TuplingScheme_18));
    MR_hl_field(MR_mktag(0), Var_41, 7) = ((MR_Box) (ReverseGoalPathMapMap_12));
  }
  mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_41, SCC_13, MR_box_float((MR_Float) 0.0000000000000000), &conv5_Loads_39, MR_box_float((MR_Float) 0.0000000000000000), &conv4_Stores_40);
  Loads_39 = MR_unbox_float(conv5_Loads_39);
  Stores_40 = MR_unbox_float(conv4_Stores_40);
  {
    Costs_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Costs_19, 0) = MR_box_float(Loads_39);
    MR_hl_field(MR_mktag(0), Costs_19, 1) = MR_box_float(Stores_40);
  }
  if ((MaybeBestScheme0_15 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Word PrevCosts_20;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBestScheme0_15, (MR_Integer) 0))));
    MR_Float LoadsA_46;
    MR_Float StoresA_47;
    MR_Float LoadsB_48;
    MR_Float StoresB_49;
    MR_Float TotalA_50;
    MR_Float TotalB_51;

    PrevCosts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
    LoadsA_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), Costs_19, (MR_Integer) 0)));
    StoresA_47 = MR_unbox_float((MR_hl_field(MR_mktag(0), Costs_19, (MR_Integer) 1)));
    LoadsB_48 = MR_unbox_float((MR_hl_field(MR_mktag(0), PrevCosts_20, (MR_Integer) 0)));
    StoresB_49 = MR_unbox_float((MR_hl_field(MR_mktag(0), PrevCosts_20, (MR_Integer) 1)));
    TotalA_50 = (LoadsA_46 + StoresA_47);
    TotalB_51 = (LoadsB_48 + StoresB_49);
    succeeded = (TotalA_50 < TotalB_51);
  }
  if (succeeded)
  {
    MR_Word Var_25;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Costs_19));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (TuplingScheme_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeBestScheme_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
    }
  }
  else
    *MaybeBestScheme_16 = MaybeBestScheme0_15;
}

static void MR_CALL 
transform_hlds__tupling__add_transformed_procs_7_p_0_1(
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
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_4;
  MR_Word conv1_HeadVar__6_6;
  MR_Word conv0_HeadVar__8_8;

  transform_hlds__tupling__add_transformed_proc_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ModuleInfo_4, ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__8_8);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_4));
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__8_8));
}

static void MR_CALL 
transform_hlds__tupling__add_transformed_procs_7_p_0(
  MR_Word TuplingScheme_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word STATE_VARIABLE_Counter_0_14,
  MR_Word * STATE_VARIABLE_Counter_15,
  MR_Word STATE_VARIABLE_TransformMap_0_16,
  MR_Word * STATE_VARIABLE_TransformMap_17)
{
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_13;
  MR_Box conv4_STATE_VARIABLE_Counter_15;
  MR_Box conv3_STATE_VARIABLE_TransformMap_17;

  mercury__map__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[0]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[10]), TuplingScheme_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_12)), &conv5_STATE_VARIABLE_ModuleInfo_13, ((MR_Box) (STATE_VARIABLE_Counter_0_14)), &conv4_STATE_VARIABLE_Counter_15, ((MR_Box) (STATE_VARIABLE_TransformMap_0_16)), &conv3_STATE_VARIABLE_TransformMap_17);
  *STATE_VARIABLE_ModuleInfo_13 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_13));
  *STATE_VARIABLE_Counter_15 = ((MR_Word) (conv4_STATE_VARIABLE_Counter_15));
  *STATE_VARIABLE_TransformMap_17 = ((MR_Word) (conv3_STATE_VARIABLE_TransformMap_17));
}

void MR_CALL 
transform_hlds__tupling__tuple_arguments_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  MR_bool succeeded;
  MR_Word Globals_7;
  MR_Word OptTuple_8;
  MR_String TraceCountsFile_9;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &Globals_7);
  libs__globals__get_opt_tuple_2_p_0(Globals_7, &OptTuple_8);
  TraceCountsFile_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), OptTuple_8, (MR_Integer) 40))));
  succeeded = (strcmp(TraceCountsFile_9, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_Word ErrorStream_10;

    hlds__passes_aux__get_error_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_16, &ErrorStream_10);
    libs__compiler_util__report_warning_5_p_0(ErrorStream_10, Globals_7, (MR_String) "Warning: --tuple requires --tuple-trace-counts-file to work.\n");
    *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
  }
  else
  {
    MR_Word Result_11;

    mdbcomp__trace_counts__read_trace_counts_source_4_p_0(TraceCountsFile_9, &Result_11);
    if (((MR_tag((MR_Word) Result_11)) == (MR_Integer) 1))
    {
      MR_String Reason_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_11, (MR_Integer) 0))));
      MR_String Message_15;
      MR_Word ErrorStream_33;
      MR_String Var_159;
      MR_String Var_161;
      MR_String Var_162;

      hlds__passes_aux__get_error_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_16, &ErrorStream_33);
      Var_159 = mercury__string__f_43_43_2_f_0(Reason_14, (MR_String) ")\n");
      Var_161 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_159);
      Var_162 = mercury__string__f_43_43_2_f_0(TraceCountsFile_9, Var_161);
      Message_15 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: unable to read trace count summary from ", Var_162);
      libs__compiler_util__report_warning_5_p_0(ErrorStream_33, Globals_7, Message_15);
      *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
    }
    else
    {
      MR_Word TraceCounts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_11, (MR_Integer) 1))));

      transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17, TraceCounts_13);
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ModuleInfo_9;

  transform_hlds__tupling__fix_calls_in_procs_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ModuleInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_9));
}

static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_29;
  MR_Word conv1_STATE_VARIABLE_Counter_31;
  MR_Word conv0_STATE_VARIABLE_TransformMap_33;

  transform_hlds__tupling__maybe_tuple_scc_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_29, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Counter_31, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_TransformMap_33);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_29));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Counter_31));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_TransformMap_33));
}

static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word TraceCounts0_5)
{
  MR_Word Globals_6;
  MR_Word OptTuple_7;
  MR_Integer CellVarLoadCost_8;
  MR_Integer CellVarStoreCost_9;
  MR_Integer FieldVarLoadCost_10;
  MR_Integer FieldVarStoreCost_11;
  MR_Integer CostsRatio_12;
  MR_Integer MinArgsToTuple_13;
  MR_Integer NormalVarStoreCost_14;
  MR_Integer NormalVarLoadCost_15;
  MR_Word TuningParams_16;
  MR_Word ModuleName_17;
  MR_Word TraceCounts_18;
  MR_Word DepInfo_19;
  MR_Word DepGraph_20;
  MR_Word SCCs_21;
  MR_Word TransformMap_23;
  MR_Word STATE_VARIABLE_ModuleInfo_26_26;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_ModuleInfo_28_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word STATE_VARIABLE_ModuleInfo_33_33;
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_28_28;
  MR_Box conv4_Var_22;
  MR_Box conv3_TransformMap_23;
  MR_Box conv7_STATE_VARIABLE_ModuleInfo_33_33;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &Globals_6);
  libs__globals__get_opt_tuple_2_p_0(Globals_6, &OptTuple_7);
  CellVarStoreCost_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_7, (MR_Integer) 10))));
  CellVarLoadCost_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_7, (MR_Integer) 11))));
  FieldVarStoreCost_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_7, (MR_Integer) 12))));
  FieldVarLoadCost_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_7, (MR_Integer) 13))));
  CostsRatio_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_7, (MR_Integer) 24))));
  MinArgsToTuple_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_7, (MR_Integer) 25))));
  NormalVarStoreCost_14 = mercury__int__min_2_f_0(CellVarStoreCost_9, FieldVarStoreCost_11);
  NormalVarLoadCost_15 = mercury__int__min_2_f_0(CellVarLoadCost_8, FieldVarLoadCost_10);
  {
    TuningParams_16 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TuningParams_16, 0) = ((MR_Box) (NormalVarLoadCost_15));
    MR_hl_field(MR_mktag(0), TuningParams_16, 1) = ((MR_Box) (NormalVarStoreCost_14));
    MR_hl_field(MR_mktag(0), TuningParams_16, 2) = ((MR_Box) (CellVarLoadCost_8));
    MR_hl_field(MR_mktag(0), TuningParams_16, 3) = ((MR_Box) (CellVarStoreCost_9));
    MR_hl_field(MR_mktag(0), TuningParams_16, 4) = ((MR_Box) (FieldVarLoadCost_10));
    MR_hl_field(MR_mktag(0), TuningParams_16, 5) = ((MR_Box) (FieldVarStoreCost_11));
    MR_hl_field(MR_mktag(0), TuningParams_16, 6) = ((MR_Box) (CostsRatio_12));
    MR_hl_field(MR_mktag(0), TuningParams_16, 7) = ((MR_Box) (MinArgsToTuple_13));
  }
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &ModuleName_17);
  mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0(ModuleName_17, TraceCounts0_5, &TraceCounts_18);
  hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_26_26, &DepInfo_19);
  DepGraph_20 = libs__dependency_graph__dependency_info_get_graph_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_19);
  SCCs_21 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_19);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (TraceCounts_18));
    MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (TuningParams_16));
    MR_hl_field(MR_mktag(0), Var_27, 5) = ((MR_Box) (DepGraph_20));
  }
  Var_29 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_30 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0));
  mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[0]), Var_27, SCCs_21, ((MR_Box) (STATE_VARIABLE_ModuleInfo_26_26)), &conv5_STATE_VARIABLE_ModuleInfo_28_28, ((MR_Box) (Var_29)), &conv4_Var_22, ((MR_Box) (Var_30)), &conv3_TransformMap_23);
  STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_28_28));
  TransformMap_23 = ((MR_Word) (conv3_TransformMap_23));
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_2));
    MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (TransformMap_23));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_32, SCCs_21, ((MR_Box) (STATE_VARIABLE_ModuleInfo_28_28)), &conv7_STATE_VARIABLE_ModuleInfo_33_33);
  STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_33_33));
  transform_hlds__tupling__fix_calls_in_transformed_procs_3_p_0(TransformMap_23, STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_25);
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_transformed_procs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_14;

  transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ModuleInfo_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_14));
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_transformed_procs_3_p_0(
  MR_Word TransformMap_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  MR_Word Var_8;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_7;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (transform_hlds__tupling__fix_calls_in_transformed_procs_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (TransformMap_4));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_8, TransformMap_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_6)), &conv1_STATE_VARIABLE_ModuleInfo_7);
  *STATE_VARIABLE_ModuleInfo_7 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_7));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tupling____Unify____candidate_headvar_origins_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tupling____Compare____candidate_headvar_origins_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tupling____Unify____candidate_headvars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tupling____Compare____candidate_headvars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tupling____Unify____costs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tupling____Compare____costs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tupling____Unify____count_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tupling____Compare____count_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tupling____Unify____count_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tupling____Compare____count_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tupling____Unify____opt_tuple_alloc_0_0();
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tupling____Compare____opt_tuple_alloc_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tupling____Unify____transform_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tupling____Compare____transform_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tupling____Unify____transformed_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tupling____Compare____transformed_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tupling____Unify____tuning_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tupling____Compare____tuning_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tupling____Unify____tupling_proposal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tupling____Compare____tupling_proposal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tupling____Unify____tupling_scheme_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tupling____Compare____tupling_scheme_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__6_6;

  transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
}

void mercury__transform_hlds__tupling__init(void)
{
}

void mercury__transform_hlds__tupling__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_candidate_headvar_origins_0);
	MR_register_type_ctor_info(&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_candidate_headvars_0);
	MR_register_type_ctor_info(&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_costs_0);
	MR_register_type_ctor_info(&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_info_0);
	MR_register_type_ctor_info(&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0);
	MR_register_type_ctor_info(&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_opt_tuple_alloc_0);
	MR_register_type_ctor_info(&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transform_map_0);
	MR_register_type_ctor_info(&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0);
	MR_register_type_ctor_info(&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tuning_params_0);
	MR_register_type_ctor_info(&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0);
	MR_register_type_ctor_info(&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_scheme_0);
}

void mercury__transform_hlds__tupling__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__tupling__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.tupling.
