/*
** Automatically generated from `tupling.m'
** by the Mercury compiler,
** version rotd-2018-09-03
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.interval.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.live_vars.mih"
#include "ll_backend.liveness.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "float.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s {
  MR_bool transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14;
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19;
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVarArgPos_20;
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26;
  jmp_buf transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_83_83;
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32;
  MR_Box transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__conv0_Var_32;
};

struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s {
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13;
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14;
  MR_bool transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded;
  jmp_buf transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__commit_0;
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_71;
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeInfo_8_72;
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeProc_65;
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeKey_69;
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CallingKeys_70;
  MR_Box transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__conv1_CalleeProc_65;
};


static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_tupling_proposal_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

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

static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_value_ordered_opt_tuple_alloc_0[1];

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
transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1918__1_3_p_0(
  MR_Word ArgList_5,
  MR_Integer HeadVar__2_11,
  MR_Word * HeadVar__3_12);

static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__698__1_3_f_0(
  MR_Word FieldVarsList_7,
  MR_Word LambdaHeadVar__1_37,
  MR_Word LambdaHeadVar__2_38,
  MR_Word * LambdaHeadVar__3_39);

static MR_Integer MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__add_transformed_proc__668__1_2_f_0(
  MR_Word HeadVars_36,
  MR_Word HeadVar__2_66);

static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__add_tupling_proposal__576__1_3_f_0(
  MR_Word PredProcId_4,
  MR_Word HeadVars_17,
  MR_Word LambdaHeadVar__1_30,
  MR_Word * LambdaHeadVar__2_31);

static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__504__1_3_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_22,
  MR_Word * HeadVar__3_23);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void);

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_p_0(
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

static MR_bool MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_cases_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_7,
  MR_Word * STATE_VARIABLE_RttiVarMaps_8,
  MR_Word TransformMap_9);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_7,
  MR_Word * STATE_VARIABLE_RttiVarMaps_8,
  MR_Word TransformMap_9);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_conj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_7,
  MR_Word * STATE_VARIABLE_RttiVarMaps_8,
  MR_Word TransformMap_9);

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_9_p_0(
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word STATE_VARIABLE_VarSet_0_78,
  MR_Word * STATE_VARIABLE_VarSet_79,
  MR_Word STATE_VARIABLE_VarTypes_0_80,
  MR_Word * STATE_VARIABLE_VarTypes_81,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_82,
  MR_Word * STATE_VARIABLE_RttiVarMaps_83,
  MR_Word TransformMap_15);

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

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_proc_3_p_0(
  MR_Word CountInfo_4,
  MR_Float * Loads_5,
  MR_Float * Stores_6);

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
  MR_Word STATE_VARIABLE_CountState_0_113,
  MR_Word * STATE_VARIABLE_CountState_114);

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
transform_hlds__tupling__reset_count_state_counts_2_p_0(
  MR_Word STATE_VARIABLE_CountState_0_4,
  MR_Word * STATE_VARIABLE_CountState_5);

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
  MR_Word STATE_VARIABLE_ReverseGoalPathMapMap_0_31,
  MR_Word * STATE_VARIABLE_ReverseGoalPathMapMap_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34);

static MR_Word MR_CALL 
transform_hlds__tupling__get_own_tupling_proposal_1_f_0(
  MR_Word CountInfo_3);

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
transform_hlds__tupling__build_interval_info_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ProcInfo_5,
  MR_Word * IntervalInfo_6);

static void MR_CALL 
transform_hlds__tupling__create_aux_pred_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word PredInfo_12,
  MR_Word ProcInfo_13,
  MR_Integer Counter_14,
  MR_Word * AuxPredProcId_15,
  MR_Word * CallAux_16,
  MR_Word ModuleInfo0_17,
  MR_Word * ModuleInfo_18);

static MR_bool MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0(
  MR_Word CellVar_6,
  MR_Word FieldVarsList_7,
  MR_Word InsertMap_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_34,
  MR_Word * STATE_VARIABLE_ProcInfo_35);

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
  MR_Word PredProcId_4,
  MR_Word STATE_VARIABLE_TuplingScheme_0_27,
  MR_Word * STATE_VARIABLE_TuplingScheme_28);

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
transform_hlds__tupling__candidate_headvars_of_proc_2_6_f_0(
  MR_Word PredProcId_8,
  MR_Word VarSet_9,
  MR_Word VarTypes_10,
  MR_Word ModuleInfo_11,
  MR_Word HeadVar_12,
  MR_Word ArgMode_13,
  MR_Word * HeadVar__7_7);

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

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Counter_0_26,
  MR_Word * STATE_VARIABLE_Counter_27,
  MR_Word STATE_VARIABLE_TransformMap_0_28,
  MR_Word * STATE_VARIABLE_TransformMap_29);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_Counter_0_27,
  MR_Word * STATE_VARIABLE_Counter_28,
  MR_Word STATE_VARIABLE_TransformMap_0_29,
  MR_Word * STATE_VARIABLE_TransformMap_30,
  MR_Word VeryVerbose_19);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_7_p_0(
  MR_Word TraceCounts_8,
  MR_Word TuningParams_9,
  MR_Word ModuleInfo_10,
  MR_Word TuplingScheme_11,
  MR_Word ReverseGoalPathMapMap_12,
  MR_Word SCC_13,
  MR_Word * Costs_14);

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_3_13_p_0(
  MR_Word TraceCounts_14,
  MR_Word TuningParams_15,
  MR_Word ReverseGoalPathMapMap_16,
  MR_Word SCC_17,
  MR_Word CandidateHeadVars_18,
  MR_Word CostsWithoutTupling_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31,
  MR_Word STATE_VARIABLE_Counter_0_32,
  MR_Word * STATE_VARIABLE_Counter_33,
  MR_Word STATE_VARIABLE_TransformMap_0_34,
  MR_Word * STATE_VARIABLE_TransformMap_35,
  MR_Word VeryVerbose_23);

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
transform_hlds__tupling__find_best_tupling_scheme_7_p_0(
  MR_Word TraceCounts_8,
  MR_Word TuningParams_9,
  MR_Word ModuleInfo_10,
  MR_Word ReverseGoalPathMapMap_11,
  MR_Word PredProcIds_12,
  MR_Word CandidateHeadVars_13,
  MR_Word * MaybeBestScheme_14);

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_p_0(
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word Var_26,
  MR_Word Var_27,
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
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word TraceCounts0_5);

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

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_3[2][13];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_4[8][7];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_5[4][8];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_6[1][9];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_7[1][11];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_8[6][1];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_9[2][10];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_10[4][6];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_11[1][5];




static /* final */ const MR_Box transform_hlds__tupling_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_2[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__transform_hlds__tupling__opt_tuple_alloc__arity0__)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_opt_tuple_alloc_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__unit__unit__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[1]))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_2[6]))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_2[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[1])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[10]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__tupling__add_transformed_procs_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_10_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_10[1])),
    ((MR_Box) (transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_11[0])),
    ((MR_Box) (transform_hlds__tupling__count_load_stores_in_goal_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_11[0])),
    ((MR_Box) (transform_hlds__tupling__count_load_stores_in_goal_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_3[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
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

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_4[8][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&transform_hlds__tupling__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_info_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_5[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tuning_params_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_tupling_proposal_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_tupling_proposal_0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_8[6][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 1)) | (MR_Unsigned) ((MR_Integer) 0)))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "TuplingCellVar"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_9[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__tupling__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_10[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_11[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____candidate_headvar_origins_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____candidate_headvar_origins_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "candidate_headvar_origins",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_candidate_headvars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____candidate_headvars_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____candidate_headvars_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "candidate_headvars",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__tupling__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
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
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_costs_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____costs_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____costs_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "costs",
  {     transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_costs_0 },
  {     transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_costs_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_costs_0
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
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_info_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____count_info_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____count_info_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "count_info",
  {     transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_info_0 },
  {     transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_info_0
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
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_state_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____count_state_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____count_state_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "count_state",
  {     transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_state_0 },
  {     transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_state_0
};

static const MR_EnumFunctorDesc transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0 = {
  (MR_String) "opt_tuple_alloc",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_value_ordered_opt_tuple_alloc_0[1] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__tupling____Unify____opt_tuple_alloc_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____opt_tuple_alloc_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "opt_tuple_alloc",
  {     transform_hlds__tupling__transform_hlds__tupling__enum_name_ordered_opt_tuple_alloc_0 },
  {     transform_hlds__tupling__transform_hlds__tupling__enum_value_ordered_opt_tuple_alloc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_opt_tuple_alloc_0
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____transform_map_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____transform_map_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "transform_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_transformed_proc_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
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
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_transformed_proc_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____transformed_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____transformed_proc_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "transformed_proc",
  {     transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_transformed_proc_0 },
  {     transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_transformed_proc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_transformed_proc_0
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
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tuning_params_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____tuning_params_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____tuning_params_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "tuning_params",
  {     transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tuning_params_0 },
  {     transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tuning_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tuning_params_0
};

static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0 = {
  (MR_String) "no_tupling",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
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
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
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
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_1,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____tupling_proposal_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____tupling_proposal_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "tupling_proposal",
  {     transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tupling_proposal_0 },
  {     transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tupling_proposal_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tupling_proposal_0
};

const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_scheme_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____tupling_scheme_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____tupling_scheme_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "tupling_scheme",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_BaseTypeclassInfo base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__transform_hlds__tupling__opt_tuple_alloc__arity0__[9] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001)),
  ((MR_Box) (transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001)),
  ((MR_Box) (transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001)),
  ((MR_Box) (transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__unit__unit__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0_10001))
};

static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1918__1_3_p_0(
  MR_Word ArgList_5,
  MR_Integer HeadVar__2_11,
  MR_Word * HeadVar__3_12)
{
  {
    MR_Box conv0_HeadVar__3_12;

    mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), ArgList_5, HeadVar__2_11, &conv0_HeadVar__3_12);
    *HeadVar__3_12 = ((MR_Word) (conv0_HeadVar__3_12));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__698__1_3_f_0(
  MR_Word FieldVarsList_7,
  MR_Word LambdaHeadVar__1_37,
  MR_Word LambdaHeadVar__2_38,
  MR_Word * LambdaHeadVar__3_39)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), ((MR_Box) (LambdaHeadVar__1_37)), FieldVarsList_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *LambdaHeadVar__3_39 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LambdaHeadVar__1_37));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LambdaHeadVar__2_38));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Integer MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__add_transformed_proc__668__1_2_f_0(
  MR_Word HeadVars_36,
  MR_Word HeadVar__2_66)
{
  {
    MR_Integer HeadVar__3_67;

    HeadVar__3_67 = mercury__list__det_index1_of_first_occurrence_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), HeadVars_36, ((MR_Box) (HeadVar__2_66)));
    return HeadVar__3_67;
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__add_tupling_proposal__576__1_3_f_0(
  MR_Word PredProcId_4,
  MR_Word HeadVars_17,
  MR_Word LambdaHeadVar__1_30,
  MR_Word * LambdaHeadVar__2_31)
{
  {
    MR_bool succeeded;
    MR_Word Var_21;
    MR_Integer Pos_22;
    MR_Word Annotation_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_30, (MR_Integer) 1))));
    MR_Box conv0_Var_21;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), Annotation_37, ((MR_Box) (PredProcId_4)), &conv0_Var_21);
    if (succeeded)
    {
      Var_21 = ((MR_Word) (conv0_Var_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), HeadVars_17, ((MR_Box) (Var_21)), &Pos_22);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *LambdaHeadVar__2_31 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Pos_22));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__504__1_3_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_22,
  MR_Word * HeadVar__3_23)
{
  {
    mercury__map__old_merge_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), HeadVar__1_21, HeadVar__2_22, HeadVar__3_23);
  }
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0();
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
{
  {
  }
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0();
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
{
  {
  }
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0();
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
{
  {
  }
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0();
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
{
  {
  }
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
  transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_p_0(HeadVar__5_5, HeadVar__6_6);
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_p_0(
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
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
        MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word Var_16;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), &Var_16, ((MR_Box) (Var_25)), ((MR_Box) (ArgY1_11)));
        succeeded = (Var_16 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_16;
        else
        {
          MR_Word Var_17;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[12]), &Var_17, ((MR_Box) (Var_24)), ((MR_Box) (ArgY2_13)));
          succeeded = (Var_17 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_17;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[13]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY3_15)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0(
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

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
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
}

static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        parse_tree__prog_data____Compare____mer_type_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[11]), &Var_14, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0(
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
}

static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
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
  {
    MR_bool succeeded;

    succeeded = transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Float ArgX3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Float ArgY3_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Float ArgX4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Float ArgY4_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[7]), &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[7]), &Var_13, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__private_builtin__builtin_compare_float_3_p_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0(
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
}

static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word Var_20;

      hlds__hlds_module____Compare____module_info_0_0(&Var_20, ArgX1_4, ArgY1_5);
      succeeded = (Var_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_20;
      else
      {
        MR_Word Var_21;

        hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_21, ArgX2_6, ArgY2_7);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          MR_Word Var_22;

          hlds__hlds_pred____Compare____pred_info_0_0(&Var_22, ArgX3_8, ArgY3_9);
          succeeded = (Var_22 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_22;
          else
          {
            MR_Word Var_23;

            hlds__hlds_pred____Compare____proc_info_0_0(&Var_23, ArgX4_10, ArgY4_11);
            succeeded = (Var_23 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_23;
            else
            {
              MR_Word Var_24;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[9]), &Var_24, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_24;
              else
              {
                MR_Word Var_25;

                transform_hlds__tupling____Compare____tuning_params_0_0(&Var_25, ArgX6_14, ArgY6_15);
                succeeded = (Var_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_25;
                else
                {
                  MR_Word Var_26;

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[5]), &Var_26, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_26 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_26;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
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

static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Integer ArgX2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Integer ArgX5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgY5_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Integer ArgX6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer ArgY6_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Integer ArgX7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer ArgY7_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Integer ArgX8_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Integer ArgY8_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word Var_20;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_20, ArgX1_4, ArgY1_5);
      succeeded = (Var_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_20;
      else
      {
        MR_Word Var_21;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_21, ArgX2_6, ArgY2_7);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          MR_Word Var_22;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_22, ArgX3_8, ArgY3_9);
          succeeded = (Var_22 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_22;
          else
          {
            MR_Word Var_23;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_23, ArgX4_10, ArgY4_11);
            succeeded = (Var_23 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_23;
            else
            {
              MR_Word Var_24;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_24, ArgX5_12, ArgY5_13);
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_24;
              else
              {
                MR_Word Var_25;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_25, ArgX6_14, ArgY6_15);
                succeeded = (Var_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_25;
                else
                {
                  MR_Word Var_26;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_26, ArgX7_16, ArgY7_17);
                  succeeded = (Var_26 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_26;
                  else
                    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX8_18, ArgY8_19);
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
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0(
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
      MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Float ArgX2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Float ArgY2_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__private_builtin__builtin_compare_float_3_p_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0(
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
}

static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling__get_switch_total_count_2_5_p_0(
  MR_Word SwitchGoalPath_6,
  MR_Word PathPort_7,
  MR_Word LineNoAndCount_8,
  MR_Integer STATE_VARIABLE_TotalAcc_0_10,
  MR_Integer * STATE_VARIABLE_TotalAcc_11)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) PathPort_7)) == (MR_Integer) 1);
    MR_Word LastStep_18;
    MR_Word Var_21;

    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PathPort_7, (MR_Integer) 0))));
      succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(SwitchGoalPath_6, Var_21);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) SwitchGoalPath_6)) == (MR_Integer) 1);
        if (succeeded)
        {
          LastStep_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SwitchGoalPath_6, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) LastStep_18)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), LastStep_18, (MR_Integer) 0))) == (MR_Integer) 0)));
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
}

static void MR_CALL 
transform_hlds__tupling__get_proc_calls_2_p_0(
  MR_Word ProcCounts_3,
  MR_Integer * Count_4)
{
  {
    MR_Word ContextCount_5;
    MR_Box conv0_ContextCount_5;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcCounts_3, ((MR_Box) (&transform_hlds__tupling_scalar_common_8[5])), &conv0_ContextCount_5);
    ContextCount_5 = ((MR_Word) (conv0_ContextCount_5));
    *Count_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ContextCount_5, (MR_Integer) 1))));
  }
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
  {
    MR_Word PredProcId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

    transform_hlds__tupling__fix_calls_in_proc_4_p_0(TransformMap_6, PredProcId_8, STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14);
  }
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_proc_4_p_0(
  MR_Word TransformMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  {
    MR_bool succeeded;
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word PredInfo_10;
    MR_Word Origin_11;
    MR_Word STATE_VARIABLE_ProcInfo_25_25;
    MR_Word Var_26;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_23, PredId_6, ProcId_7, &PredInfo_10, &STATE_VARIABLE_ProcInfo_25_25);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &Origin_11);
    succeeded = ((MR_tag((MR_Word) Origin_11)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_11, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
    else
    {
      MR_Word Goal0_15;
      MR_Word VarTypes0_16;
      MR_Word VarSet0_17;
      MR_Word RttiVarMaps0_18;
      MR_Word Goal_19;
      MR_Word VarSet_20;
      MR_Word VarTypes_21;
      MR_Word RttiVarMaps_22;
      MR_Word STATE_VARIABLE_ProcInfo_27_27;
      MR_Word STATE_VARIABLE_ProcInfo_28_28;
      MR_Word STATE_VARIABLE_ProcInfo_29_29;
      MR_Word STATE_VARIABLE_ProcInfo_30_30;
      MR_Word STATE_VARIABLE_ProcInfo_32_32;
      MR_Word STATE_VARIABLE_ProcInfo_34_34;
      MR_Word STATE_VARIABLE_ModuleInfo_35_35;

      hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_25_25, &Goal0_15);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_25_25, &VarTypes0_16);
      hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_25_25, &VarSet0_17);
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_25_25, &RttiVarMaps0_18);
      transform_hlds__tupling__fix_calls_in_goal_9_p_0(Goal0_15, &Goal_19, VarSet0_17, &VarSet_20, VarTypes0_16, &VarTypes_21, RttiVarMaps0_18, &RttiVarMaps_22, TransformMap_5);
      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_19, STATE_VARIABLE_ProcInfo_25_25, &STATE_VARIABLE_ProcInfo_27_27);
      hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_20, STATE_VARIABLE_ProcInfo_27_27, &STATE_VARIABLE_ProcInfo_28_28);
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_21, STATE_VARIABLE_ProcInfo_28_28, &STATE_VARIABLE_ProcInfo_29_29);
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_22, STATE_VARIABLE_ProcInfo_29_29, &STATE_VARIABLE_ProcInfo_30_30);
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_30_30, &STATE_VARIABLE_ProcInfo_32_32);
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_32_32, &STATE_VARIABLE_ProcInfo_34_34, STATE_VARIABLE_ModuleInfo_0_23, &STATE_VARIABLE_ModuleInfo_35_35);
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_6, ProcId_7, PredInfo_10, STATE_VARIABLE_ProcInfo_34_34, STATE_VARIABLE_ModuleInfo_35_35, STATE_VARIABLE_ModuleInfo_24);
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_cases_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_7,
  MR_Word * STATE_VARIABLE_RttiVarMaps_8,
  MR_Word TransformMap_9)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RttiVarMaps_8 = STATE_VARIABLE_RttiVarMaps_0_7;
    *STATE_VARIABLE_VarTypes_6 = STATE_VARIABLE_VarTypes_0_5;
    *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
  }
  else
  {
    MR_Word Case0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_22;
    MR_Word Cases_23;
    MR_Word MainConsId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_20, (MR_Integer) 0))));
    MR_Word OtherConsIds_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_20, (MR_Integer) 1))));
    MR_Word Goal0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_20, (MR_Integer) 2))));
    MR_Word Goal_31;
    MR_Word STATE_VARIABLE_VarSet_38_38;
    MR_Word STATE_VARIABLE_VarTypes_39_39;
    MR_Word STATE_VARIABLE_RttiVarMaps_40_40;

    transform_hlds__tupling__fix_calls_in_goal_9_p_0(Goal0_30, &Goal_31, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_38_38, STATE_VARIABLE_VarTypes_0_5, &STATE_VARIABLE_VarTypes_39_39, STATE_VARIABLE_RttiVarMaps_0_7, &STATE_VARIABLE_RttiVarMaps_40_40, TransformMap_9);
    {
      Case_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_22, 0) = ((MR_Box) (MainConsId_28));
      MR_hl_field(MR_mktag(0), Case_22, 1) = ((MR_Box) (OtherConsIds_29));
      MR_hl_field(MR_mktag(0), Case_22, 2) = ((MR_Box) (Goal_31));
    }
    transform_hlds__tupling__fix_calls_in_cases_9_p_0(Cases0_21, &Cases_23, STATE_VARIABLE_VarSet_38_38, STATE_VARIABLE_VarSet_4, STATE_VARIABLE_VarTypes_39_39, STATE_VARIABLE_VarTypes_6, STATE_VARIABLE_RttiVarMaps_40_40, STATE_VARIABLE_RttiVarMaps_8, TransformMap_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_23));
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_7,
  MR_Word * STATE_VARIABLE_RttiVarMaps_8,
  MR_Word TransformMap_9)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RttiVarMaps_8 = STATE_VARIABLE_RttiVarMaps_0_7;
    *STATE_VARIABLE_VarTypes_6 = STATE_VARIABLE_VarTypes_0_5;
    *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
  }
  else
  {
    MR_Word Goal0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_22;
    MR_Word Goals_23;
    MR_Word STATE_VARIABLE_VarSet_34_34;
    MR_Word STATE_VARIABLE_VarTypes_35_35;
    MR_Word STATE_VARIABLE_RttiVarMaps_36_36;

    transform_hlds__tupling__fix_calls_in_goal_9_p_0(Goal0_20, &Goal_22, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_34_34, STATE_VARIABLE_VarTypes_0_5, &STATE_VARIABLE_VarTypes_35_35, STATE_VARIABLE_RttiVarMaps_0_7, &STATE_VARIABLE_RttiVarMaps_36_36, TransformMap_9);
    transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(Goals0_21, &Goals_23, STATE_VARIABLE_VarSet_34_34, STATE_VARIABLE_VarSet_4, STATE_VARIABLE_VarTypes_35_35, STATE_VARIABLE_VarTypes_6, STATE_VARIABLE_RttiVarMaps_36_36, STATE_VARIABLE_RttiVarMaps_8, TransformMap_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_23));
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_conj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_7,
  MR_Word * STATE_VARIABLE_RttiVarMaps_8,
  MR_Word TransformMap_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RttiVarMaps_8 = STATE_VARIABLE_RttiVarMaps_0_7;
      *STATE_VARIABLE_VarTypes_6 = STATE_VARIABLE_VarTypes_0_5;
      *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
    }
    else
    {
      MR_Word Goal0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal1_27;
      MR_Word Goals1_28;
      MR_Word STATE_VARIABLE_VarSet_37_37;
      MR_Word STATE_VARIABLE_VarTypes_38_38;
      MR_Word STATE_VARIABLE_RttiVarMaps_39_39;
      MR_Word ConjGoals_29;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Unsigned packed_args_0;

      transform_hlds__tupling__fix_calls_in_goal_9_p_0(Goal0_20, &Goal1_27, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarTypes_0_5, &STATE_VARIABLE_VarTypes_38_38, STATE_VARIABLE_RttiVarMaps_0_7, &STATE_VARIABLE_RttiVarMaps_39_39, TransformMap_9);
      transform_hlds__tupling__fix_calls_in_conj_9_p_0(Goals0_21, &Goals1_28, STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarSet_4, STATE_VARIABLE_VarTypes_38_38, STATE_VARIABLE_VarTypes_6, STATE_VARIABLE_RttiVarMaps_39_39, STATE_VARIABLE_RttiVarMaps_8, TransformMap_9);
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_27, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_43)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 0))) == (MR_Integer) 2)));
      if (succeeded)
      {
        packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 1)));
        Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 1))) & (MR_Integer) 1);
        ConjGoals_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 2))));
        succeeded = (Var_44 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConjGoals_29, Goals1_28);
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal1_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_28));
        }
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_9_p_0(
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word STATE_VARIABLE_VarSet_0_78,
  MR_Word * STATE_VARIABLE_VarSet_79,
  MR_Word STATE_VARIABLE_VarTypes_0_80,
  MR_Word * STATE_VARIABLE_VarTypes_81,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_82,
  MR_Word * STATE_VARIABLE_RttiVarMaps_83,
  MR_Word TransformMap_15)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 0))));
    MR_Word GoalInfo0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_57 = (MR_Word) (MR_body((MR_Word) (GoalExpr0_16), (MR_Integer) 0));
          MR_Word SubGoal_58;
          MR_Word GoalExpr_59;

          transform_hlds__tupling__fix_calls_in_goal_9_p_0(SubGoal0_57, &SubGoal_58, STATE_VARIABLE_VarSet_0_78, STATE_VARIABLE_VarSet_79, STATE_VARIABLE_VarTypes_0_80, STATE_VARIABLE_VarTypes_81, STATE_VARIABLE_RttiVarMaps_0_82, STATE_VARIABLE_RttiVarMaps_83, TransformMap_15);
          GoalExpr_59 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (SubGoal_58)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_11 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_59));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *Goal_11 = Goal0_10;
          *STATE_VARIABLE_VarSet_79 = STATE_VARIABLE_VarSet_0_78;
          *STATE_VARIABLE_VarTypes_81 = STATE_VARIABLE_VarTypes_0_80;
          *STATE_VARIABLE_RttiVarMaps_83 = STATE_VARIABLE_RttiVarMaps_0_82;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CalledPredId0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 0))));
          MR_Integer CalledProcId0_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 1))));
          MR_Word Args0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 2))));
          MR_Word Builtin_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 3)));
          MR_Word TupleConsType_43;
          MR_Word ArgsToTuple_44;
          MR_Word CallAux0_45;
          MR_Word CallAuxInfo_46;
          MR_Word TypeCtorInfo_149_149;
          MR_Word TypeCtorInfo_150_150;
          MR_Word TransformedProc_41;
          MR_Word Var_113;
          MR_Word Var_114;
          MR_Box conv0_TransformedProc_41;

          succeeded = (Builtin_38 == (MR_Integer) 1);
          if (succeeded)
          {
            TypeCtorInfo_149_149 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
            TypeCtorInfo_150_150 = (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0);
            {
              Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (CalledPredId0_35));
              MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (CalledProcId0_36));
            }
            succeeded = mercury__map__search_3_p_0(TypeCtorInfo_149_149, TypeCtorInfo_150_150, TransformMap_15, ((MR_Box) (Var_113)), &conv0_TransformedProc_41);
            if (succeeded)
            {
              TransformedProc_41 = ((MR_Word) (conv0_TransformedProc_41));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              TupleConsType_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TransformedProc_41, (MR_Integer) 1))));
              ArgsToTuple_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TransformedProc_41, (MR_Integer) 2))));
              Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TransformedProc_41, (MR_Integer) 3))));
              CallAux0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_114, (MR_Integer) 0))));
              CallAuxInfo_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_114, (MR_Integer) 1))));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            MR_Word CellVar_47;
            MR_Word TupledArgs_48;
            MR_Word UntupledArgs_49;
            MR_Word ConstructGoal_50;
            MR_Word CallGoal_53;
            MR_Word Goal1_54;
            MR_Word RequantifyVars_55;
            MR_Word STATE_VARIABLE_VarSet_116_116;
            MR_Word STATE_VARIABLE_VarTypes_117_117;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_125;
            MR_Word CallAux_52;
            MR_Word NewArgs_51;
            MR_Word Var_118;
            MR_Word Var_143;
            MR_Integer Var_144;
            MR_Word Var_147;
            MR_Word Var_148;
            MR_Unsigned packed_args_2;
            MR_Word Var_56;

            mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "TuplingCellVarForCall", &CellVar_47, STATE_VARIABLE_VarSet_0_78, &STATE_VARIABLE_VarSet_116_116);
            hlds__vartypes__add_var_type_4_p_0(CellVar_47, TupleConsType_43, STATE_VARIABLE_VarTypes_0_80, &STATE_VARIABLE_VarTypes_117_117);
            transform_hlds__tupling__extract_tupled_args_from_list_4_p_0(Args0_37, ArgsToTuple_44, &TupledArgs_48, &UntupledArgs_49);
            hlds__make_goal__construct_tuple_3_p_0(CellVar_47, TupledArgs_48, &ConstructGoal_50);
            {
              Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (CellVar_47));
              MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            NewArgs_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), UntupledArgs_49, Var_118);
            succeeded = ((MR_tag((MR_Word) CallAux0_45)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallAux0_45, (MR_Integer) 0))));
              Var_144 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), CallAux0_45, (MR_Integer) 1))));
              packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), CallAux0_45, (MR_Integer) 3)));
              Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallAux0_45, (MR_Integer) 4))));
              Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallAux0_45, (MR_Integer) 5))));
              {
                CallAux_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), CallAux_52, 0) = ((MR_Box) (Var_143));
                MR_hl_field(MR_mktag(2), CallAux_52, 1) = ((MR_Box) (Var_144));
                MR_hl_field(MR_mktag(2), CallAux_52, 2) = ((MR_Box) (NewArgs_51));
                MR_hl_field(MR_mktag(2), CallAux_52, 3) = (MR_Box) (packed_args_2);
                MR_hl_field(MR_mktag(2), CallAux_52, 4) = ((MR_Box) (Var_147));
                MR_hl_field(MR_mktag(2), CallAux_52, 5) = ((MR_Box) (Var_148));
              }
              succeeded = MR_TRUE;
            }
            if (succeeded)
              {
                CallGoal_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CallGoal_53, 0) = ((MR_Box) (CallAux_52));
                MR_hl_field(MR_mktag(0), CallGoal_53, 1) = ((MR_Box) (CallAuxInfo_46));
              }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.fix_calls_in_goal\'/9", (MR_String) "not a call template");
                return;
              }
            }
            {
              Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (CallGoal_53));
              MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (ConstructGoal_50));
              MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
            }
            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_122, GoalInfo0_17, &Goal1_54);
            {
              Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (CellVar_47));
              MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Args0_37));
            }
            RequantifyVars_55 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_125);
            hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, RequantifyVars_55, &Var_56, Goal1_54, Goal_11, STATE_VARIABLE_VarSet_116_116, STATE_VARIABLE_VarSet_79, STATE_VARIABLE_VarTypes_117_117, STATE_VARIABLE_VarTypes_81, STATE_VARIABLE_RttiVarMaps_0_82, STATE_VARIABLE_RttiVarMaps_83);
          }
          else
          {
            *Goal_11 = Goal0_10;
            *STATE_VARIABLE_RttiVarMaps_83 = STATE_VARIABLE_RttiVarMaps_0_82;
            *STATE_VARIABLE_VarTypes_81 = STATE_VARIABLE_VarTypes_0_80;
            *STATE_VARIABLE_VarSet_79 = STATE_VARIABLE_VarSet_0_78;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_11 = Goal0_10;
              *STATE_VARIABLE_VarSet_79 = STATE_VARIABLE_VarSet_0_78;
              *STATE_VARIABLE_VarTypes_81 = STATE_VARIABLE_VarTypes_0_80;
              *STATE_VARIABLE_RttiVarMaps_83 = STATE_VARIABLE_RttiVarMaps_0_82;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
              MR_Word Goals_65;
              MR_Word GoalExpr_137;
              MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1)));

              switch (ConjType_63) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(Goals0_64, &Goals_65, STATE_VARIABLE_VarSet_0_78, STATE_VARIABLE_VarSet_79, STATE_VARIABLE_VarTypes_0_80, STATE_VARIABLE_VarTypes_81, STATE_VARIABLE_RttiVarMaps_0_82, STATE_VARIABLE_RttiVarMaps_83, TransformMap_15);
                  break;
                case (MR_Integer) 0:
                  transform_hlds__tupling__fix_calls_in_conj_9_p_0(Goals0_64, &Goals_65, STATE_VARIABLE_VarSet_0_78, STATE_VARIABLE_VarSet_79, STATE_VARIABLE_VarTypes_0_80, STATE_VARIABLE_VarTypes_81, STATE_VARIABLE_RttiVarMaps_0_82, STATE_VARIABLE_RttiVarMaps_83, TransformMap_15);
                  break;
              }
              {
                GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_137, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_137, 1) = (MR_Box) (packed_args_0);
                MR_hl_field(MR_mktag(3), GoalExpr_137, 2) = ((MR_Box) (Goals_65));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_11 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_137));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_17));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word GoalExpr_138;
              MR_Word Goals0_139 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
              MR_Word Goals_140;

              transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(Goals0_139, &Goals_140, STATE_VARIABLE_VarSet_0_78, STATE_VARIABLE_VarSet_79, STATE_VARIABLE_VarTypes_0_80, STATE_VARIABLE_VarTypes_81, STATE_VARIABLE_RttiVarMaps_0_82, STATE_VARIABLE_RttiVarMaps_83, TransformMap_15);
              {
                GoalExpr_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_138, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_138, 1) = ((MR_Box) (Goals_140));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_11 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_138));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_17));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
              MR_Word Cases0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 3))));
              MR_Word Cases_69;
              MR_Word GoalExpr_141;
              MR_Unsigned packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2)));

              transform_hlds__tupling__fix_calls_in_cases_9_p_0(Cases0_68, &Cases_69, STATE_VARIABLE_VarSet_0_78, STATE_VARIABLE_VarSet_79, STATE_VARIABLE_VarTypes_0_80, STATE_VARIABLE_VarTypes_81, STATE_VARIABLE_RttiVarMaps_0_82, STATE_VARIABLE_RttiVarMaps_83, TransformMap_15);
              {
                GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_141, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_141, 1) = ((MR_Box) (Var_66));
                MR_hl_field(MR_mktag(3), GoalExpr_141, 2) = (MR_Box) (packed_args_4);
                MR_hl_field(MR_mktag(3), GoalExpr_141, 3) = ((MR_Box) (Cases_69));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_11 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_141));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_17));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
              MR_Word SubGoal0_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
              MR_Word FGT_62;
              MR_Unsigned packed_args_3;

              succeeded = ((((MR_tag((MR_Word) Reason_60)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_60, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_60, (MR_Integer) 2)));
                FGT_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_60, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_62) {
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
                *Goal_11 = Goal0_10;
                *STATE_VARIABLE_RttiVarMaps_83 = STATE_VARIABLE_RttiVarMaps_0_82;
                *STATE_VARIABLE_VarTypes_81 = STATE_VARIABLE_VarTypes_0_80;
                *STATE_VARIABLE_VarSet_79 = STATE_VARIABLE_VarSet_0_78;
              }
              else
              {
                MR_Word SubGoal_130;
                MR_Word GoalExpr_131;

                transform_hlds__tupling__fix_calls_in_goal_9_p_0(SubGoal0_134, &SubGoal_130, STATE_VARIABLE_VarSet_0_78, STATE_VARIABLE_VarSet_79, STATE_VARIABLE_VarTypes_0_80, STATE_VARIABLE_VarTypes_81, STATE_VARIABLE_RttiVarMaps_0_82, STATE_VARIABLE_RttiVarMaps_83, TransformMap_15);
                {
                  GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_131, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_131, 1) = ((MR_Box) (Reason_60));
                  MR_hl_field(MR_mktag(3), GoalExpr_131, 2) = ((MR_Box) (SubGoal_130));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_11 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_131));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_17));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
              MR_Word Cond0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
              MR_Word Then0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 3))));
              MR_Word Else0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 4))));
              MR_Word Cond_74;
              MR_Word Then_75;
              MR_Word Else_76;
              MR_Word STATE_VARIABLE_VarSet_86_86;
              MR_Word STATE_VARIABLE_VarTypes_87_87;
              MR_Word STATE_VARIABLE_RttiVarMaps_88_88;
              MR_Word STATE_VARIABLE_VarSet_89_89;
              MR_Word STATE_VARIABLE_VarTypes_90_90;
              MR_Word STATE_VARIABLE_RttiVarMaps_91_91;
              MR_Word GoalExpr_142;

              transform_hlds__tupling__fix_calls_in_goal_9_p_0(Cond0_71, &Cond_74, STATE_VARIABLE_VarSet_0_78, &STATE_VARIABLE_VarSet_86_86, STATE_VARIABLE_VarTypes_0_80, &STATE_VARIABLE_VarTypes_87_87, STATE_VARIABLE_RttiVarMaps_0_82, &STATE_VARIABLE_RttiVarMaps_88_88, TransformMap_15);
              transform_hlds__tupling__fix_calls_in_goal_9_p_0(Then0_72, &Then_75, STATE_VARIABLE_VarSet_86_86, &STATE_VARIABLE_VarSet_89_89, STATE_VARIABLE_VarTypes_87_87, &STATE_VARIABLE_VarTypes_90_90, STATE_VARIABLE_RttiVarMaps_88_88, &STATE_VARIABLE_RttiVarMaps_91_91, TransformMap_15);
              transform_hlds__tupling__fix_calls_in_goal_9_p_0(Else0_73, &Else_76, STATE_VARIABLE_VarSet_89_89, STATE_VARIABLE_VarSet_79, STATE_VARIABLE_VarTypes_90_90, STATE_VARIABLE_VarTypes_81, STATE_VARIABLE_RttiVarMaps_91_91, STATE_VARIABLE_RttiVarMaps_83, TransformMap_15);
              {
                GoalExpr_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_142, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_142, 1) = ((MR_Box) (Vars_70));
                MR_hl_field(MR_mktag(3), GoalExpr_142, 2) = ((MR_Box) (Cond_74));
                MR_hl_field(MR_mktag(3), GoalExpr_142, 3) = ((MR_Box) (Then_75));
                MR_hl_field(MR_mktag(3), GoalExpr_142, 4) = ((MR_Box) (Else_76));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_11 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_142));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_17));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.fix_calls_in_goal\'/9", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_12;

    transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1918__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__3_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_12));
  }
}

static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0(
  MR_Word ArgList_5,
  MR_Word Indices_6,
  MR_Word * Selected_7,
  MR_Word * NotSelected_8)
{
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_10[3]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (transform_hlds__tupling__extract_tupled_args_from_list_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (ArgList_5));
    }
    mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), Var_9, Indices_6, Selected_7);
    transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(ArgList_5, (MR_Integer) 1, Indices_6, NotSelected_8);
  }
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
        MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) (MR_Integer) 1);
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
        MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) (MR_Integer) 1);

        transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(T_8, Var_15, HeadVar__3_3, &NotSelectedTail_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_24;

    transform_hlds__tupling__fix_calls_in_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_24);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_24));
  }
}

static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0(
  MR_Word TransformMap_5,
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__tupling__fix_calls_in_procs_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (TransformMap_5));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, SCC_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
  }
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
      MR_Word InsertSpecs0_27;
      MR_Box conv0_InsertSpecs0_27;

      hlds__make_goal__deconstruct_tuple_3_p_0(CellVar_8, FieldVars_9, &Goal_16);
      {
        InsertSpec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InsertSpec_17, 0) = ((MR_Box) (Goal_16));
        MR_hl_field(MR_mktag(0), InsertSpec_17, 1) = ((MR_Box) (NeededFieldVars_15));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[10]), STATE_VARIABLE_InsertMap_0_18, ((MR_Box) (Anchor_11)), &conv0_InsertSpecs0_27);
      if (succeeded)
      {
        InsertSpecs0_27 = ((MR_Word) (conv0_InsertSpecs0_27));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word InsertSpecs_28;

        transform_hlds__tupling__combine_inserts_3_p_0(InsertSpec_17, InsertSpecs0_27, &InsertSpecs_28);
        mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[10]), ((MR_Box) (Anchor_11)), ((MR_Box) (InsertSpecs_28)), STATE_VARIABLE_InsertMap_0_18, STATE_VARIABLE_InsertMap_19);
      }
      else
      {
        MR_Word Var_30;

        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (InsertSpec_17));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[10]), ((MR_Box) (Anchor_11)), ((MR_Box) (Var_30)), STATE_VARIABLE_InsertMap_0_18, STATE_VARIABLE_InsertMap_19);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__combine_inserts_3_p_0(
  MR_Word A_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (A_1));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
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
          C_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (C_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cs_10));
      }
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
  {
    MR_bool succeeded;
    MR_Integer Var_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_2, (MR_Integer) 5))));
    MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_2, (MR_Integer) 1))));

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word RegVars_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 0))));
      MR_Word StackVars0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 1))));
      MR_Float Loads_67 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
      MR_Float Stores0_68 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));
      MR_Word StackVars_69;
      MR_Float Stores_70;

      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVars0_66, Var_3);
      if (succeeded)
      {
        StackVars_69 = StackVars0_66;
        Stores_70 = Stores0_68;
      }
      else
      {
        MR_Float Var_71;

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_3, StackVars0_66, &StackVars_69);
        Var_71 = mercury__float__float_1_f_0(Var_61);
        Stores_70 = (Stores0_68 + Var_71);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_CountState_5 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_65));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StackVars_69));
        MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Loads_67);
        MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Stores_70);
      }
    }
    else
    {
      MR_Word CellVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word FieldVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), ((MR_Box) (Var_3)), FieldVars_14);
      if (succeeded)
      {
        MR_Word RegVars_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 0))));
        MR_Word StackVars0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 1))));
        MR_Float Loads_78 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
        MR_Float Stores0_79 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));
        MR_Word StackVars_80;
        MR_Float Stores_81;

        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVars0_77, CellVar_13);
        if (succeeded)
        {
          StackVars_80 = StackVars0_77;
          Stores_81 = Stores0_79;
        }
        else
        {
          MR_Float Var_82;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CellVar_13, StackVars0_77, &StackVars_80);
          Var_82 = mercury__float__float_1_f_0(Var_57);
          Stores_81 = (Stores0_79 + Var_82);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_CountState_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_76));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StackVars_80));
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Loads_78);
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Stores_81);
        }
      }
      else
      {
        MR_Word RegVars_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 0))));
        MR_Word StackVars0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 1))));
        MR_Float Loads_89 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
        MR_Float Stores0_90 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));
        MR_Word StackVars_91;
        MR_Float Stores_92;

        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVars0_88, Var_3);
        if (succeeded)
        {
          StackVars_91 = StackVars0_88;
          Stores_92 = Stores0_90;
        }
        else
        {
          MR_Float Var_93;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_3, StackVars0_88, &StackVars_91);
          Var_93 = mercury__float__float_1_f_0(Var_61);
          Stores_92 = (Stores0_90 + Var_93);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_CountState_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_87));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StackVars_91));
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Loads_89);
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Stores_92);
        }
      }
    }
  }
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
    MR_Word ProcCounts_57;
    MR_Box conv0_ProcCounts_57;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_13, PredId_19, ProcId_20, &PredInfo_21, &ProcInfo_22);
    Var_38 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_21);
    Var_39 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_21);
    Var_40 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_21);
    Var_41 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_21);
    Var_42 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_21);
    Var_43 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_20);
    {
      ProcLabel_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
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
      ProcLabelInContext_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcLabelInContext_27, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), ProcLabelInContext_27, 1) = ((MR_Box) (FileName_25));
      MR_hl_field(MR_mktag(0), ProcLabelInContext_27, 2) = ((MR_Box) (ProcLabel_23));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[9]), TraceCounts_11, ((MR_Box) (ProcLabelInContext_27)), &conv0_ProcCounts_57);
    if (succeeded)
    {
      ProcCounts_57 = ((MR_Word) (conv0_ProcCounts_57));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ProcCounts_57));
      }
    else
      Var_45 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 1);
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
        MR_Box conv1_ReverseGoalPathMap_29;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[3]), ReverseGoalPathMapMap_15, ((MR_Box) (PredProcId_16)), &conv1_ReverseGoalPathMap_29);
        ReverseGoalPathMap_29 = ((MR_Word) (conv1_ReverseGoalPathMap_29));
        {
          CountInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CountInfo_30, 0) = ((MR_Box) (ModuleInfo_13));
          MR_hl_field(MR_mktag(0), CountInfo_30, 1) = ((MR_Box) (PredProcId_16));
          MR_hl_field(MR_mktag(0), CountInfo_30, 2) = ((MR_Box) (PredInfo_21));
          MR_hl_field(MR_mktag(0), CountInfo_30, 3) = ((MR_Box) (ProcInfo_22));
          MR_hl_field(MR_mktag(0), CountInfo_30, 4) = ((MR_Box) (ProcCounts_28));
          MR_hl_field(MR_mktag(0), CountInfo_30, 5) = ((MR_Box) (TuningParams_12));
          MR_hl_field(MR_mktag(0), CountInfo_30, 6) = ((MR_Box) (TuplingScheme_14));
          MR_hl_field(MR_mktag(0), CountInfo_30, 7) = ((MR_Box) (ReverseGoalPathMap_29));
        }
        transform_hlds__tupling__count_load_stores_in_proc_3_p_0(CountInfo_30, &ProcLoads_31, &ProcStores_32);
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
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_CountState_13;

    transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CountState_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CountState_13));
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_proc_3_p_0(
  MR_Word CountInfo_4,
  MR_Float * Loads_5,
  MR_Float * Stores_6)
{
  {
    MR_Word ModuleInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_4, (MR_Integer) 0))));
    MR_Word PredInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_4, (MR_Integer) 2))));
    MR_Word ProcInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_4, (MR_Integer) 3))));
    MR_Word InitialLiveness_10;
    MR_Word CountState0_11;
    MR_Word Goal_12;
    MR_Word CountState1_13;
    MR_Word OutputArgs_15;
    MR_Word CountState_17;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_52;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Box conv1_CountState_17;

    ll_backend__liveness__initial_liveness_4_p_0(ModuleInfo_7, PredInfo_8, ProcInfo_9, &InitialLiveness_10);
    Var_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    {
      CountState0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CountState0_11, 0) = ((MR_Box) (InitialLiveness_10));
      MR_hl_field(MR_mktag(0), CountState0_11, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), CountState0_11, 2) = MR_box_float((MR_Float) 0.0000000000000000);
      MR_hl_field(MR_mktag(0), CountState0_11, 3) = MR_box_float((MR_Float) 0.0000000000000000);
    }
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_9, &Goal_12);
    transform_hlds__tupling__count_load_stores_in_goal_4_p_0(Goal_12, CountInfo_4, CountState0_11, &CountState1_13);
    hlds__arg_info__partition_proc_args_5_p_0(ProcInfo_9, ModuleInfo_7, &Var_14, &OutputArgs_15, &Var_16);
    Var_23 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), OutputArgs_15);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_proc_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (CountInfo_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_52, Var_23, ((MR_Box) (CountState1_13)), &conv1_CountState_17);
    CountState_17 = ((MR_Word) (conv1_CountState_17));
    *Loads_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), CountState_17, (MR_Integer) 2)));
    *Stores_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), CountState_17, (MR_Integer) 3)));
  }
}

static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0(
  MR_Word Goal_5,
  MR_Word CountInfo_6,
  MR_Word STATE_VARIABLE_CountState_0_113,
  MR_Word * STATE_VARIABLE_CountState_114)
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
          MR_Word ResumePoint_97;
          MR_Word Var_127;
          MR_Word STATE_VARIABLE_CountState_130_130;
          MR_Word SubGoal_183 = (MR_Word) (MR_body((MR_Word) (GoalExpr_8), (MR_Integer) 0));
          MR_Word next_value_of_Goal_5;
          MR_Word next_value_of_STATE_VARIABLE_CountState_0_113;

          Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_183, (MR_Integer) 1))));
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Var_127, &ResumePoint_97);
          if ((ResumePoint_97 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "no_resume_point for not");
              return;
            }
          }
          else
          {
            MR_Word LiveVars_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_97, (MR_Integer) 0))));
            MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumePoint_97, (MR_Integer) 1)));

            transform_hlds__tupling__cls_require_flushed_4_p_0(CountInfo_6, LiveVars_98, STATE_VARIABLE_CountState_0_113, &STATE_VARIABLE_CountState_130_130);
          }
          // direct tailcall eliminated
          ;
          next_value_of_Goal_5 = SubGoal_183;
          next_value_of_STATE_VARIABLE_CountState_0_113 = STATE_VARIABLE_CountState_130_130;
          Goal_5 = next_value_of_Goal_5;
          STATE_VARIABLE_CountState_0_113 = next_value_of_STATE_VARIABLE_CountState_0_113;
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
                MR_Word STATE_VARIABLE_CountState_163_163;
                MR_Word Var_164;
                MR_Unsigned packed_args_7 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unification_13, (MR_Integer) 5)));

                transform_hlds__tupling__cls_require_in_regs_4_p_0(CountInfo_6, ArgVars_17, STATE_VARIABLE_CountState_0_113, &STATE_VARIABLE_CountState_163_163);
                {
                  Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (CellVar_15));
                  MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                transform_hlds__tupling__cls_put_in_regs_3_p_0(Var_164, STATE_VARIABLE_CountState_163_163, STATE_VARIABLE_CountState_114);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CellVar_169 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_13, (MR_Integer) 0))));
                MR_Word ArgVars_171 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_13, (MR_Integer) 2))));
                MR_Unsigned packed_args_8 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_13, (MR_Integer) 4)));

                transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0(CountInfo_6, CellVar_169, ArgVars_171, STATE_VARIABLE_CountState_0_113, STATE_VARIABLE_CountState_114);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ToVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_13, (MR_Integer) 0))));
                MR_Word FromVar_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_13, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_CountState_158_158;
                MR_Word Var_159;

                transform_hlds__tupling__cls_require_in_reg_4_p_0(CountInfo_6, FromVar_25, STATE_VARIABLE_CountState_0_113, &STATE_VARIABLE_CountState_158_158);
                {
                  Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (ToVar_24));
                  MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                transform_hlds__tupling__cls_put_in_regs_3_p_0(Var_159, STATE_VARIABLE_CountState_158_158, STATE_VARIABLE_CountState_114);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_13, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_13, (MR_Integer) 1))));
                    MR_Word Var2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_13, (MR_Integer) 2))));
                    MR_Word Var_154;
                    MR_Word Var_156;

                    {
                      Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var2_27));
                      MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var1_26));
                      MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (Var_156));
                    }
                    transform_hlds__tupling__cls_require_in_regs_4_p_0(CountInfo_6, Var_154, STATE_VARIABLE_CountState_0_113, STATE_VARIABLE_CountState_114);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "complicated_unify");
                      return;
                    }
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
          MR_Unsigned packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 3)));
          MR_Word TuplingProposal_37;
          MR_Word Var_149;

          succeeded = (Builtin_34 == (MR_Integer) 1);
          if (succeeded)
          {
            {
              Var_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (PredId_31));
              MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) (ProcId_32));
            }
            TuplingProposal_37 = transform_hlds__tupling__get_tupling_proposal_2_f_0(CountInfo_6, Var_149);
            succeeded = ((MR_tag((MR_Word) TuplingProposal_37)) == (MR_Integer) 1);
            if (succeeded)
            {
            }
          }
          if (succeeded)
            transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0(GoalExpr_8, GoalInfo_9, CountInfo_6, TuplingProposal_37, STATE_VARIABLE_CountState_0_113, STATE_VARIABLE_CountState_114);
          else
            transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0(GoalExpr_8, GoalInfo_9, CountInfo_6, STATE_VARIABLE_CountState_0_113, STATE_VARIABLE_CountState_114);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
              MR_Word ArgModes_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
              MR_Word MaybeArgRegs_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
              MR_Word ModuleInfo_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 0))));
              MR_Word ProcInfo_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 3))));
              MR_Word VarTypes_47;
              MR_Word ArgTypes_48;
              MR_Word ArgRegTypes_49;
              MR_Word InputArgsR_50;
              MR_Word InputArgsF_51;
              MR_Word OutputArgsR_52;
              MR_Word OutputArgsF_53;
              MR_Word InputArgs_54;
              MR_Word OutputArgs_55;
              MR_Word ArgVars_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 5)));

              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_46, &VarTypes_47);
              hlds__vartypes__lookup_var_types_3_p_0(VarTypes_47, ArgVars_173, &ArgTypes_48);
              hlds__arg_info__generic_call_arg_reg_types_6_p_0(ModuleInfo_45, VarTypes_47, GenericCall_41, ArgVars_173, MaybeArgRegs_43, &ArgRegTypes_49);
              hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ModuleInfo_45, ArgVars_173, ArgModes_42, ArgTypes_48, ArgRegTypes_49, &InputArgsR_50, &InputArgsF_51, &OutputArgsR_52, &OutputArgsF_53);
              InputArgs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgsR_50, InputArgsF_51);
              OutputArgs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), OutputArgsR_52, OutputArgsF_53);
              switch (MR_tag((MR_Word) GenericCall_41)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word Globals_65;
                    MR_Word GenericVarsArgInfos_67;
                    MR_Word GenericVars_70;
                    MR_Word Inputs_71;
                    MR_Word Outputs_72;
                    MR_Word MaybeNeedAcrossCall_73;
                    MR_Integer Var_146;
                    MR_Integer Var_147;
                    MR_Word Var_66;
                    MR_Integer Var_68;
                    MR_Word Var_69;

                    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_45, &Globals_65);
                    Var_146 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgsR_50);
                    Var_147 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgsF_51);
                    ll_backend__call_gen__generic_call_info_8_p_0(Globals_65, GenericCall_41, Var_146, Var_147, &Var_66, &GenericVarsArgInfos_67, &Var_68, &Var_69);
                    mercury__assoc_list__keys_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), GenericVarsArgInfos_67, &GenericVars_70);
                    mercury__list__append_3_p_1((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), GenericVars_70, InputArgs_54, &Inputs_71);
                    Outputs_72 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), OutputArgs_55);
                    hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_9, &MaybeNeedAcrossCall_73);
                    transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(CountInfo_6, Inputs_71, Outputs_72, MaybeNeedAcrossCall_73, STATE_VARIABLE_CountState_0_113, STATE_VARIABLE_CountState_114);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word STATE_VARIABLE_CountState_144_144;

                    transform_hlds__tupling__cls_require_in_regs_4_p_0(CountInfo_6, InputArgs_54, STATE_VARIABLE_CountState_0_113, &STATE_VARIABLE_CountState_144_144);
                    transform_hlds__tupling__cls_put_in_regs_3_p_0(OutputArgs_55, STATE_VARIABLE_CountState_144_144, STATE_VARIABLE_CountState_114);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
              MR_Word ExtraArgs_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 5))));
              MR_Word ExtraVars_81;
              MR_Word CallingProcInfo_82;
              MR_Word InputArgVarSet_83;
              MR_Word OutputArgVarSet_84;
              MR_Word InputArgVars_86;
              MR_Word InputVars_87;
              MR_Word ArgVars_175;
              MR_Word PredId_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Integer ProcId_177 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
              MR_Word ModuleInfo_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 0))));
              MR_Word ProcInfo_179;
              MR_Word VarTypes_180;
              MR_Word _PredInfo_80;
              MR_Word Var_85;
              MR_Word MaybeNeedAcrossCall_174;

              hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_178, PredId_176, ProcId_177, &_PredInfo_80, &ProcInfo_179);
              ArgVars_175 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[14]), Args_76);
              ExtraVars_81 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[15]), ExtraArgs_77);
              CallingProcInfo_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 3))));
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(CallingProcInfo_82, &VarTypes_180);
              hlds__arg_info__partition_proc_call_args_7_p_0(ProcInfo_179, VarTypes_180, ModuleInfo_178, ArgVars_175, &InputArgVarSet_83, &OutputArgVarSet_84, &Var_85);
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgVarSet_83, &InputArgVars_86);
              mercury__list__append_3_p_1((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgVars_86, ExtraVars_81, &InputVars_87);
              succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(GoalInfo_9, &MaybeNeedAcrossCall_174);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) MaybeNeedAcrossCall_174)) == (MR_Integer) 1);
                if (succeeded)
                {
                }
              }
              if (succeeded)
                transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(CountInfo_6, InputVars_87, OutputArgVarSet_84, MaybeNeedAcrossCall_174, STATE_VARIABLE_CountState_0_113, STATE_VARIABLE_CountState_114);
              else
              {
                MR_Word STATE_VARIABLE_CountState_142_142;

                transform_hlds__tupling__cls_require_in_regs_4_p_0(CountInfo_6, InputVars_87, STATE_VARIABLE_CountState_0_113, &STATE_VARIABLE_CountState_142_142);
                transform_hlds__tupling__cls_clobber_regs_3_p_0(OutputArgVarSet_84, STATE_VARIABLE_CountState_142_142, STATE_VARIABLE_CountState_114);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));

              switch (ConjType_92) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "tupling with parallel conjunctions");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  transform_hlds__tupling__count_load_stores_in_conj_4_p_0(Goals_93, CountInfo_6, STATE_VARIABLE_CountState_0_113, STATE_VARIABLE_CountState_114);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));

              transform_hlds__tupling__count_load_stores_in_disj_4_p_0(Goals_182, CountInfo_6, STATE_VARIABLE_CountState_0_113, STATE_VARIABLE_CountState_114);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
              MR_Unsigned packed_args_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));

              transform_hlds__tupling__count_load_stores_in_cases_4_p_0(Cases_96, CountInfo_6, STATE_VARIABLE_CountState_0_113, STATE_VARIABLE_CountState_114);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
              MR_Word SubGoal_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Word Var_137;
              MR_Unsigned packed_args_5;

              succeeded = ((((MR_tag((MR_Word) Reason_89)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_89, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_89, (MR_Integer) 2)));
                Var_137 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_89, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_137 == (MR_Integer) 1);
              }
              if (succeeded)
                *STATE_VARIABLE_CountState_114 = STATE_VARIABLE_CountState_0_113;
              else
              {
                MR_Word next_value_of_Goal_5 = SubGoal_90;

                // direct tailcall eliminated
                ;
                Goal_5 = next_value_of_Goal_5;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Word Then_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
              MR_Word Else_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
              MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_101, (MR_Integer) 1))));
              MR_Word ResumePoint_189;

              hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Var_117, &ResumePoint_189);
              if ((ResumePoint_189 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "no_resume_point for if_then_else");
                  return;
                }
              }
              else
              {
                MR_Word ResetCountInfo_104;
                MR_Word ThenCountInfo_105;
                MR_Word ElseCountInfo_106;
                MR_Word ProcCounts_107;
                MR_Word ThenGoalId_108;
                MR_Word ElseGoalId_109;
                MR_Float ThenRelFreq_110;
                MR_Float ElseRelFreq_111;
                MR_Word STATE_VARIABLE_CountState_120_120;
                MR_Word STATE_VARIABLE_CountState_121_121;
                MR_Word Var_122;
                MR_Word Var_123;
                MR_Word Var_124;
                MR_Word STATE_VARIABLE_CountState_125_125;
                MR_Word LiveVars_185 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_189, (MR_Integer) 0))));
                MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumePoint_189, (MR_Integer) 1)));

                transform_hlds__tupling__cls_require_flushed_4_p_0(CountInfo_6, LiveVars_185, STATE_VARIABLE_CountState_0_113, &STATE_VARIABLE_CountState_120_120);
                transform_hlds__tupling__count_load_stores_in_goal_4_p_0(Cond_101, CountInfo_6, STATE_VARIABLE_CountState_120_120, &STATE_VARIABLE_CountState_121_121);
                transform_hlds__tupling__reset_count_state_counts_2_p_0(STATE_VARIABLE_CountState_121_121, &ResetCountInfo_104);
                transform_hlds__tupling__count_load_stores_in_goal_4_p_0(Then_102, CountInfo_6, ResetCountInfo_104, &ThenCountInfo_105);
                transform_hlds__tupling__count_load_stores_in_goal_4_p_0(Else_103, CountInfo_6, ResetCountInfo_104, &ElseCountInfo_106);
                ProcCounts_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 4))));
                Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then_102, (MR_Integer) 1))));
                ThenGoalId_108 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_122);
                Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else_103, (MR_Integer) 1))));
                ElseGoalId_109 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Var_123);
                Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 7))));
                transform_hlds__tupling__get_ite_relative_frequencies_6_p_0(ProcCounts_107, Var_124, ThenGoalId_108, ElseGoalId_109, &ThenRelFreq_110, &ElseRelFreq_111);
                transform_hlds__tupling__add_branch_costs_4_p_0(ThenCountInfo_105, ThenRelFreq_110, STATE_VARIABLE_CountState_121_121, &STATE_VARIABLE_CountState_125_125);
                transform_hlds__tupling__add_branch_costs_4_p_0(ElseCountInfo_106, ElseRelFreq_111, STATE_VARIABLE_CountState_125_125, STATE_VARIABLE_CountState_114);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "shorthand");
                return;
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
transform_hlds__tupling__count_load_stores_in_cases_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_CountState_5;

    transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CountState_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_CountState_5));
  }
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
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CountState_0_3;

      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo_17, &ResumePoint_18);
      if ((ResumePoint_18 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_CountState_28_28 = STATE_VARIABLE_CountState_0_3;
      else
      {
        MR_Word LiveVars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_18, (MR_Integer) 0))));
        MR_Word TuplingProposal_51;
        MR_Word TuningParams_52;
        MR_Word Var_53;
        MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumePoint_18, (MR_Integer) 1)));
        MR_Word Probe_79;
        MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
        MR_Box conv0_Probe_79;
        MR_Box conv2_STATE_VARIABLE_CountState_28_28;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_80, ((MR_Box) (Var_68)), &conv0_Probe_79);
        if (succeeded)
        {
          Probe_79 = ((MR_Word) (conv0_Probe_79));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          TuplingProposal_51 = Probe_79;
        else
          TuplingProposal_51 = (MR_Word) ((MR_Unsigned) 0U);
        TuningParams_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_cases_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (TuplingProposal_51));
          MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (TuningParams_52));
        }
        parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_53, LiveVars_19, ((MR_Box) (STATE_VARIABLE_CountState_0_3)), &conv2_STATE_VARIABLE_CountState_28_28);
        STATE_VARIABLE_CountState_28_28 = ((MR_Word) (conv2_STATE_VARIABLE_CountState_28_28));
      }
      transform_hlds__tupling__reset_count_state_counts_2_p_0(STATE_VARIABLE_CountState_28_28, &BranchCountState0_21);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_CountState_5;

    transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CountState_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_CountState_5));
  }
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
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CountState_0_3;

      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo_14, &ResumePoint_15);
      if ((ResumePoint_15 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_CountState_25_25 = STATE_VARIABLE_CountState_0_3;
      else
      {
        MR_Word LiveVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_15, (MR_Integer) 0))));
        MR_Word TuplingProposal_48;
        MR_Word TuningParams_49;
        MR_Word Var_50;
        MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumePoint_15, (MR_Integer) 1)));
        MR_Word Probe_76;
        MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
        MR_Box conv0_Probe_76;
        MR_Box conv2_STATE_VARIABLE_CountState_25_25;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_77, ((MR_Box) (Var_65)), &conv0_Probe_76);
        if (succeeded)
        {
          Probe_76 = ((MR_Word) (conv0_Probe_76));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          TuplingProposal_48 = Probe_76;
        else
          TuplingProposal_48 = (MR_Word) ((MR_Unsigned) 0U);
        TuningParams_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_disj_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (TuplingProposal_48));
          MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (TuningParams_49));
        }
        parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_50, LiveVars_16, ((MR_Box) (STATE_VARIABLE_CountState_0_3)), &conv2_STATE_VARIABLE_CountState_25_25);
        STATE_VARIABLE_CountState_25_25 = ((MR_Word) (conv2_STATE_VARIABLE_CountState_25_25));
      }
      transform_hlds__tupling__reset_count_state_counts_2_p_0(STATE_VARIABLE_CountState_25_25, &BranchCountState0_18);
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
  {
    MR_bool succeeded;
    MR_Word ThenGoalPath_13;
    MR_Word ElseGoalPath_14;
    MR_Integer ThenCounts_15;
    MR_Integer ElseCounts_16;
    MR_Integer Total_17;
    MR_Word PathPort_28;
    MR_Word PathPort_37;
    MR_Box conv0_ThenGoalPath_13;
    MR_Box conv1_ElseGoalPath_14;
    MR_Word ContextCount_29;
    MR_Box conv2_ContextCount_29;
    MR_Word ContextCount_38;
    MR_Box conv3_ContextCount_38;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), ReverseGoalPathMap_8, ((MR_Box) (ThenGoalId_9)), &conv0_ThenGoalPath_13);
    ThenGoalPath_13 = ((MR_Word) (conv0_ThenGoalPath_13));
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), ReverseGoalPathMap_8, ((MR_Box) (ElseGoalId_10)), &conv1_ElseGoalPath_14);
    ElseGoalPath_14 = ((MR_Word) (conv1_ElseGoalPath_14));
    {
      PathPort_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PathPort_28, 0) = ((MR_Box) (ThenGoalPath_13));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcCounts_7, ((MR_Box) (PathPort_28)), &conv2_ContextCount_29);
    if (succeeded)
    {
      ContextCount_29 = ((MR_Word) (conv2_ContextCount_29));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ThenCounts_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ContextCount_29, (MR_Integer) 1))));
    else
      ThenCounts_15 = (MR_Integer) 0;
    {
      PathPort_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PathPort_37, 0) = ((MR_Box) (ElseGoalPath_14));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcCounts_7, ((MR_Box) (PathPort_37)), &conv3_ContextCount_38);
    if (succeeded)
    {
      ContextCount_38 = ((MR_Word) (conv3_ContextCount_38));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ElseCounts_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ContextCount_38, (MR_Integer) 1))));
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
}

static void MR_CALL 
transform_hlds__tupling__cls_clobber_regs_3_p_0(
  MR_Word NewVars_4,
  MR_Word STATE_VARIABLE_CountState_0_6,
  MR_Word * STATE_VARIABLE_CountState_7)
{
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
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CountState_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_12);
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Var_13);
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_CountState_5;

    transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CountState_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_CountState_5));
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0(
  MR_Word CountInfo_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_CountState_0_10,
  MR_Word * STATE_VARIABLE_CountState_11)
{
  {
    MR_bool succeeded;
    MR_Word TuplingProposal_8;
    MR_Word TuningParams_9;
    MR_Word Var_12;
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 1))));
    MR_Word Probe_38;
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 6))));
    MR_Box conv0_Probe_38;
    MR_Box conv2_STATE_VARIABLE_CountState_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_39, ((MR_Box) (Var_27)), &conv0_Probe_38);
    if (succeeded)
    {
      Probe_38 = ((MR_Word) (conv0_Probe_38));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      TuplingProposal_8 = Probe_38;
    else
      TuplingProposal_8 = (MR_Word) ((MR_Unsigned) 0U);
    TuningParams_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 5))));
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__tupling__cls_require_flushed_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (TuplingProposal_8));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (TuningParams_9));
    }
    parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_12, Vars_6, ((MR_Box) (STATE_VARIABLE_CountState_0_10)), &conv2_STATE_VARIABLE_CountState_11);
    *STATE_VARIABLE_CountState_11 = ((MR_Word) (conv2_STATE_VARIABLE_CountState_11));
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_CountState_8;

    transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_CountState_8);
    *wrapper_arg_3 = ((MR_Box) (conv5_CountState_8));
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_CountState_8;

    transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_CountState_8);
    *wrapper_arg_3 = ((MR_Box) (conv3_CountState_8));
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_CountState_8;

    transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_CountState_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_CountState_8));
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0(
  MR_Word CountInfo_6,
  MR_Word DeconstructCellVar_7,
  MR_Word DeconstructFieldVars_8,
  MR_Word STATE_VARIABLE_State_0_18,
  MR_Word * STATE_VARIABLE_State_19)
{
  {
    MR_bool succeeded;
    MR_Word TuningParams_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 5))));
    MR_Integer CvLoadCost_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_10, (MR_Integer) 2))));
    MR_Integer FvLoadCost_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_10, (MR_Integer) 4))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 1))));
    MR_Word Probe_71;
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_6, (MR_Integer) 6))));
    MR_Box conv0_Probe_71;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_72, ((MR_Box) (Var_29)), &conv0_Probe_71);
    if (succeeded)
    {
      Probe_71 = ((MR_Word) (conv0_Probe_71));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      if ((Probe_71 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_State_25_25;
        MR_Word Var_26;
        MR_Box conv2_STATE_VARIABLE_State_19;

        transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(CvLoadCost_11, DeconstructCellVar_7, STATE_VARIABLE_State_0_18, &STATE_VARIABLE_State_25_25);
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[6]));
          MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (FvLoadCost_12));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_26, DeconstructFieldVars_8, ((MR_Box) (STATE_VARIABLE_State_25_25)), &conv2_STATE_VARIABLE_State_19);
        *STATE_VARIABLE_State_19 = ((MR_Word) (conv2_STATE_VARIABLE_State_19));
      }
      else
      {
        MR_Word TupleFieldVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Probe_71, (MR_Integer) 1))));
        MR_Word VarsToLoad_17;
        MR_Word Var_20;
        MR_Word Var_21;

        Var_20 = mercury__set__from_list_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), DeconstructFieldVars_8);
        Var_21 = mercury__set__from_list_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), TupleFieldVars_15);
        VarsToLoad_17 = mercury__set__difference_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), Var_20, Var_21);
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), VarsToLoad_17);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_State_22_22;
          MR_Word Var_23;
          MR_Box conv4_STATE_VARIABLE_State_19;

          transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(CvLoadCost_11, DeconstructCellVar_7, STATE_VARIABLE_State_0_18, &STATE_VARIABLE_State_22_22);
          {
            Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[6]));
            MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (FvLoadCost_12));
          }
          mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_23, VarsToLoad_17, ((MR_Box) (STATE_VARIABLE_State_22_22)), &conv4_STATE_VARIABLE_State_19);
          *STATE_VARIABLE_State_19 = ((MR_Word) (conv4_STATE_VARIABLE_State_19));
        }
        else
          *STATE_VARIABLE_State_19 = STATE_VARIABLE_State_0_18;
      }
    else
    {
      MR_Word STATE_VARIABLE_State_25_84;
      MR_Word Var_85;
      MR_Box conv6_STATE_VARIABLE_State_19;

      transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(CvLoadCost_11, DeconstructCellVar_7, STATE_VARIABLE_State_0_18, &STATE_VARIABLE_State_25_84);
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[6]));
        MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_3));
        MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (FvLoadCost_12));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_85, DeconstructFieldVars_8, ((MR_Box) (STATE_VARIABLE_State_25_84)), &conv6_STATE_VARIABLE_State_19);
      *STATE_VARIABLE_State_19 = ((MR_Word) (conv6_STATE_VARIABLE_State_19));
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_CountState_0_8,
  MR_Word * STATE_VARIABLE_CountState_9)
{
  {
    MR_Word RegVars0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_8, (MR_Integer) 0))));
    MR_Word RegVars_7;
    MR_Word Var_15;
    MR_Float Var_16;
    MR_Float Var_17;

    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_4, RegVars0_6, &RegVars_7);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_8, (MR_Integer) 1))));
    Var_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_8, (MR_Integer) 2)));
    Var_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_8, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CountState_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_16);
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Var_17);
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_require_in_reg_4_p_0(
  MR_Word CountInfo_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_CountState_0_12,
  MR_Word * STATE_VARIABLE_CountState_13)
{
  {
    MR_bool succeeded;
    MR_Word TuplingProposal_8;
    MR_Word TypeInfo_16_16;
    MR_Word FieldVars_10;
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 1))));
    MR_Word Probe_29;
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 6))));
    MR_Box conv0_Probe_29;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_30, ((MR_Box) (Var_18)), &conv0_Probe_29);
    if (succeeded)
    {
      Probe_29 = ((MR_Word) (conv0_Probe_29));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      TuplingProposal_8 = Probe_29;
    else
      TuplingProposal_8 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = ((MR_tag((MR_Word) TuplingProposal_8)) == (MR_Integer) 1);
    if (succeeded)
    {
      FieldVars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TuplingProposal_8, (MR_Integer) 1))));
      TypeInfo_16_16 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]);
      succeeded = mercury__list__member_2_p_0(TypeInfo_16_16, ((MR_Box) (Var_6)), FieldVars_10);
    }
    if (succeeded)
    {
      MR_Word RegVars0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_12, (MR_Integer) 0))));
      MR_Word StackVars_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_12, (MR_Integer) 1))));
      MR_Float Loads0_47 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_12, (MR_Integer) 2)));
      MR_Float Stores_48 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_12, (MR_Integer) 3)));

      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegVars0_45, Var_6);
      if (succeeded)
        *STATE_VARIABLE_CountState_13 = STATE_VARIABLE_CountState_0_12;
      else
      {
        MR_Word CellVar_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TuplingProposal_8, (MR_Integer) 0))));
        MR_Word TuningParams_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 5))));
        MR_Float CvLoadCost_53;
        MR_Float FvLoadCost_54;
        MR_Word RegVars_55;
        MR_Float Loads_56;
        MR_Integer Var_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_52, (MR_Integer) 2))));
        MR_Integer Var_58;

        CvLoadCost_53 = mercury__float__float_1_f_0(Var_57);
        Var_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_52, (MR_Integer) 4))));
        FvLoadCost_54 = mercury__float__float_1_f_0(Var_58);
        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegVars0_45, CellVar_49);
        if (succeeded)
        {
          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, RegVars0_45, &RegVars_55);
          Loads_56 = (Loads0_47 + FvLoadCost_54);
        }
        else
        {
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Float Var_62;

          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_6));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (CellVar_49));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
          }
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_59, RegVars0_45, &RegVars_55);
          Var_62 = (Loads0_47 + CvLoadCost_53);
          Loads_56 = (Var_62 + FvLoadCost_54);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_CountState_13 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_55));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StackVars_46));
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Loads_56);
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Stores_48);
        }
      }
    }
    else
      transform_hlds__tupling__cls_require_normal_var_in_reg_4_p_0(CountInfo_5, Var_6, STATE_VARIABLE_CountState_0_12, STATE_VARIABLE_CountState_13);
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_CountState_13;

    transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CountState_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CountState_13));
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0(
  MR_Word CountInfo_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_CountState_0_8,
  MR_Word * STATE_VARIABLE_CountState_9)
{
  {
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_CountState_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__tupling__cls_require_in_regs_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (CountInfo_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_10, Vars_6, ((MR_Box) (STATE_VARIABLE_CountState_0_8)), &conv1_STATE_VARIABLE_CountState_9);
    *STATE_VARIABLE_CountState_9 = ((MR_Word) (conv1_STATE_VARIABLE_CountState_9));
  }
}

static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_STATE_VARIABLE_TotalAcc_11;

    transform_hlds__tupling__get_switch_total_count_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TotalAcc_11);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TotalAcc_11));
  }
}

static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0(
  MR_Word ProcCounts_5,
  MR_Word ReverseGoalPathMap_6,
  MR_Word GoalId_7,
  MR_Float * RelFreq_8)
{
  {
    MR_bool succeeded;
    MR_Word GoalPath_9;
    MR_Integer CaseTotal_10;
    MR_Integer SwitchTotal_11;
    MR_Word PathPort_19;
    MR_Word Var_28;
    MR_Box conv0_GoalPath_9;
    MR_Word ContextCount_20;
    MR_Box conv1_ContextCount_20;
    MR_Box conv3_SwitchTotal_11;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), ReverseGoalPathMap_6, ((MR_Box) (GoalId_7)), &conv0_GoalPath_9);
    GoalPath_9 = ((MR_Word) (conv0_GoalPath_9));
    {
      PathPort_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PathPort_19, 0) = ((MR_Box) (GoalPath_9));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcCounts_5, ((MR_Box) (PathPort_19)), &conv1_ContextCount_20);
    if (succeeded)
    {
      ContextCount_20 = ((MR_Word) (conv1_ContextCount_20));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      CaseTotal_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ContextCount_20, (MR_Integer) 1))));
    else
      CaseTotal_10 = (MR_Integer) 0;
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (transform_hlds__tupling__get_case_relative_frequency_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (GoalPath_9));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_28, ProcCounts_5, ((MR_Box) ((MR_Integer) 0)), &conv3_SwitchTotal_11);
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
}

static void MR_CALL 
transform_hlds__tupling__get_disjunct_relative_frequency_4_p_0(
  MR_Word ProcCounts_5,
  MR_Word ReverseGoalPathMap_6,
  MR_Word GoalId_7,
  MR_Float * RelFreq_8)
{
  {
    MR_bool succeeded;
    MR_Word RevGoalPath_9;
    MR_Box conv0_RevGoalPath_9;
    MR_Word RevPrevGoalPath_10;
    MR_Word LastStep_11;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), ReverseGoalPathMap_6, ((MR_Box) (GoalId_7)), &conv0_RevGoalPath_9);
    RevGoalPath_9 = ((MR_Word) (conv0_RevGoalPath_9));
    succeeded = ((MR_tag((MR_Word) RevGoalPath_9)) == (MR_Integer) 1);
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
      MR_Word PathPort_27;
      MR_Word PathPort_36;
      MR_Word ContextCount_28;
      MR_Box conv1_ContextCount_28;
      MR_Word ContextCount_37;
      MR_Box conv2_ContextCount_37;

      {
        RevFirstDisjGoalPath_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RevFirstDisjGoalPath_13, 0) = ((MR_Box) (RevPrevGoalPath_10));
        MR_hl_field(MR_mktag(1), RevFirstDisjGoalPath_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__tupling_scalar_common_8[4])));
      }
      {
        PathPort_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PathPort_27, 0) = ((MR_Box) (RevGoalPath_9));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcCounts_5, ((MR_Box) (PathPort_27)), &conv1_ContextCount_28);
      if (succeeded)
      {
        ContextCount_28 = ((MR_Word) (conv1_ContextCount_28));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        DisjCount_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ContextCount_28, (MR_Integer) 1))));
      else
        DisjCount_14 = (MR_Integer) 0;
      {
        PathPort_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PathPort_36, 0) = ((MR_Box) (RevFirstDisjGoalPath_13));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), ProcCounts_5, ((MR_Box) (PathPort_36)), &conv2_ContextCount_37);
      if (succeeded)
      {
        ContextCount_37 = ((MR_Word) (conv2_ContextCount_37));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        FirstDisjCount_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ContextCount_37, (MR_Integer) 1))));
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
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.get_disjunct_relative_frequency\'/4", (MR_String) "did not see disj(N) at head of goal path");
        return;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__add_branch_costs_4_p_0(
  MR_Word BranchState_5,
  MR_Float Weight_6,
  MR_Word STATE_VARIABLE_CountState_0_16,
  MR_Word * STATE_VARIABLE_CountState_17)
{
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
    MR_Word Var_24;
    MR_Word Var_25;

    Var_19 = (Loads0_14 + Var_20);
    Var_24 = Var_12;
    Var_25 = Var_13;
    Var_23 = (Weight_6 * BranchStores_11);
    Var_22 = (Stores0_15 + Var_23);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CountState_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_19);
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Var_22);
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__reset_count_state_counts_2_p_0(
  MR_Word STATE_VARIABLE_CountState_0_4,
  MR_Word * STATE_VARIABLE_CountState_5)
{
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_4, (MR_Integer) 1))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CountState_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float((MR_Float) 0.0000000000000000);
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float((MR_Float) 0.0000000000000000);
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_CountState_13;

    transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CountState_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CountState_13));
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0(
  MR_Word GoalExpr_6,
  MR_Word GoalInfo_7,
  MR_Word CountInfo_8,
  MR_Word STATE_VARIABLE_CountState_0_27,
  MR_Word * STATE_VARIABLE_CountState_28)
{
  {
    MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0))));
    MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1))));
    MR_Word ArgVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));
    MR_Word Builtin_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_8, (MR_Integer) 0))));
    MR_Word CalleeProcInfo_18;
    MR_Word ProcInfo_19;
    MR_Word VarTypes_20;
    MR_Word InputArgs_21;
    MR_Word OutputArgs_22;
    MR_Word Inputs_24;
    MR_Word Outputs_25;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3)));
    MR_Word _PredInfo_17;
    MR_Word Var_23;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_16, PredId_10, ProcId_11, &_PredInfo_17, &CalleeProcInfo_18);
    ProcInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_8, (MR_Integer) 3))));
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_19, &VarTypes_20);
    hlds__arg_info__partition_proc_call_args_7_p_0(CalleeProcInfo_18, VarTypes_20, ModuleInfo_16, ArgVars_12, &InputArgs_21, &OutputArgs_22, &Var_23);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgs_21, &Inputs_24);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), OutputArgs_22, &Outputs_25);
    switch (Builtin_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_CountState_30_30;
          MR_Word Var_52;
          MR_Word RegVars0_63;
          MR_Word RegVars_64;
          MR_Box conv1_STATE_VARIABLE_CountState_30_30;
          MR_Word Var_70;
          MR_Float Var_71;
          MR_Float Var_72;

          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[5]));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (CountInfo_8));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_52, Inputs_24, ((MR_Box) (STATE_VARIABLE_CountState_0_27)), &conv1_STATE_VARIABLE_CountState_30_30);
          STATE_VARIABLE_CountState_30_30 = ((MR_Word) (conv1_STATE_VARIABLE_CountState_30_30));
          RegVars0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_30_30, (MR_Integer) 0))));
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Outputs_25, RegVars0_63, &RegVars_64);
          Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_30_30, (MR_Integer) 1))));
          Var_71 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_30_30, (MR_Integer) 2)));
          Var_72 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_30_30, (MR_Integer) 3)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_CountState_28 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_64));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_71);
            MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Var_72);
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
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32 = ((MR_Word) ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__conv0_Var_32));
    transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word TypeCtorInfo_84_84;
      MR_Integer Pos_33;
      MR_Integer Var_87;
      MR_Box conv1_Pos_33;

      (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__set__member_2_p_0((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_83_83, ((MR_Box) ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32)), (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26);
      if ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
      {
        TypeCtorInfo_84_84 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
        (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__assoc_list__search_3_p_0((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_83_83, TypeCtorInfo_84_84, (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVarArgPos_20, ((MR_Box) ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32)), &conv1_Pos_33);
        if ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
        {
          Pos_33 = ((MR_Integer) (conv1_Pos_33));
          (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_TRUE;
        }
        if ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
        {
          (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__list__index1_of_first_occurrence_3_p_0((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_83_83, (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14, ((MR_Box) ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32)), &Var_87);
          if ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
            (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = (Pos_33 == Var_87);
        }
      }
      (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded);
      if ((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
        transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__commit_0) == 0)
      {
        (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_83_83 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]);
        mercury__list__member_2_p_1((env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_83_83, &(env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__conv0_Var_32, (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19, transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_TRUE;
  }
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
  {
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s env;

    {
      MR_Word CalleePredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
      MR_Integer CalleeProcId_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
      MR_Word CellVar_18;
      MR_Word ModuleInfo_21;
      MR_Word CalleeProcInfo_23;
      MR_Word CallingProcInfo_24;
      MR_Word VarTypes_25;
      MR_Word Outputs_27;
      MR_Word InputArgs_34;
      MR_Word Inputs_37;
      MR_Word MaybeNeedAcrossCall_38;
      MR_Word STATE_VARIABLE_CountState_42_42;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Unsigned packed_args_0;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_22;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_28;
      MR_Word Var_41;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;

      (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
      packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3)));
      Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3))) & (MR_Integer) 1);
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 4))));
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 5))));
      CellVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeTuplingProposal_10, (MR_Integer) 0))));
      (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeTuplingProposal_10, (MR_Integer) 1))));
      (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVarArgPos_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeTuplingProposal_10, (MR_Integer) 2))));
      ModuleInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 0))));
      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 1))));
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 2))));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 3))));
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 4))));
      Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 5))));
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 6))));
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 7))));
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_21, CalleePredId_12, CalleeProcId_13, &Var_22, &CalleeProcInfo_23);
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 0))));
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 1))));
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 2))));
      CallingProcInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 3))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 4))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 5))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 6))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 7))));
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(CallingProcInfo_24, &VarTypes_25);
      hlds__arg_info__partition_proc_call_args_7_p_0(CalleeProcInfo_23, VarTypes_25, ModuleInfo_21, (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14, &(env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26, &Outputs_27, &Var_28);
      Var_41 = transform_hlds__tupling__get_own_tupling_proposal_1_f_0(CountInfo_9);
      (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1);
      if ((env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
        Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 2))));
        transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_4(&env);
        (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = !((env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded);
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
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Float Var_78;
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 0))));
        MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 1))));
        MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 2))));
        MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 3))));
        MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 4))));
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 6))));
        MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_9, (MR_Integer) 7))));
        MR_Integer Var_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 0))));
        MR_Integer Var_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 1))));
        MR_Integer Var_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 2))));
        MR_Integer Var_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 4))));
        MR_Integer Var_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 5))));
        MR_Integer Var_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 6))));
        MR_Integer Var_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuplingParams_35, (MR_Integer) 7))));

        CellVarStoreCost_36 = mercury__float__float_1_f_0(Var_43);
        Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_39, (MR_Integer) 0))));
        Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_39, (MR_Integer) 1))));
        Var_78 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_39, (MR_Integer) 2)));
        Var_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_0_39, (MR_Integer) 3)));
        Var_45 = (Var_46 + CellVarStoreCost_36);
        {
          STATE_VARIABLE_CountState_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_42_42, 0) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_42_42, 1) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_42_42, 2) = MR_box_float(Var_78);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_42_42, 3) = MR_box_float(Var_45);
        }
        InputArgs_34 = (env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26;
      }
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), InputArgs_34, &Inputs_37);
      hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_8, &MaybeNeedAcrossCall_38);
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(CountInfo_9, Inputs_37, Outputs_27, MaybeNeedAcrossCall_38, STATE_VARIABLE_CountState_42_42, STATE_VARIABLE_CountState_40);
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_CountState_5;

    transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_CountState_5);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_CountState_5));
  }
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_CountState_13;

    transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CountState_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CountState_13));
  }
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
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_CountState_21_21;
    MR_Word Var_36;
    MR_Box conv1_STATE_VARIABLE_CountState_21_21;

    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (CountInfo_8));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_36, Inputs_9, ((MR_Box) (STATE_VARIABLE_CountState_0_19)), &conv1_STATE_VARIABLE_CountState_21_21);
    STATE_VARIABLE_CountState_21_21 = ((MR_Word) (conv1_STATE_VARIABLE_CountState_21_21));
    if ((MaybeNeedAcrossCall_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tupling.count_load_stores_for_call\'/7", (MR_String) "no need across call");
        return;
      }
    }
    else
    {
      MR_Word NeedAcrossCall_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNeedAcrossCall_11, (MR_Integer) 0))));
      MR_Word ForwardVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall_14, (MR_Integer) 0))));
      MR_Word ResumeVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall_14, (MR_Integer) 1))));
      MR_Word NondetLiveVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall_14, (MR_Integer) 2))));
      MR_Word AllVars_18;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_CountState_28_28;
      MR_Word TuplingProposal_48;
      MR_Word TuningParams_49;
      MR_Word Var_50;
      MR_Word Var_65;
      MR_Word Var_92;
      MR_Word Probe_76;
      MR_Word Var_77;
      MR_Box conv2_Probe_76;
      MR_Box conv4_STATE_VARIABLE_CountState_28_28;
      MR_Word Var_94;
      MR_Float Var_95;
      MR_Float Var_96;

      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (NondetLiveVars_17));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ResumeVars_16));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (ForwardVars_15));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_25));
      }
      AllVars_18 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_24);
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_8, (MR_Integer) 1))));
      Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_8, (MR_Integer) 6))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_77, ((MR_Box) (Var_65)), &conv2_Probe_76);
      if (succeeded)
      {
        Probe_76 = ((MR_Word) (conv2_Probe_76));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        TuplingProposal_48 = Probe_76;
      else
        TuplingProposal_48 = (MR_Word) ((MR_Unsigned) 0U);
      TuningParams_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_8, (MR_Integer) 5))));
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (TuplingProposal_48));
        MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (TuningParams_49));
      }
      parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0), Var_50, AllVars_18, ((MR_Box) (STATE_VARIABLE_CountState_21_21)), &conv4_STATE_VARIABLE_CountState_28_28);
      STATE_VARIABLE_CountState_28_28 = ((MR_Word) (conv4_STATE_VARIABLE_CountState_28_28));
      Var_92 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Outputs_10);
      Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_28_28, (MR_Integer) 1))));
      Var_95 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_28_28, (MR_Integer) 2)));
      Var_96 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CountState_28_28, (MR_Integer) 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_CountState_20 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_95);
        MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Var_96);
      }
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
  {
    MR_Word TuningParams_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_5, (MR_Integer) 5))));
    MR_Integer NormalLoadCost_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_8, (MR_Integer) 0))));

    transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(NormalLoadCost_9, Var_6, STATE_VARIABLE_CountState_0_10, STATE_VARIABLE_CountState_11);
  }
}

static void MR_CALL 
transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(
  MR_Integer LoadCost_5,
  MR_Word Var_6,
  MR_Word CountState0_7,
  MR_Word * CountState_8)
{
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
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *CountState_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RegVars_13));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StackVars_10));
        MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Loads_14);
        MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(Stores_12);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__prepare_proc_for_counting_5_p_0(
  MR_Word PredProcId_6,
  MR_Word STATE_VARIABLE_ReverseGoalPathMapMap_0_31,
  MR_Word * STATE_VARIABLE_ReverseGoalPathMapMap_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34)
{
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
    MR_ArrayPtr DummyDummyTypeArray_19;
    MR_Word AllocData_20;
    MR_Word ContainingGoalMap_21;
    MR_Word ReverseGoalPathMap_22;
    MR_Word Goal0_23;
    MR_Word FailVars_25;
    MR_Word NondetLiveness0_26;
    MR_Word Goal_27;
    MR_Word STATE_VARIABLE_ProcInfo_35_35;
    MR_Word STATE_VARIABLE_ProcInfo_36_36;
    MR_Word STATE_VARIABLE_ProcInfo_37_37;
    MR_Word STATE_VARIABLE_ProcInfo_41_41;
    MR_Word STATE_VARIABLE_ProcInfo_43_43;
    MR_ArrayPtr conv0_DummyDummyTypeArray_19;
    MR_Word _Liveness_29;
    MR_Word _NondetLiveness_30;
    MR_Box conv1__OptTupleAlloc_28;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_33, PredId_9, ProcId_10, &PredInfo_12, &STATE_VARIABLE_ProcInfo_35_35);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_12, &Markers_13);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_12, &ArgTypes_14);
    hlds__arg_info__generate_proc_arg_info_5_p_0(Markers_13, ArgTypes_14, STATE_VARIABLE_ModuleInfo_0_33, STATE_VARIABLE_ProcInfo_35_35, &STATE_VARIABLE_ProcInfo_36_36);
    ll_backend__liveness__detect_liveness_proc_4_p_0(STATE_VARIABLE_ModuleInfo_0_33, PredProcId_6, STATE_VARIABLE_ProcInfo_36_36, &STATE_VARIABLE_ProcInfo_37_37);
    ll_backend__liveness__initial_liveness_4_p_0(STATE_VARIABLE_ModuleInfo_0_33, PredInfo_12, STATE_VARIABLE_ProcInfo_37_37, &Liveness0_15);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &Globals_16);
    hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(PredInfo_12, Globals_16, &TypeInfoLiveness_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 338, &OptNoReturnCalls_18);
    mercury__array__init_3_p_0((MR_Word) (&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0), (MR_Integer) 1, ((MR_Box) ((MR_Integer) 1)), &conv0_DummyDummyTypeArray_19);
    DummyDummyTypeArray_19 = (MR_ArrayPtr) (conv0_DummyDummyTypeArray_19);
    {
      AllocData_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AllocData_20, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_33));
      MR_hl_field(MR_mktag(0), AllocData_20, 1) = ((MR_Box) (STATE_VARIABLE_ProcInfo_37_37));
      MR_hl_field(MR_mktag(0), AllocData_20, 2) = ((MR_Box) (PredProcId_6));
      MR_hl_field(MR_mktag(0), AllocData_20, 3) = (MR_Box) (((((MR_Unsigned) (TypeInfoLiveness_17) << (MR_Integer) 1)) | (MR_Unsigned) (OptNoReturnCalls_18)));
      MR_hl_field(MR_mktag(0), AllocData_20, 4) = ((MR_Box) (DummyDummyTypeArray_19));
    }
    hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(STATE_VARIABLE_ModuleInfo_0_33, &ContainingGoalMap_21, STATE_VARIABLE_ProcInfo_37_37, &STATE_VARIABLE_ProcInfo_41_41);
    ReverseGoalPathMap_22 = mdbcomp__goal_path__create_reverse_goal_path_map_1_f_0(ContainingGoalMap_21);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[3]), ((MR_Box) (PredProcId_6)), ((MR_Box) (ReverseGoalPathMap_22)), STATE_VARIABLE_ReverseGoalPathMapMap_0_31, STATE_VARIABLE_ReverseGoalPathMapMap_32);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_41_41, &Goal0_23);
    FailVars_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    NondetLiveness0_26 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[5]), Goal0_23, &Goal_27, FailVars_25, AllocData_20, ((MR_Box) ((MR_Integer) 0)), &conv1__OptTupleAlloc_28, Liveness0_15, &_Liveness_29, NondetLiveness0_26, &_NondetLiveness_30);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_27, STATE_VARIABLE_ProcInfo_41_41, &STATE_VARIABLE_ProcInfo_43_43);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_9, ProcId_10, PredInfo_12, STATE_VARIABLE_ProcInfo_43_43, STATE_VARIABLE_ModuleInfo_0_33, STATE_VARIABLE_ModuleInfo_34);
  }
}

static MR_Word MR_CALL 
transform_hlds__tupling__get_own_tupling_proposal_1_f_0(
  MR_Word CountInfo_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_3, (MR_Integer) 1))));
    MR_Word Probe_15;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_3, (MR_Integer) 6))));
    MR_Box conv0_Probe_15;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), Var_16, ((MR_Box) (Var_4)), &conv0_Probe_15);
    if (succeeded)
    {
      Probe_15 = ((MR_Word) (conv0_Probe_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      HeadVar__2_2 = Probe_15;
    else
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__tupling__get_tupling_proposal_2_f_0(
  MR_Word CountInfo_4,
  MR_Word PredProcId_5)
{
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
}

static MR_Box MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__3_67;

    conv0_HeadVar__3_67 = transform_hlds__tupling__IntroducedFrom__func__add_transformed_proc__668__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_67));
    return wrapper_arg_2;
  }
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
    MR_Word VarTypes_32;
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
    MR_Word STATE_VARIABLE_ProcInfo_54_54;
    MR_Word Var_56;
    MR_Word STATE_VARIABLE_ProcInfo_57_57;
    MR_Word STATE_VARIABLE_ProcInfo_59_59;
    MR_Word STATE_VARIABLE_ModuleInfo_60_60;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_26, ProcId_27, &PredInfo_29, &STATE_VARIABLE_ProcInfo_49_49);
    transform_hlds__tupling__build_interval_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_3, STATE_VARIABLE_ProcInfo_49_49, &IntervalInfo_30);
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), FieldVars_21, &TupleArity_31);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_49_49, &VarTypes_32);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_32, FieldVars_21, &TupleArgTypes_33);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (TupleArity_31));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_50, TupleArgTypes_33, &TupleConsType_34);
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(TupleConsType_34, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__tupling_scalar_common_8[3])), &CellVar_35, STATE_VARIABLE_ProcInfo_49_49, &STATE_VARIABLE_ProcInfo_54_54);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_54_54, &HeadVars_36);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (transform_hlds__tupling__add_transformed_proc_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (HeadVars_36));
    }
    ArgsToTuple_37 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_56, FieldVars_21);
    transform_hlds__tupling__build_insert_map_4_p_0(CellVar_35, FieldVars_21, IntervalInfo_30, &InsertMap_38);
    transform_hlds__tupling__make_transformed_proc_5_p_0(CellVar_35, FieldVars_21, InsertMap_38, STATE_VARIABLE_ProcInfo_54_54, &STATE_VARIABLE_ProcInfo_57_57);
    check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_57_57, &STATE_VARIABLE_ProcInfo_59_59, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_60_60);
    mercury__counter__allocate_3_p_0(&Num_39, HeadVar__5_5, HeadVar__6_6);
    transform_hlds__tupling__create_aux_pred_9_p_0(PredId_26, ProcId_27, PredInfo_29, STATE_VARIABLE_ProcInfo_59_59, Num_39, &AuxPredProcId_40, &CallAux_41, STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_ModuleInfo_4);
    {
      TransformedProc_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InsertMap_19;

    transform_hlds__tupling__build_insert_map_2_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InsertMap_19);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InsertMap_19));
  }
}

static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0(
  MR_Word CellVar_5,
  MR_Word FieldVars_6,
  MR_Word IntervalInfo_7,
  MR_Word * InsertMap_8)
{
  {
    MR_Word FieldVarsSet_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Box conv1_InsertMap_8;

    FieldVarsSet_9 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FieldVars_6);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__tupling__build_insert_map_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (CellVar_5));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (FieldVars_6));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (FieldVarsSet_9));
    }
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_7, (MR_Integer) 9))));
    Var_12 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[10]));
    mercury__map__foldl_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[8]), Var_10, Var_11, ((MR_Box) (Var_12)), &conv1_InsertMap_8);
    *InsertMap_8 = ((MR_Word) (conv1_InsertMap_8));
  }
}

static void MR_CALL 
transform_hlds__tupling__build_interval_info_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ProcInfo_5,
  MR_Word * IntervalInfo_6)
{
  {
    MR_Word Goal_7;
    MR_Word VarTypes_8;
    MR_Word OutputArgs_10;
    MR_Word Counter0_12;
    MR_Integer CurInterval_13;
    MR_Word Counter_14;
    MR_Word CurIntervalId_15;
    MR_Word EndMap_16;
    MR_Word StartMap_17;
    MR_Word SuccMap_18;
    MR_Word VarsMap_19;
    MR_Word IntParams_20;
    MR_Word IntervalInfo0_21;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word _InputArgs_9;
    MR_Word _UnusedArgs_11;
    MR_Box conv0_Var_22;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_5, &Goal_7);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_5, &VarTypes_8);
    hlds__arg_info__partition_proc_args_5_p_0(ProcInfo_5, ModuleInfo_4, &_InputArgs_9, &OutputArgs_10, &_UnusedArgs_11);
    Counter0_12 = mercury__counter__init_1_f_0((MR_Integer) 1);
    mercury__counter__allocate_3_p_0(&CurInterval_13, Counter0_12, &Counter_14);
    CurIntervalId_15 = (MR_Word) (CurInterval_13);
    EndMap_16 = mercury__map__singleton_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (CurIntervalId_15)), ((MR_Box) ((MR_Unsigned) 4U)));
    StartMap_17 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0));
    SuccMap_18 = mercury__map__singleton_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[6]), ((MR_Box) (CurIntervalId_15)), ((MR_Box) ((MR_Unsigned) 0U)));
    Var_26 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputArgs_10);
    VarsMap_19 = mercury__map__singleton_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[7]), ((MR_Box) (CurIntervalId_15)), ((MR_Box) (Var_26)));
    {
      IntParams_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IntParams_20, 0) = ((MR_Box) (ModuleInfo_4));
      MR_hl_field(MR_mktag(0), IntParams_20, 1) = ((MR_Box) (VarTypes_8));
      MR_hl_field(MR_mktag(0), IntParams_20, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_28 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_29 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputArgs_10);
    Var_30 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0));
    Var_31 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0));
    Var_32 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0));
    Var_33 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), ((MR_Box) (CurIntervalId_15)));
    Var_34 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0));
    Var_35 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0));
    Var_36 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[8]));
    {
      IntervalInfo0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 0) = ((MR_Box) (IntParams_20));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 3) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 4) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 6) = ((MR_Box) (CurIntervalId_15));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 7) = ((MR_Box) (Counter_14));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 8) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 9) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 10) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 11) = ((MR_Box) (StartMap_17));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 12) = ((MR_Box) (EndMap_16));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 13) = ((MR_Box) (SuccMap_18));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 14) = ((MR_Box) (VarsMap_19));
      MR_hl_field(MR_mktag(0), IntervalInfo0_21, 15) = ((MR_Box) (Var_36));
    }
    backend_libs__interval__build_interval_info_in_goal_5_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[9]), Goal_7, IntervalInfo0_21, IntervalInfo_6, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_22);
  }
}

static void MR_CALL 
transform_hlds__tupling__create_aux_pred_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word PredInfo_12,
  MR_Word ProcInfo_13,
  MR_Integer Counter_14,
  MR_Word * AuxPredProcId_15,
  MR_Word * CallAux_16,
  MR_Word ModuleInfo0_17,
  MR_Word * ModuleInfo_18)
{
  {
    MR_Word AuxHeadVars_19;
    MR_Word Goal_20;
    MR_Word GoalInfo_22;
    MR_Word InitialAuxInstMap_23;
    MR_Word TVarSet_24;
    MR_Word VarTypes_25;
    MR_Word ClassContext_26;
    MR_Word RttiVarMaps_27;
    MR_Word VarSet_28;
    MR_Word InstVarSet_29;
    MR_Word Markers_30;
    MR_Word OrigOrigin_31;
    MR_Word HasParallelConj_32;
    MR_Word VarNameRemap_33;
    MR_Word PredModule_34;
    MR_String PredName_35;
    MR_Word PredOrFunc_36;
    MR_Word Context_37;
    MR_Integer Line_38;
    MR_Word AuxPredSymName0_39;
    MR_Integer ProcNo_40;
    MR_String Suffix_41;
    MR_Word AuxPredSymName_42;
    MR_Word Origin_43;
    MR_Word Var_51;
    MR_String Var_53;
    MR_Word _ExtraArgs_44;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_13, &AuxHeadVars_19);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_13, &Goal_20);
    GoalInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_20, (MR_Integer) 1))));
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ProcInfo_13, ModuleInfo0_17, &InitialAuxInstMap_23);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_12, &TVarSet_24);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_13, &VarTypes_25);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_12, &ClassContext_26);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_13, &RttiVarMaps_27);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_13, &VarSet_28);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_13, &InstVarSet_29);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_12, &Markers_30);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_12, &OrigOrigin_31);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_13, &HasParallelConj_32);
    hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo_12, &VarNameRemap_33);
    PredModule_34 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
    PredName_35 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
    PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_12);
    Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_22);
    mercury__term__context_line_2_p_0(Context_37, &Line_38);
    parse_tree__prog_util__make_pred_name_with_context_7_p_0(PredModule_34, (MR_String) "tupling", PredOrFunc_36, PredName_35, Line_38, Counter_14, &AuxPredSymName0_39);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_11, &ProcNo_40);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_8[0]), ProcNo_40, &Var_53);
    Suffix_41 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_53);
    mdbcomp__sym_name__add_sym_name_suffix_3_p_0(AuxPredSymName0_39, Suffix_41, &AuxPredSymName_42);
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (ProcNo_40));
    }
    {
      Origin_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Origin_43, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(2), Origin_43, 1) = ((MR_Box) (OrigOrigin_31));
      MR_hl_field(MR_mktag(2), Origin_43, 2) = ((MR_Box) (PredId_10));
    }
    hlds__hlds_pred__define_new_pred_20_p_0(Origin_43, Goal_20, CallAux_16, AuxHeadVars_19, &_ExtraArgs_44, InitialAuxInstMap_23, AuxPredSymName_42, TVarSet_24, VarTypes_25, ClassContext_26, RttiVarMaps_27, VarSet_28, InstVarSet_29, Markers_30, (MR_Integer) 1, HasParallelConj_32, VarNameRemap_33, ModuleInfo0_17, ModuleInfo_18, AuxPredProcId_15);
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_39;

    succeeded = transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__698__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_39);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_39));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0(
  MR_Word CellVar_6,
  MR_Word FieldVarsList_7,
  MR_Word InsertMap_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_34,
  MR_Word * STATE_VARIABLE_ProcInfo_35)
{
  {
    MR_bool succeeded;
    MR_Word HeadVars0_10;
    MR_Word ArgModes0_11;
    MR_Word HeadVarsAndModes_12;
    MR_Word HeadVars_15;
    MR_Word ArgModes_16;
    MR_Word Goal0_17;
    MR_Word VarTypes0_18;
    MR_Word VarSet0_19;
    MR_Word Goal1_21;
    MR_Word VarSet1_22;
    MR_Word VarTypes1_23;
    MR_Word RenameMapA_24;
    MR_Word ProcStartDeconstruct_25;
    MR_Word ProcStartInsert_26;
    MR_Word Goal2_27;
    MR_Word VarSet_28;
    MR_Word VarTypes_29;
    MR_Word RenameMapB_30;
    MR_Word Goal3_31;
    MR_Word RenameMap_32;
    MR_Word Goal_33;
    MR_Word Var_36;
    MR_Word Var_40;
    MR_Word STATE_VARIABLE_ProcInfo_41_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_ProcInfo_45_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word STATE_VARIABLE_ProcInfo_53_53;
    MR_Word STATE_VARIABLE_ProcInfo_54_54;
    MR_Word STATE_VARIABLE_ProcInfo_55_55;
    MR_Word InsertGoal_75;
    MR_Word GoalInfo_77;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_83;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_34, &HeadVars0_10);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_34, &ArgModes0_11);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (transform_hlds__tupling__make_transformed_proc_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (FieldVarsList_7));
    }
    HeadVarsAndModes_12 = mercury__list__filter_map_corresponding_3_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[7]), Var_36, HeadVars0_10, ArgModes0_11);
    mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadVarsAndModes_12, &HeadVars_15, &ArgModes_16);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (CellVar_6));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), HeadVars_15, Var_42);
    hlds__hlds_pred__proc_info_set_headvars_3_p_0(Var_40, STATE_VARIABLE_ProcInfo_0_34, &STATE_VARIABLE_ProcInfo_41_41);
    Var_47 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_16, Var_46);
    hlds__hlds_pred__proc_info_set_argmodes_3_p_0(Var_44, STATE_VARIABLE_ProcInfo_41_41, &STATE_VARIABLE_ProcInfo_45_45);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_45_45, &Goal0_17);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_45_45, &VarTypes0_18);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_45_45, &VarSet0_19);
    Var_50 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]));
    backend_libs__interval__record_decisions_in_goal_10_p_0(Goal0_17, &Goal1_21, VarSet0_19, &VarSet1_22, VarTypes0_18, &VarTypes1_23, Var_50, &RenameMapA_24, InsertMap_8, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__tupling_scalar_common_8[1])));
    hlds__make_goal__deconstruct_tuple_3_p_0(CellVar_6, FieldVarsList_7, &ProcStartDeconstruct_25);
    Var_51 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FieldVarsList_7);
    {
      ProcStartInsert_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcStartInsert_26, 0) = ((MR_Box) (ProcStartDeconstruct_25));
      MR_hl_field(MR_mktag(0), ProcStartInsert_26, 1) = ((MR_Box) (Var_51));
    }
    Var_80 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]));
    backend_libs__interval__make_inserted_goal_9_p_0(VarSet1_22, &VarSet_28, VarTypes1_23, &VarTypes_29, Var_80, &RenameMapB_30, ProcStartInsert_26, (MR_Word) ((MR_Unsigned) 0U), &InsertGoal_75);
    GoalInfo_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_21, (MR_Integer) 1))));
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Goal1_21));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (InsertGoal_75));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_83));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_82, GoalInfo_77, &Goal2_27);
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(RenameMapB_30, Goal2_27, &Goal3_31);
    mercury__map__old_merge_3_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), RenameMapA_24, RenameMapB_30, &RenameMap_32);
    Var_52 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_15);
    backend_libs__interval__apply_headvar_correction_4_p_0(Var_52, RenameMap_32, Goal3_31, &Goal_33);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_33, STATE_VARIABLE_ProcInfo_45_45, &STATE_VARIABLE_ProcInfo_53_53);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_28, STATE_VARIABLE_ProcInfo_53_53, &STATE_VARIABLE_ProcInfo_54_54);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_29, STATE_VARIABLE_ProcInfo_54_54, &STATE_VARIABLE_ProcInfo_55_55);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_55_55, STATE_VARIABLE_ProcInfo_35);
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling__add_tupling_proposal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_31;

    succeeded = transform_hlds__tupling__IntroducedFrom__func__add_tupling_proposal__576__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_31);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_31));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling__add_tupling_proposal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word CandidateHeadVars_8,
  MR_Integer MinArgsToTuple_9,
  MR_Word PredProcId_4,
  MR_Word STATE_VARIABLE_TuplingScheme_0_27,
  MR_Word * STATE_VARIABLE_TuplingScheme_28)
{
  {
    MR_bool succeeded;
    MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_4, (MR_Integer) 0))));
    MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_4, (MR_Integer) 1))));
    MR_Word ProcInfo_15;
    MR_Word VarSet_16;
    MR_Word HeadVars_17;
    MR_Word FieldVarArgPos_18;
    MR_Word TuplingProposal_23;
    MR_Word Var_29;
    MR_Word Var_14;
    MR_Integer Var_32;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_7, PredId_11, ProcId_12, &Var_14, &ProcInfo_15);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_15, &VarSet_16);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_15, &HeadVars_17);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__tupling__add_tupling_proposal_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (PredProcId_4));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (HeadVars_17));
    }
    FieldVarArgPos_18 = mercury__list__filter_map_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[2]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[6]), Var_29, CandidateHeadVars_8);
    Var_32 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[6]), FieldVarArgPos_18);
    succeeded = (Var_32 < MinArgsToTuple_9);
    if (succeeded)
      TuplingProposal_23 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DummyCellVar_24;
      MR_Word FieldVars_26;
      MR_Word Var_25;

      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "DummyCellVar", &DummyCellVar_24, VarSet_16, &Var_25);
      FieldVars_26 = mercury__assoc_list__keys_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FieldVarArgPos_18);
      {
        TuplingProposal_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TuplingProposal_23, 0) = ((MR_Box) (DummyCellVar_24));
        MR_hl_field(MR_mktag(1), TuplingProposal_23, 1) = ((MR_Box) (FieldVars_26));
        MR_hl_field(MR_mktag(1), TuplingProposal_23, 2) = ((MR_Box) (FieldVarArgPos_18));
      }
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), ((MR_Box) (PredProcId_4)), ((MR_Box) (TuplingProposal_23)), STATE_VARIABLE_TuplingScheme_0_27, STATE_VARIABLE_TuplingScheme_28);
  }
}

static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_23;

    transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__504__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_23));
  }
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
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Box conv1_Origins_13;

      Var_16 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]));
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[1]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[13]), ListOfOrigins_6, ((MR_Box) (Var_16)), &conv1_Origins_13);
      Origins_13 = ((MR_Word) (conv1_Origins_13));
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (HeadVarName_5));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Origins_13));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *CandidateHeadVars_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[2]), CandidateHeadVars0_7, Var_17);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_2_6_f_0(
  MR_Word PredProcId_8,
  MR_Word VarSet_9,
  MR_Word VarTypes_10,
  MR_Word ModuleInfo_11,
  MR_Word HeadVar_12,
  MR_Word ArgMode_13,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_17_17;
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_String Name_14;
    MR_Word Origins_15;
    MR_Word Type_16;

    succeeded = check_hlds__mode_util__mode_is_input_2_p_0(ModuleInfo_11, ArgMode_13);
    if (succeeded)
    {
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_10, HeadVar_12, &Type_16);
      succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_16);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_17_17 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        succeeded = mercury__varset__search_name_3_p_0(TypeCtorInfo_17_17, VarSet_9, HeadVar_12, &Name_14);
        if (succeeded)
        {
          TypeCtorInfo_18_18 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
          TypeInfo_19_19 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[1]);
          Origins_15 = mercury__map__singleton_2_f_0(TypeCtorInfo_18_18, TypeInfo_19_19, ((MR_Box) (PredProcId_8)), ((MR_Box) (HeadVar_12)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_14));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Origins_15));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_CandidateHeadVars_8;

    transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_CandidateHeadVars_8);
    *wrapper_arg_4 = ((MR_Box) (conv4_CandidateHeadVars_8));
  }
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_CandidateHeadVars_8;

    transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_CandidateHeadVars_8);
    *wrapper_arg_2 = ((MR_Box) (conv3_CandidateHeadVars_8));
  }
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeProc_65 = ((MR_Word) ((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__conv1_CalleeProc_65));
    transform_hlds__tupling__maybe_tuple_scc_10_p_0_3(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_71 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
    mercury__digraph__lookup_key_3_p_0((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_71, (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13, ((MR_Box) ((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeProc_65)), &(env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeKey_69);
    mercury__digraph__lookup_to_3_p_0((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_71, (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13, (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeKey_69, &(env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CallingKeys_70);
    (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeInfo_8_72 = (MR_Word) (&transform_hlds__tupling_scalar_common_1[2]);
    (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = mercury__set__is_non_empty_1_p_0((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeInfo_8_72, (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CallingKeys_70);
    if ((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
      transform_hlds__tupling__maybe_tuple_scc_10_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__set__member_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &(env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__conv1_CalleeProc_65, (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, transform_hlds__tupling__maybe_tuple_scc_10_p_0_4, env_ptr);
        }
        (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0(
  MR_Word TraceCounts_11,
  MR_Word TuningParams_12,
  MR_Word DepGraph_13,
  MR_Word SCC_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Counter_0_26,
  MR_Word * STATE_VARIABLE_Counter_27,
  MR_Word STATE_VARIABLE_TransformMap_0_28,
  MR_Word * STATE_VARIABLE_TransformMap_29)
{
  {
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s env;

    (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13 = DepGraph_13;
    (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14 = SCC_14;
    {
      MR_Word Globals_18;
      MR_Word VeryVerbose_19;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &Globals_18);
      libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 60, &VeryVerbose_19);
      switch (VeryVerbose_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_34;
            MR_Box conv0_STATE_VARIABLE_IO_35_35;

            mercury__io__write_string_3_p_0((MR_String) "% Considering tupling in ");
            {
              Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_10_p_0_1));
              MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_24));
            }
            mercury__set__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_35_35);
            mercury__io__write_string_3_p_0((MR_String) "...\n");
          }
          break;
      }
      transform_hlds__tupling__maybe_tuple_scc_10_p_0_5(&env);
      if ((env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
      {
        MR_Word CandidateHeadVars_22;
        MR_Integer MinArgsToTuple_23;
        MR_Word SingleProc_21;
        MR_Box conv2_SingleProc_21;
        MR_Integer Var_48;
        MR_Integer Var_49;
        MR_Integer Var_50;
        MR_Integer Var_51;
        MR_Integer Var_52;
        MR_Integer Var_53;
        MR_Integer Var_54;
        MR_Integer Var_38;

        (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, &conv2_SingleProc_21);
        if ((env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
        {
          SingleProc_21 = ((MR_Word) (conv2_SingleProc_21));
          (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = MR_TRUE;
        }
        if ((env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
          transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(STATE_VARIABLE_ModuleInfo_0_24, SingleProc_21, &CandidateHeadVars_22);
        else
        {
          MR_Word ListsOfCandidates_76;
          MR_Word FlatListOfCandidates_77;
          MR_Word CandidatesMultiMap_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Box conv5_CandidateHeadVars_22;

          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_10_p_0_6));
            MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_24));
          }
          Var_80 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14);
          mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[3]), Var_79, Var_80, &ListsOfCandidates_76);
          mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[2]), ListsOfCandidates_76, &FlatListOfCandidates_77);
          mercury__multi_map__from_flat_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[1]), FlatListOfCandidates_77, &CandidatesMultiMap_78);
          mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__tupling_scalar_common_1[4]), (MR_Word) (&transform_hlds__tupling_scalar_common_1[3]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[12]), CandidatesMultiMap_78, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_CandidateHeadVars_22);
          CandidateHeadVars_22 = ((MR_Word) (conv5_CandidateHeadVars_22));
        }
        Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 0))));
        Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 1))));
        Var_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 2))));
        Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 3))));
        Var_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 4))));
        Var_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 5))));
        Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 6))));
        MinArgsToTuple_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_12, (MR_Integer) 7))));
        Var_38 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_2[2]), CandidateHeadVars_22);
        (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = (Var_38 < MinArgsToTuple_23);
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
                mercury__io__write_string_3_p_0((MR_String) "% Too few candidate headvars.\n");
              }
              break;
          }
          *STATE_VARIABLE_TransformMap_29 = STATE_VARIABLE_TransformMap_0_28;
          *STATE_VARIABLE_Counter_27 = STATE_VARIABLE_Counter_0_26;
          *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
        }
        else
          transform_hlds__tupling__maybe_tuple_scc_2_11_p_0(TraceCounts_11, TuningParams_12, (env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, CandidateHeadVars_22, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_TransformMap_0_28, STATE_VARIABLE_TransformMap_29, VeryVerbose_19);
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
              mercury__io__write_string_3_p_0((MR_String) "% SCC has no local callers.\n");
            }
            break;
        }
        *STATE_VARIABLE_TransformMap_29 = STATE_VARIABLE_TransformMap_0_28;
        *STATE_VARIABLE_Counter_27 = STATE_VARIABLE_Counter_0_26;
        *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
      }
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
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__7_7;

    succeeded = transform_hlds__tupling__candidate_headvars_of_proc_2_6_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__7_7);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__7_7));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_2,
  MR_Word * CandidateHeadVars_8)
{
  {
    MR_bool succeeded;
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_2, (MR_Integer) 0))));
    MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_2, (MR_Integer) 1))));
    MR_Word ProcInfo_10;
    MR_Word VarSet_11;
    MR_Word VarTypes_12;
    MR_Word HeadVars_13;
    MR_Word ArgModes_14;
    MR_Word Var_15;
    MR_Word Var_9;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_4, PredId_6, ProcId_7, &Var_9, &ProcInfo_10);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_10, &VarSet_11);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_10, &VarTypes_12);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_10, &HeadVars_13);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_10, &ArgModes_14);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__tupling__candidate_headvars_of_proc_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (PredProcId_2));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (VarSet_11));
      MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (VarTypes_12));
      MR_hl_field(MR_mktag(0), Var_15, 6) = ((MR_Box) (ModuleInfo_4));
    }
    *CandidateHeadVars_8 = mercury__list__filter_map_corresponding_3_f_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[2]), Var_15, HeadVars_13, ArgModes_14);
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ReverseGoalPathMapMap_32;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_34;

    transform_hlds__tupling__prepare_proc_for_counting_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ReverseGoalPathMapMap_32, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_34);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ReverseGoalPathMapMap_32));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_34));
  }
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0(
  MR_Word TraceCounts_12,
  MR_Word TuningParams_13,
  MR_Word PredProcIds_14,
  MR_Word CandidateHeadVars_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_Counter_0_27,
  MR_Word * STATE_VARIABLE_Counter_28,
  MR_Word STATE_VARIABLE_TransformMap_0_29,
  MR_Word * STATE_VARIABLE_TransformMap_30,
  MR_Word VeryVerbose_19)
{
  {
    MR_bool succeeded;
    MR_Word ReverseGoalPathMapMap_20;
    MR_Word CostsWithoutTupling_21;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_ModuleInfo_33_33;
    MR_Word Var_34;
    MR_Box conv3_ReverseGoalPathMapMap_20;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_33_33;
    MR_Float Var_43;
    MR_Float Var_44;

    Var_32 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[3]));
    mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[4]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[11]), PredProcIds_14, ((MR_Box) (Var_32)), &conv3_ReverseGoalPathMapMap_20, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_25)), &conv2_STATE_VARIABLE_ModuleInfo_33_33);
    ReverseGoalPathMapMap_20 = ((MR_Word) (conv3_ReverseGoalPathMapMap_20));
    STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_33_33));
    Var_34 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0));
    transform_hlds__tupling__count_load_stores_for_scc_7_p_0(TraceCounts_12, TuningParams_13, STATE_VARIABLE_ModuleInfo_33_33, Var_34, ReverseGoalPathMapMap_20, PredProcIds_14, &CostsWithoutTupling_21);
    switch (VeryVerbose_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float LoadsWoTupling_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithoutTupling_21, (MR_Integer) 0)));
          MR_Float StoresWoTupling_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithoutTupling_21, (MR_Integer) 1)));
          MR_String Var_61;
          MR_String Var_72;

          mercury__io__write_string_3_p_0((MR_String) "% SCC costs without tupling = {");
          mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_8[0]), (MR_Integer) 4, LoadsWoTupling_22, &Var_61);
          mercury__io__write_string_3_p_0(Var_61);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_8[0]), (MR_Integer) 4, StoresWoTupling_23, &Var_72);
          mercury__io__write_string_3_p_0(Var_72);
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
        break;
    }
    Var_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithoutTupling_21, (MR_Integer) 0)));
    Var_44 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithoutTupling_21, (MR_Integer) 1)));
    succeeded = (Var_43 == ((MR_Float) 0.0000000000000000));
    if (succeeded)
      succeeded = (Var_44 == ((MR_Float) 0.0000000000000000));
    if (succeeded)
    {
      *STATE_VARIABLE_TransformMap_30 = STATE_VARIABLE_TransformMap_0_29;
      *STATE_VARIABLE_Counter_28 = STATE_VARIABLE_Counter_0_27;
      *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_33_33;
    }
    else
      transform_hlds__tupling__maybe_tuple_scc_3_13_p_0(TraceCounts_12, TuningParams_13, ReverseGoalPathMapMap_20, PredProcIds_14, CandidateHeadVars_15, CostsWithoutTupling_21, STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_26, STATE_VARIABLE_Counter_0_27, STATE_VARIABLE_Counter_28, STATE_VARIABLE_TransformMap_0_29, STATE_VARIABLE_TransformMap_30, VeryVerbose_19);
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Float conv1_STATE_VARIABLE_Loads_35;
    MR_Float conv0_STATE_VARIABLE_Stores_37;

    transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2), &conv1_STATE_VARIABLE_Loads_35, MR_unbox_float(wrapper_arg_4), &conv0_STATE_VARIABLE_Stores_37);
    *wrapper_arg_3 = MR_box_float(conv1_STATE_VARIABLE_Loads_35);
    *wrapper_arg_5 = MR_box_float(conv0_STATE_VARIABLE_Stores_37);
  }
}

static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_7_p_0(
  MR_Word TraceCounts_8,
  MR_Word TuningParams_9,
  MR_Word ModuleInfo_10,
  MR_Word TuplingScheme_11,
  MR_Word ReverseGoalPathMapMap_12,
  MR_Word SCC_13,
  MR_Word * Costs_14)
{
  {
    MR_Float Loads_15;
    MR_Float Stores_16;
    MR_Word Var_17;
    MR_Box conv3_Loads_15;
    MR_Box conv2_Stores_16;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_for_scc_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (TraceCounts_8));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (TuningParams_9));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(MR_mktag(0), Var_17, 6) = ((MR_Box) (TuplingScheme_11));
      MR_hl_field(MR_mktag(0), Var_17, 7) = ((MR_Box) (ReverseGoalPathMapMap_12));
    }
    mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_17, SCC_13, MR_box_float((MR_Float) 0.0000000000000000), &conv3_Loads_15, MR_box_float((MR_Float) 0.0000000000000000), &conv2_Stores_16);
    Loads_15 = MR_unbox_float(conv3_Loads_15);
    Stores_16 = MR_unbox_float(conv2_Stores_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Costs_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(Loads_15);
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(Stores_16);
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_3_13_p_0(
  MR_Word TraceCounts_14,
  MR_Word TuningParams_15,
  MR_Word ReverseGoalPathMapMap_16,
  MR_Word SCC_17,
  MR_Word CandidateHeadVars_18,
  MR_Word CostsWithoutTupling_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31,
  MR_Word STATE_VARIABLE_Counter_0_32,
  MR_Word * STATE_VARIABLE_Counter_33,
  MR_Word STATE_VARIABLE_TransformMap_0_34,
  MR_Word * STATE_VARIABLE_TransformMap_35,
  MR_Word VeryVerbose_23)
{
  {
    MR_bool succeeded;
    MR_Word MaybeBestScheme_24;

    transform_hlds__tupling__find_best_tupling_scheme_7_p_0(TraceCounts_14, TuningParams_15, STATE_VARIABLE_ModuleInfo_0_30, ReverseGoalPathMapMap_16, SCC_17, CandidateHeadVars_18, &MaybeBestScheme_24);
    if ((MaybeBestScheme_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
      *STATE_VARIABLE_Counter_33 = STATE_VARIABLE_Counter_0_32;
      *STATE_VARIABLE_TransformMap_35 = STATE_VARIABLE_TransformMap_0_34;
    }
    else
    {
      MR_Word CostsWithTupling_25;
      MR_Word TuplingScheme_26;
      MR_Float LoadsWithTupling_27;
      MR_Float StoresWithTupling_28;
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBestScheme_24, (MR_Integer) 0))));
      MR_Float LoadsWithoutTupling_78;
      MR_Float StoresWithoutTupling_79;
      MR_Float LoadsWithTupling_80;
      MR_Float StoresWithTupling_81;
      MR_Float CostsRatio_82;
      MR_Float TotalWithoutTupling_83;
      MR_Float TotalWithTupling_84;
      MR_Integer Var_85;

      CostsWithTupling_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
      TuplingScheme_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
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
            MR_String Var_55;
            MR_String Var_66;

            mercury__io__write_string_3_p_0((MR_String) "% SCC costs with tupling = {");
            mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_8[0]), (MR_Integer) 4, LoadsWithTupling_27, &Var_55);
            mercury__io__write_string_3_p_0(Var_55);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_8[0]), (MR_Integer) 4, StoresWithTupling_28, &Var_66);
            mercury__io__write_string_3_p_0(Var_66);
            mercury__io__write_string_3_p_0((MR_String) "}\n");
          }
          break;
      }
      LoadsWithoutTupling_78 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithoutTupling_19, (MR_Integer) 0)));
      StoresWithoutTupling_79 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithoutTupling_19, (MR_Integer) 1)));
      LoadsWithTupling_80 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithTupling_25, (MR_Integer) 0)));
      StoresWithTupling_81 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostsWithTupling_25, (MR_Integer) 1)));
      Var_85 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_15, (MR_Integer) 6))));
      CostsRatio_82 = mercury__float__float_1_f_0(Var_85);
      TotalWithoutTupling_83 = (LoadsWithoutTupling_78 + StoresWithoutTupling_79);
      TotalWithTupling_84 = (LoadsWithTupling_80 + StoresWithTupling_81);
      succeeded = (TotalWithTupling_84 == ((MR_Float) 0.0000000000000000));
      if (succeeded)
      {
        succeeded = (TotalWithoutTupling_83 > ((MR_Float) 0.0000000000000000));
      }
      else
      {
        MR_Float Var_87;
        MR_Float Var_88 = (TotalWithoutTupling_83 * ((MR_Float) 100.00000000000000));

        Var_87 = mercury__float__f_slash_2_f_0(Var_88, TotalWithTupling_84);
        succeeded = (Var_87 >= CostsRatio_82);
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
              mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "% Proceeding with tupling\n")));
            }
            break;
        }
        transform_hlds__tupling__add_transformed_procs_7_p_0(TuplingScheme_26, STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ModuleInfo_31, STATE_VARIABLE_Counter_0_32, STATE_VARIABLE_Counter_33, STATE_VARIABLE_TransformMap_0_34, STATE_VARIABLE_TransformMap_35);
      }
      else
      {
        *STATE_VARIABLE_TransformMap_35 = STATE_VARIABLE_TransformMap_0_34;
        *STATE_VARIABLE_Counter_33 = STATE_VARIABLE_Counter_0_32;
        *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
      }
    }
  }
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
  {
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_13;
    MR_Box conv4_STATE_VARIABLE_Counter_15;
    MR_Box conv3_STATE_VARIABLE_TransformMap_17;

    mercury__map__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[0]), (MR_Word) (&transform_hlds__tupling_scalar_common_2[10]), TuplingScheme_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_12)), &conv5_STATE_VARIABLE_ModuleInfo_13, ((MR_Box) (STATE_VARIABLE_Counter_0_14)), &conv4_STATE_VARIABLE_Counter_15, ((MR_Box) (STATE_VARIABLE_TransformMap_0_16)), &conv3_STATE_VARIABLE_TransformMap_17);
    *STATE_VARIABLE_ModuleInfo_13 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_13));
    *STATE_VARIABLE_Counter_15 = ((MR_Word) (conv4_STATE_VARIABLE_Counter_15));
    *STATE_VARIABLE_TransformMap_17 = ((MR_Word) (conv3_STATE_VARIABLE_TransformMap_17));
  }
}

static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_7_p_0(
  MR_Word TraceCounts_8,
  MR_Word TuningParams_9,
  MR_Word ModuleInfo_10,
  MR_Word ReverseGoalPathMapMap_11,
  MR_Word PredProcIds_12,
  MR_Word CandidateHeadVars_13,
  MR_Word * MaybeBestScheme_14)
{
  {
    MR_Integer MinArgsToTuple_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_9, (MR_Integer) 7))));

    transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_p_0(TraceCounts_8, TuningParams_9, ModuleInfo_10, ReverseGoalPathMapMap_11, PredProcIds_12, CandidateHeadVars_13, MinArgsToTuple_15, (MR_Word) ((MR_Unsigned) 0U), MaybeBestScheme_14);
  }
}

static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_p_0(
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word Var_26,
  MR_Word Var_27,
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

      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_p_0(Var_23, Var_24, Var_25, Var_26, Var_27, HeadVar__2_2, MinLength_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_19);
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
      Var_14 = (MR_Integer) ((MR_Unsigned) Length_8 + (MR_Unsigned) (MR_Integer) 1);
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
  {
    MR_Box closure = closure_arg;
    MR_Float conv3_STATE_VARIABLE_Loads_35;
    MR_Float conv2_STATE_VARIABLE_Stores_37;

    transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2), &conv3_STATE_VARIABLE_Loads_35, MR_unbox_float(wrapper_arg_4), &conv2_STATE_VARIABLE_Stores_37);
    *wrapper_arg_3 = MR_box_float(conv3_STATE_VARIABLE_Loads_35);
    *wrapper_arg_5 = MR_box_float(conv2_STATE_VARIABLE_Stores_37);
  }
}

static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TuplingScheme_28;

    transform_hlds__tupling__add_tupling_proposal_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TuplingScheme_28);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TuplingScheme_28));
  }
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
  {
    MR_bool succeeded;
    MR_Integer MinArgsToTuple_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TuningParams_10, (MR_Integer) 7))));
    MR_Word TuplingScheme_18;
    MR_Word Costs_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Float Loads_46;
    MR_Float Stores_47;
    MR_Word Var_48;
    MR_Box conv1_TuplingScheme_18;
    MR_Box conv5_Loads_46;
    MR_Box conv4_Stores_47;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ModuleInfo_11));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (CandidateHeadVars_14));
      MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (MinArgsToTuple_17));
    }
    Var_23 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0));
    mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[5]), Var_22, SCC_13, ((MR_Box) (Var_23)), &conv1_TuplingScheme_18);
    TuplingScheme_18 = ((MR_Word) (conv1_TuplingScheme_18));
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (TraceCounts_9));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (TuningParams_10));
      MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (ModuleInfo_11));
      MR_hl_field(MR_mktag(0), Var_48, 6) = ((MR_Box) (TuplingScheme_18));
      MR_hl_field(MR_mktag(0), Var_48, 7) = ((MR_Box) (ReverseGoalPathMapMap_12));
    }
    mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_48, SCC_13, MR_box_float((MR_Float) 0.0000000000000000), &conv5_Loads_46, MR_box_float((MR_Float) 0.0000000000000000), &conv4_Stores_47);
    Loads_46 = MR_unbox_float(conv5_Loads_46);
    Stores_47 = MR_unbox_float(conv4_Stores_47);
    {
      Costs_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Costs_19, 0) = MR_box_float(Loads_46);
      MR_hl_field(MR_mktag(0), Costs_19, 1) = MR_box_float(Stores_47);
    }
    if ((MaybeBestScheme0_15 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word PrevCosts_20;
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBestScheme0_15, (MR_Integer) 0))));
      MR_Float LoadsA_58;
      MR_Float StoresA_59;
      MR_Float LoadsB_60;
      MR_Float StoresB_61;
      MR_Float TotalA_62;
      MR_Float TotalB_63;

      PrevCosts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
      LoadsA_58 = MR_unbox_float((MR_hl_field(MR_mktag(0), Costs_19, (MR_Integer) 0)));
      StoresA_59 = MR_unbox_float((MR_hl_field(MR_mktag(0), Costs_19, (MR_Integer) 1)));
      LoadsB_60 = MR_unbox_float((MR_hl_field(MR_mktag(0), PrevCosts_20, (MR_Integer) 0)));
      StoresB_61 = MR_unbox_float((MR_hl_field(MR_mktag(0), PrevCosts_20, (MR_Integer) 1)));
      TotalA_62 = (LoadsA_58 + StoresA_59);
      TotalB_63 = (LoadsB_60 + StoresB_61);
      succeeded = (TotalA_62 < TotalB_63);
    }
    if (succeeded)
    {
      MR_Word Var_25;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Costs_19));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (TuplingScheme_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeBestScheme_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
      }
    }
    else
      *MaybeBestScheme_16 = MaybeBestScheme0_15;
  }
}

void MR_CALL 
transform_hlds__tupling__tuple_arguments_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  {
    MR_bool succeeded;
    MR_Word Globals_7;
    MR_String TraceCountsFile_8;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &Globals_7);
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 418, &TraceCountsFile_8);
    succeeded = (strcmp(TraceCountsFile_8, (MR_String) "") == 0);
    if (succeeded)
    {
      libs__compiler_util__report_warning_4_p_0(Globals_7, (MR_String) "Warning: --tuple requires --tuple-trace-counts-file to work.\n");
      *STATE_VARIABLE_ModuleInfo_14 = STATE_VARIABLE_ModuleInfo_0_13;
    }
    else
    {
      MR_Word Result_9;

      mdbcomp__trace_counts__read_trace_counts_source_4_p_0(TraceCountsFile_8, &Result_9);
      if (((MR_tag((MR_Word) Result_9)) == (MR_Integer) 1))
      {
        MR_String Message_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_9, (MR_Integer) 0))));
        MR_String Message_31;
        MR_String Var_40;
        MR_String Var_42;
        MR_String Var_43;

        Var_40 = mercury__string__f_43_43_2_f_0(Message_12, (MR_String) ")\n");
        Var_42 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_40);
        Var_43 = mercury__string__f_43_43_2_f_0(TraceCountsFile_8, Var_42);
        Message_31 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: unable to read trace count summary from ", Var_43);
        libs__compiler_util__report_warning_4_p_0(Globals_7, Message_31);
        *STATE_VARIABLE_ModuleInfo_14 = STATE_VARIABLE_ModuleInfo_0_13;
      }
      else
      {
        MR_Word TraceCounts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_9, (MR_Integer) 1))));

        transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0(STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14, TraceCounts_11);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ModuleInfo_14;

    transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_ModuleInfo_14);
    *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_ModuleInfo_14));
  }
}

static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ModuleInfo_9;

    transform_hlds__tupling__fix_calls_in_procs_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ModuleInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_9));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_25;
    MR_Word conv1_STATE_VARIABLE_Counter_27;
    MR_Word conv0_STATE_VARIABLE_TransformMap_29;

    transform_hlds__tupling__maybe_tuple_scc_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_25, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Counter_27, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_TransformMap_29);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_25));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Counter_27));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_TransformMap_29));
  }
}

static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word TraceCounts0_5)
{
  {
    MR_Word Globals_6;
    MR_Integer CellVarLoadCost_7;
    MR_Integer CellVarStoreCost_8;
    MR_Integer FieldVarLoadCost_9;
    MR_Integer FieldVarStoreCost_10;
    MR_Integer CostsRatio_11;
    MR_Integer MinArgsToTuple_12;
    MR_Integer NormalVarStoreCost_13;
    MR_Integer NormalVarLoadCost_14;
    MR_Word TuningParams_15;
    MR_Word ModuleName_16;
    MR_Word TraceCounts_17;
    MR_Word DepInfo_18;
    MR_Word DepGraph_19;
    MR_Word SCCs_20;
    MR_Word TransformMap_22;
    MR_Word STATE_VARIABLE_ModuleInfo_31_31;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_ModuleInfo_33_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_ModuleInfo_38_38;
    MR_Word Var_60;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_33_33;
    MR_Box conv4_Var_21;
    MR_Box conv3_TransformMap_22;
    MR_Box conv7_STATE_VARIABLE_ModuleInfo_38_38;
    MR_Box conv9_STATE_VARIABLE_ModuleInfo_24;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &Globals_6);
    libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 395, &CellVarLoadCost_7);
    libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 394, &CellVarStoreCost_8);
    libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 397, &FieldVarLoadCost_9);
    libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 396, &FieldVarStoreCost_10);
    libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 419, &CostsRatio_11);
    libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 420, &MinArgsToTuple_12);
    NormalVarStoreCost_13 = mercury__int__min_2_f_0(CellVarStoreCost_8, FieldVarStoreCost_10);
    NormalVarLoadCost_14 = mercury__int__min_2_f_0(CellVarLoadCost_7, FieldVarLoadCost_9);
    {
      TuningParams_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TuningParams_15, 0) = ((MR_Box) (NormalVarLoadCost_14));
      MR_hl_field(MR_mktag(0), TuningParams_15, 1) = ((MR_Box) (NormalVarStoreCost_13));
      MR_hl_field(MR_mktag(0), TuningParams_15, 2) = ((MR_Box) (CellVarLoadCost_7));
      MR_hl_field(MR_mktag(0), TuningParams_15, 3) = ((MR_Box) (CellVarStoreCost_8));
      MR_hl_field(MR_mktag(0), TuningParams_15, 4) = ((MR_Box) (FieldVarLoadCost_9));
      MR_hl_field(MR_mktag(0), TuningParams_15, 5) = ((MR_Box) (FieldVarStoreCost_10));
      MR_hl_field(MR_mktag(0), TuningParams_15, 6) = ((MR_Box) (CostsRatio_11));
      MR_hl_field(MR_mktag(0), TuningParams_15, 7) = ((MR_Box) (MinArgsToTuple_12));
    }
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &ModuleName_16);
    mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0(ModuleName_16, TraceCounts0_5, &TraceCounts_17);
    hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_23, &STATE_VARIABLE_ModuleInfo_31_31, &DepInfo_18);
    DepGraph_19 = libs__dependency_graph__dependency_info_get_graph_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_18);
    SCCs_20 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_18);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (TraceCounts_17));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (TuningParams_15));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (DepGraph_19));
    }
    Var_34 = mercury__counter__init_1_f_0((MR_Integer) 0);
    Var_35 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0));
    mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&transform_hlds__tupling_scalar_common_2[0]), Var_32, SCCs_20, ((MR_Box) (STATE_VARIABLE_ModuleInfo_31_31)), &conv5_STATE_VARIABLE_ModuleInfo_33_33, ((MR_Box) (Var_34)), &conv4_Var_21, ((MR_Box) (Var_35)), &conv3_TransformMap_22);
    STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_33_33));
    TransformMap_22 = ((MR_Word) (conv3_TransformMap_22));
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (TransformMap_22));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tupling_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_37, SCCs_20, ((MR_Box) (STATE_VARIABLE_ModuleInfo_33_33)), &conv7_STATE_VARIABLE_ModuleInfo_38_38);
    STATE_VARIABLE_ModuleInfo_38_38 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_38_38));
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_3));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (TransformMap_22));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_60, TransformMap_22, ((MR_Box) (STATE_VARIABLE_ModuleInfo_38_38)), &conv9_STATE_VARIABLE_ModuleInfo_24);
    *STATE_VARIABLE_ModuleInfo_24 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_24));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__tupling____Unify____candidate_headvar_origins_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__tupling____Compare____candidate_headvar_origins_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__tupling____Unify____candidate_headvars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__tupling____Compare____candidate_headvars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__tupling____Unify____costs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__tupling____Compare____costs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__tupling____Unify____count_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__tupling____Compare____count_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__tupling____Unify____count_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__tupling____Compare____count_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__tupling____Unify____opt_tuple_alloc_0_0();
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__tupling____Compare____opt_tuple_alloc_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__tupling____Unify____transform_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__tupling____Compare____transform_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__tupling____Unify____transformed_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__tupling____Compare____transformed_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__tupling____Unify____tuning_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__tupling____Compare____tuning_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__tupling____Unify____tupling_proposal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__tupling____Compare____tupling_proposal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__tupling____Unify____tupling_scheme_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__tupling____Compare____tupling_scheme_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__6_6;

    transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
    *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
  }
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
