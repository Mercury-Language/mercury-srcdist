/*
** Automatically generated from `tupling.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module transform_hlds.tupling. */
/* :- implementation. */

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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_path.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
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



#line 1213 "tupling.m"
struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s {
#line 1220 "tupling.m"
  MR_bool transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded;
#line 1220 "tupling.m"
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14;
#line 1220 "tupling.m"
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19;
#line 1220 "tupling.m"
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVarArgPos_20;
#line 1220 "tupling.m"
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26;
#line 1240 "tupling.m"
  jmp_buf transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__commit_0;
#line 1240 "tupling.m"
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_83_83;
#line 1240 "tupling.m"
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32;
#line 1241 "tupling.m"
  MR_Box transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__conv0_Var_32;
#line 1213 "tupling.m"
};

#line 258 "tupling.m"
struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s {
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13;
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14;
#line 264 "tupling.m"
  MR_bool transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded;
#line 321 "tupling.m"
  jmp_buf transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__commit_0;
#line 321 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_71;
#line 321 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeInfo_8_72;
#line 321 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeProc_65;
#line 321 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeKey_69;
#line 321 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CallingKeys_70;
#line 321 "tupling.m"
  MR_Box transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__conv1_CalleeProc_65;
#line 258 "tupling.m"
};


#line 225 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 228 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 231 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 234 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 237 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0;

#line 240 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 243 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 246 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 249 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 252 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 255 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 258 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 261 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 264 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 267 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 270 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 273 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 276 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_tupling_proposal_0;

#line 279 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 282 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

#line 285 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 288 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 291 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 294 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 297 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 300 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_costs_0_0[2];

#line 303 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_costs_0_0[2];

#line 306 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_costs_0_0;

#line 309 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_costs_0_0[1];

#line 312 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_costs_0[1];

#line 315 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_costs_0[1];

#line 318 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_costs_0[1];

#line 321 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0;

#line 324 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_count_info_0_0[8];

#line 327 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_count_info_0_0[8];

#line 330 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_info_0_0;

#line 333 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_info_0_0[1];

#line 336 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_info_0[1];

#line 339 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_info_0[1];

#line 342 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_info_0[1];

#line 345 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 348 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_count_state_0_0[4];

#line 351 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_count_state_0_0[4];

#line 354 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_state_0_0;

#line 357 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_state_0_0[1];

#line 360 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_state_0[1];

#line 363 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_state_0[1];

#line 366 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_state_0[1];

#line 369 "transform_hlds.tupling.c"
static const MR_EnumFunctorDesc transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0;

#line 372 "transform_hlds.tupling.c"
static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_value_ordered_opt_tuple_alloc_0[1];

#line 375 "transform_hlds.tupling.c"
static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_name_ordered_opt_tuple_alloc_0[1];

#line 378 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_opt_tuple_alloc_0[1];

#line 381 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_transformed_proc_0;

#line 384 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1builtin__type_ctor_info_int_0;

#line 387 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_transformed_proc_0_0[4];

#line 390 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_transformed_proc_0_0[4];

#line 393 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_transformed_proc_0_0;

#line 396 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_transformed_proc_0_0[1];

#line 399 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_transformed_proc_0[1];

#line 402 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_transformed_proc_0[1];

#line 405 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_transformed_proc_0[1];

#line 408 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_tuning_params_0_0[8];

#line 411 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_tuning_params_0_0[8];

#line 414 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tuning_params_0_0;

#line 417 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tuning_params_0_0[1];

#line 420 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tuning_params_0[1];

#line 423 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tuning_params_0[1];

#line 426 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tuning_params_0[1];

#line 429 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0;

#line 432 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 435 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 438 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 441 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_tupling_proposal_0_1[3];

#line 444 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_tupling_proposal_0_1[3];

#line 447 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1;

#line 450 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_0[1];

#line 453 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_1[1];

#line 456 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tupling_proposal_0[2];

#line 459 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tupling_proposal_0[2];

#line 462 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tupling_proposal_0[2];

#line 465 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0_10001(
#line 468 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 470 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 473 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0_10001(
#line 476 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 478 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 480 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 483 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0_10001(
#line 486 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 488 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 491 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0_10001(
#line 494 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 496 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 498 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 501 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0_10001(
#line 504 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 506 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 509 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0_10001(
#line 512 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 514 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 516 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 519 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0_10001(
#line 522 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 524 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 527 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0_10001(
#line 530 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 532 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 534 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 537 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0_10001(
#line 540 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 542 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 545 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0_10001(
#line 548 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 550 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 552 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 555 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0_10001(
#line 558 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 560 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 563 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0_10001(
#line 566 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 568 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 570 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 573 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0_10001(
#line 576 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 578 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 581 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0_10001(
#line 584 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 586 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 588 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 591 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0_10001(
#line 594 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 596 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 599 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0_10001(
#line 602 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 604 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 606 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 609 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0_10001(
#line 612 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 614 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 617 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0_10001(
#line 620 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 622 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 624 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 627 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0_10001(
#line 630 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 632 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 635 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0_10001(
#line 638 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 640 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 642 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 645 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0_10001(
#line 648 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 650 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 653 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0_10001(
#line 656 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 658 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 660 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 663 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 666 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 668 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 670 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 672 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 674 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 677 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 680 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 682 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 684 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 686 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 688 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 691 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 694 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 696 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 698 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 700 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 702 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 705 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 708 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 710 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 712 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 714 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 716 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 719 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
#line 722 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 724 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 726 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 728 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 730 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 732 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_5,
#line 734 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_6,
#line 736 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_7,
#line 738 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_8);

#line 614 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_p_0(
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__V_19_19,
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__V_20_20,
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__V_21_21,
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__V_22_22,
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__V_23_23,
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__List_7,
#line 614 "tupling.m"
  MR_Integer transform_hlds__tupling__Length_8,
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_0_11,
#line 614 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Acc_12);

#line 606 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_p_0(
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__V_23_23,
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__V_24_24,
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__V_25_25,
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__V_26_26,
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__V_27_27,
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 606 "tupling.m"
  MR_Integer transform_hlds__tupling__MinLength_3,
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_0_4,
#line 606 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Acc_5);

#line 939 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void);

#line 938 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void);

#line 937 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void);

#line 936 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void);

#line 1594 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_p_0(
#line 1594 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 1594 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__6_6);

#line 932 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 932 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1);

#line 932 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

#line 1702 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_6,
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13,
#line 1702 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14);

#line 1500 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_2(
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1500 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1383 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_1(
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1383 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1298 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(
#line 1298 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_8,
#line 1298 "tupling.m"
  MR_Word transform_hlds__tupling__Inputs_9,
#line 1298 "tupling.m"
  MR_Word transform_hlds__tupling__Outputs_10,
#line 1298 "tupling.m"
  MR_Word transform_hlds__tupling__MaybeNeedAcrossCall_11,
#line 1298 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_19,
#line 1298 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_20);

#line 1919 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1919__1_3_p_0(
#line 1919 "tupling.m"
  MR_Word transform_hlds__tupling__ArgList_5,
#line 1919 "tupling.m"
  MR_Integer transform_hlds__tupling__HeadVar__2_11,
#line 1919 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__3_12);

#line 697 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__697__1_3_f_0(
#line 697 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVarsList_7,
#line 697 "tupling.m"
  MR_Word transform_hlds__tupling__LambdaHeadVar__1_37,
#line 697 "tupling.m"
  MR_Word transform_hlds__tupling__LambdaHeadVar__2_38,
#line 697 "tupling.m"
  MR_Word * transform_hlds__tupling__LambdaHeadVar__3_39);

#line 667 "tupling.m"
static MR_Integer MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__add_transformed_proc__667__1_2_f_0(
#line 667 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVars_36,
#line 667 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_66);

#line 576 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__576__1_3_f_0(
#line 576 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_4,
#line 576 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVars_16,
#line 576 "tupling.m"
  MR_Word transform_hlds__tupling__LambdaHeadVar__1_26,
#line 576 "tupling.m"
  MR_Word * transform_hlds__tupling__LambdaHeadVar__2_27);

#line 504 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__504__1_3_p_0(
#line 504 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_21,
#line 504 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_22,
#line 504 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__3_23);

#line 939 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 939 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 939 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 938 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 938 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 938 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 937 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 937 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 937 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 936 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 936 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 936 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 1594 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0(
#line 1594 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1594 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1594 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1594 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__4_4,
#line 1594 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 1594 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__6_6);

#line 513 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0(
#line 513 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 513 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 513 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 513 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0(
#line 513 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 513 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 515 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0(
#line 515 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 515 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 515 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 515 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0(
#line 515 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 515 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 841 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0(
#line 841 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 841 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 841 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 841 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0(
#line 841 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 841 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 1669 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0(
#line 1669 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 1669 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1669 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 1669 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0(
#line 1669 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1669 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 1667 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0(
#line 1667 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 1667 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1667 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 1667 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0(
#line 1667 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1667 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 932 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0(
#line 932 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1);

#line 932 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0(void);

#line 853 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0(
#line 853 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 853 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 853 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 853 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0(
#line 853 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 853 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 826 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0(
#line 826 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 826 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 826 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 826 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0(
#line 826 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 826 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 861 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0(
#line 861 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 861 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 861 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 861 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0(
#line 861 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 861 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 429 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0(
#line 429 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 429 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 429 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 429 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0(
#line 429 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 429 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 431 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0(
#line 431 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 431 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 431 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 431 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0(
#line 431 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 431 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 2027 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_switch_total_count_2_5_p_0(
#line 2027 "tupling.m"
  MR_Word transform_hlds__tupling__SwitchGoalPath_6,
#line 2027 "tupling.m"
  MR_Word transform_hlds__tupling__PathPort_7,
#line 2027 "tupling.m"
  MR_Word transform_hlds__tupling__LineNoAndCount_8,
#line 2027 "tupling.m"
  MR_Integer transform_hlds__tupling__STATE_VARIABLE_TotalAcc_0_10,
#line 2027 "tupling.m"
  MR_Integer * transform_hlds__tupling__STATE_VARIABLE_TotalAcc_11);

#line 2025 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0_1(
#line 2025 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 2025 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 2025 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 2025 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 2025 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 2007 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0(
#line 2007 "tupling.m"
  MR_Word transform_hlds__tupling__ProcCounts_5,
#line 2007 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMap_6,
#line 2007 "tupling.m"
  MR_Word transform_hlds__tupling__GoalId_7,
#line 2007 "tupling.m"
  MR_Float * transform_hlds__tupling__RelFreq_8);

#line 1985 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_disjunct_relative_frequency_4_p_0(
#line 1985 "tupling.m"
  MR_Word transform_hlds__tupling__ProcCounts_5,
#line 1985 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMap_6,
#line 1985 "tupling.m"
  MR_Word transform_hlds__tupling__GoalId_7,
#line 1985 "tupling.m"
  MR_Float * transform_hlds__tupling__RelFreq_8);

#line 1966 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_ite_relative_frequencies_6_p_0(
#line 1966 "tupling.m"
  MR_Word transform_hlds__tupling__ProcCounts_7,
#line 1966 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMap_8,
#line 1966 "tupling.m"
  MR_Word transform_hlds__tupling__ThenGoalId_9,
#line 1966 "tupling.m"
  MR_Word transform_hlds__tupling__ElseGoalId_10,
#line 1966 "tupling.m"
  MR_Float * transform_hlds__tupling__ThenRelFreq_11,
#line 1966 "tupling.m"
  MR_Float * transform_hlds__tupling__ElseRelFreq_12);

#line 1922 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(
#line 1922 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1922 "tupling.m"
  MR_Integer transform_hlds__tupling__HeadVar__2_2,
#line 1922 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1922 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__4_4);

#line 1919 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0_1(
#line 1919 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1919 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1919 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2);

#line 1915 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0(
#line 1915 "tupling.m"
  MR_Word transform_hlds__tupling__ArgList_5,
#line 1915 "tupling.m"
  MR_Word transform_hlds__tupling__Indices_6,
#line 1915 "tupling.m"
  MR_Word * transform_hlds__tupling__Selected_7,
#line 1915 "tupling.m"
  MR_Word * transform_hlds__tupling__NotSelected_8);

#line 1887 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_cases_9_p_0(
#line 1887 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1887 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__2_2,
#line 1887 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3,
#line 1887 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_4,
#line 1887 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5,
#line 1887 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_6,
#line 1887 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7,
#line 1887 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8,
#line 1887 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_9);

#line 1875 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(
#line 1875 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1875 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__2_2,
#line 1875 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3,
#line 1875 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_4,
#line 1875 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5,
#line 1875 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_6,
#line 1875 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7,
#line 1875 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8,
#line 1875 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_9);

#line 1858 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_conj_9_p_0(
#line 1858 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1858 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__2_2,
#line 1858 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3,
#line 1858 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_4,
#line 1858 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5,
#line 1858 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_6,
#line 1858 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7,
#line 1858 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8,
#line 1858 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_9);

#line 1747 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_9_p_0(
#line 1747 "tupling.m"
  MR_Word transform_hlds__tupling__Goal0_10,
#line 1747 "tupling.m"
  MR_Word * transform_hlds__tupling__Goal_11,
#line 1747 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78,
#line 1747 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_79,
#line 1747 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80,
#line 1747 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_81,
#line 1747 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82,
#line 1747 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83,
#line 1747 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_15);

#line 1709 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_proc_4_p_0(
#line 1709 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_5,
#line 1709 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1709 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23,
#line 1709 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24);

#line 1702 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_p_0(
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_6,
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_7,
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13,
#line 1702 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14);

#line 1693 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0_1(
#line 1693 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1693 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1693 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1693 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1689 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0(
#line 1689 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_5,
#line 1689 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_6,
#line 1689 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_8,
#line 1689 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_9);

#line 1643 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__combine_inserts_3_p_0(
#line 1643 "tupling.m"
  MR_Word transform_hlds__tupling__A_1,
#line 1643 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1643 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__3_3);

#line 1617 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_insert_map_2_7_p_0(
#line 1617 "tupling.m"
  MR_Word transform_hlds__tupling__CellVar_8,
#line 1617 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVars_9,
#line 1617 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVarsSet_10,
#line 1617 "tupling.m"
  MR_Word transform_hlds__tupling__Anchor_11,
#line 1617 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 1617 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_InsertMap_0_18,
#line 1617 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_InsertMap_19);

#line 1614 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0_1(
#line 1614 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1614 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1614 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1614 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 1614 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 1609 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0(
#line 1609 "tupling.m"
  MR_Word transform_hlds__tupling__CellVar_5,
#line 1609 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVars_6,
#line 1609 "tupling.m"
  MR_Word transform_hlds__tupling__IntervalInfo_7,
#line 1609 "tupling.m"
  MR_Word * transform_hlds__tupling__InsertMap_8);

#line 1567 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_interval_info_3_p_0(
#line 1567 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_4,
#line 1567 "tupling.m"
  MR_Word transform_hlds__tupling__ProcInfo_5,
#line 1567 "tupling.m"
  MR_Word * transform_hlds__tupling__IntervalInfo_6);

#line 1553 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_branch_costs_4_p_0(
#line 1553 "tupling.m"
  MR_Word transform_hlds__tupling__BranchState_5,
#line 1553 "tupling.m"
  MR_Float transform_hlds__tupling__Weight_6,
#line 1553 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_16,
#line 1553 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_17);

#line 1547 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__reset_count_state_counts_2_p_0(
#line 1547 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_4,
#line 1547 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_5);

#line 1539 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_clobber_regs_3_p_0(
#line 1539 "tupling.m"
  MR_Word transform_hlds__tupling__NewVars_4,
#line 1539 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_6,
#line 1539 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_7);

#line 1503 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_2_5_p_0(
#line 1503 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1503 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_2,
#line 1503 "tupling.m"
  MR_Word transform_hlds__tupling__Var_3,
#line 1503 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_4,
#line 1503 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_5);

#line 1500 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0_1(
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1500 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1494 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0(
#line 1494 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1494 "tupling.m"
  MR_Word transform_hlds__tupling__Vars_6,
#line 1494 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_10,
#line 1494 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_11);

#line 1468 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_3(
#line 1468 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1468 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1468 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1468 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1478 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_2(
#line 1478 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1478 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1478 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1478 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1468 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_1(
#line 1468 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1468 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1468 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1468 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1455 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0(
#line 1455 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_6,
#line 1455 "tupling.m"
  MR_Word transform_hlds__tupling__DeconstructCellVar_7,
#line 1455 "tupling.m"
  MR_Word transform_hlds__tupling__DeconstructFieldVars_8,
#line 1455 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_State_0_18,
#line 1455 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_State_19);

#line 1447 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_3_p_0(
#line 1447 "tupling.m"
  MR_Word transform_hlds__tupling__Vars_4,
#line 1447 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_8,
#line 1447 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_9);

#line 1432 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(
#line 1432 "tupling.m"
  MR_Integer transform_hlds__tupling__LoadCost_5,
#line 1432 "tupling.m"
  MR_Word transform_hlds__tupling__Var_6,
#line 1432 "tupling.m"
  MR_Word transform_hlds__tupling__CountState0_7,
#line 1432 "tupling.m"
  MR_Word * transform_hlds__tupling__CountState_8);

#line 1400 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_normal_var_in_reg_4_p_0(
#line 1400 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1400 "tupling.m"
  MR_Word transform_hlds__tupling__Var_6,
#line 1400 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_10,
#line 1400 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_11);

#line 1385 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_in_reg_4_p_0(
#line 1385 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1385 "tupling.m"
  MR_Word transform_hlds__tupling__Var_6,
#line 1385 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_12,
#line 1385 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_13);

#line 1383 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0_1(
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1383 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1379 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0(
#line 1379 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1379 "tupling.m"
  MR_Word transform_hlds__tupling__Vars_6,
#line 1379 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_8,
#line 1379 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_9);

#line 1500 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_cases_4_p_0_1(
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1500 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1351 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_cases_4_p_0(
#line 1351 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1351 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1351 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_3,
#line 1351 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_4);

#line 1500 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_disj_4_p_0_1(
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1500 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1328 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_disj_4_p_0(
#line 1328 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1328 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1328 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_3,
#line 1328 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_4);

#line 1320 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_conj_4_p_0(
#line 1320 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1320 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1320 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_3,
#line 1320 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_4);

#line 1383 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0_1(
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1383 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1268 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0(
#line 1268 "tupling.m"
  MR_Word transform_hlds__tupling__GoalExpr_6,
#line 1268 "tupling.m"
  MR_Word transform_hlds__tupling__GoalInfo_7,
#line 1268 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_8,
#line 1268 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_27,
#line 1268 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_28);

#line 1240 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_1(
#line 1240 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 1241 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_3(
#line 1241 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 1240 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_2(
#line 1240 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 1240 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_4(
#line 1240 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 1213 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0(
#line 1213 "tupling.m"
  MR_Word transform_hlds__tupling__GoalExpr_7,
#line 1213 "tupling.m"
  MR_Word transform_hlds__tupling__GoalInfo_8,
#line 1213 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_9,
#line 1213 "tupling.m"
  MR_Word transform_hlds__tupling__CalleeTuplingProposal_10,
#line 1213 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_39,
#line 1213 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_40);

#line 1126 "tupling.m"
static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_2(
#line 1126 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1126 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1);

#line 1125 "tupling.m"
static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_1(
#line 1125 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1125 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1);

#line 1040 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0(
#line 1040 "tupling.m"
  MR_Word transform_hlds__tupling__Goal_5,
#line 1040 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_6,
#line 1040 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_113,
#line 1040 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_114);

#line 1383 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_proc_3_p_0_1(
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1383 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1020 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_proc_3_p_0(
#line 1020 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_4,
#line 1020 "tupling.m"
  MR_Float * transform_hlds__tupling__Loads_5,
#line 1020 "tupling.m"
  MR_Float * transform_hlds__tupling__Stores_6);

#line 978 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(
#line 978 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_11,
#line 978 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_12,
#line 978 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_13,
#line 978 "tupling.m"
  MR_Word transform_hlds__tupling__TuplingScheme_14,
#line 978 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_15,
#line 978 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_16,
#line 978 "tupling.m"
  MR_Float transform_hlds__tupling__STATE_VARIABLE_Loads_0_34,
#line 978 "tupling.m"
  MR_Float * transform_hlds__tupling__STATE_VARIABLE_Loads_35,
#line 978 "tupling.m"
  MR_Float transform_hlds__tupling__STATE_VARIABLE_Stores_0_36,
#line 978 "tupling.m"
  MR_Float * transform_hlds__tupling__STATE_VARIABLE_Stores_37);

#line 973 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_7_p_0_1(
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 973 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 973 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5);

#line 965 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_7_p_0(
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_8,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_9,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_10,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__TuplingScheme_11,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_12,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_13,
#line 965 "tupling.m"
  MR_Word * transform_hlds__tupling__Costs_14);

#line 887 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__prepare_proc_for_counting_5_p_0(
#line 887 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_6,
#line 887 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ReverseGoalPathMapMap_0_31,
#line 887 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ReverseGoalPathMapMap_32,
#line 887 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33,
#line 887 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_34);

#line 877 "tupling.m"
static MR_Word MR_CALL 
transform_hlds__tupling__get_own_tupling_proposal_1_f_0(
#line 877 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_3);

#line 867 "tupling.m"
static MR_Word MR_CALL 
transform_hlds__tupling__get_tupling_proposal_2_f_0(
#line 867 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_4,
#line 867 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_5);

#line 765 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__create_aux_pred_9_p_0(
#line 765 "tupling.m"
  MR_Word transform_hlds__tupling__PredId_10,
#line 765 "tupling.m"
  MR_Integer transform_hlds__tupling__ProcId_11,
#line 765 "tupling.m"
  MR_Word transform_hlds__tupling__PredInfo_12,
#line 765 "tupling.m"
  MR_Word transform_hlds__tupling__ProcInfo_13,
#line 765 "tupling.m"
  MR_Integer transform_hlds__tupling__Counter_14,
#line 765 "tupling.m"
  MR_Word * transform_hlds__tupling__AuxPredProcId_15,
#line 765 "tupling.m"
  MR_Word * transform_hlds__tupling__CallAux_16,
#line 765 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo0_17,
#line 765 "tupling.m"
  MR_Word * transform_hlds__tupling__ModuleInfo_18);

#line 697 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0_1(
#line 697 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 697 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 697 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 697 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 690 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0(
#line 690 "tupling.m"
  MR_Word transform_hlds__tupling__CellVar_6,
#line 690 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVarsList_7,
#line 690 "tupling.m"
  MR_Word transform_hlds__tupling__InsertMap_8,
#line 690 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_0_34,
#line 690 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ProcInfo_35);

#line 667 "tupling.m"
static MR_Box MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0_1(
#line 667 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 667 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1);

#line 639 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0(
#line 639 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_1,
#line 639 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 639 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_3,
#line 639 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_4,
#line 639 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 639 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__6_6,
#line 639 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__7_7,
#line 639 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__8_8);

#line 636 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_procs_7_p_0_1(
#line 636 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 636 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 636 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 636 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 636 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4,
#line 636 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_5,
#line 636 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_6,
#line 636 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_7,
#line 636 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_8);

#line 631 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_procs_7_p_0(
#line 631 "tupling.m"
  MR_Word transform_hlds__tupling__TuplingScheme_8,
#line 631 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_12,
#line 631 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_13,
#line 631 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_14,
#line 631 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_15,
#line 631 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_16,
#line 631 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_17);

#line 576 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__make_tupling_proposal_5_p_0_1(
#line 576 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 576 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 576 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2);

#line 568 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__make_tupling_proposal_5_p_0(
#line 568 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_6,
#line 568 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_7,
#line 568 "tupling.m"
  MR_Integer transform_hlds__tupling__MinArgsToTuple_8,
#line 568 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_4,
#line 568 "tupling.m"
  MR_Word * transform_hlds__tupling__TuplingProposal_12);

#line 973 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_2(
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 973 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 973 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5);

#line 549 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_1(
#line 549 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 549 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 549 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2);

#line 538 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0(
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_9,
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_10,
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_11,
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_12,
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_13,
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_14,
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__MaybeBestScheme0_15,
#line 538 "tupling.m"
  MR_Word * transform_hlds__tupling__MaybeBestScheme_16);

#line 523 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_7_p_0(
#line 523 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_8,
#line 523 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_9,
#line 523 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_10,
#line 523 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_11,
#line 523 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_12,
#line 523 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_13,
#line 523 "tupling.m"
  MR_Word * transform_hlds__tupling__MaybeBestScheme_14);

#line 504 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0_1(
#line 504 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 504 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 504 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 504 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 489 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0(
#line 489 "tupling.m"
  MR_String transform_hlds__tupling__HeadVarName_5,
#line 489 "tupling.m"
  MR_Word transform_hlds__tupling__ListOfOrigins_6,
#line 489 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars0_7,
#line 489 "tupling.m"
  MR_Word * transform_hlds__tupling__CandidateHeadVars_8);

#line 463 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_2_6_f_0(
#line 463 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_8,
#line 463 "tupling.m"
  MR_Word transform_hlds__tupling__VarSet_9,
#line 463 "tupling.m"
  MR_Word transform_hlds__tupling__VarTypes_10,
#line 463 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_11,
#line 463 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar_12,
#line 463 "tupling.m"
  MR_Word transform_hlds__tupling__ArgMode_13,
#line 463 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__7_7);

#line 460 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0_1(
#line 460 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 460 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 460 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 460 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 449 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(
#line 449 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_4,
#line 449 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_2,
#line 449 "tupling.m"
  MR_Word * transform_hlds__tupling__CandidateHeadVars_8);

#line 366 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_3_13_p_0(
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_14,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_15,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_16,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_17,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_18,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__CostsWithoutTupling_19,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_30,
#line 366 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_32,
#line 366 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_33,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_34,
#line 366 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_35,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__VeryVerbose_23);

#line 342 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_1(
#line 342 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 342 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 342 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 342 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 342 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 342 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5);

#line 335 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0(
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_12,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_13,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_14,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_15,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_25,
#line 335 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_26,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_27,
#line 335 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_28,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_29,
#line 335 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_30,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__VeryVerbose_19);

#line 486 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_7(
#line 486 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 486 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 486 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 486 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 486 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 482 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_6(
#line 482 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 482 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 482 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2);

#line 271 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_1(
#line 271 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 271 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 271 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 271 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 321 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_2(
#line 321 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 321 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_4(
#line 321 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 321 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_3(
#line 321 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 321 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_5(
#line 321 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 258 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0(
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_11,
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_12,
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__DepGraph_13,
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__SCC_14,
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24,
#line 258 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_25,
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_26,
#line 258 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_27,
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_28,
#line 258 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_29);

#line 1699 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_3(
#line 1699 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1699 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1699 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1699 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 1699 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 234 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_2(
#line 234 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 234 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 234 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 234 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 228 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_1(
#line 228 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 228 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 228 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 228 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 228 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 228 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5,
#line 228 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_6,
#line 228 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_7);

#line 191 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0(
#line 191 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23,
#line 191 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24,
#line 191 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts0_5);


static /* final */ const MR_Box transform_hlds__tupling_scalar_common_1[14][2];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_2[16][3];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_3[5][1];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_4[2][13];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_5[8][7];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_6[5][8];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_7[4][6];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_8[2][10];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_9[1][11];

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_10[1][5];




static /* final */ const MR_Box transform_hlds__tupling_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
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
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__tupling_scalar_common_1[1]))
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
    ((MR_Box) (&transform_hlds__tupling_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_10_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__tupling__add_transformed_procs_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_10[0])),
    ((MR_Box) (transform_hlds__tupling__count_load_stores_in_goal_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__tupling_scalar_common_10[0])),
    ((MR_Box) (transform_hlds__tupling__count_load_stores_in_goal_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "TuplingCellVar"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_4[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tuning_params_0)),
    ((MR_Box) (&transform_hlds__tupling__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
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

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_5[8][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
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

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_6[5][8] = {
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
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0))
  },
  /* row 3 */
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
  /* row 4 */
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

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_7[4][6] = {
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

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_8[2][10] = {
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

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_9[1][11] = {
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

static /* final */ const MR_Box transform_hlds__tupling_scalar_common_10[1][5] = {
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



#line 2896 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 2905 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 2914 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2922 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2930 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0
  }
};

#line 2939 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2947 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2956 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2965 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2973 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2981 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 2990 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 2999 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3007 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 3016 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3024 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3033 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3042 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_tupling_proposal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0
  }
};

#line 3051 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3059 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3068 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 3077 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3085 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 3093 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 3102 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_candidate_headvar_origins_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____candidate_headvar_origins_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____candidate_headvar_origins_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "candidate_headvar_origins",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3119 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3127 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_candidate_headvars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____candidate_headvars_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____candidate_headvars_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "candidate_headvars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__tupling__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3144 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_costs_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3150 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_costs_0_0[2] = {
  (MR_String) "avg_loads",
  (MR_String) "avg_stores"
};

#line 3156 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_costs_0_0 = {
  (MR_String) "costs",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__tupling__transform_hlds__tupling__field_types_costs_0_0,
  transform_hlds__tupling__transform_hlds__tupling__field_names_costs_0_0,
  NULL,
  NULL
};

#line 3171 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_costs_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_costs_0_0
};

#line 3176 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_costs_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_costs_0_0
  }
};

#line 3185 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_costs_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_costs_0_0
};

#line 3190 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_costs_0[1] = {
  (MR_Integer) 0
};

#line 3195 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_costs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 3212 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0
  }
};

#line 3221 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_count_info_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tuning_params_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 3233 "transform_hlds.tupling.c"
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

#line 3245 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_info_0_0 = {
  (MR_String) "count_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__tupling__transform_hlds__tupling__field_types_count_info_0_0,
  transform_hlds__tupling__transform_hlds__tupling__field_names_count_info_0_0,
  NULL,
  NULL
};

#line 3260 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_info_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_info_0_0
};

#line 3265 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_info_0_0
  }
};

#line 3274 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_info_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_info_0_0
};

#line 3279 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_info_0[1] = {
  (MR_Integer) 0
};

#line 3284 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 3301 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3309 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_count_state_0_0[4] = {
  (MR_PseudoTypeInfo) &transform_hlds__tupling__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3317 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_count_state_0_0[4] = {
  (MR_String) "cs_reg_vars",
  (MR_String) "cs_stack_vars",
  (MR_String) "cs_load_costs",
  (MR_String) "cs_store_costs"
};

#line 3325 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_state_0_0 = {
  (MR_String) "count_state",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__tupling__transform_hlds__tupling__field_types_count_state_0_0,
  transform_hlds__tupling__transform_hlds__tupling__field_names_count_state_0_0,
  NULL,
  NULL
};

#line 3340 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_state_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_state_0_0
};

#line 3345 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_state_0_0
  }
};

#line 3354 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_state_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_state_0_0
};

#line 3359 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_state_0[1] = {
  (MR_Integer) 0
};

#line 3364 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 3381 "transform_hlds.tupling.c"
static const MR_EnumFunctorDesc transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0 = {
  (MR_String) "opt_tuple_alloc",
  (MR_Integer) 0
};

#line 3387 "transform_hlds.tupling.c"
static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_value_ordered_opt_tuple_alloc_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0
};

#line 3392 "transform_hlds.tupling.c"
static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_name_ordered_opt_tuple_alloc_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0
};

#line 3397 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_opt_tuple_alloc_0[1] = {
  (MR_Integer) 0
};

#line 3402 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_opt_tuple_alloc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
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

#line 3419 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0
  }
};

#line 3428 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transform_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____transform_map_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____transform_map_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "transform_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_transformed_proc_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3445 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3453 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_transformed_proc_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 3461 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_transformed_proc_0_0[4] = {
  (MR_String) "transformed_pred_proc_id",
  (MR_String) "tuple_cons_type",
  (MR_String) "args_to_tuple",
  (MR_String) "call_template"
};

#line 3469 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_transformed_proc_0_0 = {
  (MR_String) "transformed_proc",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__tupling__transform_hlds__tupling__field_types_transformed_proc_0_0,
  transform_hlds__tupling__transform_hlds__tupling__field_names_transformed_proc_0_0,
  NULL,
  NULL
};

#line 3484 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_transformed_proc_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_transformed_proc_0_0
};

#line 3489 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_transformed_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_transformed_proc_0_0
  }
};

#line 3498 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_transformed_proc_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_transformed_proc_0_0
};

#line 3503 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_transformed_proc_0[1] = {
  (MR_Integer) 0
};

#line 3508 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 3525 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_tuning_params_0_0[8] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3537 "transform_hlds.tupling.c"
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

#line 3549 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tuning_params_0_0 = {
  (MR_String) "tuning_params",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__tupling__transform_hlds__tupling__field_types_tuning_params_0_0,
  transform_hlds__tupling__transform_hlds__tupling__field_names_tuning_params_0_0,
  NULL,
  NULL
};

#line 3564 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tuning_params_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tuning_params_0_0
};

#line 3569 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tuning_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tuning_params_0_0
  }
};

#line 3578 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tuning_params_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tuning_params_0_0
};

#line 3583 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tuning_params_0[1] = {
  (MR_Integer) 0
};

#line 3588 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tuning_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 3605 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0 = {
  (MR_String) "no_tupling",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3620 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3628 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3637 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__tupling__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0
  }
};

#line 3645 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_tupling_proposal_0_1[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0
};

#line 3652 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_tupling_proposal_0_1[3] = {
  (MR_String) "cell_var",
  (MR_String) "field_vars",
  (MR_String) "field_var_arg_pos"
};

#line 3659 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1 = {
  (MR_String) "tupling",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__tupling__transform_hlds__tupling__field_types_tupling_proposal_0_1,
  transform_hlds__tupling__transform_hlds__tupling__field_names_tupling_proposal_0_1,
  NULL,
  NULL
};

#line 3674 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0
};

#line 3679 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_1[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1
};

#line 3684 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tupling_proposal_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_1
  }
};

#line 3698 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tupling_proposal_0[2] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0,
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1
};

#line 3704 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tupling_proposal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3710 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 3727 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_scheme_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____tupling_scheme_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____tupling_scheme_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "tupling_scheme",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3744 "transform_hlds.tupling.c"
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

#line 3757 "transform_hlds.tupling.c"
const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__unit__unit__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0_10001))
};

#line 3767 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0_10001(
#line 3770 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 3772 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 3774 "transform_hlds.tupling.c"
{
#line 3776 "transform_hlds.tupling.c"
  {
#line 3778 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 3781 "transform_hlds.tupling.c"
    {
#line 3783 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____candidate_headvar_origins_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 3786 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 3788 "transform_hlds.tupling.c"
  }
#line 3790 "transform_hlds.tupling.c"
}

#line 3793 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0_10001(
#line 3796 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 3798 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 3800 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 3802 "transform_hlds.tupling.c"
{
#line 3804 "transform_hlds.tupling.c"
  {
#line 3806 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 3809 "transform_hlds.tupling.c"
    {
#line 3811 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____candidate_headvar_origins_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 3814 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 3816 "transform_hlds.tupling.c"
  }
#line 3818 "transform_hlds.tupling.c"
}

#line 3821 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0_10001(
#line 3824 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 3826 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 3828 "transform_hlds.tupling.c"
{
#line 3830 "transform_hlds.tupling.c"
  {
#line 3832 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 3835 "transform_hlds.tupling.c"
    {
#line 3837 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____candidate_headvars_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 3840 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 3842 "transform_hlds.tupling.c"
  }
#line 3844 "transform_hlds.tupling.c"
}

#line 3847 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0_10001(
#line 3850 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 3852 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 3854 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 3856 "transform_hlds.tupling.c"
{
#line 3858 "transform_hlds.tupling.c"
  {
#line 3860 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 3863 "transform_hlds.tupling.c"
    {
#line 3865 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____candidate_headvars_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 3868 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 3870 "transform_hlds.tupling.c"
  }
#line 3872 "transform_hlds.tupling.c"
}

#line 3875 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0_10001(
#line 3878 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 3880 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 3882 "transform_hlds.tupling.c"
{
#line 3884 "transform_hlds.tupling.c"
  {
#line 3886 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 3889 "transform_hlds.tupling.c"
    {
#line 3891 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____costs_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 3894 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 3896 "transform_hlds.tupling.c"
  }
#line 3898 "transform_hlds.tupling.c"
}

#line 3901 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0_10001(
#line 3904 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 3906 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 3908 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 3910 "transform_hlds.tupling.c"
{
#line 3912 "transform_hlds.tupling.c"
  {
#line 3914 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 3917 "transform_hlds.tupling.c"
    {
#line 3919 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____costs_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 3922 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 3924 "transform_hlds.tupling.c"
  }
#line 3926 "transform_hlds.tupling.c"
}

#line 3929 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0_10001(
#line 3932 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 3934 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 3936 "transform_hlds.tupling.c"
{
#line 3938 "transform_hlds.tupling.c"
  {
#line 3940 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 3943 "transform_hlds.tupling.c"
    {
#line 3945 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____count_info_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 3948 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 3950 "transform_hlds.tupling.c"
  }
#line 3952 "transform_hlds.tupling.c"
}

#line 3955 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0_10001(
#line 3958 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 3960 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 3962 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 3964 "transform_hlds.tupling.c"
{
#line 3966 "transform_hlds.tupling.c"
  {
#line 3968 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 3971 "transform_hlds.tupling.c"
    {
#line 3973 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____count_info_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 3976 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 3978 "transform_hlds.tupling.c"
  }
#line 3980 "transform_hlds.tupling.c"
}

#line 3983 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0_10001(
#line 3986 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 3988 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 3990 "transform_hlds.tupling.c"
{
#line 3992 "transform_hlds.tupling.c"
  {
#line 3994 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 3997 "transform_hlds.tupling.c"
    {
#line 3999 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____count_state_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4002 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4004 "transform_hlds.tupling.c"
  }
#line 4006 "transform_hlds.tupling.c"
}

#line 4009 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0_10001(
#line 4012 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4014 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4016 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4018 "transform_hlds.tupling.c"
{
#line 4020 "transform_hlds.tupling.c"
  {
#line 4022 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4025 "transform_hlds.tupling.c"
    {
#line 4027 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____count_state_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 4030 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4032 "transform_hlds.tupling.c"
  }
#line 4034 "transform_hlds.tupling.c"
}

#line 4037 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0_10001(
#line 4040 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4042 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 4044 "transform_hlds.tupling.c"
{
#line 4046 "transform_hlds.tupling.c"
  {
#line 4048 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4051 "transform_hlds.tupling.c"
    {
#line 4053 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____opt_tuple_alloc_0_0();
    }
#line 4056 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4058 "transform_hlds.tupling.c"
  }
#line 4060 "transform_hlds.tupling.c"
}

#line 4063 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0_10001(
#line 4066 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4068 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4070 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4072 "transform_hlds.tupling.c"
{
#line 4074 "transform_hlds.tupling.c"
  {
#line 4076 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4079 "transform_hlds.tupling.c"
    {
#line 4081 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____opt_tuple_alloc_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1);
    }
#line 4084 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4086 "transform_hlds.tupling.c"
  }
#line 4088 "transform_hlds.tupling.c"
}

#line 4091 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0_10001(
#line 4094 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4096 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 4098 "transform_hlds.tupling.c"
{
#line 4100 "transform_hlds.tupling.c"
  {
#line 4102 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4105 "transform_hlds.tupling.c"
    {
#line 4107 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____transform_map_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4110 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4112 "transform_hlds.tupling.c"
  }
#line 4114 "transform_hlds.tupling.c"
}

#line 4117 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0_10001(
#line 4120 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4122 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4124 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4126 "transform_hlds.tupling.c"
{
#line 4128 "transform_hlds.tupling.c"
  {
#line 4130 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4133 "transform_hlds.tupling.c"
    {
#line 4135 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____transform_map_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 4138 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4140 "transform_hlds.tupling.c"
  }
#line 4142 "transform_hlds.tupling.c"
}

#line 4145 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0_10001(
#line 4148 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4150 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 4152 "transform_hlds.tupling.c"
{
#line 4154 "transform_hlds.tupling.c"
  {
#line 4156 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4159 "transform_hlds.tupling.c"
    {
#line 4161 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____transformed_proc_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4164 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4166 "transform_hlds.tupling.c"
  }
#line 4168 "transform_hlds.tupling.c"
}

#line 4171 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0_10001(
#line 4174 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4176 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4178 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4180 "transform_hlds.tupling.c"
{
#line 4182 "transform_hlds.tupling.c"
  {
#line 4184 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4187 "transform_hlds.tupling.c"
    {
#line 4189 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____transformed_proc_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 4192 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4194 "transform_hlds.tupling.c"
  }
#line 4196 "transform_hlds.tupling.c"
}

#line 4199 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0_10001(
#line 4202 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4204 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 4206 "transform_hlds.tupling.c"
{
#line 4208 "transform_hlds.tupling.c"
  {
#line 4210 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4213 "transform_hlds.tupling.c"
    {
#line 4215 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____tuning_params_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4218 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4220 "transform_hlds.tupling.c"
  }
#line 4222 "transform_hlds.tupling.c"
}

#line 4225 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0_10001(
#line 4228 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4230 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4232 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4234 "transform_hlds.tupling.c"
{
#line 4236 "transform_hlds.tupling.c"
  {
#line 4238 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4241 "transform_hlds.tupling.c"
    {
#line 4243 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____tuning_params_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 4246 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4248 "transform_hlds.tupling.c"
  }
#line 4250 "transform_hlds.tupling.c"
}

#line 4253 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0_10001(
#line 4256 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4258 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 4260 "transform_hlds.tupling.c"
{
#line 4262 "transform_hlds.tupling.c"
  {
#line 4264 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4267 "transform_hlds.tupling.c"
    {
#line 4269 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____tupling_proposal_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4272 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4274 "transform_hlds.tupling.c"
  }
#line 4276 "transform_hlds.tupling.c"
}

#line 4279 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0_10001(
#line 4282 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4284 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4286 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4288 "transform_hlds.tupling.c"
{
#line 4290 "transform_hlds.tupling.c"
  {
#line 4292 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4295 "transform_hlds.tupling.c"
    {
#line 4297 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____tupling_proposal_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 4300 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4302 "transform_hlds.tupling.c"
  }
#line 4304 "transform_hlds.tupling.c"
}

#line 4307 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0_10001(
#line 4310 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4312 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 4314 "transform_hlds.tupling.c"
{
#line 4316 "transform_hlds.tupling.c"
  {
#line 4318 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4321 "transform_hlds.tupling.c"
    {
#line 4323 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____tupling_scheme_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4326 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4328 "transform_hlds.tupling.c"
  }
#line 4330 "transform_hlds.tupling.c"
}

#line 4333 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0_10001(
#line 4336 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4338 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4340 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4342 "transform_hlds.tupling.c"
{
#line 4344 "transform_hlds.tupling.c"
  {
#line 4346 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4349 "transform_hlds.tupling.c"
    {
#line 4351 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____tupling_scheme_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 4354 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4356 "transform_hlds.tupling.c"
  }
#line 4358 "transform_hlds.tupling.c"
}

#line 4361 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 4364 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 4366 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4368 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4370 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 4372 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 4374 "transform_hlds.tupling.c"
{
#line 4376 "transform_hlds.tupling.c"
  {
#line 4378 "transform_hlds.tupling.c"
    MR_Box transform_hlds__tupling__closure;

#line 4381 "transform_hlds.tupling.c"
    transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 4383 "transform_hlds.tupling.c"
    {
#line 4385 "transform_hlds.tupling.c"
      transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4388 "transform_hlds.tupling.c"
  }
#line 4390 "transform_hlds.tupling.c"
}

#line 4393 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 4396 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 4398 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4400 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4402 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 4404 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 4406 "transform_hlds.tupling.c"
{
#line 4408 "transform_hlds.tupling.c"
  {
#line 4410 "transform_hlds.tupling.c"
    MR_Box transform_hlds__tupling__closure;

#line 4413 "transform_hlds.tupling.c"
    transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 4415 "transform_hlds.tupling.c"
    {
#line 4417 "transform_hlds.tupling.c"
      transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4420 "transform_hlds.tupling.c"
  }
#line 4422 "transform_hlds.tupling.c"
}

#line 4425 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 4428 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 4430 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4432 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4434 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 4436 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 4438 "transform_hlds.tupling.c"
{
#line 4440 "transform_hlds.tupling.c"
  {
#line 4442 "transform_hlds.tupling.c"
    MR_Box transform_hlds__tupling__closure;

#line 4445 "transform_hlds.tupling.c"
    transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 4447 "transform_hlds.tupling.c"
    {
#line 4449 "transform_hlds.tupling.c"
      transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4452 "transform_hlds.tupling.c"
  }
#line 4454 "transform_hlds.tupling.c"
}

#line 4457 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 4460 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 4462 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4464 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4466 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 4468 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 4470 "transform_hlds.tupling.c"
{
#line 4472 "transform_hlds.tupling.c"
  {
#line 4474 "transform_hlds.tupling.c"
    MR_Box transform_hlds__tupling__closure;

#line 4477 "transform_hlds.tupling.c"
    transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 4479 "transform_hlds.tupling.c"
    {
#line 4481 "transform_hlds.tupling.c"
      transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4484 "transform_hlds.tupling.c"
  }
#line 4486 "transform_hlds.tupling.c"
}

#line 4489 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
#line 4492 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 4494 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4496 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4498 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 4500 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 4502 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_5,
#line 4504 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_6,
#line 4506 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_7,
#line 4508 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_8)
#line 4510 "transform_hlds.tupling.c"
{
#line 4512 "transform_hlds.tupling.c"
  {
#line 4514 "transform_hlds.tupling.c"
    MR_Box transform_hlds__tupling__closure;
#line 4516 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__6_6;

#line 4519 "transform_hlds.tupling.c"
    transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 4521 "transform_hlds.tupling.c"
    {
#line 4523 "transform_hlds.tupling.c"
      transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3), ((MR_Word) transform_hlds__tupling__wrapper_arg_4), ((MR_Word) transform_hlds__tupling__wrapper_arg_5), &transform_hlds__tupling__conv0_HeadVar__6_6);
    }
#line 4526 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_6 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__6_6));
#line 4528 "transform_hlds.tupling.c"
  }
#line 4530 "transform_hlds.tupling.c"
}

#line 614 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_p_0(
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__V_19_19,
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__V_20_20,
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__V_21_21,
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__V_22_22,
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__V_23_23,
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__List_7,
#line 614 "tupling.m"
  MR_Integer transform_hlds__tupling__Length_8,
#line 614 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_0_11,
#line 614 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Acc_12)
#line 614 "tupling.m"
{
#line 619 "tupling.m"
  while (MR_TRUE)
#line 619 "tupling.m"
    {
#line 619 "tupling.m"
      /* tailcall optimized into a loop */
#line 619 "tupling.m"
      {
#line 619 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;
#line 619 "tupling.m"
        MR_Word transform_hlds__tupling__Front_10;

#line 619 "tupling.m"
        {
#line 619 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__list__take_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[2], transform_hlds__tupling__Length_8, transform_hlds__tupling__List_7, &transform_hlds__tupling__Front_10);
        }
#line 619 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 620 "tupling.m"
          {
#line 620 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_13_13;
#line 620 "tupling.m"
            MR_Integer transform_hlds__tupling__V_14_14;

#line 620 "tupling.m"
            {
#line 620 "tupling.m"
              transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0(transform_hlds__tupling__V_19_19, transform_hlds__tupling__V_20_20, transform_hlds__tupling__V_21_21, transform_hlds__tupling__V_22_22, transform_hlds__tupling__V_23_23, transform_hlds__tupling__Front_10, transform_hlds__tupling__STATE_VARIABLE_Acc_0_11, &transform_hlds__tupling__STATE_VARIABLE_Acc_13_13);
            }
#line 621 "tupling.m"
            transform_hlds__tupling__V_14_14 = (transform_hlds__tupling__Length_8 + (MR_Integer) 1);
#line 621 "tupling.m"
            /* direct tailcall eliminated */
#line 621 "tupling.m"
            {
#line 621 "tupling.m"
              MR_Integer transform_hlds__tupling__Length__tmp_copy_8 = transform_hlds__tupling__V_14_14;
#line 621 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_0__tmp_copy_11 = transform_hlds__tupling__STATE_VARIABLE_Acc_13_13;

#line 621 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_Acc_0_11 = transform_hlds__tupling__STATE_VARIABLE_Acc_0__tmp_copy_11;
#line 621 "tupling.m"
              transform_hlds__tupling__Length_8 = transform_hlds__tupling__Length__tmp_copy_8;
#line 621 "tupling.m"
            }
#line 621 "tupling.m"
            continue;
#line 620 "tupling.m"
          }
#line 619 "tupling.m"
        else
#line 619 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_Acc_12 = transform_hlds__tupling__STATE_VARIABLE_Acc_0_11;
#line 619 "tupling.m"
      }
#line 619 "tupling.m"
      break;
#line 619 "tupling.m"
    }
#line 614 "tupling.m"
}

#line 606 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_p_0(
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__V_23_23,
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__V_24_24,
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__V_25_25,
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__V_26_26,
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__V_27_27,
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 606 "tupling.m"
  MR_Integer transform_hlds__tupling__MinLength_3,
#line 606 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_0_4,
#line 606 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Acc_5)
#line 606 "tupling.m"
{
#line 609 "tupling.m"
  while (MR_TRUE)
#line 609 "tupling.m"
    {
#line 609 "tupling.m"
      /* tailcall optimized into a loop */
#line 609 "tupling.m"
      {
#line 609 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;

#line 609 "tupling.m"
        if ((transform_hlds__tupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_Acc_5 = transform_hlds__tupling__STATE_VARIABLE_Acc_0_4;
#line 609 "tupling.m"
        else
#line 610 "tupling.m"
          {
#line 610 "tupling.m"
            MR_Word transform_hlds__tupling__Tail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 610 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_19_19;
#line 610 "tupling.m"
            MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));

#line 611 "tupling.m"
            {
#line 611 "tupling.m"
              transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_p_0(transform_hlds__tupling__V_23_23, transform_hlds__tupling__V_24_24, transform_hlds__tupling__V_25_25, transform_hlds__tupling__V_26_26, transform_hlds__tupling__V_27_27, transform_hlds__tupling__HeadVar__2_2, transform_hlds__tupling__MinLength_3, transform_hlds__tupling__STATE_VARIABLE_Acc_0_4, &transform_hlds__tupling__STATE_VARIABLE_Acc_19_19);
            }
#line 612 "tupling.m"
            /* direct tailcall eliminated */
#line 612 "tupling.m"
            {
#line 612 "tupling.m"
              MR_Word transform_hlds__tupling__HeadVar__2__tmp_copy_2 = transform_hlds__tupling__Tail_14;
#line 612 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_0__tmp_copy_4 = transform_hlds__tupling__STATE_VARIABLE_Acc_19_19;

#line 612 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_Acc_0_4 = transform_hlds__tupling__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 612 "tupling.m"
              transform_hlds__tupling__HeadVar__2_2 = transform_hlds__tupling__HeadVar__2__tmp_copy_2;
#line 612 "tupling.m"
            }
#line 612 "tupling.m"
            continue;
#line 610 "tupling.m"
          }
#line 609 "tupling.m"
      }
#line 609 "tupling.m"
      break;
#line 609 "tupling.m"
    }
#line 606 "tupling.m"
}

#line 939 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
#line 939 "tupling.m"
{
#line 961 "tupling.m"
  {
#line 961 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 961 "tupling.m"
  }
#line 939 "tupling.m"
}

#line 938 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
#line 938 "tupling.m"
{
#line 956 "tupling.m"
  {
#line 956 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 956 "tupling.m"
  }
#line 938 "tupling.m"
}

#line 937 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
#line 937 "tupling.m"
{
#line 951 "tupling.m"
  {
#line 951 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 951 "tupling.m"
  }
#line 937 "tupling.m"
}

#line 936 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
#line 936 "tupling.m"
{
#line 946 "tupling.m"
  {
#line 946 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 946 "tupling.m"
  }
#line 936 "tupling.m"
}

#line 1594 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_p_0(
#line 1594 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 1594 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__6_6)
#line 1594 "tupling.m"
{
#line 1600 "tupling.m"
  {
#line 1600 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1600 "tupling.m"
    *transform_hlds__tupling__HeadVar__6_6 = transform_hlds__tupling__HeadVar__5_5;
#line 1600 "tupling.m"
  }
#line 1594 "tupling.m"
}

#line 932 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 932 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1)
#line 932 "tupling.m"
{
#line 932 "tupling.m"
  {
#line 932 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 932 "tupling.m"
    *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 932 "tupling.m"
  }
#line 932 "tupling.m"
}

#line 932 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 932 "tupling.m"
{
#line 932 "tupling.m"
  {
#line 932 "tupling.m"
    return MR_TRUE;
#line 932 "tupling.m"
  }
#line 932 "tupling.m"
}

#line 1702 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_6,
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13,
#line 1702 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14)
#line 1702 "tupling.m"
{
#line 1706 "tupling.m"
  {
#line 1706 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1706 "tupling.m"
    MR_Word transform_hlds__tupling__PredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 1706 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 1706 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 2)));
#line 1706 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 3)));

#line 1707 "tupling.m"
    {
#line 1707 "tupling.m"
      transform_hlds__tupling__fix_calls_in_proc_4_p_0(transform_hlds__tupling__TransformMap_6, transform_hlds__tupling__PredProcId_8, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14);
    }
#line 1706 "tupling.m"
  }
#line 1702 "tupling.m"
}

#line 1500 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_2(
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1500 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1500 "tupling.m"
{
#line 1500 "tupling.m"
  {
#line 1500 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1500 "tupling.m"
    MR_Word transform_hlds__tupling__conv3_STATE_VARIABLE_CountState_5;

#line 1500 "tupling.m"
    {
#line 1500 "tupling.m"
      transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv3_STATE_VARIABLE_CountState_5);
    }
#line 1500 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv3_STATE_VARIABLE_CountState_5));
#line 1500 "tupling.m"
  }
#line 1500 "tupling.m"
}

#line 1383 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_1(
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1383 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1383 "tupling.m"
{
#line 1383 "tupling.m"
  {
#line 1383 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1383 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13;

#line 1383 "tupling.m"
    {
#line 1383 "tupling.m"
      transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13);
    }
#line 1383 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13));
#line 1383 "tupling.m"
  }
#line 1383 "tupling.m"
}

#line 1298 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(
#line 1298 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_8,
#line 1298 "tupling.m"
  MR_Word transform_hlds__tupling__Inputs_9,
#line 1298 "tupling.m"
  MR_Word transform_hlds__tupling__Outputs_10,
#line 1298 "tupling.m"
  MR_Word transform_hlds__tupling__MaybeNeedAcrossCall_11,
#line 1298 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_19,
#line 1298 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_20)
#line 1298 "tupling.m"
{
#line 1303 "tupling.m"
  {
#line 1303 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1303 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_21_21;
#line 1303 "tupling.m"
    MR_Word transform_hlds__tupling__V_37_37;
#line 1383 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_21_21;

#line 1383 "tupling.m"
    {
#line 1383 "tupling.m"
      transform_hlds__tupling__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1383 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[5]));
#line 1383 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 1) = ((MR_Box) (transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_1));
#line 1383 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1383 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 3) = ((MR_Box) (transform_hlds__tupling__CountInfo_8));
#line 1383 "tupling.m"
    }
#line 1383 "tupling.m"
    {
#line 1383 "tupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_37_37, transform_hlds__tupling__Inputs_9, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_0_19)), &transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_21_21);
    }
#line 1383 "tupling.m"
    transform_hlds__tupling__STATE_VARIABLE_CountState_21_21 = ((MR_Word) transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_21_21);
#line 1313 "tupling.m"
    if ((transform_hlds__tupling__MaybeNeedAcrossCall_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1314 "tupling.m"
      {
#line 1315 "tupling.m"
        {
#line 1315 "tupling.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.count_load_stores_for_call\'/7", (MR_String) "no need across call");
#line 1315 "tupling.m"
          return;
        }
#line 1314 "tupling.m"
      }
#line 1313 "tupling.m"
    else
#line 1306 "tupling.m"
      {
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__NeedAcrossCall_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__MaybeNeedAcrossCall_11, (MR_Integer) 0)));
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__ForwardVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__NeedAcrossCall_14, (MR_Integer) 0)));
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__ResumeVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__NeedAcrossCall_14, (MR_Integer) 1)));
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__NondetLiveVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__NeedAcrossCall_14, (MR_Integer) 2)));
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__AllVars_18;
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__V_25_25;
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__V_26_26;
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__V_27_27;
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_29_29;
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__TuplingProposal_49;
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__TuningParams_50;
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__V_51_51;
#line 1306 "tupling.m"
        MR_Word transform_hlds__tupling__V_66_66;
#line 880 "tupling.m"
        MR_Word transform_hlds__tupling__V_67_67;
#line 880 "tupling.m"
        MR_Word transform_hlds__tupling__V_68_68;
#line 880 "tupling.m"
        MR_Word transform_hlds__tupling__V_69_69;
#line 880 "tupling.m"
        MR_Word transform_hlds__tupling__V_70_70;
#line 880 "tupling.m"
        MR_Word transform_hlds__tupling__V_71_71;
#line 880 "tupling.m"
        MR_Word transform_hlds__tupling__V_72_72;
#line 880 "tupling.m"
        MR_Word transform_hlds__tupling__V_73_73;
#line 871 "tupling.m"
        MR_Word transform_hlds__tupling__Probe_77;
#line 871 "tupling.m"
        MR_Word transform_hlds__tupling__V_78_78;
#line 871 "tupling.m"
        MR_Word transform_hlds__tupling__V_79_79;
#line 871 "tupling.m"
        MR_Word transform_hlds__tupling__V_80_80;
#line 871 "tupling.m"
        MR_Word transform_hlds__tupling__V_81_81;
#line 871 "tupling.m"
        MR_Word transform_hlds__tupling__V_82_82;
#line 871 "tupling.m"
        MR_Word transform_hlds__tupling__V_83_83;
#line 871 "tupling.m"
        MR_Word transform_hlds__tupling__V_84_84;
#line 871 "tupling.m"
        MR_Word transform_hlds__tupling__V_85_85;
#line 871 "tupling.m"
        MR_Box transform_hlds__tupling__conv2_Probe_77;
#line 1499 "tupling.m"
        MR_Word transform_hlds__tupling__V_53_53;
#line 1499 "tupling.m"
        MR_Word transform_hlds__tupling__V_54_54;
#line 1499 "tupling.m"
        MR_Word transform_hlds__tupling__V_55_55;
#line 1499 "tupling.m"
        MR_Word transform_hlds__tupling__V_56_56;
#line 1499 "tupling.m"
        MR_Word transform_hlds__tupling__V_57_57;
#line 1499 "tupling.m"
        MR_Word transform_hlds__tupling__V_58_58;
#line 1499 "tupling.m"
        MR_Word transform_hlds__tupling__V_59_59;
#line 1500 "tupling.m"
        MR_Box transform_hlds__tupling__conv4_STATE_VARIABLE_CountState_29_29;

#line 1310 "tupling.m"
        {
#line 1310 "tupling.m"
          transform_hlds__tupling__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_27_27, 0) = ((MR_Box) (transform_hlds__tupling__NondetLiveVars_17));
#line 1310 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1310 "tupling.m"
        }
#line 1310 "tupling.m"
        {
#line 1310 "tupling.m"
          transform_hlds__tupling__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_26_26, 0) = ((MR_Box) (transform_hlds__tupling__ResumeVars_16));
#line 1310 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_26_26, 1) = ((MR_Box) (transform_hlds__tupling__V_27_27));
#line 1310 "tupling.m"
        }
#line 1310 "tupling.m"
        {
#line 1310 "tupling.m"
          transform_hlds__tupling__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_25_25, 0) = ((MR_Box) (transform_hlds__tupling__ForwardVars_15));
#line 1310 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_25_25, 1) = ((MR_Box) (transform_hlds__tupling__V_26_26));
#line 1310 "tupling.m"
        }
#line 1309 "tupling.m"
        {
#line 1309 "tupling.m"
          transform_hlds__tupling__AllVars_18 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__V_25_25);
        }
#line 880 "tupling.m"
        transform_hlds__tupling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 0)));
#line 880 "tupling.m"
        transform_hlds__tupling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 1)));
#line 880 "tupling.m"
        transform_hlds__tupling__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 2)));
#line 880 "tupling.m"
        transform_hlds__tupling__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 3)));
#line 880 "tupling.m"
        transform_hlds__tupling__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 4)));
#line 880 "tupling.m"
        transform_hlds__tupling__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 5)));
#line 880 "tupling.m"
        transform_hlds__tupling__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 6)));
#line 880 "tupling.m"
        transform_hlds__tupling__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 7)));
#line 871 "tupling.m"
        transform_hlds__tupling__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 0)));
#line 871 "tupling.m"
        transform_hlds__tupling__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 1)));
#line 871 "tupling.m"
        transform_hlds__tupling__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 2)));
#line 871 "tupling.m"
        transform_hlds__tupling__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 3)));
#line 871 "tupling.m"
        transform_hlds__tupling__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 4)));
#line 871 "tupling.m"
        transform_hlds__tupling__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 5)));
#line 871 "tupling.m"
        transform_hlds__tupling__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 6)));
#line 871 "tupling.m"
        transform_hlds__tupling__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 7)));
#line 871 "tupling.m"
        {
#line 871 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_78_78, ((MR_Box) (transform_hlds__tupling__V_66_66)), &transform_hlds__tupling__conv2_Probe_77);
        }
#line 871 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 871 "tupling.m"
          {
#line 871 "tupling.m"
            transform_hlds__tupling__Probe_77 = ((MR_Word) transform_hlds__tupling__conv2_Probe_77);
#line 871 "tupling.m"
            transform_hlds__tupling__succeeded = MR_TRUE;
#line 871 "tupling.m"
          }
#line 871 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 872 "tupling.m"
          transform_hlds__tupling__TuplingProposal_49 = transform_hlds__tupling__Probe_77;
#line 871 "tupling.m"
        else
#line 874 "tupling.m"
          transform_hlds__tupling__TuplingProposal_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1499 "tupling.m"
        transform_hlds__tupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 0)));
#line 1499 "tupling.m"
        transform_hlds__tupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 1)));
#line 1499 "tupling.m"
        transform_hlds__tupling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 2)));
#line 1499 "tupling.m"
        transform_hlds__tupling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 3)));
#line 1499 "tupling.m"
        transform_hlds__tupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 4)));
#line 1499 "tupling.m"
        transform_hlds__tupling__TuningParams_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 5)));
#line 1499 "tupling.m"
        transform_hlds__tupling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 6)));
#line 1499 "tupling.m"
        transform_hlds__tupling__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 7)));
#line 1500 "tupling.m"
        {
#line 1500 "tupling.m"
          transform_hlds__tupling__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1500 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[3]));
#line 1500 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 1) = ((MR_Box) (transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_2));
#line 1500 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1500 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 3) = ((MR_Box) (transform_hlds__tupling__TuplingProposal_49));
#line 1500 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_50));
#line 1500 "tupling.m"
        }
#line 1500 "tupling.m"
        {
#line 1500 "tupling.m"
          parse_tree__set_of_var__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_51_51, transform_hlds__tupling__AllVars_18, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_21_21)), &transform_hlds__tupling__conv4_STATE_VARIABLE_CountState_29_29);
        }
#line 1500 "tupling.m"
        transform_hlds__tupling__STATE_VARIABLE_CountState_29_29 = ((MR_Word) transform_hlds__tupling__conv4_STATE_VARIABLE_CountState_29_29);
#line 1312 "tupling.m"
        {
#line 1312 "tupling.m"
          transform_hlds__tupling__cls_clobber_regs_3_p_0(transform_hlds__tupling__Outputs_10, transform_hlds__tupling__STATE_VARIABLE_CountState_29_29, transform_hlds__tupling__STATE_VARIABLE_CountState_20);
        }
#line 1306 "tupling.m"
      }
#line 1303 "tupling.m"
  }
#line 1298 "tupling.m"
}

#line 1919 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1919__1_3_p_0(
#line 1919 "tupling.m"
  MR_Word transform_hlds__tupling__ArgList_5,
#line 1919 "tupling.m"
  MR_Integer transform_hlds__tupling__HeadVar__2_11,
#line 1919 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__3_12)
#line 1919 "tupling.m"
{
#line 1919 "tupling.m"
  {
#line 1919 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1919 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_HeadVar__3_12;

#line 1919 "tupling.m"
    {
#line 1919 "tupling.m"
      mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__ArgList_5, transform_hlds__tupling__HeadVar__2_11, &transform_hlds__tupling__conv0_HeadVar__3_12);
    }
#line 1919 "tupling.m"
    *transform_hlds__tupling__HeadVar__3_12 = ((MR_Word) transform_hlds__tupling__conv0_HeadVar__3_12);
#line 1919 "tupling.m"
  }
#line 1919 "tupling.m"
}

#line 697 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__697__1_3_f_0(
#line 697 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVarsList_7,
#line 697 "tupling.m"
  MR_Word transform_hlds__tupling__LambdaHeadVar__1_37,
#line 697 "tupling.m"
  MR_Word transform_hlds__tupling__LambdaHeadVar__2_38,
#line 697 "tupling.m"
  MR_Word * transform_hlds__tupling__LambdaHeadVar__3_39)
#line 697 "tupling.m"
{
#line 697 "tupling.m"
  {
#line 697 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 699 "tupling.m"
    {
#line 699 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], ((MR_Box) (transform_hlds__tupling__LambdaHeadVar__1_37)), transform_hlds__tupling__FieldVarsList_7);
    }
#line 699 "tupling.m"
    transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 697 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 697 "tupling.m"
      {
#line 698 "tupling.m"
        {
#line 698 "tupling.m"
          MR_Word base;
#line 698 "tupling.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 698 "tupling.m"
          *transform_hlds__tupling__LambdaHeadVar__3_39 = base;
#line 698 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__LambdaHeadVar__1_37));
#line 698 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__LambdaHeadVar__2_38));
#line 698 "tupling.m"
        }
#line 698 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 697 "tupling.m"
      }
#line 697 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 697 "tupling.m"
  }
#line 697 "tupling.m"
}

#line 667 "tupling.m"
static MR_Integer MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__add_transformed_proc__667__1_2_f_0(
#line 667 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVars_36,
#line 667 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_66)
#line 667 "tupling.m"
{
#line 667 "tupling.m"
  {
#line 667 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 667 "tupling.m"
    MR_Integer transform_hlds__tupling__HeadVar__3_67;

#line 667 "tupling.m"
    {
#line 667 "tupling.m"
      transform_hlds__tupling__HeadVar__3_67 = mercury__list__det_index1_of_first_occurrence_2_f_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__HeadVars_36, ((MR_Box) (transform_hlds__tupling__HeadVar__2_66)));
    }
#line 667 "tupling.m"
    return transform_hlds__tupling__HeadVar__3_67;
#line 667 "tupling.m"
  }
#line 667 "tupling.m"
}

#line 576 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__576__1_3_f_0(
#line 576 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_4,
#line 576 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVars_16,
#line 576 "tupling.m"
  MR_Word transform_hlds__tupling__LambdaHeadVar__1_26,
#line 576 "tupling.m"
  MR_Word * transform_hlds__tupling__LambdaHeadVar__2_27)
#line 576 "tupling.m"
{
#line 576 "tupling.m"
  {
#line 576 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 576 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_36_36 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 576 "tupling.m"
    MR_Word transform_hlds__tupling__Var_20;
#line 576 "tupling.m"
    MR_Integer transform_hlds__tupling__Pos_21;
#line 576 "tupling.m"
    MR_Word transform_hlds__tupling__Annotation_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__LambdaHeadVar__1_26, (MR_Integer) 1)));
#line 577 "tupling.m"
    MR_String transform_hlds__tupling__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__LambdaHeadVar__1_26, (MR_Integer) 0)));
#line 578 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_Var_20;

#line 578 "tupling.m"
    {
#line 578 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__tupling__TypeInfo_36_36, transform_hlds__tupling__Annotation_32, ((MR_Box) (transform_hlds__tupling__PredProcId_4)), &transform_hlds__tupling__conv0_Var_20);
    }
#line 578 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 578 "tupling.m"
      {
#line 578 "tupling.m"
        transform_hlds__tupling__Var_20 = ((MR_Word) transform_hlds__tupling__conv0_Var_20);
#line 578 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 578 "tupling.m"
      }
#line 576 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 576 "tupling.m"
      {
#line 579 "tupling.m"
        {
#line 579 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__list__index1_of_first_occurrence_3_p_0(transform_hlds__tupling__TypeInfo_36_36, transform_hlds__tupling__HeadVars_16, ((MR_Box) (transform_hlds__tupling__Var_20)), &transform_hlds__tupling__Pos_21);
        }
#line 576 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 576 "tupling.m"
          {
#line 577 "tupling.m"
            {
#line 577 "tupling.m"
              MR_Word base;
#line 577 "tupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "tupling.m"
              *transform_hlds__tupling__LambdaHeadVar__2_27 = base;
#line 577 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__Var_20));
#line 577 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__Pos_21));
#line 577 "tupling.m"
            }
#line 577 "tupling.m"
            transform_hlds__tupling__succeeded = MR_TRUE;
#line 576 "tupling.m"
          }
#line 576 "tupling.m"
      }
#line 576 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 576 "tupling.m"
  }
#line 576 "tupling.m"
}

#line 504 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__504__1_3_p_0(
#line 504 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_21,
#line 504 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_22,
#line 504 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__3_23)
#line 504 "tupling.m"
{
#line 504 "tupling.m"
  {
#line 504 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 504 "tupling.m"
    {
#line 504 "tupling.m"
      mercury__map__old_merge_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__HeadVar__1_21, transform_hlds__tupling__HeadVar__2_22, transform_hlds__tupling__HeadVar__3_23);
    }
#line 504 "tupling.m"
  }
#line 504 "tupling.m"
}

#line 939 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 939 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 939 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 939 "tupling.m"
{
#line 961 "tupling.m"
  {
#line 961 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 961 "tupling.m"
    {
#line 961 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0();
    }
#line 961 "tupling.m"
  }
#line 939 "tupling.m"
}

#line 938 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 938 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 938 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 938 "tupling.m"
{
#line 956 "tupling.m"
  {
#line 956 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 956 "tupling.m"
    {
#line 956 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0();
    }
#line 956 "tupling.m"
  }
#line 938 "tupling.m"
}

#line 937 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 937 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 937 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 937 "tupling.m"
{
#line 951 "tupling.m"
  {
#line 951 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 951 "tupling.m"
    {
#line 951 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0();
    }
#line 951 "tupling.m"
  }
#line 937 "tupling.m"
}

#line 936 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 936 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 936 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 936 "tupling.m"
{
#line 946 "tupling.m"
  {
#line 946 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 946 "tupling.m"
    {
#line 946 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0();
    }
#line 946 "tupling.m"
  }
#line 936 "tupling.m"
}

#line 1594 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0(
#line 1594 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1594 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1594 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1594 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__4_4,
#line 1594 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 1594 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__6_6)
#line 1594 "tupling.m"
{
#line 1600 "tupling.m"
  {
#line 1600 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1600 "tupling.m"
    {
#line 1600 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_p_0(transform_hlds__tupling__HeadVar__5_5, transform_hlds__tupling__HeadVar__6_6);
    }
#line 1600 "tupling.m"
  }
#line 1594 "tupling.m"
}

#line 513 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0(
#line 513 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 513 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 513 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 513 "tupling.m"
{
#line 513 "tupling.m"
  {
#line 513 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 513 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_4 = transform_hlds__tupling__HeadVar__2_2;
#line 513 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_5 = transform_hlds__tupling__HeadVar__3_3;

#line 513 "tupling.m"
    {
#line 513 "tupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[5], transform_hlds__tupling__HeadVar__1_1, ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_5)));
    }
#line 513 "tupling.m"
  }
#line 513 "tupling.m"
}

#line 513 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0(
#line 513 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 513 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 513 "tupling.m"
{
#line 513 "tupling.m"
  {
#line 513 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 513 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_3 = transform_hlds__tupling__HeadVar__1_1;
#line 513 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_4 = transform_hlds__tupling__HeadVar__2_2;

#line 513 "tupling.m"
    {
#line 513 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[5], ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_4)));
    }
#line 513 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 513 "tupling.m"
  }
#line 513 "tupling.m"
}

#line 515 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0(
#line 515 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 515 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 515 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 515 "tupling.m"
{
#line 515 "tupling.m"
  {
#line 515 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 515 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_18 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;
#line 515 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_19 = (MR_Integer) transform_hlds__tupling__HeadVar__3_3;

#line 515 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_18 == transform_hlds__tupling__CastY_19);
#line 515 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 5637 "transform_hlds.tupling.c"
      *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 515 "tupling.m"
    else
#line 515 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "tupling.m"
      if ((transform_hlds__tupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "tupling.m"
        *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 515 "tupling.m"
      else
#line 5649 "transform_hlds.tupling.c"
        *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 1;
#line 515 "tupling.m"
    else
#line 515 "tupling.m"
      {
#line 515 "tupling.m"
        MR_Word transform_hlds__tupling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 515 "tupling.m"
        MR_Word transform_hlds__tupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 515 "tupling.m"
        MR_Word transform_hlds__tupling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));

#line 515 "tupling.m"
        if ((transform_hlds__tupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5664 "transform_hlds.tupling.c"
          *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 2;
#line 515 "tupling.m"
        else
#line 515 "tupling.m"
          {
#line 515 "tupling.m"
            MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 515 "tupling.m"
            MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 515 "tupling.m"
            MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 2)));
#line 515 "tupling.m"
            MR_Word transform_hlds__tupling__V_16_16;

#line 515 "tupling.m"
            {
#line 515 "tupling.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], &transform_hlds__tupling__V_16_16, ((MR_Box) (transform_hlds__tupling__V_25_25)), ((MR_Box) (transform_hlds__tupling__V_13_13)));
            }
#line 5684 "transform_hlds.tupling.c"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_16_16 == (MR_Integer) 0);
#line 515 "tupling.m"
            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 515 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 515 "tupling.m"
              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_16_16;
#line 515 "tupling.m"
            else
#line 515 "tupling.m"
              {
#line 515 "tupling.m"
                MR_Word transform_hlds__tupling__V_17_17;

#line 515 "tupling.m"
                {
#line 515 "tupling.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[12], &transform_hlds__tupling__V_17_17, ((MR_Box) (transform_hlds__tupling__V_24_24)), ((MR_Box) (transform_hlds__tupling__V_14_14)));
                }
#line 5704 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_17_17 == (MR_Integer) 0);
#line 515 "tupling.m"
                transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 515 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 515 "tupling.m"
                  *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_17_17;
#line 515 "tupling.m"
                else
#line 515 "tupling.m"
                  {
#line 515 "tupling.m"
                    {
#line 515 "tupling.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[13], transform_hlds__tupling__HeadVar__1_1, ((MR_Box) (transform_hlds__tupling__V_23_23)), ((MR_Box) (transform_hlds__tupling__V_15_15)));
                    }
#line 515 "tupling.m"
                  }
#line 515 "tupling.m"
              }
#line 515 "tupling.m"
          }
#line 515 "tupling.m"
      }
#line 515 "tupling.m"
  }
#line 515 "tupling.m"
}

#line 515 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0(
#line 515 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 515 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 515 "tupling.m"
{
#line 515 "tupling.m"
  {
#line 515 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 515 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_11 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 515 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_12 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 515 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_11 == transform_hlds__tupling__CastY_12);
#line 515 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 515 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 515 "tupling.m"
    else
#line 515 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "tupling.m"
      {
#line 515 "tupling.m"
        MR_Integer transform_hlds__tupling__CastX_3 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 515 "tupling.m"
        MR_Integer transform_hlds__tupling__CastY_4 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 515 "tupling.m"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastY_4 == transform_hlds__tupling__CastX_3);
#line 515 "tupling.m"
      }
#line 515 "tupling.m"
    else
#line 515 "tupling.m"
      {
#line 515 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_13_13;
#line 515 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_14_14;
#line 515 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_15_15;
#line 515 "tupling.m"
        MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 515 "tupling.m"
        MR_Word transform_hlds__tupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 515 "tupling.m"
        MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 2)));
#line 515 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8;
#line 515 "tupling.m"
        MR_Word transform_hlds__tupling__V_9_9;
#line 515 "tupling.m"
        MR_Word transform_hlds__tupling__V_10_10;

#line 515 "tupling.m"
        transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 515 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 515 "tupling.m"
          {
#line 515 "tupling.m"
            transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 515 "tupling.m"
            transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 515 "tupling.m"
            transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 5808 "transform_hlds.tupling.c"
            transform_hlds__tupling__TypeInfo_13_13 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 5810 "transform_hlds.tupling.c"
            {
#line 5812 "transform_hlds.tupling.c"
              transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_13_13, ((MR_Box) (transform_hlds__tupling__V_5_5)), ((MR_Box) (transform_hlds__tupling__V_8_8)));
            }
#line 515 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 515 "tupling.m"
              {
#line 5819 "transform_hlds.tupling.c"
                transform_hlds__tupling__TypeInfo_14_14 = (MR_Word) &transform_hlds__tupling_scalar_common_1[12];
#line 5821 "transform_hlds.tupling.c"
                {
#line 5823 "transform_hlds.tupling.c"
                  transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_14_14, ((MR_Box) (transform_hlds__tupling__V_6_6)), ((MR_Box) (transform_hlds__tupling__V_9_9)));
                }
#line 515 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 515 "tupling.m"
                  {
#line 5830 "transform_hlds.tupling.c"
                    transform_hlds__tupling__TypeInfo_15_15 = (MR_Word) &transform_hlds__tupling_scalar_common_1[13];
#line 5832 "transform_hlds.tupling.c"
                    {
#line 5834 "transform_hlds.tupling.c"
                      transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_15_15, ((MR_Box) (transform_hlds__tupling__V_7_7)), ((MR_Box) (transform_hlds__tupling__V_10_10)));
                    }
#line 515 "tupling.m"
                  }
#line 515 "tupling.m"
              }
#line 515 "tupling.m"
          }
#line 515 "tupling.m"
      }
#line 515 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 515 "tupling.m"
  }
#line 515 "tupling.m"
}

#line 841 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0(
#line 841 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 841 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 841 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 841 "tupling.m"
{
#line 841 "tupling.m"
  {
#line 841 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 841 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_27 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;
#line 841 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_28 = (MR_Integer) transform_hlds__tupling__HeadVar__3_3;

#line 841 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_27 == transform_hlds__tupling__CastY_28);
#line 841 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 5876 "transform_hlds.tupling.c"
      *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 841 "tupling.m"
    else
#line 841 "tupling.m"
      {
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 2)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 3)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 4)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 5)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 6)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 7)));
#line 841 "tupling.m"
        MR_Word transform_hlds__tupling__V_20_20;

#line 841 "tupling.m"
        {
#line 841 "tupling.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_20_20, transform_hlds__tupling__V_4_4, transform_hlds__tupling__V_12_12);
        }
#line 5922 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_20_20 == (MR_Integer) 0);
#line 841 "tupling.m"
        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 841 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_20_20;
#line 841 "tupling.m"
        else
#line 841 "tupling.m"
          {
#line 841 "tupling.m"
            MR_Word transform_hlds__tupling__V_21_21;

#line 841 "tupling.m"
            {
#line 841 "tupling.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_21_21, transform_hlds__tupling__V_5_5, transform_hlds__tupling__V_13_13);
            }
#line 5942 "transform_hlds.tupling.c"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_21_21 == (MR_Integer) 0);
#line 841 "tupling.m"
            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 841 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_21_21;
#line 841 "tupling.m"
            else
#line 841 "tupling.m"
              {
#line 841 "tupling.m"
                MR_Word transform_hlds__tupling__V_22_22;

#line 841 "tupling.m"
                {
#line 841 "tupling.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_22_22, transform_hlds__tupling__V_6_6, transform_hlds__tupling__V_14_14);
                }
#line 5962 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_22_22 == (MR_Integer) 0);
#line 841 "tupling.m"
                transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 841 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
                  *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_22_22;
#line 841 "tupling.m"
                else
#line 841 "tupling.m"
                  {
#line 841 "tupling.m"
                    MR_Word transform_hlds__tupling__V_23_23;

#line 841 "tupling.m"
                    {
#line 841 "tupling.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_23_23, transform_hlds__tupling__V_7_7, transform_hlds__tupling__V_15_15);
                    }
#line 5982 "transform_hlds.tupling.c"
                    transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_23_23 == (MR_Integer) 0);
#line 841 "tupling.m"
                    transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 841 "tupling.m"
                    if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
                      *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_23_23;
#line 841 "tupling.m"
                    else
#line 841 "tupling.m"
                      {
#line 841 "tupling.m"
                        MR_Word transform_hlds__tupling__V_24_24;

#line 841 "tupling.m"
                        {
#line 841 "tupling.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_24_24, transform_hlds__tupling__V_8_8, transform_hlds__tupling__V_16_16);
                        }
#line 6002 "transform_hlds.tupling.c"
                        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_24_24 == (MR_Integer) 0);
#line 841 "tupling.m"
                        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 841 "tupling.m"
                        if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
                          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_24_24;
#line 841 "tupling.m"
                        else
#line 841 "tupling.m"
                          {
#line 841 "tupling.m"
                            MR_Word transform_hlds__tupling__V_25_25;

#line 841 "tupling.m"
                            {
#line 841 "tupling.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_25_25, transform_hlds__tupling__V_9_9, transform_hlds__tupling__V_17_17);
                            }
#line 6022 "transform_hlds.tupling.c"
                            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_25_25 == (MR_Integer) 0);
#line 841 "tupling.m"
                            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 841 "tupling.m"
                            if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
                              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_25_25;
#line 841 "tupling.m"
                            else
#line 841 "tupling.m"
                              {
#line 841 "tupling.m"
                                MR_Word transform_hlds__tupling__V_26_26;

#line 841 "tupling.m"
                                {
#line 841 "tupling.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_26_26, transform_hlds__tupling__V_10_10, transform_hlds__tupling__V_18_18);
                                }
#line 6042 "transform_hlds.tupling.c"
                                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_26_26 == (MR_Integer) 0);
#line 841 "tupling.m"
                                transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 841 "tupling.m"
                                if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
                                  *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_26_26;
#line 841 "tupling.m"
                                else
#line 841 "tupling.m"
                                  {
#line 841 "tupling.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__tupling__HeadVar__1_1, transform_hlds__tupling__V_11_11, transform_hlds__tupling__V_19_19);
                                  }
#line 841 "tupling.m"
                              }
#line 841 "tupling.m"
                          }
#line 841 "tupling.m"
                      }
#line 841 "tupling.m"
                  }
#line 841 "tupling.m"
              }
#line 841 "tupling.m"
          }
#line 841 "tupling.m"
      }
#line 841 "tupling.m"
  }
#line 841 "tupling.m"
}

#line 841 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0(
#line 841 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 841 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 841 "tupling.m"
{
#line 841 "tupling.m"
  {
#line 841 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 841 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_19 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 841 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_20 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 841 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_19 == transform_hlds__tupling__CastY_20);
#line 841 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 841 "tupling.m"
    else
#line 841 "tupling.m"
      {
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 2)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 3)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 4)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 5)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 6)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 7)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 841 "tupling.m"
        MR_Integer transform_hlds__tupling__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));

#line 6137 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_3_3 == transform_hlds__tupling__V_11_11);
#line 841 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
          {
#line 6143 "transform_hlds.tupling.c"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_4_4 == transform_hlds__tupling__V_12_12);
#line 841 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
              {
#line 6149 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_5_5 == transform_hlds__tupling__V_13_13);
#line 841 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
                  {
#line 6155 "transform_hlds.tupling.c"
                    transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_6_6 == transform_hlds__tupling__V_14_14);
#line 841 "tupling.m"
                    if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
                      {
#line 6161 "transform_hlds.tupling.c"
                        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_7_7 == transform_hlds__tupling__V_15_15);
#line 841 "tupling.m"
                        if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
                          {
#line 6167 "transform_hlds.tupling.c"
                            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_8_8 == transform_hlds__tupling__V_16_16);
#line 841 "tupling.m"
                            if (transform_hlds__tupling__succeeded)
#line 841 "tupling.m"
                              {
#line 6173 "transform_hlds.tupling.c"
                                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_9_9 == transform_hlds__tupling__V_17_17);
#line 841 "tupling.m"
                                if (transform_hlds__tupling__succeeded)
#line 6177 "transform_hlds.tupling.c"
                                  transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_10_10 == transform_hlds__tupling__V_18_18);
#line 841 "tupling.m"
                              }
#line 841 "tupling.m"
                          }
#line 841 "tupling.m"
                      }
#line 841 "tupling.m"
                  }
#line 841 "tupling.m"
              }
#line 841 "tupling.m"
          }
#line 841 "tupling.m"
      }
#line 841 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 841 "tupling.m"
  }
#line 841 "tupling.m"
}

#line 1669 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0(
#line 1669 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 1669 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1669 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 1669 "tupling.m"
{
#line 1669 "tupling.m"
  {
#line 1669 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1669 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_15 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;
#line 1669 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_16 = (MR_Integer) transform_hlds__tupling__HeadVar__3_3;

#line 1669 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_15 == transform_hlds__tupling__CastY_16);
#line 1669 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 6224 "transform_hlds.tupling.c"
      *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 1669 "tupling.m"
    else
#line 1669 "tupling.m"
      {
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 2)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 3)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_12_12;

#line 1669 "tupling.m"
        {
#line 1669 "tupling.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__tupling__V_12_12, transform_hlds__tupling__V_4_4, transform_hlds__tupling__V_8_8);
        }
#line 6254 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_12_12 == (MR_Integer) 0);
#line 1669 "tupling.m"
        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 1669 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1669 "tupling.m"
          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_12_12;
#line 1669 "tupling.m"
        else
#line 1669 "tupling.m"
          {
#line 1669 "tupling.m"
            MR_Word transform_hlds__tupling__V_13_13;

#line 1669 "tupling.m"
            {
#line 1669 "tupling.m"
              parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__tupling__V_13_13, transform_hlds__tupling__V_5_5, transform_hlds__tupling__V_9_9);
            }
#line 6274 "transform_hlds.tupling.c"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_13_13 == (MR_Integer) 0);
#line 1669 "tupling.m"
            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 1669 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 1669 "tupling.m"
              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_13_13;
#line 1669 "tupling.m"
            else
#line 1669 "tupling.m"
              {
#line 1669 "tupling.m"
                MR_Word transform_hlds__tupling__V_14_14;

#line 1669 "tupling.m"
                {
#line 1669 "tupling.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[11], &transform_hlds__tupling__V_14_14, ((MR_Box) (transform_hlds__tupling__V_6_6)), ((MR_Box) (transform_hlds__tupling__V_10_10)));
                }
#line 6294 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_14_14 == (MR_Integer) 0);
#line 1669 "tupling.m"
                transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 1669 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 1669 "tupling.m"
                  *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_14_14;
#line 1669 "tupling.m"
                else
#line 1669 "tupling.m"
                  {
#line 1669 "tupling.m"
                    hlds__hlds_goal____Compare____hlds_goal_0_0(transform_hlds__tupling__HeadVar__1_1, transform_hlds__tupling__V_7_7, transform_hlds__tupling__V_11_11);
                  }
#line 1669 "tupling.m"
              }
#line 1669 "tupling.m"
          }
#line 1669 "tupling.m"
      }
#line 1669 "tupling.m"
  }
#line 1669 "tupling.m"
}

#line 1669 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0(
#line 1669 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1669 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 1669 "tupling.m"
{
#line 1669 "tupling.m"
  {
#line 1669 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1669 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_11 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 1669 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_12 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 1669 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_11 == transform_hlds__tupling__CastY_12);
#line 1669 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1669 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 1669 "tupling.m"
    else
#line 1669 "tupling.m"
      {
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_15_15;
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 2)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 3)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1669 "tupling.m"
        MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));

#line 6367 "transform_hlds.tupling.c"
        {
#line 6369 "transform_hlds.tupling.c"
          transform_hlds__tupling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__tupling__V_3_3, transform_hlds__tupling__V_7_7);
        }
#line 1669 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1669 "tupling.m"
          {
#line 6376 "transform_hlds.tupling.c"
            {
#line 6378 "transform_hlds.tupling.c"
              transform_hlds__tupling__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__tupling__V_4_4, transform_hlds__tupling__V_8_8);
            }
#line 1669 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 1669 "tupling.m"
              {
#line 6385 "transform_hlds.tupling.c"
                transform_hlds__tupling__TypeInfo_15_15 = (MR_Word) &transform_hlds__tupling_scalar_common_1[11];
#line 6387 "transform_hlds.tupling.c"
                {
#line 6389 "transform_hlds.tupling.c"
                  transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_15_15, ((MR_Box) (transform_hlds__tupling__V_5_5)), ((MR_Box) (transform_hlds__tupling__V_9_9)));
                }
#line 1669 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 6394 "transform_hlds.tupling.c"
                  {
#line 6396 "transform_hlds.tupling.c"
                    transform_hlds__tupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__tupling__V_6_6, transform_hlds__tupling__V_10_10);
                  }
#line 1669 "tupling.m"
              }
#line 1669 "tupling.m"
          }
#line 1669 "tupling.m"
      }
#line 1669 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 1669 "tupling.m"
  }
#line 1669 "tupling.m"
}

#line 1667 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0(
#line 1667 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 1667 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1667 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 1667 "tupling.m"
{
#line 1667 "tupling.m"
  {
#line 1667 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1667 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_4 = transform_hlds__tupling__HeadVar__2_2;
#line 1667 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_5 = transform_hlds__tupling__HeadVar__3_3;

#line 1667 "tupling.m"
    {
#line 1667 "tupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[0], transform_hlds__tupling__HeadVar__1_1, ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_5)));
    }
#line 1667 "tupling.m"
  }
#line 1667 "tupling.m"
}

#line 1667 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0(
#line 1667 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1667 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 1667 "tupling.m"
{
#line 1667 "tupling.m"
  {
#line 1667 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1667 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_3 = transform_hlds__tupling__HeadVar__1_1;
#line 1667 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_4 = transform_hlds__tupling__HeadVar__2_2;

#line 1667 "tupling.m"
    {
#line 1667 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[0], ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_4)));
    }
#line 1667 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 1667 "tupling.m"
  }
#line 1667 "tupling.m"
}

#line 932 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0(
#line 932 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1)
#line 932 "tupling.m"
{
#line 932 "tupling.m"
  {
#line 932 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 932 "tupling.m"
    {
#line 932 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(transform_hlds__tupling__HeadVar__1_1);
    }
#line 932 "tupling.m"
  }
#line 932 "tupling.m"
}

#line 932 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0(void)
#line 932 "tupling.m"
{
#line 932 "tupling.m"
  {
#line 932 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 932 "tupling.m"
    {
#line 932 "tupling.m"
      transform_hlds__tupling__succeeded = transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 932 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 932 "tupling.m"
  }
#line 932 "tupling.m"
}

#line 853 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0(
#line 853 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 853 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 853 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 853 "tupling.m"
{
#line 853 "tupling.m"
  {
#line 853 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 853 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_15 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;
#line 853 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_16 = (MR_Integer) transform_hlds__tupling__HeadVar__3_3;

#line 853 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_15 == transform_hlds__tupling__CastY_16);
#line 853 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 6540 "transform_hlds.tupling.c"
      *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 853 "tupling.m"
    else
#line 853 "tupling.m"
      {
#line 853 "tupling.m"
        MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 853 "tupling.m"
        MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 853 "tupling.m"
        MR_Float transform_hlds__tupling__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 853 "tupling.m"
        MR_Float transform_hlds__tupling__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 853 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 853 "tupling.m"
        MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 853 "tupling.m"
        MR_Float transform_hlds__tupling__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 2)));
#line 853 "tupling.m"
        MR_Float transform_hlds__tupling__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 3)));
#line 853 "tupling.m"
        MR_Word transform_hlds__tupling__V_12_12;

#line 853 "tupling.m"
        {
#line 853 "tupling.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[7], &transform_hlds__tupling__V_12_12, ((MR_Box) (transform_hlds__tupling__V_4_4)), ((MR_Box) (transform_hlds__tupling__V_8_8)));
        }
#line 6570 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_12_12 == (MR_Integer) 0);
#line 853 "tupling.m"
        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 853 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 853 "tupling.m"
          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_12_12;
#line 853 "tupling.m"
        else
#line 853 "tupling.m"
          {
#line 853 "tupling.m"
            MR_Word transform_hlds__tupling__V_13_13;

#line 853 "tupling.m"
            {
#line 853 "tupling.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[7], &transform_hlds__tupling__V_13_13, ((MR_Box) (transform_hlds__tupling__V_5_5)), ((MR_Box) (transform_hlds__tupling__V_9_9)));
            }
#line 6590 "transform_hlds.tupling.c"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_13_13 == (MR_Integer) 0);
#line 853 "tupling.m"
            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 853 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 853 "tupling.m"
              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_13_13;
#line 853 "tupling.m"
            else
#line 853 "tupling.m"
              {
#line 853 "tupling.m"
                MR_Word transform_hlds__tupling__V_14_14;

#line 853 "tupling.m"
                {
#line 853 "tupling.m"
                  mercury__private_builtin__builtin_compare_float_3_p_0(&transform_hlds__tupling__V_14_14, transform_hlds__tupling__V_6_6, transform_hlds__tupling__V_10_10);
                }
#line 6610 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_14_14 == (MR_Integer) 0);
#line 853 "tupling.m"
                transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 853 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 853 "tupling.m"
                  *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_14_14;
#line 853 "tupling.m"
                else
#line 853 "tupling.m"
                  {
#line 853 "tupling.m"
                    mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__tupling__HeadVar__1_1, transform_hlds__tupling__V_7_7, transform_hlds__tupling__V_11_11);
                  }
#line 853 "tupling.m"
              }
#line 853 "tupling.m"
          }
#line 853 "tupling.m"
      }
#line 853 "tupling.m"
  }
#line 853 "tupling.m"
}

#line 853 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0(
#line 853 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 853 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 853 "tupling.m"
{
#line 853 "tupling.m"
  {
#line 853 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 853 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_11 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 853 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_12 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 853 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_11 == transform_hlds__tupling__CastY_12);
#line 853 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 853 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 853 "tupling.m"
    else
#line 853 "tupling.m"
      {
#line 853 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_14_14;
#line 853 "tupling.m"
        MR_Word transform_hlds__tupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 853 "tupling.m"
        MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 853 "tupling.m"
        MR_Float transform_hlds__tupling__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 2)));
#line 853 "tupling.m"
        MR_Float transform_hlds__tupling__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 3)));
#line 853 "tupling.m"
        MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 853 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 853 "tupling.m"
        MR_Float transform_hlds__tupling__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 853 "tupling.m"
        MR_Float transform_hlds__tupling__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));

#line 6683 "transform_hlds.tupling.c"
        {
#line 6685 "transform_hlds.tupling.c"
          transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[7], ((MR_Box) (transform_hlds__tupling__V_3_3)), ((MR_Box) (transform_hlds__tupling__V_7_7)));
        }
#line 853 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 853 "tupling.m"
          {
#line 6692 "transform_hlds.tupling.c"
            transform_hlds__tupling__TypeInfo_14_14 = (MR_Word) &transform_hlds__tupling_scalar_common_1[7];
#line 6694 "transform_hlds.tupling.c"
            {
#line 6696 "transform_hlds.tupling.c"
              transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_14_14, ((MR_Box) (transform_hlds__tupling__V_4_4)), ((MR_Box) (transform_hlds__tupling__V_8_8)));
            }
#line 853 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 853 "tupling.m"
              {
#line 6703 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_5_5 == transform_hlds__tupling__V_9_9);
#line 853 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 6707 "transform_hlds.tupling.c"
                  transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_6_6 == transform_hlds__tupling__V_10_10);
#line 853 "tupling.m"
              }
#line 853 "tupling.m"
          }
#line 853 "tupling.m"
      }
#line 853 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 853 "tupling.m"
  }
#line 853 "tupling.m"
}

#line 826 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0(
#line 826 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 826 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 826 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 826 "tupling.m"
{
#line 826 "tupling.m"
  {
#line 826 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 826 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_27 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;
#line 826 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_28 = (MR_Integer) transform_hlds__tupling__HeadVar__3_3;

#line 826 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_27 == transform_hlds__tupling__CastY_28);
#line 826 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 6746 "transform_hlds.tupling.c"
      *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 826 "tupling.m"
    else
#line 826 "tupling.m"
      {
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 2)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 3)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 4)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 5)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 6)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 7)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_20_20;

#line 826 "tupling.m"
        {
#line 826 "tupling.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__tupling__V_20_20, transform_hlds__tupling__V_4_4, transform_hlds__tupling__V_12_12);
        }
#line 6792 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_20_20 == (MR_Integer) 0);
#line 826 "tupling.m"
        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 826 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_20_20;
#line 826 "tupling.m"
        else
#line 826 "tupling.m"
          {
#line 826 "tupling.m"
            MR_Word transform_hlds__tupling__V_21_21;

#line 826 "tupling.m"
            {
#line 826 "tupling.m"
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__tupling__V_21_21, transform_hlds__tupling__V_5_5, transform_hlds__tupling__V_13_13);
            }
#line 6812 "transform_hlds.tupling.c"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_21_21 == (MR_Integer) 0);
#line 826 "tupling.m"
            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 826 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_21_21;
#line 826 "tupling.m"
            else
#line 826 "tupling.m"
              {
#line 826 "tupling.m"
                MR_Word transform_hlds__tupling__V_22_22;

#line 826 "tupling.m"
                {
#line 826 "tupling.m"
                  hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__tupling__V_22_22, transform_hlds__tupling__V_6_6, transform_hlds__tupling__V_14_14);
                }
#line 6832 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_22_22 == (MR_Integer) 0);
#line 826 "tupling.m"
                transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 826 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
                  *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_22_22;
#line 826 "tupling.m"
                else
#line 826 "tupling.m"
                  {
#line 826 "tupling.m"
                    MR_Word transform_hlds__tupling__V_23_23;

#line 826 "tupling.m"
                    {
#line 826 "tupling.m"
                      hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__tupling__V_23_23, transform_hlds__tupling__V_7_7, transform_hlds__tupling__V_15_15);
                    }
#line 6852 "transform_hlds.tupling.c"
                    transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_23_23 == (MR_Integer) 0);
#line 826 "tupling.m"
                    transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 826 "tupling.m"
                    if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
                      *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_23_23;
#line 826 "tupling.m"
                    else
#line 826 "tupling.m"
                      {
#line 826 "tupling.m"
                        MR_Word transform_hlds__tupling__V_24_24;

#line 826 "tupling.m"
                        {
#line 826 "tupling.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[9], &transform_hlds__tupling__V_24_24, ((MR_Box) (transform_hlds__tupling__V_8_8)), ((MR_Box) (transform_hlds__tupling__V_16_16)));
                        }
#line 6872 "transform_hlds.tupling.c"
                        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_24_24 == (MR_Integer) 0);
#line 826 "tupling.m"
                        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 826 "tupling.m"
                        if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
                          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_24_24;
#line 826 "tupling.m"
                        else
#line 826 "tupling.m"
                          {
#line 826 "tupling.m"
                            MR_Word transform_hlds__tupling__V_25_25;

#line 826 "tupling.m"
                            {
#line 826 "tupling.m"
                              transform_hlds__tupling____Compare____tuning_params_0_0(&transform_hlds__tupling__V_25_25, transform_hlds__tupling__V_9_9, transform_hlds__tupling__V_17_17);
                            }
#line 6892 "transform_hlds.tupling.c"
                            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_25_25 == (MR_Integer) 0);
#line 826 "tupling.m"
                            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 826 "tupling.m"
                            if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
                              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_25_25;
#line 826 "tupling.m"
                            else
#line 826 "tupling.m"
                              {
#line 826 "tupling.m"
                                MR_Word transform_hlds__tupling__V_26_26;

#line 826 "tupling.m"
                                {
#line 826 "tupling.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[5], &transform_hlds__tupling__V_26_26, ((MR_Box) (transform_hlds__tupling__V_10_10)), ((MR_Box) (transform_hlds__tupling__V_18_18)));
                                }
#line 6912 "transform_hlds.tupling.c"
                                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_26_26 == (MR_Integer) 0);
#line 826 "tupling.m"
                                transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 826 "tupling.m"
                                if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
                                  *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_26_26;
#line 826 "tupling.m"
                                else
#line 826 "tupling.m"
                                  {
#line 826 "tupling.m"
                                    {
#line 826 "tupling.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[3], transform_hlds__tupling__HeadVar__1_1, ((MR_Box) (transform_hlds__tupling__V_11_11)), ((MR_Box) (transform_hlds__tupling__V_19_19)));
                                    }
#line 826 "tupling.m"
                                  }
#line 826 "tupling.m"
                              }
#line 826 "tupling.m"
                          }
#line 826 "tupling.m"
                      }
#line 826 "tupling.m"
                  }
#line 826 "tupling.m"
              }
#line 826 "tupling.m"
          }
#line 826 "tupling.m"
      }
#line 826 "tupling.m"
  }
#line 826 "tupling.m"
}

#line 826 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0(
#line 826 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 826 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 826 "tupling.m"
{
#line 826 "tupling.m"
  {
#line 826 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 826 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_19 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 826 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_20 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 826 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_19 == transform_hlds__tupling__CastY_20);
#line 826 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 826 "tupling.m"
    else
#line 826 "tupling.m"
      {
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_25_25;
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_26_26;
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_27_27;
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 2)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 3)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 4)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 5)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 6)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 7)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 826 "tupling.m"
        MR_Word transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));

#line 7017 "transform_hlds.tupling.c"
        {
#line 7019 "transform_hlds.tupling.c"
          transform_hlds__tupling__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__tupling__V_3_3, transform_hlds__tupling__V_11_11);
        }
#line 826 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
          {
#line 7026 "transform_hlds.tupling.c"
            {
#line 7028 "transform_hlds.tupling.c"
              transform_hlds__tupling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__tupling__V_4_4, transform_hlds__tupling__V_12_12);
            }
#line 826 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
              {
#line 7035 "transform_hlds.tupling.c"
                {
#line 7037 "transform_hlds.tupling.c"
                  transform_hlds__tupling__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__tupling__V_5_5, transform_hlds__tupling__V_13_13);
                }
#line 826 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
                  {
#line 7044 "transform_hlds.tupling.c"
                    {
#line 7046 "transform_hlds.tupling.c"
                      transform_hlds__tupling__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__tupling__V_6_6, transform_hlds__tupling__V_14_14);
                    }
#line 826 "tupling.m"
                    if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
                      {
#line 7053 "transform_hlds.tupling.c"
                        transform_hlds__tupling__TypeInfo_25_25 = (MR_Word) &transform_hlds__tupling_scalar_common_2[9];
#line 7055 "transform_hlds.tupling.c"
                        {
#line 7057 "transform_hlds.tupling.c"
                          transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_25_25, ((MR_Box) (transform_hlds__tupling__V_7_7)), ((MR_Box) (transform_hlds__tupling__V_15_15)));
                        }
#line 826 "tupling.m"
                        if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
                          {
#line 7064 "transform_hlds.tupling.c"
                            {
#line 7066 "transform_hlds.tupling.c"
                              transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____tuning_params_0_0(transform_hlds__tupling__V_8_8, transform_hlds__tupling__V_16_16);
                            }
#line 826 "tupling.m"
                            if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
                              {
#line 7073 "transform_hlds.tupling.c"
                                transform_hlds__tupling__TypeInfo_26_26 = (MR_Word) &transform_hlds__tupling_scalar_common_2[5];
#line 7075 "transform_hlds.tupling.c"
                                {
#line 7077 "transform_hlds.tupling.c"
                                  transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_26_26, ((MR_Box) (transform_hlds__tupling__V_9_9)), ((MR_Box) (transform_hlds__tupling__V_17_17)));
                                }
#line 826 "tupling.m"
                                if (transform_hlds__tupling__succeeded)
#line 826 "tupling.m"
                                  {
#line 7084 "transform_hlds.tupling.c"
                                    transform_hlds__tupling__TypeInfo_27_27 = (MR_Word) &transform_hlds__tupling_scalar_common_2[3];
#line 7086 "transform_hlds.tupling.c"
                                    {
#line 7088 "transform_hlds.tupling.c"
                                      transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_27_27, ((MR_Box) (transform_hlds__tupling__V_10_10)), ((MR_Box) (transform_hlds__tupling__V_18_18)));
                                    }
#line 826 "tupling.m"
                                  }
#line 826 "tupling.m"
                              }
#line 826 "tupling.m"
                          }
#line 826 "tupling.m"
                      }
#line 826 "tupling.m"
                  }
#line 826 "tupling.m"
              }
#line 826 "tupling.m"
          }
#line 826 "tupling.m"
      }
#line 826 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 826 "tupling.m"
  }
#line 826 "tupling.m"
}

#line 861 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0(
#line 861 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 861 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 861 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 861 "tupling.m"
{
#line 861 "tupling.m"
  {
#line 861 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 861 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_9 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;
#line 861 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_10 = (MR_Integer) transform_hlds__tupling__HeadVar__3_3;

#line 861 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_9 == transform_hlds__tupling__CastY_10);
#line 861 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 7138 "transform_hlds.tupling.c"
      *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 861 "tupling.m"
    else
#line 861 "tupling.m"
      {
#line 861 "tupling.m"
        MR_Float transform_hlds__tupling__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 861 "tupling.m"
        MR_Float transform_hlds__tupling__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 861 "tupling.m"
        MR_Float transform_hlds__tupling__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 861 "tupling.m"
        MR_Float transform_hlds__tupling__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 861 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8;

#line 861 "tupling.m"
        {
#line 861 "tupling.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(&transform_hlds__tupling__V_8_8, transform_hlds__tupling__V_4_4, transform_hlds__tupling__V_6_6);
        }
#line 7160 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_8_8 == (MR_Integer) 0);
#line 861 "tupling.m"
        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 861 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 861 "tupling.m"
          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_8_8;
#line 861 "tupling.m"
        else
#line 861 "tupling.m"
          {
#line 861 "tupling.m"
            mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__tupling__HeadVar__1_1, transform_hlds__tupling__V_5_5, transform_hlds__tupling__V_7_7);
          }
#line 861 "tupling.m"
      }
#line 861 "tupling.m"
  }
#line 861 "tupling.m"
}

#line 861 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0(
#line 861 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 861 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 861 "tupling.m"
{
#line 861 "tupling.m"
  {
#line 861 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 861 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_7 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 861 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_8 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 861 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_7 == transform_hlds__tupling__CastY_8);
#line 861 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 861 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 861 "tupling.m"
    else
#line 861 "tupling.m"
      {
#line 861 "tupling.m"
        MR_Float transform_hlds__tupling__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 861 "tupling.m"
        MR_Float transform_hlds__tupling__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 861 "tupling.m"
        MR_Float transform_hlds__tupling__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 861 "tupling.m"
        MR_Float transform_hlds__tupling__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));

#line 7219 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_3_3 == transform_hlds__tupling__V_5_5);
#line 861 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 7223 "transform_hlds.tupling.c"
          transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_4_4 == transform_hlds__tupling__V_6_6);
#line 861 "tupling.m"
      }
#line 861 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 861 "tupling.m"
  }
#line 861 "tupling.m"
}

#line 429 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0(
#line 429 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 429 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 429 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 429 "tupling.m"
{
#line 429 "tupling.m"
  {
#line 429 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 429 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_4 = transform_hlds__tupling__HeadVar__2_2;
#line 429 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_5 = transform_hlds__tupling__HeadVar__3_3;

#line 429 "tupling.m"
    {
#line 429 "tupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[3], transform_hlds__tupling__HeadVar__1_1, ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_5)));
    }
#line 429 "tupling.m"
  }
#line 429 "tupling.m"
}

#line 429 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0(
#line 429 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 429 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 429 "tupling.m"
{
#line 429 "tupling.m"
  {
#line 429 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 429 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_3 = transform_hlds__tupling__HeadVar__1_1;
#line 429 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_4 = transform_hlds__tupling__HeadVar__2_2;

#line 429 "tupling.m"
    {
#line 429 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[3], ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_4)));
    }
#line 429 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 429 "tupling.m"
  }
#line 429 "tupling.m"
}

#line 431 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0(
#line 431 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 431 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 431 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 431 "tupling.m"
{
#line 431 "tupling.m"
  {
#line 431 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 431 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_4 = transform_hlds__tupling__HeadVar__2_2;
#line 431 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_5 = transform_hlds__tupling__HeadVar__3_3;

#line 431 "tupling.m"
    {
#line 431 "tupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[1], transform_hlds__tupling__HeadVar__1_1, ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_5)));
    }
#line 431 "tupling.m"
  }
#line 431 "tupling.m"
}

#line 431 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0(
#line 431 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 431 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 431 "tupling.m"
{
#line 431 "tupling.m"
  {
#line 431 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 431 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_3 = transform_hlds__tupling__HeadVar__1_1;
#line 431 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_4 = transform_hlds__tupling__HeadVar__2_2;

#line 431 "tupling.m"
    {
#line 431 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[1], ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_4)));
    }
#line 431 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 431 "tupling.m"
  }
#line 431 "tupling.m"
}

#line 2027 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_switch_total_count_2_5_p_0(
#line 2027 "tupling.m"
  MR_Word transform_hlds__tupling__SwitchGoalPath_6,
#line 2027 "tupling.m"
  MR_Word transform_hlds__tupling__PathPort_7,
#line 2027 "tupling.m"
  MR_Word transform_hlds__tupling__LineNoAndCount_8,
#line 2027 "tupling.m"
  MR_Integer transform_hlds__tupling__STATE_VARIABLE_TotalAcc_0_10,
#line 2027 "tupling.m"
  MR_Integer * transform_hlds__tupling__STATE_VARIABLE_TotalAcc_11)
#line 2027 "tupling.m"
{
#line 2032 "tupling.m"
  {
#line 2032 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__PathPort_7)) == (MR_mktag((MR_Integer) 1)));
#line 2040 "tupling.m"
    MR_Word transform_hlds__tupling__LastStep_18;
#line 2040 "tupling.m"
    MR_Word transform_hlds__tupling__V_21_21;
#line 2041 "tupling.m"
    MR_Word transform_hlds__tupling__V_17_17;
#line 2042 "tupling.m"
    MR_Integer transform_hlds__tupling__V_19_19;
#line 2042 "tupling.m"
    MR_Word transform_hlds__tupling__V_20_20;

#line 2040 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 2040 "tupling.m"
      {
#line 2040 "tupling.m"
        transform_hlds__tupling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__PathPort_7, (MR_Integer) 0)));
#line 2040 "tupling.m"
        {
#line 2040 "tupling.m"
          transform_hlds__tupling__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(transform_hlds__tupling__SwitchGoalPath_6, transform_hlds__tupling__V_21_21);
        }
#line 2040 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 2040 "tupling.m"
          {
#line 2041 "tupling.m"
            transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__SwitchGoalPath_6)) == (MR_mktag((MR_Integer) 1)));
#line 2041 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 2041 "tupling.m"
              {
#line 2041 "tupling.m"
                transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__SwitchGoalPath_6, (MR_Integer) 0)));
#line 2041 "tupling.m"
                transform_hlds__tupling__LastStep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__SwitchGoalPath_6, (MR_Integer) 1)));
#line 2042 "tupling.m"
                transform_hlds__tupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__tupling__LastStep_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__LastStep_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 2042 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 2042 "tupling.m"
                  {
#line 2042 "tupling.m"
                    transform_hlds__tupling__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__LastStep_18, (MR_Integer) 1)));
#line 2042 "tupling.m"
                    transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__LastStep_18, (MR_Integer) 2)));
#line 2042 "tupling.m"
                  }
#line 2041 "tupling.m"
              }
#line 2040 "tupling.m"
          }
#line 2040 "tupling.m"
      }
#line 2032 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 2033 "tupling.m"
      {
#line 2033 "tupling.m"
        MR_Integer transform_hlds__tupling__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__LineNoAndCount_8, (MR_Integer) 1)));
#line 2033 "tupling.m"
        MR_Integer transform_hlds__tupling__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__LineNoAndCount_8, (MR_Integer) 0)));
#line 2033 "tupling.m"
        MR_Integer transform_hlds__tupling__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__LineNoAndCount_8, (MR_Integer) 2)));

#line 2033 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_TotalAcc_11 = (transform_hlds__tupling__STATE_VARIABLE_TotalAcc_0_10 + transform_hlds__tupling__V_13_13);
#line 2033 "tupling.m"
      }
#line 2032 "tupling.m"
    else
#line 2032 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_TotalAcc_11 = transform_hlds__tupling__STATE_VARIABLE_TotalAcc_0_10;
#line 2032 "tupling.m"
  }
#line 2027 "tupling.m"
}

#line 2025 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0_1(
#line 2025 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 2025 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 2025 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 2025 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 2025 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 2025 "tupling.m"
{
#line 2025 "tupling.m"
  {
#line 2025 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 2025 "tupling.m"
    MR_Integer transform_hlds__tupling__conv2_STATE_VARIABLE_TotalAcc_11;

#line 2025 "tupling.m"
    {
#line 2025 "tupling.m"
      transform_hlds__tupling__get_switch_total_count_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Integer) transform_hlds__tupling__wrapper_arg_3), &transform_hlds__tupling__conv2_STATE_VARIABLE_TotalAcc_11);
    }
#line 2025 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_4 = ((MR_Box) (transform_hlds__tupling__conv2_STATE_VARIABLE_TotalAcc_11));
#line 2025 "tupling.m"
  }
#line 2025 "tupling.m"
}

#line 2007 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0(
#line 2007 "tupling.m"
  MR_Word transform_hlds__tupling__ProcCounts_5,
#line 2007 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMap_6,
#line 2007 "tupling.m"
  MR_Word transform_hlds__tupling__GoalId_7,
#line 2007 "tupling.m"
  MR_Float * transform_hlds__tupling__RelFreq_8)
#line 2007 "tupling.m"
{
#line 2010 "tupling.m"
  {
#line 2010 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 2010 "tupling.m"
    MR_Word transform_hlds__tupling__GoalPath_9;
#line 2010 "tupling.m"
    MR_Integer transform_hlds__tupling__CaseTotal_10;
#line 2010 "tupling.m"
    MR_Integer transform_hlds__tupling__SwitchTotal_11;
#line 2010 "tupling.m"
    MR_Word transform_hlds__tupling__PathPort_19;
#line 2010 "tupling.m"
    MR_Word transform_hlds__tupling__V_28_28;
#line 2011 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_GoalPath_9;
#line 1960 "tupling.m"
    MR_Word transform_hlds__tupling__ContextCount_20;
#line 1960 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_ContextCount_20;
#line 2025 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_SwitchTotal_11;

#line 2011 "tupling.m"
    {
#line 2011 "tupling.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, transform_hlds__tupling__ReverseGoalPathMap_6, ((MR_Box) (transform_hlds__tupling__GoalId_7)), &transform_hlds__tupling__conv0_GoalPath_9);
    }
#line 2011 "tupling.m"
    transform_hlds__tupling__GoalPath_9 = ((MR_Word) transform_hlds__tupling__conv0_GoalPath_9);
#line 1959 "tupling.m"
    {
#line 1959 "tupling.m"
      transform_hlds__tupling__PathPort_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__PathPort_19, 0) = ((MR_Box) (transform_hlds__tupling__GoalPath_9));
#line 1959 "tupling.m"
    }
#line 1960 "tupling.m"
    {
#line 1960 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, transform_hlds__tupling__ProcCounts_5, ((MR_Box) (transform_hlds__tupling__PathPort_19)), &transform_hlds__tupling__conv1_ContextCount_20);
    }
#line 1960 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1960 "tupling.m"
      {
#line 1960 "tupling.m"
        transform_hlds__tupling__ContextCount_20 = ((MR_Word) transform_hlds__tupling__conv1_ContextCount_20);
#line 1960 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 1960 "tupling.m"
      }
#line 1960 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1961 "tupling.m"
      {
#line 1961 "tupling.m"
        MR_Integer transform_hlds__tupling__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_20, (MR_Integer) 0)));
#line 1961 "tupling.m"
        MR_Integer transform_hlds__tupling__V_22_22;

#line 1961 "tupling.m"
        transform_hlds__tupling__CaseTotal_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_20, (MR_Integer) 1)));
#line 1961 "tupling.m"
        transform_hlds__tupling__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_20, (MR_Integer) 2)));
#line 1961 "tupling.m"
      }
#line 1960 "tupling.m"
    else
#line 1963 "tupling.m"
      transform_hlds__tupling__CaseTotal_10 = (MR_Integer) 0;
#line 2025 "tupling.m"
    {
#line 2025 "tupling.m"
      transform_hlds__tupling__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2025 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_28_28, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[4]));
#line 2025 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_28_28, 1) = ((MR_Box) (transform_hlds__tupling__get_case_relative_frequency_4_p_0_1));
#line 2025 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2025 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_28_28, 3) = ((MR_Box) (transform_hlds__tupling__GoalPath_9));
#line 2025 "tupling.m"
    }
#line 2025 "tupling.m"
    {
#line 2025 "tupling.m"
      mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__tupling__V_28_28, transform_hlds__tupling__ProcCounts_5, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__tupling__conv3_SwitchTotal_11);
    }
#line 2025 "tupling.m"
    transform_hlds__tupling__SwitchTotal_11 = ((MR_Integer) transform_hlds__tupling__conv3_SwitchTotal_11);
#line 2014 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__SwitchTotal_11 == (MR_Integer) 0);
#line 2014 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 2015 "tupling.m"
      *transform_hlds__tupling__RelFreq_8 = (MR_Float) 0.0000000000000000;
#line 2014 "tupling.m"
    else
#line 2017 "tupling.m"
      {
#line 2017 "tupling.m"
        MR_Float transform_hlds__tupling__V_12_12;
#line 2017 "tupling.m"
        MR_Float transform_hlds__tupling__V_13_13;

#line 2017 "tupling.m"
        {
#line 2017 "tupling.m"
          transform_hlds__tupling__V_12_12 = mercury__float__float_1_f_0(transform_hlds__tupling__CaseTotal_10);
        }
#line 2017 "tupling.m"
        {
#line 2017 "tupling.m"
          transform_hlds__tupling__V_13_13 = mercury__float__float_1_f_0(transform_hlds__tupling__SwitchTotal_11);
        }
#line 2017 "tupling.m"
        {
#line 2017 "tupling.m"
          *transform_hlds__tupling__RelFreq_8 = mercury__float__f_slash_2_f_0(transform_hlds__tupling__V_12_12, transform_hlds__tupling__V_13_13);
        }
#line 2017 "tupling.m"
      }
#line 2010 "tupling.m"
  }
#line 2007 "tupling.m"
}

#line 1985 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_disjunct_relative_frequency_4_p_0(
#line 1985 "tupling.m"
  MR_Word transform_hlds__tupling__ProcCounts_5,
#line 1985 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMap_6,
#line 1985 "tupling.m"
  MR_Word transform_hlds__tupling__GoalId_7,
#line 1985 "tupling.m"
  MR_Float * transform_hlds__tupling__RelFreq_8)
#line 1985 "tupling.m"
{
#line 1989 "tupling.m"
  {
#line 1989 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1989 "tupling.m"
    MR_Word transform_hlds__tupling__RevGoalPath_9;
#line 1990 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_RevGoalPath_9;
#line 1991 "tupling.m"
    MR_Word transform_hlds__tupling__RevPrevGoalPath_10;
#line 1992 "tupling.m"
    MR_Word transform_hlds__tupling__LastStep_11;
#line 1993 "tupling.m"
    MR_Integer transform_hlds__tupling__V_12_12;

#line 1990 "tupling.m"
    {
#line 1990 "tupling.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, transform_hlds__tupling__ReverseGoalPathMap_6, ((MR_Box) (transform_hlds__tupling__GoalId_7)), &transform_hlds__tupling__conv0_RevGoalPath_9);
    }
#line 1990 "tupling.m"
    transform_hlds__tupling__RevGoalPath_9 = ((MR_Word) transform_hlds__tupling__conv0_RevGoalPath_9);
#line 1992 "tupling.m"
    transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__RevGoalPath_9)) == (MR_mktag((MR_Integer) 1)));
#line 1992 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1992 "tupling.m"
      {
#line 1992 "tupling.m"
        transform_hlds__tupling__RevPrevGoalPath_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__RevGoalPath_9, (MR_Integer) 0)));
#line 1992 "tupling.m"
        transform_hlds__tupling__LastStep_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__RevGoalPath_9, (MR_Integer) 1)));
#line 1993 "tupling.m"
        transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__LastStep_11)) == (MR_mktag((MR_Integer) 2)));
#line 1993 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1993 "tupling.m"
          transform_hlds__tupling__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__LastStep_11, (MR_Integer) 0)));
#line 1992 "tupling.m"
      }
#line 1991 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1995 "tupling.m"
      {
#line 1995 "tupling.m"
        MR_Word transform_hlds__tupling__RevFirstDisjGoalPath_13;
#line 1995 "tupling.m"
        MR_Integer transform_hlds__tupling__DisjCount_14;
#line 1995 "tupling.m"
        MR_Integer transform_hlds__tupling__FirstDisjCount_15;
#line 1995 "tupling.m"
        MR_Word transform_hlds__tupling__PathPort_28;
#line 1995 "tupling.m"
        MR_Word transform_hlds__tupling__PathPort_37;
#line 1960 "tupling.m"
        MR_Word transform_hlds__tupling__ContextCount_29;
#line 1960 "tupling.m"
        MR_Box transform_hlds__tupling__conv1_ContextCount_29;
#line 1960 "tupling.m"
        MR_Word transform_hlds__tupling__ContextCount_38;
#line 1960 "tupling.m"
        MR_Box transform_hlds__tupling__conv2_ContextCount_38;

#line 1995 "tupling.m"
        {
#line 1995 "tupling.m"
          transform_hlds__tupling__RevFirstDisjGoalPath_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1995 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__RevFirstDisjGoalPath_13, 0) = ((MR_Box) (transform_hlds__tupling__RevPrevGoalPath_10));
#line 1995 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__RevFirstDisjGoalPath_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__tupling_scalar_common_3[4])));
#line 1995 "tupling.m"
        }
#line 1959 "tupling.m"
        {
#line 1959 "tupling.m"
          transform_hlds__tupling__PathPort_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__PathPort_28, 0) = ((MR_Box) (transform_hlds__tupling__RevGoalPath_9));
#line 1959 "tupling.m"
        }
#line 1960 "tupling.m"
        {
#line 1960 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, transform_hlds__tupling__ProcCounts_5, ((MR_Box) (transform_hlds__tupling__PathPort_28)), &transform_hlds__tupling__conv1_ContextCount_29);
        }
#line 1960 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1960 "tupling.m"
          {
#line 1960 "tupling.m"
            transform_hlds__tupling__ContextCount_29 = ((MR_Word) transform_hlds__tupling__conv1_ContextCount_29);
#line 1960 "tupling.m"
            transform_hlds__tupling__succeeded = MR_TRUE;
#line 1960 "tupling.m"
          }
#line 1960 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1961 "tupling.m"
          {
#line 1961 "tupling.m"
            MR_Integer transform_hlds__tupling__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_29, (MR_Integer) 0)));
#line 1961 "tupling.m"
            MR_Integer transform_hlds__tupling__V_31_31;

#line 1961 "tupling.m"
            transform_hlds__tupling__DisjCount_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_29, (MR_Integer) 1)));
#line 1961 "tupling.m"
            transform_hlds__tupling__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_29, (MR_Integer) 2)));
#line 1961 "tupling.m"
          }
#line 1960 "tupling.m"
        else
#line 1963 "tupling.m"
          transform_hlds__tupling__DisjCount_14 = (MR_Integer) 0;
#line 1959 "tupling.m"
        {
#line 1959 "tupling.m"
          transform_hlds__tupling__PathPort_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__PathPort_37, 0) = ((MR_Box) (transform_hlds__tupling__RevFirstDisjGoalPath_13));
#line 1959 "tupling.m"
        }
#line 1960 "tupling.m"
        {
#line 1960 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, transform_hlds__tupling__ProcCounts_5, ((MR_Box) (transform_hlds__tupling__PathPort_37)), &transform_hlds__tupling__conv2_ContextCount_38);
        }
#line 1960 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1960 "tupling.m"
          {
#line 1960 "tupling.m"
            transform_hlds__tupling__ContextCount_38 = ((MR_Word) transform_hlds__tupling__conv2_ContextCount_38);
#line 1960 "tupling.m"
            transform_hlds__tupling__succeeded = MR_TRUE;
#line 1960 "tupling.m"
          }
#line 1960 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1961 "tupling.m"
          {
#line 1961 "tupling.m"
            MR_Integer transform_hlds__tupling__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_38, (MR_Integer) 0)));
#line 1961 "tupling.m"
            MR_Integer transform_hlds__tupling__V_40_40;

#line 1961 "tupling.m"
            transform_hlds__tupling__FirstDisjCount_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_38, (MR_Integer) 1)));
#line 1961 "tupling.m"
            transform_hlds__tupling__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_38, (MR_Integer) 2)));
#line 1961 "tupling.m"
          }
#line 1960 "tupling.m"
        else
#line 1963 "tupling.m"
          transform_hlds__tupling__FirstDisjCount_15 = (MR_Integer) 0;
#line 1998 "tupling.m"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__FirstDisjCount_15 == (MR_Integer) 0);
#line 1998 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1999 "tupling.m"
          *transform_hlds__tupling__RelFreq_8 = (MR_Float) 0.0000000000000000;
#line 1998 "tupling.m"
        else
#line 2001 "tupling.m"
          {
#line 2001 "tupling.m"
            MR_Float transform_hlds__tupling__V_18_18;
#line 2001 "tupling.m"
            MR_Float transform_hlds__tupling__V_19_19;

#line 2001 "tupling.m"
            {
#line 2001 "tupling.m"
              transform_hlds__tupling__V_18_18 = mercury__float__float_1_f_0(transform_hlds__tupling__DisjCount_14);
            }
#line 2001 "tupling.m"
            {
#line 2001 "tupling.m"
              transform_hlds__tupling__V_19_19 = mercury__float__float_1_f_0(transform_hlds__tupling__FirstDisjCount_15);
            }
#line 2001 "tupling.m"
            {
#line 2001 "tupling.m"
              *transform_hlds__tupling__RelFreq_8 = mercury__float__f_slash_2_f_0(transform_hlds__tupling__V_18_18, transform_hlds__tupling__V_19_19);
            }
#line 2001 "tupling.m"
          }
#line 1995 "tupling.m"
      }
#line 1991 "tupling.m"
    else
#line 2004 "tupling.m"
      {
#line 2004 "tupling.m"
        {
#line 2004 "tupling.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.get_disjunct_relative_frequency\'/4", (MR_String) "did not see disj(N) at head of goal path");
#line 2004 "tupling.m"
          return;
        }
#line 2004 "tupling.m"
      }
#line 1989 "tupling.m"
  }
#line 1985 "tupling.m"
}

#line 1966 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_ite_relative_frequencies_6_p_0(
#line 1966 "tupling.m"
  MR_Word transform_hlds__tupling__ProcCounts_7,
#line 1966 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMap_8,
#line 1966 "tupling.m"
  MR_Word transform_hlds__tupling__ThenGoalId_9,
#line 1966 "tupling.m"
  MR_Word transform_hlds__tupling__ElseGoalId_10,
#line 1966 "tupling.m"
  MR_Float * transform_hlds__tupling__ThenRelFreq_11,
#line 1966 "tupling.m"
  MR_Float * transform_hlds__tupling__ElseRelFreq_12)
#line 1966 "tupling.m"
{
#line 1971 "tupling.m"
  {
#line 1971 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1971 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 1971 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_24_24 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 1971 "tupling.m"
    MR_Word transform_hlds__tupling__ThenGoalPath_13;
#line 1971 "tupling.m"
    MR_Word transform_hlds__tupling__ElseGoalPath_14;
#line 1971 "tupling.m"
    MR_Integer transform_hlds__tupling__ThenCounts_15;
#line 1971 "tupling.m"
    MR_Integer transform_hlds__tupling__ElseCounts_16;
#line 1971 "tupling.m"
    MR_Integer transform_hlds__tupling__Total_17;
#line 1971 "tupling.m"
    MR_Word transform_hlds__tupling__PathPort_28;
#line 1971 "tupling.m"
    MR_Word transform_hlds__tupling__PathPort_37;
#line 1972 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_ThenGoalPath_13;
#line 1973 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_ElseGoalPath_14;
#line 1960 "tupling.m"
    MR_Word transform_hlds__tupling__ContextCount_29;
#line 1960 "tupling.m"
    MR_Box transform_hlds__tupling__conv2_ContextCount_29;
#line 1960 "tupling.m"
    MR_Word transform_hlds__tupling__ContextCount_38;
#line 1960 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_ContextCount_38;

#line 1972 "tupling.m"
    {
#line 1972 "tupling.m"
      mercury__map__lookup_3_p_0(transform_hlds__tupling__TypeCtorInfo_23_23, transform_hlds__tupling__TypeCtorInfo_24_24, transform_hlds__tupling__ReverseGoalPathMap_8, ((MR_Box) (transform_hlds__tupling__ThenGoalId_9)), &transform_hlds__tupling__conv0_ThenGoalPath_13);
    }
#line 1972 "tupling.m"
    transform_hlds__tupling__ThenGoalPath_13 = ((MR_Word) transform_hlds__tupling__conv0_ThenGoalPath_13);
#line 1973 "tupling.m"
    {
#line 1973 "tupling.m"
      mercury__map__lookup_3_p_0(transform_hlds__tupling__TypeCtorInfo_23_23, transform_hlds__tupling__TypeCtorInfo_24_24, transform_hlds__tupling__ReverseGoalPathMap_8, ((MR_Box) (transform_hlds__tupling__ElseGoalId_10)), &transform_hlds__tupling__conv1_ElseGoalPath_14);
    }
#line 1973 "tupling.m"
    transform_hlds__tupling__ElseGoalPath_14 = ((MR_Word) transform_hlds__tupling__conv1_ElseGoalPath_14);
#line 1959 "tupling.m"
    {
#line 1959 "tupling.m"
      transform_hlds__tupling__PathPort_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__PathPort_28, 0) = ((MR_Box) (transform_hlds__tupling__ThenGoalPath_13));
#line 1959 "tupling.m"
    }
#line 1960 "tupling.m"
    {
#line 1960 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, transform_hlds__tupling__ProcCounts_7, ((MR_Box) (transform_hlds__tupling__PathPort_28)), &transform_hlds__tupling__conv2_ContextCount_29);
    }
#line 1960 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1960 "tupling.m"
      {
#line 1960 "tupling.m"
        transform_hlds__tupling__ContextCount_29 = ((MR_Word) transform_hlds__tupling__conv2_ContextCount_29);
#line 1960 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 1960 "tupling.m"
      }
#line 1960 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1961 "tupling.m"
      {
#line 1961 "tupling.m"
        MR_Integer transform_hlds__tupling__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_29, (MR_Integer) 0)));
#line 1961 "tupling.m"
        MR_Integer transform_hlds__tupling__V_31_31;

#line 1961 "tupling.m"
        transform_hlds__tupling__ThenCounts_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_29, (MR_Integer) 1)));
#line 1961 "tupling.m"
        transform_hlds__tupling__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_29, (MR_Integer) 2)));
#line 1961 "tupling.m"
      }
#line 1960 "tupling.m"
    else
#line 1963 "tupling.m"
      transform_hlds__tupling__ThenCounts_15 = (MR_Integer) 0;
#line 1959 "tupling.m"
    {
#line 1959 "tupling.m"
      transform_hlds__tupling__PathPort_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__PathPort_37, 0) = ((MR_Box) (transform_hlds__tupling__ElseGoalPath_14));
#line 1959 "tupling.m"
    }
#line 1960 "tupling.m"
    {
#line 1960 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, transform_hlds__tupling__ProcCounts_7, ((MR_Box) (transform_hlds__tupling__PathPort_37)), &transform_hlds__tupling__conv3_ContextCount_38);
    }
#line 1960 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1960 "tupling.m"
      {
#line 1960 "tupling.m"
        transform_hlds__tupling__ContextCount_38 = ((MR_Word) transform_hlds__tupling__conv3_ContextCount_38);
#line 1960 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 1960 "tupling.m"
      }
#line 1960 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1961 "tupling.m"
      {
#line 1961 "tupling.m"
        MR_Integer transform_hlds__tupling__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_38, (MR_Integer) 0)));
#line 1961 "tupling.m"
        MR_Integer transform_hlds__tupling__V_40_40;

#line 1961 "tupling.m"
        transform_hlds__tupling__ElseCounts_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_38, (MR_Integer) 1)));
#line 1961 "tupling.m"
        transform_hlds__tupling__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_38, (MR_Integer) 2)));
#line 1961 "tupling.m"
      }
#line 1960 "tupling.m"
    else
#line 1963 "tupling.m"
      transform_hlds__tupling__ElseCounts_16 = (MR_Integer) 0;
#line 1976 "tupling.m"
    transform_hlds__tupling__Total_17 = (transform_hlds__tupling__ThenCounts_15 + transform_hlds__tupling__ElseCounts_16);
#line 1977 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__Total_17 > (MR_Integer) 0);
#line 1977 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1978 "tupling.m"
      {
#line 1978 "tupling.m"
        MR_Float transform_hlds__tupling__V_19_19;
#line 1978 "tupling.m"
        MR_Float transform_hlds__tupling__V_20_20;
#line 1978 "tupling.m"
        MR_Float transform_hlds__tupling__V_21_21;
#line 1978 "tupling.m"
        MR_Float transform_hlds__tupling__V_22_22;

#line 1978 "tupling.m"
        {
#line 1978 "tupling.m"
          transform_hlds__tupling__V_19_19 = mercury__float__float_1_f_0(transform_hlds__tupling__ThenCounts_15);
        }
#line 1978 "tupling.m"
        {
#line 1978 "tupling.m"
          transform_hlds__tupling__V_20_20 = mercury__float__float_1_f_0(transform_hlds__tupling__Total_17);
        }
#line 1978 "tupling.m"
        {
#line 1978 "tupling.m"
          *transform_hlds__tupling__ThenRelFreq_11 = mercury__float__f_slash_2_f_0(transform_hlds__tupling__V_19_19, transform_hlds__tupling__V_20_20);
        }
#line 1979 "tupling.m"
        {
#line 1979 "tupling.m"
          transform_hlds__tupling__V_21_21 = mercury__float__float_1_f_0(transform_hlds__tupling__ElseCounts_16);
        }
#line 1979 "tupling.m"
        {
#line 1979 "tupling.m"
          transform_hlds__tupling__V_22_22 = mercury__float__float_1_f_0(transform_hlds__tupling__Total_17);
        }
#line 1979 "tupling.m"
        {
#line 1979 "tupling.m"
          *transform_hlds__tupling__ElseRelFreq_12 = mercury__float__f_slash_2_f_0(transform_hlds__tupling__V_21_21, transform_hlds__tupling__V_22_22);
        }
#line 1978 "tupling.m"
      }
#line 1977 "tupling.m"
    else
#line 1981 "tupling.m"
      {
#line 1981 "tupling.m"
        *transform_hlds__tupling__ThenRelFreq_11 = (MR_Float) 0.50000000000000000;
#line 1982 "tupling.m"
        *transform_hlds__tupling__ElseRelFreq_12 = (MR_Float) 0.50000000000000000;
#line 1981 "tupling.m"
      }
#line 1971 "tupling.m"
  }
#line 1966 "tupling.m"
}

#line 1922 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(
#line 1922 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1922 "tupling.m"
  MR_Integer transform_hlds__tupling__HeadVar__2_2,
#line 1922 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1922 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__4_4)
#line 1922 "tupling.m"
{
#line 1925 "tupling.m"
  while (MR_TRUE)
#line 1925 "tupling.m"
    {
#line 1925 "tupling.m"
      /* tailcall optimized into a loop */
#line 1925 "tupling.m"
      {
#line 1925 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;

#line 1925 "tupling.m"
        if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1925 "tupling.m"
          *transform_hlds__tupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1925 "tupling.m"
        else
#line 1926 "tupling.m"
          {
#line 1926 "tupling.m"
            MR_Word transform_hlds__tupling__H_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1926 "tupling.m"
            MR_Word transform_hlds__tupling__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));

#line 1927 "tupling.m"
            {
#line 1927 "tupling.m"
              transform_hlds__tupling__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__tupling__HeadVar__2_2)), transform_hlds__tupling__HeadVar__3_3);
            }
#line 1927 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 1928 "tupling.m"
              {
#line 1928 "tupling.m"
                MR_Integer transform_hlds__tupling__V_13_13 = (transform_hlds__tupling__HeadVar__2_2 + (MR_Integer) 1);

#line 1928 "tupling.m"
                /* direct tailcall eliminated */
#line 1928 "tupling.m"
                {
#line 1928 "tupling.m"
                  MR_Word transform_hlds__tupling__HeadVar__1__tmp_copy_1 = transform_hlds__tupling__T_8;
#line 1928 "tupling.m"
                  MR_Integer transform_hlds__tupling__HeadVar__2__tmp_copy_2 = transform_hlds__tupling__V_13_13;

#line 1928 "tupling.m"
                  transform_hlds__tupling__HeadVar__2_2 = transform_hlds__tupling__HeadVar__2__tmp_copy_2;
#line 1928 "tupling.m"
                  transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__HeadVar__1__tmp_copy_1;
#line 1928 "tupling.m"
                }
#line 1928 "tupling.m"
                continue;
#line 1928 "tupling.m"
              }
#line 1927 "tupling.m"
            else
#line 1930 "tupling.m"
              {
#line 1930 "tupling.m"
                MR_Word transform_hlds__tupling__NotSelectedTail_12;
#line 1930 "tupling.m"
                MR_Integer transform_hlds__tupling__V_15_15 = (transform_hlds__tupling__HeadVar__2_2 + (MR_Integer) 1);

#line 1930 "tupling.m"
                {
#line 1930 "tupling.m"
                  transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(transform_hlds__tupling__T_8, transform_hlds__tupling__V_15_15, transform_hlds__tupling__HeadVar__3_3, &transform_hlds__tupling__NotSelectedTail_12);
                }
#line 1931 "tupling.m"
                {
#line 1931 "tupling.m"
                  MR_Word base;
#line 1931 "tupling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1931 "tupling.m"
                  *transform_hlds__tupling__HeadVar__4_4 = base;
#line 1931 "tupling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__H_7));
#line 1931 "tupling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__tupling__NotSelectedTail_12));
#line 1931 "tupling.m"
                }
#line 1930 "tupling.m"
              }
#line 1926 "tupling.m"
          }
#line 1925 "tupling.m"
      }
#line 1925 "tupling.m"
      break;
#line 1925 "tupling.m"
    }
#line 1922 "tupling.m"
}

#line 1919 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0_1(
#line 1919 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1919 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1919 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2)
#line 1919 "tupling.m"
{
#line 1919 "tupling.m"
  {
#line 1919 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1919 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_HeadVar__3_12;

#line 1919 "tupling.m"
    {
#line 1919 "tupling.m"
      transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1919__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__tupling__wrapper_arg_1), &transform_hlds__tupling__conv0_HeadVar__3_12);
    }
#line 1919 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__3_12));
#line 1919 "tupling.m"
  }
#line 1919 "tupling.m"
}

#line 1915 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0(
#line 1915 "tupling.m"
  MR_Word transform_hlds__tupling__ArgList_5,
#line 1915 "tupling.m"
  MR_Word transform_hlds__tupling__Indices_6,
#line 1915 "tupling.m"
  MR_Word * transform_hlds__tupling__Selected_7,
#line 1915 "tupling.m"
  MR_Word * transform_hlds__tupling__NotSelected_8)
#line 1915 "tupling.m"
{
#line 1918 "tupling.m"
  {
#line 1918 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1918 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9;

#line 1919 "tupling.m"
    {
#line 1919 "tupling.m"
      transform_hlds__tupling__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1919 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_9_9, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_7[3]));
#line 1919 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_9_9, 1) = ((MR_Box) (transform_hlds__tupling__extract_tupled_args_from_list_4_p_0_1));
#line 1919 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1919 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_9_9, 3) = ((MR_Box) (transform_hlds__tupling__ArgList_5));
#line 1919 "tupling.m"
    }
#line 1919 "tupling.m"
    {
#line 1919 "tupling.m"
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__V_9_9, transform_hlds__tupling__Indices_6, transform_hlds__tupling__Selected_7);
    }
#line 1920 "tupling.m"
    {
#line 1920 "tupling.m"
      transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(transform_hlds__tupling__ArgList_5, (MR_Integer) 1, transform_hlds__tupling__Indices_6, transform_hlds__tupling__NotSelected_8);
    }
#line 1918 "tupling.m"
  }
#line 1915 "tupling.m"
}

#line 1887 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_cases_9_p_0(
#line 1887 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1887 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__2_2,
#line 1887 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3,
#line 1887 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_4,
#line 1887 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5,
#line 1887 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_6,
#line 1887 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7,
#line 1887 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8,
#line 1887 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_9)
#line 1887 "tupling.m"
{
#line 1891 "tupling.m"
  {
#line 1891 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1891 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1891 "tupling.m"
      {
#line 1891 "tupling.m"
        *transform_hlds__tupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1891 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8 = transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7;
#line 1891 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5;
#line 1891 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_VarSet_4 = transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3;
#line 1891 "tupling.m"
      }
#line 1891 "tupling.m"
    else
#line 1893 "tupling.m"
      {
#line 1893 "tupling.m"
        MR_Word transform_hlds__tupling__Case0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1893 "tupling.m"
        MR_Word transform_hlds__tupling__Cases0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1893 "tupling.m"
        MR_Word transform_hlds__tupling__Case_22;
#line 1893 "tupling.m"
        MR_Word transform_hlds__tupling__Cases_23;
#line 1893 "tupling.m"
        MR_Word transform_hlds__tupling__MainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case0_20, (MR_Integer) 0)));
#line 1893 "tupling.m"
        MR_Word transform_hlds__tupling__OtherConsIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case0_20, (MR_Integer) 1)));
#line 1893 "tupling.m"
        MR_Word transform_hlds__tupling__Goal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case0_20, (MR_Integer) 2)));
#line 1893 "tupling.m"
        MR_Word transform_hlds__tupling__Goal_31;
#line 1893 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_38_38;
#line 1893 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_39_39;
#line 1893 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_40_40;

#line 1895 "tupling.m"
        {
#line 1895 "tupling.m"
          transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Goal0_30, &transform_hlds__tupling__Goal_31, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__tupling__STATE_VARIABLE_VarSet_38_38, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__tupling__STATE_VARIABLE_VarTypes_39_39, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7, &transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_40_40, transform_hlds__tupling__TransformMap_9);
        }
#line 1897 "tupling.m"
        {
#line 1897 "tupling.m"
          transform_hlds__tupling__Case_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1897 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case_22, 0) = ((MR_Box) (transform_hlds__tupling__MainConsId_28));
#line 1897 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case_22, 1) = ((MR_Box) (transform_hlds__tupling__OtherConsIds_29));
#line 1897 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case_22, 2) = ((MR_Box) (transform_hlds__tupling__Goal_31));
#line 1897 "tupling.m"
        }
#line 1898 "tupling.m"
        {
#line 1898 "tupling.m"
          transform_hlds__tupling__fix_calls_in_cases_9_p_0(transform_hlds__tupling__Cases0_21, &transform_hlds__tupling__Cases_23, transform_hlds__tupling__STATE_VARIABLE_VarSet_38_38, transform_hlds__tupling__STATE_VARIABLE_VarSet_4, transform_hlds__tupling__STATE_VARIABLE_VarTypes_39_39, transform_hlds__tupling__STATE_VARIABLE_VarTypes_6, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_40_40, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8, transform_hlds__tupling__TransformMap_9);
        }
#line 1892 "tupling.m"
        {
#line 1892 "tupling.m"
          MR_Word base;
#line 1892 "tupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1892 "tupling.m"
          *transform_hlds__tupling__HeadVar__2_2 = base;
#line 1892 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__Case_22));
#line 1892 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__tupling__Cases_23));
#line 1892 "tupling.m"
        }
#line 1893 "tupling.m"
      }
#line 1891 "tupling.m"
  }
#line 1887 "tupling.m"
}

#line 1875 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(
#line 1875 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1875 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__2_2,
#line 1875 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3,
#line 1875 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_4,
#line 1875 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5,
#line 1875 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_6,
#line 1875 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7,
#line 1875 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8,
#line 1875 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_9)
#line 1875 "tupling.m"
{
#line 1879 "tupling.m"
  {
#line 1879 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1879 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1879 "tupling.m"
      {
#line 1879 "tupling.m"
        *transform_hlds__tupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1879 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8 = transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7;
#line 1879 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5;
#line 1879 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_VarSet_4 = transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3;
#line 1879 "tupling.m"
      }
#line 1879 "tupling.m"
    else
#line 1881 "tupling.m"
      {
#line 1881 "tupling.m"
        MR_Word transform_hlds__tupling__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1881 "tupling.m"
        MR_Word transform_hlds__tupling__Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1881 "tupling.m"
        MR_Word transform_hlds__tupling__Goal_22;
#line 1881 "tupling.m"
        MR_Word transform_hlds__tupling__Goals_23;
#line 1881 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_34_34;
#line 1881 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_35_35;
#line 1881 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_36_36;

#line 1882 "tupling.m"
        {
#line 1882 "tupling.m"
          transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Goal0_20, &transform_hlds__tupling__Goal_22, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__tupling__STATE_VARIABLE_VarSet_34_34, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__tupling__STATE_VARIABLE_VarTypes_35_35, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7, &transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_36_36, transform_hlds__tupling__TransformMap_9);
        }
#line 1884 "tupling.m"
        {
#line 1884 "tupling.m"
          transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(transform_hlds__tupling__Goals0_21, &transform_hlds__tupling__Goals_23, transform_hlds__tupling__STATE_VARIABLE_VarSet_34_34, transform_hlds__tupling__STATE_VARIABLE_VarSet_4, transform_hlds__tupling__STATE_VARIABLE_VarTypes_35_35, transform_hlds__tupling__STATE_VARIABLE_VarTypes_6, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_36_36, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8, transform_hlds__tupling__TransformMap_9);
        }
#line 1880 "tupling.m"
        {
#line 1880 "tupling.m"
          MR_Word base;
#line 1880 "tupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1880 "tupling.m"
          *transform_hlds__tupling__HeadVar__2_2 = base;
#line 1880 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__Goal_22));
#line 1880 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__tupling__Goals_23));
#line 1880 "tupling.m"
        }
#line 1881 "tupling.m"
      }
#line 1879 "tupling.m"
  }
#line 1875 "tupling.m"
}

#line 1858 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_conj_9_p_0(
#line 1858 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1858 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__2_2,
#line 1858 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3,
#line 1858 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_4,
#line 1858 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5,
#line 1858 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_6,
#line 1858 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7,
#line 1858 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8,
#line 1858 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_9)
#line 1858 "tupling.m"
{
#line 1862 "tupling.m"
  {
#line 1862 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1862 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1862 "tupling.m"
      {
#line 1862 "tupling.m"
        *transform_hlds__tupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1862 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8 = transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7;
#line 1862 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5;
#line 1862 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_VarSet_4 = transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3;
#line 1862 "tupling.m"
      }
#line 1862 "tupling.m"
    else
#line 1864 "tupling.m"
      {
#line 1864 "tupling.m"
        MR_Word transform_hlds__tupling__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1864 "tupling.m"
        MR_Word transform_hlds__tupling__Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1864 "tupling.m"
        MR_Word transform_hlds__tupling__Goal1_27;
#line 1864 "tupling.m"
        MR_Word transform_hlds__tupling__Goals1_28;
#line 1864 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_37_37;
#line 1864 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_38_38;
#line 1864 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_39_39;
#line 1869 "tupling.m"
        MR_Word transform_hlds__tupling__ConjGoals_29;
#line 1869 "tupling.m"
        MR_Word transform_hlds__tupling__V_43_43;
#line 1869 "tupling.m"
        MR_Word transform_hlds__tupling__V_44_44;
#line 1869 "tupling.m"
        MR_Word transform_hlds__tupling__V_30_30;

#line 1865 "tupling.m"
        {
#line 1865 "tupling.m"
          transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Goal0_20, &transform_hlds__tupling__Goal1_27, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__tupling__STATE_VARIABLE_VarSet_37_37, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__tupling__STATE_VARIABLE_VarTypes_38_38, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7, &transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_39_39, transform_hlds__tupling__TransformMap_9);
        }
#line 1867 "tupling.m"
        {
#line 1867 "tupling.m"
          transform_hlds__tupling__fix_calls_in_conj_9_p_0(transform_hlds__tupling__Goals0_21, &transform_hlds__tupling__Goals1_28, transform_hlds__tupling__STATE_VARIABLE_VarSet_37_37, transform_hlds__tupling__STATE_VARIABLE_VarSet_4, transform_hlds__tupling__STATE_VARIABLE_VarTypes_38_38, transform_hlds__tupling__STATE_VARIABLE_VarTypes_6, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_39_39, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8, transform_hlds__tupling__TransformMap_9);
        }
#line 1869 "tupling.m"
        transform_hlds__tupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal1_27, (MR_Integer) 0)));
#line 1869 "tupling.m"
        transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal1_27, (MR_Integer) 1)));
#line 1869 "tupling.m"
        transform_hlds__tupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__tupling__V_43_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_43_43, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1869 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1869 "tupling.m"
          {
#line 1869 "tupling.m"
            transform_hlds__tupling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_43_43, (MR_Integer) 1)));
#line 1869 "tupling.m"
            transform_hlds__tupling__ConjGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_43_43, (MR_Integer) 2)));
#line 1869 "tupling.m"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_44_44 == (MR_Integer) 0);
#line 1869 "tupling.m"
          }
#line 1869 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1870 "tupling.m"
          {
#line 1870 "tupling.m"
            {
#line 1870 "tupling.m"
              *transform_hlds__tupling__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__tupling__ConjGoals_29, transform_hlds__tupling__Goals1_28);
            }
#line 1870 "tupling.m"
          }
#line 1869 "tupling.m"
        else
#line 1872 "tupling.m"
          {
#line 1872 "tupling.m"
            MR_Word base;
#line 1872 "tupling.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1872 "tupling.m"
            *transform_hlds__tupling__HeadVar__2_2 = base;
#line 1872 "tupling.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__Goal1_27));
#line 1872 "tupling.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__tupling__Goals1_28));
#line 1872 "tupling.m"
          }
#line 1864 "tupling.m"
      }
#line 1862 "tupling.m"
  }
#line 1858 "tupling.m"
}

#line 1747 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_9_p_0(
#line 1747 "tupling.m"
  MR_Word transform_hlds__tupling__Goal0_10,
#line 1747 "tupling.m"
  MR_Word * transform_hlds__tupling__Goal_11,
#line 1747 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78,
#line 1747 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_79,
#line 1747 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80,
#line 1747 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_81,
#line 1747 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82,
#line 1747 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83,
#line 1747 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_15)
#line 1747 "tupling.m"
{
#line 1752 "tupling.m"
  {
#line 1752 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1752 "tupling.m"
    MR_Word transform_hlds__tupling__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal0_10, (MR_Integer) 0)));
#line 1752 "tupling.m"
    MR_Word transform_hlds__tupling__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal0_10, (MR_Integer) 1)));

#line 1760 "tupling.m"
#line 1760 "tupling.m"
    switch (MR_tag((MR_Word) transform_hlds__tupling__GoalExpr0_16)) {
#line 1760 "tupling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1760 "tupling.m"
      case (MR_Integer) 0:
#line 1792 "tupling.m"
        {
#line 1792 "tupling.m"
          MR_Word transform_hlds__tupling__SubGoal0_57 = (MR_Word) MR_body(((MR_Word) transform_hlds__tupling__GoalExpr0_16), (MR_Integer) 0);
#line 1792 "tupling.m"
          MR_Word transform_hlds__tupling__SubGoal_58;
#line 1792 "tupling.m"
          MR_Word transform_hlds__tupling__GoalExpr_59;

#line 1793 "tupling.m"
          {
#line 1793 "tupling.m"
            transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__SubGoal0_57, &transform_hlds__tupling__SubGoal_58, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
          }
#line 1795 "tupling.m"
          transform_hlds__tupling__GoalExpr_59 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__tupling__SubGoal_58);
#line 1796 "tupling.m"
          {
#line 1796 "tupling.m"
            MR_Word base;
#line 1796 "tupling.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1796 "tupling.m"
            *transform_hlds__tupling__Goal_11 = base;
#line 1796 "tupling.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__GoalExpr_59));
#line 1796 "tupling.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__GoalInfo0_17));
#line 1796 "tupling.m"
          }
#line 1792 "tupling.m"
        }
#line 1760 "tupling.m"
        break;
#line 1760 "tupling.m"
      case (MR_Integer) 1:
#line 1758 "tupling.m"
        {
#line 1759 "tupling.m"
          *transform_hlds__tupling__Goal_11 = transform_hlds__tupling__Goal0_10;
#line 1758 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_VarSet_79 = transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78;
#line 1758 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_VarTypes_81 = transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80;
#line 1758 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83 = transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82;
#line 1758 "tupling.m"
        }
#line 1760 "tupling.m"
        break;
#line 1760 "tupling.m"
      case (MR_Integer) 2:
#line 1762 "tupling.m"
        {
#line 1762 "tupling.m"
          MR_Word transform_hlds__tupling__CalledPredId0_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 0)));
#line 1762 "tupling.m"
          MR_Integer transform_hlds__tupling__CalledProcId0_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 1)));
#line 1762 "tupling.m"
          MR_Word transform_hlds__tupling__Args0_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 2)));
#line 1762 "tupling.m"
          MR_Word transform_hlds__tupling__Builtin_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 3)));
#line 1761 "tupling.m"
          MR_Word transform_hlds__tupling___Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 4)));
#line 1761 "tupling.m"
          MR_Word transform_hlds__tupling___SymName_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 5)));
#line 1763 "tupling.m"
          MR_Word transform_hlds__tupling__TupleConsType_43;
#line 1763 "tupling.m"
          MR_Word transform_hlds__tupling__ArgsToTuple_44;
#line 1763 "tupling.m"
          MR_Word transform_hlds__tupling__CallAux0_45;
#line 1763 "tupling.m"
          MR_Word transform_hlds__tupling__CallAuxInfo_46;
#line 1764 "tupling.m"
          MR_Word transform_hlds__tupling__TypeCtorInfo_151_151;
#line 1764 "tupling.m"
          MR_Word transform_hlds__tupling__TypeCtorInfo_152_152;
#line 1764 "tupling.m"
          MR_Word transform_hlds__tupling__TransformedProc_41;
#line 1764 "tupling.m"
          MR_Word transform_hlds__tupling__V_114_114;
#line 1764 "tupling.m"
          MR_Word transform_hlds__tupling__V_115_115;
#line 1765 "tupling.m"
          MR_Box transform_hlds__tupling__conv0_TransformedProc_41;
#line 1767 "tupling.m"
          MR_Word transform_hlds__tupling__V_42_42;

#line 1764 "tupling.m"
          transform_hlds__tupling__succeeded = (transform_hlds__tupling__Builtin_38 == (MR_Integer) 2);
#line 1764 "tupling.m"
          if (transform_hlds__tupling__succeeded)
#line 1764 "tupling.m"
            {
#line 8721 "transform_hlds.tupling.c"
              transform_hlds__tupling__TypeCtorInfo_151_151 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 8723 "transform_hlds.tupling.c"
              transform_hlds__tupling__TypeCtorInfo_152_152 = (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0;
#line 1765 "tupling.m"
              {
#line 1765 "tupling.m"
                transform_hlds__tupling__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1765 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_114_114, 0) = ((MR_Box) (transform_hlds__tupling__CalledPredId0_35));
#line 1765 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_114_114, 1) = ((MR_Box) (transform_hlds__tupling__CalledProcId0_36));
#line 1765 "tupling.m"
              }
#line 1765 "tupling.m"
              {
#line 1765 "tupling.m"
                transform_hlds__tupling__succeeded = mercury__map__search_3_p_0(transform_hlds__tupling__TypeCtorInfo_151_151, transform_hlds__tupling__TypeCtorInfo_152_152, transform_hlds__tupling__TransformMap_15, ((MR_Box) (transform_hlds__tupling__V_114_114)), &transform_hlds__tupling__conv0_TransformedProc_41);
              }
#line 1765 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1765 "tupling.m"
                {
#line 1765 "tupling.m"
                  transform_hlds__tupling__TransformedProc_41 = ((MR_Word) transform_hlds__tupling__conv0_TransformedProc_41);
#line 1765 "tupling.m"
                  transform_hlds__tupling__succeeded = MR_TRUE;
#line 1765 "tupling.m"
                }
#line 1764 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1764 "tupling.m"
                {
#line 1767 "tupling.m"
                  transform_hlds__tupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_41, (MR_Integer) 0)));
#line 1767 "tupling.m"
                  transform_hlds__tupling__TupleConsType_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_41, (MR_Integer) 1)));
#line 1767 "tupling.m"
                  transform_hlds__tupling__ArgsToTuple_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_41, (MR_Integer) 2)));
#line 1767 "tupling.m"
                  transform_hlds__tupling__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_41, (MR_Integer) 3)));
#line 1768 "tupling.m"
                  transform_hlds__tupling__CallAux0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_115_115, (MR_Integer) 0)));
#line 1768 "tupling.m"
                  transform_hlds__tupling__CallAuxInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_115_115, (MR_Integer) 1)));
#line 1768 "tupling.m"
                  transform_hlds__tupling__succeeded = MR_TRUE;
#line 1764 "tupling.m"
                }
#line 1764 "tupling.m"
            }
#line 1763 "tupling.m"
          if (transform_hlds__tupling__succeeded)
#line 1770 "tupling.m"
            {
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__TypeCtorInfo_153_153 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__CellVar_47;
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__TupledArgs_48;
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__UntupledArgs_49;
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__ConstructGoal_50;
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__CallGoal_53;
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__Goal1_54;
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__RequantifyVars_55;
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_117_117;
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_118_118;
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__V_124_124;
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__V_125_125;
#line 1770 "tupling.m"
              MR_Word transform_hlds__tupling__V_127_127;
#line 1775 "tupling.m"
              MR_Word transform_hlds__tupling__CallAux_52;
#line 1776 "tupling.m"
              MR_Word transform_hlds__tupling__NewArgs_51;
#line 1776 "tupling.m"
              MR_Word transform_hlds__tupling__V_119_119;
#line 1777 "tupling.m"
              MR_Word transform_hlds__tupling__V_145_145;
#line 1777 "tupling.m"
              MR_Integer transform_hlds__tupling__V_146_146;
#line 1777 "tupling.m"
              MR_Word transform_hlds__tupling__V_148_148;
#line 1777 "tupling.m"
              MR_Word transform_hlds__tupling__V_149_149;
#line 1777 "tupling.m"
              MR_Word transform_hlds__tupling__V_150_150;
#line 1777 "tupling.m"
              MR_Word transform_hlds__tupling__V_147_147;
#line 1785 "tupling.m"
              MR_Word transform_hlds__tupling__V_56_56;

#line 1770 "tupling.m"
              {
#line 1770 "tupling.m"
                mercury__varset__new_named_var_4_p_0(transform_hlds__tupling__TypeCtorInfo_153_153, (MR_String) "TuplingCellVarForCall", &transform_hlds__tupling__CellVar_47, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, &transform_hlds__tupling__STATE_VARIABLE_VarSet_117_117);
              }
#line 1771 "tupling.m"
              {
#line 1771 "tupling.m"
                hlds__vartypes__add_var_type_4_p_0(transform_hlds__tupling__CellVar_47, transform_hlds__tupling__TupleConsType_43, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, &transform_hlds__tupling__STATE_VARIABLE_VarTypes_118_118);
              }
#line 1772 "tupling.m"
              {
#line 1772 "tupling.m"
                transform_hlds__tupling__extract_tupled_args_from_list_4_p_0(transform_hlds__tupling__Args0_37, transform_hlds__tupling__ArgsToTuple_44, &transform_hlds__tupling__TupledArgs_48, &transform_hlds__tupling__UntupledArgs_49);
              }
#line 1774 "tupling.m"
              {
#line 1774 "tupling.m"
                hlds__make_goal__construct_tuple_3_p_0(transform_hlds__tupling__CellVar_47, transform_hlds__tupling__TupledArgs_48, &transform_hlds__tupling__ConstructGoal_50);
              }
#line 1776 "tupling.m"
              {
#line 1776 "tupling.m"
                transform_hlds__tupling__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1776 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_119_119, 0) = ((MR_Box) (transform_hlds__tupling__CellVar_47));
#line 1776 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1776 "tupling.m"
              }
#line 1776 "tupling.m"
              {
#line 1776 "tupling.m"
                transform_hlds__tupling__NewArgs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__UntupledArgs_49, transform_hlds__tupling__V_119_119);
              }
#line 1777 "tupling.m"
              transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__CallAux0_45)) == (MR_mktag((MR_Integer) 2)));
#line 1777 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1777 "tupling.m"
                {
#line 1777 "tupling.m"
                  transform_hlds__tupling__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux0_45, (MR_Integer) 0)));
#line 1777 "tupling.m"
                  transform_hlds__tupling__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux0_45, (MR_Integer) 1)));
#line 1777 "tupling.m"
                  transform_hlds__tupling__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux0_45, (MR_Integer) 2)));
#line 1777 "tupling.m"
                  transform_hlds__tupling__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux0_45, (MR_Integer) 3)));
#line 1777 "tupling.m"
                  transform_hlds__tupling__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux0_45, (MR_Integer) 4)));
#line 1777 "tupling.m"
                  transform_hlds__tupling__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux0_45, (MR_Integer) 5)));
#line 1777 "tupling.m"
                  {
#line 1777 "tupling.m"
                    transform_hlds__tupling__CallAux_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1777 "tupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux_52, 0) = ((MR_Box) (transform_hlds__tupling__V_145_145));
#line 1777 "tupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux_52, 1) = ((MR_Box) (transform_hlds__tupling__V_146_146));
#line 1777 "tupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux_52, 2) = ((MR_Box) (transform_hlds__tupling__NewArgs_51));
#line 1777 "tupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux_52, 3) = ((MR_Box) (transform_hlds__tupling__V_148_148));
#line 1777 "tupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux_52, 4) = ((MR_Box) (transform_hlds__tupling__V_149_149));
#line 1777 "tupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux_52, 5) = ((MR_Box) (transform_hlds__tupling__V_150_150));
#line 1777 "tupling.m"
                  }
#line 1777 "tupling.m"
                  transform_hlds__tupling__succeeded = MR_TRUE;
#line 1777 "tupling.m"
                }
#line 1775 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1779 "tupling.m"
                {
#line 1779 "tupling.m"
                  transform_hlds__tupling__CallGoal_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1779 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__CallGoal_53, 0) = ((MR_Box) (transform_hlds__tupling__CallAux_52));
#line 1779 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__CallGoal_53, 1) = ((MR_Box) (transform_hlds__tupling__CallAuxInfo_46));
#line 1779 "tupling.m"
                }
#line 1775 "tupling.m"
              else
#line 1781 "tupling.m"
                {
#line 1781 "tupling.m"
                  {
#line 1781 "tupling.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.fix_calls_in_goal\'/9", (MR_String) "not a call template");
#line 1781 "tupling.m"
                    return;
                  }
#line 1781 "tupling.m"
                }
#line 1783 "tupling.m"
              {
#line 1783 "tupling.m"
                transform_hlds__tupling__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1783 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_125_125, 0) = ((MR_Box) (transform_hlds__tupling__CallGoal_53));
#line 1783 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1783 "tupling.m"
              }
#line 1783 "tupling.m"
              {
#line 1783 "tupling.m"
                transform_hlds__tupling__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1783 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_124_124, 0) = ((MR_Box) (transform_hlds__tupling__ConstructGoal_50));
#line 1783 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_124_124, 1) = ((MR_Box) (transform_hlds__tupling__V_125_125));
#line 1783 "tupling.m"
              }
#line 1783 "tupling.m"
              {
#line 1783 "tupling.m"
                hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__tupling__V_124_124, transform_hlds__tupling__GoalInfo0_17, &transform_hlds__tupling__Goal1_54);
              }
#line 1784 "tupling.m"
              {
#line 1784 "tupling.m"
                transform_hlds__tupling__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1784 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_127_127, 0) = ((MR_Box) (transform_hlds__tupling__CellVar_47));
#line 1784 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_127_127, 1) = ((MR_Box) (transform_hlds__tupling__Args0_37));
#line 1784 "tupling.m"
              }
#line 1784 "tupling.m"
              {
#line 1784 "tupling.m"
                transform_hlds__tupling__RequantifyVars_55 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__tupling__TypeCtorInfo_153_153, transform_hlds__tupling__V_127_127);
              }
#line 1785 "tupling.m"
              {
#line 1785 "tupling.m"
                hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__tupling__RequantifyVars_55, &transform_hlds__tupling__V_56_56, transform_hlds__tupling__Goal1_54, transform_hlds__tupling__Goal_11, transform_hlds__tupling__STATE_VARIABLE_VarSet_117_117, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_118_118, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83);
              }
#line 1770 "tupling.m"
            }
#line 1763 "tupling.m"
          else
#line 1789 "tupling.m"
            {
#line 1789 "tupling.m"
              *transform_hlds__tupling__Goal_11 = transform_hlds__tupling__Goal0_10;
#line 1789 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83 = transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82;
#line 1789 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_VarTypes_81 = transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80;
#line 1789 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_VarSet_79 = transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78;
#line 1789 "tupling.m"
            }
#line 1762 "tupling.m"
        }
#line 1760 "tupling.m"
        break;
#line 1760 "tupling.m"
      case (MR_Integer) 3:
#line 1760 "tupling.m"
#line 1760 "tupling.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 0)))) {
#line 1760 "tupling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1760 "tupling.m"
          case (MR_Integer) 0:
#line 1760 "tupling.m"
          case (MR_Integer) 1:
#line 1758 "tupling.m"
            {
#line 1759 "tupling.m"
              *transform_hlds__tupling__Goal_11 = transform_hlds__tupling__Goal0_10;
#line 1758 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_VarSet_79 = transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78;
#line 1758 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_VarTypes_81 = transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80;
#line 1758 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83 = transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82;
#line 1758 "tupling.m"
            }
#line 1760 "tupling.m"
            break;
#line 1760 "tupling.m"
          case (MR_Integer) 2:
#line 1813 "tupling.m"
            {
#line 1813 "tupling.m"
              MR_Word transform_hlds__tupling__ConjType_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 1)));
#line 1813 "tupling.m"
              MR_Word transform_hlds__tupling__Goals0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 2)));
#line 1813 "tupling.m"
              MR_Word transform_hlds__tupling__Goals_65;
#line 1813 "tupling.m"
              MR_Word transform_hlds__tupling__GoalExpr_139;

#line 1818 "tupling.m"
#line 1818 "tupling.m"
              switch (transform_hlds__tupling__ConjType_63) {
#line 1818 "tupling.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1818 "tupling.m"
                case (MR_Integer) 1:
#line 1823 "tupling.m"
                  {
#line 1823 "tupling.m"
                    transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(transform_hlds__tupling__Goals0_64, &transform_hlds__tupling__Goals_65, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
                  }
#line 1818 "tupling.m"
                  break;
#line 1818 "tupling.m"
                case (MR_Integer) 0:
#line 1816 "tupling.m"
                  {
#line 1816 "tupling.m"
                    transform_hlds__tupling__fix_calls_in_conj_9_p_0(transform_hlds__tupling__Goals0_64, &transform_hlds__tupling__Goals_65, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
                  }
#line 1818 "tupling.m"
                  break;
#line 1818 "tupling.m"
              }
#line 1826 "tupling.m"
              {
#line 1826 "tupling.m"
                transform_hlds__tupling__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1826 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_139, 1) = ((MR_Box) (transform_hlds__tupling__ConjType_63));
#line 1826 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_139, 2) = ((MR_Box) (transform_hlds__tupling__Goals_65));
#line 1826 "tupling.m"
              }
#line 1827 "tupling.m"
              {
#line 1827 "tupling.m"
                MR_Word base;
#line 1827 "tupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1827 "tupling.m"
                *transform_hlds__tupling__Goal_11 = base;
#line 1827 "tupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__GoalExpr_139));
#line 1827 "tupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__GoalInfo0_17));
#line 1827 "tupling.m"
              }
#line 1813 "tupling.m"
            }
#line 1760 "tupling.m"
            break;
#line 1760 "tupling.m"
          case (MR_Integer) 3:
#line 1829 "tupling.m"
            {
#line 1829 "tupling.m"
              MR_Word transform_hlds__tupling__GoalExpr_140;
#line 1829 "tupling.m"
              MR_Word transform_hlds__tupling__Goals0_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 1)));
#line 1829 "tupling.m"
              MR_Word transform_hlds__tupling__Goals_142;

#line 1830 "tupling.m"
              {
#line 1830 "tupling.m"
                transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(transform_hlds__tupling__Goals0_141, &transform_hlds__tupling__Goals_142, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
              }
#line 1832 "tupling.m"
              {
#line 1832 "tupling.m"
                transform_hlds__tupling__GoalExpr_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1832 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1832 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_140, 1) = ((MR_Box) (transform_hlds__tupling__Goals_142));
#line 1832 "tupling.m"
              }
#line 1833 "tupling.m"
              {
#line 1833 "tupling.m"
                MR_Word base;
#line 1833 "tupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1833 "tupling.m"
                *transform_hlds__tupling__Goal_11 = base;
#line 1833 "tupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__GoalExpr_140));
#line 1833 "tupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__GoalInfo0_17));
#line 1833 "tupling.m"
              }
#line 1829 "tupling.m"
            }
#line 1760 "tupling.m"
            break;
#line 1760 "tupling.m"
          case (MR_Integer) 4:
#line 1835 "tupling.m"
            {
#line 1835 "tupling.m"
              MR_Word transform_hlds__tupling__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 1)));
#line 1835 "tupling.m"
              MR_Word transform_hlds__tupling__CanFail_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 2)));
#line 1835 "tupling.m"
              MR_Word transform_hlds__tupling__Cases0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 3)));
#line 1835 "tupling.m"
              MR_Word transform_hlds__tupling__Cases_69;
#line 1835 "tupling.m"
              MR_Word transform_hlds__tupling__GoalExpr_143;

#line 1836 "tupling.m"
              {
#line 1836 "tupling.m"
                transform_hlds__tupling__fix_calls_in_cases_9_p_0(transform_hlds__tupling__Cases0_68, &transform_hlds__tupling__Cases_69, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
              }
#line 1838 "tupling.m"
              {
#line 1838 "tupling.m"
                transform_hlds__tupling__GoalExpr_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1838 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1838 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_143, 1) = ((MR_Box) (transform_hlds__tupling__Var_66));
#line 1838 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_143, 2) = ((MR_Box) (transform_hlds__tupling__CanFail_67));
#line 1838 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_143, 3) = ((MR_Box) (transform_hlds__tupling__Cases_69));
#line 1838 "tupling.m"
              }
#line 1839 "tupling.m"
              {
#line 1839 "tupling.m"
                MR_Word base;
#line 1839 "tupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1839 "tupling.m"
                *transform_hlds__tupling__Goal_11 = base;
#line 1839 "tupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__GoalExpr_143));
#line 1839 "tupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__GoalInfo0_17));
#line 1839 "tupling.m"
              }
#line 1835 "tupling.m"
            }
#line 1760 "tupling.m"
            break;
#line 1760 "tupling.m"
          case (MR_Integer) 5:
#line 1798 "tupling.m"
            {
#line 1798 "tupling.m"
              MR_Word transform_hlds__tupling__Reason_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 1)));
#line 1798 "tupling.m"
              MR_Word transform_hlds__tupling__SubGoal0_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 2)));
#line 1800 "tupling.m"
              MR_Word transform_hlds__tupling__FGT_62;
#line 1800 "tupling.m"
              MR_Word transform_hlds__tupling__V_61_61;

#line 1800 "tupling.m"
              transform_hlds__tupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__tupling__Reason_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Reason_60, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1800 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1800 "tupling.m"
                {
#line 1800 "tupling.m"
                  transform_hlds__tupling__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Reason_60, (MR_Integer) 1)));
#line 1800 "tupling.m"
                  transform_hlds__tupling__FGT_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Reason_60, (MR_Integer) 2)));
#line 1802 "tupling.m"
#line 1802 "tupling.m"
                  switch (transform_hlds__tupling__FGT_62) {
#line 1802 "tupling.m"
                    default:
#line 1802 "tupling.m"
                      transform_hlds__tupling__succeeded = MR_FALSE;
#line 1802 "tupling.m"
                      break;
#line 1802 "tupling.m"
                    case (MR_Integer) 1:
#line 1801 "tupling.m"
                      transform_hlds__tupling__succeeded = MR_TRUE;
#line 1802 "tupling.m"
                      break;
#line 1802 "tupling.m"
                    case (MR_Integer) 2:
#line 1802 "tupling.m"
                      transform_hlds__tupling__succeeded = MR_TRUE;
#line 1802 "tupling.m"
                      break;
#line 1802 "tupling.m"
                  }
#line 1800 "tupling.m"
                }
#line 1799 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1805 "tupling.m"
                {
#line 1805 "tupling.m"
                  *transform_hlds__tupling__Goal_11 = transform_hlds__tupling__Goal0_10;
#line 1805 "tupling.m"
                  *transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83 = transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82;
#line 1805 "tupling.m"
                  *transform_hlds__tupling__STATE_VARIABLE_VarTypes_81 = transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80;
#line 1805 "tupling.m"
                  *transform_hlds__tupling__STATE_VARIABLE_VarSet_79 = transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78;
#line 1805 "tupling.m"
                }
#line 1799 "tupling.m"
              else
#line 1808 "tupling.m"
                {
#line 1808 "tupling.m"
                  MR_Word transform_hlds__tupling__SubGoal_132;
#line 1808 "tupling.m"
                  MR_Word transform_hlds__tupling__GoalExpr_133;

#line 1807 "tupling.m"
                  {
#line 1807 "tupling.m"
                    transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__SubGoal0_136, &transform_hlds__tupling__SubGoal_132, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
                  }
#line 1809 "tupling.m"
                  {
#line 1809 "tupling.m"
                    transform_hlds__tupling__GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1809 "tupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1809 "tupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_133, 1) = ((MR_Box) (transform_hlds__tupling__Reason_60));
#line 1809 "tupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_133, 2) = ((MR_Box) (transform_hlds__tupling__SubGoal_132));
#line 1809 "tupling.m"
                  }
#line 1810 "tupling.m"
                  {
#line 1810 "tupling.m"
                    MR_Word base;
#line 1810 "tupling.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1810 "tupling.m"
                    *transform_hlds__tupling__Goal_11 = base;
#line 1810 "tupling.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__GoalExpr_133));
#line 1810 "tupling.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__GoalInfo0_17));
#line 1810 "tupling.m"
                  }
#line 1808 "tupling.m"
                }
#line 1798 "tupling.m"
            }
#line 1760 "tupling.m"
            break;
#line 1760 "tupling.m"
          case (MR_Integer) 6:
#line 1841 "tupling.m"
            {
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__Vars_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 1)));
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__Cond0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 2)));
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__Then0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 3)));
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__Else0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 4)));
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__Cond_74;
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__Then_75;
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__Else_76;
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_87_87;
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_88_88;
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_89_89;
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_90_90;
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_91_91;
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_92_92;
#line 1841 "tupling.m"
              MR_Word transform_hlds__tupling__GoalExpr_144;

#line 1842 "tupling.m"
              {
#line 1842 "tupling.m"
                transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Cond0_71, &transform_hlds__tupling__Cond_74, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, &transform_hlds__tupling__STATE_VARIABLE_VarSet_87_87, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, &transform_hlds__tupling__STATE_VARIABLE_VarTypes_88_88, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, &transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_89_89, transform_hlds__tupling__TransformMap_15);
              }
#line 1844 "tupling.m"
              {
#line 1844 "tupling.m"
                transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Then0_72, &transform_hlds__tupling__Then_75, transform_hlds__tupling__STATE_VARIABLE_VarSet_87_87, &transform_hlds__tupling__STATE_VARIABLE_VarSet_90_90, transform_hlds__tupling__STATE_VARIABLE_VarTypes_88_88, &transform_hlds__tupling__STATE_VARIABLE_VarTypes_91_91, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_89_89, &transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_92_92, transform_hlds__tupling__TransformMap_15);
              }
#line 1846 "tupling.m"
              {
#line 1846 "tupling.m"
                transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Else0_73, &transform_hlds__tupling__Else_76, transform_hlds__tupling__STATE_VARIABLE_VarSet_90_90, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_91_91, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_92_92, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
              }
#line 1848 "tupling.m"
              {
#line 1848 "tupling.m"
                transform_hlds__tupling__GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1848 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_144, 1) = ((MR_Box) (transform_hlds__tupling__Vars_70));
#line 1848 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_144, 2) = ((MR_Box) (transform_hlds__tupling__Cond_74));
#line 1848 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_144, 3) = ((MR_Box) (transform_hlds__tupling__Then_75));
#line 1848 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_144, 4) = ((MR_Box) (transform_hlds__tupling__Else_76));
#line 1848 "tupling.m"
              }
#line 1849 "tupling.m"
              {
#line 1849 "tupling.m"
                MR_Word base;
#line 1849 "tupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1849 "tupling.m"
                *transform_hlds__tupling__Goal_11 = base;
#line 1849 "tupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__GoalExpr_144));
#line 1849 "tupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__GoalInfo0_17));
#line 1849 "tupling.m"
              }
#line 1841 "tupling.m"
            }
#line 1760 "tupling.m"
            break;
#line 1760 "tupling.m"
          case (MR_Integer) 7:
#line 1851 "tupling.m"
            {
#line 1853 "tupling.m"
              {
#line 1853 "tupling.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.fix_calls_in_goal\'/9", (MR_String) "shorthand");
#line 1853 "tupling.m"
                return;
              }
#line 1851 "tupling.m"
            }
#line 1760 "tupling.m"
            break;
#line 1760 "tupling.m"
        }
#line 1760 "tupling.m"
        break;
#line 1760 "tupling.m"
    }
#line 1752 "tupling.m"
  }
#line 1747 "tupling.m"
}

#line 1709 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_proc_4_p_0(
#line 1709 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_5,
#line 1709 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1709 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23,
#line 1709 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24)
#line 1709 "tupling.m"
{
#line 1712 "tupling.m"
  {
#line 1712 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1712 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1712 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1712 "tupling.m"
    MR_Word transform_hlds__tupling__PredInfo_10;
#line 1712 "tupling.m"
    MR_Word transform_hlds__tupling__Origin_11;
#line 1712 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25;
#line 1722 "tupling.m"
    MR_Word transform_hlds__tupling__V_26_26;
#line 1722 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13;
#line 1722 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14;
#line 1722 "tupling.m"
    MR_Word transform_hlds__tupling__V_12_12;

#line 1714 "tupling.m"
    {
#line 1714 "tupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__tupling__PredId_6, transform_hlds__tupling__ProcId_7, &transform_hlds__tupling__PredInfo_10, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25);
    }
#line 1720 "tupling.m"
    {
#line 1720 "tupling.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__tupling__PredInfo_10, &transform_hlds__tupling__Origin_11);
    }
#line 1722 "tupling.m"
    transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__Origin_11)) == (MR_mktag((MR_Integer) 2)));
#line 1722 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1722 "tupling.m"
      {
#line 1722 "tupling.m"
        transform_hlds__tupling__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__Origin_11, (MR_Integer) 0)));
#line 1722 "tupling.m"
        transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__Origin_11, (MR_Integer) 1)));
#line 1722 "tupling.m"
        transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__Origin_11, (MR_Integer) 2)));
#line 1722 "tupling.m"
        transform_hlds__tupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__tupling__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1722 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1722 "tupling.m"
          transform_hlds__tupling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_26_26, (MR_Integer) 1)));
#line 1722 "tupling.m"
      }
#line 1721 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1724 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23;
#line 1721 "tupling.m"
    else
#line 1726 "tupling.m"
      {
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__Goal0_15;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__VarTypes0_16;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__VarSet0_17;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__RttiVarMaps0_18;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__Goal_19;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__VarSet_20;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__VarTypes_21;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__RttiVarMaps_22;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_27_27;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_28_28;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_29_29;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_30_30;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_32_32;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_35_35;
#line 1726 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_34_37;

#line 1726 "tupling.m"
        {
#line 1726 "tupling.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__tupling__Goal0_15);
        }
#line 1727 "tupling.m"
        {
#line 1727 "tupling.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__tupling__VarTypes0_16);
        }
#line 1728 "tupling.m"
        {
#line 1728 "tupling.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__tupling__VarSet0_17);
        }
#line 1729 "tupling.m"
        {
#line 1729 "tupling.m"
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__tupling__RttiVarMaps0_18);
        }
#line 1730 "tupling.m"
        {
#line 1730 "tupling.m"
          transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Goal0_15, &transform_hlds__tupling__Goal_19, transform_hlds__tupling__VarSet0_17, &transform_hlds__tupling__VarSet_20, transform_hlds__tupling__VarTypes0_16, &transform_hlds__tupling__VarTypes_21, transform_hlds__tupling__RttiVarMaps0_18, &transform_hlds__tupling__RttiVarMaps_22, transform_hlds__tupling__TransformMap_5);
        }
#line 1733 "tupling.m"
        {
#line 1733 "tupling.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__tupling__Goal_19, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_27_27);
        }
#line 1734 "tupling.m"
        {
#line 1734 "tupling.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__tupling__VarSet_20, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_27_27, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_28_28);
        }
#line 1735 "tupling.m"
        {
#line 1735 "tupling.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__tupling__VarTypes_21, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_28_28, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_29_29);
        }
#line 1736 "tupling.m"
        {
#line 1736 "tupling.m"
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__tupling__RttiVarMaps_22, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_29_29, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_30_30);
        }
#line 1737 "tupling.m"
        {
#line 1737 "tupling.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_30_30, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_32_32);
        }
#line 1738 "tupling.m"
        {
#line 1738 "tupling.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_32_32, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_34_37, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_35_35);
        }
#line 1740 "tupling.m"
        {
#line 1740 "tupling.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__tupling__PredId_6, transform_hlds__tupling__ProcId_7, transform_hlds__tupling__PredInfo_10, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_34_37, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_35_35, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24);
        }
#line 1726 "tupling.m"
      }
#line 1712 "tupling.m"
  }
#line 1709 "tupling.m"
}

#line 1702 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_p_0(
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_6,
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_7,
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1702 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13,
#line 1702 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14)
#line 1702 "tupling.m"
{
#line 1706 "tupling.m"
  {
#line 1706 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1706 "tupling.m"
    {
#line 1706 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_p_0(transform_hlds__tupling__TransformMap_6, transform_hlds__tupling__HeadVar__3_3, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14);
    }
#line 1706 "tupling.m"
  }
#line 1702 "tupling.m"
}

#line 1693 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0_1(
#line 1693 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1693 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1693 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1693 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1693 "tupling.m"
{
#line 1693 "tupling.m"
  {
#line 1693 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1693 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_ModuleInfo_24;

#line 1693 "tupling.m"
    {
#line 1693 "tupling.m"
      transform_hlds__tupling__fix_calls_in_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_STATE_VARIABLE_ModuleInfo_24);
    }
#line 1693 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_ModuleInfo_24));
#line 1693 "tupling.m"
  }
#line 1693 "tupling.m"
}

#line 1689 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0(
#line 1689 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_5,
#line 1689 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_6,
#line 1689 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_8,
#line 1689 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_9)
#line 1689 "tupling.m"
{
#line 1692 "tupling.m"
  {
#line 1692 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1692 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10;
#line 1693 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 1693 "tupling.m"
    {
#line 1693 "tupling.m"
      transform_hlds__tupling__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1693 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[7]));
#line 1693 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 1) = ((MR_Box) (transform_hlds__tupling__fix_calls_in_procs_4_p_0_1));
#line 1693 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1693 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 3) = ((MR_Box) (transform_hlds__tupling__TransformMap_5));
#line 1693 "tupling.m"
    }
#line 1693 "tupling.m"
    {
#line 1693 "tupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__tupling__V_10_10, transform_hlds__tupling__PredProcIds_6, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__tupling__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 1693 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__tupling__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 1692 "tupling.m"
  }
#line 1689 "tupling.m"
}

#line 1643 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__combine_inserts_3_p_0(
#line 1643 "tupling.m"
  MR_Word transform_hlds__tupling__A_1,
#line 1643 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1643 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__3_3)
#line 1643 "tupling.m"
{
#line 1646 "tupling.m"
  {
#line 1646 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1646 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1646 "tupling.m"
      {
#line 1646 "tupling.m"
        {
#line 1646 "tupling.m"
          MR_Word base;
#line 1646 "tupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "tupling.m"
          *transform_hlds__tupling__HeadVar__3_3 = base;
#line 1646 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__A_1));
#line 1646 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1646 "tupling.m"
        }
#line 1646 "tupling.m"
      }
#line 1646 "tupling.m"
    else
#line 1647 "tupling.m"
      {
#line 1647 "tupling.m"
        MR_Word transform_hlds__tupling__B_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1647 "tupling.m"
        MR_Word transform_hlds__tupling__Bs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1647 "tupling.m"
        MR_Word transform_hlds__tupling__C_9;
#line 1647 "tupling.m"
        MR_Word transform_hlds__tupling__Cs_10;
#line 1648 "tupling.m"
        MR_Word transform_hlds__tupling__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__A_1, (MR_Integer) 0)));
#line 1648 "tupling.m"
        MR_Word transform_hlds__tupling__ASet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__A_1, (MR_Integer) 1)));
#line 1648 "tupling.m"
        MR_Word transform_hlds__tupling__BSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__B_7, (MR_Integer) 1)));
#line 1649 "tupling.m"
        MR_Word transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__B_7, (MR_Integer) 0)));

#line 1650 "tupling.m"
        {
#line 1650 "tupling.m"
          transform_hlds__tupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__tupling__Goal_11, transform_hlds__tupling__V_16_16);
        }
#line 1648 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1652 "tupling.m"
          {
#line 1652 "tupling.m"
            MR_Word transform_hlds__tupling__V_14_14;

#line 1652 "tupling.m"
            {
#line 1652 "tupling.m"
              transform_hlds__tupling__V_14_14 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__ASet_12, transform_hlds__tupling__BSet_13);
            }
#line 1652 "tupling.m"
            {
#line 1652 "tupling.m"
              transform_hlds__tupling__C_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1652 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__C_9, 0) = ((MR_Box) (transform_hlds__tupling__Goal_11));
#line 1652 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__C_9, 1) = ((MR_Box) (transform_hlds__tupling__V_14_14));
#line 1652 "tupling.m"
            }
#line 1653 "tupling.m"
            transform_hlds__tupling__Cs_10 = transform_hlds__tupling__Bs_8;
#line 1652 "tupling.m"
          }
#line 1648 "tupling.m"
        else
#line 1655 "tupling.m"
          {
#line 1655 "tupling.m"
            transform_hlds__tupling__C_9 = transform_hlds__tupling__B_7;
#line 1656 "tupling.m"
            {
#line 1656 "tupling.m"
              transform_hlds__tupling__combine_inserts_3_p_0(transform_hlds__tupling__A_1, transform_hlds__tupling__Bs_8, &transform_hlds__tupling__Cs_10);
            }
#line 1655 "tupling.m"
          }
#line 1647 "tupling.m"
        {
#line 1647 "tupling.m"
          MR_Word base;
#line 1647 "tupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1647 "tupling.m"
          *transform_hlds__tupling__HeadVar__3_3 = base;
#line 1647 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__C_9));
#line 1647 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__tupling__Cs_10));
#line 1647 "tupling.m"
        }
#line 1647 "tupling.m"
      }
#line 1646 "tupling.m"
  }
#line 1643 "tupling.m"
}

#line 1617 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_insert_map_2_7_p_0(
#line 1617 "tupling.m"
  MR_Word transform_hlds__tupling__CellVar_8,
#line 1617 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVars_9,
#line 1617 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVarsSet_10,
#line 1617 "tupling.m"
  MR_Word transform_hlds__tupling__Anchor_11,
#line 1617 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 1617 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_InsertMap_0_18,
#line 1617 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_InsertMap_19)
#line 1617 "tupling.m"
{
#line 1622 "tupling.m"
  {
#line 1622 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1622 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1622 "tupling.m"
    MR_Word transform_hlds__tupling__FollowVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__5_5, (MR_Integer) 0)));
#line 1622 "tupling.m"
    MR_Word transform_hlds__tupling__NeededFieldVars_15;
#line 1622 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__5_5, (MR_Integer) 1)));

#line 1623 "tupling.m"
    {
#line 1623 "tupling.m"
      transform_hlds__tupling__NeededFieldVars_15 = parse_tree__set_of_var__intersect_2_f_0(transform_hlds__tupling__TypeCtorInfo_21_21, transform_hlds__tupling__FieldVarsSet_10, transform_hlds__tupling__FollowVars_12);
    }
#line 1624 "tupling.m"
    {
#line 1624 "tupling.m"
      transform_hlds__tupling__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__tupling__TypeCtorInfo_21_21, transform_hlds__tupling__NeededFieldVars_15);
    }
#line 1624 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1624 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_InsertMap_19 = transform_hlds__tupling__STATE_VARIABLE_InsertMap_0_18;
#line 1624 "tupling.m"
    else
#line 1627 "tupling.m"
      {
#line 1627 "tupling.m"
        MR_Word transform_hlds__tupling__Goal_16;
#line 1627 "tupling.m"
        MR_Word transform_hlds__tupling__InsertSpec_17;
#line 1636 "tupling.m"
        MR_Word transform_hlds__tupling__InsertSpecs0_27;
#line 1636 "tupling.m"
        MR_Box transform_hlds__tupling__conv0_InsertSpecs0_27;

#line 1627 "tupling.m"
        {
#line 1627 "tupling.m"
          hlds__make_goal__deconstruct_tuple_3_p_0(transform_hlds__tupling__CellVar_8, transform_hlds__tupling__FieldVars_9, &transform_hlds__tupling__Goal_16);
        }
#line 1628 "tupling.m"
        {
#line 1628 "tupling.m"
          transform_hlds__tupling__InsertSpec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1628 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__InsertSpec_17, 0) = ((MR_Box) (transform_hlds__tupling__Goal_16));
#line 1628 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__InsertSpec_17, 1) = ((MR_Box) (transform_hlds__tupling__NeededFieldVars_15));
#line 1628 "tupling.m"
        }
#line 1636 "tupling.m"
        {
#line 1636 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &transform_hlds__tupling_scalar_common_1[10], transform_hlds__tupling__STATE_VARIABLE_InsertMap_0_18, ((MR_Box) (transform_hlds__tupling__Anchor_11)), &transform_hlds__tupling__conv0_InsertSpecs0_27);
        }
#line 1636 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1636 "tupling.m"
          {
#line 1636 "tupling.m"
            transform_hlds__tupling__InsertSpecs0_27 = ((MR_Word) transform_hlds__tupling__conv0_InsertSpecs0_27);
#line 1636 "tupling.m"
            transform_hlds__tupling__succeeded = MR_TRUE;
#line 1636 "tupling.m"
          }
#line 1636 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1637 "tupling.m"
          {
#line 1637 "tupling.m"
            MR_Word transform_hlds__tupling__InsertSpecs_28;

#line 1637 "tupling.m"
            {
#line 1637 "tupling.m"
              transform_hlds__tupling__combine_inserts_3_p_0(transform_hlds__tupling__InsertSpec_17, transform_hlds__tupling__InsertSpecs0_27, &transform_hlds__tupling__InsertSpecs_28);
            }
#line 1638 "tupling.m"
            {
#line 1638 "tupling.m"
              mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &transform_hlds__tupling_scalar_common_1[10], ((MR_Box) (transform_hlds__tupling__Anchor_11)), ((MR_Box) (transform_hlds__tupling__InsertSpecs_28)), transform_hlds__tupling__STATE_VARIABLE_InsertMap_0_18, transform_hlds__tupling__STATE_VARIABLE_InsertMap_19);
            }
#line 1637 "tupling.m"
          }
#line 1636 "tupling.m"
        else
#line 1640 "tupling.m"
          {
#line 1640 "tupling.m"
            MR_Word transform_hlds__tupling__V_30_30;

#line 1640 "tupling.m"
            {
#line 1640 "tupling.m"
              transform_hlds__tupling__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1640 "tupling.m"
              MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_30_30, 0) = ((MR_Box) (transform_hlds__tupling__InsertSpec_17));
#line 1640 "tupling.m"
              MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1640 "tupling.m"
            }
#line 1640 "tupling.m"
            {
#line 1640 "tupling.m"
              mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &transform_hlds__tupling_scalar_common_1[10], ((MR_Box) (transform_hlds__tupling__Anchor_11)), ((MR_Box) (transform_hlds__tupling__V_30_30)), transform_hlds__tupling__STATE_VARIABLE_InsertMap_0_18, transform_hlds__tupling__STATE_VARIABLE_InsertMap_19);
            }
#line 1640 "tupling.m"
          }
#line 1627 "tupling.m"
      }
#line 1622 "tupling.m"
  }
#line 1617 "tupling.m"
}

#line 1614 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0_1(
#line 1614 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1614 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1614 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1614 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 1614 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 1614 "tupling.m"
{
#line 1614 "tupling.m"
  {
#line 1614 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_InsertMap_19;

#line 1614 "tupling.m"
    {
#line 1614 "tupling.m"
      transform_hlds__tupling__build_insert_map_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3), &transform_hlds__tupling__conv0_STATE_VARIABLE_InsertMap_19);
    }
#line 1614 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_4 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_InsertMap_19));
#line 1614 "tupling.m"
  }
#line 1614 "tupling.m"
}

#line 1609 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0(
#line 1609 "tupling.m"
  MR_Word transform_hlds__tupling__CellVar_5,
#line 1609 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVars_6,
#line 1609 "tupling.m"
  MR_Word transform_hlds__tupling__IntervalInfo_7,
#line 1609 "tupling.m"
  MR_Word * transform_hlds__tupling__InsertMap_8)
#line 1609 "tupling.m"
{
#line 1612 "tupling.m"
  {
#line 1612 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1612 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_33_33;
#line 1612 "tupling.m"
    MR_Word transform_hlds__tupling__FieldVarsSet_9;
#line 1612 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10;
#line 1612 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11;
#line 1612 "tupling.m"
    MR_Word transform_hlds__tupling__V_12_12;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_16_16;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_17_17;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_18_18;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_19_19;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_20_20;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_21_21;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_22_22;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_23_23;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_24_24;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_25_25;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_26_26;
#line 1614 "tupling.m"
    MR_Word transform_hlds__tupling__V_27_27;
#line 1614 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_InsertMap_8;

#line 1613 "tupling.m"
    {
#line 1613 "tupling.m"
      transform_hlds__tupling__FieldVarsSet_9 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__FieldVars_6);
    }
#line 1614 "tupling.m"
    {
#line 1614 "tupling.m"
      transform_hlds__tupling__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1614 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_8[1]));
#line 1614 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 1) = ((MR_Box) (transform_hlds__tupling__build_insert_map_4_p_0_1));
#line 1614 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1614 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 3) = ((MR_Box) (transform_hlds__tupling__CellVar_5));
#line 1614 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 4) = ((MR_Box) (transform_hlds__tupling__FieldVars_6));
#line 1614 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 5) = ((MR_Box) (transform_hlds__tupling__FieldVarsSet_9));
#line 1614 "tupling.m"
    }
#line 1614 "tupling.m"
    transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 0)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 1)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 2)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 3)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 4)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 5)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 6)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 7)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 8)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 9)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 10)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 11)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 12)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 13)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 14)));
#line 1614 "tupling.m"
    transform_hlds__tupling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 15)));
#line 10085 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_33_33 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1615 "tupling.m"
    {
#line 1615 "tupling.m"
      transform_hlds__tupling__V_12_12 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_33_33, (MR_Word) &transform_hlds__tupling_scalar_common_1[10]);
    }
#line 1614 "tupling.m"
    {
#line 1614 "tupling.m"
      mercury__map__foldl_4_p_0(transform_hlds__tupling__TypeCtorInfo_33_33, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[8], transform_hlds__tupling__V_10_10, transform_hlds__tupling__V_11_11, ((MR_Box) (transform_hlds__tupling__V_12_12)), &transform_hlds__tupling__conv1_InsertMap_8);
    }
#line 1614 "tupling.m"
    *transform_hlds__tupling__InsertMap_8 = ((MR_Word) transform_hlds__tupling__conv1_InsertMap_8);
#line 1612 "tupling.m"
  }
#line 1609 "tupling.m"
}

#line 1567 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_interval_info_3_p_0(
#line 1567 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_4,
#line 1567 "tupling.m"
  MR_Word transform_hlds__tupling__ProcInfo_5,
#line 1567 "tupling.m"
  MR_Word * transform_hlds__tupling__IntervalInfo_6)
#line 1567 "tupling.m"
{
#line 1570 "tupling.m"
  {
#line 1570 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_38_38;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_39_39;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_42_42;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_43_43;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__Goal_7;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes_8;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__OutputArgs_10;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__Counter0_12;
#line 1570 "tupling.m"
    MR_Integer transform_hlds__tupling__CurInterval_13;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__Counter_14;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__CurIntervalId_15;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__EndMap_16;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__StartMap_17;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__SuccMap_18;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__VarsMap_19;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__IntParams_20;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__IntervalInfo0_21;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__V_26_26;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__V_28_28;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__V_29_29;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__V_30_30;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__V_31_31;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__V_33_33;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__V_34_34;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__V_35_35;
#line 1570 "tupling.m"
    MR_Word transform_hlds__tupling__V_36_36;
#line 1573 "tupling.m"
    MR_Word transform_hlds__tupling___InputArgs_9;
#line 1573 "tupling.m"
    MR_Word transform_hlds__tupling___UnusedArgs_11;
#line 1589 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_V_22_22;

#line 1571 "tupling.m"
    {
#line 1571 "tupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__tupling__ProcInfo_5, &transform_hlds__tupling__Goal_7);
    }
#line 1572 "tupling.m"
    {
#line 1572 "tupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__ProcInfo_5, &transform_hlds__tupling__VarTypes_8);
    }
#line 1573 "tupling.m"
    {
#line 1573 "tupling.m"
      hlds__arg_info__partition_proc_args_5_p_0(transform_hlds__tupling__ProcInfo_5, transform_hlds__tupling__ModuleInfo_4, &transform_hlds__tupling___InputArgs_9, &transform_hlds__tupling__OutputArgs_10, &transform_hlds__tupling___UnusedArgs_11);
    }
#line 1575 "tupling.m"
    {
#line 1575 "tupling.m"
      transform_hlds__tupling__Counter0_12 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 1576 "tupling.m"
    {
#line 1576 "tupling.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__tupling__CurInterval_13, transform_hlds__tupling__Counter0_12, &transform_hlds__tupling__Counter_14);
    }
#line 1577 "tupling.m"
    transform_hlds__tupling__CurIntervalId_15 = (MR_Word) transform_hlds__tupling__CurInterval_13;
#line 10207 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_38_38 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 10209 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_39_39 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1578 "tupling.m"
    {
#line 1578 "tupling.m"
      transform_hlds__tupling__EndMap_16 = mercury__map__singleton_2_f_0(transform_hlds__tupling__TypeCtorInfo_38_38, transform_hlds__tupling__TypeCtorInfo_39_39, ((MR_Box) (transform_hlds__tupling__CurIntervalId_15)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
    }
#line 1579 "tupling.m"
    {
#line 1579 "tupling.m"
      transform_hlds__tupling__StartMap_17 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_38_38, transform_hlds__tupling__TypeCtorInfo_39_39);
    }
#line 1580 "tupling.m"
    {
#line 1580 "tupling.m"
      transform_hlds__tupling__SuccMap_18 = mercury__map__singleton_2_f_0(transform_hlds__tupling__TypeCtorInfo_38_38, (MR_Word) &transform_hlds__tupling_scalar_common_1[6], ((MR_Box) (transform_hlds__tupling__CurIntervalId_15)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 10226 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1581 "tupling.m"
    {
#line 1581 "tupling.m"
      transform_hlds__tupling__V_26_26 = parse_tree__set_of_var__set_to_bitset_1_f_0(transform_hlds__tupling__TypeCtorInfo_42_42, transform_hlds__tupling__OutputArgs_10);
    }
#line 1581 "tupling.m"
    {
#line 1581 "tupling.m"
      transform_hlds__tupling__VarsMap_19 = mercury__map__singleton_2_f_0(transform_hlds__tupling__TypeCtorInfo_38_38, (MR_Word) &transform_hlds__tupling_scalar_common_1[7], ((MR_Box) (transform_hlds__tupling__CurIntervalId_15)), ((MR_Box) (transform_hlds__tupling__V_26_26)));
    }
#line 1582 "tupling.m"
    {
#line 1582 "tupling.m"
      transform_hlds__tupling__IntParams_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1582 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntParams_20, 0) = ((MR_Box) (transform_hlds__tupling__ModuleInfo_4));
#line 1582 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntParams_20, 1) = ((MR_Box) (transform_hlds__tupling__VarTypes_8));
#line 1582 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntParams_20, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1582 "tupling.m"
    }
#line 1583 "tupling.m"
    {
#line 1583 "tupling.m"
      transform_hlds__tupling__V_28_28 = parse_tree__set_of_var__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_42_42);
    }
#line 1584 "tupling.m"
    {
#line 1584 "tupling.m"
      transform_hlds__tupling__V_29_29 = parse_tree__set_of_var__set_to_bitset_1_f_0(transform_hlds__tupling__TypeCtorInfo_42_42, transform_hlds__tupling__OutputArgs_10);
    }
#line 10260 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_43_43 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 1584 "tupling.m"
    {
#line 1584 "tupling.m"
      transform_hlds__tupling__V_30_30 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_43_43, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0);
    }
#line 1584 "tupling.m"
    {
#line 1584 "tupling.m"
      transform_hlds__tupling__V_31_31 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_43_43, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0);
    }
#line 1584 "tupling.m"
    {
#line 1584 "tupling.m"
      transform_hlds__tupling__V_32_32 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_43_43, transform_hlds__tupling__TypeCtorInfo_38_38);
    }
#line 1586 "tupling.m"
    {
#line 1586 "tupling.m"
      transform_hlds__tupling__V_33_33 = mercury__set__make_singleton_set_1_f_0(transform_hlds__tupling__TypeCtorInfo_38_38, ((MR_Box) (transform_hlds__tupling__CurIntervalId_15)));
    }
#line 1587 "tupling.m"
    {
#line 1587 "tupling.m"
      transform_hlds__tupling__V_34_34 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_39_39, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0);
    }
#line 1587 "tupling.m"
    {
#line 1587 "tupling.m"
      transform_hlds__tupling__V_35_35 = mercury__set__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_39_39);
    }
#line 1588 "tupling.m"
    {
#line 1588 "tupling.m"
      transform_hlds__tupling__V_36_36 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_38_38, (MR_Word) &transform_hlds__tupling_scalar_common_1[8]);
    }
#line 1583 "tupling.m"
    {
#line 1583 "tupling.m"
      transform_hlds__tupling__IntervalInfo0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 0) = ((MR_Box) (transform_hlds__tupling__IntParams_20));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 1) = ((MR_Box) (transform_hlds__tupling__V_28_28));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 2) = ((MR_Box) (transform_hlds__tupling__V_29_29));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 3) = ((MR_Box) (transform_hlds__tupling__V_30_30));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 4) = ((MR_Box) (transform_hlds__tupling__V_31_31));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 5) = ((MR_Box) (transform_hlds__tupling__V_32_32));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 6) = ((MR_Box) (transform_hlds__tupling__CurIntervalId_15));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 7) = ((MR_Box) (transform_hlds__tupling__Counter_14));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 8) = ((MR_Box) (transform_hlds__tupling__V_33_33));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 9) = ((MR_Box) (transform_hlds__tupling__V_34_34));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 10) = ((MR_Box) (transform_hlds__tupling__V_35_35));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 11) = ((MR_Box) (transform_hlds__tupling__StartMap_17));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 12) = ((MR_Box) (transform_hlds__tupling__EndMap_16));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 13) = ((MR_Box) (transform_hlds__tupling__SuccMap_18));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 14) = ((MR_Box) (transform_hlds__tupling__VarsMap_19));
#line 1583 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 15) = ((MR_Box) (transform_hlds__tupling__V_36_36));
#line 1583 "tupling.m"
    }
#line 1589 "tupling.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1589 "tupling.m"
    {
#line 1589 "tupling.m"
      backend_libs__interval__build_interval_info_in_goal_5_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[9], transform_hlds__tupling__Goal_7, transform_hlds__tupling__IntervalInfo0_21, transform_hlds__tupling__IntervalInfo_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__tupling__conv0_V_22_22);
    }
#line 1570 "tupling.m"
  }
#line 1567 "tupling.m"
}

#line 1553 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_branch_costs_4_p_0(
#line 1553 "tupling.m"
  MR_Word transform_hlds__tupling__BranchState_5,
#line 1553 "tupling.m"
  MR_Float transform_hlds__tupling__Weight_6,
#line 1553 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_16,
#line 1553 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_17)
#line 1553 "tupling.m"
{
#line 1556 "tupling.m"
  {
#line 1556 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1556 "tupling.m"
    MR_Float transform_hlds__tupling__BranchLoads_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__BranchState_5, (MR_Integer) 2)));
#line 1556 "tupling.m"
    MR_Float transform_hlds__tupling__BranchStores_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__BranchState_5, (MR_Integer) 3)));
#line 1556 "tupling.m"
    MR_Word transform_hlds__tupling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_16, (MR_Integer) 0)));
#line 1556 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_16, (MR_Integer) 1)));
#line 1556 "tupling.m"
    MR_Float transform_hlds__tupling__Loads0_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_16, (MR_Integer) 2)));
#line 1556 "tupling.m"
    MR_Float transform_hlds__tupling__Stores0_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_16, (MR_Integer) 3)));
#line 1556 "tupling.m"
    MR_Float transform_hlds__tupling__V_19_19;
#line 1556 "tupling.m"
    MR_Float transform_hlds__tupling__V_20_20 = (transform_hlds__tupling__Weight_6 * transform_hlds__tupling__BranchLoads_10);
#line 1556 "tupling.m"
    MR_Float transform_hlds__tupling__V_22_22;
#line 1556 "tupling.m"
    MR_Float transform_hlds__tupling__V_23_23;
#line 1556 "tupling.m"
    MR_Word transform_hlds__tupling__V_24_24;
#line 1556 "tupling.m"
    MR_Word transform_hlds__tupling__V_25_25;
#line 1557 "tupling.m"
    MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__BranchState_5, (MR_Integer) 0)));
#line 1557 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__BranchState_5, (MR_Integer) 1)));

#line 1559 "tupling.m"
    transform_hlds__tupling__V_19_19 = (transform_hlds__tupling__Loads0_14 + transform_hlds__tupling__V_20_20);
#line 1559 "tupling.m"
    transform_hlds__tupling__V_24_24 = transform_hlds__tupling__V_12_12;
#line 1559 "tupling.m"
    transform_hlds__tupling__V_25_25 = transform_hlds__tupling__V_13_13;
#line 1560 "tupling.m"
    transform_hlds__tupling__V_23_23 = (transform_hlds__tupling__Weight_6 * transform_hlds__tupling__BranchStores_11);
#line 1560 "tupling.m"
    transform_hlds__tupling__V_22_22 = (transform_hlds__tupling__Stores0_15 + transform_hlds__tupling__V_23_23);
#line 1560 "tupling.m"
    {
#line 1560 "tupling.m"
      MR_Word base;
#line 1560 "tupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1560 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_CountState_17 = base;
#line 1560 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__V_24_24));
#line 1560 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__V_25_25));
#line 1560 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__V_19_19);
#line 1560 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__V_22_22);
#line 1560 "tupling.m"
    }
#line 1556 "tupling.m"
  }
#line 1553 "tupling.m"
}

#line 1547 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__reset_count_state_counts_2_p_0(
#line 1547 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_4,
#line 1547 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_5)
#line 1547 "tupling.m"
{
#line 1549 "tupling.m"
  {
#line 1549 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1549 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 0)));
#line 1549 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 1)));
#line 1550 "tupling.m"
    MR_Float transform_hlds__tupling__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
#line 1550 "tupling.m"
    MR_Float transform_hlds__tupling__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));

#line 1551 "tupling.m"
    {
#line 1551 "tupling.m"
      MR_Word base;
#line 1551 "tupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1551 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_CountState_5 = base;
#line 1551 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__V_10_10));
#line 1551 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__V_11_11));
#line 1551 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float((MR_Float) 0.0000000000000000);
#line 1551 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float((MR_Float) 0.0000000000000000);
#line 1551 "tupling.m"
    }
#line 1549 "tupling.m"
  }
#line 1547 "tupling.m"
}

#line 1539 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_clobber_regs_3_p_0(
#line 1539 "tupling.m"
  MR_Word transform_hlds__tupling__NewVars_4,
#line 1539 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_6,
#line 1539 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_7)
#line 1539 "tupling.m"
{
#line 1542 "tupling.m"
  {
#line 1542 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1542 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9;
#line 1543 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11;
#line 1543 "tupling.m"
    MR_Float transform_hlds__tupling__V_12_12;
#line 1543 "tupling.m"
    MR_Float transform_hlds__tupling__V_13_13;
#line 1543 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10;

#line 1543 "tupling.m"
    {
#line 1543 "tupling.m"
      transform_hlds__tupling__V_9_9 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__NewVars_4);
    }
#line 1543 "tupling.m"
    transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_6, (MR_Integer) 0)));
#line 1543 "tupling.m"
    transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_6, (MR_Integer) 1)));
#line 1543 "tupling.m"
    transform_hlds__tupling__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_6, (MR_Integer) 2)));
#line 1543 "tupling.m"
    transform_hlds__tupling__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_6, (MR_Integer) 3)));
#line 1543 "tupling.m"
    {
#line 1543 "tupling.m"
      MR_Word base;
#line 1543 "tupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1543 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_CountState_7 = base;
#line 1543 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__V_9_9));
#line 1543 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__V_11_11));
#line 1543 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__V_12_12);
#line 1543 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__V_13_13);
#line 1543 "tupling.m"
    }
#line 1542 "tupling.m"
  }
#line 1539 "tupling.m"
}

#line 1503 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_2_5_p_0(
#line 1503 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1503 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_2,
#line 1503 "tupling.m"
  MR_Word transform_hlds__tupling__Var_3,
#line 1503 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_4,
#line 1503 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_5)
#line 1503 "tupling.m"
{
#line 1506 "tupling.m"
  {
#line 1506 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1506 "tupling.m"
    MR_Integer transform_hlds__tupling__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 5)));
#line 1506 "tupling.m"
    MR_Integer transform_hlds__tupling__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 1)));
#line 1507 "tupling.m"
    MR_Integer transform_hlds__tupling__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 7)));
#line 1507 "tupling.m"
    MR_Integer transform_hlds__tupling__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 6)));
#line 1507 "tupling.m"
    MR_Integer transform_hlds__tupling__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 4)));
#line 1507 "tupling.m"
    MR_Integer transform_hlds__tupling__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 3)));
#line 1507 "tupling.m"
    MR_Integer transform_hlds__tupling__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 2)));
#line 1507 "tupling.m"
    MR_Integer transform_hlds__tupling__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 0)));

#line 1506 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1525 "tupling.m"
      {
#line 1525 "tupling.m"
        MR_Word transform_hlds__tupling__RegVars_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 0)));
#line 1525 "tupling.m"
        MR_Word transform_hlds__tupling__StackVars0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 1)));
#line 1525 "tupling.m"
        MR_Float transform_hlds__tupling__Loads_67 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
#line 1525 "tupling.m"
        MR_Float transform_hlds__tupling__Stores0_68 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));
#line 1525 "tupling.m"
        MR_Word transform_hlds__tupling__StackVars_69;
#line 1525 "tupling.m"
        MR_Float transform_hlds__tupling__Stores_70;

#line 1526 "tupling.m"
        {
#line 1526 "tupling.m"
          transform_hlds__tupling__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__StackVars0_66, transform_hlds__tupling__Var_3);
        }
#line 1526 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1527 "tupling.m"
          {
#line 1527 "tupling.m"
            transform_hlds__tupling__StackVars_69 = transform_hlds__tupling__StackVars0_66;
#line 1528 "tupling.m"
            transform_hlds__tupling__Stores_70 = transform_hlds__tupling__Stores0_68;
#line 1527 "tupling.m"
          }
#line 1526 "tupling.m"
        else
#line 1530 "tupling.m"
          {
#line 1530 "tupling.m"
            MR_Float transform_hlds__tupling__V_71_71;

#line 1530 "tupling.m"
            {
#line 1530 "tupling.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Var_3, transform_hlds__tupling__StackVars0_66, &transform_hlds__tupling__StackVars_69);
            }
#line 1531 "tupling.m"
            {
#line 1531 "tupling.m"
              transform_hlds__tupling__V_71_71 = mercury__float__float_1_f_0(transform_hlds__tupling__V_61_61);
            }
#line 1531 "tupling.m"
            transform_hlds__tupling__Stores_70 = (transform_hlds__tupling__Stores0_68 + transform_hlds__tupling__V_71_71);
#line 1530 "tupling.m"
          }
#line 1525 "tupling.m"
        {
#line 1525 "tupling.m"
          MR_Word base;
#line 1525 "tupling.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1525 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_CountState_5 = base;
#line 1525 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_65));
#line 1525 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__StackVars_69));
#line 1525 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__Loads_67);
#line 1525 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__Stores_70);
#line 1525 "tupling.m"
        }
#line 1525 "tupling.m"
      }
#line 1506 "tupling.m"
    else
#line 1511 "tupling.m"
      {
#line 1511 "tupling.m"
        MR_Word transform_hlds__tupling__CellVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1511 "tupling.m"
        MR_Word transform_hlds__tupling__FieldVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1510 "tupling.m"
        MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 2)));

#line 1512 "tupling.m"
        {
#line 1512 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], ((MR_Box) (transform_hlds__tupling__Var_3)), transform_hlds__tupling__FieldVars_14);
        }
#line 1512 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1525 "tupling.m"
          {
#line 1525 "tupling.m"
            MR_Word transform_hlds__tupling__RegVars_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 0)));
#line 1525 "tupling.m"
            MR_Word transform_hlds__tupling__StackVars0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 1)));
#line 1525 "tupling.m"
            MR_Float transform_hlds__tupling__Loads_78 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
#line 1525 "tupling.m"
            MR_Float transform_hlds__tupling__Stores0_79 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));
#line 1525 "tupling.m"
            MR_Word transform_hlds__tupling__StackVars_80;
#line 1525 "tupling.m"
            MR_Float transform_hlds__tupling__Stores_81;

#line 1526 "tupling.m"
            {
#line 1526 "tupling.m"
              transform_hlds__tupling__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__StackVars0_77, transform_hlds__tupling__CellVar_13);
            }
#line 1526 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 1527 "tupling.m"
              {
#line 1527 "tupling.m"
                transform_hlds__tupling__StackVars_80 = transform_hlds__tupling__StackVars0_77;
#line 1528 "tupling.m"
                transform_hlds__tupling__Stores_81 = transform_hlds__tupling__Stores0_79;
#line 1527 "tupling.m"
              }
#line 1526 "tupling.m"
            else
#line 1530 "tupling.m"
              {
#line 1530 "tupling.m"
                MR_Float transform_hlds__tupling__V_82_82;

#line 1530 "tupling.m"
                {
#line 1530 "tupling.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__CellVar_13, transform_hlds__tupling__StackVars0_77, &transform_hlds__tupling__StackVars_80);
                }
#line 1531 "tupling.m"
                {
#line 1531 "tupling.m"
                  transform_hlds__tupling__V_82_82 = mercury__float__float_1_f_0(transform_hlds__tupling__V_57_57);
                }
#line 1531 "tupling.m"
                transform_hlds__tupling__Stores_81 = (transform_hlds__tupling__Stores0_79 + transform_hlds__tupling__V_82_82);
#line 1530 "tupling.m"
              }
#line 1525 "tupling.m"
            {
#line 1525 "tupling.m"
              MR_Word base;
#line 1525 "tupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1525 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_CountState_5 = base;
#line 1525 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_76));
#line 1525 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__StackVars_80));
#line 1525 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__Loads_78);
#line 1525 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__Stores_81);
#line 1525 "tupling.m"
            }
#line 1525 "tupling.m"
          }
#line 1512 "tupling.m"
        else
#line 1525 "tupling.m"
          {
#line 1525 "tupling.m"
            MR_Word transform_hlds__tupling__RegVars_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 0)));
#line 1525 "tupling.m"
            MR_Word transform_hlds__tupling__StackVars0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 1)));
#line 1525 "tupling.m"
            MR_Float transform_hlds__tupling__Loads_89 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
#line 1525 "tupling.m"
            MR_Float transform_hlds__tupling__Stores0_90 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));
#line 1525 "tupling.m"
            MR_Word transform_hlds__tupling__StackVars_91;
#line 1525 "tupling.m"
            MR_Float transform_hlds__tupling__Stores_92;

#line 1526 "tupling.m"
            {
#line 1526 "tupling.m"
              transform_hlds__tupling__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__StackVars0_88, transform_hlds__tupling__Var_3);
            }
#line 1526 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 1527 "tupling.m"
              {
#line 1527 "tupling.m"
                transform_hlds__tupling__StackVars_91 = transform_hlds__tupling__StackVars0_88;
#line 1528 "tupling.m"
                transform_hlds__tupling__Stores_92 = transform_hlds__tupling__Stores0_90;
#line 1527 "tupling.m"
              }
#line 1526 "tupling.m"
            else
#line 1530 "tupling.m"
              {
#line 1530 "tupling.m"
                MR_Float transform_hlds__tupling__V_93_93;

#line 1530 "tupling.m"
                {
#line 1530 "tupling.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Var_3, transform_hlds__tupling__StackVars0_88, &transform_hlds__tupling__StackVars_91);
                }
#line 1531 "tupling.m"
                {
#line 1531 "tupling.m"
                  transform_hlds__tupling__V_93_93 = mercury__float__float_1_f_0(transform_hlds__tupling__V_61_61);
                }
#line 1531 "tupling.m"
                transform_hlds__tupling__Stores_92 = (transform_hlds__tupling__Stores0_90 + transform_hlds__tupling__V_93_93);
#line 1530 "tupling.m"
              }
#line 1525 "tupling.m"
            {
#line 1525 "tupling.m"
              MR_Word base;
#line 1525 "tupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1525 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_CountState_5 = base;
#line 1525 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_87));
#line 1525 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__StackVars_91));
#line 1525 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__Loads_89);
#line 1525 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__Stores_92);
#line 1525 "tupling.m"
            }
#line 1525 "tupling.m"
          }
#line 1511 "tupling.m"
      }
#line 1506 "tupling.m"
  }
#line 1503 "tupling.m"
}

#line 1500 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0_1(
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1500 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1500 "tupling.m"
{
#line 1500 "tupling.m"
  {
#line 1500 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1500 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5;

#line 1500 "tupling.m"
    {
#line 1500 "tupling.m"
      transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5);
    }
#line 1500 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5));
#line 1500 "tupling.m"
  }
#line 1500 "tupling.m"
}

#line 1494 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0(
#line 1494 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1494 "tupling.m"
  MR_Word transform_hlds__tupling__Vars_6,
#line 1494 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_10,
#line 1494 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_11)
#line 1494 "tupling.m"
{
#line 1497 "tupling.m"
  {
#line 1497 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1497 "tupling.m"
    MR_Word transform_hlds__tupling__TuplingProposal_8;
#line 1497 "tupling.m"
    MR_Word transform_hlds__tupling__TuningParams_9;
#line 1497 "tupling.m"
    MR_Word transform_hlds__tupling__V_12_12;
#line 1497 "tupling.m"
    MR_Word transform_hlds__tupling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 7)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__Probe_38;
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 7)));
#line 871 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_Probe_38;
#line 1499 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14;
#line 1499 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15;
#line 1499 "tupling.m"
    MR_Word transform_hlds__tupling__V_16_16;
#line 1499 "tupling.m"
    MR_Word transform_hlds__tupling__V_17_17;
#line 1499 "tupling.m"
    MR_Word transform_hlds__tupling__V_18_18;
#line 1499 "tupling.m"
    MR_Word transform_hlds__tupling__V_19_19;
#line 1499 "tupling.m"
    MR_Word transform_hlds__tupling__V_20_20;
#line 1500 "tupling.m"
    MR_Box transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_11;

#line 871 "tupling.m"
    {
#line 871 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_39_39, ((MR_Box) (transform_hlds__tupling__V_27_27)), &transform_hlds__tupling__conv0_Probe_38);
    }
#line 871 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 871 "tupling.m"
      {
#line 871 "tupling.m"
        transform_hlds__tupling__Probe_38 = ((MR_Word) transform_hlds__tupling__conv0_Probe_38);
#line 871 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 871 "tupling.m"
      }
#line 871 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 872 "tupling.m"
      transform_hlds__tupling__TuplingProposal_8 = transform_hlds__tupling__Probe_38;
#line 871 "tupling.m"
    else
#line 874 "tupling.m"
      transform_hlds__tupling__TuplingProposal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1499 "tupling.m"
    transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 1499 "tupling.m"
    transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 1499 "tupling.m"
    transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 1499 "tupling.m"
    transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 1499 "tupling.m"
    transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 1499 "tupling.m"
    transform_hlds__tupling__TuningParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 1499 "tupling.m"
    transform_hlds__tupling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 1499 "tupling.m"
    transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 7)));
#line 1500 "tupling.m"
    {
#line 1500 "tupling.m"
      transform_hlds__tupling__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1500 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_12_12, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[3]));
#line 1500 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_12_12, 1) = ((MR_Box) (transform_hlds__tupling__cls_require_flushed_4_p_0_1));
#line 1500 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1500 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_12_12, 3) = ((MR_Box) (transform_hlds__tupling__TuplingProposal_8));
#line 1500 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_12_12, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_9));
#line 1500 "tupling.m"
    }
#line 1500 "tupling.m"
    {
#line 1500 "tupling.m"
      parse_tree__set_of_var__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_12_12, transform_hlds__tupling__Vars_6, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_0_10)), &transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_11);
    }
#line 1500 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_CountState_11 = ((MR_Word) transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_11);
#line 1497 "tupling.m"
  }
#line 1494 "tupling.m"
}

#line 1468 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_3(
#line 1468 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1468 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1468 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1468 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1468 "tupling.m"
{
#line 1468 "tupling.m"
  {
#line 1468 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1468 "tupling.m"
    MR_Word transform_hlds__tupling__conv5_CountState_8;

#line 1468 "tupling.m"
    {
#line 1468 "tupling.m"
      transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv5_CountState_8);
    }
#line 1468 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv5_CountState_8));
#line 1468 "tupling.m"
  }
#line 1468 "tupling.m"
}

#line 1478 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_2(
#line 1478 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1478 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1478 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1478 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1478 "tupling.m"
{
#line 1478 "tupling.m"
  {
#line 1478 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1478 "tupling.m"
    MR_Word transform_hlds__tupling__conv3_CountState_8;

#line 1478 "tupling.m"
    {
#line 1478 "tupling.m"
      transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv3_CountState_8);
    }
#line 1478 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv3_CountState_8));
#line 1478 "tupling.m"
  }
#line 1478 "tupling.m"
}

#line 1468 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_1(
#line 1468 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1468 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1468 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1468 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1468 "tupling.m"
{
#line 1468 "tupling.m"
  {
#line 1468 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1468 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_CountState_8;

#line 1468 "tupling.m"
    {
#line 1468 "tupling.m"
      transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv1_CountState_8);
    }
#line 1468 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv1_CountState_8));
#line 1468 "tupling.m"
  }
#line 1468 "tupling.m"
}

#line 1455 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0(
#line 1455 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_6,
#line 1455 "tupling.m"
  MR_Word transform_hlds__tupling__DeconstructCellVar_7,
#line 1455 "tupling.m"
  MR_Word transform_hlds__tupling__DeconstructFieldVars_8,
#line 1455 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_State_0_18,
#line 1455 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_State_19)
#line 1455 "tupling.m"
{
#line 1459 "tupling.m"
  {
#line 1459 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1459 "tupling.m"
    MR_Word transform_hlds__tupling__TuningParams_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 1459 "tupling.m"
    MR_Integer transform_hlds__tupling__CvLoadCost_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 2)));
#line 1459 "tupling.m"
    MR_Integer transform_hlds__tupling__FvLoadCost_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 4)));
#line 1459 "tupling.m"
    MR_Word transform_hlds__tupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 1460 "tupling.m"
    MR_Word transform_hlds__tupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 1460 "tupling.m"
    MR_Word transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 1460 "tupling.m"
    MR_Word transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 1460 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 1460 "tupling.m"
    MR_Word transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 1460 "tupling.m"
    MR_Word transform_hlds__tupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 7)));
#line 1461 "tupling.m"
    MR_Integer transform_hlds__tupling__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 0)));
#line 1461 "tupling.m"
    MR_Integer transform_hlds__tupling__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 1)));
#line 1461 "tupling.m"
    MR_Integer transform_hlds__tupling__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 3)));
#line 1461 "tupling.m"
    MR_Integer transform_hlds__tupling__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 5)));
#line 1461 "tupling.m"
    MR_Integer transform_hlds__tupling__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 6)));
#line 1461 "tupling.m"
    MR_Integer transform_hlds__tupling__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 7)));
#line 11133 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__Probe_71;
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 7)));
#line 871 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_Probe_71;

#line 871 "tupling.m"
    {
#line 871 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_72_72, ((MR_Box) (transform_hlds__tupling__V_29_29)), &transform_hlds__tupling__conv0_Probe_71);
    }
#line 871 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 871 "tupling.m"
      {
#line 871 "tupling.m"
        transform_hlds__tupling__Probe_71 = ((MR_Word) transform_hlds__tupling__conv0_Probe_71);
#line 871 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 871 "tupling.m"
      }
#line 11169 "transform_hlds.tupling.c"
    if (transform_hlds__tupling__succeeded)
#line 1470 "tupling.m"
      if ((transform_hlds__tupling__Probe_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1465 "tupling.m"
        {
#line 1465 "tupling.m"
          MR_Word transform_hlds__tupling__STATE_VARIABLE_State_25_25;
#line 1465 "tupling.m"
          MR_Word transform_hlds__tupling__V_26_26;
#line 1468 "tupling.m"
          MR_Box transform_hlds__tupling__conv2_STATE_VARIABLE_State_19;

#line 1466 "tupling.m"
          {
#line 1466 "tupling.m"
            transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(transform_hlds__tupling__CvLoadCost_11, transform_hlds__tupling__DeconstructCellVar_7, transform_hlds__tupling__STATE_VARIABLE_State_0_18, &transform_hlds__tupling__STATE_VARIABLE_State_25_25);
          }
#line 1468 "tupling.m"
          {
#line 1468 "tupling.m"
            transform_hlds__tupling__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1468 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_26_26, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[6]));
#line 1468 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_26_26, 1) = ((MR_Box) (transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_1));
#line 1468 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1468 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_26_26, 3) = ((MR_Box) (transform_hlds__tupling__FvLoadCost_12));
#line 1468 "tupling.m"
          }
#line 1468 "tupling.m"
          {
#line 1468 "tupling.m"
            mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_26_26, transform_hlds__tupling__DeconstructFieldVars_8, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_State_25_25)), &transform_hlds__tupling__conv2_STATE_VARIABLE_State_19);
          }
#line 1468 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_State_19 = ((MR_Word) transform_hlds__tupling__conv2_STATE_VARIABLE_State_19);
#line 1465 "tupling.m"
        }
#line 1470 "tupling.m"
      else
#line 1471 "tupling.m"
        {
#line 1471 "tupling.m"
          MR_Word transform_hlds__tupling__TypeInfo_54_54 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 1471 "tupling.m"
          MR_Word transform_hlds__tupling__TupleFieldVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Probe_71, (MR_Integer) 1)));
#line 1471 "tupling.m"
          MR_Word transform_hlds__tupling__VarsToLoad_17;
#line 1471 "tupling.m"
          MR_Word transform_hlds__tupling__V_20_20;
#line 1471 "tupling.m"
          MR_Word transform_hlds__tupling__V_21_21;
#line 1471 "tupling.m"
          MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Probe_71, (MR_Integer) 0)));
#line 1471 "tupling.m"
          MR_Word transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Probe_71, (MR_Integer) 2)));

#line 1473 "tupling.m"
          {
#line 1473 "tupling.m"
            transform_hlds__tupling__V_20_20 = mercury__set__from_list_1_f_0(transform_hlds__tupling__TypeInfo_54_54, transform_hlds__tupling__DeconstructFieldVars_8);
          }
#line 1474 "tupling.m"
          {
#line 1474 "tupling.m"
            transform_hlds__tupling__V_21_21 = mercury__set__from_list_1_f_0(transform_hlds__tupling__TypeInfo_54_54, transform_hlds__tupling__TupleFieldVars_15);
          }
#line 1472 "tupling.m"
          {
#line 1472 "tupling.m"
            transform_hlds__tupling__VarsToLoad_17 = mercury__set__difference_2_f_0(transform_hlds__tupling__TypeInfo_54_54, transform_hlds__tupling__V_20_20, transform_hlds__tupling__V_21_21);
          }
#line 1475 "tupling.m"
          {
#line 1475 "tupling.m"
            transform_hlds__tupling__succeeded = mercury__set__is_non_empty_1_p_0(transform_hlds__tupling__TypeInfo_54_54, transform_hlds__tupling__VarsToLoad_17);
          }
#line 1475 "tupling.m"
          if (transform_hlds__tupling__succeeded)
#line 1477 "tupling.m"
            {
#line 1477 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_State_22_22;
#line 1477 "tupling.m"
              MR_Word transform_hlds__tupling__V_23_23;
#line 1478 "tupling.m"
              MR_Box transform_hlds__tupling__conv4_STATE_VARIABLE_State_19;

#line 1476 "tupling.m"
              {
#line 1476 "tupling.m"
                transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(transform_hlds__tupling__CvLoadCost_11, transform_hlds__tupling__DeconstructCellVar_7, transform_hlds__tupling__STATE_VARIABLE_State_0_18, &transform_hlds__tupling__STATE_VARIABLE_State_22_22);
              }
#line 1478 "tupling.m"
              {
#line 1478 "tupling.m"
                transform_hlds__tupling__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1478 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[6]));
#line 1478 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 1) = ((MR_Box) (transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_2));
#line 1478 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1478 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 3) = ((MR_Box) (transform_hlds__tupling__FvLoadCost_12));
#line 1478 "tupling.m"
              }
#line 1478 "tupling.m"
              {
#line 1478 "tupling.m"
                mercury__set__fold_4_p_0(transform_hlds__tupling__TypeInfo_54_54, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_23_23, transform_hlds__tupling__VarsToLoad_17, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_State_22_22)), &transform_hlds__tupling__conv4_STATE_VARIABLE_State_19);
              }
#line 1478 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_State_19 = ((MR_Word) transform_hlds__tupling__conv4_STATE_VARIABLE_State_19);
#line 1477 "tupling.m"
            }
#line 1475 "tupling.m"
          else
#line 1475 "tupling.m"
            *transform_hlds__tupling__STATE_VARIABLE_State_19 = transform_hlds__tupling__STATE_VARIABLE_State_0_18;
#line 1471 "tupling.m"
        }
#line 11294 "transform_hlds.tupling.c"
    else
#line 11296 "transform_hlds.tupling.c"
      {
#line 11298 "transform_hlds.tupling.c"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_State_25_84;
#line 11300 "transform_hlds.tupling.c"
        MR_Word transform_hlds__tupling__V_85_85;
#line 1468 "tupling.m"
        MR_Box transform_hlds__tupling__conv6_STATE_VARIABLE_State_19;

#line 1466 "tupling.m"
        {
#line 1466 "tupling.m"
          transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(transform_hlds__tupling__CvLoadCost_11, transform_hlds__tupling__DeconstructCellVar_7, transform_hlds__tupling__STATE_VARIABLE_State_0_18, &transform_hlds__tupling__STATE_VARIABLE_State_25_84);
        }
#line 1468 "tupling.m"
        {
#line 1468 "tupling.m"
          transform_hlds__tupling__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1468 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_85_85, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[6]));
#line 1468 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_85_85, 1) = ((MR_Box) (transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_3));
#line 1468 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1468 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_85_85, 3) = ((MR_Box) (transform_hlds__tupling__FvLoadCost_12));
#line 1468 "tupling.m"
        }
#line 1468 "tupling.m"
        {
#line 1468 "tupling.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_85_85, transform_hlds__tupling__DeconstructFieldVars_8, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_State_25_84)), &transform_hlds__tupling__conv6_STATE_VARIABLE_State_19);
        }
#line 1468 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_State_19 = ((MR_Word) transform_hlds__tupling__conv6_STATE_VARIABLE_State_19);
#line 11331 "transform_hlds.tupling.c"
      }
#line 1459 "tupling.m"
  }
#line 1455 "tupling.m"
}

#line 1447 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_3_p_0(
#line 1447 "tupling.m"
  MR_Word transform_hlds__tupling__Vars_4,
#line 1447 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_8,
#line 1447 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_9)
#line 1447 "tupling.m"
{
#line 1450 "tupling.m"
  {
#line 1450 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1450 "tupling.m"
    MR_Word transform_hlds__tupling__RegVars0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 0)));
#line 1450 "tupling.m"
    MR_Word transform_hlds__tupling__RegVars_7;
#line 1451 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 1)));
#line 1451 "tupling.m"
    MR_Float transform_hlds__tupling__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 2)));
#line 1451 "tupling.m"
    MR_Float transform_hlds__tupling__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 3)));
#line 1453 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15;
#line 1453 "tupling.m"
    MR_Float transform_hlds__tupling__V_16_16;
#line 1453 "tupling.m"
    MR_Float transform_hlds__tupling__V_17_17;
#line 1453 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14;

#line 1452 "tupling.m"
    {
#line 1452 "tupling.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Vars_4, transform_hlds__tupling__RegVars0_6, &transform_hlds__tupling__RegVars_7);
    }
#line 1453 "tupling.m"
    transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 0)));
#line 1453 "tupling.m"
    transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 1)));
#line 1453 "tupling.m"
    transform_hlds__tupling__V_16_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 2)));
#line 1453 "tupling.m"
    transform_hlds__tupling__V_17_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 3)));
#line 1453 "tupling.m"
    {
#line 1453 "tupling.m"
      MR_Word base;
#line 1453 "tupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1453 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_CountState_9 = base;
#line 1453 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_7));
#line 1453 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__V_15_15));
#line 1453 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__V_16_16);
#line 1453 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__V_17_17);
#line 1453 "tupling.m"
    }
#line 1450 "tupling.m"
  }
#line 1447 "tupling.m"
}

#line 1432 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(
#line 1432 "tupling.m"
  MR_Integer transform_hlds__tupling__LoadCost_5,
#line 1432 "tupling.m"
  MR_Word transform_hlds__tupling__Var_6,
#line 1432 "tupling.m"
  MR_Word transform_hlds__tupling__CountState0_7,
#line 1432 "tupling.m"
  MR_Word * transform_hlds__tupling__CountState_8)
#line 1432 "tupling.m"
{
#line 1435 "tupling.m"
  {
#line 1435 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1435 "tupling.m"
    MR_Word transform_hlds__tupling__RegVars0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_7, (MR_Integer) 0)));
#line 1435 "tupling.m"
    MR_Word transform_hlds__tupling__StackVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_7, (MR_Integer) 1)));
#line 1435 "tupling.m"
    MR_Float transform_hlds__tupling__Loads0_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_7, (MR_Integer) 2)));
#line 1435 "tupling.m"
    MR_Float transform_hlds__tupling__Stores_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_7, (MR_Integer) 3)));

#line 1437 "tupling.m"
    {
#line 1437 "tupling.m"
      transform_hlds__tupling__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__RegVars0_9, transform_hlds__tupling__Var_6);
    }
#line 1437 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1438 "tupling.m"
      *transform_hlds__tupling__CountState_8 = transform_hlds__tupling__CountState0_7;
#line 1437 "tupling.m"
    else
#line 1440 "tupling.m"
      {
#line 1440 "tupling.m"
        MR_Word transform_hlds__tupling__RegVars_13;
#line 1440 "tupling.m"
        MR_Float transform_hlds__tupling__Loads_14;
#line 1440 "tupling.m"
        MR_Float transform_hlds__tupling__V_15_15;

#line 1440 "tupling.m"
        {
#line 1440 "tupling.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Var_6, transform_hlds__tupling__RegVars0_9, &transform_hlds__tupling__RegVars_13);
        }
#line 1441 "tupling.m"
        {
#line 1441 "tupling.m"
          transform_hlds__tupling__V_15_15 = mercury__float__float_1_f_0(transform_hlds__tupling__LoadCost_5);
        }
#line 1441 "tupling.m"
        transform_hlds__tupling__Loads_14 = (transform_hlds__tupling__Loads0_11 + transform_hlds__tupling__V_15_15);
#line 1442 "tupling.m"
        {
#line 1442 "tupling.m"
          MR_Word base;
#line 1442 "tupling.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1442 "tupling.m"
          *transform_hlds__tupling__CountState_8 = base;
#line 1442 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_13));
#line 1442 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__StackVars_10));
#line 1442 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__Loads_14);
#line 1442 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__Stores_12);
#line 1442 "tupling.m"
        }
#line 1440 "tupling.m"
      }
#line 1435 "tupling.m"
  }
#line 1432 "tupling.m"
}

#line 1400 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_normal_var_in_reg_4_p_0(
#line 1400 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1400 "tupling.m"
  MR_Word transform_hlds__tupling__Var_6,
#line 1400 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_10,
#line 1400 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_11)
#line 1400 "tupling.m"
{
#line 1403 "tupling.m"
  {
#line 1403 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1403 "tupling.m"
    MR_Word transform_hlds__tupling__TuningParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 1403 "tupling.m"
    MR_Integer transform_hlds__tupling__NormalLoadCost_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 0)));
#line 1404 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 1404 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 1404 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 1404 "tupling.m"
    MR_Word transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 1404 "tupling.m"
    MR_Word transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 1404 "tupling.m"
    MR_Word transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 1404 "tupling.m"
    MR_Word transform_hlds__tupling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 7)));
#line 1405 "tupling.m"
    MR_Integer transform_hlds__tupling__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 1)));
#line 1405 "tupling.m"
    MR_Integer transform_hlds__tupling__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 2)));
#line 1405 "tupling.m"
    MR_Integer transform_hlds__tupling__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 3)));
#line 1405 "tupling.m"
    MR_Integer transform_hlds__tupling__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 4)));
#line 1405 "tupling.m"
    MR_Integer transform_hlds__tupling__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 5)));
#line 1405 "tupling.m"
    MR_Integer transform_hlds__tupling__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 6)));
#line 1405 "tupling.m"
    MR_Integer transform_hlds__tupling__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 7)));

#line 1406 "tupling.m"
    {
#line 1406 "tupling.m"
      transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(transform_hlds__tupling__NormalLoadCost_9, transform_hlds__tupling__Var_6, transform_hlds__tupling__STATE_VARIABLE_CountState_0_10, transform_hlds__tupling__STATE_VARIABLE_CountState_11);
    }
#line 1403 "tupling.m"
  }
#line 1400 "tupling.m"
}

#line 1385 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_in_reg_4_p_0(
#line 1385 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1385 "tupling.m"
  MR_Word transform_hlds__tupling__Var_6,
#line 1385 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_12,
#line 1385 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_13)
#line 1385 "tupling.m"
{
#line 1389 "tupling.m"
  {
#line 1389 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1389 "tupling.m"
    MR_Word transform_hlds__tupling__TuplingProposal_8;
#line 1390 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_16_16;
#line 1390 "tupling.m"
    MR_Word transform_hlds__tupling__FieldVars_10;
#line 1390 "tupling.m"
    MR_Word transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 7)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__Probe_29;
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 7)));
#line 871 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_Probe_29;
#line 1391 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9;
#line 1391 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11;

#line 871 "tupling.m"
    {
#line 871 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_30_30, ((MR_Box) (transform_hlds__tupling__V_18_18)), &transform_hlds__tupling__conv0_Probe_29);
    }
#line 871 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 871 "tupling.m"
      {
#line 871 "tupling.m"
        transform_hlds__tupling__Probe_29 = ((MR_Word) transform_hlds__tupling__conv0_Probe_29);
#line 871 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 871 "tupling.m"
      }
#line 871 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 872 "tupling.m"
      transform_hlds__tupling__TuplingProposal_8 = transform_hlds__tupling__Probe_29;
#line 871 "tupling.m"
    else
#line 874 "tupling.m"
      transform_hlds__tupling__TuplingProposal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1391 "tupling.m"
    transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__TuplingProposal_8)) == (MR_mktag((MR_Integer) 1)));
#line 1391 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1391 "tupling.m"
      {
#line 1391 "tupling.m"
        transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_8, (MR_Integer) 0)));
#line 1391 "tupling.m"
        transform_hlds__tupling__FieldVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_8, (MR_Integer) 1)));
#line 1391 "tupling.m"
        transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_8, (MR_Integer) 2)));
#line 11650 "transform_hlds.tupling.c"
        transform_hlds__tupling__TypeInfo_16_16 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 1392 "tupling.m"
        {
#line 1392 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__list__member_2_p_0(transform_hlds__tupling__TypeInfo_16_16, ((MR_Box) (transform_hlds__tupling__Var_6)), transform_hlds__tupling__FieldVars_10);
        }
#line 1391 "tupling.m"
      }
#line 1389 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1413 "tupling.m"
      {
#line 1413 "tupling.m"
        MR_Word transform_hlds__tupling__RegVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_12, (MR_Integer) 0)));
#line 1413 "tupling.m"
        MR_Word transform_hlds__tupling__StackVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_12, (MR_Integer) 1)));
#line 1413 "tupling.m"
        MR_Float transform_hlds__tupling__Loads0_47 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_12, (MR_Integer) 2)));
#line 1413 "tupling.m"
        MR_Float transform_hlds__tupling__Stores_48 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_12, (MR_Integer) 3)));

#line 1415 "tupling.m"
        {
#line 1415 "tupling.m"
          transform_hlds__tupling__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__RegVars0_45, transform_hlds__tupling__Var_6);
        }
#line 1415 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1416 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_CountState_13 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_12;
#line 1415 "tupling.m"
        else
#line 1418 "tupling.m"
          {
#line 1418 "tupling.m"
            MR_Word transform_hlds__tupling__CellVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_8, (MR_Integer) 0)));
#line 1418 "tupling.m"
            MR_Word transform_hlds__tupling__TuningParams_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 1418 "tupling.m"
            MR_Float transform_hlds__tupling__CvLoadCost_53;
#line 1418 "tupling.m"
            MR_Float transform_hlds__tupling__FvLoadCost_54;
#line 1418 "tupling.m"
            MR_Word transform_hlds__tupling__RegVars_55;
#line 1418 "tupling.m"
            MR_Float transform_hlds__tupling__Loads_56;
#line 1418 "tupling.m"
            MR_Integer transform_hlds__tupling__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 2)));
#line 1418 "tupling.m"
            MR_Integer transform_hlds__tupling__V_58_58;
#line 1418 "tupling.m"
            MR_Word transform_hlds__tupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_8, (MR_Integer) 1)));
#line 1418 "tupling.m"
            MR_Word transform_hlds__tupling__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_8, (MR_Integer) 2)));
#line 1419 "tupling.m"
            MR_Word transform_hlds__tupling__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 1419 "tupling.m"
            MR_Word transform_hlds__tupling__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 1419 "tupling.m"
            MR_Word transform_hlds__tupling__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 1419 "tupling.m"
            MR_Word transform_hlds__tupling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 1419 "tupling.m"
            MR_Word transform_hlds__tupling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 1419 "tupling.m"
            MR_Word transform_hlds__tupling__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 1419 "tupling.m"
            MR_Word transform_hlds__tupling__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 7)));
#line 1420 "tupling.m"
            MR_Integer transform_hlds__tupling__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 0)));
#line 1420 "tupling.m"
            MR_Integer transform_hlds__tupling__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 1)));
#line 1420 "tupling.m"
            MR_Integer transform_hlds__tupling__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 3)));
#line 1420 "tupling.m"
            MR_Integer transform_hlds__tupling__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 4)));
#line 1420 "tupling.m"
            MR_Integer transform_hlds__tupling__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 5)));
#line 1420 "tupling.m"
            MR_Integer transform_hlds__tupling__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 6)));
#line 1420 "tupling.m"
            MR_Integer transform_hlds__tupling__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 7)));
#line 1421 "tupling.m"
            MR_Integer transform_hlds__tupling__V_77_77;
#line 1421 "tupling.m"
            MR_Integer transform_hlds__tupling__V_78_78;
#line 1421 "tupling.m"
            MR_Integer transform_hlds__tupling__V_79_79;
#line 1421 "tupling.m"
            MR_Integer transform_hlds__tupling__V_80_80;
#line 1421 "tupling.m"
            MR_Integer transform_hlds__tupling__V_81_81;
#line 1421 "tupling.m"
            MR_Integer transform_hlds__tupling__V_82_82;
#line 1421 "tupling.m"
            MR_Integer transform_hlds__tupling__V_83_83;

#line 1420 "tupling.m"
            {
#line 1420 "tupling.m"
              transform_hlds__tupling__CvLoadCost_53 = mercury__float__float_1_f_0(transform_hlds__tupling__V_57_57);
            }
#line 1421 "tupling.m"
            transform_hlds__tupling__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 0)));
#line 1421 "tupling.m"
            transform_hlds__tupling__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 1)));
#line 1421 "tupling.m"
            transform_hlds__tupling__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 2)));
#line 1421 "tupling.m"
            transform_hlds__tupling__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 3)));
#line 1421 "tupling.m"
            transform_hlds__tupling__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 4)));
#line 1421 "tupling.m"
            transform_hlds__tupling__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 5)));
#line 1421 "tupling.m"
            transform_hlds__tupling__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 6)));
#line 1421 "tupling.m"
            transform_hlds__tupling__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_52, (MR_Integer) 7)));
#line 1421 "tupling.m"
            {
#line 1421 "tupling.m"
              transform_hlds__tupling__FvLoadCost_54 = mercury__float__float_1_f_0(transform_hlds__tupling__V_58_58);
            }
#line 1422 "tupling.m"
            {
#line 1422 "tupling.m"
              transform_hlds__tupling__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__RegVars0_45, transform_hlds__tupling__CellVar_49);
            }
#line 1422 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 1423 "tupling.m"
              {
#line 1423 "tupling.m"
                {
#line 1423 "tupling.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Var_6, transform_hlds__tupling__RegVars0_45, &transform_hlds__tupling__RegVars_55);
                }
#line 1424 "tupling.m"
                transform_hlds__tupling__Loads_56 = (transform_hlds__tupling__Loads0_47 + transform_hlds__tupling__FvLoadCost_54);
#line 1423 "tupling.m"
              }
#line 1422 "tupling.m"
            else
#line 1426 "tupling.m"
              {
#line 1426 "tupling.m"
                MR_Word transform_hlds__tupling__V_59_59;
#line 1426 "tupling.m"
                MR_Word transform_hlds__tupling__V_60_60;
#line 1426 "tupling.m"
                MR_Float transform_hlds__tupling__V_62_62;

#line 1426 "tupling.m"
                {
#line 1426 "tupling.m"
                  transform_hlds__tupling__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "tupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_60_60, 0) = ((MR_Box) (transform_hlds__tupling__Var_6));
#line 1426 "tupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1426 "tupling.m"
                }
#line 1426 "tupling.m"
                {
#line 1426 "tupling.m"
                  transform_hlds__tupling__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "tupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_59_59, 0) = ((MR_Box) (transform_hlds__tupling__CellVar_49));
#line 1426 "tupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_59_59, 1) = ((MR_Box) (transform_hlds__tupling__V_60_60));
#line 1426 "tupling.m"
                }
#line 1426 "tupling.m"
                {
#line 1426 "tupling.m"
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__V_59_59, transform_hlds__tupling__RegVars0_45, &transform_hlds__tupling__RegVars_55);
                }
#line 1427 "tupling.m"
                transform_hlds__tupling__V_62_62 = (transform_hlds__tupling__Loads0_47 + transform_hlds__tupling__CvLoadCost_53);
#line 1427 "tupling.m"
                transform_hlds__tupling__Loads_56 = (transform_hlds__tupling__V_62_62 + transform_hlds__tupling__FvLoadCost_54);
#line 1426 "tupling.m"
              }
#line 1429 "tupling.m"
            {
#line 1429 "tupling.m"
              MR_Word base;
#line 1429 "tupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_CountState_13 = base;
#line 1429 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_55));
#line 1429 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__StackVars_46));
#line 1429 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__Loads_56);
#line 1429 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__Stores_48);
#line 1429 "tupling.m"
            }
#line 1418 "tupling.m"
          }
#line 1413 "tupling.m"
      }
#line 1389 "tupling.m"
    else
#line 1397 "tupling.m"
      {
#line 1397 "tupling.m"
        transform_hlds__tupling__cls_require_normal_var_in_reg_4_p_0(transform_hlds__tupling__CountInfo_5, transform_hlds__tupling__Var_6, transform_hlds__tupling__STATE_VARIABLE_CountState_0_12, transform_hlds__tupling__STATE_VARIABLE_CountState_13);
      }
#line 1389 "tupling.m"
  }
#line 1385 "tupling.m"
}

#line 1383 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0_1(
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1383 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1383 "tupling.m"
{
#line 1383 "tupling.m"
  {
#line 1383 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1383 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13;

#line 1383 "tupling.m"
    {
#line 1383 "tupling.m"
      transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13);
    }
#line 1383 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13));
#line 1383 "tupling.m"
  }
#line 1383 "tupling.m"
}

#line 1379 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0(
#line 1379 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1379 "tupling.m"
  MR_Word transform_hlds__tupling__Vars_6,
#line 1379 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_8,
#line 1379 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_9)
#line 1379 "tupling.m"
{
#line 1382 "tupling.m"
  {
#line 1382 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1382 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10;
#line 1383 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_9;

#line 1383 "tupling.m"
    {
#line 1383 "tupling.m"
      transform_hlds__tupling__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1383 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[5]));
#line 1383 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 1) = ((MR_Box) (transform_hlds__tupling__cls_require_in_regs_4_p_0_1));
#line 1383 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1383 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 3) = ((MR_Box) (transform_hlds__tupling__CountInfo_5));
#line 1383 "tupling.m"
    }
#line 1383 "tupling.m"
    {
#line 1383 "tupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_10_10, transform_hlds__tupling__Vars_6, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_0_8)), &transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_9);
    }
#line 1383 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_CountState_9 = ((MR_Word) transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_9);
#line 1382 "tupling.m"
  }
#line 1379 "tupling.m"
}

#line 1500 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_cases_4_p_0_1(
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1500 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1500 "tupling.m"
{
#line 1500 "tupling.m"
  {
#line 1500 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1500 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5;

#line 1500 "tupling.m"
    {
#line 1500 "tupling.m"
      transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5);
    }
#line 1500 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5));
#line 1500 "tupling.m"
  }
#line 1500 "tupling.m"
}

#line 1351 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_cases_4_p_0(
#line 1351 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1351 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1351 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_3,
#line 1351 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_4)
#line 1351 "tupling.m"
{
#line 1354 "tupling.m"
  while (MR_TRUE)
#line 1354 "tupling.m"
    {
#line 1354 "tupling.m"
      /* tailcall optimized into a loop */
#line 1354 "tupling.m"
      {
#line 1354 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;

#line 1354 "tupling.m"
        if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1354 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_CountState_4 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_3;
#line 1354 "tupling.m"
        else
#line 1355 "tupling.m"
          {
#line 1355 "tupling.m"
            MR_Word transform_hlds__tupling__Case_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1355 "tupling.m"
            MR_Word transform_hlds__tupling__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1355 "tupling.m"
            MR_Word transform_hlds__tupling__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case_9, (MR_Integer) 2)));
#line 1355 "tupling.m"
            MR_Word transform_hlds__tupling__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_15, (MR_Integer) 1)));
#line 1355 "tupling.m"
            MR_Word transform_hlds__tupling__ResumePoint_17;
#line 1355 "tupling.m"
            MR_Word transform_hlds__tupling__BranchCountState0_20;
#line 1355 "tupling.m"
            MR_Word transform_hlds__tupling__BranchCountState_21;
#line 1355 "tupling.m"
            MR_Word transform_hlds__tupling__ProcCounts_22;
#line 1355 "tupling.m"
            MR_Word transform_hlds__tupling__GoalId_23;
#line 1355 "tupling.m"
            MR_Float transform_hlds__tupling__RelFreq_24;
#line 1355 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_27_27;
#line 1355 "tupling.m"
            MR_Word transform_hlds__tupling__V_28_28;
#line 1355 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_29_29;
#line 1356 "tupling.m"
            MR_Word transform_hlds__tupling___MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case_9, (MR_Integer) 0)));
#line 1356 "tupling.m"
            MR_Word transform_hlds__tupling___OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case_9, (MR_Integer) 1)));
#line 1357 "tupling.m"
            MR_Word transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_15, (MR_Integer) 0)));
#line 1368 "tupling.m"
            MR_Word transform_hlds__tupling__V_32_32;
#line 1368 "tupling.m"
            MR_Word transform_hlds__tupling__V_33_33;
#line 1368 "tupling.m"
            MR_Word transform_hlds__tupling__V_34_34;
#line 1368 "tupling.m"
            MR_Word transform_hlds__tupling__V_35_35;
#line 1368 "tupling.m"
            MR_Word transform_hlds__tupling__V_36_36;
#line 1368 "tupling.m"
            MR_Word transform_hlds__tupling__V_37_37;
#line 1368 "tupling.m"
            MR_Word transform_hlds__tupling__V_38_38;
#line 1370 "tupling.m"
            MR_Word transform_hlds__tupling__V_39_39;
#line 1370 "tupling.m"
            MR_Word transform_hlds__tupling__V_40_40;
#line 1370 "tupling.m"
            MR_Word transform_hlds__tupling__V_41_41;
#line 1370 "tupling.m"
            MR_Word transform_hlds__tupling__V_42_42;
#line 1370 "tupling.m"
            MR_Word transform_hlds__tupling__V_43_43;
#line 1370 "tupling.m"
            MR_Word transform_hlds__tupling__V_44_44;
#line 1370 "tupling.m"
            MR_Word transform_hlds__tupling__V_45_45;

#line 1358 "tupling.m"
            {
#line 1358 "tupling.m"
              hlds__hlds_llds__goal_info_get_resume_point_2_p_0(transform_hlds__tupling__GoalInfo_16, &transform_hlds__tupling__ResumePoint_17);
            }
#line 1362 "tupling.m"
            if ((transform_hlds__tupling__ResumePoint_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1363 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_CountState_27_27 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_3;
#line 1362 "tupling.m"
            else
#line 1360 "tupling.m"
              {
#line 1360 "tupling.m"
                MR_Word transform_hlds__tupling__LiveVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_17, (MR_Integer) 0)));
#line 1360 "tupling.m"
                MR_Word transform_hlds__tupling__TuplingProposal_51;
#line 1360 "tupling.m"
                MR_Word transform_hlds__tupling__TuningParams_52;
#line 1360 "tupling.m"
                MR_Word transform_hlds__tupling__V_53_53;
#line 1360 "tupling.m"
                MR_Word transform_hlds__tupling__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1360 "tupling.m"
                MR_Word transform_hlds__tupling___ResumeLocs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_17, (MR_Integer) 1)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__Probe_79;
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 871 "tupling.m"
                MR_Box transform_hlds__tupling__conv0_Probe_79;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_55_55;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_56_56;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_57_57;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_58_58;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_59_59;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_60_60;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_61_61;
#line 1500 "tupling.m"
                MR_Box transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_27_27;

#line 871 "tupling.m"
                {
#line 871 "tupling.m"
                  transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_80_80, ((MR_Box) (transform_hlds__tupling__V_68_68)), &transform_hlds__tupling__conv0_Probe_79);
                }
#line 871 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 871 "tupling.m"
                  {
#line 871 "tupling.m"
                    transform_hlds__tupling__Probe_79 = ((MR_Word) transform_hlds__tupling__conv0_Probe_79);
#line 871 "tupling.m"
                    transform_hlds__tupling__succeeded = MR_TRUE;
#line 871 "tupling.m"
                  }
#line 871 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 872 "tupling.m"
                  transform_hlds__tupling__TuplingProposal_51 = transform_hlds__tupling__Probe_79;
#line 871 "tupling.m"
                else
#line 874 "tupling.m"
                  transform_hlds__tupling__TuplingProposal_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 1499 "tupling.m"
                transform_hlds__tupling__TuningParams_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 1500 "tupling.m"
                {
#line 1500 "tupling.m"
                  transform_hlds__tupling__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1500 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_53_53, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[3]));
#line 1500 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_53_53, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_cases_4_p_0_1));
#line 1500 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1500 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_53_53, 3) = ((MR_Box) (transform_hlds__tupling__TuplingProposal_51));
#line 1500 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_53_53, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_52));
#line 1500 "tupling.m"
                }
#line 1500 "tupling.m"
                {
#line 1500 "tupling.m"
                  parse_tree__set_of_var__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_53_53, transform_hlds__tupling__LiveVars_18, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_0_3)), &transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_27_27);
                }
#line 1500 "tupling.m"
                transform_hlds__tupling__STATE_VARIABLE_CountState_27_27 = ((MR_Word) transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_27_27);
#line 1360 "tupling.m"
              }
#line 1365 "tupling.m"
            {
#line 1365 "tupling.m"
              transform_hlds__tupling__reset_count_state_counts_2_p_0(transform_hlds__tupling__STATE_VARIABLE_CountState_27_27, &transform_hlds__tupling__BranchCountState0_20);
            }
#line 1366 "tupling.m"
            {
#line 1366 "tupling.m"
              transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Goal_15, transform_hlds__tupling__HeadVar__2_2, transform_hlds__tupling__BranchCountState0_20, &transform_hlds__tupling__BranchCountState_21);
            }
#line 1368 "tupling.m"
            transform_hlds__tupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1368 "tupling.m"
            transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1368 "tupling.m"
            transform_hlds__tupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1368 "tupling.m"
            transform_hlds__tupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1368 "tupling.m"
            transform_hlds__tupling__ProcCounts_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 1368 "tupling.m"
            transform_hlds__tupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 1368 "tupling.m"
            transform_hlds__tupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 1368 "tupling.m"
            transform_hlds__tupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 1369 "tupling.m"
            {
#line 1369 "tupling.m"
              transform_hlds__tupling__GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__tupling__GoalInfo_16);
            }
#line 1370 "tupling.m"
            transform_hlds__tupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1370 "tupling.m"
            transform_hlds__tupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1370 "tupling.m"
            transform_hlds__tupling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1370 "tupling.m"
            transform_hlds__tupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1370 "tupling.m"
            transform_hlds__tupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 1370 "tupling.m"
            transform_hlds__tupling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 1370 "tupling.m"
            transform_hlds__tupling__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 1370 "tupling.m"
            transform_hlds__tupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 1370 "tupling.m"
            {
#line 1370 "tupling.m"
              transform_hlds__tupling__get_case_relative_frequency_4_p_0(transform_hlds__tupling__ProcCounts_22, transform_hlds__tupling__V_28_28, transform_hlds__tupling__GoalId_23, &transform_hlds__tupling__RelFreq_24);
            }
#line 1372 "tupling.m"
            {
#line 1372 "tupling.m"
              transform_hlds__tupling__add_branch_costs_4_p_0(transform_hlds__tupling__BranchCountState_21, transform_hlds__tupling__RelFreq_24, transform_hlds__tupling__STATE_VARIABLE_CountState_27_27, &transform_hlds__tupling__STATE_VARIABLE_CountState_29_29);
            }
#line 1373 "tupling.m"
            /* direct tailcall eliminated */
#line 1373 "tupling.m"
            {
#line 1373 "tupling.m"
              MR_Word transform_hlds__tupling__HeadVar__1__tmp_copy_1 = transform_hlds__tupling__Cases_10;
#line 1373 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_3 = transform_hlds__tupling__STATE_VARIABLE_CountState_29_29;

#line 1373 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_CountState_0_3 = transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_3;
#line 1373 "tupling.m"
              transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__HeadVar__1__tmp_copy_1;
#line 1373 "tupling.m"
            }
#line 1373 "tupling.m"
            continue;
#line 1355 "tupling.m"
          }
#line 1354 "tupling.m"
      }
#line 1354 "tupling.m"
      break;
#line 1354 "tupling.m"
    }
#line 1351 "tupling.m"
}

#line 1500 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_disj_4_p_0_1(
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1500 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1500 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1500 "tupling.m"
{
#line 1500 "tupling.m"
  {
#line 1500 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1500 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5;

#line 1500 "tupling.m"
    {
#line 1500 "tupling.m"
      transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5);
    }
#line 1500 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5));
#line 1500 "tupling.m"
  }
#line 1500 "tupling.m"
}

#line 1328 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_disj_4_p_0(
#line 1328 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1328 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1328 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_3,
#line 1328 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_4)
#line 1328 "tupling.m"
{
#line 1331 "tupling.m"
  while (MR_TRUE)
#line 1331 "tupling.m"
    {
#line 1331 "tupling.m"
      /* tailcall optimized into a loop */
#line 1331 "tupling.m"
      {
#line 1331 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;

#line 1331 "tupling.m"
        if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1331 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_CountState_4 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_3;
#line 1331 "tupling.m"
        else
#line 1332 "tupling.m"
          {
#line 1332 "tupling.m"
            MR_Word transform_hlds__tupling__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1332 "tupling.m"
            MR_Word transform_hlds__tupling__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1332 "tupling.m"
            MR_Word transform_hlds__tupling__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_9, (MR_Integer) 1)));
#line 1332 "tupling.m"
            MR_Word transform_hlds__tupling__ResumePoint_14;
#line 1332 "tupling.m"
            MR_Word transform_hlds__tupling__BranchCountState0_17;
#line 1332 "tupling.m"
            MR_Word transform_hlds__tupling__BranchCountState_18;
#line 1332 "tupling.m"
            MR_Word transform_hlds__tupling__ProcCounts_19;
#line 1332 "tupling.m"
            MR_Word transform_hlds__tupling__GoalId_20;
#line 1332 "tupling.m"
            MR_Float transform_hlds__tupling__RelFreq_21;
#line 1332 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_24_24;
#line 1332 "tupling.m"
            MR_Word transform_hlds__tupling__V_25_25;
#line 1332 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_26_26;
#line 1333 "tupling.m"
            MR_Word transform_hlds__tupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_9, (MR_Integer) 0)));
#line 1344 "tupling.m"
            MR_Word transform_hlds__tupling__V_29_29;
#line 1344 "tupling.m"
            MR_Word transform_hlds__tupling__V_30_30;
#line 1344 "tupling.m"
            MR_Word transform_hlds__tupling__V_31_31;
#line 1344 "tupling.m"
            MR_Word transform_hlds__tupling__V_32_32;
#line 1344 "tupling.m"
            MR_Word transform_hlds__tupling__V_33_33;
#line 1344 "tupling.m"
            MR_Word transform_hlds__tupling__V_34_34;
#line 1344 "tupling.m"
            MR_Word transform_hlds__tupling__V_35_35;
#line 1346 "tupling.m"
            MR_Word transform_hlds__tupling__V_36_36;
#line 1346 "tupling.m"
            MR_Word transform_hlds__tupling__V_37_37;
#line 1346 "tupling.m"
            MR_Word transform_hlds__tupling__V_38_38;
#line 1346 "tupling.m"
            MR_Word transform_hlds__tupling__V_39_39;
#line 1346 "tupling.m"
            MR_Word transform_hlds__tupling__V_40_40;
#line 1346 "tupling.m"
            MR_Word transform_hlds__tupling__V_41_41;
#line 1346 "tupling.m"
            MR_Word transform_hlds__tupling__V_42_42;

#line 1334 "tupling.m"
            {
#line 1334 "tupling.m"
              hlds__hlds_llds__goal_info_get_resume_point_2_p_0(transform_hlds__tupling__GoalInfo_13, &transform_hlds__tupling__ResumePoint_14);
            }
#line 1338 "tupling.m"
            if ((transform_hlds__tupling__ResumePoint_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1339 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_CountState_24_24 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_3;
#line 1338 "tupling.m"
            else
#line 1336 "tupling.m"
              {
#line 1336 "tupling.m"
                MR_Word transform_hlds__tupling__LiveVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_14, (MR_Integer) 0)));
#line 1336 "tupling.m"
                MR_Word transform_hlds__tupling__TuplingProposal_48;
#line 1336 "tupling.m"
                MR_Word transform_hlds__tupling__TuningParams_49;
#line 1336 "tupling.m"
                MR_Word transform_hlds__tupling__V_50_50;
#line 1336 "tupling.m"
                MR_Word transform_hlds__tupling__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1336 "tupling.m"
                MR_Word transform_hlds__tupling___ResumeLocs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_14, (MR_Integer) 1)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 880 "tupling.m"
                MR_Word transform_hlds__tupling__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__Probe_76;
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 871 "tupling.m"
                MR_Word transform_hlds__tupling__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 871 "tupling.m"
                MR_Box transform_hlds__tupling__conv0_Probe_76;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_52_52;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_53_53;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_54_54;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_55_55;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_56_56;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_57_57;
#line 1499 "tupling.m"
                MR_Word transform_hlds__tupling__V_58_58;
#line 1500 "tupling.m"
                MR_Box transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_24_24;

#line 871 "tupling.m"
                {
#line 871 "tupling.m"
                  transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_77_77, ((MR_Box) (transform_hlds__tupling__V_65_65)), &transform_hlds__tupling__conv0_Probe_76);
                }
#line 871 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 871 "tupling.m"
                  {
#line 871 "tupling.m"
                    transform_hlds__tupling__Probe_76 = ((MR_Word) transform_hlds__tupling__conv0_Probe_76);
#line 871 "tupling.m"
                    transform_hlds__tupling__succeeded = MR_TRUE;
#line 871 "tupling.m"
                  }
#line 871 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 872 "tupling.m"
                  transform_hlds__tupling__TuplingProposal_48 = transform_hlds__tupling__Probe_76;
#line 871 "tupling.m"
                else
#line 874 "tupling.m"
                  transform_hlds__tupling__TuplingProposal_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 1499 "tupling.m"
                transform_hlds__tupling__TuningParams_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 1499 "tupling.m"
                transform_hlds__tupling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 1500 "tupling.m"
                {
#line 1500 "tupling.m"
                  transform_hlds__tupling__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1500 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[3]));
#line 1500 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_disj_4_p_0_1));
#line 1500 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1500 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 3) = ((MR_Box) (transform_hlds__tupling__TuplingProposal_48));
#line 1500 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_49));
#line 1500 "tupling.m"
                }
#line 1500 "tupling.m"
                {
#line 1500 "tupling.m"
                  parse_tree__set_of_var__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_50_50, transform_hlds__tupling__LiveVars_15, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_0_3)), &transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_24_24);
                }
#line 1500 "tupling.m"
                transform_hlds__tupling__STATE_VARIABLE_CountState_24_24 = ((MR_Word) transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_24_24);
#line 1336 "tupling.m"
              }
#line 1341 "tupling.m"
            {
#line 1341 "tupling.m"
              transform_hlds__tupling__reset_count_state_counts_2_p_0(transform_hlds__tupling__STATE_VARIABLE_CountState_24_24, &transform_hlds__tupling__BranchCountState0_17);
            }
#line 1342 "tupling.m"
            {
#line 1342 "tupling.m"
              transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Goal_9, transform_hlds__tupling__HeadVar__2_2, transform_hlds__tupling__BranchCountState0_17, &transform_hlds__tupling__BranchCountState_18);
            }
#line 1344 "tupling.m"
            transform_hlds__tupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1344 "tupling.m"
            transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1344 "tupling.m"
            transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1344 "tupling.m"
            transform_hlds__tupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1344 "tupling.m"
            transform_hlds__tupling__ProcCounts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 1344 "tupling.m"
            transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 1344 "tupling.m"
            transform_hlds__tupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 1344 "tupling.m"
            transform_hlds__tupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 1345 "tupling.m"
            {
#line 1345 "tupling.m"
              transform_hlds__tupling__GoalId_20 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__tupling__GoalInfo_13);
            }
#line 1346 "tupling.m"
            transform_hlds__tupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1346 "tupling.m"
            transform_hlds__tupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1346 "tupling.m"
            transform_hlds__tupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1346 "tupling.m"
            transform_hlds__tupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1346 "tupling.m"
            transform_hlds__tupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 1346 "tupling.m"
            transform_hlds__tupling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 1346 "tupling.m"
            transform_hlds__tupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 1346 "tupling.m"
            transform_hlds__tupling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 1346 "tupling.m"
            {
#line 1346 "tupling.m"
              transform_hlds__tupling__get_disjunct_relative_frequency_4_p_0(transform_hlds__tupling__ProcCounts_19, transform_hlds__tupling__V_25_25, transform_hlds__tupling__GoalId_20, &transform_hlds__tupling__RelFreq_21);
            }
#line 1348 "tupling.m"
            {
#line 1348 "tupling.m"
              transform_hlds__tupling__add_branch_costs_4_p_0(transform_hlds__tupling__BranchCountState_18, transform_hlds__tupling__RelFreq_21, transform_hlds__tupling__STATE_VARIABLE_CountState_24_24, &transform_hlds__tupling__STATE_VARIABLE_CountState_26_26);
            }
#line 1349 "tupling.m"
            /* direct tailcall eliminated */
#line 1349 "tupling.m"
            {
#line 1349 "tupling.m"
              MR_Word transform_hlds__tupling__HeadVar__1__tmp_copy_1 = transform_hlds__tupling__Goals_10;
#line 1349 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_3 = transform_hlds__tupling__STATE_VARIABLE_CountState_26_26;

#line 1349 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_CountState_0_3 = transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_3;
#line 1349 "tupling.m"
              transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__HeadVar__1__tmp_copy_1;
#line 1349 "tupling.m"
            }
#line 1349 "tupling.m"
            continue;
#line 1332 "tupling.m"
          }
#line 1331 "tupling.m"
      }
#line 1331 "tupling.m"
      break;
#line 1331 "tupling.m"
    }
#line 1328 "tupling.m"
}

#line 1320 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_conj_4_p_0(
#line 1320 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1320 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1320 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_3,
#line 1320 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_4)
#line 1320 "tupling.m"
{
#line 1323 "tupling.m"
  while (MR_TRUE)
#line 1323 "tupling.m"
    {
#line 1323 "tupling.m"
      /* tailcall optimized into a loop */
#line 1323 "tupling.m"
      {
#line 1323 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;

#line 1323 "tupling.m"
        if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_CountState_4 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_3;
#line 1323 "tupling.m"
        else
#line 1324 "tupling.m"
          {
#line 1324 "tupling.m"
            MR_Word transform_hlds__tupling__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1324 "tupling.m"
            MR_Word transform_hlds__tupling__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1324 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_15_15;

#line 1325 "tupling.m"
            {
#line 1325 "tupling.m"
              transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Goal_9, transform_hlds__tupling__HeadVar__2_2, transform_hlds__tupling__STATE_VARIABLE_CountState_0_3, &transform_hlds__tupling__STATE_VARIABLE_CountState_15_15);
            }
#line 1326 "tupling.m"
            /* direct tailcall eliminated */
#line 1326 "tupling.m"
            {
#line 1326 "tupling.m"
              MR_Word transform_hlds__tupling__HeadVar__1__tmp_copy_1 = transform_hlds__tupling__Goals_10;
#line 1326 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_3 = transform_hlds__tupling__STATE_VARIABLE_CountState_15_15;

#line 1326 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_CountState_0_3 = transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_3;
#line 1326 "tupling.m"
              transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__HeadVar__1__tmp_copy_1;
#line 1326 "tupling.m"
            }
#line 1326 "tupling.m"
            continue;
#line 1324 "tupling.m"
          }
#line 1323 "tupling.m"
      }
#line 1323 "tupling.m"
      break;
#line 1323 "tupling.m"
    }
#line 1320 "tupling.m"
}

#line 1383 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0_1(
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1383 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1383 "tupling.m"
{
#line 1383 "tupling.m"
  {
#line 1383 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1383 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13;

#line 1383 "tupling.m"
    {
#line 1383 "tupling.m"
      transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13);
    }
#line 1383 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13));
#line 1383 "tupling.m"
  }
#line 1383 "tupling.m"
}

#line 1268 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0(
#line 1268 "tupling.m"
  MR_Word transform_hlds__tupling__GoalExpr_6,
#line 1268 "tupling.m"
  MR_Word transform_hlds__tupling__GoalInfo_7,
#line 1268 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_8,
#line 1268 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_27,
#line 1268 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_28)
#line 1268 "tupling.m"
{
#line 1274 "tupling.m"
  {
#line 1274 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1274 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_46_46;
#line 1274 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_6, (MR_Integer) 0)));
#line 1274 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_6, (MR_Integer) 1)));
#line 1274 "tupling.m"
    MR_Word transform_hlds__tupling__ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_6, (MR_Integer) 2)));
#line 1274 "tupling.m"
    MR_Word transform_hlds__tupling__Builtin_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_6, (MR_Integer) 3)));
#line 1274 "tupling.m"
    MR_Word transform_hlds__tupling__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 0)));
#line 1274 "tupling.m"
    MR_Word transform_hlds__tupling__CalleeProcInfo_18;
#line 1274 "tupling.m"
    MR_Word transform_hlds__tupling__ProcInfo_19;
#line 1274 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes_20;
#line 1274 "tupling.m"
    MR_Word transform_hlds__tupling__InputArgs_21;
#line 1274 "tupling.m"
    MR_Word transform_hlds__tupling__OutputArgs_22;
#line 1274 "tupling.m"
    MR_Word transform_hlds__tupling__Inputs_24;
#line 1274 "tupling.m"
    MR_Word transform_hlds__tupling__Outputs_25;
#line 1275 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_6, (MR_Integer) 4)));
#line 1275 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_6, (MR_Integer) 5)));
#line 1276 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 1)));
#line 1276 "tupling.m"
    MR_Word transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 2)));
#line 1276 "tupling.m"
    MR_Word transform_hlds__tupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 3)));
#line 1276 "tupling.m"
    MR_Word transform_hlds__tupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 4)));
#line 1276 "tupling.m"
    MR_Word transform_hlds__tupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 5)));
#line 1276 "tupling.m"
    MR_Word transform_hlds__tupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 6)));
#line 1276 "tupling.m"
    MR_Word transform_hlds__tupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 7)));
#line 1277 "tupling.m"
    MR_Word transform_hlds__tupling___PredInfo_17;
#line 1279 "tupling.m"
    MR_Word transform_hlds__tupling__V_39_39;
#line 1279 "tupling.m"
    MR_Word transform_hlds__tupling__V_40_40;
#line 1279 "tupling.m"
    MR_Word transform_hlds__tupling__V_41_41;
#line 1279 "tupling.m"
    MR_Word transform_hlds__tupling__V_42_42;
#line 1279 "tupling.m"
    MR_Word transform_hlds__tupling__V_43_43;
#line 1279 "tupling.m"
    MR_Word transform_hlds__tupling__V_44_44;
#line 1279 "tupling.m"
    MR_Word transform_hlds__tupling__V_45_45;
#line 1281 "tupling.m"
    MR_Word transform_hlds__tupling__V_23_23;

#line 1277 "tupling.m"
    {
#line 1277 "tupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__ModuleInfo_16, transform_hlds__tupling__PredId_10, transform_hlds__tupling__ProcId_11, &transform_hlds__tupling___PredInfo_17, &transform_hlds__tupling__CalleeProcInfo_18);
    }
#line 1279 "tupling.m"
    transform_hlds__tupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 0)));
#line 1279 "tupling.m"
    transform_hlds__tupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 1)));
#line 1279 "tupling.m"
    transform_hlds__tupling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 2)));
#line 1279 "tupling.m"
    transform_hlds__tupling__ProcInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 3)));
#line 1279 "tupling.m"
    transform_hlds__tupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 4)));
#line 1279 "tupling.m"
    transform_hlds__tupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 5)));
#line 1279 "tupling.m"
    transform_hlds__tupling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 6)));
#line 1279 "tupling.m"
    transform_hlds__tupling__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 7)));
#line 1280 "tupling.m"
    {
#line 1280 "tupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__ProcInfo_19, &transform_hlds__tupling__VarTypes_20);
    }
#line 1281 "tupling.m"
    {
#line 1281 "tupling.m"
      hlds__arg_info__partition_proc_call_args_7_p_0(transform_hlds__tupling__CalleeProcInfo_18, transform_hlds__tupling__VarTypes_20, transform_hlds__tupling__ModuleInfo_16, transform_hlds__tupling__ArgVars_12, &transform_hlds__tupling__InputArgs_21, &transform_hlds__tupling__OutputArgs_22, &transform_hlds__tupling__V_23_23);
    }
#line 12859 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeInfo_46_46 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 1283 "tupling.m"
    {
#line 1283 "tupling.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__tupling__TypeInfo_46_46, transform_hlds__tupling__InputArgs_21, &transform_hlds__tupling__Inputs_24);
    }
#line 1284 "tupling.m"
    {
#line 1284 "tupling.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__tupling__TypeInfo_46_46, transform_hlds__tupling__OutputArgs_22, &transform_hlds__tupling__Outputs_25);
    }
#line 1289 "tupling.m"
#line 1289 "tupling.m"
    switch (transform_hlds__tupling__Builtin_13) {
#line 1289 "tupling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1289 "tupling.m"
      case (MR_Integer) 0:
#line 1286 "tupling.m"
        {
#line 1286 "tupling.m"
          MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_30_30;
#line 1286 "tupling.m"
          MR_Word transform_hlds__tupling__V_52_52;
#line 1286 "tupling.m"
          MR_Word transform_hlds__tupling__RegVars0_63;
#line 1286 "tupling.m"
          MR_Word transform_hlds__tupling__RegVars_64;
#line 1383 "tupling.m"
          MR_Box transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_30_30;
#line 1451 "tupling.m"
          MR_Word transform_hlds__tupling__V_66_66;
#line 1451 "tupling.m"
          MR_Float transform_hlds__tupling__V_67_67;
#line 1451 "tupling.m"
          MR_Float transform_hlds__tupling__V_68_68;
#line 1453 "tupling.m"
          MR_Word transform_hlds__tupling__V_70_70;
#line 1453 "tupling.m"
          MR_Float transform_hlds__tupling__V_71_71;
#line 1453 "tupling.m"
          MR_Float transform_hlds__tupling__V_72_72;
#line 1453 "tupling.m"
          MR_Word transform_hlds__tupling__V_69_69;

#line 1383 "tupling.m"
          {
#line 1383 "tupling.m"
            transform_hlds__tupling__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1383 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_52_52, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[5]));
#line 1383 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_52_52, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0_1));
#line 1383 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1383 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_52_52, 3) = ((MR_Box) (transform_hlds__tupling__CountInfo_8));
#line 1383 "tupling.m"
          }
#line 1383 "tupling.m"
          {
#line 1383 "tupling.m"
            mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_52_52, transform_hlds__tupling__Inputs_24, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_0_27)), &transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_30_30);
          }
#line 1383 "tupling.m"
          transform_hlds__tupling__STATE_VARIABLE_CountState_30_30 = ((MR_Word) transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_30_30);
#line 1451 "tupling.m"
          transform_hlds__tupling__RegVars0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 0)));
#line 1451 "tupling.m"
          transform_hlds__tupling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 1)));
#line 1451 "tupling.m"
          transform_hlds__tupling__V_67_67 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 2)));
#line 1451 "tupling.m"
          transform_hlds__tupling__V_68_68 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 3)));
#line 1452 "tupling.m"
          {
#line 1452 "tupling.m"
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Outputs_25, transform_hlds__tupling__RegVars0_63, &transform_hlds__tupling__RegVars_64);
          }
#line 1453 "tupling.m"
          transform_hlds__tupling__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 0)));
#line 1453 "tupling.m"
          transform_hlds__tupling__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 1)));
#line 1453 "tupling.m"
          transform_hlds__tupling__V_71_71 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 2)));
#line 1453 "tupling.m"
          transform_hlds__tupling__V_72_72 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 3)));
#line 1453 "tupling.m"
          {
#line 1453 "tupling.m"
            MR_Word base;
#line 1453 "tupling.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1453 "tupling.m"
            *transform_hlds__tupling__STATE_VARIABLE_CountState_28 = base;
#line 1453 "tupling.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_64));
#line 1453 "tupling.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__V_70_70));
#line 1453 "tupling.m"
            MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__V_71_71);
#line 1453 "tupling.m"
            MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__V_72_72);
#line 1453 "tupling.m"
          }
#line 1286 "tupling.m"
        }
#line 1289 "tupling.m"
        break;
#line 1289 "tupling.m"
      case (MR_Integer) 2:
#line 1289 "tupling.m"
      case (MR_Integer) 1:
#line 1292 "tupling.m"
        {
#line 1292 "tupling.m"
          MR_Word transform_hlds__tupling__MaybeNeedAcrossCall_26;

#line 1293 "tupling.m"
          {
#line 1293 "tupling.m"
            hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(transform_hlds__tupling__GoalInfo_7, &transform_hlds__tupling__MaybeNeedAcrossCall_26);
          }
#line 1294 "tupling.m"
          {
#line 1294 "tupling.m"
            transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(transform_hlds__tupling__CountInfo_8, transform_hlds__tupling__Inputs_24, transform_hlds__tupling__OutputArgs_22, transform_hlds__tupling__MaybeNeedAcrossCall_26, transform_hlds__tupling__STATE_VARIABLE_CountState_0_27, transform_hlds__tupling__STATE_VARIABLE_CountState_28);
          }
#line 1292 "tupling.m"
        }
#line 1289 "tupling.m"
        break;
#line 1289 "tupling.m"
    }
#line 1274 "tupling.m"
  }
#line 1268 "tupling.m"
}

#line 1240 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_1(
#line 1240 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 1240 "tupling.m"
{
#line 1240 "tupling.m"
  {
#line 1240 "tupling.m"
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 1240 "tupling.m"
    MR_builtin_longjmp((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__commit_0, 1);
#line 1240 "tupling.m"
  }
#line 1240 "tupling.m"
}

#line 1241 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_3(
#line 1241 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 1241 "tupling.m"
{
#line 1241 "tupling.m"
  {
#line 1241 "tupling.m"
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 1241 "tupling.m"
    (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32 = ((MR_Word) (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__conv0_Var_32);
#line 1241 "tupling.m"
    {
#line 1241 "tupling.m"
      transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_2(transform_hlds__tupling__env_ptr);
    }
#line 1241 "tupling.m"
  }
#line 1241 "tupling.m"
}

#line 1240 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_2(
#line 1240 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 1240 "tupling.m"
{
#line 1240 "tupling.m"
  {
#line 1240 "tupling.m"
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 1240 "tupling.m"
    {
#line 1244 "tupling.m"
      MR_Word transform_hlds__tupling__TypeCtorInfo_84_84;
#line 1244 "tupling.m"
      MR_Integer transform_hlds__tupling__Pos_33;
#line 1244 "tupling.m"
      MR_Integer transform_hlds__tupling__V_87_87;
#line 1245 "tupling.m"
      MR_Box transform_hlds__tupling__conv1_Pos_33;

#line 1244 "tupling.m"
      {
#line 1244 "tupling.m"
        (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__set__member_2_p_0((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_83_83, ((MR_Box) ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32)), (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26);
      }
#line 1244 "tupling.m"
      if ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1244 "tupling.m"
        {
#line 13074 "transform_hlds.tupling.c"
          transform_hlds__tupling__TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1245 "tupling.m"
          {
#line 1245 "tupling.m"
            (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__assoc_list__search_3_p_0((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_83_83, transform_hlds__tupling__TypeCtorInfo_84_84, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVarArgPos_20, ((MR_Box) ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32)), &transform_hlds__tupling__conv1_Pos_33);
          }
#line 1245 "tupling.m"
          if ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1245 "tupling.m"
            {
#line 1245 "tupling.m"
              transform_hlds__tupling__Pos_33 = ((MR_Integer) transform_hlds__tupling__conv1_Pos_33);
#line 1245 "tupling.m"
              (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_TRUE;
#line 1245 "tupling.m"
            }
#line 1244 "tupling.m"
          if ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1244 "tupling.m"
            {
#line 1246 "tupling.m"
              {
#line 1246 "tupling.m"
                (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__list__index1_of_first_occurrence_3_p_0((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_83_83, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14, ((MR_Box) ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32)), &transform_hlds__tupling__V_87_87);
              }
#line 1244 "tupling.m"
              if ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1246 "tupling.m"
                (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = (transform_hlds__tupling__Pos_33 == transform_hlds__tupling__V_87_87);
#line 1244 "tupling.m"
            }
#line 1244 "tupling.m"
        }
#line 1242 "tupling.m"
      (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = !((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded);
#line 1242 "tupling.m"
      if ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1242 "tupling.m"
        {
#line 1242 "tupling.m"
          transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_1(transform_hlds__tupling__env_ptr);
        }
#line 1240 "tupling.m"
    }
#line 1240 "tupling.m"
  }
#line 1240 "tupling.m"
}

#line 1240 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_4(
#line 1240 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 1240 "tupling.m"
{
#line 1240 "tupling.m"
  {
#line 1240 "tupling.m"
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 1240 "tupling.m"
    if (MR_builtin_setjmp((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__commit_0) == 0)
#line 1240 "tupling.m"
      {
#line 13140 "transform_hlds.tupling.c"
        (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_83_83 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 1241 "tupling.m"
        {
#line 1241 "tupling.m"
          mercury__list__member_2_p_1((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_83_83, &(transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__conv0_Var_32, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19, transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_3, transform_hlds__tupling__env_ptr);
        }
#line 1240 "tupling.m"
        (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_FALSE;
#line 1240 "tupling.m"
      }
#line 1240 "tupling.m"
    else
#line 1240 "tupling.m"
      (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_TRUE;
#line 1240 "tupling.m"
  }
#line 1240 "tupling.m"
}

#line 1213 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0(
#line 1213 "tupling.m"
  MR_Word transform_hlds__tupling__GoalExpr_7,
#line 1213 "tupling.m"
  MR_Word transform_hlds__tupling__GoalInfo_8,
#line 1213 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_9,
#line 1213 "tupling.m"
  MR_Word transform_hlds__tupling__CalleeTuplingProposal_10,
#line 1213 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_39,
#line 1213 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_40)
#line 1213 "tupling.m"
{
#line 1213 "tupling.m"
  {
#line 1213 "tupling.m"
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s transform_hlds__tupling__env;

#line 1220 "tupling.m"
    {
#line 1220 "tupling.m"
      MR_Word transform_hlds__tupling__CalleePredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_7, (MR_Integer) 0)));
#line 1220 "tupling.m"
      MR_Integer transform_hlds__tupling__CalleeProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_7, (MR_Integer) 1)));
#line 1220 "tupling.m"
      MR_Word transform_hlds__tupling__CellVar_18;
#line 1220 "tupling.m"
      MR_Word transform_hlds__tupling__ModuleInfo_21;
#line 1220 "tupling.m"
      MR_Word transform_hlds__tupling__CalleeProcInfo_23;
#line 1220 "tupling.m"
      MR_Word transform_hlds__tupling__CallingProcInfo_24;
#line 1220 "tupling.m"
      MR_Word transform_hlds__tupling__VarTypes_25;
#line 1220 "tupling.m"
      MR_Word transform_hlds__tupling__Outputs_27;
#line 1220 "tupling.m"
      MR_Word transform_hlds__tupling__InputArgs_34;
#line 1220 "tupling.m"
      MR_Word transform_hlds__tupling__Inputs_37;
#line 1220 "tupling.m"
      MR_Word transform_hlds__tupling__MaybeNeedAcrossCall_38;
#line 1220 "tupling.m"
      MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_42_42;
#line 1221 "tupling.m"
      MR_Word transform_hlds__tupling__V_15_15;
#line 1221 "tupling.m"
      MR_Word transform_hlds__tupling__V_16_16;
#line 1221 "tupling.m"
      MR_Word transform_hlds__tupling__V_17_17;
#line 1223 "tupling.m"
      MR_Word transform_hlds__tupling__V_48_48;
#line 1223 "tupling.m"
      MR_Word transform_hlds__tupling__V_49_49;
#line 1223 "tupling.m"
      MR_Word transform_hlds__tupling__V_50_50;
#line 1223 "tupling.m"
      MR_Word transform_hlds__tupling__V_51_51;
#line 1223 "tupling.m"
      MR_Word transform_hlds__tupling__V_52_52;
#line 1223 "tupling.m"
      MR_Word transform_hlds__tupling__V_53_53;
#line 1223 "tupling.m"
      MR_Word transform_hlds__tupling__V_54_54;
#line 1224 "tupling.m"
      MR_Word transform_hlds__tupling__V_22_22;
#line 1226 "tupling.m"
      MR_Word transform_hlds__tupling__V_55_55;
#line 1226 "tupling.m"
      MR_Word transform_hlds__tupling__V_56_56;
#line 1226 "tupling.m"
      MR_Word transform_hlds__tupling__V_57_57;
#line 1226 "tupling.m"
      MR_Word transform_hlds__tupling__V_58_58;
#line 1226 "tupling.m"
      MR_Word transform_hlds__tupling__V_59_59;
#line 1226 "tupling.m"
      MR_Word transform_hlds__tupling__V_60_60;
#line 1226 "tupling.m"
      MR_Word transform_hlds__tupling__V_61_61;
#line 1228 "tupling.m"
      MR_Word transform_hlds__tupling__V_28_28;
#line 1239 "tupling.m"
      MR_Word transform_hlds__tupling__V_41_41;
#line 1239 "tupling.m"
      MR_Word transform_hlds__tupling__V_29_29;
#line 1239 "tupling.m"
      MR_Word transform_hlds__tupling__V_30_30;
#line 1239 "tupling.m"
      MR_Word transform_hlds__tupling__V_31_31;

#line 1221 "tupling.m"
      (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_7, (MR_Integer) 2)));
#line 1221 "tupling.m"
      transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_7, (MR_Integer) 3)));
#line 1221 "tupling.m"
      transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_7, (MR_Integer) 4)));
#line 1221 "tupling.m"
      transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_7, (MR_Integer) 5)));
#line 1222 "tupling.m"
      transform_hlds__tupling__CellVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__CalleeTuplingProposal_10, (MR_Integer) 0)));
#line 1222 "tupling.m"
      (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__CalleeTuplingProposal_10, (MR_Integer) 1)));
#line 1222 "tupling.m"
      (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVarArgPos_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__CalleeTuplingProposal_10, (MR_Integer) 2)));
#line 1223 "tupling.m"
      transform_hlds__tupling__ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 0)));
#line 1223 "tupling.m"
      transform_hlds__tupling__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 1)));
#line 1223 "tupling.m"
      transform_hlds__tupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 2)));
#line 1223 "tupling.m"
      transform_hlds__tupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 3)));
#line 1223 "tupling.m"
      transform_hlds__tupling__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 4)));
#line 1223 "tupling.m"
      transform_hlds__tupling__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 5)));
#line 1223 "tupling.m"
      transform_hlds__tupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 6)));
#line 1223 "tupling.m"
      transform_hlds__tupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 7)));
#line 1224 "tupling.m"
      {
#line 1224 "tupling.m"
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__ModuleInfo_21, transform_hlds__tupling__CalleePredId_12, transform_hlds__tupling__CalleeProcId_13, &transform_hlds__tupling__V_22_22, &transform_hlds__tupling__CalleeProcInfo_23);
      }
#line 1226 "tupling.m"
      transform_hlds__tupling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 0)));
#line 1226 "tupling.m"
      transform_hlds__tupling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 1)));
#line 1226 "tupling.m"
      transform_hlds__tupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 2)));
#line 1226 "tupling.m"
      transform_hlds__tupling__CallingProcInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 3)));
#line 1226 "tupling.m"
      transform_hlds__tupling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 4)));
#line 1226 "tupling.m"
      transform_hlds__tupling__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 5)));
#line 1226 "tupling.m"
      transform_hlds__tupling__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 6)));
#line 1226 "tupling.m"
      transform_hlds__tupling__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 7)));
#line 1227 "tupling.m"
      {
#line 1227 "tupling.m"
        hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__CallingProcInfo_24, &transform_hlds__tupling__VarTypes_25);
      }
#line 1228 "tupling.m"
      {
#line 1228 "tupling.m"
        hlds__arg_info__partition_proc_call_args_7_p_0(transform_hlds__tupling__CalleeProcInfo_23, transform_hlds__tupling__VarTypes_25, transform_hlds__tupling__ModuleInfo_21, (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14, &(transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26, &transform_hlds__tupling__Outputs_27, &transform_hlds__tupling__V_28_28);
      }
#line 1239 "tupling.m"
      {
#line 1239 "tupling.m"
        transform_hlds__tupling__V_41_41 = transform_hlds__tupling__get_own_tupling_proposal_1_f_0(transform_hlds__tupling__CountInfo_9);
      }
#line 1239 "tupling.m"
      (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 1239 "tupling.m"
      if ((transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1239 "tupling.m"
        {
#line 1239 "tupling.m"
          transform_hlds__tupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_41_41, (MR_Integer) 0)));
#line 1239 "tupling.m"
          transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_41_41, (MR_Integer) 1)));
#line 1239 "tupling.m"
          transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_41_41, (MR_Integer) 2)));
#line 1240 "tupling.m"
          {
#line 1240 "tupling.m"
            transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_4(&transform_hlds__tupling__env);
          }
#line 1240 "tupling.m"
          (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = !((transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded);
#line 1239 "tupling.m"
        }
#line 1230 "tupling.m"
      if ((transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1252 "tupling.m"
        {
#line 1252 "tupling.m"
          {
#line 1252 "tupling.m"
            transform_hlds__tupling__cls_require_normal_var_in_reg_4_p_0(transform_hlds__tupling__CountInfo_9, transform_hlds__tupling__CellVar_18, transform_hlds__tupling__STATE_VARIABLE_CountState_0_39, &transform_hlds__tupling__STATE_VARIABLE_CountState_42_42);
          }
#line 1253 "tupling.m"
          {
#line 1253 "tupling.m"
            mercury__set__delete_list_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19, (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26, &transform_hlds__tupling__InputArgs_34);
          }
#line 1252 "tupling.m"
        }
#line 1230 "tupling.m"
      else
#line 1257 "tupling.m"
        {
#line 1257 "tupling.m"
          MR_Word transform_hlds__tupling__TuplingParams_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 5)));
#line 1257 "tupling.m"
          MR_Float transform_hlds__tupling__CellVarStoreCost_36;
#line 1257 "tupling.m"
          MR_Integer transform_hlds__tupling__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 3)));
#line 1257 "tupling.m"
          MR_Float transform_hlds__tupling__V_45_45;
#line 1257 "tupling.m"
          MR_Float transform_hlds__tupling__V_46_46;
#line 1257 "tupling.m"
          MR_Word transform_hlds__tupling__V_76_76;
#line 1257 "tupling.m"
          MR_Word transform_hlds__tupling__V_77_77;
#line 1257 "tupling.m"
          MR_Float transform_hlds__tupling__V_78_78;
#line 1257 "tupling.m"
          MR_Word transform_hlds__tupling__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 0)));
#line 1257 "tupling.m"
          MR_Word transform_hlds__tupling__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 1)));
#line 1257 "tupling.m"
          MR_Word transform_hlds__tupling__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 2)));
#line 1257 "tupling.m"
          MR_Word transform_hlds__tupling__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 3)));
#line 1257 "tupling.m"
          MR_Word transform_hlds__tupling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 4)));
#line 1257 "tupling.m"
          MR_Word transform_hlds__tupling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 6)));
#line 1257 "tupling.m"
          MR_Word transform_hlds__tupling__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 7)));
#line 1258 "tupling.m"
          MR_Integer transform_hlds__tupling__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 0)));
#line 1258 "tupling.m"
          MR_Integer transform_hlds__tupling__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 1)));
#line 1258 "tupling.m"
          MR_Integer transform_hlds__tupling__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 2)));
#line 1258 "tupling.m"
          MR_Integer transform_hlds__tupling__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 4)));
#line 1258 "tupling.m"
          MR_Integer transform_hlds__tupling__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 5)));
#line 1258 "tupling.m"
          MR_Integer transform_hlds__tupling__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 6)));
#line 1258 "tupling.m"
          MR_Integer transform_hlds__tupling__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 7)));

#line 1258 "tupling.m"
          {
#line 1258 "tupling.m"
            transform_hlds__tupling__CellVarStoreCost_36 = mercury__float__float_1_f_0(transform_hlds__tupling__V_43_43);
          }
#line 1260 "tupling.m"
          transform_hlds__tupling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_39, (MR_Integer) 0)));
#line 1260 "tupling.m"
          transform_hlds__tupling__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_39, (MR_Integer) 1)));
#line 1260 "tupling.m"
          transform_hlds__tupling__V_78_78 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_39, (MR_Integer) 2)));
#line 1260 "tupling.m"
          transform_hlds__tupling__V_46_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_39, (MR_Integer) 3)));
#line 1260 "tupling.m"
          transform_hlds__tupling__V_45_45 = (transform_hlds__tupling__V_46_46 + transform_hlds__tupling__CellVarStoreCost_36);
#line 1259 "tupling.m"
          {
#line 1259 "tupling.m"
            transform_hlds__tupling__STATE_VARIABLE_CountState_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1259 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_42_42, 0) = ((MR_Box) (transform_hlds__tupling__V_76_76));
#line 1259 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_42_42, 1) = ((MR_Box) (transform_hlds__tupling__V_77_77));
#line 1259 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_42_42, 2) = MR_box_float(transform_hlds__tupling__V_78_78);
#line 1259 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_42_42, 3) = MR_box_float(transform_hlds__tupling__V_45_45);
#line 1259 "tupling.m"
          }
#line 1261 "tupling.m"
          transform_hlds__tupling__InputArgs_34 = (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26;
#line 1257 "tupling.m"
        }
#line 1263 "tupling.m"
      {
#line 1263 "tupling.m"
        mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__InputArgs_34, &transform_hlds__tupling__Inputs_37);
      }
#line 1264 "tupling.m"
      {
#line 1264 "tupling.m"
        hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(transform_hlds__tupling__GoalInfo_8, &transform_hlds__tupling__MaybeNeedAcrossCall_38);
      }
#line 1265 "tupling.m"
      {
#line 1265 "tupling.m"
        transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(transform_hlds__tupling__CountInfo_9, transform_hlds__tupling__Inputs_37, transform_hlds__tupling__Outputs_27, transform_hlds__tupling__MaybeNeedAcrossCall_38, transform_hlds__tupling__STATE_VARIABLE_CountState_42_42, transform_hlds__tupling__STATE_VARIABLE_CountState_40);
      }
#line 1220 "tupling.m"
    }
#line 1213 "tupling.m"
  }
#line 1213 "tupling.m"
}

#line 1126 "tupling.m"
static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_2(
#line 1126 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1126 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1)
#line 1126 "tupling.m"
{
#line 1126 "tupling.m"
  {
#line 1126 "tupling.m"
    MR_Box transform_hlds__tupling__wrapper_arg_2;
#line 1126 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1126 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_HeadVar__2_2;

#line 1126 "tupling.m"
    {
#line 1126 "tupling.m"
      transform_hlds__tupling__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1));
    }
#line 1126 "tupling.m"
    transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv1_HeadVar__2_2));
#line 1126 "tupling.m"
    return transform_hlds__tupling__wrapper_arg_2;
#line 1126 "tupling.m"
  }
#line 1126 "tupling.m"
}

#line 1125 "tupling.m"
static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_1(
#line 1125 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1125 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1)
#line 1125 "tupling.m"
{
#line 1125 "tupling.m"
  {
#line 1125 "tupling.m"
    MR_Box transform_hlds__tupling__wrapper_arg_2;
#line 1125 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1125 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_HeadVar__2_2;

#line 1125 "tupling.m"
    {
#line 1125 "tupling.m"
      transform_hlds__tupling__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1));
    }
#line 1125 "tupling.m"
    transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__2_2));
#line 1125 "tupling.m"
    return transform_hlds__tupling__wrapper_arg_2;
#line 1125 "tupling.m"
  }
#line 1125 "tupling.m"
}

#line 1040 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0(
#line 1040 "tupling.m"
  MR_Word transform_hlds__tupling__Goal_5,
#line 1040 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_6,
#line 1040 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_113,
#line 1040 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_114)
#line 1040 "tupling.m"
{
#line 1043 "tupling.m"
  while (MR_TRUE)
#line 1043 "tupling.m"
    {
#line 1043 "tupling.m"
      /* tailcall optimized into a loop */
#line 1043 "tupling.m"
      {
#line 1043 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;
#line 1043 "tupling.m"
        MR_Word transform_hlds__tupling__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_5, (MR_Integer) 0)));
#line 1043 "tupling.m"
        MR_Word transform_hlds__tupling__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_5, (MR_Integer) 1)));

#line 1068 "tupling.m"
#line 1068 "tupling.m"
        switch (MR_tag((MR_Word) transform_hlds__tupling__GoalExpr_8)) {
#line 1068 "tupling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1068 "tupling.m"
          case (MR_Integer) 0:
#line 1168 "tupling.m"
            {
#line 1168 "tupling.m"
              MR_Word transform_hlds__tupling__ResumePoint_97;
#line 1168 "tupling.m"
              MR_Word transform_hlds__tupling__V_129_129;
#line 1168 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_133_133;
#line 1168 "tupling.m"
              MR_Word transform_hlds__tupling__SubGoal_188 = (MR_Word) MR_body(((MR_Word) transform_hlds__tupling__GoalExpr_8), (MR_Integer) 0);
#line 1169 "tupling.m"
              MR_Word transform_hlds__tupling__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__SubGoal_188, (MR_Integer) 0)));

#line 1169 "tupling.m"
              transform_hlds__tupling__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__SubGoal_188, (MR_Integer) 1)));
#line 1169 "tupling.m"
              {
#line 1169 "tupling.m"
                hlds__hlds_llds__goal_info_get_resume_point_2_p_0(transform_hlds__tupling__V_129_129, &transform_hlds__tupling__ResumePoint_97);
              }
#line 1173 "tupling.m"
              if ((transform_hlds__tupling__ResumePoint_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1174 "tupling.m"
                {
#line 1175 "tupling.m"
                  {
#line 1175 "tupling.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "no_resume_point for not");
#line 1175 "tupling.m"
                    return;
                  }
#line 1174 "tupling.m"
                }
#line 1173 "tupling.m"
              else
#line 1171 "tupling.m"
                {
#line 1171 "tupling.m"
                  MR_Word transform_hlds__tupling__LiveVars_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_97, (MR_Integer) 0)));
#line 1171 "tupling.m"
                  MR_Word transform_hlds__tupling___ResumeLocs_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_97, (MR_Integer) 1)));

#line 1172 "tupling.m"
                  {
#line 1172 "tupling.m"
                    transform_hlds__tupling__cls_require_flushed_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__LiveVars_98, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, &transform_hlds__tupling__STATE_VARIABLE_CountState_133_133);
                  }
#line 1171 "tupling.m"
                }
#line 1177 "tupling.m"
              /* direct tailcall eliminated */
#line 1177 "tupling.m"
              {
#line 1177 "tupling.m"
                MR_Word transform_hlds__tupling__Goal__tmp_copy_5 = transform_hlds__tupling__SubGoal_188;
#line 1177 "tupling.m"
                MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_113 = transform_hlds__tupling__STATE_VARIABLE_CountState_133_133;

#line 1177 "tupling.m"
                transform_hlds__tupling__STATE_VARIABLE_CountState_0_113 = transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_113;
#line 1177 "tupling.m"
                transform_hlds__tupling__Goal_5 = transform_hlds__tupling__Goal__tmp_copy_5;
#line 1177 "tupling.m"
              }
#line 1177 "tupling.m"
              continue;
#line 1168 "tupling.m"
            }
#line 1068 "tupling.m"
            break;
#line 1068 "tupling.m"
          case (MR_Integer) 1:
#line 1046 "tupling.m"
            {
#line 1046 "tupling.m"
              MR_Word transform_hlds__tupling__Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 3)));
#line 1046 "tupling.m"
              MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 0)));
#line 1046 "tupling.m"
              MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1046 "tupling.m"
              MR_Word transform_hlds__tupling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));
#line 1046 "tupling.m"
              MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 4)));

#line 1052 "tupling.m"
#line 1052 "tupling.m"
              switch (MR_tag((MR_Word) transform_hlds__tupling__Unification_13)) {
#line 1052 "tupling.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1052 "tupling.m"
                case (MR_Integer) 0:
#line 1049 "tupling.m"
                  {
#line 1049 "tupling.m"
                    MR_Word transform_hlds__tupling__CellVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 0)));
#line 1049 "tupling.m"
                    MR_Word transform_hlds__tupling__ArgVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 2)));
#line 1049 "tupling.m"
                    MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_168_168;
#line 1049 "tupling.m"
                    MR_Word transform_hlds__tupling__V_169_169;
#line 1048 "tupling.m"
                    MR_Word transform_hlds__tupling___ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 1)));
#line 1048 "tupling.m"
                    MR_Word transform_hlds__tupling___ArgModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 3)));
#line 1048 "tupling.m"
                    MR_Word transform_hlds__tupling___HowToConstruct_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 4)));
#line 1048 "tupling.m"
                    MR_Word transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 5)));
#line 1048 "tupling.m"
                    MR_Word transform_hlds__tupling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 6)));

#line 1050 "tupling.m"
                    {
#line 1050 "tupling.m"
                      transform_hlds__tupling__cls_require_in_regs_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__ArgVars_17, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, &transform_hlds__tupling__STATE_VARIABLE_CountState_168_168);
                    }
#line 1051 "tupling.m"
                    {
#line 1051 "tupling.m"
                      transform_hlds__tupling__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "tupling.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_169_169, 0) = ((MR_Box) (transform_hlds__tupling__CellVar_15));
#line 1051 "tupling.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_169_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1051 "tupling.m"
                    }
#line 1051 "tupling.m"
                    {
#line 1051 "tupling.m"
                      transform_hlds__tupling__cls_put_in_regs_3_p_0(transform_hlds__tupling__V_169_169, transform_hlds__tupling__STATE_VARIABLE_CountState_168_168, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                    }
#line 1049 "tupling.m"
                  }
#line 1052 "tupling.m"
                  break;
#line 1052 "tupling.m"
                case (MR_Integer) 1:
#line 1054 "tupling.m"
                  {
#line 1054 "tupling.m"
                    MR_Word transform_hlds__tupling__CellVar_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Unification_13, (MR_Integer) 0)));
#line 1054 "tupling.m"
                    MR_Word transform_hlds__tupling__ArgVars_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Unification_13, (MR_Integer) 2)));
#line 1053 "tupling.m"
                    MR_Word transform_hlds__tupling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Unification_13, (MR_Integer) 4)));
#line 1053 "tupling.m"
                    MR_Word transform_hlds__tupling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Unification_13, (MR_Integer) 5)));
#line 1053 "tupling.m"
                    MR_Word transform_hlds__tupling___ConsId_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Unification_13, (MR_Integer) 1)));
#line 1053 "tupling.m"
                    MR_Word transform_hlds__tupling___ArgModes_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Unification_13, (MR_Integer) 3)));

#line 1055 "tupling.m"
                    {
#line 1055 "tupling.m"
                      transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__CellVar_174, transform_hlds__tupling__ArgVars_176, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                    }
#line 1054 "tupling.m"
                  }
#line 1052 "tupling.m"
                  break;
#line 1052 "tupling.m"
                case (MR_Integer) 2:
#line 1058 "tupling.m"
                  {
#line 1058 "tupling.m"
                    MR_Word transform_hlds__tupling__ToVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__Unification_13, (MR_Integer) 0)));
#line 1058 "tupling.m"
                    MR_Word transform_hlds__tupling__FromVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__Unification_13, (MR_Integer) 1)));
#line 1058 "tupling.m"
                    MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_163_163;
#line 1058 "tupling.m"
                    MR_Word transform_hlds__tupling__V_164_164;

#line 1059 "tupling.m"
                    {
#line 1059 "tupling.m"
                      transform_hlds__tupling__cls_require_in_reg_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__FromVar_25, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, &transform_hlds__tupling__STATE_VARIABLE_CountState_163_163);
                    }
#line 1060 "tupling.m"
                    {
#line 1060 "tupling.m"
                      transform_hlds__tupling__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "tupling.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_164_164, 0) = ((MR_Box) (transform_hlds__tupling__ToVar_24));
#line 1060 "tupling.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "tupling.m"
                    }
#line 1060 "tupling.m"
                    {
#line 1060 "tupling.m"
                      transform_hlds__tupling__cls_put_in_regs_3_p_0(transform_hlds__tupling__V_164_164, transform_hlds__tupling__STATE_VARIABLE_CountState_163_163, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                    }
#line 1058 "tupling.m"
                  }
#line 1052 "tupling.m"
                  break;
#line 1052 "tupling.m"
                case (MR_Integer) 3:
#line 1052 "tupling.m"
#line 1052 "tupling.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Unification_13, (MR_Integer) 0)))) {
#line 1052 "tupling.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1052 "tupling.m"
                    case (MR_Integer) 0:
#line 1062 "tupling.m"
                      {
#line 1062 "tupling.m"
                        MR_Word transform_hlds__tupling__Var1_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Unification_13, (MR_Integer) 1)));
#line 1062 "tupling.m"
                        MR_Word transform_hlds__tupling__Var2_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Unification_13, (MR_Integer) 2)));
#line 1062 "tupling.m"
                        MR_Word transform_hlds__tupling__V_159_159;
#line 1062 "tupling.m"
                        MR_Word transform_hlds__tupling__V_161_161;

#line 1063 "tupling.m"
                        {
#line 1063 "tupling.m"
                          transform_hlds__tupling__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "tupling.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_161_161, 0) = ((MR_Box) (transform_hlds__tupling__Var2_27));
#line 1063 "tupling.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1063 "tupling.m"
                        }
#line 1063 "tupling.m"
                        {
#line 1063 "tupling.m"
                          transform_hlds__tupling__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "tupling.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_159_159, 0) = ((MR_Box) (transform_hlds__tupling__Var1_26));
#line 1063 "tupling.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_159_159, 1) = ((MR_Box) (transform_hlds__tupling__V_161_161));
#line 1063 "tupling.m"
                        }
#line 1063 "tupling.m"
                        {
#line 1063 "tupling.m"
                          transform_hlds__tupling__cls_require_in_regs_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__V_159_159, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                        }
#line 1062 "tupling.m"
                      }
#line 1052 "tupling.m"
                      break;
#line 1052 "tupling.m"
                    case (MR_Integer) 1:
#line 1065 "tupling.m"
                      {
#line 1066 "tupling.m"
                        {
#line 1066 "tupling.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "complicated_unify");
#line 1066 "tupling.m"
                          return;
                        }
#line 1065 "tupling.m"
                      }
#line 1052 "tupling.m"
                      break;
#line 1052 "tupling.m"
                  }
#line 1052 "tupling.m"
                  break;
#line 1052 "tupling.m"
              }
#line 1046 "tupling.m"
            }
#line 1068 "tupling.m"
            break;
#line 1068 "tupling.m"
          case (MR_Integer) 2:
#line 1069 "tupling.m"
            {
#line 1069 "tupling.m"
              MR_Word transform_hlds__tupling__PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 0)));
#line 1069 "tupling.m"
              MR_Integer transform_hlds__tupling__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1069 "tupling.m"
              MR_Word transform_hlds__tupling__Builtin_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 3)));
#line 1069 "tupling.m"
              MR_Word transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));
#line 1069 "tupling.m"
              MR_Word transform_hlds__tupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 4)));
#line 1069 "tupling.m"
              MR_Word transform_hlds__tupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 5)));
#line 1070 "tupling.m"
              MR_Word transform_hlds__tupling__TuplingProposal_37;
#line 1071 "tupling.m"
              MR_Word transform_hlds__tupling__V_153_153;
#line 1074 "tupling.m"
              MR_Word transform_hlds__tupling__V_38_38;
#line 1074 "tupling.m"
              MR_Word transform_hlds__tupling__V_39_39;
#line 1074 "tupling.m"
              MR_Word transform_hlds__tupling__V_40_40;

#line 1071 "tupling.m"
              transform_hlds__tupling__succeeded = (transform_hlds__tupling__Builtin_34 == (MR_Integer) 2);
#line 1071 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1071 "tupling.m"
                {
#line 1073 "tupling.m"
                  {
#line 1073 "tupling.m"
                    transform_hlds__tupling__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "tupling.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_153_153, 0) = ((MR_Box) (transform_hlds__tupling__PredId_31));
#line 1073 "tupling.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_153_153, 1) = ((MR_Box) (transform_hlds__tupling__ProcId_32));
#line 1073 "tupling.m"
                  }
#line 1072 "tupling.m"
                  {
#line 1072 "tupling.m"
                    transform_hlds__tupling__TuplingProposal_37 = transform_hlds__tupling__get_tupling_proposal_2_f_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__V_153_153);
                  }
#line 1074 "tupling.m"
                  transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__TuplingProposal_37)) == (MR_mktag((MR_Integer) 1)));
#line 1074 "tupling.m"
                  if (transform_hlds__tupling__succeeded)
#line 1074 "tupling.m"
                    {
#line 1074 "tupling.m"
                      transform_hlds__tupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_37, (MR_Integer) 0)));
#line 1074 "tupling.m"
                      transform_hlds__tupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_37, (MR_Integer) 1)));
#line 1074 "tupling.m"
                      transform_hlds__tupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_37, (MR_Integer) 2)));
#line 1074 "tupling.m"
                    }
#line 1071 "tupling.m"
                }
#line 1070 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1076 "tupling.m"
                {
#line 1076 "tupling.m"
                  transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0(transform_hlds__tupling__GoalExpr_8, transform_hlds__tupling__GoalInfo_9, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__TuplingProposal_37, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                }
#line 1070 "tupling.m"
              else
#line 1079 "tupling.m"
                {
#line 1079 "tupling.m"
                  transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0(transform_hlds__tupling__GoalExpr_8, transform_hlds__tupling__GoalInfo_9, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                }
#line 1069 "tupling.m"
            }
#line 1068 "tupling.m"
            break;
#line 1068 "tupling.m"
          case (MR_Integer) 3:
#line 1068 "tupling.m"
#line 1068 "tupling.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 0)))) {
#line 1068 "tupling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1068 "tupling.m"
              case (MR_Integer) 0:
#line 1084 "tupling.m"
                {
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__TypeInfo_243_243;
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__GenericCall_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__ArgModes_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 3)));
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__MaybeArgRegs_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 4)));
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__ModuleInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__ProcInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__VarTypes_47;
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__ArgTypes_48;
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__ArgRegTypes_49;
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__InputArgsR_50;
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__InputArgsF_51;
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__OutputArgsR_52;
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__OutputArgsF_53;
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__InputArgs_54;
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__OutputArgs_55;
#line 1084 "tupling.m"
                  MR_Word transform_hlds__tupling__ArgVars_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));
#line 1083 "tupling.m"
                  MR_Word transform_hlds__tupling___Detism_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 5)));
#line 1085 "tupling.m"
                  MR_Word transform_hlds__tupling__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 1085 "tupling.m"
                  MR_Word transform_hlds__tupling__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 1085 "tupling.m"
                  MR_Word transform_hlds__tupling__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 1085 "tupling.m"
                  MR_Word transform_hlds__tupling__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 1085 "tupling.m"
                  MR_Word transform_hlds__tupling__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 1085 "tupling.m"
                  MR_Word transform_hlds__tupling__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 7)));

#line 1087 "tupling.m"
                  {
#line 1087 "tupling.m"
                    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__ProcInfo_46, &transform_hlds__tupling__VarTypes_47);
                  }
#line 1088 "tupling.m"
                  {
#line 1088 "tupling.m"
                    hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__tupling__VarTypes_47, transform_hlds__tupling__ArgVars_178, &transform_hlds__tupling__ArgTypes_48);
                  }
#line 1089 "tupling.m"
                  {
#line 1089 "tupling.m"
                    hlds__arg_info__generic_call_arg_reg_types_6_p_0(transform_hlds__tupling__ModuleInfo_45, transform_hlds__tupling__VarTypes_47, transform_hlds__tupling__GenericCall_41, transform_hlds__tupling__ArgVars_178, transform_hlds__tupling__MaybeArgRegs_43, &transform_hlds__tupling__ArgRegTypes_49);
                  }
#line 1091 "tupling.m"
                  {
#line 1091 "tupling.m"
                    hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(transform_hlds__tupling__ModuleInfo_45, transform_hlds__tupling__ArgVars_178, transform_hlds__tupling__ArgModes_42, transform_hlds__tupling__ArgTypes_48, transform_hlds__tupling__ArgRegTypes_49, &transform_hlds__tupling__InputArgsR_50, &transform_hlds__tupling__InputArgsF_51, &transform_hlds__tupling__OutputArgsR_52, &transform_hlds__tupling__OutputArgsF_53);
                  }
#line 13995 "transform_hlds.tupling.c"
                  transform_hlds__tupling__TypeInfo_243_243 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 1094 "tupling.m"
                  {
#line 1094 "tupling.m"
                    transform_hlds__tupling__InputArgs_54 = mercury__list__f_43_43_2_f_0(transform_hlds__tupling__TypeInfo_243_243, transform_hlds__tupling__InputArgsR_50, transform_hlds__tupling__InputArgsF_51);
                  }
#line 1095 "tupling.m"
                  {
#line 1095 "tupling.m"
                    transform_hlds__tupling__OutputArgs_55 = mercury__list__f_43_43_2_f_0(transform_hlds__tupling__TypeInfo_243_243, transform_hlds__tupling__OutputArgsR_52, transform_hlds__tupling__OutputArgsF_53);
                  }
#line 1113 "tupling.m"
#line 1113 "tupling.m"
                  switch (MR_tag((MR_Word) transform_hlds__tupling__GenericCall_41)) {
#line 1113 "tupling.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "tupling.m"
                    case (MR_Integer) 0:
#line 1113 "tupling.m"
                    case (MR_Integer) 1:
#line 1113 "tupling.m"
                    case (MR_Integer) 2:
#line 1101 "tupling.m"
                      {
#line 1101 "tupling.m"
                        MR_Word transform_hlds__tupling__Globals_65;
#line 1101 "tupling.m"
                        MR_Word transform_hlds__tupling__GenericVarsArgInfos_67;
#line 1101 "tupling.m"
                        MR_Word transform_hlds__tupling__GenericVars_70;
#line 1101 "tupling.m"
                        MR_Word transform_hlds__tupling__Inputs_71;
#line 1101 "tupling.m"
                        MR_Word transform_hlds__tupling__Outputs_72;
#line 1101 "tupling.m"
                        MR_Word transform_hlds__tupling__MaybeNeedAcrossCall_73;
#line 1101 "tupling.m"
                        MR_Integer transform_hlds__tupling__V_150_150;
#line 1101 "tupling.m"
                        MR_Integer transform_hlds__tupling__V_151_151;
#line 1103 "tupling.m"
                        MR_Word transform_hlds__tupling__V_66_66;
#line 1103 "tupling.m"
                        MR_Integer transform_hlds__tupling__V_68_68;
#line 1103 "tupling.m"
                        MR_Word transform_hlds__tupling__V_69_69;

#line 1102 "tupling.m"
                        {
#line 1102 "tupling.m"
                          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__tupling__ModuleInfo_45, &transform_hlds__tupling__Globals_65);
                        }
#line 1104 "tupling.m"
                        {
#line 1104 "tupling.m"
                          transform_hlds__tupling__V_150_150 = mercury__list__length_1_f_0(transform_hlds__tupling__TypeInfo_243_243, transform_hlds__tupling__InputArgsR_50);
                        }
#line 1104 "tupling.m"
                        {
#line 1104 "tupling.m"
                          transform_hlds__tupling__V_151_151 = mercury__list__length_1_f_0(transform_hlds__tupling__TypeInfo_243_243, transform_hlds__tupling__InputArgsF_51);
                        }
#line 1103 "tupling.m"
                        {
#line 1103 "tupling.m"
                          ll_backend__call_gen__generic_call_info_8_p_0(transform_hlds__tupling__Globals_65, transform_hlds__tupling__GenericCall_41, transform_hlds__tupling__V_150_150, transform_hlds__tupling__V_151_151, &transform_hlds__tupling__V_66_66, &transform_hlds__tupling__GenericVarsArgInfos_67, &transform_hlds__tupling__V_68_68, &transform_hlds__tupling__V_69_69);
                        }
#line 1106 "tupling.m"
                        {
#line 1106 "tupling.m"
                          mercury__assoc_list__keys_2_p_0(transform_hlds__tupling__TypeInfo_243_243, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, transform_hlds__tupling__GenericVarsArgInfos_67, &transform_hlds__tupling__GenericVars_70);
                        }
#line 1107 "tupling.m"
                        {
#line 1107 "tupling.m"
                          mercury__list__append_3_p_1(transform_hlds__tupling__TypeInfo_243_243, transform_hlds__tupling__GenericVars_70, transform_hlds__tupling__InputArgs_54, &transform_hlds__tupling__Inputs_71);
                        }
#line 1108 "tupling.m"
                        {
#line 1108 "tupling.m"
                          transform_hlds__tupling__Outputs_72 = mercury__set__list_to_set_1_f_0(transform_hlds__tupling__TypeInfo_243_243, transform_hlds__tupling__OutputArgs_55);
                        }
#line 1109 "tupling.m"
                        {
#line 1109 "tupling.m"
                          hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(transform_hlds__tupling__GoalInfo_9, &transform_hlds__tupling__MaybeNeedAcrossCall_73);
                        }
#line 1111 "tupling.m"
                        {
#line 1111 "tupling.m"
                          transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__Inputs_71, transform_hlds__tupling__Outputs_72, transform_hlds__tupling__MaybeNeedAcrossCall_73, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                        }
#line 1101 "tupling.m"
                      }
#line 1113 "tupling.m"
                      break;
#line 1113 "tupling.m"
                    case (MR_Integer) 3:
#line 1114 "tupling.m"
                      {
#line 1114 "tupling.m"
                        MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_148_148;

#line 1116 "tupling.m"
                        {
#line 1116 "tupling.m"
                          transform_hlds__tupling__cls_require_in_regs_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__InputArgs_54, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, &transform_hlds__tupling__STATE_VARIABLE_CountState_148_148);
                        }
#line 1117 "tupling.m"
                        {
#line 1117 "tupling.m"
                          transform_hlds__tupling__cls_put_in_regs_3_p_0(transform_hlds__tupling__OutputArgs_55, transform_hlds__tupling__STATE_VARIABLE_CountState_148_148, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                        }
#line 1114 "tupling.m"
                      }
#line 1113 "tupling.m"
                      break;
#line 1113 "tupling.m"
                  }
#line 1084 "tupling.m"
                }
#line 1068 "tupling.m"
                break;
#line 1068 "tupling.m"
              case (MR_Integer) 1:
#line 1121 "tupling.m"
                {
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__TypeCtorInfo_245_245;
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__TypeInfo_246_246;
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__Args_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 4)));
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__ExtraArgs_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 5)));
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__ExtraVars_81;
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__CallingProcInfo_82;
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__InputArgVarSet_83;
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__OutputArgVarSet_84;
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__InputArgVars_86;
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__InputVars_87;
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__ArgVars_180;
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__PredId_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));
#line 1121 "tupling.m"
                  MR_Integer transform_hlds__tupling__ProcId_182 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 3)));
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__ModuleInfo_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__ProcInfo_184;
#line 1121 "tupling.m"
                  MR_Word transform_hlds__tupling__VarTypes_185;
#line 1120 "tupling.m"
                  MR_Word transform_hlds__tupling___Attributes_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1120 "tupling.m"
                  MR_Word transform_hlds__tupling___MaybeTraceRuntimeCond_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 6)));
#line 1120 "tupling.m"
                  MR_Word transform_hlds__tupling___PragmaCode_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 7)));
#line 1122 "tupling.m"
                  MR_Word transform_hlds__tupling__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 1122 "tupling.m"
                  MR_Word transform_hlds__tupling__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 1122 "tupling.m"
                  MR_Word transform_hlds__tupling__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 1122 "tupling.m"
                  MR_Word transform_hlds__tupling__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 1122 "tupling.m"
                  MR_Word transform_hlds__tupling__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 1122 "tupling.m"
                  MR_Word transform_hlds__tupling__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 1122 "tupling.m"
                  MR_Word transform_hlds__tupling__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 7)));
#line 1123 "tupling.m"
                  MR_Word transform_hlds__tupling___PredInfo_80;
#line 1127 "tupling.m"
                  MR_Word transform_hlds__tupling__V_218_218;
#line 1127 "tupling.m"
                  MR_Word transform_hlds__tupling__V_219_219;
#line 1127 "tupling.m"
                  MR_Word transform_hlds__tupling__V_220_220;
#line 1127 "tupling.m"
                  MR_Word transform_hlds__tupling__V_221_221;
#line 1127 "tupling.m"
                  MR_Word transform_hlds__tupling__V_222_222;
#line 1127 "tupling.m"
                  MR_Word transform_hlds__tupling__V_223_223;
#line 1127 "tupling.m"
                  MR_Word transform_hlds__tupling__V_224_224;
#line 1129 "tupling.m"
                  MR_Word transform_hlds__tupling__V_85_85;
#line 1133 "tupling.m"
                  MR_Word transform_hlds__tupling__MaybeNeedAcrossCall_179;
#line 1136 "tupling.m"
                  MR_Word transform_hlds__tupling__V_88_88;

#line 1123 "tupling.m"
                  {
#line 1123 "tupling.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__ModuleInfo_183, transform_hlds__tupling__PredId_181, transform_hlds__tupling__ProcId_182, &transform_hlds__tupling___PredInfo_80, &transform_hlds__tupling__ProcInfo_184);
                  }
#line 14203 "transform_hlds.tupling.c"
                  transform_hlds__tupling__TypeCtorInfo_245_245 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 14205 "transform_hlds.tupling.c"
                  transform_hlds__tupling__TypeInfo_246_246 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 1125 "tupling.m"
                  {
#line 1125 "tupling.m"
                    transform_hlds__tupling__ArgVars_180 = mercury__list__map_2_f_0(transform_hlds__tupling__TypeCtorInfo_245_245, transform_hlds__tupling__TypeInfo_246_246, (MR_Word) &transform_hlds__tupling_scalar_common_2[14], transform_hlds__tupling__Args_76);
                  }
#line 1126 "tupling.m"
                  {
#line 1126 "tupling.m"
                    transform_hlds__tupling__ExtraVars_81 = mercury__list__map_2_f_0(transform_hlds__tupling__TypeCtorInfo_245_245, transform_hlds__tupling__TypeInfo_246_246, (MR_Word) &transform_hlds__tupling_scalar_common_2[15], transform_hlds__tupling__ExtraArgs_77);
                  }
#line 1127 "tupling.m"
                  transform_hlds__tupling__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 1127 "tupling.m"
                  transform_hlds__tupling__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 1127 "tupling.m"
                  transform_hlds__tupling__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 1127 "tupling.m"
                  transform_hlds__tupling__CallingProcInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 1127 "tupling.m"
                  transform_hlds__tupling__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 1127 "tupling.m"
                  transform_hlds__tupling__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 1127 "tupling.m"
                  transform_hlds__tupling__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 1127 "tupling.m"
                  transform_hlds__tupling__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 7)));
#line 1128 "tupling.m"
                  {
#line 1128 "tupling.m"
                    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__CallingProcInfo_82, &transform_hlds__tupling__VarTypes_185);
                  }
#line 1129 "tupling.m"
                  {
#line 1129 "tupling.m"
                    hlds__arg_info__partition_proc_call_args_7_p_0(transform_hlds__tupling__ProcInfo_184, transform_hlds__tupling__VarTypes_185, transform_hlds__tupling__ModuleInfo_183, transform_hlds__tupling__ArgVars_180, &transform_hlds__tupling__InputArgVarSet_83, &transform_hlds__tupling__OutputArgVarSet_84, &transform_hlds__tupling__V_85_85);
                  }
#line 1131 "tupling.m"
                  {
#line 1131 "tupling.m"
                    mercury__set__to_sorted_list_2_p_0(transform_hlds__tupling__TypeInfo_246_246, transform_hlds__tupling__InputArgVarSet_83, &transform_hlds__tupling__InputArgVars_86);
                  }
#line 1132 "tupling.m"
                  {
#line 1132 "tupling.m"
                    mercury__list__append_3_p_1(transform_hlds__tupling__TypeInfo_246_246, transform_hlds__tupling__InputArgVars_86, transform_hlds__tupling__ExtraVars_81, &transform_hlds__tupling__InputVars_87);
                  }
#line 1134 "tupling.m"
                  {
#line 1134 "tupling.m"
                    transform_hlds__tupling__succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(transform_hlds__tupling__GoalInfo_9, &transform_hlds__tupling__MaybeNeedAcrossCall_179);
                  }
#line 1135 "tupling.m"
                  if (transform_hlds__tupling__succeeded)
#line 1135 "tupling.m"
                    {
#line 1136 "tupling.m"
                      transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__MaybeNeedAcrossCall_179)) == (MR_mktag((MR_Integer) 1)));
#line 1136 "tupling.m"
                      if (transform_hlds__tupling__succeeded)
#line 1136 "tupling.m"
                        transform_hlds__tupling__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__MaybeNeedAcrossCall_179, (MR_Integer) 0)));
#line 1135 "tupling.m"
                    }
#line 1133 "tupling.m"
                  if (transform_hlds__tupling__succeeded)
#line 1138 "tupling.m"
                    {
#line 1138 "tupling.m"
                      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__InputVars_87, transform_hlds__tupling__OutputArgVarSet_84, transform_hlds__tupling__MaybeNeedAcrossCall_179, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                    }
#line 1133 "tupling.m"
                  else
#line 1141 "tupling.m"
                    {
#line 1141 "tupling.m"
                      MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_146_146;

#line 1141 "tupling.m"
                      {
#line 1141 "tupling.m"
                        transform_hlds__tupling__cls_require_in_regs_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__InputVars_87, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, &transform_hlds__tupling__STATE_VARIABLE_CountState_146_146);
                      }
#line 1142 "tupling.m"
                      {
#line 1142 "tupling.m"
                        transform_hlds__tupling__cls_clobber_regs_3_p_0(transform_hlds__tupling__OutputArgVarSet_84, transform_hlds__tupling__STATE_VARIABLE_CountState_146_146, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                      }
#line 1141 "tupling.m"
                    }
#line 1121 "tupling.m"
                }
#line 1068 "tupling.m"
                break;
#line 1068 "tupling.m"
              case (MR_Integer) 2:
#line 1153 "tupling.m"
                {
#line 1153 "tupling.m"
                  MR_Word transform_hlds__tupling__ConjType_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1153 "tupling.m"
                  MR_Word transform_hlds__tupling__Goals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));

#line 1157 "tupling.m"
#line 1157 "tupling.m"
                  switch (transform_hlds__tupling__ConjType_92) {
#line 1157 "tupling.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1157 "tupling.m"
                    case (MR_Integer) 1:
#line 1158 "tupling.m"
                      {
#line 1159 "tupling.m"
                        {
#line 1159 "tupling.m"
                          mercury__require__sorry_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "tupling with parallel conjunctions");
#line 1159 "tupling.m"
                          return;
                        }
#line 1158 "tupling.m"
                      }
#line 1157 "tupling.m"
                      break;
#line 1157 "tupling.m"
                    case (MR_Integer) 0:
#line 1156 "tupling.m"
                      {
#line 1156 "tupling.m"
                        transform_hlds__tupling__count_load_stores_in_conj_4_p_0(transform_hlds__tupling__Goals_93, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                      }
#line 1157 "tupling.m"
                      break;
#line 1157 "tupling.m"
                  }
#line 1153 "tupling.m"
                }
#line 1068 "tupling.m"
                break;
#line 1068 "tupling.m"
              case (MR_Integer) 3:
#line 1162 "tupling.m"
                {
#line 1162 "tupling.m"
                  MR_Word transform_hlds__tupling__Goals_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));

#line 1163 "tupling.m"
                  {
#line 1163 "tupling.m"
                    transform_hlds__tupling__count_load_stores_in_disj_4_p_0(transform_hlds__tupling__Goals_187, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                  }
#line 1162 "tupling.m"
                }
#line 1068 "tupling.m"
                break;
#line 1068 "tupling.m"
              case (MR_Integer) 4:
#line 1165 "tupling.m"
                {
#line 1165 "tupling.m"
                  MR_Word transform_hlds__tupling__Cases_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 3)));
#line 1165 "tupling.m"
                  MR_Word transform_hlds__tupling___Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1165 "tupling.m"
                  MR_Word transform_hlds__tupling___Det_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));

#line 1166 "tupling.m"
                  {
#line 1166 "tupling.m"
                    transform_hlds__tupling__count_load_stores_in_cases_4_p_0(transform_hlds__tupling__Cases_96, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                  }
#line 1165 "tupling.m"
                }
#line 1068 "tupling.m"
                break;
#line 1068 "tupling.m"
              case (MR_Integer) 5:
#line 1145 "tupling.m"
                {
#line 1145 "tupling.m"
                  MR_Word transform_hlds__tupling__Reason_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1145 "tupling.m"
                  MR_Word transform_hlds__tupling__SubGoal_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));
#line 1146 "tupling.m"
                  MR_Word transform_hlds__tupling__V_141_141;
#line 1146 "tupling.m"
                  MR_Word transform_hlds__tupling__V_91_91;

#line 1146 "tupling.m"
                  transform_hlds__tupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__tupling__Reason_89)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Reason_89, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1146 "tupling.m"
                  if (transform_hlds__tupling__succeeded)
#line 1146 "tupling.m"
                    {
#line 1146 "tupling.m"
                      transform_hlds__tupling__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Reason_89, (MR_Integer) 1)));
#line 1146 "tupling.m"
                      transform_hlds__tupling__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Reason_89, (MR_Integer) 2)));
#line 1146 "tupling.m"
                      transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_141_141 == (MR_Integer) 1);
#line 1146 "tupling.m"
                    }
#line 1146 "tupling.m"
                  if (transform_hlds__tupling__succeeded)
#line 1146 "tupling.m"
                    *transform_hlds__tupling__STATE_VARIABLE_CountState_114 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_113;
#line 1146 "tupling.m"
                  else
#line 1150 "tupling.m"
                    {
#line 1150 "tupling.m"
                      /* direct tailcall eliminated */
#line 1150 "tupling.m"
                      {
#line 1150 "tupling.m"
                        MR_Word transform_hlds__tupling__Goal__tmp_copy_5 = transform_hlds__tupling__SubGoal_90;

#line 1150 "tupling.m"
                        transform_hlds__tupling__Goal_5 = transform_hlds__tupling__Goal__tmp_copy_5;
#line 1150 "tupling.m"
                      }
#line 1150 "tupling.m"
                      continue;
#line 1150 "tupling.m"
                    }
#line 1145 "tupling.m"
                }
#line 1068 "tupling.m"
                break;
#line 1068 "tupling.m"
              case (MR_Integer) 6:
#line 1179 "tupling.m"
                {
#line 1179 "tupling.m"
                  MR_Word transform_hlds__tupling__Cond_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));
#line 1179 "tupling.m"
                  MR_Word transform_hlds__tupling__Then_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 3)));
#line 1179 "tupling.m"
                  MR_Word transform_hlds__tupling__Else_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 4)));
#line 1179 "tupling.m"
                  MR_Word transform_hlds__tupling__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Cond_101, (MR_Integer) 1)));
#line 1179 "tupling.m"
                  MR_Word transform_hlds__tupling__ResumePoint_194;
#line 1179 "tupling.m"
                  MR_Word transform_hlds__tupling__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1180 "tupling.m"
                  MR_Word transform_hlds__tupling__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Cond_101, (MR_Integer) 0)));

#line 1180 "tupling.m"
                  {
#line 1180 "tupling.m"
                    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(transform_hlds__tupling__V_118_118, &transform_hlds__tupling__ResumePoint_194);
                  }
#line 1201 "tupling.m"
                  if ((transform_hlds__tupling__ResumePoint_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1202 "tupling.m"
                    {
#line 1203 "tupling.m"
                      {
#line 1203 "tupling.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "no_resume_point for if_then_else");
#line 1203 "tupling.m"
                        return;
                      }
#line 1202 "tupling.m"
                    }
#line 1201 "tupling.m"
                  else
#line 1182 "tupling.m"
                    {
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__ResetCountInfo_104;
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__ThenCountInfo_105;
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__ElseCountInfo_106;
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__ProcCounts_107;
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__ThenGoalId_108;
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__ElseGoalId_109;
#line 1182 "tupling.m"
                      MR_Float transform_hlds__tupling__ThenRelFreq_110;
#line 1182 "tupling.m"
                      MR_Float transform_hlds__tupling__ElseRelFreq_111;
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_122_122;
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_123_123;
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__V_124_124;
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__V_125_125;
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__V_126_126;
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_127_127;
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling__LiveVars_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_194, (MR_Integer) 0)));
#line 1182 "tupling.m"
                      MR_Word transform_hlds__tupling___ResumeLocs_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_194, (MR_Integer) 1)));
#line 1192 "tupling.m"
                      MR_Word transform_hlds__tupling__V_227_227;
#line 1192 "tupling.m"
                      MR_Word transform_hlds__tupling__V_228_228;
#line 1192 "tupling.m"
                      MR_Word transform_hlds__tupling__V_229_229;
#line 1192 "tupling.m"
                      MR_Word transform_hlds__tupling__V_230_230;
#line 1192 "tupling.m"
                      MR_Word transform_hlds__tupling__V_231_231;
#line 1192 "tupling.m"
                      MR_Word transform_hlds__tupling__V_232_232;
#line 1192 "tupling.m"
                      MR_Word transform_hlds__tupling__V_233_233;
#line 1193 "tupling.m"
                      MR_Word transform_hlds__tupling__V_234_234;
#line 1194 "tupling.m"
                      MR_Word transform_hlds__tupling__V_235_235;
#line 1195 "tupling.m"
                      MR_Word transform_hlds__tupling__V_236_236;
#line 1195 "tupling.m"
                      MR_Word transform_hlds__tupling__V_237_237;
#line 1195 "tupling.m"
                      MR_Word transform_hlds__tupling__V_238_238;
#line 1195 "tupling.m"
                      MR_Word transform_hlds__tupling__V_239_239;
#line 1195 "tupling.m"
                      MR_Word transform_hlds__tupling__V_240_240;
#line 1195 "tupling.m"
                      MR_Word transform_hlds__tupling__V_241_241;
#line 1195 "tupling.m"
                      MR_Word transform_hlds__tupling__V_242_242;

#line 1183 "tupling.m"
                      {
#line 1183 "tupling.m"
                        transform_hlds__tupling__cls_require_flushed_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__LiveVars_190, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, &transform_hlds__tupling__STATE_VARIABLE_CountState_122_122);
                      }
#line 1184 "tupling.m"
                      {
#line 1184 "tupling.m"
                        transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Cond_101, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__STATE_VARIABLE_CountState_122_122, &transform_hlds__tupling__STATE_VARIABLE_CountState_123_123);
                      }
#line 1186 "tupling.m"
                      {
#line 1186 "tupling.m"
                        transform_hlds__tupling__reset_count_state_counts_2_p_0(transform_hlds__tupling__STATE_VARIABLE_CountState_123_123, &transform_hlds__tupling__ResetCountInfo_104);
                      }
#line 1187 "tupling.m"
                      {
#line 1187 "tupling.m"
                        transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Then_102, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__ResetCountInfo_104, &transform_hlds__tupling__ThenCountInfo_105);
                      }
#line 1189 "tupling.m"
                      {
#line 1189 "tupling.m"
                        transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Else_103, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__ResetCountInfo_104, &transform_hlds__tupling__ElseCountInfo_106);
                      }
#line 1192 "tupling.m"
                      transform_hlds__tupling__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 1192 "tupling.m"
                      transform_hlds__tupling__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 1192 "tupling.m"
                      transform_hlds__tupling__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 1192 "tupling.m"
                      transform_hlds__tupling__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 1192 "tupling.m"
                      transform_hlds__tupling__ProcCounts_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 1192 "tupling.m"
                      transform_hlds__tupling__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 1192 "tupling.m"
                      transform_hlds__tupling__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 1192 "tupling.m"
                      transform_hlds__tupling__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 7)));
#line 1193 "tupling.m"
                      transform_hlds__tupling__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Then_102, (MR_Integer) 0)));
#line 1193 "tupling.m"
                      transform_hlds__tupling__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Then_102, (MR_Integer) 1)));
#line 1193 "tupling.m"
                      {
#line 1193 "tupling.m"
                        transform_hlds__tupling__ThenGoalId_108 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__tupling__V_124_124);
                      }
#line 1194 "tupling.m"
                      transform_hlds__tupling__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Else_103, (MR_Integer) 0)));
#line 1194 "tupling.m"
                      transform_hlds__tupling__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Else_103, (MR_Integer) 1)));
#line 1194 "tupling.m"
                      {
#line 1194 "tupling.m"
                        transform_hlds__tupling__ElseGoalId_109 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__tupling__V_125_125);
                      }
#line 1195 "tupling.m"
                      transform_hlds__tupling__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 1195 "tupling.m"
                      transform_hlds__tupling__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 1195 "tupling.m"
                      transform_hlds__tupling__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 1195 "tupling.m"
                      transform_hlds__tupling__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 1195 "tupling.m"
                      transform_hlds__tupling__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 1195 "tupling.m"
                      transform_hlds__tupling__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 1195 "tupling.m"
                      transform_hlds__tupling__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 1195 "tupling.m"
                      transform_hlds__tupling__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 7)));
#line 1195 "tupling.m"
                      {
#line 1195 "tupling.m"
                        transform_hlds__tupling__get_ite_relative_frequencies_6_p_0(transform_hlds__tupling__ProcCounts_107, transform_hlds__tupling__V_126_126, transform_hlds__tupling__ThenGoalId_108, transform_hlds__tupling__ElseGoalId_109, &transform_hlds__tupling__ThenRelFreq_110, &transform_hlds__tupling__ElseRelFreq_111);
                      }
#line 1199 "tupling.m"
                      {
#line 1199 "tupling.m"
                        transform_hlds__tupling__add_branch_costs_4_p_0(transform_hlds__tupling__ThenCountInfo_105, transform_hlds__tupling__ThenRelFreq_110, transform_hlds__tupling__STATE_VARIABLE_CountState_123_123, &transform_hlds__tupling__STATE_VARIABLE_CountState_127_127);
                      }
#line 1200 "tupling.m"
                      {
#line 1200 "tupling.m"
                        transform_hlds__tupling__add_branch_costs_4_p_0(transform_hlds__tupling__ElseCountInfo_106, transform_hlds__tupling__ElseRelFreq_111, transform_hlds__tupling__STATE_VARIABLE_CountState_127_127, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
                      }
#line 1182 "tupling.m"
                    }
#line 1179 "tupling.m"
                }
#line 1068 "tupling.m"
                break;
#line 1068 "tupling.m"
              case (MR_Integer) 7:
#line 1206 "tupling.m"
                {
#line 1208 "tupling.m"
                  {
#line 1208 "tupling.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "shorthand");
#line 1208 "tupling.m"
                    return;
                  }
#line 1206 "tupling.m"
                }
#line 1068 "tupling.m"
                break;
#line 1068 "tupling.m"
            }
#line 1068 "tupling.m"
            break;
#line 1068 "tupling.m"
        }
#line 1043 "tupling.m"
      }
#line 1043 "tupling.m"
      break;
#line 1043 "tupling.m"
    }
#line 1040 "tupling.m"
}

#line 1383 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_proc_3_p_0_1(
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1383 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1383 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1383 "tupling.m"
{
#line 1383 "tupling.m"
  {
#line 1383 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1383 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13;

#line 1383 "tupling.m"
    {
#line 1383 "tupling.m"
      transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13);
    }
#line 1383 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13));
#line 1383 "tupling.m"
  }
#line 1383 "tupling.m"
}

#line 1020 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_proc_3_p_0(
#line 1020 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_4,
#line 1020 "tupling.m"
  MR_Float * transform_hlds__tupling__Loads_5,
#line 1020 "tupling.m"
  MR_Float * transform_hlds__tupling__Stores_6)
#line 1020 "tupling.m"
{
#line 1023 "tupling.m"
  {
#line 1023 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1023 "tupling.m"
    MR_Word transform_hlds__tupling__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 0)));
#line 1023 "tupling.m"
    MR_Word transform_hlds__tupling__PredInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 2)));
#line 1023 "tupling.m"
    MR_Word transform_hlds__tupling__ProcInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 3)));
#line 1023 "tupling.m"
    MR_Word transform_hlds__tupling__InitialLiveness_10;
#line 1023 "tupling.m"
    MR_Word transform_hlds__tupling__CountState0_11;
#line 1023 "tupling.m"
    MR_Word transform_hlds__tupling__Goal_12;
#line 1023 "tupling.m"
    MR_Word transform_hlds__tupling__CountState1_13;
#line 1023 "tupling.m"
    MR_Word transform_hlds__tupling__OutputArgs_15;
#line 1023 "tupling.m"
    MR_Word transform_hlds__tupling__CountState_17;
#line 1023 "tupling.m"
    MR_Word transform_hlds__tupling__V_20_20;
#line 1023 "tupling.m"
    MR_Word transform_hlds__tupling__V_23_23;
#line 1023 "tupling.m"
    MR_Word transform_hlds__tupling__V_52_52;
#line 1024 "tupling.m"
    MR_Word transform_hlds__tupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 1)));
#line 1024 "tupling.m"
    MR_Word transform_hlds__tupling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 4)));
#line 1024 "tupling.m"
    MR_Word transform_hlds__tupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 5)));
#line 1024 "tupling.m"
    MR_Word transform_hlds__tupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 6)));
#line 1024 "tupling.m"
    MR_Word transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 7)));
#line 1031 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14;
#line 1031 "tupling.m"
    MR_Word transform_hlds__tupling__V_16_16;
#line 1383 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_CountState_17;
#line 1034 "tupling.m"
    MR_Word transform_hlds__tupling__V_18_18;
#line 1034 "tupling.m"
    MR_Word transform_hlds__tupling__V_19_19;

#line 1027 "tupling.m"
    {
#line 1027 "tupling.m"
      ll_backend__liveness__initial_liveness_4_p_0(transform_hlds__tupling__ModuleInfo_7, transform_hlds__tupling__PredInfo_8, transform_hlds__tupling__ProcInfo_9, &transform_hlds__tupling__InitialLiveness_10);
    }
#line 1028 "tupling.m"
    {
#line 1028 "tupling.m"
      transform_hlds__tupling__V_20_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 1028 "tupling.m"
    {
#line 1028 "tupling.m"
      transform_hlds__tupling__CountState0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_11, 0) = ((MR_Box) (transform_hlds__tupling__InitialLiveness_10));
#line 1028 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_11, 1) = ((MR_Box) (transform_hlds__tupling__V_20_20));
#line 1028 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_11, 2) = MR_box_float((MR_Float) 0.0000000000000000);
#line 1028 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_11, 3) = MR_box_float((MR_Float) 0.0000000000000000);
#line 1028 "tupling.m"
    }
#line 1029 "tupling.m"
    {
#line 1029 "tupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__tupling__ProcInfo_9, &transform_hlds__tupling__Goal_12);
    }
#line 1030 "tupling.m"
    {
#line 1030 "tupling.m"
      transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Goal_12, transform_hlds__tupling__CountInfo_4, transform_hlds__tupling__CountState0_11, &transform_hlds__tupling__CountState1_13);
    }
#line 1031 "tupling.m"
    {
#line 1031 "tupling.m"
      hlds__arg_info__partition_proc_args_5_p_0(transform_hlds__tupling__ProcInfo_9, transform_hlds__tupling__ModuleInfo_7, &transform_hlds__tupling__V_14_14, &transform_hlds__tupling__OutputArgs_15, &transform_hlds__tupling__V_16_16);
    }
#line 1032 "tupling.m"
    {
#line 1032 "tupling.m"
      transform_hlds__tupling__V_23_23 = mercury__set__to_sorted_list_1_f_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__OutputArgs_15);
    }
#line 1383 "tupling.m"
    {
#line 1383 "tupling.m"
      transform_hlds__tupling__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1383 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_52_52, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[5]));
#line 1383 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_52_52, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_proc_3_p_0_1));
#line 1383 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1383 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_52_52, 3) = ((MR_Box) (transform_hlds__tupling__CountInfo_4));
#line 1383 "tupling.m"
    }
#line 1383 "tupling.m"
    {
#line 1383 "tupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_52_52, transform_hlds__tupling__V_23_23, ((MR_Box) (transform_hlds__tupling__CountState1_13)), &transform_hlds__tupling__conv1_CountState_17);
    }
#line 1383 "tupling.m"
    transform_hlds__tupling__CountState_17 = ((MR_Word) transform_hlds__tupling__conv1_CountState_17);
#line 1034 "tupling.m"
    transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState_17, (MR_Integer) 0)));
#line 1034 "tupling.m"
    transform_hlds__tupling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState_17, (MR_Integer) 1)));
#line 1034 "tupling.m"
    *transform_hlds__tupling__Loads_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState_17, (MR_Integer) 2)));
#line 1034 "tupling.m"
    *transform_hlds__tupling__Stores_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState_17, (MR_Integer) 3)));
#line 1023 "tupling.m"
  }
#line 1020 "tupling.m"
}

#line 978 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(
#line 978 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_11,
#line 978 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_12,
#line 978 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_13,
#line 978 "tupling.m"
  MR_Word transform_hlds__tupling__TuplingScheme_14,
#line 978 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_15,
#line 978 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_16,
#line 978 "tupling.m"
  MR_Float transform_hlds__tupling__STATE_VARIABLE_Loads_0_34,
#line 978 "tupling.m"
  MR_Float * transform_hlds__tupling__STATE_VARIABLE_Loads_35,
#line 978 "tupling.m"
  MR_Float transform_hlds__tupling__STATE_VARIABLE_Stores_0_36,
#line 978 "tupling.m"
  MR_Float * transform_hlds__tupling__STATE_VARIABLE_Stores_37)
#line 978 "tupling.m"
{
#line 984 "tupling.m"
  {
#line 984 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 984 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_16, (MR_Integer) 0)));
#line 984 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_16, (MR_Integer) 1)));
#line 984 "tupling.m"
    MR_Word transform_hlds__tupling__PredInfo_21;
#line 984 "tupling.m"
    MR_Word transform_hlds__tupling__ProcInfo_22;
#line 984 "tupling.m"
    MR_Word transform_hlds__tupling__ProcLabel_23;
#line 984 "tupling.m"
    MR_Word transform_hlds__tupling__Context_24;
#line 984 "tupling.m"
    MR_String transform_hlds__tupling__FileName_25;
#line 984 "tupling.m"
    MR_Word transform_hlds__tupling__ProcLabelInContext_27;
#line 984 "tupling.m"
    MR_Word transform_hlds__tupling__V_38_38;
#line 984 "tupling.m"
    MR_Word transform_hlds__tupling__V_39_39;
#line 984 "tupling.m"
    MR_Word transform_hlds__tupling__V_40_40;
#line 984 "tupling.m"
    MR_String transform_hlds__tupling__V_41_41;
#line 984 "tupling.m"
    MR_Integer transform_hlds__tupling__V_42_42;
#line 984 "tupling.m"
    MR_Integer transform_hlds__tupling__V_43_43;
#line 984 "tupling.m"
    MR_Word transform_hlds__tupling__V_44_44;
#line 996 "tupling.m"
    MR_Integer transform_hlds__tupling__V_26_26;
#line 999 "tupling.m"
    MR_Word transform_hlds__tupling__ProcCounts_28;
#line 999 "tupling.m"
    MR_Word transform_hlds__tupling__V_45_45;
#line 1943 "tupling.m"
    MR_Word transform_hlds__tupling__ProcCounts_57;
#line 1943 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_ProcCounts_57;

#line 986 "tupling.m"
    {
#line 986 "tupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__ModuleInfo_13, transform_hlds__tupling__PredId_19, transform_hlds__tupling__ProcId_20, &transform_hlds__tupling__PredInfo_21, &transform_hlds__tupling__ProcInfo_22);
    }
#line 989 "tupling.m"
    {
#line 989 "tupling.m"
      transform_hlds__tupling__V_38_38 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__tupling__PredInfo_21);
    }
#line 990 "tupling.m"
    {
#line 990 "tupling.m"
      transform_hlds__tupling__V_39_39 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__tupling__PredInfo_21);
    }
#line 991 "tupling.m"
    {
#line 991 "tupling.m"
      transform_hlds__tupling__V_40_40 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__tupling__PredInfo_21);
    }
#line 992 "tupling.m"
    {
#line 992 "tupling.m"
      transform_hlds__tupling__V_41_41 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__tupling__PredInfo_21);
    }
#line 993 "tupling.m"
    {
#line 993 "tupling.m"
      transform_hlds__tupling__V_42_42 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__tupling__PredInfo_21);
    }
#line 994 "tupling.m"
    {
#line 994 "tupling.m"
      transform_hlds__tupling__V_43_43 = hlds__hlds_pred__proc_id_to_int_1_f_0(transform_hlds__tupling__ProcId_20);
    }
#line 989 "tupling.m"
    {
#line 989 "tupling.m"
      transform_hlds__tupling__ProcLabel_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 989 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabel_23, 0) = ((MR_Box) (transform_hlds__tupling__V_38_38));
#line 989 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabel_23, 1) = ((MR_Box) (transform_hlds__tupling__V_39_39));
#line 989 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabel_23, 2) = ((MR_Box) (transform_hlds__tupling__V_40_40));
#line 989 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabel_23, 3) = ((MR_Box) (transform_hlds__tupling__V_41_41));
#line 989 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabel_23, 4) = ((MR_Box) (transform_hlds__tupling__V_42_42));
#line 989 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabel_23, 5) = ((MR_Box) (transform_hlds__tupling__V_43_43));
#line 989 "tupling.m"
    }
#line 995 "tupling.m"
    {
#line 995 "tupling.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__tupling__PredInfo_21, &transform_hlds__tupling__Context_24);
    }
#line 996 "tupling.m"
    transform_hlds__tupling__FileName_25 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Context_24, (MR_Integer) 0)));
#line 996 "tupling.m"
    transform_hlds__tupling__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Context_24, (MR_Integer) 1)));
#line 997 "tupling.m"
    {
#line 997 "tupling.m"
      transform_hlds__tupling__V_44_44 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__tupling__PredInfo_21);
    }
#line 997 "tupling.m"
    {
#line 997 "tupling.m"
      transform_hlds__tupling__ProcLabelInContext_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 997 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabelInContext_27, 0) = ((MR_Box) (transform_hlds__tupling__V_44_44));
#line 997 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabelInContext_27, 1) = ((MR_Box) (transform_hlds__tupling__FileName_25));
#line 997 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabelInContext_27, 2) = ((MR_Box) (transform_hlds__tupling__ProcLabel_23));
#line 997 "tupling.m"
    }
#line 1943 "tupling.m"
    {
#line 1943 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[9], transform_hlds__tupling__TraceCounts_11, ((MR_Box) (transform_hlds__tupling__ProcLabelInContext_27)), &transform_hlds__tupling__conv0_ProcCounts_57);
    }
#line 1943 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1943 "tupling.m"
      {
#line 1943 "tupling.m"
        transform_hlds__tupling__ProcCounts_57 = ((MR_Word) transform_hlds__tupling__conv0_ProcCounts_57);
#line 1943 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 1943 "tupling.m"
      }
#line 1943 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1944 "tupling.m"
      {
#line 1944 "tupling.m"
        transform_hlds__tupling__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1944 "tupling.m"
        MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_45_45, 0) = ((MR_Box) (transform_hlds__tupling__ProcCounts_57));
#line 1944 "tupling.m"
      }
#line 1943 "tupling.m"
    else
#line 1946 "tupling.m"
      transform_hlds__tupling__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 999 "tupling.m"
    transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 999 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 999 "tupling.m"
      {
#line 999 "tupling.m"
        transform_hlds__tupling__ProcCounts_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_45_45, (MR_Integer) 0)));
#line 1000 "tupling.m"
        {
#line 1000 "tupling.m"
          MR_Word transform_hlds__tupling__ReverseGoalPathMap_29;
#line 1000 "tupling.m"
          MR_Word transform_hlds__tupling__CountInfo_30;
#line 1000 "tupling.m"
          MR_Float transform_hlds__tupling__ProcLoads_31;
#line 1000 "tupling.m"
          MR_Float transform_hlds__tupling__ProcStores_32;
#line 1000 "tupling.m"
          MR_Float transform_hlds__tupling__V_47_47;
#line 1000 "tupling.m"
          MR_Float transform_hlds__tupling__V_48_48;
#line 1000 "tupling.m"
          MR_Float transform_hlds__tupling__V_50_50;
#line 1000 "tupling.m"
          MR_Float transform_hlds__tupling__V_51_51;
#line 1000 "tupling.m"
          MR_Box transform_hlds__tupling__conv1_ReverseGoalPathMap_29;

#line 1000 "tupling.m"
          {
#line 1000 "tupling.m"
            mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[3], transform_hlds__tupling__ReverseGoalPathMapMap_15, ((MR_Box) (transform_hlds__tupling__PredProcId_16)), &transform_hlds__tupling__conv1_ReverseGoalPathMap_29);
          }
#line 1000 "tupling.m"
          transform_hlds__tupling__ReverseGoalPathMap_29 = ((MR_Word) transform_hlds__tupling__conv1_ReverseGoalPathMap_29);
#line 1001 "tupling.m"
          {
#line 1001 "tupling.m"
            transform_hlds__tupling__CountInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 0) = ((MR_Box) (transform_hlds__tupling__ModuleInfo_13));
#line 1001 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 1) = ((MR_Box) (transform_hlds__tupling__PredProcId_16));
#line 1001 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 2) = ((MR_Box) (transform_hlds__tupling__PredInfo_21));
#line 1001 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 3) = ((MR_Box) (transform_hlds__tupling__ProcInfo_22));
#line 1001 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 4) = ((MR_Box) (transform_hlds__tupling__ProcCounts_28));
#line 1001 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 5) = ((MR_Box) (transform_hlds__tupling__TuningParams_12));
#line 1001 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 6) = ((MR_Box) (transform_hlds__tupling__TuplingScheme_14));
#line 1001 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 7) = ((MR_Box) (transform_hlds__tupling__ReverseGoalPathMap_29));
#line 1001 "tupling.m"
          }
#line 1003 "tupling.m"
          {
#line 1003 "tupling.m"
            transform_hlds__tupling__count_load_stores_in_proc_3_p_0(transform_hlds__tupling__CountInfo_30, &transform_hlds__tupling__ProcLoads_31, &transform_hlds__tupling__ProcStores_32);
          }
#line 1012 "tupling.m"
          {
#line 1012 "tupling.m"
            transform_hlds__tupling__V_48_48 = mercury__float__float_1_f_0((MR_Integer) 1);
          }
#line 1012 "tupling.m"
          transform_hlds__tupling__V_47_47 = (transform_hlds__tupling__V_48_48 * transform_hlds__tupling__ProcLoads_31);
#line 1012 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_Loads_35 = (transform_hlds__tupling__STATE_VARIABLE_Loads_0_34 + transform_hlds__tupling__V_47_47);
#line 1013 "tupling.m"
          {
#line 1013 "tupling.m"
            transform_hlds__tupling__V_51_51 = mercury__float__float_1_f_0((MR_Integer) 1);
          }
#line 1013 "tupling.m"
          transform_hlds__tupling__V_50_50 = (transform_hlds__tupling__V_51_51 * transform_hlds__tupling__ProcStores_32);
#line 1013 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_Stores_37 = (transform_hlds__tupling__STATE_VARIABLE_Stores_0_36 + transform_hlds__tupling__V_50_50);
#line 1000 "tupling.m"
        }
#line 999 "tupling.m"
      }
#line 999 "tupling.m"
    else
#line 1015 "tupling.m"
      {
#line 1015 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_Stores_37 = transform_hlds__tupling__STATE_VARIABLE_Stores_0_36;
#line 1015 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_Loads_35 = transform_hlds__tupling__STATE_VARIABLE_Loads_0_34;
#line 1015 "tupling.m"
      }
#line 984 "tupling.m"
  }
#line 978 "tupling.m"
}

#line 973 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_7_p_0_1(
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 973 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 973 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5)
#line 973 "tupling.m"
{
#line 973 "tupling.m"
  {
#line 973 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 973 "tupling.m"
    MR_Float transform_hlds__tupling__conv1_STATE_VARIABLE_Loads_35;
#line 973 "tupling.m"
    MR_Float transform_hlds__tupling__conv0_STATE_VARIABLE_Stores_37;

#line 973 "tupling.m"
    {
#line 973 "tupling.m"
      transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), MR_unbox_float(transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv1_STATE_VARIABLE_Loads_35, MR_unbox_float(transform_hlds__tupling__wrapper_arg_4), &transform_hlds__tupling__conv0_STATE_VARIABLE_Stores_37);
    }
#line 973 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = MR_box_float(transform_hlds__tupling__conv1_STATE_VARIABLE_Loads_35);
#line 973 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_5 = MR_box_float(transform_hlds__tupling__conv0_STATE_VARIABLE_Stores_37);
#line 973 "tupling.m"
  }
#line 973 "tupling.m"
}

#line 965 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_7_p_0(
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_8,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_9,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_10,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__TuplingScheme_11,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_12,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_13,
#line 965 "tupling.m"
  MR_Word * transform_hlds__tupling__Costs_14)
#line 965 "tupling.m"
{
#line 971 "tupling.m"
  {
#line 971 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 971 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_26_26;
#line 971 "tupling.m"
    MR_Float transform_hlds__tupling__Loads_15;
#line 971 "tupling.m"
    MR_Float transform_hlds__tupling__Stores_16;
#line 971 "tupling.m"
    MR_Word transform_hlds__tupling__V_17_17;
#line 972 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_Loads_15;
#line 972 "tupling.m"
    MR_Box transform_hlds__tupling__conv2_Stores_16;

#line 973 "tupling.m"
    {
#line 973 "tupling.m"
      transform_hlds__tupling__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_17_17, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[1]));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_17_17, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_for_scc_7_p_0_1));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_17_17, 3) = ((MR_Box) (transform_hlds__tupling__TraceCounts_8));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_17_17, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_9));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_17_17, 5) = ((MR_Box) (transform_hlds__tupling__ModuleInfo_10));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_17_17, 6) = ((MR_Box) (transform_hlds__tupling__TuplingScheme_11));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_17_17, 7) = ((MR_Box) (transform_hlds__tupling__ReverseGoalPathMapMap_12));
#line 973 "tupling.m"
    }
#line 15212 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_26_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 972 "tupling.m"
    {
#line 972 "tupling.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__tupling__TypeCtorInfo_26_26, transform_hlds__tupling__TypeCtorInfo_26_26, transform_hlds__tupling__V_17_17, transform_hlds__tupling__PredProcIds_13, MR_box_float((MR_Float) 0.0000000000000000), &transform_hlds__tupling__conv3_Loads_15, MR_box_float((MR_Float) 0.0000000000000000), &transform_hlds__tupling__conv2_Stores_16);
    }
#line 972 "tupling.m"
    transform_hlds__tupling__Loads_15 = MR_unbox_float(transform_hlds__tupling__conv3_Loads_15);
#line 972 "tupling.m"
    transform_hlds__tupling__Stores_16 = MR_unbox_float(transform_hlds__tupling__conv2_Stores_16);
#line 976 "tupling.m"
    {
#line 976 "tupling.m"
      MR_Word base;
#line 976 "tupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 976 "tupling.m"
      *transform_hlds__tupling__Costs_14 = base;
#line 976 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(transform_hlds__tupling__Loads_15);
#line 976 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(transform_hlds__tupling__Stores_16);
#line 976 "tupling.m"
    }
#line 971 "tupling.m"
  }
#line 965 "tupling.m"
}

#line 887 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__prepare_proc_for_counting_5_p_0(
#line 887 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_6,
#line 887 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ReverseGoalPathMapMap_0_31,
#line 887 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ReverseGoalPathMapMap_32,
#line 887 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33,
#line 887 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_34)
#line 887 "tupling.m"
{
#line 892 "tupling.m"
  {
#line 892 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_48_48;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_6, (MR_Integer) 0)));
#line 892 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_6, (MR_Integer) 1)));
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__PredInfo_12;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__Markers_13;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__ArgTypes_14;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__Liveness0_15;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__Globals_16;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfoLiveness_17;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__OptNoReturnCalls_18;
#line 892 "tupling.m"
    MR_ArrayPtr transform_hlds__tupling__DummyDummyTypeArray_19;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__AllocData_20;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__ContainingGoalMap_21;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__ReverseGoalPathMap_22;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__Goal0_23;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__FailVars_25;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__NondetLiveness0_26;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__Goal_27;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_35_35;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_36_36;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_37_37;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41;
#line 892 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_43_43;
#line 907 "tupling.m"
    MR_ArrayPtr transform_hlds__tupling__conv0_DummyDummyTypeArray_19;
#line 918 "tupling.m"
    MR_Word transform_hlds__tupling___Liveness_29;
#line 918 "tupling.m"
    MR_Word transform_hlds__tupling___NondetLiveness_30;
#line 918 "tupling.m"
    MR_Box transform_hlds__tupling__conv1__OptTupleAlloc_28;

#line 895 "tupling.m"
    {
#line 895 "tupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__tupling__PredId_9, transform_hlds__tupling__ProcId_10, &transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_35_35);
    }
#line 897 "tupling.m"
    {
#line 897 "tupling.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__Markers_13);
    }
#line 898 "tupling.m"
    {
#line 898 "tupling.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__ArgTypes_14);
    }
#line 899 "tupling.m"
    {
#line 899 "tupling.m"
      hlds__arg_info__generate_proc_arg_info_5_p_0(transform_hlds__tupling__Markers_13, transform_hlds__tupling__ArgTypes_14, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_35_35, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_36_36);
    }
#line 901 "tupling.m"
    {
#line 901 "tupling.m"
      ll_backend__liveness__detect_liveness_proc_4_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__tupling__PredProcId_6, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_36_36, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_37_37);
    }
#line 902 "tupling.m"
    {
#line 902 "tupling.m"
      ll_backend__liveness__initial_liveness_4_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__tupling__PredInfo_12, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_37_37, &transform_hlds__tupling__Liveness0_15);
    }
#line 903 "tupling.m"
    {
#line 903 "tupling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, &transform_hlds__tupling__Globals_16);
    }
#line 904 "tupling.m"
    {
#line 904 "tupling.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(transform_hlds__tupling__PredInfo_12, transform_hlds__tupling__Globals_16, &transform_hlds__tupling__TypeInfoLiveness_17);
    }
#line 905 "tupling.m"
    {
#line 905 "tupling.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__tupling__Globals_16, (MR_Integer) 317, &transform_hlds__tupling__OptNoReturnCalls_18);
    }
#line 907 "tupling.m"
    {
#line 907 "tupling.m"
      mercury__array__init_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, (MR_Integer) 1, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__tupling__conv0_DummyDummyTypeArray_19);
    }
#line 907 "tupling.m"
    transform_hlds__tupling__DummyDummyTypeArray_19 = (MR_ArrayPtr) transform_hlds__tupling__conv0_DummyDummyTypeArray_19;
#line 908 "tupling.m"
    {
#line 908 "tupling.m"
      transform_hlds__tupling__AllocData_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 908 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__AllocData_20, 0) = ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33));
#line 908 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__AllocData_20, 1) = ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ProcInfo_37_37));
#line 908 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__AllocData_20, 2) = ((MR_Box) (transform_hlds__tupling__PredProcId_6));
#line 908 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__AllocData_20, 3) = ((MR_Box) (transform_hlds__tupling__TypeInfoLiveness_17));
#line 908 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__AllocData_20, 4) = ((MR_Box) (transform_hlds__tupling__OptNoReturnCalls_18));
#line 908 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__AllocData_20, 5) = ((MR_Box) (transform_hlds__tupling__DummyDummyTypeArray_19));
#line 908 "tupling.m"
    }
#line 910 "tupling.m"
    {
#line 910 "tupling.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, &transform_hlds__tupling__ContainingGoalMap_21, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_37_37, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41);
    }
#line 911 "tupling.m"
    {
#line 911 "tupling.m"
      transform_hlds__tupling__ReverseGoalPathMap_22 = mdbcomp__goal_path__create_reverse_goal_path_map_1_f_0(transform_hlds__tupling__ContainingGoalMap_21);
    }
#line 912 "tupling.m"
    {
#line 912 "tupling.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[3], ((MR_Box) (transform_hlds__tupling__PredProcId_6)), ((MR_Box) (transform_hlds__tupling__ReverseGoalPathMap_22)), transform_hlds__tupling__STATE_VARIABLE_ReverseGoalPathMapMap_0_31, transform_hlds__tupling__STATE_VARIABLE_ReverseGoalPathMapMap_32);
    }
#line 914 "tupling.m"
    {
#line 914 "tupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__tupling__Goal0_23);
    }
#line 915 "tupling.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 15408 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 916 "tupling.m"
    {
#line 916 "tupling.m"
      transform_hlds__tupling__FailVars_25 = parse_tree__set_of_var__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_48_48);
    }
#line 917 "tupling.m"
    {
#line 917 "tupling.m"
      transform_hlds__tupling__NondetLiveness0_26 = parse_tree__set_of_var__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_48_48);
    }
#line 918 "tupling.m"
    {
#line 918 "tupling.m"
      ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[5], transform_hlds__tupling__Goal0_23, &transform_hlds__tupling__Goal_27, transform_hlds__tupling__FailVars_25, transform_hlds__tupling__AllocData_20, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__tupling__conv1__OptTupleAlloc_28, transform_hlds__tupling__Liveness0_15, &transform_hlds__tupling___Liveness_29, transform_hlds__tupling__NondetLiveness0_26, &transform_hlds__tupling___NondetLiveness_30);
    }
#line 921 "tupling.m"
    {
#line 921 "tupling.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__tupling__Goal_27, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_43_43);
    }
#line 923 "tupling.m"
    {
#line 923 "tupling.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__tupling__PredId_9, transform_hlds__tupling__ProcId_10, transform_hlds__tupling__PredInfo_12, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_43_43, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_34);
    }
#line 892 "tupling.m"
  }
#line 887 "tupling.m"
}

#line 877 "tupling.m"
static MR_Word MR_CALL 
transform_hlds__tupling__get_own_tupling_proposal_1_f_0(
#line 877 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_3)
#line 877 "tupling.m"
{
#line 879 "tupling.m"
  {
#line 879 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__HeadVar__2_2;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 1)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 0)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 2)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 3)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 4)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 5)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 6)));
#line 880 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 7)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__Probe_15;
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 6)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 0)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 1)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 2)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 3)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 4)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 5)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 7)));
#line 871 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_Probe_15;

#line 871 "tupling.m"
    {
#line 871 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_16_16, ((MR_Box) (transform_hlds__tupling__V_4_4)), &transform_hlds__tupling__conv0_Probe_15);
    }
#line 871 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 871 "tupling.m"
      {
#line 871 "tupling.m"
        transform_hlds__tupling__Probe_15 = ((MR_Word) transform_hlds__tupling__conv0_Probe_15);
#line 871 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 871 "tupling.m"
      }
#line 871 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 872 "tupling.m"
      transform_hlds__tupling__HeadVar__2_2 = transform_hlds__tupling__Probe_15;
#line 871 "tupling.m"
    else
#line 874 "tupling.m"
      transform_hlds__tupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "tupling.m"
    return transform_hlds__tupling__HeadVar__2_2;
#line 879 "tupling.m"
  }
#line 877 "tupling.m"
}

#line 867 "tupling.m"
static MR_Word MR_CALL 
transform_hlds__tupling__get_tupling_proposal_2_f_0(
#line 867 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_4,
#line 867 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_5)
#line 867 "tupling.m"
{
#line 871 "tupling.m"
  {
#line 871 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__TuplingProposal_6;
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__Probe_7;
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 6)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 0)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 1)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 2)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 3)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 4)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 5)));
#line 871 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 7)));
#line 871 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_Probe_7;

#line 871 "tupling.m"
    {
#line 871 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_8_8, ((MR_Box) (transform_hlds__tupling__PredProcId_5)), &transform_hlds__tupling__conv0_Probe_7);
    }
#line 871 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 871 "tupling.m"
      {
#line 871 "tupling.m"
        transform_hlds__tupling__Probe_7 = ((MR_Word) transform_hlds__tupling__conv0_Probe_7);
#line 871 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 871 "tupling.m"
      }
#line 871 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 872 "tupling.m"
      transform_hlds__tupling__TuplingProposal_6 = transform_hlds__tupling__Probe_7;
#line 871 "tupling.m"
    else
#line 874 "tupling.m"
      transform_hlds__tupling__TuplingProposal_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "tupling.m"
    return transform_hlds__tupling__TuplingProposal_6;
#line 871 "tupling.m"
  }
#line 867 "tupling.m"
}

#line 765 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__create_aux_pred_9_p_0(
#line 765 "tupling.m"
  MR_Word transform_hlds__tupling__PredId_10,
#line 765 "tupling.m"
  MR_Integer transform_hlds__tupling__ProcId_11,
#line 765 "tupling.m"
  MR_Word transform_hlds__tupling__PredInfo_12,
#line 765 "tupling.m"
  MR_Word transform_hlds__tupling__ProcInfo_13,
#line 765 "tupling.m"
  MR_Integer transform_hlds__tupling__Counter_14,
#line 765 "tupling.m"
  MR_Word * transform_hlds__tupling__AuxPredProcId_15,
#line 765 "tupling.m"
  MR_Word * transform_hlds__tupling__CallAux_16,
#line 765 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo0_17,
#line 765 "tupling.m"
  MR_Word * transform_hlds__tupling__ModuleInfo_18)
#line 765 "tupling.m"
{
#line 770 "tupling.m"
  {
#line 770 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__AuxHeadVars_19;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__Goal_20;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__GoalInfo_22;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__InitialAuxInstMap_23;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__TVarSet_24;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes_25;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__ClassContext_26;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__RttiVarMaps_27;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__VarSet_28;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__InstVarSet_29;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__Markers_30;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__OrigOrigin_31;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__HasParallelConj_32;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__VarNameRemap_33;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__PredModule_34;
#line 770 "tupling.m"
    MR_String transform_hlds__tupling__PredName_35;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__PredOrFunc_36;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__Context_37;
#line 770 "tupling.m"
    MR_Integer transform_hlds__tupling__Line_38;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__AuxPredSymName0_39;
#line 770 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcNo_40;
#line 770 "tupling.m"
    MR_String transform_hlds__tupling__Suffix_41;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__AuxPredSymName_42;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__Origin_43;
#line 770 "tupling.m"
    MR_Word transform_hlds__tupling__V_51_51;
#line 770 "tupling.m"
    MR_String transform_hlds__tupling__V_53_53;
#line 772 "tupling.m"
    MR_Word transform_hlds__tupling___GoalExpr_21;
#line 798 "tupling.m"
    MR_Word transform_hlds__tupling___ExtraArgs_44;

#line 771 "tupling.m"
    {
#line 771 "tupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__AuxHeadVars_19);
    }
#line 772 "tupling.m"
    {
#line 772 "tupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__Goal_20);
    }
#line 772 "tupling.m"
    transform_hlds__tupling___GoalExpr_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_20, (MR_Integer) 0)));
#line 772 "tupling.m"
    transform_hlds__tupling__GoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_20, (MR_Integer) 1)));
#line 773 "tupling.m"
    {
#line 773 "tupling.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__tupling__ProcInfo_13, transform_hlds__tupling__ModuleInfo0_17, &transform_hlds__tupling__InitialAuxInstMap_23);
    }
#line 775 "tupling.m"
    {
#line 775 "tupling.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__TVarSet_24);
    }
#line 776 "tupling.m"
    {
#line 776 "tupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__VarTypes_25);
    }
#line 777 "tupling.m"
    {
#line 777 "tupling.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__ClassContext_26);
    }
#line 778 "tupling.m"
    {
#line 778 "tupling.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__RttiVarMaps_27);
    }
#line 779 "tupling.m"
    {
#line 779 "tupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__VarSet_28);
    }
#line 780 "tupling.m"
    {
#line 780 "tupling.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__InstVarSet_29);
    }
#line 781 "tupling.m"
    {
#line 781 "tupling.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__Markers_30);
    }
#line 782 "tupling.m"
    {
#line 782 "tupling.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__OrigOrigin_31);
    }
#line 783 "tupling.m"
    {
#line 783 "tupling.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__HasParallelConj_32);
    }
#line 784 "tupling.m"
    {
#line 784 "tupling.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__VarNameRemap_33);
    }
#line 786 "tupling.m"
    {
#line 786 "tupling.m"
      transform_hlds__tupling__PredModule_34 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__tupling__PredInfo_12);
    }
#line 787 "tupling.m"
    {
#line 787 "tupling.m"
      transform_hlds__tupling__PredName_35 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__tupling__PredInfo_12);
    }
#line 788 "tupling.m"
    {
#line 788 "tupling.m"
      transform_hlds__tupling__PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__tupling__PredInfo_12);
    }
#line 789 "tupling.m"
    {
#line 789 "tupling.m"
      transform_hlds__tupling__Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__tupling__GoalInfo_22);
    }
#line 790 "tupling.m"
    {
#line 790 "tupling.m"
      mercury__term__context_line_2_p_0(transform_hlds__tupling__Context_37, &transform_hlds__tupling__Line_38);
    }
#line 791 "tupling.m"
    {
#line 791 "tupling.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__tupling__PredModule_34, (MR_String) "tupling", transform_hlds__tupling__PredOrFunc_36, transform_hlds__tupling__PredName_35, transform_hlds__tupling__Line_38, transform_hlds__tupling__Counter_14, &transform_hlds__tupling__AuxPredSymName0_39);
    }
#line 793 "tupling.m"
    {
#line 793 "tupling.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__tupling__ProcId_11, &transform_hlds__tupling__ProcNo_40);
    }
#line 794 "tupling.m"
    {
#line 794 "tupling.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_3[0], transform_hlds__tupling__ProcNo_40, &transform_hlds__tupling__V_53_53);
    }
#line 794 "tupling.m"
    {
#line 794 "tupling.m"
      transform_hlds__tupling__Suffix_41 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__tupling__V_53_53);
    }
#line 795 "tupling.m"
    {
#line 795 "tupling.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__tupling__AuxPredSymName0_39, transform_hlds__tupling__Suffix_41, &transform_hlds__tupling__AuxPredSymName_42);
    }
#line 797 "tupling.m"
    {
#line 797 "tupling.m"
      transform_hlds__tupling__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "tupling.m"
      MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 797 "tupling.m"
      MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_51_51, 1) = ((MR_Box) (transform_hlds__tupling__ProcNo_40));
#line 797 "tupling.m"
    }
#line 797 "tupling.m"
    {
#line 797 "tupling.m"
      transform_hlds__tupling__Origin_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 797 "tupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__tupling__Origin_43, 0) = ((MR_Box) (transform_hlds__tupling__V_51_51));
#line 797 "tupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__tupling__Origin_43, 1) = ((MR_Box) (transform_hlds__tupling__OrigOrigin_31));
#line 797 "tupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__tupling__Origin_43, 2) = ((MR_Box) (transform_hlds__tupling__PredId_10));
#line 797 "tupling.m"
    }
#line 798 "tupling.m"
    {
#line 798 "tupling.m"
      hlds__hlds_pred__define_new_pred_20_p_0(transform_hlds__tupling__Origin_43, transform_hlds__tupling__Goal_20, transform_hlds__tupling__CallAux_16, transform_hlds__tupling__AuxHeadVars_19, &transform_hlds__tupling___ExtraArgs_44, transform_hlds__tupling__InitialAuxInstMap_23, transform_hlds__tupling__AuxPredSymName_42, transform_hlds__tupling__TVarSet_24, transform_hlds__tupling__VarTypes_25, transform_hlds__tupling__ClassContext_26, transform_hlds__tupling__RttiVarMaps_27, transform_hlds__tupling__VarSet_28, transform_hlds__tupling__InstVarSet_29, transform_hlds__tupling__Markers_30, (MR_Integer) 1, transform_hlds__tupling__HasParallelConj_32, transform_hlds__tupling__VarNameRemap_33, transform_hlds__tupling__ModuleInfo0_17, transform_hlds__tupling__ModuleInfo_18, transform_hlds__tupling__AuxPredProcId_15);
    }
#line 770 "tupling.m"
  }
#line 765 "tupling.m"
}

#line 697 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0_1(
#line 697 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 697 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 697 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 697 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 697 "tupling.m"
{
#line 697 "tupling.m"
  {
#line 697 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 697 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 697 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_LambdaHeadVar__3_39;

#line 697 "tupling.m"
    {
#line 697 "tupling.m"
      transform_hlds__tupling__succeeded = transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__697__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_LambdaHeadVar__3_39);
    }
#line 697 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 697 "tupling.m"
      {
#line 697 "tupling.m"
        *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_LambdaHeadVar__3_39));
#line 697 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 697 "tupling.m"
      }
#line 697 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 697 "tupling.m"
  }
#line 697 "tupling.m"
}

#line 690 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0(
#line 690 "tupling.m"
  MR_Word transform_hlds__tupling__CellVar_6,
#line 690 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVarsList_7,
#line 690 "tupling.m"
  MR_Word transform_hlds__tupling__InsertMap_8,
#line 690 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_0_34,
#line 690 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ProcInfo_35)
#line 690 "tupling.m"
{
#line 693 "tupling.m"
  {
#line 693 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_60_60;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_61_61;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_64_64;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_29_85;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__HeadVars0_10;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__ArgModes0_11;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__HeadVarsAndModes_12;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__HeadVars_15;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__ArgModes_16;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__Goal0_17;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes0_18;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__VarSet0_19;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__Goal1_21;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__VarSet1_22;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes1_23;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__RenameMapA_24;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__ProcStartDeconstruct_25;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__ProcStartInsert_26;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__Goal2_27;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__VarSet_28;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes_29;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__RenameMapB_30;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__Goal3_31;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__RenameMap_32;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__Goal_33;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__V_36_36;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__V_40_40;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__V_42_42;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__V_44_44;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_45_45;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__V_46_46;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__V_47_47;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__V_50_50;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__V_51_51;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__V_52_52;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_53_53;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_55_55;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__InsertGoal_75;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__GoalInfo_77;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__V_80_80;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__V_82_82;
#line 693 "tupling.m"
    MR_Word transform_hlds__tupling__V_83_83;
#line 750 "tupling.m"
    MR_Word transform_hlds__tupling__V_76_76;

#line 695 "tupling.m"
    {
#line 695 "tupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__tupling__HeadVars0_10);
    }
#line 696 "tupling.m"
    {
#line 696 "tupling.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__tupling__ArgModes0_11);
    }
#line 15985 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeInfo_60_60 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 15987 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 697 "tupling.m"
    {
#line 697 "tupling.m"
      transform_hlds__tupling__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 697 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_36_36, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[4]));
#line 697 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_36_36, 1) = ((MR_Box) (transform_hlds__tupling__make_transformed_proc_5_p_0_1));
#line 697 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 697 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_36_36, 3) = ((MR_Box) (transform_hlds__tupling__FieldVarsList_7));
#line 697 "tupling.m"
    }
#line 697 "tupling.m"
    {
#line 697 "tupling.m"
      transform_hlds__tupling__HeadVarsAndModes_12 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__tupling__TypeInfo_60_60, transform_hlds__tupling__TypeCtorInfo_61_61, (MR_Word) &transform_hlds__tupling_scalar_common_2[7], transform_hlds__tupling__V_36_36, transform_hlds__tupling__HeadVars0_10, transform_hlds__tupling__ArgModes0_11);
    }
#line 701 "tupling.m"
    {
#line 701 "tupling.m"
      mercury__assoc_list__keys_and_values_3_p_0(transform_hlds__tupling__TypeInfo_60_60, transform_hlds__tupling__TypeCtorInfo_61_61, transform_hlds__tupling__HeadVarsAndModes_12, &transform_hlds__tupling__HeadVars_15, &transform_hlds__tupling__ArgModes_16);
    }
#line 702 "tupling.m"
    {
#line 702 "tupling.m"
      transform_hlds__tupling__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_42_42, 0) = ((MR_Box) (transform_hlds__tupling__CellVar_6));
#line 702 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "tupling.m"
    }
#line 702 "tupling.m"
    {
#line 702 "tupling.m"
      transform_hlds__tupling__V_40_40 = mercury__list__f_43_43_2_f_0(transform_hlds__tupling__TypeInfo_60_60, transform_hlds__tupling__HeadVars_15, transform_hlds__tupling__V_42_42);
    }
#line 702 "tupling.m"
    {
#line 702 "tupling.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__tupling__V_40_40, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41);
    }
#line 703 "tupling.m"
    {
#line 703 "tupling.m"
      transform_hlds__tupling__V_47_47 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 703 "tupling.m"
    {
#line 703 "tupling.m"
      transform_hlds__tupling__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_46_46, 0) = ((MR_Box) (transform_hlds__tupling__V_47_47));
#line 703 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "tupling.m"
    }
#line 703 "tupling.m"
    {
#line 703 "tupling.m"
      transform_hlds__tupling__V_44_44 = mercury__list__f_43_43_2_f_0(transform_hlds__tupling__TypeCtorInfo_61_61, transform_hlds__tupling__ArgModes_16, transform_hlds__tupling__V_46_46);
    }
#line 703 "tupling.m"
    {
#line 703 "tupling.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__tupling__V_44_44, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_45_45);
    }
#line 706 "tupling.m"
    {
#line 706 "tupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__tupling__Goal0_17);
    }
#line 707 "tupling.m"
    {
#line 707 "tupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__tupling__VarTypes0_18);
    }
#line 708 "tupling.m"
    {
#line 708 "tupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__tupling__VarSet0_19);
    }
#line 712 "tupling.m"
    {
#line 712 "tupling.m"
      transform_hlds__tupling__V_50_50 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeInfo_60_60, transform_hlds__tupling__TypeInfo_60_60);
    }
#line 711 "tupling.m"
    {
#line 711 "tupling.m"
      backend_libs__interval__record_decisions_in_goal_10_p_0(transform_hlds__tupling__Goal0_17, &transform_hlds__tupling__Goal1_21, transform_hlds__tupling__VarSet0_19, &transform_hlds__tupling__VarSet1_22, transform_hlds__tupling__VarTypes0_18, &transform_hlds__tupling__VarTypes1_23, transform_hlds__tupling__V_50_50, &transform_hlds__tupling__RenameMapA_24, transform_hlds__tupling__InsertMap_8, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__tupling_scalar_common_3[3]));
    }
#line 725 "tupling.m"
    {
#line 725 "tupling.m"
      hlds__make_goal__deconstruct_tuple_3_p_0(transform_hlds__tupling__CellVar_6, transform_hlds__tupling__FieldVarsList_7, &transform_hlds__tupling__ProcStartDeconstruct_25);
    }
#line 16088 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 727 "tupling.m"
    {
#line 727 "tupling.m"
      transform_hlds__tupling__V_51_51 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__tupling__TypeCtorInfo_64_64, transform_hlds__tupling__FieldVarsList_7);
    }
#line 726 "tupling.m"
    {
#line 726 "tupling.m"
      transform_hlds__tupling__ProcStartInsert_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 726 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcStartInsert_26, 0) = ((MR_Box) (transform_hlds__tupling__ProcStartDeconstruct_25));
#line 726 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcStartInsert_26, 1) = ((MR_Box) (transform_hlds__tupling__V_51_51));
#line 726 "tupling.m"
    }
#line 16105 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeInfo_29_85 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 748 "tupling.m"
    {
#line 748 "tupling.m"
      transform_hlds__tupling__V_80_80 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeInfo_29_85, transform_hlds__tupling__TypeInfo_29_85);
    }
#line 748 "tupling.m"
    {
#line 748 "tupling.m"
      backend_libs__interval__make_inserted_goal_9_p_0(transform_hlds__tupling__VarSet1_22, &transform_hlds__tupling__VarSet_28, transform_hlds__tupling__VarTypes1_23, &transform_hlds__tupling__VarTypes_29, transform_hlds__tupling__V_80_80, &transform_hlds__tupling__RenameMapB_30, transform_hlds__tupling__ProcStartInsert_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__tupling__InsertGoal_75);
    }
#line 750 "tupling.m"
    transform_hlds__tupling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal1_21, (MR_Integer) 0)));
#line 750 "tupling.m"
    transform_hlds__tupling__GoalInfo_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal1_21, (MR_Integer) 1)));
#line 751 "tupling.m"
    {
#line 751 "tupling.m"
      transform_hlds__tupling__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_83_83, 0) = ((MR_Box) (transform_hlds__tupling__Goal1_21));
#line 751 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 751 "tupling.m"
    }
#line 751 "tupling.m"
    {
#line 751 "tupling.m"
      transform_hlds__tupling__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_82_82, 0) = ((MR_Box) (transform_hlds__tupling__InsertGoal_75));
#line 751 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_82_82, 1) = ((MR_Box) (transform_hlds__tupling__V_83_83));
#line 751 "tupling.m"
    }
#line 751 "tupling.m"
    {
#line 751 "tupling.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__tupling__V_82_82, transform_hlds__tupling__GoalInfo_77, &transform_hlds__tupling__Goal2_27);
    }
#line 730 "tupling.m"
    {
#line 730 "tupling.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__tupling__RenameMapB_30, transform_hlds__tupling__Goal2_27, &transform_hlds__tupling__Goal3_31);
    }
#line 732 "tupling.m"
    {
#line 732 "tupling.m"
      mercury__map__old_merge_3_p_0(transform_hlds__tupling__TypeInfo_60_60, transform_hlds__tupling__TypeInfo_60_60, transform_hlds__tupling__RenameMapA_24, transform_hlds__tupling__RenameMapB_30, &transform_hlds__tupling__RenameMap_32);
    }
#line 733 "tupling.m"
    {
#line 733 "tupling.m"
      transform_hlds__tupling__V_52_52 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__tupling__TypeCtorInfo_64_64, transform_hlds__tupling__HeadVars_15);
    }
#line 733 "tupling.m"
    {
#line 733 "tupling.m"
      backend_libs__interval__apply_headvar_correction_4_p_0(transform_hlds__tupling__V_52_52, transform_hlds__tupling__RenameMap_32, transform_hlds__tupling__Goal3_31, &transform_hlds__tupling__Goal_33);
    }
#line 735 "tupling.m"
    {
#line 735 "tupling.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__tupling__Goal_33, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_53_53);
    }
#line 736 "tupling.m"
    {
#line 736 "tupling.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__tupling__VarSet_28, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54);
    }
#line 737 "tupling.m"
    {
#line 737 "tupling.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__tupling__VarTypes_29, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_55_55);
    }
#line 738 "tupling.m"
    {
#line 738 "tupling.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_55_55, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_35);
    }
#line 693 "tupling.m"
  }
#line 690 "tupling.m"
}

#line 667 "tupling.m"
static MR_Box MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0_1(
#line 667 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 667 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1)
#line 667 "tupling.m"
{
#line 667 "tupling.m"
  {
#line 667 "tupling.m"
    MR_Box transform_hlds__tupling__wrapper_arg_2;
#line 667 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 667 "tupling.m"
    MR_Integer transform_hlds__tupling__conv0_HeadVar__3_67;

#line 667 "tupling.m"
    {
#line 667 "tupling.m"
      transform_hlds__tupling__conv0_HeadVar__3_67 = transform_hlds__tupling__IntroducedFrom__func__add_transformed_proc__667__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1));
    }
#line 667 "tupling.m"
    transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__3_67));
#line 667 "tupling.m"
    return transform_hlds__tupling__wrapper_arg_2;
#line 667 "tupling.m"
  }
#line 667 "tupling.m"
}

#line 639 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0(
#line 639 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_1,
#line 639 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 639 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_3,
#line 639 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_4,
#line 639 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 639 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__6_6,
#line 639 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__7_7,
#line 639 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__8_8)
#line 639 "tupling.m"
{
#line 643 "tupling.m"
  {
#line 643 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 643 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "tupling.m"
      {
#line 643 "tupling.m"
        *transform_hlds__tupling__HeadVar__8_8 = transform_hlds__tupling__HeadVar__7_7;
#line 643 "tupling.m"
        *transform_hlds__tupling__HeadVar__6_6 = transform_hlds__tupling__HeadVar__5_5;
#line 643 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_3;
#line 643 "tupling.m"
      }
#line 643 "tupling.m"
    else
#line 645 "tupling.m"
      {
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_64_64;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__FieldVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__PredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_1, (MR_Integer) 0)));
#line 645 "tupling.m"
        MR_Integer transform_hlds__tupling__ProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_1, (MR_Integer) 1)));
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__PredInfo_29;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__IntervalInfo_30;
#line 645 "tupling.m"
        MR_Integer transform_hlds__tupling__TupleArity_31;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__VarTypes_32;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__TupleArgTypes_33;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__TupleConsType_34;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__CellVar_35;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__HeadVars_36;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__ArgsToTuple_37;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__InsertMap_38;
#line 645 "tupling.m"
        MR_Integer transform_hlds__tupling__Num_39;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__AuxPredProcId_40;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__CallAux_41;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__TransformedProc_42;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_49_49;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__V_50_50;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__V_56_56;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_57_57;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_59_59;
#line 645 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_60_60;
#line 644 "tupling.m"
        MR_Word transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 644 "tupling.m"
        MR_Word transform_hlds__tupling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));

#line 648 "tupling.m"
        {
#line 648 "tupling.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_3, transform_hlds__tupling__PredId_26, transform_hlds__tupling__ProcId_27, &transform_hlds__tupling__PredInfo_29, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_49_49);
        }
#line 653 "tupling.m"
        {
#line 653 "tupling.m"
          transform_hlds__tupling__build_interval_info_3_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_3, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_49_49, &transform_hlds__tupling__IntervalInfo_30);
        }
#line 16330 "transform_hlds.tupling.c"
        transform_hlds__tupling__TypeInfo_64_64 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 656 "tupling.m"
        {
#line 656 "tupling.m"
          mercury__list__length_2_p_0(transform_hlds__tupling__TypeInfo_64_64, transform_hlds__tupling__FieldVars_21, &transform_hlds__tupling__TupleArity_31);
        }
#line 657 "tupling.m"
        {
#line 657 "tupling.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_49_49, &transform_hlds__tupling__VarTypes_32);
        }
#line 658 "tupling.m"
        {
#line 658 "tupling.m"
          hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__tupling__VarTypes_32, transform_hlds__tupling__FieldVars_21, &transform_hlds__tupling__TupleArgTypes_33);
        }
#line 659 "tupling.m"
        {
#line 659 "tupling.m"
          transform_hlds__tupling__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 659 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_3[1]));
#line 659 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 1) = ((MR_Box) (transform_hlds__tupling__TupleArity_31));
#line 659 "tupling.m"
        }
#line 659 "tupling.m"
        {
#line 659 "tupling.m"
          parse_tree__prog_type__construct_type_3_p_0(transform_hlds__tupling__V_50_50, transform_hlds__tupling__TupleArgTypes_33, &transform_hlds__tupling__TupleConsType_34);
        }
#line 661 "tupling.m"
        {
#line 661 "tupling.m"
          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__tupling__TupleConsType_34, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__tupling_scalar_common_3[2]), &transform_hlds__tupling__CellVar_35, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_49_49, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54);
        }
#line 665 "tupling.m"
        {
#line 665 "tupling.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__tupling__HeadVars_36);
        }
#line 667 "tupling.m"
        {
#line 667 "tupling.m"
          transform_hlds__tupling__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 667 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_56_56, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_7[2]));
#line 667 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_56_56, 1) = ((MR_Box) (transform_hlds__tupling__add_transformed_proc_8_p_0_1));
#line 667 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 667 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_56_56, 3) = ((MR_Box) (transform_hlds__tupling__HeadVars_36));
#line 667 "tupling.m"
        }
#line 667 "tupling.m"
        {
#line 667 "tupling.m"
          transform_hlds__tupling__ArgsToTuple_37 = mercury__list__map_2_f_0(transform_hlds__tupling__TypeInfo_64_64, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__tupling__V_56_56, transform_hlds__tupling__FieldVars_21);
        }
#line 671 "tupling.m"
        {
#line 671 "tupling.m"
          transform_hlds__tupling__build_insert_map_4_p_0(transform_hlds__tupling__CellVar_35, transform_hlds__tupling__FieldVars_21, transform_hlds__tupling__IntervalInfo_30, &transform_hlds__tupling__InsertMap_38);
        }
#line 675 "tupling.m"
        {
#line 675 "tupling.m"
          transform_hlds__tupling__make_transformed_proc_5_p_0(transform_hlds__tupling__CellVar_35, transform_hlds__tupling__FieldVars_21, transform_hlds__tupling__InsertMap_38, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_57_57);
        }
#line 676 "tupling.m"
        {
#line 676 "tupling.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_59_59, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_60_60);
        }
#line 678 "tupling.m"
        {
#line 678 "tupling.m"
          mercury__counter__allocate_3_p_0(&transform_hlds__tupling__Num_39, transform_hlds__tupling__HeadVar__5_5, transform_hlds__tupling__HeadVar__6_6);
        }
#line 679 "tupling.m"
        {
#line 679 "tupling.m"
          transform_hlds__tupling__create_aux_pred_9_p_0(transform_hlds__tupling__PredId_26, transform_hlds__tupling__ProcId_27, transform_hlds__tupling__PredInfo_29, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_59_59, transform_hlds__tupling__Num_39, &transform_hlds__tupling__AuxPredProcId_40, &transform_hlds__tupling__CallAux_41, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_60_60, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_4);
        }
#line 683 "tupling.m"
        {
#line 683 "tupling.m"
          transform_hlds__tupling__TransformedProc_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 683 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_42, 0) = ((MR_Box) (transform_hlds__tupling__AuxPredProcId_40));
#line 683 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_42, 1) = ((MR_Box) (transform_hlds__tupling__TupleConsType_34));
#line 683 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_42, 2) = ((MR_Box) (transform_hlds__tupling__ArgsToTuple_37));
#line 683 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_42, 3) = ((MR_Box) (transform_hlds__tupling__CallAux_41));
#line 683 "tupling.m"
        }
#line 685 "tupling.m"
        {
#line 685 "tupling.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0, ((MR_Box) (transform_hlds__tupling__PredProcId_1)), ((MR_Box) (transform_hlds__tupling__TransformedProc_42)), transform_hlds__tupling__HeadVar__7_7, transform_hlds__tupling__HeadVar__8_8);
        }
#line 645 "tupling.m"
      }
#line 643 "tupling.m"
  }
#line 639 "tupling.m"
}

#line 636 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_procs_7_p_0_1(
#line 636 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 636 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 636 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 636 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 636 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4,
#line 636 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_5,
#line 636 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_6,
#line 636 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_7,
#line 636 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_8)
#line 636 "tupling.m"
{
#line 636 "tupling.m"
  {
#line 636 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 636 "tupling.m"
    MR_Word transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_4;
#line 636 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_HeadVar__6_6;
#line 636 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_HeadVar__8_8;

#line 636 "tupling.m"
    {
#line 636 "tupling.m"
      transform_hlds__tupling__add_transformed_proc_8_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3), &transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_4, ((MR_Word) transform_hlds__tupling__wrapper_arg_5), &transform_hlds__tupling__conv1_HeadVar__6_6, ((MR_Word) transform_hlds__tupling__wrapper_arg_7), &transform_hlds__tupling__conv0_HeadVar__8_8);
    }
#line 636 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_4 = ((MR_Box) (transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_4));
#line 636 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_6 = ((MR_Box) (transform_hlds__tupling__conv1_HeadVar__6_6));
#line 636 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_8 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__8_8));
#line 636 "tupling.m"
  }
#line 636 "tupling.m"
}

#line 631 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_procs_7_p_0(
#line 631 "tupling.m"
  MR_Word transform_hlds__tupling__TuplingScheme_8,
#line 631 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_12,
#line 631 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_13,
#line 631 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_14,
#line 631 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_15,
#line 631 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_16,
#line 631 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_17)
#line 631 "tupling.m"
{
#line 635 "tupling.m"
  {
#line 635 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 636 "tupling.m"
    MR_Box transform_hlds__tupling__conv5_STATE_VARIABLE_ModuleInfo_13;
#line 636 "tupling.m"
    MR_Box transform_hlds__tupling__conv4_STATE_VARIABLE_Counter_15;
#line 636 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_STATE_VARIABLE_TransformMap_17;

#line 636 "tupling.m"
    {
#line 636 "tupling.m"
      mercury__map__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[0], (MR_Word) &transform_hlds__tupling_scalar_common_2[13], transform_hlds__tupling__TuplingScheme_8, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_12)), &transform_hlds__tupling__conv5_STATE_VARIABLE_ModuleInfo_13, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_Counter_0_14)), &transform_hlds__tupling__conv4_STATE_VARIABLE_Counter_15, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_16)), &transform_hlds__tupling__conv3_STATE_VARIABLE_TransformMap_17);
    }
#line 636 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_13 = ((MR_Word) transform_hlds__tupling__conv5_STATE_VARIABLE_ModuleInfo_13);
#line 636 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_Counter_15 = ((MR_Word) transform_hlds__tupling__conv4_STATE_VARIABLE_Counter_15);
#line 636 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_TransformMap_17 = ((MR_Word) transform_hlds__tupling__conv3_STATE_VARIABLE_TransformMap_17);
#line 635 "tupling.m"
  }
#line 631 "tupling.m"
}

#line 576 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__make_tupling_proposal_5_p_0_1(
#line 576 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 576 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 576 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2)
#line 576 "tupling.m"
{
#line 576 "tupling.m"
  {
#line 576 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 576 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 576 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_LambdaHeadVar__2_27;

#line 576 "tupling.m"
    {
#line 576 "tupling.m"
      transform_hlds__tupling__succeeded = transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__576__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), &transform_hlds__tupling__conv0_LambdaHeadVar__2_27);
    }
#line 576 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 576 "tupling.m"
      {
#line 576 "tupling.m"
        *transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv0_LambdaHeadVar__2_27));
#line 576 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 576 "tupling.m"
      }
#line 576 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 576 "tupling.m"
  }
#line 576 "tupling.m"
}

#line 568 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__make_tupling_proposal_5_p_0(
#line 568 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_6,
#line 568 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_7,
#line 568 "tupling.m"
  MR_Integer transform_hlds__tupling__MinArgsToTuple_8,
#line 568 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_4,
#line 568 "tupling.m"
  MR_Word * transform_hlds__tupling__TuplingProposal_12)
#line 568 "tupling.m"
{
#line 572 "tupling.m"
  {
#line 572 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 572 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_34_34;
#line 572 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_4, (MR_Integer) 0)));
#line 572 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_4, (MR_Integer) 1)));
#line 572 "tupling.m"
    MR_Word transform_hlds__tupling__ProcInfo_14;
#line 572 "tupling.m"
    MR_Word transform_hlds__tupling__VarSet_15;
#line 572 "tupling.m"
    MR_Word transform_hlds__tupling__HeadVars_16;
#line 572 "tupling.m"
    MR_Word transform_hlds__tupling__FieldVarArgPos_17;
#line 572 "tupling.m"
    MR_Word transform_hlds__tupling__V_25_25;
#line 573 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13;
#line 581 "tupling.m"
    MR_Integer transform_hlds__tupling__V_28_28;

#line 573 "tupling.m"
    {
#line 573 "tupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__ModuleInfo_6, transform_hlds__tupling__PredId_10, transform_hlds__tupling__ProcId_11, &transform_hlds__tupling__V_13_13, &transform_hlds__tupling__ProcInfo_14);
    }
#line 574 "tupling.m"
    {
#line 574 "tupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__tupling__ProcInfo_14, &transform_hlds__tupling__VarSet_15);
    }
#line 575 "tupling.m"
    {
#line 575 "tupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__tupling__ProcInfo_14, &transform_hlds__tupling__HeadVars_16);
    }
#line 16635 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeInfo_34_34 = (MR_Word) &transform_hlds__tupling_scalar_common_2[6];
#line 576 "tupling.m"
    {
#line 576 "tupling.m"
      transform_hlds__tupling__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 576 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[3]));
#line 576 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 1) = ((MR_Box) (transform_hlds__tupling__make_tupling_proposal_5_p_0_1));
#line 576 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 576 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 3) = ((MR_Box) (transform_hlds__tupling__PredProcId_4));
#line 576 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 4) = ((MR_Box) (transform_hlds__tupling__HeadVars_16));
#line 576 "tupling.m"
    }
#line 576 "tupling.m"
    {
#line 576 "tupling.m"
      transform_hlds__tupling__FieldVarArgPos_17 = mercury__list__filter_map_2_f_0((MR_Word) &transform_hlds__tupling_scalar_common_2[2], transform_hlds__tupling__TypeInfo_34_34, transform_hlds__tupling__V_25_25, transform_hlds__tupling__CandidateHeadVars_7);
    }
#line 581 "tupling.m"
    {
#line 581 "tupling.m"
      transform_hlds__tupling__V_28_28 = mercury__list__length_1_f_0(transform_hlds__tupling__TypeInfo_34_34, transform_hlds__tupling__FieldVarArgPos_17);
    }
#line 581 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_28_28 < transform_hlds__tupling__MinArgsToTuple_8);
#line 581 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 582 "tupling.m"
      *transform_hlds__tupling__TuplingProposal_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "tupling.m"
    else
#line 587 "tupling.m"
      {
#line 587 "tupling.m"
        MR_Word transform_hlds__tupling__DummyCellVar_22;
#line 587 "tupling.m"
        MR_Word transform_hlds__tupling__FieldVars_24;
#line 587 "tupling.m"
        MR_Word transform_hlds__tupling__V_23_23;

#line 587 "tupling.m"
        {
#line 587 "tupling.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "DummyCellVar", &transform_hlds__tupling__DummyCellVar_22, transform_hlds__tupling__VarSet_15, &transform_hlds__tupling__V_23_23);
        }
#line 588 "tupling.m"
        {
#line 588 "tupling.m"
          transform_hlds__tupling__FieldVars_24 = mercury__assoc_list__keys_1_f_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__tupling__FieldVarArgPos_17);
        }
#line 589 "tupling.m"
        {
#line 589 "tupling.m"
          MR_Word base;
#line 589 "tupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 589 "tupling.m"
          *transform_hlds__tupling__TuplingProposal_12 = base;
#line 589 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__DummyCellVar_22));
#line 589 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__tupling__FieldVars_24));
#line 589 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__tupling__FieldVarArgPos_17));
#line 589 "tupling.m"
        }
#line 587 "tupling.m"
      }
#line 572 "tupling.m"
  }
#line 568 "tupling.m"
}

#line 973 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_2(
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 973 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 973 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 973 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5)
#line 973 "tupling.m"
{
#line 973 "tupling.m"
  {
#line 973 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 973 "tupling.m"
    MR_Float transform_hlds__tupling__conv2_STATE_VARIABLE_Loads_35;
#line 973 "tupling.m"
    MR_Float transform_hlds__tupling__conv1_STATE_VARIABLE_Stores_37;

#line 973 "tupling.m"
    {
#line 973 "tupling.m"
      transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), MR_unbox_float(transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv2_STATE_VARIABLE_Loads_35, MR_unbox_float(transform_hlds__tupling__wrapper_arg_4), &transform_hlds__tupling__conv1_STATE_VARIABLE_Stores_37);
    }
#line 973 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = MR_box_float(transform_hlds__tupling__conv2_STATE_VARIABLE_Loads_35);
#line 973 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_5 = MR_box_float(transform_hlds__tupling__conv1_STATE_VARIABLE_Stores_37);
#line 973 "tupling.m"
  }
#line 973 "tupling.m"
}

#line 549 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_1(
#line 549 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 549 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 549 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2)
#line 549 "tupling.m"
{
#line 549 "tupling.m"
  {
#line 549 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 549 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_TuplingProposal_12;

#line 549 "tupling.m"
    {
#line 549 "tupling.m"
      transform_hlds__tupling__make_tupling_proposal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), &transform_hlds__tupling__conv0_TuplingProposal_12);
    }
#line 549 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv0_TuplingProposal_12));
#line 549 "tupling.m"
  }
#line 549 "tupling.m"
}

#line 538 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0(
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_9,
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_10,
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_11,
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_12,
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_13,
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_14,
#line 538 "tupling.m"
  MR_Word transform_hlds__tupling__MaybeBestScheme0_15,
#line 538 "tupling.m"
  MR_Word * transform_hlds__tupling__MaybeBestScheme_16)
#line 538 "tupling.m"
{
#line 546 "tupling.m"
  {
#line 546 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 546 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_35_35;
#line 546 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_36_36;
#line 546 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_26_55;
#line 546 "tupling.m"
    MR_Integer transform_hlds__tupling__MinArgsToTuple_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 7)));
#line 546 "tupling.m"
    MR_Word transform_hlds__tupling__TuplingProposals_18;
#line 546 "tupling.m"
    MR_Word transform_hlds__tupling__TuplingScheme_19;
#line 546 "tupling.m"
    MR_Word transform_hlds__tupling__Costs_20;
#line 546 "tupling.m"
    MR_Word transform_hlds__tupling__V_23_23;
#line 546 "tupling.m"
    MR_Float transform_hlds__tupling__Loads_44;
#line 546 "tupling.m"
    MR_Float transform_hlds__tupling__Stores_45;
#line 546 "tupling.m"
    MR_Word transform_hlds__tupling__V_46_46;
#line 547 "tupling.m"
    MR_Integer transform_hlds__tupling__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 0)));
#line 547 "tupling.m"
    MR_Integer transform_hlds__tupling__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 1)));
#line 547 "tupling.m"
    MR_Integer transform_hlds__tupling__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 2)));
#line 547 "tupling.m"
    MR_Integer transform_hlds__tupling__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 3)));
#line 547 "tupling.m"
    MR_Integer transform_hlds__tupling__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 4)));
#line 547 "tupling.m"
    MR_Integer transform_hlds__tupling__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 5)));
#line 547 "tupling.m"
    MR_Integer transform_hlds__tupling__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 6)));
#line 972 "tupling.m"
    MR_Box transform_hlds__tupling__conv4_Loads_44;
#line 972 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_Stores_45;

#line 549 "tupling.m"
    {
#line 549 "tupling.m"
      transform_hlds__tupling__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 549 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[2]));
#line 549 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 1) = ((MR_Box) (transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_1));
#line 549 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 549 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 3) = ((MR_Box) (transform_hlds__tupling__ModuleInfo_11));
#line 549 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 4) = ((MR_Box) (transform_hlds__tupling__CandidateHeadVars_14));
#line 549 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 5) = ((MR_Box) (transform_hlds__tupling__MinArgsToTuple_17));
#line 549 "tupling.m"
    }
#line 16867 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 16869 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0;
#line 548 "tupling.m"
    {
#line 548 "tupling.m"
      mercury__list__map_3_p_0(transform_hlds__tupling__TypeCtorInfo_35_35, transform_hlds__tupling__TypeCtorInfo_36_36, transform_hlds__tupling__V_23_23, transform_hlds__tupling__PredProcIds_13, &transform_hlds__tupling__TuplingProposals_18);
    }
#line 551 "tupling.m"
    {
#line 551 "tupling.m"
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__tupling__TypeCtorInfo_35_35, transform_hlds__tupling__TypeCtorInfo_36_36, transform_hlds__tupling__PredProcIds_13, transform_hlds__tupling__TuplingProposals_18, &transform_hlds__tupling__TuplingScheme_19);
    }
#line 973 "tupling.m"
    {
#line 973 "tupling.m"
      transform_hlds__tupling__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[1]));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 1) = ((MR_Box) (transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_2));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 3) = ((MR_Box) (transform_hlds__tupling__TraceCounts_9));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_10));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 5) = ((MR_Box) (transform_hlds__tupling__ModuleInfo_11));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 6) = ((MR_Box) (transform_hlds__tupling__TuplingScheme_19));
#line 973 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 7) = ((MR_Box) (transform_hlds__tupling__ReverseGoalPathMapMap_12));
#line 973 "tupling.m"
    }
#line 16903 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_26_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 972 "tupling.m"
    {
#line 972 "tupling.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__tupling__TypeCtorInfo_26_55, transform_hlds__tupling__TypeCtorInfo_26_55, transform_hlds__tupling__V_46_46, transform_hlds__tupling__PredProcIds_13, MR_box_float((MR_Float) 0.0000000000000000), &transform_hlds__tupling__conv4_Loads_44, MR_box_float((MR_Float) 0.0000000000000000), &transform_hlds__tupling__conv3_Stores_45);
    }
#line 972 "tupling.m"
    transform_hlds__tupling__Loads_44 = MR_unbox_float(transform_hlds__tupling__conv4_Loads_44);
#line 972 "tupling.m"
    transform_hlds__tupling__Stores_45 = MR_unbox_float(transform_hlds__tupling__conv3_Stores_45);
#line 976 "tupling.m"
    {
#line 976 "tupling.m"
      transform_hlds__tupling__Costs_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 976 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__Costs_20, 0) = MR_box_float(transform_hlds__tupling__Loads_44);
#line 976 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__Costs_20, 1) = MR_box_float(transform_hlds__tupling__Stores_45);
#line 976 "tupling.m"
    }
#line 558 "tupling.m"
    if ((transform_hlds__tupling__MaybeBestScheme0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 558 "tupling.m"
    else
#line 559 "tupling.m"
      {
#line 559 "tupling.m"
        MR_Word transform_hlds__tupling__PrevCosts_21;
#line 559 "tupling.m"
        MR_Word transform_hlds__tupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__MaybeBestScheme0_15, (MR_Integer) 0)));
#line 559 "tupling.m"
        MR_Float transform_hlds__tupling__LoadsA_56;
#line 559 "tupling.m"
        MR_Float transform_hlds__tupling__StoresA_57;
#line 559 "tupling.m"
        MR_Float transform_hlds__tupling__LoadsB_58;
#line 559 "tupling.m"
        MR_Float transform_hlds__tupling__StoresB_59;
#line 559 "tupling.m"
        MR_Float transform_hlds__tupling__TotalA_60;
#line 559 "tupling.m"
        MR_Float transform_hlds__tupling__TotalB_61;
#line 559 "tupling.m"
        MR_Word transform_hlds__tupling__V_22_22;

#line 559 "tupling.m"
        transform_hlds__tupling__PrevCosts_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_24_24, (MR_Integer) 0)));
#line 559 "tupling.m"
        transform_hlds__tupling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_24_24, (MR_Integer) 1)));
#line 594 "tupling.m"
        transform_hlds__tupling__LoadsA_56 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__Costs_20, (MR_Integer) 0)));
#line 594 "tupling.m"
        transform_hlds__tupling__StoresA_57 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__Costs_20, (MR_Integer) 1)));
#line 594 "tupling.m"
        transform_hlds__tupling__LoadsB_58 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__PrevCosts_21, (MR_Integer) 0)));
#line 594 "tupling.m"
        transform_hlds__tupling__StoresB_59 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__PrevCosts_21, (MR_Integer) 1)));
#line 595 "tupling.m"
        transform_hlds__tupling__TotalA_60 = (transform_hlds__tupling__LoadsA_56 + transform_hlds__tupling__StoresA_57);
#line 596 "tupling.m"
        transform_hlds__tupling__TotalB_61 = (transform_hlds__tupling__LoadsB_58 + transform_hlds__tupling__StoresB_59);
#line 597 "tupling.m"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__TotalA_60 < transform_hlds__tupling__TotalB_61);
#line 559 "tupling.m"
      }
#line 555 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 563 "tupling.m"
      {
#line 563 "tupling.m"
        MR_Word transform_hlds__tupling__V_25_25;

#line 563 "tupling.m"
        {
#line 563 "tupling.m"
          transform_hlds__tupling__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 563 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 0) = ((MR_Box) (transform_hlds__tupling__Costs_20));
#line 563 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 1) = ((MR_Box) (transform_hlds__tupling__TuplingScheme_19));
#line 563 "tupling.m"
        }
#line 563 "tupling.m"
        {
#line 563 "tupling.m"
          MR_Word base;
#line 563 "tupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 563 "tupling.m"
          *transform_hlds__tupling__MaybeBestScheme_16 = base;
#line 563 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__V_25_25));
#line 563 "tupling.m"
        }
#line 563 "tupling.m"
      }
#line 555 "tupling.m"
    else
#line 565 "tupling.m"
      *transform_hlds__tupling__MaybeBestScheme_16 = transform_hlds__tupling__MaybeBestScheme0_15;
#line 546 "tupling.m"
  }
#line 538 "tupling.m"
}

#line 523 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_7_p_0(
#line 523 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_8,
#line 523 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_9,
#line 523 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_10,
#line 523 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_11,
#line 523 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_12,
#line 523 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_13,
#line 523 "tupling.m"
  MR_Word * transform_hlds__tupling__MaybeBestScheme_14)
#line 523 "tupling.m"
{
#line 530 "tupling.m"
  {
#line 530 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 530 "tupling.m"
    MR_Integer transform_hlds__tupling__MinArgsToTuple_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_9, (MR_Integer) 7)));
#line 531 "tupling.m"
    MR_Integer transform_hlds__tupling__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_9, (MR_Integer) 0)));
#line 531 "tupling.m"
    MR_Integer transform_hlds__tupling__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_9, (MR_Integer) 1)));
#line 531 "tupling.m"
    MR_Integer transform_hlds__tupling__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_9, (MR_Integer) 2)));
#line 531 "tupling.m"
    MR_Integer transform_hlds__tupling__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_9, (MR_Integer) 3)));
#line 531 "tupling.m"
    MR_Integer transform_hlds__tupling__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_9, (MR_Integer) 4)));
#line 531 "tupling.m"
    MR_Integer transform_hlds__tupling__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_9, (MR_Integer) 5)));
#line 531 "tupling.m"
    MR_Integer transform_hlds__tupling__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_9, (MR_Integer) 6)));

#line 532 "tupling.m"
    {
#line 532 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_p_0(transform_hlds__tupling__TraceCounts_8, transform_hlds__tupling__TuningParams_9, transform_hlds__tupling__ModuleInfo_10, transform_hlds__tupling__ReverseGoalPathMapMap_11, transform_hlds__tupling__PredProcIds_12, transform_hlds__tupling__CandidateHeadVars_13, transform_hlds__tupling__MinArgsToTuple_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__tupling__MaybeBestScheme_14);
    }
#line 530 "tupling.m"
  }
#line 523 "tupling.m"
}

#line 504 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0_1(
#line 504 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 504 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 504 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 504 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 504 "tupling.m"
{
#line 504 "tupling.m"
  {
#line 504 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 504 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_HeadVar__3_23;

#line 504 "tupling.m"
    {
#line 504 "tupling.m"
      transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__504__1_3_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_HeadVar__3_23);
    }
#line 504 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__3_23));
#line 504 "tupling.m"
  }
#line 504 "tupling.m"
}

#line 489 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0(
#line 489 "tupling.m"
  MR_String transform_hlds__tupling__HeadVarName_5,
#line 489 "tupling.m"
  MR_Word transform_hlds__tupling__ListOfOrigins_6,
#line 489 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars0_7,
#line 489 "tupling.m"
  MR_Word * transform_hlds__tupling__CandidateHeadVars_8)
#line 489 "tupling.m"
{
#line 500 "tupling.m"
  {
#line 500 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 500 "tupling.m"
    if ((transform_hlds__tupling__ListOfOrigins_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "tupling.m"
      *transform_hlds__tupling__CandidateHeadVars_8 = transform_hlds__tupling__CandidateHeadVars0_7;
#line 500 "tupling.m"
    else
#line 500 "tupling.m"
      {
#line 500 "tupling.m"
        MR_Word transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ListOfOrigins_6, (MR_Integer) 1)));
#line 503 "tupling.m"
        MR_Word transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ListOfOrigins_6, (MR_Integer) 0)));

#line 500 "tupling.m"
        if ((transform_hlds__tupling__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 501 "tupling.m"
          *transform_hlds__tupling__CandidateHeadVars_8 = transform_hlds__tupling__CandidateHeadVars0_7;
#line 500 "tupling.m"
        else
#line 503 "tupling.m"
          {
#line 503 "tupling.m"
            MR_Word transform_hlds__tupling__TypeInfo_28_28;
#line 503 "tupling.m"
            MR_Word transform_hlds__tupling__Origins_13;
#line 503 "tupling.m"
            MR_Word transform_hlds__tupling__V_16_16;
#line 503 "tupling.m"
            MR_Word transform_hlds__tupling__V_17_17;
#line 503 "tupling.m"
            MR_Word transform_hlds__tupling__V_18_18;
#line 504 "tupling.m"
            MR_Box transform_hlds__tupling__conv1_Origins_13;

#line 504 "tupling.m"
            {
#line 504 "tupling.m"
              transform_hlds__tupling__V_16_16 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling_scalar_common_1[1]);
            }
#line 17150 "transform_hlds.tupling.c"
            transform_hlds__tupling__TypeInfo_28_28 = (MR_Word) &transform_hlds__tupling_scalar_common_2[1];
#line 504 "tupling.m"
            {
#line 504 "tupling.m"
              mercury__list__foldl_4_p_0(transform_hlds__tupling__TypeInfo_28_28, transform_hlds__tupling__TypeInfo_28_28, (MR_Word) &transform_hlds__tupling_scalar_common_2[12], transform_hlds__tupling__ListOfOrigins_6, ((MR_Box) (transform_hlds__tupling__V_16_16)), &transform_hlds__tupling__conv1_Origins_13);
            }
#line 504 "tupling.m"
            transform_hlds__tupling__Origins_13 = ((MR_Word) transform_hlds__tupling__conv1_Origins_13);
#line 505 "tupling.m"
            {
#line 505 "tupling.m"
              transform_hlds__tupling__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 505 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_18_18, 0) = ((MR_Box) (transform_hlds__tupling__HeadVarName_5));
#line 505 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_18_18, 1) = ((MR_Box) (transform_hlds__tupling__Origins_13));
#line 505 "tupling.m"
            }
#line 505 "tupling.m"
            {
#line 505 "tupling.m"
              transform_hlds__tupling__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "tupling.m"
              MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_17_17, 0) = ((MR_Box) (transform_hlds__tupling__V_18_18));
#line 505 "tupling.m"
              MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "tupling.m"
            }
#line 505 "tupling.m"
            {
#line 505 "tupling.m"
              *transform_hlds__tupling__CandidateHeadVars_8 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__tupling_scalar_common_2[2], transform_hlds__tupling__CandidateHeadVars0_7, transform_hlds__tupling__V_17_17);
            }
#line 503 "tupling.m"
          }
#line 500 "tupling.m"
      }
#line 500 "tupling.m"
  }
#line 489 "tupling.m"
}

#line 463 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_2_6_f_0(
#line 463 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_8,
#line 463 "tupling.m"
  MR_Word transform_hlds__tupling__VarSet_9,
#line 463 "tupling.m"
  MR_Word transform_hlds__tupling__VarTypes_10,
#line 463 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_11,
#line 463 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar_12,
#line 463 "tupling.m"
  MR_Word transform_hlds__tupling__ArgMode_13,
#line 463 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__7_7)
#line 463 "tupling.m"
{
#line 468 "tupling.m"
  {
#line 468 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 468 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_17_17;
#line 468 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_18_18;
#line 468 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_19_19;
#line 468 "tupling.m"
    MR_String transform_hlds__tupling__Name_14;
#line 468 "tupling.m"
    MR_Word transform_hlds__tupling__Origins_15;
#line 468 "tupling.m"
    MR_Word transform_hlds__tupling__Type_16;

#line 470 "tupling.m"
    {
#line 470 "tupling.m"
      transform_hlds__tupling__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__tupling__ModuleInfo_11, transform_hlds__tupling__ArgMode_13);
    }
#line 468 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 468 "tupling.m"
      {
#line 472 "tupling.m"
        {
#line 472 "tupling.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__tupling__VarTypes_10, transform_hlds__tupling__HeadVar_12, &transform_hlds__tupling__Type_16);
        }
#line 473 "tupling.m"
        {
#line 473 "tupling.m"
          transform_hlds__tupling__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__tupling__Type_16);
        }
#line 473 "tupling.m"
        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 468 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 468 "tupling.m"
          {
#line 17254 "transform_hlds.tupling.c"
            transform_hlds__tupling__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 474 "tupling.m"
            {
#line 474 "tupling.m"
              transform_hlds__tupling__succeeded = mercury__varset__search_name_3_p_0(transform_hlds__tupling__TypeCtorInfo_17_17, transform_hlds__tupling__VarSet_9, transform_hlds__tupling__HeadVar_12, &transform_hlds__tupling__Name_14);
            }
#line 468 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 468 "tupling.m"
              {
#line 17265 "transform_hlds.tupling.c"
                transform_hlds__tupling__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 17267 "transform_hlds.tupling.c"
                transform_hlds__tupling__TypeInfo_19_19 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 475 "tupling.m"
                {
#line 475 "tupling.m"
                  transform_hlds__tupling__Origins_15 = mercury__map__singleton_2_f_0(transform_hlds__tupling__TypeCtorInfo_18_18, transform_hlds__tupling__TypeInfo_19_19, ((MR_Box) (transform_hlds__tupling__PredProcId_8)), ((MR_Box) (transform_hlds__tupling__HeadVar_12)));
                }
#line 468 "tupling.m"
                {
#line 468 "tupling.m"
                  MR_Word base;
#line 468 "tupling.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 468 "tupling.m"
                  *transform_hlds__tupling__HeadVar__7_7 = base;
#line 468 "tupling.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__Name_14));
#line 468 "tupling.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__Origins_15));
#line 468 "tupling.m"
                }
#line 468 "tupling.m"
                transform_hlds__tupling__succeeded = MR_TRUE;
#line 468 "tupling.m"
              }
#line 468 "tupling.m"
          }
#line 468 "tupling.m"
      }
#line 468 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 468 "tupling.m"
  }
#line 463 "tupling.m"
}

#line 460 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0_1(
#line 460 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 460 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 460 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 460 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 460 "tupling.m"
{
#line 460 "tupling.m"
  {
#line 460 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 460 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 460 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_HeadVar__7_7;

#line 460 "tupling.m"
    {
#line 460 "tupling.m"
      transform_hlds__tupling__succeeded = transform_hlds__tupling__candidate_headvars_of_proc_2_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_HeadVar__7_7);
    }
#line 460 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 460 "tupling.m"
      {
#line 460 "tupling.m"
        *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__7_7));
#line 460 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 460 "tupling.m"
      }
#line 460 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 460 "tupling.m"
  }
#line 460 "tupling.m"
}

#line 449 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(
#line 449 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_4,
#line 449 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_2,
#line 449 "tupling.m"
  MR_Word * transform_hlds__tupling__CandidateHeadVars_8)
#line 449 "tupling.m"
{
#line 453 "tupling.m"
  {
#line 453 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 453 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_2, (MR_Integer) 0)));
#line 453 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_2, (MR_Integer) 1)));
#line 453 "tupling.m"
    MR_Word transform_hlds__tupling__ProcInfo_10;
#line 453 "tupling.m"
    MR_Word transform_hlds__tupling__VarSet_11;
#line 453 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes_12;
#line 453 "tupling.m"
    MR_Word transform_hlds__tupling__HeadVars_13;
#line 453 "tupling.m"
    MR_Word transform_hlds__tupling__ArgModes_14;
#line 453 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15;
#line 454 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9;

#line 454 "tupling.m"
    {
#line 454 "tupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__ModuleInfo_4, transform_hlds__tupling__PredId_6, transform_hlds__tupling__ProcId_7, &transform_hlds__tupling__V_9_9, &transform_hlds__tupling__ProcInfo_10);
    }
#line 455 "tupling.m"
    {
#line 455 "tupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__tupling__ProcInfo_10, &transform_hlds__tupling__VarSet_11);
    }
#line 456 "tupling.m"
    {
#line 456 "tupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__ProcInfo_10, &transform_hlds__tupling__VarTypes_12);
    }
#line 457 "tupling.m"
    {
#line 457 "tupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__tupling__ProcInfo_10, &transform_hlds__tupling__HeadVars_13);
    }
#line 458 "tupling.m"
    {
#line 458 "tupling.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__tupling__ProcInfo_10, &transform_hlds__tupling__ArgModes_14);
    }
#line 460 "tupling.m"
    {
#line 460 "tupling.m"
      transform_hlds__tupling__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 460 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_8[0]));
#line 460 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 1) = ((MR_Box) (transform_hlds__tupling__candidate_headvars_of_proc_3_p_0_1));
#line 460 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 460 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 3) = ((MR_Box) (transform_hlds__tupling__PredProcId_2));
#line 460 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 4) = ((MR_Box) (transform_hlds__tupling__VarSet_11));
#line 460 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 5) = ((MR_Box) (transform_hlds__tupling__VarTypes_12));
#line 460 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 6) = ((MR_Box) (transform_hlds__tupling__ModuleInfo_4));
#line 460 "tupling.m"
    }
#line 459 "tupling.m"
    {
#line 459 "tupling.m"
      *transform_hlds__tupling__CandidateHeadVars_8 = mercury__list__filter_map_corresponding_3_f_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[2], transform_hlds__tupling__V_15_15, transform_hlds__tupling__HeadVars_13, transform_hlds__tupling__ArgModes_14);
    }
#line 453 "tupling.m"
  }
#line 449 "tupling.m"
}

#line 366 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_3_13_p_0(
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_14,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_15,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_16,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_17,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_18,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__CostsWithoutTupling_19,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_30,
#line 366 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_32,
#line 366 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_33,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_34,
#line 366 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_35,
#line 366 "tupling.m"
  MR_Word transform_hlds__tupling__VeryVerbose_23)
#line 366 "tupling.m"
{
#line 374 "tupling.m"
  {
#line 374 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 374 "tupling.m"
    MR_Word transform_hlds__tupling__MaybeBestScheme_24;

#line 375 "tupling.m"
    {
#line 375 "tupling.m"
      transform_hlds__tupling__find_best_tupling_scheme_7_p_0(transform_hlds__tupling__TraceCounts_14, transform_hlds__tupling__TuningParams_15, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_30, transform_hlds__tupling__ReverseGoalPathMapMap_16, transform_hlds__tupling__PredProcIds_17, transform_hlds__tupling__CandidateHeadVars_18, &transform_hlds__tupling__MaybeBestScheme_24);
    }
#line 380 "tupling.m"
    if ((transform_hlds__tupling__MaybeBestScheme_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "tupling.m"
      {
#line 379 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_30;
#line 379 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_Counter_33 = transform_hlds__tupling__STATE_VARIABLE_Counter_0_32;
#line 379 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_TransformMap_35 = transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_34;
#line 379 "tupling.m"
      }
#line 380 "tupling.m"
    else
#line 381 "tupling.m"
      {
#line 381 "tupling.m"
        MR_Word transform_hlds__tupling__CostsWithTupling_25;
#line 381 "tupling.m"
        MR_Word transform_hlds__tupling__TuplingScheme_26;
#line 381 "tupling.m"
        MR_Float transform_hlds__tupling__LoadsWithTupling_27;
#line 381 "tupling.m"
        MR_Float transform_hlds__tupling__StoresWithTupling_28;
#line 381 "tupling.m"
        MR_Word transform_hlds__tupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__MaybeBestScheme_24, (MR_Integer) 0)));
#line 415 "tupling.m"
        MR_Float transform_hlds__tupling__LoadsWithoutTupling_78;
#line 415 "tupling.m"
        MR_Float transform_hlds__tupling__StoresWithoutTupling_79;
#line 415 "tupling.m"
        MR_Float transform_hlds__tupling__LoadsWithTupling_80;
#line 415 "tupling.m"
        MR_Float transform_hlds__tupling__StoresWithTupling_81;
#line 415 "tupling.m"
        MR_Float transform_hlds__tupling__CostsRatio_82;
#line 415 "tupling.m"
        MR_Float transform_hlds__tupling__TotalWithoutTupling_83;
#line 415 "tupling.m"
        MR_Float transform_hlds__tupling__TotalWithTupling_84;
#line 415 "tupling.m"
        MR_Integer transform_hlds__tupling__V_85_85;
#line 418 "tupling.m"
        MR_Integer transform_hlds__tupling__V_90_90;
#line 418 "tupling.m"
        MR_Integer transform_hlds__tupling__V_91_91;
#line 418 "tupling.m"
        MR_Integer transform_hlds__tupling__V_92_92;
#line 418 "tupling.m"
        MR_Integer transform_hlds__tupling__V_93_93;
#line 418 "tupling.m"
        MR_Integer transform_hlds__tupling__V_94_94;
#line 418 "tupling.m"
        MR_Integer transform_hlds__tupling__V_95_95;
#line 418 "tupling.m"
        MR_Integer transform_hlds__tupling__V_96_96;

#line 381 "tupling.m"
        transform_hlds__tupling__CostsWithTupling_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_36_36, (MR_Integer) 0)));
#line 381 "tupling.m"
        transform_hlds__tupling__TuplingScheme_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_36_36, (MR_Integer) 1)));
#line 382 "tupling.m"
        transform_hlds__tupling__LoadsWithTupling_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithTupling_25, (MR_Integer) 0)));
#line 382 "tupling.m"
        transform_hlds__tupling__StoresWithTupling_28 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithTupling_25, (MR_Integer) 1)));
#line 389 "tupling.m"
#line 389 "tupling.m"
        switch (transform_hlds__tupling__VeryVerbose_23) {
#line 389 "tupling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 389 "tupling.m"
          case (MR_Integer) 0:
#line 390 "tupling.m"
            {
#line 390 "tupling.m"
            }
#line 389 "tupling.m"
            break;
#line 389 "tupling.m"
          case (MR_Integer) 1:
#line 385 "tupling.m"
            {
#line 385 "tupling.m"
              MR_String transform_hlds__tupling__V_55_55;
#line 385 "tupling.m"
              MR_Word transform_hlds__tupling__V_61_61;
#line 385 "tupling.m"
              MR_String transform_hlds__tupling__V_66_66;

#line 386 "tupling.m"
              {
#line 386 "tupling.m"
                mercury__io__write_string_3_p_0((MR_String) "% SCC costs with tupling = {");
              }
#line 17573 "transform_hlds.tupling.c"
              transform_hlds__tupling__V_61_61 = (MR_Word) &transform_hlds__tupling_scalar_common_3[0];
#line 387 "tupling.m"
              {
#line 387 "tupling.m"
                mercury__string__format__format_float_component_nowidth_noprec_4_p_0(transform_hlds__tupling__V_61_61, (MR_Integer) 4, transform_hlds__tupling__LoadsWithTupling_27, &transform_hlds__tupling__V_55_55);
              }
#line 387 "tupling.m"
              {
#line 387 "tupling.m"
                mercury__io__write_string_3_p_0(transform_hlds__tupling__V_55_55);
              }
#line 386 "tupling.m"
              {
#line 386 "tupling.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 387 "tupling.m"
              {
#line 387 "tupling.m"
                mercury__string__format__format_float_component_nowidth_noprec_4_p_0(transform_hlds__tupling__V_61_61, (MR_Integer) 4, transform_hlds__tupling__StoresWithTupling_28, &transform_hlds__tupling__V_66_66);
              }
#line 387 "tupling.m"
              {
#line 387 "tupling.m"
                mercury__io__write_string_3_p_0(transform_hlds__tupling__V_66_66);
              }
#line 386 "tupling.m"
              {
#line 386 "tupling.m"
                mercury__io__write_string_3_p_0((MR_String) "}\n");
              }
#line 385 "tupling.m"
            }
#line 389 "tupling.m"
            break;
#line 389 "tupling.m"
        }
#line 416 "tupling.m"
        transform_hlds__tupling__LoadsWithoutTupling_78 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithoutTupling_19, (MR_Integer) 0)));
#line 416 "tupling.m"
        transform_hlds__tupling__StoresWithoutTupling_79 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithoutTupling_19, (MR_Integer) 1)));
#line 417 "tupling.m"
        transform_hlds__tupling__LoadsWithTupling_80 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithTupling_25, (MR_Integer) 0)));
#line 417 "tupling.m"
        transform_hlds__tupling__StoresWithTupling_81 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithTupling_25, (MR_Integer) 1)));
#line 418 "tupling.m"
        transform_hlds__tupling__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 0)));
#line 418 "tupling.m"
        transform_hlds__tupling__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 1)));
#line 418 "tupling.m"
        transform_hlds__tupling__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 2)));
#line 418 "tupling.m"
        transform_hlds__tupling__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 3)));
#line 418 "tupling.m"
        transform_hlds__tupling__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 4)));
#line 418 "tupling.m"
        transform_hlds__tupling__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 5)));
#line 418 "tupling.m"
        transform_hlds__tupling__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 6)));
#line 418 "tupling.m"
        transform_hlds__tupling__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 7)));
#line 418 "tupling.m"
        {
#line 418 "tupling.m"
          transform_hlds__tupling__CostsRatio_82 = mercury__float__float_1_f_0(transform_hlds__tupling__V_85_85);
        }
#line 419 "tupling.m"
        transform_hlds__tupling__TotalWithoutTupling_83 = (transform_hlds__tupling__LoadsWithoutTupling_78 + transform_hlds__tupling__StoresWithoutTupling_79);
#line 420 "tupling.m"
        transform_hlds__tupling__TotalWithTupling_84 = (transform_hlds__tupling__LoadsWithTupling_80 + transform_hlds__tupling__StoresWithTupling_81);
#line 421 "tupling.m"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__TotalWithTupling_84 == ((MR_Float) 0.0000000000000000));
#line 421 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 422 "tupling.m"
          {
#line 422 "tupling.m"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__TotalWithoutTupling_83 > ((MR_Float) 0.0000000000000000));
#line 422 "tupling.m"
          }
#line 421 "tupling.m"
        else
#line 424 "tupling.m"
          {
#line 424 "tupling.m"
            MR_Float transform_hlds__tupling__V_87_87;
#line 424 "tupling.m"
            MR_Float transform_hlds__tupling__V_88_88 = (transform_hlds__tupling__TotalWithoutTupling_83 * ((MR_Float) 100.00000000000000));

#line 424 "tupling.m"
            {
#line 424 "tupling.m"
              transform_hlds__tupling__V_87_87 = mercury__float__f_slash_2_f_0(transform_hlds__tupling__V_88_88, transform_hlds__tupling__TotalWithTupling_84);
            }
#line 424 "tupling.m"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_87_87 >= transform_hlds__tupling__CostsRatio_82);
#line 424 "tupling.m"
          }
#line 392 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 403 "tupling.m"
          {
#line 401 "tupling.m"
#line 401 "tupling.m"
            switch (transform_hlds__tupling__VeryVerbose_23) {
#line 401 "tupling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 401 "tupling.m"
              case (MR_Integer) 0:
#line 402 "tupling.m"
                {
#line 402 "tupling.m"
                }
#line 401 "tupling.m"
                break;
#line 401 "tupling.m"
              case (MR_Integer) 1:
#line 398 "tupling.m"
                {
#line 399 "tupling.m"
                  {
#line 399 "tupling.m"
                    mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "% Proceeding with tupling\n")));
                  }
#line 398 "tupling.m"
                }
#line 401 "tupling.m"
                break;
#line 401 "tupling.m"
            }
#line 404 "tupling.m"
            {
#line 404 "tupling.m"
              transform_hlds__tupling__add_transformed_procs_7_p_0(transform_hlds__tupling__TuplingScheme_26, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_30, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31, transform_hlds__tupling__STATE_VARIABLE_Counter_0_32, transform_hlds__tupling__STATE_VARIABLE_Counter_33, transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_34, transform_hlds__tupling__STATE_VARIABLE_TransformMap_35);
            }
#line 403 "tupling.m"
          }
#line 392 "tupling.m"
        else
#line 407 "tupling.m"
          {
#line 407 "tupling.m"
            *transform_hlds__tupling__STATE_VARIABLE_TransformMap_35 = transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_34;
#line 407 "tupling.m"
            *transform_hlds__tupling__STATE_VARIABLE_Counter_33 = transform_hlds__tupling__STATE_VARIABLE_Counter_0_32;
#line 407 "tupling.m"
            *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_30;
#line 407 "tupling.m"
          }
#line 381 "tupling.m"
      }
#line 374 "tupling.m"
  }
#line 366 "tupling.m"
}

#line 342 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_1(
#line 342 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 342 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 342 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 342 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 342 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 342 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5)
#line 342 "tupling.m"
{
#line 342 "tupling.m"
  {
#line 342 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 342 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_STATE_VARIABLE_ReverseGoalPathMapMap_32;
#line 342 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_ModuleInfo_34;

#line 342 "tupling.m"
    {
#line 342 "tupling.m"
      transform_hlds__tupling__prepare_proc_for_counting_5_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv1_STATE_VARIABLE_ReverseGoalPathMapMap_32, ((MR_Word) transform_hlds__tupling__wrapper_arg_4), &transform_hlds__tupling__conv0_STATE_VARIABLE_ModuleInfo_34);
    }
#line 342 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv1_STATE_VARIABLE_ReverseGoalPathMapMap_32));
#line 342 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_ModuleInfo_34));
#line 342 "tupling.m"
  }
#line 342 "tupling.m"
}

#line 335 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0(
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_12,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_13,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_14,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_15,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_25,
#line 335 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_26,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_27,
#line 335 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_28,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_29,
#line 335 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_30,
#line 335 "tupling.m"
  MR_Word transform_hlds__tupling__VeryVerbose_19)
#line 335 "tupling.m"
{
#line 341 "tupling.m"
  {
#line 341 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 341 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_53_53 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 341 "tupling.m"
    MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_20;
#line 341 "tupling.m"
    MR_Word transform_hlds__tupling__CostsWithoutTupling_21;
#line 341 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32;
#line 341 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33;
#line 341 "tupling.m"
    MR_Word transform_hlds__tupling__V_34_34;
#line 342 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_ReverseGoalPathMapMap_20;
#line 342 "tupling.m"
    MR_Box transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_33_33;
#line 357 "tupling.m"
    MR_Float transform_hlds__tupling__V_43_43;
#line 357 "tupling.m"
    MR_Float transform_hlds__tupling__V_44_44;

#line 343 "tupling.m"
    {
#line 343 "tupling.m"
      transform_hlds__tupling__V_32_32 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__tupling_scalar_common_2[3]);
    }
#line 342 "tupling.m"
    {
#line 342 "tupling.m"
      mercury__list__foldl2_6_p_0(transform_hlds__tupling__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__tupling_scalar_common_2[4], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[11], transform_hlds__tupling__PredProcIds_14, ((MR_Box) (transform_hlds__tupling__V_32_32)), &transform_hlds__tupling__conv3_ReverseGoalPathMapMap_20, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_25)), &transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_33_33);
    }
#line 342 "tupling.m"
    transform_hlds__tupling__ReverseGoalPathMapMap_20 = ((MR_Word) transform_hlds__tupling__conv3_ReverseGoalPathMapMap_20);
#line 342 "tupling.m"
    transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_33_33);
#line 346 "tupling.m"
    {
#line 346 "tupling.m"
      transform_hlds__tupling__V_34_34 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0);
    }
#line 345 "tupling.m"
    {
#line 345 "tupling.m"
      transform_hlds__tupling__count_load_stores_for_scc_7_p_0(transform_hlds__tupling__TraceCounts_12, transform_hlds__tupling__TuningParams_13, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33, transform_hlds__tupling__V_34_34, transform_hlds__tupling__ReverseGoalPathMapMap_20, transform_hlds__tupling__PredProcIds_14, &transform_hlds__tupling__CostsWithoutTupling_21);
    }
#line 354 "tupling.m"
#line 354 "tupling.m"
    switch (transform_hlds__tupling__VeryVerbose_19) {
#line 354 "tupling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 354 "tupling.m"
      case (MR_Integer) 0:
#line 355 "tupling.m"
        {
#line 355 "tupling.m"
        }
#line 354 "tupling.m"
        break;
#line 354 "tupling.m"
      case (MR_Integer) 1:
#line 348 "tupling.m"
        {
#line 348 "tupling.m"
          MR_Float transform_hlds__tupling__LoadsWoTupling_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithoutTupling_21, (MR_Integer) 0)));
#line 348 "tupling.m"
          MR_Float transform_hlds__tupling__StoresWoTupling_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithoutTupling_21, (MR_Integer) 1)));
#line 350 "tupling.m"
          MR_String transform_hlds__tupling__V_61_61;
#line 350 "tupling.m"
          MR_Word transform_hlds__tupling__V_67_67;
#line 350 "tupling.m"
          MR_String transform_hlds__tupling__V_72_72;

#line 351 "tupling.m"
          {
#line 351 "tupling.m"
            mercury__io__write_string_3_p_0((MR_String) "% SCC costs without tupling = {");
          }
#line 17879 "transform_hlds.tupling.c"
          transform_hlds__tupling__V_67_67 = (MR_Word) &transform_hlds__tupling_scalar_common_3[0];
#line 352 "tupling.m"
          {
#line 352 "tupling.m"
            mercury__string__format__format_float_component_nowidth_noprec_4_p_0(transform_hlds__tupling__V_67_67, (MR_Integer) 4, transform_hlds__tupling__LoadsWoTupling_22, &transform_hlds__tupling__V_61_61);
          }
#line 352 "tupling.m"
          {
#line 352 "tupling.m"
            mercury__io__write_string_3_p_0(transform_hlds__tupling__V_61_61);
          }
#line 351 "tupling.m"
          {
#line 351 "tupling.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 352 "tupling.m"
          {
#line 352 "tupling.m"
            mercury__string__format__format_float_component_nowidth_noprec_4_p_0(transform_hlds__tupling__V_67_67, (MR_Integer) 4, transform_hlds__tupling__StoresWoTupling_23, &transform_hlds__tupling__V_72_72);
          }
#line 352 "tupling.m"
          {
#line 352 "tupling.m"
            mercury__io__write_string_3_p_0(transform_hlds__tupling__V_72_72);
          }
#line 351 "tupling.m"
          {
#line 351 "tupling.m"
            mercury__io__write_string_3_p_0((MR_String) "}\n");
          }
#line 348 "tupling.m"
        }
#line 354 "tupling.m"
        break;
#line 354 "tupling.m"
    }
#line 357 "tupling.m"
    transform_hlds__tupling__V_43_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithoutTupling_21, (MR_Integer) 0)));
#line 357 "tupling.m"
    transform_hlds__tupling__V_44_44 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithoutTupling_21, (MR_Integer) 1)));
#line 357 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_43_43 == ((MR_Float) 0.0000000000000000));
#line 357 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 357 "tupling.m"
      transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_44_44 == ((MR_Float) 0.0000000000000000));
#line 357 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 359 "tupling.m"
      {
#line 359 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_TransformMap_30 = transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_29;
#line 359 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_Counter_28 = transform_hlds__tupling__STATE_VARIABLE_Counter_0_27;
#line 359 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_26 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33;
#line 359 "tupling.m"
      }
#line 357 "tupling.m"
    else
#line 361 "tupling.m"
      {
#line 361 "tupling.m"
        transform_hlds__tupling__maybe_tuple_scc_3_13_p_0(transform_hlds__tupling__TraceCounts_12, transform_hlds__tupling__TuningParams_13, transform_hlds__tupling__ReverseGoalPathMapMap_20, transform_hlds__tupling__PredProcIds_14, transform_hlds__tupling__CandidateHeadVars_15, transform_hlds__tupling__CostsWithoutTupling_21, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_26, transform_hlds__tupling__STATE_VARIABLE_Counter_0_27, transform_hlds__tupling__STATE_VARIABLE_Counter_28, transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_29, transform_hlds__tupling__STATE_VARIABLE_TransformMap_30, transform_hlds__tupling__VeryVerbose_19);
      }
#line 341 "tupling.m"
  }
#line 335 "tupling.m"
}

#line 486 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_7(
#line 486 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 486 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 486 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 486 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 486 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 486 "tupling.m"
{
#line 486 "tupling.m"
  {
#line 486 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 486 "tupling.m"
    MR_Word transform_hlds__tupling__conv3_CandidateHeadVars_8;

#line 486 "tupling.m"
    {
#line 486 "tupling.m"
      transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0(((MR_String) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3), &transform_hlds__tupling__conv3_CandidateHeadVars_8);
    }
#line 486 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_4 = ((MR_Box) (transform_hlds__tupling__conv3_CandidateHeadVars_8));
#line 486 "tupling.m"
  }
#line 486 "tupling.m"
}

#line 482 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_6(
#line 482 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 482 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 482 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2)
#line 482 "tupling.m"
{
#line 482 "tupling.m"
  {
#line 482 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 482 "tupling.m"
    MR_Word transform_hlds__tupling__conv2_CandidateHeadVars_8;

#line 482 "tupling.m"
    {
#line 482 "tupling.m"
      transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), &transform_hlds__tupling__conv2_CandidateHeadVars_8);
    }
#line 482 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv2_CandidateHeadVars_8));
#line 482 "tupling.m"
  }
#line 482 "tupling.m"
}

#line 271 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_1(
#line 271 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 271 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 271 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 271 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 271 "tupling.m"
{
#line 271 "tupling.m"
  {
#line 271 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;

#line 271 "tupling.m"
    {
#line 271 "tupling.m"
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1));
    }
#line 271 "tupling.m"
  }
#line 271 "tupling.m"
}

#line 321 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_2(
#line 321 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 321 "tupling.m"
{
#line 321 "tupling.m"
  {
#line 321 "tupling.m"
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 321 "tupling.m"
    MR_builtin_longjmp((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__commit_0, 1);
#line 321 "tupling.m"
  }
#line 321 "tupling.m"
}

#line 321 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_4(
#line 321 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 321 "tupling.m"
{
#line 321 "tupling.m"
  {
#line 321 "tupling.m"
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 321 "tupling.m"
    (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeProc_65 = ((MR_Word) (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__conv1_CalleeProc_65);
#line 321 "tupling.m"
    {
#line 321 "tupling.m"
      transform_hlds__tupling__maybe_tuple_scc_10_p_0_3(transform_hlds__tupling__env_ptr);
    }
#line 321 "tupling.m"
  }
#line 321 "tupling.m"
}

#line 321 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_3(
#line 321 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 321 "tupling.m"
{
#line 321 "tupling.m"
  {
#line 321 "tupling.m"
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 18098 "transform_hlds.tupling.c"
    (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 329 "tupling.m"
    {
#line 329 "tupling.m"
      mercury__digraph__lookup_key_3_p_0((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_71, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13, ((MR_Box) ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeProc_65)), &(transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeKey_69);
    }
#line 330 "tupling.m"
    {
#line 330 "tupling.m"
      mercury__digraph__lookup_to_3_p_0((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_71, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeKey_69, &(transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CallingKeys_70);
    }
#line 18110 "transform_hlds.tupling.c"
    (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeInfo_8_72 = (MR_Word) &transform_hlds__tupling_scalar_common_1[2];
#line 331 "tupling.m"
    {
#line 331 "tupling.m"
      (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = mercury__set__is_non_empty_1_p_0((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeInfo_8_72, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CallingKeys_70);
    }
#line 331 "tupling.m"
    if ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
#line 331 "tupling.m"
      {
#line 331 "tupling.m"
        transform_hlds__tupling__maybe_tuple_scc_10_p_0_2(transform_hlds__tupling__env_ptr);
      }
#line 321 "tupling.m"
  }
#line 321 "tupling.m"
}

#line 321 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_5(
#line 321 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 321 "tupling.m"
{
#line 321 "tupling.m"
  {
#line 321 "tupling.m"
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 321 "tupling.m"
    if (MR_builtin_setjmp((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__commit_0) == 0)
#line 321 "tupling.m"
      {
#line 321 "tupling.m"
        {
#line 321 "tupling.m"
          {
#line 321 "tupling.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &(transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__conv1_CalleeProc_65, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, transform_hlds__tupling__maybe_tuple_scc_10_p_0_4, transform_hlds__tupling__env_ptr);
          }
#line 321 "tupling.m"
        }
#line 321 "tupling.m"
        (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = MR_FALSE;
#line 321 "tupling.m"
      }
#line 321 "tupling.m"
    else
#line 321 "tupling.m"
      (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = MR_TRUE;
#line 321 "tupling.m"
  }
#line 321 "tupling.m"
}

#line 258 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0(
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_11,
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_12,
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__DepGraph_13,
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__SCC_14,
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24,
#line 258 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_25,
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_26,
#line 258 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_27,
#line 258 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_28,
#line 258 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_29)
#line 258 "tupling.m"
{
#line 258 "tupling.m"
  {
#line 258 "tupling.m"
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s transform_hlds__tupling__env;

#line 258 "tupling.m"
    (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13 = transform_hlds__tupling__DepGraph_13;
#line 258 "tupling.m"
    (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14 = transform_hlds__tupling__SCC_14;
#line 264 "tupling.m"
    {
#line 264 "tupling.m"
      MR_Word transform_hlds__tupling__Globals_18;
#line 264 "tupling.m"
      MR_Word transform_hlds__tupling__VeryVerbose_19;

#line 265 "tupling.m"
      {
#line 265 "tupling.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__tupling__Globals_18);
      }
#line 266 "tupling.m"
      {
#line 266 "tupling.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__tupling__Globals_18, (MR_Integer) 47, &transform_hlds__tupling__VeryVerbose_19);
      }
#line 274 "tupling.m"
#line 274 "tupling.m"
      switch (transform_hlds__tupling__VeryVerbose_19) {
#line 274 "tupling.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 274 "tupling.m"
        case (MR_Integer) 0:
#line 275 "tupling.m"
          {
#line 275 "tupling.m"
          }
#line 274 "tupling.m"
          break;
#line 274 "tupling.m"
        case (MR_Integer) 1:
#line 269 "tupling.m"
          {
#line 269 "tupling.m"
            MR_Word transform_hlds__tupling__V_34_34;
#line 271 "tupling.m"
            MR_Box transform_hlds__tupling__conv0_STATE_VARIABLE_IO_35_35;

#line 270 "tupling.m"
            {
#line 270 "tupling.m"
              mercury__io__write_string_3_p_0((MR_String) "% Considering tupling in ");
            }
#line 271 "tupling.m"
            {
#line 271 "tupling.m"
              transform_hlds__tupling__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 271 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_34_34, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[1]));
#line 271 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_34_34, 1) = ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_10_p_0_1));
#line 271 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 271 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_34_34, 3) = ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24));
#line 271 "tupling.m"
            }
#line 271 "tupling.m"
            {
#line 271 "tupling.m"
              mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__tupling__V_34_34, (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__tupling__conv0_STATE_VARIABLE_IO_35_35);
            }
#line 272 "tupling.m"
            {
#line 272 "tupling.m"
              mercury__io__write_string_3_p_0((MR_String) "...\n");
            }
#line 269 "tupling.m"
          }
#line 274 "tupling.m"
          break;
#line 274 "tupling.m"
      }
#line 321 "tupling.m"
      {
#line 321 "tupling.m"
        transform_hlds__tupling__maybe_tuple_scc_10_p_0_5(&transform_hlds__tupling__env);
      }
#line 277 "tupling.m"
      if ((transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
#line 284 "tupling.m"
        {
#line 284 "tupling.m"
          MR_Word transform_hlds__tupling__CandidateHeadVars_22;
#line 284 "tupling.m"
          MR_Integer transform_hlds__tupling__MinArgsToTuple_23;
#line 278 "tupling.m"
          MR_Word transform_hlds__tupling__SingleProc_21;
#line 278 "tupling.m"
          MR_Word transform_hlds__tupling__V_38_38;
#line 285 "tupling.m"
          MR_Integer transform_hlds__tupling__V_49_49;
#line 285 "tupling.m"
          MR_Integer transform_hlds__tupling__V_50_50;
#line 285 "tupling.m"
          MR_Integer transform_hlds__tupling__V_51_51;
#line 285 "tupling.m"
          MR_Integer transform_hlds__tupling__V_52_52;
#line 285 "tupling.m"
          MR_Integer transform_hlds__tupling__V_53_53;
#line 285 "tupling.m"
          MR_Integer transform_hlds__tupling__V_54_54;
#line 285 "tupling.m"
          MR_Integer transform_hlds__tupling__V_55_55;
#line 286 "tupling.m"
          MR_Integer transform_hlds__tupling__V_39_39;

#line 278 "tupling.m"
          (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14)) == (MR_mktag((MR_Integer) 1)));
#line 278 "tupling.m"
          if ((transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
#line 278 "tupling.m"
            {
#line 278 "tupling.m"
              transform_hlds__tupling__SingleProc_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, (MR_Integer) 0)));
#line 278 "tupling.m"
              transform_hlds__tupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, (MR_Integer) 1)));
#line 278 "tupling.m"
              (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = (transform_hlds__tupling__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "tupling.m"
            }
#line 278 "tupling.m"
          if ((transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
#line 279 "tupling.m"
            {
#line 279 "tupling.m"
              transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24, transform_hlds__tupling__SingleProc_21, &transform_hlds__tupling__CandidateHeadVars_22);
            }
#line 278 "tupling.m"
          else
#line 481 "tupling.m"
            {
#line 481 "tupling.m"
              MR_Word transform_hlds__tupling__TypeInfo_16_85;
#line 481 "tupling.m"
              MR_Word transform_hlds__tupling__TypeCtorInfo_18_87;
#line 481 "tupling.m"
              MR_Word transform_hlds__tupling__ListsOfCandidates_76;
#line 481 "tupling.m"
              MR_Word transform_hlds__tupling__FlatListOfCandidates_77;
#line 481 "tupling.m"
              MR_Word transform_hlds__tupling__CandidatesMultiMap_78;
#line 481 "tupling.m"
              MR_Word transform_hlds__tupling__V_79_79;
#line 486 "tupling.m"
              MR_Box transform_hlds__tupling__conv4_CandidateHeadVars_22;

#line 482 "tupling.m"
              {
#line 482 "tupling.m"
                transform_hlds__tupling__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 482 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_79_79, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_7[0]));
#line 482 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_79_79, 1) = ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_10_p_0_6));
#line 482 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 482 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_79_79, 3) = ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24));
#line 482 "tupling.m"
              }
#line 18363 "transform_hlds.tupling.c"
              transform_hlds__tupling__TypeInfo_16_85 = (MR_Word) &transform_hlds__tupling_scalar_common_1[3];
#line 482 "tupling.m"
              {
#line 482 "tupling.m"
                mercury__list__map_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__tupling__TypeInfo_16_85, transform_hlds__tupling__V_79_79, (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, &transform_hlds__tupling__ListsOfCandidates_76);
              }
#line 484 "tupling.m"
              {
#line 484 "tupling.m"
                mercury__list__condense_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[2], transform_hlds__tupling__ListsOfCandidates_76, &transform_hlds__tupling__FlatListOfCandidates_77);
              }
#line 18375 "transform_hlds.tupling.c"
              transform_hlds__tupling__TypeCtorInfo_18_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 485 "tupling.m"
              {
#line 485 "tupling.m"
                mercury__multi_map__from_flat_assoc_list_2_p_0(transform_hlds__tupling__TypeCtorInfo_18_87, (MR_Word) &transform_hlds__tupling_scalar_common_2[1], transform_hlds__tupling__FlatListOfCandidates_77, &transform_hlds__tupling__CandidatesMultiMap_78);
              }
#line 486 "tupling.m"
              {
#line 486 "tupling.m"
                mercury__map__foldl_4_p_0(transform_hlds__tupling__TypeCtorInfo_18_87, (MR_Word) &transform_hlds__tupling_scalar_common_1[4], transform_hlds__tupling__TypeInfo_16_85, (MR_Word) &transform_hlds__tupling_scalar_common_2[10], transform_hlds__tupling__CandidatesMultiMap_78, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__tupling__conv4_CandidateHeadVars_22);
              }
#line 486 "tupling.m"
              transform_hlds__tupling__CandidateHeadVars_22 = ((MR_Word) transform_hlds__tupling__conv4_CandidateHeadVars_22);
#line 481 "tupling.m"
            }
#line 285 "tupling.m"
          transform_hlds__tupling__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 0)));
#line 285 "tupling.m"
          transform_hlds__tupling__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 1)));
#line 285 "tupling.m"
          transform_hlds__tupling__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 2)));
#line 285 "tupling.m"
          transform_hlds__tupling__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 3)));
#line 285 "tupling.m"
          transform_hlds__tupling__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 4)));
#line 285 "tupling.m"
          transform_hlds__tupling__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 5)));
#line 285 "tupling.m"
          transform_hlds__tupling__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 6)));
#line 285 "tupling.m"
          transform_hlds__tupling__MinArgsToTuple_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 7)));
#line 286 "tupling.m"
          {
#line 286 "tupling.m"
            transform_hlds__tupling__V_39_39 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__tupling_scalar_common_2[2], transform_hlds__tupling__CandidateHeadVars_22);
          }
#line 286 "tupling.m"
          (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = (transform_hlds__tupling__V_39_39 < transform_hlds__tupling__MinArgsToTuple_23);
#line 286 "tupling.m"
          if ((transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
#line 292 "tupling.m"
            {
#line 292 "tupling.m"
#line 292 "tupling.m"
              switch (transform_hlds__tupling__VeryVerbose_19) {
#line 292 "tupling.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 292 "tupling.m"
                case (MR_Integer) 0:
#line 293 "tupling.m"
                  {
#line 293 "tupling.m"
                  }
#line 292 "tupling.m"
                  break;
#line 292 "tupling.m"
                case (MR_Integer) 1:
#line 289 "tupling.m"
                  {
#line 290 "tupling.m"
                    {
#line 290 "tupling.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Too few candidate headvars.\n");
                    }
#line 289 "tupling.m"
                  }
#line 292 "tupling.m"
                  break;
#line 292 "tupling.m"
              }
#line 292 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_TransformMap_29 = transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_28;
#line 292 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_Counter_27 = transform_hlds__tupling__STATE_VARIABLE_Counter_0_26;
#line 292 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_25 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24;
#line 292 "tupling.m"
            }
#line 286 "tupling.m"
          else
#line 296 "tupling.m"
            {
#line 296 "tupling.m"
              transform_hlds__tupling__maybe_tuple_scc_2_11_p_0(transform_hlds__tupling__TraceCounts_11, transform_hlds__tupling__TuningParams_12, (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, transform_hlds__tupling__CandidateHeadVars_22, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_25, transform_hlds__tupling__STATE_VARIABLE_Counter_0_26, transform_hlds__tupling__STATE_VARIABLE_Counter_27, transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_28, transform_hlds__tupling__STATE_VARIABLE_TransformMap_29, transform_hlds__tupling__VeryVerbose_19);
            }
#line 284 "tupling.m"
        }
#line 277 "tupling.m"
      else
#line 311 "tupling.m"
        {
#line 311 "tupling.m"
#line 311 "tupling.m"
          switch (transform_hlds__tupling__VeryVerbose_19) {
#line 311 "tupling.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 311 "tupling.m"
            case (MR_Integer) 0:
#line 312 "tupling.m"
              {
#line 312 "tupling.m"
              }
#line 311 "tupling.m"
              break;
#line 311 "tupling.m"
            case (MR_Integer) 1:
#line 308 "tupling.m"
              {
#line 309 "tupling.m"
                {
#line 309 "tupling.m"
                  mercury__io__write_string_3_p_0((MR_String) "% SCC has no local callers.\n");
                }
#line 308 "tupling.m"
              }
#line 311 "tupling.m"
              break;
#line 311 "tupling.m"
          }
#line 311 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_TransformMap_29 = transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_28;
#line 311 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_Counter_27 = transform_hlds__tupling__STATE_VARIABLE_Counter_0_26;
#line 311 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_25 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24;
#line 311 "tupling.m"
        }
#line 264 "tupling.m"
    }
#line 258 "tupling.m"
  }
#line 258 "tupling.m"
}

#line 1699 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_3(
#line 1699 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1699 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1699 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1699 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 1699 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 1699 "tupling.m"
{
#line 1699 "tupling.m"
  {
#line 1699 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1699 "tupling.m"
    MR_Word transform_hlds__tupling__conv8_STATE_VARIABLE_ModuleInfo_14;

#line 1699 "tupling.m"
    {
#line 1699 "tupling.m"
      transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3), &transform_hlds__tupling__conv8_STATE_VARIABLE_ModuleInfo_14);
    }
#line 1699 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_4 = ((MR_Box) (transform_hlds__tupling__conv8_STATE_VARIABLE_ModuleInfo_14));
#line 1699 "tupling.m"
  }
#line 1699 "tupling.m"
}

#line 234 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_2(
#line 234 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 234 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 234 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 234 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 234 "tupling.m"
{
#line 234 "tupling.m"
  {
#line 234 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 234 "tupling.m"
    MR_Word transform_hlds__tupling__conv6_STATE_VARIABLE_ModuleInfo_9;

#line 234 "tupling.m"
    {
#line 234 "tupling.m"
      transform_hlds__tupling__fix_calls_in_procs_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv6_STATE_VARIABLE_ModuleInfo_9);
    }
#line 234 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv6_STATE_VARIABLE_ModuleInfo_9));
#line 234 "tupling.m"
  }
#line 234 "tupling.m"
}

#line 228 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_1(
#line 228 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 228 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 228 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 228 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 228 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 228 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5,
#line 228 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_6,
#line 228 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_7)
#line 228 "tupling.m"
{
#line 228 "tupling.m"
  {
#line 228 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 228 "tupling.m"
    MR_Word transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_25;
#line 228 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_STATE_VARIABLE_Counter_27;
#line 228 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_TransformMap_29;

#line 228 "tupling.m"
    {
#line 228 "tupling.m"
      transform_hlds__tupling__maybe_tuple_scc_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_25, ((MR_Word) transform_hlds__tupling__wrapper_arg_4), &transform_hlds__tupling__conv1_STATE_VARIABLE_Counter_27, ((MR_Word) transform_hlds__tupling__wrapper_arg_6), &transform_hlds__tupling__conv0_STATE_VARIABLE_TransformMap_29);
    }
#line 228 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_25));
#line 228 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__tupling__conv1_STATE_VARIABLE_Counter_27));
#line 228 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_7 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_TransformMap_29));
#line 228 "tupling.m"
  }
#line 228 "tupling.m"
}

#line 191 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0(
#line 191 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23,
#line 191 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24,
#line 191 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts0_5)
#line 191 "tupling.m"
{
#line 194 "tupling.m"
  {
#line 194 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_40_40;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_49_49;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_50_50;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__Globals_6;
#line 194 "tupling.m"
    MR_Integer transform_hlds__tupling__CellVarLoadCost_7;
#line 194 "tupling.m"
    MR_Integer transform_hlds__tupling__CellVarStoreCost_8;
#line 194 "tupling.m"
    MR_Integer transform_hlds__tupling__FieldVarLoadCost_9;
#line 194 "tupling.m"
    MR_Integer transform_hlds__tupling__FieldVarStoreCost_10;
#line 194 "tupling.m"
    MR_Integer transform_hlds__tupling__CostsRatio_11;
#line 194 "tupling.m"
    MR_Integer transform_hlds__tupling__MinArgsToTuple_12;
#line 194 "tupling.m"
    MR_Integer transform_hlds__tupling__NormalVarStoreCost_13;
#line 194 "tupling.m"
    MR_Integer transform_hlds__tupling__NormalVarLoadCost_14;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__TuningParams_15;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__ModuleName_16;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__TraceCounts_17;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__DepInfo_18;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__DepGraph_19;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__SCCs_20;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__TransformMap_22;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31_31;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__V_34_34;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__V_35_35;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__V_37_37;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_38_38;
#line 194 "tupling.m"
    MR_Word transform_hlds__tupling__V_60_60;
#line 228 "tupling.m"
    MR_Word transform_hlds__tupling__V_21_21;
#line 228 "tupling.m"
    MR_Box transform_hlds__tupling__conv5_STATE_VARIABLE_ModuleInfo_33_33;
#line 228 "tupling.m"
    MR_Box transform_hlds__tupling__conv4_V_21_21;
#line 228 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_TransformMap_22;
#line 234 "tupling.m"
    MR_Box transform_hlds__tupling__conv7_STATE_VARIABLE_ModuleInfo_38_38;
#line 1699 "tupling.m"
    MR_Box transform_hlds__tupling__conv9_STATE_VARIABLE_ModuleInfo_24;

#line 195 "tupling.m"
    {
#line 195 "tupling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__tupling__Globals_6);
    }
#line 197 "tupling.m"
    {
#line 197 "tupling.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__tupling__Globals_6, (MR_Integer) 371, &transform_hlds__tupling__CellVarLoadCost_7);
    }
#line 199 "tupling.m"
    {
#line 199 "tupling.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__tupling__Globals_6, (MR_Integer) 370, &transform_hlds__tupling__CellVarStoreCost_8);
    }
#line 201 "tupling.m"
    {
#line 201 "tupling.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__tupling__Globals_6, (MR_Integer) 373, &transform_hlds__tupling__FieldVarLoadCost_9);
    }
#line 203 "tupling.m"
    {
#line 203 "tupling.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__tupling__Globals_6, (MR_Integer) 372, &transform_hlds__tupling__FieldVarStoreCost_10);
    }
#line 205 "tupling.m"
    {
#line 205 "tupling.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__tupling__Globals_6, (MR_Integer) 395, &transform_hlds__tupling__CostsRatio_11);
    }
#line 206 "tupling.m"
    {
#line 206 "tupling.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__tupling__Globals_6, (MR_Integer) 396, &transform_hlds__tupling__MinArgsToTuple_12);
    }
#line 210 "tupling.m"
    {
#line 210 "tupling.m"
      transform_hlds__tupling__NormalVarStoreCost_13 = mercury__int__min_2_f_0(transform_hlds__tupling__CellVarStoreCost_8, transform_hlds__tupling__FieldVarStoreCost_10);
    }
#line 211 "tupling.m"
    {
#line 211 "tupling.m"
      transform_hlds__tupling__NormalVarLoadCost_14 = mercury__int__min_2_f_0(transform_hlds__tupling__CellVarLoadCost_7, transform_hlds__tupling__FieldVarLoadCost_9);
    }
#line 212 "tupling.m"
    {
#line 212 "tupling.m"
      transform_hlds__tupling__TuningParams_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 212 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 0) = ((MR_Box) (transform_hlds__tupling__NormalVarLoadCost_14));
#line 212 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 1) = ((MR_Box) (transform_hlds__tupling__NormalVarStoreCost_13));
#line 212 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 2) = ((MR_Box) (transform_hlds__tupling__CellVarLoadCost_7));
#line 212 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 3) = ((MR_Box) (transform_hlds__tupling__CellVarStoreCost_8));
#line 212 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 4) = ((MR_Box) (transform_hlds__tupling__FieldVarLoadCost_9));
#line 212 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 5) = ((MR_Box) (transform_hlds__tupling__FieldVarStoreCost_10));
#line 212 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 6) = ((MR_Box) (transform_hlds__tupling__CostsRatio_11));
#line 212 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 7) = ((MR_Box) (transform_hlds__tupling__MinArgsToTuple_12));
#line 212 "tupling.m"
    }
#line 218 "tupling.m"
    {
#line 218 "tupling.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__tupling__ModuleName_16);
    }
#line 219 "tupling.m"
    {
#line 219 "tupling.m"
      mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0(transform_hlds__tupling__ModuleName_16, transform_hlds__tupling__TraceCounts0_5, &transform_hlds__tupling__TraceCounts_17);
    }
#line 221 "tupling.m"
    {
#line 221 "tupling.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31_31);
    }
#line 222 "tupling.m"
    {
#line 222 "tupling.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__tupling__DepInfo_18);
    }
#line 18793 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 223 "tupling.m"
    {
#line 223 "tupling.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__tupling__TypeCtorInfo_40_40, transform_hlds__tupling__DepInfo_18, &transform_hlds__tupling__DepGraph_19);
    }
#line 224 "tupling.m"
    {
#line 224 "tupling.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__tupling__TypeCtorInfo_40_40, transform_hlds__tupling__DepInfo_18, &transform_hlds__tupling__SCCs_20);
    }
#line 228 "tupling.m"
    {
#line 228 "tupling.m"
      transform_hlds__tupling__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 228 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_32_32, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[0]));
#line 228 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_32_32, 1) = ((MR_Box) (transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_1));
#line 228 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 228 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_32_32, 3) = ((MR_Box) (transform_hlds__tupling__TraceCounts_17));
#line 228 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_32_32, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_15));
#line 228 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_32_32, 5) = ((MR_Box) (transform_hlds__tupling__DepGraph_19));
#line 228 "tupling.m"
    }
#line 229 "tupling.m"
    {
#line 229 "tupling.m"
      transform_hlds__tupling__V_34_34 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 229 "tupling.m"
    {
#line 229 "tupling.m"
      transform_hlds__tupling__V_35_35 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0);
    }
#line 18833 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeInfo_49_49 = (MR_Word) &transform_hlds__tupling_scalar_common_1[0];
#line 18835 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 228 "tupling.m"
    {
#line 228 "tupling.m"
      mercury__list__foldl3_8_p_0(transform_hlds__tupling__TypeInfo_49_49, transform_hlds__tupling__TypeCtorInfo_50_50, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[0], transform_hlds__tupling__V_32_32, transform_hlds__tupling__SCCs_20, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31_31)), &transform_hlds__tupling__conv5_STATE_VARIABLE_ModuleInfo_33_33, ((MR_Box) (transform_hlds__tupling__V_34_34)), &transform_hlds__tupling__conv4_V_21_21, ((MR_Box) (transform_hlds__tupling__V_35_35)), &transform_hlds__tupling__conv3_TransformMap_22);
    }
#line 228 "tupling.m"
    transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__tupling__conv5_STATE_VARIABLE_ModuleInfo_33_33);
#line 228 "tupling.m"
    transform_hlds__tupling__V_21_21 = ((MR_Word) transform_hlds__tupling__conv4_V_21_21);
#line 228 "tupling.m"
    transform_hlds__tupling__TransformMap_22 = ((MR_Word) transform_hlds__tupling__conv3_TransformMap_22);
#line 234 "tupling.m"
    {
#line 234 "tupling.m"
      transform_hlds__tupling__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 234 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[0]));
#line 234 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 1) = ((MR_Box) (transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_2));
#line 234 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 234 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 3) = ((MR_Box) (transform_hlds__tupling__TransformMap_22));
#line 234 "tupling.m"
    }
#line 234 "tupling.m"
    {
#line 234 "tupling.m"
      mercury__list__foldl_4_p_0(transform_hlds__tupling__TypeInfo_49_49, transform_hlds__tupling__TypeCtorInfo_50_50, transform_hlds__tupling__V_37_37, transform_hlds__tupling__SCCs_20, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33)), &transform_hlds__tupling__conv7_STATE_VARIABLE_ModuleInfo_38_38);
    }
#line 234 "tupling.m"
    transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_38_38 = ((MR_Word) transform_hlds__tupling__conv7_STATE_VARIABLE_ModuleInfo_38_38);
#line 1699 "tupling.m"
    {
#line 1699 "tupling.m"
      transform_hlds__tupling__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1699 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_60_60, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[0]));
#line 1699 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_60_60, 1) = ((MR_Box) (transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_3));
#line 1699 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1699 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_60_60, 3) = ((MR_Box) (transform_hlds__tupling__TransformMap_22));
#line 1699 "tupling.m"
    }
#line 1699 "tupling.m"
    {
#line 1699 "tupling.m"
      mercury__map__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__tupling__V_60_60, transform_hlds__tupling__TransformMap_22, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_38_38)), &transform_hlds__tupling__conv9_STATE_VARIABLE_ModuleInfo_24);
    }
#line 1699 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24 = ((MR_Word) transform_hlds__tupling__conv9_STATE_VARIABLE_ModuleInfo_24);
#line 194 "tupling.m"
  }
#line 191 "tupling.m"
}

#line 92 "tupling.m"
void MR_CALL 
transform_hlds__tupling__tuple_arguments_4_p_0(
#line 92 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13,
#line 92 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14)
#line 92 "tupling.m"
{
#line 161 "tupling.m"
  {
#line 161 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 161 "tupling.m"
    MR_Word transform_hlds__tupling__Globals_7;
#line 161 "tupling.m"
    MR_String transform_hlds__tupling__TraceCountsFile_8;

#line 165 "tupling.m"
    {
#line 165 "tupling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13, &transform_hlds__tupling__Globals_7);
    }
#line 166 "tupling.m"
    {
#line 166 "tupling.m"
      libs__globals__lookup_string_option_3_p_0(transform_hlds__tupling__Globals_7, (MR_Integer) 394, &transform_hlds__tupling__TraceCountsFile_8);
    }
#line 168 "tupling.m"
    transform_hlds__tupling__succeeded = (strcmp(transform_hlds__tupling__TraceCountsFile_8, (MR_String) "") == 0);
#line 168 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 169 "tupling.m"
      {
#line 169 "tupling.m"
        {
#line 169 "tupling.m"
          libs__compiler_util__report_warning_4_p_0(transform_hlds__tupling__Globals_7, (MR_String) "Warning: --tuple requires --tuple-trace-counts-file to work.\n");
        }
#line 169 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13;
#line 169 "tupling.m"
      }
#line 168 "tupling.m"
    else
#line 172 "tupling.m"
      {
#line 172 "tupling.m"
        MR_Word transform_hlds__tupling__Result_9;

#line 172 "tupling.m"
        {
#line 172 "tupling.m"
          mdbcomp__trace_counts__read_trace_counts_source_4_p_0(transform_hlds__tupling__TraceCountsFile_8, &transform_hlds__tupling__Result_9);
        }
#line 176 "tupling.m"
        if (((MR_tag((MR_Word) transform_hlds__tupling__Result_9)) == (MR_mktag((MR_Integer) 1))))
#line 177 "tupling.m"
          {
#line 177 "tupling.m"
            MR_String transform_hlds__tupling__Message_12 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Result_9, (MR_Integer) 0)));
#line 177 "tupling.m"
            MR_String transform_hlds__tupling__Message_31;
#line 177 "tupling.m"
            MR_String transform_hlds__tupling__V_40_40;
#line 177 "tupling.m"
            MR_Word transform_hlds__tupling__V_46_46 = (MR_Word) &transform_hlds__tupling_scalar_common_3[0];
#line 177 "tupling.m"
            MR_String transform_hlds__tupling__V_47_47;
#line 177 "tupling.m"
            MR_String transform_hlds__tupling__V_49_49;
#line 177 "tupling.m"
            MR_String transform_hlds__tupling__V_50_50;
#line 177 "tupling.m"
            MR_String transform_hlds__tupling__V_57_57;

#line 188 "tupling.m"
            {
#line 188 "tupling.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__tupling__V_46_46, transform_hlds__tupling__Message_12, &transform_hlds__tupling__V_40_40);
            }
#line 186 "tupling.m"
            {
#line 186 "tupling.m"
              transform_hlds__tupling__V_47_47 = mercury__string__f_43_43_2_f_0(transform_hlds__tupling__V_40_40, (MR_String) ")\n");
            }
#line 186 "tupling.m"
            {
#line 186 "tupling.m"
              transform_hlds__tupling__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) " (", transform_hlds__tupling__V_47_47);
            }
#line 188 "tupling.m"
            {
#line 188 "tupling.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__tupling__V_46_46, transform_hlds__tupling__TraceCountsFile_8, &transform_hlds__tupling__V_50_50);
            }
#line 186 "tupling.m"
            {
#line 186 "tupling.m"
              transform_hlds__tupling__V_57_57 = mercury__string__f_43_43_2_f_0(transform_hlds__tupling__V_50_50, transform_hlds__tupling__V_49_49);
            }
#line 186 "tupling.m"
            {
#line 186 "tupling.m"
              transform_hlds__tupling__Message_31 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: unable to read trace count summary from ", transform_hlds__tupling__V_57_57);
            }
#line 189 "tupling.m"
            {
#line 189 "tupling.m"
              libs__compiler_util__report_warning_4_p_0(transform_hlds__tupling__Globals_7, transform_hlds__tupling__Message_31);
            }
#line 177 "tupling.m"
            *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13;
#line 177 "tupling.m"
          }
#line 176 "tupling.m"
        else
#line 174 "tupling.m"
          {
#line 174 "tupling.m"
            MR_Word transform_hlds__tupling__TraceCounts_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Result_9, (MR_Integer) 1)));
#line 174 "tupling.m"
            MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Result_9, (MR_Integer) 0)));

#line 175 "tupling.m"
            {
#line 175 "tupling.m"
              transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14, transform_hlds__tupling__TraceCounts_11);
            }
#line 174 "tupling.m"
          }
#line 172 "tupling.m"
      }
#line 161 "tupling.m"
  }
#line 92 "tupling.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.tupling. */
