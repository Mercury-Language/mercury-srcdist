/*
** Automatically generated from `stack_opt.m'
** by the Mercury compiler,
** version rotd-2023-07-22
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


// :- module ll_backend.stack_opt.
// :- implementation.

/*
INIT mercury__ll_backend__stack_opt__init
ENDINIT
*/

#include "ll_backend.stack_opt.mih"


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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.interval.mih"
#include "backend_libs.matching.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.live_vars.mih"
#include "ll_backend.liveness.mih"
#include "ll_backend.store_alloc.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s {
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9;
  MR_bool ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded;
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_34;
  jmp_buf ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0;
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_114_114;
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_43;
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_45;
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_46;
  MR_Box ll_backend__stack_opt__use_cell_8_p_0_env_0__conv0_PathInfo_43;
  MR_Box ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_Segment_46;
};


static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_opt__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__stack_opt__type_ctor_info_path_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_all_paths_0_0[3];

static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_all_paths_0_0[3];

static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_all_paths_0_0[3];

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0[1];

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0[1];

static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0;

static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1;

static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_ordinal_ordered_current_segment_first_flush_0[2];

static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0[2];

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0;

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_info_0_0[5];

static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_match_info_0_0[5];

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0[1];

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_path_info_0_0[2];

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0[1];

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_path_info_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_matching_result_0_0[9];

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_matching_result_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_matching_result_0[1];

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_matching_result_0[1];

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_NotagFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0;

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_path_0_0[6];

static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_path_0_0[6];

static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_path_0_0[6];

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0[1];

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0;

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_info_0_0[3];

static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0[1];

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0[1];

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_params_0_0[8];

static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_params_0_0[8];

static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_stack_opt_params_0_0[8];

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0[1];

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0[1];

static MR_String MR_CALL 
ll_backend__stack_opt__IntroducedFrom__func__dump_matching_result__1139__1_1_f_0(
  MR_Word HeadVar__1_100);

static MR_String MR_CALL 
ll_backend__stack_opt__IntroducedFrom__func__dump_matching_result__1137__1_1_f_0(
  MR_Word HeadVar__1_97);

static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1121__1_2_p_0(
  MR_Word HeadVar__1_87,
  MR_Integer * HeadVar__2_88);

static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1120__1_2_p_0(
  MR_Word HeadVar__1_82,
  MR_Integer * HeadVar__2_83);

static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1102__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Integer * HeadVar__2_55);

static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1095__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Integer * HeadVar__2_49);

static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__848__1_2_p_0(
  MR_Word HeadVar__1_45,
  MR_Word HeadVar__2_46);

static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__844__1_2_p_0(
  MR_Word HeadVar__1_40,
  MR_Word HeadVar__2_41);

static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__835__1_2_p_0(
  MR_Word HeadVar__1_35,
  MR_Word HeadVar__2_36);

static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__close_path__697__1_1_p_0(
  MR_Word FirstSegment0_7);

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0(
  MR_Word Stream_5,
  MR_Word MatchingResult_6);

static void MR_CALL 
ll_backend__stack_opt__dump_insert_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt__dump_insert_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt__dump_insert_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(
  MR_Word RelevantVars_8,
  MR_Word MaybeSearchAnchor0_9,
  MR_Word IntervalInfo_10,
  MR_Word StackOptInfo_11,
  MR_Word STATE_VARIABLE_AllPaths_0_14,
  MR_Word IntervalId_13,
  MR_Word * STATE_VARIABLE_AllPaths_15);

static MR_Word MR_CALL 
ll_backend__stack_opt__add_anchor_to_path_2_f_0(
  MR_Word Anchor_4,
  MR_Word STATE_VARIABLE_Path_0_8);

static MR_Word MR_CALL 
ll_backend__stack_opt__add_interval_to_path_3_f_0(
  MR_Word IntervalId_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_Path_0_12);

static void MR_CALL 
ll_backend__stack_opt__extract_match_and_save_info_4_p_0(
  MR_Word Path0_5,
  MR_Word * MatchPathInfo_6,
  MR_Word * Anchors_7,
  MR_Word * Intervals_8);

static MR_bool MR_CALL 
ll_backend__stack_opt__close_path_1_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
ll_backend__stack_opt__close_path_1_f_0(
  MR_Word Path0_3);

static void MR_CALL 
ll_backend__stack_opt__add_anchor_inserts_10_p_0(
  MR_Word Goal_11,
  MR_Word ArgVarsViaCellVar_12,
  MR_Word InsertIntervals_13,
  MR_Word Anchor_14,
  MR_Word STATE_VARIABLE_IntervalInfo_0_27,
  MR_Word * STATE_VARIABLE_IntervalInfo_28,
  MR_Word STATE_VARIABLE_StackOptInfo_0_29,
  MR_Word * STATE_VARIABLE_StackOptInfo_30,
  MR_Word STATE_VARIABLE_InsertAnchors_0_31,
  MR_Word * STATE_VARIABLE_InsertAnchors_32);

static void MR_CALL 
ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(
  MR_Word CellVar_10,
  MR_Word ViaCellVars_11,
  MR_Word IntervalId_12,
  MR_Word STATE_VARIABLE_IntervalInfo_0_17,
  MR_Word * STATE_VARIABLE_IntervalInfo_18,
  MR_Word STATE_VARIABLE_StackOptInfo_0_19,
  MR_Word * STATE_VARIABLE_StackOptInfo_20,
  MR_Word STATE_VARIABLE_InsertIntervals_0_21,
  MR_Word * STATE_VARIABLE_InsertIntervals_22);

static void MR_CALL 
ll_backend__stack_opt__apply_matching_for_path_8_p_0(
  MR_Word StackOptParams_9,
  MR_Word CellVar_10,
  MR_Word CellVarFlushedLater_11,
  MR_Word CandidateArgVars_12,
  MR_Word PathInfo_13,
  MR_Word * BenefitNodes_14,
  MR_Word * CostNodes_15,
  MR_Word * ViaCellVars_16);

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0(
  MR_Word CellVar_9,
  MR_Word FieldVarList_10,
  MR_Word ConsId_11,
  MR_Word Goal_12,
  MR_Word STATE_VARIABLE_IntervalInfo_0_47,
  MR_Word * STATE_VARIABLE_IntervalInfo_48,
  MR_Word STATE_VARIABLE_StackOptInfo_0_49,
  MR_Word * STATE_VARIABLE_StackOptInfo_50);

static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0(
  MR_Word CellVar_8,
  MR_Word CellVarFlushedLater_9,
  MR_Word StackOptParams_11,
  MR_Word PathInfos_12,
  MR_Word CandidateArgVars0_13,
  MR_Word * ViaCellVars_14);

static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(
  MR_Word CellVar_10,
  MR_Word CellVarFlushedLater_11,
  MR_Word StackOptParams_13,
  MR_Word PathInfos_14,
  MR_Word CandidateArgVars0_15,
  MR_Word * BenefitNodeSets_16,
  MR_Word * CostNodeSets_17,
  MR_Word * ViaCellVars_18);

static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(
  MR_Word RelevantVars_5,
  MR_Word * MatchInfo_6,
  MR_Word IntervalInfo_7,
  MR_Word StackOptInfo_8);

static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0(
  MR_Word tscc_proc_1_input_1_RelevantVars_8,
  MR_Word tscc_proc_1_input_2_IntervalId_9,
  MR_Word tscc_proc_1_input_3_MaybeSearchAnchor0_10,
  MR_Word tscc_proc_1_input_4_IntervalInfo_11,
  MR_Word tscc_proc_1_input_5_StackOptInfo_12,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_AllPaths_29);

static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0(
  MR_Word tscc_proc_2_input_1_End_9,
  MR_Word tscc_proc_2_input_2_RelevantVars_10,
  MR_Word tscc_proc_2_input_3_MaybeSearchAnchor0_11,
  MR_Word tscc_proc_2_input_4_IntervalInfo_12,
  MR_Word tscc_proc_2_input_5_StackOptInfo_13,
  MR_Word tscc_proc_2_input_6_SuccessorIds_14,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_AllPaths_29);

static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(
  MR_Word tscc_proc_3_input_1_RelevantVars_8,
  MR_Word tscc_proc_3_input_2_MaybeSearchAnchor0_9,
  MR_Word tscc_proc_3_input_3_IntervalInfo_10,
  MR_Word tscc_proc_3_input_4_StackOptInfo_11,
  MR_Word tscc_proc_3_input_5_IntervalId_12,
  MR_Word tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_AllPaths_29);

static void MR_CALL 
ll_backend__stack_opt__one_after_another_7_p_0(
  MR_Word RelevantVars_1,
  MR_Word MaybeSearchAnchor1_2,
  MR_Word IntervalInfo_3,
  MR_Word StackOptInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_AllPaths_0_6,
  MR_Word * STATE_VARIABLE_AllPaths_7);

static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AllPaths_2);

static MR_Word MR_CALL 
ll_backend__stack_opt__anchor_requires_close_2_f_0(
  MR_Word IntervalInfo_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_more_successors_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_one_successor_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_no_successor_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0(
  MR_Word CellVar_12,
  MR_Word ConsId_13,
  MR_Word ArgVars_14,
  MR_Word ViaCellVars_15,
  MR_Word Goal_16,
  MR_Word PotentialAnchors_17,
  MR_Word PotentialIntervals_18,
  MR_Word STATE_VARIABLE_IntervalInfo_0_31,
  MR_Word * STATE_VARIABLE_IntervalInfo_32,
  MR_Word STATE_VARIABLE_StackOptInfo_0_33,
  MR_Word * STATE_VARIABLE_StackOptInfo_34);

static void MR_CALL 
ll_backend__stack_opt__maybe_write_progress_message_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Integer PredIdInt_10,
  MR_Integer DebugStackOpt_11,
  MR_String Message_12);

static void MR_CALL 
ll_backend__stack_opt__optimize_live_sets_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word OptAlloc_9,
  MR_Word STATE_VARIABLE_ProcInfo_0_61,
  MR_Word * STATE_VARIABLE_ProcInfo_62,
  MR_Word * Changed_11,
  MR_Integer DebugStackOpt_12,
  MR_Integer PredIdInt_13);

static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_4_p_0(
  MR_Word Stream_5,
  MR_Word StackOptInfo_6);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);


static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_1[15][2];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_2[14][3];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_3[2][1];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_4[5][7];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_5[1][12];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_6[1][13];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_8[7][5];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_9[1][10];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_10[1][6];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_11[1][11];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_12[1][4];


struct ll_backend__stack_opt__vector_common_type_7_0_s {
  const MR_Word ll_backend__stack_opt__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct ll_backend__stack_opt__vector_common_type_7_0_s ll_backend__stack_opt_vector_common_7[10];



static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_1[15][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_opt__opt_stack_alloc__arity0__)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_opt_stack_alloc_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_1[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__ll_backend__stack_opt__stack_opt_info__arity0__)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_1[0]))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_2[14][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_1[2]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_1[2]))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[0])),
    ((MR_Box) (ll_backend__stack_opt__consolidate_after_join_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[1])),
    ((MR_Box) (ll_backend__stack_opt__consolidate_after_join_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[3])),
    ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_4[3])),
    ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_insert_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_insert_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[5])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[5])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[6])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[6])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 3)) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_4[5][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ll_backend__stack_opt__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_5[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_6[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_8[7][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__stack_opt__type_ctor_info_path_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_9[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_10[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_11[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_params_0)),
    ((MR_Box) (&ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_12[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct ll_backend__stack_opt__vector_common_type_7_0_s ll_backend__stack_opt_vector_common_7[10] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 1 },
  /* row   3 */   { (MR_Integer) 0 },
  /* row   4 */   { (MR_Integer) 1 },
  /* row   5 */   { (MR_Integer) 1 },
  /* row   6 */   { (MR_Integer) 1 },
  /* row   7 */   { (MR_Integer) 1 },
  /* row   8 */   { (MR_Integer) 0 },
  /* row   9 */   { (MR_Integer) 1 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_opt__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0),
    (MR_PseudoTypeInfo) (&ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__stack_opt__type_ctor_info_path_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_all_paths_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_all_paths_0_0[3] = {
  (MR_String) "paths_so_far",
  (MR_String) "stepped_over_model_non",
  (MR_String) "used_after_scope"
};

static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_all_paths_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0 = {
  (MR_String) "all_paths",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_all_paths_0_0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_names_all_paths_0_0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_locns_all_paths_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0 };

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0 };

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____all_paths_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____all_paths_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "all_paths",
  { ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0 },
  { ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0,

};

static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0 = {
  (MR_String) "current_is_before_first_flush",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1 = {
  (MR_String) "current_is_after_first_flush",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_ordinal_ordered_current_segment_first_flush_0[2] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0,
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0[2] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1,
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0
};

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "current_segment_first_flush",
  { ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0 },
  { ll_backend__stack_opt__ll_backend__stack_opt__enum_ordinal_ordered_current_segment_first_flush_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0) }
};

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0)
};

static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_match_info_0_0[5] = {
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
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0 = {
  (MR_String) "match_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_info_0_0,
  NULL,
  ll_backend__stack_opt__ll_backend__stack_opt__field_locns_match_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0 };

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0 };

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____match_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____match_info_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "match_info",
  { ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0 },
  { ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_path_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0 = {
  (MR_String) "match_path_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_path_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0 };

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0 };

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_path_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____match_path_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____match_path_info_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "match_path_info",
  { ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0 },
  { ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_path_info_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_matching_result_0_0[9] = {
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0)
};

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0 = {
  (MR_String) "matching_result",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_matching_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0 };

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_matching_result_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_matching_result_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0 };

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_matching_result_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____matching_result_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____matching_result_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "matching_result",
  { ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_matching_result_0 },
  { ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_matching_result_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_matching_result_0,

};

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_NotagFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0 = {
  (MR_String) "opt_stack_alloc",
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_String) "par_conj_own_slots",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_opt_stack_alloc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "opt_stack_alloc",
  { &ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0 },
  { &ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0,

};

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_path_0_0[6] = {
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0)
};

static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_path_0_0[6] = {
  (MR_String) "flush_state",
  (MR_String) "current_segment",
  (MR_String) "first_segment",
  (MR_String) "other_segments",
  (MR_String) "flush_anchors",
  (MR_String) "occurring_intervals"
};

static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_path_0_0[6] = {
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
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0 = {
  (MR_String) "path",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_path_0_0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_names_path_0_0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_locns_path_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0 };

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0 };

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____path_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____path_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "path",
  { ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0 },
  { ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0),
    (MR_TypeInfo) (&ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0) }
};

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_params_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0)
};

static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_info_0_0[3] = {
  (MR_String) "soi_stack_opt_params",
  (MR_String) "soi_left_anchor_inserts",
  (MR_String) "soi_matching_results"
};

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0 = {
  (MR_String) "stack_opt_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_info_0_0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0 };

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0 };

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "stack_opt_info",
  { ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0 },
  { ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0,

};

static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_params_0_0[8] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_matching_params_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_svcell_loop_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_svcell_full_path_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_svcell_on_stack_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_params_0_0[8] = {
  (MR_String) "sop_globals",
  (MR_String) "sop_module_name",
  (MR_String) "sop_matching_params",
  (MR_String) "sop_all_path_node_ratio",
  (MR_String) "sop_fixpoint_loop",
  (MR_String) "sop_full_path",
  (MR_String) "sop_on_stack",
  (MR_String) "sop_non_candidate_vars"
};

static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_stack_opt_params_0_0[8] = {
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
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0 = {
  (MR_String) "stack_opt_params",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_params_0_0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_params_0_0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_locns_stack_opt_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0 };

static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0[1] = { &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0 };

static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "stack_opt_params",
  { ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0 },
  { ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_opt__opt_stack_alloc__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__ll_backend__stack_opt__stack_opt_info__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001))
};

static MR_String MR_CALL 
ll_backend__stack_opt__IntroducedFrom__func__dump_matching_result__1139__1_1_f_0(
  MR_Word HeadVar__1_100)
{
  MR_String HeadVar__2_101;

  HeadVar__2_101 = mercury__string__string_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (HeadVar__1_100)));
  return HeadVar__2_101;
}

static MR_String MR_CALL 
ll_backend__stack_opt__IntroducedFrom__func__dump_matching_result__1137__1_1_f_0(
  MR_Word HeadVar__1_97)
{
  MR_String HeadVar__2_98;

  HeadVar__2_98 = mercury__string__string_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (HeadVar__1_97)));
  return HeadVar__2_98;
}

static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1121__1_2_p_0(
  MR_Word HeadVar__1_87,
  MR_Integer * HeadVar__2_88)
{
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_87, HeadVar__2_88);
}

static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1120__1_2_p_0(
  MR_Word HeadVar__1_82,
  MR_Integer * HeadVar__2_83)
{
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_82, HeadVar__2_83);
}

static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1102__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Integer * HeadVar__2_55)
{
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_54, HeadVar__2_55);
}

static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1095__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Integer * HeadVar__2_49)
{
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_48, HeadVar__2_49);
}

static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__848__1_2_p_0(
  MR_Word HeadVar__1_45,
  MR_Word HeadVar__2_46)
{
  MR_bool succeeded = (HeadVar__1_45 == HeadVar__2_46);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__844__1_2_p_0(
  MR_Word HeadVar__1_40,
  MR_Word HeadVar__2_41)
{
  MR_bool succeeded = (HeadVar__1_40 == HeadVar__2_41);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__835__1_2_p_0(
  MR_Word HeadVar__1_35,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded = (HeadVar__1_35 == HeadVar__2_36);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__close_path__697__1_1_p_0(
  MR_Word FirstSegment0_7)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FirstSegment0_7);
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_Word StackVarsSets_5 = (MR_Word) (HeadVar__1_1);
  MR_Word StackVars_6;
  MR_Word ParConjOwnSlots0_7;
  MR_Word ParConjOwnSlots_8;

  StackVars_6 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVarsSets_5);
  ParConjOwnSlots0_7 = (MR_Word) (HeadVar__3_3);
  ParConjOwnSlots_8 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVars_6, ParConjOwnSlots0_7);
  *HeadVar__4_4 = (MR_Word) (ParConjOwnSlots_8);
}

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_Word StackVars_5 = (MR_Word) (HeadVar__1_1);
  MR_Word ParConjOwnSlots0_6 = (MR_Word) (HeadVar__3_3);
  MR_Word ParConjOwnSlots_7;

  ParConjOwnSlots_7 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVars_5, ParConjOwnSlots0_6);
  *HeadVar__4_4 = (MR_Word) (ParConjOwnSlots_7);
}

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  *HeadVar__4_4 = HeadVar__3_3;
}

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  *HeadVar__4_4 = HeadVar__3_3;
}

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  ll_backend__stack_opt__use_cell_8_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, HeadVar__8_8);
}

static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    ll_backend__stack_opt____Compare____stack_opt_params_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[14]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;

    libs__globals____Compare____globals_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        backend_libs__matching____Compare____matching_params_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
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
            MR_Integer Var_37 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_38 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_37 < Var_38);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_37 > Var_38);
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
              MR_Integer Var_39 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_40 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_39 < Var_40);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_39 > Var_40);
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
                MR_Integer Var_41 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_42 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_41 < Var_42);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_41 > Var_42);
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
                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = ll_backend__stack_opt____Unify____stack_opt_params_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&ll_backend__stack_opt_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[14]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0(
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
    MR_Word TypeInfo_24_24;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = libs__globals____Unify____globals_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = backend_libs__matching____Unify____matching_params_0_0(ArgX3_7, ArgY3_8);
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
                {
                  TypeInfo_24_24 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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
ll_backend__stack_opt____Compare____path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;
    MR_Integer Var_29 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_30 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_29 < Var_30);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_29 > Var_30);
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

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[5]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[10]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_17_17 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[10]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[9]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____cons_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[13]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_41 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_42 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_41 < Var_42);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_41 > Var_42);
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

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[9]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[9]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[10]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
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
ll_backend__stack_opt____Unify____matching_result_0_0(
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
    MR_Word TypeInfo_29_29;
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_31_31;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Integer Var_32;
    MR_Integer Var_33;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_25_25 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[13]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_26_26 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            Var_32 = (MR_Integer) (ArgX5_11);
            Var_33 = (MR_Integer) (ArgY5_12);
            succeeded = (Var_32 == Var_33);
            if (succeeded)
            {
              TypeInfo_28_28 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[9]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_29_29 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[9]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_30_30 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[10]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_31_31 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[10]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
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
ll_backend__stack_opt____Compare____match_path_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[12]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
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
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[10]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[12]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[10]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[9]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(
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
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[11]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
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
        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[11]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv5_HeadVar__2_101;

  conv5_HeadVar__2_101 = ll_backend__stack_opt__IntroducedFrom__func__dump_matching_result__1139__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_101));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__2_98;

  conv4_HeadVar__2_98 = ll_backend__stack_opt__IntroducedFrom__func__dump_matching_result__1137__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_98));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__2_88;

  ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1121__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_88);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_88));
}

static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_83;

  ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1120__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_83);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_83));
}

static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_4_p_0(
  MR_Word Stream_5,
  MR_Word MatchingResult_6)
{
  MR_Word CellVar_8 = ((MR_Word) ((MR_hl_field(0, MatchingResult_6, (MR_Integer) 0))));
  MR_Word ConsId_9 = ((MR_Word) ((MR_hl_field(0, MatchingResult_6, (MR_Integer) 1))));
  MR_Word ArgVars_10 = ((MR_Word) ((MR_hl_field(0, MatchingResult_6, (MR_Integer) 2))));
  MR_Word ViaCellVars_11 = ((MR_Word) ((MR_hl_field(0, MatchingResult_6, (MR_Integer) 3))));
  MR_Word GoalId_12 = ((MR_Word) ((MR_hl_field(0, MatchingResult_6, (MR_Integer) 4))));
  MR_Word PotentialIntervals_13 = ((MR_Word) ((MR_hl_field(0, MatchingResult_6, (MR_Integer) 5))));
  MR_Word InsertIntervals_14 = ((MR_Word) ((MR_hl_field(0, MatchingResult_6, (MR_Integer) 6))));
  MR_Word PotentialAnchors_15 = ((MR_Word) ((MR_hl_field(0, MatchingResult_6, (MR_Integer) 7))));
  MR_Word InsertAnchors_16 = ((MR_Word) ((MR_hl_field(0, MatchingResult_6, (MR_Integer) 8))));
  MR_Integer CellVarNum_17;
  MR_Word ArgVarNums_18;
  MR_Word ViaCellVarNums_19;
  MR_Word PotentialIntervalNums_20;
  MR_Word InsertIntervalNums_21;
  MR_Word PotentialAnchorStrs_22;
  MR_Word InsertAnchorStrs_23;
  MR_String PotentialAnchorsStr_24;
  MR_String InsertAnchorsStr_25;
  MR_Word Var_33;
  MR_String Var_40;
  MR_String Var_43;
  MR_String Var_46;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_String Var_56;
  MR_String Var_62;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_String Var_104;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\nmatching result at ");
  mercury__io__write_line_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), Stream_5, ((MR_Box) (GoalId_12)));
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CellVar_8, &CellVarNum_17);
  mercury__list__map_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[8]), ArgVars_10, &ArgVarNums_18);
  Var_33 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ViaCellVars_11);
  mercury__list__map_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[9]), Var_33, &ViaCellVarNums_19);
  Var_40 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_9);
  Var_43 = backend_libs__interval__int_list_to_string_1_f_0(ArgVarNums_18);
  Var_46 = backend_libs__interval__int_list_to_string_1_f_0(ViaCellVarNums_19);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_3[1]), CellVarNum_17, &Var_104);
  mercury__io__write_string_4_p_0(Stream_5, Var_104);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) " => ");
  mercury__io__write_string_4_p_0(Stream_5, Var_40);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(");
  mercury__io__write_string_4_p_0(Stream_5, Var_43);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "): via cell ");
  mercury__io__write_string_4_p_0(Stream_5, Var_46);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  Var_49 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), PotentialIntervals_13);
  PotentialIntervalNums_20 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[10]), Var_49);
  Var_51 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), InsertIntervals_14);
  InsertIntervalNums_21 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[11]), Var_51);
  Var_56 = backend_libs__interval__int_list_to_string_1_f_0(PotentialIntervalNums_20);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "potential intervals: ");
  mercury__io__write_string_4_p_0(Stream_5, Var_56);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  Var_62 = backend_libs__interval__int_list_to_string_1_f_0(InsertIntervalNums_21);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "insert intervals: ");
  mercury__io__write_string_4_p_0(Stream_5, Var_62);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  Var_65 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), PotentialAnchors_15);
  PotentialAnchorStrs_22 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[12]), Var_65);
  Var_67 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), InsertAnchors_16);
  InsertAnchorStrs_23 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[13]), Var_67);
  PotentialAnchorsStr_24 = mercury__string__join_list_2_f_0((MR_String) " ", PotentialAnchorStrs_22);
  InsertAnchorsStr_25 = mercury__string__join_list_2_f_0((MR_String) " ", InsertAnchorStrs_23);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "potential anchors: ");
  mercury__io__write_string_4_p_0(Stream_5, PotentialAnchorsStr_24);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "insert anchors: ");
  mercury__io__write_string_4_p_0(Stream_5, InsertAnchorsStr_25);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
}

static void MR_CALL 
ll_backend__stack_opt__dump_insert_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__2_55;

  ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1102__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_55);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_55));
}

static void MR_CALL 
ll_backend__stack_opt__dump_insert_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_49;

  ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1095__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_49);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_49));
}

static void MR_CALL 
ll_backend__stack_opt__dump_insert_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word VarNums_9;
  MR_Word Var_27;
  MR_String Var_32;
  MR_Word CellVar_16;
  MR_Word ConsId_17;
  MR_Word ArgVars_18;
  MR_Word Unification_13;
  MR_Word Var_34;

  Var_27 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_7);
  mercury__list__map_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[6]), Var_27, &VarNums_9);
  Var_32 = backend_libs__interval__int_list_to_string_1_f_0(VarNums_9);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "vars [");
  mercury__io__write_string_4_p_0(Stream_5, Var_32);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "]:");
  Var_34 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));
  succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 1);
  if (succeeded)
  {
    Unification_13 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 3))));
    succeeded = ((MR_tag((MR_Word) Unification_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      CellVar_16 = ((MR_Word) ((MR_hl_field(1, Unification_13, (MR_Integer) 0))));
      ConsId_17 = ((MR_Word) ((MR_hl_field(1, Unification_13, (MR_Integer) 1))));
      ArgVars_18 = ((MR_Word) ((MR_hl_field(1, Unification_13, (MR_Integer) 2))));
    }
  }
  if (succeeded)
  {
    MR_Integer CellVarNum_22;
    MR_Word ArgVarNums_23;
    MR_String Var_42;
    MR_String Var_45;
    MR_String Var_62;

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CellVar_16, &CellVarNum_22);
    mercury__list__map_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[7]), ArgVars_18, &ArgVarNums_23);
    Var_42 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_17);
    Var_45 = backend_libs__interval__int_list_to_string_1_f_0(ArgVarNums_23);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_3[1]), CellVarNum_22, &Var_62);
    mercury__io__write_string_4_p_0(Stream_5, Var_62);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " => ");
    mercury__io__write_string_4_p_0(Stream_5, Var_42);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(");
    mercury__io__write_string_4_p_0(Stream_5, Var_45);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")\n");
  }
  else
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "BAD INSERT GOAL\n");
}

static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__stack_opt__dump_insert_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  MR_Word Anchor_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word InsertSpecs_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Var_16;
  MR_Box conv0_STATE_VARIABLE_IO_10;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\ninsertions after ");
  mercury__io__write_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Stream_5, ((MR_Box) (Anchor_6)));
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":\n");
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_4[4]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (ll_backend__stack_opt__dump_anchor_inserts_4_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (Stream_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, InsertSpecs_7, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_10);
}

static MR_Word MR_CALL 
ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word AfterModelNon_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);

  return AfterModelNon_4;
}

static MR_Word MR_CALL 
ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Paths_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  return Paths_3;
}

static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(
  MR_Word RelevantVars_8,
  MR_Word MaybeSearchAnchor0_9,
  MR_Word IntervalInfo_10,
  MR_Word StackOptInfo_11,
  MR_Word STATE_VARIABLE_AllPaths_0_14,
  MR_Word IntervalId_13,
  MR_Word * STATE_VARIABLE_AllPaths_15)
{
  ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(RelevantVars_8, MaybeSearchAnchor0_9, IntervalInfo_10, StackOptInfo_11, IntervalId_13, STATE_VARIABLE_AllPaths_0_14, STATE_VARIABLE_AllPaths_15);
}

static MR_Word MR_CALL 
ll_backend__stack_opt__add_anchor_to_path_2_f_0(
  MR_Word Anchor_4,
  MR_Word STATE_VARIABLE_Path_0_8)
{
  MR_Word STATE_VARIABLE_Path_9;
  MR_Word Anchors0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Path_0_8, (MR_Integer) 4))));
  MR_Word Anchors_7;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_20;

  mercury__set__insert_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Anchor_4)), Anchors0_6, &Anchors_7);
  Var_15 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Path_0_8, (MR_Integer) 0))) & (MR_Integer) 1);
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Path_0_8, (MR_Integer) 1))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Path_0_8, (MR_Integer) 2))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Path_0_8, (MR_Integer) 3))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Path_0_8, (MR_Integer) 5))));
  {
    STATE_VARIABLE_Path_9 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Path_9, 0) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(0, STATE_VARIABLE_Path_9, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, STATE_VARIABLE_Path_9, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, STATE_VARIABLE_Path_9, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, STATE_VARIABLE_Path_9, 4) = ((MR_Box) (Anchors_7));
    MR_hl_field(0, STATE_VARIABLE_Path_9, 5) = ((MR_Box) (Var_20));
  }
  return STATE_VARIABLE_Path_9;
}

static MR_Word MR_CALL 
ll_backend__stack_opt__add_interval_to_path_3_f_0(
  MR_Word IntervalId_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_Path_0_12)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Path_13;

  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_6);
  if (succeeded)
    STATE_VARIABLE_Path_13 = STATE_VARIABLE_Path_0_12;
  else
  {
    MR_Word CurSegment0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Path_0_12, (MR_Integer) 1))));
    MR_Word CurSegment_9;
    MR_Word OccurringIntervals0_10;
    MR_Word OccurringIntervals_11;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    CurSegment_9 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_6, CurSegment0_8);
    OccurringIntervals0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Path_0_12, (MR_Integer) 5))));
    mercury__set__insert_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), ((MR_Box) (IntervalId_5)), OccurringIntervals0_10, &OccurringIntervals_11);
    Var_25 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Path_0_12, (MR_Integer) 0))) & (MR_Integer) 1);
    Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Path_0_12, (MR_Integer) 2))));
    Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Path_0_12, (MR_Integer) 3))));
    Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Path_0_12, (MR_Integer) 4))));
    {
      STATE_VARIABLE_Path_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Path_13, 0) = (MR_Box) ((MR_Unsigned) (Var_25));
      MR_hl_field(0, STATE_VARIABLE_Path_13, 1) = ((MR_Box) (CurSegment_9));
      MR_hl_field(0, STATE_VARIABLE_Path_13, 2) = ((MR_Box) (Var_27));
      MR_hl_field(0, STATE_VARIABLE_Path_13, 3) = ((MR_Box) (Var_28));
      MR_hl_field(0, STATE_VARIABLE_Path_13, 4) = ((MR_Box) (Var_29));
      MR_hl_field(0, STATE_VARIABLE_Path_13, 5) = ((MR_Box) (OccurringIntervals_11));
    }
  }
  return STATE_VARIABLE_Path_13;
}

static void MR_CALL 
ll_backend__stack_opt__extract_match_and_save_info_4_p_0(
  MR_Word Path0_5,
  MR_Word * MatchPathInfo_6,
  MR_Word * Anchors_7,
  MR_Word * Intervals_8)
{
  MR_Word Path_9;
  MR_Word FirstSegment_10;
  MR_Word OtherSegments_11;

  Path_9 = ll_backend__stack_opt__close_path_1_f_0(Path0_5);
  FirstSegment_10 = ((MR_Word) ((MR_hl_field(0, Path_9, (MR_Integer) 2))));
  OtherSegments_11 = ((MR_Word) ((MR_hl_field(0, Path_9, (MR_Integer) 3))));
  *Anchors_7 = ((MR_Word) ((MR_hl_field(0, Path_9, (MR_Integer) 4))));
  *Intervals_8 = ((MR_Word) ((MR_hl_field(0, Path_9, (MR_Integer) 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *MatchPathInfo_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FirstSegment_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherSegments_11));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_opt__close_path_1_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_opt__IntroducedFrom__pred__close_path__697__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static MR_Word MR_CALL 
ll_backend__stack_opt__close_path_1_f_0(
  MR_Word Path0_3)
{
  MR_bool succeeded;
  MR_Word Path_4;
  MR_Word FlushState_5 = ((MR_Unsigned) ((MR_hl_field(0, Path0_3, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word CurSegment_6 = ((MR_Word) ((MR_hl_field(0, Path0_3, (MR_Integer) 1))));
  MR_Word FirstSegment0_7 = ((MR_Word) ((MR_hl_field(0, Path0_3, (MR_Integer) 2))));
  MR_Word OtherSegments0_8 = ((MR_Word) ((MR_hl_field(0, Path0_3, (MR_Integer) 3))));
  MR_Word FlushAnchors_9 = ((MR_Word) ((MR_hl_field(0, Path0_3, (MR_Integer) 4))));
  MR_Word IntervalIds_10 = ((MR_Word) ((MR_hl_field(0, Path0_3, (MR_Integer) 5))));
  MR_Word FirstSegment_11;
  MR_Word OtherSegments_12;
  MR_Word Var_17;

  switch (FlushState_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CurSegment_6);
        if (succeeded)
        {
          FirstSegment_11 = FirstSegment0_7;
          OtherSegments_12 = OtherSegments0_8;
        }
        else
        {
          FirstSegment_11 = FirstSegment0_7;
          {
            OtherSegments_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, OtherSegments_12, 0) = ((MR_Box) (CurSegment_6));
            MR_hl_field(1, OtherSegments_12, 1) = ((MR_Box) (OtherSegments0_8));
          }
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_13;

        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_13, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_12[0]));
          MR_hl_field(0, Var_13, 1) = ((MR_Box) (ll_backend__stack_opt__close_path_1_f_0_1));
          MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_13, 3) = ((MR_Box) (FirstSegment0_7));
        }
        mercury__require__expect_3_p_0(Var_13, (MR_String) "function \140ll_backend.stack_opt.close_path\'/1", (MR_String) "FirstSegment0 not empty");
        FirstSegment_11 = CurSegment_6;
        OtherSegments_12 = OtherSegments0_8;
      }
      break;
  }
  Var_17 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    Path_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Path_4, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Path_4, 1) = ((MR_Box) (Var_17));
    MR_hl_field(0, Path_4, 2) = ((MR_Box) (FirstSegment_11));
    MR_hl_field(0, Path_4, 3) = ((MR_Box) (OtherSegments_12));
    MR_hl_field(0, Path_4, 4) = ((MR_Box) (FlushAnchors_9));
    MR_hl_field(0, Path_4, 5) = ((MR_Box) (IntervalIds_10));
  }
  return Path_4;
}

static void MR_CALL 
ll_backend__stack_opt__add_anchor_inserts_10_p_0(
  MR_Word Goal_11,
  MR_Word ArgVarsViaCellVar_12,
  MR_Word InsertIntervals_13,
  MR_Word Anchor_14,
  MR_Word STATE_VARIABLE_IntervalInfo_0_27,
  MR_Word * STATE_VARIABLE_IntervalInfo_28,
  MR_Word STATE_VARIABLE_StackOptInfo_0_29,
  MR_Word * STATE_VARIABLE_StackOptInfo_30,
  MR_Word STATE_VARIABLE_InsertAnchors_0_31,
  MR_Word * STATE_VARIABLE_InsertAnchors_32)
{
  MR_bool succeeded;
  MR_Word AnchorFollow_18;
  MR_Word AnchorIntervals_20;
  MR_Word AnchorInsertIntervals_21;
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 9))));
  MR_Box conv0_AnchorFollow_18;

  mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0), Var_33, ((MR_Box) (Anchor_14)), &conv0_AnchorFollow_18);
  AnchorFollow_18 = ((MR_Word) (conv0_AnchorFollow_18));
  AnchorIntervals_20 = ((MR_Word) ((MR_hl_field(0, AnchorFollow_18, (MR_Integer) 1))));
  mercury__set__intersect_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), AnchorIntervals_20, InsertIntervals_13, &AnchorInsertIntervals_21);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), AnchorInsertIntervals_21);
  if (succeeded)
  {
    MR_Word Insert_22;
    MR_Word InsertMap0_23;
    MR_Word InsertMap_26;
    MR_Word Inserts0_24;
    MR_Box conv1_Inserts0_24;
    MR_Word Var_55;
    MR_Word Var_57;

    {
      Insert_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Insert_22, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(0, Insert_22, 1) = ((MR_Box) (ArgVarsViaCellVar_12));
    }
    InsertMap0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 1))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[2]), InsertMap0_23, ((MR_Box) (Anchor_14)), &conv1_Inserts0_24);
    if (succeeded)
    {
      Inserts0_24 = ((MR_Word) (conv1_Inserts0_24));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Inserts_25;

      {
        Inserts_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Inserts_25, 0) = ((MR_Box) (Insert_22));
        MR_hl_field(1, Inserts_25, 1) = ((MR_Box) (Inserts0_24));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[2]), ((MR_Box) (Anchor_14)), ((MR_Box) (Inserts_25)), InsertMap0_23, &InsertMap_26);
    }
    else
    {
      MR_Word Inserts_37;

      {
        Inserts_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Inserts_37, 0) = ((MR_Box) (Insert_22));
        MR_hl_field(1, Inserts_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[2]), ((MR_Box) (Anchor_14)), ((MR_Box) (Inserts_37)), InsertMap0_23, &InsertMap_26);
    }
    Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 0))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_StackOptInfo_30 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_55));
      MR_hl_field(0, base, 1) = ((MR_Box) (InsertMap_26));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_57));
    }
    mercury__set__insert_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Anchor_14)), STATE_VARIABLE_InsertAnchors_0_31, STATE_VARIABLE_InsertAnchors_32);
  }
  else
  {
    *STATE_VARIABLE_InsertAnchors_32 = STATE_VARIABLE_InsertAnchors_0_31;
    *STATE_VARIABLE_StackOptInfo_30 = STATE_VARIABLE_StackOptInfo_0_29;
  }
  *STATE_VARIABLE_IntervalInfo_28 = STATE_VARIABLE_IntervalInfo_0_27;
}

static void MR_CALL 
ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(
  MR_Word CellVar_10,
  MR_Word ViaCellVars_11,
  MR_Word IntervalId_12,
  MR_Word STATE_VARIABLE_IntervalInfo_0_17,
  MR_Word * STATE_VARIABLE_IntervalInfo_18,
  MR_Word STATE_VARIABLE_StackOptInfo_0_19,
  MR_Word * STATE_VARIABLE_StackOptInfo_20,
  MR_Word STATE_VARIABLE_InsertIntervals_0_21,
  MR_Word * STATE_VARIABLE_InsertIntervals_22)
{
  MR_bool succeeded;
  MR_Word DeletedVars_16;
  MR_Word Var_23;
  MR_Word STATE_VARIABLE_IntervalInfo_24_24;

  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (CellVar_10));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  backend_libs__interval__record_interval_vars_4_p_0(IntervalId_12, Var_23, STATE_VARIABLE_IntervalInfo_0_17, &STATE_VARIABLE_IntervalInfo_24_24);
  backend_libs__interval__delete_interval_vars_5_p_0(IntervalId_12, ViaCellVars_11, &DeletedVars_16, STATE_VARIABLE_IntervalInfo_24_24, STATE_VARIABLE_IntervalInfo_18);
  succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DeletedVars_16);
  if (succeeded)
    mercury__set__insert_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), ((MR_Box) (IntervalId_12)), STATE_VARIABLE_InsertIntervals_0_21, STATE_VARIABLE_InsertIntervals_22);
  else
    *STATE_VARIABLE_InsertIntervals_22 = STATE_VARIABLE_InsertIntervals_0_21;
  *STATE_VARIABLE_StackOptInfo_20 = STATE_VARIABLE_StackOptInfo_0_19;
}

static void MR_CALL 
ll_backend__stack_opt__apply_matching_for_path_8_p_0(
  MR_Word StackOptParams_9,
  MR_Word CellVar_10,
  MR_Word CellVarFlushedLater_11,
  MR_Word CandidateArgVars_12,
  MR_Word PathInfo_13,
  MR_Word * BenefitNodes_14,
  MR_Word * CostNodes_15,
  MR_Word * ViaCellVars_16)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CandidateArgVars_12);
  if (succeeded)
  {
    *BenefitNodes_14 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0));
    *CostNodes_15 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0));
    *ViaCellVars_16 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  }
  else
  {
    MR_Word FirstSegment_17 = ((MR_Word) ((MR_hl_field(0, PathInfo_13, (MR_Integer) 0))));
    MR_Word LaterSegments_18 = ((MR_Word) ((MR_hl_field(0, PathInfo_13, (MR_Integer) 1))));
    MR_Word Globals_19 = ((MR_Word) ((MR_hl_field(0, StackOptParams_9, (MR_Integer) 0))));
    MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(0, StackOptParams_9, (MR_Integer) 1))));
    MR_Word MatchingParams_21 = ((MR_Word) ((MR_hl_field(0, StackOptParams_9, (MR_Integer) 2))));

    backend_libs__matching__find_via_cell_vars_11_p_0(Globals_19, ModuleName_20, MatchingParams_21, CellVar_10, CandidateArgVars_12, CellVarFlushedLater_11, FirstSegment_17, LaterSegments_18, BenefitNodes_14, CostNodes_15, ViaCellVars_16);
  }
}

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_1(
  void * env_ptr_arg)
{
  struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_3(
  void * env_ptr_arg)
{
  struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_43 = ((MR_Word) ((env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv0_PathInfo_43));
  ll_backend__stack_opt__use_cell_8_p_0_2(env_ptr);
}

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_5(
  void * env_ptr_arg)
{
  struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_46 = ((MR_Word) ((env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_Segment_46));
  ll_backend__stack_opt__use_cell_8_p_0_4(env_ptr);
}

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_4(
  void * env_ptr_arg)
{
  struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_46, (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9);
  if ((env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
    ll_backend__stack_opt__use_cell_8_p_0_1(env_ptr);
}

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_2(
  void * env_ptr_arg)
{
  struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_43, (MR_Integer) 0))));

    (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_45 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_43, (MR_Integer) 1))));
    (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_114_114 = (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]);
    mercury__list__member_2_p_1((env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_114_114, &(env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_Segment_46, (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_45, ll_backend__stack_opt__use_cell_8_p_0_5, env_ptr);
  }
}

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_6(
  void * env_ptr_arg)
{
  struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0), &(env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv0_PathInfo_43, (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_34, ll_backend__stack_opt__use_cell_8_p_0_3, env_ptr);
      (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0(
  MR_Word CellVar_9,
  MR_Word FieldVarList_10,
  MR_Word ConsId_11,
  MR_Word Goal_12,
  MR_Word STATE_VARIABLE_IntervalInfo_0_47,
  MR_Word * STATE_VARIABLE_IntervalInfo_48,
  MR_Word STATE_VARIABLE_StackOptInfo_0_49,
  MR_Word * STATE_VARIABLE_StackOptInfo_50)
{
  struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s env;

  (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9 = CellVar_9;
  {
    MR_Word FlushedLater_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 1))));
    MR_Word StackOptParams_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StackOptInfo_0_49, (MR_Integer) 0))));
    MR_Word NonCandidateVars_17 = ((MR_Word) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 5))));
    MR_Word FieldVars_18;
    MR_Word FlushedLaterFieldVars_19;
    MR_Word CandidateArgVars0_20;
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 0))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 2))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 3))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 4))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 5))));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 6))));
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 7))));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 8))));
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 9))));
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 10))));
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 11))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 12))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 13))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 14))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 15))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StackOptInfo_0_49, (MR_Integer) 1))));
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StackOptInfo_0_49, (MR_Integer) 2))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 0))));
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 1))));
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 2))));
    MR_Integer Var_76 = ((MR_Integer) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 3))));
    MR_Word Var_77 = ((((MR_Unsigned) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word Var_78 = ((((MR_Unsigned) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_79 = ((MR_Unsigned) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 4)));

    FieldVars_18 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FieldVarList_10);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FieldVars_18, FlushedLater_15, &FlushedLaterFieldVars_19);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FlushedLaterFieldVars_19, NonCandidateVars_17, &CandidateArgVars0_20);
    (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CandidateArgVars0_20);
    if ((env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
    {
      *STATE_VARIABLE_StackOptInfo_50 = STATE_VARIABLE_StackOptInfo_0_49;
      *STATE_VARIABLE_IntervalInfo_48 = STATE_VARIABLE_IntervalInfo_0_47;
    }
    else
    {
      MR_Word FreeOfCost_28;
      MR_Word IntParams_24;
      MR_Word VarTable_25;
      MR_Word Type_26;
      MR_Word _Name_21;
      MR_Integer _Arity_22;
      MR_Word _TypeCtor_23;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Unsigned packed_word_1;
      MR_Word Var_27;

      (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ConsId_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if ((env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
      {
        _Name_21 = ((MR_Word) ((MR_hl_field(3, ConsId_11, (MR_Integer) 1))));
        _Arity_22 = ((MR_Integer) ((MR_hl_field(3, ConsId_11, (MR_Integer) 2))));
        _TypeCtor_23 = ((MR_Word) ((MR_hl_field(3, ConsId_11, (MR_Integer) 3))));
        IntParams_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 0))));
        Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 1))));
        Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 2))));
        Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 3))));
        Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 4))));
        Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 5))));
        Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 6))));
        Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 7))));
        Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 8))));
        Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 9))));
        Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 10))));
        Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 11))));
        Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 12))));
        Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 13))));
        Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 14))));
        Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_47, (MR_Integer) 15))));
        Var_95 = ((MR_Word) ((MR_hl_field(0, IntParams_24, (MR_Integer) 0))));
        VarTable_25 = ((MR_Word) ((MR_hl_field(0, IntParams_24, (MR_Integer) 1))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, IntParams_24, (MR_Integer) 2)));
        Var_96 = ((MR_Unsigned) ((MR_hl_field(0, IntParams_24, (MR_Integer) 2))) & (MR_Integer) 1);
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_25, (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, &Type_26);
        (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_26, &Var_27);
        if ((env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
        {
          FreeOfCost_28 = (MR_Integer) 0;
          (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word ModuleInfo_29 = ((MR_Word) ((MR_hl_field(0, IntParams_24, (MR_Integer) 0))));
          MR_Word ConsRepn_30;
          MR_Word ConsTag_31;
          MR_Word Var_97 = ((MR_Word) ((MR_hl_field(0, IntParams_24, (MR_Integer) 1))));
          MR_Word Var_98 = ((MR_Unsigned) ((MR_hl_field(0, IntParams_24, (MR_Integer) 2))) & (MR_Integer) 1);
          MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, IntParams_24, (MR_Integer) 2)));
          uint32_t Var_99;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Integer Var_103;
          MR_Word Var_104;

          (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_29, ConsId_11, &ConsRepn_30);
          if ((env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
          {
            Var_99 = ((uint32_t) (MR_Word) (MR_hl_field(0, ConsRepn_30, (MR_Integer) 0)));
            Var_100 = ((MR_Word) ((MR_hl_field(0, ConsRepn_30, (MR_Integer) 1))));
            Var_101 = ((MR_Word) ((MR_hl_field(0, ConsRepn_30, (MR_Integer) 2))));
            ConsTag_31 = ((MR_Word) ((MR_hl_field(0, ConsRepn_30, (MR_Integer) 3))));
            Var_102 = ((MR_Word) ((MR_hl_field(0, ConsRepn_30, (MR_Integer) 4))));
            Var_103 = ((MR_Integer) ((MR_hl_field(0, ConsRepn_30, (MR_Integer) 5))));
            Var_104 = ((MR_Word) ((MR_hl_field(0, ConsRepn_30, (MR_Integer) 6))));
            (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = (ConsTag_31 == (MR_Word) ((MR_Unsigned) 4U));
            if ((env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
              FreeOfCost_28 = (MR_Integer) 1;
            else
              FreeOfCost_28 = (MR_Integer) 0;
            (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
          }
        }
      }
      if ((env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
      {
        MR_Word RelevantVars_32;
        MR_Word MatchInfo_33;
        MR_Word RelevantAfterVars_35;
        MR_Word AfterModelNon_36;
        MR_Word InsertAnchors_37;
        MR_Word InsertIntervals_38;
        MR_Unsigned packed_word_3;

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, FieldVars_18, &RelevantVars_32);
        ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(RelevantVars_32, &MatchInfo_33, STATE_VARIABLE_IntervalInfo_0_47, STATE_VARIABLE_StackOptInfo_0_49);
        (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_34 = ((MR_Word) ((MR_hl_field(0, MatchInfo_33, (MR_Integer) 0))));
        RelevantAfterVars_35 = ((MR_Word) ((MR_hl_field(0, MatchInfo_33, (MR_Integer) 1))));
        packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, MatchInfo_33, (MR_Integer) 2)));
        AfterModelNon_36 = ((MR_Unsigned) ((MR_hl_field(0, MatchInfo_33, (MR_Integer) 2))) & (MR_Integer) 1);
        InsertAnchors_37 = ((MR_Word) ((MR_hl_field(0, MatchInfo_33, (MR_Integer) 3))));
        InsertIntervals_38 = ((MR_Word) ((MR_hl_field(0, MatchInfo_33, (MR_Integer) 4))));
        switch (FreeOfCost_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (AfterModelNon_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word OnStack_40 = ((MR_Unsigned) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 4))) & (MR_Integer) 1);
                  MR_Word CandidateArgVars_41;
                  MR_Word CellVarFlushedLater_42;
                  MR_Word ViaCellVars_55;
                  MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 0))));
                  MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 1))));
                  MR_Word Var_107 = ((MR_Word) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 2))));
                  MR_Integer Var_108 = ((MR_Integer) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 3))));
                  MR_Word Var_109 = ((((MR_Unsigned) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
                  MR_Word Var_110 = ((((MR_Unsigned) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
                  MR_Word Var_111 = ((MR_Word) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 5))));
                  MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, StackOptParams_16, (MR_Integer) 4)));

                  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CandidateArgVars0_20, RelevantAfterVars_35, &CandidateArgVars_41);
                  switch (OnStack_40) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        ll_backend__stack_opt__use_cell_8_p_0_6(&env);
                        if ((env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
                          CellVarFlushedLater_42 = (MR_Integer) 1;
                        else
                          CellVarFlushedLater_42 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FlushedLater_15, (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9);
                        if ((env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
                          CellVarFlushedLater_42 = (MR_Integer) 1;
                        else
                          CellVarFlushedLater_42 = (MR_Integer) 0;
                      }
                      break;
                  }
                  ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0((env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, CellVarFlushedLater_42, StackOptParams_16, (env).ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_34, CandidateArgVars_41, &ViaCellVars_55);
                  ll_backend__stack_opt__record_matching_result_11_p_0((env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ConsId_11, FieldVarList_10, ViaCellVars_55, Goal_12, InsertAnchors_37, InsertIntervals_38, STATE_VARIABLE_IntervalInfo_0_47, STATE_VARIABLE_IntervalInfo_48, STATE_VARIABLE_StackOptInfo_0_49, STATE_VARIABLE_StackOptInfo_50);
                }
                break;
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_IntervalInfo_48 = STATE_VARIABLE_IntervalInfo_0_47;
                  *STATE_VARIABLE_StackOptInfo_50 = STATE_VARIABLE_StackOptInfo_0_49;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ViaCellVars_39;

              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CandidateArgVars0_20, RelevantAfterVars_35, &ViaCellVars_39);
              ll_backend__stack_opt__record_matching_result_11_p_0((env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ConsId_11, FieldVarList_10, ViaCellVars_39, Goal_12, InsertAnchors_37, InsertIntervals_38, STATE_VARIABLE_IntervalInfo_0_47, STATE_VARIABLE_IntervalInfo_48, STATE_VARIABLE_StackOptInfo_0_49, STATE_VARIABLE_StackOptInfo_50);
            }
            break;
        }
      }
      else
      {
        *STATE_VARIABLE_StackOptInfo_50 = STATE_VARIABLE_StackOptInfo_0_49;
        *STATE_VARIABLE_IntervalInfo_48 = STATE_VARIABLE_IntervalInfo_0_47;
      }
    }
  }
}

static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0(
  MR_Word CellVar_8,
  MR_Word CellVarFlushedLater_9,
  MR_Word StackOptParams_11,
  MR_Word PathInfos_12,
  MR_Word CandidateArgVars0_13,
  MR_Word * ViaCellVars_14)
{
  MR_bool succeeded;
  MR_Word BenefitNodeSets_15;
  MR_Word CostNodeSets_16;
  MR_Word ViaCellVars0_17;
  MR_Word BenefitNodes_18;
  MR_Word CostNodes_19;
  MR_Integer NumBenefitNodes_20;
  MR_Integer NumCostNodes_21;
  MR_Integer AllPathNodeRatio_22;
  MR_Integer Var_23;
  MR_Integer Var_24;

  ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(CellVar_8, CellVarFlushedLater_9, StackOptParams_11, PathInfos_12, CandidateArgVars0_13, &BenefitNodeSets_15, &CostNodeSets_16, &ViaCellVars0_17);
  BenefitNodes_18 = mercury__set__union_list_1_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), BenefitNodeSets_15);
  CostNodes_19 = mercury__set__union_list_1_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), CostNodeSets_16);
  mercury__set__count_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), BenefitNodes_18, &NumBenefitNodes_20);
  mercury__set__count_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), CostNodes_19, &NumCostNodes_21);
  AllPathNodeRatio_22 = ((MR_Integer) ((MR_hl_field(0, StackOptParams_11, (MR_Integer) 3))));
  Var_23 = (MR_Integer) ((MR_Unsigned) NumBenefitNodes_20 * (MR_Unsigned) 100);
  Var_24 = (MR_Integer) ((MR_Unsigned) NumCostNodes_21 * (MR_Unsigned) AllPathNodeRatio_22);
  succeeded = (Var_23 >= Var_24);
  if (succeeded)
    *ViaCellVars_14 = ViaCellVars0_17;
  else
    *ViaCellVars_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
}

static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_BenefitNodes_14;
  MR_Word conv1_CostNodes_15;
  MR_Word conv0_ViaCellVars_16;

  ll_backend__stack_opt__apply_matching_for_path_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_BenefitNodes_14, &conv1_CostNodes_15, &conv0_ViaCellVars_16);
  *wrapper_arg_2 = ((MR_Box) (conv2_BenefitNodes_14));
  *wrapper_arg_3 = ((MR_Box) (conv1_CostNodes_15));
  *wrapper_arg_4 = ((MR_Box) (conv0_ViaCellVars_16));
}

static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(
  MR_Word CellVar_10,
  MR_Word CellVarFlushedLater_11,
  MR_Word StackOptParams_13,
  MR_Word PathInfos_14,
  MR_Word CandidateArgVars0_15,
  MR_Word * BenefitNodeSets_16,
  MR_Word * CostNodeSets_17,
  MR_Word * ViaCellVars_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word BenefitNodeSets0_19;
    MR_Word CostNodeSets0_20;
    MR_Word PathViaCellVars_21;
    MR_Word Var_25;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_11[0]));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1));
      MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_25, 3) = ((MR_Box) (StackOptParams_13));
      MR_hl_field(0, Var_25, 4) = ((MR_Box) (CellVar_10));
      MR_hl_field(0, Var_25, 5) = ((MR_Box) (CellVarFlushedLater_11));
      MR_hl_field(0, Var_25, 6) = ((MR_Box) (CandidateArgVars0_15));
    }
    mercury__list__map3_5_p_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[7]), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[8]), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), Var_25, PathInfos_14, &BenefitNodeSets0_19, &CostNodeSets0_20, &PathViaCellVars_21);
    succeeded = mercury__list__all_same_1_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), PathViaCellVars_21);
    if (succeeded)
    {
      *BenefitNodeSets_16 = BenefitNodeSets0_19;
      *CostNodeSets_17 = CostNodeSets0_20;
      if ((PathViaCellVars_21 == (MR_Word) ((MR_Unsigned) 0U)))
        *ViaCellVars_18 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      else
        *ViaCellVars_18 = ((MR_Word) ((MR_hl_field(1, PathViaCellVars_21, (MR_Integer) 0))));
    }
    else
    {
      MR_Word CandidateArgVars1_23;
      MR_Word FixpointLoop_24;

      CandidateArgVars1_23 = parse_tree__set_of_var__intersect_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PathViaCellVars_21);
      FixpointLoop_24 = ((((MR_Unsigned) ((MR_hl_field(0, StackOptParams_13, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
      switch (FixpointLoop_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            *BenefitNodeSets_16 = BenefitNodeSets0_19;
            *CostNodeSets_17 = CostNodeSets0_20;
            *ViaCellVars_18 = CandidateArgVars1_23;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_CandidateArgVars0_15 = CandidateArgVars1_23;

            // direct tailcall eliminated
            ;
            CandidateArgVars0_15 = next_value_of_CandidateArgVars0_15;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_MatchPathInfo_6;
  MR_Word conv2_Anchors_7;
  MR_Word conv1_Intervals_8;

  ll_backend__stack_opt__extract_match_and_save_info_4_p_0(((MR_Word) (wrapper_arg_1)), &conv3_MatchPathInfo_6, &conv2_Anchors_7, &conv1_Intervals_8);
  *wrapper_arg_2 = ((MR_Box) (conv3_MatchPathInfo_6));
  *wrapper_arg_3 = ((MR_Box) (conv2_Anchors_7));
  *wrapper_arg_4 = ((MR_Box) (conv1_Intervals_8));
}

static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(
  MR_Word RelevantVars_5,
  MR_Word * MatchInfo_6,
  MR_Word IntervalInfo_7,
  MR_Word StackOptInfo_8)
{
  MR_Word IntervalId_9 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_7, (MR_Integer) 6))));
  MR_Word IntervalVars_10;
  MR_Word IntervalRelevantVars_11;
  MR_Word Path0_12;
  MR_Word AllPaths0_13;
  MR_Word AllPaths_14;
  MR_Word Paths_15;
  MR_Word AfterModelNon_16;
  MR_Word RelevantAfter_17;
  MR_Word PathList_18;
  MR_Word MatchInputs_19;
  MR_Word FlushAnchorSets_20;
  MR_Word OccurringIntervalSets_21;
  MR_Word FlushAnchors_22;
  MR_Word OccurringIntervals_23;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_7, (MR_Integer) 14))));
  MR_Box conv0_IntervalVars_10;

  mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), Var_48, ((MR_Box) (IntervalId_9)), &conv0_IntervalVars_10);
  IntervalVars_10 = ((MR_Word) (conv0_IntervalVars_10));
  IntervalRelevantVars_11 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RelevantVars_5, IntervalVars_10);
  Var_26 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  Var_28 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0));
  Var_29 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0));
  {
    Path0_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Path0_12, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, Path0_12, 1) = ((MR_Box) (IntervalRelevantVars_11));
    MR_hl_field(0, Path0_12, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, Path0_12, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Path0_12, 4) = ((MR_Box) (Var_28));
    MR_hl_field(0, Path0_12, 5) = ((MR_Box) (Var_29));
  }
  Var_30 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), ((MR_Box) (Path0_12)));
  Var_32 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    AllPaths0_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AllPaths0_13, 0) = ((MR_Box) (Var_30));
    MR_hl_field(0, AllPaths0_13, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, AllPaths0_13, 2) = ((MR_Box) (Var_32));
  }
  ll_backend__stack_opt__find_all_branches_7_p_0(RelevantVars_5, IntervalId_9, (MR_Word) ((MR_Unsigned) 0U), IntervalInfo_7, StackOptInfo_8, AllPaths0_13, &AllPaths_14);
  Paths_15 = ((MR_Word) ((MR_hl_field(0, AllPaths_14, (MR_Integer) 0))));
  AfterModelNon_16 = ((MR_Unsigned) ((MR_hl_field(0, AllPaths_14, (MR_Integer) 1))) & (MR_Integer) 1);
  RelevantAfter_17 = ((MR_Word) ((MR_hl_field(0, AllPaths_14, (MR_Integer) 2))));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), Paths_15, &PathList_18);
  mercury__list__map3_5_p_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[10]), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[9]), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[5]), PathList_18, &MatchInputs_19, &FlushAnchorSets_20, &OccurringIntervalSets_21);
  FlushAnchors_22 = mercury__set__union_list_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), FlushAnchorSets_20);
  OccurringIntervals_23 = mercury__set__union_list_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), OccurringIntervalSets_21);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *MatchInfo_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MatchInputs_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (RelevantAfter_17));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (AfterModelNon_16));
    MR_hl_field(0, base, 3) = ((MR_Box) (FlushAnchors_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (OccurringIntervals_23));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__848__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__844__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__835__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_AllPaths_15;

  ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv7_STATE_VARIABLE_AllPaths_15);
  *wrapper_arg_2 = ((MR_Box) (conv7_STATE_VARIABLE_AllPaths_15));
}

static MR_Box MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_Path_4;

  conv3_Path_4 = ll_backend__stack_opt__close_path_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_Path_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_Path_9;

  conv13_STATE_VARIABLE_Path_9 = ll_backend__stack_opt__add_anchor_to_path_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv13_STATE_VARIABLE_Path_9));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Path_13;

  conv10_STATE_VARIABLE_Path_13 = ll_backend__stack_opt__add_interval_to_path_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv10_STATE_VARIABLE_Path_13));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0(
  MR_Word tscc_proc_1_input_1_RelevantVars_8,
  MR_Word tscc_proc_1_input_2_IntervalId_9,
  MR_Word tscc_proc_1_input_3_MaybeSearchAnchor0_10,
  MR_Word tscc_proc_1_input_4_IntervalInfo_11,
  MR_Word tscc_proc_1_input_5_StackOptInfo_12,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_AllPaths_29)
{
  MR_Word tscc_proc_2_input_1_End_9;
  MR_Word tscc_proc_2_input_2_RelevantVars_10;
  MR_Word tscc_proc_2_input_3_MaybeSearchAnchor0_11;
  MR_Word tscc_proc_2_input_4_IntervalInfo_12;
  MR_Word tscc_proc_2_input_5_StackOptInfo_13;
  MR_Word tscc_proc_2_input_6_SuccessorIds_14;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36;
  MR_Word tscc_proc_3_input_1_RelevantVars_8;
  MR_Word tscc_proc_3_input_2_MaybeSearchAnchor0_9;
  MR_Word tscc_proc_3_input_3_IntervalInfo_10;
  MR_Word tscc_proc_3_input_4_StackOptInfo_11;
  MR_Word tscc_proc_3_input_5_IntervalId_12;
  MR_Word tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
  MR_Word tscc_output_1_STATE_VARIABLE_AllPaths_29;

  // The code for TSCC PROC 1: pred ll_backend.stack_opt.find_all_branches/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ll_backend.stack_opt.find_all_branches/7-0
  ;
  // proc 2 in TSCC: pred ll_backend.stack_opt.find_all_branches_from/8-0
  ;
  // proc 3 in TSCC: pred ll_backend.stack_opt.apply_interval_find_all_branches/7-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word RelevantVars_8 = tscc_proc_1_input_1_RelevantVars_8;
    MR_Word IntervalId_9 = tscc_proc_1_input_2_IntervalId_9;
    MR_Word MaybeSearchAnchor0_10 = tscc_proc_1_input_3_MaybeSearchAnchor0_10;
    MR_Word IntervalInfo_11 = tscc_proc_1_input_4_IntervalInfo_11;
    MR_Word StackOptInfo_12 = tscc_proc_1_input_5_StackOptInfo_12;
    MR_Word STATE_VARIABLE_AllPaths_0_28 = tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28;
    MR_Word STATE_VARIABLE_AllPaths_29;
    MR_bool succeeded;
    MR_Word End_14;
    MR_Word SuccessorIds_15;
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_11, (MR_Integer) 12))));
    MR_Word Var_31;
    MR_Box conv0_End_14;
    MR_Box conv1_SuccessorIds_15;

    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_30, ((MR_Box) (IntervalId_9)), &conv0_End_14);
    End_14 = ((MR_Word) (conv0_End_14));
    Var_31 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_11, (MR_Integer) 13))));
    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[3]), Var_31, ((MR_Box) (IntervalId_9)), &conv1_SuccessorIds_15);
    SuccessorIds_15 = ((MR_Word) (conv1_SuccessorIds_15));
    if ((SuccessorIds_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_32;
      MR_Word Var_35;

      Var_35 = ll_backend__stack_opt__may_have_no_successor_1_f_0(End_14);
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_32, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[2]));
        MR_hl_field(0, Var_32, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_1));
        MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_32, 3) = ((MR_Box) (Var_35));
        MR_hl_field(0, Var_32, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected no successor");
      STATE_VARIABLE_AllPaths_29 = STATE_VARIABLE_AllPaths_0_28;
    }
    else
    {
      MR_Word MoreSuccessorIds_17 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_15, (MR_Integer) 1))));
      MR_Word SearchAnchor0_20;

      if ((MoreSuccessorIds_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_37;
        MR_Word Var_40;

        Var_40 = ll_backend__stack_opt__may_have_one_successor_1_f_0(End_14);
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[2]));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_2));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_37, 3) = ((MR_Box) (Var_40));
          MR_hl_field(0, Var_37, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected one successor");
      }
      else
      {
        MR_Word Var_42;
        MR_Word Var_45;

        Var_45 = ll_backend__stack_opt__may_have_more_successors_1_f_0(End_14);
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[2]));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_3));
          MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_42, 3) = ((MR_Box) (Var_45));
          MR_hl_field(0, Var_42, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected more successors");
      }
      succeeded = (MaybeSearchAnchor0_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SearchAnchor0_20 = ((MR_Word) ((MR_hl_field(1, MaybeSearchAnchor0_10, (MR_Integer) 0))));
        succeeded = backend_libs__interval____Unify____anchor_0_0(End_14, SearchAnchor0_20);
      }
      if (succeeded)
      {
        MR_Word Var_48;
        MR_Word Var_82;
        MR_Word Var_83;

        Var_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0))));
        Var_83 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1))) & (MR_Integer) 1);
        {
          STATE_VARIABLE_AllPaths_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 0) = ((MR_Box) (Var_82));
          MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 1) = (MR_Box) ((MR_Unsigned) (Var_83));
          MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 2) = ((MR_Box) (Var_48));
        }
      }
      else
      {
        MR_Word RelevantAfter_27;
        MR_Word TypeCtorInfo_114_114;
        MR_Word TypeCtorInfo_115_115;
        MR_Word TypeCtorInfo_116_116;
        MR_Word EndGoalId_22;
        MR_Word BranchEndInfo_23;
        MR_Word OnStackAfterBranch_24;
        MR_Word AccessedAfterBranch_25;
        MR_Word NeededAfterBranch_26;
        MR_Word Var_49;
        MR_Box conv2_BranchEndInfo_23;

        succeeded = ((((MR_tag((MR_Word) End_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, End_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          EndGoalId_22 = ((MR_Word) ((MR_hl_field(3, End_14, (MR_Integer) 2))));
          Var_49 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_11, (MR_Integer) 4))));
          TypeCtorInfo_114_114 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
          TypeCtorInfo_115_115 = (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0);
          mercury__map__lookup_3_p_0(TypeCtorInfo_114_114, TypeCtorInfo_115_115, Var_49, ((MR_Box) (EndGoalId_22)), &conv2_BranchEndInfo_23);
          BranchEndInfo_23 = ((MR_Word) (conv2_BranchEndInfo_23));
          OnStackAfterBranch_24 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_23, (MR_Integer) 0))));
          AccessedAfterBranch_25 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_23, (MR_Integer) 1))));
          TypeCtorInfo_116_116 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          NeededAfterBranch_26 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_116_116, OnStackAfterBranch_24, AccessedAfterBranch_25);
          RelevantAfter_27 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_116_116, RelevantVars_8, NeededAfterBranch_26);
          succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(TypeCtorInfo_116_116, RelevantAfter_27);
        }
        if (succeeded)
        {
          MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0))));
          MR_Word Var_105 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1))) & (MR_Integer) 1);

          {
            STATE_VARIABLE_AllPaths_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 0) = ((MR_Box) (Var_104));
            MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 1) = (MR_Box) ((MR_Unsigned) (Var_105));
            MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 2) = ((MR_Box) (RelevantAfter_27));
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_End_9 = End_14;
          MR_Word next_value_of_tscc_proc_2_input_2_RelevantVars_10 = RelevantVars_8;
          MR_Word next_value_of_tscc_proc_2_input_3_MaybeSearchAnchor0_11 = MaybeSearchAnchor0_10;
          MR_Word next_value_of_tscc_proc_2_input_4_IntervalInfo_12 = IntervalInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_5_StackOptInfo_13 = StackOptInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_6_SuccessorIds_14 = SuccessorIds_15;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36 = STATE_VARIABLE_AllPaths_0_28;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_End_9 = next_value_of_tscc_proc_2_input_1_End_9;
          tscc_proc_2_input_2_RelevantVars_10 = next_value_of_tscc_proc_2_input_2_RelevantVars_10;
          tscc_proc_2_input_3_MaybeSearchAnchor0_11 = next_value_of_tscc_proc_2_input_3_MaybeSearchAnchor0_11;
          tscc_proc_2_input_4_IntervalInfo_12 = next_value_of_tscc_proc_2_input_4_IntervalInfo_12;
          tscc_proc_2_input_5_StackOptInfo_13 = next_value_of_tscc_proc_2_input_5_StackOptInfo_13;
          tscc_proc_2_input_6_SuccessorIds_14 = next_value_of_tscc_proc_2_input_6_SuccessorIds_14;
          tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36;
          goto top_of_proc_2;
        }
      }
    }
    tscc_output_1_STATE_VARIABLE_AllPaths_29 = STATE_VARIABLE_AllPaths_29;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word End_9 = tscc_proc_2_input_1_End_9;
    MR_Word RelevantVars_10 = tscc_proc_2_input_2_RelevantVars_10;
    MR_Word MaybeSearchAnchor0_11 = tscc_proc_2_input_3_MaybeSearchAnchor0_11;
    MR_Word IntervalInfo_12 = tscc_proc_2_input_4_IntervalInfo_12;
    MR_Word StackOptInfo_13 = tscc_proc_2_input_5_StackOptInfo_13;
    MR_Word SuccessorIds_14 = tscc_proc_2_input_6_SuccessorIds_14;
    MR_Word STATE_VARIABLE_AllPaths_0_36 = tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36;
    MR_Word STATE_VARIABLE_AllPaths_37;
    MR_bool succeeded;
    MR_Word AnchorRequiresClose_16;
    MR_Word StackOptParams_19;
    MR_Word FullPath_20;
    MR_Word STATE_VARIABLE_AllPaths_39_39;
    MR_Word EndGoalId_21;
    MR_Word Var_40;

    AnchorRequiresClose_16 = ll_backend__stack_opt__anchor_requires_close_2_f_0(IntervalInfo_12, End_9);
    switch (AnchorRequiresClose_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_AllPaths_39_39 = STATE_VARIABLE_AllPaths_0_36;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Paths0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 0))));
          MR_Word Paths1_18;
          MR_Word Var_83;
          MR_Word Var_84;

          Paths1_18 = mercury__set__map_2_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[4]), Paths0_17);
          Var_83 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 2))));
          {
            STATE_VARIABLE_AllPaths_39_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_AllPaths_39_39, 0) = ((MR_Box) (Paths1_18));
            MR_hl_field(0, STATE_VARIABLE_AllPaths_39_39, 1) = (MR_Box) ((MR_Unsigned) (Var_83));
            MR_hl_field(0, STATE_VARIABLE_AllPaths_39_39, 2) = ((MR_Box) (Var_84));
          }
        }
        break;
    }
    StackOptParams_19 = ((MR_Word) ((MR_hl_field(0, StackOptInfo_13, (MR_Integer) 0))));
    FullPath_20 = ((((MR_Unsigned) ((MR_hl_field(0, StackOptParams_19, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    succeeded = (FullPath_20 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) End_9)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_40 = ((MR_Unsigned) ((MR_hl_field(1, End_9, (MR_Integer) 0))) & (MR_Integer) 7);
        EndGoalId_21 = ((MR_Word) ((MR_hl_field(1, End_9, (MR_Integer) 1))));
        succeeded = (Var_40 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word MaybeSearchAnchor1_22;
      MR_Word BranchEndInfo_23;
      MR_Word ContinueId_24;
      MR_Word Var_41;
      MR_Word STATE_VARIABLE_AllPaths_43_43;
      MR_Word Var_44;
      MR_Box conv4_BranchEndInfo_23;
      MR_Word next_value_of_tscc_proc_3_input_1_RelevantVars_8;
      MR_Word next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
      MR_Word next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
      MR_Word next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
      MR_Word next_value_of_tscc_proc_3_input_5_IntervalId_12;
      MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;

      {
        Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_41, 1) = (MR_Box) ((MR_Unsigned) (Var_40));
        MR_hl_field(3, Var_41, 2) = ((MR_Box) (EndGoalId_21));
      }
      {
        MaybeSearchAnchor1_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeSearchAnchor1_22, 0) = ((MR_Box) (Var_41));
      }
      ll_backend__stack_opt__one_after_another_7_p_0(RelevantVars_10, MaybeSearchAnchor1_22, IntervalInfo_12, StackOptInfo_13, SuccessorIds_14, STATE_VARIABLE_AllPaths_39_39, &STATE_VARIABLE_AllPaths_43_43);
      Var_44 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_12, (MR_Integer) 4))));
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0), Var_44, ((MR_Box) (EndGoalId_21)), &conv4_BranchEndInfo_23);
      BranchEndInfo_23 = ((MR_Word) (conv4_BranchEndInfo_23));
      ContinueId_24 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_23, (MR_Integer) 2))));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_3_input_1_RelevantVars_8 = RelevantVars_10;
      next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9 = MaybeSearchAnchor0_11;
      next_value_of_tscc_proc_3_input_3_IntervalInfo_10 = IntervalInfo_12;
      next_value_of_tscc_proc_3_input_4_StackOptInfo_11 = StackOptInfo_13;
      next_value_of_tscc_proc_3_input_5_IntervalId_12 = ContinueId_24;
      next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = STATE_VARIABLE_AllPaths_43_43;
      tscc_proc_3_input_1_RelevantVars_8 = next_value_of_tscc_proc_3_input_1_RelevantVars_8;
      tscc_proc_3_input_2_MaybeSearchAnchor0_9 = next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
      tscc_proc_3_input_3_IntervalInfo_10 = next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
      tscc_proc_3_input_4_StackOptInfo_11 = next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
      tscc_proc_3_input_5_IntervalId_12 = next_value_of_tscc_proc_3_input_5_IntervalId_12;
      tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
      goto top_of_proc_3;
    }
    else
    {
      MR_Word EndGoalId_79;
      MR_Word Var_46;

      succeeded = (FullPath_20 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) End_9)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_46 = ((MR_Unsigned) ((MR_hl_field(1, End_9, (MR_Integer) 0))) & (MR_Integer) 7);
          EndGoalId_79 = ((MR_Word) ((MR_hl_field(1, End_9, (MR_Integer) 1))));
          succeeded = (Var_46 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        MR_Word ElseStartId_27;
        MR_Word CondStartId_28;
        MR_Word MaybeSearchAnchorCond_29;
        MR_Word MaybeSearchAnchorEnd_30;
        MR_Word CondEndMap_31;
        MR_Word Var_51;
        MR_Word STATE_VARIABLE_AllPaths_52_52;
        MR_Word Var_53;
        MR_Word STATE_VARIABLE_AllPaths_56_56;
        MR_Word Var_59;
        MR_Word BranchEndInfo_70;
        MR_Word ContinueId_71;
        MR_Word SuccessorId_184;
        MR_Word MoreSuccessorIds_185;
        MR_Word STATE_VARIABLE_AllPaths_24_188;
        MR_Word SuccessorId_199;
        MR_Word ElseStartIdPrime_25;
        MR_Word CondStartIdPrime_26;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Box conv5_SuccessorId_184;
        MR_Box conv6_BranchEndInfo_70;
        MR_Word next_value_of_tscc_proc_3_input_1_RelevantVars_8;
        MR_Word next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
        MR_Word next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
        MR_Word next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
        MR_Word next_value_of_tscc_proc_3_input_5_IntervalId_12;
        MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;

        succeeded = (SuccessorIds_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ElseStartIdPrime_25 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_14, (MR_Integer) 0))));
          Var_47 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_14, (MR_Integer) 1))));
          succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CondStartIdPrime_26 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
            Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));
            succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          ElseStartId_27 = ElseStartIdPrime_25;
          CondStartId_28 = CondStartIdPrime_26;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "ite not else, cond");
            return;
          }
        {
          Var_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_51, 0) = ((MR_Box) (EndGoalId_79));
        }
        {
          MaybeSearchAnchorCond_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeSearchAnchorCond_29, 0) = ((MR_Box) (Var_51));
        }
        ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(RelevantVars_10, MaybeSearchAnchorCond_29, IntervalInfo_12, StackOptInfo_13, CondStartId_28, STATE_VARIABLE_AllPaths_39_39, &STATE_VARIABLE_AllPaths_52_52);
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_53, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_53, 2) = ((MR_Box) (EndGoalId_79));
        }
        {
          MaybeSearchAnchorEnd_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeSearchAnchorEnd_30, 0) = ((MR_Box) (Var_53));
        }
        CondEndMap_31 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_12, (MR_Integer) 5))));
        mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), CondEndMap_31, ((MR_Box) (EndGoalId_79)), &conv5_SuccessorId_184);
        SuccessorId_184 = ((MR_Word) (conv5_SuccessorId_184));
        {
          MoreSuccessorIds_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MoreSuccessorIds_185, 0) = ((MR_Box) (ElseStartId_27));
          MR_hl_field(1, MoreSuccessorIds_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(RelevantVars_10, MaybeSearchAnchorEnd_30, IntervalInfo_12, StackOptInfo_13, SuccessorId_184, STATE_VARIABLE_AllPaths_52_52, &STATE_VARIABLE_AllPaths_24_188);
        SuccessorId_199 = ((MR_Word) ((MR_hl_field(1, MoreSuccessorIds_185, (MR_Integer) 0))));
        ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(RelevantVars_10, MaybeSearchAnchorEnd_30, IntervalInfo_12, StackOptInfo_13, SuccessorId_199, STATE_VARIABLE_AllPaths_24_188, &STATE_VARIABLE_AllPaths_56_56);
        Var_59 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_12, (MR_Integer) 4))));
        mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0), Var_59, ((MR_Box) (EndGoalId_79)), &conv6_BranchEndInfo_70);
        BranchEndInfo_70 = ((MR_Word) (conv6_BranchEndInfo_70));
        ContinueId_71 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_70, (MR_Integer) 2))));
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_3_input_1_RelevantVars_8 = RelevantVars_10;
        next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9 = MaybeSearchAnchor0_11;
        next_value_of_tscc_proc_3_input_3_IntervalInfo_10 = IntervalInfo_12;
        next_value_of_tscc_proc_3_input_4_StackOptInfo_11 = StackOptInfo_13;
        next_value_of_tscc_proc_3_input_5_IntervalId_12 = ContinueId_71;
        next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = STATE_VARIABLE_AllPaths_56_56;
        tscc_proc_3_input_1_RelevantVars_8 = next_value_of_tscc_proc_3_input_1_RelevantVars_8;
        tscc_proc_3_input_2_MaybeSearchAnchor0_9 = next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
        tscc_proc_3_input_3_IntervalInfo_10 = next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
        tscc_proc_3_input_4_StackOptInfo_11 = next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
        tscc_proc_3_input_5_IntervalId_12 = next_value_of_tscc_proc_3_input_5_IntervalId_12;
        tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
        goto top_of_proc_3;
      }
      else
      {
        MR_Word BranchType_33;
        MR_Word EndGoalId_75;

        succeeded = ((MR_tag((MR_Word) End_9)) == (MR_Integer) 1);
        if (succeeded)
        {
          BranchType_33 = ((MR_Unsigned) ((MR_hl_field(1, End_9, (MR_Integer) 0))) & (MR_Integer) 7);
          EndGoalId_75 = ((MR_Word) ((MR_hl_field(1, End_9, (MR_Integer) 1))));
          {
            MR_Word AllPathsList_34;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word STATE_VARIABLE_AllPaths_63_63;
            MR_Word Var_64;
            MR_Word MaybeSearchAnchor1_72;
            MR_Word BranchEndInfo_73;
            MR_Word ContinueId_74;
            MR_Box conv8_BranchEndInfo_73;
            MR_Word next_value_of_tscc_proc_3_input_1_RelevantVars_8;
            MR_Word next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
            MR_Word next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
            MR_Word next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
            MR_Word next_value_of_tscc_proc_3_input_5_IntervalId_12;
            MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;

            {
              Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_61, 1) = (MR_Box) ((MR_Unsigned) (BranchType_33));
              MR_hl_field(3, Var_61, 2) = ((MR_Box) (EndGoalId_75));
            }
            {
              MaybeSearchAnchor1_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeSearchAnchor1_72, 0) = ((MR_Box) (Var_61));
            }
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_62, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
              MR_hl_field(0, Var_62, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_8_p_0_5));
              MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 5));
              MR_hl_field(0, Var_62, 3) = ((MR_Box) (RelevantVars_10));
              MR_hl_field(0, Var_62, 4) = ((MR_Box) (MaybeSearchAnchor1_72));
              MR_hl_field(0, Var_62, 5) = ((MR_Box) (IntervalInfo_12));
              MR_hl_field(0, Var_62, 6) = ((MR_Box) (StackOptInfo_13));
              MR_hl_field(0, Var_62, 7) = ((MR_Box) (STATE_VARIABLE_AllPaths_39_39));
            }
            mercury__list__map_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0), Var_62, SuccessorIds_14, &AllPathsList_34);
            ll_backend__stack_opt__consolidate_after_join_2_p_0(AllPathsList_34, &STATE_VARIABLE_AllPaths_63_63);
            Var_64 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_12, (MR_Integer) 4))));
            mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0), Var_64, ((MR_Box) (EndGoalId_75)), &conv8_BranchEndInfo_73);
            BranchEndInfo_73 = ((MR_Word) (conv8_BranchEndInfo_73));
            ContinueId_74 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_73, (MR_Integer) 2))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_RelevantVars_8 = RelevantVars_10;
            next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9 = MaybeSearchAnchor0_11;
            next_value_of_tscc_proc_3_input_3_IntervalInfo_10 = IntervalInfo_12;
            next_value_of_tscc_proc_3_input_4_StackOptInfo_11 = StackOptInfo_13;
            next_value_of_tscc_proc_3_input_5_IntervalId_12 = ContinueId_74;
            next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = STATE_VARIABLE_AllPaths_63_63;
            tscc_proc_3_input_1_RelevantVars_8 = next_value_of_tscc_proc_3_input_1_RelevantVars_8;
            tscc_proc_3_input_2_MaybeSearchAnchor0_9 = next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
            tscc_proc_3_input_3_IntervalInfo_10 = next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
            tscc_proc_3_input_4_StackOptInfo_11 = next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
            tscc_proc_3_input_5_IntervalId_12 = next_value_of_tscc_proc_3_input_5_IntervalId_12;
            tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
            goto top_of_proc_3;
          }
        }
        else
        {
          MR_Word SuccessorId_35;
          MR_Word Var_66;

          succeeded = (SuccessorIds_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SuccessorId_35 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_14, (MR_Integer) 0))));
            Var_66 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_14, (MR_Integer) 1))));
            succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_3_input_1_RelevantVars_8 = RelevantVars_10;
            MR_Word next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9 = MaybeSearchAnchor0_11;
            MR_Word next_value_of_tscc_proc_3_input_3_IntervalInfo_10 = IntervalInfo_12;
            MR_Word next_value_of_tscc_proc_3_input_4_StackOptInfo_11 = StackOptInfo_13;
            MR_Word next_value_of_tscc_proc_3_input_5_IntervalId_12 = SuccessorId_35;
            MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = STATE_VARIABLE_AllPaths_39_39;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_RelevantVars_8 = next_value_of_tscc_proc_3_input_1_RelevantVars_8;
            tscc_proc_3_input_2_MaybeSearchAnchor0_9 = next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
            tscc_proc_3_input_3_IntervalInfo_10 = next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
            tscc_proc_3_input_4_StackOptInfo_11 = next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
            tscc_proc_3_input_5_IntervalId_12 = next_value_of_tscc_proc_3_input_5_IntervalId_12;
            tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
            goto top_of_proc_3;
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "more successor ids");
              return;
            }
        }
      }
    }
    tscc_output_1_STATE_VARIABLE_AllPaths_29 = STATE_VARIABLE_AllPaths_37;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word RelevantVars_8 = tscc_proc_3_input_1_RelevantVars_8;
    MR_Word MaybeSearchAnchor0_9 = tscc_proc_3_input_2_MaybeSearchAnchor0_9;
    MR_Word IntervalInfo_10 = tscc_proc_3_input_3_IntervalInfo_10;
    MR_Word StackOptInfo_11 = tscc_proc_3_input_4_StackOptInfo_11;
    MR_Word IntervalId_12 = tscc_proc_3_input_5_IntervalId_12;
    MR_Word STATE_VARIABLE_AllPaths_0_32 = tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
    MR_Word STATE_VARIABLE_AllPaths_33;
    MR_bool succeeded;
    MR_Word IntervalVars_14;
    MR_Word RelevantIntervalVars_15;
    MR_Word Paths0_16;
    MR_Word AfterModelNon0_17;
    MR_Word RelevantAfter_18;
    MR_Word Paths1_19;
    MR_Word Start_20;
    MR_Word Paths2_30;
    MR_Word AfterModelNon_31;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_10, (MR_Integer) 14))));
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_AllPaths_40_40;
    MR_Box conv9_IntervalVars_14;
    MR_Box conv11_Start_20;
    MR_Word TypeCtorInfo_108_108;
    MR_Word StartInfo_26;
    MR_Word AnchorFollowVars_27;
    MR_Word NeededVars_29;
    MR_Word Var_37;
    MR_Box conv12_StartInfo_26;
    MR_Word Var_39;
    MR_Word next_value_of_tscc_proc_1_input_1_RelevantVars_8;
    MR_Word next_value_of_tscc_proc_1_input_2_IntervalId_9;
    MR_Word next_value_of_tscc_proc_1_input_3_MaybeSearchAnchor0_10;
    MR_Word next_value_of_tscc_proc_1_input_4_IntervalInfo_11;
    MR_Word next_value_of_tscc_proc_1_input_5_StackOptInfo_12;
    MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28;

    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), Var_34, ((MR_Box) (IntervalId_12)), &conv9_IntervalVars_14);
    IntervalVars_14 = ((MR_Word) (conv9_IntervalVars_14));
    RelevantIntervalVars_15 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RelevantVars_8, IntervalVars_14);
    Paths0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 0))));
    AfterModelNon0_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 1))) & (MR_Integer) 1);
    RelevantAfter_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 2))));
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_4[2]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_6));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (IntervalId_12));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) (RelevantIntervalVars_15));
    }
    Paths1_19 = mercury__set__map_2_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), Var_35, Paths0_16);
    Var_36 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_10, (MR_Integer) 11))));
    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_36, ((MR_Box) (IntervalId_12)), &conv11_Start_20);
    Start_20 = ((MR_Word) (conv11_Start_20));
    switch (MR_tag((MR_Word) Start_20)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Start_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    if (succeeded)
    {
      Var_37 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_10, (MR_Integer) 9))));
      TypeCtorInfo_108_108 = (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), TypeCtorInfo_108_108, Var_37, ((MR_Box) (Start_20)), &conv12_StartInfo_26);
      if (succeeded)
      {
        StartInfo_26 = ((MR_Word) (conv12_StartInfo_26));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        AnchorFollowVars_27 = ((MR_Word) ((MR_hl_field(0, StartInfo_26, (MR_Integer) 0))));
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RelevantVars_8, AnchorFollowVars_27, &NeededVars_29);
        succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededVars_29);
      }
    }
    if (succeeded)
    {
      MR_Word Var_38;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_10[0]));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_7));
        MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_38, 3) = ((MR_Box) (Start_20));
      }
      Paths2_30 = mercury__set__map_2_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), Var_38, Paths1_19);
    }
    else
      Paths2_30 = Paths1_19;
    Var_39 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_10, (MR_Integer) 10))));
    succeeded = mercury__set__member_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Start_20)), Var_39);
    if (succeeded)
      AfterModelNon_31 = (MR_Integer) 1;
    else
      AfterModelNon_31 = AfterModelNon0_17;
    {
      STATE_VARIABLE_AllPaths_40_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_AllPaths_40_40, 0) = ((MR_Box) (Paths2_30));
      MR_hl_field(0, STATE_VARIABLE_AllPaths_40_40, 1) = (MR_Box) ((MR_Unsigned) (AfterModelNon_31));
      MR_hl_field(0, STATE_VARIABLE_AllPaths_40_40, 2) = ((MR_Box) (RelevantAfter_18));
    }
    // direct tailcall eliminated
    ;
    next_value_of_tscc_proc_1_input_1_RelevantVars_8 = RelevantVars_8;
    next_value_of_tscc_proc_1_input_2_IntervalId_9 = IntervalId_12;
    next_value_of_tscc_proc_1_input_3_MaybeSearchAnchor0_10 = MaybeSearchAnchor0_9;
    next_value_of_tscc_proc_1_input_4_IntervalInfo_11 = IntervalInfo_10;
    next_value_of_tscc_proc_1_input_5_StackOptInfo_12 = StackOptInfo_11;
    next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28 = STATE_VARIABLE_AllPaths_40_40;
    tscc_proc_1_input_1_RelevantVars_8 = next_value_of_tscc_proc_1_input_1_RelevantVars_8;
    tscc_proc_1_input_2_IntervalId_9 = next_value_of_tscc_proc_1_input_2_IntervalId_9;
    tscc_proc_1_input_3_MaybeSearchAnchor0_10 = next_value_of_tscc_proc_1_input_3_MaybeSearchAnchor0_10;
    tscc_proc_1_input_4_IntervalInfo_11 = next_value_of_tscc_proc_1_input_4_IntervalInfo_11;
    tscc_proc_1_input_5_StackOptInfo_12 = next_value_of_tscc_proc_1_input_5_StackOptInfo_12;
    tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28;
    goto top_of_proc_1;
    tscc_output_1_STATE_VARIABLE_AllPaths_29 = STATE_VARIABLE_AllPaths_33;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_AllPaths_29 = tscc_output_1_STATE_VARIABLE_AllPaths_29;
  return;
}

static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0(
  MR_Word tscc_proc_2_input_1_End_9,
  MR_Word tscc_proc_2_input_2_RelevantVars_10,
  MR_Word tscc_proc_2_input_3_MaybeSearchAnchor0_11,
  MR_Word tscc_proc_2_input_4_IntervalInfo_12,
  MR_Word tscc_proc_2_input_5_StackOptInfo_13,
  MR_Word tscc_proc_2_input_6_SuccessorIds_14,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_AllPaths_29)
{
  MR_Word tscc_proc_1_input_1_RelevantVars_8;
  MR_Word tscc_proc_1_input_2_IntervalId_9;
  MR_Word tscc_proc_1_input_3_MaybeSearchAnchor0_10;
  MR_Word tscc_proc_1_input_4_IntervalInfo_11;
  MR_Word tscc_proc_1_input_5_StackOptInfo_12;
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28;
  MR_Word tscc_proc_3_input_1_RelevantVars_8;
  MR_Word tscc_proc_3_input_2_MaybeSearchAnchor0_9;
  MR_Word tscc_proc_3_input_3_IntervalInfo_10;
  MR_Word tscc_proc_3_input_4_StackOptInfo_11;
  MR_Word tscc_proc_3_input_5_IntervalId_12;
  MR_Word tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
  MR_Word tscc_output_1_STATE_VARIABLE_AllPaths_29;

  // The code for TSCC PROC 2: pred ll_backend.stack_opt.find_all_branches_from/8-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ll_backend.stack_opt.find_all_branches/7-0
  ;
  // proc 2 in TSCC: pred ll_backend.stack_opt.find_all_branches_from/8-0
  ;
  // proc 3 in TSCC: pred ll_backend.stack_opt.apply_interval_find_all_branches/7-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word RelevantVars_8 = tscc_proc_1_input_1_RelevantVars_8;
    MR_Word IntervalId_9 = tscc_proc_1_input_2_IntervalId_9;
    MR_Word MaybeSearchAnchor0_10 = tscc_proc_1_input_3_MaybeSearchAnchor0_10;
    MR_Word IntervalInfo_11 = tscc_proc_1_input_4_IntervalInfo_11;
    MR_Word StackOptInfo_12 = tscc_proc_1_input_5_StackOptInfo_12;
    MR_Word STATE_VARIABLE_AllPaths_0_28 = tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28;
    MR_Word STATE_VARIABLE_AllPaths_29;
    MR_bool succeeded;
    MR_Word End_14;
    MR_Word SuccessorIds_15;
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_11, (MR_Integer) 12))));
    MR_Word Var_31;
    MR_Box conv0_End_14;
    MR_Box conv1_SuccessorIds_15;

    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_30, ((MR_Box) (IntervalId_9)), &conv0_End_14);
    End_14 = ((MR_Word) (conv0_End_14));
    Var_31 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_11, (MR_Integer) 13))));
    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[3]), Var_31, ((MR_Box) (IntervalId_9)), &conv1_SuccessorIds_15);
    SuccessorIds_15 = ((MR_Word) (conv1_SuccessorIds_15));
    if ((SuccessorIds_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_32;
      MR_Word Var_35;

      Var_35 = ll_backend__stack_opt__may_have_no_successor_1_f_0(End_14);
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_32, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[2]));
        MR_hl_field(0, Var_32, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_1));
        MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_32, 3) = ((MR_Box) (Var_35));
        MR_hl_field(0, Var_32, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected no successor");
      STATE_VARIABLE_AllPaths_29 = STATE_VARIABLE_AllPaths_0_28;
    }
    else
    {
      MR_Word MoreSuccessorIds_17 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_15, (MR_Integer) 1))));
      MR_Word SearchAnchor0_20;

      if ((MoreSuccessorIds_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_37;
        MR_Word Var_40;

        Var_40 = ll_backend__stack_opt__may_have_one_successor_1_f_0(End_14);
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[2]));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_2));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_37, 3) = ((MR_Box) (Var_40));
          MR_hl_field(0, Var_37, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected one successor");
      }
      else
      {
        MR_Word Var_42;
        MR_Word Var_45;

        Var_45 = ll_backend__stack_opt__may_have_more_successors_1_f_0(End_14);
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[2]));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_3));
          MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_42, 3) = ((MR_Box) (Var_45));
          MR_hl_field(0, Var_42, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected more successors");
      }
      succeeded = (MaybeSearchAnchor0_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SearchAnchor0_20 = ((MR_Word) ((MR_hl_field(1, MaybeSearchAnchor0_10, (MR_Integer) 0))));
        succeeded = backend_libs__interval____Unify____anchor_0_0(End_14, SearchAnchor0_20);
      }
      if (succeeded)
      {
        MR_Word Var_48;
        MR_Word Var_82;
        MR_Word Var_83;

        Var_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0))));
        Var_83 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1))) & (MR_Integer) 1);
        {
          STATE_VARIABLE_AllPaths_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 0) = ((MR_Box) (Var_82));
          MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 1) = (MR_Box) ((MR_Unsigned) (Var_83));
          MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 2) = ((MR_Box) (Var_48));
        }
      }
      else
      {
        MR_Word RelevantAfter_27;
        MR_Word TypeCtorInfo_114_114;
        MR_Word TypeCtorInfo_115_115;
        MR_Word TypeCtorInfo_116_116;
        MR_Word EndGoalId_22;
        MR_Word BranchEndInfo_23;
        MR_Word OnStackAfterBranch_24;
        MR_Word AccessedAfterBranch_25;
        MR_Word NeededAfterBranch_26;
        MR_Word Var_49;
        MR_Box conv2_BranchEndInfo_23;

        succeeded = ((((MR_tag((MR_Word) End_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, End_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          EndGoalId_22 = ((MR_Word) ((MR_hl_field(3, End_14, (MR_Integer) 2))));
          Var_49 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_11, (MR_Integer) 4))));
          TypeCtorInfo_114_114 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
          TypeCtorInfo_115_115 = (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0);
          mercury__map__lookup_3_p_0(TypeCtorInfo_114_114, TypeCtorInfo_115_115, Var_49, ((MR_Box) (EndGoalId_22)), &conv2_BranchEndInfo_23);
          BranchEndInfo_23 = ((MR_Word) (conv2_BranchEndInfo_23));
          OnStackAfterBranch_24 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_23, (MR_Integer) 0))));
          AccessedAfterBranch_25 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_23, (MR_Integer) 1))));
          TypeCtorInfo_116_116 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          NeededAfterBranch_26 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_116_116, OnStackAfterBranch_24, AccessedAfterBranch_25);
          RelevantAfter_27 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_116_116, RelevantVars_8, NeededAfterBranch_26);
          succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(TypeCtorInfo_116_116, RelevantAfter_27);
        }
        if (succeeded)
        {
          MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0))));
          MR_Word Var_105 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1))) & (MR_Integer) 1);

          {
            STATE_VARIABLE_AllPaths_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 0) = ((MR_Box) (Var_104));
            MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 1) = (MR_Box) ((MR_Unsigned) (Var_105));
            MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 2) = ((MR_Box) (RelevantAfter_27));
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_End_9 = End_14;
          MR_Word next_value_of_tscc_proc_2_input_2_RelevantVars_10 = RelevantVars_8;
          MR_Word next_value_of_tscc_proc_2_input_3_MaybeSearchAnchor0_11 = MaybeSearchAnchor0_10;
          MR_Word next_value_of_tscc_proc_2_input_4_IntervalInfo_12 = IntervalInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_5_StackOptInfo_13 = StackOptInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_6_SuccessorIds_14 = SuccessorIds_15;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36 = STATE_VARIABLE_AllPaths_0_28;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_End_9 = next_value_of_tscc_proc_2_input_1_End_9;
          tscc_proc_2_input_2_RelevantVars_10 = next_value_of_tscc_proc_2_input_2_RelevantVars_10;
          tscc_proc_2_input_3_MaybeSearchAnchor0_11 = next_value_of_tscc_proc_2_input_3_MaybeSearchAnchor0_11;
          tscc_proc_2_input_4_IntervalInfo_12 = next_value_of_tscc_proc_2_input_4_IntervalInfo_12;
          tscc_proc_2_input_5_StackOptInfo_13 = next_value_of_tscc_proc_2_input_5_StackOptInfo_13;
          tscc_proc_2_input_6_SuccessorIds_14 = next_value_of_tscc_proc_2_input_6_SuccessorIds_14;
          tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36;
          goto top_of_proc_2;
        }
      }
    }
    tscc_output_1_STATE_VARIABLE_AllPaths_29 = STATE_VARIABLE_AllPaths_29;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word End_9 = tscc_proc_2_input_1_End_9;
    MR_Word RelevantVars_10 = tscc_proc_2_input_2_RelevantVars_10;
    MR_Word MaybeSearchAnchor0_11 = tscc_proc_2_input_3_MaybeSearchAnchor0_11;
    MR_Word IntervalInfo_12 = tscc_proc_2_input_4_IntervalInfo_12;
    MR_Word StackOptInfo_13 = tscc_proc_2_input_5_StackOptInfo_13;
    MR_Word SuccessorIds_14 = tscc_proc_2_input_6_SuccessorIds_14;
    MR_Word STATE_VARIABLE_AllPaths_0_36 = tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36;
    MR_Word STATE_VARIABLE_AllPaths_37;
    MR_bool succeeded;
    MR_Word AnchorRequiresClose_16;
    MR_Word StackOptParams_19;
    MR_Word FullPath_20;
    MR_Word STATE_VARIABLE_AllPaths_39_39;
    MR_Word EndGoalId_21;
    MR_Word Var_40;

    AnchorRequiresClose_16 = ll_backend__stack_opt__anchor_requires_close_2_f_0(IntervalInfo_12, End_9);
    switch (AnchorRequiresClose_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_AllPaths_39_39 = STATE_VARIABLE_AllPaths_0_36;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Paths0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 0))));
          MR_Word Paths1_18;
          MR_Word Var_83;
          MR_Word Var_84;

          Paths1_18 = mercury__set__map_2_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[4]), Paths0_17);
          Var_83 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 2))));
          {
            STATE_VARIABLE_AllPaths_39_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_AllPaths_39_39, 0) = ((MR_Box) (Paths1_18));
            MR_hl_field(0, STATE_VARIABLE_AllPaths_39_39, 1) = (MR_Box) ((MR_Unsigned) (Var_83));
            MR_hl_field(0, STATE_VARIABLE_AllPaths_39_39, 2) = ((MR_Box) (Var_84));
          }
        }
        break;
    }
    StackOptParams_19 = ((MR_Word) ((MR_hl_field(0, StackOptInfo_13, (MR_Integer) 0))));
    FullPath_20 = ((((MR_Unsigned) ((MR_hl_field(0, StackOptParams_19, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    succeeded = (FullPath_20 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) End_9)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_40 = ((MR_Unsigned) ((MR_hl_field(1, End_9, (MR_Integer) 0))) & (MR_Integer) 7);
        EndGoalId_21 = ((MR_Word) ((MR_hl_field(1, End_9, (MR_Integer) 1))));
        succeeded = (Var_40 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word MaybeSearchAnchor1_22;
      MR_Word BranchEndInfo_23;
      MR_Word ContinueId_24;
      MR_Word Var_41;
      MR_Word STATE_VARIABLE_AllPaths_43_43;
      MR_Word Var_44;
      MR_Box conv4_BranchEndInfo_23;
      MR_Word next_value_of_tscc_proc_3_input_1_RelevantVars_8;
      MR_Word next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
      MR_Word next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
      MR_Word next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
      MR_Word next_value_of_tscc_proc_3_input_5_IntervalId_12;
      MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;

      {
        Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_41, 1) = (MR_Box) ((MR_Unsigned) (Var_40));
        MR_hl_field(3, Var_41, 2) = ((MR_Box) (EndGoalId_21));
      }
      {
        MaybeSearchAnchor1_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeSearchAnchor1_22, 0) = ((MR_Box) (Var_41));
      }
      ll_backend__stack_opt__one_after_another_7_p_0(RelevantVars_10, MaybeSearchAnchor1_22, IntervalInfo_12, StackOptInfo_13, SuccessorIds_14, STATE_VARIABLE_AllPaths_39_39, &STATE_VARIABLE_AllPaths_43_43);
      Var_44 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_12, (MR_Integer) 4))));
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0), Var_44, ((MR_Box) (EndGoalId_21)), &conv4_BranchEndInfo_23);
      BranchEndInfo_23 = ((MR_Word) (conv4_BranchEndInfo_23));
      ContinueId_24 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_23, (MR_Integer) 2))));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_3_input_1_RelevantVars_8 = RelevantVars_10;
      next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9 = MaybeSearchAnchor0_11;
      next_value_of_tscc_proc_3_input_3_IntervalInfo_10 = IntervalInfo_12;
      next_value_of_tscc_proc_3_input_4_StackOptInfo_11 = StackOptInfo_13;
      next_value_of_tscc_proc_3_input_5_IntervalId_12 = ContinueId_24;
      next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = STATE_VARIABLE_AllPaths_43_43;
      tscc_proc_3_input_1_RelevantVars_8 = next_value_of_tscc_proc_3_input_1_RelevantVars_8;
      tscc_proc_3_input_2_MaybeSearchAnchor0_9 = next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
      tscc_proc_3_input_3_IntervalInfo_10 = next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
      tscc_proc_3_input_4_StackOptInfo_11 = next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
      tscc_proc_3_input_5_IntervalId_12 = next_value_of_tscc_proc_3_input_5_IntervalId_12;
      tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
      goto top_of_proc_3;
    }
    else
    {
      MR_Word EndGoalId_79;
      MR_Word Var_46;

      succeeded = (FullPath_20 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) End_9)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_46 = ((MR_Unsigned) ((MR_hl_field(1, End_9, (MR_Integer) 0))) & (MR_Integer) 7);
          EndGoalId_79 = ((MR_Word) ((MR_hl_field(1, End_9, (MR_Integer) 1))));
          succeeded = (Var_46 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        MR_Word ElseStartId_27;
        MR_Word CondStartId_28;
        MR_Word MaybeSearchAnchorCond_29;
        MR_Word MaybeSearchAnchorEnd_30;
        MR_Word CondEndMap_31;
        MR_Word Var_51;
        MR_Word STATE_VARIABLE_AllPaths_52_52;
        MR_Word Var_53;
        MR_Word STATE_VARIABLE_AllPaths_56_56;
        MR_Word Var_59;
        MR_Word BranchEndInfo_70;
        MR_Word ContinueId_71;
        MR_Word SuccessorId_184;
        MR_Word MoreSuccessorIds_185;
        MR_Word STATE_VARIABLE_AllPaths_24_188;
        MR_Word SuccessorId_199;
        MR_Word ElseStartIdPrime_25;
        MR_Word CondStartIdPrime_26;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Box conv5_SuccessorId_184;
        MR_Box conv6_BranchEndInfo_70;
        MR_Word next_value_of_tscc_proc_3_input_1_RelevantVars_8;
        MR_Word next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
        MR_Word next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
        MR_Word next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
        MR_Word next_value_of_tscc_proc_3_input_5_IntervalId_12;
        MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;

        succeeded = (SuccessorIds_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ElseStartIdPrime_25 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_14, (MR_Integer) 0))));
          Var_47 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_14, (MR_Integer) 1))));
          succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CondStartIdPrime_26 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
            Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));
            succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          ElseStartId_27 = ElseStartIdPrime_25;
          CondStartId_28 = CondStartIdPrime_26;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "ite not else, cond");
            return;
          }
        {
          Var_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_51, 0) = ((MR_Box) (EndGoalId_79));
        }
        {
          MaybeSearchAnchorCond_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeSearchAnchorCond_29, 0) = ((MR_Box) (Var_51));
        }
        ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(RelevantVars_10, MaybeSearchAnchorCond_29, IntervalInfo_12, StackOptInfo_13, CondStartId_28, STATE_VARIABLE_AllPaths_39_39, &STATE_VARIABLE_AllPaths_52_52);
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_53, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_53, 2) = ((MR_Box) (EndGoalId_79));
        }
        {
          MaybeSearchAnchorEnd_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeSearchAnchorEnd_30, 0) = ((MR_Box) (Var_53));
        }
        CondEndMap_31 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_12, (MR_Integer) 5))));
        mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), CondEndMap_31, ((MR_Box) (EndGoalId_79)), &conv5_SuccessorId_184);
        SuccessorId_184 = ((MR_Word) (conv5_SuccessorId_184));
        {
          MoreSuccessorIds_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MoreSuccessorIds_185, 0) = ((MR_Box) (ElseStartId_27));
          MR_hl_field(1, MoreSuccessorIds_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(RelevantVars_10, MaybeSearchAnchorEnd_30, IntervalInfo_12, StackOptInfo_13, SuccessorId_184, STATE_VARIABLE_AllPaths_52_52, &STATE_VARIABLE_AllPaths_24_188);
        SuccessorId_199 = ((MR_Word) ((MR_hl_field(1, MoreSuccessorIds_185, (MR_Integer) 0))));
        ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(RelevantVars_10, MaybeSearchAnchorEnd_30, IntervalInfo_12, StackOptInfo_13, SuccessorId_199, STATE_VARIABLE_AllPaths_24_188, &STATE_VARIABLE_AllPaths_56_56);
        Var_59 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_12, (MR_Integer) 4))));
        mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0), Var_59, ((MR_Box) (EndGoalId_79)), &conv6_BranchEndInfo_70);
        BranchEndInfo_70 = ((MR_Word) (conv6_BranchEndInfo_70));
        ContinueId_71 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_70, (MR_Integer) 2))));
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_3_input_1_RelevantVars_8 = RelevantVars_10;
        next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9 = MaybeSearchAnchor0_11;
        next_value_of_tscc_proc_3_input_3_IntervalInfo_10 = IntervalInfo_12;
        next_value_of_tscc_proc_3_input_4_StackOptInfo_11 = StackOptInfo_13;
        next_value_of_tscc_proc_3_input_5_IntervalId_12 = ContinueId_71;
        next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = STATE_VARIABLE_AllPaths_56_56;
        tscc_proc_3_input_1_RelevantVars_8 = next_value_of_tscc_proc_3_input_1_RelevantVars_8;
        tscc_proc_3_input_2_MaybeSearchAnchor0_9 = next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
        tscc_proc_3_input_3_IntervalInfo_10 = next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
        tscc_proc_3_input_4_StackOptInfo_11 = next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
        tscc_proc_3_input_5_IntervalId_12 = next_value_of_tscc_proc_3_input_5_IntervalId_12;
        tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
        goto top_of_proc_3;
      }
      else
      {
        MR_Word BranchType_33;
        MR_Word EndGoalId_75;

        succeeded = ((MR_tag((MR_Word) End_9)) == (MR_Integer) 1);
        if (succeeded)
        {
          BranchType_33 = ((MR_Unsigned) ((MR_hl_field(1, End_9, (MR_Integer) 0))) & (MR_Integer) 7);
          EndGoalId_75 = ((MR_Word) ((MR_hl_field(1, End_9, (MR_Integer) 1))));
          {
            MR_Word AllPathsList_34;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word STATE_VARIABLE_AllPaths_63_63;
            MR_Word Var_64;
            MR_Word MaybeSearchAnchor1_72;
            MR_Word BranchEndInfo_73;
            MR_Word ContinueId_74;
            MR_Box conv8_BranchEndInfo_73;
            MR_Word next_value_of_tscc_proc_3_input_1_RelevantVars_8;
            MR_Word next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
            MR_Word next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
            MR_Word next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
            MR_Word next_value_of_tscc_proc_3_input_5_IntervalId_12;
            MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;

            {
              Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_61, 1) = (MR_Box) ((MR_Unsigned) (BranchType_33));
              MR_hl_field(3, Var_61, 2) = ((MR_Box) (EndGoalId_75));
            }
            {
              MaybeSearchAnchor1_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeSearchAnchor1_72, 0) = ((MR_Box) (Var_61));
            }
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_62, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
              MR_hl_field(0, Var_62, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_8_p_0_5));
              MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 5));
              MR_hl_field(0, Var_62, 3) = ((MR_Box) (RelevantVars_10));
              MR_hl_field(0, Var_62, 4) = ((MR_Box) (MaybeSearchAnchor1_72));
              MR_hl_field(0, Var_62, 5) = ((MR_Box) (IntervalInfo_12));
              MR_hl_field(0, Var_62, 6) = ((MR_Box) (StackOptInfo_13));
              MR_hl_field(0, Var_62, 7) = ((MR_Box) (STATE_VARIABLE_AllPaths_39_39));
            }
            mercury__list__map_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0), Var_62, SuccessorIds_14, &AllPathsList_34);
            ll_backend__stack_opt__consolidate_after_join_2_p_0(AllPathsList_34, &STATE_VARIABLE_AllPaths_63_63);
            Var_64 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_12, (MR_Integer) 4))));
            mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0), Var_64, ((MR_Box) (EndGoalId_75)), &conv8_BranchEndInfo_73);
            BranchEndInfo_73 = ((MR_Word) (conv8_BranchEndInfo_73));
            ContinueId_74 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_73, (MR_Integer) 2))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_RelevantVars_8 = RelevantVars_10;
            next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9 = MaybeSearchAnchor0_11;
            next_value_of_tscc_proc_3_input_3_IntervalInfo_10 = IntervalInfo_12;
            next_value_of_tscc_proc_3_input_4_StackOptInfo_11 = StackOptInfo_13;
            next_value_of_tscc_proc_3_input_5_IntervalId_12 = ContinueId_74;
            next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = STATE_VARIABLE_AllPaths_63_63;
            tscc_proc_3_input_1_RelevantVars_8 = next_value_of_tscc_proc_3_input_1_RelevantVars_8;
            tscc_proc_3_input_2_MaybeSearchAnchor0_9 = next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
            tscc_proc_3_input_3_IntervalInfo_10 = next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
            tscc_proc_3_input_4_StackOptInfo_11 = next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
            tscc_proc_3_input_5_IntervalId_12 = next_value_of_tscc_proc_3_input_5_IntervalId_12;
            tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
            goto top_of_proc_3;
          }
        }
        else
        {
          MR_Word SuccessorId_35;
          MR_Word Var_66;

          succeeded = (SuccessorIds_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SuccessorId_35 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_14, (MR_Integer) 0))));
            Var_66 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_14, (MR_Integer) 1))));
            succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_3_input_1_RelevantVars_8 = RelevantVars_10;
            MR_Word next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9 = MaybeSearchAnchor0_11;
            MR_Word next_value_of_tscc_proc_3_input_3_IntervalInfo_10 = IntervalInfo_12;
            MR_Word next_value_of_tscc_proc_3_input_4_StackOptInfo_11 = StackOptInfo_13;
            MR_Word next_value_of_tscc_proc_3_input_5_IntervalId_12 = SuccessorId_35;
            MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = STATE_VARIABLE_AllPaths_39_39;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_RelevantVars_8 = next_value_of_tscc_proc_3_input_1_RelevantVars_8;
            tscc_proc_3_input_2_MaybeSearchAnchor0_9 = next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
            tscc_proc_3_input_3_IntervalInfo_10 = next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
            tscc_proc_3_input_4_StackOptInfo_11 = next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
            tscc_proc_3_input_5_IntervalId_12 = next_value_of_tscc_proc_3_input_5_IntervalId_12;
            tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
            goto top_of_proc_3;
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "more successor ids");
              return;
            }
        }
      }
    }
    tscc_output_1_STATE_VARIABLE_AllPaths_29 = STATE_VARIABLE_AllPaths_37;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word RelevantVars_8 = tscc_proc_3_input_1_RelevantVars_8;
    MR_Word MaybeSearchAnchor0_9 = tscc_proc_3_input_2_MaybeSearchAnchor0_9;
    MR_Word IntervalInfo_10 = tscc_proc_3_input_3_IntervalInfo_10;
    MR_Word StackOptInfo_11 = tscc_proc_3_input_4_StackOptInfo_11;
    MR_Word IntervalId_12 = tscc_proc_3_input_5_IntervalId_12;
    MR_Word STATE_VARIABLE_AllPaths_0_32 = tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
    MR_Word STATE_VARIABLE_AllPaths_33;
    MR_bool succeeded;
    MR_Word IntervalVars_14;
    MR_Word RelevantIntervalVars_15;
    MR_Word Paths0_16;
    MR_Word AfterModelNon0_17;
    MR_Word RelevantAfter_18;
    MR_Word Paths1_19;
    MR_Word Start_20;
    MR_Word Paths2_30;
    MR_Word AfterModelNon_31;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_10, (MR_Integer) 14))));
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_AllPaths_40_40;
    MR_Box conv9_IntervalVars_14;
    MR_Box conv11_Start_20;
    MR_Word TypeCtorInfo_108_108;
    MR_Word StartInfo_26;
    MR_Word AnchorFollowVars_27;
    MR_Word NeededVars_29;
    MR_Word Var_37;
    MR_Box conv12_StartInfo_26;
    MR_Word Var_39;
    MR_Word next_value_of_tscc_proc_1_input_1_RelevantVars_8;
    MR_Word next_value_of_tscc_proc_1_input_2_IntervalId_9;
    MR_Word next_value_of_tscc_proc_1_input_3_MaybeSearchAnchor0_10;
    MR_Word next_value_of_tscc_proc_1_input_4_IntervalInfo_11;
    MR_Word next_value_of_tscc_proc_1_input_5_StackOptInfo_12;
    MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28;

    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), Var_34, ((MR_Box) (IntervalId_12)), &conv9_IntervalVars_14);
    IntervalVars_14 = ((MR_Word) (conv9_IntervalVars_14));
    RelevantIntervalVars_15 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RelevantVars_8, IntervalVars_14);
    Paths0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 0))));
    AfterModelNon0_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 1))) & (MR_Integer) 1);
    RelevantAfter_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 2))));
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_4[2]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_6));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (IntervalId_12));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) (RelevantIntervalVars_15));
    }
    Paths1_19 = mercury__set__map_2_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), Var_35, Paths0_16);
    Var_36 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_10, (MR_Integer) 11))));
    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_36, ((MR_Box) (IntervalId_12)), &conv11_Start_20);
    Start_20 = ((MR_Word) (conv11_Start_20));
    switch (MR_tag((MR_Word) Start_20)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Start_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    if (succeeded)
    {
      Var_37 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_10, (MR_Integer) 9))));
      TypeCtorInfo_108_108 = (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), TypeCtorInfo_108_108, Var_37, ((MR_Box) (Start_20)), &conv12_StartInfo_26);
      if (succeeded)
      {
        StartInfo_26 = ((MR_Word) (conv12_StartInfo_26));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        AnchorFollowVars_27 = ((MR_Word) ((MR_hl_field(0, StartInfo_26, (MR_Integer) 0))));
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RelevantVars_8, AnchorFollowVars_27, &NeededVars_29);
        succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededVars_29);
      }
    }
    if (succeeded)
    {
      MR_Word Var_38;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_10[0]));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_7));
        MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_38, 3) = ((MR_Box) (Start_20));
      }
      Paths2_30 = mercury__set__map_2_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), Var_38, Paths1_19);
    }
    else
      Paths2_30 = Paths1_19;
    Var_39 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_10, (MR_Integer) 10))));
    succeeded = mercury__set__member_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Start_20)), Var_39);
    if (succeeded)
      AfterModelNon_31 = (MR_Integer) 1;
    else
      AfterModelNon_31 = AfterModelNon0_17;
    {
      STATE_VARIABLE_AllPaths_40_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_AllPaths_40_40, 0) = ((MR_Box) (Paths2_30));
      MR_hl_field(0, STATE_VARIABLE_AllPaths_40_40, 1) = (MR_Box) ((MR_Unsigned) (AfterModelNon_31));
      MR_hl_field(0, STATE_VARIABLE_AllPaths_40_40, 2) = ((MR_Box) (RelevantAfter_18));
    }
    // direct tailcall eliminated
    ;
    next_value_of_tscc_proc_1_input_1_RelevantVars_8 = RelevantVars_8;
    next_value_of_tscc_proc_1_input_2_IntervalId_9 = IntervalId_12;
    next_value_of_tscc_proc_1_input_3_MaybeSearchAnchor0_10 = MaybeSearchAnchor0_9;
    next_value_of_tscc_proc_1_input_4_IntervalInfo_11 = IntervalInfo_10;
    next_value_of_tscc_proc_1_input_5_StackOptInfo_12 = StackOptInfo_11;
    next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28 = STATE_VARIABLE_AllPaths_40_40;
    tscc_proc_1_input_1_RelevantVars_8 = next_value_of_tscc_proc_1_input_1_RelevantVars_8;
    tscc_proc_1_input_2_IntervalId_9 = next_value_of_tscc_proc_1_input_2_IntervalId_9;
    tscc_proc_1_input_3_MaybeSearchAnchor0_10 = next_value_of_tscc_proc_1_input_3_MaybeSearchAnchor0_10;
    tscc_proc_1_input_4_IntervalInfo_11 = next_value_of_tscc_proc_1_input_4_IntervalInfo_11;
    tscc_proc_1_input_5_StackOptInfo_12 = next_value_of_tscc_proc_1_input_5_StackOptInfo_12;
    tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28;
    goto top_of_proc_1;
    tscc_output_1_STATE_VARIABLE_AllPaths_29 = STATE_VARIABLE_AllPaths_33;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_AllPaths_29 = tscc_output_1_STATE_VARIABLE_AllPaths_29;
  return;
}

static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(
  MR_Word tscc_proc_3_input_1_RelevantVars_8,
  MR_Word tscc_proc_3_input_2_MaybeSearchAnchor0_9,
  MR_Word tscc_proc_3_input_3_IntervalInfo_10,
  MR_Word tscc_proc_3_input_4_StackOptInfo_11,
  MR_Word tscc_proc_3_input_5_IntervalId_12,
  MR_Word tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_AllPaths_29)
{
  MR_Word tscc_proc_1_input_1_RelevantVars_8;
  MR_Word tscc_proc_1_input_2_IntervalId_9;
  MR_Word tscc_proc_1_input_3_MaybeSearchAnchor0_10;
  MR_Word tscc_proc_1_input_4_IntervalInfo_11;
  MR_Word tscc_proc_1_input_5_StackOptInfo_12;
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28;
  MR_Word tscc_proc_2_input_1_End_9;
  MR_Word tscc_proc_2_input_2_RelevantVars_10;
  MR_Word tscc_proc_2_input_3_MaybeSearchAnchor0_11;
  MR_Word tscc_proc_2_input_4_IntervalInfo_12;
  MR_Word tscc_proc_2_input_5_StackOptInfo_13;
  MR_Word tscc_proc_2_input_6_SuccessorIds_14;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36;
  MR_Word tscc_output_1_STATE_VARIABLE_AllPaths_29;

  // The code for TSCC PROC 3: pred ll_backend.stack_opt.apply_interval_find_all_branches/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ll_backend.stack_opt.find_all_branches/7-0
  ;
  // proc 2 in TSCC: pred ll_backend.stack_opt.find_all_branches_from/8-0
  ;
  // proc 3 in TSCC: pred ll_backend.stack_opt.apply_interval_find_all_branches/7-0
  ;
  ;
  goto top_of_proc_3;
top_of_proc_1:;
  {
    MR_Word RelevantVars_8 = tscc_proc_1_input_1_RelevantVars_8;
    MR_Word IntervalId_9 = tscc_proc_1_input_2_IntervalId_9;
    MR_Word MaybeSearchAnchor0_10 = tscc_proc_1_input_3_MaybeSearchAnchor0_10;
    MR_Word IntervalInfo_11 = tscc_proc_1_input_4_IntervalInfo_11;
    MR_Word StackOptInfo_12 = tscc_proc_1_input_5_StackOptInfo_12;
    MR_Word STATE_VARIABLE_AllPaths_0_28 = tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28;
    MR_Word STATE_VARIABLE_AllPaths_29;
    MR_bool succeeded;
    MR_Word End_14;
    MR_Word SuccessorIds_15;
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_11, (MR_Integer) 12))));
    MR_Word Var_31;
    MR_Box conv0_End_14;
    MR_Box conv1_SuccessorIds_15;

    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_30, ((MR_Box) (IntervalId_9)), &conv0_End_14);
    End_14 = ((MR_Word) (conv0_End_14));
    Var_31 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_11, (MR_Integer) 13))));
    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[3]), Var_31, ((MR_Box) (IntervalId_9)), &conv1_SuccessorIds_15);
    SuccessorIds_15 = ((MR_Word) (conv1_SuccessorIds_15));
    if ((SuccessorIds_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_32;
      MR_Word Var_35;

      Var_35 = ll_backend__stack_opt__may_have_no_successor_1_f_0(End_14);
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_32, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[2]));
        MR_hl_field(0, Var_32, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_1));
        MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_32, 3) = ((MR_Box) (Var_35));
        MR_hl_field(0, Var_32, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected no successor");
      STATE_VARIABLE_AllPaths_29 = STATE_VARIABLE_AllPaths_0_28;
    }
    else
    {
      MR_Word MoreSuccessorIds_17 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_15, (MR_Integer) 1))));
      MR_Word SearchAnchor0_20;

      if ((MoreSuccessorIds_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_37;
        MR_Word Var_40;

        Var_40 = ll_backend__stack_opt__may_have_one_successor_1_f_0(End_14);
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[2]));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_2));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_37, 3) = ((MR_Box) (Var_40));
          MR_hl_field(0, Var_37, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected one successor");
      }
      else
      {
        MR_Word Var_42;
        MR_Word Var_45;

        Var_45 = ll_backend__stack_opt__may_have_more_successors_1_f_0(End_14);
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[2]));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_3));
          MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_42, 3) = ((MR_Box) (Var_45));
          MR_hl_field(0, Var_42, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected more successors");
      }
      succeeded = (MaybeSearchAnchor0_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SearchAnchor0_20 = ((MR_Word) ((MR_hl_field(1, MaybeSearchAnchor0_10, (MR_Integer) 0))));
        succeeded = backend_libs__interval____Unify____anchor_0_0(End_14, SearchAnchor0_20);
      }
      if (succeeded)
      {
        MR_Word Var_48;
        MR_Word Var_82;
        MR_Word Var_83;

        Var_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0))));
        Var_83 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1))) & (MR_Integer) 1);
        {
          STATE_VARIABLE_AllPaths_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 0) = ((MR_Box) (Var_82));
          MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 1) = (MR_Box) ((MR_Unsigned) (Var_83));
          MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 2) = ((MR_Box) (Var_48));
        }
      }
      else
      {
        MR_Word RelevantAfter_27;
        MR_Word TypeCtorInfo_114_114;
        MR_Word TypeCtorInfo_115_115;
        MR_Word TypeCtorInfo_116_116;
        MR_Word EndGoalId_22;
        MR_Word BranchEndInfo_23;
        MR_Word OnStackAfterBranch_24;
        MR_Word AccessedAfterBranch_25;
        MR_Word NeededAfterBranch_26;
        MR_Word Var_49;
        MR_Box conv2_BranchEndInfo_23;

        succeeded = ((((MR_tag((MR_Word) End_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, End_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          EndGoalId_22 = ((MR_Word) ((MR_hl_field(3, End_14, (MR_Integer) 2))));
          Var_49 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_11, (MR_Integer) 4))));
          TypeCtorInfo_114_114 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
          TypeCtorInfo_115_115 = (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0);
          mercury__map__lookup_3_p_0(TypeCtorInfo_114_114, TypeCtorInfo_115_115, Var_49, ((MR_Box) (EndGoalId_22)), &conv2_BranchEndInfo_23);
          BranchEndInfo_23 = ((MR_Word) (conv2_BranchEndInfo_23));
          OnStackAfterBranch_24 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_23, (MR_Integer) 0))));
          AccessedAfterBranch_25 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_23, (MR_Integer) 1))));
          TypeCtorInfo_116_116 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          NeededAfterBranch_26 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_116_116, OnStackAfterBranch_24, AccessedAfterBranch_25);
          RelevantAfter_27 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_116_116, RelevantVars_8, NeededAfterBranch_26);
          succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(TypeCtorInfo_116_116, RelevantAfter_27);
        }
        if (succeeded)
        {
          MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0))));
          MR_Word Var_105 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1))) & (MR_Integer) 1);

          {
            STATE_VARIABLE_AllPaths_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 0) = ((MR_Box) (Var_104));
            MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 1) = (MR_Box) ((MR_Unsigned) (Var_105));
            MR_hl_field(0, STATE_VARIABLE_AllPaths_29, 2) = ((MR_Box) (RelevantAfter_27));
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_End_9 = End_14;
          MR_Word next_value_of_tscc_proc_2_input_2_RelevantVars_10 = RelevantVars_8;
          MR_Word next_value_of_tscc_proc_2_input_3_MaybeSearchAnchor0_11 = MaybeSearchAnchor0_10;
          MR_Word next_value_of_tscc_proc_2_input_4_IntervalInfo_12 = IntervalInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_5_StackOptInfo_13 = StackOptInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_6_SuccessorIds_14 = SuccessorIds_15;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36 = STATE_VARIABLE_AllPaths_0_28;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_End_9 = next_value_of_tscc_proc_2_input_1_End_9;
          tscc_proc_2_input_2_RelevantVars_10 = next_value_of_tscc_proc_2_input_2_RelevantVars_10;
          tscc_proc_2_input_3_MaybeSearchAnchor0_11 = next_value_of_tscc_proc_2_input_3_MaybeSearchAnchor0_11;
          tscc_proc_2_input_4_IntervalInfo_12 = next_value_of_tscc_proc_2_input_4_IntervalInfo_12;
          tscc_proc_2_input_5_StackOptInfo_13 = next_value_of_tscc_proc_2_input_5_StackOptInfo_13;
          tscc_proc_2_input_6_SuccessorIds_14 = next_value_of_tscc_proc_2_input_6_SuccessorIds_14;
          tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36;
          goto top_of_proc_2;
        }
      }
    }
    tscc_output_1_STATE_VARIABLE_AllPaths_29 = STATE_VARIABLE_AllPaths_29;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word End_9 = tscc_proc_2_input_1_End_9;
    MR_Word RelevantVars_10 = tscc_proc_2_input_2_RelevantVars_10;
    MR_Word MaybeSearchAnchor0_11 = tscc_proc_2_input_3_MaybeSearchAnchor0_11;
    MR_Word IntervalInfo_12 = tscc_proc_2_input_4_IntervalInfo_12;
    MR_Word StackOptInfo_13 = tscc_proc_2_input_5_StackOptInfo_13;
    MR_Word SuccessorIds_14 = tscc_proc_2_input_6_SuccessorIds_14;
    MR_Word STATE_VARIABLE_AllPaths_0_36 = tscc_proc_2_input_7_STATE_VARIABLE_AllPaths_0_36;
    MR_Word STATE_VARIABLE_AllPaths_37;
    MR_bool succeeded;
    MR_Word AnchorRequiresClose_16;
    MR_Word StackOptParams_19;
    MR_Word FullPath_20;
    MR_Word STATE_VARIABLE_AllPaths_39_39;
    MR_Word EndGoalId_21;
    MR_Word Var_40;

    AnchorRequiresClose_16 = ll_backend__stack_opt__anchor_requires_close_2_f_0(IntervalInfo_12, End_9);
    switch (AnchorRequiresClose_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_AllPaths_39_39 = STATE_VARIABLE_AllPaths_0_36;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Paths0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 0))));
          MR_Word Paths1_18;
          MR_Word Var_83;
          MR_Word Var_84;

          Paths1_18 = mercury__set__map_2_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[4]), Paths0_17);
          Var_83 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 2))));
          {
            STATE_VARIABLE_AllPaths_39_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_AllPaths_39_39, 0) = ((MR_Box) (Paths1_18));
            MR_hl_field(0, STATE_VARIABLE_AllPaths_39_39, 1) = (MR_Box) ((MR_Unsigned) (Var_83));
            MR_hl_field(0, STATE_VARIABLE_AllPaths_39_39, 2) = ((MR_Box) (Var_84));
          }
        }
        break;
    }
    StackOptParams_19 = ((MR_Word) ((MR_hl_field(0, StackOptInfo_13, (MR_Integer) 0))));
    FullPath_20 = ((((MR_Unsigned) ((MR_hl_field(0, StackOptParams_19, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    succeeded = (FullPath_20 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) End_9)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_40 = ((MR_Unsigned) ((MR_hl_field(1, End_9, (MR_Integer) 0))) & (MR_Integer) 7);
        EndGoalId_21 = ((MR_Word) ((MR_hl_field(1, End_9, (MR_Integer) 1))));
        succeeded = (Var_40 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word MaybeSearchAnchor1_22;
      MR_Word BranchEndInfo_23;
      MR_Word ContinueId_24;
      MR_Word Var_41;
      MR_Word STATE_VARIABLE_AllPaths_43_43;
      MR_Word Var_44;
      MR_Box conv4_BranchEndInfo_23;
      MR_Word next_value_of_tscc_proc_3_input_1_RelevantVars_8;
      MR_Word next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
      MR_Word next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
      MR_Word next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
      MR_Word next_value_of_tscc_proc_3_input_5_IntervalId_12;
      MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;

      {
        Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_41, 1) = (MR_Box) ((MR_Unsigned) (Var_40));
        MR_hl_field(3, Var_41, 2) = ((MR_Box) (EndGoalId_21));
      }
      {
        MaybeSearchAnchor1_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeSearchAnchor1_22, 0) = ((MR_Box) (Var_41));
      }
      ll_backend__stack_opt__one_after_another_7_p_0(RelevantVars_10, MaybeSearchAnchor1_22, IntervalInfo_12, StackOptInfo_13, SuccessorIds_14, STATE_VARIABLE_AllPaths_39_39, &STATE_VARIABLE_AllPaths_43_43);
      Var_44 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_12, (MR_Integer) 4))));
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0), Var_44, ((MR_Box) (EndGoalId_21)), &conv4_BranchEndInfo_23);
      BranchEndInfo_23 = ((MR_Word) (conv4_BranchEndInfo_23));
      ContinueId_24 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_23, (MR_Integer) 2))));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_3_input_1_RelevantVars_8 = RelevantVars_10;
      next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9 = MaybeSearchAnchor0_11;
      next_value_of_tscc_proc_3_input_3_IntervalInfo_10 = IntervalInfo_12;
      next_value_of_tscc_proc_3_input_4_StackOptInfo_11 = StackOptInfo_13;
      next_value_of_tscc_proc_3_input_5_IntervalId_12 = ContinueId_24;
      next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = STATE_VARIABLE_AllPaths_43_43;
      tscc_proc_3_input_1_RelevantVars_8 = next_value_of_tscc_proc_3_input_1_RelevantVars_8;
      tscc_proc_3_input_2_MaybeSearchAnchor0_9 = next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
      tscc_proc_3_input_3_IntervalInfo_10 = next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
      tscc_proc_3_input_4_StackOptInfo_11 = next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
      tscc_proc_3_input_5_IntervalId_12 = next_value_of_tscc_proc_3_input_5_IntervalId_12;
      tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
      goto top_of_proc_3;
    }
    else
    {
      MR_Word EndGoalId_79;
      MR_Word Var_46;

      succeeded = (FullPath_20 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) End_9)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_46 = ((MR_Unsigned) ((MR_hl_field(1, End_9, (MR_Integer) 0))) & (MR_Integer) 7);
          EndGoalId_79 = ((MR_Word) ((MR_hl_field(1, End_9, (MR_Integer) 1))));
          succeeded = (Var_46 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        MR_Word ElseStartId_27;
        MR_Word CondStartId_28;
        MR_Word MaybeSearchAnchorCond_29;
        MR_Word MaybeSearchAnchorEnd_30;
        MR_Word CondEndMap_31;
        MR_Word Var_51;
        MR_Word STATE_VARIABLE_AllPaths_52_52;
        MR_Word Var_53;
        MR_Word STATE_VARIABLE_AllPaths_56_56;
        MR_Word Var_59;
        MR_Word BranchEndInfo_70;
        MR_Word ContinueId_71;
        MR_Word SuccessorId_184;
        MR_Word MoreSuccessorIds_185;
        MR_Word STATE_VARIABLE_AllPaths_24_188;
        MR_Word SuccessorId_199;
        MR_Word ElseStartIdPrime_25;
        MR_Word CondStartIdPrime_26;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Box conv5_SuccessorId_184;
        MR_Box conv6_BranchEndInfo_70;
        MR_Word next_value_of_tscc_proc_3_input_1_RelevantVars_8;
        MR_Word next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
        MR_Word next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
        MR_Word next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
        MR_Word next_value_of_tscc_proc_3_input_5_IntervalId_12;
        MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;

        succeeded = (SuccessorIds_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ElseStartIdPrime_25 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_14, (MR_Integer) 0))));
          Var_47 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_14, (MR_Integer) 1))));
          succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CondStartIdPrime_26 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
            Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));
            succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          ElseStartId_27 = ElseStartIdPrime_25;
          CondStartId_28 = CondStartIdPrime_26;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "ite not else, cond");
            return;
          }
        {
          Var_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_51, 0) = ((MR_Box) (EndGoalId_79));
        }
        {
          MaybeSearchAnchorCond_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeSearchAnchorCond_29, 0) = ((MR_Box) (Var_51));
        }
        ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(RelevantVars_10, MaybeSearchAnchorCond_29, IntervalInfo_12, StackOptInfo_13, CondStartId_28, STATE_VARIABLE_AllPaths_39_39, &STATE_VARIABLE_AllPaths_52_52);
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_53, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_53, 2) = ((MR_Box) (EndGoalId_79));
        }
        {
          MaybeSearchAnchorEnd_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeSearchAnchorEnd_30, 0) = ((MR_Box) (Var_53));
        }
        CondEndMap_31 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_12, (MR_Integer) 5))));
        mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), CondEndMap_31, ((MR_Box) (EndGoalId_79)), &conv5_SuccessorId_184);
        SuccessorId_184 = ((MR_Word) (conv5_SuccessorId_184));
        {
          MoreSuccessorIds_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MoreSuccessorIds_185, 0) = ((MR_Box) (ElseStartId_27));
          MR_hl_field(1, MoreSuccessorIds_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(RelevantVars_10, MaybeSearchAnchorEnd_30, IntervalInfo_12, StackOptInfo_13, SuccessorId_184, STATE_VARIABLE_AllPaths_52_52, &STATE_VARIABLE_AllPaths_24_188);
        SuccessorId_199 = ((MR_Word) ((MR_hl_field(1, MoreSuccessorIds_185, (MR_Integer) 0))));
        ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(RelevantVars_10, MaybeSearchAnchorEnd_30, IntervalInfo_12, StackOptInfo_13, SuccessorId_199, STATE_VARIABLE_AllPaths_24_188, &STATE_VARIABLE_AllPaths_56_56);
        Var_59 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_12, (MR_Integer) 4))));
        mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0), Var_59, ((MR_Box) (EndGoalId_79)), &conv6_BranchEndInfo_70);
        BranchEndInfo_70 = ((MR_Word) (conv6_BranchEndInfo_70));
        ContinueId_71 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_70, (MR_Integer) 2))));
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_3_input_1_RelevantVars_8 = RelevantVars_10;
        next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9 = MaybeSearchAnchor0_11;
        next_value_of_tscc_proc_3_input_3_IntervalInfo_10 = IntervalInfo_12;
        next_value_of_tscc_proc_3_input_4_StackOptInfo_11 = StackOptInfo_13;
        next_value_of_tscc_proc_3_input_5_IntervalId_12 = ContinueId_71;
        next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = STATE_VARIABLE_AllPaths_56_56;
        tscc_proc_3_input_1_RelevantVars_8 = next_value_of_tscc_proc_3_input_1_RelevantVars_8;
        tscc_proc_3_input_2_MaybeSearchAnchor0_9 = next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
        tscc_proc_3_input_3_IntervalInfo_10 = next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
        tscc_proc_3_input_4_StackOptInfo_11 = next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
        tscc_proc_3_input_5_IntervalId_12 = next_value_of_tscc_proc_3_input_5_IntervalId_12;
        tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
        goto top_of_proc_3;
      }
      else
      {
        MR_Word BranchType_33;
        MR_Word EndGoalId_75;

        succeeded = ((MR_tag((MR_Word) End_9)) == (MR_Integer) 1);
        if (succeeded)
        {
          BranchType_33 = ((MR_Unsigned) ((MR_hl_field(1, End_9, (MR_Integer) 0))) & (MR_Integer) 7);
          EndGoalId_75 = ((MR_Word) ((MR_hl_field(1, End_9, (MR_Integer) 1))));
          {
            MR_Word AllPathsList_34;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word STATE_VARIABLE_AllPaths_63_63;
            MR_Word Var_64;
            MR_Word MaybeSearchAnchor1_72;
            MR_Word BranchEndInfo_73;
            MR_Word ContinueId_74;
            MR_Box conv8_BranchEndInfo_73;
            MR_Word next_value_of_tscc_proc_3_input_1_RelevantVars_8;
            MR_Word next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
            MR_Word next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
            MR_Word next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
            MR_Word next_value_of_tscc_proc_3_input_5_IntervalId_12;
            MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;

            {
              Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_61, 1) = (MR_Box) ((MR_Unsigned) (BranchType_33));
              MR_hl_field(3, Var_61, 2) = ((MR_Box) (EndGoalId_75));
            }
            {
              MaybeSearchAnchor1_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeSearchAnchor1_72, 0) = ((MR_Box) (Var_61));
            }
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_62, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
              MR_hl_field(0, Var_62, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_8_p_0_5));
              MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 5));
              MR_hl_field(0, Var_62, 3) = ((MR_Box) (RelevantVars_10));
              MR_hl_field(0, Var_62, 4) = ((MR_Box) (MaybeSearchAnchor1_72));
              MR_hl_field(0, Var_62, 5) = ((MR_Box) (IntervalInfo_12));
              MR_hl_field(0, Var_62, 6) = ((MR_Box) (StackOptInfo_13));
              MR_hl_field(0, Var_62, 7) = ((MR_Box) (STATE_VARIABLE_AllPaths_39_39));
            }
            mercury__list__map_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0), Var_62, SuccessorIds_14, &AllPathsList_34);
            ll_backend__stack_opt__consolidate_after_join_2_p_0(AllPathsList_34, &STATE_VARIABLE_AllPaths_63_63);
            Var_64 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_12, (MR_Integer) 4))));
            mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0), Var_64, ((MR_Box) (EndGoalId_75)), &conv8_BranchEndInfo_73);
            BranchEndInfo_73 = ((MR_Word) (conv8_BranchEndInfo_73));
            ContinueId_74 = ((MR_Word) ((MR_hl_field(0, BranchEndInfo_73, (MR_Integer) 2))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_RelevantVars_8 = RelevantVars_10;
            next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9 = MaybeSearchAnchor0_11;
            next_value_of_tscc_proc_3_input_3_IntervalInfo_10 = IntervalInfo_12;
            next_value_of_tscc_proc_3_input_4_StackOptInfo_11 = StackOptInfo_13;
            next_value_of_tscc_proc_3_input_5_IntervalId_12 = ContinueId_74;
            next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = STATE_VARIABLE_AllPaths_63_63;
            tscc_proc_3_input_1_RelevantVars_8 = next_value_of_tscc_proc_3_input_1_RelevantVars_8;
            tscc_proc_3_input_2_MaybeSearchAnchor0_9 = next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
            tscc_proc_3_input_3_IntervalInfo_10 = next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
            tscc_proc_3_input_4_StackOptInfo_11 = next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
            tscc_proc_3_input_5_IntervalId_12 = next_value_of_tscc_proc_3_input_5_IntervalId_12;
            tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
            goto top_of_proc_3;
          }
        }
        else
        {
          MR_Word SuccessorId_35;
          MR_Word Var_66;

          succeeded = (SuccessorIds_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SuccessorId_35 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_14, (MR_Integer) 0))));
            Var_66 = ((MR_Word) ((MR_hl_field(1, SuccessorIds_14, (MR_Integer) 1))));
            succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_3_input_1_RelevantVars_8 = RelevantVars_10;
            MR_Word next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9 = MaybeSearchAnchor0_11;
            MR_Word next_value_of_tscc_proc_3_input_3_IntervalInfo_10 = IntervalInfo_12;
            MR_Word next_value_of_tscc_proc_3_input_4_StackOptInfo_11 = StackOptInfo_13;
            MR_Word next_value_of_tscc_proc_3_input_5_IntervalId_12 = SuccessorId_35;
            MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = STATE_VARIABLE_AllPaths_39_39;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_RelevantVars_8 = next_value_of_tscc_proc_3_input_1_RelevantVars_8;
            tscc_proc_3_input_2_MaybeSearchAnchor0_9 = next_value_of_tscc_proc_3_input_2_MaybeSearchAnchor0_9;
            tscc_proc_3_input_3_IntervalInfo_10 = next_value_of_tscc_proc_3_input_3_IntervalInfo_10;
            tscc_proc_3_input_4_StackOptInfo_11 = next_value_of_tscc_proc_3_input_4_StackOptInfo_11;
            tscc_proc_3_input_5_IntervalId_12 = next_value_of_tscc_proc_3_input_5_IntervalId_12;
            tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
            goto top_of_proc_3;
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "more successor ids");
              return;
            }
        }
      }
    }
    tscc_output_1_STATE_VARIABLE_AllPaths_29 = STATE_VARIABLE_AllPaths_37;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word RelevantVars_8 = tscc_proc_3_input_1_RelevantVars_8;
    MR_Word MaybeSearchAnchor0_9 = tscc_proc_3_input_2_MaybeSearchAnchor0_9;
    MR_Word IntervalInfo_10 = tscc_proc_3_input_3_IntervalInfo_10;
    MR_Word StackOptInfo_11 = tscc_proc_3_input_4_StackOptInfo_11;
    MR_Word IntervalId_12 = tscc_proc_3_input_5_IntervalId_12;
    MR_Word STATE_VARIABLE_AllPaths_0_32 = tscc_proc_3_input_6_STATE_VARIABLE_AllPaths_0_32;
    MR_Word STATE_VARIABLE_AllPaths_33;
    MR_bool succeeded;
    MR_Word IntervalVars_14;
    MR_Word RelevantIntervalVars_15;
    MR_Word Paths0_16;
    MR_Word AfterModelNon0_17;
    MR_Word RelevantAfter_18;
    MR_Word Paths1_19;
    MR_Word Start_20;
    MR_Word Paths2_30;
    MR_Word AfterModelNon_31;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_10, (MR_Integer) 14))));
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_AllPaths_40_40;
    MR_Box conv9_IntervalVars_14;
    MR_Box conv11_Start_20;
    MR_Word TypeCtorInfo_108_108;
    MR_Word StartInfo_26;
    MR_Word AnchorFollowVars_27;
    MR_Word NeededVars_29;
    MR_Word Var_37;
    MR_Box conv12_StartInfo_26;
    MR_Word Var_39;
    MR_Word next_value_of_tscc_proc_1_input_1_RelevantVars_8;
    MR_Word next_value_of_tscc_proc_1_input_2_IntervalId_9;
    MR_Word next_value_of_tscc_proc_1_input_3_MaybeSearchAnchor0_10;
    MR_Word next_value_of_tscc_proc_1_input_4_IntervalInfo_11;
    MR_Word next_value_of_tscc_proc_1_input_5_StackOptInfo_12;
    MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28;

    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), Var_34, ((MR_Box) (IntervalId_12)), &conv9_IntervalVars_14);
    IntervalVars_14 = ((MR_Word) (conv9_IntervalVars_14));
    RelevantIntervalVars_15 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RelevantVars_8, IntervalVars_14);
    Paths0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 0))));
    AfterModelNon0_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 1))) & (MR_Integer) 1);
    RelevantAfter_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 2))));
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_4[2]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_6));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (IntervalId_12));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) (RelevantIntervalVars_15));
    }
    Paths1_19 = mercury__set__map_2_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), Var_35, Paths0_16);
    Var_36 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_10, (MR_Integer) 11))));
    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_36, ((MR_Box) (IntervalId_12)), &conv11_Start_20);
    Start_20 = ((MR_Word) (conv11_Start_20));
    switch (MR_tag((MR_Word) Start_20)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Start_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    if (succeeded)
    {
      Var_37 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_10, (MR_Integer) 9))));
      TypeCtorInfo_108_108 = (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), TypeCtorInfo_108_108, Var_37, ((MR_Box) (Start_20)), &conv12_StartInfo_26);
      if (succeeded)
      {
        StartInfo_26 = ((MR_Word) (conv12_StartInfo_26));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        AnchorFollowVars_27 = ((MR_Word) ((MR_hl_field(0, StartInfo_26, (MR_Integer) 0))));
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RelevantVars_8, AnchorFollowVars_27, &NeededVars_29);
        succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededVars_29);
      }
    }
    if (succeeded)
    {
      MR_Word Var_38;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_10[0]));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_7));
        MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_38, 3) = ((MR_Box) (Start_20));
      }
      Paths2_30 = mercury__set__map_2_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), Var_38, Paths1_19);
    }
    else
      Paths2_30 = Paths1_19;
    Var_39 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_10, (MR_Integer) 10))));
    succeeded = mercury__set__member_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Start_20)), Var_39);
    if (succeeded)
      AfterModelNon_31 = (MR_Integer) 1;
    else
      AfterModelNon_31 = AfterModelNon0_17;
    {
      STATE_VARIABLE_AllPaths_40_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_AllPaths_40_40, 0) = ((MR_Box) (Paths2_30));
      MR_hl_field(0, STATE_VARIABLE_AllPaths_40_40, 1) = (MR_Box) ((MR_Unsigned) (AfterModelNon_31));
      MR_hl_field(0, STATE_VARIABLE_AllPaths_40_40, 2) = ((MR_Box) (RelevantAfter_18));
    }
    // direct tailcall eliminated
    ;
    next_value_of_tscc_proc_1_input_1_RelevantVars_8 = RelevantVars_8;
    next_value_of_tscc_proc_1_input_2_IntervalId_9 = IntervalId_12;
    next_value_of_tscc_proc_1_input_3_MaybeSearchAnchor0_10 = MaybeSearchAnchor0_9;
    next_value_of_tscc_proc_1_input_4_IntervalInfo_11 = IntervalInfo_10;
    next_value_of_tscc_proc_1_input_5_StackOptInfo_12 = StackOptInfo_11;
    next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28 = STATE_VARIABLE_AllPaths_40_40;
    tscc_proc_1_input_1_RelevantVars_8 = next_value_of_tscc_proc_1_input_1_RelevantVars_8;
    tscc_proc_1_input_2_IntervalId_9 = next_value_of_tscc_proc_1_input_2_IntervalId_9;
    tscc_proc_1_input_3_MaybeSearchAnchor0_10 = next_value_of_tscc_proc_1_input_3_MaybeSearchAnchor0_10;
    tscc_proc_1_input_4_IntervalInfo_11 = next_value_of_tscc_proc_1_input_4_IntervalInfo_11;
    tscc_proc_1_input_5_StackOptInfo_12 = next_value_of_tscc_proc_1_input_5_StackOptInfo_12;
    tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_AllPaths_0_28;
    goto top_of_proc_1;
    tscc_output_1_STATE_VARIABLE_AllPaths_29 = STATE_VARIABLE_AllPaths_33;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_AllPaths_29 = tscc_output_1_STATE_VARIABLE_AllPaths_29;
  return;
}

static void MR_CALL 
ll_backend__stack_opt__one_after_another_7_p_0(
  MR_Word RelevantVars_1,
  MR_Word MaybeSearchAnchor1_2,
  MR_Word IntervalInfo_3,
  MR_Word StackOptInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_AllPaths_0_6,
  MR_Word * STATE_VARIABLE_AllPaths_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_AllPaths_7 = STATE_VARIABLE_AllPaths_0_6;
    else
    {
      MR_Word SuccessorId_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word MoreSuccessorIds_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_AllPaths_24_24;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_AllPaths_0_6;

      ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(RelevantVars_1, MaybeSearchAnchor1_2, IntervalInfo_3, StackOptInfo_4, SuccessorId_19, STATE_VARIABLE_AllPaths_0_6, &STATE_VARIABLE_AllPaths_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = MoreSuccessorIds_20;
      next_value_of_STATE_VARIABLE_AllPaths_0_6 = STATE_VARIABLE_AllPaths_24_24;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_AllPaths_0_6 = next_value_of_STATE_VARIABLE_AllPaths_0_6;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_AfterModelNon_4;

  conv1_AfterModelNon_4 = ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_AfterModelNon_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Paths_3;

  conv0_Paths_3 = ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Paths_3));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AllPaths_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_opt.consolidate_after_join\'/2", (MR_String) "no paths to join");
      return;
    }
  else
  {
    MR_Word PathsList_9;
    MR_Word Paths_11;
    MR_Word AfterModelNonList_12;
    MR_Word AfterModelNon_13;
    MR_Word Var_18;

    PathsList_9 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[11]), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[2]), HeadVar__1_1);
    Paths_11 = mercury__set__union_list_1_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0), PathsList_9);
    AfterModelNonList_12 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_2[3]), HeadVar__1_1);
    mercury__bool__or_list_2_p_0(AfterModelNonList_12, &AfterModelNon_13);
    Var_18 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *AllPaths_2 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Paths_11));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (AfterModelNon_13));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__stack_opt__anchor_requires_close_2_f_0(
  MR_Word IntervalInfo_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word GoalId_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word ResumeSaveStatus_9;
        MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_1, (MR_Integer) 3))));
        MR_Box conv0_ResumeSaveStatus_9;

        mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0), Var_10, ((MR_Box) (GoalId_8)), &conv0_ResumeSaveStatus_9);
        ResumeSaveStatus_9 = ((MR_Word) (conv0_ResumeSaveStatus_9));
        switch (ResumeSaveStatus_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            HeadVar__3_3 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
            HeadVar__3_3 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      HeadVar__3_3 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word BranchType_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);

            HeadVar__3_3 = ((&ll_backend__stack_opt_vector_common_7[5 + BranchType_14]))->ll_backend__stack_opt__vector_common_type_7_0__vct_7_f_0;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_more_successors_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BranchType_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);

        HeadVar__2_2 = ((&ll_backend__stack_opt_vector_common_7[0 + BranchType_3]))->ll_backend__stack_opt__vector_common_type_7_0__vct_7_f_0;
      }
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_one_successor_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_no_successor_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
      break;
  }
  return HeadVar__2_2;
}

static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_2(
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
  MR_Word conv8_STATE_VARIABLE_IntervalInfo_28;
  MR_Word conv7_STATE_VARIABLE_StackOptInfo_30;
  MR_Word conv6_STATE_VARIABLE_InsertAnchors_32;

  ll_backend__stack_opt__add_anchor_inserts_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_IntervalInfo_28, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_StackOptInfo_30, ((MR_Word) (wrapper_arg_6)), &conv6_STATE_VARIABLE_InsertAnchors_32);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_IntervalInfo_28));
  *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_StackOptInfo_30));
  *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_InsertAnchors_32));
}

static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_IntervalInfo_18;
  MR_Word conv1_STATE_VARIABLE_StackOptInfo_20;
  MR_Word conv0_STATE_VARIABLE_InsertIntervals_22;

  ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_IntervalInfo_18, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_StackOptInfo_20, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_InsertIntervals_22);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_IntervalInfo_18));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_StackOptInfo_20));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_InsertIntervals_22));
}

static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0(
  MR_Word CellVar_12,
  MR_Word ConsId_13,
  MR_Word ArgVars_14,
  MR_Word ViaCellVars_15,
  MR_Word Goal_16,
  MR_Word PotentialAnchors_17,
  MR_Word PotentialIntervals_18,
  MR_Word STATE_VARIABLE_IntervalInfo_0_31,
  MR_Word * STATE_VARIABLE_IntervalInfo_32,
  MR_Word STATE_VARIABLE_StackOptInfo_0_33,
  MR_Word * STATE_VARIABLE_StackOptInfo_34)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ViaCellVars_15);
  if (succeeded)
  {
    *STATE_VARIABLE_StackOptInfo_34 = STATE_VARIABLE_StackOptInfo_0_33;
    *STATE_VARIABLE_IntervalInfo_32 = STATE_VARIABLE_IntervalInfo_0_31;
  }
  else
  {
    MR_Word PotentialIntervalList_21;
    MR_Word PotentialAnchorList_22;
    MR_Word InsertIntervals_23;
    MR_Word InsertAnchors_24;
    MR_Word GoalInfo_26;
    MR_Word GoalId_27;
    MR_Word MatchingResult_28;
    MR_Word MatchingResults0_29;
    MR_Word MatchingResults_30;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_IntervalInfo_36_36;
    MR_Word STATE_VARIABLE_StackOptInfo_37_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_StackOptInfo_41_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Box conv5_STATE_VARIABLE_IntervalInfo_36_36;
    MR_Box conv4_STATE_VARIABLE_StackOptInfo_37_37;
    MR_Box conv3_InsertIntervals_23;
    MR_Box conv11_STATE_VARIABLE_IntervalInfo_32;
    MR_Box conv10_STATE_VARIABLE_StackOptInfo_41_41;
    MR_Box conv9_InsertAnchors_24;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), PotentialIntervals_18, &PotentialIntervalList_21);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), PotentialAnchors_17, &PotentialAnchorList_22);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_5[0]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (ll_backend__stack_opt__record_matching_result_11_p_0_1));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (CellVar_12));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) (ViaCellVars_15));
    }
    Var_38 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0));
    mercury__list__foldl3_8_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[9]), Var_35, PotentialIntervalList_21, ((MR_Box) (STATE_VARIABLE_IntervalInfo_0_31)), &conv5_STATE_VARIABLE_IntervalInfo_36_36, ((MR_Box) (STATE_VARIABLE_StackOptInfo_0_33)), &conv4_STATE_VARIABLE_StackOptInfo_37_37, ((MR_Box) (Var_38)), &conv3_InsertIntervals_23);
    STATE_VARIABLE_IntervalInfo_36_36 = ((MR_Word) (conv5_STATE_VARIABLE_IntervalInfo_36_36));
    STATE_VARIABLE_StackOptInfo_37_37 = ((MR_Word) (conv4_STATE_VARIABLE_StackOptInfo_37_37));
    InsertIntervals_23 = ((MR_Word) (conv3_InsertIntervals_23));
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_6[0]));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) (ll_backend__stack_opt__record_matching_result_11_p_0_2));
      MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_39, 3) = ((MR_Box) (Goal_16));
      MR_hl_field(0, Var_39, 4) = ((MR_Box) (ViaCellVars_15));
      MR_hl_field(0, Var_39, 5) = ((MR_Box) (InsertIntervals_23));
    }
    Var_42 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0));
    mercury__list__foldl3_8_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0), (MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[10]), Var_39, PotentialAnchorList_22, ((MR_Box) (STATE_VARIABLE_IntervalInfo_36_36)), &conv11_STATE_VARIABLE_IntervalInfo_32, ((MR_Box) (STATE_VARIABLE_StackOptInfo_37_37)), &conv10_STATE_VARIABLE_StackOptInfo_41_41, ((MR_Box) (Var_42)), &conv9_InsertAnchors_24);
    *STATE_VARIABLE_IntervalInfo_32 = ((MR_Word) (conv11_STATE_VARIABLE_IntervalInfo_32));
    STATE_VARIABLE_StackOptInfo_41_41 = ((MR_Word) (conv10_STATE_VARIABLE_StackOptInfo_41_41));
    InsertAnchors_24 = ((MR_Word) (conv9_InsertAnchors_24));
    GoalInfo_26 = ((MR_Word) ((MR_hl_field(0, Goal_16, (MR_Integer) 1))));
    GoalId_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_26);
    {
      MatchingResult_28 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MatchingResult_28, 0) = ((MR_Box) (CellVar_12));
      MR_hl_field(0, MatchingResult_28, 1) = ((MR_Box) (ConsId_13));
      MR_hl_field(0, MatchingResult_28, 2) = ((MR_Box) (ArgVars_14));
      MR_hl_field(0, MatchingResult_28, 3) = ((MR_Box) (ViaCellVars_15));
      MR_hl_field(0, MatchingResult_28, 4) = ((MR_Box) (GoalId_27));
      MR_hl_field(0, MatchingResult_28, 5) = ((MR_Box) (PotentialIntervals_18));
      MR_hl_field(0, MatchingResult_28, 6) = ((MR_Box) (InsertIntervals_23));
      MR_hl_field(0, MatchingResult_28, 7) = ((MR_Box) (PotentialAnchors_17));
      MR_hl_field(0, MatchingResult_28, 8) = ((MR_Box) (InsertAnchors_24));
    }
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 0))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 1))));
    MatchingResults0_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 2))));
    {
      MatchingResults_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MatchingResults_30, 0) = ((MR_Box) (MatchingResult_28));
      MR_hl_field(1, MatchingResults_30, 1) = ((MR_Box) (MatchingResults0_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_StackOptInfo_34 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_44));
      MR_hl_field(0, base, 2) = ((MR_Box) (MatchingResults_30));
    }
  }
}

void MR_CALL 
ll_backend__stack_opt__stack_opt_cell_5_p_0(
  MR_Word PredProcId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_31,
  MR_Word * STATE_VARIABLE_ProcInfo_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34)
{
  MR_bool succeeded;
  MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(0, PredProcId_6, (MR_Integer) 0))));
  MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(0, PredProcId_6, (MR_Integer) 1))));
  MR_Word Globals_11;
  MR_Word SimplifyTasks_12;
  MR_Word PredInfo_13;
  MR_Word Liveness0_14;
  MR_Word TypeInfoLiveness_15;
  MR_Word OptNoReturnCalls_16;
  MR_Word AllocData_17;
  MR_Word Goal2_19;
  MR_Word OptStackAlloc0_20;
  MR_Word FailVars_21;
  MR_Word NondetLiveness0_22;
  MR_Word Goal_23;
  MR_Word OptStackAlloc_24;
  MR_Integer DebugStackOpt_27;
  MR_Integer PredIdInt_28;
  MR_Word Changed_30;
  MR_Word STATE_VARIABLE_ModuleInfo_37_37;
  MR_Word STATE_VARIABLE_ProcInfo_38_38;
  MR_Word STATE_VARIABLE_ProcInfo_39_39;
  MR_Word STATE_VARIABLE_ProcInfo_42_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_ProcInfo_45_45;
  MR_Word STATE_VARIABLE_ProcInfo_47_47;
  MR_Word STATE_VARIABLE_ProcInfo_52_52;
  MR_Word Var_70;
  MR_Word Var_18;
  MR_Word _Liveness_25;
  MR_Word _NondetLiveness_26;
  MR_Box conv0_OptStackAlloc_24;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &Globals_11);
  SimplifyTasks_12 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_2_f_0(Globals_11, (MR_Word) ((MR_Unsigned) 0U));
  check_hlds__simplify__simplify_proc__simplify_proc_8_p_0((MR_Word) ((MR_Unsigned) 0U), SimplifyTasks_12, PredId_9, ProcId_10, STATE_VARIABLE_ModuleInfo_0_33, &STATE_VARIABLE_ModuleInfo_37_37, STATE_VARIABLE_ProcInfo_0_31, &STATE_VARIABLE_ProcInfo_38_38);
  ll_backend__liveness__detect_liveness_proc_4_p_0(STATE_VARIABLE_ModuleInfo_37_37, PredProcId_6, STATE_VARIABLE_ProcInfo_38_38, &STATE_VARIABLE_ProcInfo_39_39);
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_37_37, PredId_9, &PredInfo_13);
  ll_backend__liveness__initial_liveness_4_p_0(STATE_VARIABLE_ModuleInfo_37_37, PredInfo_13, STATE_VARIABLE_ProcInfo_39_39, &Liveness0_14);
  hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(PredInfo_13, Globals_11, &TypeInfoLiveness_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 368, &OptNoReturnCalls_16);
  {
    AllocData_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AllocData_17, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_37_37));
    MR_hl_field(0, AllocData_17, 1) = ((MR_Box) (STATE_VARIABLE_ProcInfo_39_39));
    MR_hl_field(0, AllocData_17, 2) = ((MR_Box) (PredProcId_6));
    MR_hl_field(0, AllocData_17, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, AllocData_17, 4) = (MR_Box) (((((MR_Unsigned) (TypeInfoLiveness_15) << 1)) | (MR_Unsigned) (OptNoReturnCalls_16)));
  }
  hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(STATE_VARIABLE_ModuleInfo_37_37, &Var_18, STATE_VARIABLE_ProcInfo_39_39, &STATE_VARIABLE_ProcInfo_42_42);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_42_42, &Goal2_19);
  Var_70 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  OptStackAlloc0_20 = (MR_Word) (Var_70);
  mercury__set__init_1_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[0]), &FailVars_21);
  mercury__set__init_1_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[0]), &NondetLiveness0_22);
  Var_43 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FailVars_21);
  Var_44 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NondetLiveness0_22);
  ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[1]), AllocData_17, Var_43, Goal2_19, &Goal_23, ((MR_Box) (OptStackAlloc0_20)), &conv0_OptStackAlloc_24, Liveness0_14, &_Liveness_25, Var_44, &_NondetLiveness_26);
  OptStackAlloc_24 = ((MR_Word) (conv0_OptStackAlloc_24));
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_23, STATE_VARIABLE_ProcInfo_42_42, &STATE_VARIABLE_ProcInfo_45_45);
  ll_backend__store_alloc__allocate_store_maps_5_p_0((MR_Integer) 1, STATE_VARIABLE_ModuleInfo_37_37, PredProcId_6, STATE_VARIABLE_ProcInfo_45_45, &STATE_VARIABLE_ProcInfo_47_47);
  libs__globals__lookup_int_option_3_p_0(Globals_11, (MR_Integer) 105, &DebugStackOpt_27);
  hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_9, &PredIdInt_28);
  succeeded = (DebugStackOpt_27 == PredIdInt_28);
  if (succeeded)
  {
    MR_Word Goal_72;
    MR_Word VarTable_73;
    MR_Word Globals_74;
    MR_Word Stream_75;
    MR_Word OutInfo_76;
    MR_Word Var_82;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &Goal_72);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &VarTable_73);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_37_37, &Globals_74);
    mercury__io__output_stream_3_p_0(&Stream_75);
    mercury__io__write_string_4_p_0(Stream_75, (MR_String) "\nbefore stack opt cell");
    mercury__io__write_string_4_p_0(Stream_75, (MR_String) ":\n");
    OutInfo_76 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_74, (MR_Integer) 1);
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (VarTable_73));
    }
    hlds__hlds_out__hlds_out_goal__write_goal_10_p_0(OutInfo_76, Stream_75, STATE_VARIABLE_ModuleInfo_37_37, Var_82, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n", Goal_72);
    mercury__io__write_string_4_p_0(Stream_75, (MR_String) "\n");
  }
  ll_backend__stack_opt__optimize_live_sets_7_p_0(STATE_VARIABLE_ModuleInfo_37_37, OptStackAlloc_24, STATE_VARIABLE_ProcInfo_47_47, &STATE_VARIABLE_ProcInfo_52_52, &Changed_30, DebugStackOpt_27, PredIdInt_28);
  switch (Changed_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_ProcInfo_32 = STATE_VARIABLE_ProcInfo_52_52;
        *STATE_VARIABLE_ModuleInfo_34 = STATE_VARIABLE_ModuleInfo_37_37;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_ProcInfo_57_57;

        succeeded = (DebugStackOpt_27 == PredIdInt_28);
        if (succeeded)
        {
          MR_Word Goal_88;
          MR_Word VarTable_89;
          MR_Word Globals_90;
          MR_Word Stream_91;
          MR_Word OutInfo_92;
          MR_Word Var_98;

          hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_52_52, &Goal_88);
          hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_52_52, &VarTable_89);
          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_37_37, &Globals_90);
          mercury__io__output_stream_3_p_0(&Stream_91);
          mercury__io__write_string_4_p_0(Stream_91, (MR_String) "\nafter stack opt transformation");
          mercury__io__write_string_4_p_0(Stream_91, (MR_String) ":\n");
          OutInfo_92 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_90, (MR_Integer) 1);
          {
            Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_98, 0) = ((MR_Box) (VarTable_89));
          }
          hlds__hlds_out__hlds_out_goal__write_goal_10_p_0(OutInfo_92, Stream_91, STATE_VARIABLE_ModuleInfo_37_37, Var_98, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n", Goal_88);
          mercury__io__write_string_4_p_0(Stream_91, (MR_String) "\n");
        }
        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_52_52, &STATE_VARIABLE_ProcInfo_57_57);
        ll_backend__stack_opt__maybe_write_progress_message_7_p_0(STATE_VARIABLE_ModuleInfo_37_37, STATE_VARIABLE_ProcInfo_57_57, PredIdInt_28, DebugStackOpt_27, (MR_String) "\nafter stack opt requantify");
        check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_57_57, STATE_VARIABLE_ProcInfo_32, STATE_VARIABLE_ModuleInfo_37_37, STATE_VARIABLE_ModuleInfo_34);
        ll_backend__stack_opt__maybe_write_progress_message_7_p_0(*STATE_VARIABLE_ModuleInfo_34, *STATE_VARIABLE_ProcInfo_32, PredIdInt_28, DebugStackOpt_27, (MR_String) "\nafter stack opt recompute instmaps");
      }
      break;
  }
}

static void MR_CALL 
ll_backend__stack_opt__maybe_write_progress_message_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Integer PredIdInt_10,
  MR_Integer DebugStackOpt_11,
  MR_String Message_12)
{
  MR_bool succeeded = (DebugStackOpt_11 == PredIdInt_10);

  if (succeeded)
  {
    MR_Word Goal_14;
    MR_Word VarTable_15;
    MR_Word Globals_16;
    MR_Word Stream_17;
    MR_Word OutInfo_18;
    MR_Word Var_26;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_9, &Goal_14);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_9, &VarTable_15);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_16);
    mercury__io__output_stream_3_p_0(&Stream_17);
    mercury__io__write_string_4_p_0(Stream_17, Message_12);
    mercury__io__write_string_4_p_0(Stream_17, (MR_String) ":\n");
    OutInfo_18 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_16, (MR_Integer) 1);
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (VarTable_15));
    }
    hlds__hlds_out__hlds_out_goal__write_goal_10_p_0(OutInfo_18, Stream_17, ModuleInfo_8, Var_26, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n", Goal_14);
    mercury__io__write_string_4_p_0(Stream_17, (MR_String) "\n");
  }
}

static void MR_CALL 
ll_backend__stack_opt__optimize_live_sets_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word OptAlloc_9,
  MR_Word STATE_VARIABLE_ProcInfo_0_61,
  MR_Word * STATE_VARIABLE_ProcInfo_62,
  MR_Word * Changed_11,
  MR_Integer DebugStackOpt_12,
  MR_Integer PredIdInt_13)
{
  MR_bool succeeded;
  MR_Word Goal0_14;
  MR_Word VarTable0_15;
  MR_Word ParConjOwnSlot_16;
  MR_Word InputArgs_17;
  MR_Word OutputArgs_18;
  MR_Word UnusedArgs_19;
  MR_Word HeadVars_20;
  MR_Word Globals_21;
  MR_Word OptTuple_22;
  MR_Word CandHeadvars_23;
  MR_Word NonCandidateVars_24;
  MR_Word Counter0_25;
  MR_Integer CurInterval_26;
  MR_Word Counter1_27;
  MR_Word CurIntervalId_28;
  MR_Word EndMap0_29;
  MR_Word InsertMap0_30;
  MR_Word StartMap0_31;
  MR_Word SuccMap0_32;
  MR_Word VarsMap0_33;
  MR_Integer CellVarStoreCost_34;
  MR_Integer CellVarLoadCost_35;
  MR_Integer FieldVarStoreCost_36;
  MR_Integer FieldVarLoadCost_37;
  MR_Integer OpRatio_38;
  MR_Integer NodeRatio_39;
  MR_Word InclAllCand_40;
  MR_Word MatchingParams_41;
  MR_Integer AllPathNodeRatio_42;
  MR_Word FixpointLoop_43;
  MR_Word FullPath_44;
  MR_Word OnStack_45;
  MR_Word OptNoReturnCalls_46;
  MR_Word IntParams_47;
  MR_Word IntervalInfo0_48;
  MR_Word ModuleName_49;
  MR_Word StackOptParams_50;
  MR_Word StackOptInfo0_51;
  MR_Word IntervalInfo_52;
  MR_Word StackOptInfo_53;
  MR_Word InsertMap_56;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Box conv0_StackOptInfo_53;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_61, &Goal0_14);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_61, &VarTable0_15);
  ParConjOwnSlot_16 = (MR_Word) (OptAlloc_9);
  hlds__arg_info__partition_proc_args_5_p_0(ModuleInfo_8, STATE_VARIABLE_ProcInfo_0_61, &InputArgs_17, &OutputArgs_18, &UnusedArgs_19);
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (UnusedArgs_19));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (OutputArgs_18));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (InputArgs_17));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
  }
  HeadVars_20 = mercury__set__union_list_1_f_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[0]), Var_63);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_21);
  libs__globals__get_opt_tuple_2_p_0(Globals_21, &OptTuple_22);
  CandHeadvars_23 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
  switch (CandHeadvars_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_67;

        Var_67 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_20);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_67, ParConjOwnSlot_16, &NonCandidateVars_24);
      }
      break;
    case (MR_Integer) 0:
      NonCandidateVars_24 = ParConjOwnSlot_16;
      break;
  }
  Counter0_25 = mercury__counter__init_1_f_0((MR_Integer) 1);
  mercury__counter__allocate_3_p_0(&CurInterval_26, Counter0_25, &Counter1_27);
  CurIntervalId_28 = (MR_Word) (CurInterval_26);
  EndMap0_29 = mercury__map__singleton_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (CurIntervalId_28)), ((MR_Box) ((MR_Unsigned) 4U)));
  mercury__map__init_1_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[2]), &InsertMap0_30);
  mercury__map__init_1_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), &StartMap0_31);
  SuccMap0_32 = mercury__map__singleton_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[3]), ((MR_Box) (CurIntervalId_28)), ((MR_Box) ((MR_Unsigned) 0U)));
  Var_71 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputArgs_18);
  VarsMap0_33 = mercury__map__singleton_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[4]), ((MR_Box) (CurIntervalId_28)), ((MR_Box) (Var_71)));
  FixpointLoop_43 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
  FullPath_44 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
  OnStack_45 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
  InclAllCand_40 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
  CellVarStoreCost_34 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 10))));
  CellVarLoadCost_35 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 11))));
  FieldVarStoreCost_36 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 12))));
  FieldVarLoadCost_37 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 13))));
  OpRatio_38 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 14))));
  NodeRatio_39 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 15))));
  AllPathNodeRatio_42 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 16))));
  {
    MatchingParams_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MatchingParams_41, 0) = ((MR_Box) (CellVarStoreCost_34));
    MR_hl_field(0, MatchingParams_41, 1) = ((MR_Box) (CellVarLoadCost_35));
    MR_hl_field(0, MatchingParams_41, 2) = ((MR_Box) (FieldVarStoreCost_36));
    MR_hl_field(0, MatchingParams_41, 3) = ((MR_Box) (FieldVarLoadCost_37));
    MR_hl_field(0, MatchingParams_41, 4) = ((MR_Box) (OpRatio_38));
    MR_hl_field(0, MatchingParams_41, 5) = ((MR_Box) (NodeRatio_39));
    MR_hl_field(0, MatchingParams_41, 6) = (MR_Box) ((MR_Unsigned) (InclAllCand_40));
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 368, &OptNoReturnCalls_46);
  {
    IntParams_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntParams_47, 0) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, IntParams_47, 1) = ((MR_Box) (VarTable0_15));
    MR_hl_field(0, IntParams_47, 2) = (MR_Box) ((MR_Unsigned) (OptNoReturnCalls_46));
  }
  Var_73 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  Var_74 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputArgs_18);
  Var_75 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0));
  Var_76 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0));
  Var_77 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0));
  Var_78 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), ((MR_Box) (CurIntervalId_28)));
  Var_79 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0));
  Var_80 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0));
  Var_81 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[5]));
  {
    IntervalInfo0_48 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntervalInfo0_48, 0) = ((MR_Box) (IntParams_47));
    MR_hl_field(0, IntervalInfo0_48, 1) = ((MR_Box) (Var_73));
    MR_hl_field(0, IntervalInfo0_48, 2) = ((MR_Box) (Var_74));
    MR_hl_field(0, IntervalInfo0_48, 3) = ((MR_Box) (Var_75));
    MR_hl_field(0, IntervalInfo0_48, 4) = ((MR_Box) (Var_76));
    MR_hl_field(0, IntervalInfo0_48, 5) = ((MR_Box) (Var_77));
    MR_hl_field(0, IntervalInfo0_48, 6) = ((MR_Box) (CurIntervalId_28));
    MR_hl_field(0, IntervalInfo0_48, 7) = ((MR_Box) (Counter1_27));
    MR_hl_field(0, IntervalInfo0_48, 8) = ((MR_Box) (Var_78));
    MR_hl_field(0, IntervalInfo0_48, 9) = ((MR_Box) (Var_79));
    MR_hl_field(0, IntervalInfo0_48, 10) = ((MR_Box) (Var_80));
    MR_hl_field(0, IntervalInfo0_48, 11) = ((MR_Box) (StartMap0_31));
    MR_hl_field(0, IntervalInfo0_48, 12) = ((MR_Box) (EndMap0_29));
    MR_hl_field(0, IntervalInfo0_48, 13) = ((MR_Box) (SuccMap0_32));
    MR_hl_field(0, IntervalInfo0_48, 14) = ((MR_Box) (VarsMap0_33));
    MR_hl_field(0, IntervalInfo0_48, 15) = ((MR_Box) (Var_81));
  }
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_49);
  {
    StackOptParams_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StackOptParams_50, 0) = ((MR_Box) (Globals_21));
    MR_hl_field(0, StackOptParams_50, 1) = ((MR_Box) (ModuleName_49));
    MR_hl_field(0, StackOptParams_50, 2) = ((MR_Box) (MatchingParams_41));
    MR_hl_field(0, StackOptParams_50, 3) = ((MR_Box) (AllPathNodeRatio_42));
    MR_hl_field(0, StackOptParams_50, 4) = (MR_Box) (((((MR_Unsigned) (FixpointLoop_43) << 2)) | (((((MR_Unsigned) (FullPath_44) << 1)) | (MR_Unsigned) (OnStack_45)))));
    MR_hl_field(0, StackOptParams_50, 5) = ((MR_Box) (NonCandidateVars_24));
  }
  {
    StackOptInfo0_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StackOptInfo0_51, 0) = ((MR_Box) (StackOptParams_50));
    MR_hl_field(0, StackOptInfo0_51, 1) = ((MR_Box) (InsertMap0_30));
    MR_hl_field(0, StackOptInfo0_51, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  backend_libs__interval__build_interval_info_in_goal_5_p_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[6]), Goal0_14, IntervalInfo0_48, &IntervalInfo_52, ((MR_Box) (StackOptInfo0_51)), &conv0_StackOptInfo_53);
  StackOptInfo_53 = ((MR_Word) (conv0_StackOptInfo_53));
  succeeded = (DebugStackOpt_12 == PredIdInt_13);
  if (succeeded)
  {
    MR_Word DebugStream_55;

    hlds__passes_aux__get_debug_output_stream_4_p_0(ModuleInfo_8, &DebugStream_55);
    backend_libs__interval__dump_interval_info_4_p_0(DebugStream_55, IntervalInfo_52);
    ll_backend__stack_opt__dump_stack_opt_info_4_p_0(DebugStream_55, StackOptInfo_53);
  }
  InsertMap_56 = ((MR_Word) ((MR_hl_field(0, StackOptInfo_53, (MR_Integer) 1))));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[2]), InsertMap_56);
  if (succeeded)
  {
    *Changed_11 = (MR_Integer) 0;
    *STATE_VARIABLE_ProcInfo_62 = STATE_VARIABLE_ProcInfo_0_61;
  }
  else
  {
    MR_Word Goal1_57;
    MR_Word VarTable_58;
    MR_Word RenameMap_59;
    MR_Word Goal_60;
    MR_Word Var_88;
    MR_Word Var_90;
    MR_Word STATE_VARIABLE_ProcInfo_91_91;

    Var_88 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__stack_opt_scalar_common_1[0]), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[0]));
    backend_libs__interval__record_decisions_in_goal_8_p_0((MR_Word) (MR_mkword(1, &ll_backend__stack_opt_scalar_common_3[0])), InsertMap_56, Goal0_14, &Goal1_57, VarTable0_15, &VarTable_58, Var_88, &RenameMap_59);
    Var_90 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_20);
    backend_libs__interval__apply_headvar_correction_4_p_0(Var_90, RenameMap_59, Goal1_57, &Goal_60);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_60, STATE_VARIABLE_ProcInfo_0_61, &STATE_VARIABLE_ProcInfo_91_91);
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_58, STATE_VARIABLE_ProcInfo_91_91, STATE_VARIABLE_ProcInfo_62);
    *Changed_11 = (MR_Integer) 1;
  }
}

static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__stack_opt__dump_matching_result_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__stack_opt__dump_anchor_inserts_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_4_p_0(
  MR_Word Stream_5,
  MR_Word StackOptInfo_6)
{
  MR_Word Inserts_8;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, StackOptInfo_6, (MR_Integer) 1))));
  MR_Word Var_14;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Box conv0_STATE_VARIABLE_IO_15_15;
  MR_Box conv1_STATE_VARIABLE_IO_20_20;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&ll_backend__stack_opt_scalar_common_1[2]), Var_11, &Inserts_8);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\nANCHOR INSERT:\n");
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_4[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ll_backend__stack_opt__dump_stack_opt_info_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Stream_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__stack_opt_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Inserts_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15_15);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\nMATCHING RESULTS:\n");
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_4[1]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (ll_backend__stack_opt__dump_stack_opt_info_4_p_0_2));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Stream_5));
  }
  Var_19 = ((MR_Word) ((MR_hl_field(0, StackOptInfo_6, (MR_Integer) 2))));
  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, Var_19, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_opt____Unify____all_paths_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_opt____Compare____all_paths_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_opt____Unify____match_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_opt____Compare____match_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_opt____Unify____match_path_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_opt____Compare____match_path_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_opt____Unify____matching_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_opt____Compare____matching_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_opt____Unify____path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_opt____Compare____path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_opt____Unify____stack_opt_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_opt____Compare____stack_opt_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_opt____Unify____stack_opt_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_opt____Compare____stack_opt_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
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
  MR_Word conv1_HeadVar__6_6;
  MR_Word conv0_HeadVar__8_8;

  ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__8_8);
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__8_8));
}

void mercury__ll_backend__stack_opt__init(void)
{
}

void mercury__ll_backend__stack_opt__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0);
	MR_register_type_ctor_info(&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0);
	MR_register_type_ctor_info(&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_info_0);
	MR_register_type_ctor_info(&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0);
	MR_register_type_ctor_info(&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0);
	MR_register_type_ctor_info(&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_opt_stack_alloc_0);
	MR_register_type_ctor_info(&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0);
	MR_register_type_ctor_info(&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0);
	MR_register_type_ctor_info(&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_params_0);
}

void mercury__ll_backend__stack_opt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__stack_opt__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.stack_opt.
