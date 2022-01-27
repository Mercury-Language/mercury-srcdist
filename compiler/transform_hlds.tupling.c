/*
** Automatically generated from `tupling.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1199 "tupling.m"
struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s {
#line 1206 "tupling.m"
  MR_bool transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded;
#line 1206 "tupling.m"
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14;
#line 1206 "tupling.m"
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19;
#line 1206 "tupling.m"
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVarArgPos_20;
#line 1206 "tupling.m"
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26;
#line 1226 "tupling.m"
  jmp_buf transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__commit_0;
#line 1226 "tupling.m"
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_80_80;
#line 1226 "tupling.m"
  MR_Word transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32;
#line 1227 "tupling.m"
  MR_Box transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__conv0_Var_32;
#line 1199 "tupling.m"
};

#line 253 "tupling.m"
struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s {
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13;
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14;
#line 259 "tupling.m"
  MR_bool transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded;
#line 316 "tupling.m"
  jmp_buf transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__commit_0;
#line 316 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_71;
#line 316 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeInfo_8_72;
#line 316 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeProc_65;
#line 316 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeKey_69;
#line 316 "tupling.m"
  MR_Word transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CallingKeys_70;
#line 316 "tupling.m"
  MR_Box transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__conv1_CalleeProc_65;
#line 253 "tupling.m"
};


#line 217 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 220 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 223 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 226 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 229 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0;

#line 232 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 235 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 238 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 241 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 244 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 247 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 250 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 253 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_tupling_proposal_0;

#line 256 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 259 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 262 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 265 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 268 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 271 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 274 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

#line 277 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 280 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 283 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 286 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 289 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 292 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_costs_0_0[2];

#line 295 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_costs_0_0[2];

#line 298 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_costs_0_0;

#line 301 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_costs_0_0[1];

#line 304 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_costs_0[1];

#line 307 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_costs_0[1];

#line 310 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_costs_0[1];

#line 313 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0;

#line 316 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_count_info_0_0[7];

#line 319 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_count_info_0_0[7];

#line 322 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_info_0_0;

#line 325 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_info_0_0[1];

#line 328 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_info_0[1];

#line 331 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_info_0[1];

#line 334 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_info_0[1];

#line 337 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 340 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_count_state_0_0[4];

#line 343 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_count_state_0_0[4];

#line 346 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_state_0_0;

#line 349 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_state_0_0[1];

#line 352 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_state_0[1];

#line 355 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_state_0[1];

#line 358 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_state_0[1];

#line 361 "transform_hlds.tupling.c"
static const MR_EnumFunctorDesc transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0;

#line 364 "transform_hlds.tupling.c"
static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_value_ordered_opt_tuple_alloc_0[1];

#line 367 "transform_hlds.tupling.c"
static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_name_ordered_opt_tuple_alloc_0[1];

#line 370 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_opt_tuple_alloc_0[1];

#line 373 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_transformed_proc_0;

#line 376 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1builtin__type_ctor_info_int_0;

#line 379 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_transformed_proc_0_0[4];

#line 382 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_transformed_proc_0_0[4];

#line 385 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_transformed_proc_0_0;

#line 388 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_transformed_proc_0_0[1];

#line 391 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_transformed_proc_0[1];

#line 394 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_transformed_proc_0[1];

#line 397 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_transformed_proc_0[1];

#line 400 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_tuning_params_0_0[8];

#line 403 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_tuning_params_0_0[8];

#line 406 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tuning_params_0_0;

#line 409 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tuning_params_0_0[1];

#line 412 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tuning_params_0[1];

#line 415 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tuning_params_0[1];

#line 418 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tuning_params_0[1];

#line 421 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0;

#line 424 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 427 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 430 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 433 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_tupling_proposal_0_1[3];

#line 436 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_tupling_proposal_0_1[3];

#line 439 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1;

#line 442 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_0[1];

#line 445 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_1[1];

#line 448 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tupling_proposal_0[2];

#line 451 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tupling_proposal_0[2];

#line 454 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tupling_proposal_0[2];

#line 457 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0_10001(
#line 460 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 462 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 465 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0_10001(
#line 468 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 470 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 472 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 475 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0_10001(
#line 478 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 480 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 483 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0_10001(
#line 486 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 488 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 490 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 493 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0_10001(
#line 496 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 498 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 501 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0_10001(
#line 504 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 506 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 508 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 511 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0_10001(
#line 514 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 516 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 519 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0_10001(
#line 522 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 524 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 526 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 529 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0_10001(
#line 532 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 534 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 537 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0_10001(
#line 540 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 542 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 544 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 547 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0_10001(
#line 550 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 552 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 555 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0_10001(
#line 558 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 560 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 562 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 565 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0_10001(
#line 568 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 570 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 573 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0_10001(
#line 576 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 578 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 580 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 583 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0_10001(
#line 586 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 588 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 591 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0_10001(
#line 594 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 596 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 598 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 601 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0_10001(
#line 604 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 606 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 609 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0_10001(
#line 612 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 614 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 616 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 619 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0_10001(
#line 622 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 624 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 627 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0_10001(
#line 630 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 632 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 634 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 637 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0_10001(
#line 640 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 642 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2);

#line 645 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0_10001(
#line 648 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 650 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 652 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3);

#line 655 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 658 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 660 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 662 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 664 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 666 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 669 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 672 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 674 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 676 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 678 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 680 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 683 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 686 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 688 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 690 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 692 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 694 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 697 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 700 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 702 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 704 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 706 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 708 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 711 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
#line 714 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 716 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 718 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 720 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 722 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 724 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_5,
#line 726 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_6,
#line 728 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_7,
#line 730 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_8);

#line 604 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_p_0(
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__V_19_19,
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__V_20_20,
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__V_21_21,
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__V_22_22,
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__V_23_23,
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__List_7,
#line 604 "tupling.m"
  MR_Integer transform_hlds__tupling__Length_8,
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_0_11,
#line 604 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Acc_12);

#line 596 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_p_0(
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__V_23_23,
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__V_24_24,
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__V_25_25,
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__V_26_26,
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__V_27_27,
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 596 "tupling.m"
  MR_Integer transform_hlds__tupling__MinLength_3,
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_0_4,
#line 596 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Acc_5);

#line 926 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void);

#line 925 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void);

#line 924 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void);

#line 923 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void);

#line 1578 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_p_0(
#line 1578 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 1578 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__6_6);

#line 919 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 919 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1);

#line 919 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

#line 1686 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_6,
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13,
#line 1686 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14);

#line 1484 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_2(
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1484 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1367 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_1(
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1367 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1282 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(
#line 1282 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_8,
#line 1282 "tupling.m"
  MR_Word transform_hlds__tupling__Inputs_9,
#line 1282 "tupling.m"
  MR_Word transform_hlds__tupling__Outputs_10,
#line 1282 "tupling.m"
  MR_Word transform_hlds__tupling__MaybeNeedAcrossCall_11,
#line 1282 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_19,
#line 1282 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_20);

#line 1903 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1903__1_3_p_0(
#line 1903 "tupling.m"
  MR_Word transform_hlds__tupling__ArgList_5,
#line 1903 "tupling.m"
  MR_Integer transform_hlds__tupling__HeadVar__2_11,
#line 1903 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__3_12);

#line 686 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__686__1_3_f_0(
#line 686 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVarsList_7,
#line 686 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_37,
#line 686 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_38,
#line 686 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__4_39);

#line 656 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__656__1_3_p_0(
#line 656 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVars_36,
#line 656 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_65,
#line 656 "tupling.m"
  MR_Integer * transform_hlds__tupling__HeadVar__3_66);

#line 566 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__566__1_3_f_0(
#line 566 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_4,
#line 566 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVars_16,
#line 566 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_26,
#line 566 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__4_27);

#line 492 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__492__1_3_p_0(
#line 492 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_19,
#line 492 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_20,
#line 492 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__3_21);

#line 926 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 926 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 926 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 925 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 925 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 925 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 924 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 924 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 924 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 923 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 923 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 923 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 1578 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0(
#line 1578 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1578 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1578 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1578 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__4_4,
#line 1578 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 1578 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__6_6);

#line 503 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0(
#line 503 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 503 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 503 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 503 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0(
#line 503 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 503 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 505 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0(
#line 505 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 505 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 505 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 505 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0(
#line 505 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 505 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 828 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0(
#line 828 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 828 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 828 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 828 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0(
#line 828 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 828 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 1653 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0(
#line 1653 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 1653 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1653 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 1653 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0(
#line 1653 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1653 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 1651 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0(
#line 1651 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 1651 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1651 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 1651 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0(
#line 1651 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1651 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 919 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0(
#line 919 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1);

#line 919 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0(void);

#line 840 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0(
#line 840 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 840 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 840 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 840 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0(
#line 840 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 840 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 816 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0(
#line 816 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 816 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 816 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 816 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0(
#line 816 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 816 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 848 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0(
#line 848 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 848 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 848 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 848 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0(
#line 848 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 848 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 423 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0(
#line 423 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 423 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 423 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 423 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0(
#line 423 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 423 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 425 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0(
#line 425 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 425 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 425 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3);

#line 425 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0(
#line 425 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 425 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2);

#line 2011 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_switch_total_count_2_5_p_0(
#line 2011 "tupling.m"
  MR_Word transform_hlds__tupling__SwitchGoalPath_6,
#line 2011 "tupling.m"
  MR_Word transform_hlds__tupling__PathPort_7,
#line 2011 "tupling.m"
  MR_Word transform_hlds__tupling__LineNoAndCount_8,
#line 2011 "tupling.m"
  MR_Integer transform_hlds__tupling__STATE_VARIABLE_TotalAcc_0_10,
#line 2011 "tupling.m"
  MR_Integer * transform_hlds__tupling__STATE_VARIABLE_TotalAcc_11);

#line 2009 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0_1(
#line 2009 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 2009 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 2009 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 2009 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 2009 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 1991 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0(
#line 1991 "tupling.m"
  MR_Word transform_hlds__tupling__ProcCounts_5,
#line 1991 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMap_6,
#line 1991 "tupling.m"
  MR_Word transform_hlds__tupling__GoalId_7,
#line 1991 "tupling.m"
  MR_Float * transform_hlds__tupling__RelFreq_8);

#line 1969 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_disjunct_relative_frequency_4_p_0(
#line 1969 "tupling.m"
  MR_Word transform_hlds__tupling__ProcCounts_5,
#line 1969 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMap_6,
#line 1969 "tupling.m"
  MR_Word transform_hlds__tupling__GoalId_7,
#line 1969 "tupling.m"
  MR_Float * transform_hlds__tupling__RelFreq_8);

#line 1950 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_ite_relative_frequencies_6_p_0(
#line 1950 "tupling.m"
  MR_Word transform_hlds__tupling__ProcCounts_7,
#line 1950 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMap_8,
#line 1950 "tupling.m"
  MR_Word transform_hlds__tupling__ThenGoalId_9,
#line 1950 "tupling.m"
  MR_Word transform_hlds__tupling__ElseGoalId_10,
#line 1950 "tupling.m"
  MR_Float * transform_hlds__tupling__ThenRelFreq_11,
#line 1950 "tupling.m"
  MR_Float * transform_hlds__tupling__ElseRelFreq_12);

#line 1906 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(
#line 1906 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1906 "tupling.m"
  MR_Integer transform_hlds__tupling__HeadVar__2_2,
#line 1906 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1906 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__4_4);

#line 1903 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0_1(
#line 1903 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1903 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1903 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2);

#line 1899 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0(
#line 1899 "tupling.m"
  MR_Word transform_hlds__tupling__ArgList_5,
#line 1899 "tupling.m"
  MR_Word transform_hlds__tupling__Indices_6,
#line 1899 "tupling.m"
  MR_Word * transform_hlds__tupling__Selected_7,
#line 1899 "tupling.m"
  MR_Word * transform_hlds__tupling__NotSelected_8);

#line 1871 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_cases_9_p_0(
#line 1871 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1871 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__2_2,
#line 1871 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3,
#line 1871 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_4,
#line 1871 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5,
#line 1871 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_6,
#line 1871 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7,
#line 1871 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8,
#line 1871 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_9);

#line 1859 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(
#line 1859 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1859 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__2_2,
#line 1859 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3,
#line 1859 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_4,
#line 1859 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5,
#line 1859 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_6,
#line 1859 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7,
#line 1859 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8,
#line 1859 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_9);

#line 1842 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_conj_9_p_0(
#line 1842 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1842 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__2_2,
#line 1842 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3,
#line 1842 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_4,
#line 1842 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5,
#line 1842 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_6,
#line 1842 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7,
#line 1842 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8,
#line 1842 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_9);

#line 1731 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_9_p_0(
#line 1731 "tupling.m"
  MR_Word transform_hlds__tupling__Goal0_10,
#line 1731 "tupling.m"
  MR_Word * transform_hlds__tupling__Goal_11,
#line 1731 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78,
#line 1731 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_79,
#line 1731 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80,
#line 1731 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_81,
#line 1731 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82,
#line 1731 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83,
#line 1731 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_15);

#line 1693 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_proc_4_p_0(
#line 1693 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_5,
#line 1693 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1693 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23,
#line 1693 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24);

#line 1686 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_p_0(
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_6,
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_7,
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13,
#line 1686 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14);

#line 1677 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0_1(
#line 1677 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1677 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1677 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1677 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1673 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0(
#line 1673 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_5,
#line 1673 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_6,
#line 1673 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_8,
#line 1673 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_9);

#line 1627 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__combine_inserts_3_p_0(
#line 1627 "tupling.m"
  MR_Word transform_hlds__tupling__A_1,
#line 1627 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1627 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__3_3);

#line 1601 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_insert_map_2_7_p_0(
#line 1601 "tupling.m"
  MR_Word transform_hlds__tupling__CellVar_8,
#line 1601 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVars_9,
#line 1601 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVarsSet_10,
#line 1601 "tupling.m"
  MR_Word transform_hlds__tupling__Anchor_11,
#line 1601 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 1601 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_InsertMap_0_18,
#line 1601 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_InsertMap_19);

#line 1598 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0_1(
#line 1598 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1598 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1598 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1598 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 1598 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 1593 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0(
#line 1593 "tupling.m"
  MR_Word transform_hlds__tupling__CellVar_5,
#line 1593 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVars_6,
#line 1593 "tupling.m"
  MR_Word transform_hlds__tupling__IntervalInfo_7,
#line 1593 "tupling.m"
  MR_Word * transform_hlds__tupling__InsertMap_8);

#line 1551 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_interval_info_3_p_0(
#line 1551 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_4,
#line 1551 "tupling.m"
  MR_Word transform_hlds__tupling__ProcInfo_5,
#line 1551 "tupling.m"
  MR_Word * transform_hlds__tupling__IntervalInfo_6);

#line 1537 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_branch_costs_4_p_0(
#line 1537 "tupling.m"
  MR_Word transform_hlds__tupling__BranchState_5,
#line 1537 "tupling.m"
  MR_Float transform_hlds__tupling__Weight_6,
#line 1537 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_16,
#line 1537 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_17);

#line 1531 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__reset_count_state_counts_2_p_0(
#line 1531 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_4,
#line 1531 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_5);

#line 1523 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_clobber_regs_3_p_0(
#line 1523 "tupling.m"
  MR_Word transform_hlds__tupling__NewVars_4,
#line 1523 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_6,
#line 1523 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_7);

#line 1487 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_2_5_p_0(
#line 1487 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1487 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_2,
#line 1487 "tupling.m"
  MR_Word transform_hlds__tupling__Var_3,
#line 1487 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_4,
#line 1487 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_5);

#line 1484 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0_1(
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1484 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1478 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0(
#line 1478 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1478 "tupling.m"
  MR_Word transform_hlds__tupling__Vars_6,
#line 1478 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_10,
#line 1478 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_11);

#line 1452 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_3(
#line 1452 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1452 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1452 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1452 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1462 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_2(
#line 1462 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1462 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1462 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1462 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1452 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_1(
#line 1452 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1452 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1452 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1452 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1439 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0(
#line 1439 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_6,
#line 1439 "tupling.m"
  MR_Word transform_hlds__tupling__DeconstructCellVar_7,
#line 1439 "tupling.m"
  MR_Word transform_hlds__tupling__DeconstructFieldVars_8,
#line 1439 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_State_0_18,
#line 1439 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_State_19);

#line 1431 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_3_p_0(
#line 1431 "tupling.m"
  MR_Word transform_hlds__tupling__Vars_4,
#line 1431 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_8,
#line 1431 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_9);

#line 1416 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(
#line 1416 "tupling.m"
  MR_Integer transform_hlds__tupling__LoadCost_5,
#line 1416 "tupling.m"
  MR_Word transform_hlds__tupling__Var_6,
#line 1416 "tupling.m"
  MR_Word transform_hlds__tupling__CountState0_7,
#line 1416 "tupling.m"
  MR_Word * transform_hlds__tupling__CountState_8);

#line 1384 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_normal_var_in_reg_4_p_0(
#line 1384 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1384 "tupling.m"
  MR_Word transform_hlds__tupling__Var_6,
#line 1384 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_10,
#line 1384 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_11);

#line 1369 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_in_reg_4_p_0(
#line 1369 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1369 "tupling.m"
  MR_Word transform_hlds__tupling__Var_6,
#line 1369 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_12,
#line 1369 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_13);

#line 1367 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0_1(
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1367 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1363 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0(
#line 1363 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1363 "tupling.m"
  MR_Word transform_hlds__tupling__Vars_6,
#line 1363 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_8,
#line 1363 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_9);

#line 1484 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_cases_4_p_0_1(
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1484 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1335 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_cases_4_p_0(
#line 1335 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1335 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1335 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_3,
#line 1335 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_4);

#line 1484 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_disj_4_p_0_1(
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1484 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1312 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_disj_4_p_0(
#line 1312 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1312 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1312 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_3,
#line 1312 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_4);

#line 1304 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_conj_4_p_0(
#line 1304 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1304 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1304 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_3,
#line 1304 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_4);

#line 1367 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0_1(
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1367 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1252 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0(
#line 1252 "tupling.m"
  MR_Word transform_hlds__tupling__GoalExpr_6,
#line 1252 "tupling.m"
  MR_Word transform_hlds__tupling__GoalInfo_7,
#line 1252 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_8,
#line 1252 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_27,
#line 1252 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_28);

#line 1226 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_1(
#line 1226 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 1227 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_3(
#line 1227 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 1226 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_2(
#line 1226 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 1226 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_4(
#line 1226 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 1199 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0(
#line 1199 "tupling.m"
  MR_Word transform_hlds__tupling__GoalExpr_7,
#line 1199 "tupling.m"
  MR_Word transform_hlds__tupling__GoalInfo_8,
#line 1199 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_9,
#line 1199 "tupling.m"
  MR_Word transform_hlds__tupling__CalleeTuplingProposal_10,
#line 1199 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_39,
#line 1199 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_40);

#line 1112 "tupling.m"
static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_2(
#line 1112 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1112 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1);

#line 1111 "tupling.m"
static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_1(
#line 1111 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1111 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1);

#line 1027 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0(
#line 1027 "tupling.m"
  MR_Word transform_hlds__tupling__Goal_5,
#line 1027 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_6,
#line 1027 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_113,
#line 1027 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_114);

#line 1367 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_proc_3_p_0_1(
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1367 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 1007 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_proc_3_p_0(
#line 1007 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_4,
#line 1007 "tupling.m"
  MR_Float * transform_hlds__tupling__Loads_5,
#line 1007 "tupling.m"
  MR_Float * transform_hlds__tupling__Stores_6);

#line 965 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_11,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_12,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_13,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__TuplingScheme_14,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_15,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_16,
#line 965 "tupling.m"
  MR_Float transform_hlds__tupling__STATE_VARIABLE_Loads_0_34,
#line 965 "tupling.m"
  MR_Float * transform_hlds__tupling__STATE_VARIABLE_Loads_35,
#line 965 "tupling.m"
  MR_Float transform_hlds__tupling__STATE_VARIABLE_Stores_0_36,
#line 965 "tupling.m"
  MR_Float * transform_hlds__tupling__STATE_VARIABLE_Stores_37);

#line 874 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__prepare_proc_for_counting_5_p_0(
#line 874 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_6,
#line 874 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ReverseGoalPathMapMap_0_31,
#line 874 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ReverseGoalPathMapMap_32,
#line 874 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33,
#line 874 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_34);

#line 864 "tupling.m"
static MR_Word MR_CALL 
transform_hlds__tupling__get_own_tupling_proposal_1_f_0(
#line 864 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_3);

#line 854 "tupling.m"
static MR_Word MR_CALL 
transform_hlds__tupling__get_tupling_proposal_2_f_0(
#line 854 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_4,
#line 854 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_5);

#line 755 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__create_aux_pred_9_p_0(
#line 755 "tupling.m"
  MR_Word transform_hlds__tupling__PredId_10,
#line 755 "tupling.m"
  MR_Integer transform_hlds__tupling__ProcId_11,
#line 755 "tupling.m"
  MR_Word transform_hlds__tupling__PredInfo_12,
#line 755 "tupling.m"
  MR_Word transform_hlds__tupling__ProcInfo_13,
#line 755 "tupling.m"
  MR_Integer transform_hlds__tupling__Counter_14,
#line 755 "tupling.m"
  MR_Word * transform_hlds__tupling__AuxPredProcId_15,
#line 755 "tupling.m"
  MR_Word * transform_hlds__tupling__CallAux_16,
#line 755 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo0_17,
#line 755 "tupling.m"
  MR_Word * transform_hlds__tupling__ModuleInfo_18);

#line 686 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0_1(
#line 686 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 686 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 686 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 686 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 679 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0(
#line 679 "tupling.m"
  MR_Word transform_hlds__tupling__CellVar_6,
#line 679 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVarsList_7,
#line 679 "tupling.m"
  MR_Word transform_hlds__tupling__InsertMap_8,
#line 679 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_0_34,
#line 679 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ProcInfo_35);

#line 656 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0_1(
#line 656 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 656 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 656 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2);

#line 629 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0(
#line 629 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_1,
#line 629 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 629 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_3,
#line 629 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_4,
#line 629 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 629 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__6_6,
#line 629 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__7_7,
#line 629 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__8_8);

#line 626 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_procs_7_p_0_1(
#line 626 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 626 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 626 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 626 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 626 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4,
#line 626 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_5,
#line 626 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_6,
#line 626 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_7,
#line 626 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_8);

#line 621 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_procs_7_p_0(
#line 621 "tupling.m"
  MR_Word transform_hlds__tupling__TuplingScheme_8,
#line 621 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_12,
#line 621 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_13,
#line 621 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_14,
#line 621 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_15,
#line 621 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_16,
#line 621 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_17);

#line 566 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__make_tupling_proposal_5_p_0_1(
#line 566 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 566 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 566 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2);

#line 558 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__make_tupling_proposal_5_p_0(
#line 558 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_6,
#line 558 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_7,
#line 558 "tupling.m"
  MR_Integer transform_hlds__tupling__MinArgsToTuple_8,
#line 558 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_4,
#line 558 "tupling.m"
  MR_Word * transform_hlds__tupling__TuplingProposal_12);

#line 960 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_2(
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 960 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 960 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5);

#line 539 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_1(
#line 539 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 539 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 539 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2);

#line 528 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0(
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_9,
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_10,
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_11,
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_12,
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_13,
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_14,
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__MaybeBestScheme0_15,
#line 528 "tupling.m"
  MR_Word * transform_hlds__tupling__MaybeBestScheme_16);

#line 492 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0_1(
#line 492 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 492 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 492 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 492 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 483 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0(
#line 483 "tupling.m"
  MR_String transform_hlds__tupling__HeadVarName_5,
#line 483 "tupling.m"
  MR_Word transform_hlds__tupling__ListOfOrigins_6,
#line 483 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars0_7,
#line 483 "tupling.m"
  MR_Word * transform_hlds__tupling__CandidateHeadVars_8);

#line 457 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_2_6_f_0(
#line 457 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_8,
#line 457 "tupling.m"
  MR_Word transform_hlds__tupling__VarSet_9,
#line 457 "tupling.m"
  MR_Word transform_hlds__tupling__VarTypes_10,
#line 457 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_11,
#line 457 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar_12,
#line 457 "tupling.m"
  MR_Word transform_hlds__tupling__ArgMode_13,
#line 457 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__7_7);

#line 454 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0_1(
#line 454 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 454 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 454 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 454 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 443 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(
#line 443 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_4,
#line 443 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_2,
#line 443 "tupling.m"
  MR_Word * transform_hlds__tupling__CandidateHeadVars_8);

#line 361 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_3_13_p_0(
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_14,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_15,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_16,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_17,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_18,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__CostsWithoutTupling_19,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_30,
#line 361 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_32,
#line 361 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_33,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_34,
#line 361 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_35,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__VeryVerbose_23);

#line 960 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_2(
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 960 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 960 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5);

#line 337 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_1(
#line 337 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 337 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 337 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 337 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 337 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 337 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5);

#line 330 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0(
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_12,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_13,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_14,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_15,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_25,
#line 330 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_26,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_27,
#line 330 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_28,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_29,
#line 330 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_30,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__VeryVerbose_19);

#line 480 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_7(
#line 480 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 480 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 480 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 480 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 480 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 476 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_6(
#line 476 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 476 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 476 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2);

#line 266 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_1(
#line 266 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 266 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 266 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 266 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 316 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_2(
#line 316 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 316 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_4(
#line 316 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 316 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_3(
#line 316 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 316 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_5(
#line 316 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg);

#line 253 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0(
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_11,
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_12,
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__DepGraph_13,
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__SCC_14,
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24,
#line 253 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_25,
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_26,
#line 253 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_27,
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_28,
#line 253 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_29);

#line 1683 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_3(
#line 1683 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1683 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1683 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1683 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 1683 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4);

#line 229 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_2(
#line 229 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 229 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 229 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 229 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3);

#line 223 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_1(
#line 223 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 223 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 223 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 223 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 223 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 223 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5,
#line 223 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_6,
#line 223 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_7);

#line 186 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0(
#line 186 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23,
#line 186 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24,
#line 186 "tupling.m"
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
    ((MR_Box) (&transform_hlds__tupling__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2863 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 2872 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 2881 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2889 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2897 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0
  }
};

#line 2906 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2914 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2923 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2932 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2940 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2948 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 2957 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 2966 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__tupling__type_ctor_info_tupling_proposal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0
  }
};

#line 2975 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2983 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2992 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3000 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3009 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3018 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3026 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3035 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 3044 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tupling__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3052 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 3060 "transform_hlds.tupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__tupling__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_PseudoTypeInfo) &transform_hlds__tupling__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 3069 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_candidate_headvar_origins_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____candidate_headvar_origins_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____candidate_headvar_origins_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "candidate_headvar_origins",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3090 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__tupling__pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3098 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_candidate_headvars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____candidate_headvars_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____candidate_headvars_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "candidate_headvars",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3119 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_costs_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3125 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_costs_0_0[2] = {
  (MR_String) "avg_loads",
  (MR_String) "avg_stores"
};

#line 3131 "transform_hlds.tupling.c"
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

#line 3146 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_costs_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_costs_0_0
};

#line 3151 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_costs_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_costs_0_0
  }
};

#line 3160 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_costs_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_costs_0_0
};

#line 3165 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_costs_0[1] = {
  (MR_Integer) 0
};

#line 3170 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_costs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____costs_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____costs_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "costs",
  {
    transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_costs_0
  },
  {
    transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_costs_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_costs_0
};

#line 3191 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0
  }
};

#line 3200 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_count_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tuning_params_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 3211 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_count_info_0_0[7] = {
  (MR_String) "ci_pred_proc_id",
  (MR_String) "ci_proc",
  (MR_String) "ci_module",
  (MR_String) "ci_proc_counts",
  (MR_String) "ci_params",
  (MR_String) "ci_tupling_scheme",
  (MR_String) "ci_rev_goal_path_map"
};

#line 3222 "transform_hlds.tupling.c"
static const MR_DuFunctorDesc transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_info_0_0 = {
  (MR_String) "count_info",
  (MR_Integer) 7,
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

#line 3237 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_info_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_info_0_0
};

#line 3242 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_info_0_0
  }
};

#line 3251 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_info_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_info_0_0
};

#line 3256 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_info_0[1] = {
  (MR_Integer) 0
};

#line 3261 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____count_info_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____count_info_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "count_info",
  {
    transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_info_0
  },
  {
    transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_info_0
};

#line 3282 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3290 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_count_state_0_0[4] = {
  (MR_PseudoTypeInfo) &transform_hlds__tupling__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3298 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_count_state_0_0[4] = {
  (MR_String) "cs_reg_vars",
  (MR_String) "cs_stack_vars",
  (MR_String) "cs_load_costs",
  (MR_String) "cs_store_costs"
};

#line 3306 "transform_hlds.tupling.c"
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

#line 3321 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_state_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_state_0_0
};

#line 3326 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_count_state_0_0
  }
};

#line 3335 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_state_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_count_state_0_0
};

#line 3340 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_state_0[1] = {
  (MR_Integer) 0
};

#line 3345 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____count_state_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____count_state_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "count_state",
  {
    transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_count_state_0
  },
  {
    transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_count_state_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_count_state_0
};

#line 3366 "transform_hlds.tupling.c"
static const MR_EnumFunctorDesc transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0 = {
  (MR_String) "opt_tuple_alloc",
  (MR_Integer) 0
};

#line 3372 "transform_hlds.tupling.c"
static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_value_ordered_opt_tuple_alloc_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0
};

#line 3377 "transform_hlds.tupling.c"
static const MR_EnumFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__enum_name_ordered_opt_tuple_alloc_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__enum_functor_desc_opt_tuple_alloc_0_0
};

#line 3382 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_opt_tuple_alloc_0[1] = {
  (MR_Integer) 0
};

#line 3387 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_opt_tuple_alloc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__tupling____Unify____opt_tuple_alloc_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____opt_tuple_alloc_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "opt_tuple_alloc",
  {
    transform_hlds__tupling__transform_hlds__tupling__enum_name_ordered_opt_tuple_alloc_0
  },
  {
    transform_hlds__tupling__transform_hlds__tupling__enum_value_ordered_opt_tuple_alloc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_opt_tuple_alloc_0
};

#line 3408 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0
  }
};

#line 3417 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transform_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____transform_map_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____transform_map_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "transform_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_transformed_proc_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3438 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3446 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_transformed_proc_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 3454 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_transformed_proc_0_0[4] = {
  (MR_String) "transformed_pred_proc_id",
  (MR_String) "tuple_cons_type",
  (MR_String) "args_to_tuple",
  (MR_String) "call_template"
};

#line 3462 "transform_hlds.tupling.c"
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

#line 3477 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_transformed_proc_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_transformed_proc_0_0
};

#line 3482 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_transformed_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_transformed_proc_0_0
  }
};

#line 3491 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_transformed_proc_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_transformed_proc_0_0
};

#line 3496 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_transformed_proc_0[1] = {
  (MR_Integer) 0
};

#line 3501 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____transformed_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____transformed_proc_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "transformed_proc",
  {
    transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_transformed_proc_0
  },
  {
    transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_transformed_proc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_transformed_proc_0
};

#line 3522 "transform_hlds.tupling.c"
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

#line 3534 "transform_hlds.tupling.c"
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

#line 3546 "transform_hlds.tupling.c"
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

#line 3561 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tuning_params_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tuning_params_0_0
};

#line 3566 "transform_hlds.tupling.c"
static const MR_DuPtagLayout transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tuning_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tuning_params_0_0
  }
};

#line 3575 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tuning_params_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tuning_params_0_0
};

#line 3580 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tuning_params_0[1] = {
  (MR_Integer) 0
};

#line 3585 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tuning_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____tuning_params_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____tuning_params_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "tuning_params",
  {
    transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tuning_params_0
  },
  {
    transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tuning_params_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tuning_params_0
};

#line 3606 "transform_hlds.tupling.c"
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

#line 3621 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3629 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__tupling__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3638 "transform_hlds.tupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__tupling__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__tupling__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0
  }
};

#line 3646 "transform_hlds.tupling.c"
static const MR_PseudoTypeInfo transform_hlds__tupling__transform_hlds__tupling__field_types_tupling_proposal_0_1[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__tupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__tupling__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0
};

#line 3653 "transform_hlds.tupling.c"
static const MR_ConstString transform_hlds__tupling__transform_hlds__tupling__field_names_tupling_proposal_0_1[3] = {
  (MR_String) "cell_var",
  (MR_String) "field_vars",
  (MR_String) "field_var_arg_pos"
};

#line 3660 "transform_hlds.tupling.c"
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

#line 3675 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_0[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0
};

#line 3680 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_stag_ordered_tupling_proposal_0_1[1] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1
};

#line 3685 "transform_hlds.tupling.c"
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

#line 3699 "transform_hlds.tupling.c"
static const MR_DuFunctorDescPtr transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tupling_proposal_0[2] = {
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_0,
  &transform_hlds__tupling__transform_hlds__tupling__du_functor_desc_tupling_proposal_0_1
};

#line 3705 "transform_hlds.tupling.c"
static const MR_Integer transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tupling_proposal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3711 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tupling____Unify____tupling_proposal_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____tupling_proposal_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "tupling_proposal",
  {
    transform_hlds__tupling__transform_hlds__tupling__du_name_ordered_tupling_proposal_0
  },
  {
    transform_hlds__tupling__transform_hlds__tupling__du_ptag_ordered_tupling_proposal_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__tupling__transform_hlds__tupling__functor_number_map_tupling_proposal_0
};

#line 3732 "transform_hlds.tupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_scheme_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__tupling____Unify____tupling_scheme_0_0_10001)),
  ((MR_Box) (transform_hlds__tupling____Compare____tupling_scheme_0_0_10001)),
  (MR_String) "transform_hlds.tupling",
  (MR_String) "tupling_scheme",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__tupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__tupling__type_ctor_info_tupling_proposal_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3753 "transform_hlds.tupling.c"
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

#line 3766 "transform_hlds.tupling.c"
const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__unit__unit__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0_10001))
};

#line 3776 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0_10001(
#line 3779 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 3781 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 3783 "transform_hlds.tupling.c"
{
#line 3785 "transform_hlds.tupling.c"
  {
#line 3787 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 3790 "transform_hlds.tupling.c"
    {
#line 3792 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____candidate_headvar_origins_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 3795 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 3797 "transform_hlds.tupling.c"
  }
#line 3799 "transform_hlds.tupling.c"
}

#line 3802 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0_10001(
#line 3805 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 3807 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 3809 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 3811 "transform_hlds.tupling.c"
{
#line 3813 "transform_hlds.tupling.c"
  {
#line 3815 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 3818 "transform_hlds.tupling.c"
    {
#line 3820 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____candidate_headvar_origins_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 3823 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 3825 "transform_hlds.tupling.c"
  }
#line 3827 "transform_hlds.tupling.c"
}

#line 3830 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0_10001(
#line 3833 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 3835 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 3837 "transform_hlds.tupling.c"
{
#line 3839 "transform_hlds.tupling.c"
  {
#line 3841 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 3844 "transform_hlds.tupling.c"
    {
#line 3846 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____candidate_headvars_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 3849 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 3851 "transform_hlds.tupling.c"
  }
#line 3853 "transform_hlds.tupling.c"
}

#line 3856 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0_10001(
#line 3859 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 3861 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 3863 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 3865 "transform_hlds.tupling.c"
{
#line 3867 "transform_hlds.tupling.c"
  {
#line 3869 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 3872 "transform_hlds.tupling.c"
    {
#line 3874 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____candidate_headvars_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 3877 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 3879 "transform_hlds.tupling.c"
  }
#line 3881 "transform_hlds.tupling.c"
}

#line 3884 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0_10001(
#line 3887 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 3889 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 3891 "transform_hlds.tupling.c"
{
#line 3893 "transform_hlds.tupling.c"
  {
#line 3895 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 3898 "transform_hlds.tupling.c"
    {
#line 3900 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____costs_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 3903 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 3905 "transform_hlds.tupling.c"
  }
#line 3907 "transform_hlds.tupling.c"
}

#line 3910 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0_10001(
#line 3913 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 3915 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 3917 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 3919 "transform_hlds.tupling.c"
{
#line 3921 "transform_hlds.tupling.c"
  {
#line 3923 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 3926 "transform_hlds.tupling.c"
    {
#line 3928 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____costs_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 3931 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 3933 "transform_hlds.tupling.c"
  }
#line 3935 "transform_hlds.tupling.c"
}

#line 3938 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0_10001(
#line 3941 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 3943 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 3945 "transform_hlds.tupling.c"
{
#line 3947 "transform_hlds.tupling.c"
  {
#line 3949 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 3952 "transform_hlds.tupling.c"
    {
#line 3954 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____count_info_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 3957 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 3959 "transform_hlds.tupling.c"
  }
#line 3961 "transform_hlds.tupling.c"
}

#line 3964 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0_10001(
#line 3967 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 3969 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 3971 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 3973 "transform_hlds.tupling.c"
{
#line 3975 "transform_hlds.tupling.c"
  {
#line 3977 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 3980 "transform_hlds.tupling.c"
    {
#line 3982 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____count_info_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 3985 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 3987 "transform_hlds.tupling.c"
  }
#line 3989 "transform_hlds.tupling.c"
}

#line 3992 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0_10001(
#line 3995 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 3997 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 3999 "transform_hlds.tupling.c"
{
#line 4001 "transform_hlds.tupling.c"
  {
#line 4003 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4006 "transform_hlds.tupling.c"
    {
#line 4008 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____count_state_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4011 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4013 "transform_hlds.tupling.c"
  }
#line 4015 "transform_hlds.tupling.c"
}

#line 4018 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0_10001(
#line 4021 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4023 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4025 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4027 "transform_hlds.tupling.c"
{
#line 4029 "transform_hlds.tupling.c"
  {
#line 4031 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4034 "transform_hlds.tupling.c"
    {
#line 4036 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____count_state_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 4039 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4041 "transform_hlds.tupling.c"
  }
#line 4043 "transform_hlds.tupling.c"
}

#line 4046 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0_10001(
#line 4049 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4051 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 4053 "transform_hlds.tupling.c"
{
#line 4055 "transform_hlds.tupling.c"
  {
#line 4057 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4060 "transform_hlds.tupling.c"
    {
#line 4062 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____opt_tuple_alloc_0_0();
    }
#line 4065 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4067 "transform_hlds.tupling.c"
  }
#line 4069 "transform_hlds.tupling.c"
}

#line 4072 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0_10001(
#line 4075 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4077 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4079 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4081 "transform_hlds.tupling.c"
{
#line 4083 "transform_hlds.tupling.c"
  {
#line 4085 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4088 "transform_hlds.tupling.c"
    {
#line 4090 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____opt_tuple_alloc_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1);
    }
#line 4093 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4095 "transform_hlds.tupling.c"
  }
#line 4097 "transform_hlds.tupling.c"
}

#line 4100 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0_10001(
#line 4103 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4105 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 4107 "transform_hlds.tupling.c"
{
#line 4109 "transform_hlds.tupling.c"
  {
#line 4111 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4114 "transform_hlds.tupling.c"
    {
#line 4116 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____transform_map_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4119 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4121 "transform_hlds.tupling.c"
  }
#line 4123 "transform_hlds.tupling.c"
}

#line 4126 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0_10001(
#line 4129 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4131 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4133 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4135 "transform_hlds.tupling.c"
{
#line 4137 "transform_hlds.tupling.c"
  {
#line 4139 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4142 "transform_hlds.tupling.c"
    {
#line 4144 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____transform_map_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 4147 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4149 "transform_hlds.tupling.c"
  }
#line 4151 "transform_hlds.tupling.c"
}

#line 4154 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0_10001(
#line 4157 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4159 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 4161 "transform_hlds.tupling.c"
{
#line 4163 "transform_hlds.tupling.c"
  {
#line 4165 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4168 "transform_hlds.tupling.c"
    {
#line 4170 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____transformed_proc_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4173 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4175 "transform_hlds.tupling.c"
  }
#line 4177 "transform_hlds.tupling.c"
}

#line 4180 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0_10001(
#line 4183 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4185 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4187 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4189 "transform_hlds.tupling.c"
{
#line 4191 "transform_hlds.tupling.c"
  {
#line 4193 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4196 "transform_hlds.tupling.c"
    {
#line 4198 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____transformed_proc_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 4201 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4203 "transform_hlds.tupling.c"
  }
#line 4205 "transform_hlds.tupling.c"
}

#line 4208 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0_10001(
#line 4211 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4213 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 4215 "transform_hlds.tupling.c"
{
#line 4217 "transform_hlds.tupling.c"
  {
#line 4219 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4222 "transform_hlds.tupling.c"
    {
#line 4224 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____tuning_params_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4227 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4229 "transform_hlds.tupling.c"
  }
#line 4231 "transform_hlds.tupling.c"
}

#line 4234 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0_10001(
#line 4237 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4239 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4241 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4243 "transform_hlds.tupling.c"
{
#line 4245 "transform_hlds.tupling.c"
  {
#line 4247 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4250 "transform_hlds.tupling.c"
    {
#line 4252 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____tuning_params_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 4255 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4257 "transform_hlds.tupling.c"
  }
#line 4259 "transform_hlds.tupling.c"
}

#line 4262 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0_10001(
#line 4265 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4267 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 4269 "transform_hlds.tupling.c"
{
#line 4271 "transform_hlds.tupling.c"
  {
#line 4273 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4276 "transform_hlds.tupling.c"
    {
#line 4278 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____tupling_proposal_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4281 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4283 "transform_hlds.tupling.c"
  }
#line 4285 "transform_hlds.tupling.c"
}

#line 4288 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0_10001(
#line 4291 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4293 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4295 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4297 "transform_hlds.tupling.c"
{
#line 4299 "transform_hlds.tupling.c"
  {
#line 4301 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4304 "transform_hlds.tupling.c"
    {
#line 4306 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____tupling_proposal_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 4309 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4311 "transform_hlds.tupling.c"
  }
#line 4313 "transform_hlds.tupling.c"
}

#line 4316 "transform_hlds.tupling.c"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0_10001(
#line 4319 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4321 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2)
#line 4323 "transform_hlds.tupling.c"
{
#line 4325 "transform_hlds.tupling.c"
  {
#line 4327 "transform_hlds.tupling.c"
    MR_bool transform_hlds__tupling__succeeded;

#line 4330 "transform_hlds.tupling.c"
    {
#line 4332 "transform_hlds.tupling.c"
      transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____tupling_scheme_0_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4335 "transform_hlds.tupling.c"
    return transform_hlds__tupling__succeeded;
#line 4337 "transform_hlds.tupling.c"
  }
#line 4339 "transform_hlds.tupling.c"
}

#line 4342 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0_10001(
#line 4345 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_1,
#line 4347 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4349 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3)
#line 4351 "transform_hlds.tupling.c"
{
#line 4353 "transform_hlds.tupling.c"
  {
#line 4355 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__1_1;

#line 4358 "transform_hlds.tupling.c"
    {
#line 4360 "transform_hlds.tupling.c"
      transform_hlds__tupling____Compare____tupling_scheme_0_0(&transform_hlds__tupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3));
    }
#line 4363 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__1_1));
#line 4365 "transform_hlds.tupling.c"
  }
#line 4367 "transform_hlds.tupling.c"
}

#line 4370 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 4373 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 4375 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4377 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4379 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 4381 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 4383 "transform_hlds.tupling.c"
{
#line 4385 "transform_hlds.tupling.c"
  {
#line 4387 "transform_hlds.tupling.c"
    MR_Box transform_hlds__tupling__closure;

#line 4390 "transform_hlds.tupling.c"
    transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 4392 "transform_hlds.tupling.c"
    {
#line 4394 "transform_hlds.tupling.c"
      transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4397 "transform_hlds.tupling.c"
  }
#line 4399 "transform_hlds.tupling.c"
}

#line 4402 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 4405 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 4407 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4409 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4411 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 4413 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 4415 "transform_hlds.tupling.c"
{
#line 4417 "transform_hlds.tupling.c"
  {
#line 4419 "transform_hlds.tupling.c"
    MR_Box transform_hlds__tupling__closure;

#line 4422 "transform_hlds.tupling.c"
    transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 4424 "transform_hlds.tupling.c"
    {
#line 4426 "transform_hlds.tupling.c"
      transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4429 "transform_hlds.tupling.c"
  }
#line 4431 "transform_hlds.tupling.c"
}

#line 4434 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 4437 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 4439 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4441 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4443 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 4445 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 4447 "transform_hlds.tupling.c"
{
#line 4449 "transform_hlds.tupling.c"
  {
#line 4451 "transform_hlds.tupling.c"
    MR_Box transform_hlds__tupling__closure;

#line 4454 "transform_hlds.tupling.c"
    transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 4456 "transform_hlds.tupling.c"
    {
#line 4458 "transform_hlds.tupling.c"
      transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4461 "transform_hlds.tupling.c"
  }
#line 4463 "transform_hlds.tupling.c"
}

#line 4466 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 4469 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 4471 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4473 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4475 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 4477 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 4479 "transform_hlds.tupling.c"
{
#line 4481 "transform_hlds.tupling.c"
  {
#line 4483 "transform_hlds.tupling.c"
    MR_Box transform_hlds__tupling__closure;

#line 4486 "transform_hlds.tupling.c"
    transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 4488 "transform_hlds.tupling.c"
    {
#line 4490 "transform_hlds.tupling.c"
      transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2));
    }
#line 4493 "transform_hlds.tupling.c"
  }
#line 4495 "transform_hlds.tupling.c"
}

#line 4498 "transform_hlds.tupling.c"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
#line 4501 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__closure_arg,
#line 4503 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 4505 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 4507 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 4509 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 4511 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_5,
#line 4513 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_6,
#line 4515 "transform_hlds.tupling.c"
  MR_Box transform_hlds__tupling__wrapper_arg_7,
#line 4517 "transform_hlds.tupling.c"
  MR_Box * transform_hlds__tupling__wrapper_arg_8)
#line 4519 "transform_hlds.tupling.c"
{
#line 4521 "transform_hlds.tupling.c"
  {
#line 4523 "transform_hlds.tupling.c"
    MR_Box transform_hlds__tupling__closure;
#line 4525 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__conv0_HeadVar__6_6;

#line 4528 "transform_hlds.tupling.c"
    transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 4530 "transform_hlds.tupling.c"
    {
#line 4532 "transform_hlds.tupling.c"
      transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3), ((MR_Word) transform_hlds__tupling__wrapper_arg_4), ((MR_Word) transform_hlds__tupling__wrapper_arg_5), &transform_hlds__tupling__conv0_HeadVar__6_6);
    }
#line 4535 "transform_hlds.tupling.c"
    *transform_hlds__tupling__wrapper_arg_6 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__6_6));
#line 4537 "transform_hlds.tupling.c"
  }
#line 4539 "transform_hlds.tupling.c"
}

#line 604 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_p_0(
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__V_19_19,
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__V_20_20,
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__V_21_21,
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__V_22_22,
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__V_23_23,
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__List_7,
#line 604 "tupling.m"
  MR_Integer transform_hlds__tupling__Length_8,
#line 604 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_0_11,
#line 604 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Acc_12)
#line 604 "tupling.m"
{
#line 612 "tupling.m"
  while (MR_TRUE)
#line 612 "tupling.m"
    {
#line 612 "tupling.m"
      /* tailcall optimized into a loop */
#line 612 "tupling.m"
      {
#line 612 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;
#line 612 "tupling.m"
        MR_Word transform_hlds__tupling__Front_10;

#line 609 "tupling.m"
        {
#line 609 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__list__take_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[2], transform_hlds__tupling__Length_8, transform_hlds__tupling__List_7, &transform_hlds__tupling__Front_10);
        }
#line 612 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 610 "tupling.m"
          {
#line 610 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_13_13;
#line 610 "tupling.m"
            MR_Integer transform_hlds__tupling__V_14_14;

#line 610 "tupling.m"
            {
#line 610 "tupling.m"
              transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0(transform_hlds__tupling__V_19_19, transform_hlds__tupling__V_20_20, transform_hlds__tupling__V_21_21, transform_hlds__tupling__V_22_22, transform_hlds__tupling__V_23_23, transform_hlds__tupling__Front_10, transform_hlds__tupling__STATE_VARIABLE_Acc_0_11, &transform_hlds__tupling__STATE_VARIABLE_Acc_13_13);
            }
#line 611 "tupling.m"
            transform_hlds__tupling__V_14_14 = (transform_hlds__tupling__Length_8 + (MR_Integer) 1);
#line 611 "tupling.m"
            /* direct tailcall eliminated */
#line 611 "tupling.m"
            {
#line 611 "tupling.m"
              MR_Integer transform_hlds__tupling__Length__tmp_copy_8 = transform_hlds__tupling__V_14_14;
#line 611 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_0__tmp_copy_11 = transform_hlds__tupling__STATE_VARIABLE_Acc_13_13;

#line 611 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_Acc_0_11 = transform_hlds__tupling__STATE_VARIABLE_Acc_0__tmp_copy_11;
#line 611 "tupling.m"
              transform_hlds__tupling__Length_8 = transform_hlds__tupling__Length__tmp_copy_8;
#line 611 "tupling.m"
            }
#line 611 "tupling.m"
            continue;
#line 610 "tupling.m"
          }
#line 612 "tupling.m"
        else
#line 611 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_Acc_12 = transform_hlds__tupling__STATE_VARIABLE_Acc_0_11;
#line 612 "tupling.m"
      }
#line 612 "tupling.m"
      break;
#line 612 "tupling.m"
    }
#line 604 "tupling.m"
}

#line 596 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_p_0(
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__V_23_23,
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__V_24_24,
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__V_25_25,
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__V_26_26,
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__V_27_27,
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 596 "tupling.m"
  MR_Integer transform_hlds__tupling__MinLength_3,
#line 596 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_0_4,
#line 596 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Acc_5)
#line 596 "tupling.m"
{
#line 599 "tupling.m"
  while (MR_TRUE)
#line 599 "tupling.m"
    {
#line 599 "tupling.m"
      /* tailcall optimized into a loop */
#line 599 "tupling.m"
      {
#line 599 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;

#line 599 "tupling.m"
        if ((transform_hlds__tupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_Acc_5 = transform_hlds__tupling__STATE_VARIABLE_Acc_0_4;
#line 599 "tupling.m"
        else
#line 600 "tupling.m"
          {
#line 600 "tupling.m"
            MR_Word transform_hlds__tupling__Tail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 600 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_19_19;
#line 600 "tupling.m"
            MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));

#line 601 "tupling.m"
            {
#line 601 "tupling.m"
              transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_50_95_95_104_111_50_95_95_91_54_93_95_48_5_p_0(transform_hlds__tupling__V_23_23, transform_hlds__tupling__V_24_24, transform_hlds__tupling__V_25_25, transform_hlds__tupling__V_26_26, transform_hlds__tupling__V_27_27, transform_hlds__tupling__HeadVar__2_2, transform_hlds__tupling__MinLength_3, transform_hlds__tupling__STATE_VARIABLE_Acc_0_4, &transform_hlds__tupling__STATE_VARIABLE_Acc_19_19);
            }
#line 602 "tupling.m"
            /* direct tailcall eliminated */
#line 602 "tupling.m"
            {
#line 602 "tupling.m"
              MR_Word transform_hlds__tupling__HeadVar__2__tmp_copy_2 = transform_hlds__tupling__Tail_14;
#line 602 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_Acc_0__tmp_copy_4 = transform_hlds__tupling__STATE_VARIABLE_Acc_19_19;

#line 602 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_Acc_0_4 = transform_hlds__tupling__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 602 "tupling.m"
              transform_hlds__tupling__HeadVar__2_2 = transform_hlds__tupling__HeadVar__2__tmp_copy_2;
#line 602 "tupling.m"
            }
#line 602 "tupling.m"
            continue;
#line 600 "tupling.m"
          }
#line 599 "tupling.m"
      }
#line 599 "tupling.m"
      break;
#line 599 "tupling.m"
    }
#line 596 "tupling.m"
}

#line 926 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
#line 926 "tupling.m"
{
#line 948 "tupling.m"
  {
#line 948 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 948 "tupling.m"
  }
#line 926 "tupling.m"
}

#line 925 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
#line 925 "tupling.m"
{
#line 943 "tupling.m"
  {
#line 943 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 943 "tupling.m"
  }
#line 925 "tupling.m"
}

#line 924 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
#line 924 "tupling.m"
{
#line 938 "tupling.m"
  {
#line 938 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 938 "tupling.m"
  }
#line 924 "tupling.m"
}

#line 923 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
#line 923 "tupling.m"
{
#line 933 "tupling.m"
  {
#line 933 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 933 "tupling.m"
  }
#line 923 "tupling.m"
}

#line 1578 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_p_0(
#line 1578 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 1578 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__6_6)
#line 1578 "tupling.m"
{
#line 1584 "tupling.m"
  {
#line 1584 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1584 "tupling.m"
    *transform_hlds__tupling__HeadVar__6_6 = transform_hlds__tupling__HeadVar__5_5;
#line 1584 "tupling.m"
  }
#line 1578 "tupling.m"
}

#line 919 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 919 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1)
#line 919 "tupling.m"
{
#line 919 "tupling.m"
  {
#line 919 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 919 "tupling.m"
    *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 919 "tupling.m"
  }
#line 919 "tupling.m"
}

#line 919 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 919 "tupling.m"
{
#line 919 "tupling.m"
  {
#line 919 "tupling.m"
    return MR_TRUE;
#line 919 "tupling.m"
  }
#line 919 "tupling.m"
}

#line 1686 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_6,
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13,
#line 1686 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14)
#line 1686 "tupling.m"
{
#line 1690 "tupling.m"
  {
#line 1690 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1690 "tupling.m"
    MR_Word transform_hlds__tupling__PredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 1690 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 1690 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 2)));
#line 1690 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 3)));

#line 1691 "tupling.m"
    {
#line 1691 "tupling.m"
      transform_hlds__tupling__fix_calls_in_proc_4_p_0(transform_hlds__tupling__TransformMap_6, transform_hlds__tupling__PredProcId_8, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14);
#line 1691 "tupling.m"
      return;
    }
#line 1690 "tupling.m"
  }
#line 1686 "tupling.m"
}

#line 1484 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_2(
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1484 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1484 "tupling.m"
{
#line 1484 "tupling.m"
  {
#line 1484 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1484 "tupling.m"
    MR_Word transform_hlds__tupling__conv3_STATE_VARIABLE_CountState_5;

#line 1484 "tupling.m"
    {
#line 1484 "tupling.m"
      transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv3_STATE_VARIABLE_CountState_5);
    }
#line 1484 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv3_STATE_VARIABLE_CountState_5));
#line 1484 "tupling.m"
  }
#line 1484 "tupling.m"
}

#line 1367 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_1(
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1367 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1367 "tupling.m"
{
#line 1367 "tupling.m"
  {
#line 1367 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1367 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13;

#line 1367 "tupling.m"
    {
#line 1367 "tupling.m"
      transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13);
    }
#line 1367 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13));
#line 1367 "tupling.m"
  }
#line 1367 "tupling.m"
}

#line 1282 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(
#line 1282 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_8,
#line 1282 "tupling.m"
  MR_Word transform_hlds__tupling__Inputs_9,
#line 1282 "tupling.m"
  MR_Word transform_hlds__tupling__Outputs_10,
#line 1282 "tupling.m"
  MR_Word transform_hlds__tupling__MaybeNeedAcrossCall_11,
#line 1282 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_19,
#line 1282 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_20)
#line 1282 "tupling.m"
{
#line 1287 "tupling.m"
  {
#line 1287 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1287 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_21_21;
#line 1287 "tupling.m"
    MR_Word transform_hlds__tupling__V_37_37;
#line 1367 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_21_21;

#line 1367 "tupling.m"
    {
#line 1367 "tupling.m"
      transform_hlds__tupling__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[5]));
#line 1367 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 1) = ((MR_Box) (transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_1));
#line 1367 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1367 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 3) = ((MR_Box) (transform_hlds__tupling__CountInfo_8));
#line 1367 "tupling.m"
    }
#line 1367 "tupling.m"
    {
#line 1367 "tupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_37_37, transform_hlds__tupling__Inputs_9, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_0_19)), &transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_21_21);
    }
#line 1367 "tupling.m"
    transform_hlds__tupling__STATE_VARIABLE_CountState_21_21 = ((MR_Word) transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_21_21);
#line 1297 "tupling.m"
    if ((transform_hlds__tupling__MaybeNeedAcrossCall_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1298 "tupling.m"
      {
#line 1299 "tupling.m"
        {
#line 1299 "tupling.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.count_load_stores_for_call\'/7", (MR_String) "no need across call");
#line 1299 "tupling.m"
          return;
        }
#line 1298 "tupling.m"
      }
#line 1297 "tupling.m"
    else
#line 1290 "tupling.m"
      {
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__NeedAcrossCall_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__MaybeNeedAcrossCall_11, (MR_Integer) 0)));
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__ForwardVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__NeedAcrossCall_14, (MR_Integer) 0)));
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__ResumeVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__NeedAcrossCall_14, (MR_Integer) 1)));
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__NondetLiveVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__NeedAcrossCall_14, (MR_Integer) 2)));
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__AllVars_18;
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__V_25_25;
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__V_26_26;
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__V_27_27;
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_29_29;
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__TuplingProposal_49;
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__TuningParams_50;
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__V_51_51;
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__V_65_65;
#line 1290 "tupling.m"
        MR_Word transform_hlds__tupling__V_90_90;
#line 867 "tupling.m"
        MR_Word transform_hlds__tupling__V_66_66;
#line 867 "tupling.m"
        MR_Word transform_hlds__tupling__V_67_67;
#line 867 "tupling.m"
        MR_Word transform_hlds__tupling__V_68_68;
#line 867 "tupling.m"
        MR_Word transform_hlds__tupling__V_69_69;
#line 867 "tupling.m"
        MR_Word transform_hlds__tupling__V_70_70;
#line 867 "tupling.m"
        MR_Word transform_hlds__tupling__V_71_71;
#line 860 "tupling.m"
        MR_Word transform_hlds__tupling__Probe_75;
#line 858 "tupling.m"
        MR_Word transform_hlds__tupling__V_76_76;
#line 858 "tupling.m"
        MR_Word transform_hlds__tupling__V_77_77;
#line 858 "tupling.m"
        MR_Word transform_hlds__tupling__V_78_78;
#line 858 "tupling.m"
        MR_Word transform_hlds__tupling__V_79_79;
#line 858 "tupling.m"
        MR_Word transform_hlds__tupling__V_80_80;
#line 858 "tupling.m"
        MR_Word transform_hlds__tupling__V_81_81;
#line 858 "tupling.m"
        MR_Word transform_hlds__tupling__V_82_82;
#line 858 "tupling.m"
        MR_Box transform_hlds__tupling__conv2_Probe_75;
#line 1483 "tupling.m"
        MR_Word transform_hlds__tupling__V_53_53;
#line 1483 "tupling.m"
        MR_Word transform_hlds__tupling__V_54_54;
#line 1483 "tupling.m"
        MR_Word transform_hlds__tupling__V_55_55;
#line 1483 "tupling.m"
        MR_Word transform_hlds__tupling__V_56_56;
#line 1483 "tupling.m"
        MR_Word transform_hlds__tupling__V_57_57;
#line 1483 "tupling.m"
        MR_Word transform_hlds__tupling__V_58_58;
#line 1484 "tupling.m"
        MR_Box transform_hlds__tupling__conv4_STATE_VARIABLE_CountState_29_29;
#line 1527 "tupling.m"
        MR_Word transform_hlds__tupling__V_92_92;
#line 1527 "tupling.m"
        MR_Float transform_hlds__tupling__V_93_93;
#line 1527 "tupling.m"
        MR_Float transform_hlds__tupling__V_94_94;
#line 1527 "tupling.m"
        MR_Word transform_hlds__tupling__V_91_91;

#line 1294 "tupling.m"
        {
#line 1294 "tupling.m"
          transform_hlds__tupling__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_27_27, 0) = ((MR_Box) (transform_hlds__tupling__NondetLiveVars_17));
#line 1294 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1294 "tupling.m"
        }
#line 1294 "tupling.m"
        {
#line 1294 "tupling.m"
          transform_hlds__tupling__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_26_26, 0) = ((MR_Box) (transform_hlds__tupling__ResumeVars_16));
#line 1294 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_26_26, 1) = ((MR_Box) (transform_hlds__tupling__V_27_27));
#line 1294 "tupling.m"
        }
#line 1294 "tupling.m"
        {
#line 1294 "tupling.m"
          transform_hlds__tupling__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_25_25, 0) = ((MR_Box) (transform_hlds__tupling__ForwardVars_15));
#line 1294 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_25_25, 1) = ((MR_Box) (transform_hlds__tupling__V_26_26));
#line 1294 "tupling.m"
        }
#line 1293 "tupling.m"
        {
#line 1293 "tupling.m"
          transform_hlds__tupling__AllVars_18 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__V_25_25);
        }
#line 867 "tupling.m"
        transform_hlds__tupling__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 0)));
#line 867 "tupling.m"
        transform_hlds__tupling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 1)));
#line 867 "tupling.m"
        transform_hlds__tupling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 2)));
#line 867 "tupling.m"
        transform_hlds__tupling__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 3)));
#line 867 "tupling.m"
        transform_hlds__tupling__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 4)));
#line 867 "tupling.m"
        transform_hlds__tupling__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 5)));
#line 867 "tupling.m"
        transform_hlds__tupling__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 6)));
#line 858 "tupling.m"
        transform_hlds__tupling__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 0)));
#line 858 "tupling.m"
        transform_hlds__tupling__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 1)));
#line 858 "tupling.m"
        transform_hlds__tupling__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 2)));
#line 858 "tupling.m"
        transform_hlds__tupling__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 3)));
#line 858 "tupling.m"
        transform_hlds__tupling__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 4)));
#line 858 "tupling.m"
        transform_hlds__tupling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 5)));
#line 858 "tupling.m"
        transform_hlds__tupling__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 6)));
#line 858 "tupling.m"
        {
#line 858 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_76_76, ((MR_Box) (transform_hlds__tupling__V_65_65)), &transform_hlds__tupling__conv2_Probe_75);
        }
#line 858 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 858 "tupling.m"
          {
#line 858 "tupling.m"
            transform_hlds__tupling__Probe_75 = ((MR_Word) transform_hlds__tupling__conv2_Probe_75);
#line 858 "tupling.m"
            transform_hlds__tupling__succeeded = MR_TRUE;
#line 858 "tupling.m"
          }
#line 860 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 859 "tupling.m"
          transform_hlds__tupling__TuplingProposal_49 = transform_hlds__tupling__Probe_75;
#line 860 "tupling.m"
        else
#line 861 "tupling.m"
          transform_hlds__tupling__TuplingProposal_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1483 "tupling.m"
        transform_hlds__tupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 0)));
#line 1483 "tupling.m"
        transform_hlds__tupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 1)));
#line 1483 "tupling.m"
        transform_hlds__tupling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 2)));
#line 1483 "tupling.m"
        transform_hlds__tupling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 3)));
#line 1483 "tupling.m"
        transform_hlds__tupling__TuningParams_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 4)));
#line 1483 "tupling.m"
        transform_hlds__tupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 5)));
#line 1483 "tupling.m"
        transform_hlds__tupling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 6)));
#line 1484 "tupling.m"
        {
#line 1484 "tupling.m"
          transform_hlds__tupling__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1484 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[3]));
#line 1484 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 1) = ((MR_Box) (transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0_2));
#line 1484 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1484 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 3) = ((MR_Box) (transform_hlds__tupling__TuplingProposal_49));
#line 1484 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_50));
#line 1484 "tupling.m"
        }
#line 1484 "tupling.m"
        {
#line 1484 "tupling.m"
          parse_tree__set_of_var__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_51_51, transform_hlds__tupling__AllVars_18, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_21_21)), &transform_hlds__tupling__conv4_STATE_VARIABLE_CountState_29_29);
        }
#line 1484 "tupling.m"
        transform_hlds__tupling__STATE_VARIABLE_CountState_29_29 = ((MR_Word) transform_hlds__tupling__conv4_STATE_VARIABLE_CountState_29_29);
#line 1527 "tupling.m"
        {
#line 1527 "tupling.m"
          transform_hlds__tupling__V_90_90 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Outputs_10);
        }
#line 1527 "tupling.m"
        transform_hlds__tupling__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_29_29, (MR_Integer) 0)));
#line 1527 "tupling.m"
        transform_hlds__tupling__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_29_29, (MR_Integer) 1)));
#line 1527 "tupling.m"
        transform_hlds__tupling__V_93_93 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_29_29, (MR_Integer) 2)));
#line 1527 "tupling.m"
        transform_hlds__tupling__V_94_94 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_29_29, (MR_Integer) 3)));
#line 1527 "tupling.m"
        {
#line 1527 "tupling.m"
          MR_Word base;
#line 1527 "tupling.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1527 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_CountState_20 = base;
#line 1527 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__V_90_90));
#line 1527 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__V_92_92));
#line 1527 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__V_93_93);
#line 1527 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__V_94_94);
#line 1527 "tupling.m"
        }
#line 1290 "tupling.m"
      }
#line 1287 "tupling.m"
  }
#line 1282 "tupling.m"
}

#line 1903 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1903__1_3_p_0(
#line 1903 "tupling.m"
  MR_Word transform_hlds__tupling__ArgList_5,
#line 1903 "tupling.m"
  MR_Integer transform_hlds__tupling__HeadVar__2_11,
#line 1903 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__3_12)
#line 1903 "tupling.m"
{
#line 1903 "tupling.m"
  {
#line 1903 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1903 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_HeadVar__3_12;

#line 1903 "tupling.m"
    {
#line 1903 "tupling.m"
      mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__ArgList_5, transform_hlds__tupling__HeadVar__2_11, &transform_hlds__tupling__conv0_HeadVar__3_12);
    }
#line 1903 "tupling.m"
    *transform_hlds__tupling__HeadVar__3_12 = ((MR_Word) transform_hlds__tupling__conv0_HeadVar__3_12);
#line 1903 "tupling.m"
  }
#line 1903 "tupling.m"
}

#line 686 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__686__1_3_f_0(
#line 686 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVarsList_7,
#line 686 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_37,
#line 686 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_38,
#line 686 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__4_39)
#line 686 "tupling.m"
{
#line 686 "tupling.m"
  {
#line 686 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 688 "tupling.m"
    {
#line 688 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], ((MR_Box) (transform_hlds__tupling__HeadVar__2_37)), transform_hlds__tupling__FieldVarsList_7);
    }
#line 688 "tupling.m"
    transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 686 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 686 "tupling.m"
      {
#line 687 "tupling.m"
        {
#line 687 "tupling.m"
          MR_Word base;
#line 687 "tupling.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "tupling.m"
          *transform_hlds__tupling__HeadVar__4_39 = base;
#line 687 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__HeadVar__2_37));
#line 687 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__HeadVar__3_38));
#line 687 "tupling.m"
        }
#line 687 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 686 "tupling.m"
      }
#line 686 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 686 "tupling.m"
  }
#line 686 "tupling.m"
}

#line 656 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__656__1_3_p_0(
#line 656 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVars_36,
#line 656 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_65,
#line 656 "tupling.m"
  MR_Integer * transform_hlds__tupling__HeadVar__3_66)
#line 656 "tupling.m"
{
#line 656 "tupling.m"
  {
#line 656 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 656 "tupling.m"
    {
#line 656 "tupling.m"
      mercury__list__nth_member_lookup_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__HeadVars_36, ((MR_Box) (transform_hlds__tupling__HeadVar__2_65)), transform_hlds__tupling__HeadVar__3_66);
#line 656 "tupling.m"
      return;
    }
#line 656 "tupling.m"
  }
#line 656 "tupling.m"
}

#line 566 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__566__1_3_f_0(
#line 566 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_4,
#line 566 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVars_16,
#line 566 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_26,
#line 566 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__4_27)
#line 566 "tupling.m"
{
#line 566 "tupling.m"
  {
#line 566 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 566 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_36_36 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 566 "tupling.m"
    MR_Word transform_hlds__tupling__Var_20;
#line 566 "tupling.m"
    MR_Integer transform_hlds__tupling__Pos_21;
#line 566 "tupling.m"
    MR_Word transform_hlds__tupling__Annotation_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_26, (MR_Integer) 1)));
#line 567 "tupling.m"
    MR_String transform_hlds__tupling__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_26, (MR_Integer) 0)));
#line 568 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_Var_20;

#line 568 "tupling.m"
    {
#line 568 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__tupling__TypeInfo_36_36, transform_hlds__tupling__Annotation_32, ((MR_Box) (transform_hlds__tupling__PredProcId_4)), &transform_hlds__tupling__conv0_Var_20);
    }
#line 568 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 568 "tupling.m"
      {
#line 568 "tupling.m"
        transform_hlds__tupling__Var_20 = ((MR_Word) transform_hlds__tupling__conv0_Var_20);
#line 568 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 568 "tupling.m"
      }
#line 566 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 566 "tupling.m"
      {
#line 569 "tupling.m"
        {
#line 569 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__list__nth_member_search_3_p_0(transform_hlds__tupling__TypeInfo_36_36, transform_hlds__tupling__HeadVars_16, ((MR_Box) (transform_hlds__tupling__Var_20)), &transform_hlds__tupling__Pos_21);
        }
#line 566 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 566 "tupling.m"
          {
#line 567 "tupling.m"
            {
#line 567 "tupling.m"
              MR_Word base;
#line 567 "tupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 567 "tupling.m"
              *transform_hlds__tupling__HeadVar__4_27 = base;
#line 567 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__Var_20));
#line 567 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__Pos_21));
#line 567 "tupling.m"
            }
#line 567 "tupling.m"
            transform_hlds__tupling__succeeded = MR_TRUE;
#line 566 "tupling.m"
          }
#line 566 "tupling.m"
      }
#line 566 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 566 "tupling.m"
  }
#line 566 "tupling.m"
}

#line 492 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__492__1_3_p_0(
#line 492 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_19,
#line 492 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_20,
#line 492 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__3_21)
#line 492 "tupling.m"
{
#line 492 "tupling.m"
  {
#line 492 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 492 "tupling.m"
    {
#line 492 "tupling.m"
      mercury__map__old_merge_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__HeadVar__1_19, transform_hlds__tupling__HeadVar__2_20, transform_hlds__tupling__HeadVar__3_21);
#line 492 "tupling.m"
      return;
    }
#line 492 "tupling.m"
  }
#line 492 "tupling.m"
}

#line 926 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 926 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 926 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 926 "tupling.m"
{
#line 948 "tupling.m"
  {
#line 948 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 948 "tupling.m"
    {
#line 948 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0();
#line 948 "tupling.m"
      return;
    }
#line 948 "tupling.m"
  }
#line 926 "tupling.m"
}

#line 925 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 925 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 925 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 925 "tupling.m"
{
#line 943 "tupling.m"
  {
#line 943 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 943 "tupling.m"
    {
#line 943 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0();
#line 943 "tupling.m"
      return;
    }
#line 943 "tupling.m"
  }
#line 925 "tupling.m"
}

#line 924 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 924 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 924 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 924 "tupling.m"
{
#line 938 "tupling.m"
  {
#line 938 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 938 "tupling.m"
    {
#line 938 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0();
#line 938 "tupling.m"
      return;
    }
#line 938 "tupling.m"
  }
#line 924 "tupling.m"
}

#line 923 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____transform_hlds__tupling__opt_tuple_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 923 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 923 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 923 "tupling.m"
{
#line 933 "tupling.m"
  {
#line 933 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 933 "tupling.m"
    {
#line 933 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0();
#line 933 "tupling.m"
      return;
    }
#line 933 "tupling.m"
  }
#line 923 "tupling.m"
}

#line 1578 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__ClassMethod_for_backend_libs__interval__build_interval_info_acc____unit__unit__arity0______backend_libs__interval__use_cell_8_8_p_0(
#line 1578 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1578 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1578 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1578 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__4_4,
#line 1578 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 1578 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__6_6)
#line 1578 "tupling.m"
{
#line 1584 "tupling.m"
  {
#line 1584 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1584 "tupling.m"
    {
#line 1584 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_99_99_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_117_115_101_95_99_101_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_8_p_0(transform_hlds__tupling__HeadVar__5_5, transform_hlds__tupling__HeadVar__6_6);
#line 1584 "tupling.m"
      return;
    }
#line 1584 "tupling.m"
  }
#line 1578 "tupling.m"
}

#line 503 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_scheme_0_0(
#line 503 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 503 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 503 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 503 "tupling.m"
{
#line 503 "tupling.m"
  {
#line 503 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 503 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_4 = transform_hlds__tupling__HeadVar__2_2;
#line 503 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_5 = transform_hlds__tupling__HeadVar__3_3;

#line 503 "tupling.m"
    {
#line 503 "tupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[5], transform_hlds__tupling__HeadVar__1_1, ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_5)));
#line 503 "tupling.m"
      return;
    }
#line 503 "tupling.m"
  }
#line 503 "tupling.m"
}

#line 503 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_scheme_0_0(
#line 503 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 503 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 503 "tupling.m"
{
#line 503 "tupling.m"
  {
#line 503 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 503 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_3 = transform_hlds__tupling__HeadVar__1_1;
#line 503 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_4 = transform_hlds__tupling__HeadVar__2_2;

#line 503 "tupling.m"
    {
#line 503 "tupling.m"
      return transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[5], ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_4)));
    }
#line 503 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 503 "tupling.m"
  }
#line 503 "tupling.m"
}

#line 505 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____tupling_proposal_0_0(
#line 505 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 505 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 505 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 505 "tupling.m"
{
#line 505 "tupling.m"
  {
#line 505 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 505 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_18 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;
#line 505 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_19 = (MR_Integer) transform_hlds__tupling__HeadVar__3_3;

#line 505 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_18 == transform_hlds__tupling__CastY_19);
#line 505 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 5686 "transform_hlds.tupling.c"
      *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 505 "tupling.m"
    else
#line 505 "tupling.m"
      if ((transform_hlds__tupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "tupling.m"
        if ((transform_hlds__tupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "tupling.m"
          *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 505 "tupling.m"
        else
#line 5698 "transform_hlds.tupling.c"
          *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 1;
#line 505 "tupling.m"
      else
#line 505 "tupling.m"
        {
#line 505 "tupling.m"
          MR_Word transform_hlds__tupling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 505 "tupling.m"
          MR_Word transform_hlds__tupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 505 "tupling.m"
          MR_Word transform_hlds__tupling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));

#line 505 "tupling.m"
          if ((transform_hlds__tupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5713 "transform_hlds.tupling.c"
            *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 2;
#line 505 "tupling.m"
          else
#line 505 "tupling.m"
            {
#line 505 "tupling.m"
              MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 505 "tupling.m"
              MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 505 "tupling.m"
              MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 2)));
#line 505 "tupling.m"
              MR_Word transform_hlds__tupling__V_16_16;

#line 505 "tupling.m"
              {
#line 505 "tupling.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], &transform_hlds__tupling__V_16_16, ((MR_Box) (transform_hlds__tupling__V_25_25)), ((MR_Box) (transform_hlds__tupling__V_13_13)));
              }
#line 5733 "transform_hlds.tupling.c"
              transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_16_16 == (MR_Integer) 0);
#line 505 "tupling.m"
              transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 505 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 505 "tupling.m"
                *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_16_16;
#line 505 "tupling.m"
              else
#line 505 "tupling.m"
                {
#line 505 "tupling.m"
                  MR_Word transform_hlds__tupling__V_17_17;

#line 505 "tupling.m"
                  {
#line 505 "tupling.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[12], &transform_hlds__tupling__V_17_17, ((MR_Box) (transform_hlds__tupling__V_24_24)), ((MR_Box) (transform_hlds__tupling__V_14_14)));
                  }
#line 5753 "transform_hlds.tupling.c"
                  transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_17_17 == (MR_Integer) 0);
#line 505 "tupling.m"
                  transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 505 "tupling.m"
                  if (transform_hlds__tupling__succeeded)
#line 505 "tupling.m"
                    *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_17_17;
#line 505 "tupling.m"
                  else
#line 505 "tupling.m"
                    {
#line 505 "tupling.m"
                      {
#line 505 "tupling.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[13], transform_hlds__tupling__HeadVar__1_1, ((MR_Box) (transform_hlds__tupling__V_23_23)), ((MR_Box) (transform_hlds__tupling__V_15_15)));
#line 505 "tupling.m"
                        return;
                      }
#line 505 "tupling.m"
                    }
#line 505 "tupling.m"
                }
#line 505 "tupling.m"
            }
#line 505 "tupling.m"
        }
#line 505 "tupling.m"
  }
#line 505 "tupling.m"
}

#line 505 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tupling_proposal_0_0(
#line 505 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 505 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 505 "tupling.m"
{
#line 505 "tupling.m"
  {
#line 505 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 505 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_11 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 505 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_12 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 505 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_11 == transform_hlds__tupling__CastY_12);
#line 505 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 505 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 505 "tupling.m"
    else
#line 505 "tupling.m"
      if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "tupling.m"
        {
#line 505 "tupling.m"
          MR_Integer transform_hlds__tupling__CastX_3 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 505 "tupling.m"
          MR_Integer transform_hlds__tupling__CastY_4 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 505 "tupling.m"
          transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastY_4 == transform_hlds__tupling__CastX_3);
#line 505 "tupling.m"
        }
#line 505 "tupling.m"
      else
#line 505 "tupling.m"
        {
#line 505 "tupling.m"
          MR_Word transform_hlds__tupling__TypeInfo_13_13;
#line 505 "tupling.m"
          MR_Word transform_hlds__tupling__TypeInfo_14_14;
#line 505 "tupling.m"
          MR_Word transform_hlds__tupling__TypeInfo_15_15;
#line 505 "tupling.m"
          MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 505 "tupling.m"
          MR_Word transform_hlds__tupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 505 "tupling.m"
          MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 2)));
#line 505 "tupling.m"
          MR_Word transform_hlds__tupling__V_8_8;
#line 505 "tupling.m"
          MR_Word transform_hlds__tupling__V_9_9;
#line 505 "tupling.m"
          MR_Word transform_hlds__tupling__V_10_10;

#line 505 "tupling.m"
          transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 505 "tupling.m"
          if (transform_hlds__tupling__succeeded)
#line 505 "tupling.m"
            {
#line 505 "tupling.m"
              transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 505 "tupling.m"
              transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 505 "tupling.m"
              transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 5859 "transform_hlds.tupling.c"
              transform_hlds__tupling__TypeInfo_13_13 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 5861 "transform_hlds.tupling.c"
              {
#line 5863 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_13_13, ((MR_Box) (transform_hlds__tupling__V_5_5)), ((MR_Box) (transform_hlds__tupling__V_8_8)));
              }
#line 505 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 505 "tupling.m"
                {
#line 5870 "transform_hlds.tupling.c"
                  transform_hlds__tupling__TypeInfo_14_14 = (MR_Word) &transform_hlds__tupling_scalar_common_1[12];
#line 5872 "transform_hlds.tupling.c"
                  {
#line 5874 "transform_hlds.tupling.c"
                    transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_14_14, ((MR_Box) (transform_hlds__tupling__V_6_6)), ((MR_Box) (transform_hlds__tupling__V_9_9)));
                  }
#line 505 "tupling.m"
                  if (transform_hlds__tupling__succeeded)
#line 505 "tupling.m"
                    {
#line 5881 "transform_hlds.tupling.c"
                      transform_hlds__tupling__TypeInfo_15_15 = (MR_Word) &transform_hlds__tupling_scalar_common_1[13];
#line 5883 "transform_hlds.tupling.c"
                      {
#line 5885 "transform_hlds.tupling.c"
                        return transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_15_15, ((MR_Box) (transform_hlds__tupling__V_7_7)), ((MR_Box) (transform_hlds__tupling__V_10_10)));
                      }
#line 505 "tupling.m"
                    }
#line 505 "tupling.m"
                }
#line 505 "tupling.m"
            }
#line 505 "tupling.m"
        }
#line 505 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 505 "tupling.m"
  }
#line 505 "tupling.m"
}

#line 828 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____tuning_params_0_0(
#line 828 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 828 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 828 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 828 "tupling.m"
{
#line 828 "tupling.m"
  {
#line 828 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 828 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_27 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;
#line 828 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_28 = (MR_Integer) transform_hlds__tupling__HeadVar__3_3;

#line 828 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_27 == transform_hlds__tupling__CastY_28);
#line 828 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 5927 "transform_hlds.tupling.c"
      *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 828 "tupling.m"
    else
#line 828 "tupling.m"
      {
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 2)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 3)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 4)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 5)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 6)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 7)));
#line 828 "tupling.m"
        MR_Word transform_hlds__tupling__V_20_20;

#line 828 "tupling.m"
        {
#line 828 "tupling.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_20_20, transform_hlds__tupling__V_4_4, transform_hlds__tupling__V_12_12);
        }
#line 5973 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_20_20 == (MR_Integer) 0);
#line 828 "tupling.m"
        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 828 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_20_20;
#line 828 "tupling.m"
        else
#line 828 "tupling.m"
          {
#line 828 "tupling.m"
            MR_Word transform_hlds__tupling__V_21_21;

#line 828 "tupling.m"
            {
#line 828 "tupling.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_21_21, transform_hlds__tupling__V_5_5, transform_hlds__tupling__V_13_13);
            }
#line 5993 "transform_hlds.tupling.c"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_21_21 == (MR_Integer) 0);
#line 828 "tupling.m"
            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 828 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_21_21;
#line 828 "tupling.m"
            else
#line 828 "tupling.m"
              {
#line 828 "tupling.m"
                MR_Word transform_hlds__tupling__V_22_22;

#line 828 "tupling.m"
                {
#line 828 "tupling.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_22_22, transform_hlds__tupling__V_6_6, transform_hlds__tupling__V_14_14);
                }
#line 6013 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_22_22 == (MR_Integer) 0);
#line 828 "tupling.m"
                transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 828 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
                  *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_22_22;
#line 828 "tupling.m"
                else
#line 828 "tupling.m"
                  {
#line 828 "tupling.m"
                    MR_Word transform_hlds__tupling__V_23_23;

#line 828 "tupling.m"
                    {
#line 828 "tupling.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_23_23, transform_hlds__tupling__V_7_7, transform_hlds__tupling__V_15_15);
                    }
#line 6033 "transform_hlds.tupling.c"
                    transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_23_23 == (MR_Integer) 0);
#line 828 "tupling.m"
                    transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 828 "tupling.m"
                    if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
                      *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_23_23;
#line 828 "tupling.m"
                    else
#line 828 "tupling.m"
                      {
#line 828 "tupling.m"
                        MR_Word transform_hlds__tupling__V_24_24;

#line 828 "tupling.m"
                        {
#line 828 "tupling.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_24_24, transform_hlds__tupling__V_8_8, transform_hlds__tupling__V_16_16);
                        }
#line 6053 "transform_hlds.tupling.c"
                        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_24_24 == (MR_Integer) 0);
#line 828 "tupling.m"
                        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 828 "tupling.m"
                        if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
                          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_24_24;
#line 828 "tupling.m"
                        else
#line 828 "tupling.m"
                          {
#line 828 "tupling.m"
                            MR_Word transform_hlds__tupling__V_25_25;

#line 828 "tupling.m"
                            {
#line 828 "tupling.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_25_25, transform_hlds__tupling__V_9_9, transform_hlds__tupling__V_17_17);
                            }
#line 6073 "transform_hlds.tupling.c"
                            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_25_25 == (MR_Integer) 0);
#line 828 "tupling.m"
                            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 828 "tupling.m"
                            if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
                              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_25_25;
#line 828 "tupling.m"
                            else
#line 828 "tupling.m"
                              {
#line 828 "tupling.m"
                                MR_Word transform_hlds__tupling__V_26_26;

#line 828 "tupling.m"
                                {
#line 828 "tupling.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__tupling__V_26_26, transform_hlds__tupling__V_10_10, transform_hlds__tupling__V_18_18);
                                }
#line 6093 "transform_hlds.tupling.c"
                                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_26_26 == (MR_Integer) 0);
#line 828 "tupling.m"
                                transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 828 "tupling.m"
                                if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
                                  *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_26_26;
#line 828 "tupling.m"
                                else
#line 828 "tupling.m"
                                  {
#line 828 "tupling.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__tupling__HeadVar__1_1, transform_hlds__tupling__V_11_11, transform_hlds__tupling__V_19_19);
#line 828 "tupling.m"
                                    return;
                                  }
#line 828 "tupling.m"
                              }
#line 828 "tupling.m"
                          }
#line 828 "tupling.m"
                      }
#line 828 "tupling.m"
                  }
#line 828 "tupling.m"
              }
#line 828 "tupling.m"
          }
#line 828 "tupling.m"
      }
#line 828 "tupling.m"
  }
#line 828 "tupling.m"
}

#line 828 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____tuning_params_0_0(
#line 828 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 828 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 828 "tupling.m"
{
#line 828 "tupling.m"
  {
#line 828 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 828 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_19 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 828 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_20 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 828 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_19 == transform_hlds__tupling__CastY_20);
#line 828 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 828 "tupling.m"
    else
#line 828 "tupling.m"
      {
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 2)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 3)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 4)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 5)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 6)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 7)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 828 "tupling.m"
        MR_Integer transform_hlds__tupling__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 7)));

#line 6190 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_3_3 == transform_hlds__tupling__V_11_11);
#line 828 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
          {
#line 6196 "transform_hlds.tupling.c"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_4_4 == transform_hlds__tupling__V_12_12);
#line 828 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
              {
#line 6202 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_5_5 == transform_hlds__tupling__V_13_13);
#line 828 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
                  {
#line 6208 "transform_hlds.tupling.c"
                    transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_6_6 == transform_hlds__tupling__V_14_14);
#line 828 "tupling.m"
                    if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
                      {
#line 6214 "transform_hlds.tupling.c"
                        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_7_7 == transform_hlds__tupling__V_15_15);
#line 828 "tupling.m"
                        if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
                          {
#line 6220 "transform_hlds.tupling.c"
                            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_8_8 == transform_hlds__tupling__V_16_16);
#line 828 "tupling.m"
                            if (transform_hlds__tupling__succeeded)
#line 828 "tupling.m"
                              {
#line 6226 "transform_hlds.tupling.c"
                                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_9_9 == transform_hlds__tupling__V_17_17);
#line 828 "tupling.m"
                                if (transform_hlds__tupling__succeeded)
#line 6230 "transform_hlds.tupling.c"
                                  transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_10_10 == transform_hlds__tupling__V_18_18);
#line 828 "tupling.m"
                              }
#line 828 "tupling.m"
                          }
#line 828 "tupling.m"
                      }
#line 828 "tupling.m"
                  }
#line 828 "tupling.m"
              }
#line 828 "tupling.m"
          }
#line 828 "tupling.m"
      }
#line 828 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 828 "tupling.m"
  }
#line 828 "tupling.m"
}

#line 1653 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____transformed_proc_0_0(
#line 1653 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 1653 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1653 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 1653 "tupling.m"
{
#line 1653 "tupling.m"
  {
#line 1653 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1653 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_15 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;
#line 1653 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_16 = (MR_Integer) transform_hlds__tupling__HeadVar__3_3;

#line 1653 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_15 == transform_hlds__tupling__CastY_16);
#line 1653 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 6277 "transform_hlds.tupling.c"
      *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 1653 "tupling.m"
    else
#line 1653 "tupling.m"
      {
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 2)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 3)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_12_12;

#line 1653 "tupling.m"
        {
#line 1653 "tupling.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__tupling__V_12_12, transform_hlds__tupling__V_4_4, transform_hlds__tupling__V_8_8);
        }
#line 6307 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_12_12 == (MR_Integer) 0);
#line 1653 "tupling.m"
        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 1653 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1653 "tupling.m"
          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_12_12;
#line 1653 "tupling.m"
        else
#line 1653 "tupling.m"
          {
#line 1653 "tupling.m"
            MR_Word transform_hlds__tupling__V_13_13;

#line 1653 "tupling.m"
            {
#line 1653 "tupling.m"
              parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__tupling__V_13_13, transform_hlds__tupling__V_5_5, transform_hlds__tupling__V_9_9);
            }
#line 6327 "transform_hlds.tupling.c"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_13_13 == (MR_Integer) 0);
#line 1653 "tupling.m"
            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 1653 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 1653 "tupling.m"
              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_13_13;
#line 1653 "tupling.m"
            else
#line 1653 "tupling.m"
              {
#line 1653 "tupling.m"
                MR_Word transform_hlds__tupling__V_14_14;

#line 1653 "tupling.m"
                {
#line 1653 "tupling.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[11], &transform_hlds__tupling__V_14_14, ((MR_Box) (transform_hlds__tupling__V_6_6)), ((MR_Box) (transform_hlds__tupling__V_10_10)));
                }
#line 6347 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_14_14 == (MR_Integer) 0);
#line 1653 "tupling.m"
                transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 1653 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 1653 "tupling.m"
                  *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_14_14;
#line 1653 "tupling.m"
                else
#line 1653 "tupling.m"
                  {
#line 1653 "tupling.m"
                    hlds__hlds_goal____Compare____hlds_goal_0_0(transform_hlds__tupling__HeadVar__1_1, transform_hlds__tupling__V_7_7, transform_hlds__tupling__V_11_11);
#line 1653 "tupling.m"
                    return;
                  }
#line 1653 "tupling.m"
              }
#line 1653 "tupling.m"
          }
#line 1653 "tupling.m"
      }
#line 1653 "tupling.m"
  }
#line 1653 "tupling.m"
}

#line 1653 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transformed_proc_0_0(
#line 1653 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1653 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 1653 "tupling.m"
{
#line 1653 "tupling.m"
  {
#line 1653 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1653 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_11 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 1653 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_12 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 1653 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_11 == transform_hlds__tupling__CastY_12);
#line 1653 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1653 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 1653 "tupling.m"
    else
#line 1653 "tupling.m"
      {
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_15_15;
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 2)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 3)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1653 "tupling.m"
        MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));

#line 6422 "transform_hlds.tupling.c"
        {
#line 6424 "transform_hlds.tupling.c"
          transform_hlds__tupling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__tupling__V_3_3, transform_hlds__tupling__V_7_7);
        }
#line 1653 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1653 "tupling.m"
          {
#line 6431 "transform_hlds.tupling.c"
            {
#line 6433 "transform_hlds.tupling.c"
              transform_hlds__tupling__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__tupling__V_4_4, transform_hlds__tupling__V_8_8);
            }
#line 1653 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 1653 "tupling.m"
              {
#line 6440 "transform_hlds.tupling.c"
                transform_hlds__tupling__TypeInfo_15_15 = (MR_Word) &transform_hlds__tupling_scalar_common_1[11];
#line 6442 "transform_hlds.tupling.c"
                {
#line 6444 "transform_hlds.tupling.c"
                  transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_15_15, ((MR_Box) (transform_hlds__tupling__V_5_5)), ((MR_Box) (transform_hlds__tupling__V_9_9)));
                }
#line 1653 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 6449 "transform_hlds.tupling.c"
                  {
#line 6451 "transform_hlds.tupling.c"
                    return transform_hlds__tupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__tupling__V_6_6, transform_hlds__tupling__V_10_10);
                  }
#line 1653 "tupling.m"
              }
#line 1653 "tupling.m"
          }
#line 1653 "tupling.m"
      }
#line 1653 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 1653 "tupling.m"
  }
#line 1653 "tupling.m"
}

#line 1651 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____transform_map_0_0(
#line 1651 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 1651 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1651 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 1651 "tupling.m"
{
#line 1651 "tupling.m"
  {
#line 1651 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1651 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_4 = transform_hlds__tupling__HeadVar__2_2;
#line 1651 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_5 = transform_hlds__tupling__HeadVar__3_3;

#line 1651 "tupling.m"
    {
#line 1651 "tupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[0], transform_hlds__tupling__HeadVar__1_1, ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_5)));
#line 1651 "tupling.m"
      return;
    }
#line 1651 "tupling.m"
  }
#line 1651 "tupling.m"
}

#line 1651 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____transform_map_0_0(
#line 1651 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1651 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 1651 "tupling.m"
{
#line 1651 "tupling.m"
  {
#line 1651 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1651 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_3 = transform_hlds__tupling__HeadVar__1_1;
#line 1651 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_4 = transform_hlds__tupling__HeadVar__2_2;

#line 1651 "tupling.m"
    {
#line 1651 "tupling.m"
      return transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[0], ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_4)));
    }
#line 1651 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 1651 "tupling.m"
  }
#line 1651 "tupling.m"
}

#line 919 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____opt_tuple_alloc_0_0(
#line 919 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1)
#line 919 "tupling.m"
{
#line 919 "tupling.m"
  {
#line 919 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 919 "tupling.m"
    {
#line 919 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(transform_hlds__tupling__HeadVar__1_1);
#line 919 "tupling.m"
      return;
    }
#line 919 "tupling.m"
  }
#line 919 "tupling.m"
}

#line 919 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____opt_tuple_alloc_0_0(void)
#line 919 "tupling.m"
{
#line 919 "tupling.m"
  {
#line 919 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 919 "tupling.m"
    {
#line 919 "tupling.m"
      return transform_hlds__tupling__succeeded = transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_117_112_108_105_110_103_95_95_111_112_116_95_116_117_112_108_101_95_97_108_108_111_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 919 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 919 "tupling.m"
  }
#line 919 "tupling.m"
}

#line 840 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____count_state_0_0(
#line 840 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 840 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 840 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 840 "tupling.m"
{
#line 840 "tupling.m"
  {
#line 840 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 840 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_15 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;
#line 840 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_16 = (MR_Integer) transform_hlds__tupling__HeadVar__3_3;

#line 840 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_15 == transform_hlds__tupling__CastY_16);
#line 840 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 6599 "transform_hlds.tupling.c"
      *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 840 "tupling.m"
    else
#line 840 "tupling.m"
      {
#line 840 "tupling.m"
        MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 840 "tupling.m"
        MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 840 "tupling.m"
        MR_Float transform_hlds__tupling__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 840 "tupling.m"
        MR_Float transform_hlds__tupling__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 840 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 840 "tupling.m"
        MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 840 "tupling.m"
        MR_Float transform_hlds__tupling__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 2)));
#line 840 "tupling.m"
        MR_Float transform_hlds__tupling__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 3)));
#line 840 "tupling.m"
        MR_Word transform_hlds__tupling__V_12_12;

#line 840 "tupling.m"
        {
#line 840 "tupling.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[7], &transform_hlds__tupling__V_12_12, ((MR_Box) (transform_hlds__tupling__V_4_4)), ((MR_Box) (transform_hlds__tupling__V_8_8)));
        }
#line 6629 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_12_12 == (MR_Integer) 0);
#line 840 "tupling.m"
        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 840 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 840 "tupling.m"
          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_12_12;
#line 840 "tupling.m"
        else
#line 840 "tupling.m"
          {
#line 840 "tupling.m"
            MR_Word transform_hlds__tupling__V_13_13;

#line 840 "tupling.m"
            {
#line 840 "tupling.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[7], &transform_hlds__tupling__V_13_13, ((MR_Box) (transform_hlds__tupling__V_5_5)), ((MR_Box) (transform_hlds__tupling__V_9_9)));
            }
#line 6649 "transform_hlds.tupling.c"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_13_13 == (MR_Integer) 0);
#line 840 "tupling.m"
            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 840 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 840 "tupling.m"
              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_13_13;
#line 840 "tupling.m"
            else
#line 840 "tupling.m"
              {
#line 840 "tupling.m"
                MR_Word transform_hlds__tupling__V_14_14;

#line 840 "tupling.m"
                {
#line 840 "tupling.m"
                  mercury__private_builtin__builtin_compare_float_3_p_0(&transform_hlds__tupling__V_14_14, transform_hlds__tupling__V_6_6, transform_hlds__tupling__V_10_10);
                }
#line 6669 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_14_14 == (MR_Integer) 0);
#line 840 "tupling.m"
                transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 840 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 840 "tupling.m"
                  *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_14_14;
#line 840 "tupling.m"
                else
#line 840 "tupling.m"
                  {
#line 840 "tupling.m"
                    mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__tupling__HeadVar__1_1, transform_hlds__tupling__V_7_7, transform_hlds__tupling__V_11_11);
#line 840 "tupling.m"
                    return;
                  }
#line 840 "tupling.m"
              }
#line 840 "tupling.m"
          }
#line 840 "tupling.m"
      }
#line 840 "tupling.m"
  }
#line 840 "tupling.m"
}

#line 840 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_state_0_0(
#line 840 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 840 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 840 "tupling.m"
{
#line 840 "tupling.m"
  {
#line 840 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 840 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_11 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 840 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_12 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 840 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_11 == transform_hlds__tupling__CastY_12);
#line 840 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 840 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 840 "tupling.m"
    else
#line 840 "tupling.m"
      {
#line 840 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_14_14;
#line 840 "tupling.m"
        MR_Word transform_hlds__tupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 840 "tupling.m"
        MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 840 "tupling.m"
        MR_Float transform_hlds__tupling__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 2)));
#line 840 "tupling.m"
        MR_Float transform_hlds__tupling__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 3)));
#line 840 "tupling.m"
        MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 840 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 840 "tupling.m"
        MR_Float transform_hlds__tupling__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 840 "tupling.m"
        MR_Float transform_hlds__tupling__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));

#line 6744 "transform_hlds.tupling.c"
        {
#line 6746 "transform_hlds.tupling.c"
          transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[7], ((MR_Box) (transform_hlds__tupling__V_3_3)), ((MR_Box) (transform_hlds__tupling__V_7_7)));
        }
#line 840 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 840 "tupling.m"
          {
#line 6753 "transform_hlds.tupling.c"
            transform_hlds__tupling__TypeInfo_14_14 = (MR_Word) &transform_hlds__tupling_scalar_common_1[7];
#line 6755 "transform_hlds.tupling.c"
            {
#line 6757 "transform_hlds.tupling.c"
              transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_14_14, ((MR_Box) (transform_hlds__tupling__V_4_4)), ((MR_Box) (transform_hlds__tupling__V_8_8)));
            }
#line 840 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 840 "tupling.m"
              {
#line 6764 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_5_5 == transform_hlds__tupling__V_9_9);
#line 840 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 6768 "transform_hlds.tupling.c"
                  transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_6_6 == transform_hlds__tupling__V_10_10);
#line 840 "tupling.m"
              }
#line 840 "tupling.m"
          }
#line 840 "tupling.m"
      }
#line 840 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 840 "tupling.m"
  }
#line 840 "tupling.m"
}

#line 816 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____count_info_0_0(
#line 816 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 816 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 816 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 816 "tupling.m"
{
#line 816 "tupling.m"
  {
#line 816 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 816 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_24 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;
#line 816 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_25 = (MR_Integer) transform_hlds__tupling__HeadVar__3_3;

#line 816 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_24 == transform_hlds__tupling__CastY_25);
#line 816 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 6807 "transform_hlds.tupling.c"
      *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 816 "tupling.m"
    else
#line 816 "tupling.m"
      {
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 2)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 3)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 4)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 5)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 6)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_18_18;

#line 816 "tupling.m"
        {
#line 816 "tupling.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__tupling__V_18_18, transform_hlds__tupling__V_4_4, transform_hlds__tupling__V_11_11);
        }
#line 6849 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_18_18 == (MR_Integer) 0);
#line 816 "tupling.m"
        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 816 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_18_18;
#line 816 "tupling.m"
        else
#line 816 "tupling.m"
          {
#line 816 "tupling.m"
            MR_Word transform_hlds__tupling__V_19_19;

#line 816 "tupling.m"
            {
#line 816 "tupling.m"
              hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__tupling__V_19_19, transform_hlds__tupling__V_5_5, transform_hlds__tupling__V_12_12);
            }
#line 6869 "transform_hlds.tupling.c"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_19_19 == (MR_Integer) 0);
#line 816 "tupling.m"
            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 816 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_19_19;
#line 816 "tupling.m"
            else
#line 816 "tupling.m"
              {
#line 816 "tupling.m"
                MR_Word transform_hlds__tupling__V_20_20;

#line 816 "tupling.m"
                {
#line 816 "tupling.m"
                  hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__tupling__V_20_20, transform_hlds__tupling__V_6_6, transform_hlds__tupling__V_13_13);
                }
#line 6889 "transform_hlds.tupling.c"
                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_20_20 == (MR_Integer) 0);
#line 816 "tupling.m"
                transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 816 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
                  *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_20_20;
#line 816 "tupling.m"
                else
#line 816 "tupling.m"
                  {
#line 816 "tupling.m"
                    MR_Word transform_hlds__tupling__V_21_21;

#line 816 "tupling.m"
                    {
#line 816 "tupling.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[9], &transform_hlds__tupling__V_21_21, ((MR_Box) (transform_hlds__tupling__V_7_7)), ((MR_Box) (transform_hlds__tupling__V_14_14)));
                    }
#line 6909 "transform_hlds.tupling.c"
                    transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_21_21 == (MR_Integer) 0);
#line 816 "tupling.m"
                    transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 816 "tupling.m"
                    if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
                      *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_21_21;
#line 816 "tupling.m"
                    else
#line 816 "tupling.m"
                      {
#line 816 "tupling.m"
                        MR_Word transform_hlds__tupling__V_22_22;

#line 816 "tupling.m"
                        {
#line 816 "tupling.m"
                          transform_hlds__tupling____Compare____tuning_params_0_0(&transform_hlds__tupling__V_22_22, transform_hlds__tupling__V_8_8, transform_hlds__tupling__V_15_15);
                        }
#line 6929 "transform_hlds.tupling.c"
                        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_22_22 == (MR_Integer) 0);
#line 816 "tupling.m"
                        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 816 "tupling.m"
                        if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
                          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_22_22;
#line 816 "tupling.m"
                        else
#line 816 "tupling.m"
                          {
#line 816 "tupling.m"
                            MR_Word transform_hlds__tupling__V_23_23;

#line 816 "tupling.m"
                            {
#line 816 "tupling.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[5], &transform_hlds__tupling__V_23_23, ((MR_Box) (transform_hlds__tupling__V_9_9)), ((MR_Box) (transform_hlds__tupling__V_16_16)));
                            }
#line 6949 "transform_hlds.tupling.c"
                            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_23_23 == (MR_Integer) 0);
#line 816 "tupling.m"
                            transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 816 "tupling.m"
                            if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
                              *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_23_23;
#line 816 "tupling.m"
                            else
#line 816 "tupling.m"
                              {
#line 816 "tupling.m"
                                {
#line 816 "tupling.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[3], transform_hlds__tupling__HeadVar__1_1, ((MR_Box) (transform_hlds__tupling__V_10_10)), ((MR_Box) (transform_hlds__tupling__V_17_17)));
#line 816 "tupling.m"
                                  return;
                                }
#line 816 "tupling.m"
                              }
#line 816 "tupling.m"
                          }
#line 816 "tupling.m"
                      }
#line 816 "tupling.m"
                  }
#line 816 "tupling.m"
              }
#line 816 "tupling.m"
          }
#line 816 "tupling.m"
      }
#line 816 "tupling.m"
  }
#line 816 "tupling.m"
}

#line 816 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____count_info_0_0(
#line 816 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 816 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 816 "tupling.m"
{
#line 816 "tupling.m"
  {
#line 816 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 816 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_17 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 816 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_18 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 816 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_17 == transform_hlds__tupling__CastY_18);
#line 816 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 816 "tupling.m"
    else
#line 816 "tupling.m"
      {
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_22_22;
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_23_23;
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_24_24;
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 2)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 3)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 4)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 5)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 6)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 816 "tupling.m"
        MR_Word transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));

#line 7050 "transform_hlds.tupling.c"
        {
#line 7052 "transform_hlds.tupling.c"
          transform_hlds__tupling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__tupling__V_3_3, transform_hlds__tupling__V_10_10);
        }
#line 816 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
          {
#line 7059 "transform_hlds.tupling.c"
            {
#line 7061 "transform_hlds.tupling.c"
              transform_hlds__tupling__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__tupling__V_4_4, transform_hlds__tupling__V_11_11);
            }
#line 816 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
              {
#line 7068 "transform_hlds.tupling.c"
                {
#line 7070 "transform_hlds.tupling.c"
                  transform_hlds__tupling__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__tupling__V_5_5, transform_hlds__tupling__V_12_12);
                }
#line 816 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
                  {
#line 7077 "transform_hlds.tupling.c"
                    transform_hlds__tupling__TypeInfo_22_22 = (MR_Word) &transform_hlds__tupling_scalar_common_2[9];
#line 7079 "transform_hlds.tupling.c"
                    {
#line 7081 "transform_hlds.tupling.c"
                      transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_22_22, ((MR_Box) (transform_hlds__tupling__V_6_6)), ((MR_Box) (transform_hlds__tupling__V_13_13)));
                    }
#line 816 "tupling.m"
                    if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
                      {
#line 7088 "transform_hlds.tupling.c"
                        {
#line 7090 "transform_hlds.tupling.c"
                          transform_hlds__tupling__succeeded = transform_hlds__tupling____Unify____tuning_params_0_0(transform_hlds__tupling__V_7_7, transform_hlds__tupling__V_14_14);
                        }
#line 816 "tupling.m"
                        if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
                          {
#line 7097 "transform_hlds.tupling.c"
                            transform_hlds__tupling__TypeInfo_23_23 = (MR_Word) &transform_hlds__tupling_scalar_common_2[5];
#line 7099 "transform_hlds.tupling.c"
                            {
#line 7101 "transform_hlds.tupling.c"
                              transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_23_23, ((MR_Box) (transform_hlds__tupling__V_8_8)), ((MR_Box) (transform_hlds__tupling__V_15_15)));
                            }
#line 816 "tupling.m"
                            if (transform_hlds__tupling__succeeded)
#line 816 "tupling.m"
                              {
#line 7108 "transform_hlds.tupling.c"
                                transform_hlds__tupling__TypeInfo_24_24 = (MR_Word) &transform_hlds__tupling_scalar_common_2[3];
#line 7110 "transform_hlds.tupling.c"
                                {
#line 7112 "transform_hlds.tupling.c"
                                  return transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__tupling__TypeInfo_24_24, ((MR_Box) (transform_hlds__tupling__V_9_9)), ((MR_Box) (transform_hlds__tupling__V_16_16)));
                                }
#line 816 "tupling.m"
                              }
#line 816 "tupling.m"
                          }
#line 816 "tupling.m"
                      }
#line 816 "tupling.m"
                  }
#line 816 "tupling.m"
              }
#line 816 "tupling.m"
          }
#line 816 "tupling.m"
      }
#line 816 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 816 "tupling.m"
  }
#line 816 "tupling.m"
}

#line 848 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____costs_0_0(
#line 848 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 848 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 848 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 848 "tupling.m"
{
#line 848 "tupling.m"
  {
#line 848 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 848 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_9 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;
#line 848 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_10 = (MR_Integer) transform_hlds__tupling__HeadVar__3_3;

#line 848 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_9 == transform_hlds__tupling__CastY_10);
#line 848 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 7160 "transform_hlds.tupling.c"
      *transform_hlds__tupling__HeadVar__1_1 = (MR_Integer) 0;
#line 848 "tupling.m"
    else
#line 848 "tupling.m"
      {
#line 848 "tupling.m"
        MR_Float transform_hlds__tupling__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 848 "tupling.m"
        MR_Float transform_hlds__tupling__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 848 "tupling.m"
        MR_Float transform_hlds__tupling__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 0)));
#line 848 "tupling.m"
        MR_Float transform_hlds__tupling__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__3_3, (MR_Integer) 1)));
#line 848 "tupling.m"
        MR_Word transform_hlds__tupling__V_8_8;

#line 848 "tupling.m"
        {
#line 848 "tupling.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(&transform_hlds__tupling__V_8_8, transform_hlds__tupling__V_4_4, transform_hlds__tupling__V_6_6);
        }
#line 7182 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_8_8 == (MR_Integer) 0);
#line 848 "tupling.m"
        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 848 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 848 "tupling.m"
          *transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__V_8_8;
#line 848 "tupling.m"
        else
#line 848 "tupling.m"
          {
#line 848 "tupling.m"
            mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__tupling__HeadVar__1_1, transform_hlds__tupling__V_5_5, transform_hlds__tupling__V_7_7);
#line 848 "tupling.m"
            return;
          }
#line 848 "tupling.m"
      }
#line 848 "tupling.m"
  }
#line 848 "tupling.m"
}

#line 848 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____costs_0_0(
#line 848 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 848 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 848 "tupling.m"
{
#line 848 "tupling.m"
  {
#line 848 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 848 "tupling.m"
    MR_Integer transform_hlds__tupling__CastX_7 = (MR_Integer) transform_hlds__tupling__HeadVar__1_1;
#line 848 "tupling.m"
    MR_Integer transform_hlds__tupling__CastY_8 = (MR_Integer) transform_hlds__tupling__HeadVar__2_2;

#line 848 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__CastX_7 == transform_hlds__tupling__CastY_8);
#line 848 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 848 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 848 "tupling.m"
    else
#line 848 "tupling.m"
      {
#line 848 "tupling.m"
        MR_Float transform_hlds__tupling__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 848 "tupling.m"
        MR_Float transform_hlds__tupling__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 848 "tupling.m"
        MR_Float transform_hlds__tupling__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 848 "tupling.m"
        MR_Float transform_hlds__tupling__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));

#line 7243 "transform_hlds.tupling.c"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_3_3 == transform_hlds__tupling__V_5_5);
#line 848 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 7247 "transform_hlds.tupling.c"
          transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_4_4 == transform_hlds__tupling__V_6_6);
#line 848 "tupling.m"
      }
#line 848 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 848 "tupling.m"
  }
#line 848 "tupling.m"
}

#line 423 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvars_0_0(
#line 423 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 423 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 423 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 423 "tupling.m"
{
#line 423 "tupling.m"
  {
#line 423 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 423 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_4 = transform_hlds__tupling__HeadVar__2_2;
#line 423 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_5 = transform_hlds__tupling__HeadVar__3_3;

#line 423 "tupling.m"
    {
#line 423 "tupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[3], transform_hlds__tupling__HeadVar__1_1, ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_5)));
#line 423 "tupling.m"
      return;
    }
#line 423 "tupling.m"
  }
#line 423 "tupling.m"
}

#line 423 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvars_0_0(
#line 423 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 423 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 423 "tupling.m"
{
#line 423 "tupling.m"
  {
#line 423 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 423 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_3 = transform_hlds__tupling__HeadVar__1_1;
#line 423 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_4 = transform_hlds__tupling__HeadVar__2_2;

#line 423 "tupling.m"
    {
#line 423 "tupling.m"
      return transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[3], ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_4)));
    }
#line 423 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 423 "tupling.m"
  }
#line 423 "tupling.m"
}

#line 425 "tupling.m"
static void MR_CALL 
transform_hlds__tupling____Compare____candidate_headvar_origins_0_0(
#line 425 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__1_1,
#line 425 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 425 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3)
#line 425 "tupling.m"
{
#line 425 "tupling.m"
  {
#line 425 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 425 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_4 = transform_hlds__tupling__HeadVar__2_2;
#line 425 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_5 = transform_hlds__tupling__HeadVar__3_3;

#line 425 "tupling.m"
    {
#line 425 "tupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[1], transform_hlds__tupling__HeadVar__1_1, ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_5)));
#line 425 "tupling.m"
      return;
    }
#line 425 "tupling.m"
  }
#line 425 "tupling.m"
}

#line 425 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling____Unify____candidate_headvar_origins_0_0(
#line 425 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 425 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2)
#line 425 "tupling.m"
{
#line 425 "tupling.m"
  {
#line 425 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 425 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar1_3 = transform_hlds__tupling__HeadVar__1_1;
#line 425 "tupling.m"
    MR_Word transform_hlds__tupling__Cast_HeadVar2_4 = transform_hlds__tupling__HeadVar__2_2;

#line 425 "tupling.m"
    {
#line 425 "tupling.m"
      return transform_hlds__tupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[1], ((MR_Box) (transform_hlds__tupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__tupling__Cast_HeadVar2_4)));
    }
#line 425 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 425 "tupling.m"
  }
#line 425 "tupling.m"
}

#line 2011 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_switch_total_count_2_5_p_0(
#line 2011 "tupling.m"
  MR_Word transform_hlds__tupling__SwitchGoalPath_6,
#line 2011 "tupling.m"
  MR_Word transform_hlds__tupling__PathPort_7,
#line 2011 "tupling.m"
  MR_Word transform_hlds__tupling__LineNoAndCount_8,
#line 2011 "tupling.m"
  MR_Integer transform_hlds__tupling__STATE_VARIABLE_TotalAcc_0_10,
#line 2011 "tupling.m"
  MR_Integer * transform_hlds__tupling__STATE_VARIABLE_TotalAcc_11)
#line 2011 "tupling.m"
{
#line 2018 "tupling.m"
  {
#line 2018 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__PathPort_7)) == (MR_mktag((MR_Integer) 1)));
#line 2024 "tupling.m"
    MR_Word transform_hlds__tupling__LastStep_18;
#line 2024 "tupling.m"
    MR_Word transform_hlds__tupling__V_21_21;
#line 2025 "tupling.m"
    MR_Word transform_hlds__tupling__V_17_17;
#line 2026 "tupling.m"
    MR_Integer transform_hlds__tupling__V_19_19;
#line 2026 "tupling.m"
    MR_Word transform_hlds__tupling__V_20_20;

#line 2024 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 2024 "tupling.m"
      {
#line 2024 "tupling.m"
        transform_hlds__tupling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__PathPort_7, (MR_Integer) 0)));
#line 2024 "tupling.m"
        {
#line 2024 "tupling.m"
          transform_hlds__tupling__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(transform_hlds__tupling__SwitchGoalPath_6, transform_hlds__tupling__V_21_21);
        }
#line 2024 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 2024 "tupling.m"
          {
#line 2025 "tupling.m"
            transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__SwitchGoalPath_6)) == (MR_mktag((MR_Integer) 1)));
#line 2025 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 2025 "tupling.m"
              {
#line 2025 "tupling.m"
                transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__SwitchGoalPath_6, (MR_Integer) 0)));
#line 2025 "tupling.m"
                transform_hlds__tupling__LastStep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__SwitchGoalPath_6, (MR_Integer) 1)));
#line 2026 "tupling.m"
                transform_hlds__tupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__tupling__LastStep_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__LastStep_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 2026 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 2026 "tupling.m"
                  {
#line 2026 "tupling.m"
                    transform_hlds__tupling__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__LastStep_18, (MR_Integer) 1)));
#line 2026 "tupling.m"
                    transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__LastStep_18, (MR_Integer) 2)));
#line 2026 "tupling.m"
                  }
#line 2025 "tupling.m"
              }
#line 2024 "tupling.m"
          }
#line 2024 "tupling.m"
      }
#line 2018 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 2017 "tupling.m"
      {
#line 2017 "tupling.m"
        MR_Integer transform_hlds__tupling__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__LineNoAndCount_8, (MR_Integer) 1)));
#line 2017 "tupling.m"
        MR_Integer transform_hlds__tupling__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__LineNoAndCount_8, (MR_Integer) 0)));
#line 2017 "tupling.m"
        MR_Integer transform_hlds__tupling__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__LineNoAndCount_8, (MR_Integer) 2)));

#line 2017 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_TotalAcc_11 = (transform_hlds__tupling__STATE_VARIABLE_TotalAcc_0_10 + transform_hlds__tupling__V_13_13);
#line 2017 "tupling.m"
      }
#line 2018 "tupling.m"
    else
#line 2017 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_TotalAcc_11 = transform_hlds__tupling__STATE_VARIABLE_TotalAcc_0_10;
#line 2018 "tupling.m"
  }
#line 2011 "tupling.m"
}

#line 2009 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0_1(
#line 2009 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 2009 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 2009 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 2009 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 2009 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 2009 "tupling.m"
{
#line 2009 "tupling.m"
  {
#line 2009 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 2009 "tupling.m"
    MR_Integer transform_hlds__tupling__conv2_STATE_VARIABLE_TotalAcc_11;

#line 2009 "tupling.m"
    {
#line 2009 "tupling.m"
      transform_hlds__tupling__get_switch_total_count_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Integer) transform_hlds__tupling__wrapper_arg_3), &transform_hlds__tupling__conv2_STATE_VARIABLE_TotalAcc_11);
    }
#line 2009 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_4 = ((MR_Box) (transform_hlds__tupling__conv2_STATE_VARIABLE_TotalAcc_11));
#line 2009 "tupling.m"
  }
#line 2009 "tupling.m"
}

#line 1991 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_case_relative_frequency_4_p_0(
#line 1991 "tupling.m"
  MR_Word transform_hlds__tupling__ProcCounts_5,
#line 1991 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMap_6,
#line 1991 "tupling.m"
  MR_Word transform_hlds__tupling__GoalId_7,
#line 1991 "tupling.m"
  MR_Float * transform_hlds__tupling__RelFreq_8)
#line 1991 "tupling.m"
{
#line 1994 "tupling.m"
  {
#line 1994 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1994 "tupling.m"
    MR_Word transform_hlds__tupling__GoalPath_9;
#line 1994 "tupling.m"
    MR_Integer transform_hlds__tupling__CaseTotal_10;
#line 1994 "tupling.m"
    MR_Integer transform_hlds__tupling__SwitchTotal_11;
#line 1994 "tupling.m"
    MR_Word transform_hlds__tupling__PathPort_19;
#line 1994 "tupling.m"
    MR_Word transform_hlds__tupling__V_28_28;
#line 1995 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_GoalPath_9;
#line 1946 "tupling.m"
    MR_Word transform_hlds__tupling__ContextCount_20;
#line 1944 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_ContextCount_20;
#line 2009 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_SwitchTotal_11;

#line 1995 "tupling.m"
    {
#line 1995 "tupling.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, transform_hlds__tupling__ReverseGoalPathMap_6, ((MR_Box) (transform_hlds__tupling__GoalId_7)), &transform_hlds__tupling__conv0_GoalPath_9);
    }
#line 1995 "tupling.m"
    transform_hlds__tupling__GoalPath_9 = ((MR_Word) transform_hlds__tupling__conv0_GoalPath_9);
#line 1943 "tupling.m"
    {
#line 1943 "tupling.m"
      transform_hlds__tupling__PathPort_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1943 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__PathPort_19, 0) = ((MR_Box) (transform_hlds__tupling__GoalPath_9));
#line 1943 "tupling.m"
    }
#line 1944 "tupling.m"
    {
#line 1944 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, transform_hlds__tupling__ProcCounts_5, ((MR_Box) (transform_hlds__tupling__PathPort_19)), &transform_hlds__tupling__conv1_ContextCount_20);
    }
#line 1944 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1944 "tupling.m"
      {
#line 1944 "tupling.m"
        transform_hlds__tupling__ContextCount_20 = ((MR_Word) transform_hlds__tupling__conv1_ContextCount_20);
#line 1944 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 1944 "tupling.m"
      }
#line 1946 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1945 "tupling.m"
      {
#line 1945 "tupling.m"
        MR_Integer transform_hlds__tupling__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_20, (MR_Integer) 0)));
#line 1945 "tupling.m"
        MR_Integer transform_hlds__tupling__V_22_22;

#line 1945 "tupling.m"
        transform_hlds__tupling__CaseTotal_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_20, (MR_Integer) 1)));
#line 1945 "tupling.m"
        transform_hlds__tupling__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_20, (MR_Integer) 2)));
#line 1945 "tupling.m"
      }
#line 1946 "tupling.m"
    else
#line 1947 "tupling.m"
      transform_hlds__tupling__CaseTotal_10 = (MR_Integer) 0;
#line 2009 "tupling.m"
    {
#line 2009 "tupling.m"
      transform_hlds__tupling__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2009 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_28_28, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[4]));
#line 2009 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_28_28, 1) = ((MR_Box) (transform_hlds__tupling__get_case_relative_frequency_4_p_0_1));
#line 2009 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2009 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_28_28, 3) = ((MR_Box) (transform_hlds__tupling__GoalPath_9));
#line 2009 "tupling.m"
    }
#line 2009 "tupling.m"
    {
#line 2009 "tupling.m"
      mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__tupling__V_28_28, transform_hlds__tupling__ProcCounts_5, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__tupling__conv3_SwitchTotal_11);
    }
#line 2009 "tupling.m"
    transform_hlds__tupling__SwitchTotal_11 = ((MR_Integer) transform_hlds__tupling__conv3_SwitchTotal_11);
#line 1998 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__SwitchTotal_11 == (MR_Integer) 0);
#line 2000 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1999 "tupling.m"
      *transform_hlds__tupling__RelFreq_8 = (MR_Float) 0.0000000000000000;
#line 2000 "tupling.m"
    else
#line 2001 "tupling.m"
      {
#line 2001 "tupling.m"
        MR_Float transform_hlds__tupling__V_12_12;
#line 2001 "tupling.m"
        MR_Float transform_hlds__tupling__V_13_13;

#line 2001 "tupling.m"
        {
#line 2001 "tupling.m"
          transform_hlds__tupling__V_12_12 = mercury__float__float_1_f_0(transform_hlds__tupling__CaseTotal_10);
        }
#line 2001 "tupling.m"
        {
#line 2001 "tupling.m"
          transform_hlds__tupling__V_13_13 = mercury__float__float_1_f_0(transform_hlds__tupling__SwitchTotal_11);
        }
#line 2001 "tupling.m"
        {
#line 2001 "tupling.m"
          *transform_hlds__tupling__RelFreq_8 = mercury__float__f_slash_2_f_0(transform_hlds__tupling__V_12_12, transform_hlds__tupling__V_13_13);
        }
#line 2001 "tupling.m"
      }
#line 1994 "tupling.m"
  }
#line 1991 "tupling.m"
}

#line 1969 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_disjunct_relative_frequency_4_p_0(
#line 1969 "tupling.m"
  MR_Word transform_hlds__tupling__ProcCounts_5,
#line 1969 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMap_6,
#line 1969 "tupling.m"
  MR_Word transform_hlds__tupling__GoalId_7,
#line 1969 "tupling.m"
  MR_Float * transform_hlds__tupling__RelFreq_8)
#line 1969 "tupling.m"
{
#line 1973 "tupling.m"
  {
#line 1973 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1973 "tupling.m"
    MR_Word transform_hlds__tupling__RevGoalPath_9;
#line 1974 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_RevGoalPath_9;
#line 1987 "tupling.m"
    MR_Word transform_hlds__tupling__RevPrevGoalPath_10;
#line 1976 "tupling.m"
    MR_Word transform_hlds__tupling__LastStep_11;
#line 1977 "tupling.m"
    MR_Integer transform_hlds__tupling__V_12_12;

#line 1974 "tupling.m"
    {
#line 1974 "tupling.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, transform_hlds__tupling__ReverseGoalPathMap_6, ((MR_Box) (transform_hlds__tupling__GoalId_7)), &transform_hlds__tupling__conv0_RevGoalPath_9);
    }
#line 1974 "tupling.m"
    transform_hlds__tupling__RevGoalPath_9 = ((MR_Word) transform_hlds__tupling__conv0_RevGoalPath_9);
#line 1976 "tupling.m"
    transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__RevGoalPath_9)) == (MR_mktag((MR_Integer) 1)));
#line 1976 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1976 "tupling.m"
      {
#line 1976 "tupling.m"
        transform_hlds__tupling__RevPrevGoalPath_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__RevGoalPath_9, (MR_Integer) 0)));
#line 1976 "tupling.m"
        transform_hlds__tupling__LastStep_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__RevGoalPath_9, (MR_Integer) 1)));
#line 1977 "tupling.m"
        transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__LastStep_11)) == (MR_mktag((MR_Integer) 2)));
#line 1977 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1977 "tupling.m"
          transform_hlds__tupling__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__LastStep_11, (MR_Integer) 0)));
#line 1976 "tupling.m"
      }
#line 1987 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1979 "tupling.m"
      {
#line 1979 "tupling.m"
        MR_Word transform_hlds__tupling__RevFirstDisjGoalPath_13;
#line 1979 "tupling.m"
        MR_Integer transform_hlds__tupling__DisjCount_14;
#line 1979 "tupling.m"
        MR_Integer transform_hlds__tupling__FirstDisjCount_15;
#line 1979 "tupling.m"
        MR_Word transform_hlds__tupling__PathPort_28;
#line 1979 "tupling.m"
        MR_Word transform_hlds__tupling__PathPort_37;
#line 1946 "tupling.m"
        MR_Word transform_hlds__tupling__ContextCount_29;
#line 1944 "tupling.m"
        MR_Box transform_hlds__tupling__conv1_ContextCount_29;
#line 1946 "tupling.m"
        MR_Word transform_hlds__tupling__ContextCount_38;
#line 1944 "tupling.m"
        MR_Box transform_hlds__tupling__conv2_ContextCount_38;

#line 1979 "tupling.m"
        {
#line 1979 "tupling.m"
          transform_hlds__tupling__RevFirstDisjGoalPath_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__RevFirstDisjGoalPath_13, 0) = ((MR_Box) (transform_hlds__tupling__RevPrevGoalPath_10));
#line 1979 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__RevFirstDisjGoalPath_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__tupling_scalar_common_3[4])));
#line 1979 "tupling.m"
        }
#line 1943 "tupling.m"
        {
#line 1943 "tupling.m"
          transform_hlds__tupling__PathPort_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1943 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__PathPort_28, 0) = ((MR_Box) (transform_hlds__tupling__RevGoalPath_9));
#line 1943 "tupling.m"
        }
#line 1944 "tupling.m"
        {
#line 1944 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, transform_hlds__tupling__ProcCounts_5, ((MR_Box) (transform_hlds__tupling__PathPort_28)), &transform_hlds__tupling__conv1_ContextCount_29);
        }
#line 1944 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1944 "tupling.m"
          {
#line 1944 "tupling.m"
            transform_hlds__tupling__ContextCount_29 = ((MR_Word) transform_hlds__tupling__conv1_ContextCount_29);
#line 1944 "tupling.m"
            transform_hlds__tupling__succeeded = MR_TRUE;
#line 1944 "tupling.m"
          }
#line 1946 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1945 "tupling.m"
          {
#line 1945 "tupling.m"
            MR_Integer transform_hlds__tupling__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_29, (MR_Integer) 0)));
#line 1945 "tupling.m"
            MR_Integer transform_hlds__tupling__V_31_31;

#line 1945 "tupling.m"
            transform_hlds__tupling__DisjCount_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_29, (MR_Integer) 1)));
#line 1945 "tupling.m"
            transform_hlds__tupling__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_29, (MR_Integer) 2)));
#line 1945 "tupling.m"
          }
#line 1946 "tupling.m"
        else
#line 1947 "tupling.m"
          transform_hlds__tupling__DisjCount_14 = (MR_Integer) 0;
#line 1943 "tupling.m"
        {
#line 1943 "tupling.m"
          transform_hlds__tupling__PathPort_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1943 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__PathPort_37, 0) = ((MR_Box) (transform_hlds__tupling__RevFirstDisjGoalPath_13));
#line 1943 "tupling.m"
        }
#line 1944 "tupling.m"
        {
#line 1944 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, transform_hlds__tupling__ProcCounts_5, ((MR_Box) (transform_hlds__tupling__PathPort_37)), &transform_hlds__tupling__conv2_ContextCount_38);
        }
#line 1944 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1944 "tupling.m"
          {
#line 1944 "tupling.m"
            transform_hlds__tupling__ContextCount_38 = ((MR_Word) transform_hlds__tupling__conv2_ContextCount_38);
#line 1944 "tupling.m"
            transform_hlds__tupling__succeeded = MR_TRUE;
#line 1944 "tupling.m"
          }
#line 1946 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1945 "tupling.m"
          {
#line 1945 "tupling.m"
            MR_Integer transform_hlds__tupling__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_38, (MR_Integer) 0)));
#line 1945 "tupling.m"
            MR_Integer transform_hlds__tupling__V_40_40;

#line 1945 "tupling.m"
            transform_hlds__tupling__FirstDisjCount_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_38, (MR_Integer) 1)));
#line 1945 "tupling.m"
            transform_hlds__tupling__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_38, (MR_Integer) 2)));
#line 1945 "tupling.m"
          }
#line 1946 "tupling.m"
        else
#line 1947 "tupling.m"
          transform_hlds__tupling__FirstDisjCount_15 = (MR_Integer) 0;
#line 1982 "tupling.m"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__FirstDisjCount_15 == (MR_Integer) 0);
#line 1984 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1983 "tupling.m"
          *transform_hlds__tupling__RelFreq_8 = (MR_Float) 0.0000000000000000;
#line 1984 "tupling.m"
        else
#line 1985 "tupling.m"
          {
#line 1985 "tupling.m"
            MR_Float transform_hlds__tupling__V_18_18;
#line 1985 "tupling.m"
            MR_Float transform_hlds__tupling__V_19_19;

#line 1985 "tupling.m"
            {
#line 1985 "tupling.m"
              transform_hlds__tupling__V_18_18 = mercury__float__float_1_f_0(transform_hlds__tupling__DisjCount_14);
            }
#line 1985 "tupling.m"
            {
#line 1985 "tupling.m"
              transform_hlds__tupling__V_19_19 = mercury__float__float_1_f_0(transform_hlds__tupling__FirstDisjCount_15);
            }
#line 1985 "tupling.m"
            {
#line 1985 "tupling.m"
              *transform_hlds__tupling__RelFreq_8 = mercury__float__f_slash_2_f_0(transform_hlds__tupling__V_18_18, transform_hlds__tupling__V_19_19);
            }
#line 1985 "tupling.m"
          }
#line 1979 "tupling.m"
      }
#line 1987 "tupling.m"
    else
#line 1988 "tupling.m"
      {
#line 1988 "tupling.m"
        {
#line 1988 "tupling.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.get_disjunct_relative_frequency\'/4", (MR_String) "did not see disj(N) at head of goal path");
#line 1988 "tupling.m"
          return;
        }
#line 1988 "tupling.m"
      }
#line 1973 "tupling.m"
  }
#line 1969 "tupling.m"
}

#line 1950 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__get_ite_relative_frequencies_6_p_0(
#line 1950 "tupling.m"
  MR_Word transform_hlds__tupling__ProcCounts_7,
#line 1950 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMap_8,
#line 1950 "tupling.m"
  MR_Word transform_hlds__tupling__ThenGoalId_9,
#line 1950 "tupling.m"
  MR_Word transform_hlds__tupling__ElseGoalId_10,
#line 1950 "tupling.m"
  MR_Float * transform_hlds__tupling__ThenRelFreq_11,
#line 1950 "tupling.m"
  MR_Float * transform_hlds__tupling__ElseRelFreq_12)
#line 1950 "tupling.m"
{
#line 1955 "tupling.m"
  {
#line 1955 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1955 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 1955 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_24_24 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 1955 "tupling.m"
    MR_Word transform_hlds__tupling__ThenGoalPath_13;
#line 1955 "tupling.m"
    MR_Word transform_hlds__tupling__ElseGoalPath_14;
#line 1955 "tupling.m"
    MR_Integer transform_hlds__tupling__ThenCounts_15;
#line 1955 "tupling.m"
    MR_Integer transform_hlds__tupling__ElseCounts_16;
#line 1955 "tupling.m"
    MR_Integer transform_hlds__tupling__Total_17;
#line 1955 "tupling.m"
    MR_Word transform_hlds__tupling__PathPort_28;
#line 1955 "tupling.m"
    MR_Word transform_hlds__tupling__PathPort_37;
#line 1956 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_ThenGoalPath_13;
#line 1957 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_ElseGoalPath_14;
#line 1946 "tupling.m"
    MR_Word transform_hlds__tupling__ContextCount_29;
#line 1944 "tupling.m"
    MR_Box transform_hlds__tupling__conv2_ContextCount_29;
#line 1946 "tupling.m"
    MR_Word transform_hlds__tupling__ContextCount_38;
#line 1944 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_ContextCount_38;

#line 1956 "tupling.m"
    {
#line 1956 "tupling.m"
      mercury__map__lookup_3_p_0(transform_hlds__tupling__TypeCtorInfo_23_23, transform_hlds__tupling__TypeCtorInfo_24_24, transform_hlds__tupling__ReverseGoalPathMap_8, ((MR_Box) (transform_hlds__tupling__ThenGoalId_9)), &transform_hlds__tupling__conv0_ThenGoalPath_13);
    }
#line 1956 "tupling.m"
    transform_hlds__tupling__ThenGoalPath_13 = ((MR_Word) transform_hlds__tupling__conv0_ThenGoalPath_13);
#line 1957 "tupling.m"
    {
#line 1957 "tupling.m"
      mercury__map__lookup_3_p_0(transform_hlds__tupling__TypeCtorInfo_23_23, transform_hlds__tupling__TypeCtorInfo_24_24, transform_hlds__tupling__ReverseGoalPathMap_8, ((MR_Box) (transform_hlds__tupling__ElseGoalId_10)), &transform_hlds__tupling__conv1_ElseGoalPath_14);
    }
#line 1957 "tupling.m"
    transform_hlds__tupling__ElseGoalPath_14 = ((MR_Word) transform_hlds__tupling__conv1_ElseGoalPath_14);
#line 1943 "tupling.m"
    {
#line 1943 "tupling.m"
      transform_hlds__tupling__PathPort_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1943 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__PathPort_28, 0) = ((MR_Box) (transform_hlds__tupling__ThenGoalPath_13));
#line 1943 "tupling.m"
    }
#line 1944 "tupling.m"
    {
#line 1944 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, transform_hlds__tupling__ProcCounts_7, ((MR_Box) (transform_hlds__tupling__PathPort_28)), &transform_hlds__tupling__conv2_ContextCount_29);
    }
#line 1944 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1944 "tupling.m"
      {
#line 1944 "tupling.m"
        transform_hlds__tupling__ContextCount_29 = ((MR_Word) transform_hlds__tupling__conv2_ContextCount_29);
#line 1944 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 1944 "tupling.m"
      }
#line 1946 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1945 "tupling.m"
      {
#line 1945 "tupling.m"
        MR_Integer transform_hlds__tupling__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_29, (MR_Integer) 0)));
#line 1945 "tupling.m"
        MR_Integer transform_hlds__tupling__V_31_31;

#line 1945 "tupling.m"
        transform_hlds__tupling__ThenCounts_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_29, (MR_Integer) 1)));
#line 1945 "tupling.m"
        transform_hlds__tupling__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_29, (MR_Integer) 2)));
#line 1945 "tupling.m"
      }
#line 1946 "tupling.m"
    else
#line 1947 "tupling.m"
      transform_hlds__tupling__ThenCounts_15 = (MR_Integer) 0;
#line 1943 "tupling.m"
    {
#line 1943 "tupling.m"
      transform_hlds__tupling__PathPort_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1943 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__PathPort_37, 0) = ((MR_Box) (transform_hlds__tupling__ElseGoalPath_14));
#line 1943 "tupling.m"
    }
#line 1944 "tupling.m"
    {
#line 1944 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, transform_hlds__tupling__ProcCounts_7, ((MR_Box) (transform_hlds__tupling__PathPort_37)), &transform_hlds__tupling__conv3_ContextCount_38);
    }
#line 1944 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1944 "tupling.m"
      {
#line 1944 "tupling.m"
        transform_hlds__tupling__ContextCount_38 = ((MR_Word) transform_hlds__tupling__conv3_ContextCount_38);
#line 1944 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 1944 "tupling.m"
      }
#line 1946 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1945 "tupling.m"
      {
#line 1945 "tupling.m"
        MR_Integer transform_hlds__tupling__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_38, (MR_Integer) 0)));
#line 1945 "tupling.m"
        MR_Integer transform_hlds__tupling__V_40_40;

#line 1945 "tupling.m"
        transform_hlds__tupling__ElseCounts_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_38, (MR_Integer) 1)));
#line 1945 "tupling.m"
        transform_hlds__tupling__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__ContextCount_38, (MR_Integer) 2)));
#line 1945 "tupling.m"
      }
#line 1946 "tupling.m"
    else
#line 1947 "tupling.m"
      transform_hlds__tupling__ElseCounts_16 = (MR_Integer) 0;
#line 1960 "tupling.m"
    transform_hlds__tupling__Total_17 = (transform_hlds__tupling__ThenCounts_15 + transform_hlds__tupling__ElseCounts_16);
#line 1961 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__Total_17 > (MR_Integer) 0);
#line 1964 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1962 "tupling.m"
      {
#line 1962 "tupling.m"
        MR_Float transform_hlds__tupling__V_19_19;
#line 1962 "tupling.m"
        MR_Float transform_hlds__tupling__V_20_20;
#line 1962 "tupling.m"
        MR_Float transform_hlds__tupling__V_21_21;
#line 1962 "tupling.m"
        MR_Float transform_hlds__tupling__V_22_22;

#line 1962 "tupling.m"
        {
#line 1962 "tupling.m"
          transform_hlds__tupling__V_19_19 = mercury__float__float_1_f_0(transform_hlds__tupling__ThenCounts_15);
        }
#line 1962 "tupling.m"
        {
#line 1962 "tupling.m"
          transform_hlds__tupling__V_20_20 = mercury__float__float_1_f_0(transform_hlds__tupling__Total_17);
        }
#line 1962 "tupling.m"
        {
#line 1962 "tupling.m"
          *transform_hlds__tupling__ThenRelFreq_11 = mercury__float__f_slash_2_f_0(transform_hlds__tupling__V_19_19, transform_hlds__tupling__V_20_20);
        }
#line 1963 "tupling.m"
        {
#line 1963 "tupling.m"
          transform_hlds__tupling__V_21_21 = mercury__float__float_1_f_0(transform_hlds__tupling__ElseCounts_16);
        }
#line 1963 "tupling.m"
        {
#line 1963 "tupling.m"
          transform_hlds__tupling__V_22_22 = mercury__float__float_1_f_0(transform_hlds__tupling__Total_17);
        }
#line 1963 "tupling.m"
        {
#line 1963 "tupling.m"
          *transform_hlds__tupling__ElseRelFreq_12 = mercury__float__f_slash_2_f_0(transform_hlds__tupling__V_21_21, transform_hlds__tupling__V_22_22);
        }
#line 1962 "tupling.m"
      }
#line 1964 "tupling.m"
    else
#line 1965 "tupling.m"
      {
#line 1965 "tupling.m"
        *transform_hlds__tupling__ThenRelFreq_11 = (MR_Float) 0.50000000000000000;
#line 1966 "tupling.m"
        *transform_hlds__tupling__ElseRelFreq_12 = (MR_Float) 0.50000000000000000;
#line 1965 "tupling.m"
      }
#line 1955 "tupling.m"
  }
#line 1950 "tupling.m"
}

#line 1906 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(
#line 1906 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1906 "tupling.m"
  MR_Integer transform_hlds__tupling__HeadVar__2_2,
#line 1906 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1906 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__4_4)
#line 1906 "tupling.m"
{
#line 1909 "tupling.m"
  while (MR_TRUE)
#line 1909 "tupling.m"
    {
#line 1909 "tupling.m"
      /* tailcall optimized into a loop */
#line 1909 "tupling.m"
      {
#line 1909 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;

#line 1909 "tupling.m"
        if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1909 "tupling.m"
          *transform_hlds__tupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1909 "tupling.m"
        else
#line 1910 "tupling.m"
          {
#line 1910 "tupling.m"
            MR_Word transform_hlds__tupling__H_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1910 "tupling.m"
            MR_Word transform_hlds__tupling__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));

#line 1911 "tupling.m"
            {
#line 1911 "tupling.m"
              transform_hlds__tupling__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__tupling__HeadVar__2_2)), transform_hlds__tupling__HeadVar__3_3);
            }
#line 1913 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 1912 "tupling.m"
              {
#line 1912 "tupling.m"
                MR_Integer transform_hlds__tupling__V_13_13 = (transform_hlds__tupling__HeadVar__2_2 + (MR_Integer) 1);

#line 1912 "tupling.m"
                /* direct tailcall eliminated */
#line 1912 "tupling.m"
                {
#line 1912 "tupling.m"
                  MR_Word transform_hlds__tupling__HeadVar__1__tmp_copy_1 = transform_hlds__tupling__T_8;
#line 1912 "tupling.m"
                  MR_Integer transform_hlds__tupling__HeadVar__2__tmp_copy_2 = transform_hlds__tupling__V_13_13;

#line 1912 "tupling.m"
                  transform_hlds__tupling__HeadVar__2_2 = transform_hlds__tupling__HeadVar__2__tmp_copy_2;
#line 1912 "tupling.m"
                  transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__HeadVar__1__tmp_copy_1;
#line 1912 "tupling.m"
                }
#line 1912 "tupling.m"
                continue;
#line 1912 "tupling.m"
              }
#line 1913 "tupling.m"
            else
#line 1914 "tupling.m"
              {
#line 1914 "tupling.m"
                MR_Word transform_hlds__tupling__NotSelectedTail_12;
#line 1914 "tupling.m"
                MR_Integer transform_hlds__tupling__V_15_15 = (transform_hlds__tupling__HeadVar__2_2 + (MR_Integer) 1);

#line 1914 "tupling.m"
                {
#line 1914 "tupling.m"
                  transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(transform_hlds__tupling__T_8, transform_hlds__tupling__V_15_15, transform_hlds__tupling__HeadVar__3_3, &transform_hlds__tupling__NotSelectedTail_12);
                }
#line 1915 "tupling.m"
                {
#line 1915 "tupling.m"
                  MR_Word base;
#line 1915 "tupling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "tupling.m"
                  *transform_hlds__tupling__HeadVar__4_4 = base;
#line 1915 "tupling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__H_7));
#line 1915 "tupling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__tupling__NotSelectedTail_12));
#line 1915 "tupling.m"
                }
#line 1914 "tupling.m"
              }
#line 1910 "tupling.m"
          }
#line 1909 "tupling.m"
      }
#line 1909 "tupling.m"
      break;
#line 1909 "tupling.m"
    }
#line 1906 "tupling.m"
}

#line 1903 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0_1(
#line 1903 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1903 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1903 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2)
#line 1903 "tupling.m"
{
#line 1903 "tupling.m"
  {
#line 1903 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1903 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_HeadVar__3_12;

#line 1903 "tupling.m"
    {
#line 1903 "tupling.m"
      transform_hlds__tupling__IntroducedFrom__pred__extract_tupled_args_from_list__1903__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__tupling__wrapper_arg_1), &transform_hlds__tupling__conv0_HeadVar__3_12);
    }
#line 1903 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__3_12));
#line 1903 "tupling.m"
  }
#line 1903 "tupling.m"
}

#line 1899 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__extract_tupled_args_from_list_4_p_0(
#line 1899 "tupling.m"
  MR_Word transform_hlds__tupling__ArgList_5,
#line 1899 "tupling.m"
  MR_Word transform_hlds__tupling__Indices_6,
#line 1899 "tupling.m"
  MR_Word * transform_hlds__tupling__Selected_7,
#line 1899 "tupling.m"
  MR_Word * transform_hlds__tupling__NotSelected_8)
#line 1899 "tupling.m"
{
#line 1902 "tupling.m"
  {
#line 1902 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1902 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9;

#line 1903 "tupling.m"
    {
#line 1903 "tupling.m"
      transform_hlds__tupling__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1903 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_9_9, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_7[3]));
#line 1903 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_9_9, 1) = ((MR_Box) (transform_hlds__tupling__extract_tupled_args_from_list_4_p_0_1));
#line 1903 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1903 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_9_9, 3) = ((MR_Box) (transform_hlds__tupling__ArgList_5));
#line 1903 "tupling.m"
    }
#line 1903 "tupling.m"
    {
#line 1903 "tupling.m"
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__V_9_9, transform_hlds__tupling__Indices_6, transform_hlds__tupling__Selected_7);
    }
#line 1904 "tupling.m"
    {
#line 1904 "tupling.m"
      transform_hlds__tupling__extract_tupled_args_from_list_2_4_p_0(transform_hlds__tupling__ArgList_5, (MR_Integer) 1, transform_hlds__tupling__Indices_6, transform_hlds__tupling__NotSelected_8);
#line 1904 "tupling.m"
      return;
    }
#line 1902 "tupling.m"
  }
#line 1899 "tupling.m"
}

#line 1871 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_cases_9_p_0(
#line 1871 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1871 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__2_2,
#line 1871 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3,
#line 1871 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_4,
#line 1871 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5,
#line 1871 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_6,
#line 1871 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7,
#line 1871 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8,
#line 1871 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_9)
#line 1871 "tupling.m"
{
#line 1875 "tupling.m"
  {
#line 1875 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1875 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1875 "tupling.m"
      {
#line 1875 "tupling.m"
        *transform_hlds__tupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1875 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8 = transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7;
#line 1875 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5;
#line 1875 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_VarSet_4 = transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3;
#line 1875 "tupling.m"
      }
#line 1875 "tupling.m"
    else
#line 1877 "tupling.m"
      {
#line 1877 "tupling.m"
        MR_Word transform_hlds__tupling__Case0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1877 "tupling.m"
        MR_Word transform_hlds__tupling__Cases0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1877 "tupling.m"
        MR_Word transform_hlds__tupling__Case_22;
#line 1877 "tupling.m"
        MR_Word transform_hlds__tupling__Cases_23;
#line 1877 "tupling.m"
        MR_Word transform_hlds__tupling__MainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case0_20, (MR_Integer) 0)));
#line 1877 "tupling.m"
        MR_Word transform_hlds__tupling__OtherConsIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case0_20, (MR_Integer) 1)));
#line 1877 "tupling.m"
        MR_Word transform_hlds__tupling__Goal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case0_20, (MR_Integer) 2)));
#line 1877 "tupling.m"
        MR_Word transform_hlds__tupling__Goal_31;
#line 1877 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_38_38;
#line 1877 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_39_39;
#line 1877 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_40_40;

#line 1879 "tupling.m"
        {
#line 1879 "tupling.m"
          transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Goal0_30, &transform_hlds__tupling__Goal_31, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__tupling__STATE_VARIABLE_VarSet_38_38, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__tupling__STATE_VARIABLE_VarTypes_39_39, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7, &transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_40_40, transform_hlds__tupling__TransformMap_9);
        }
#line 1881 "tupling.m"
        {
#line 1881 "tupling.m"
          transform_hlds__tupling__Case_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1881 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case_22, 0) = ((MR_Box) (transform_hlds__tupling__MainConsId_28));
#line 1881 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case_22, 1) = ((MR_Box) (transform_hlds__tupling__OtherConsIds_29));
#line 1881 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case_22, 2) = ((MR_Box) (transform_hlds__tupling__Goal_31));
#line 1881 "tupling.m"
        }
#line 1882 "tupling.m"
        {
#line 1882 "tupling.m"
          transform_hlds__tupling__fix_calls_in_cases_9_p_0(transform_hlds__tupling__Cases0_21, &transform_hlds__tupling__Cases_23, transform_hlds__tupling__STATE_VARIABLE_VarSet_38_38, transform_hlds__tupling__STATE_VARIABLE_VarSet_4, transform_hlds__tupling__STATE_VARIABLE_VarTypes_39_39, transform_hlds__tupling__STATE_VARIABLE_VarTypes_6, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_40_40, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8, transform_hlds__tupling__TransformMap_9);
        }
#line 1876 "tupling.m"
        {
#line 1876 "tupling.m"
          MR_Word base;
#line 1876 "tupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1876 "tupling.m"
          *transform_hlds__tupling__HeadVar__2_2 = base;
#line 1876 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__Case_22));
#line 1876 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__tupling__Cases_23));
#line 1876 "tupling.m"
        }
#line 1877 "tupling.m"
      }
#line 1875 "tupling.m"
  }
#line 1871 "tupling.m"
}

#line 1859 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(
#line 1859 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1859 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__2_2,
#line 1859 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3,
#line 1859 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_4,
#line 1859 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5,
#line 1859 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_6,
#line 1859 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7,
#line 1859 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8,
#line 1859 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_9)
#line 1859 "tupling.m"
{
#line 1863 "tupling.m"
  {
#line 1863 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1863 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1863 "tupling.m"
      {
#line 1863 "tupling.m"
        *transform_hlds__tupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1863 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8 = transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7;
#line 1863 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5;
#line 1863 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_VarSet_4 = transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3;
#line 1863 "tupling.m"
      }
#line 1863 "tupling.m"
    else
#line 1865 "tupling.m"
      {
#line 1865 "tupling.m"
        MR_Word transform_hlds__tupling__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1865 "tupling.m"
        MR_Word transform_hlds__tupling__Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1865 "tupling.m"
        MR_Word transform_hlds__tupling__Goal_22;
#line 1865 "tupling.m"
        MR_Word transform_hlds__tupling__Goals_23;
#line 1865 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_34_34;
#line 1865 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_35_35;
#line 1865 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_36_36;

#line 1866 "tupling.m"
        {
#line 1866 "tupling.m"
          transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Goal0_20, &transform_hlds__tupling__Goal_22, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__tupling__STATE_VARIABLE_VarSet_34_34, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__tupling__STATE_VARIABLE_VarTypes_35_35, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7, &transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_36_36, transform_hlds__tupling__TransformMap_9);
        }
#line 1868 "tupling.m"
        {
#line 1868 "tupling.m"
          transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(transform_hlds__tupling__Goals0_21, &transform_hlds__tupling__Goals_23, transform_hlds__tupling__STATE_VARIABLE_VarSet_34_34, transform_hlds__tupling__STATE_VARIABLE_VarSet_4, transform_hlds__tupling__STATE_VARIABLE_VarTypes_35_35, transform_hlds__tupling__STATE_VARIABLE_VarTypes_6, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_36_36, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8, transform_hlds__tupling__TransformMap_9);
        }
#line 1864 "tupling.m"
        {
#line 1864 "tupling.m"
          MR_Word base;
#line 1864 "tupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "tupling.m"
          *transform_hlds__tupling__HeadVar__2_2 = base;
#line 1864 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__Goal_22));
#line 1864 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__tupling__Goals_23));
#line 1864 "tupling.m"
        }
#line 1865 "tupling.m"
      }
#line 1863 "tupling.m"
  }
#line 1859 "tupling.m"
}

#line 1842 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_conj_9_p_0(
#line 1842 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1842 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__2_2,
#line 1842 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3,
#line 1842 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_4,
#line 1842 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5,
#line 1842 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_6,
#line 1842 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7,
#line 1842 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8,
#line 1842 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_9)
#line 1842 "tupling.m"
{
#line 1846 "tupling.m"
  {
#line 1846 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1846 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1846 "tupling.m"
      {
#line 1846 "tupling.m"
        *transform_hlds__tupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1846 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8 = transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7;
#line 1846 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5;
#line 1846 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_VarSet_4 = transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3;
#line 1846 "tupling.m"
      }
#line 1846 "tupling.m"
    else
#line 1848 "tupling.m"
      {
#line 1848 "tupling.m"
        MR_Word transform_hlds__tupling__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1848 "tupling.m"
        MR_Word transform_hlds__tupling__Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1848 "tupling.m"
        MR_Word transform_hlds__tupling__Goal1_27;
#line 1848 "tupling.m"
        MR_Word transform_hlds__tupling__Goals1_28;
#line 1848 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_37_37;
#line 1848 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_38_38;
#line 1848 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_39_39;
#line 1855 "tupling.m"
        MR_Word transform_hlds__tupling__ConjGoals_29;
#line 1853 "tupling.m"
        MR_Word transform_hlds__tupling__V_43_43;
#line 1853 "tupling.m"
        MR_Word transform_hlds__tupling__V_44_44;
#line 1853 "tupling.m"
        MR_Word transform_hlds__tupling__V_30_30;

#line 1849 "tupling.m"
        {
#line 1849 "tupling.m"
          transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Goal0_20, &transform_hlds__tupling__Goal1_27, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__tupling__STATE_VARIABLE_VarSet_37_37, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__tupling__STATE_VARIABLE_VarTypes_38_38, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_7, &transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_39_39, transform_hlds__tupling__TransformMap_9);
        }
#line 1851 "tupling.m"
        {
#line 1851 "tupling.m"
          transform_hlds__tupling__fix_calls_in_conj_9_p_0(transform_hlds__tupling__Goals0_21, &transform_hlds__tupling__Goals1_28, transform_hlds__tupling__STATE_VARIABLE_VarSet_37_37, transform_hlds__tupling__STATE_VARIABLE_VarSet_4, transform_hlds__tupling__STATE_VARIABLE_VarTypes_38_38, transform_hlds__tupling__STATE_VARIABLE_VarTypes_6, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_39_39, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_8, transform_hlds__tupling__TransformMap_9);
        }
#line 1853 "tupling.m"
        transform_hlds__tupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal1_27, (MR_Integer) 0)));
#line 1853 "tupling.m"
        transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal1_27, (MR_Integer) 1)));
#line 1853 "tupling.m"
        transform_hlds__tupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__tupling__V_43_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_43_43, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1853 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1853 "tupling.m"
          {
#line 1853 "tupling.m"
            transform_hlds__tupling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_43_43, (MR_Integer) 1)));
#line 1853 "tupling.m"
            transform_hlds__tupling__ConjGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_43_43, (MR_Integer) 2)));
#line 1853 "tupling.m"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_44_44 == (MR_Integer) 0);
#line 1853 "tupling.m"
          }
#line 1855 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1854 "tupling.m"
          {
#line 1854 "tupling.m"
            {
#line 1854 "tupling.m"
              *transform_hlds__tupling__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__tupling__ConjGoals_29, transform_hlds__tupling__Goals1_28);
            }
#line 1854 "tupling.m"
          }
#line 1855 "tupling.m"
        else
#line 1856 "tupling.m"
          {
#line 1856 "tupling.m"
            MR_Word base;
#line 1856 "tupling.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1856 "tupling.m"
            *transform_hlds__tupling__HeadVar__2_2 = base;
#line 1856 "tupling.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__Goal1_27));
#line 1856 "tupling.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__tupling__Goals1_28));
#line 1856 "tupling.m"
          }
#line 1848 "tupling.m"
      }
#line 1846 "tupling.m"
  }
#line 1842 "tupling.m"
}

#line 1731 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_goal_9_p_0(
#line 1731 "tupling.m"
  MR_Word transform_hlds__tupling__Goal0_10,
#line 1731 "tupling.m"
  MR_Word * transform_hlds__tupling__Goal_11,
#line 1731 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78,
#line 1731 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarSet_79,
#line 1731 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80,
#line 1731 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_VarTypes_81,
#line 1731 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82,
#line 1731 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83,
#line 1731 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_15)
#line 1731 "tupling.m"
{
#line 1736 "tupling.m"
  {
#line 1736 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1736 "tupling.m"
    MR_Word transform_hlds__tupling__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal0_10, (MR_Integer) 0)));
#line 1736 "tupling.m"
    MR_Word transform_hlds__tupling__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal0_10, (MR_Integer) 1)));

#line 1744 "tupling.m"
    if (((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr0_16)) == (MR_mktag((MR_Integer) 0))))
#line 1776 "tupling.m"
      {
#line 1776 "tupling.m"
        MR_Word transform_hlds__tupling__SubGoal0_57 = (MR_Word) MR_body(((MR_Word) transform_hlds__tupling__GoalExpr0_16), (MR_Integer) 0);
#line 1776 "tupling.m"
        MR_Word transform_hlds__tupling__SubGoal_58;
#line 1776 "tupling.m"
        MR_Word transform_hlds__tupling__GoalExpr_59;

#line 1777 "tupling.m"
        {
#line 1777 "tupling.m"
          transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__SubGoal0_57, &transform_hlds__tupling__SubGoal_58, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
        }
#line 1779 "tupling.m"
        transform_hlds__tupling__GoalExpr_59 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__tupling__SubGoal_58);
#line 1780 "tupling.m"
        {
#line 1780 "tupling.m"
          MR_Word base;
#line 1780 "tupling.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1780 "tupling.m"
          *transform_hlds__tupling__Goal_11 = base;
#line 1780 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__GoalExpr_59));
#line 1780 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__GoalInfo0_17));
#line 1780 "tupling.m"
        }
#line 1776 "tupling.m"
      }
#line 1744 "tupling.m"
    else
#line 1744 "tupling.m"
      if (((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr0_16)) == (MR_mktag((MR_Integer) 2))))
#line 1746 "tupling.m"
        {
#line 1746 "tupling.m"
          MR_Word transform_hlds__tupling__CalledPredId0_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 0)));
#line 1746 "tupling.m"
          MR_Integer transform_hlds__tupling__CalledProcId0_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 1)));
#line 1746 "tupling.m"
          MR_Word transform_hlds__tupling__Args0_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 2)));
#line 1746 "tupling.m"
          MR_Word transform_hlds__tupling__Builtin_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 3)));
#line 1745 "tupling.m"
          MR_Word transform_hlds__tupling___Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 4)));
#line 1745 "tupling.m"
          MR_Word transform_hlds__tupling___SymName_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 5)));
#line 1772 "tupling.m"
          MR_Word transform_hlds__tupling__TupleConsType_43;
#line 1772 "tupling.m"
          MR_Word transform_hlds__tupling__ArgsToTuple_44;
#line 1772 "tupling.m"
          MR_Word transform_hlds__tupling__CallAux0_45;
#line 1772 "tupling.m"
          MR_Word transform_hlds__tupling__CallAuxInfo_46;
#line 1748 "tupling.m"
          MR_Word transform_hlds__tupling__TypeCtorInfo_151_151;
#line 1748 "tupling.m"
          MR_Word transform_hlds__tupling__TypeCtorInfo_152_152;
#line 1748 "tupling.m"
          MR_Word transform_hlds__tupling__TransformedProc_41;
#line 1748 "tupling.m"
          MR_Word transform_hlds__tupling__V_114_114;
#line 1748 "tupling.m"
          MR_Word transform_hlds__tupling__V_115_115;
#line 1749 "tupling.m"
          MR_Box transform_hlds__tupling__conv0_TransformedProc_41;
#line 1751 "tupling.m"
          MR_Word transform_hlds__tupling__V_42_42;

#line 1748 "tupling.m"
          transform_hlds__tupling__succeeded = (transform_hlds__tupling__Builtin_38 == (MR_Integer) 2);
#line 1748 "tupling.m"
          if (transform_hlds__tupling__succeeded)
#line 1748 "tupling.m"
            {
#line 8730 "transform_hlds.tupling.c"
              transform_hlds__tupling__TypeCtorInfo_151_151 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 8732 "transform_hlds.tupling.c"
              transform_hlds__tupling__TypeCtorInfo_152_152 = (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0;
#line 1749 "tupling.m"
              {
#line 1749 "tupling.m"
                transform_hlds__tupling__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1749 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_114_114, 0) = ((MR_Box) (transform_hlds__tupling__CalledPredId0_35));
#line 1749 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_114_114, 1) = ((MR_Box) (transform_hlds__tupling__CalledProcId0_36));
#line 1749 "tupling.m"
              }
#line 1749 "tupling.m"
              {
#line 1749 "tupling.m"
                transform_hlds__tupling__succeeded = mercury__map__search_3_p_0(transform_hlds__tupling__TypeCtorInfo_151_151, transform_hlds__tupling__TypeCtorInfo_152_152, transform_hlds__tupling__TransformMap_15, ((MR_Box) (transform_hlds__tupling__V_114_114)), &transform_hlds__tupling__conv0_TransformedProc_41);
              }
#line 1749 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1749 "tupling.m"
                {
#line 1749 "tupling.m"
                  transform_hlds__tupling__TransformedProc_41 = ((MR_Word) transform_hlds__tupling__conv0_TransformedProc_41);
#line 1749 "tupling.m"
                  transform_hlds__tupling__succeeded = MR_TRUE;
#line 1749 "tupling.m"
                }
#line 1748 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1748 "tupling.m"
                {
#line 1751 "tupling.m"
                  transform_hlds__tupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_41, (MR_Integer) 0)));
#line 1751 "tupling.m"
                  transform_hlds__tupling__TupleConsType_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_41, (MR_Integer) 1)));
#line 1751 "tupling.m"
                  transform_hlds__tupling__ArgsToTuple_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_41, (MR_Integer) 2)));
#line 1751 "tupling.m"
                  transform_hlds__tupling__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_41, (MR_Integer) 3)));
#line 1752 "tupling.m"
                  transform_hlds__tupling__CallAux0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_115_115, (MR_Integer) 0)));
#line 1752 "tupling.m"
                  transform_hlds__tupling__CallAuxInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_115_115, (MR_Integer) 1)));
#line 1752 "tupling.m"
                  transform_hlds__tupling__succeeded = MR_TRUE;
#line 1748 "tupling.m"
                }
#line 1748 "tupling.m"
            }
#line 1772 "tupling.m"
          if (transform_hlds__tupling__succeeded)
#line 1754 "tupling.m"
            {
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__TypeCtorInfo_153_153 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__CellVar_47;
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__TupledArgs_48;
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__UntupledArgs_49;
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__ConstructGoal_50;
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__CallGoal_53;
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__Goal1_54;
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__RequantifyVars_55;
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_117_117;
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_118_118;
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__V_124_124;
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__V_125_125;
#line 1754 "tupling.m"
              MR_Word transform_hlds__tupling__V_127_127;
#line 1764 "tupling.m"
              MR_Word transform_hlds__tupling__CallAux_52;
#line 1760 "tupling.m"
              MR_Word transform_hlds__tupling__NewArgs_51;
#line 1760 "tupling.m"
              MR_Word transform_hlds__tupling__V_119_119;
#line 1761 "tupling.m"
              MR_Word transform_hlds__tupling__V_145_145;
#line 1761 "tupling.m"
              MR_Integer transform_hlds__tupling__V_146_146;
#line 1761 "tupling.m"
              MR_Word transform_hlds__tupling__V_148_148;
#line 1761 "tupling.m"
              MR_Word transform_hlds__tupling__V_149_149;
#line 1761 "tupling.m"
              MR_Word transform_hlds__tupling__V_150_150;
#line 1761 "tupling.m"
              MR_Word transform_hlds__tupling__V_147_147;
#line 1769 "tupling.m"
              MR_Word transform_hlds__tupling__V_56_56;

#line 1754 "tupling.m"
              {
#line 1754 "tupling.m"
                mercury__varset__new_named_var_4_p_0(transform_hlds__tupling__TypeCtorInfo_153_153, (MR_String) "TuplingCellVarForCall", &transform_hlds__tupling__CellVar_47, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, &transform_hlds__tupling__STATE_VARIABLE_VarSet_117_117);
              }
#line 1755 "tupling.m"
              {
#line 1755 "tupling.m"
                parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__tupling__CellVar_47, transform_hlds__tupling__TupleConsType_43, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, &transform_hlds__tupling__STATE_VARIABLE_VarTypes_118_118);
              }
#line 1756 "tupling.m"
              {
#line 1756 "tupling.m"
                transform_hlds__tupling__extract_tupled_args_from_list_4_p_0(transform_hlds__tupling__Args0_37, transform_hlds__tupling__ArgsToTuple_44, &transform_hlds__tupling__TupledArgs_48, &transform_hlds__tupling__UntupledArgs_49);
              }
#line 1758 "tupling.m"
              {
#line 1758 "tupling.m"
                hlds__make_goal__construct_tuple_3_p_0(transform_hlds__tupling__CellVar_47, transform_hlds__tupling__TupledArgs_48, &transform_hlds__tupling__ConstructGoal_50);
              }
#line 1760 "tupling.m"
              {
#line 1760 "tupling.m"
                transform_hlds__tupling__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1760 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_119_119, 0) = ((MR_Box) (transform_hlds__tupling__CellVar_47));
#line 1760 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1760 "tupling.m"
              }
#line 1760 "tupling.m"
              {
#line 1760 "tupling.m"
                transform_hlds__tupling__NewArgs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__UntupledArgs_49, transform_hlds__tupling__V_119_119);
              }
#line 1761 "tupling.m"
              transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__CallAux0_45)) == (MR_mktag((MR_Integer) 2)));
#line 1761 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1761 "tupling.m"
                {
#line 1761 "tupling.m"
                  transform_hlds__tupling__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux0_45, (MR_Integer) 0)));
#line 1761 "tupling.m"
                  transform_hlds__tupling__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux0_45, (MR_Integer) 1)));
#line 1761 "tupling.m"
                  transform_hlds__tupling__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux0_45, (MR_Integer) 2)));
#line 1761 "tupling.m"
                  transform_hlds__tupling__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux0_45, (MR_Integer) 3)));
#line 1761 "tupling.m"
                  transform_hlds__tupling__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux0_45, (MR_Integer) 4)));
#line 1761 "tupling.m"
                  transform_hlds__tupling__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux0_45, (MR_Integer) 5)));
#line 1761 "tupling.m"
                  {
#line 1761 "tupling.m"
                    transform_hlds__tupling__CallAux_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1761 "tupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux_52, 0) = ((MR_Box) (transform_hlds__tupling__V_145_145));
#line 1761 "tupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux_52, 1) = ((MR_Box) (transform_hlds__tupling__V_146_146));
#line 1761 "tupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux_52, 2) = ((MR_Box) (transform_hlds__tupling__NewArgs_51));
#line 1761 "tupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux_52, 3) = ((MR_Box) (transform_hlds__tupling__V_148_148));
#line 1761 "tupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux_52, 4) = ((MR_Box) (transform_hlds__tupling__V_149_149));
#line 1761 "tupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__tupling__CallAux_52, 5) = ((MR_Box) (transform_hlds__tupling__V_150_150));
#line 1761 "tupling.m"
                  }
#line 1761 "tupling.m"
                  transform_hlds__tupling__succeeded = MR_TRUE;
#line 1761 "tupling.m"
                }
#line 1764 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1763 "tupling.m"
                {
#line 1763 "tupling.m"
                  transform_hlds__tupling__CallGoal_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1763 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__CallGoal_53, 0) = ((MR_Box) (transform_hlds__tupling__CallAux_52));
#line 1763 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__CallGoal_53, 1) = ((MR_Box) (transform_hlds__tupling__CallAuxInfo_46));
#line 1763 "tupling.m"
                }
#line 1764 "tupling.m"
              else
#line 1765 "tupling.m"
                {
#line 1765 "tupling.m"
                  {
#line 1765 "tupling.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.fix_calls_in_goal\'/9", (MR_String) "not a call template");
#line 1765 "tupling.m"
                    return;
                  }
#line 1765 "tupling.m"
                }
#line 1767 "tupling.m"
              {
#line 1767 "tupling.m"
                transform_hlds__tupling__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1767 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_125_125, 0) = ((MR_Box) (transform_hlds__tupling__CallGoal_53));
#line 1767 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1767 "tupling.m"
              }
#line 1767 "tupling.m"
              {
#line 1767 "tupling.m"
                transform_hlds__tupling__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1767 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_124_124, 0) = ((MR_Box) (transform_hlds__tupling__ConstructGoal_50));
#line 1767 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_124_124, 1) = ((MR_Box) (transform_hlds__tupling__V_125_125));
#line 1767 "tupling.m"
              }
#line 1767 "tupling.m"
              {
#line 1767 "tupling.m"
                hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__tupling__V_124_124, transform_hlds__tupling__GoalInfo0_17, &transform_hlds__tupling__Goal1_54);
              }
#line 1768 "tupling.m"
              {
#line 1768 "tupling.m"
                transform_hlds__tupling__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1768 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_127_127, 0) = ((MR_Box) (transform_hlds__tupling__CellVar_47));
#line 1768 "tupling.m"
                MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_127_127, 1) = ((MR_Box) (transform_hlds__tupling__Args0_37));
#line 1768 "tupling.m"
              }
#line 1768 "tupling.m"
              {
#line 1768 "tupling.m"
                transform_hlds__tupling__RequantifyVars_55 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__tupling__TypeCtorInfo_153_153, transform_hlds__tupling__V_127_127);
              }
#line 1769 "tupling.m"
              {
#line 1769 "tupling.m"
                hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__tupling__RequantifyVars_55, &transform_hlds__tupling__V_56_56, transform_hlds__tupling__Goal1_54, transform_hlds__tupling__Goal_11, transform_hlds__tupling__STATE_VARIABLE_VarSet_117_117, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_118_118, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83);
              }
#line 1754 "tupling.m"
            }
#line 1772 "tupling.m"
          else
#line 1773 "tupling.m"
            {
#line 1773 "tupling.m"
              *transform_hlds__tupling__Goal_11 = transform_hlds__tupling__Goal0_10;
#line 1773 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83 = transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82;
#line 1773 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_VarTypes_81 = transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80;
#line 1773 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_VarSet_79 = transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78;
#line 1773 "tupling.m"
            }
#line 1746 "tupling.m"
        }
#line 1744 "tupling.m"
      else
#line 1744 "tupling.m"
        if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1797 "tupling.m"
          {
#line 1797 "tupling.m"
            MR_Word transform_hlds__tupling__ConjType_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 1)));
#line 1797 "tupling.m"
            MR_Word transform_hlds__tupling__Goals0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 2)));
#line 1797 "tupling.m"
            MR_Word transform_hlds__tupling__Goals_65;
#line 1797 "tupling.m"
            MR_Word transform_hlds__tupling__GoalExpr_139;

#line 1802 "tupling.m"
            if ((transform_hlds__tupling__ConjType_63 == (MR_Integer) 1))
#line 1807 "tupling.m"
              {
#line 1807 "tupling.m"
                transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(transform_hlds__tupling__Goals0_64, &transform_hlds__tupling__Goals_65, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
              }
#line 1802 "tupling.m"
            else
#line 1800 "tupling.m"
              {
#line 1800 "tupling.m"
                transform_hlds__tupling__fix_calls_in_conj_9_p_0(transform_hlds__tupling__Goals0_64, &transform_hlds__tupling__Goals_65, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
              }
#line 1810 "tupling.m"
            {
#line 1810 "tupling.m"
              transform_hlds__tupling__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1810 "tupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1810 "tupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_139, 1) = ((MR_Box) (transform_hlds__tupling__ConjType_63));
#line 1810 "tupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_139, 2) = ((MR_Box) (transform_hlds__tupling__Goals_65));
#line 1810 "tupling.m"
            }
#line 1811 "tupling.m"
            {
#line 1811 "tupling.m"
              MR_Word base;
#line 1811 "tupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1811 "tupling.m"
              *transform_hlds__tupling__Goal_11 = base;
#line 1811 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__GoalExpr_139));
#line 1811 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__GoalInfo0_17));
#line 1811 "tupling.m"
            }
#line 1797 "tupling.m"
          }
#line 1744 "tupling.m"
        else
#line 1744 "tupling.m"
          if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1813 "tupling.m"
            {
#line 1813 "tupling.m"
              MR_Word transform_hlds__tupling__GoalExpr_140;
#line 1813 "tupling.m"
              MR_Word transform_hlds__tupling__Goals0_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 1)));
#line 1813 "tupling.m"
              MR_Word transform_hlds__tupling__Goals_142;

#line 1814 "tupling.m"
              {
#line 1814 "tupling.m"
                transform_hlds__tupling__fix_calls_in_goal_list_9_p_0(transform_hlds__tupling__Goals0_141, &transform_hlds__tupling__Goals_142, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
              }
#line 1816 "tupling.m"
              {
#line 1816 "tupling.m"
                transform_hlds__tupling__GoalExpr_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1816 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1816 "tupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_140, 1) = ((MR_Box) (transform_hlds__tupling__Goals_142));
#line 1816 "tupling.m"
              }
#line 1817 "tupling.m"
              {
#line 1817 "tupling.m"
                MR_Word base;
#line 1817 "tupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1817 "tupling.m"
                *transform_hlds__tupling__Goal_11 = base;
#line 1817 "tupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__GoalExpr_140));
#line 1817 "tupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__GoalInfo0_17));
#line 1817 "tupling.m"
              }
#line 1813 "tupling.m"
            }
#line 1744 "tupling.m"
          else
#line 1744 "tupling.m"
            if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1825 "tupling.m"
              {
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__Vars_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 1)));
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__Cond0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 2)));
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__Then0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 3)));
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__Else0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 4)));
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__Cond_74;
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__Then_75;
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__Else_76;
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_87_87;
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_88_88;
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_89_89;
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__STATE_VARIABLE_VarSet_90_90;
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__STATE_VARIABLE_VarTypes_91_91;
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_92_92;
#line 1825 "tupling.m"
                MR_Word transform_hlds__tupling__GoalExpr_144;

#line 1826 "tupling.m"
                {
#line 1826 "tupling.m"
                  transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Cond0_71, &transform_hlds__tupling__Cond_74, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, &transform_hlds__tupling__STATE_VARIABLE_VarSet_87_87, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, &transform_hlds__tupling__STATE_VARIABLE_VarTypes_88_88, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, &transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_89_89, transform_hlds__tupling__TransformMap_15);
                }
#line 1828 "tupling.m"
                {
#line 1828 "tupling.m"
                  transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Then0_72, &transform_hlds__tupling__Then_75, transform_hlds__tupling__STATE_VARIABLE_VarSet_87_87, &transform_hlds__tupling__STATE_VARIABLE_VarSet_90_90, transform_hlds__tupling__STATE_VARIABLE_VarTypes_88_88, &transform_hlds__tupling__STATE_VARIABLE_VarTypes_91_91, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_89_89, &transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_92_92, transform_hlds__tupling__TransformMap_15);
                }
#line 1830 "tupling.m"
                {
#line 1830 "tupling.m"
                  transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Else0_73, &transform_hlds__tupling__Else_76, transform_hlds__tupling__STATE_VARIABLE_VarSet_90_90, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_91_91, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_92_92, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
                }
#line 1832 "tupling.m"
                {
#line 1832 "tupling.m"
                  transform_hlds__tupling__GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1832 "tupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1832 "tupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_144, 1) = ((MR_Box) (transform_hlds__tupling__Vars_70));
#line 1832 "tupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_144, 2) = ((MR_Box) (transform_hlds__tupling__Cond_74));
#line 1832 "tupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_144, 3) = ((MR_Box) (transform_hlds__tupling__Then_75));
#line 1832 "tupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_144, 4) = ((MR_Box) (transform_hlds__tupling__Else_76));
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
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__GoalExpr_144));
#line 1833 "tupling.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__GoalInfo0_17));
#line 1833 "tupling.m"
                }
#line 1825 "tupling.m"
              }
#line 1744 "tupling.m"
            else
#line 1744 "tupling.m"
              if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1782 "tupling.m"
                {
#line 1782 "tupling.m"
                  MR_Word transform_hlds__tupling__Reason_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 1)));
#line 1782 "tupling.m"
                  MR_Word transform_hlds__tupling__SubGoal0_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 2)));
#line 1784 "tupling.m"
                  MR_Word transform_hlds__tupling__FGT_62;
#line 1784 "tupling.m"
                  MR_Word transform_hlds__tupling__V_61_61;

#line 1784 "tupling.m"
                  transform_hlds__tupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__tupling__Reason_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Reason_60, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1784 "tupling.m"
                  if (transform_hlds__tupling__succeeded)
#line 1784 "tupling.m"
                    {
#line 1784 "tupling.m"
                      transform_hlds__tupling__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Reason_60, (MR_Integer) 1)));
#line 1784 "tupling.m"
                      transform_hlds__tupling__FGT_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Reason_60, (MR_Integer) 2)));
#line 1786 "tupling.m"
                      if ((transform_hlds__tupling__FGT_62 == (MR_Integer) 1))
#line 1785 "tupling.m"
                        transform_hlds__tupling__succeeded = MR_TRUE;
#line 1786 "tupling.m"
                      else
#line 1786 "tupling.m"
                        if ((transform_hlds__tupling__FGT_62 == (MR_Integer) 2))
#line 1786 "tupling.m"
                          transform_hlds__tupling__succeeded = MR_TRUE;
#line 1786 "tupling.m"
                        else
#line 1786 "tupling.m"
                          transform_hlds__tupling__succeeded = MR_FALSE;
#line 1784 "tupling.m"
                    }
#line 1790 "tupling.m"
                  if (transform_hlds__tupling__succeeded)
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
#line 1790 "tupling.m"
                  else
#line 1792 "tupling.m"
                    {
#line 1792 "tupling.m"
                      MR_Word transform_hlds__tupling__SubGoal_132;
#line 1792 "tupling.m"
                      MR_Word transform_hlds__tupling__GoalExpr_133;

#line 1791 "tupling.m"
                      {
#line 1791 "tupling.m"
                        transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__SubGoal0_136, &transform_hlds__tupling__SubGoal_132, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
                      }
#line 1793 "tupling.m"
                      {
#line 1793 "tupling.m"
                        transform_hlds__tupling__GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1793 "tupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1793 "tupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_133, 1) = ((MR_Box) (transform_hlds__tupling__Reason_60));
#line 1793 "tupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_133, 2) = ((MR_Box) (transform_hlds__tupling__SubGoal_132));
#line 1793 "tupling.m"
                      }
#line 1794 "tupling.m"
                      {
#line 1794 "tupling.m"
                        MR_Word base;
#line 1794 "tupling.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1794 "tupling.m"
                        *transform_hlds__tupling__Goal_11 = base;
#line 1794 "tupling.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__GoalExpr_133));
#line 1794 "tupling.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__GoalInfo0_17));
#line 1794 "tupling.m"
                      }
#line 1792 "tupling.m"
                    }
#line 1782 "tupling.m"
                }
#line 1744 "tupling.m"
              else
#line 1744 "tupling.m"
                if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1835 "tupling.m"
                  {
#line 1837 "tupling.m"
                    {
#line 1837 "tupling.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.fix_calls_in_goal\'/9", (MR_String) "shorthand");
#line 1837 "tupling.m"
                      return;
                    }
#line 1835 "tupling.m"
                  }
#line 1744 "tupling.m"
                else
#line 1744 "tupling.m"
                  if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1819 "tupling.m"
                    {
#line 1819 "tupling.m"
                      MR_Word transform_hlds__tupling__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 1)));
#line 1819 "tupling.m"
                      MR_Word transform_hlds__tupling__CanFail_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 2)));
#line 1819 "tupling.m"
                      MR_Word transform_hlds__tupling__Cases0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr0_16, (MR_Integer) 3)));
#line 1819 "tupling.m"
                      MR_Word transform_hlds__tupling__Cases_69;
#line 1819 "tupling.m"
                      MR_Word transform_hlds__tupling__GoalExpr_143;

#line 1820 "tupling.m"
                      {
#line 1820 "tupling.m"
                        transform_hlds__tupling__fix_calls_in_cases_9_p_0(transform_hlds__tupling__Cases0_68, &transform_hlds__tupling__Cases_69, transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78, transform_hlds__tupling__STATE_VARIABLE_VarSet_79, transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80, transform_hlds__tupling__STATE_VARIABLE_VarTypes_81, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82, transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83, transform_hlds__tupling__TransformMap_15);
                      }
#line 1822 "tupling.m"
                      {
#line 1822 "tupling.m"
                        transform_hlds__tupling__GoalExpr_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1822 "tupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1822 "tupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_143, 1) = ((MR_Box) (transform_hlds__tupling__Var_66));
#line 1822 "tupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_143, 2) = ((MR_Box) (transform_hlds__tupling__CanFail_67));
#line 1822 "tupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_143, 3) = ((MR_Box) (transform_hlds__tupling__Cases_69));
#line 1822 "tupling.m"
                      }
#line 1823 "tupling.m"
                      {
#line 1823 "tupling.m"
                        MR_Word base;
#line 1823 "tupling.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1823 "tupling.m"
                        *transform_hlds__tupling__Goal_11 = base;
#line 1823 "tupling.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__GoalExpr_143));
#line 1823 "tupling.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__GoalInfo0_17));
#line 1823 "tupling.m"
                      }
#line 1819 "tupling.m"
                    }
#line 1744 "tupling.m"
                  else
#line 1742 "tupling.m"
                    {
#line 1743 "tupling.m"
                      *transform_hlds__tupling__Goal_11 = transform_hlds__tupling__Goal0_10;
#line 1743 "tupling.m"
                      *transform_hlds__tupling__STATE_VARIABLE_VarSet_79 = transform_hlds__tupling__STATE_VARIABLE_VarSet_0_78;
#line 1743 "tupling.m"
                      *transform_hlds__tupling__STATE_VARIABLE_VarTypes_81 = transform_hlds__tupling__STATE_VARIABLE_VarTypes_0_80;
#line 1743 "tupling.m"
                      *transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_83 = transform_hlds__tupling__STATE_VARIABLE_RttiVarMaps_0_82;
#line 1742 "tupling.m"
                    }
#line 1736 "tupling.m"
  }
#line 1731 "tupling.m"
}

#line 1693 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_proc_4_p_0(
#line 1693 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_5,
#line 1693 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1693 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23,
#line 1693 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24)
#line 1693 "tupling.m"
{
#line 1696 "tupling.m"
  {
#line 1696 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1696 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1696 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1696 "tupling.m"
    MR_Word transform_hlds__tupling__PredInfo_10;
#line 1696 "tupling.m"
    MR_Word transform_hlds__tupling__Origin_11;
#line 1696 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25;
#line 1706 "tupling.m"
    MR_Word transform_hlds__tupling__V_26_26;
#line 1706 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13;
#line 1706 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14;
#line 1706 "tupling.m"
    MR_Word transform_hlds__tupling__V_12_12;

#line 1698 "tupling.m"
    {
#line 1698 "tupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__tupling__PredId_6, transform_hlds__tupling__ProcId_7, &transform_hlds__tupling__PredInfo_10, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25);
    }
#line 1704 "tupling.m"
    {
#line 1704 "tupling.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__tupling__PredInfo_10, &transform_hlds__tupling__Origin_11);
    }
#line 1706 "tupling.m"
    transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__Origin_11)) == (MR_mktag((MR_Integer) 2)));
#line 1706 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1706 "tupling.m"
      {
#line 1706 "tupling.m"
        transform_hlds__tupling__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__Origin_11, (MR_Integer) 0)));
#line 1706 "tupling.m"
        transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__Origin_11, (MR_Integer) 1)));
#line 1706 "tupling.m"
        transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__Origin_11, (MR_Integer) 2)));
#line 1706 "tupling.m"
        transform_hlds__tupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__tupling__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1706 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1706 "tupling.m"
          transform_hlds__tupling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_26_26, (MR_Integer) 1)));
#line 1706 "tupling.m"
      }
#line 1709 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1708 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23;
#line 1709 "tupling.m"
    else
#line 1710 "tupling.m"
      {
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__Goal0_15;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__VarTypes0_16;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__VarSet0_17;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__RttiVarMaps0_18;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__Goal_19;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__VarSet_20;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__VarTypes_21;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__RttiVarMaps_22;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_27_27;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_28_28;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_29_29;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_30_30;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_32_32;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_35_35;
#line 1710 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_34_37;

#line 1710 "tupling.m"
        {
#line 1710 "tupling.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__tupling__Goal0_15);
        }
#line 1711 "tupling.m"
        {
#line 1711 "tupling.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__tupling__VarTypes0_16);
        }
#line 1712 "tupling.m"
        {
#line 1712 "tupling.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__tupling__VarSet0_17);
        }
#line 1713 "tupling.m"
        {
#line 1713 "tupling.m"
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__tupling__RttiVarMaps0_18);
        }
#line 1714 "tupling.m"
        {
#line 1714 "tupling.m"
          transform_hlds__tupling__fix_calls_in_goal_9_p_0(transform_hlds__tupling__Goal0_15, &transform_hlds__tupling__Goal_19, transform_hlds__tupling__VarSet0_17, &transform_hlds__tupling__VarSet_20, transform_hlds__tupling__VarTypes0_16, &transform_hlds__tupling__VarTypes_21, transform_hlds__tupling__RttiVarMaps0_18, &transform_hlds__tupling__RttiVarMaps_22, transform_hlds__tupling__TransformMap_5);
        }
#line 1717 "tupling.m"
        {
#line 1717 "tupling.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__tupling__Goal_19, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_27_27);
        }
#line 1718 "tupling.m"
        {
#line 1718 "tupling.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__tupling__VarSet_20, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_27_27, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_28_28);
        }
#line 1719 "tupling.m"
        {
#line 1719 "tupling.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__tupling__VarTypes_21, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_28_28, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_29_29);
        }
#line 1720 "tupling.m"
        {
#line 1720 "tupling.m"
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__tupling__RttiVarMaps_22, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_29_29, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_30_30);
        }
#line 1721 "tupling.m"
        {
#line 1721 "tupling.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_30_30, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_32_32);
        }
#line 1722 "tupling.m"
        {
#line 1722 "tupling.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_32_32, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_34_37, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_35_35);
        }
#line 1724 "tupling.m"
        {
#line 1724 "tupling.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__tupling__PredId_6, transform_hlds__tupling__ProcId_7, transform_hlds__tupling__PredInfo_10, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_34_37, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_35_35, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24);
#line 1724 "tupling.m"
          return;
        }
#line 1710 "tupling.m"
      }
#line 1696 "tupling.m"
  }
#line 1693 "tupling.m"
}

#line 1686 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_p_0(
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_6,
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_7,
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__3_3,
#line 1686 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13,
#line 1686 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14)
#line 1686 "tupling.m"
{
#line 1690 "tupling.m"
  {
#line 1690 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1690 "tupling.m"
    {
#line 1690 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_99_97_108_108_115_95_105_110_95_116_114_97_110_115_102_111_114_109_101_100_95_112_114_111_99_115_95_50_95_95_91_50_93_95_48_5_p_0(transform_hlds__tupling__TransformMap_6, transform_hlds__tupling__HeadVar__3_3, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14);
#line 1690 "tupling.m"
      return;
    }
#line 1690 "tupling.m"
  }
#line 1686 "tupling.m"
}

#line 1677 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0_1(
#line 1677 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1677 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1677 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1677 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1677 "tupling.m"
{
#line 1677 "tupling.m"
  {
#line 1677 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1677 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_ModuleInfo_24;

#line 1677 "tupling.m"
    {
#line 1677 "tupling.m"
      transform_hlds__tupling__fix_calls_in_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_STATE_VARIABLE_ModuleInfo_24);
    }
#line 1677 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_ModuleInfo_24));
#line 1677 "tupling.m"
  }
#line 1677 "tupling.m"
}

#line 1673 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__fix_calls_in_procs_4_p_0(
#line 1673 "tupling.m"
  MR_Word transform_hlds__tupling__TransformMap_5,
#line 1673 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_6,
#line 1673 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_8,
#line 1673 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_9)
#line 1673 "tupling.m"
{
#line 1676 "tupling.m"
  {
#line 1676 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1676 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10;
#line 1677 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 1677 "tupling.m"
    {
#line 1677 "tupling.m"
      transform_hlds__tupling__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1677 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[7]));
#line 1677 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 1) = ((MR_Box) (transform_hlds__tupling__fix_calls_in_procs_4_p_0_1));
#line 1677 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1677 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 3) = ((MR_Box) (transform_hlds__tupling__TransformMap_5));
#line 1677 "tupling.m"
    }
#line 1677 "tupling.m"
    {
#line 1677 "tupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__tupling__V_10_10, transform_hlds__tupling__PredProcIds_6, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__tupling__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 1677 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__tupling__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 1676 "tupling.m"
  }
#line 1673 "tupling.m"
}

#line 1627 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__combine_inserts_3_p_0(
#line 1627 "tupling.m"
  MR_Word transform_hlds__tupling__A_1,
#line 1627 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1627 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__3_3)
#line 1627 "tupling.m"
{
#line 1630 "tupling.m"
  {
#line 1630 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 1630 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1630 "tupling.m"
      {
#line 1630 "tupling.m"
        {
#line 1630 "tupling.m"
          MR_Word base;
#line 1630 "tupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1630 "tupling.m"
          *transform_hlds__tupling__HeadVar__3_3 = base;
#line 1630 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__A_1));
#line 1630 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1630 "tupling.m"
        }
#line 1630 "tupling.m"
      }
#line 1630 "tupling.m"
    else
#line 1631 "tupling.m"
      {
#line 1631 "tupling.m"
        MR_Word transform_hlds__tupling__B_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1631 "tupling.m"
        MR_Word transform_hlds__tupling__Bs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1631 "tupling.m"
        MR_Word transform_hlds__tupling__C_9;
#line 1631 "tupling.m"
        MR_Word transform_hlds__tupling__Cs_10;
#line 1638 "tupling.m"
        MR_Word transform_hlds__tupling__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__A_1, (MR_Integer) 0)));
#line 1638 "tupling.m"
        MR_Word transform_hlds__tupling__ASet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__A_1, (MR_Integer) 1)));
#line 1638 "tupling.m"
        MR_Word transform_hlds__tupling__BSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__B_7, (MR_Integer) 1)));
#line 1633 "tupling.m"
        MR_Word transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__B_7, (MR_Integer) 0)));

#line 1634 "tupling.m"
        {
#line 1634 "tupling.m"
          transform_hlds__tupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__tupling__Goal_11, transform_hlds__tupling__V_16_16);
        }
#line 1638 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1636 "tupling.m"
          {
#line 1636 "tupling.m"
            MR_Word transform_hlds__tupling__V_14_14;

#line 1636 "tupling.m"
            {
#line 1636 "tupling.m"
              transform_hlds__tupling__V_14_14 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__ASet_12, transform_hlds__tupling__BSet_13);
            }
#line 1636 "tupling.m"
            {
#line 1636 "tupling.m"
              transform_hlds__tupling__C_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1636 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__C_9, 0) = ((MR_Box) (transform_hlds__tupling__Goal_11));
#line 1636 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__C_9, 1) = ((MR_Box) (transform_hlds__tupling__V_14_14));
#line 1636 "tupling.m"
            }
#line 1637 "tupling.m"
            transform_hlds__tupling__Cs_10 = transform_hlds__tupling__Bs_8;
#line 1636 "tupling.m"
          }
#line 1638 "tupling.m"
        else
#line 1639 "tupling.m"
          {
#line 1639 "tupling.m"
            transform_hlds__tupling__C_9 = transform_hlds__tupling__B_7;
#line 1640 "tupling.m"
            {
#line 1640 "tupling.m"
              transform_hlds__tupling__combine_inserts_3_p_0(transform_hlds__tupling__A_1, transform_hlds__tupling__Bs_8, &transform_hlds__tupling__Cs_10);
            }
#line 1639 "tupling.m"
          }
#line 1631 "tupling.m"
        {
#line 1631 "tupling.m"
          MR_Word base;
#line 1631 "tupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1631 "tupling.m"
          *transform_hlds__tupling__HeadVar__3_3 = base;
#line 1631 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__C_9));
#line 1631 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__tupling__Cs_10));
#line 1631 "tupling.m"
        }
#line 1631 "tupling.m"
      }
#line 1630 "tupling.m"
  }
#line 1627 "tupling.m"
}

#line 1601 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_insert_map_2_7_p_0(
#line 1601 "tupling.m"
  MR_Word transform_hlds__tupling__CellVar_8,
#line 1601 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVars_9,
#line 1601 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVarsSet_10,
#line 1601 "tupling.m"
  MR_Word transform_hlds__tupling__Anchor_11,
#line 1601 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 1601 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_InsertMap_0_18,
#line 1601 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_InsertMap_19)
#line 1601 "tupling.m"
{
#line 1606 "tupling.m"
  {
#line 1606 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1606 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1606 "tupling.m"
    MR_Word transform_hlds__tupling__FollowVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__5_5, (MR_Integer) 0)));
#line 1606 "tupling.m"
    MR_Word transform_hlds__tupling__NeededFieldVars_15;
#line 1606 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__5_5, (MR_Integer) 1)));

#line 1607 "tupling.m"
    {
#line 1607 "tupling.m"
      transform_hlds__tupling__NeededFieldVars_15 = parse_tree__set_of_var__intersect_2_f_0(transform_hlds__tupling__TypeCtorInfo_21_21, transform_hlds__tupling__FieldVarsSet_10, transform_hlds__tupling__FollowVars_12);
    }
#line 1608 "tupling.m"
    {
#line 1608 "tupling.m"
      transform_hlds__tupling__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__tupling__TypeCtorInfo_21_21, transform_hlds__tupling__NeededFieldVars_15);
    }
#line 1610 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1608 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_InsertMap_19 = transform_hlds__tupling__STATE_VARIABLE_InsertMap_0_18;
#line 1610 "tupling.m"
    else
#line 1611 "tupling.m"
      {
#line 1611 "tupling.m"
        MR_Word transform_hlds__tupling__Goal_16;
#line 1611 "tupling.m"
        MR_Word transform_hlds__tupling__InsertSpec_17;
#line 1623 "tupling.m"
        MR_Word transform_hlds__tupling__InsertSpecs0_27;
#line 1620 "tupling.m"
        MR_Box transform_hlds__tupling__conv0_InsertSpecs0_27;

#line 1611 "tupling.m"
        {
#line 1611 "tupling.m"
          hlds__make_goal__deconstruct_tuple_3_p_0(transform_hlds__tupling__CellVar_8, transform_hlds__tupling__FieldVars_9, &transform_hlds__tupling__Goal_16);
        }
#line 1612 "tupling.m"
        {
#line 1612 "tupling.m"
          transform_hlds__tupling__InsertSpec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1612 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__InsertSpec_17, 0) = ((MR_Box) (transform_hlds__tupling__Goal_16));
#line 1612 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__InsertSpec_17, 1) = ((MR_Box) (transform_hlds__tupling__NeededFieldVars_15));
#line 1612 "tupling.m"
        }
#line 1620 "tupling.m"
        {
#line 1620 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &transform_hlds__tupling_scalar_common_1[10], transform_hlds__tupling__STATE_VARIABLE_InsertMap_0_18, ((MR_Box) (transform_hlds__tupling__Anchor_11)), &transform_hlds__tupling__conv0_InsertSpecs0_27);
        }
#line 1620 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1620 "tupling.m"
          {
#line 1620 "tupling.m"
            transform_hlds__tupling__InsertSpecs0_27 = ((MR_Word) transform_hlds__tupling__conv0_InsertSpecs0_27);
#line 1620 "tupling.m"
            transform_hlds__tupling__succeeded = MR_TRUE;
#line 1620 "tupling.m"
          }
#line 1623 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1621 "tupling.m"
          {
#line 1621 "tupling.m"
            MR_Word transform_hlds__tupling__InsertSpecs_28;

#line 1621 "tupling.m"
            {
#line 1621 "tupling.m"
              transform_hlds__tupling__combine_inserts_3_p_0(transform_hlds__tupling__InsertSpec_17, transform_hlds__tupling__InsertSpecs0_27, &transform_hlds__tupling__InsertSpecs_28);
            }
#line 1622 "tupling.m"
            {
#line 1622 "tupling.m"
              mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &transform_hlds__tupling_scalar_common_1[10], ((MR_Box) (transform_hlds__tupling__Anchor_11)), ((MR_Box) (transform_hlds__tupling__InsertSpecs_28)), transform_hlds__tupling__STATE_VARIABLE_InsertMap_0_18, transform_hlds__tupling__STATE_VARIABLE_InsertMap_19);
#line 1622 "tupling.m"
              return;
            }
#line 1621 "tupling.m"
          }
#line 1623 "tupling.m"
        else
#line 1624 "tupling.m"
          {
#line 1624 "tupling.m"
            MR_Word transform_hlds__tupling__V_30_30;

#line 1624 "tupling.m"
            {
#line 1624 "tupling.m"
              transform_hlds__tupling__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1624 "tupling.m"
              MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_30_30, 0) = ((MR_Box) (transform_hlds__tupling__InsertSpec_17));
#line 1624 "tupling.m"
              MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1624 "tupling.m"
            }
#line 1624 "tupling.m"
            {
#line 1624 "tupling.m"
              mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &transform_hlds__tupling_scalar_common_1[10], ((MR_Box) (transform_hlds__tupling__Anchor_11)), ((MR_Box) (transform_hlds__tupling__V_30_30)), transform_hlds__tupling__STATE_VARIABLE_InsertMap_0_18, transform_hlds__tupling__STATE_VARIABLE_InsertMap_19);
#line 1624 "tupling.m"
              return;
            }
#line 1624 "tupling.m"
          }
#line 1611 "tupling.m"
      }
#line 1606 "tupling.m"
  }
#line 1601 "tupling.m"
}

#line 1598 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0_1(
#line 1598 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1598 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1598 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1598 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 1598 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 1598 "tupling.m"
{
#line 1598 "tupling.m"
  {
#line 1598 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_InsertMap_19;

#line 1598 "tupling.m"
    {
#line 1598 "tupling.m"
      transform_hlds__tupling__build_insert_map_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3), &transform_hlds__tupling__conv0_STATE_VARIABLE_InsertMap_19);
    }
#line 1598 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_4 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_InsertMap_19));
#line 1598 "tupling.m"
  }
#line 1598 "tupling.m"
}

#line 1593 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_insert_map_4_p_0(
#line 1593 "tupling.m"
  MR_Word transform_hlds__tupling__CellVar_5,
#line 1593 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVars_6,
#line 1593 "tupling.m"
  MR_Word transform_hlds__tupling__IntervalInfo_7,
#line 1593 "tupling.m"
  MR_Word * transform_hlds__tupling__InsertMap_8)
#line 1593 "tupling.m"
{
#line 1596 "tupling.m"
  {
#line 1596 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1596 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_33_33;
#line 1596 "tupling.m"
    MR_Word transform_hlds__tupling__FieldVarsSet_9;
#line 1596 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10;
#line 1596 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11;
#line 1596 "tupling.m"
    MR_Word transform_hlds__tupling__V_12_12;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_16_16;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_17_17;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_18_18;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_19_19;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_20_20;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_21_21;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_22_22;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_23_23;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_24_24;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_25_25;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_26_26;
#line 1598 "tupling.m"
    MR_Word transform_hlds__tupling__V_27_27;
#line 1598 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_InsertMap_8;

#line 1597 "tupling.m"
    {
#line 1597 "tupling.m"
      transform_hlds__tupling__FieldVarsSet_9 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__FieldVars_6);
    }
#line 1598 "tupling.m"
    {
#line 1598 "tupling.m"
      transform_hlds__tupling__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1598 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_8[1]));
#line 1598 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 1) = ((MR_Box) (transform_hlds__tupling__build_insert_map_4_p_0_1));
#line 1598 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1598 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 3) = ((MR_Box) (transform_hlds__tupling__CellVar_5));
#line 1598 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 4) = ((MR_Box) (transform_hlds__tupling__FieldVars_6));
#line 1598 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 5) = ((MR_Box) (transform_hlds__tupling__FieldVarsSet_9));
#line 1598 "tupling.m"
    }
#line 1598 "tupling.m"
    transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 0)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 1)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 2)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 3)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 4)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 5)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 6)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 7)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 8)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 9)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 10)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 11)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 12)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 13)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 14)));
#line 1598 "tupling.m"
    transform_hlds__tupling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo_7, (MR_Integer) 15)));
#line 10063 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_33_33 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1599 "tupling.m"
    {
#line 1599 "tupling.m"
      transform_hlds__tupling__V_12_12 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_33_33, (MR_Word) &transform_hlds__tupling_scalar_common_1[10]);
    }
#line 1598 "tupling.m"
    {
#line 1598 "tupling.m"
      mercury__map__foldl_4_p_0(transform_hlds__tupling__TypeCtorInfo_33_33, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[8], transform_hlds__tupling__V_10_10, transform_hlds__tupling__V_11_11, ((MR_Box) (transform_hlds__tupling__V_12_12)), &transform_hlds__tupling__conv1_InsertMap_8);
    }
#line 1598 "tupling.m"
    *transform_hlds__tupling__InsertMap_8 = ((MR_Word) transform_hlds__tupling__conv1_InsertMap_8);
#line 1596 "tupling.m"
  }
#line 1593 "tupling.m"
}

#line 1551 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__build_interval_info_3_p_0(
#line 1551 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_4,
#line 1551 "tupling.m"
  MR_Word transform_hlds__tupling__ProcInfo_5,
#line 1551 "tupling.m"
  MR_Word * transform_hlds__tupling__IntervalInfo_6)
#line 1551 "tupling.m"
{
#line 1554 "tupling.m"
  {
#line 1554 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_38_38;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_39_39;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_42_42;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_43_43;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__Goal_7;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes_8;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__OutputArgs_10;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__Counter0_12;
#line 1554 "tupling.m"
    MR_Integer transform_hlds__tupling__CurInterval_13;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__Counter_14;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__CurIntervalId_15;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__EndMap_16;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__StartMap_17;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__SuccMap_18;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__VarsMap_19;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__IntParams_20;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__IntervalInfo0_21;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__V_26_26;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__V_28_28;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__V_29_29;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__V_30_30;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__V_31_31;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__V_33_33;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__V_34_34;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__V_35_35;
#line 1554 "tupling.m"
    MR_Word transform_hlds__tupling__V_36_36;
#line 1557 "tupling.m"
    MR_Word transform_hlds__tupling___InputArgs_9;
#line 1557 "tupling.m"
    MR_Word transform_hlds__tupling___UnusedArgs_11;
#line 1573 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_V_22_22;

#line 1555 "tupling.m"
    {
#line 1555 "tupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__tupling__ProcInfo_5, &transform_hlds__tupling__Goal_7);
    }
#line 1556 "tupling.m"
    {
#line 1556 "tupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__ProcInfo_5, &transform_hlds__tupling__VarTypes_8);
    }
#line 1557 "tupling.m"
    {
#line 1557 "tupling.m"
      hlds__arg_info__partition_proc_args_5_p_0(transform_hlds__tupling__ProcInfo_5, transform_hlds__tupling__ModuleInfo_4, &transform_hlds__tupling___InputArgs_9, &transform_hlds__tupling__OutputArgs_10, &transform_hlds__tupling___UnusedArgs_11);
    }
#line 1559 "tupling.m"
    {
#line 1559 "tupling.m"
      transform_hlds__tupling__Counter0_12 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 1560 "tupling.m"
    {
#line 1560 "tupling.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__tupling__CurInterval_13, transform_hlds__tupling__Counter0_12, &transform_hlds__tupling__Counter_14);
    }
#line 1561 "tupling.m"
    transform_hlds__tupling__CurIntervalId_15 = (MR_Word) transform_hlds__tupling__CurInterval_13;
#line 10185 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_38_38 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 10187 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_39_39 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1562 "tupling.m"
    {
#line 1562 "tupling.m"
      transform_hlds__tupling__EndMap_16 = mercury__map__singleton_2_f_0(transform_hlds__tupling__TypeCtorInfo_38_38, transform_hlds__tupling__TypeCtorInfo_39_39, ((MR_Box) (transform_hlds__tupling__CurIntervalId_15)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
    }
#line 1563 "tupling.m"
    {
#line 1563 "tupling.m"
      transform_hlds__tupling__StartMap_17 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_38_38, transform_hlds__tupling__TypeCtorInfo_39_39);
    }
#line 1564 "tupling.m"
    {
#line 1564 "tupling.m"
      transform_hlds__tupling__SuccMap_18 = mercury__map__singleton_2_f_0(transform_hlds__tupling__TypeCtorInfo_38_38, (MR_Word) &transform_hlds__tupling_scalar_common_1[6], ((MR_Box) (transform_hlds__tupling__CurIntervalId_15)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 10204 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1565 "tupling.m"
    {
#line 1565 "tupling.m"
      transform_hlds__tupling__V_26_26 = parse_tree__set_of_var__set_to_bitset_1_f_0(transform_hlds__tupling__TypeCtorInfo_42_42, transform_hlds__tupling__OutputArgs_10);
    }
#line 1565 "tupling.m"
    {
#line 1565 "tupling.m"
      transform_hlds__tupling__VarsMap_19 = mercury__map__singleton_2_f_0(transform_hlds__tupling__TypeCtorInfo_38_38, (MR_Word) &transform_hlds__tupling_scalar_common_1[7], ((MR_Box) (transform_hlds__tupling__CurIntervalId_15)), ((MR_Box) (transform_hlds__tupling__V_26_26)));
    }
#line 1566 "tupling.m"
    {
#line 1566 "tupling.m"
      transform_hlds__tupling__IntParams_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1566 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntParams_20, 0) = ((MR_Box) (transform_hlds__tupling__ModuleInfo_4));
#line 1566 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntParams_20, 1) = ((MR_Box) (transform_hlds__tupling__VarTypes_8));
#line 1566 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntParams_20, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1566 "tupling.m"
    }
#line 1567 "tupling.m"
    {
#line 1567 "tupling.m"
      transform_hlds__tupling__V_28_28 = parse_tree__set_of_var__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_42_42);
    }
#line 1568 "tupling.m"
    {
#line 1568 "tupling.m"
      transform_hlds__tupling__V_29_29 = parse_tree__set_of_var__set_to_bitset_1_f_0(transform_hlds__tupling__TypeCtorInfo_42_42, transform_hlds__tupling__OutputArgs_10);
    }
#line 10238 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_43_43 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 1568 "tupling.m"
    {
#line 1568 "tupling.m"
      transform_hlds__tupling__V_30_30 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_43_43, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0);
    }
#line 1568 "tupling.m"
    {
#line 1568 "tupling.m"
      transform_hlds__tupling__V_31_31 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_43_43, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0);
    }
#line 1568 "tupling.m"
    {
#line 1568 "tupling.m"
      transform_hlds__tupling__V_32_32 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_43_43, transform_hlds__tupling__TypeCtorInfo_38_38);
    }
#line 1570 "tupling.m"
    {
#line 1570 "tupling.m"
      transform_hlds__tupling__V_33_33 = mercury__set__make_singleton_set_1_f_0(transform_hlds__tupling__TypeCtorInfo_38_38, ((MR_Box) (transform_hlds__tupling__CurIntervalId_15)));
    }
#line 1571 "tupling.m"
    {
#line 1571 "tupling.m"
      transform_hlds__tupling__V_34_34 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_39_39, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0);
    }
#line 1571 "tupling.m"
    {
#line 1571 "tupling.m"
      transform_hlds__tupling__V_35_35 = mercury__set__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_39_39);
    }
#line 1572 "tupling.m"
    {
#line 1572 "tupling.m"
      transform_hlds__tupling__V_36_36 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_38_38, (MR_Word) &transform_hlds__tupling_scalar_common_1[8]);
    }
#line 1567 "tupling.m"
    {
#line 1567 "tupling.m"
      transform_hlds__tupling__IntervalInfo0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 0) = ((MR_Box) (transform_hlds__tupling__IntParams_20));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 1) = ((MR_Box) (transform_hlds__tupling__V_28_28));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 2) = ((MR_Box) (transform_hlds__tupling__V_29_29));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 3) = ((MR_Box) (transform_hlds__tupling__V_30_30));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 4) = ((MR_Box) (transform_hlds__tupling__V_31_31));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 5) = ((MR_Box) (transform_hlds__tupling__V_32_32));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 6) = ((MR_Box) (transform_hlds__tupling__CurIntervalId_15));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 7) = ((MR_Box) (transform_hlds__tupling__Counter_14));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 8) = ((MR_Box) (transform_hlds__tupling__V_33_33));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 9) = ((MR_Box) (transform_hlds__tupling__V_34_34));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 10) = ((MR_Box) (transform_hlds__tupling__V_35_35));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 11) = ((MR_Box) (transform_hlds__tupling__StartMap_17));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 12) = ((MR_Box) (transform_hlds__tupling__EndMap_16));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 13) = ((MR_Box) (transform_hlds__tupling__SuccMap_18));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 14) = ((MR_Box) (transform_hlds__tupling__VarsMap_19));
#line 1567 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__IntervalInfo0_21, 15) = ((MR_Box) (transform_hlds__tupling__V_36_36));
#line 1567 "tupling.m"
    }
#line 1573 "tupling.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1573 "tupling.m"
    {
#line 1573 "tupling.m"
      backend_libs__interval__build_interval_info_in_goal_5_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[9], transform_hlds__tupling__Goal_7, transform_hlds__tupling__IntervalInfo0_21, transform_hlds__tupling__IntervalInfo_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__tupling__conv0_V_22_22);
    }
#line 1554 "tupling.m"
  }
#line 1551 "tupling.m"
}

#line 1537 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_branch_costs_4_p_0(
#line 1537 "tupling.m"
  MR_Word transform_hlds__tupling__BranchState_5,
#line 1537 "tupling.m"
  MR_Float transform_hlds__tupling__Weight_6,
#line 1537 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_16,
#line 1537 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_17)
#line 1537 "tupling.m"
{
#line 1540 "tupling.m"
  {
#line 1540 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1540 "tupling.m"
    MR_Float transform_hlds__tupling__BranchLoads_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__BranchState_5, (MR_Integer) 2)));
#line 1540 "tupling.m"
    MR_Float transform_hlds__tupling__BranchStores_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__BranchState_5, (MR_Integer) 3)));
#line 1540 "tupling.m"
    MR_Word transform_hlds__tupling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_16, (MR_Integer) 0)));
#line 1540 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_16, (MR_Integer) 1)));
#line 1540 "tupling.m"
    MR_Float transform_hlds__tupling__Loads0_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_16, (MR_Integer) 2)));
#line 1540 "tupling.m"
    MR_Float transform_hlds__tupling__Stores0_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_16, (MR_Integer) 3)));
#line 1540 "tupling.m"
    MR_Float transform_hlds__tupling__V_19_19;
#line 1540 "tupling.m"
    MR_Float transform_hlds__tupling__V_20_20 = (transform_hlds__tupling__Weight_6 * transform_hlds__tupling__BranchLoads_10);
#line 1540 "tupling.m"
    MR_Float transform_hlds__tupling__V_22_22;
#line 1540 "tupling.m"
    MR_Float transform_hlds__tupling__V_23_23;
#line 1540 "tupling.m"
    MR_Word transform_hlds__tupling__V_24_24;
#line 1540 "tupling.m"
    MR_Word transform_hlds__tupling__V_25_25;
#line 1541 "tupling.m"
    MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__BranchState_5, (MR_Integer) 0)));
#line 1541 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__BranchState_5, (MR_Integer) 1)));

#line 1543 "tupling.m"
    transform_hlds__tupling__V_19_19 = (transform_hlds__tupling__Loads0_14 + transform_hlds__tupling__V_20_20);
#line 1543 "tupling.m"
    transform_hlds__tupling__V_24_24 = transform_hlds__tupling__V_12_12;
#line 1543 "tupling.m"
    transform_hlds__tupling__V_25_25 = transform_hlds__tupling__V_13_13;
#line 1544 "tupling.m"
    transform_hlds__tupling__V_23_23 = (transform_hlds__tupling__Weight_6 * transform_hlds__tupling__BranchStores_11);
#line 1544 "tupling.m"
    transform_hlds__tupling__V_22_22 = (transform_hlds__tupling__Stores0_15 + transform_hlds__tupling__V_23_23);
#line 1544 "tupling.m"
    {
#line 1544 "tupling.m"
      MR_Word base;
#line 1544 "tupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1544 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_CountState_17 = base;
#line 1544 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__V_24_24));
#line 1544 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__V_25_25));
#line 1544 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__V_19_19);
#line 1544 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__V_22_22);
#line 1544 "tupling.m"
    }
#line 1540 "tupling.m"
  }
#line 1537 "tupling.m"
}

#line 1531 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__reset_count_state_counts_2_p_0(
#line 1531 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_4,
#line 1531 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_5)
#line 1531 "tupling.m"
{
#line 1533 "tupling.m"
  {
#line 1533 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1533 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 0)));
#line 1533 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 1)));
#line 1534 "tupling.m"
    MR_Float transform_hlds__tupling__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
#line 1534 "tupling.m"
    MR_Float transform_hlds__tupling__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));

#line 1535 "tupling.m"
    {
#line 1535 "tupling.m"
      MR_Word base;
#line 1535 "tupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1535 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_CountState_5 = base;
#line 1535 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__V_10_10));
#line 1535 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__V_11_11));
#line 1535 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float((MR_Float) 0.0000000000000000);
#line 1535 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float((MR_Float) 0.0000000000000000);
#line 1535 "tupling.m"
    }
#line 1533 "tupling.m"
  }
#line 1531 "tupling.m"
}

#line 1523 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_clobber_regs_3_p_0(
#line 1523 "tupling.m"
  MR_Word transform_hlds__tupling__NewVars_4,
#line 1523 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_6,
#line 1523 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_7)
#line 1523 "tupling.m"
{
#line 1526 "tupling.m"
  {
#line 1526 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1526 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9;
#line 1527 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11;
#line 1527 "tupling.m"
    MR_Float transform_hlds__tupling__V_12_12;
#line 1527 "tupling.m"
    MR_Float transform_hlds__tupling__V_13_13;
#line 1527 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10;

#line 1527 "tupling.m"
    {
#line 1527 "tupling.m"
      transform_hlds__tupling__V_9_9 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__NewVars_4);
    }
#line 1527 "tupling.m"
    transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_6, (MR_Integer) 0)));
#line 1527 "tupling.m"
    transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_6, (MR_Integer) 1)));
#line 1527 "tupling.m"
    transform_hlds__tupling__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_6, (MR_Integer) 2)));
#line 1527 "tupling.m"
    transform_hlds__tupling__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_6, (MR_Integer) 3)));
#line 1527 "tupling.m"
    {
#line 1527 "tupling.m"
      MR_Word base;
#line 1527 "tupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1527 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_CountState_7 = base;
#line 1527 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__V_9_9));
#line 1527 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__V_11_11));
#line 1527 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__V_12_12);
#line 1527 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__V_13_13);
#line 1527 "tupling.m"
    }
#line 1526 "tupling.m"
  }
#line 1523 "tupling.m"
}

#line 1487 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_2_5_p_0(
#line 1487 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1487 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_2,
#line 1487 "tupling.m"
  MR_Word transform_hlds__tupling__Var_3,
#line 1487 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_4,
#line 1487 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_5)
#line 1487 "tupling.m"
{
#line 1490 "tupling.m"
  {
#line 1490 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1490 "tupling.m"
    MR_Integer transform_hlds__tupling__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 5)));
#line 1490 "tupling.m"
    MR_Integer transform_hlds__tupling__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 1)));
#line 1491 "tupling.m"
    MR_Integer transform_hlds__tupling__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 7)));
#line 1491 "tupling.m"
    MR_Integer transform_hlds__tupling__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 6)));
#line 1491 "tupling.m"
    MR_Integer transform_hlds__tupling__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 4)));
#line 1491 "tupling.m"
    MR_Integer transform_hlds__tupling__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 3)));
#line 1491 "tupling.m"
    MR_Integer transform_hlds__tupling__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 2)));
#line 1491 "tupling.m"
    MR_Integer transform_hlds__tupling__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_2, (MR_Integer) 0)));

#line 1490 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1509 "tupling.m"
      {
#line 1509 "tupling.m"
        MR_Word transform_hlds__tupling__RegVars_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 0)));
#line 1509 "tupling.m"
        MR_Word transform_hlds__tupling__StackVars0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 1)));
#line 1509 "tupling.m"
        MR_Float transform_hlds__tupling__Loads_67 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
#line 1509 "tupling.m"
        MR_Float transform_hlds__tupling__Stores0_68 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));
#line 1509 "tupling.m"
        MR_Word transform_hlds__tupling__StackVars_69;
#line 1509 "tupling.m"
        MR_Float transform_hlds__tupling__Stores_70;

#line 1510 "tupling.m"
        {
#line 1510 "tupling.m"
          transform_hlds__tupling__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__StackVars0_66, transform_hlds__tupling__Var_3);
        }
#line 1513 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1511 "tupling.m"
          {
#line 1511 "tupling.m"
            transform_hlds__tupling__StackVars_69 = transform_hlds__tupling__StackVars0_66;
#line 1512 "tupling.m"
            transform_hlds__tupling__Stores_70 = transform_hlds__tupling__Stores0_68;
#line 1511 "tupling.m"
          }
#line 1513 "tupling.m"
        else
#line 1514 "tupling.m"
          {
#line 1514 "tupling.m"
            MR_Float transform_hlds__tupling__V_71_71;

#line 1514 "tupling.m"
            {
#line 1514 "tupling.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Var_3, transform_hlds__tupling__StackVars0_66, &transform_hlds__tupling__StackVars_69);
            }
#line 1515 "tupling.m"
            {
#line 1515 "tupling.m"
              transform_hlds__tupling__V_71_71 = mercury__float__float_1_f_0(transform_hlds__tupling__V_61_61);
            }
#line 1515 "tupling.m"
            transform_hlds__tupling__Stores_70 = (transform_hlds__tupling__Stores0_68 + transform_hlds__tupling__V_71_71);
#line 1514 "tupling.m"
          }
#line 1509 "tupling.m"
        {
#line 1509 "tupling.m"
          MR_Word base;
#line 1509 "tupling.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1509 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_CountState_5 = base;
#line 1509 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_65));
#line 1509 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__StackVars_69));
#line 1509 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__Loads_67);
#line 1509 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__Stores_70);
#line 1509 "tupling.m"
        }
#line 1509 "tupling.m"
      }
#line 1490 "tupling.m"
    else
#line 1495 "tupling.m"
      {
#line 1495 "tupling.m"
        MR_Word transform_hlds__tupling__CellVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1495 "tupling.m"
        MR_Word transform_hlds__tupling__FieldVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1494 "tupling.m"
        MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 2)));

#line 1496 "tupling.m"
        {
#line 1496 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], ((MR_Box) (transform_hlds__tupling__Var_3)), transform_hlds__tupling__FieldVars_14);
        }
#line 1499 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1509 "tupling.m"
          {
#line 1509 "tupling.m"
            MR_Word transform_hlds__tupling__RegVars_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 0)));
#line 1509 "tupling.m"
            MR_Word transform_hlds__tupling__StackVars0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 1)));
#line 1509 "tupling.m"
            MR_Float transform_hlds__tupling__Loads_78 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
#line 1509 "tupling.m"
            MR_Float transform_hlds__tupling__Stores0_79 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));
#line 1509 "tupling.m"
            MR_Word transform_hlds__tupling__StackVars_80;
#line 1509 "tupling.m"
            MR_Float transform_hlds__tupling__Stores_81;

#line 1510 "tupling.m"
            {
#line 1510 "tupling.m"
              transform_hlds__tupling__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__StackVars0_77, transform_hlds__tupling__CellVar_13);
            }
#line 1513 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 1511 "tupling.m"
              {
#line 1511 "tupling.m"
                transform_hlds__tupling__StackVars_80 = transform_hlds__tupling__StackVars0_77;
#line 1512 "tupling.m"
                transform_hlds__tupling__Stores_81 = transform_hlds__tupling__Stores0_79;
#line 1511 "tupling.m"
              }
#line 1513 "tupling.m"
            else
#line 1514 "tupling.m"
              {
#line 1514 "tupling.m"
                MR_Float transform_hlds__tupling__V_82_82;

#line 1514 "tupling.m"
                {
#line 1514 "tupling.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__CellVar_13, transform_hlds__tupling__StackVars0_77, &transform_hlds__tupling__StackVars_80);
                }
#line 1515 "tupling.m"
                {
#line 1515 "tupling.m"
                  transform_hlds__tupling__V_82_82 = mercury__float__float_1_f_0(transform_hlds__tupling__V_57_57);
                }
#line 1515 "tupling.m"
                transform_hlds__tupling__Stores_81 = (transform_hlds__tupling__Stores0_79 + transform_hlds__tupling__V_82_82);
#line 1514 "tupling.m"
              }
#line 1509 "tupling.m"
            {
#line 1509 "tupling.m"
              MR_Word base;
#line 1509 "tupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1509 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_CountState_5 = base;
#line 1509 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_76));
#line 1509 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__StackVars_80));
#line 1509 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__Loads_78);
#line 1509 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__Stores_81);
#line 1509 "tupling.m"
            }
#line 1509 "tupling.m"
          }
#line 1499 "tupling.m"
        else
#line 1509 "tupling.m"
          {
#line 1509 "tupling.m"
            MR_Word transform_hlds__tupling__RegVars_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 0)));
#line 1509 "tupling.m"
            MR_Word transform_hlds__tupling__StackVars0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 1)));
#line 1509 "tupling.m"
            MR_Float transform_hlds__tupling__Loads_89 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 2)));
#line 1509 "tupling.m"
            MR_Float transform_hlds__tupling__Stores0_90 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_4, (MR_Integer) 3)));
#line 1509 "tupling.m"
            MR_Word transform_hlds__tupling__StackVars_91;
#line 1509 "tupling.m"
            MR_Float transform_hlds__tupling__Stores_92;

#line 1510 "tupling.m"
            {
#line 1510 "tupling.m"
              transform_hlds__tupling__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__StackVars0_88, transform_hlds__tupling__Var_3);
            }
#line 1513 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 1511 "tupling.m"
              {
#line 1511 "tupling.m"
                transform_hlds__tupling__StackVars_91 = transform_hlds__tupling__StackVars0_88;
#line 1512 "tupling.m"
                transform_hlds__tupling__Stores_92 = transform_hlds__tupling__Stores0_90;
#line 1511 "tupling.m"
              }
#line 1513 "tupling.m"
            else
#line 1514 "tupling.m"
              {
#line 1514 "tupling.m"
                MR_Float transform_hlds__tupling__V_93_93;

#line 1514 "tupling.m"
                {
#line 1514 "tupling.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Var_3, transform_hlds__tupling__StackVars0_88, &transform_hlds__tupling__StackVars_91);
                }
#line 1515 "tupling.m"
                {
#line 1515 "tupling.m"
                  transform_hlds__tupling__V_93_93 = mercury__float__float_1_f_0(transform_hlds__tupling__V_61_61);
                }
#line 1515 "tupling.m"
                transform_hlds__tupling__Stores_92 = (transform_hlds__tupling__Stores0_90 + transform_hlds__tupling__V_93_93);
#line 1514 "tupling.m"
              }
#line 1509 "tupling.m"
            {
#line 1509 "tupling.m"
              MR_Word base;
#line 1509 "tupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1509 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_CountState_5 = base;
#line 1509 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_87));
#line 1509 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__StackVars_91));
#line 1509 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__Loads_89);
#line 1509 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__Stores_92);
#line 1509 "tupling.m"
            }
#line 1509 "tupling.m"
          }
#line 1495 "tupling.m"
      }
#line 1490 "tupling.m"
  }
#line 1487 "tupling.m"
}

#line 1484 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0_1(
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1484 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1484 "tupling.m"
{
#line 1484 "tupling.m"
  {
#line 1484 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1484 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5;

#line 1484 "tupling.m"
    {
#line 1484 "tupling.m"
      transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5);
    }
#line 1484 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5));
#line 1484 "tupling.m"
  }
#line 1484 "tupling.m"
}

#line 1478 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_flushed_4_p_0(
#line 1478 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1478 "tupling.m"
  MR_Word transform_hlds__tupling__Vars_6,
#line 1478 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_10,
#line 1478 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_11)
#line 1478 "tupling.m"
{
#line 1481 "tupling.m"
  {
#line 1481 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1481 "tupling.m"
    MR_Word transform_hlds__tupling__TuplingProposal_8;
#line 1481 "tupling.m"
    MR_Word transform_hlds__tupling__TuningParams_9;
#line 1481 "tupling.m"
    MR_Word transform_hlds__tupling__V_12_12;
#line 1481 "tupling.m"
    MR_Word transform_hlds__tupling__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 860 "tupling.m"
    MR_Word transform_hlds__tupling__Probe_36;
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 858 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_Probe_36;
#line 1483 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14;
#line 1483 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15;
#line 1483 "tupling.m"
    MR_Word transform_hlds__tupling__V_16_16;
#line 1483 "tupling.m"
    MR_Word transform_hlds__tupling__V_17_17;
#line 1483 "tupling.m"
    MR_Word transform_hlds__tupling__V_18_18;
#line 1483 "tupling.m"
    MR_Word transform_hlds__tupling__V_19_19;
#line 1484 "tupling.m"
    MR_Box transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_11;

#line 858 "tupling.m"
    {
#line 858 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_37_37, ((MR_Box) (transform_hlds__tupling__V_26_26)), &transform_hlds__tupling__conv0_Probe_36);
    }
#line 858 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 858 "tupling.m"
      {
#line 858 "tupling.m"
        transform_hlds__tupling__Probe_36 = ((MR_Word) transform_hlds__tupling__conv0_Probe_36);
#line 858 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 858 "tupling.m"
      }
#line 860 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 859 "tupling.m"
      transform_hlds__tupling__TuplingProposal_8 = transform_hlds__tupling__Probe_36;
#line 860 "tupling.m"
    else
#line 861 "tupling.m"
      transform_hlds__tupling__TuplingProposal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1483 "tupling.m"
    transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 1483 "tupling.m"
    transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 1483 "tupling.m"
    transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 1483 "tupling.m"
    transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 1483 "tupling.m"
    transform_hlds__tupling__TuningParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 1483 "tupling.m"
    transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 1483 "tupling.m"
    transform_hlds__tupling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 1484 "tupling.m"
    {
#line 1484 "tupling.m"
      transform_hlds__tupling__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1484 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_12_12, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[3]));
#line 1484 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_12_12, 1) = ((MR_Box) (transform_hlds__tupling__cls_require_flushed_4_p_0_1));
#line 1484 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1484 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_12_12, 3) = ((MR_Box) (transform_hlds__tupling__TuplingProposal_8));
#line 1484 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_12_12, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_9));
#line 1484 "tupling.m"
    }
#line 1484 "tupling.m"
    {
#line 1484 "tupling.m"
      parse_tree__set_of_var__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_12_12, transform_hlds__tupling__Vars_6, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_0_10)), &transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_11);
    }
#line 1484 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_CountState_11 = ((MR_Word) transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_11);
#line 1481 "tupling.m"
  }
#line 1478 "tupling.m"
}

#line 1452 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_3(
#line 1452 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1452 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1452 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1452 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1452 "tupling.m"
{
#line 1452 "tupling.m"
  {
#line 1452 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1452 "tupling.m"
    MR_Word transform_hlds__tupling__conv5_CountState_8;

#line 1452 "tupling.m"
    {
#line 1452 "tupling.m"
      transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv5_CountState_8);
    }
#line 1452 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv5_CountState_8));
#line 1452 "tupling.m"
  }
#line 1452 "tupling.m"
}

#line 1462 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_2(
#line 1462 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1462 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1462 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1462 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1462 "tupling.m"
{
#line 1462 "tupling.m"
  {
#line 1462 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1462 "tupling.m"
    MR_Word transform_hlds__tupling__conv3_CountState_8;

#line 1462 "tupling.m"
    {
#line 1462 "tupling.m"
      transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv3_CountState_8);
    }
#line 1462 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv3_CountState_8));
#line 1462 "tupling.m"
  }
#line 1462 "tupling.m"
}

#line 1452 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_1(
#line 1452 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1452 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1452 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1452 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1452 "tupling.m"
{
#line 1452 "tupling.m"
  {
#line 1452 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1452 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_CountState_8;

#line 1452 "tupling.m"
    {
#line 1452 "tupling.m"
      transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv1_CountState_8);
    }
#line 1452 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv1_CountState_8));
#line 1452 "tupling.m"
  }
#line 1452 "tupling.m"
}

#line 1439 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0(
#line 1439 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_6,
#line 1439 "tupling.m"
  MR_Word transform_hlds__tupling__DeconstructCellVar_7,
#line 1439 "tupling.m"
  MR_Word transform_hlds__tupling__DeconstructFieldVars_8,
#line 1439 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_State_0_18,
#line 1439 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_State_19)
#line 1439 "tupling.m"
{
#line 1443 "tupling.m"
  {
#line 1443 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1443 "tupling.m"
    MR_Word transform_hlds__tupling__TuningParams_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 1443 "tupling.m"
    MR_Integer transform_hlds__tupling__CvLoadCost_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 2)));
#line 1443 "tupling.m"
    MR_Integer transform_hlds__tupling__FvLoadCost_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 4)));
#line 1443 "tupling.m"
    MR_Word transform_hlds__tupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 1444 "tupling.m"
    MR_Word transform_hlds__tupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 1444 "tupling.m"
    MR_Word transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 1444 "tupling.m"
    MR_Word transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 1444 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 1444 "tupling.m"
    MR_Word transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 1445 "tupling.m"
    MR_Integer transform_hlds__tupling__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 0)));
#line 1445 "tupling.m"
    MR_Integer transform_hlds__tupling__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 1)));
#line 1445 "tupling.m"
    MR_Integer transform_hlds__tupling__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 3)));
#line 1445 "tupling.m"
    MR_Integer transform_hlds__tupling__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 5)));
#line 1445 "tupling.m"
    MR_Integer transform_hlds__tupling__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 6)));
#line 1445 "tupling.m"
    MR_Integer transform_hlds__tupling__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 7)));
#line 11101 "transform_hlds.tupling.c"
    MR_Word transform_hlds__tupling__Probe_69;
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 858 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_Probe_69;

#line 858 "tupling.m"
    {
#line 858 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_70_70, ((MR_Box) (transform_hlds__tupling__V_28_28)), &transform_hlds__tupling__conv0_Probe_69);
    }
#line 858 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 858 "tupling.m"
      {
#line 858 "tupling.m"
        transform_hlds__tupling__Probe_69 = ((MR_Word) transform_hlds__tupling__conv0_Probe_69);
#line 858 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 858 "tupling.m"
      }
#line 11135 "transform_hlds.tupling.c"
    if (transform_hlds__tupling__succeeded)
#line 1454 "tupling.m"
      if ((transform_hlds__tupling__Probe_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1449 "tupling.m"
        {
#line 1449 "tupling.m"
          MR_Word transform_hlds__tupling__STATE_VARIABLE_State_25_25;
#line 1449 "tupling.m"
          MR_Word transform_hlds__tupling__V_26_26;
#line 1452 "tupling.m"
          MR_Box transform_hlds__tupling__conv2_STATE_VARIABLE_State_19;

#line 1450 "tupling.m"
          {
#line 1450 "tupling.m"
            transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(transform_hlds__tupling__CvLoadCost_11, transform_hlds__tupling__DeconstructCellVar_7, transform_hlds__tupling__STATE_VARIABLE_State_0_18, &transform_hlds__tupling__STATE_VARIABLE_State_25_25);
          }
#line 1452 "tupling.m"
          {
#line 1452 "tupling.m"
            transform_hlds__tupling__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1452 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_26_26, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[6]));
#line 1452 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_26_26, 1) = ((MR_Box) (transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_1));
#line 1452 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1452 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_26_26, 3) = ((MR_Box) (transform_hlds__tupling__FvLoadCost_12));
#line 1452 "tupling.m"
          }
#line 1452 "tupling.m"
          {
#line 1452 "tupling.m"
            mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_26_26, transform_hlds__tupling__DeconstructFieldVars_8, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_State_25_25)), &transform_hlds__tupling__conv2_STATE_VARIABLE_State_19);
          }
#line 1452 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_State_19 = ((MR_Word) transform_hlds__tupling__conv2_STATE_VARIABLE_State_19);
#line 1449 "tupling.m"
        }
#line 1454 "tupling.m"
      else
#line 1455 "tupling.m"
        {
#line 1455 "tupling.m"
          MR_Word transform_hlds__tupling__TypeInfo_53_53 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 1455 "tupling.m"
          MR_Word transform_hlds__tupling__TupleFieldVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Probe_69, (MR_Integer) 1)));
#line 1455 "tupling.m"
          MR_Word transform_hlds__tupling__VarsToLoad_17;
#line 1455 "tupling.m"
          MR_Word transform_hlds__tupling__V_20_20;
#line 1455 "tupling.m"
          MR_Word transform_hlds__tupling__V_21_21;
#line 1455 "tupling.m"
          MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Probe_69, (MR_Integer) 0)));
#line 1455 "tupling.m"
          MR_Word transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Probe_69, (MR_Integer) 2)));

#line 1457 "tupling.m"
          {
#line 1457 "tupling.m"
            transform_hlds__tupling__V_20_20 = mercury__set__from_list_1_f_0(transform_hlds__tupling__TypeInfo_53_53, transform_hlds__tupling__DeconstructFieldVars_8);
          }
#line 1458 "tupling.m"
          {
#line 1458 "tupling.m"
            transform_hlds__tupling__V_21_21 = mercury__set__from_list_1_f_0(transform_hlds__tupling__TypeInfo_53_53, transform_hlds__tupling__TupleFieldVars_15);
          }
#line 1456 "tupling.m"
          {
#line 1456 "tupling.m"
            transform_hlds__tupling__VarsToLoad_17 = mercury__set__difference_2_f_0(transform_hlds__tupling__TypeInfo_53_53, transform_hlds__tupling__V_20_20, transform_hlds__tupling__V_21_21);
          }
#line 1459 "tupling.m"
          {
#line 1459 "tupling.m"
            transform_hlds__tupling__succeeded = mercury__set__is_non_empty_1_p_0(transform_hlds__tupling__TypeInfo_53_53, transform_hlds__tupling__VarsToLoad_17);
          }
#line 1464 "tupling.m"
          if (transform_hlds__tupling__succeeded)
#line 1461 "tupling.m"
            {
#line 1461 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_State_22_22;
#line 1461 "tupling.m"
              MR_Word transform_hlds__tupling__V_23_23;
#line 1462 "tupling.m"
              MR_Box transform_hlds__tupling__conv4_STATE_VARIABLE_State_19;

#line 1460 "tupling.m"
              {
#line 1460 "tupling.m"
                transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(transform_hlds__tupling__CvLoadCost_11, transform_hlds__tupling__DeconstructCellVar_7, transform_hlds__tupling__STATE_VARIABLE_State_0_18, &transform_hlds__tupling__STATE_VARIABLE_State_22_22);
              }
#line 1462 "tupling.m"
              {
#line 1462 "tupling.m"
                transform_hlds__tupling__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1462 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[6]));
#line 1462 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 1) = ((MR_Box) (transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_2));
#line 1462 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1462 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 3) = ((MR_Box) (transform_hlds__tupling__FvLoadCost_12));
#line 1462 "tupling.m"
              }
#line 1462 "tupling.m"
              {
#line 1462 "tupling.m"
                mercury__set__fold_4_p_0(transform_hlds__tupling__TypeInfo_53_53, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_23_23, transform_hlds__tupling__VarsToLoad_17, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_State_22_22)), &transform_hlds__tupling__conv4_STATE_VARIABLE_State_19);
              }
#line 1462 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_State_19 = ((MR_Word) transform_hlds__tupling__conv4_STATE_VARIABLE_State_19);
#line 1461 "tupling.m"
            }
#line 1464 "tupling.m"
          else
#line 1462 "tupling.m"
            *transform_hlds__tupling__STATE_VARIABLE_State_19 = transform_hlds__tupling__STATE_VARIABLE_State_0_18;
#line 1455 "tupling.m"
        }
#line 11260 "transform_hlds.tupling.c"
    else
#line 11262 "transform_hlds.tupling.c"
      {
#line 11264 "transform_hlds.tupling.c"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_State_25_81;
#line 11266 "transform_hlds.tupling.c"
        MR_Word transform_hlds__tupling__V_82_82;
#line 1452 "tupling.m"
        MR_Box transform_hlds__tupling__conv6_STATE_VARIABLE_State_19;

#line 1450 "tupling.m"
        {
#line 1450 "tupling.m"
          transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(transform_hlds__tupling__CvLoadCost_11, transform_hlds__tupling__DeconstructCellVar_7, transform_hlds__tupling__STATE_VARIABLE_State_0_18, &transform_hlds__tupling__STATE_VARIABLE_State_25_81);
        }
#line 1452 "tupling.m"
        {
#line 1452 "tupling.m"
          transform_hlds__tupling__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1452 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_82_82, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[6]));
#line 1452 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_82_82, 1) = ((MR_Box) (transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0_3));
#line 1452 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1452 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_82_82, 3) = ((MR_Box) (transform_hlds__tupling__FvLoadCost_12));
#line 1452 "tupling.m"
        }
#line 1452 "tupling.m"
        {
#line 1452 "tupling.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_82_82, transform_hlds__tupling__DeconstructFieldVars_8, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_State_25_81)), &transform_hlds__tupling__conv6_STATE_VARIABLE_State_19);
        }
#line 1452 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_State_19 = ((MR_Word) transform_hlds__tupling__conv6_STATE_VARIABLE_State_19);
#line 11297 "transform_hlds.tupling.c"
      }
#line 1443 "tupling.m"
  }
#line 1439 "tupling.m"
}

#line 1431 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_put_in_regs_3_p_0(
#line 1431 "tupling.m"
  MR_Word transform_hlds__tupling__Vars_4,
#line 1431 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_8,
#line 1431 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_9)
#line 1431 "tupling.m"
{
#line 1434 "tupling.m"
  {
#line 1434 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1434 "tupling.m"
    MR_Word transform_hlds__tupling__RegVars0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 0)));
#line 1434 "tupling.m"
    MR_Word transform_hlds__tupling__RegVars_7;
#line 1435 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 1)));
#line 1435 "tupling.m"
    MR_Float transform_hlds__tupling__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 2)));
#line 1435 "tupling.m"
    MR_Float transform_hlds__tupling__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 3)));
#line 1437 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15;
#line 1437 "tupling.m"
    MR_Float transform_hlds__tupling__V_16_16;
#line 1437 "tupling.m"
    MR_Float transform_hlds__tupling__V_17_17;
#line 1437 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14;

#line 1436 "tupling.m"
    {
#line 1436 "tupling.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Vars_4, transform_hlds__tupling__RegVars0_6, &transform_hlds__tupling__RegVars_7);
    }
#line 1437 "tupling.m"
    transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 0)));
#line 1437 "tupling.m"
    transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 1)));
#line 1437 "tupling.m"
    transform_hlds__tupling__V_16_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 2)));
#line 1437 "tupling.m"
    transform_hlds__tupling__V_17_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_8, (MR_Integer) 3)));
#line 1437 "tupling.m"
    {
#line 1437 "tupling.m"
      MR_Word base;
#line 1437 "tupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "tupling.m"
      *transform_hlds__tupling__STATE_VARIABLE_CountState_9 = base;
#line 1437 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_7));
#line 1437 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__V_15_15));
#line 1437 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__V_16_16);
#line 1437 "tupling.m"
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__V_17_17);
#line 1437 "tupling.m"
    }
#line 1434 "tupling.m"
  }
#line 1431 "tupling.m"
}

#line 1416 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(
#line 1416 "tupling.m"
  MR_Integer transform_hlds__tupling__LoadCost_5,
#line 1416 "tupling.m"
  MR_Word transform_hlds__tupling__Var_6,
#line 1416 "tupling.m"
  MR_Word transform_hlds__tupling__CountState0_7,
#line 1416 "tupling.m"
  MR_Word * transform_hlds__tupling__CountState_8)
#line 1416 "tupling.m"
{
#line 1419 "tupling.m"
  {
#line 1419 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1419 "tupling.m"
    MR_Word transform_hlds__tupling__RegVars0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_7, (MR_Integer) 0)));
#line 1419 "tupling.m"
    MR_Word transform_hlds__tupling__StackVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_7, (MR_Integer) 1)));
#line 1419 "tupling.m"
    MR_Float transform_hlds__tupling__Loads0_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_7, (MR_Integer) 2)));
#line 1419 "tupling.m"
    MR_Float transform_hlds__tupling__Stores_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_7, (MR_Integer) 3)));

#line 1421 "tupling.m"
    {
#line 1421 "tupling.m"
      transform_hlds__tupling__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__RegVars0_9, transform_hlds__tupling__Var_6);
    }
#line 1423 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1422 "tupling.m"
      *transform_hlds__tupling__CountState_8 = transform_hlds__tupling__CountState0_7;
#line 1423 "tupling.m"
    else
#line 1424 "tupling.m"
      {
#line 1424 "tupling.m"
        MR_Word transform_hlds__tupling__RegVars_13;
#line 1424 "tupling.m"
        MR_Float transform_hlds__tupling__Loads_14;
#line 1424 "tupling.m"
        MR_Float transform_hlds__tupling__V_15_15;

#line 1424 "tupling.m"
        {
#line 1424 "tupling.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Var_6, transform_hlds__tupling__RegVars0_9, &transform_hlds__tupling__RegVars_13);
        }
#line 1425 "tupling.m"
        {
#line 1425 "tupling.m"
          transform_hlds__tupling__V_15_15 = mercury__float__float_1_f_0(transform_hlds__tupling__LoadCost_5);
        }
#line 1425 "tupling.m"
        transform_hlds__tupling__Loads_14 = (transform_hlds__tupling__Loads0_11 + transform_hlds__tupling__V_15_15);
#line 1426 "tupling.m"
        {
#line 1426 "tupling.m"
          MR_Word base;
#line 1426 "tupling.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1426 "tupling.m"
          *transform_hlds__tupling__CountState_8 = base;
#line 1426 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_13));
#line 1426 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__StackVars_10));
#line 1426 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__Loads_14);
#line 1426 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__Stores_12);
#line 1426 "tupling.m"
        }
#line 1424 "tupling.m"
      }
#line 1419 "tupling.m"
  }
#line 1416 "tupling.m"
}

#line 1384 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_normal_var_in_reg_4_p_0(
#line 1384 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1384 "tupling.m"
  MR_Word transform_hlds__tupling__Var_6,
#line 1384 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_10,
#line 1384 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_11)
#line 1384 "tupling.m"
{
#line 1387 "tupling.m"
  {
#line 1387 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1387 "tupling.m"
    MR_Word transform_hlds__tupling__TuningParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 1387 "tupling.m"
    MR_Integer transform_hlds__tupling__NormalLoadCost_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 0)));
#line 1388 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 1388 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 1388 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 1388 "tupling.m"
    MR_Word transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 1388 "tupling.m"
    MR_Word transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 1388 "tupling.m"
    MR_Word transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 1389 "tupling.m"
    MR_Integer transform_hlds__tupling__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 1)));
#line 1389 "tupling.m"
    MR_Integer transform_hlds__tupling__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 2)));
#line 1389 "tupling.m"
    MR_Integer transform_hlds__tupling__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 3)));
#line 1389 "tupling.m"
    MR_Integer transform_hlds__tupling__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 4)));
#line 1389 "tupling.m"
    MR_Integer transform_hlds__tupling__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 5)));
#line 1389 "tupling.m"
    MR_Integer transform_hlds__tupling__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 6)));
#line 1389 "tupling.m"
    MR_Integer transform_hlds__tupling__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_8, (MR_Integer) 7)));

#line 1390 "tupling.m"
    {
#line 1390 "tupling.m"
      transform_hlds__tupling__cls_require_var_in_reg_with_cost_4_p_0(transform_hlds__tupling__NormalLoadCost_9, transform_hlds__tupling__Var_6, transform_hlds__tupling__STATE_VARIABLE_CountState_0_10, transform_hlds__tupling__STATE_VARIABLE_CountState_11);
#line 1390 "tupling.m"
      return;
    }
#line 1387 "tupling.m"
  }
#line 1384 "tupling.m"
}

#line 1369 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_in_reg_4_p_0(
#line 1369 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1369 "tupling.m"
  MR_Word transform_hlds__tupling__Var_6,
#line 1369 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_12,
#line 1369 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_13)
#line 1369 "tupling.m"
{
#line 1380 "tupling.m"
  {
#line 1380 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1380 "tupling.m"
    MR_Word transform_hlds__tupling__TuplingProposal_8;
#line 1374 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_16_16;
#line 1374 "tupling.m"
    MR_Word transform_hlds__tupling__FieldVars_10;
#line 1374 "tupling.m"
    MR_Word transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 860 "tupling.m"
    MR_Word transform_hlds__tupling__Probe_28;
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 858 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_Probe_28;
#line 1375 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9;
#line 1375 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11;

#line 858 "tupling.m"
    {
#line 858 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_29_29, ((MR_Box) (transform_hlds__tupling__V_18_18)), &transform_hlds__tupling__conv0_Probe_28);
    }
#line 858 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 858 "tupling.m"
      {
#line 858 "tupling.m"
        transform_hlds__tupling__Probe_28 = ((MR_Word) transform_hlds__tupling__conv0_Probe_28);
#line 858 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 858 "tupling.m"
      }
#line 860 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 859 "tupling.m"
      transform_hlds__tupling__TuplingProposal_8 = transform_hlds__tupling__Probe_28;
#line 860 "tupling.m"
    else
#line 861 "tupling.m"
      transform_hlds__tupling__TuplingProposal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1375 "tupling.m"
    transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__TuplingProposal_8)) == (MR_mktag((MR_Integer) 1)));
#line 1375 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1375 "tupling.m"
      {
#line 1375 "tupling.m"
        transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_8, (MR_Integer) 0)));
#line 1375 "tupling.m"
        transform_hlds__tupling__FieldVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_8, (MR_Integer) 1)));
#line 1375 "tupling.m"
        transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_8, (MR_Integer) 2)));
#line 11612 "transform_hlds.tupling.c"
        transform_hlds__tupling__TypeInfo_16_16 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 1376 "tupling.m"
        {
#line 1376 "tupling.m"
          transform_hlds__tupling__succeeded = mercury__list__member_2_p_0(transform_hlds__tupling__TypeInfo_16_16, ((MR_Box) (transform_hlds__tupling__Var_6)), transform_hlds__tupling__FieldVars_10);
        }
#line 1375 "tupling.m"
      }
#line 1380 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1397 "tupling.m"
      {
#line 1397 "tupling.m"
        MR_Word transform_hlds__tupling__RegVars0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_12, (MR_Integer) 0)));
#line 1397 "tupling.m"
        MR_Word transform_hlds__tupling__StackVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_12, (MR_Integer) 1)));
#line 1397 "tupling.m"
        MR_Float transform_hlds__tupling__Loads0_45 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_12, (MR_Integer) 2)));
#line 1397 "tupling.m"
        MR_Float transform_hlds__tupling__Stores_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_12, (MR_Integer) 3)));

#line 1399 "tupling.m"
        {
#line 1399 "tupling.m"
          transform_hlds__tupling__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__RegVars0_43, transform_hlds__tupling__Var_6);
        }
#line 1401 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 1400 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_CountState_13 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_12;
#line 1401 "tupling.m"
        else
#line 1402 "tupling.m"
          {
#line 1402 "tupling.m"
            MR_Word transform_hlds__tupling__CellVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_8, (MR_Integer) 0)));
#line 1402 "tupling.m"
            MR_Word transform_hlds__tupling__TuningParams_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 4)));
#line 1402 "tupling.m"
            MR_Float transform_hlds__tupling__CvLoadCost_51;
#line 1402 "tupling.m"
            MR_Float transform_hlds__tupling__FvLoadCost_52;
#line 1402 "tupling.m"
            MR_Word transform_hlds__tupling__RegVars_53;
#line 1402 "tupling.m"
            MR_Float transform_hlds__tupling__Loads_54;
#line 1402 "tupling.m"
            MR_Integer transform_hlds__tupling__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 2)));
#line 1402 "tupling.m"
            MR_Integer transform_hlds__tupling__V_56_56;
#line 1402 "tupling.m"
            MR_Word transform_hlds__tupling__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_8, (MR_Integer) 1)));
#line 1402 "tupling.m"
            MR_Word transform_hlds__tupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_8, (MR_Integer) 2)));
#line 1403 "tupling.m"
            MR_Word transform_hlds__tupling__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 0)));
#line 1403 "tupling.m"
            MR_Word transform_hlds__tupling__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 1)));
#line 1403 "tupling.m"
            MR_Word transform_hlds__tupling__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 2)));
#line 1403 "tupling.m"
            MR_Word transform_hlds__tupling__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 3)));
#line 1403 "tupling.m"
            MR_Word transform_hlds__tupling__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 5)));
#line 1403 "tupling.m"
            MR_Word transform_hlds__tupling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_5, (MR_Integer) 6)));
#line 1404 "tupling.m"
            MR_Integer transform_hlds__tupling__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 0)));
#line 1404 "tupling.m"
            MR_Integer transform_hlds__tupling__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 1)));
#line 1404 "tupling.m"
            MR_Integer transform_hlds__tupling__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 3)));
#line 1404 "tupling.m"
            MR_Integer transform_hlds__tupling__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 4)));
#line 1404 "tupling.m"
            MR_Integer transform_hlds__tupling__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 5)));
#line 1404 "tupling.m"
            MR_Integer transform_hlds__tupling__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 6)));
#line 1404 "tupling.m"
            MR_Integer transform_hlds__tupling__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 7)));
#line 1405 "tupling.m"
            MR_Integer transform_hlds__tupling__V_74_74;
#line 1405 "tupling.m"
            MR_Integer transform_hlds__tupling__V_75_75;
#line 1405 "tupling.m"
            MR_Integer transform_hlds__tupling__V_76_76;
#line 1405 "tupling.m"
            MR_Integer transform_hlds__tupling__V_77_77;
#line 1405 "tupling.m"
            MR_Integer transform_hlds__tupling__V_78_78;
#line 1405 "tupling.m"
            MR_Integer transform_hlds__tupling__V_79_79;
#line 1405 "tupling.m"
            MR_Integer transform_hlds__tupling__V_80_80;

#line 1404 "tupling.m"
            {
#line 1404 "tupling.m"
              transform_hlds__tupling__CvLoadCost_51 = mercury__float__float_1_f_0(transform_hlds__tupling__V_55_55);
            }
#line 1405 "tupling.m"
            transform_hlds__tupling__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 0)));
#line 1405 "tupling.m"
            transform_hlds__tupling__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 1)));
#line 1405 "tupling.m"
            transform_hlds__tupling__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 2)));
#line 1405 "tupling.m"
            transform_hlds__tupling__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 3)));
#line 1405 "tupling.m"
            transform_hlds__tupling__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 4)));
#line 1405 "tupling.m"
            transform_hlds__tupling__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 5)));
#line 1405 "tupling.m"
            transform_hlds__tupling__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 6)));
#line 1405 "tupling.m"
            transform_hlds__tupling__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_50, (MR_Integer) 7)));
#line 1405 "tupling.m"
            {
#line 1405 "tupling.m"
              transform_hlds__tupling__FvLoadCost_52 = mercury__float__float_1_f_0(transform_hlds__tupling__V_56_56);
            }
#line 1406 "tupling.m"
            {
#line 1406 "tupling.m"
              transform_hlds__tupling__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__RegVars0_43, transform_hlds__tupling__CellVar_47);
            }
#line 1409 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 1407 "tupling.m"
              {
#line 1407 "tupling.m"
                {
#line 1407 "tupling.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Var_6, transform_hlds__tupling__RegVars0_43, &transform_hlds__tupling__RegVars_53);
                }
#line 1408 "tupling.m"
                transform_hlds__tupling__Loads_54 = (transform_hlds__tupling__Loads0_45 + transform_hlds__tupling__FvLoadCost_52);
#line 1407 "tupling.m"
              }
#line 1409 "tupling.m"
            else
#line 1410 "tupling.m"
              {
#line 1410 "tupling.m"
                MR_Word transform_hlds__tupling__V_57_57;
#line 1410 "tupling.m"
                MR_Word transform_hlds__tupling__V_58_58;
#line 1410 "tupling.m"
                MR_Float transform_hlds__tupling__V_60_60;

#line 1410 "tupling.m"
                {
#line 1410 "tupling.m"
                  transform_hlds__tupling__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "tupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_58_58, 0) = ((MR_Box) (transform_hlds__tupling__Var_6));
#line 1410 "tupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1410 "tupling.m"
                }
#line 1410 "tupling.m"
                {
#line 1410 "tupling.m"
                  transform_hlds__tupling__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "tupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_57_57, 0) = ((MR_Box) (transform_hlds__tupling__CellVar_47));
#line 1410 "tupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_57_57, 1) = ((MR_Box) (transform_hlds__tupling__V_58_58));
#line 1410 "tupling.m"
                }
#line 1410 "tupling.m"
                {
#line 1410 "tupling.m"
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__V_57_57, transform_hlds__tupling__RegVars0_43, &transform_hlds__tupling__RegVars_53);
                }
#line 1411 "tupling.m"
                transform_hlds__tupling__V_60_60 = (transform_hlds__tupling__Loads0_45 + transform_hlds__tupling__CvLoadCost_51);
#line 1411 "tupling.m"
                transform_hlds__tupling__Loads_54 = (transform_hlds__tupling__V_60_60 + transform_hlds__tupling__FvLoadCost_52);
#line 1410 "tupling.m"
              }
#line 1413 "tupling.m"
            {
#line 1413 "tupling.m"
              MR_Word base;
#line 1413 "tupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1413 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_CountState_13 = base;
#line 1413 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_53));
#line 1413 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__StackVars_44));
#line 1413 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__Loads_54);
#line 1413 "tupling.m"
              MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__Stores_46);
#line 1413 "tupling.m"
            }
#line 1402 "tupling.m"
          }
#line 1397 "tupling.m"
      }
#line 1380 "tupling.m"
    else
#line 1381 "tupling.m"
      {
#line 1381 "tupling.m"
        transform_hlds__tupling__cls_require_normal_var_in_reg_4_p_0(transform_hlds__tupling__CountInfo_5, transform_hlds__tupling__Var_6, transform_hlds__tupling__STATE_VARIABLE_CountState_0_12, transform_hlds__tupling__STATE_VARIABLE_CountState_13);
#line 1381 "tupling.m"
        return;
      }
#line 1380 "tupling.m"
  }
#line 1369 "tupling.m"
}

#line 1367 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0_1(
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1367 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1367 "tupling.m"
{
#line 1367 "tupling.m"
  {
#line 1367 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1367 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13;

#line 1367 "tupling.m"
    {
#line 1367 "tupling.m"
      transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13);
    }
#line 1367 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13));
#line 1367 "tupling.m"
  }
#line 1367 "tupling.m"
}

#line 1363 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__cls_require_in_regs_4_p_0(
#line 1363 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_5,
#line 1363 "tupling.m"
  MR_Word transform_hlds__tupling__Vars_6,
#line 1363 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_8,
#line 1363 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_9)
#line 1363 "tupling.m"
{
#line 1366 "tupling.m"
  {
#line 1366 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1366 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10;
#line 1367 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_9;

#line 1367 "tupling.m"
    {
#line 1367 "tupling.m"
      transform_hlds__tupling__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[5]));
#line 1367 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 1) = ((MR_Box) (transform_hlds__tupling__cls_require_in_regs_4_p_0_1));
#line 1367 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1367 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_10_10, 3) = ((MR_Box) (transform_hlds__tupling__CountInfo_5));
#line 1367 "tupling.m"
    }
#line 1367 "tupling.m"
    {
#line 1367 "tupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_10_10, transform_hlds__tupling__Vars_6, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_0_8)), &transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_9);
    }
#line 1367 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_CountState_9 = ((MR_Word) transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_9);
#line 1366 "tupling.m"
  }
#line 1363 "tupling.m"
}

#line 1484 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_cases_4_p_0_1(
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1484 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1484 "tupling.m"
{
#line 1484 "tupling.m"
  {
#line 1484 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1484 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5;

#line 1484 "tupling.m"
    {
#line 1484 "tupling.m"
      transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5);
    }
#line 1484 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5));
#line 1484 "tupling.m"
  }
#line 1484 "tupling.m"
}

#line 1335 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_cases_4_p_0(
#line 1335 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1335 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1335 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_3,
#line 1335 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_4)
#line 1335 "tupling.m"
{
#line 1338 "tupling.m"
  while (MR_TRUE)
#line 1338 "tupling.m"
    {
#line 1338 "tupling.m"
      /* tailcall optimized into a loop */
#line 1338 "tupling.m"
      {
#line 1338 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;

#line 1338 "tupling.m"
        if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1338 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_CountState_4 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_3;
#line 1338 "tupling.m"
        else
#line 1339 "tupling.m"
          {
#line 1339 "tupling.m"
            MR_Word transform_hlds__tupling__Case_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1339 "tupling.m"
            MR_Word transform_hlds__tupling__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1339 "tupling.m"
            MR_Word transform_hlds__tupling__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case_9, (MR_Integer) 2)));
#line 1339 "tupling.m"
            MR_Word transform_hlds__tupling__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_15, (MR_Integer) 1)));
#line 1339 "tupling.m"
            MR_Word transform_hlds__tupling__ResumePoint_17;
#line 1339 "tupling.m"
            MR_Word transform_hlds__tupling__BranchCountState0_20;
#line 1339 "tupling.m"
            MR_Word transform_hlds__tupling__BranchCountState_21;
#line 1339 "tupling.m"
            MR_Word transform_hlds__tupling__ProcCounts_22;
#line 1339 "tupling.m"
            MR_Word transform_hlds__tupling__GoalId_23;
#line 1339 "tupling.m"
            MR_Float transform_hlds__tupling__RelFreq_24;
#line 1339 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_27_27;
#line 1339 "tupling.m"
            MR_Word transform_hlds__tupling__V_28_28;
#line 1339 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_29_29;
#line 1340 "tupling.m"
            MR_Word transform_hlds__tupling___MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case_9, (MR_Integer) 0)));
#line 1340 "tupling.m"
            MR_Word transform_hlds__tupling___OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Case_9, (MR_Integer) 1)));
#line 1341 "tupling.m"
            MR_Word transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_15, (MR_Integer) 0)));
#line 1352 "tupling.m"
            MR_Word transform_hlds__tupling__V_32_32;
#line 1352 "tupling.m"
            MR_Word transform_hlds__tupling__V_33_33;
#line 1352 "tupling.m"
            MR_Word transform_hlds__tupling__V_34_34;
#line 1352 "tupling.m"
            MR_Word transform_hlds__tupling__V_35_35;
#line 1352 "tupling.m"
            MR_Word transform_hlds__tupling__V_36_36;
#line 1352 "tupling.m"
            MR_Word transform_hlds__tupling__V_37_37;
#line 1354 "tupling.m"
            MR_Word transform_hlds__tupling__V_38_38;
#line 1354 "tupling.m"
            MR_Word transform_hlds__tupling__V_39_39;
#line 1354 "tupling.m"
            MR_Word transform_hlds__tupling__V_40_40;
#line 1354 "tupling.m"
            MR_Word transform_hlds__tupling__V_41_41;
#line 1354 "tupling.m"
            MR_Word transform_hlds__tupling__V_42_42;
#line 1354 "tupling.m"
            MR_Word transform_hlds__tupling__V_43_43;

#line 1342 "tupling.m"
            {
#line 1342 "tupling.m"
              hlds__hlds_llds__goal_info_get_resume_point_2_p_0(transform_hlds__tupling__GoalInfo_16, &transform_hlds__tupling__ResumePoint_17);
            }
#line 1346 "tupling.m"
            if ((transform_hlds__tupling__ResumePoint_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1347 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_CountState_27_27 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_3;
#line 1346 "tupling.m"
            else
#line 1344 "tupling.m"
              {
#line 1344 "tupling.m"
                MR_Word transform_hlds__tupling__LiveVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_17, (MR_Integer) 0)));
#line 1344 "tupling.m"
                MR_Word transform_hlds__tupling__TuplingProposal_49;
#line 1344 "tupling.m"
                MR_Word transform_hlds__tupling__TuningParams_50;
#line 1344 "tupling.m"
                MR_Word transform_hlds__tupling__V_51_51;
#line 1344 "tupling.m"
                MR_Word transform_hlds__tupling__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1344 "tupling.m"
                MR_Word transform_hlds__tupling___ResumeLocs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_17, (MR_Integer) 1)));
#line 867 "tupling.m"
                MR_Word transform_hlds__tupling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 867 "tupling.m"
                MR_Word transform_hlds__tupling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 867 "tupling.m"
                MR_Word transform_hlds__tupling__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 867 "tupling.m"
                MR_Word transform_hlds__tupling__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 867 "tupling.m"
                MR_Word transform_hlds__tupling__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 867 "tupling.m"
                MR_Word transform_hlds__tupling__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 860 "tupling.m"
                MR_Word transform_hlds__tupling__Probe_75;
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 858 "tupling.m"
                MR_Box transform_hlds__tupling__conv0_Probe_75;
#line 1483 "tupling.m"
                MR_Word transform_hlds__tupling__V_53_53;
#line 1483 "tupling.m"
                MR_Word transform_hlds__tupling__V_54_54;
#line 1483 "tupling.m"
                MR_Word transform_hlds__tupling__V_55_55;
#line 1483 "tupling.m"
                MR_Word transform_hlds__tupling__V_56_56;
#line 1483 "tupling.m"
                MR_Word transform_hlds__tupling__V_57_57;
#line 1483 "tupling.m"
                MR_Word transform_hlds__tupling__V_58_58;
#line 1484 "tupling.m"
                MR_Box transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_27_27;

#line 858 "tupling.m"
                {
#line 858 "tupling.m"
                  transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_76_76, ((MR_Box) (transform_hlds__tupling__V_65_65)), &transform_hlds__tupling__conv0_Probe_75);
                }
#line 858 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 858 "tupling.m"
                  {
#line 858 "tupling.m"
                    transform_hlds__tupling__Probe_75 = ((MR_Word) transform_hlds__tupling__conv0_Probe_75);
#line 858 "tupling.m"
                    transform_hlds__tupling__succeeded = MR_TRUE;
#line 858 "tupling.m"
                  }
#line 860 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 859 "tupling.m"
                  transform_hlds__tupling__TuplingProposal_49 = transform_hlds__tupling__Probe_75;
#line 860 "tupling.m"
                else
#line 861 "tupling.m"
                  transform_hlds__tupling__TuplingProposal_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1483 "tupling.m"
                transform_hlds__tupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1483 "tupling.m"
                transform_hlds__tupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1483 "tupling.m"
                transform_hlds__tupling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1483 "tupling.m"
                transform_hlds__tupling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1483 "tupling.m"
                transform_hlds__tupling__TuningParams_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 1483 "tupling.m"
                transform_hlds__tupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 1483 "tupling.m"
                transform_hlds__tupling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 1484 "tupling.m"
                {
#line 1484 "tupling.m"
                  transform_hlds__tupling__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1484 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[3]));
#line 1484 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_cases_4_p_0_1));
#line 1484 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1484 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 3) = ((MR_Box) (transform_hlds__tupling__TuplingProposal_49));
#line 1484 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_50));
#line 1484 "tupling.m"
                }
#line 1484 "tupling.m"
                {
#line 1484 "tupling.m"
                  parse_tree__set_of_var__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_51_51, transform_hlds__tupling__LiveVars_18, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_0_3)), &transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_27_27);
                }
#line 1484 "tupling.m"
                transform_hlds__tupling__STATE_VARIABLE_CountState_27_27 = ((MR_Word) transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_27_27);
#line 1344 "tupling.m"
              }
#line 1349 "tupling.m"
            {
#line 1349 "tupling.m"
              transform_hlds__tupling__reset_count_state_counts_2_p_0(transform_hlds__tupling__STATE_VARIABLE_CountState_27_27, &transform_hlds__tupling__BranchCountState0_20);
            }
#line 1350 "tupling.m"
            {
#line 1350 "tupling.m"
              transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Goal_15, transform_hlds__tupling__HeadVar__2_2, transform_hlds__tupling__BranchCountState0_20, &transform_hlds__tupling__BranchCountState_21);
            }
#line 1352 "tupling.m"
            transform_hlds__tupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1352 "tupling.m"
            transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1352 "tupling.m"
            transform_hlds__tupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1352 "tupling.m"
            transform_hlds__tupling__ProcCounts_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1352 "tupling.m"
            transform_hlds__tupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 1352 "tupling.m"
            transform_hlds__tupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 1352 "tupling.m"
            transform_hlds__tupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 1353 "tupling.m"
            {
#line 1353 "tupling.m"
              transform_hlds__tupling__GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__tupling__GoalInfo_16);
            }
#line 1354 "tupling.m"
            transform_hlds__tupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1354 "tupling.m"
            transform_hlds__tupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1354 "tupling.m"
            transform_hlds__tupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1354 "tupling.m"
            transform_hlds__tupling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1354 "tupling.m"
            transform_hlds__tupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 1354 "tupling.m"
            transform_hlds__tupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 1354 "tupling.m"
            transform_hlds__tupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 1354 "tupling.m"
            {
#line 1354 "tupling.m"
              transform_hlds__tupling__get_case_relative_frequency_4_p_0(transform_hlds__tupling__ProcCounts_22, transform_hlds__tupling__V_28_28, transform_hlds__tupling__GoalId_23, &transform_hlds__tupling__RelFreq_24);
            }
#line 1356 "tupling.m"
            {
#line 1356 "tupling.m"
              transform_hlds__tupling__add_branch_costs_4_p_0(transform_hlds__tupling__BranchCountState_21, transform_hlds__tupling__RelFreq_24, transform_hlds__tupling__STATE_VARIABLE_CountState_27_27, &transform_hlds__tupling__STATE_VARIABLE_CountState_29_29);
            }
#line 1357 "tupling.m"
            /* direct tailcall eliminated */
#line 1357 "tupling.m"
            {
#line 1357 "tupling.m"
              MR_Word transform_hlds__tupling__HeadVar__1__tmp_copy_1 = transform_hlds__tupling__Cases_10;
#line 1357 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_3 = transform_hlds__tupling__STATE_VARIABLE_CountState_29_29;

#line 1357 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_CountState_0_3 = transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_3;
#line 1357 "tupling.m"
              transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__HeadVar__1__tmp_copy_1;
#line 1357 "tupling.m"
            }
#line 1357 "tupling.m"
            continue;
#line 1339 "tupling.m"
          }
#line 1338 "tupling.m"
      }
#line 1338 "tupling.m"
      break;
#line 1338 "tupling.m"
    }
#line 1335 "tupling.m"
}

#line 1484 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_disj_4_p_0_1(
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1484 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1484 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1484 "tupling.m"
{
#line 1484 "tupling.m"
  {
#line 1484 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1484 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5;

#line 1484 "tupling.m"
    {
#line 1484 "tupling.m"
      transform_hlds__tupling__cls_require_flushed_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5);
    }
#line 1484 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_5));
#line 1484 "tupling.m"
  }
#line 1484 "tupling.m"
}

#line 1312 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_disj_4_p_0(
#line 1312 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1312 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1312 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_3,
#line 1312 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_4)
#line 1312 "tupling.m"
{
#line 1315 "tupling.m"
  while (MR_TRUE)
#line 1315 "tupling.m"
    {
#line 1315 "tupling.m"
      /* tailcall optimized into a loop */
#line 1315 "tupling.m"
      {
#line 1315 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;

#line 1315 "tupling.m"
        if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1315 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_CountState_4 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_3;
#line 1315 "tupling.m"
        else
#line 1316 "tupling.m"
          {
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_9, (MR_Integer) 1)));
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__ResumePoint_14;
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__BranchCountState0_17;
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__BranchCountState_18;
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__ProcCounts_19;
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__GoalId_20;
#line 1316 "tupling.m"
            MR_Float transform_hlds__tupling__RelFreq_21;
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_24_24;
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__V_25_25;
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_26_26;
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__V_89_89;
#line 1316 "tupling.m"
            MR_Word transform_hlds__tupling__V_90_90;
#line 1317 "tupling.m"
            MR_Word transform_hlds__tupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_9, (MR_Integer) 0)));
#line 1534 "tupling.m"
            MR_Float transform_hlds__tupling__V_91_91;
#line 1534 "tupling.m"
            MR_Float transform_hlds__tupling__V_92_92;
#line 1328 "tupling.m"
            MR_Word transform_hlds__tupling__V_29_29;
#line 1328 "tupling.m"
            MR_Word transform_hlds__tupling__V_30_30;
#line 1328 "tupling.m"
            MR_Word transform_hlds__tupling__V_31_31;
#line 1328 "tupling.m"
            MR_Word transform_hlds__tupling__V_32_32;
#line 1328 "tupling.m"
            MR_Word transform_hlds__tupling__V_33_33;
#line 1328 "tupling.m"
            MR_Word transform_hlds__tupling__V_34_34;
#line 1330 "tupling.m"
            MR_Word transform_hlds__tupling__V_35_35;
#line 1330 "tupling.m"
            MR_Word transform_hlds__tupling__V_36_36;
#line 1330 "tupling.m"
            MR_Word transform_hlds__tupling__V_37_37;
#line 1330 "tupling.m"
            MR_Word transform_hlds__tupling__V_38_38;
#line 1330 "tupling.m"
            MR_Word transform_hlds__tupling__V_39_39;
#line 1330 "tupling.m"
            MR_Word transform_hlds__tupling__V_40_40;

#line 1318 "tupling.m"
            {
#line 1318 "tupling.m"
              hlds__hlds_llds__goal_info_get_resume_point_2_p_0(transform_hlds__tupling__GoalInfo_13, &transform_hlds__tupling__ResumePoint_14);
            }
#line 1322 "tupling.m"
            if ((transform_hlds__tupling__ResumePoint_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_CountState_24_24 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_3;
#line 1322 "tupling.m"
            else
#line 1320 "tupling.m"
              {
#line 1320 "tupling.m"
                MR_Word transform_hlds__tupling__LiveVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_14, (MR_Integer) 0)));
#line 1320 "tupling.m"
                MR_Word transform_hlds__tupling__TuplingProposal_46;
#line 1320 "tupling.m"
                MR_Word transform_hlds__tupling__TuningParams_47;
#line 1320 "tupling.m"
                MR_Word transform_hlds__tupling__V_48_48;
#line 1320 "tupling.m"
                MR_Word transform_hlds__tupling__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1320 "tupling.m"
                MR_Word transform_hlds__tupling___ResumeLocs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_14, (MR_Integer) 1)));
#line 867 "tupling.m"
                MR_Word transform_hlds__tupling__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 867 "tupling.m"
                MR_Word transform_hlds__tupling__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 867 "tupling.m"
                MR_Word transform_hlds__tupling__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 867 "tupling.m"
                MR_Word transform_hlds__tupling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 867 "tupling.m"
                MR_Word transform_hlds__tupling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 867 "tupling.m"
                MR_Word transform_hlds__tupling__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 860 "tupling.m"
                MR_Word transform_hlds__tupling__Probe_72;
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 858 "tupling.m"
                MR_Word transform_hlds__tupling__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 858 "tupling.m"
                MR_Box transform_hlds__tupling__conv0_Probe_72;
#line 1483 "tupling.m"
                MR_Word transform_hlds__tupling__V_50_50;
#line 1483 "tupling.m"
                MR_Word transform_hlds__tupling__V_51_51;
#line 1483 "tupling.m"
                MR_Word transform_hlds__tupling__V_52_52;
#line 1483 "tupling.m"
                MR_Word transform_hlds__tupling__V_53_53;
#line 1483 "tupling.m"
                MR_Word transform_hlds__tupling__V_54_54;
#line 1483 "tupling.m"
                MR_Word transform_hlds__tupling__V_55_55;
#line 1484 "tupling.m"
                MR_Box transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_24_24;

#line 858 "tupling.m"
                {
#line 858 "tupling.m"
                  transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_73_73, ((MR_Box) (transform_hlds__tupling__V_62_62)), &transform_hlds__tupling__conv0_Probe_72);
                }
#line 858 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 858 "tupling.m"
                  {
#line 858 "tupling.m"
                    transform_hlds__tupling__Probe_72 = ((MR_Word) transform_hlds__tupling__conv0_Probe_72);
#line 858 "tupling.m"
                    transform_hlds__tupling__succeeded = MR_TRUE;
#line 858 "tupling.m"
                  }
#line 860 "tupling.m"
                if (transform_hlds__tupling__succeeded)
#line 859 "tupling.m"
                  transform_hlds__tupling__TuplingProposal_46 = transform_hlds__tupling__Probe_72;
#line 860 "tupling.m"
                else
#line 861 "tupling.m"
                  transform_hlds__tupling__TuplingProposal_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1483 "tupling.m"
                transform_hlds__tupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1483 "tupling.m"
                transform_hlds__tupling__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1483 "tupling.m"
                transform_hlds__tupling__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1483 "tupling.m"
                transform_hlds__tupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1483 "tupling.m"
                transform_hlds__tupling__TuningParams_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 1483 "tupling.m"
                transform_hlds__tupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 1483 "tupling.m"
                transform_hlds__tupling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 1484 "tupling.m"
                {
#line 1484 "tupling.m"
                  transform_hlds__tupling__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1484 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_48_48, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[3]));
#line 1484 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_48_48, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_disj_4_p_0_1));
#line 1484 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1484 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_48_48, 3) = ((MR_Box) (transform_hlds__tupling__TuplingProposal_46));
#line 1484 "tupling.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_48_48, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_47));
#line 1484 "tupling.m"
                }
#line 1484 "tupling.m"
                {
#line 1484 "tupling.m"
                  parse_tree__set_of_var__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_48_48, transform_hlds__tupling__LiveVars_15, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_0_3)), &transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_24_24);
                }
#line 1484 "tupling.m"
                transform_hlds__tupling__STATE_VARIABLE_CountState_24_24 = ((MR_Word) transform_hlds__tupling__conv2_STATE_VARIABLE_CountState_24_24);
#line 1320 "tupling.m"
              }
#line 1534 "tupling.m"
            transform_hlds__tupling__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_24_24, (MR_Integer) 0)));
#line 1534 "tupling.m"
            transform_hlds__tupling__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_24_24, (MR_Integer) 1)));
#line 1534 "tupling.m"
            transform_hlds__tupling__V_91_91 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_24_24, (MR_Integer) 2)));
#line 1534 "tupling.m"
            transform_hlds__tupling__V_92_92 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_24_24, (MR_Integer) 3)));
#line 1535 "tupling.m"
            {
#line 1535 "tupling.m"
              transform_hlds__tupling__BranchCountState0_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1535 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__BranchCountState0_17, 0) = ((MR_Box) (transform_hlds__tupling__V_89_89));
#line 1535 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__BranchCountState0_17, 1) = ((MR_Box) (transform_hlds__tupling__V_90_90));
#line 1535 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__BranchCountState0_17, 2) = MR_box_float((MR_Float) 0.0000000000000000);
#line 1535 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__BranchCountState0_17, 3) = MR_box_float((MR_Float) 0.0000000000000000);
#line 1535 "tupling.m"
            }
#line 1326 "tupling.m"
            {
#line 1326 "tupling.m"
              transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Goal_9, transform_hlds__tupling__HeadVar__2_2, transform_hlds__tupling__BranchCountState0_17, &transform_hlds__tupling__BranchCountState_18);
            }
#line 1328 "tupling.m"
            transform_hlds__tupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1328 "tupling.m"
            transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1328 "tupling.m"
            transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1328 "tupling.m"
            transform_hlds__tupling__ProcCounts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1328 "tupling.m"
            transform_hlds__tupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 1328 "tupling.m"
            transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 1328 "tupling.m"
            transform_hlds__tupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 1329 "tupling.m"
            {
#line 1329 "tupling.m"
              transform_hlds__tupling__GoalId_20 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__tupling__GoalInfo_13);
            }
#line 1330 "tupling.m"
            transform_hlds__tupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 1330 "tupling.m"
            transform_hlds__tupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1330 "tupling.m"
            transform_hlds__tupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));
#line 1330 "tupling.m"
            transform_hlds__tupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 3)));
#line 1330 "tupling.m"
            transform_hlds__tupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 4)));
#line 1330 "tupling.m"
            transform_hlds__tupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 5)));
#line 1330 "tupling.m"
            transform_hlds__tupling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 6)));
#line 1330 "tupling.m"
            {
#line 1330 "tupling.m"
              transform_hlds__tupling__get_disjunct_relative_frequency_4_p_0(transform_hlds__tupling__ProcCounts_19, transform_hlds__tupling__V_25_25, transform_hlds__tupling__GoalId_20, &transform_hlds__tupling__RelFreq_21);
            }
#line 1332 "tupling.m"
            {
#line 1332 "tupling.m"
              transform_hlds__tupling__add_branch_costs_4_p_0(transform_hlds__tupling__BranchCountState_18, transform_hlds__tupling__RelFreq_21, transform_hlds__tupling__STATE_VARIABLE_CountState_24_24, &transform_hlds__tupling__STATE_VARIABLE_CountState_26_26);
            }
#line 1333 "tupling.m"
            /* direct tailcall eliminated */
#line 1333 "tupling.m"
            {
#line 1333 "tupling.m"
              MR_Word transform_hlds__tupling__HeadVar__1__tmp_copy_1 = transform_hlds__tupling__Goals_10;
#line 1333 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_3 = transform_hlds__tupling__STATE_VARIABLE_CountState_26_26;

#line 1333 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_CountState_0_3 = transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_3;
#line 1333 "tupling.m"
              transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__HeadVar__1__tmp_copy_1;
#line 1333 "tupling.m"
            }
#line 1333 "tupling.m"
            continue;
#line 1316 "tupling.m"
          }
#line 1315 "tupling.m"
      }
#line 1315 "tupling.m"
      break;
#line 1315 "tupling.m"
    }
#line 1312 "tupling.m"
}

#line 1304 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_conj_4_p_0(
#line 1304 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__1_1,
#line 1304 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 1304 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_3,
#line 1304 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_4)
#line 1304 "tupling.m"
{
#line 1307 "tupling.m"
  while (MR_TRUE)
#line 1307 "tupling.m"
    {
#line 1307 "tupling.m"
      /* tailcall optimized into a loop */
#line 1307 "tupling.m"
      {
#line 1307 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;

#line 1307 "tupling.m"
        if ((transform_hlds__tupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1307 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_CountState_4 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_3;
#line 1307 "tupling.m"
        else
#line 1308 "tupling.m"
          {
#line 1308 "tupling.m"
            MR_Word transform_hlds__tupling__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 0)));
#line 1308 "tupling.m"
            MR_Word transform_hlds__tupling__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__1_1, (MR_Integer) 1)));
#line 1308 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_15_15;

#line 1309 "tupling.m"
            {
#line 1309 "tupling.m"
              transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Goal_9, transform_hlds__tupling__HeadVar__2_2, transform_hlds__tupling__STATE_VARIABLE_CountState_0_3, &transform_hlds__tupling__STATE_VARIABLE_CountState_15_15);
            }
#line 1310 "tupling.m"
            /* direct tailcall eliminated */
#line 1310 "tupling.m"
            {
#line 1310 "tupling.m"
              MR_Word transform_hlds__tupling__HeadVar__1__tmp_copy_1 = transform_hlds__tupling__Goals_10;
#line 1310 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_3 = transform_hlds__tupling__STATE_VARIABLE_CountState_15_15;

#line 1310 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_CountState_0_3 = transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_3;
#line 1310 "tupling.m"
              transform_hlds__tupling__HeadVar__1_1 = transform_hlds__tupling__HeadVar__1__tmp_copy_1;
#line 1310 "tupling.m"
            }
#line 1310 "tupling.m"
            continue;
#line 1308 "tupling.m"
          }
#line 1307 "tupling.m"
      }
#line 1307 "tupling.m"
      break;
#line 1307 "tupling.m"
    }
#line 1304 "tupling.m"
}

#line 1367 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0_1(
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1367 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1367 "tupling.m"
{
#line 1367 "tupling.m"
  {
#line 1367 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1367 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13;

#line 1367 "tupling.m"
    {
#line 1367 "tupling.m"
      transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13);
    }
#line 1367 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13));
#line 1367 "tupling.m"
  }
#line 1367 "tupling.m"
}

#line 1252 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0(
#line 1252 "tupling.m"
  MR_Word transform_hlds__tupling__GoalExpr_6,
#line 1252 "tupling.m"
  MR_Word transform_hlds__tupling__GoalInfo_7,
#line 1252 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_8,
#line 1252 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_27,
#line 1252 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_28)
#line 1252 "tupling.m"
{
#line 1258 "tupling.m"
  {
#line 1258 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1258 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_44_44;
#line 1258 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_6, (MR_Integer) 0)));
#line 1258 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_6, (MR_Integer) 1)));
#line 1258 "tupling.m"
    MR_Word transform_hlds__tupling__ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_6, (MR_Integer) 2)));
#line 1258 "tupling.m"
    MR_Word transform_hlds__tupling__Builtin_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_6, (MR_Integer) 3)));
#line 1258 "tupling.m"
    MR_Word transform_hlds__tupling__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 2)));
#line 1258 "tupling.m"
    MR_Word transform_hlds__tupling__CalleeProcInfo_18;
#line 1258 "tupling.m"
    MR_Word transform_hlds__tupling__ProcInfo_19;
#line 1258 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes_20;
#line 1258 "tupling.m"
    MR_Word transform_hlds__tupling__InputArgs_21;
#line 1258 "tupling.m"
    MR_Word transform_hlds__tupling__OutputArgs_22;
#line 1258 "tupling.m"
    MR_Word transform_hlds__tupling__Inputs_24;
#line 1258 "tupling.m"
    MR_Word transform_hlds__tupling__Outputs_25;
#line 1259 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_6, (MR_Integer) 4)));
#line 1259 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_6, (MR_Integer) 5)));
#line 1260 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 0)));
#line 1260 "tupling.m"
    MR_Word transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 1)));
#line 1260 "tupling.m"
    MR_Word transform_hlds__tupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 3)));
#line 1260 "tupling.m"
    MR_Word transform_hlds__tupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 4)));
#line 1260 "tupling.m"
    MR_Word transform_hlds__tupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 5)));
#line 1260 "tupling.m"
    MR_Word transform_hlds__tupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 6)));
#line 1261 "tupling.m"
    MR_Word transform_hlds__tupling___PredInfo_17;
#line 1263 "tupling.m"
    MR_Word transform_hlds__tupling__V_38_38;
#line 1263 "tupling.m"
    MR_Word transform_hlds__tupling__V_39_39;
#line 1263 "tupling.m"
    MR_Word transform_hlds__tupling__V_40_40;
#line 1263 "tupling.m"
    MR_Word transform_hlds__tupling__V_41_41;
#line 1263 "tupling.m"
    MR_Word transform_hlds__tupling__V_42_42;
#line 1263 "tupling.m"
    MR_Word transform_hlds__tupling__V_43_43;
#line 1265 "tupling.m"
    MR_Word transform_hlds__tupling__V_23_23;

#line 1261 "tupling.m"
    {
#line 1261 "tupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__ModuleInfo_16, transform_hlds__tupling__PredId_10, transform_hlds__tupling__ProcId_11, &transform_hlds__tupling___PredInfo_17, &transform_hlds__tupling__CalleeProcInfo_18);
    }
#line 1263 "tupling.m"
    transform_hlds__tupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 0)));
#line 1263 "tupling.m"
    transform_hlds__tupling__ProcInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 1)));
#line 1263 "tupling.m"
    transform_hlds__tupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 2)));
#line 1263 "tupling.m"
    transform_hlds__tupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 3)));
#line 1263 "tupling.m"
    transform_hlds__tupling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 4)));
#line 1263 "tupling.m"
    transform_hlds__tupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 5)));
#line 1263 "tupling.m"
    transform_hlds__tupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_8, (MR_Integer) 6)));
#line 1264 "tupling.m"
    {
#line 1264 "tupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__ProcInfo_19, &transform_hlds__tupling__VarTypes_20);
    }
#line 1265 "tupling.m"
    {
#line 1265 "tupling.m"
      hlds__arg_info__partition_proc_call_args_7_p_0(transform_hlds__tupling__CalleeProcInfo_18, transform_hlds__tupling__VarTypes_20, transform_hlds__tupling__ModuleInfo_16, transform_hlds__tupling__ArgVars_12, &transform_hlds__tupling__InputArgs_21, &transform_hlds__tupling__OutputArgs_22, &transform_hlds__tupling__V_23_23);
    }
#line 12808 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeInfo_44_44 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 1267 "tupling.m"
    {
#line 1267 "tupling.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__tupling__TypeInfo_44_44, transform_hlds__tupling__InputArgs_21, &transform_hlds__tupling__Inputs_24);
    }
#line 1268 "tupling.m"
    {
#line 1268 "tupling.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__tupling__TypeInfo_44_44, transform_hlds__tupling__OutputArgs_22, &transform_hlds__tupling__Outputs_25);
    }
#line 1273 "tupling.m"
    if ((transform_hlds__tupling__Builtin_13 == (MR_Integer) 0))
#line 1270 "tupling.m"
      {
#line 1270 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_30_30;
#line 1270 "tupling.m"
        MR_Word transform_hlds__tupling__V_50_50;
#line 1270 "tupling.m"
        MR_Word transform_hlds__tupling__RegVars0_61;
#line 1270 "tupling.m"
        MR_Word transform_hlds__tupling__RegVars_62;
#line 1367 "tupling.m"
        MR_Box transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_30_30;
#line 1435 "tupling.m"
        MR_Word transform_hlds__tupling__V_64_64;
#line 1435 "tupling.m"
        MR_Float transform_hlds__tupling__V_65_65;
#line 1435 "tupling.m"
        MR_Float transform_hlds__tupling__V_66_66;
#line 1437 "tupling.m"
        MR_Word transform_hlds__tupling__V_68_68;
#line 1437 "tupling.m"
        MR_Float transform_hlds__tupling__V_69_69;
#line 1437 "tupling.m"
        MR_Float transform_hlds__tupling__V_70_70;
#line 1437 "tupling.m"
        MR_Word transform_hlds__tupling__V_67_67;

#line 1367 "tupling.m"
        {
#line 1367 "tupling.m"
          transform_hlds__tupling__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[5]));
#line 1367 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0_1));
#line 1367 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1367 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 3) = ((MR_Box) (transform_hlds__tupling__CountInfo_8));
#line 1367 "tupling.m"
        }
#line 1367 "tupling.m"
        {
#line 1367 "tupling.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_50_50, transform_hlds__tupling__Inputs_24, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_CountState_0_27)), &transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_30_30);
        }
#line 1367 "tupling.m"
        transform_hlds__tupling__STATE_VARIABLE_CountState_30_30 = ((MR_Word) transform_hlds__tupling__conv1_STATE_VARIABLE_CountState_30_30);
#line 1435 "tupling.m"
        transform_hlds__tupling__RegVars0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 0)));
#line 1435 "tupling.m"
        transform_hlds__tupling__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 1)));
#line 1435 "tupling.m"
        transform_hlds__tupling__V_65_65 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 2)));
#line 1435 "tupling.m"
        transform_hlds__tupling__V_66_66 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 3)));
#line 1436 "tupling.m"
        {
#line 1436 "tupling.m"
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__tupling__Outputs_25, transform_hlds__tupling__RegVars0_61, &transform_hlds__tupling__RegVars_62);
        }
#line 1437 "tupling.m"
        transform_hlds__tupling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 0)));
#line 1437 "tupling.m"
        transform_hlds__tupling__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 1)));
#line 1437 "tupling.m"
        transform_hlds__tupling__V_69_69 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 2)));
#line 1437 "tupling.m"
        transform_hlds__tupling__V_70_70 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_30_30, (MR_Integer) 3)));
#line 1437 "tupling.m"
        {
#line 1437 "tupling.m"
          MR_Word base;
#line 1437 "tupling.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_CountState_28 = base;
#line 1437 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__RegVars_62));
#line 1437 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__V_68_68));
#line 1437 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__tupling__V_69_69);
#line 1437 "tupling.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(transform_hlds__tupling__V_70_70);
#line 1437 "tupling.m"
        }
#line 1270 "tupling.m"
      }
#line 1273 "tupling.m"
    else
#line 1276 "tupling.m"
      {
#line 1276 "tupling.m"
        MR_Word transform_hlds__tupling__MaybeNeedAcrossCall_26;

#line 1277 "tupling.m"
        {
#line 1277 "tupling.m"
          hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(transform_hlds__tupling__GoalInfo_7, &transform_hlds__tupling__MaybeNeedAcrossCall_26);
        }
#line 1278 "tupling.m"
        {
#line 1278 "tupling.m"
          transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(transform_hlds__tupling__CountInfo_8, transform_hlds__tupling__Inputs_24, transform_hlds__tupling__OutputArgs_22, transform_hlds__tupling__MaybeNeedAcrossCall_26, transform_hlds__tupling__STATE_VARIABLE_CountState_0_27, transform_hlds__tupling__STATE_VARIABLE_CountState_28);
#line 1278 "tupling.m"
          return;
        }
#line 1276 "tupling.m"
      }
#line 1258 "tupling.m"
  }
#line 1252 "tupling.m"
}

#line 1226 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_1(
#line 1226 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 1226 "tupling.m"
{
#line 1226 "tupling.m"
  {
#line 1226 "tupling.m"
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 1226 "tupling.m"
    MR_builtin_longjmp((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__commit_0, 1);
#line 1226 "tupling.m"
  }
#line 1226 "tupling.m"
}

#line 1227 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_3(
#line 1227 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 1227 "tupling.m"
{
#line 1227 "tupling.m"
  {
#line 1227 "tupling.m"
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 1227 "tupling.m"
    (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32 = ((MR_Word) (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__conv0_Var_32);
#line 1227 "tupling.m"
    {
#line 1227 "tupling.m"
      transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_2(transform_hlds__tupling__env_ptr);
#line 1227 "tupling.m"
      return;
    }
#line 1227 "tupling.m"
  }
#line 1227 "tupling.m"
}

#line 1226 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_2(
#line 1226 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 1226 "tupling.m"
{
#line 1226 "tupling.m"
  {
#line 1226 "tupling.m"
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 1226 "tupling.m"
    {
#line 1229 "tupling.m"
      MR_Word transform_hlds__tupling__TypeCtorInfo_81_81;
#line 1229 "tupling.m"
      MR_Integer transform_hlds__tupling__Pos_33;
#line 1229 "tupling.m"
      MR_Integer transform_hlds__tupling__V_84_84;
#line 1230 "tupling.m"
      MR_Box transform_hlds__tupling__conv1_Pos_33;

#line 1229 "tupling.m"
      {
#line 1229 "tupling.m"
        (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__set__member_2_p_0((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_80_80, ((MR_Box) ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32)), (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26);
      }
#line 1229 "tupling.m"
      if ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1229 "tupling.m"
        {
#line 13014 "transform_hlds.tupling.c"
          transform_hlds__tupling__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1230 "tupling.m"
          {
#line 1230 "tupling.m"
            (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__assoc_list__search_3_p_0((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_80_80, transform_hlds__tupling__TypeCtorInfo_81_81, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVarArgPos_20, ((MR_Box) ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32)), &transform_hlds__tupling__conv1_Pos_33);
          }
#line 1230 "tupling.m"
          if ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1230 "tupling.m"
            {
#line 1230 "tupling.m"
              transform_hlds__tupling__Pos_33 = ((MR_Integer) transform_hlds__tupling__conv1_Pos_33);
#line 1230 "tupling.m"
              (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_TRUE;
#line 1230 "tupling.m"
            }
#line 1229 "tupling.m"
          if ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1229 "tupling.m"
            {
#line 1231 "tupling.m"
              {
#line 1231 "tupling.m"
                (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = mercury__list__nth_member_search_3_p_0((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_80_80, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14, ((MR_Box) ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__Var_32)), &transform_hlds__tupling__V_84_84);
              }
#line 1229 "tupling.m"
              if ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1231 "tupling.m"
                (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = (transform_hlds__tupling__Pos_33 == transform_hlds__tupling__V_84_84);
#line 1229 "tupling.m"
            }
#line 1229 "tupling.m"
        }
#line 1228 "tupling.m"
      (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = !((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded);
#line 1228 "tupling.m"
      if ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1228 "tupling.m"
        {
#line 1228 "tupling.m"
          transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_1(transform_hlds__tupling__env_ptr);
#line 1228 "tupling.m"
          return;
        }
#line 1226 "tupling.m"
    }
#line 1226 "tupling.m"
  }
#line 1226 "tupling.m"
}

#line 1226 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_4(
#line 1226 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 1226 "tupling.m"
{
#line 1226 "tupling.m"
  {
#line 1226 "tupling.m"
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 1226 "tupling.m"
    if (MR_builtin_setjmp((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__commit_0) == 0)
#line 1226 "tupling.m"
      {
#line 13082 "transform_hlds.tupling.c"
        (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_80_80 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 1227 "tupling.m"
        {
#line 1227 "tupling.m"
          mercury__list__member_2_p_1((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__TypeInfo_80_80, &(transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__conv0_Var_32, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19, transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_3, transform_hlds__tupling__env_ptr);
        }
#line 1226 "tupling.m"
        (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_FALSE;
#line 1226 "tupling.m"
      }
#line 1226 "tupling.m"
    else
#line 1226 "tupling.m"
      (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = MR_TRUE;
#line 1226 "tupling.m"
  }
#line 1226 "tupling.m"
}

#line 1199 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0(
#line 1199 "tupling.m"
  MR_Word transform_hlds__tupling__GoalExpr_7,
#line 1199 "tupling.m"
  MR_Word transform_hlds__tupling__GoalInfo_8,
#line 1199 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_9,
#line 1199 "tupling.m"
  MR_Word transform_hlds__tupling__CalleeTuplingProposal_10,
#line 1199 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_39,
#line 1199 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_40)
#line 1199 "tupling.m"
{
#line 1199 "tupling.m"
  {
#line 1199 "tupling.m"
    struct transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0_s transform_hlds__tupling__env;

#line 1206 "tupling.m"
    {
#line 1206 "tupling.m"
      MR_Word transform_hlds__tupling__CalleePredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_7, (MR_Integer) 0)));
#line 1206 "tupling.m"
      MR_Integer transform_hlds__tupling__CalleeProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_7, (MR_Integer) 1)));
#line 1206 "tupling.m"
      MR_Word transform_hlds__tupling__CellVar_18;
#line 1206 "tupling.m"
      MR_Word transform_hlds__tupling__ModuleInfo_21;
#line 1206 "tupling.m"
      MR_Word transform_hlds__tupling__CalleeProcInfo_23;
#line 1206 "tupling.m"
      MR_Word transform_hlds__tupling__CallingProcInfo_24;
#line 1206 "tupling.m"
      MR_Word transform_hlds__tupling__VarTypes_25;
#line 1206 "tupling.m"
      MR_Word transform_hlds__tupling__Outputs_27;
#line 1206 "tupling.m"
      MR_Word transform_hlds__tupling__InputArgs_34;
#line 1206 "tupling.m"
      MR_Word transform_hlds__tupling__Inputs_37;
#line 1206 "tupling.m"
      MR_Word transform_hlds__tupling__MaybeNeedAcrossCall_38;
#line 1206 "tupling.m"
      MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_42_42;
#line 1207 "tupling.m"
      MR_Word transform_hlds__tupling__V_15_15;
#line 1207 "tupling.m"
      MR_Word transform_hlds__tupling__V_16_16;
#line 1207 "tupling.m"
      MR_Word transform_hlds__tupling__V_17_17;
#line 1209 "tupling.m"
      MR_Word transform_hlds__tupling__V_48_48;
#line 1209 "tupling.m"
      MR_Word transform_hlds__tupling__V_49_49;
#line 1209 "tupling.m"
      MR_Word transform_hlds__tupling__V_50_50;
#line 1209 "tupling.m"
      MR_Word transform_hlds__tupling__V_51_51;
#line 1209 "tupling.m"
      MR_Word transform_hlds__tupling__V_52_52;
#line 1209 "tupling.m"
      MR_Word transform_hlds__tupling__V_53_53;
#line 1210 "tupling.m"
      MR_Word transform_hlds__tupling__V_22_22;
#line 1212 "tupling.m"
      MR_Word transform_hlds__tupling__V_54_54;
#line 1212 "tupling.m"
      MR_Word transform_hlds__tupling__V_55_55;
#line 1212 "tupling.m"
      MR_Word transform_hlds__tupling__V_56_56;
#line 1212 "tupling.m"
      MR_Word transform_hlds__tupling__V_57_57;
#line 1212 "tupling.m"
      MR_Word transform_hlds__tupling__V_58_58;
#line 1212 "tupling.m"
      MR_Word transform_hlds__tupling__V_59_59;
#line 1214 "tupling.m"
      MR_Word transform_hlds__tupling__V_28_28;
#line 1225 "tupling.m"
      MR_Word transform_hlds__tupling__V_41_41;
#line 1225 "tupling.m"
      MR_Word transform_hlds__tupling__V_29_29;
#line 1225 "tupling.m"
      MR_Word transform_hlds__tupling__V_30_30;
#line 1225 "tupling.m"
      MR_Word transform_hlds__tupling__V_31_31;

#line 1207 "tupling.m"
      (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_7, (MR_Integer) 2)));
#line 1207 "tupling.m"
      transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_7, (MR_Integer) 3)));
#line 1207 "tupling.m"
      transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_7, (MR_Integer) 4)));
#line 1207 "tupling.m"
      transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_7, (MR_Integer) 5)));
#line 1208 "tupling.m"
      transform_hlds__tupling__CellVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__CalleeTuplingProposal_10, (MR_Integer) 0)));
#line 1208 "tupling.m"
      (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__CalleeTuplingProposal_10, (MR_Integer) 1)));
#line 1208 "tupling.m"
      (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVarArgPos_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__CalleeTuplingProposal_10, (MR_Integer) 2)));
#line 1209 "tupling.m"
      transform_hlds__tupling__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 0)));
#line 1209 "tupling.m"
      transform_hlds__tupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 1)));
#line 1209 "tupling.m"
      transform_hlds__tupling__ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 2)));
#line 1209 "tupling.m"
      transform_hlds__tupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 3)));
#line 1209 "tupling.m"
      transform_hlds__tupling__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 4)));
#line 1209 "tupling.m"
      transform_hlds__tupling__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 5)));
#line 1209 "tupling.m"
      transform_hlds__tupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 6)));
#line 1210 "tupling.m"
      {
#line 1210 "tupling.m"
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__ModuleInfo_21, transform_hlds__tupling__CalleePredId_12, transform_hlds__tupling__CalleeProcId_13, &transform_hlds__tupling__V_22_22, &transform_hlds__tupling__CalleeProcInfo_23);
      }
#line 1212 "tupling.m"
      transform_hlds__tupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 0)));
#line 1212 "tupling.m"
      transform_hlds__tupling__CallingProcInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 1)));
#line 1212 "tupling.m"
      transform_hlds__tupling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 2)));
#line 1212 "tupling.m"
      transform_hlds__tupling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 3)));
#line 1212 "tupling.m"
      transform_hlds__tupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 4)));
#line 1212 "tupling.m"
      transform_hlds__tupling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 5)));
#line 1212 "tupling.m"
      transform_hlds__tupling__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 6)));
#line 1213 "tupling.m"
      {
#line 1213 "tupling.m"
        hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__CallingProcInfo_24, &transform_hlds__tupling__VarTypes_25);
      }
#line 1214 "tupling.m"
      {
#line 1214 "tupling.m"
        hlds__arg_info__partition_proc_call_args_7_p_0(transform_hlds__tupling__CalleeProcInfo_23, transform_hlds__tupling__VarTypes_25, transform_hlds__tupling__ModuleInfo_21, (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__ArgVars_14, &(transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26, &transform_hlds__tupling__Outputs_27, &transform_hlds__tupling__V_28_28);
      }
#line 1225 "tupling.m"
      {
#line 1225 "tupling.m"
        transform_hlds__tupling__V_41_41 = transform_hlds__tupling__get_own_tupling_proposal_1_f_0(transform_hlds__tupling__CountInfo_9);
      }
#line 1225 "tupling.m"
      (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 1225 "tupling.m"
      if ((transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1225 "tupling.m"
        {
#line 1225 "tupling.m"
          transform_hlds__tupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_41_41, (MR_Integer) 0)));
#line 1225 "tupling.m"
          transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_41_41, (MR_Integer) 1)));
#line 1225 "tupling.m"
          transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_41_41, (MR_Integer) 2)));
#line 1226 "tupling.m"
          {
#line 1226 "tupling.m"
            transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_4(&transform_hlds__tupling__env);
          }
#line 1226 "tupling.m"
          (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded = !((transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded);
#line 1225 "tupling.m"
        }
#line 1238 "tupling.m"
      if ((transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__succeeded)
#line 1236 "tupling.m"
        {
#line 1236 "tupling.m"
          {
#line 1236 "tupling.m"
            transform_hlds__tupling__cls_require_normal_var_in_reg_4_p_0(transform_hlds__tupling__CountInfo_9, transform_hlds__tupling__CellVar_18, transform_hlds__tupling__STATE_VARIABLE_CountState_0_39, &transform_hlds__tupling__STATE_VARIABLE_CountState_42_42);
          }
#line 1237 "tupling.m"
          {
#line 1237 "tupling.m"
            mercury__set__delete_list_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__FieldVars_19, (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26, &transform_hlds__tupling__InputArgs_34);
          }
#line 1236 "tupling.m"
        }
#line 1238 "tupling.m"
      else
#line 1241 "tupling.m"
        {
#line 1241 "tupling.m"
          MR_Word transform_hlds__tupling__TuplingParams_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 4)));
#line 1241 "tupling.m"
          MR_Float transform_hlds__tupling__CellVarStoreCost_36;
#line 1241 "tupling.m"
          MR_Integer transform_hlds__tupling__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 3)));
#line 1241 "tupling.m"
          MR_Float transform_hlds__tupling__V_45_45;
#line 1241 "tupling.m"
          MR_Float transform_hlds__tupling__V_46_46;
#line 1241 "tupling.m"
          MR_Word transform_hlds__tupling__V_73_73;
#line 1241 "tupling.m"
          MR_Word transform_hlds__tupling__V_74_74;
#line 1241 "tupling.m"
          MR_Float transform_hlds__tupling__V_75_75;
#line 1241 "tupling.m"
          MR_Word transform_hlds__tupling__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 0)));
#line 1241 "tupling.m"
          MR_Word transform_hlds__tupling__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 1)));
#line 1241 "tupling.m"
          MR_Word transform_hlds__tupling__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 2)));
#line 1241 "tupling.m"
          MR_Word transform_hlds__tupling__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 3)));
#line 1241 "tupling.m"
          MR_Word transform_hlds__tupling__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 5)));
#line 1241 "tupling.m"
          MR_Word transform_hlds__tupling__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_9, (MR_Integer) 6)));
#line 1242 "tupling.m"
          MR_Integer transform_hlds__tupling__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 0)));
#line 1242 "tupling.m"
          MR_Integer transform_hlds__tupling__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 1)));
#line 1242 "tupling.m"
          MR_Integer transform_hlds__tupling__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 2)));
#line 1242 "tupling.m"
          MR_Integer transform_hlds__tupling__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 4)));
#line 1242 "tupling.m"
          MR_Integer transform_hlds__tupling__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 5)));
#line 1242 "tupling.m"
          MR_Integer transform_hlds__tupling__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 6)));
#line 1242 "tupling.m"
          MR_Integer transform_hlds__tupling__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuplingParams_35, (MR_Integer) 7)));

#line 1242 "tupling.m"
          {
#line 1242 "tupling.m"
            transform_hlds__tupling__CellVarStoreCost_36 = mercury__float__float_1_f_0(transform_hlds__tupling__V_43_43);
          }
#line 1244 "tupling.m"
          transform_hlds__tupling__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_39, (MR_Integer) 0)));
#line 1244 "tupling.m"
          transform_hlds__tupling__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_39, (MR_Integer) 1)));
#line 1244 "tupling.m"
          transform_hlds__tupling__V_75_75 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_39, (MR_Integer) 2)));
#line 1244 "tupling.m"
          transform_hlds__tupling__V_46_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_0_39, (MR_Integer) 3)));
#line 1244 "tupling.m"
          transform_hlds__tupling__V_45_45 = (transform_hlds__tupling__V_46_46 + transform_hlds__tupling__CellVarStoreCost_36);
#line 1243 "tupling.m"
          {
#line 1243 "tupling.m"
            transform_hlds__tupling__STATE_VARIABLE_CountState_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1243 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_42_42, 0) = ((MR_Box) (transform_hlds__tupling__V_73_73));
#line 1243 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_42_42, 1) = ((MR_Box) (transform_hlds__tupling__V_74_74));
#line 1243 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_42_42, 2) = MR_box_float(transform_hlds__tupling__V_75_75);
#line 1243 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__STATE_VARIABLE_CountState_42_42, 3) = MR_box_float(transform_hlds__tupling__V_45_45);
#line 1243 "tupling.m"
          }
#line 1245 "tupling.m"
          transform_hlds__tupling__InputArgs_34 = (transform_hlds__tupling__env).transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0_env_0__InputArgs0_26;
#line 1241 "tupling.m"
        }
#line 1247 "tupling.m"
      {
#line 1247 "tupling.m"
        mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__InputArgs_34, &transform_hlds__tupling__Inputs_37);
      }
#line 1248 "tupling.m"
      {
#line 1248 "tupling.m"
        hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(transform_hlds__tupling__GoalInfo_8, &transform_hlds__tupling__MaybeNeedAcrossCall_38);
      }
#line 1249 "tupling.m"
      {
#line 1249 "tupling.m"
        transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(transform_hlds__tupling__CountInfo_9, transform_hlds__tupling__Inputs_37, transform_hlds__tupling__Outputs_27, transform_hlds__tupling__MaybeNeedAcrossCall_38, transform_hlds__tupling__STATE_VARIABLE_CountState_42_42, transform_hlds__tupling__STATE_VARIABLE_CountState_40);
#line 1249 "tupling.m"
        return;
      }
#line 1206 "tupling.m"
    }
#line 1199 "tupling.m"
  }
#line 1199 "tupling.m"
}

#line 1112 "tupling.m"
static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_2(
#line 1112 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1112 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1)
#line 1112 "tupling.m"
{
#line 1112 "tupling.m"
  {
#line 1112 "tupling.m"
    MR_Box transform_hlds__tupling__wrapper_arg_2;
#line 1112 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1112 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_HeadVar__2_2;

#line 1112 "tupling.m"
    {
#line 1112 "tupling.m"
      transform_hlds__tupling__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1));
    }
#line 1112 "tupling.m"
    transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv1_HeadVar__2_2));
#line 1112 "tupling.m"
    return transform_hlds__tupling__wrapper_arg_2;
#line 1112 "tupling.m"
  }
#line 1112 "tupling.m"
}

#line 1111 "tupling.m"
static MR_Box MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0_1(
#line 1111 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1111 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1)
#line 1111 "tupling.m"
{
#line 1111 "tupling.m"
  {
#line 1111 "tupling.m"
    MR_Box transform_hlds__tupling__wrapper_arg_2;
#line 1111 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1111 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_HeadVar__2_2;

#line 1111 "tupling.m"
    {
#line 1111 "tupling.m"
      transform_hlds__tupling__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1));
    }
#line 1111 "tupling.m"
    transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__2_2));
#line 1111 "tupling.m"
    return transform_hlds__tupling__wrapper_arg_2;
#line 1111 "tupling.m"
  }
#line 1111 "tupling.m"
}

#line 1027 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_goal_4_p_0(
#line 1027 "tupling.m"
  MR_Word transform_hlds__tupling__Goal_5,
#line 1027 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_6,
#line 1027 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0_113,
#line 1027 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_CountState_114)
#line 1027 "tupling.m"
{
#line 1030 "tupling.m"
  while (MR_TRUE)
#line 1030 "tupling.m"
    {
#line 1030 "tupling.m"
      /* tailcall optimized into a loop */
#line 1030 "tupling.m"
      {
#line 1030 "tupling.m"
        MR_bool transform_hlds__tupling__succeeded;
#line 1030 "tupling.m"
        MR_Word transform_hlds__tupling__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_5, (MR_Integer) 0)));
#line 1030 "tupling.m"
        MR_Word transform_hlds__tupling__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_5, (MR_Integer) 1)));

#line 1055 "tupling.m"
        if (((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr_8)) == (MR_mktag((MR_Integer) 0))))
#line 1154 "tupling.m"
          {
#line 1154 "tupling.m"
            MR_Word transform_hlds__tupling__ResumePoint_97;
#line 1154 "tupling.m"
            MR_Word transform_hlds__tupling__V_129_129;
#line 1154 "tupling.m"
            MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_133_133;
#line 1154 "tupling.m"
            MR_Word transform_hlds__tupling__SubGoal_188 = (MR_Word) MR_body(((MR_Word) transform_hlds__tupling__GoalExpr_8), (MR_Integer) 0);
#line 1155 "tupling.m"
            MR_Word transform_hlds__tupling__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__SubGoal_188, (MR_Integer) 0)));

#line 1155 "tupling.m"
            transform_hlds__tupling__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__SubGoal_188, (MR_Integer) 1)));
#line 1155 "tupling.m"
            {
#line 1155 "tupling.m"
              hlds__hlds_llds__goal_info_get_resume_point_2_p_0(transform_hlds__tupling__V_129_129, &transform_hlds__tupling__ResumePoint_97);
            }
#line 1159 "tupling.m"
            if ((transform_hlds__tupling__ResumePoint_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1160 "tupling.m"
              {
#line 1161 "tupling.m"
                {
#line 1161 "tupling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "no_resume_point for not");
#line 1161 "tupling.m"
                  return;
                }
#line 1160 "tupling.m"
              }
#line 1159 "tupling.m"
            else
#line 1157 "tupling.m"
              {
#line 1157 "tupling.m"
                MR_Word transform_hlds__tupling__LiveVars_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_97, (MR_Integer) 0)));
#line 1157 "tupling.m"
                MR_Word transform_hlds__tupling___ResumeLocs_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_97, (MR_Integer) 1)));

#line 1158 "tupling.m"
                {
#line 1158 "tupling.m"
                  transform_hlds__tupling__cls_require_flushed_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__LiveVars_98, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, &transform_hlds__tupling__STATE_VARIABLE_CountState_133_133);
                }
#line 1157 "tupling.m"
              }
#line 1163 "tupling.m"
            /* direct tailcall eliminated */
#line 1163 "tupling.m"
            {
#line 1163 "tupling.m"
              MR_Word transform_hlds__tupling__Goal__tmp_copy_5 = transform_hlds__tupling__SubGoal_188;
#line 1163 "tupling.m"
              MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_113 = transform_hlds__tupling__STATE_VARIABLE_CountState_133_133;

#line 1163 "tupling.m"
              transform_hlds__tupling__STATE_VARIABLE_CountState_0_113 = transform_hlds__tupling__STATE_VARIABLE_CountState_0__tmp_copy_113;
#line 1163 "tupling.m"
              transform_hlds__tupling__Goal_5 = transform_hlds__tupling__Goal__tmp_copy_5;
#line 1163 "tupling.m"
            }
#line 1163 "tupling.m"
            continue;
#line 1154 "tupling.m"
          }
#line 1055 "tupling.m"
        else
#line 1055 "tupling.m"
          if (((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr_8)) == (MR_mktag((MR_Integer) 2))))
#line 1056 "tupling.m"
            {
#line 1056 "tupling.m"
              MR_Word transform_hlds__tupling__PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 0)));
#line 1056 "tupling.m"
              MR_Integer transform_hlds__tupling__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1056 "tupling.m"
              MR_Word transform_hlds__tupling__Builtin_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 3)));
#line 1056 "tupling.m"
              MR_Word transform_hlds__tupling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));
#line 1056 "tupling.m"
              MR_Word transform_hlds__tupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 4)));
#line 1056 "tupling.m"
              MR_Word transform_hlds__tupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 5)));
#line 1065 "tupling.m"
              MR_Word transform_hlds__tupling__TuplingProposal_37;
#line 1058 "tupling.m"
              MR_Word transform_hlds__tupling__V_153_153;
#line 1061 "tupling.m"
              MR_Word transform_hlds__tupling__V_38_38;
#line 1061 "tupling.m"
              MR_Word transform_hlds__tupling__V_39_39;
#line 1061 "tupling.m"
              MR_Word transform_hlds__tupling__V_40_40;

#line 1058 "tupling.m"
              transform_hlds__tupling__succeeded = (transform_hlds__tupling__Builtin_34 == (MR_Integer) 2);
#line 1058 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1058 "tupling.m"
                {
#line 1060 "tupling.m"
                  {
#line 1060 "tupling.m"
                    transform_hlds__tupling__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "tupling.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_153_153, 0) = ((MR_Box) (transform_hlds__tupling__PredId_31));
#line 1060 "tupling.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_153_153, 1) = ((MR_Box) (transform_hlds__tupling__ProcId_32));
#line 1060 "tupling.m"
                  }
#line 1059 "tupling.m"
                  {
#line 1059 "tupling.m"
                    transform_hlds__tupling__TuplingProposal_37 = transform_hlds__tupling__get_tupling_proposal_2_f_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__V_153_153);
                  }
#line 1061 "tupling.m"
                  transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__TuplingProposal_37)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "tupling.m"
                  if (transform_hlds__tupling__succeeded)
#line 1061 "tupling.m"
                    {
#line 1061 "tupling.m"
                      transform_hlds__tupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_37, (MR_Integer) 0)));
#line 1061 "tupling.m"
                      transform_hlds__tupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_37, (MR_Integer) 1)));
#line 1061 "tupling.m"
                      transform_hlds__tupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__TuplingProposal_37, (MR_Integer) 2)));
#line 1061 "tupling.m"
                    }
#line 1058 "tupling.m"
                }
#line 1065 "tupling.m"
              if (transform_hlds__tupling__succeeded)
#line 1063 "tupling.m"
                {
#line 1063 "tupling.m"
                  transform_hlds__tupling__count_load_stores_in_call_to_tupled_6_p_0(transform_hlds__tupling__GoalExpr_8, transform_hlds__tupling__GoalInfo_9, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__TuplingProposal_37, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1063 "tupling.m"
                  return;
                }
#line 1065 "tupling.m"
              else
#line 1066 "tupling.m"
                {
#line 1066 "tupling.m"
                  transform_hlds__tupling__count_load_stores_in_call_to_not_tupled_5_p_0(transform_hlds__tupling__GoalExpr_8, transform_hlds__tupling__GoalInfo_9, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1066 "tupling.m"
                  return;
                }
#line 1056 "tupling.m"
            }
#line 1055 "tupling.m"
          else
#line 1055 "tupling.m"
            if (((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr_8)) == (MR_mktag((MR_Integer) 1))))
#line 1033 "tupling.m"
              {
#line 1033 "tupling.m"
                MR_Word transform_hlds__tupling__Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 3)));
#line 1033 "tupling.m"
                MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 0)));
#line 1033 "tupling.m"
                MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1033 "tupling.m"
                MR_Word transform_hlds__tupling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));
#line 1033 "tupling.m"
                MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 4)));

#line 1039 "tupling.m"
                if (((MR_tag((MR_Word) transform_hlds__tupling__Unification_13)) == (MR_mktag((MR_Integer) 2))))
#line 1045 "tupling.m"
                  {
#line 1045 "tupling.m"
                    MR_Word transform_hlds__tupling__ToVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__Unification_13, (MR_Integer) 0)));
#line 1045 "tupling.m"
                    MR_Word transform_hlds__tupling__FromVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__tupling__Unification_13, (MR_Integer) 1)));
#line 1045 "tupling.m"
                    MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_163_163;
#line 1045 "tupling.m"
                    MR_Word transform_hlds__tupling__V_164_164;

#line 1046 "tupling.m"
                    {
#line 1046 "tupling.m"
                      transform_hlds__tupling__cls_require_in_reg_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__FromVar_25, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, &transform_hlds__tupling__STATE_VARIABLE_CountState_163_163);
                    }
#line 1047 "tupling.m"
                    {
#line 1047 "tupling.m"
                      transform_hlds__tupling__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "tupling.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_164_164, 0) = ((MR_Box) (transform_hlds__tupling__ToVar_24));
#line 1047 "tupling.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1047 "tupling.m"
                    }
#line 1047 "tupling.m"
                    {
#line 1047 "tupling.m"
                      transform_hlds__tupling__cls_put_in_regs_3_p_0(transform_hlds__tupling__V_164_164, transform_hlds__tupling__STATE_VARIABLE_CountState_163_163, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1047 "tupling.m"
                      return;
                    }
#line 1045 "tupling.m"
                  }
#line 1039 "tupling.m"
                else
#line 1039 "tupling.m"
                  if (((MR_tag((MR_Word) transform_hlds__tupling__Unification_13)) == (MR_mktag((MR_Integer) 0))))
#line 1036 "tupling.m"
                    {
#line 1036 "tupling.m"
                      MR_Word transform_hlds__tupling__CellVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 0)));
#line 1036 "tupling.m"
                      MR_Word transform_hlds__tupling__ArgVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 2)));
#line 1036 "tupling.m"
                      MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_168_168;
#line 1036 "tupling.m"
                      MR_Word transform_hlds__tupling__V_169_169;
#line 1035 "tupling.m"
                      MR_Word transform_hlds__tupling___ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 1)));
#line 1035 "tupling.m"
                      MR_Word transform_hlds__tupling___ArgModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 3)));
#line 1035 "tupling.m"
                      MR_Word transform_hlds__tupling___HowToConstruct_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 4)));
#line 1035 "tupling.m"
                      MR_Word transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 5)));
#line 1035 "tupling.m"
                      MR_Word transform_hlds__tupling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Unification_13, (MR_Integer) 6)));

#line 1037 "tupling.m"
                      {
#line 1037 "tupling.m"
                        transform_hlds__tupling__cls_require_in_regs_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__ArgVars_17, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, &transform_hlds__tupling__STATE_VARIABLE_CountState_168_168);
                      }
#line 1038 "tupling.m"
                      {
#line 1038 "tupling.m"
                        transform_hlds__tupling__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "tupling.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_169_169, 0) = ((MR_Box) (transform_hlds__tupling__CellVar_15));
#line 1038 "tupling.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_169_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "tupling.m"
                      }
#line 1038 "tupling.m"
                      {
#line 1038 "tupling.m"
                        transform_hlds__tupling__cls_put_in_regs_3_p_0(transform_hlds__tupling__V_169_169, transform_hlds__tupling__STATE_VARIABLE_CountState_168_168, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1038 "tupling.m"
                        return;
                      }
#line 1036 "tupling.m"
                    }
#line 1039 "tupling.m"
                  else
#line 1039 "tupling.m"
                    if (((MR_tag((MR_Word) transform_hlds__tupling__Unification_13)) == (MR_mktag((MR_Integer) 1))))
#line 1041 "tupling.m"
                      {
#line 1041 "tupling.m"
                        MR_Word transform_hlds__tupling__CellVar_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Unification_13, (MR_Integer) 0)));
#line 1041 "tupling.m"
                        MR_Word transform_hlds__tupling__ArgVars_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Unification_13, (MR_Integer) 2)));
#line 1040 "tupling.m"
                        MR_Word transform_hlds__tupling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Unification_13, (MR_Integer) 4)));
#line 1040 "tupling.m"
                        MR_Word transform_hlds__tupling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Unification_13, (MR_Integer) 5)));
#line 1040 "tupling.m"
                        MR_Word transform_hlds__tupling___ConsId_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Unification_13, (MR_Integer) 1)));
#line 1040 "tupling.m"
                        MR_Word transform_hlds__tupling___ArgModes_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Unification_13, (MR_Integer) 3)));

#line 1042 "tupling.m"
                        {
#line 1042 "tupling.m"
                          transform_hlds__tupling__cls_put_in_regs_via_deconstruct_5_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__CellVar_174, transform_hlds__tupling__ArgVars_176, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1042 "tupling.m"
                          return;
                        }
#line 1041 "tupling.m"
                      }
#line 1039 "tupling.m"
                    else
#line 1039 "tupling.m"
                      if (((((MR_tag((MR_Word) transform_hlds__tupling__Unification_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Unification_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1052 "tupling.m"
                        {
#line 1053 "tupling.m"
                          {
#line 1053 "tupling.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "complicated_unify");
#line 1053 "tupling.m"
                            return;
                          }
#line 1052 "tupling.m"
                        }
#line 1039 "tupling.m"
                      else
#line 1049 "tupling.m"
                        {
#line 1049 "tupling.m"
                          MR_Word transform_hlds__tupling__Var1_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Unification_13, (MR_Integer) 1)));
#line 1049 "tupling.m"
                          MR_Word transform_hlds__tupling__Var2_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Unification_13, (MR_Integer) 2)));
#line 1049 "tupling.m"
                          MR_Word transform_hlds__tupling__V_159_159;
#line 1049 "tupling.m"
                          MR_Word transform_hlds__tupling__V_161_161;

#line 1050 "tupling.m"
                          {
#line 1050 "tupling.m"
                            transform_hlds__tupling__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "tupling.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_161_161, 0) = ((MR_Box) (transform_hlds__tupling__Var2_27));
#line 1050 "tupling.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1050 "tupling.m"
                          }
#line 1050 "tupling.m"
                          {
#line 1050 "tupling.m"
                            transform_hlds__tupling__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "tupling.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_159_159, 0) = ((MR_Box) (transform_hlds__tupling__Var1_26));
#line 1050 "tupling.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_159_159, 1) = ((MR_Box) (transform_hlds__tupling__V_161_161));
#line 1050 "tupling.m"
                          }
#line 1050 "tupling.m"
                          {
#line 1050 "tupling.m"
                            transform_hlds__tupling__cls_require_in_regs_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__V_159_159, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1050 "tupling.m"
                            return;
                          }
#line 1049 "tupling.m"
                        }
#line 1033 "tupling.m"
              }
#line 1055 "tupling.m"
            else
#line 1055 "tupling.m"
              if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1107 "tupling.m"
                {
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__TypeCtorInfo_239_239;
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__TypeInfo_240_240;
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__Args_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 4)));
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__ExtraArgs_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 5)));
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__ExtraVars_81;
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__CallingProcInfo_82;
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__InputArgVarSet_83;
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__OutputArgVarSet_84;
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__InputArgVars_86;
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__InputVars_87;
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__ArgVars_180;
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__PredId_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));
#line 1107 "tupling.m"
                  MR_Integer transform_hlds__tupling__ProcId_182 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 3)));
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__ProcInfo_183;
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__ModuleInfo_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 1107 "tupling.m"
                  MR_Word transform_hlds__tupling__VarTypes_186;
#line 1106 "tupling.m"
                  MR_Word transform_hlds__tupling___Attributes_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1106 "tupling.m"
                  MR_Word transform_hlds__tupling___MaybeTraceRuntimeCond_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 6)));
#line 1106 "tupling.m"
                  MR_Word transform_hlds__tupling___PragmaCode_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 7)));
#line 1108 "tupling.m"
                  MR_Word transform_hlds__tupling__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 1108 "tupling.m"
                  MR_Word transform_hlds__tupling__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 1108 "tupling.m"
                  MR_Word transform_hlds__tupling__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 1108 "tupling.m"
                  MR_Word transform_hlds__tupling__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 1108 "tupling.m"
                  MR_Word transform_hlds__tupling__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 1108 "tupling.m"
                  MR_Word transform_hlds__tupling__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 1109 "tupling.m"
                  MR_Word transform_hlds__tupling___PredInfo_80;
#line 1113 "tupling.m"
                  MR_Word transform_hlds__tupling__V_215_215;
#line 1113 "tupling.m"
                  MR_Word transform_hlds__tupling__V_216_216;
#line 1113 "tupling.m"
                  MR_Word transform_hlds__tupling__V_217_217;
#line 1113 "tupling.m"
                  MR_Word transform_hlds__tupling__V_218_218;
#line 1113 "tupling.m"
                  MR_Word transform_hlds__tupling__V_219_219;
#line 1113 "tupling.m"
                  MR_Word transform_hlds__tupling__V_220_220;
#line 1115 "tupling.m"
                  MR_Word transform_hlds__tupling__V_85_85;
#line 1126 "tupling.m"
                  MR_Word transform_hlds__tupling__MaybeNeedAcrossCall_179;
#line 1122 "tupling.m"
                  MR_Word transform_hlds__tupling__V_88_88;

#line 1109 "tupling.m"
                  {
#line 1109 "tupling.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__ModuleInfo_184, transform_hlds__tupling__PredId_181, transform_hlds__tupling__ProcId_182, &transform_hlds__tupling___PredInfo_80, &transform_hlds__tupling__ProcInfo_183);
                  }
#line 13916 "transform_hlds.tupling.c"
                  transform_hlds__tupling__TypeCtorInfo_239_239 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 13918 "transform_hlds.tupling.c"
                  transform_hlds__tupling__TypeInfo_240_240 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 1111 "tupling.m"
                  {
#line 1111 "tupling.m"
                    transform_hlds__tupling__ArgVars_180 = mercury__list__map_2_f_0(transform_hlds__tupling__TypeCtorInfo_239_239, transform_hlds__tupling__TypeInfo_240_240, (MR_Word) &transform_hlds__tupling_scalar_common_2[14], transform_hlds__tupling__Args_76);
                  }
#line 1112 "tupling.m"
                  {
#line 1112 "tupling.m"
                    transform_hlds__tupling__ExtraVars_81 = mercury__list__map_2_f_0(transform_hlds__tupling__TypeCtorInfo_239_239, transform_hlds__tupling__TypeInfo_240_240, (MR_Word) &transform_hlds__tupling_scalar_common_2[15], transform_hlds__tupling__ExtraArgs_77);
                  }
#line 1113 "tupling.m"
                  transform_hlds__tupling__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 1113 "tupling.m"
                  transform_hlds__tupling__CallingProcInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 1113 "tupling.m"
                  transform_hlds__tupling__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 1113 "tupling.m"
                  transform_hlds__tupling__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 1113 "tupling.m"
                  transform_hlds__tupling__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 1113 "tupling.m"
                  transform_hlds__tupling__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 1113 "tupling.m"
                  transform_hlds__tupling__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 1114 "tupling.m"
                  {
#line 1114 "tupling.m"
                    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__CallingProcInfo_82, &transform_hlds__tupling__VarTypes_186);
                  }
#line 1115 "tupling.m"
                  {
#line 1115 "tupling.m"
                    hlds__arg_info__partition_proc_call_args_7_p_0(transform_hlds__tupling__ProcInfo_183, transform_hlds__tupling__VarTypes_186, transform_hlds__tupling__ModuleInfo_184, transform_hlds__tupling__ArgVars_180, &transform_hlds__tupling__InputArgVarSet_83, &transform_hlds__tupling__OutputArgVarSet_84, &transform_hlds__tupling__V_85_85);
                  }
#line 1117 "tupling.m"
                  {
#line 1117 "tupling.m"
                    mercury__set__to_sorted_list_2_p_0(transform_hlds__tupling__TypeInfo_240_240, transform_hlds__tupling__InputArgVarSet_83, &transform_hlds__tupling__InputArgVars_86);
                  }
#line 1118 "tupling.m"
                  {
#line 1118 "tupling.m"
                    mercury__list__append_3_p_1(transform_hlds__tupling__TypeInfo_240_240, transform_hlds__tupling__InputArgVars_86, transform_hlds__tupling__ExtraVars_81, &transform_hlds__tupling__InputVars_87);
                  }
#line 1120 "tupling.m"
                  {
#line 1120 "tupling.m"
                    transform_hlds__tupling__succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(transform_hlds__tupling__GoalInfo_9, &transform_hlds__tupling__MaybeNeedAcrossCall_179);
                  }
#line 1121 "tupling.m"
                  if (transform_hlds__tupling__succeeded)
#line 1121 "tupling.m"
                    {
#line 1122 "tupling.m"
                      transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__MaybeNeedAcrossCall_179)) == (MR_mktag((MR_Integer) 1)));
#line 1122 "tupling.m"
                      if (transform_hlds__tupling__succeeded)
#line 1122 "tupling.m"
                        transform_hlds__tupling__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__MaybeNeedAcrossCall_179, (MR_Integer) 0)));
#line 1121 "tupling.m"
                    }
#line 1126 "tupling.m"
                  if (transform_hlds__tupling__succeeded)
#line 1124 "tupling.m"
                    {
#line 1124 "tupling.m"
                      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__InputVars_87, transform_hlds__tupling__OutputArgVarSet_84, transform_hlds__tupling__MaybeNeedAcrossCall_179, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1124 "tupling.m"
                      return;
                    }
#line 1126 "tupling.m"
                  else
#line 1127 "tupling.m"
                    {
#line 1127 "tupling.m"
                      MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_146_146;

#line 1127 "tupling.m"
                      {
#line 1127 "tupling.m"
                        transform_hlds__tupling__cls_require_in_regs_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__InputVars_87, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, &transform_hlds__tupling__STATE_VARIABLE_CountState_146_146);
                      }
#line 1128 "tupling.m"
                      {
#line 1128 "tupling.m"
                        transform_hlds__tupling__cls_clobber_regs_3_p_0(transform_hlds__tupling__OutputArgVarSet_84, transform_hlds__tupling__STATE_VARIABLE_CountState_146_146, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1128 "tupling.m"
                        return;
                      }
#line 1127 "tupling.m"
                    }
#line 1107 "tupling.m"
                }
#line 1055 "tupling.m"
              else
#line 1055 "tupling.m"
                if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1139 "tupling.m"
                  {
#line 1139 "tupling.m"
                    MR_Word transform_hlds__tupling__ConjType_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1139 "tupling.m"
                    MR_Word transform_hlds__tupling__Goals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));

#line 1143 "tupling.m"
                    if ((transform_hlds__tupling__ConjType_92 == (MR_Integer) 1))
#line 1144 "tupling.m"
                      {
#line 1145 "tupling.m"
                        {
#line 1145 "tupling.m"
                          mercury__require__sorry_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "tupling with parallel conjunctions");
#line 1145 "tupling.m"
                          return;
                        }
#line 1144 "tupling.m"
                      }
#line 1143 "tupling.m"
                    else
#line 1142 "tupling.m"
                      {
#line 1142 "tupling.m"
                        transform_hlds__tupling__count_load_stores_in_conj_4_p_0(transform_hlds__tupling__Goals_93, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1142 "tupling.m"
                        return;
                      }
#line 1139 "tupling.m"
                  }
#line 1055 "tupling.m"
                else
#line 1055 "tupling.m"
                  if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1148 "tupling.m"
                    {
#line 1148 "tupling.m"
                      MR_Word transform_hlds__tupling__Goals_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));

#line 1149 "tupling.m"
                      {
#line 1149 "tupling.m"
                        transform_hlds__tupling__count_load_stores_in_disj_4_p_0(transform_hlds__tupling__Goals_187, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1149 "tupling.m"
                        return;
                      }
#line 1148 "tupling.m"
                    }
#line 1055 "tupling.m"
                  else
#line 1055 "tupling.m"
                    if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1071 "tupling.m"
                      {
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__TypeInfo_237_237;
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__GenericCall_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__ArgModes_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 3)));
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__MaybeArgRegs_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 4)));
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__ProcInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__ModuleInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__MaybeNeedAcrossCall_47;
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__VarTypes_48;
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__ArgTypes_49;
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__ArgRegTypes_50;
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__InputArgsR_51;
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__InputArgsF_52;
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__OutputArgsR_53;
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__OutputArgsF_54;
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__InputArgs_55;
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__OutputArgs_56;
#line 1071 "tupling.m"
                        MR_Word transform_hlds__tupling__ArgVars_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));
#line 1070 "tupling.m"
                        MR_Word transform_hlds__tupling___Detism_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 5)));
#line 1072 "tupling.m"
                        MR_Word transform_hlds__tupling__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 1072 "tupling.m"
                        MR_Word transform_hlds__tupling__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 1072 "tupling.m"
                        MR_Word transform_hlds__tupling__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 1072 "tupling.m"
                        MR_Word transform_hlds__tupling__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 1072 "tupling.m"
                        MR_Word transform_hlds__tupling__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));

#line 1074 "tupling.m"
                        {
#line 1074 "tupling.m"
                          hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(transform_hlds__tupling__GoalInfo_9, &transform_hlds__tupling__MaybeNeedAcrossCall_47);
                        }
#line 1075 "tupling.m"
                        {
#line 1075 "tupling.m"
                          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__ProcInfo_45, &transform_hlds__tupling__VarTypes_48);
                        }
#line 1076 "tupling.m"
                        {
#line 1076 "tupling.m"
                          parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__tupling__VarTypes_48, transform_hlds__tupling__ArgVars_178, &transform_hlds__tupling__ArgTypes_49);
                        }
#line 1077 "tupling.m"
                        {
#line 1077 "tupling.m"
                          hlds__arg_info__generic_call_arg_reg_types_6_p_0(transform_hlds__tupling__ModuleInfo_46, transform_hlds__tupling__VarTypes_48, transform_hlds__tupling__GenericCall_41, transform_hlds__tupling__ArgVars_178, transform_hlds__tupling__MaybeArgRegs_43, &transform_hlds__tupling__ArgRegTypes_50);
                        }
#line 1079 "tupling.m"
                        {
#line 1079 "tupling.m"
                          hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(transform_hlds__tupling__ModuleInfo_46, transform_hlds__tupling__ArgVars_178, transform_hlds__tupling__ArgModes_42, transform_hlds__tupling__ArgTypes_49, transform_hlds__tupling__ArgRegTypes_50, &transform_hlds__tupling__InputArgsR_51, &transform_hlds__tupling__InputArgsF_52, &transform_hlds__tupling__OutputArgsR_53, &transform_hlds__tupling__OutputArgsF_54);
                        }
#line 14144 "transform_hlds.tupling.c"
                        transform_hlds__tupling__TypeInfo_237_237 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 1082 "tupling.m"
                        {
#line 1082 "tupling.m"
                          transform_hlds__tupling__InputArgs_55 = mercury__list__f_43_43_2_f_0(transform_hlds__tupling__TypeInfo_237_237, transform_hlds__tupling__InputArgsR_51, transform_hlds__tupling__InputArgsF_52);
                        }
#line 1083 "tupling.m"
                        {
#line 1083 "tupling.m"
                          transform_hlds__tupling__OutputArgs_56 = mercury__list__f_43_43_2_f_0(transform_hlds__tupling__TypeInfo_237_237, transform_hlds__tupling__OutputArgsR_53, transform_hlds__tupling__OutputArgsF_54);
                        }
#line 1099 "tupling.m"
                        if (((MR_tag((MR_Word) transform_hlds__tupling__GenericCall_41)) == (MR_mktag((MR_Integer) 3))))
#line 1100 "tupling.m"
                          {
#line 1100 "tupling.m"
                            MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_148_148;

#line 1102 "tupling.m"
                            {
#line 1102 "tupling.m"
                              transform_hlds__tupling__cls_require_in_regs_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__InputArgs_55, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, &transform_hlds__tupling__STATE_VARIABLE_CountState_148_148);
                            }
#line 1103 "tupling.m"
                            {
#line 1103 "tupling.m"
                              transform_hlds__tupling__cls_put_in_regs_3_p_0(transform_hlds__tupling__OutputArgs_56, transform_hlds__tupling__STATE_VARIABLE_CountState_148_148, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1103 "tupling.m"
                              return;
                            }
#line 1100 "tupling.m"
                          }
#line 1099 "tupling.m"
                        else
#line 1089 "tupling.m"
                          {
#line 1089 "tupling.m"
                            MR_Word transform_hlds__tupling__Globals_66;
#line 1089 "tupling.m"
                            MR_Word transform_hlds__tupling__GenericVarsArgInfos_68;
#line 1089 "tupling.m"
                            MR_Word transform_hlds__tupling__GenericVars_71;
#line 1089 "tupling.m"
                            MR_Word transform_hlds__tupling__Inputs_72;
#line 1089 "tupling.m"
                            MR_Word transform_hlds__tupling__Outputs_73;
#line 1089 "tupling.m"
                            MR_Integer transform_hlds__tupling__V_150_150;
#line 1089 "tupling.m"
                            MR_Integer transform_hlds__tupling__V_151_151;
#line 1091 "tupling.m"
                            MR_Word transform_hlds__tupling__V_67_67;
#line 1091 "tupling.m"
                            MR_Integer transform_hlds__tupling__V_69_69;
#line 1091 "tupling.m"
                            MR_Word transform_hlds__tupling__V_70_70;

#line 1090 "tupling.m"
                            {
#line 1090 "tupling.m"
                              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__tupling__ModuleInfo_46, &transform_hlds__tupling__Globals_66);
                            }
#line 1092 "tupling.m"
                            {
#line 1092 "tupling.m"
                              transform_hlds__tupling__V_150_150 = mercury__list__length_1_f_0(transform_hlds__tupling__TypeInfo_237_237, transform_hlds__tupling__InputArgsR_51);
                            }
#line 1092 "tupling.m"
                            {
#line 1092 "tupling.m"
                              transform_hlds__tupling__V_151_151 = mercury__list__length_1_f_0(transform_hlds__tupling__TypeInfo_237_237, transform_hlds__tupling__InputArgsF_52);
                            }
#line 1091 "tupling.m"
                            {
#line 1091 "tupling.m"
                              ll_backend__call_gen__generic_call_info_8_p_0(transform_hlds__tupling__Globals_66, transform_hlds__tupling__GenericCall_41, transform_hlds__tupling__V_150_150, transform_hlds__tupling__V_151_151, &transform_hlds__tupling__V_67_67, &transform_hlds__tupling__GenericVarsArgInfos_68, &transform_hlds__tupling__V_69_69, &transform_hlds__tupling__V_70_70);
                            }
#line 1094 "tupling.m"
                            {
#line 1094 "tupling.m"
                              mercury__assoc_list__keys_2_p_0(transform_hlds__tupling__TypeInfo_237_237, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, transform_hlds__tupling__GenericVarsArgInfos_68, &transform_hlds__tupling__GenericVars_71);
                            }
#line 1095 "tupling.m"
                            {
#line 1095 "tupling.m"
                              mercury__list__append_3_p_1(transform_hlds__tupling__TypeInfo_237_237, transform_hlds__tupling__GenericVars_71, transform_hlds__tupling__InputArgs_55, &transform_hlds__tupling__Inputs_72);
                            }
#line 1096 "tupling.m"
                            {
#line 1096 "tupling.m"
                              transform_hlds__tupling__Outputs_73 = mercury__set__list_to_set_1_f_0(transform_hlds__tupling__TypeInfo_237_237, transform_hlds__tupling__OutputArgs_56);
                            }
#line 1097 "tupling.m"
                            {
#line 1097 "tupling.m"
                              transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_108_111_97_100_95_115_116_111_114_101_115_95_102_111_114_95_99_97_108_108_95_95_91_53_93_95_48_7_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__Inputs_72, transform_hlds__tupling__Outputs_73, transform_hlds__tupling__MaybeNeedAcrossCall_47, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1097 "tupling.m"
                              return;
                            }
#line 1089 "tupling.m"
                          }
#line 1071 "tupling.m"
                      }
#line 1055 "tupling.m"
                    else
#line 1055 "tupling.m"
                      if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1165 "tupling.m"
                        {
#line 1165 "tupling.m"
                          MR_Word transform_hlds__tupling__Cond_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));
#line 1165 "tupling.m"
                          MR_Word transform_hlds__tupling__Then_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 3)));
#line 1165 "tupling.m"
                          MR_Word transform_hlds__tupling__Else_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 4)));
#line 1165 "tupling.m"
                          MR_Word transform_hlds__tupling__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Cond_101, (MR_Integer) 1)));
#line 1165 "tupling.m"
                          MR_Word transform_hlds__tupling__ResumePoint_194;
#line 1165 "tupling.m"
                          MR_Word transform_hlds__tupling__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1166 "tupling.m"
                          MR_Word transform_hlds__tupling__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Cond_101, (MR_Integer) 0)));

#line 1166 "tupling.m"
                          {
#line 1166 "tupling.m"
                            hlds__hlds_llds__goal_info_get_resume_point_2_p_0(transform_hlds__tupling__V_118_118, &transform_hlds__tupling__ResumePoint_194);
                          }
#line 1187 "tupling.m"
                          if ((transform_hlds__tupling__ResumePoint_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1188 "tupling.m"
                            {
#line 1189 "tupling.m"
                              {
#line 1189 "tupling.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "no_resume_point for if_then_else");
#line 1189 "tupling.m"
                                return;
                              }
#line 1188 "tupling.m"
                            }
#line 1187 "tupling.m"
                          else
#line 1168 "tupling.m"
                            {
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__ResetCountInfo_104;
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__ThenCountInfo_105;
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__ElseCountInfo_106;
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__ProcCounts_107;
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__ThenGoalId_108;
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__ElseGoalId_109;
#line 1168 "tupling.m"
                              MR_Float transform_hlds__tupling__ThenRelFreq_110;
#line 1168 "tupling.m"
                              MR_Float transform_hlds__tupling__ElseRelFreq_111;
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_122_122;
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_123_123;
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__V_124_124;
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__V_125_125;
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__V_126_126;
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__STATE_VARIABLE_CountState_127_127;
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling__LiveVars_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_194, (MR_Integer) 0)));
#line 1168 "tupling.m"
                              MR_Word transform_hlds__tupling___ResumeLocs_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ResumePoint_194, (MR_Integer) 1)));
#line 1178 "tupling.m"
                              MR_Word transform_hlds__tupling__V_223_223;
#line 1178 "tupling.m"
                              MR_Word transform_hlds__tupling__V_224_224;
#line 1178 "tupling.m"
                              MR_Word transform_hlds__tupling__V_225_225;
#line 1178 "tupling.m"
                              MR_Word transform_hlds__tupling__V_226_226;
#line 1178 "tupling.m"
                              MR_Word transform_hlds__tupling__V_227_227;
#line 1178 "tupling.m"
                              MR_Word transform_hlds__tupling__V_228_228;
#line 1179 "tupling.m"
                              MR_Word transform_hlds__tupling__V_229_229;
#line 1180 "tupling.m"
                              MR_Word transform_hlds__tupling__V_230_230;
#line 1181 "tupling.m"
                              MR_Word transform_hlds__tupling__V_231_231;
#line 1181 "tupling.m"
                              MR_Word transform_hlds__tupling__V_232_232;
#line 1181 "tupling.m"
                              MR_Word transform_hlds__tupling__V_233_233;
#line 1181 "tupling.m"
                              MR_Word transform_hlds__tupling__V_234_234;
#line 1181 "tupling.m"
                              MR_Word transform_hlds__tupling__V_235_235;
#line 1181 "tupling.m"
                              MR_Word transform_hlds__tupling__V_236_236;

#line 1169 "tupling.m"
                              {
#line 1169 "tupling.m"
                                transform_hlds__tupling__cls_require_flushed_4_p_0(transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__LiveVars_190, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, &transform_hlds__tupling__STATE_VARIABLE_CountState_122_122);
                              }
#line 1170 "tupling.m"
                              {
#line 1170 "tupling.m"
                                transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Cond_101, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__STATE_VARIABLE_CountState_122_122, &transform_hlds__tupling__STATE_VARIABLE_CountState_123_123);
                              }
#line 1172 "tupling.m"
                              {
#line 1172 "tupling.m"
                                transform_hlds__tupling__reset_count_state_counts_2_p_0(transform_hlds__tupling__STATE_VARIABLE_CountState_123_123, &transform_hlds__tupling__ResetCountInfo_104);
                              }
#line 1173 "tupling.m"
                              {
#line 1173 "tupling.m"
                                transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Then_102, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__ResetCountInfo_104, &transform_hlds__tupling__ThenCountInfo_105);
                              }
#line 1175 "tupling.m"
                              {
#line 1175 "tupling.m"
                                transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Else_103, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__ResetCountInfo_104, &transform_hlds__tupling__ElseCountInfo_106);
                              }
#line 1178 "tupling.m"
                              transform_hlds__tupling__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 1178 "tupling.m"
                              transform_hlds__tupling__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 1178 "tupling.m"
                              transform_hlds__tupling__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 1178 "tupling.m"
                              transform_hlds__tupling__ProcCounts_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 1178 "tupling.m"
                              transform_hlds__tupling__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 1178 "tupling.m"
                              transform_hlds__tupling__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 1178 "tupling.m"
                              transform_hlds__tupling__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 1179 "tupling.m"
                              transform_hlds__tupling__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Then_102, (MR_Integer) 0)));
#line 1179 "tupling.m"
                              transform_hlds__tupling__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Then_102, (MR_Integer) 1)));
#line 1179 "tupling.m"
                              {
#line 1179 "tupling.m"
                                transform_hlds__tupling__ThenGoalId_108 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__tupling__V_124_124);
                              }
#line 1180 "tupling.m"
                              transform_hlds__tupling__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Else_103, (MR_Integer) 0)));
#line 1180 "tupling.m"
                              transform_hlds__tupling__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Else_103, (MR_Integer) 1)));
#line 1180 "tupling.m"
                              {
#line 1180 "tupling.m"
                                transform_hlds__tupling__ElseGoalId_109 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__tupling__V_125_125);
                              }
#line 1181 "tupling.m"
                              transform_hlds__tupling__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 0)));
#line 1181 "tupling.m"
                              transform_hlds__tupling__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 1)));
#line 1181 "tupling.m"
                              transform_hlds__tupling__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 2)));
#line 1181 "tupling.m"
                              transform_hlds__tupling__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 3)));
#line 1181 "tupling.m"
                              transform_hlds__tupling__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 4)));
#line 1181 "tupling.m"
                              transform_hlds__tupling__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 5)));
#line 1181 "tupling.m"
                              transform_hlds__tupling__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_6, (MR_Integer) 6)));
#line 1181 "tupling.m"
                              {
#line 1181 "tupling.m"
                                transform_hlds__tupling__get_ite_relative_frequencies_6_p_0(transform_hlds__tupling__ProcCounts_107, transform_hlds__tupling__V_126_126, transform_hlds__tupling__ThenGoalId_108, transform_hlds__tupling__ElseGoalId_109, &transform_hlds__tupling__ThenRelFreq_110, &transform_hlds__tupling__ElseRelFreq_111);
                              }
#line 1185 "tupling.m"
                              {
#line 1185 "tupling.m"
                                transform_hlds__tupling__add_branch_costs_4_p_0(transform_hlds__tupling__ThenCountInfo_105, transform_hlds__tupling__ThenRelFreq_110, transform_hlds__tupling__STATE_VARIABLE_CountState_123_123, &transform_hlds__tupling__STATE_VARIABLE_CountState_127_127);
                              }
#line 1186 "tupling.m"
                              {
#line 1186 "tupling.m"
                                transform_hlds__tupling__add_branch_costs_4_p_0(transform_hlds__tupling__ElseCountInfo_106, transform_hlds__tupling__ElseRelFreq_111, transform_hlds__tupling__STATE_VARIABLE_CountState_127_127, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1186 "tupling.m"
                                return;
                              }
#line 1168 "tupling.m"
                            }
#line 1165 "tupling.m"
                        }
#line 1055 "tupling.m"
                      else
#line 1055 "tupling.m"
                        if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1131 "tupling.m"
                          {
#line 1131 "tupling.m"
                            MR_Word transform_hlds__tupling__Reason_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1131 "tupling.m"
                            MR_Word transform_hlds__tupling__SubGoal_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));
#line 1132 "tupling.m"
                            MR_Word transform_hlds__tupling__V_141_141;
#line 1132 "tupling.m"
                            MR_Word transform_hlds__tupling__V_91_91;

#line 1132 "tupling.m"
                            transform_hlds__tupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__tupling__Reason_89)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Reason_89, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1132 "tupling.m"
                            if (transform_hlds__tupling__succeeded)
#line 1132 "tupling.m"
                              {
#line 1132 "tupling.m"
                                transform_hlds__tupling__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Reason_89, (MR_Integer) 1)));
#line 1132 "tupling.m"
                                transform_hlds__tupling__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__Reason_89, (MR_Integer) 2)));
#line 1132 "tupling.m"
                                transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_141_141 == (MR_Integer) 1);
#line 1132 "tupling.m"
                              }
#line 1135 "tupling.m"
                            if (transform_hlds__tupling__succeeded)
#line 1132 "tupling.m"
                              *transform_hlds__tupling__STATE_VARIABLE_CountState_114 = transform_hlds__tupling__STATE_VARIABLE_CountState_0_113;
#line 1135 "tupling.m"
                            else
#line 1136 "tupling.m"
                              {
#line 1136 "tupling.m"
                                /* direct tailcall eliminated */
#line 1136 "tupling.m"
                                {
#line 1136 "tupling.m"
                                  MR_Word transform_hlds__tupling__Goal__tmp_copy_5 = transform_hlds__tupling__SubGoal_90;

#line 1136 "tupling.m"
                                  transform_hlds__tupling__Goal_5 = transform_hlds__tupling__Goal__tmp_copy_5;
#line 1136 "tupling.m"
                                }
#line 1136 "tupling.m"
                                continue;
#line 1136 "tupling.m"
                              }
#line 1131 "tupling.m"
                          }
#line 1055 "tupling.m"
                        else
#line 1055 "tupling.m"
                          if (((((MR_tag((MR_Word) transform_hlds__tupling__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1192 "tupling.m"
                            {
#line 1194 "tupling.m"
                              {
#line 1194 "tupling.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.tupling", (MR_String) "predicate \140transform_hlds.tupling.count_load_stores_in_goal\'/4", (MR_String) "shorthand");
#line 1194 "tupling.m"
                                return;
                              }
#line 1192 "tupling.m"
                            }
#line 1055 "tupling.m"
                          else
#line 1151 "tupling.m"
                            {
#line 1151 "tupling.m"
                              MR_Word transform_hlds__tupling__Cases_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 3)));
#line 1151 "tupling.m"
                              MR_Word transform_hlds__tupling___Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 1)));
#line 1151 "tupling.m"
                              MR_Word transform_hlds__tupling___Det_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__tupling__GoalExpr_8, (MR_Integer) 2)));

#line 1152 "tupling.m"
                              {
#line 1152 "tupling.m"
                                transform_hlds__tupling__count_load_stores_in_cases_4_p_0(transform_hlds__tupling__Cases_96, transform_hlds__tupling__CountInfo_6, transform_hlds__tupling__STATE_VARIABLE_CountState_0_113, transform_hlds__tupling__STATE_VARIABLE_CountState_114);
#line 1152 "tupling.m"
                                return;
                              }
#line 1151 "tupling.m"
                            }
#line 1030 "tupling.m"
      }
#line 1030 "tupling.m"
      break;
#line 1030 "tupling.m"
    }
#line 1027 "tupling.m"
}

#line 1367 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_proc_3_p_0_1(
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1367 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1367 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 1367 "tupling.m"
{
#line 1367 "tupling.m"
  {
#line 1367 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1367 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13;

#line 1367 "tupling.m"
    {
#line 1367 "tupling.m"
      transform_hlds__tupling__cls_require_in_reg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13);
    }
#line 1367 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_CountState_13));
#line 1367 "tupling.m"
  }
#line 1367 "tupling.m"
}

#line 1007 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_in_proc_3_p_0(
#line 1007 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_4,
#line 1007 "tupling.m"
  MR_Float * transform_hlds__tupling__Loads_5,
#line 1007 "tupling.m"
  MR_Float * transform_hlds__tupling__Stores_6)
#line 1007 "tupling.m"
{
#line 1010 "tupling.m"
  {
#line 1010 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_7;
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__ProcInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 1)));
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__ModuleInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 2)));
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__InitialLiveness_11;
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__CountState0_12;
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__Goal_13;
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__CountState1_14;
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__OutputArgs_16;
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__CountState_18;
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 0)));
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__V_22_22;
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__V_25_25;
#line 1010 "tupling.m"
    MR_Word transform_hlds__tupling__V_51_51;
#line 1011 "tupling.m"
    MR_Word transform_hlds__tupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 3)));
#line 1011 "tupling.m"
    MR_Word transform_hlds__tupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 4)));
#line 1011 "tupling.m"
    MR_Word transform_hlds__tupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 5)));
#line 1011 "tupling.m"
    MR_Word transform_hlds__tupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 6)));
#line 1011 "tupling.m"
    MR_Integer transform_hlds__tupling__V_8_8;
#line 1018 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15;
#line 1018 "tupling.m"
    MR_Word transform_hlds__tupling__V_17_17;
#line 1367 "tupling.m"
    MR_Box transform_hlds__tupling__conv1_CountState_18;
#line 1021 "tupling.m"
    MR_Word transform_hlds__tupling__V_19_19;
#line 1021 "tupling.m"
    MR_Word transform_hlds__tupling__V_20_20;

#line 1011 "tupling.m"
    transform_hlds__tupling__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_21_21, (MR_Integer) 0)));
#line 1011 "tupling.m"
    transform_hlds__tupling__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_21_21, (MR_Integer) 1)));
#line 1014 "tupling.m"
    {
#line 1014 "tupling.m"
      ll_backend__liveness__initial_liveness_4_p_0(transform_hlds__tupling__ProcInfo_9, transform_hlds__tupling__PredId_7, transform_hlds__tupling__ModuleInfo_10, &transform_hlds__tupling__InitialLiveness_11);
    }
#line 1015 "tupling.m"
    {
#line 1015 "tupling.m"
      transform_hlds__tupling__V_22_22 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 1015 "tupling.m"
    {
#line 1015 "tupling.m"
      transform_hlds__tupling__CountState0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_12, 0) = ((MR_Box) (transform_hlds__tupling__InitialLiveness_11));
#line 1015 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_12, 1) = ((MR_Box) (transform_hlds__tupling__V_22_22));
#line 1015 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_12, 2) = MR_box_float((MR_Float) 0.0000000000000000);
#line 1015 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState0_12, 3) = MR_box_float((MR_Float) 0.0000000000000000);
#line 1015 "tupling.m"
    }
#line 1016 "tupling.m"
    {
#line 1016 "tupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__tupling__ProcInfo_9, &transform_hlds__tupling__Goal_13);
    }
#line 1017 "tupling.m"
    {
#line 1017 "tupling.m"
      transform_hlds__tupling__count_load_stores_in_goal_4_p_0(transform_hlds__tupling__Goal_13, transform_hlds__tupling__CountInfo_4, transform_hlds__tupling__CountState0_12, &transform_hlds__tupling__CountState1_14);
    }
#line 1018 "tupling.m"
    {
#line 1018 "tupling.m"
      hlds__arg_info__partition_proc_args_5_p_0(transform_hlds__tupling__ProcInfo_9, transform_hlds__tupling__ModuleInfo_10, &transform_hlds__tupling__V_15_15, &transform_hlds__tupling__OutputArgs_16, &transform_hlds__tupling__V_17_17);
    }
#line 1019 "tupling.m"
    {
#line 1019 "tupling.m"
      transform_hlds__tupling__V_25_25 = mercury__set__to_sorted_list_1_f_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], transform_hlds__tupling__OutputArgs_16);
    }
#line 1367 "tupling.m"
    {
#line 1367 "tupling.m"
      transform_hlds__tupling__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[5]));
#line 1367 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 1) = ((MR_Box) (transform_hlds__tupling__count_load_stores_in_proc_3_p_0_1));
#line 1367 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1367 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_51_51, 3) = ((MR_Box) (transform_hlds__tupling__CountInfo_4));
#line 1367 "tupling.m"
    }
#line 1367 "tupling.m"
    {
#line 1367 "tupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_count_state_0, transform_hlds__tupling__V_51_51, transform_hlds__tupling__V_25_25, ((MR_Box) (transform_hlds__tupling__CountState1_14)), &transform_hlds__tupling__conv1_CountState_18);
    }
#line 1367 "tupling.m"
    transform_hlds__tupling__CountState_18 = ((MR_Word) transform_hlds__tupling__conv1_CountState_18);
#line 1021 "tupling.m"
    transform_hlds__tupling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState_18, (MR_Integer) 0)));
#line 1021 "tupling.m"
    transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState_18, (MR_Integer) 1)));
#line 1021 "tupling.m"
    *transform_hlds__tupling__Loads_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState_18, (MR_Integer) 2)));
#line 1021 "tupling.m"
    *transform_hlds__tupling__Stores_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountState_18, (MR_Integer) 3)));
#line 1010 "tupling.m"
  }
#line 1007 "tupling.m"
}

#line 965 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_11,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_12,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_13,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__TuplingScheme_14,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_15,
#line 965 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_16,
#line 965 "tupling.m"
  MR_Float transform_hlds__tupling__STATE_VARIABLE_Loads_0_34,
#line 965 "tupling.m"
  MR_Float * transform_hlds__tupling__STATE_VARIABLE_Loads_35,
#line 965 "tupling.m"
  MR_Float transform_hlds__tupling__STATE_VARIABLE_Stores_0_36,
#line 965 "tupling.m"
  MR_Float * transform_hlds__tupling__STATE_VARIABLE_Stores_37)
#line 965 "tupling.m"
{
#line 971 "tupling.m"
  {
#line 971 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 971 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_16, (MR_Integer) 0)));
#line 971 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_16, (MR_Integer) 1)));
#line 971 "tupling.m"
    MR_Word transform_hlds__tupling__PredInfo_21;
#line 971 "tupling.m"
    MR_Word transform_hlds__tupling__ProcInfo_22;
#line 971 "tupling.m"
    MR_Word transform_hlds__tupling__ProcLabel_23;
#line 971 "tupling.m"
    MR_Word transform_hlds__tupling__Context_24;
#line 971 "tupling.m"
    MR_String transform_hlds__tupling__FileName_25;
#line 971 "tupling.m"
    MR_Word transform_hlds__tupling__ProcLabelInContext_27;
#line 971 "tupling.m"
    MR_Word transform_hlds__tupling__V_38_38;
#line 971 "tupling.m"
    MR_Word transform_hlds__tupling__V_39_39;
#line 971 "tupling.m"
    MR_Word transform_hlds__tupling__V_40_40;
#line 971 "tupling.m"
    MR_String transform_hlds__tupling__V_41_41;
#line 971 "tupling.m"
    MR_Integer transform_hlds__tupling__V_42_42;
#line 971 "tupling.m"
    MR_Integer transform_hlds__tupling__V_43_43;
#line 971 "tupling.m"
    MR_Word transform_hlds__tupling__V_44_44;
#line 983 "tupling.m"
    MR_Integer transform_hlds__tupling__V_26_26;
#line 1001 "tupling.m"
    MR_Word transform_hlds__tupling__ProcCounts_28;
#line 986 "tupling.m"
    MR_Word transform_hlds__tupling__V_45_45;
#line 1929 "tupling.m"
    MR_Word transform_hlds__tupling__ProcCounts_57;
#line 1927 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_ProcCounts_57;

#line 973 "tupling.m"
    {
#line 973 "tupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__ModuleInfo_13, transform_hlds__tupling__PredId_19, transform_hlds__tupling__ProcId_20, &transform_hlds__tupling__PredInfo_21, &transform_hlds__tupling__ProcInfo_22);
    }
#line 976 "tupling.m"
    {
#line 976 "tupling.m"
      transform_hlds__tupling__V_38_38 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__tupling__PredInfo_21);
    }
#line 977 "tupling.m"
    {
#line 977 "tupling.m"
      transform_hlds__tupling__V_39_39 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__tupling__PredInfo_21);
    }
#line 978 "tupling.m"
    {
#line 978 "tupling.m"
      transform_hlds__tupling__V_40_40 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__tupling__PredInfo_21);
    }
#line 979 "tupling.m"
    {
#line 979 "tupling.m"
      transform_hlds__tupling__V_41_41 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__tupling__PredInfo_21);
    }
#line 980 "tupling.m"
    {
#line 980 "tupling.m"
      transform_hlds__tupling__V_42_42 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__tupling__PredInfo_21);
    }
#line 981 "tupling.m"
    {
#line 981 "tupling.m"
      transform_hlds__tupling__V_43_43 = hlds__hlds_pred__proc_id_to_int_1_f_0(transform_hlds__tupling__ProcId_20);
    }
#line 976 "tupling.m"
    {
#line 976 "tupling.m"
      transform_hlds__tupling__ProcLabel_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 976 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabel_23, 0) = ((MR_Box) (transform_hlds__tupling__V_38_38));
#line 976 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabel_23, 1) = ((MR_Box) (transform_hlds__tupling__V_39_39));
#line 976 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabel_23, 2) = ((MR_Box) (transform_hlds__tupling__V_40_40));
#line 976 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabel_23, 3) = ((MR_Box) (transform_hlds__tupling__V_41_41));
#line 976 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabel_23, 4) = ((MR_Box) (transform_hlds__tupling__V_42_42));
#line 976 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabel_23, 5) = ((MR_Box) (transform_hlds__tupling__V_43_43));
#line 976 "tupling.m"
    }
#line 982 "tupling.m"
    {
#line 982 "tupling.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__tupling__PredInfo_21, &transform_hlds__tupling__Context_24);
    }
#line 983 "tupling.m"
    transform_hlds__tupling__FileName_25 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Context_24, (MR_Integer) 0)));
#line 983 "tupling.m"
    transform_hlds__tupling__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Context_24, (MR_Integer) 1)));
#line 984 "tupling.m"
    {
#line 984 "tupling.m"
      transform_hlds__tupling__V_44_44 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__tupling__PredInfo_21);
    }
#line 984 "tupling.m"
    {
#line 984 "tupling.m"
      transform_hlds__tupling__ProcLabelInContext_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 984 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabelInContext_27, 0) = ((MR_Box) (transform_hlds__tupling__V_44_44));
#line 984 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabelInContext_27, 1) = ((MR_Box) (transform_hlds__tupling__FileName_25));
#line 984 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcLabelInContext_27, 2) = ((MR_Box) (transform_hlds__tupling__ProcLabel_23));
#line 984 "tupling.m"
    }
#line 1927 "tupling.m"
    {
#line 1927 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[9], transform_hlds__tupling__TraceCounts_11, ((MR_Box) (transform_hlds__tupling__ProcLabelInContext_27)), &transform_hlds__tupling__conv0_ProcCounts_57);
    }
#line 1927 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1927 "tupling.m"
      {
#line 1927 "tupling.m"
        transform_hlds__tupling__ProcCounts_57 = ((MR_Word) transform_hlds__tupling__conv0_ProcCounts_57);
#line 1927 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 1927 "tupling.m"
      }
#line 1929 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 1928 "tupling.m"
      {
#line 1928 "tupling.m"
        transform_hlds__tupling__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1928 "tupling.m"
        MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_45_45, 0) = ((MR_Box) (transform_hlds__tupling__ProcCounts_57));
#line 1928 "tupling.m"
      }
#line 1929 "tupling.m"
    else
#line 1930 "tupling.m"
      transform_hlds__tupling__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 986 "tupling.m"
    transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 986 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 986 "tupling.m"
      {
#line 986 "tupling.m"
        transform_hlds__tupling__ProcCounts_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_45_45, (MR_Integer) 0)));
#line 987 "tupling.m"
        {
#line 987 "tupling.m"
          MR_Word transform_hlds__tupling__ReverseGoalPathMap_29;
#line 987 "tupling.m"
          MR_Word transform_hlds__tupling__CountInfo_30;
#line 987 "tupling.m"
          MR_Float transform_hlds__tupling__ProcLoads_31;
#line 987 "tupling.m"
          MR_Float transform_hlds__tupling__ProcStores_32;
#line 987 "tupling.m"
          MR_Float transform_hlds__tupling__V_47_47;
#line 987 "tupling.m"
          MR_Float transform_hlds__tupling__V_48_48;
#line 987 "tupling.m"
          MR_Float transform_hlds__tupling__V_50_50;
#line 987 "tupling.m"
          MR_Float transform_hlds__tupling__V_51_51;
#line 987 "tupling.m"
          MR_Box transform_hlds__tupling__conv1_ReverseGoalPathMap_29;

#line 987 "tupling.m"
          {
#line 987 "tupling.m"
            mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[3], transform_hlds__tupling__ReverseGoalPathMapMap_15, ((MR_Box) (transform_hlds__tupling__PredProcId_16)), &transform_hlds__tupling__conv1_ReverseGoalPathMap_29);
          }
#line 987 "tupling.m"
          transform_hlds__tupling__ReverseGoalPathMap_29 = ((MR_Word) transform_hlds__tupling__conv1_ReverseGoalPathMap_29);
#line 988 "tupling.m"
          {
#line 988 "tupling.m"
            transform_hlds__tupling__CountInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 988 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 0) = ((MR_Box) (transform_hlds__tupling__PredProcId_16));
#line 988 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 1) = ((MR_Box) (transform_hlds__tupling__ProcInfo_22));
#line 988 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 2) = ((MR_Box) (transform_hlds__tupling__ModuleInfo_13));
#line 988 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 3) = ((MR_Box) (transform_hlds__tupling__ProcCounts_28));
#line 988 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_12));
#line 988 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 5) = ((MR_Box) (transform_hlds__tupling__TuplingScheme_14));
#line 988 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_30, 6) = ((MR_Box) (transform_hlds__tupling__ReverseGoalPathMap_29));
#line 988 "tupling.m"
          }
#line 990 "tupling.m"
          {
#line 990 "tupling.m"
            transform_hlds__tupling__count_load_stores_in_proc_3_p_0(transform_hlds__tupling__CountInfo_30, &transform_hlds__tupling__ProcLoads_31, &transform_hlds__tupling__ProcStores_32);
          }
#line 999 "tupling.m"
          {
#line 999 "tupling.m"
            transform_hlds__tupling__V_48_48 = mercury__float__float_1_f_0((MR_Integer) 1);
          }
#line 999 "tupling.m"
          transform_hlds__tupling__V_47_47 = (transform_hlds__tupling__V_48_48 * transform_hlds__tupling__ProcLoads_31);
#line 999 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_Loads_35 = (transform_hlds__tupling__STATE_VARIABLE_Loads_0_34 + transform_hlds__tupling__V_47_47);
#line 1000 "tupling.m"
          {
#line 1000 "tupling.m"
            transform_hlds__tupling__V_51_51 = mercury__float__float_1_f_0((MR_Integer) 1);
          }
#line 1000 "tupling.m"
          transform_hlds__tupling__V_50_50 = (transform_hlds__tupling__V_51_51 * transform_hlds__tupling__ProcStores_32);
#line 1000 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_Stores_37 = (transform_hlds__tupling__STATE_VARIABLE_Stores_0_36 + transform_hlds__tupling__V_50_50);
#line 987 "tupling.m"
        }
#line 986 "tupling.m"
      }
#line 986 "tupling.m"
    else
#line 1002 "tupling.m"
      {
#line 1002 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_Stores_37 = transform_hlds__tupling__STATE_VARIABLE_Stores_0_36;
#line 1002 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_Loads_35 = transform_hlds__tupling__STATE_VARIABLE_Loads_0_34;
#line 1002 "tupling.m"
      }
#line 971 "tupling.m"
  }
#line 965 "tupling.m"
}

#line 874 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__prepare_proc_for_counting_5_p_0(
#line 874 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_6,
#line 874 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ReverseGoalPathMapMap_0_31,
#line 874 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ReverseGoalPathMapMap_32,
#line 874 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33,
#line 874 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_34)
#line 874 "tupling.m"
{
#line 879 "tupling.m"
  {
#line 879 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_48_48;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_6, (MR_Integer) 0)));
#line 879 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_6, (MR_Integer) 1)));
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__PredInfo_12;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__Markers_13;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__ArgTypes_14;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__Liveness0_15;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__Globals_16;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfoLiveness_17;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__OptNoReturnCalls_18;
#line 879 "tupling.m"
    MR_ArrayPtr transform_hlds__tupling__DummyDummyTypeArray_19;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__AllocData_20;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__ContainingGoalMap_21;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__ReverseGoalPathMap_22;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__Goal0_23;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__FailVars_25;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__NondetLiveness0_26;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__Goal_27;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_35_35;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_36_36;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_37_37;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41;
#line 879 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_43_43;
#line 894 "tupling.m"
    MR_ArrayPtr transform_hlds__tupling__conv0_DummyDummyTypeArray_19;
#line 905 "tupling.m"
    MR_Word transform_hlds__tupling___Liveness_29;
#line 905 "tupling.m"
    MR_Word transform_hlds__tupling___NondetLiveness_30;
#line 905 "tupling.m"
    MR_Box transform_hlds__tupling__conv1__OptTupleAlloc_28;

#line 882 "tupling.m"
    {
#line 882 "tupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__tupling__PredId_9, transform_hlds__tupling__ProcId_10, &transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_35_35);
    }
#line 884 "tupling.m"
    {
#line 884 "tupling.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__Markers_13);
    }
#line 885 "tupling.m"
    {
#line 885 "tupling.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__ArgTypes_14);
    }
#line 886 "tupling.m"
    {
#line 886 "tupling.m"
      hlds__arg_info__generate_proc_arg_info_5_p_0(transform_hlds__tupling__Markers_13, transform_hlds__tupling__ArgTypes_14, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_35_35, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_36_36);
    }
#line 888 "tupling.m"
    {
#line 888 "tupling.m"
      ll_backend__liveness__detect_liveness_proc_4_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__tupling__PredProcId_6, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_36_36, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_37_37);
    }
#line 889 "tupling.m"
    {
#line 889 "tupling.m"
      ll_backend__liveness__initial_liveness_4_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_37_37, transform_hlds__tupling__PredId_9, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, &transform_hlds__tupling__Liveness0_15);
    }
#line 890 "tupling.m"
    {
#line 890 "tupling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, &transform_hlds__tupling__Globals_16);
    }
#line 891 "tupling.m"
    {
#line 891 "tupling.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(transform_hlds__tupling__PredInfo_12, transform_hlds__tupling__Globals_16, &transform_hlds__tupling__TypeInfoLiveness_17);
    }
#line 892 "tupling.m"
    {
#line 892 "tupling.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__tupling__Globals_16, (MR_Integer) 322, &transform_hlds__tupling__OptNoReturnCalls_18);
    }
#line 894 "tupling.m"
    {
#line 894 "tupling.m"
      mercury__array__init_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, (MR_Integer) 1, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__tupling__conv0_DummyDummyTypeArray_19);
    }
#line 894 "tupling.m"
    transform_hlds__tupling__DummyDummyTypeArray_19 = (MR_ArrayPtr) transform_hlds__tupling__conv0_DummyDummyTypeArray_19;
#line 895 "tupling.m"
    {
#line 895 "tupling.m"
      transform_hlds__tupling__AllocData_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 895 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__AllocData_20, 0) = ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33));
#line 895 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__AllocData_20, 1) = ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ProcInfo_37_37));
#line 895 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__AllocData_20, 2) = ((MR_Box) (transform_hlds__tupling__PredProcId_6));
#line 895 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__AllocData_20, 3) = ((MR_Box) (transform_hlds__tupling__TypeInfoLiveness_17));
#line 895 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__AllocData_20, 4) = ((MR_Box) (transform_hlds__tupling__OptNoReturnCalls_18));
#line 895 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__AllocData_20, 5) = ((MR_Box) (transform_hlds__tupling__DummyDummyTypeArray_19));
#line 895 "tupling.m"
    }
#line 897 "tupling.m"
    {
#line 897 "tupling.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, &transform_hlds__tupling__ContainingGoalMap_21, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_37_37, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41);
    }
#line 898 "tupling.m"
    {
#line 898 "tupling.m"
      transform_hlds__tupling__ReverseGoalPathMap_22 = mdbcomp__goal_path__create_reverse_goal_path_map_1_f_0(transform_hlds__tupling__ContainingGoalMap_21);
    }
#line 899 "tupling.m"
    {
#line 899 "tupling.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[3], ((MR_Box) (transform_hlds__tupling__PredProcId_6)), ((MR_Box) (transform_hlds__tupling__ReverseGoalPathMap_22)), transform_hlds__tupling__STATE_VARIABLE_ReverseGoalPathMapMap_0_31, transform_hlds__tupling__STATE_VARIABLE_ReverseGoalPathMapMap_32);
    }
#line 901 "tupling.m"
    {
#line 901 "tupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__tupling__Goal0_23);
    }
#line 902 "tupling.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 15160 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 903 "tupling.m"
    {
#line 903 "tupling.m"
      transform_hlds__tupling__FailVars_25 = parse_tree__set_of_var__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_48_48);
    }
#line 904 "tupling.m"
    {
#line 904 "tupling.m"
      transform_hlds__tupling__NondetLiveness0_26 = parse_tree__set_of_var__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_48_48);
    }
#line 905 "tupling.m"
    {
#line 905 "tupling.m"
      ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) &transform_hlds__tupling_scalar_common_1[5], transform_hlds__tupling__Goal0_23, &transform_hlds__tupling__Goal_27, transform_hlds__tupling__FailVars_25, transform_hlds__tupling__AllocData_20, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__tupling__conv1__OptTupleAlloc_28, transform_hlds__tupling__Liveness0_15, &transform_hlds__tupling___Liveness_29, transform_hlds__tupling__NondetLiveness0_26, &transform_hlds__tupling___NondetLiveness_30);
    }
#line 908 "tupling.m"
    {
#line 908 "tupling.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__tupling__Goal_27, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_43_43);
    }
#line 910 "tupling.m"
    {
#line 910 "tupling.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__tupling__PredId_9, transform_hlds__tupling__ProcId_10, transform_hlds__tupling__PredInfo_12, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_43_43, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_33, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_34);
#line 910 "tupling.m"
      return;
    }
#line 879 "tupling.m"
  }
#line 874 "tupling.m"
}

#line 864 "tupling.m"
static MR_Word MR_CALL 
transform_hlds__tupling__get_own_tupling_proposal_1_f_0(
#line 864 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_3)
#line 864 "tupling.m"
{
#line 866 "tupling.m"
  {
#line 866 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 866 "tupling.m"
    MR_Word transform_hlds__tupling__HeadVar__2_2;
#line 866 "tupling.m"
    MR_Word transform_hlds__tupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 0)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 1)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 2)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 3)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 4)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 5)));
#line 867 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 6)));
#line 860 "tupling.m"
    MR_Word transform_hlds__tupling__Probe_14;
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 5)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 0)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 1)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 2)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 3)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 4)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_3, (MR_Integer) 6)));
#line 858 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_Probe_14;

#line 858 "tupling.m"
    {
#line 858 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_15_15, ((MR_Box) (transform_hlds__tupling__V_4_4)), &transform_hlds__tupling__conv0_Probe_14);
    }
#line 858 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 858 "tupling.m"
      {
#line 858 "tupling.m"
        transform_hlds__tupling__Probe_14 = ((MR_Word) transform_hlds__tupling__conv0_Probe_14);
#line 858 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 858 "tupling.m"
      }
#line 860 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 859 "tupling.m"
      transform_hlds__tupling__HeadVar__2_2 = transform_hlds__tupling__Probe_14;
#line 860 "tupling.m"
    else
#line 861 "tupling.m"
      transform_hlds__tupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "tupling.m"
    return transform_hlds__tupling__HeadVar__2_2;
#line 866 "tupling.m"
  }
#line 864 "tupling.m"
}

#line 854 "tupling.m"
static MR_Word MR_CALL 
transform_hlds__tupling__get_tupling_proposal_2_f_0(
#line 854 "tupling.m"
  MR_Word transform_hlds__tupling__CountInfo_4,
#line 854 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_5)
#line 854 "tupling.m"
{
#line 860 "tupling.m"
  {
#line 860 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 860 "tupling.m"
    MR_Word transform_hlds__tupling__TuplingProposal_6;
#line 860 "tupling.m"
    MR_Word transform_hlds__tupling__Probe_7;
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 5)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 0)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 1)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 2)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 3)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 4)));
#line 858 "tupling.m"
    MR_Word transform_hlds__tupling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__CountInfo_4, (MR_Integer) 6)));
#line 858 "tupling.m"
    MR_Box transform_hlds__tupling__conv0_Probe_7;

#line 858 "tupling.m"
    {
#line 858 "tupling.m"
      transform_hlds__tupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, transform_hlds__tupling__V_8_8, ((MR_Box) (transform_hlds__tupling__PredProcId_5)), &transform_hlds__tupling__conv0_Probe_7);
    }
#line 858 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 858 "tupling.m"
      {
#line 858 "tupling.m"
        transform_hlds__tupling__Probe_7 = ((MR_Word) transform_hlds__tupling__conv0_Probe_7);
#line 858 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 858 "tupling.m"
      }
#line 860 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 859 "tupling.m"
      transform_hlds__tupling__TuplingProposal_6 = transform_hlds__tupling__Probe_7;
#line 860 "tupling.m"
    else
#line 861 "tupling.m"
      transform_hlds__tupling__TuplingProposal_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 860 "tupling.m"
    return transform_hlds__tupling__TuplingProposal_6;
#line 860 "tupling.m"
  }
#line 854 "tupling.m"
}

#line 755 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__create_aux_pred_9_p_0(
#line 755 "tupling.m"
  MR_Word transform_hlds__tupling__PredId_10,
#line 755 "tupling.m"
  MR_Integer transform_hlds__tupling__ProcId_11,
#line 755 "tupling.m"
  MR_Word transform_hlds__tupling__PredInfo_12,
#line 755 "tupling.m"
  MR_Word transform_hlds__tupling__ProcInfo_13,
#line 755 "tupling.m"
  MR_Integer transform_hlds__tupling__Counter_14,
#line 755 "tupling.m"
  MR_Word * transform_hlds__tupling__AuxPredProcId_15,
#line 755 "tupling.m"
  MR_Word * transform_hlds__tupling__CallAux_16,
#line 755 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo0_17,
#line 755 "tupling.m"
  MR_Word * transform_hlds__tupling__ModuleInfo_18)
#line 755 "tupling.m"
{
#line 760 "tupling.m"
  {
#line 760 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__AuxHeadVars_19;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__Goal_20;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__GoalInfo_22;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__InitialAuxInstMap_23;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__TVarSet_24;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes_25;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__ClassContext_26;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__RttiVarMaps_27;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__VarSet_28;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__InstVarSet_29;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__Markers_30;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__OrigOrigin_31;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__HasParallelConj_32;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__VarNameRemap_33;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__PredModule_34;
#line 760 "tupling.m"
    MR_String transform_hlds__tupling__PredName_35;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__PredOrFunc_36;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__Context_37;
#line 760 "tupling.m"
    MR_Integer transform_hlds__tupling__Line_38;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__AuxPredSymName0_39;
#line 760 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcNo_40;
#line 760 "tupling.m"
    MR_String transform_hlds__tupling__Suffix_41;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__AuxPredSymName_42;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__Origin_43;
#line 760 "tupling.m"
    MR_Word transform_hlds__tupling__V_51_51;
#line 760 "tupling.m"
    MR_String transform_hlds__tupling__V_53_53;
#line 762 "tupling.m"
    MR_Word transform_hlds__tupling___GoalExpr_21;
#line 788 "tupling.m"
    MR_Word transform_hlds__tupling___ExtraArgs_44;

#line 761 "tupling.m"
    {
#line 761 "tupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__AuxHeadVars_19);
    }
#line 762 "tupling.m"
    {
#line 762 "tupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__Goal_20);
    }
#line 762 "tupling.m"
    transform_hlds__tupling___GoalExpr_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_20, (MR_Integer) 0)));
#line 762 "tupling.m"
    transform_hlds__tupling__GoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal_20, (MR_Integer) 1)));
#line 763 "tupling.m"
    {
#line 763 "tupling.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__tupling__ProcInfo_13, transform_hlds__tupling__ModuleInfo0_17, &transform_hlds__tupling__InitialAuxInstMap_23);
    }
#line 765 "tupling.m"
    {
#line 765 "tupling.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__TVarSet_24);
    }
#line 766 "tupling.m"
    {
#line 766 "tupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__VarTypes_25);
    }
#line 767 "tupling.m"
    {
#line 767 "tupling.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__ClassContext_26);
    }
#line 768 "tupling.m"
    {
#line 768 "tupling.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__RttiVarMaps_27);
    }
#line 769 "tupling.m"
    {
#line 769 "tupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__VarSet_28);
    }
#line 770 "tupling.m"
    {
#line 770 "tupling.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__InstVarSet_29);
    }
#line 771 "tupling.m"
    {
#line 771 "tupling.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__Markers_30);
    }
#line 772 "tupling.m"
    {
#line 772 "tupling.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__OrigOrigin_31);
    }
#line 773 "tupling.m"
    {
#line 773 "tupling.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__tupling__ProcInfo_13, &transform_hlds__tupling__HasParallelConj_32);
    }
#line 774 "tupling.m"
    {
#line 774 "tupling.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__tupling__PredInfo_12, &transform_hlds__tupling__VarNameRemap_33);
    }
#line 776 "tupling.m"
    {
#line 776 "tupling.m"
      transform_hlds__tupling__PredModule_34 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__tupling__PredInfo_12);
    }
#line 777 "tupling.m"
    {
#line 777 "tupling.m"
      transform_hlds__tupling__PredName_35 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__tupling__PredInfo_12);
    }
#line 778 "tupling.m"
    {
#line 778 "tupling.m"
      transform_hlds__tupling__PredOrFunc_36 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__tupling__PredInfo_12);
    }
#line 779 "tupling.m"
    {
#line 779 "tupling.m"
      transform_hlds__tupling__Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__tupling__GoalInfo_22);
    }
#line 780 "tupling.m"
    {
#line 780 "tupling.m"
      mercury__term__context_line_2_p_0(transform_hlds__tupling__Context_37, &transform_hlds__tupling__Line_38);
    }
#line 781 "tupling.m"
    {
#line 781 "tupling.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__tupling__PredModule_34, (MR_String) "tupling", transform_hlds__tupling__PredOrFunc_36, transform_hlds__tupling__PredName_35, transform_hlds__tupling__Line_38, transform_hlds__tupling__Counter_14, &transform_hlds__tupling__AuxPredSymName0_39);
    }
#line 783 "tupling.m"
    {
#line 783 "tupling.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__tupling__ProcId_11, &transform_hlds__tupling__ProcNo_40);
    }
#line 784 "tupling.m"
    {
#line 784 "tupling.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__tupling_scalar_common_3[0], transform_hlds__tupling__ProcNo_40, &transform_hlds__tupling__V_53_53);
    }
#line 784 "tupling.m"
    {
#line 784 "tupling.m"
      transform_hlds__tupling__Suffix_41 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__tupling__V_53_53);
    }
#line 785 "tupling.m"
    {
#line 785 "tupling.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__tupling__AuxPredSymName0_39, transform_hlds__tupling__Suffix_41, &transform_hlds__tupling__AuxPredSymName_42);
    }
#line 787 "tupling.m"
    {
#line 787 "tupling.m"
      transform_hlds__tupling__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "tupling.m"
      MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 787 "tupling.m"
      MR_hl_field(MR_mktag(3), transform_hlds__tupling__V_51_51, 1) = ((MR_Box) (transform_hlds__tupling__ProcNo_40));
#line 787 "tupling.m"
    }
#line 787 "tupling.m"
    {
#line 787 "tupling.m"
      transform_hlds__tupling__Origin_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 787 "tupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__tupling__Origin_43, 0) = ((MR_Box) (transform_hlds__tupling__V_51_51));
#line 787 "tupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__tupling__Origin_43, 1) = ((MR_Box) (transform_hlds__tupling__OrigOrigin_31));
#line 787 "tupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__tupling__Origin_43, 2) = ((MR_Box) (transform_hlds__tupling__PredId_10));
#line 787 "tupling.m"
    }
#line 788 "tupling.m"
    {
#line 788 "tupling.m"
      hlds__hlds_pred__define_new_pred_20_p_0(transform_hlds__tupling__Origin_43, transform_hlds__tupling__Goal_20, transform_hlds__tupling__CallAux_16, transform_hlds__tupling__AuxHeadVars_19, &transform_hlds__tupling___ExtraArgs_44, transform_hlds__tupling__InitialAuxInstMap_23, transform_hlds__tupling__AuxPredSymName_42, transform_hlds__tupling__TVarSet_24, transform_hlds__tupling__VarTypes_25, transform_hlds__tupling__ClassContext_26, transform_hlds__tupling__RttiVarMaps_27, transform_hlds__tupling__VarSet_28, transform_hlds__tupling__InstVarSet_29, transform_hlds__tupling__Markers_30, (MR_Integer) 1, transform_hlds__tupling__HasParallelConj_32, transform_hlds__tupling__VarNameRemap_33, transform_hlds__tupling__ModuleInfo0_17, transform_hlds__tupling__ModuleInfo_18, transform_hlds__tupling__AuxPredProcId_15);
    }
#line 760 "tupling.m"
  }
#line 755 "tupling.m"
}

#line 686 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0_1(
#line 686 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 686 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 686 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 686 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 686 "tupling.m"
{
#line 686 "tupling.m"
  {
#line 686 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 686 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 686 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_HeadVar__4_39;

#line 686 "tupling.m"
    {
#line 686 "tupling.m"
      transform_hlds__tupling__succeeded = transform_hlds__tupling__IntroducedFrom__func__make_transformed_proc__686__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_HeadVar__4_39);
    }
#line 686 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 686 "tupling.m"
      {
#line 686 "tupling.m"
        *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__4_39));
#line 686 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 686 "tupling.m"
      }
#line 686 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 686 "tupling.m"
  }
#line 686 "tupling.m"
}

#line 679 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__make_transformed_proc_5_p_0(
#line 679 "tupling.m"
  MR_Word transform_hlds__tupling__CellVar_6,
#line 679 "tupling.m"
  MR_Word transform_hlds__tupling__FieldVarsList_7,
#line 679 "tupling.m"
  MR_Word transform_hlds__tupling__InsertMap_8,
#line 679 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_0_34,
#line 679 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ProcInfo_35)
#line 679 "tupling.m"
{
#line 682 "tupling.m"
  {
#line 682 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_60_60;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_61_61;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_64_64;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_29_85;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__HeadVars0_10;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__ArgModes0_11;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__HeadVarsAndModes_12;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__HeadVars_15;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__ArgModes_16;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__Goal0_17;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes0_18;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__VarSet0_19;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__Goal1_21;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__VarSet1_22;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes1_23;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__RenameMapA_24;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__ProcStartDeconstruct_25;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__ProcStartInsert_26;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__Goal2_27;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__VarSet_28;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes_29;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__RenameMapB_30;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__Goal3_31;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__RenameMap_32;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__Goal_33;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__V_36_36;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__V_40_40;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__V_42_42;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__V_44_44;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_45_45;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__V_46_46;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__V_47_47;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__V_50_50;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__V_51_51;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__V_52_52;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_53_53;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_55_55;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__InsertGoal_75;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__GoalInfo_77;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__V_80_80;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__V_82_82;
#line 682 "tupling.m"
    MR_Word transform_hlds__tupling__V_83_83;
#line 740 "tupling.m"
    MR_Word transform_hlds__tupling__V_76_76;

#line 684 "tupling.m"
    {
#line 684 "tupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__tupling__HeadVars0_10);
    }
#line 685 "tupling.m"
    {
#line 685 "tupling.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__tupling__ArgModes0_11);
    }
#line 15733 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeInfo_60_60 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 15735 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 686 "tupling.m"
    {
#line 686 "tupling.m"
      transform_hlds__tupling__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 686 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_36_36, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[4]));
#line 686 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_36_36, 1) = ((MR_Box) (transform_hlds__tupling__make_transformed_proc_5_p_0_1));
#line 686 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 686 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_36_36, 3) = ((MR_Box) (transform_hlds__tupling__FieldVarsList_7));
#line 686 "tupling.m"
    }
#line 686 "tupling.m"
    {
#line 686 "tupling.m"
      transform_hlds__tupling__HeadVarsAndModes_12 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__tupling__TypeInfo_60_60, transform_hlds__tupling__TypeCtorInfo_61_61, (MR_Word) &transform_hlds__tupling_scalar_common_2[7], transform_hlds__tupling__V_36_36, transform_hlds__tupling__HeadVars0_10, transform_hlds__tupling__ArgModes0_11);
    }
#line 690 "tupling.m"
    {
#line 690 "tupling.m"
      mercury__assoc_list__keys_and_values_3_p_0(transform_hlds__tupling__TypeInfo_60_60, transform_hlds__tupling__TypeCtorInfo_61_61, transform_hlds__tupling__HeadVarsAndModes_12, &transform_hlds__tupling__HeadVars_15, &transform_hlds__tupling__ArgModes_16);
    }
#line 691 "tupling.m"
    {
#line 691 "tupling.m"
      transform_hlds__tupling__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_42_42, 0) = ((MR_Box) (transform_hlds__tupling__CellVar_6));
#line 691 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "tupling.m"
    }
#line 691 "tupling.m"
    {
#line 691 "tupling.m"
      transform_hlds__tupling__V_40_40 = mercury__list__f_43_43_2_f_0(transform_hlds__tupling__TypeInfo_60_60, transform_hlds__tupling__HeadVars_15, transform_hlds__tupling__V_42_42);
    }
#line 691 "tupling.m"
    {
#line 691 "tupling.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__tupling__V_40_40, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41);
    }
#line 692 "tupling.m"
    {
#line 692 "tupling.m"
      transform_hlds__tupling__V_47_47 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 692 "tupling.m"
    {
#line 692 "tupling.m"
      transform_hlds__tupling__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_46_46, 0) = ((MR_Box) (transform_hlds__tupling__V_47_47));
#line 692 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "tupling.m"
    }
#line 692 "tupling.m"
    {
#line 692 "tupling.m"
      transform_hlds__tupling__V_44_44 = mercury__list__f_43_43_2_f_0(transform_hlds__tupling__TypeCtorInfo_61_61, transform_hlds__tupling__ArgModes_16, transform_hlds__tupling__V_46_46);
    }
#line 692 "tupling.m"
    {
#line 692 "tupling.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__tupling__V_44_44, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_45_45);
    }
#line 695 "tupling.m"
    {
#line 695 "tupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__tupling__Goal0_17);
    }
#line 696 "tupling.m"
    {
#line 696 "tupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__tupling__VarTypes0_18);
    }
#line 697 "tupling.m"
    {
#line 697 "tupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__tupling__VarSet0_19);
    }
#line 701 "tupling.m"
    {
#line 701 "tupling.m"
      transform_hlds__tupling__V_50_50 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeInfo_60_60, transform_hlds__tupling__TypeInfo_60_60);
    }
#line 700 "tupling.m"
    {
#line 700 "tupling.m"
      backend_libs__interval__record_decisions_in_goal_10_p_0(transform_hlds__tupling__Goal0_17, &transform_hlds__tupling__Goal1_21, transform_hlds__tupling__VarSet0_19, &transform_hlds__tupling__VarSet1_22, transform_hlds__tupling__VarTypes0_18, &transform_hlds__tupling__VarTypes1_23, transform_hlds__tupling__V_50_50, &transform_hlds__tupling__RenameMapA_24, transform_hlds__tupling__InsertMap_8, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__tupling_scalar_common_3[3]));
    }
#line 714 "tupling.m"
    {
#line 714 "tupling.m"
      hlds__make_goal__deconstruct_tuple_3_p_0(transform_hlds__tupling__CellVar_6, transform_hlds__tupling__FieldVarsList_7, &transform_hlds__tupling__ProcStartDeconstruct_25);
    }
#line 15836 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 716 "tupling.m"
    {
#line 716 "tupling.m"
      transform_hlds__tupling__V_51_51 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__tupling__TypeCtorInfo_64_64, transform_hlds__tupling__FieldVarsList_7);
    }
#line 715 "tupling.m"
    {
#line 715 "tupling.m"
      transform_hlds__tupling__ProcStartInsert_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 715 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcStartInsert_26, 0) = ((MR_Box) (transform_hlds__tupling__ProcStartDeconstruct_25));
#line 715 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__ProcStartInsert_26, 1) = ((MR_Box) (transform_hlds__tupling__V_51_51));
#line 715 "tupling.m"
    }
#line 15853 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeInfo_29_85 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 738 "tupling.m"
    {
#line 738 "tupling.m"
      transform_hlds__tupling__V_80_80 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeInfo_29_85, transform_hlds__tupling__TypeInfo_29_85);
    }
#line 738 "tupling.m"
    {
#line 738 "tupling.m"
      backend_libs__interval__make_inserted_goal_9_p_0(transform_hlds__tupling__VarSet1_22, &transform_hlds__tupling__VarSet_28, transform_hlds__tupling__VarTypes1_23, &transform_hlds__tupling__VarTypes_29, transform_hlds__tupling__V_80_80, &transform_hlds__tupling__RenameMapB_30, transform_hlds__tupling__ProcStartInsert_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__tupling__InsertGoal_75);
    }
#line 740 "tupling.m"
    transform_hlds__tupling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal1_21, (MR_Integer) 0)));
#line 740 "tupling.m"
    transform_hlds__tupling__GoalInfo_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Goal1_21, (MR_Integer) 1)));
#line 741 "tupling.m"
    {
#line 741 "tupling.m"
      transform_hlds__tupling__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_83_83, 0) = ((MR_Box) (transform_hlds__tupling__Goal1_21));
#line 741 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 741 "tupling.m"
    }
#line 741 "tupling.m"
    {
#line 741 "tupling.m"
      transform_hlds__tupling__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_82_82, 0) = ((MR_Box) (transform_hlds__tupling__InsertGoal_75));
#line 741 "tupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_82_82, 1) = ((MR_Box) (transform_hlds__tupling__V_83_83));
#line 741 "tupling.m"
    }
#line 741 "tupling.m"
    {
#line 741 "tupling.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__tupling__V_82_82, transform_hlds__tupling__GoalInfo_77, &transform_hlds__tupling__Goal2_27);
    }
#line 720 "tupling.m"
    {
#line 720 "tupling.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__tupling__RenameMapB_30, transform_hlds__tupling__Goal2_27, &transform_hlds__tupling__Goal3_31);
    }
#line 722 "tupling.m"
    {
#line 722 "tupling.m"
      mercury__map__old_merge_3_p_0(transform_hlds__tupling__TypeInfo_60_60, transform_hlds__tupling__TypeInfo_60_60, transform_hlds__tupling__RenameMapA_24, transform_hlds__tupling__RenameMapB_30, &transform_hlds__tupling__RenameMap_32);
    }
#line 723 "tupling.m"
    {
#line 723 "tupling.m"
      transform_hlds__tupling__V_52_52 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__tupling__TypeCtorInfo_64_64, transform_hlds__tupling__HeadVars_15);
    }
#line 723 "tupling.m"
    {
#line 723 "tupling.m"
      backend_libs__interval__apply_headvar_correction_4_p_0(transform_hlds__tupling__V_52_52, transform_hlds__tupling__RenameMap_32, transform_hlds__tupling__Goal3_31, &transform_hlds__tupling__Goal_33);
    }
#line 725 "tupling.m"
    {
#line 725 "tupling.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__tupling__Goal_33, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_53_53);
    }
#line 726 "tupling.m"
    {
#line 726 "tupling.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__tupling__VarSet_28, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54);
    }
#line 727 "tupling.m"
    {
#line 727 "tupling.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__tupling__VarTypes_29, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_55_55);
    }
#line 728 "tupling.m"
    {
#line 728 "tupling.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_55_55, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_35);
#line 728 "tupling.m"
      return;
    }
#line 682 "tupling.m"
  }
#line 679 "tupling.m"
}

#line 656 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0_1(
#line 656 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 656 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 656 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2)
#line 656 "tupling.m"
{
#line 656 "tupling.m"
  {
#line 656 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 656 "tupling.m"
    MR_Integer transform_hlds__tupling__conv0_HeadVar__3_66;

#line 656 "tupling.m"
    {
#line 656 "tupling.m"
      transform_hlds__tupling__IntroducedFrom__pred__add_transformed_proc__656__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), &transform_hlds__tupling__conv0_HeadVar__3_66);
    }
#line 656 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__3_66));
#line 656 "tupling.m"
  }
#line 656 "tupling.m"
}

#line 629 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_proc_8_p_0(
#line 629 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_1,
#line 629 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__2_2,
#line 629 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_3,
#line 629 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_4,
#line 629 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__5_5,
#line 629 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__6_6,
#line 629 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar__7_7,
#line 629 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__8_8)
#line 629 "tupling.m"
{
#line 633 "tupling.m"
  {
#line 633 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;

#line 633 "tupling.m"
    if ((transform_hlds__tupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 633 "tupling.m"
      {
#line 633 "tupling.m"
        *transform_hlds__tupling__HeadVar__8_8 = transform_hlds__tupling__HeadVar__7_7;
#line 633 "tupling.m"
        *transform_hlds__tupling__HeadVar__6_6 = transform_hlds__tupling__HeadVar__5_5;
#line 633 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_3;
#line 633 "tupling.m"
      }
#line 633 "tupling.m"
    else
#line 635 "tupling.m"
      {
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_64_64;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__FieldVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 1)));
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__PredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_1, (MR_Integer) 0)));
#line 635 "tupling.m"
        MR_Integer transform_hlds__tupling__ProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_1, (MR_Integer) 1)));
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__PredInfo_29;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__IntervalInfo_30;
#line 635 "tupling.m"
        MR_Integer transform_hlds__tupling__TupleArity_31;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__VarTypes_32;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__TupleArgTypes_33;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__TupleConsType_34;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__CellVar_35;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__HeadVars_36;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__ArgsToTuple_37;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__InsertMap_38;
#line 635 "tupling.m"
        MR_Integer transform_hlds__tupling__Num_39;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__AuxPredProcId_40;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__CallAux_41;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__TransformedProc_42;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_49_49;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__V_50_50;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__V_56_56;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_57_57;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ProcInfo_59_59;
#line 635 "tupling.m"
        MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_60_60;
#line 634 "tupling.m"
        MR_Word transform_hlds__tupling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 0)));
#line 634 "tupling.m"
        MR_Word transform_hlds__tupling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__HeadVar__2_2, (MR_Integer) 2)));

#line 638 "tupling.m"
        {
#line 638 "tupling.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_3, transform_hlds__tupling__PredId_26, transform_hlds__tupling__ProcId_27, &transform_hlds__tupling__PredInfo_29, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_49_49);
        }
#line 643 "tupling.m"
        {
#line 643 "tupling.m"
          transform_hlds__tupling__build_interval_info_3_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_3, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_49_49, &transform_hlds__tupling__IntervalInfo_30);
        }
#line 16078 "transform_hlds.tupling.c"
        transform_hlds__tupling__TypeInfo_64_64 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 646 "tupling.m"
        {
#line 646 "tupling.m"
          mercury__list__length_2_p_0(transform_hlds__tupling__TypeInfo_64_64, transform_hlds__tupling__FieldVars_21, &transform_hlds__tupling__TupleArity_31);
        }
#line 647 "tupling.m"
        {
#line 647 "tupling.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_49_49, &transform_hlds__tupling__VarTypes_32);
        }
#line 648 "tupling.m"
        {
#line 648 "tupling.m"
          parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__tupling__VarTypes_32, transform_hlds__tupling__FieldVars_21, &transform_hlds__tupling__TupleArgTypes_33);
        }
#line 649 "tupling.m"
        {
#line 649 "tupling.m"
          transform_hlds__tupling__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 649 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_3[1]));
#line 649 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_50_50, 1) = ((MR_Box) (transform_hlds__tupling__TupleArity_31));
#line 649 "tupling.m"
        }
#line 649 "tupling.m"
        {
#line 649 "tupling.m"
          parse_tree__prog_type__construct_type_3_p_0(transform_hlds__tupling__V_50_50, transform_hlds__tupling__TupleArgTypes_33, &transform_hlds__tupling__TupleConsType_34);
        }
#line 651 "tupling.m"
        {
#line 651 "tupling.m"
          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__tupling__TupleConsType_34, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__tupling_scalar_common_3[2]), &transform_hlds__tupling__CellVar_35, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_49_49, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54);
        }
#line 655 "tupling.m"
        {
#line 655 "tupling.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__tupling__HeadVars_36);
        }
#line 656 "tupling.m"
        {
#line 656 "tupling.m"
          transform_hlds__tupling__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 656 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_56_56, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_7[2]));
#line 656 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_56_56, 1) = ((MR_Box) (transform_hlds__tupling__add_transformed_proc_8_p_0_1));
#line 656 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 656 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_56_56, 3) = ((MR_Box) (transform_hlds__tupling__HeadVars_36));
#line 656 "tupling.m"
        }
#line 656 "tupling.m"
        {
#line 656 "tupling.m"
          mercury__list__map_3_p_0(transform_hlds__tupling__TypeInfo_64_64, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__tupling__V_56_56, transform_hlds__tupling__FieldVars_21, &transform_hlds__tupling__ArgsToTuple_37);
        }
#line 660 "tupling.m"
        {
#line 660 "tupling.m"
          transform_hlds__tupling__build_insert_map_4_p_0(transform_hlds__tupling__CellVar_35, transform_hlds__tupling__FieldVars_21, transform_hlds__tupling__IntervalInfo_30, &transform_hlds__tupling__InsertMap_38);
        }
#line 664 "tupling.m"
        {
#line 664 "tupling.m"
          transform_hlds__tupling__make_transformed_proc_5_p_0(transform_hlds__tupling__CellVar_35, transform_hlds__tupling__FieldVars_21, transform_hlds__tupling__InsertMap_38, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_57_57);
        }
#line 665 "tupling.m"
        {
#line 665 "tupling.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__tupling__STATE_VARIABLE_ProcInfo_59_59, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_60_60);
        }
#line 667 "tupling.m"
        {
#line 667 "tupling.m"
          mercury__counter__allocate_3_p_0(&transform_hlds__tupling__Num_39, transform_hlds__tupling__HeadVar__5_5, transform_hlds__tupling__HeadVar__6_6);
        }
#line 668 "tupling.m"
        {
#line 668 "tupling.m"
          transform_hlds__tupling__create_aux_pred_9_p_0(transform_hlds__tupling__PredId_26, transform_hlds__tupling__ProcId_27, transform_hlds__tupling__PredInfo_29, transform_hlds__tupling__STATE_VARIABLE_ProcInfo_59_59, transform_hlds__tupling__Num_39, &transform_hlds__tupling__AuxPredProcId_40, &transform_hlds__tupling__CallAux_41, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_60_60, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_4);
        }
#line 672 "tupling.m"
        {
#line 672 "tupling.m"
          transform_hlds__tupling__TransformedProc_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 672 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_42, 0) = ((MR_Box) (transform_hlds__tupling__AuxPredProcId_40));
#line 672 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_42, 1) = ((MR_Box) (transform_hlds__tupling__TupleConsType_34));
#line 672 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_42, 2) = ((MR_Box) (transform_hlds__tupling__ArgsToTuple_37));
#line 672 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__TransformedProc_42, 3) = ((MR_Box) (transform_hlds__tupling__CallAux_41));
#line 672 "tupling.m"
        }
#line 674 "tupling.m"
        {
#line 674 "tupling.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0, ((MR_Box) (transform_hlds__tupling__PredProcId_1)), ((MR_Box) (transform_hlds__tupling__TransformedProc_42)), transform_hlds__tupling__HeadVar__7_7, transform_hlds__tupling__HeadVar__8_8);
#line 674 "tupling.m"
          return;
        }
#line 635 "tupling.m"
      }
#line 633 "tupling.m"
  }
#line 629 "tupling.m"
}

#line 626 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_procs_7_p_0_1(
#line 626 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 626 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 626 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 626 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 626 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4,
#line 626 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_5,
#line 626 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_6,
#line 626 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_7,
#line 626 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_8)
#line 626 "tupling.m"
{
#line 626 "tupling.m"
  {
#line 626 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 626 "tupling.m"
    MR_Word transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_4;
#line 626 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_HeadVar__6_6;
#line 626 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_HeadVar__8_8;

#line 626 "tupling.m"
    {
#line 626 "tupling.m"
      transform_hlds__tupling__add_transformed_proc_8_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3), &transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_4, ((MR_Word) transform_hlds__tupling__wrapper_arg_5), &transform_hlds__tupling__conv1_HeadVar__6_6, ((MR_Word) transform_hlds__tupling__wrapper_arg_7), &transform_hlds__tupling__conv0_HeadVar__8_8);
    }
#line 626 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_4 = ((MR_Box) (transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_4));
#line 626 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_6 = ((MR_Box) (transform_hlds__tupling__conv1_HeadVar__6_6));
#line 626 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_8 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__8_8));
#line 626 "tupling.m"
  }
#line 626 "tupling.m"
}

#line 621 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__add_transformed_procs_7_p_0(
#line 621 "tupling.m"
  MR_Word transform_hlds__tupling__TuplingScheme_8,
#line 621 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_12,
#line 621 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_13,
#line 621 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_14,
#line 621 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_15,
#line 621 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_16,
#line 621 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_17)
#line 621 "tupling.m"
{
#line 625 "tupling.m"
  {
#line 625 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 626 "tupling.m"
    MR_Box transform_hlds__tupling__conv5_STATE_VARIABLE_ModuleInfo_13;
#line 626 "tupling.m"
    MR_Box transform_hlds__tupling__conv4_STATE_VARIABLE_Counter_15;
#line 626 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_STATE_VARIABLE_TransformMap_17;

#line 626 "tupling.m"
    {
#line 626 "tupling.m"
      mercury__map__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[0], (MR_Word) &transform_hlds__tupling_scalar_common_2[13], transform_hlds__tupling__TuplingScheme_8, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_12)), &transform_hlds__tupling__conv5_STATE_VARIABLE_ModuleInfo_13, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_Counter_0_14)), &transform_hlds__tupling__conv4_STATE_VARIABLE_Counter_15, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_16)), &transform_hlds__tupling__conv3_STATE_VARIABLE_TransformMap_17);
    }
#line 626 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_13 = ((MR_Word) transform_hlds__tupling__conv5_STATE_VARIABLE_ModuleInfo_13);
#line 626 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_Counter_15 = ((MR_Word) transform_hlds__tupling__conv4_STATE_VARIABLE_Counter_15);
#line 626 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_TransformMap_17 = ((MR_Word) transform_hlds__tupling__conv3_STATE_VARIABLE_TransformMap_17);
#line 625 "tupling.m"
  }
#line 621 "tupling.m"
}

#line 566 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__make_tupling_proposal_5_p_0_1(
#line 566 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 566 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 566 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2)
#line 566 "tupling.m"
{
#line 566 "tupling.m"
  {
#line 566 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 566 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 566 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_HeadVar__4_27;

#line 566 "tupling.m"
    {
#line 566 "tupling.m"
      transform_hlds__tupling__succeeded = transform_hlds__tupling__IntroducedFrom__func__make_tupling_proposal__566__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), &transform_hlds__tupling__conv0_HeadVar__4_27);
    }
#line 566 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 566 "tupling.m"
      {
#line 566 "tupling.m"
        *transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__4_27));
#line 566 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 566 "tupling.m"
      }
#line 566 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 566 "tupling.m"
  }
#line 566 "tupling.m"
}

#line 558 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__make_tupling_proposal_5_p_0(
#line 558 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_6,
#line 558 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_7,
#line 558 "tupling.m"
  MR_Integer transform_hlds__tupling__MinArgsToTuple_8,
#line 558 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_4,
#line 558 "tupling.m"
  MR_Word * transform_hlds__tupling__TuplingProposal_12)
#line 558 "tupling.m"
{
#line 562 "tupling.m"
  {
#line 562 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 562 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_34_34;
#line 562 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_4, (MR_Integer) 0)));
#line 562 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_4, (MR_Integer) 1)));
#line 562 "tupling.m"
    MR_Word transform_hlds__tupling__ProcInfo_14;
#line 562 "tupling.m"
    MR_Word transform_hlds__tupling__VarSet_15;
#line 562 "tupling.m"
    MR_Word transform_hlds__tupling__HeadVars_16;
#line 562 "tupling.m"
    MR_Word transform_hlds__tupling__FieldVarArgPos_17;
#line 562 "tupling.m"
    MR_Word transform_hlds__tupling__V_25_25;
#line 563 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13;
#line 571 "tupling.m"
    MR_Integer transform_hlds__tupling__V_28_28;

#line 563 "tupling.m"
    {
#line 563 "tupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__ModuleInfo_6, transform_hlds__tupling__PredId_10, transform_hlds__tupling__ProcId_11, &transform_hlds__tupling__V_13_13, &transform_hlds__tupling__ProcInfo_14);
    }
#line 564 "tupling.m"
    {
#line 564 "tupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__tupling__ProcInfo_14, &transform_hlds__tupling__VarSet_15);
    }
#line 565 "tupling.m"
    {
#line 565 "tupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__tupling__ProcInfo_14, &transform_hlds__tupling__HeadVars_16);
    }
#line 16385 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeInfo_34_34 = (MR_Word) &transform_hlds__tupling_scalar_common_2[6];
#line 566 "tupling.m"
    {
#line 566 "tupling.m"
      transform_hlds__tupling__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 566 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[3]));
#line 566 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 1) = ((MR_Box) (transform_hlds__tupling__make_tupling_proposal_5_p_0_1));
#line 566 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 566 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 3) = ((MR_Box) (transform_hlds__tupling__PredProcId_4));
#line 566 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 4) = ((MR_Box) (transform_hlds__tupling__HeadVars_16));
#line 566 "tupling.m"
    }
#line 566 "tupling.m"
    {
#line 566 "tupling.m"
      transform_hlds__tupling__FieldVarArgPos_17 = mercury__list__filter_map_2_f_0((MR_Word) &transform_hlds__tupling_scalar_common_2[2], transform_hlds__tupling__TypeInfo_34_34, transform_hlds__tupling__V_25_25, transform_hlds__tupling__CandidateHeadVars_7);
    }
#line 571 "tupling.m"
    {
#line 571 "tupling.m"
      transform_hlds__tupling__V_28_28 = mercury__list__length_1_f_0(transform_hlds__tupling__TypeInfo_34_34, transform_hlds__tupling__FieldVarArgPos_17);
    }
#line 571 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_28_28 < transform_hlds__tupling__MinArgsToTuple_8);
#line 573 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 572 "tupling.m"
      *transform_hlds__tupling__TuplingProposal_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 573 "tupling.m"
    else
#line 577 "tupling.m"
      {
#line 577 "tupling.m"
        MR_Word transform_hlds__tupling__DummyCellVar_22;
#line 577 "tupling.m"
        MR_Word transform_hlds__tupling__FieldVars_24;
#line 577 "tupling.m"
        MR_Word transform_hlds__tupling__V_23_23;

#line 577 "tupling.m"
        {
#line 577 "tupling.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "DummyCellVar", &transform_hlds__tupling__DummyCellVar_22, transform_hlds__tupling__VarSet_15, &transform_hlds__tupling__V_23_23);
        }
#line 578 "tupling.m"
        {
#line 578 "tupling.m"
          transform_hlds__tupling__FieldVars_24 = mercury__assoc_list__keys_1_f_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__tupling__FieldVarArgPos_17);
        }
#line 579 "tupling.m"
        {
#line 579 "tupling.m"
          MR_Word base;
#line 579 "tupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 579 "tupling.m"
          *transform_hlds__tupling__TuplingProposal_12 = base;
#line 579 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__DummyCellVar_22));
#line 579 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__tupling__FieldVars_24));
#line 579 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__tupling__FieldVarArgPos_17));
#line 579 "tupling.m"
        }
#line 577 "tupling.m"
      }
#line 562 "tupling.m"
  }
#line 558 "tupling.m"
}

#line 960 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_2(
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 960 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 960 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5)
#line 960 "tupling.m"
{
#line 960 "tupling.m"
  {
#line 960 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 960 "tupling.m"
    MR_Float transform_hlds__tupling__conv2_STATE_VARIABLE_Loads_35;
#line 960 "tupling.m"
    MR_Float transform_hlds__tupling__conv1_STATE_VARIABLE_Stores_37;

#line 960 "tupling.m"
    {
#line 960 "tupling.m"
      transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), MR_unbox_float(transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv2_STATE_VARIABLE_Loads_35, MR_unbox_float(transform_hlds__tupling__wrapper_arg_4), &transform_hlds__tupling__conv1_STATE_VARIABLE_Stores_37);
    }
#line 960 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = MR_box_float(transform_hlds__tupling__conv2_STATE_VARIABLE_Loads_35);
#line 960 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_5 = MR_box_float(transform_hlds__tupling__conv1_STATE_VARIABLE_Stores_37);
#line 960 "tupling.m"
  }
#line 960 "tupling.m"
}

#line 539 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_1(
#line 539 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 539 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 539 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2)
#line 539 "tupling.m"
{
#line 539 "tupling.m"
  {
#line 539 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 539 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_TuplingProposal_12;

#line 539 "tupling.m"
    {
#line 539 "tupling.m"
      transform_hlds__tupling__make_tupling_proposal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), &transform_hlds__tupling__conv0_TuplingProposal_12);
    }
#line 539 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv0_TuplingProposal_12));
#line 539 "tupling.m"
  }
#line 539 "tupling.m"
}

#line 528 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0(
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_9,
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_10,
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_11,
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_12,
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_13,
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_14,
#line 528 "tupling.m"
  MR_Word transform_hlds__tupling__MaybeBestScheme0_15,
#line 528 "tupling.m"
  MR_Word * transform_hlds__tupling__MaybeBestScheme_16)
#line 528 "tupling.m"
{
#line 536 "tupling.m"
  {
#line 536 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 536 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_35_35;
#line 536 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_36_36;
#line 536 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_26_55;
#line 536 "tupling.m"
    MR_Integer transform_hlds__tupling__MinArgsToTuple_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 7)));
#line 536 "tupling.m"
    MR_Word transform_hlds__tupling__TuplingProposals_18;
#line 536 "tupling.m"
    MR_Word transform_hlds__tupling__TuplingScheme_19;
#line 536 "tupling.m"
    MR_Word transform_hlds__tupling__Costs_20;
#line 536 "tupling.m"
    MR_Word transform_hlds__tupling__V_23_23;
#line 536 "tupling.m"
    MR_Float transform_hlds__tupling__Loads_44;
#line 536 "tupling.m"
    MR_Float transform_hlds__tupling__Stores_45;
#line 536 "tupling.m"
    MR_Word transform_hlds__tupling__V_46_46;
#line 537 "tupling.m"
    MR_Integer transform_hlds__tupling__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 0)));
#line 537 "tupling.m"
    MR_Integer transform_hlds__tupling__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 1)));
#line 537 "tupling.m"
    MR_Integer transform_hlds__tupling__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 2)));
#line 537 "tupling.m"
    MR_Integer transform_hlds__tupling__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 3)));
#line 537 "tupling.m"
    MR_Integer transform_hlds__tupling__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 4)));
#line 537 "tupling.m"
    MR_Integer transform_hlds__tupling__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 5)));
#line 537 "tupling.m"
    MR_Integer transform_hlds__tupling__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_10, (MR_Integer) 6)));
#line 959 "tupling.m"
    MR_Box transform_hlds__tupling__conv4_Loads_44;
#line 959 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_Stores_45;

#line 539 "tupling.m"
    {
#line 539 "tupling.m"
      transform_hlds__tupling__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 539 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[2]));
#line 539 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 1) = ((MR_Box) (transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_1));
#line 539 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 539 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 3) = ((MR_Box) (transform_hlds__tupling__ModuleInfo_11));
#line 539 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 4) = ((MR_Box) (transform_hlds__tupling__CandidateHeadVars_14));
#line 539 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_23_23, 5) = ((MR_Box) (transform_hlds__tupling__MinArgsToTuple_17));
#line 539 "tupling.m"
    }
#line 16617 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 16619 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0;
#line 538 "tupling.m"
    {
#line 538 "tupling.m"
      mercury__list__map_3_p_0(transform_hlds__tupling__TypeCtorInfo_35_35, transform_hlds__tupling__TypeCtorInfo_36_36, transform_hlds__tupling__V_23_23, transform_hlds__tupling__PredProcIds_13, &transform_hlds__tupling__TuplingProposals_18);
    }
#line 541 "tupling.m"
    {
#line 541 "tupling.m"
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__tupling__TypeCtorInfo_35_35, transform_hlds__tupling__TypeCtorInfo_36_36, transform_hlds__tupling__PredProcIds_13, transform_hlds__tupling__TuplingProposals_18, &transform_hlds__tupling__TuplingScheme_19);
    }
#line 960 "tupling.m"
    {
#line 960 "tupling.m"
      transform_hlds__tupling__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[1]));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 1) = ((MR_Box) (transform_hlds__tupling__find_best_tupling_scheme_2_8_p_0_2));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 3) = ((MR_Box) (transform_hlds__tupling__TraceCounts_9));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_10));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 5) = ((MR_Box) (transform_hlds__tupling__ModuleInfo_11));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 6) = ((MR_Box) (transform_hlds__tupling__TuplingScheme_19));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_46_46, 7) = ((MR_Box) (transform_hlds__tupling__ReverseGoalPathMapMap_12));
#line 960 "tupling.m"
    }
#line 16653 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_26_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 959 "tupling.m"
    {
#line 959 "tupling.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__tupling__TypeCtorInfo_26_55, transform_hlds__tupling__TypeCtorInfo_26_55, transform_hlds__tupling__V_46_46, transform_hlds__tupling__PredProcIds_13, MR_box_float((MR_Float) 0.0000000000000000), &transform_hlds__tupling__conv4_Loads_44, MR_box_float((MR_Float) 0.0000000000000000), &transform_hlds__tupling__conv3_Stores_45);
    }
#line 959 "tupling.m"
    transform_hlds__tupling__Loads_44 = MR_unbox_float(transform_hlds__tupling__conv4_Loads_44);
#line 959 "tupling.m"
    transform_hlds__tupling__Stores_45 = MR_unbox_float(transform_hlds__tupling__conv3_Stores_45);
#line 963 "tupling.m"
    {
#line 963 "tupling.m"
      transform_hlds__tupling__Costs_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 963 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__Costs_20, 0) = MR_box_float(transform_hlds__tupling__Loads_44);
#line 963 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__Costs_20, 1) = MR_box_float(transform_hlds__tupling__Stores_45);
#line 963 "tupling.m"
    }
#line 548 "tupling.m"
    if ((transform_hlds__tupling__MaybeBestScheme0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 547 "tupling.m"
      transform_hlds__tupling__succeeded = MR_TRUE;
#line 548 "tupling.m"
    else
#line 549 "tupling.m"
      {
#line 549 "tupling.m"
        MR_Word transform_hlds__tupling__PrevCosts_21;
#line 549 "tupling.m"
        MR_Word transform_hlds__tupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__MaybeBestScheme0_15, (MR_Integer) 0)));
#line 549 "tupling.m"
        MR_Float transform_hlds__tupling__LoadsA_56;
#line 549 "tupling.m"
        MR_Float transform_hlds__tupling__StoresA_57;
#line 549 "tupling.m"
        MR_Float transform_hlds__tupling__LoadsB_58;
#line 549 "tupling.m"
        MR_Float transform_hlds__tupling__StoresB_59;
#line 549 "tupling.m"
        MR_Float transform_hlds__tupling__TotalA_60;
#line 549 "tupling.m"
        MR_Float transform_hlds__tupling__TotalB_61;
#line 549 "tupling.m"
        MR_Word transform_hlds__tupling__V_22_22;

#line 549 "tupling.m"
        transform_hlds__tupling__PrevCosts_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_24_24, (MR_Integer) 0)));
#line 549 "tupling.m"
        transform_hlds__tupling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_24_24, (MR_Integer) 1)));
#line 584 "tupling.m"
        transform_hlds__tupling__LoadsA_56 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__Costs_20, (MR_Integer) 0)));
#line 584 "tupling.m"
        transform_hlds__tupling__StoresA_57 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__Costs_20, (MR_Integer) 1)));
#line 584 "tupling.m"
        transform_hlds__tupling__LoadsB_58 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__PrevCosts_21, (MR_Integer) 0)));
#line 584 "tupling.m"
        transform_hlds__tupling__StoresB_59 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__PrevCosts_21, (MR_Integer) 1)));
#line 585 "tupling.m"
        transform_hlds__tupling__TotalA_60 = (transform_hlds__tupling__LoadsA_56 + transform_hlds__tupling__StoresA_57);
#line 586 "tupling.m"
        transform_hlds__tupling__TotalB_61 = (transform_hlds__tupling__LoadsB_58 + transform_hlds__tupling__StoresB_59);
#line 587 "tupling.m"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__TotalA_60 < transform_hlds__tupling__TotalB_61);
#line 549 "tupling.m"
      }
#line 554 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 553 "tupling.m"
      {
#line 553 "tupling.m"
        MR_Word transform_hlds__tupling__V_25_25;

#line 553 "tupling.m"
        {
#line 553 "tupling.m"
          transform_hlds__tupling__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 0) = ((MR_Box) (transform_hlds__tupling__Costs_20));
#line 553 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_25_25, 1) = ((MR_Box) (transform_hlds__tupling__TuplingScheme_19));
#line 553 "tupling.m"
        }
#line 553 "tupling.m"
        {
#line 553 "tupling.m"
          MR_Word base;
#line 553 "tupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 553 "tupling.m"
          *transform_hlds__tupling__MaybeBestScheme_16 = base;
#line 553 "tupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__tupling__V_25_25));
#line 553 "tupling.m"
        }
#line 553 "tupling.m"
      }
#line 554 "tupling.m"
    else
#line 555 "tupling.m"
      *transform_hlds__tupling__MaybeBestScheme_16 = transform_hlds__tupling__MaybeBestScheme0_15;
#line 536 "tupling.m"
  }
#line 528 "tupling.m"
}

#line 492 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0_1(
#line 492 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 492 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 492 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 492 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 492 "tupling.m"
{
#line 492 "tupling.m"
  {
#line 492 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 492 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_HeadVar__3_21;

#line 492 "tupling.m"
    {
#line 492 "tupling.m"
      transform_hlds__tupling__IntroducedFrom__pred__common_candidate_headvars_of_procs_2__492__1_3_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_HeadVar__3_21);
    }
#line 492 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__3_21));
#line 492 "tupling.m"
  }
#line 492 "tupling.m"
}

#line 483 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0(
#line 483 "tupling.m"
  MR_String transform_hlds__tupling__HeadVarName_5,
#line 483 "tupling.m"
  MR_Word transform_hlds__tupling__ListOfOrigins_6,
#line 483 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars0_7,
#line 483 "tupling.m"
  MR_Word * transform_hlds__tupling__CandidateHeadVars_8)
#line 483 "tupling.m"
{
#line 494 "tupling.m"
  {
#line 494 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__ListOfOrigins_6)) == (MR_mktag((MR_Integer) 1)));
#line 491 "tupling.m"
    MR_Word transform_hlds__tupling__V_13_13;
#line 491 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9;
#line 491 "tupling.m"
    MR_Word transform_hlds__tupling__V_10_10;
#line 491 "tupling.m"
    MR_Word transform_hlds__tupling__V_11_11;

#line 491 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 491 "tupling.m"
      {
#line 491 "tupling.m"
        transform_hlds__tupling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ListOfOrigins_6, (MR_Integer) 0)));
#line 491 "tupling.m"
        transform_hlds__tupling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__ListOfOrigins_6, (MR_Integer) 1)));
#line 491 "tupling.m"
        transform_hlds__tupling__succeeded = ((MR_tag((MR_Word) transform_hlds__tupling__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 491 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 491 "tupling.m"
          {
#line 491 "tupling.m"
            transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_13_13, (MR_Integer) 0)));
#line 491 "tupling.m"
            transform_hlds__tupling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_13_13, (MR_Integer) 1)));
#line 491 "tupling.m"
          }
#line 491 "tupling.m"
      }
#line 494 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 492 "tupling.m"
      {
#line 492 "tupling.m"
        MR_Word transform_hlds__tupling__TypeInfo_26_26;
#line 492 "tupling.m"
        MR_Word transform_hlds__tupling__Origins_12;
#line 492 "tupling.m"
        MR_Word transform_hlds__tupling__V_15_15;
#line 492 "tupling.m"
        MR_Word transform_hlds__tupling__V_16_16;
#line 492 "tupling.m"
        MR_Word transform_hlds__tupling__V_17_17;
#line 492 "tupling.m"
        MR_Box transform_hlds__tupling__conv1_Origins_12;

#line 492 "tupling.m"
        {
#line 492 "tupling.m"
          transform_hlds__tupling__V_15_15 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling_scalar_common_1[1]);
        }
#line 16863 "transform_hlds.tupling.c"
        transform_hlds__tupling__TypeInfo_26_26 = (MR_Word) &transform_hlds__tupling_scalar_common_2[1];
#line 492 "tupling.m"
        {
#line 492 "tupling.m"
          mercury__list__foldl_4_p_0(transform_hlds__tupling__TypeInfo_26_26, transform_hlds__tupling__TypeInfo_26_26, (MR_Word) &transform_hlds__tupling_scalar_common_2[12], transform_hlds__tupling__ListOfOrigins_6, ((MR_Box) (transform_hlds__tupling__V_15_15)), &transform_hlds__tupling__conv1_Origins_12);
        }
#line 492 "tupling.m"
        transform_hlds__tupling__Origins_12 = ((MR_Word) transform_hlds__tupling__conv1_Origins_12);
#line 493 "tupling.m"
        {
#line 493 "tupling.m"
          transform_hlds__tupling__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 493 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_17_17, 0) = ((MR_Box) (transform_hlds__tupling__HeadVarName_5));
#line 493 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_17_17, 1) = ((MR_Box) (transform_hlds__tupling__Origins_12));
#line 493 "tupling.m"
        }
#line 493 "tupling.m"
        {
#line 493 "tupling.m"
          transform_hlds__tupling__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_16_16, 0) = ((MR_Box) (transform_hlds__tupling__V_17_17));
#line 493 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "tupling.m"
        }
#line 493 "tupling.m"
        {
#line 493 "tupling.m"
          *transform_hlds__tupling__CandidateHeadVars_8 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__tupling_scalar_common_2[2], transform_hlds__tupling__CandidateHeadVars0_7, transform_hlds__tupling__V_16_16);
        }
#line 492 "tupling.m"
      }
#line 494 "tupling.m"
    else
#line 495 "tupling.m"
      *transform_hlds__tupling__CandidateHeadVars_8 = transform_hlds__tupling__CandidateHeadVars0_7;
#line 494 "tupling.m"
  }
#line 483 "tupling.m"
}

#line 457 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_2_6_f_0(
#line 457 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_8,
#line 457 "tupling.m"
  MR_Word transform_hlds__tupling__VarSet_9,
#line 457 "tupling.m"
  MR_Word transform_hlds__tupling__VarTypes_10,
#line 457 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_11,
#line 457 "tupling.m"
  MR_Word transform_hlds__tupling__HeadVar_12,
#line 457 "tupling.m"
  MR_Word transform_hlds__tupling__ArgMode_13,
#line 457 "tupling.m"
  MR_Word * transform_hlds__tupling__HeadVar__7_7)
#line 457 "tupling.m"
{
#line 462 "tupling.m"
  {
#line 462 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 462 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_17_17;
#line 462 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_18_18;
#line 462 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_19_19;
#line 462 "tupling.m"
    MR_String transform_hlds__tupling__Name_14;
#line 462 "tupling.m"
    MR_Word transform_hlds__tupling__Origins_15;
#line 462 "tupling.m"
    MR_Word transform_hlds__tupling__Type_16;

#line 464 "tupling.m"
    {
#line 464 "tupling.m"
      transform_hlds__tupling__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__tupling__ModuleInfo_11, transform_hlds__tupling__ArgMode_13);
    }
#line 462 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 462 "tupling.m"
      {
#line 466 "tupling.m"
        {
#line 466 "tupling.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__tupling__VarTypes_10, transform_hlds__tupling__HeadVar_12, &transform_hlds__tupling__Type_16);
        }
#line 467 "tupling.m"
        {
#line 467 "tupling.m"
          transform_hlds__tupling__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__tupling__Type_16);
        }
#line 467 "tupling.m"
        transform_hlds__tupling__succeeded = !(transform_hlds__tupling__succeeded);
#line 462 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 462 "tupling.m"
          {
#line 16969 "transform_hlds.tupling.c"
            transform_hlds__tupling__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 468 "tupling.m"
            {
#line 468 "tupling.m"
              transform_hlds__tupling__succeeded = mercury__varset__search_name_3_p_0(transform_hlds__tupling__TypeCtorInfo_17_17, transform_hlds__tupling__VarSet_9, transform_hlds__tupling__HeadVar_12, &transform_hlds__tupling__Name_14);
            }
#line 462 "tupling.m"
            if (transform_hlds__tupling__succeeded)
#line 462 "tupling.m"
              {
#line 16980 "transform_hlds.tupling.c"
                transform_hlds__tupling__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 16982 "transform_hlds.tupling.c"
                transform_hlds__tupling__TypeInfo_19_19 = (MR_Word) &transform_hlds__tupling_scalar_common_1[1];
#line 469 "tupling.m"
                {
#line 469 "tupling.m"
                  transform_hlds__tupling__Origins_15 = mercury__map__singleton_2_f_0(transform_hlds__tupling__TypeCtorInfo_18_18, transform_hlds__tupling__TypeInfo_19_19, ((MR_Box) (transform_hlds__tupling__PredProcId_8)), ((MR_Box) (transform_hlds__tupling__HeadVar_12)));
                }
#line 462 "tupling.m"
                {
#line 462 "tupling.m"
                  MR_Word base;
#line 462 "tupling.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 462 "tupling.m"
                  *transform_hlds__tupling__HeadVar__7_7 = base;
#line 462 "tupling.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__tupling__Name_14));
#line 462 "tupling.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__tupling__Origins_15));
#line 462 "tupling.m"
                }
#line 462 "tupling.m"
                transform_hlds__tupling__succeeded = MR_TRUE;
#line 462 "tupling.m"
              }
#line 462 "tupling.m"
          }
#line 462 "tupling.m"
      }
#line 462 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 462 "tupling.m"
  }
#line 457 "tupling.m"
}

#line 454 "tupling.m"
static MR_bool MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0_1(
#line 454 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 454 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 454 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 454 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 454 "tupling.m"
{
#line 454 "tupling.m"
  {
#line 454 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 454 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 454 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_HeadVar__7_7;

#line 454 "tupling.m"
    {
#line 454 "tupling.m"
      transform_hlds__tupling__succeeded = transform_hlds__tupling__candidate_headvars_of_proc_2_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv0_HeadVar__7_7);
    }
#line 454 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 454 "tupling.m"
      {
#line 454 "tupling.m"
        *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv0_HeadVar__7_7));
#line 454 "tupling.m"
        transform_hlds__tupling__succeeded = MR_TRUE;
#line 454 "tupling.m"
      }
#line 454 "tupling.m"
    return transform_hlds__tupling__succeeded;
#line 454 "tupling.m"
  }
#line 454 "tupling.m"
}

#line 443 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(
#line 443 "tupling.m"
  MR_Word transform_hlds__tupling__ModuleInfo_4,
#line 443 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcId_2,
#line 443 "tupling.m"
  MR_Word * transform_hlds__tupling__CandidateHeadVars_8)
#line 443 "tupling.m"
{
#line 447 "tupling.m"
  {
#line 447 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 447 "tupling.m"
    MR_Word transform_hlds__tupling__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_2, (MR_Integer) 0)));
#line 447 "tupling.m"
    MR_Integer transform_hlds__tupling__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__PredProcId_2, (MR_Integer) 1)));
#line 447 "tupling.m"
    MR_Word transform_hlds__tupling__ProcInfo_10;
#line 447 "tupling.m"
    MR_Word transform_hlds__tupling__VarSet_11;
#line 447 "tupling.m"
    MR_Word transform_hlds__tupling__VarTypes_12;
#line 447 "tupling.m"
    MR_Word transform_hlds__tupling__HeadVars_13;
#line 447 "tupling.m"
    MR_Word transform_hlds__tupling__ArgModes_14;
#line 447 "tupling.m"
    MR_Word transform_hlds__tupling__V_15_15;
#line 448 "tupling.m"
    MR_Word transform_hlds__tupling__V_9_9;

#line 448 "tupling.m"
    {
#line 448 "tupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__tupling__ModuleInfo_4, transform_hlds__tupling__PredId_6, transform_hlds__tupling__ProcId_7, &transform_hlds__tupling__V_9_9, &transform_hlds__tupling__ProcInfo_10);
    }
#line 449 "tupling.m"
    {
#line 449 "tupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__tupling__ProcInfo_10, &transform_hlds__tupling__VarSet_11);
    }
#line 450 "tupling.m"
    {
#line 450 "tupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__tupling__ProcInfo_10, &transform_hlds__tupling__VarTypes_12);
    }
#line 451 "tupling.m"
    {
#line 451 "tupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__tupling__ProcInfo_10, &transform_hlds__tupling__HeadVars_13);
    }
#line 452 "tupling.m"
    {
#line 452 "tupling.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__tupling__ProcInfo_10, &transform_hlds__tupling__ArgModes_14);
    }
#line 454 "tupling.m"
    {
#line 454 "tupling.m"
      transform_hlds__tupling__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 454 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_8[0]));
#line 454 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 1) = ((MR_Box) (transform_hlds__tupling__candidate_headvars_of_proc_3_p_0_1));
#line 454 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 454 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 3) = ((MR_Box) (transform_hlds__tupling__PredProcId_2));
#line 454 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 4) = ((MR_Box) (transform_hlds__tupling__VarSet_11));
#line 454 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 5) = ((MR_Box) (transform_hlds__tupling__VarTypes_12));
#line 454 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_15_15, 6) = ((MR_Box) (transform_hlds__tupling__ModuleInfo_4));
#line 454 "tupling.m"
    }
#line 453 "tupling.m"
    {
#line 453 "tupling.m"
      *transform_hlds__tupling__CandidateHeadVars_8 = mercury__list__filter_map_corresponding_3_f_0((MR_Word) &transform_hlds__tupling_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[2], transform_hlds__tupling__V_15_15, transform_hlds__tupling__HeadVars_13, transform_hlds__tupling__ArgModes_14);
    }
#line 447 "tupling.m"
  }
#line 443 "tupling.m"
}

#line 361 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_3_13_p_0(
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_14,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_15,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_16,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_17,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_18,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__CostsWithoutTupling_19,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_30,
#line 361 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_32,
#line 361 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_33,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_34,
#line 361 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_35,
#line 361 "tupling.m"
  MR_Word transform_hlds__tupling__VeryVerbose_23)
#line 361 "tupling.m"
{
#line 369 "tupling.m"
  {
#line 369 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 369 "tupling.m"
    MR_Word transform_hlds__tupling__MaybeBestScheme_24;
#line 369 "tupling.m"
    MR_Integer transform_hlds__tupling__MinArgsToTuple_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 7)));
#line 521 "tupling.m"
    MR_Integer transform_hlds__tupling__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 0)));
#line 521 "tupling.m"
    MR_Integer transform_hlds__tupling__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 1)));
#line 521 "tupling.m"
    MR_Integer transform_hlds__tupling__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 2)));
#line 521 "tupling.m"
    MR_Integer transform_hlds__tupling__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 3)));
#line 521 "tupling.m"
    MR_Integer transform_hlds__tupling__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 4)));
#line 521 "tupling.m"
    MR_Integer transform_hlds__tupling__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 5)));
#line 521 "tupling.m"
    MR_Integer transform_hlds__tupling__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 6)));

#line 522 "tupling.m"
    {
#line 522 "tupling.m"
      transform_hlds__tupling__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_111_118_101_114_95_108_105_115_116_95_114_117_110_115_95_95_104_111_49_95_95_91_54_93_95_48_5_p_0(transform_hlds__tupling__TraceCounts_14, transform_hlds__tupling__TuningParams_15, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_30, transform_hlds__tupling__ReverseGoalPathMapMap_16, transform_hlds__tupling__PredProcIds_17, transform_hlds__tupling__CandidateHeadVars_18, transform_hlds__tupling__MinArgsToTuple_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__tupling__MaybeBestScheme_24);
    }
#line 375 "tupling.m"
    if ((transform_hlds__tupling__MaybeBestScheme_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 374 "tupling.m"
      {
#line 374 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_30;
#line 374 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_Counter_33 = transform_hlds__tupling__STATE_VARIABLE_Counter_0_32;
#line 374 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_TransformMap_35 = transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_34;
#line 374 "tupling.m"
      }
#line 375 "tupling.m"
    else
#line 376 "tupling.m"
      {
#line 376 "tupling.m"
        MR_Word transform_hlds__tupling__CostsWithTupling_25;
#line 376 "tupling.m"
        MR_Word transform_hlds__tupling__TuplingScheme_26;
#line 376 "tupling.m"
        MR_Float transform_hlds__tupling__LoadsWithTupling_27;
#line 376 "tupling.m"
        MR_Float transform_hlds__tupling__StoresWithTupling_28;
#line 376 "tupling.m"
        MR_Word transform_hlds__tupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__MaybeBestScheme_24, (MR_Integer) 0)));
#line 411 "tupling.m"
        MR_Float transform_hlds__tupling__LoadsWithoutTupling_75;
#line 411 "tupling.m"
        MR_Float transform_hlds__tupling__StoresWithoutTupling_76;
#line 411 "tupling.m"
        MR_Float transform_hlds__tupling__LoadsWithTupling_77;
#line 411 "tupling.m"
        MR_Float transform_hlds__tupling__StoresWithTupling_78;
#line 411 "tupling.m"
        MR_Float transform_hlds__tupling__CostsRatio_79;
#line 411 "tupling.m"
        MR_Float transform_hlds__tupling__TotalWithoutTupling_80;
#line 411 "tupling.m"
        MR_Float transform_hlds__tupling__TotalWithTupling_81;
#line 411 "tupling.m"
        MR_Integer transform_hlds__tupling__V_82_82;
#line 412 "tupling.m"
        MR_Integer transform_hlds__tupling__V_87_87;
#line 412 "tupling.m"
        MR_Integer transform_hlds__tupling__V_88_88;
#line 412 "tupling.m"
        MR_Integer transform_hlds__tupling__V_89_89;
#line 412 "tupling.m"
        MR_Integer transform_hlds__tupling__V_90_90;
#line 412 "tupling.m"
        MR_Integer transform_hlds__tupling__V_91_91;
#line 412 "tupling.m"
        MR_Integer transform_hlds__tupling__V_92_92;
#line 412 "tupling.m"
        MR_Integer transform_hlds__tupling__V_93_93;

#line 376 "tupling.m"
        transform_hlds__tupling__CostsWithTupling_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_36_36, (MR_Integer) 0)));
#line 376 "tupling.m"
        transform_hlds__tupling__TuplingScheme_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_36_36, (MR_Integer) 1)));
#line 377 "tupling.m"
        transform_hlds__tupling__LoadsWithTupling_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithTupling_25, (MR_Integer) 0)));
#line 377 "tupling.m"
        transform_hlds__tupling__StoresWithTupling_28 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithTupling_25, (MR_Integer) 1)));
#line 384 "tupling.m"
        if ((transform_hlds__tupling__VeryVerbose_23 == (MR_Integer) 0))
#line 385 "tupling.m"
          {
#line 385 "tupling.m"
          }
#line 384 "tupling.m"
        else
#line 380 "tupling.m"
          {
#line 380 "tupling.m"
            MR_Word transform_hlds__tupling__V_39_39;
#line 380 "tupling.m"
            MR_Word transform_hlds__tupling__V_41_41;
#line 380 "tupling.m"
            MR_Word transform_hlds__tupling__V_42_42;
#line 380 "tupling.m"
            MR_Word transform_hlds__tupling__V_43_43;

#line 382 "tupling.m"
            {
#line 382 "tupling.m"
              transform_hlds__tupling__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 382 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_41_41, 0) = MR_box_float(transform_hlds__tupling__LoadsWithTupling_27);
#line 382 "tupling.m"
            }
#line 382 "tupling.m"
            {
#line 382 "tupling.m"
              transform_hlds__tupling__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 382 "tupling.m"
              MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_43_43, 0) = MR_box_float(transform_hlds__tupling__StoresWithTupling_28);
#line 382 "tupling.m"
            }
#line 382 "tupling.m"
            {
#line 382 "tupling.m"
              transform_hlds__tupling__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "tupling.m"
              MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_42_42, 0) = ((MR_Box) (transform_hlds__tupling__V_43_43));
#line 382 "tupling.m"
              MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "tupling.m"
            }
#line 382 "tupling.m"
            {
#line 382 "tupling.m"
              transform_hlds__tupling__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "tupling.m"
              MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_39_39, 0) = ((MR_Box) (transform_hlds__tupling__V_41_41));
#line 382 "tupling.m"
              MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_39_39, 1) = ((MR_Box) (transform_hlds__tupling__V_42_42));
#line 382 "tupling.m"
            }
#line 381 "tupling.m"
            {
#line 381 "tupling.m"
              mercury__io__format_4_p_0((MR_String) "%% SCC costs with tupling = {%g, %g}\n", transform_hlds__tupling__V_39_39);
            }
#line 380 "tupling.m"
          }
#line 410 "tupling.m"
        transform_hlds__tupling__LoadsWithoutTupling_75 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithoutTupling_19, (MR_Integer) 0)));
#line 410 "tupling.m"
        transform_hlds__tupling__StoresWithoutTupling_76 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithoutTupling_19, (MR_Integer) 1)));
#line 411 "tupling.m"
        transform_hlds__tupling__LoadsWithTupling_77 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithTupling_25, (MR_Integer) 0)));
#line 411 "tupling.m"
        transform_hlds__tupling__StoresWithTupling_78 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithTupling_25, (MR_Integer) 1)));
#line 412 "tupling.m"
        transform_hlds__tupling__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 0)));
#line 412 "tupling.m"
        transform_hlds__tupling__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 1)));
#line 412 "tupling.m"
        transform_hlds__tupling__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 2)));
#line 412 "tupling.m"
        transform_hlds__tupling__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 3)));
#line 412 "tupling.m"
        transform_hlds__tupling__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 4)));
#line 412 "tupling.m"
        transform_hlds__tupling__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 5)));
#line 412 "tupling.m"
        transform_hlds__tupling__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 6)));
#line 412 "tupling.m"
        transform_hlds__tupling__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, (MR_Integer) 7)));
#line 412 "tupling.m"
        {
#line 412 "tupling.m"
          transform_hlds__tupling__CostsRatio_79 = mercury__float__float_1_f_0(transform_hlds__tupling__V_82_82);
        }
#line 413 "tupling.m"
        transform_hlds__tupling__TotalWithoutTupling_80 = (transform_hlds__tupling__LoadsWithoutTupling_75 + transform_hlds__tupling__StoresWithoutTupling_76);
#line 414 "tupling.m"
        transform_hlds__tupling__TotalWithTupling_81 = (transform_hlds__tupling__LoadsWithTupling_77 + transform_hlds__tupling__StoresWithTupling_78);
#line 415 "tupling.m"
        transform_hlds__tupling__succeeded = (transform_hlds__tupling__TotalWithTupling_81 == ((MR_Float) 0.0000000000000000));
#line 417 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 416 "tupling.m"
          {
#line 416 "tupling.m"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__TotalWithoutTupling_80 > ((MR_Float) 0.0000000000000000));
#line 416 "tupling.m"
          }
#line 417 "tupling.m"
        else
#line 418 "tupling.m"
          {
#line 418 "tupling.m"
            MR_Float transform_hlds__tupling__V_84_84;
#line 418 "tupling.m"
            MR_Float transform_hlds__tupling__V_85_85 = (transform_hlds__tupling__TotalWithoutTupling_80 * ((MR_Float) 100.00000000000000));

#line 418 "tupling.m"
            {
#line 418 "tupling.m"
              transform_hlds__tupling__V_84_84 = mercury__float__f_slash_2_f_0(transform_hlds__tupling__V_85_85, transform_hlds__tupling__TotalWithTupling_81);
            }
#line 418 "tupling.m"
            transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_84_84 >= transform_hlds__tupling__CostsRatio_79);
#line 418 "tupling.m"
          }
#line 401 "tupling.m"
        if (transform_hlds__tupling__succeeded)
#line 398 "tupling.m"
          {
#line 396 "tupling.m"
            if ((transform_hlds__tupling__VeryVerbose_23 == (MR_Integer) 0))
#line 397 "tupling.m"
              {
#line 397 "tupling.m"
              }
#line 396 "tupling.m"
            else
#line 393 "tupling.m"
              {
#line 394 "tupling.m"
                {
#line 394 "tupling.m"
                  mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "% Proceeding with tupling\n")));
                }
#line 393 "tupling.m"
              }
#line 399 "tupling.m"
            {
#line 399 "tupling.m"
              transform_hlds__tupling__add_transformed_procs_7_p_0(transform_hlds__tupling__TuplingScheme_26, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_30, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31, transform_hlds__tupling__STATE_VARIABLE_Counter_0_32, transform_hlds__tupling__STATE_VARIABLE_Counter_33, transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_34, transform_hlds__tupling__STATE_VARIABLE_TransformMap_35);
#line 399 "tupling.m"
              return;
            }
#line 398 "tupling.m"
          }
#line 401 "tupling.m"
        else
#line 402 "tupling.m"
          {
#line 402 "tupling.m"
            *transform_hlds__tupling__STATE_VARIABLE_TransformMap_35 = transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_34;
#line 402 "tupling.m"
            *transform_hlds__tupling__STATE_VARIABLE_Counter_33 = transform_hlds__tupling__STATE_VARIABLE_Counter_0_32;
#line 402 "tupling.m"
            *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_30;
#line 402 "tupling.m"
          }
#line 376 "tupling.m"
      }
#line 369 "tupling.m"
  }
#line 361 "tupling.m"
}

#line 960 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_2(
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 960 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 960 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 960 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5)
#line 960 "tupling.m"
{
#line 960 "tupling.m"
  {
#line 960 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 960 "tupling.m"
    MR_Float transform_hlds__tupling__conv5_STATE_VARIABLE_Loads_35;
#line 960 "tupling.m"
    MR_Float transform_hlds__tupling__conv4_STATE_VARIABLE_Stores_37;

#line 960 "tupling.m"
    {
#line 960 "tupling.m"
      transform_hlds__tupling__count_load_stores_for_scc_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), MR_unbox_float(transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv5_STATE_VARIABLE_Loads_35, MR_unbox_float(transform_hlds__tupling__wrapper_arg_4), &transform_hlds__tupling__conv4_STATE_VARIABLE_Stores_37);
    }
#line 960 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = MR_box_float(transform_hlds__tupling__conv5_STATE_VARIABLE_Loads_35);
#line 960 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_5 = MR_box_float(transform_hlds__tupling__conv4_STATE_VARIABLE_Stores_37);
#line 960 "tupling.m"
  }
#line 960 "tupling.m"
}

#line 337 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_1(
#line 337 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 337 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 337 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 337 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 337 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 337 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5)
#line 337 "tupling.m"
{
#line 337 "tupling.m"
  {
#line 337 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 337 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_STATE_VARIABLE_ReverseGoalPathMapMap_32;
#line 337 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_ModuleInfo_34;

#line 337 "tupling.m"
    {
#line 337 "tupling.m"
      transform_hlds__tupling__prepare_proc_for_counting_5_p_0(((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv1_STATE_VARIABLE_ReverseGoalPathMapMap_32, ((MR_Word) transform_hlds__tupling__wrapper_arg_4), &transform_hlds__tupling__conv0_STATE_VARIABLE_ModuleInfo_34);
    }
#line 337 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv1_STATE_VARIABLE_ReverseGoalPathMapMap_32));
#line 337 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_ModuleInfo_34));
#line 337 "tupling.m"
  }
#line 337 "tupling.m"
}

#line 330 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_2_11_p_0(
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_12,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_13,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__PredProcIds_14,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__CandidateHeadVars_15,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_25,
#line 330 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_26,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_27,
#line 330 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_28,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_29,
#line 330 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_30,
#line 330 "tupling.m"
  MR_Word transform_hlds__tupling__VeryVerbose_19)
#line 330 "tupling.m"
{
#line 336 "tupling.m"
  {
#line 336 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 336 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_53_53 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 336 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_26_76;
#line 336 "tupling.m"
    MR_Word transform_hlds__tupling__ReverseGoalPathMapMap_20;
#line 336 "tupling.m"
    MR_Word transform_hlds__tupling__CostsWithoutTupling_21;
#line 336 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32;
#line 336 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33;
#line 336 "tupling.m"
    MR_Word transform_hlds__tupling__V_34_34;
#line 336 "tupling.m"
    MR_Float transform_hlds__tupling__Loads_65;
#line 336 "tupling.m"
    MR_Float transform_hlds__tupling__Stores_66;
#line 336 "tupling.m"
    MR_Word transform_hlds__tupling__V_67_67;
#line 337 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_ReverseGoalPathMapMap_20;
#line 337 "tupling.m"
    MR_Box transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_33_33;
#line 959 "tupling.m"
    MR_Box transform_hlds__tupling__conv7_Loads_65;
#line 959 "tupling.m"
    MR_Box transform_hlds__tupling__conv6_Stores_66;
#line 352 "tupling.m"
    MR_Float transform_hlds__tupling__V_43_43;
#line 352 "tupling.m"
    MR_Float transform_hlds__tupling__V_44_44;

#line 338 "tupling.m"
    {
#line 338 "tupling.m"
      transform_hlds__tupling__V_32_32 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__tupling_scalar_common_2[3]);
    }
#line 337 "tupling.m"
    {
#line 337 "tupling.m"
      mercury__list__foldl2_6_p_0(transform_hlds__tupling__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__tupling_scalar_common_2[4], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[11], transform_hlds__tupling__PredProcIds_14, ((MR_Box) (transform_hlds__tupling__V_32_32)), &transform_hlds__tupling__conv3_ReverseGoalPathMapMap_20, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_25)), &transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_33_33);
    }
#line 337 "tupling.m"
    transform_hlds__tupling__ReverseGoalPathMapMap_20 = ((MR_Word) transform_hlds__tupling__conv3_ReverseGoalPathMapMap_20);
#line 337 "tupling.m"
    transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_33_33);
#line 341 "tupling.m"
    {
#line 341 "tupling.m"
      transform_hlds__tupling__V_34_34 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_tupling_proposal_0);
    }
#line 960 "tupling.m"
    {
#line 960 "tupling.m"
      transform_hlds__tupling__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_67_67, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[1]));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_67_67, 1) = ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_2_11_p_0_2));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_67_67, 3) = ((MR_Box) (transform_hlds__tupling__TraceCounts_12));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_67_67, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_13));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_67_67, 5) = ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_67_67, 6) = ((MR_Box) (transform_hlds__tupling__V_34_34));
#line 960 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_67_67, 7) = ((MR_Box) (transform_hlds__tupling__ReverseGoalPathMapMap_20));
#line 960 "tupling.m"
    }
#line 17632 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_26_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 959 "tupling.m"
    {
#line 959 "tupling.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__tupling__TypeCtorInfo_26_76, transform_hlds__tupling__TypeCtorInfo_26_76, transform_hlds__tupling__V_67_67, transform_hlds__tupling__PredProcIds_14, MR_box_float((MR_Float) 0.0000000000000000), &transform_hlds__tupling__conv7_Loads_65, MR_box_float((MR_Float) 0.0000000000000000), &transform_hlds__tupling__conv6_Stores_66);
    }
#line 959 "tupling.m"
    transform_hlds__tupling__Loads_65 = MR_unbox_float(transform_hlds__tupling__conv7_Loads_65);
#line 959 "tupling.m"
    transform_hlds__tupling__Stores_66 = MR_unbox_float(transform_hlds__tupling__conv6_Stores_66);
#line 963 "tupling.m"
    {
#line 963 "tupling.m"
      transform_hlds__tupling__CostsWithoutTupling_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 963 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithoutTupling_21, 0) = MR_box_float(transform_hlds__tupling__Loads_65);
#line 963 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithoutTupling_21, 1) = MR_box_float(transform_hlds__tupling__Stores_66);
#line 963 "tupling.m"
    }
#line 349 "tupling.m"
    if ((transform_hlds__tupling__VeryVerbose_19 == (MR_Integer) 0))
#line 350 "tupling.m"
      {
#line 350 "tupling.m"
      }
#line 349 "tupling.m"
    else
#line 345 "tupling.m"
      {
#line 345 "tupling.m"
        MR_Word transform_hlds__tupling__V_37_37;
#line 345 "tupling.m"
        MR_Word transform_hlds__tupling__V_39_39;
#line 345 "tupling.m"
        MR_Word transform_hlds__tupling__V_40_40;
#line 345 "tupling.m"
        MR_Word transform_hlds__tupling__V_41_41;

#line 347 "tupling.m"
        {
#line 347 "tupling.m"
          transform_hlds__tupling__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 347 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_39_39, 0) = MR_box_float(transform_hlds__tupling__Loads_65);
#line 347 "tupling.m"
        }
#line 347 "tupling.m"
        {
#line 347 "tupling.m"
          transform_hlds__tupling__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 347 "tupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_41_41, 0) = MR_box_float(transform_hlds__tupling__Stores_66);
#line 347 "tupling.m"
        }
#line 347 "tupling.m"
        {
#line 347 "tupling.m"
          transform_hlds__tupling__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_40_40, 0) = ((MR_Box) (transform_hlds__tupling__V_41_41));
#line 347 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "tupling.m"
        }
#line 347 "tupling.m"
        {
#line 347 "tupling.m"
          transform_hlds__tupling__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_37_37, 0) = ((MR_Box) (transform_hlds__tupling__V_39_39));
#line 347 "tupling.m"
          MR_hl_field(MR_mktag(1), transform_hlds__tupling__V_37_37, 1) = ((MR_Box) (transform_hlds__tupling__V_40_40));
#line 347 "tupling.m"
        }
#line 346 "tupling.m"
        {
#line 346 "tupling.m"
          mercury__io__format_4_p_0((MR_String) "%% SCC costs without tupling = {%g, %g}\n", transform_hlds__tupling__V_37_37);
        }
#line 345 "tupling.m"
      }
#line 352 "tupling.m"
    transform_hlds__tupling__V_43_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithoutTupling_21, (MR_Integer) 0)));
#line 352 "tupling.m"
    transform_hlds__tupling__V_44_44 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__tupling__CostsWithoutTupling_21, (MR_Integer) 1)));
#line 352 "tupling.m"
    transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_43_43 == ((MR_Float) 0.0000000000000000));
#line 352 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 352 "tupling.m"
      transform_hlds__tupling__succeeded = (transform_hlds__tupling__V_44_44 == ((MR_Float) 0.0000000000000000));
#line 355 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 354 "tupling.m"
      {
#line 354 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_TransformMap_30 = transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_29;
#line 354 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_Counter_28 = transform_hlds__tupling__STATE_VARIABLE_Counter_0_27;
#line 354 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_26 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33;
#line 354 "tupling.m"
      }
#line 355 "tupling.m"
    else
#line 356 "tupling.m"
      {
#line 356 "tupling.m"
        transform_hlds__tupling__maybe_tuple_scc_3_13_p_0(transform_hlds__tupling__TraceCounts_12, transform_hlds__tupling__TuningParams_13, transform_hlds__tupling__ReverseGoalPathMapMap_20, transform_hlds__tupling__PredProcIds_14, transform_hlds__tupling__CandidateHeadVars_15, transform_hlds__tupling__CostsWithoutTupling_21, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_26, transform_hlds__tupling__STATE_VARIABLE_Counter_0_27, transform_hlds__tupling__STATE_VARIABLE_Counter_28, transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_29, transform_hlds__tupling__STATE_VARIABLE_TransformMap_30, transform_hlds__tupling__VeryVerbose_19);
#line 356 "tupling.m"
        return;
      }
#line 336 "tupling.m"
  }
#line 330 "tupling.m"
}

#line 480 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_7(
#line 480 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 480 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 480 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 480 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 480 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 480 "tupling.m"
{
#line 480 "tupling.m"
  {
#line 480 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 480 "tupling.m"
    MR_Word transform_hlds__tupling__conv3_CandidateHeadVars_8;

#line 480 "tupling.m"
    {
#line 480 "tupling.m"
      transform_hlds__tupling__common_candidate_headvars_of_procs_2_4_p_0(((MR_String) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3), &transform_hlds__tupling__conv3_CandidateHeadVars_8);
    }
#line 480 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_4 = ((MR_Box) (transform_hlds__tupling__conv3_CandidateHeadVars_8));
#line 480 "tupling.m"
  }
#line 480 "tupling.m"
}

#line 476 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_6(
#line 476 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 476 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 476 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_2)
#line 476 "tupling.m"
{
#line 476 "tupling.m"
  {
#line 476 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 476 "tupling.m"
    MR_Word transform_hlds__tupling__conv2_CandidateHeadVars_8;

#line 476 "tupling.m"
    {
#line 476 "tupling.m"
      transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), &transform_hlds__tupling__conv2_CandidateHeadVars_8);
    }
#line 476 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__tupling__conv2_CandidateHeadVars_8));
#line 476 "tupling.m"
  }
#line 476 "tupling.m"
}

#line 266 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_1(
#line 266 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 266 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 266 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 266 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 266 "tupling.m"
{
#line 266 "tupling.m"
  {
#line 266 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;

#line 266 "tupling.m"
    {
#line 266 "tupling.m"
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1));
#line 266 "tupling.m"
      return;
    }
#line 266 "tupling.m"
  }
#line 266 "tupling.m"
}

#line 316 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_2(
#line 316 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 316 "tupling.m"
{
#line 316 "tupling.m"
  {
#line 316 "tupling.m"
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 316 "tupling.m"
    MR_builtin_longjmp((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__commit_0, 1);
#line 316 "tupling.m"
  }
#line 316 "tupling.m"
}

#line 316 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_4(
#line 316 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 316 "tupling.m"
{
#line 316 "tupling.m"
  {
#line 316 "tupling.m"
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 316 "tupling.m"
    (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeProc_65 = ((MR_Word) (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__conv1_CalleeProc_65);
#line 316 "tupling.m"
    {
#line 316 "tupling.m"
      transform_hlds__tupling__maybe_tuple_scc_10_p_0_3(transform_hlds__tupling__env_ptr);
#line 316 "tupling.m"
      return;
    }
#line 316 "tupling.m"
  }
#line 316 "tupling.m"
}

#line 316 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_3(
#line 316 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 316 "tupling.m"
{
#line 316 "tupling.m"
  {
#line 316 "tupling.m"
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 17902 "transform_hlds.tupling.c"
    (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 324 "tupling.m"
    {
#line 324 "tupling.m"
      mercury__digraph__lookup_key_3_p_0((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_71, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13, ((MR_Box) ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeProc_65)), &(transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeKey_69);
    }
#line 325 "tupling.m"
    {
#line 325 "tupling.m"
      mercury__digraph__lookup_to_3_p_0((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeCtorInfo_7_71, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CalleeKey_69, &(transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CallingKeys_70);
    }
#line 17914 "transform_hlds.tupling.c"
    (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeInfo_8_72 = (MR_Word) &transform_hlds__tupling_scalar_common_1[2];
#line 326 "tupling.m"
    {
#line 326 "tupling.m"
      (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = mercury__set__is_non_empty_1_p_0((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__TypeInfo_8_72, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__CallingKeys_70);
    }
#line 326 "tupling.m"
    if ((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
#line 326 "tupling.m"
      {
#line 326 "tupling.m"
        transform_hlds__tupling__maybe_tuple_scc_10_p_0_2(transform_hlds__tupling__env_ptr);
#line 326 "tupling.m"
        return;
      }
#line 316 "tupling.m"
  }
#line 316 "tupling.m"
}

#line 316 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0_5(
#line 316 "tupling.m"
  void * transform_hlds__tupling__env_ptr_arg)
#line 316 "tupling.m"
{
#line 316 "tupling.m"
  {
#line 316 "tupling.m"
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s * transform_hlds__tupling__env_ptr = (struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s *) transform_hlds__tupling__env_ptr_arg;

#line 316 "tupling.m"
    if (MR_builtin_setjmp((transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__commit_0) == 0)
#line 316 "tupling.m"
      {
#line 316 "tupling.m"
        {
#line 316 "tupling.m"
          {
#line 316 "tupling.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &(transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__conv1_CalleeProc_65, (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, transform_hlds__tupling__maybe_tuple_scc_10_p_0_4, transform_hlds__tupling__env_ptr);
          }
#line 316 "tupling.m"
        }
#line 316 "tupling.m"
        (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = MR_FALSE;
#line 316 "tupling.m"
      }
#line 316 "tupling.m"
    else
#line 316 "tupling.m"
      (transform_hlds__tupling__env_ptr)->transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = MR_TRUE;
#line 316 "tupling.m"
  }
#line 316 "tupling.m"
}

#line 253 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__maybe_tuple_scc_10_p_0(
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts_11,
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__TuningParams_12,
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__DepGraph_13,
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__SCC_14,
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24,
#line 253 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_25,
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_Counter_0_26,
#line 253 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_Counter_27,
#line 253 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_28,
#line 253 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_TransformMap_29)
#line 253 "tupling.m"
{
#line 253 "tupling.m"
  {
#line 253 "tupling.m"
    struct transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0_s transform_hlds__tupling__env;

#line 253 "tupling.m"
    (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__DepGraph_13 = transform_hlds__tupling__DepGraph_13;
#line 253 "tupling.m"
    (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14 = transform_hlds__tupling__SCC_14;
#line 259 "tupling.m"
    {
#line 259 "tupling.m"
      MR_Word transform_hlds__tupling__Globals_18;
#line 259 "tupling.m"
      MR_Word transform_hlds__tupling__VeryVerbose_19;

#line 260 "tupling.m"
      {
#line 260 "tupling.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__tupling__Globals_18);
      }
#line 261 "tupling.m"
      {
#line 261 "tupling.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__tupling__Globals_18, (MR_Integer) 46, &transform_hlds__tupling__VeryVerbose_19);
      }
#line 269 "tupling.m"
      if ((transform_hlds__tupling__VeryVerbose_19 == (MR_Integer) 0))
#line 270 "tupling.m"
        {
#line 270 "tupling.m"
        }
#line 269 "tupling.m"
      else
#line 264 "tupling.m"
        {
#line 264 "tupling.m"
          MR_Word transform_hlds__tupling__V_34_34;
#line 266 "tupling.m"
          MR_Box transform_hlds__tupling__conv0_STATE_VARIABLE_IO_35_35;

#line 265 "tupling.m"
          {
#line 265 "tupling.m"
            mercury__io__write_string_3_p_0((MR_String) "% Considering tupling in ");
          }
#line 266 "tupling.m"
          {
#line 266 "tupling.m"
            transform_hlds__tupling__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 266 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_34_34, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[1]));
#line 266 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_34_34, 1) = ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_10_p_0_1));
#line 266 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 266 "tupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_34_34, 3) = ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24));
#line 266 "tupling.m"
          }
#line 266 "tupling.m"
          {
#line 266 "tupling.m"
            mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__tupling__V_34_34, (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__tupling__conv0_STATE_VARIABLE_IO_35_35);
          }
#line 267 "tupling.m"
          {
#line 267 "tupling.m"
            mercury__io__write_string_3_p_0((MR_String) "...\n");
          }
#line 264 "tupling.m"
        }
#line 316 "tupling.m"
      {
#line 316 "tupling.m"
        transform_hlds__tupling__maybe_tuple_scc_10_p_0_5(&transform_hlds__tupling__env);
      }
#line 295 "tupling.m"
      if ((transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
#line 279 "tupling.m"
        {
#line 279 "tupling.m"
          MR_Word transform_hlds__tupling__CandidateHeadVars_22;
#line 279 "tupling.m"
          MR_Integer transform_hlds__tupling__MinArgsToTuple_23;
#line 276 "tupling.m"
          MR_Word transform_hlds__tupling__SingleProc_21;
#line 273 "tupling.m"
          MR_Word transform_hlds__tupling__V_38_38;
#line 280 "tupling.m"
          MR_Integer transform_hlds__tupling__V_49_49;
#line 280 "tupling.m"
          MR_Integer transform_hlds__tupling__V_50_50;
#line 280 "tupling.m"
          MR_Integer transform_hlds__tupling__V_51_51;
#line 280 "tupling.m"
          MR_Integer transform_hlds__tupling__V_52_52;
#line 280 "tupling.m"
          MR_Integer transform_hlds__tupling__V_53_53;
#line 280 "tupling.m"
          MR_Integer transform_hlds__tupling__V_54_54;
#line 280 "tupling.m"
          MR_Integer transform_hlds__tupling__V_55_55;
#line 281 "tupling.m"
          MR_Integer transform_hlds__tupling__V_39_39;

#line 273 "tupling.m"
          (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14)) == (MR_mktag((MR_Integer) 1)));
#line 273 "tupling.m"
          if ((transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
#line 273 "tupling.m"
            {
#line 273 "tupling.m"
              transform_hlds__tupling__SingleProc_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, (MR_Integer) 0)));
#line 273 "tupling.m"
              transform_hlds__tupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, (MR_Integer) 1)));
#line 273 "tupling.m"
              (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = (transform_hlds__tupling__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "tupling.m"
            }
#line 276 "tupling.m"
          if ((transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
#line 274 "tupling.m"
            {
#line 274 "tupling.m"
              transform_hlds__tupling__candidate_headvars_of_proc_3_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24, transform_hlds__tupling__SingleProc_21, &transform_hlds__tupling__CandidateHeadVars_22);
            }
#line 276 "tupling.m"
          else
#line 475 "tupling.m"
            {
#line 475 "tupling.m"
              MR_Word transform_hlds__tupling__TypeInfo_16_85;
#line 475 "tupling.m"
              MR_Word transform_hlds__tupling__TypeCtorInfo_18_87;
#line 475 "tupling.m"
              MR_Word transform_hlds__tupling__ListsOfCandidates_76;
#line 475 "tupling.m"
              MR_Word transform_hlds__tupling__FlatListOfCandidates_77;
#line 475 "tupling.m"
              MR_Word transform_hlds__tupling__CandidatesMultiMap_78;
#line 475 "tupling.m"
              MR_Word transform_hlds__tupling__V_79_79;
#line 480 "tupling.m"
              MR_Box transform_hlds__tupling__conv4_CandidateHeadVars_22;

#line 476 "tupling.m"
              {
#line 476 "tupling.m"
                transform_hlds__tupling__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 476 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_79_79, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_7[0]));
#line 476 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_79_79, 1) = ((MR_Box) (transform_hlds__tupling__maybe_tuple_scc_10_p_0_6));
#line 476 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 476 "tupling.m"
                MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_79_79, 3) = ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24));
#line 476 "tupling.m"
              }
#line 18158 "transform_hlds.tupling.c"
              transform_hlds__tupling__TypeInfo_16_85 = (MR_Word) &transform_hlds__tupling_scalar_common_1[3];
#line 476 "tupling.m"
              {
#line 476 "tupling.m"
                mercury__list__map_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__tupling__TypeInfo_16_85, transform_hlds__tupling__V_79_79, (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, &transform_hlds__tupling__ListsOfCandidates_76);
              }
#line 478 "tupling.m"
              {
#line 478 "tupling.m"
                mercury__list__condense_2_p_0((MR_Word) &transform_hlds__tupling_scalar_common_2[2], transform_hlds__tupling__ListsOfCandidates_76, &transform_hlds__tupling__FlatListOfCandidates_77);
              }
#line 18170 "transform_hlds.tupling.c"
              transform_hlds__tupling__TypeCtorInfo_18_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 479 "tupling.m"
              {
#line 479 "tupling.m"
                mercury__multi_map__from_flat_assoc_list_2_p_0(transform_hlds__tupling__TypeCtorInfo_18_87, (MR_Word) &transform_hlds__tupling_scalar_common_2[1], transform_hlds__tupling__FlatListOfCandidates_77, &transform_hlds__tupling__CandidatesMultiMap_78);
              }
#line 480 "tupling.m"
              {
#line 480 "tupling.m"
                mercury__map__foldl_4_p_0(transform_hlds__tupling__TypeCtorInfo_18_87, (MR_Word) &transform_hlds__tupling_scalar_common_1[4], transform_hlds__tupling__TypeInfo_16_85, (MR_Word) &transform_hlds__tupling_scalar_common_2[10], transform_hlds__tupling__CandidatesMultiMap_78, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__tupling__conv4_CandidateHeadVars_22);
              }
#line 480 "tupling.m"
              transform_hlds__tupling__CandidateHeadVars_22 = ((MR_Word) transform_hlds__tupling__conv4_CandidateHeadVars_22);
#line 475 "tupling.m"
            }
#line 280 "tupling.m"
          transform_hlds__tupling__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 0)));
#line 280 "tupling.m"
          transform_hlds__tupling__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 1)));
#line 280 "tupling.m"
          transform_hlds__tupling__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 2)));
#line 280 "tupling.m"
          transform_hlds__tupling__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 3)));
#line 280 "tupling.m"
          transform_hlds__tupling__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 4)));
#line 280 "tupling.m"
          transform_hlds__tupling__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 5)));
#line 280 "tupling.m"
          transform_hlds__tupling__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 6)));
#line 280 "tupling.m"
          transform_hlds__tupling__MinArgsToTuple_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_12, (MR_Integer) 7)));
#line 281 "tupling.m"
          {
#line 281 "tupling.m"
            transform_hlds__tupling__V_39_39 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__tupling_scalar_common_2[2], transform_hlds__tupling__CandidateHeadVars_22);
          }
#line 281 "tupling.m"
          (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded = (transform_hlds__tupling__V_39_39 < transform_hlds__tupling__MinArgsToTuple_23);
#line 290 "tupling.m"
          if ((transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__succeeded)
#line 287 "tupling.m"
            {
#line 287 "tupling.m"
              if ((transform_hlds__tupling__VeryVerbose_19 == (MR_Integer) 0))
#line 288 "tupling.m"
                {
#line 288 "tupling.m"
                }
#line 287 "tupling.m"
              else
#line 284 "tupling.m"
                {
#line 285 "tupling.m"
                  {
#line 285 "tupling.m"
                    mercury__io__write_string_3_p_0((MR_String) "% Too few candidate headvars.\n");
                  }
#line 284 "tupling.m"
                }
#line 288 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_TransformMap_29 = transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_28;
#line 288 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_Counter_27 = transform_hlds__tupling__STATE_VARIABLE_Counter_0_26;
#line 288 "tupling.m"
              *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_25 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24;
#line 287 "tupling.m"
            }
#line 290 "tupling.m"
          else
#line 291 "tupling.m"
            {
#line 291 "tupling.m"
              transform_hlds__tupling__maybe_tuple_scc_2_11_p_0(transform_hlds__tupling__TraceCounts_11, transform_hlds__tupling__TuningParams_12, (transform_hlds__tupling__env).transform_hlds__tupling__maybe_tuple_scc_10_p_0_env_0__SCC_14, transform_hlds__tupling__CandidateHeadVars_22, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_25, transform_hlds__tupling__STATE_VARIABLE_Counter_0_26, transform_hlds__tupling__STATE_VARIABLE_Counter_27, transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_28, transform_hlds__tupling__STATE_VARIABLE_TransformMap_29, transform_hlds__tupling__VeryVerbose_19);
#line 291 "tupling.m"
              return;
            }
#line 279 "tupling.m"
        }
#line 295 "tupling.m"
      else
#line 306 "tupling.m"
        {
#line 306 "tupling.m"
          if ((transform_hlds__tupling__VeryVerbose_19 == (MR_Integer) 0))
#line 307 "tupling.m"
            {
#line 307 "tupling.m"
            }
#line 306 "tupling.m"
          else
#line 303 "tupling.m"
            {
#line 304 "tupling.m"
              {
#line 304 "tupling.m"
                mercury__io__write_string_3_p_0((MR_String) "% SCC has no local callers.\n");
              }
#line 303 "tupling.m"
            }
#line 307 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_TransformMap_29 = transform_hlds__tupling__STATE_VARIABLE_TransformMap_0_28;
#line 307 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_Counter_27 = transform_hlds__tupling__STATE_VARIABLE_Counter_0_26;
#line 307 "tupling.m"
          *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_25 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_24;
#line 306 "tupling.m"
        }
#line 259 "tupling.m"
    }
#line 253 "tupling.m"
  }
#line 253 "tupling.m"
}

#line 1683 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_3(
#line 1683 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 1683 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 1683 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 1683 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_3,
#line 1683 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_4)
#line 1683 "tupling.m"
{
#line 1683 "tupling.m"
  {
#line 1683 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 1683 "tupling.m"
    MR_Word transform_hlds__tupling__conv8_STATE_VARIABLE_ModuleInfo_14;

#line 1683 "tupling.m"
    {
#line 1683 "tupling.m"
      transform_hlds__tupling__fix_calls_in_transformed_procs_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), ((MR_Word) transform_hlds__tupling__wrapper_arg_3), &transform_hlds__tupling__conv8_STATE_VARIABLE_ModuleInfo_14);
    }
#line 1683 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_4 = ((MR_Box) (transform_hlds__tupling__conv8_STATE_VARIABLE_ModuleInfo_14));
#line 1683 "tupling.m"
  }
#line 1683 "tupling.m"
}

#line 229 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_2(
#line 229 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 229 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 229 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 229 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3)
#line 229 "tupling.m"
{
#line 229 "tupling.m"
  {
#line 229 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 229 "tupling.m"
    MR_Word transform_hlds__tupling__conv6_STATE_VARIABLE_ModuleInfo_9;

#line 229 "tupling.m"
    {
#line 229 "tupling.m"
      transform_hlds__tupling__fix_calls_in_procs_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv6_STATE_VARIABLE_ModuleInfo_9);
    }
#line 229 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv6_STATE_VARIABLE_ModuleInfo_9));
#line 229 "tupling.m"
  }
#line 229 "tupling.m"
}

#line 223 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_1(
#line 223 "tupling.m"
  MR_Box transform_hlds__tupling__closure_arg,
#line 223 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_1,
#line 223 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_2,
#line 223 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_3,
#line 223 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_4,
#line 223 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_5,
#line 223 "tupling.m"
  MR_Box transform_hlds__tupling__wrapper_arg_6,
#line 223 "tupling.m"
  MR_Box * transform_hlds__tupling__wrapper_arg_7)
#line 223 "tupling.m"
{
#line 223 "tupling.m"
  {
#line 223 "tupling.m"
    MR_Box transform_hlds__tupling__closure = transform_hlds__tupling__closure_arg;
#line 223 "tupling.m"
    MR_Word transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_25;
#line 223 "tupling.m"
    MR_Word transform_hlds__tupling__conv1_STATE_VARIABLE_Counter_27;
#line 223 "tupling.m"
    MR_Word transform_hlds__tupling__conv0_STATE_VARIABLE_TransformMap_29;

#line 223 "tupling.m"
    {
#line 223 "tupling.m"
      transform_hlds__tupling__maybe_tuple_scc_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__tupling__wrapper_arg_1), ((MR_Word) transform_hlds__tupling__wrapper_arg_2), &transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_25, ((MR_Word) transform_hlds__tupling__wrapper_arg_4), &transform_hlds__tupling__conv1_STATE_VARIABLE_Counter_27, ((MR_Word) transform_hlds__tupling__wrapper_arg_6), &transform_hlds__tupling__conv0_STATE_VARIABLE_TransformMap_29);
    }
#line 223 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__tupling__conv2_STATE_VARIABLE_ModuleInfo_25));
#line 223 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__tupling__conv1_STATE_VARIABLE_Counter_27));
#line 223 "tupling.m"
    *transform_hlds__tupling__wrapper_arg_7 = ((MR_Box) (transform_hlds__tupling__conv0_STATE_VARIABLE_TransformMap_29));
#line 223 "tupling.m"
  }
#line 223 "tupling.m"
}

#line 186 "tupling.m"
static void MR_CALL 
transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0(
#line 186 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23,
#line 186 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24,
#line 186 "tupling.m"
  MR_Word transform_hlds__tupling__TraceCounts0_5)
#line 186 "tupling.m"
{
#line 189 "tupling.m"
  {
#line 189 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_40_40;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__TypeInfo_49_49;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__TypeCtorInfo_50_50;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__Globals_6;
#line 189 "tupling.m"
    MR_Integer transform_hlds__tupling__CellVarLoadCost_7;
#line 189 "tupling.m"
    MR_Integer transform_hlds__tupling__CellVarStoreCost_8;
#line 189 "tupling.m"
    MR_Integer transform_hlds__tupling__FieldVarLoadCost_9;
#line 189 "tupling.m"
    MR_Integer transform_hlds__tupling__FieldVarStoreCost_10;
#line 189 "tupling.m"
    MR_Integer transform_hlds__tupling__CostsRatio_11;
#line 189 "tupling.m"
    MR_Integer transform_hlds__tupling__MinArgsToTuple_12;
#line 189 "tupling.m"
    MR_Integer transform_hlds__tupling__NormalVarStoreCost_13;
#line 189 "tupling.m"
    MR_Integer transform_hlds__tupling__NormalVarLoadCost_14;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__TuningParams_15;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__ModuleName_16;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__TraceCounts_17;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__DepInfo_18;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__DepGraph_19;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__SCCs_20;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__TransformMap_22;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31_31;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__V_32_32;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__V_34_34;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__V_35_35;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__V_37_37;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_38_38;
#line 189 "tupling.m"
    MR_Word transform_hlds__tupling__V_60_60;
#line 223 "tupling.m"
    MR_Word transform_hlds__tupling__V_21_21;
#line 223 "tupling.m"
    MR_Box transform_hlds__tupling__conv5_STATE_VARIABLE_ModuleInfo_33_33;
#line 223 "tupling.m"
    MR_Box transform_hlds__tupling__conv4_V_21_21;
#line 223 "tupling.m"
    MR_Box transform_hlds__tupling__conv3_TransformMap_22;
#line 229 "tupling.m"
    MR_Box transform_hlds__tupling__conv7_STATE_VARIABLE_ModuleInfo_38_38;
#line 1683 "tupling.m"
    MR_Box transform_hlds__tupling__conv9_STATE_VARIABLE_ModuleInfo_24;

#line 190 "tupling.m"
    {
#line 190 "tupling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__tupling__Globals_6);
    }
#line 192 "tupling.m"
    {
#line 192 "tupling.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__tupling__Globals_6, (MR_Integer) 376, &transform_hlds__tupling__CellVarLoadCost_7);
    }
#line 194 "tupling.m"
    {
#line 194 "tupling.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__tupling__Globals_6, (MR_Integer) 375, &transform_hlds__tupling__CellVarStoreCost_8);
    }
#line 196 "tupling.m"
    {
#line 196 "tupling.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__tupling__Globals_6, (MR_Integer) 378, &transform_hlds__tupling__FieldVarLoadCost_9);
    }
#line 198 "tupling.m"
    {
#line 198 "tupling.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__tupling__Globals_6, (MR_Integer) 377, &transform_hlds__tupling__FieldVarStoreCost_10);
    }
#line 200 "tupling.m"
    {
#line 200 "tupling.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__tupling__Globals_6, (MR_Integer) 400, &transform_hlds__tupling__CostsRatio_11);
    }
#line 201 "tupling.m"
    {
#line 201 "tupling.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__tupling__Globals_6, (MR_Integer) 401, &transform_hlds__tupling__MinArgsToTuple_12);
    }
#line 205 "tupling.m"
    {
#line 205 "tupling.m"
      transform_hlds__tupling__NormalVarStoreCost_13 = mercury__int__min_2_f_0(transform_hlds__tupling__CellVarStoreCost_8, transform_hlds__tupling__FieldVarStoreCost_10);
    }
#line 206 "tupling.m"
    {
#line 206 "tupling.m"
      transform_hlds__tupling__NormalVarLoadCost_14 = mercury__int__min_2_f_0(transform_hlds__tupling__CellVarLoadCost_7, transform_hlds__tupling__FieldVarLoadCost_9);
    }
#line 207 "tupling.m"
    {
#line 207 "tupling.m"
      transform_hlds__tupling__TuningParams_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 207 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 0) = ((MR_Box) (transform_hlds__tupling__NormalVarLoadCost_14));
#line 207 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 1) = ((MR_Box) (transform_hlds__tupling__NormalVarStoreCost_13));
#line 207 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 2) = ((MR_Box) (transform_hlds__tupling__CellVarLoadCost_7));
#line 207 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 3) = ((MR_Box) (transform_hlds__tupling__CellVarStoreCost_8));
#line 207 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 4) = ((MR_Box) (transform_hlds__tupling__FieldVarLoadCost_9));
#line 207 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 5) = ((MR_Box) (transform_hlds__tupling__FieldVarStoreCost_10));
#line 207 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 6) = ((MR_Box) (transform_hlds__tupling__CostsRatio_11));
#line 207 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__TuningParams_15, 7) = ((MR_Box) (transform_hlds__tupling__MinArgsToTuple_12));
#line 207 "tupling.m"
    }
#line 213 "tupling.m"
    {
#line 213 "tupling.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__tupling__ModuleName_16);
    }
#line 214 "tupling.m"
    {
#line 214 "tupling.m"
      mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0(transform_hlds__tupling__ModuleName_16, transform_hlds__tupling__TraceCounts0_5, &transform_hlds__tupling__TraceCounts_17);
    }
#line 216 "tupling.m"
    {
#line 216 "tupling.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31_31);
    }
#line 217 "tupling.m"
    {
#line 217 "tupling.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__tupling__DepInfo_18);
    }
#line 18568 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 218 "tupling.m"
    {
#line 218 "tupling.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__tupling__TypeCtorInfo_40_40, transform_hlds__tupling__DepInfo_18, &transform_hlds__tupling__DepGraph_19);
    }
#line 219 "tupling.m"
    {
#line 219 "tupling.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__tupling__TypeCtorInfo_40_40, transform_hlds__tupling__DepInfo_18, &transform_hlds__tupling__SCCs_20);
    }
#line 223 "tupling.m"
    {
#line 223 "tupling.m"
      transform_hlds__tupling__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 223 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_32_32, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_4[0]));
#line 223 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_32_32, 1) = ((MR_Box) (transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_1));
#line 223 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 223 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_32_32, 3) = ((MR_Box) (transform_hlds__tupling__TraceCounts_17));
#line 223 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_32_32, 4) = ((MR_Box) (transform_hlds__tupling__TuningParams_15));
#line 223 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_32_32, 5) = ((MR_Box) (transform_hlds__tupling__DepGraph_19));
#line 223 "tupling.m"
    }
#line 224 "tupling.m"
    {
#line 224 "tupling.m"
      transform_hlds__tupling__V_34_34 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 224 "tupling.m"
    {
#line 224 "tupling.m"
      transform_hlds__tupling__V_35_35 = mercury__map__init_0_f_0(transform_hlds__tupling__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0);
    }
#line 18608 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeInfo_49_49 = (MR_Word) &transform_hlds__tupling_scalar_common_1[0];
#line 18610 "transform_hlds.tupling.c"
    transform_hlds__tupling__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 223 "tupling.m"
    {
#line 223 "tupling.m"
      mercury__list__foldl3_8_p_0(transform_hlds__tupling__TypeInfo_49_49, transform_hlds__tupling__TypeCtorInfo_50_50, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &transform_hlds__tupling_scalar_common_2[0], transform_hlds__tupling__V_32_32, transform_hlds__tupling__SCCs_20, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_31_31)), &transform_hlds__tupling__conv5_STATE_VARIABLE_ModuleInfo_33_33, ((MR_Box) (transform_hlds__tupling__V_34_34)), &transform_hlds__tupling__conv4_V_21_21, ((MR_Box) (transform_hlds__tupling__V_35_35)), &transform_hlds__tupling__conv3_TransformMap_22);
    }
#line 223 "tupling.m"
    transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__tupling__conv5_STATE_VARIABLE_ModuleInfo_33_33);
#line 223 "tupling.m"
    transform_hlds__tupling__V_21_21 = ((MR_Word) transform_hlds__tupling__conv4_V_21_21);
#line 223 "tupling.m"
    transform_hlds__tupling__TransformMap_22 = ((MR_Word) transform_hlds__tupling__conv3_TransformMap_22);
#line 229 "tupling.m"
    {
#line 229 "tupling.m"
      transform_hlds__tupling__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 229 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_5[0]));
#line 229 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 1) = ((MR_Box) (transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_2));
#line 229 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 229 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_37_37, 3) = ((MR_Box) (transform_hlds__tupling__TransformMap_22));
#line 229 "tupling.m"
    }
#line 229 "tupling.m"
    {
#line 229 "tupling.m"
      mercury__list__foldl_4_p_0(transform_hlds__tupling__TypeInfo_49_49, transform_hlds__tupling__TypeCtorInfo_50_50, transform_hlds__tupling__V_37_37, transform_hlds__tupling__SCCs_20, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_33_33)), &transform_hlds__tupling__conv7_STATE_VARIABLE_ModuleInfo_38_38);
    }
#line 229 "tupling.m"
    transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_38_38 = ((MR_Word) transform_hlds__tupling__conv7_STATE_VARIABLE_ModuleInfo_38_38);
#line 1683 "tupling.m"
    {
#line 1683 "tupling.m"
      transform_hlds__tupling__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1683 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_60_60, 0) = ((MR_Box) (&transform_hlds__tupling_scalar_common_6[0]));
#line 1683 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_60_60, 1) = ((MR_Box) (transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0_3));
#line 1683 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1683 "tupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__tupling__V_60_60, 3) = ((MR_Box) (transform_hlds__tupling__TransformMap_22));
#line 1683 "tupling.m"
    }
#line 1683 "tupling.m"
    {
#line 1683 "tupling.m"
      mercury__map__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__tupling__transform_hlds__tupling__type_ctor_info_transformed_proc_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__tupling__V_60_60, transform_hlds__tupling__TransformMap_22, ((MR_Box) (transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_38_38)), &transform_hlds__tupling__conv9_STATE_VARIABLE_ModuleInfo_24);
    }
#line 1683 "tupling.m"
    *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_24 = ((MR_Word) transform_hlds__tupling__conv9_STATE_VARIABLE_ModuleInfo_24);
#line 189 "tupling.m"
  }
#line 186 "tupling.m"
}

#line 91 "tupling.m"
void MR_CALL 
transform_hlds__tupling__tuple_arguments_4_p_0(
#line 91 "tupling.m"
  MR_Word transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13,
#line 91 "tupling.m"
  MR_Word * transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14)
#line 91 "tupling.m"
{
#line 156 "tupling.m"
  {
#line 156 "tupling.m"
    MR_bool transform_hlds__tupling__succeeded;
#line 156 "tupling.m"
    MR_Word transform_hlds__tupling__Globals_7;
#line 156 "tupling.m"
    MR_String transform_hlds__tupling__TraceCountsFile_8;

#line 160 "tupling.m"
    {
#line 160 "tupling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13, &transform_hlds__tupling__Globals_7);
    }
#line 161 "tupling.m"
    {
#line 161 "tupling.m"
      libs__globals__lookup_string_option_3_p_0(transform_hlds__tupling__Globals_7, (MR_Integer) 399, &transform_hlds__tupling__TraceCountsFile_8);
    }
#line 163 "tupling.m"
    transform_hlds__tupling__succeeded = (strcmp(transform_hlds__tupling__TraceCountsFile_8, (MR_String) "") == 0);
#line 166 "tupling.m"
    if (transform_hlds__tupling__succeeded)
#line 164 "tupling.m"
      {
#line 164 "tupling.m"
        {
#line 164 "tupling.m"
          libs__compiler_util__report_warning_4_p_0(transform_hlds__tupling__Globals_7, (MR_String) "Warning: --tuple requires --tuple-trace-counts-file to work.\n");
        }
#line 164 "tupling.m"
        *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13;
#line 164 "tupling.m"
      }
#line 166 "tupling.m"
    else
#line 167 "tupling.m"
      {
#line 167 "tupling.m"
        MR_Word transform_hlds__tupling__Result_9;

#line 167 "tupling.m"
        {
#line 167 "tupling.m"
          mdbcomp__trace_counts__read_trace_counts_source_4_p_0(transform_hlds__tupling__TraceCountsFile_8, &transform_hlds__tupling__Result_9);
        }
#line 171 "tupling.m"
        if (((MR_tag((MR_Word) transform_hlds__tupling__Result_9)) == (MR_mktag((MR_Integer) 1))))
#line 172 "tupling.m"
          {
#line 172 "tupling.m"
            MR_String transform_hlds__tupling__Message_12 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__tupling__Result_9, (MR_Integer) 0)));
#line 172 "tupling.m"
            MR_String transform_hlds__tupling__Message_31;
#line 172 "tupling.m"
            MR_String transform_hlds__tupling__V_40_40;
#line 172 "tupling.m"
            MR_Word transform_hlds__tupling__V_46_46 = (MR_Word) &transform_hlds__tupling_scalar_common_3[0];
#line 172 "tupling.m"
            MR_String transform_hlds__tupling__V_47_47;
#line 172 "tupling.m"
            MR_String transform_hlds__tupling__V_49_49;
#line 172 "tupling.m"
            MR_String transform_hlds__tupling__V_50_50;
#line 172 "tupling.m"
            MR_String transform_hlds__tupling__V_57_57;

#line 183 "tupling.m"
            {
#line 183 "tupling.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__tupling__V_46_46, transform_hlds__tupling__Message_12, &transform_hlds__tupling__V_40_40);
            }
#line 181 "tupling.m"
            {
#line 181 "tupling.m"
              transform_hlds__tupling__V_47_47 = mercury__string__f_43_43_2_f_0(transform_hlds__tupling__V_40_40, (MR_String) ")\n");
            }
#line 181 "tupling.m"
            {
#line 181 "tupling.m"
              transform_hlds__tupling__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) " (", transform_hlds__tupling__V_47_47);
            }
#line 183 "tupling.m"
            {
#line 183 "tupling.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__tupling__V_46_46, transform_hlds__tupling__TraceCountsFile_8, &transform_hlds__tupling__V_50_50);
            }
#line 181 "tupling.m"
            {
#line 181 "tupling.m"
              transform_hlds__tupling__V_57_57 = mercury__string__f_43_43_2_f_0(transform_hlds__tupling__V_50_50, transform_hlds__tupling__V_49_49);
            }
#line 181 "tupling.m"
            {
#line 181 "tupling.m"
              transform_hlds__tupling__Message_31 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: unable to read trace count summary from ", transform_hlds__tupling__V_57_57);
            }
#line 184 "tupling.m"
            {
#line 184 "tupling.m"
              libs__compiler_util__report_warning_4_p_0(transform_hlds__tupling__Globals_7, transform_hlds__tupling__Message_31);
            }
#line 173 "tupling.m"
            *transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14 = transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13;
#line 172 "tupling.m"
          }
#line 171 "tupling.m"
        else
#line 169 "tupling.m"
          {
#line 169 "tupling.m"
            MR_Word transform_hlds__tupling__TraceCounts_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Result_9, (MR_Integer) 1)));
#line 169 "tupling.m"
            MR_Word transform_hlds__tupling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__tupling__Result_9, (MR_Integer) 0)));

#line 170 "tupling.m"
            {
#line 170 "tupling.m"
              transform_hlds__tupling__tuple_arguments_with_trace_counts_3_p_0(transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__tupling__STATE_VARIABLE_ModuleInfo_14, transform_hlds__tupling__TraceCounts_11);
#line 170 "tupling.m"
              return;
            }
#line 169 "tupling.m"
          }
#line 167 "tupling.m"
      }
#line 156 "tupling.m"
  }
#line 91 "tupling.m"
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
