/*
** Automatically generated from `stack_opt.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module ll_backend.stack_opt. */
/* :- implementation. */

/*
INIT mercury__ll_backend__stack_opt__init
ENDINIT
*/

#include "ll_backend.stack_opt.mih"


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
#include "backend_libs.interval.mih"
#include "backend_libs.matching.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.live_vars.mih"
#include "ll_backend.liveness.mih"
#include "ll_backend.store_alloc.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 411 "stack_opt.m"
struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s {
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9;
#line 415 "stack_opt.m"
  MR_bool ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded;
#line 415 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116;
#line 454 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38;
#line 483 "stack_opt.m"
  jmp_buf ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0;
#line 483 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_120_120;
#line 483 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47;
#line 483 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_49;
#line 483 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_50;
#line 483 "stack_opt.m"
  MR_Box ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_PathInfo_47;
#line 485 "stack_opt.m"
  MR_Box ll_backend__stack_opt__use_cell_8_p_0_env_0__conv2_Segment_50;
#line 411 "stack_opt.m"
};


#line 189 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 192 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 195 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 198 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0;

#line 201 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0;

#line 204 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0;

#line 207 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__stack_opt__type_ctor_info_path_0;

#line 210 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 213 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_opt__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 216 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

#line 219 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0;

#line 222 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0;

#line 225 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 228 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_all_paths_0_0[3];

#line 231 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_all_paths_0_0[3];

#line 234 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0;

#line 237 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0[1];

#line 240 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0[1];

#line 243 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0[1];

#line 246 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0[1];

#line 249 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0;

#line 252 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1;

#line 255 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_value_ordered_current_segment_first_flush_0[2];

#line 258 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0[2];

#line 261 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0[2];

#line 264 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0;

#line 267 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0;

#line 270 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 273 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_info_0_0[5];

#line 276 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0;

#line 279 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0[1];

#line 282 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0[1];

#line 285 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0[1];

#line 288 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0[1];

#line 291 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 294 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_path_info_0_0[2];

#line 297 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0;

#line 300 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0[1];

#line 303 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0[1];

#line 306 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0[1];

#line 309 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_path_info_0[1];

#line 312 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 315 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_matching_result_0_0[9];

#line 318 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0;

#line 321 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0[1];

#line 324 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_matching_result_0[1];

#line 327 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_matching_result_0[1];

#line 330 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_matching_result_0[1];

#line 333 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0[1];

#line 336 "ll_backend.stack_opt.c"
static const MR_NotagFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0;

#line 339 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_path_0_0[6];

#line 342 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_path_0_0[6];

#line 345 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0;

#line 348 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0[1];

#line 351 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0[1];

#line 354 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0[1];

#line 357 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0[1];

#line 360 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 363 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0;

#line 366 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_info_0_0[3];

#line 369 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_info_0_0[3];

#line 372 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0;

#line 375 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0[1];

#line 378 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0[1];

#line 381 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0[1];

#line 384 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0[1];

#line 387 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_params_0_0[6];

#line 390 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_params_0_0[6];

#line 393 "ll_backend.stack_opt.c"
static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_stack_opt_params_0_0[6];

#line 396 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0;

#line 399 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0[1];

#line 402 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0[1];

#line 405 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0[1];

#line 408 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0[1];

#line 411 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0_10001(
#line 414 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 416 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 419 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0_10001(
#line 422 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 424 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 426 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 429 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001(
#line 432 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 434 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 437 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001(
#line 440 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 442 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 444 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 447 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0_10001(
#line 450 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 452 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 455 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0_10001(
#line 458 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 460 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 462 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 465 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0_10001(
#line 468 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 470 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 473 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0_10001(
#line 476 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 478 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 480 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 483 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0_10001(
#line 486 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 488 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 491 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0_10001(
#line 494 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 496 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 498 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 501 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001(
#line 504 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 506 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 509 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001(
#line 512 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 514 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 516 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 519 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0_10001(
#line 522 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 524 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 527 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0_10001(
#line 530 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 532 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 534 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 537 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001(
#line 540 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 542 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 545 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001(
#line 548 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 550 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 552 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 555 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001(
#line 558 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 560 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 563 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001(
#line 566 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 568 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 570 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 573 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 576 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 578 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 580 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 582 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 584 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 587 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 590 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 592 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 594 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 596 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 598 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 601 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 604 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 606 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 608 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 610 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 612 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 615 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 618 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 620 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 622 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 624 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 626 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 629 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
#line 632 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 634 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 636 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 638 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 640 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 642 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_5,
#line 644 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_6,
#line 646 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_7,
#line 648 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_8);

#line 341 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_50_93_95_48_4_p_0(
#line 341 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 341 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 341 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 340 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_p_0(
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 340 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 339 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 339 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 338 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 338 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 534 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1(
#line 534 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 534 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 534 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 534 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 534 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 526 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(
#line 526 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 526 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_11,
#line 526 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_13,
#line 526 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_14,
#line 526 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_15,
#line 526 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodeSets_16,
#line 526 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodeSets_17,
#line 526 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_18);

#line 506 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0(
#line 506 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_8,
#line 506 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_9,
#line 506 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 506 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_12,
#line 506 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_13,
#line 506 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_14);

#line 1151 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1151__1_3_p_0(
#line 1151 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_93);

#line 1148 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1148__1_3_p_0(
#line 1148 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_89);

#line 1125 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1125__1_2_p_0(
#line 1125 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_80,
#line 1125 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_81);

#line 1124 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1124__1_2_p_0(
#line 1124 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_75,
#line 1124 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_76);

#line 1106 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1106__1_2_p_0(
#line 1106 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_51,
#line 1106 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_52);

#line 1093 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1093__1_2_p_0(
#line 1093 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_45,
#line 1093 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_46);

#line 850 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__850__1_2_p_0(
#line 850 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_36,
#line 850 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_37);

#line 846 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__846__1_2_p_0(
#line 846 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_42,
#line 846 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_43);

#line 837 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__837__1_2_p_0(
#line 837 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_54,
#line 837 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_55);

#line 699 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__close_path__699__1_1_p_0(
#line 699 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FirstSegment0_7);

#line 341 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 341 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 341 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 341 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 341 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 340 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 340 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 339 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 339 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 338 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 338 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 378 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(
#line 378 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 378 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 378 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 378 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__4_4,
#line 378 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 378 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__6_6,
#line 378 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__7_7,
#line 378 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__8_8);

#line 147 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0(
#line 147 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 147 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 147 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 147 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0(
#line 147 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 147 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 170 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0(
#line 170 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 170 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 170 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 170 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0(
#line 170 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 170 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 658 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0(
#line 658 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 658 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 658 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 658 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0(
#line 658 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 658 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 137 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(
#line 137 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 137 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 137 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 137 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(
#line 137 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 137 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 157 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0(
#line 157 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 157 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 157 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 157 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0(
#line 157 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 157 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 381 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0(
#line 381 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 381 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 381 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 381 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0(
#line 381 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 381 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 392 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0(
#line 392 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 392 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 392 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 392 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0(
#line 392 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 392 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 654 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(
#line 654 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 654 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 654 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 654 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(
#line 654 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_1,
#line 654 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 668 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0(
#line 668 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 668 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 668 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 668 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0(
#line 668 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 668 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 1151 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_6(
#line 1151 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1151 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1151 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1151 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1148 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_5(
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1148 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1142 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_4(
#line 1142 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1142 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1137 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_3(
#line 1137 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1137 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1125 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_2(
#line 1125 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1125 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1125 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1124 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_1(
#line 1124 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1124 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1124 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1113 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0(
#line 1113 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MatchingResult_4);

#line 1106 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_2(
#line 1106 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1106 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1106 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1093 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_1(
#line 1093 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1093 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1093 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1090 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0(
#line 1090 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1088 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0_1(
#line 1088 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1088 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1088 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1088 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1081 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0(
#line 1081 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1078 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_2(
#line 1078 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1078 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1078 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1078 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1075 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_1(
#line 1075 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1075 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1075 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1075 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1070 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0(
#line 1070 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4);

#line 1046 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__maybe_write_progress_message_7_p_0(
#line 1046 "stack_opt.m"
  MR_String ll_backend__stack_opt__Message_8,
#line 1046 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_9,
#line 1046 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_10,
#line 1046 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ProcInfo_11,
#line 1046 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_12);

#line 1031 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(
#line 1031 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1027 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(
#line 1027 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1022 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_2(
#line 1022 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1022 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1019 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_1(
#line 1019 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1019 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1014 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0(
#line 1014 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 1014 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__AllPaths_2);

#line 1001 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_2(
#line 1001 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1001 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 987 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_1(
#line 987 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 987 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 978 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(
#line 978 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 978 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 978 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 978 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 978 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 978 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32,
#line 978 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_33);

#line 969 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(
#line 969 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 969 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 969 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 969 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 969 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_14,
#line 969 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_13,
#line 969 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_15);

#line 954 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__one_after_another_7_p_0(
#line 954 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_1,
#line 954 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_2,
#line 954 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_3,
#line 954 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4,
#line 954 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 954 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6,
#line 954 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_7);

#line 935 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_2(
#line 935 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 935 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 935 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 888 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_1(
#line 888 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 888 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 878 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0(
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__End_9,
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_10,
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_11,
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_12,
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_13,
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__SuccessorIds_14,
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36,
#line 878 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);

#line 850 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_3(
#line 850 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 846 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_2(
#line 846 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 837 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_1(
#line 837 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 827 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0(
#line 827 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 827 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_9,
#line 827 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_10,
#line 827 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_11,
#line 827 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_12,
#line 827 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28,
#line 827 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29);

#line 820 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1(
#line 820 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 820 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 820 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 820 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 820 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 805 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(
#line 805 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_5,
#line 805 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchInfo_6,
#line 805 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_7,
#line 805 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_8);

#line 783 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_more_successors_1_f_0(
#line 783 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 774 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_one_successor_1_f_0(
#line 774 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 765 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_no_successor_1_f_0(
#line 765 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 737 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__anchor_requires_close_2_f_0(
#line 737 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_1,
#line 737 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 730 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_anchor_to_path_2_f_0(
#line 730 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_4,
#line 730 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_8);

#line 716 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_interval_to_path_3_f_0(
#line 716 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_5,
#line 716 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Vars_6,
#line 716 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_12);

#line 699 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__close_path_1_f_0_1(
#line 699 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 692 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__close_path_1_f_0(
#line 692 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_3);

#line 681 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__extract_match_and_save_info_4_p_0(
#line 681 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_5,
#line 681 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchPathInfo_6,
#line 681 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Anchors_7,
#line 681 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Intervals_8);

#line 624 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__add_anchor_inserts_10_p_0(
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_11,
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVarsViaCellVar_12,
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__InsertIntervals_13,
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_14,
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27,
#line 624 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_28,
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29,
#line 624 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30,
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31,
#line 624 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32);

#line 609 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(
#line 609 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 609 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_11,
#line 609 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 609 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_17,
#line 609 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_18,
#line 609 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_19,
#line 609 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_20,
#line 609 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21,
#line 609 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22);

#line 595 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_2(
#line 595 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 595 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 595 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 595 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 595 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 595 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 595 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 595 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7);

#line 592 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_1(
#line 592 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 592 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 592 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 592 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 592 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 592 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 592 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 592 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7);

#line 580 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0(
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_12,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_13,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVars_14,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_15,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_16,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialAnchors_17,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialIntervals_18,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31,
#line 580 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33,
#line 580 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34);

#line 562 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_matching_for_path_8_p_0(
#line 562 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 562 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_10,
#line 562 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 562 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars_12,
#line 562 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfo_13,
#line 562 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodes_14,
#line 562 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodes_15,
#line 562 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_16);

#line 483 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_1(
#line 483 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 483 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_3(
#line 483 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 485 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_5(
#line 485 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 483 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_4(
#line 483 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 483 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_2(
#line 483 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 483 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_6(
#line 483 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 411 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0(
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FieldVarList_10,
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_11,
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_12,
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51,
#line 411 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52,
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53,
#line 411 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54);

#line 241 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__optimize_live_sets_7_p_0(
#line 241 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_8,
#line 241 "stack_opt.m"
  MR_Word ll_backend__stack_opt__OptAlloc_9,
#line 241 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60,
#line 241 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61,
#line 241 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Changed_11,
#line 241 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_12,
#line 241 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_13);


static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_1[15][2];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_2[17][3];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_3[1][1];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_4[1][12];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_5[1][13];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_6[1][4];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_8[2][7];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_9[6][5];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_10[1][10];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_11[5][6];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_12[1][11];


#line 750 "stack_opt.m"
/* sealed */ struct ll_backend__stack_opt__vector_common_type_7_0_s {
#line 750 "stack_opt.m"
  const MR_Word ll_backend__stack_opt__vector_common_type_7_0__vct_7_f_0;
#line 750 "stack_opt.m"
};

static /* final */ const struct ll_backend__stack_opt__vector_common_type_7_0_s ll_backend__stack_opt_vector_common_7[10];



static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_1[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_opt__opt_stack_alloc__arity0__)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_opt_stack_alloc_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__ll_backend__stack_opt__stack_opt_info__arity0__)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_1[0]))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_2[17][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[0])),
    ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[1])),
    ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[2])),
    ((MR_Box) (ll_backend__stack_opt__consolidate_after_join_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[3])),
    ((MR_Box) (ll_backend__stack_opt__consolidate_after_join_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_11[1])),
    ((MR_Box) (ll_backend__stack_opt__dump_stack_opt_info_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_11[2])),
    ((MR_Box) (ll_backend__stack_opt__dump_stack_opt_info_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_11[3])),
    ((MR_Box) (ll_backend__stack_opt__dump_anchor_inserts_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_insert_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_insert_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[5])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[5])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_11[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_11[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_3_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_4[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_5[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
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

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_6[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_8[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_9[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__stack_opt__type_ctor_info_path_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_11[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__stack_opt__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_12[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_params_0)),
    ((MR_Box) (&ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct ll_backend__stack_opt__vector_common_type_7_0_s ll_backend__stack_opt_vector_common_7[10] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 1 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 1 },
  /* row 8 */   {     (MR_Integer) 0 },
  /* row 9 */   {     (MR_Integer) 1 },
};


#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2125 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2133 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2141 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2149 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2157 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2165 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2173 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__stack_opt__type_ctor_info_path_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0
  }
};

#line 2181 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2189 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_opt__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2198 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 2206 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 2214 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0
  }
};

#line 2222 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2230 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_all_paths_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2237 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_all_paths_0_0[3] = {
  (MR_String) "paths_so_far",
  (MR_String) "stepped_over_model_non",
  (MR_String) "used_after_scope"
};

#line 2244 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0 = {
  (MR_String) "all_paths",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_all_paths_0_0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_names_all_paths_0_0,
  NULL,
  NULL
};

#line 2259 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0
};

#line 2264 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0
  }
};

#line 2273 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0
};

#line 2278 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0[1] = {
  (MR_Integer) 0
};

#line 2283 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____all_paths_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____all_paths_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "all_paths",
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0 },
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0
};

#line 2300 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0 = {
  (MR_String) "current_is_before_first_flush",
  (MR_Integer) 0
};

#line 2306 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1 = {
  (MR_String) "current_is_after_first_flush",
  (MR_Integer) 1
};

#line 2312 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_value_ordered_current_segment_first_flush_0[2] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0,
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1
};

#line 2318 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0[2] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1,
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0
};

#line 2324 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2330 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "current_segment_first_flush",
  {     ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0 },
  {     ll_backend__stack_opt__ll_backend__stack_opt__enum_value_ordered_current_segment_first_flush_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0
};

#line 2347 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0
  }
};

#line 2355 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2363 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2371 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2380 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0 = {
  (MR_String) "match_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2395 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0
};

#line 2400 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0
  }
};

#line 2409 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0
};

#line 2414 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0[1] = {
  (MR_Integer) 0
};

#line 2419 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____match_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____match_info_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "match_info",
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0 },
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0
};

#line 2436 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2444 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_path_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2450 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0 = {
  (MR_String) "match_path_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_path_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2465 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0
};

#line 2470 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0
  }
};

#line 2479 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0
};

#line 2484 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_path_info_0[1] = {
  (MR_Integer) 0
};

#line 2489 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____match_path_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____match_path_info_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "match_path_info",
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0 },
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_path_info_0
};

#line 2506 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2514 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_matching_result_0_0[9] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0
};

#line 2527 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0 = {
  (MR_String) "matching_result",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_matching_result_0_0,
  NULL,
  NULL,
  NULL
};

#line 2542 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0
};

#line 2547 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_matching_result_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0
  }
};

#line 2556 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_matching_result_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0
};

#line 2561 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_matching_result_0[1] = {
  (MR_Integer) 0
};

#line 2566 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____matching_result_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____matching_result_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "matching_result",
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_matching_result_0 },
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_matching_result_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_matching_result_0
};

#line 2583 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0[1] = {
  (MR_Integer) 0
};

#line 2588 "ll_backend.stack_opt.c"
static const MR_NotagFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0 = {
  (MR_String) "opt_stack_alloc",
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_String) "par_conj_own_slots"
};

#line 2595 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_opt_stack_alloc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "opt_stack_alloc",
  {     &ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0 },
  {     &ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0
};

#line 2612 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_path_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2622 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_path_0_0[6] = {
  (MR_String) "flush_state",
  (MR_String) "current_segment",
  (MR_String) "first_segment",
  (MR_String) "other_segments",
  (MR_String) "flush_anchors",
  (MR_String) "occurring_intervals"
};

#line 2632 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0 = {
  (MR_String) "path",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_path_0_0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_names_path_0_0,
  NULL,
  NULL
};

#line 2647 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0
};

#line 2652 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0
  }
};

#line 2661 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0
};

#line 2666 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0[1] = {
  (MR_Integer) 0
};

#line 2671 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____path_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____path_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "path",
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0 },
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0
};

#line 2688 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2697 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0
  }
};

#line 2705 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_params_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0
};

#line 2712 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_info_0_0[3] = {
  (MR_String) "soi_stack_opt_params",
  (MR_String) "soi_left_anchor_inserts",
  (MR_String) "soi_matching_results"
};

#line 2719 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0 = {
  (MR_String) "stack_opt_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_info_0_0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_info_0_0,
  NULL,
  NULL
};

#line 2734 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0
};

#line 2739 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0
  }
};

#line 2748 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0
};

#line 2753 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0[1] = {
  (MR_Integer) 0
};

#line 2758 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "stack_opt_info",
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0 },
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0
};

#line 2775 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_params_0_0[6] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_matching_params_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2785 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_params_0_0[6] = {
  (MR_String) "sop_matching_params",
  (MR_String) "sop_all_path_node_ratio",
  (MR_String) "sop_fixpoint_loop",
  (MR_String) "sop_full_path",
  (MR_String) "sop_on_stack",
  (MR_String) "sop_non_candidate_vars"
};

#line 2795 "ll_backend.stack_opt.c"
static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_stack_opt_params_0_0[6] = {
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
    (MR_Integer) 2,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 2829 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0 = {
  (MR_String) "stack_opt_params",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_params_0_0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_params_0_0,
  ll_backend__stack_opt__ll_backend__stack_opt__field_locns_stack_opt_params_0_0,
  NULL
};

#line 2844 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0
};

#line 2849 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0
  }
};

#line 2858 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0
};

#line 2863 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0[1] = {
  (MR_Integer) 0
};

#line 2868 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "stack_opt_params",
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0 },
  {     ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0
};

#line 2885 "ll_backend.stack_opt.c"
const MR_BaseTypeclassInfo base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_opt__opt_stack_alloc__arity0__[9] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001))
};

#line 2898 "ll_backend.stack_opt.c"
const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__ll_backend__stack_opt__stack_opt_info__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001))
};

#line 2908 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0_10001(
#line 2911 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 2913 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 2915 "ll_backend.stack_opt.c"
{
#line 2917 "ll_backend.stack_opt.c"
  {
#line 2919 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 2922 "ll_backend.stack_opt.c"
    {
#line 2924 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____all_paths_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 2927 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 2929 "ll_backend.stack_opt.c"
  }
#line 2931 "ll_backend.stack_opt.c"
}

#line 2934 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0_10001(
#line 2937 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 2939 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 2941 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 2943 "ll_backend.stack_opt.c"
{
#line 2945 "ll_backend.stack_opt.c"
  {
#line 2947 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 2950 "ll_backend.stack_opt.c"
    {
#line 2952 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____all_paths_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 2955 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 2957 "ll_backend.stack_opt.c"
  }
#line 2959 "ll_backend.stack_opt.c"
}

#line 2962 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001(
#line 2965 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 2967 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 2969 "ll_backend.stack_opt.c"
{
#line 2971 "ll_backend.stack_opt.c"
  {
#line 2973 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 2976 "ll_backend.stack_opt.c"
    {
#line 2978 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 2981 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 2983 "ll_backend.stack_opt.c"
  }
#line 2985 "ll_backend.stack_opt.c"
}

#line 2988 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001(
#line 2991 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 2993 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 2995 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 2997 "ll_backend.stack_opt.c"
{
#line 2999 "ll_backend.stack_opt.c"
  {
#line 3001 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3004 "ll_backend.stack_opt.c"
    {
#line 3006 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3009 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3011 "ll_backend.stack_opt.c"
  }
#line 3013 "ll_backend.stack_opt.c"
}

#line 3016 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0_10001(
#line 3019 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3021 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3023 "ll_backend.stack_opt.c"
{
#line 3025 "ll_backend.stack_opt.c"
  {
#line 3027 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3030 "ll_backend.stack_opt.c"
    {
#line 3032 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____match_info_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3035 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3037 "ll_backend.stack_opt.c"
  }
#line 3039 "ll_backend.stack_opt.c"
}

#line 3042 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0_10001(
#line 3045 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3047 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3049 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3051 "ll_backend.stack_opt.c"
{
#line 3053 "ll_backend.stack_opt.c"
  {
#line 3055 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3058 "ll_backend.stack_opt.c"
    {
#line 3060 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____match_info_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3063 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3065 "ll_backend.stack_opt.c"
  }
#line 3067 "ll_backend.stack_opt.c"
}

#line 3070 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0_10001(
#line 3073 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3075 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3077 "ll_backend.stack_opt.c"
{
#line 3079 "ll_backend.stack_opt.c"
  {
#line 3081 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3084 "ll_backend.stack_opt.c"
    {
#line 3086 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____match_path_info_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3089 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3091 "ll_backend.stack_opt.c"
  }
#line 3093 "ll_backend.stack_opt.c"
}

#line 3096 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0_10001(
#line 3099 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3101 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3103 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3105 "ll_backend.stack_opt.c"
{
#line 3107 "ll_backend.stack_opt.c"
  {
#line 3109 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3112 "ll_backend.stack_opt.c"
    {
#line 3114 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____match_path_info_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3117 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3119 "ll_backend.stack_opt.c"
  }
#line 3121 "ll_backend.stack_opt.c"
}

#line 3124 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0_10001(
#line 3127 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3129 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3131 "ll_backend.stack_opt.c"
{
#line 3133 "ll_backend.stack_opt.c"
  {
#line 3135 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3138 "ll_backend.stack_opt.c"
    {
#line 3140 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____matching_result_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3143 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3145 "ll_backend.stack_opt.c"
  }
#line 3147 "ll_backend.stack_opt.c"
}

#line 3150 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0_10001(
#line 3153 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3155 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3157 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3159 "ll_backend.stack_opt.c"
{
#line 3161 "ll_backend.stack_opt.c"
  {
#line 3163 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3166 "ll_backend.stack_opt.c"
    {
#line 3168 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____matching_result_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3171 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3173 "ll_backend.stack_opt.c"
  }
#line 3175 "ll_backend.stack_opt.c"
}

#line 3178 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001(
#line 3181 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3183 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3185 "ll_backend.stack_opt.c"
{
#line 3187 "ll_backend.stack_opt.c"
  {
#line 3189 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3192 "ll_backend.stack_opt.c"
    {
#line 3194 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3197 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3199 "ll_backend.stack_opt.c"
  }
#line 3201 "ll_backend.stack_opt.c"
}

#line 3204 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001(
#line 3207 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3209 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3211 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3213 "ll_backend.stack_opt.c"
{
#line 3215 "ll_backend.stack_opt.c"
  {
#line 3217 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3220 "ll_backend.stack_opt.c"
    {
#line 3222 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3225 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3227 "ll_backend.stack_opt.c"
  }
#line 3229 "ll_backend.stack_opt.c"
}

#line 3232 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0_10001(
#line 3235 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3237 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3239 "ll_backend.stack_opt.c"
{
#line 3241 "ll_backend.stack_opt.c"
  {
#line 3243 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3246 "ll_backend.stack_opt.c"
    {
#line 3248 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____path_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3251 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3253 "ll_backend.stack_opt.c"
  }
#line 3255 "ll_backend.stack_opt.c"
}

#line 3258 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0_10001(
#line 3261 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3263 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3265 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3267 "ll_backend.stack_opt.c"
{
#line 3269 "ll_backend.stack_opt.c"
  {
#line 3271 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3274 "ll_backend.stack_opt.c"
    {
#line 3276 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____path_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3279 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3281 "ll_backend.stack_opt.c"
  }
#line 3283 "ll_backend.stack_opt.c"
}

#line 3286 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001(
#line 3289 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3291 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3293 "ll_backend.stack_opt.c"
{
#line 3295 "ll_backend.stack_opt.c"
  {
#line 3297 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3300 "ll_backend.stack_opt.c"
    {
#line 3302 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____stack_opt_info_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3305 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3307 "ll_backend.stack_opt.c"
  }
#line 3309 "ll_backend.stack_opt.c"
}

#line 3312 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001(
#line 3315 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3317 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3319 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3321 "ll_backend.stack_opt.c"
{
#line 3323 "ll_backend.stack_opt.c"
  {
#line 3325 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3328 "ll_backend.stack_opt.c"
    {
#line 3330 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____stack_opt_info_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3333 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3335 "ll_backend.stack_opt.c"
  }
#line 3337 "ll_backend.stack_opt.c"
}

#line 3340 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001(
#line 3343 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3345 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3347 "ll_backend.stack_opt.c"
{
#line 3349 "ll_backend.stack_opt.c"
  {
#line 3351 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3354 "ll_backend.stack_opt.c"
    {
#line 3356 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____stack_opt_params_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3359 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3361 "ll_backend.stack_opt.c"
  }
#line 3363 "ll_backend.stack_opt.c"
}

#line 3366 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001(
#line 3369 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3371 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3373 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3375 "ll_backend.stack_opt.c"
{
#line 3377 "ll_backend.stack_opt.c"
  {
#line 3379 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3382 "ll_backend.stack_opt.c"
    {
#line 3384 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____stack_opt_params_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3387 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3389 "ll_backend.stack_opt.c"
  }
#line 3391 "ll_backend.stack_opt.c"
}

#line 3394 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 3397 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3399 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3401 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3403 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3405 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3407 "ll_backend.stack_opt.c"
{
#line 3409 "ll_backend.stack_opt.c"
  {
#line 3411 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3413 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3416 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3418 "ll_backend.stack_opt.c"
    {
#line 3420 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3423 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3425 "ll_backend.stack_opt.c"
  }
#line 3427 "ll_backend.stack_opt.c"
}

#line 3430 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 3433 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3435 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3437 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3439 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3441 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3443 "ll_backend.stack_opt.c"
{
#line 3445 "ll_backend.stack_opt.c"
  {
#line 3447 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3449 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3452 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3454 "ll_backend.stack_opt.c"
    {
#line 3456 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3459 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3461 "ll_backend.stack_opt.c"
  }
#line 3463 "ll_backend.stack_opt.c"
}

#line 3466 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 3469 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3471 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3473 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3475 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3477 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3479 "ll_backend.stack_opt.c"
{
#line 3481 "ll_backend.stack_opt.c"
  {
#line 3483 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3485 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3488 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3490 "ll_backend.stack_opt.c"
    {
#line 3492 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3495 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3497 "ll_backend.stack_opt.c"
  }
#line 3499 "ll_backend.stack_opt.c"
}

#line 3502 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 3505 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3507 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3509 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3511 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3513 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3515 "ll_backend.stack_opt.c"
{
#line 3517 "ll_backend.stack_opt.c"
  {
#line 3519 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3521 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3524 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3526 "ll_backend.stack_opt.c"
    {
#line 3528 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3531 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3533 "ll_backend.stack_opt.c"
  }
#line 3535 "ll_backend.stack_opt.c"
}

#line 3538 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
#line 3541 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3543 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3545 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3547 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3549 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 3551 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_5,
#line 3553 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_6,
#line 3555 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_7,
#line 3557 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_8)
#line 3559 "ll_backend.stack_opt.c"
{
#line 3561 "ll_backend.stack_opt.c"
  {
#line 3563 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3565 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv1_HeadVar__6_6;
#line 3567 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__8_8;

#line 3570 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3572 "ll_backend.stack_opt.c"
    {
#line 3574 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), ((MR_Word) ll_backend__stack_opt__wrapper_arg_4), ((MR_Word) ll_backend__stack_opt__wrapper_arg_5), &ll_backend__stack_opt__conv1_HeadVar__6_6, ((MR_Word) ll_backend__stack_opt__wrapper_arg_7), &ll_backend__stack_opt__conv0_HeadVar__8_8);
    }
#line 3577 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_6 = ((MR_Box) (ll_backend__stack_opt__conv1_HeadVar__6_6));
#line 3579 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_8 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__8_8));
#line 3581 "ll_backend.stack_opt.c"
  }
#line 3583 "ll_backend.stack_opt.c"
}

#line 341 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_50_93_95_48_4_p_0(
#line 341 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 341 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 341 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 341 "stack_opt.m"
{
#line 367 "stack_opt.m"
  {
#line 367 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 367 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 367 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackVarsSets_10 = (MR_Word) ll_backend__stack_opt__HeadVar__1_1;
#line 367 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackVars_11;
#line 367 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots0_12;
#line 367 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots_13;

#line 369 "stack_opt.m"
    {
#line 369 "stack_opt.m"
      ll_backend__stack_opt__StackVars_11 = parse_tree__set_of_var__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_16_16, ll_backend__stack_opt__StackVarsSets_10);
    }
#line 370 "stack_opt.m"
    ll_backend__stack_opt__ParConjOwnSlots0_12 = (MR_Word) ll_backend__stack_opt__HeadVar__3_3;
#line 371 "stack_opt.m"
    {
#line 371 "stack_opt.m"
      ll_backend__stack_opt__ParConjOwnSlots_13 = parse_tree__set_of_var__union_2_f_0(ll_backend__stack_opt__TypeCtorInfo_16_16, ll_backend__stack_opt__StackVars_11, ll_backend__stack_opt__ParConjOwnSlots0_12);
    }
#line 372 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = (MR_Word) ll_backend__stack_opt__ParConjOwnSlots_13;
#line 367 "stack_opt.m"
  }
#line 341 "stack_opt.m"
}

#line 340 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_p_0(
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 340 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 340 "stack_opt.m"
{
#line 358 "stack_opt.m"
  {
#line 358 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 358 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackVars_10 = (MR_Word) ll_backend__stack_opt__HeadVar__1_1;
#line 358 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots0_11 = (MR_Word) ll_backend__stack_opt__HeadVar__3_3;
#line 358 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots_12;

#line 361 "stack_opt.m"
    {
#line 361 "stack_opt.m"
      ll_backend__stack_opt__ParConjOwnSlots_12 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__StackVars_10, ll_backend__stack_opt__ParConjOwnSlots0_11);
    }
#line 362 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = (MR_Word) ll_backend__stack_opt__ParConjOwnSlots_12;
#line 358 "stack_opt.m"
  }
#line 340 "stack_opt.m"
}

#line 339 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 339 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 339 "stack_opt.m"
{
#line 353 "stack_opt.m"
  {
#line 353 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 353 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = ll_backend__stack_opt__HeadVar__3_3;
#line 353 "stack_opt.m"
  }
#line 339 "stack_opt.m"
}

#line 338 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 338 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 338 "stack_opt.m"
{
#line 348 "stack_opt.m"
  {
#line 348 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 348 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = ll_backend__stack_opt__HeadVar__3_3;
#line 348 "stack_opt.m"
  }
#line 338 "stack_opt.m"
}

#line 534 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1(
#line 534 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 534 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 534 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 534 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 534 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 534 "stack_opt.m"
{
#line 534 "stack_opt.m"
  {
#line 534 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 534 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv2_BenefitNodes_14;
#line 534 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_CostNodes_15;
#line 534 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_ViaCellVars_16;

#line 534 "stack_opt.m"
    {
#line 534 "stack_opt.m"
      ll_backend__stack_opt__apply_matching_for_path_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 6))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv2_BenefitNodes_14, &ll_backend__stack_opt__conv1_CostNodes_15, &ll_backend__stack_opt__conv0_ViaCellVars_16);
    }
#line 534 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv2_BenefitNodes_14));
#line 534 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv1_CostNodes_15));
#line 534 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_ViaCellVars_16));
#line 534 "stack_opt.m"
  }
#line 534 "stack_opt.m"
}

#line 526 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(
#line 526 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 526 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_11,
#line 526 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_13,
#line 526 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_14,
#line 526 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_15,
#line 526 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodeSets_16,
#line 526 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodeSets_17,
#line 526 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_18)
#line 526 "stack_opt.m"
{
#line 533 "stack_opt.m"
  while (MR_TRUE)
#line 533 "stack_opt.m"
    {
#line 533 "stack_opt.m"
      /* tailcall optimized into a loop */
#line 533 "stack_opt.m"
      {
#line 533 "stack_opt.m"
        MR_bool ll_backend__stack_opt__succeeded;
#line 533 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_38_38;
#line 533 "stack_opt.m"
        MR_Word ll_backend__stack_opt__BenefitNodeSets0_19;
#line 533 "stack_opt.m"
        MR_Word ll_backend__stack_opt__CostNodeSets0_20;
#line 533 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PathViaCellVars_21;
#line 533 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_25_25;

#line 534 "stack_opt.m"
        {
#line 534 "stack_opt.m"
          ll_backend__stack_opt__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 534 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_12[0]));
#line 534 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 1) = ((MR_Box) (ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1));
#line 534 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 534 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 3) = ((MR_Box) (ll_backend__stack_opt__CellVar_10));
#line 534 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 4) = ((MR_Box) (ll_backend__stack_opt__CellVarFlushedLater_11));
#line 534 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 5) = ((MR_Box) (ll_backend__stack_opt__StackOptParams_13));
#line 534 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 6) = ((MR_Box) (ll_backend__stack_opt__CandidateArgVars0_15));
#line 534 "stack_opt.m"
        }
#line 3811 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeInfo_38_38 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 534 "stack_opt.m"
        {
#line 534 "stack_opt.m"
          mercury__list__map3_5_p_0((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0, (MR_Word) &ll_backend__stack_opt_scalar_common_1[7], (MR_Word) &ll_backend__stack_opt_scalar_common_1[8], ll_backend__stack_opt__TypeInfo_38_38, ll_backend__stack_opt__V_25_25, ll_backend__stack_opt__PathInfos_14, &ll_backend__stack_opt__BenefitNodeSets0_19, &ll_backend__stack_opt__CostNodeSets0_20, &ll_backend__stack_opt__PathViaCellVars_21);
        }
#line 537 "stack_opt.m"
        {
#line 537 "stack_opt.m"
          ll_backend__stack_opt__succeeded = mercury__list__all_same_1_p_0(ll_backend__stack_opt__TypeInfo_38_38, ll_backend__stack_opt__PathViaCellVars_21);
        }
#line 546 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 538 "stack_opt.m"
          {
#line 538 "stack_opt.m"
            *ll_backend__stack_opt__BenefitNodeSets_16 = ll_backend__stack_opt__BenefitNodeSets0_19;
#line 539 "stack_opt.m"
            *ll_backend__stack_opt__CostNodeSets_17 = ll_backend__stack_opt__CostNodeSets0_20;
#line 542 "stack_opt.m"
            if ((ll_backend__stack_opt__PathViaCellVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "stack_opt.m"
              {
#line 544 "stack_opt.m"
                {
#line 544 "stack_opt.m"
                  *ll_backend__stack_opt__ViaCellVars_18 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                }
#line 543 "stack_opt.m"
              }
#line 542 "stack_opt.m"
            else
#line 541 "stack_opt.m"
              {
#line 541 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_22_22;

#line 541 "stack_opt.m"
                *ll_backend__stack_opt__ViaCellVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__PathViaCellVars_21, (MR_Integer) 0)));
#line 541 "stack_opt.m"
                ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__PathViaCellVars_21, (MR_Integer) 1)));
#line 541 "stack_opt.m"
              }
#line 538 "stack_opt.m"
          }
#line 546 "stack_opt.m"
        else
#line 547 "stack_opt.m"
          {
#line 547 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CandidateArgVars1_23;
#line 547 "stack_opt.m"
            MR_Word ll_backend__stack_opt__FixpointLoop_24;
#line 548 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_26_26;
#line 548 "stack_opt.m"
            MR_Integer ll_backend__stack_opt__V_27_27;
#line 548 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_28_28;
#line 548 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_29_29;
#line 548 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_30_30;

#line 547 "stack_opt.m"
            {
#line 547 "stack_opt.m"
              ll_backend__stack_opt__CandidateArgVars1_23 = parse_tree__set_of_var__intersect_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__PathViaCellVars_21);
            }
#line 548 "stack_opt.m"
            ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 0)));
#line 548 "stack_opt.m"
            ll_backend__stack_opt__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 1)));
#line 548 "stack_opt.m"
            ll_backend__stack_opt__FixpointLoop_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 548 "stack_opt.m"
            ll_backend__stack_opt__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 548 "stack_opt.m"
            ll_backend__stack_opt__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 548 "stack_opt.m"
            ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 3)));
#line 554 "stack_opt.m"
#line 554 "stack_opt.m"
            switch (ll_backend__stack_opt__FixpointLoop_24) {
#line 554 "stack_opt.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 554 "stack_opt.m"
              case (MR_Integer) 0:
#line 550 "stack_opt.m"
                {
#line 551 "stack_opt.m"
                  *ll_backend__stack_opt__BenefitNodeSets_16 = ll_backend__stack_opt__BenefitNodeSets0_19;
#line 552 "stack_opt.m"
                  *ll_backend__stack_opt__CostNodeSets_17 = ll_backend__stack_opt__CostNodeSets0_20;
#line 553 "stack_opt.m"
                  *ll_backend__stack_opt__ViaCellVars_18 = ll_backend__stack_opt__CandidateArgVars1_23;
#line 550 "stack_opt.m"
                }
#line 554 "stack_opt.m"
                break;
#line 554 "stack_opt.m"
              case (MR_Integer) 1:
#line 556 "stack_opt.m"
                {
#line 556 "stack_opt.m"
                  /* direct tailcall eliminated */
#line 556 "stack_opt.m"
                  {
#line 556 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__CandidateArgVars0__tmp_copy_15 = ll_backend__stack_opt__CandidateArgVars1_23;

#line 556 "stack_opt.m"
                    ll_backend__stack_opt__CandidateArgVars0_15 = ll_backend__stack_opt__CandidateArgVars0__tmp_copy_15;
#line 556 "stack_opt.m"
                  }
#line 556 "stack_opt.m"
                  continue;
#line 556 "stack_opt.m"
                }
#line 554 "stack_opt.m"
                break;
#line 554 "stack_opt.m"
            }
#line 547 "stack_opt.m"
          }
#line 533 "stack_opt.m"
      }
#line 533 "stack_opt.m"
      break;
#line 533 "stack_opt.m"
    }
#line 526 "stack_opt.m"
}

#line 506 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0(
#line 506 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_8,
#line 506 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_9,
#line 506 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 506 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_12,
#line 506 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_13,
#line 506 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_14)
#line 506 "stack_opt.m"
{
#line 511 "stack_opt.m"
  {
#line 511 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 511 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_31_31;
#line 511 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_32_32;
#line 511 "stack_opt.m"
    MR_Word ll_backend__stack_opt__BenefitNodeSets_15;
#line 511 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CostNodeSets_16;
#line 511 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ViaCellVars0_17;
#line 511 "stack_opt.m"
    MR_Word ll_backend__stack_opt__BenefitNodes_18;
#line 511 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CostNodes_19;
#line 511 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__NumBenefitNodes_20;
#line 511 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__NumCostNodes_21;
#line 511 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__AllPathNodeRatio_22;
#line 519 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_26_26;
#line 519 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_27_27;
#line 519 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_28_28;
#line 519 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_29_29;
#line 519 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_30_30;
#line 520 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__V_23_23;
#line 520 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__V_24_24;

#line 512 "stack_opt.m"
    {
#line 512 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(ll_backend__stack_opt__CellVar_8, ll_backend__stack_opt__CellVarFlushedLater_9, ll_backend__stack_opt__StackOptParams_11, ll_backend__stack_opt__PathInfos_12, ll_backend__stack_opt__CandidateArgVars0_13, &ll_backend__stack_opt__BenefitNodeSets_15, &ll_backend__stack_opt__CostNodeSets_16, &ll_backend__stack_opt__ViaCellVars0_17);
    }
#line 4007 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_31_31 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 515 "stack_opt.m"
    {
#line 515 "stack_opt.m"
      ll_backend__stack_opt__BenefitNodes_18 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_31_31, ll_backend__stack_opt__BenefitNodeSets_15);
    }
#line 4014 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_32_32 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 516 "stack_opt.m"
    {
#line 516 "stack_opt.m"
      ll_backend__stack_opt__CostNodes_19 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_32_32, ll_backend__stack_opt__CostNodeSets_16);
    }
#line 517 "stack_opt.m"
    {
#line 517 "stack_opt.m"
      mercury__set__count_2_p_0(ll_backend__stack_opt__TypeCtorInfo_31_31, ll_backend__stack_opt__BenefitNodes_18, &ll_backend__stack_opt__NumBenefitNodes_20);
    }
#line 518 "stack_opt.m"
    {
#line 518 "stack_opt.m"
      mercury__set__count_2_p_0(ll_backend__stack_opt__TypeCtorInfo_32_32, ll_backend__stack_opt__CostNodes_19, &ll_backend__stack_opt__NumCostNodes_21);
    }
#line 519 "stack_opt.m"
    ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 0)));
#line 519 "stack_opt.m"
    ll_backend__stack_opt__AllPathNodeRatio_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 1)));
#line 519 "stack_opt.m"
    ll_backend__stack_opt__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 519 "stack_opt.m"
    ll_backend__stack_opt__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 519 "stack_opt.m"
    ll_backend__stack_opt__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 519 "stack_opt.m"
    ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 3)));
#line 520 "stack_opt.m"
    ll_backend__stack_opt__V_23_23 = (ll_backend__stack_opt__NumBenefitNodes_20 * (MR_Integer) 100);
#line 520 "stack_opt.m"
    ll_backend__stack_opt__V_24_24 = (ll_backend__stack_opt__NumCostNodes_21 * ll_backend__stack_opt__AllPathNodeRatio_22);
#line 520 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_23_23 >= ll_backend__stack_opt__V_24_24);
#line 522 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 521 "stack_opt.m"
      *ll_backend__stack_opt__ViaCellVars_14 = ll_backend__stack_opt__ViaCellVars0_17;
#line 522 "stack_opt.m"
    else
#line 523 "stack_opt.m"
      {
#line 523 "stack_opt.m"
        {
#line 523 "stack_opt.m"
          *ll_backend__stack_opt__ViaCellVars_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 523 "stack_opt.m"
      }
#line 511 "stack_opt.m"
  }
#line 506 "stack_opt.m"
}

#line 1151 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1151__1_3_p_0(
#line 1151 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_93)
#line 1151 "stack_opt.m"
{
#line 1151 "stack_opt.m"
  {
#line 1151 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1151 "stack_opt.m"
    {
#line 1151 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__HeadVar__1_93)));
#line 1151 "stack_opt.m"
      return;
    }
#line 1151 "stack_opt.m"
  }
#line 1151 "stack_opt.m"
}

#line 1148 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1148__1_3_p_0(
#line 1148 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_89)
#line 1148 "stack_opt.m"
{
#line 1148 "stack_opt.m"
  {
#line 1148 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1148 "stack_opt.m"
    {
#line 1148 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__HeadVar__1_89)));
#line 1148 "stack_opt.m"
      return;
    }
#line 1148 "stack_opt.m"
  }
#line 1148 "stack_opt.m"
}

#line 1125 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1125__1_2_p_0(
#line 1125 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_80,
#line 1125 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_81)
#line 1125 "stack_opt.m"
{
#line 1125 "stack_opt.m"
  {
#line 1125 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1125 "stack_opt.m"
    {
#line 1125 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_80, ll_backend__stack_opt__HeadVar__2_81);
#line 1125 "stack_opt.m"
      return;
    }
#line 1125 "stack_opt.m"
  }
#line 1125 "stack_opt.m"
}

#line 1124 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1124__1_2_p_0(
#line 1124 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_75,
#line 1124 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_76)
#line 1124 "stack_opt.m"
{
#line 1124 "stack_opt.m"
  {
#line 1124 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1124 "stack_opt.m"
    {
#line 1124 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_75, ll_backend__stack_opt__HeadVar__2_76);
#line 1124 "stack_opt.m"
      return;
    }
#line 1124 "stack_opt.m"
  }
#line 1124 "stack_opt.m"
}

#line 1106 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1106__1_2_p_0(
#line 1106 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_51,
#line 1106 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_52)
#line 1106 "stack_opt.m"
{
#line 1106 "stack_opt.m"
  {
#line 1106 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1106 "stack_opt.m"
    {
#line 1106 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_51, ll_backend__stack_opt__HeadVar__2_52);
#line 1106 "stack_opt.m"
      return;
    }
#line 1106 "stack_opt.m"
  }
#line 1106 "stack_opt.m"
}

#line 1093 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1093__1_2_p_0(
#line 1093 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_45,
#line 1093 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_46)
#line 1093 "stack_opt.m"
{
#line 1093 "stack_opt.m"
  {
#line 1093 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1093 "stack_opt.m"
    {
#line 1093 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_45, ll_backend__stack_opt__HeadVar__2_46);
#line 1093 "stack_opt.m"
      return;
    }
#line 1093 "stack_opt.m"
  }
#line 1093 "stack_opt.m"
}

#line 850 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__850__1_2_p_0(
#line 850 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_36,
#line 850 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_37)
#line 850 "stack_opt.m"
{
#line 850 "stack_opt.m"
  {
#line 850 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__1_36 == ll_backend__stack_opt__HeadVar__2_37);

#line 850 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 850 "stack_opt.m"
  }
#line 850 "stack_opt.m"
}

#line 846 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__846__1_2_p_0(
#line 846 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_42,
#line 846 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_43)
#line 846 "stack_opt.m"
{
#line 846 "stack_opt.m"
  {
#line 846 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__1_42 == ll_backend__stack_opt__HeadVar__2_43);

#line 846 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 846 "stack_opt.m"
  }
#line 846 "stack_opt.m"
}

#line 837 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__837__1_2_p_0(
#line 837 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_54,
#line 837 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_55)
#line 837 "stack_opt.m"
{
#line 837 "stack_opt.m"
  {
#line 837 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__1_54 == ll_backend__stack_opt__HeadVar__2_55);

#line 837 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 837 "stack_opt.m"
  }
#line 837 "stack_opt.m"
}

#line 699 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__close_path__699__1_1_p_0(
#line 699 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FirstSegment0_7)
#line 699 "stack_opt.m"
{
#line 699 "stack_opt.m"
  {
#line 699 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 699 "stack_opt.m"
    {
#line 699 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__FirstSegment0_7);
    }
#line 699 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 699 "stack_opt.m"
  }
#line 699 "stack_opt.m"
}

#line 341 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 341 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 341 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 341 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 341 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 341 "stack_opt.m"
{
#line 367 "stack_opt.m"
  {
#line 367 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 367 "stack_opt.m"
    {
#line 367 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
#line 367 "stack_opt.m"
      return;
    }
#line 367 "stack_opt.m"
  }
#line 341 "stack_opt.m"
}

#line 340 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 340 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 340 "stack_opt.m"
{
#line 358 "stack_opt.m"
  {
#line 358 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 358 "stack_opt.m"
    {
#line 358 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
#line 358 "stack_opt.m"
      return;
    }
#line 358 "stack_opt.m"
  }
#line 340 "stack_opt.m"
}

#line 339 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 339 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 339 "stack_opt.m"
{
#line 353 "stack_opt.m"
  {
#line 353 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 353 "stack_opt.m"
    {
#line 353 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
#line 353 "stack_opt.m"
      return;
    }
#line 353 "stack_opt.m"
  }
#line 339 "stack_opt.m"
}

#line 338 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 338 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 338 "stack_opt.m"
{
#line 348 "stack_opt.m"
  {
#line 348 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 348 "stack_opt.m"
    {
#line 348 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
#line 348 "stack_opt.m"
      return;
    }
#line 348 "stack_opt.m"
  }
#line 338 "stack_opt.m"
}

#line 378 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(
#line 378 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 378 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 378 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 378 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__4_4,
#line 378 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 378 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__6_6,
#line 378 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__7_7,
#line 378 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__8_8)
#line 378 "stack_opt.m"
{
#line 378 "stack_opt.m"
  {
#line 378 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 378 "stack_opt.m"
    {
#line 378 "stack_opt.m"
      ll_backend__stack_opt__use_cell_8_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__HeadVar__2_2, ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4, ll_backend__stack_opt__HeadVar__5_5, ll_backend__stack_opt__HeadVar__6_6, ll_backend__stack_opt__HeadVar__7_7, ll_backend__stack_opt__HeadVar__8_8);
#line 378 "stack_opt.m"
      return;
    }
#line 378 "stack_opt.m"
  }
#line 378 "stack_opt.m"
}

#line 147 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0(
#line 147 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 147 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 147 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 147 "stack_opt.m"
{
#line 147 "stack_opt.m"
  {
#line 147 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 147 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_21 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 147 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_22 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 147 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_21 == ll_backend__stack_opt__CastY_22);
#line 147 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 4490 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "stack_opt.m"
    else
#line 147 "stack_opt.m"
      {
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 147 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 147 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16;

#line 147 "stack_opt.m"
        {
#line 147 "stack_opt.m"
          backend_libs__matching____Compare____matching_params_0_0(&ll_backend__stack_opt__V_16_16, ll_backend__stack_opt__V_4_4, ll_backend__stack_opt__V_10_10);
        }
#line 4528 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_16_16 == (MR_Integer) 0);
#line 147 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 147 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 147 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_16_16;
#line 147 "stack_opt.m"
        else
#line 147 "stack_opt.m"
          {
#line 147 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_17_17;

#line 147 "stack_opt.m"
            {
#line 147 "stack_opt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_17_17, ll_backend__stack_opt__V_5_5, ll_backend__stack_opt__V_11_11);
            }
#line 4548 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_17_17 == (MR_Integer) 0);
#line 147 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 147 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 147 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_17_17;
#line 147 "stack_opt.m"
            else
#line 147 "stack_opt.m"
              {
#line 147 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_18_18;
#line 147 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_29_29 = (MR_Integer) ll_backend__stack_opt__V_6_6;
#line 147 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_30_30 = (MR_Integer) ll_backend__stack_opt__V_12_12;

#line 147 "stack_opt.m"
                {
#line 147 "stack_opt.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_18_18, ll_backend__stack_opt__V_29_29, ll_backend__stack_opt__V_30_30);
                }
#line 4572 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_18_18 == (MR_Integer) 0);
#line 147 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 147 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 147 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_18_18;
#line 147 "stack_opt.m"
                else
#line 147 "stack_opt.m"
                  {
#line 147 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_19_19;
#line 147 "stack_opt.m"
                    MR_Integer ll_backend__stack_opt__V_31_31 = (MR_Integer) ll_backend__stack_opt__V_7_7;
#line 147 "stack_opt.m"
                    MR_Integer ll_backend__stack_opt__V_32_32 = (MR_Integer) ll_backend__stack_opt__V_13_13;

#line 147 "stack_opt.m"
                    {
#line 147 "stack_opt.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_19_19, ll_backend__stack_opt__V_31_31, ll_backend__stack_opt__V_32_32);
                    }
#line 4596 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_19_19 == (MR_Integer) 0);
#line 147 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 147 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 147 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_19_19;
#line 147 "stack_opt.m"
                    else
#line 147 "stack_opt.m"
                      {
#line 147 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_20_20;
#line 147 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_33_33 = (MR_Integer) ll_backend__stack_opt__V_8_8;
#line 147 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_34_34 = (MR_Integer) ll_backend__stack_opt__V_14_14;

#line 147 "stack_opt.m"
                        {
#line 147 "stack_opt.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_20_20, ll_backend__stack_opt__V_33_33, ll_backend__stack_opt__V_34_34);
                        }
#line 4620 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_20_20 == (MR_Integer) 0);
#line 147 "stack_opt.m"
                        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 147 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 147 "stack_opt.m"
                          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_20_20;
#line 147 "stack_opt.m"
                        else
#line 147 "stack_opt.m"
                          {
#line 147 "stack_opt.m"
                            {
#line 147 "stack_opt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
#line 147 "stack_opt.m"
                              return;
                            }
#line 147 "stack_opt.m"
                          }
#line 147 "stack_opt.m"
                      }
#line 147 "stack_opt.m"
                  }
#line 147 "stack_opt.m"
              }
#line 147 "stack_opt.m"
          }
#line 147 "stack_opt.m"
      }
#line 147 "stack_opt.m"
  }
#line 147 "stack_opt.m"
}

#line 147 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0(
#line 147 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 147 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 147 "stack_opt.m"
{
#line 147 "stack_opt.m"
  {
#line 147 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 147 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_15 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 147 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_16 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 147 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_15 == ll_backend__stack_opt__CastY_16);
#line 147 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 147 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 147 "stack_opt.m"
    else
#line 147 "stack_opt.m"
      {
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_18_18;
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 147 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 147 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));

#line 4711 "ll_backend.stack_opt.c"
        {
#line 4713 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = backend_libs__matching____Unify____matching_params_0_0(ll_backend__stack_opt__V_3_3, ll_backend__stack_opt__V_9_9);
        }
#line 147 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 147 "stack_opt.m"
          {
#line 4720 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_4_4 == ll_backend__stack_opt__V_10_10);
#line 147 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 147 "stack_opt.m"
              {
#line 4726 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_5_5 == ll_backend__stack_opt__V_11_11);
#line 147 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 147 "stack_opt.m"
                  {
#line 4732 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_6_6 == ll_backend__stack_opt__V_12_12);
#line 147 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 147 "stack_opt.m"
                      {
#line 4738 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_7_7 == ll_backend__stack_opt__V_13_13);
#line 147 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 147 "stack_opt.m"
                          {
#line 4744 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__TypeInfo_18_18 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 4746 "ll_backend.stack_opt.c"
                            {
#line 4748 "ll_backend.stack_opt.c"
                              return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_18_18, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                            }
#line 147 "stack_opt.m"
                          }
#line 147 "stack_opt.m"
                      }
#line 147 "stack_opt.m"
                  }
#line 147 "stack_opt.m"
              }
#line 147 "stack_opt.m"
          }
#line 147 "stack_opt.m"
      }
#line 147 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 147 "stack_opt.m"
  }
#line 147 "stack_opt.m"
}

#line 170 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0(
#line 170 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 170 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 170 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 170 "stack_opt.m"
{
#line 170 "stack_opt.m"
  {
#line 170 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 170 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_12 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 170 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_13 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 170 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_12 == ll_backend__stack_opt__CastY_13);
#line 170 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 4794 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 170 "stack_opt.m"
    else
#line 170 "stack_opt.m"
      {
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10;

#line 170 "stack_opt.m"
        {
#line 170 "stack_opt.m"
          ll_backend__stack_opt____Compare____stack_opt_params_0_0(&ll_backend__stack_opt__V_10_10, ll_backend__stack_opt__V_4_4, ll_backend__stack_opt__V_7_7);
        }
#line 4820 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_10_10 == (MR_Integer) 0);
#line 170 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 170 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 170 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_10_10;
#line 170 "stack_opt.m"
        else
#line 170 "stack_opt.m"
          {
#line 170 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_11_11;

#line 170 "stack_opt.m"
            {
#line 170 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_2[1], &ll_backend__stack_opt__V_11_11, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
            }
#line 4840 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_11_11 == (MR_Integer) 0);
#line 170 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 170 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 170 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_11_11;
#line 170 "stack_opt.m"
            else
#line 170 "stack_opt.m"
              {
#line 170 "stack_opt.m"
                {
#line 170 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[14], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
#line 170 "stack_opt.m"
                  return;
                }
#line 170 "stack_opt.m"
              }
#line 170 "stack_opt.m"
          }
#line 170 "stack_opt.m"
      }
#line 170 "stack_opt.m"
  }
#line 170 "stack_opt.m"
}

#line 170 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0(
#line 170 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 170 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 170 "stack_opt.m"
{
#line 170 "stack_opt.m"
  {
#line 170 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 170 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_9 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 170 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_10 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 170 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_9 == ll_backend__stack_opt__CastY_10);
#line 170 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 170 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 170 "stack_opt.m"
    else
#line 170 "stack_opt.m"
      {
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_11_11;
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_12_12;
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));

#line 4915 "ll_backend.stack_opt.c"
        {
#line 4917 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____stack_opt_params_0_0(ll_backend__stack_opt__V_3_3, ll_backend__stack_opt__V_6_6);
        }
#line 170 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 170 "stack_opt.m"
          {
#line 4924 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_11_11 = (MR_Word) &ll_backend__stack_opt_scalar_common_2[1];
#line 4926 "ll_backend.stack_opt.c"
            {
#line 4928 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_11_11, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_7_7)));
            }
#line 170 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 170 "stack_opt.m"
              {
#line 4935 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_12_12 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[14];
#line 4937 "ll_backend.stack_opt.c"
                {
#line 4939 "ll_backend.stack_opt.c"
                  return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_12_12, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
                }
#line 170 "stack_opt.m"
              }
#line 170 "stack_opt.m"
          }
#line 170 "stack_opt.m"
      }
#line 170 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 170 "stack_opt.m"
  }
#line 170 "stack_opt.m"
}

#line 658 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0(
#line 658 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 658 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 658 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 658 "stack_opt.m"
{
#line 658 "stack_opt.m"
  {
#line 658 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 658 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_21 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 658 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_22 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 658 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_21 == ll_backend__stack_opt__CastY_22);
#line 658 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 4979 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 658 "stack_opt.m"
    else
#line 658 "stack_opt.m"
      {
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 4)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 5)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16;
#line 658 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_29_29 = (MR_Integer) ll_backend__stack_opt__V_4_4;
#line 658 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_30_30 = (MR_Integer) ll_backend__stack_opt__V_10_10;

#line 658 "stack_opt.m"
        {
#line 658 "stack_opt.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_16_16, ll_backend__stack_opt__V_29_29, ll_backend__stack_opt__V_30_30);
        }
#line 5021 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_16_16 == (MR_Integer) 0);
#line 658 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 658 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 658 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_16_16;
#line 658 "stack_opt.m"
        else
#line 658 "stack_opt.m"
          {
#line 658 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_17_17;

#line 658 "stack_opt.m"
            {
#line 658 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_17_17, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_11_11)));
            }
#line 5041 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_17_17 == (MR_Integer) 0);
#line 658 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 658 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 658 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_17_17;
#line 658 "stack_opt.m"
            else
#line 658 "stack_opt.m"
              {
#line 658 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_18_18;

#line 658 "stack_opt.m"
                {
#line 658 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_18_18, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                }
#line 5061 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_18_18 == (MR_Integer) 0);
#line 658 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 658 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 658 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_18_18;
#line 658 "stack_opt.m"
                else
#line 658 "stack_opt.m"
                  {
#line 658 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_19_19;

#line 658 "stack_opt.m"
                    {
#line 658 "stack_opt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[5], &ll_backend__stack_opt__V_19_19, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
                    }
#line 5081 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_19_19 == (MR_Integer) 0);
#line 658 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 658 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 658 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_19_19;
#line 658 "stack_opt.m"
                    else
#line 658 "stack_opt.m"
                      {
#line 658 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_20_20;

#line 658 "stack_opt.m"
                        {
#line 658 "stack_opt.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], &ll_backend__stack_opt__V_20_20, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                        }
#line 5101 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_20_20 == (MR_Integer) 0);
#line 658 "stack_opt.m"
                        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 658 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 658 "stack_opt.m"
                          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_20_20;
#line 658 "stack_opt.m"
                        else
#line 658 "stack_opt.m"
                          {
#line 658 "stack_opt.m"
                            {
#line 658 "stack_opt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
#line 658 "stack_opt.m"
                              return;
                            }
#line 658 "stack_opt.m"
                          }
#line 658 "stack_opt.m"
                      }
#line 658 "stack_opt.m"
                  }
#line 658 "stack_opt.m"
              }
#line 658 "stack_opt.m"
          }
#line 658 "stack_opt.m"
      }
#line 658 "stack_opt.m"
  }
#line 658 "stack_opt.m"
}

#line 658 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0(
#line 658 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 658 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 658 "stack_opt.m"
{
#line 658 "stack_opt.m"
  {
#line 658 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 658 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_15 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 658 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_16 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 658 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_15 == ll_backend__stack_opt__CastY_16);
#line 658 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 658 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 658 "stack_opt.m"
    else
#line 658 "stack_opt.m"
      {
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_17_17;
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_18_18;
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_19_19;
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_20_20;
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_21_21;
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 4)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 5)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 658 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));

#line 5200 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_3_3 == ll_backend__stack_opt__V_9_9);
#line 658 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 658 "stack_opt.m"
          {
#line 5206 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_17_17 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 5208 "ll_backend.stack_opt.c"
            {
#line 5210 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_17_17, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_10_10)));
            }
#line 658 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 658 "stack_opt.m"
              {
#line 5217 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_18_18 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 5219 "ll_backend.stack_opt.c"
                {
#line 5221 "ll_backend.stack_opt.c"
                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_18_18, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_11_11)));
                }
#line 658 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 658 "stack_opt.m"
                  {
#line 5228 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__TypeInfo_19_19 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[5];
#line 5230 "ll_backend.stack_opt.c"
                    {
#line 5232 "ll_backend.stack_opt.c"
                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_19_19, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                    }
#line 658 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 658 "stack_opt.m"
                      {
#line 5239 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__TypeInfo_20_20 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 5241 "ll_backend.stack_opt.c"
                        {
#line 5243 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_20_20, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
                        }
#line 658 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 658 "stack_opt.m"
                          {
#line 5250 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__TypeInfo_21_21 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 5252 "ll_backend.stack_opt.c"
                            {
#line 5254 "ll_backend.stack_opt.c"
                              return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_21_21, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                            }
#line 658 "stack_opt.m"
                          }
#line 658 "stack_opt.m"
                      }
#line 658 "stack_opt.m"
                  }
#line 658 "stack_opt.m"
              }
#line 658 "stack_opt.m"
          }
#line 658 "stack_opt.m"
      }
#line 658 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 658 "stack_opt.m"
  }
#line 658 "stack_opt.m"
}

#line 137 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(
#line 137 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 137 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 137 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 137 "stack_opt.m"
{
#line 137 "stack_opt.m"
  {
#line 137 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 137 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_6 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 137 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_7 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 137 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_6 == ll_backend__stack_opt__CastY_7);
#line 137 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5300 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 137 "stack_opt.m"
    else
#line 137 "stack_opt.m"
      {
#line 137 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = (MR_Word) ll_backend__stack_opt__HeadVar__2_2;
#line 137 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = (MR_Word) ll_backend__stack_opt__HeadVar__3_3;

#line 137 "stack_opt.m"
        {
#line 137 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_5_5)));
#line 137 "stack_opt.m"
          return;
        }
#line 137 "stack_opt.m"
      }
#line 137 "stack_opt.m"
  }
#line 137 "stack_opt.m"
}

#line 137 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(
#line 137 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 137 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 137 "stack_opt.m"
{
#line 137 "stack_opt.m"
  {
#line 137 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 137 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_5 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 137 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_6 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 137 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_5 == ll_backend__stack_opt__CastY_6);
#line 137 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 137 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 137 "stack_opt.m"
    else
#line 137 "stack_opt.m"
      {
#line 137 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = (MR_Word) ll_backend__stack_opt__HeadVar__1_1;
#line 137 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = (MR_Word) ll_backend__stack_opt__HeadVar__2_2;

#line 5358 "ll_backend.stack_opt.c"
        {
#line 5360 "ll_backend.stack_opt.c"
          return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_4_4)));
        }
#line 137 "stack_opt.m"
      }
#line 137 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 137 "stack_opt.m"
  }
#line 137 "stack_opt.m"
}

#line 157 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0(
#line 157 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 157 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 157 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 157 "stack_opt.m"
{
#line 157 "stack_opt.m"
  {
#line 157 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 157 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_30 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 157 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_31 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 157 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_30 == ll_backend__stack_opt__CastY_31);
#line 157 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5396 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 157 "stack_opt.m"
    else
#line 157 "stack_opt.m"
      {
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 6)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 7)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 8)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 4)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 5)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 6)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 7)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 8)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_22_22;

#line 157 "stack_opt.m"
        {
#line 157 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[0], &ll_backend__stack_opt__V_22_22, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
        }
#line 5446 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_22_22 == (MR_Integer) 0);
#line 157 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 157 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_22_22;
#line 157 "stack_opt.m"
        else
#line 157 "stack_opt.m"
          {
#line 157 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_23_23;

#line 157 "stack_opt.m"
            {
#line 157 "stack_opt.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&ll_backend__stack_opt__V_23_23, ll_backend__stack_opt__V_5_5, ll_backend__stack_opt__V_14_14);
            }
#line 5466 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_23_23 == (MR_Integer) 0);
#line 157 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 157 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_23_23;
#line 157 "stack_opt.m"
            else
#line 157 "stack_opt.m"
              {
#line 157 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_24_24;

#line 157 "stack_opt.m"
                {
#line 157 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[13], &ll_backend__stack_opt__V_24_24, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
                }
#line 5486 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_24_24 == (MR_Integer) 0);
#line 157 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 157 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_24_24;
#line 157 "stack_opt.m"
                else
#line 157 "stack_opt.m"
                  {
#line 157 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_25_25;

#line 157 "stack_opt.m"
                    {
#line 157 "stack_opt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_25_25, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_16_16)));
                    }
#line 5506 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_25_25 == (MR_Integer) 0);
#line 157 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 157 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_25_25;
#line 157 "stack_opt.m"
                    else
#line 157 "stack_opt.m"
                      {
#line 157 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_26_26;
#line 157 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_41_41 = (MR_Integer) ll_backend__stack_opt__V_8_8;
#line 157 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_42_42 = (MR_Integer) ll_backend__stack_opt__V_17_17;

#line 157 "stack_opt.m"
                        {
#line 157 "stack_opt.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_26_26, ll_backend__stack_opt__V_41_41, ll_backend__stack_opt__V_42_42);
                        }
#line 5530 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_26_26 == (MR_Integer) 0);
#line 157 "stack_opt.m"
                        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 157 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
                          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_26_26;
#line 157 "stack_opt.m"
                        else
#line 157 "stack_opt.m"
                          {
#line 157 "stack_opt.m"
                            MR_Word ll_backend__stack_opt__V_27_27;

#line 157 "stack_opt.m"
                            {
#line 157 "stack_opt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], &ll_backend__stack_opt__V_27_27, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_18_18)));
                            }
#line 5550 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_27_27 == (MR_Integer) 0);
#line 157 "stack_opt.m"
                            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 157 "stack_opt.m"
                            if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
                              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_27_27;
#line 157 "stack_opt.m"
                            else
#line 157 "stack_opt.m"
                              {
#line 157 "stack_opt.m"
                                MR_Word ll_backend__stack_opt__V_28_28;

#line 157 "stack_opt.m"
                                {
#line 157 "stack_opt.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], &ll_backend__stack_opt__V_28_28, ((MR_Box) (ll_backend__stack_opt__V_10_10)), ((MR_Box) (ll_backend__stack_opt__V_19_19)));
                                }
#line 5570 "ll_backend.stack_opt.c"
                                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_28_28 == (MR_Integer) 0);
#line 157 "stack_opt.m"
                                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 157 "stack_opt.m"
                                if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
                                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_28_28;
#line 157 "stack_opt.m"
                                else
#line 157 "stack_opt.m"
                                  {
#line 157 "stack_opt.m"
                                    MR_Word ll_backend__stack_opt__V_29_29;

#line 157 "stack_opt.m"
                                    {
#line 157 "stack_opt.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], &ll_backend__stack_opt__V_29_29, ((MR_Box) (ll_backend__stack_opt__V_11_11)), ((MR_Box) (ll_backend__stack_opt__V_20_20)));
                                    }
#line 5590 "ll_backend.stack_opt.c"
                                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_29_29 == (MR_Integer) 0);
#line 157 "stack_opt.m"
                                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 157 "stack_opt.m"
                                    if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
                                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_29_29;
#line 157 "stack_opt.m"
                                    else
#line 157 "stack_opt.m"
                                      {
#line 157 "stack_opt.m"
                                        {
#line 157 "stack_opt.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_12_12)), ((MR_Box) (ll_backend__stack_opt__V_21_21)));
#line 157 "stack_opt.m"
                                          return;
                                        }
#line 157 "stack_opt.m"
                                      }
#line 157 "stack_opt.m"
                                  }
#line 157 "stack_opt.m"
                              }
#line 157 "stack_opt.m"
                          }
#line 157 "stack_opt.m"
                      }
#line 157 "stack_opt.m"
                  }
#line 157 "stack_opt.m"
              }
#line 157 "stack_opt.m"
          }
#line 157 "stack_opt.m"
      }
#line 157 "stack_opt.m"
  }
#line 157 "stack_opt.m"
}

#line 157 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0(
#line 157 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 157 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 157 "stack_opt.m"
{
#line 157 "stack_opt.m"
  {
#line 157 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 157 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_21 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 157 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_22 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 157 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_21 == ll_backend__stack_opt__CastY_22);
#line 157 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 157 "stack_opt.m"
    else
#line 157 "stack_opt.m"
      {
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_25_25;
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_26_26;
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_28_28;
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_29_29;
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_30_30;
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_31_31;
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 4)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 5)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 6)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 7)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 8)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 6)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 7)));
#line 157 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 8)));
#line 157 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_32_32;
#line 157 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_33_33;

#line 5713 "ll_backend.stack_opt.c"
        {
#line 5715 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[0], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
        }
#line 157 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
          {
#line 5722 "ll_backend.stack_opt.c"
            {
#line 5724 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ll_backend__stack_opt__V_4_4, ll_backend__stack_opt__V_13_13);
            }
#line 157 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
              {
#line 5731 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_25_25 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[13];
#line 5733 "ll_backend.stack_opt.c"
                {
#line 5735 "ll_backend.stack_opt.c"
                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_25_25, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                }
#line 157 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
                  {
#line 5742 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__TypeInfo_26_26 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 5744 "ll_backend.stack_opt.c"
                    {
#line 5746 "ll_backend.stack_opt.c"
                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_26_26, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
                    }
#line 157 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
                      {
#line 5753 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__V_32_32 = (MR_Integer) ll_backend__stack_opt__V_7_7;
#line 5755 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__V_33_33 = (MR_Integer) ll_backend__stack_opt__V_16_16;
#line 5757 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_32_32 == ll_backend__stack_opt__V_33_33);
#line 157 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
                          {
#line 5763 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__TypeInfo_28_28 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 5765 "ll_backend.stack_opt.c"
                            {
#line 5767 "ll_backend.stack_opt.c"
                              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_28_28, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_17_17)));
                            }
#line 157 "stack_opt.m"
                            if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
                              {
#line 5774 "ll_backend.stack_opt.c"
                                ll_backend__stack_opt__TypeInfo_29_29 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 5776 "ll_backend.stack_opt.c"
                                {
#line 5778 "ll_backend.stack_opt.c"
                                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_29_29, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_18_18)));
                                }
#line 157 "stack_opt.m"
                                if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
                                  {
#line 5785 "ll_backend.stack_opt.c"
                                    ll_backend__stack_opt__TypeInfo_30_30 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 5787 "ll_backend.stack_opt.c"
                                    {
#line 5789 "ll_backend.stack_opt.c"
                                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_30_30, ((MR_Box) (ll_backend__stack_opt__V_10_10)), ((MR_Box) (ll_backend__stack_opt__V_19_19)));
                                    }
#line 157 "stack_opt.m"
                                    if (ll_backend__stack_opt__succeeded)
#line 157 "stack_opt.m"
                                      {
#line 5796 "ll_backend.stack_opt.c"
                                        ll_backend__stack_opt__TypeInfo_31_31 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 5798 "ll_backend.stack_opt.c"
                                        {
#line 5800 "ll_backend.stack_opt.c"
                                          return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_31_31, ((MR_Box) (ll_backend__stack_opt__V_11_11)), ((MR_Box) (ll_backend__stack_opt__V_20_20)));
                                        }
#line 157 "stack_opt.m"
                                      }
#line 157 "stack_opt.m"
                                  }
#line 157 "stack_opt.m"
                              }
#line 157 "stack_opt.m"
                          }
#line 157 "stack_opt.m"
                      }
#line 157 "stack_opt.m"
                  }
#line 157 "stack_opt.m"
              }
#line 157 "stack_opt.m"
          }
#line 157 "stack_opt.m"
      }
#line 157 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 157 "stack_opt.m"
  }
#line 157 "stack_opt.m"
}

#line 381 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0(
#line 381 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 381 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 381 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 381 "stack_opt.m"
{
#line 381 "stack_opt.m"
  {
#line 381 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 381 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_9 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 381 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_10 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 381 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_9 == ll_backend__stack_opt__CastY_10);
#line 381 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5852 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 381 "stack_opt.m"
    else
#line 381 "stack_opt.m"
      {
#line 381 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 381 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 381 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 381 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 381 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8;

#line 381 "stack_opt.m"
        {
#line 381 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_8_8, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_6_6)));
        }
#line 5874 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_8_8 == (MR_Integer) 0);
#line 381 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 381 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 381 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_8_8;
#line 381 "stack_opt.m"
        else
#line 381 "stack_opt.m"
          {
#line 381 "stack_opt.m"
            {
#line 381 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[5], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_7_7)));
#line 381 "stack_opt.m"
              return;
            }
#line 381 "stack_opt.m"
          }
#line 381 "stack_opt.m"
      }
#line 381 "stack_opt.m"
  }
#line 381 "stack_opt.m"
}

#line 381 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0(
#line 381 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 381 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 381 "stack_opt.m"
{
#line 381 "stack_opt.m"
  {
#line 381 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 381 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_7 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 381 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_8 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 381 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_7 == ll_backend__stack_opt__CastY_8);
#line 381 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 381 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 381 "stack_opt.m"
    else
#line 381 "stack_opt.m"
      {
#line 381 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_10_10;
#line 381 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 381 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 381 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 381 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));

#line 5941 "ll_backend.stack_opt.c"
        {
#line 5943 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_5_5)));
        }
#line 381 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 381 "stack_opt.m"
          {
#line 5950 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_10_10 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[5];
#line 5952 "ll_backend.stack_opt.c"
            {
#line 5954 "ll_backend.stack_opt.c"
              return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_10_10, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_6_6)));
            }
#line 381 "stack_opt.m"
          }
#line 381 "stack_opt.m"
      }
#line 381 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 381 "stack_opt.m"
  }
#line 381 "stack_opt.m"
}

#line 392 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0(
#line 392 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 392 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 392 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 392 "stack_opt.m"
{
#line 392 "stack_opt.m"
  {
#line 392 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 392 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_18 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 392 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_19 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 392 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_18 == ll_backend__stack_opt__CastY_19);
#line 392 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5992 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 392 "stack_opt.m"
    else
#line 392 "stack_opt.m"
      {
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 4)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14;

#line 392 "stack_opt.m"
        {
#line 392 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[12], &ll_backend__stack_opt__V_14_14, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
        }
#line 6026 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_14_14 == (MR_Integer) 0);
#line 392 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 392 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 392 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_14_14;
#line 392 "stack_opt.m"
        else
#line 392 "stack_opt.m"
          {
#line 392 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_15_15;

#line 392 "stack_opt.m"
            {
#line 392 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_15_15, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_10_10)));
            }
#line 6046 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_15_15 == (MR_Integer) 0);
#line 392 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 392 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 392 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_15_15;
#line 392 "stack_opt.m"
            else
#line 392 "stack_opt.m"
              {
#line 392 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_16_16;
#line 392 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_25_25 = (MR_Integer) ll_backend__stack_opt__V_6_6;
#line 392 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_26_26 = (MR_Integer) ll_backend__stack_opt__V_11_11;

#line 392 "stack_opt.m"
                {
#line 392 "stack_opt.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_16_16, ll_backend__stack_opt__V_25_25, ll_backend__stack_opt__V_26_26);
                }
#line 6070 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_16_16 == (MR_Integer) 0);
#line 392 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 392 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 392 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_16_16;
#line 392 "stack_opt.m"
                else
#line 392 "stack_opt.m"
                  {
#line 392 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_17_17;

#line 392 "stack_opt.m"
                    {
#line 392 "stack_opt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], &ll_backend__stack_opt__V_17_17, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                    }
#line 6090 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_17_17 == (MR_Integer) 0);
#line 392 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 392 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 392 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_17_17;
#line 392 "stack_opt.m"
                    else
#line 392 "stack_opt.m"
                      {
#line 392 "stack_opt.m"
                        {
#line 392 "stack_opt.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
#line 392 "stack_opt.m"
                          return;
                        }
#line 392 "stack_opt.m"
                      }
#line 392 "stack_opt.m"
                  }
#line 392 "stack_opt.m"
              }
#line 392 "stack_opt.m"
          }
#line 392 "stack_opt.m"
      }
#line 392 "stack_opt.m"
  }
#line 392 "stack_opt.m"
}

#line 392 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0(
#line 392 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 392 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 392 "stack_opt.m"
{
#line 392 "stack_opt.m"
  {
#line 392 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 392 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_13 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 392 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_14 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 392 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_13 == ll_backend__stack_opt__CastY_14);
#line 392 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 392 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 392 "stack_opt.m"
    else
#line 392 "stack_opt.m"
      {
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_16_16;
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_17_17;
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_18_18;
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 4)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 392 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));

#line 6179 "ll_backend.stack_opt.c"
        {
#line 6181 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[12], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
        }
#line 392 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 392 "stack_opt.m"
          {
#line 6188 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_16_16 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 6190 "ll_backend.stack_opt.c"
            {
#line 6192 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_16_16, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
            }
#line 392 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 392 "stack_opt.m"
              {
#line 6199 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_5_5 == ll_backend__stack_opt__V_10_10);
#line 392 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 392 "stack_opt.m"
                  {
#line 6205 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__TypeInfo_17_17 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 6207 "ll_backend.stack_opt.c"
                    {
#line 6209 "ll_backend.stack_opt.c"
                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_17_17, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_11_11)));
                    }
#line 392 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 392 "stack_opt.m"
                      {
#line 6216 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__TypeInfo_18_18 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 6218 "ll_backend.stack_opt.c"
                        {
#line 6220 "ll_backend.stack_opt.c"
                          return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_18_18, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                        }
#line 392 "stack_opt.m"
                      }
#line 392 "stack_opt.m"
                  }
#line 392 "stack_opt.m"
              }
#line 392 "stack_opt.m"
          }
#line 392 "stack_opt.m"
      }
#line 392 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 392 "stack_opt.m"
  }
#line 392 "stack_opt.m"
}

#line 654 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(
#line 654 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 654 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 654 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 654 "stack_opt.m"
{
#line 654 "stack_opt.m"
  {
#line 654 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 654 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__Cast_HeadVar1_4 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 654 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__Cast_HeadVar2_5 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 654 "stack_opt.m"
    {
#line 654 "stack_opt.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__Cast_HeadVar1_4, ll_backend__stack_opt__Cast_HeadVar2_5);
#line 654 "stack_opt.m"
      return;
    }
#line 654 "stack_opt.m"
  }
#line 654 "stack_opt.m"
}

#line 654 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(
#line 654 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_1,
#line 654 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 654 "stack_opt.m"
{
#line 6281 "ll_backend.stack_opt.c"
  {
#line 6283 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__2_1 == ll_backend__stack_opt__HeadVar__2_2);

#line 6286 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 6288 "ll_backend.stack_opt.c"
  }
#line 654 "stack_opt.m"
}

#line 668 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0(
#line 668 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 668 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 668 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 668 "stack_opt.m"
{
#line 668 "stack_opt.m"
  {
#line 668 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 668 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_12 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 668 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_13 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 668 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_12 == ll_backend__stack_opt__CastY_13);
#line 668 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 6317 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 668 "stack_opt.m"
    else
#line 668 "stack_opt.m"
      {
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10;

#line 668 "stack_opt.m"
        {
#line 668 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[11], &ll_backend__stack_opt__V_10_10, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_7_7)));
        }
#line 6343 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_10_10 == (MR_Integer) 0);
#line 668 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 668 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 668 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_10_10;
#line 668 "stack_opt.m"
        else
#line 668 "stack_opt.m"
          {
#line 668 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_11_11;
#line 668 "stack_opt.m"
            MR_Integer ll_backend__stack_opt__V_17_17 = (MR_Integer) ll_backend__stack_opt__V_5_5;
#line 668 "stack_opt.m"
            MR_Integer ll_backend__stack_opt__V_18_18 = (MR_Integer) ll_backend__stack_opt__V_8_8;

#line 668 "stack_opt.m"
            {
#line 668 "stack_opt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_11_11, ll_backend__stack_opt__V_17_17, ll_backend__stack_opt__V_18_18);
            }
#line 6367 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_11_11 == (MR_Integer) 0);
#line 668 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 668 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 668 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_11_11;
#line 668 "stack_opt.m"
            else
#line 668 "stack_opt.m"
              {
#line 668 "stack_opt.m"
                {
#line 668 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
#line 668 "stack_opt.m"
                  return;
                }
#line 668 "stack_opt.m"
              }
#line 668 "stack_opt.m"
          }
#line 668 "stack_opt.m"
      }
#line 668 "stack_opt.m"
  }
#line 668 "stack_opt.m"
}

#line 668 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0(
#line 668 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 668 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 668 "stack_opt.m"
{
#line 668 "stack_opt.m"
  {
#line 668 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 668 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_9 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 668 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_10 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 668 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_9 == ll_backend__stack_opt__CastY_10);
#line 668 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 668 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 668 "stack_opt.m"
    else
#line 668 "stack_opt.m"
      {
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_12_12;
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 668 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));

#line 6440 "ll_backend.stack_opt.c"
        {
#line 6442 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[11], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_6_6)));
        }
#line 668 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 668 "stack_opt.m"
          {
#line 6449 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_4_4 == ll_backend__stack_opt__V_7_7);
#line 668 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 668 "stack_opt.m"
              {
#line 6455 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_12_12 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 6457 "ll_backend.stack_opt.c"
                {
#line 6459 "ll_backend.stack_opt.c"
                  return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_12_12, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
                }
#line 668 "stack_opt.m"
              }
#line 668 "stack_opt.m"
          }
#line 668 "stack_opt.m"
      }
#line 668 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 668 "stack_opt.m"
  }
#line 668 "stack_opt.m"
}

#line 1151 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_6(
#line 1151 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1151 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1151 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1151 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1151 "stack_opt.m"
{
#line 1151 "stack_opt.m"
  {
#line 1151 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1151 "stack_opt.m"
    {
#line 1151 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1151__1_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1151 "stack_opt.m"
      return;
    }
#line 1151 "stack_opt.m"
  }
#line 1151 "stack_opt.m"
}

#line 1148 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_5(
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1148 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1148 "stack_opt.m"
{
#line 1148 "stack_opt.m"
  {
#line 1148 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1148 "stack_opt.m"
    {
#line 1148 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1148__1_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1148 "stack_opt.m"
      return;
    }
#line 1148 "stack_opt.m"
  }
#line 1148 "stack_opt.m"
}

#line 1142 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_4(
#line 1142 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1142 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1142 "stack_opt.m"
{
#line 1142 "stack_opt.m"
  {
#line 1142 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1142 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1142 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv3_HeadVar__2_2;

#line 1142 "stack_opt.m"
    {
#line 1142 "stack_opt.m"
      ll_backend__stack_opt__conv3_HeadVar__2_2 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1142 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv3_HeadVar__2_2));
#line 1142 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1142 "stack_opt.m"
  }
#line 1142 "stack_opt.m"
}

#line 1137 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_3(
#line 1137 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1137 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1137 "stack_opt.m"
{
#line 1137 "stack_opt.m"
  {
#line 1137 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1137 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1137 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv2_HeadVar__2_2;

#line 1137 "stack_opt.m"
    {
#line 1137 "stack_opt.m"
      ll_backend__stack_opt__conv2_HeadVar__2_2 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1137 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv2_HeadVar__2_2));
#line 1137 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1137 "stack_opt.m"
  }
#line 1137 "stack_opt.m"
}

#line 1125 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_2(
#line 1125 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1125 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1125 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1125 "stack_opt.m"
{
#line 1125 "stack_opt.m"
  {
#line 1125 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1125 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv1_HeadVar__2_81;

#line 1125 "stack_opt.m"
    {
#line 1125 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1125__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv1_HeadVar__2_81);
    }
#line 1125 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_HeadVar__2_81));
#line 1125 "stack_opt.m"
  }
#line 1125 "stack_opt.m"
}

#line 1124 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_1(
#line 1124 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1124 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1124 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1124 "stack_opt.m"
{
#line 1124 "stack_opt.m"
  {
#line 1124 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1124 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv0_HeadVar__2_76;

#line 1124 "stack_opt.m"
    {
#line 1124 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1124__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv0_HeadVar__2_76);
    }
#line 1124 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__2_76));
#line 1124 "stack_opt.m"
  }
#line 1124 "stack_opt.m"
}

#line 1113 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0(
#line 1113 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MatchingResult_4)
#line 1113 "stack_opt.m"
{
#line 1116 "stack_opt.m"
  {
#line 1116 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_74_74;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_78_78;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_79_79;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_83_83;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_88_88;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CellVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 0)));
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 1)));
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ArgVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 2)));
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ViaCellVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 3)));
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__GoalId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 4)));
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PotentialIntervals_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 5)));
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertIntervals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 6)));
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PotentialAnchors_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 7)));
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertAnchors_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 8)));
#line 1116 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CellVarNum_15;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ArgVarNums_16;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ViaCellVarNums_17;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PotentialIntervalNums_18;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertIntervalNums_19;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_29_29;
#line 1116 "stack_opt.m"
    MR_String ll_backend__stack_opt__V_33_33;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_53_53;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_59_59;
#line 1116 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_67_67;

#line 1120 "stack_opt.m"
    {
#line 1120 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\nmatching result at ");
    }
#line 1121 "stack_opt.m"
    {
#line 1121 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, ((MR_Box) (ll_backend__stack_opt__GoalId_10)));
    }
#line 1122 "stack_opt.m"
    {
#line 1122 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 6736 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1123 "stack_opt.m"
    {
#line 1123 "stack_opt.m"
      mercury__term__var_to_int_2_p_0(ll_backend__stack_opt__TypeCtorInfo_74_74, ll_backend__stack_opt__CellVar_6, &ll_backend__stack_opt__CellVarNum_15);
    }
#line 6743 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_78_78 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 6745 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1124 "stack_opt.m"
    {
#line 1124 "stack_opt.m"
      mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_78_78, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[11], ll_backend__stack_opt__ArgVars_8, &ll_backend__stack_opt__ArgVarNums_16);
    }
#line 1125 "stack_opt.m"
    {
#line 1125 "stack_opt.m"
      ll_backend__stack_opt__V_29_29 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_74_74, ll_backend__stack_opt__ViaCellVars_9);
    }
#line 1125 "stack_opt.m"
    {
#line 1125 "stack_opt.m"
      mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_78_78, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[12], ll_backend__stack_opt__V_29_29, &ll_backend__stack_opt__ViaCellVarNums_17);
    }
#line 1127 "stack_opt.m"
    {
#line 1127 "stack_opt.m"
      mercury__io__write_int_3_p_0(ll_backend__stack_opt__CellVarNum_15);
    }
#line 1128 "stack_opt.m"
    {
#line 1128 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) " => ");
    }
#line 1129 "stack_opt.m"
    {
#line 1129 "stack_opt.m"
      ll_backend__stack_opt__V_33_33 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ll_backend__stack_opt__ConsId_7);
    }
#line 1129 "stack_opt.m"
    {
#line 1129 "stack_opt.m"
      mercury__io__write_string_3_p_0(ll_backend__stack_opt__V_33_33);
    }
#line 1130 "stack_opt.m"
    {
#line 1130 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1131 "stack_opt.m"
    {
#line 1131 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__ArgVarNums_16);
    }
#line 1132 "stack_opt.m"
    {
#line 1132 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "): via cell ");
    }
#line 1133 "stack_opt.m"
    {
#line 1133 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__ViaCellVarNums_17);
    }
#line 1134 "stack_opt.m"
    {
#line 1134 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1136 "stack_opt.m"
    {
#line 1136 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "potential intervals: ");
    }
#line 6812 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_83_83 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1138 "stack_opt.m"
    {
#line 1138 "stack_opt.m"
      ll_backend__stack_opt__V_46_46 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__PotentialIntervals_11);
    }
#line 1137 "stack_opt.m"
    {
#line 1137 "stack_opt.m"
      ll_backend__stack_opt__PotentialIntervalNums_18 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[13], ll_backend__stack_opt__V_46_46);
    }
#line 1139 "stack_opt.m"
    {
#line 1139 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__PotentialIntervalNums_18);
    }
#line 1140 "stack_opt.m"
    {
#line 1140 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1141 "stack_opt.m"
    {
#line 1141 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "insert intervals: ");
    }
#line 1143 "stack_opt.m"
    {
#line 1143 "stack_opt.m"
      ll_backend__stack_opt__V_53_53 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__InsertIntervals_12);
    }
#line 1142 "stack_opt.m"
    {
#line 1142 "stack_opt.m"
      ll_backend__stack_opt__InsertIntervalNums_19 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[14], ll_backend__stack_opt__V_53_53);
    }
#line 1144 "stack_opt.m"
    {
#line 1144 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__InsertIntervalNums_19);
    }
#line 1145 "stack_opt.m"
    {
#line 1145 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1147 "stack_opt.m"
    {
#line 1147 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "potential anchors: ");
    }
#line 6864 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_88_88 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1148 "stack_opt.m"
    {
#line 1148 "stack_opt.m"
      ll_backend__stack_opt__V_59_59 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__PotentialAnchors_13);
    }
#line 1148 "stack_opt.m"
    {
#line 1148 "stack_opt.m"
      mercury__io__write_list_5_p_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__V_59_59, (MR_String) " ", (MR_Word) &ll_backend__stack_opt_scalar_common_2[15]);
    }
#line 1149 "stack_opt.m"
    {
#line 1149 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1150 "stack_opt.m"
    {
#line 1150 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "insert anchors: ");
    }
#line 1151 "stack_opt.m"
    {
#line 1151 "stack_opt.m"
      ll_backend__stack_opt__V_67_67 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__InsertAnchors_14);
    }
#line 1151 "stack_opt.m"
    {
#line 1151 "stack_opt.m"
      mercury__io__write_list_5_p_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__V_67_67, (MR_String) " ", (MR_Word) &ll_backend__stack_opt_scalar_common_2[16]);
    }
#line 1152 "stack_opt.m"
    {
#line 1152 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1152 "stack_opt.m"
      return;
    }
#line 1116 "stack_opt.m"
  }
#line 1113 "stack_opt.m"
}

#line 1106 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_2(
#line 1106 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1106 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1106 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1106 "stack_opt.m"
{
#line 1106 "stack_opt.m"
  {
#line 1106 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1106 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv1_HeadVar__2_52;

#line 1106 "stack_opt.m"
    {
#line 1106 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1106__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv1_HeadVar__2_52);
    }
#line 1106 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_HeadVar__2_52));
#line 1106 "stack_opt.m"
  }
#line 1106 "stack_opt.m"
}

#line 1093 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_1(
#line 1093 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1093 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1093 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1093 "stack_opt.m"
{
#line 1093 "stack_opt.m"
  {
#line 1093 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1093 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv0_HeadVar__2_46;

#line 1093 "stack_opt.m"
    {
#line 1093 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1093__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv0_HeadVar__2_46);
    }
#line 1093 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__2_46));
#line 1093 "stack_opt.m"
  }
#line 1093 "stack_opt.m"
}

#line 1090 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0(
#line 1090 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1090 "stack_opt.m"
{
#line 1092 "stack_opt.m"
  {
#line 1092 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1092 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1092 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_49_49;
#line 1092 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_50_50;
#line 1092 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1092 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Vars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1092 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarNums_7;
#line 1092 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_25_25;
#line 1109 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CellVar_14;
#line 1109 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ConsId_15;
#line 1109 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ArgVars_16;
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Unification_11;
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_31_31;
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_13_13;
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_8_8;
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_9_9;
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_10_10;
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_12_12;
#line 1099 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_17_17;
#line 1099 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_18_18;
#line 1099 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;

#line 1093 "stack_opt.m"
    {
#line 1093 "stack_opt.m"
      ll_backend__stack_opt__V_25_25 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_48_48, ll_backend__stack_opt__Vars_5);
    }
#line 7025 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_49_49 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 7027 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_50_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1093 "stack_opt.m"
    {
#line 1093 "stack_opt.m"
      mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_49_49, ll_backend__stack_opt__TypeCtorInfo_50_50, (MR_Word) &ll_backend__stack_opt_scalar_common_2[9], ll_backend__stack_opt__V_25_25, &ll_backend__stack_opt__VarNums_7);
    }
#line 1094 "stack_opt.m"
    {
#line 1094 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "vars [");
    }
#line 1095 "stack_opt.m"
    {
#line 1095 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__VarNums_7);
    }
#line 1096 "stack_opt.m"
    {
#line 1096 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "]: ");
    }
#line 1098 "stack_opt.m"
    ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_4, (MR_Integer) 0)));
#line 1098 "stack_opt.m"
    ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_4, (MR_Integer) 1)));
#line 1098 "stack_opt.m"
    ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1098 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1098 "stack_opt.m"
      {
#line 1098 "stack_opt.m"
        ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 0)));
#line 1098 "stack_opt.m"
        ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 1)));
#line 1098 "stack_opt.m"
        ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 2)));
#line 1098 "stack_opt.m"
        ll_backend__stack_opt__Unification_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 3)));
#line 1098 "stack_opt.m"
        ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 4)));
#line 1099 "stack_opt.m"
        ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__Unification_11)) == (MR_mktag((MR_Integer) 1)));
#line 1099 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 1099 "stack_opt.m"
          {
#line 1099 "stack_opt.m"
            ll_backend__stack_opt__CellVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 0)));
#line 1099 "stack_opt.m"
            ll_backend__stack_opt__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 1)));
#line 1099 "stack_opt.m"
            ll_backend__stack_opt__ArgVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 2)));
#line 1099 "stack_opt.m"
            ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 3)));
#line 1099 "stack_opt.m"
            ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 4)));
#line 1099 "stack_opt.m"
            ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 5)));
#line 1099 "stack_opt.m"
          }
#line 1098 "stack_opt.m"
      }
#line 1109 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1101 "stack_opt.m"
      {
#line 1101 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__CellVarNum_20;
#line 1101 "stack_opt.m"
        MR_Word ll_backend__stack_opt__ArgVarNums_21;
#line 1101 "stack_opt.m"
        MR_String ll_backend__stack_opt__V_35_35;

#line 1101 "stack_opt.m"
        {
#line 1101 "stack_opt.m"
          mercury__term__var_to_int_2_p_0(ll_backend__stack_opt__TypeCtorInfo_48_48, ll_backend__stack_opt__CellVar_14, &ll_backend__stack_opt__CellVarNum_20);
        }
#line 1102 "stack_opt.m"
        {
#line 1102 "stack_opt.m"
          mercury__io__write_int_3_p_0(ll_backend__stack_opt__CellVarNum_20);
        }
#line 1103 "stack_opt.m"
        {
#line 1103 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) " => ");
        }
#line 1104 "stack_opt.m"
        {
#line 1104 "stack_opt.m"
          ll_backend__stack_opt__V_35_35 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ll_backend__stack_opt__ConsId_15);
        }
#line 1104 "stack_opt.m"
        {
#line 1104 "stack_opt.m"
          mercury__io__write_string_3_p_0(ll_backend__stack_opt__V_35_35);
        }
#line 1105 "stack_opt.m"
        {
#line 1105 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 1106 "stack_opt.m"
        {
#line 1106 "stack_opt.m"
          mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_49_49, ll_backend__stack_opt__TypeCtorInfo_50_50, (MR_Word) &ll_backend__stack_opt_scalar_common_2[10], ll_backend__stack_opt__ArgVars_16, &ll_backend__stack_opt__ArgVarNums_21);
        }
#line 1107 "stack_opt.m"
        {
#line 1107 "stack_opt.m"
          backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__ArgVarNums_21);
        }
#line 1108 "stack_opt.m"
        {
#line 1108 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1108 "stack_opt.m"
          return;
        }
#line 1101 "stack_opt.m"
      }
#line 1109 "stack_opt.m"
    else
#line 1110 "stack_opt.m"
      {
#line 1110 "stack_opt.m"
        {
#line 1110 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "BAD INSERT GOAL\n");
#line 1110 "stack_opt.m"
          return;
        }
#line 1110 "stack_opt.m"
      }
#line 1092 "stack_opt.m"
  }
#line 1090 "stack_opt.m"
}

#line 1088 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0_1(
#line 1088 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1088 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1088 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1088 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1088 "stack_opt.m"
{
#line 1088 "stack_opt.m"
  {
#line 1088 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1088 "stack_opt.m"
    {
#line 1088 "stack_opt.m"
      ll_backend__stack_opt__dump_insert_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1088 "stack_opt.m"
      return;
    }
#line 1088 "stack_opt.m"
  }
#line 1088 "stack_opt.m"
}

#line 1081 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0(
#line 1081 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1081 "stack_opt.m"
{
#line 1084 "stack_opt.m"
  {
#line 1084 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1084 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Anchor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1084 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertSpecs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1088 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_8;

#line 1085 "stack_opt.m"
    {
#line 1085 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\ninsertions after ");
    }
#line 1086 "stack_opt.m"
    {
#line 1086 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__Anchor_4)));
    }
#line 1087 "stack_opt.m"
    {
#line 1087 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 1088 "stack_opt.m"
    {
#line 1088 "stack_opt.m"
      mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__stack_opt_scalar_common_2[8], ll_backend__stack_opt__InsertSpecs_5, ((MR_Box) ((MR_Integer) 0)), &ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_8);
    }
#line 1084 "stack_opt.m"
  }
#line 1081 "stack_opt.m"
}

#line 1078 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_2(
#line 1078 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1078 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1078 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1078 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1078 "stack_opt.m"
{
#line 1078 "stack_opt.m"
  {
#line 1078 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1078 "stack_opt.m"
    {
#line 1078 "stack_opt.m"
      ll_backend__stack_opt__dump_matching_result_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1078 "stack_opt.m"
      return;
    }
#line 1078 "stack_opt.m"
  }
#line 1078 "stack_opt.m"
}

#line 1075 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_1(
#line 1075 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1075 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1075 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1075 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1075 "stack_opt.m"
{
#line 1075 "stack_opt.m"
  {
#line 1075 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1075 "stack_opt.m"
    {
#line 1075 "stack_opt.m"
      ll_backend__stack_opt__dump_anchor_inserts_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1075 "stack_opt.m"
      return;
    }
#line 1075 "stack_opt.m"
  }
#line 1075 "stack_opt.m"
}

#line 1070 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0(
#line 1070 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4)
#line 1070 "stack_opt.m"
{
#line 1072 "stack_opt.m"
  {
#line 1072 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1072 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_31_31;
#line 1072 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Inserts_6;
#line 1072 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 1)));
#line 1072 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_17_17;
#line 1073 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 0)));
#line 1073 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 2)));
#line 1075 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_13_13;
#line 1078 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_23_23;
#line 1078 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_24_24;
#line 1078 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv1_STATE_VARIABLE_IO_18_18;

#line 1073 "stack_opt.m"
    {
#line 1073 "stack_opt.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ll_backend__stack_opt__V_9_9, &ll_backend__stack_opt__Inserts_6);
    }
#line 1074 "stack_opt.m"
    {
#line 1074 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\nANCHOR INSERT:\n");
    }
#line 7344 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_31_31 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1075 "stack_opt.m"
    {
#line 1075 "stack_opt.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__stack_opt_scalar_common_2[0], ll_backend__stack_opt__TypeCtorInfo_31_31, (MR_Word) &ll_backend__stack_opt_scalar_common_2[6], ll_backend__stack_opt__Inserts_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_13_13);
    }
#line 1077 "stack_opt.m"
    {
#line 1077 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\nMATCHING RESULTS:\n");
    }
#line 1078 "stack_opt.m"
    ll_backend__stack_opt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 0)));
#line 1078 "stack_opt.m"
    ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 1)));
#line 1078 "stack_opt.m"
    ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 2)));
#line 1078 "stack_opt.m"
    {
#line 1078 "stack_opt.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0, ll_backend__stack_opt__TypeCtorInfo_31_31, (MR_Word) &ll_backend__stack_opt_scalar_common_2[7], ll_backend__stack_opt__V_17_17, ((MR_Box) ((MR_Integer) 0)), &ll_backend__stack_opt__conv1_STATE_VARIABLE_IO_18_18);
    }
#line 1079 "stack_opt.m"
    {
#line 1079 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1079 "stack_opt.m"
      return;
    }
#line 1072 "stack_opt.m"
  }
#line 1070 "stack_opt.m"
}

#line 1046 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__maybe_write_progress_message_7_p_0(
#line 1046 "stack_opt.m"
  MR_String ll_backend__stack_opt__Message_8,
#line 1046 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_9,
#line 1046 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_10,
#line 1046 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ProcInfo_11,
#line 1046 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_12)
#line 1046 "stack_opt.m"
{
#line 1061 "stack_opt.m"
  {
#line 1061 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__DebugStackOpt_9 == ll_backend__stack_opt__PredIdInt_10);

#line 1061 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1052 "stack_opt.m"
      {
#line 1052 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Goal_14;
#line 1052 "stack_opt.m"
        MR_Word ll_backend__stack_opt__VarSet_15;
#line 1052 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Globals_16;
#line 1052 "stack_opt.m"
        MR_Word ll_backend__stack_opt__OutInfo_17;

#line 1052 "stack_opt.m"
        {
#line 1052 "stack_opt.m"
          mercury__io__write_string_3_p_0(ll_backend__stack_opt__Message_8);
        }
#line 1053 "stack_opt.m"
        {
#line 1053 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
#line 1054 "stack_opt.m"
        {
#line 1054 "stack_opt.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_opt__ProcInfo_11, &ll_backend__stack_opt__Goal_14);
        }
#line 1055 "stack_opt.m"
        {
#line 1055 "stack_opt.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__stack_opt__ProcInfo_11, &ll_backend__stack_opt__VarSet_15);
        }
#line 1056 "stack_opt.m"
        {
#line 1056 "stack_opt.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_opt__ModuleInfo_12, &ll_backend__stack_opt__Globals_16);
        }
#line 1057 "stack_opt.m"
        {
#line 1057 "stack_opt.m"
          ll_backend__stack_opt__OutInfo_17 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(ll_backend__stack_opt__Globals_16, (MR_Integer) 1);
        }
#line 1058 "stack_opt.m"
        {
#line 1058 "stack_opt.m"
          hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(ll_backend__stack_opt__OutInfo_17, ll_backend__stack_opt__ModuleInfo_12, ll_backend__stack_opt__VarSet_15, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n", ll_backend__stack_opt__Goal_14);
        }
#line 1060 "stack_opt.m"
        {
#line 1060 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1060 "stack_opt.m"
          return;
        }
#line 1052 "stack_opt.m"
      }
#line 1061 "stack_opt.m"
    else
#line 1061 "stack_opt.m"
      {
#line 1061 "stack_opt.m"
      }
#line 1061 "stack_opt.m"
  }
#line 1046 "stack_opt.m"
}

#line 1031 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(
#line 1031 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1031 "stack_opt.m"
{
#line 1033 "stack_opt.m"
  {
#line 1033 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1033 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1033 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1033 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));

#line 1033 "stack_opt.m"
    return ll_backend__stack_opt__AfterModelNon_4;
#line 1033 "stack_opt.m"
  }
#line 1031 "stack_opt.m"
}

#line 1027 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(
#line 1027 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1027 "stack_opt.m"
{
#line 1029 "stack_opt.m"
  {
#line 1029 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1029 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1029 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1029 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));

#line 1029 "stack_opt.m"
    return ll_backend__stack_opt__Paths_3;
#line 1029 "stack_opt.m"
  }
#line 1027 "stack_opt.m"
}

#line 1022 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_2(
#line 1022 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1022 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1022 "stack_opt.m"
{
#line 1022 "stack_opt.m"
  {
#line 1022 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1022 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1022 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_AfterModelNon_4;

#line 1022 "stack_opt.m"
    {
#line 1022 "stack_opt.m"
      ll_backend__stack_opt__conv1_AfterModelNon_4 = ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1022 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_AfterModelNon_4));
#line 1022 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1022 "stack_opt.m"
  }
#line 1022 "stack_opt.m"
}

#line 1019 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_1(
#line 1019 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1019 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1019 "stack_opt.m"
{
#line 1019 "stack_opt.m"
  {
#line 1019 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1019 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1019 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_Paths_3;

#line 1019 "stack_opt.m"
    {
#line 1019 "stack_opt.m"
      ll_backend__stack_opt__conv0_Paths_3 = ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1019 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_Paths_3));
#line 1019 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1019 "stack_opt.m"
  }
#line 1019 "stack_opt.m"
}

#line 1014 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0(
#line 1014 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 1014 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__AllPaths_2)
#line 1014 "stack_opt.m"
{
#line 1016 "stack_opt.m"
  {
#line 1016 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1016 "stack_opt.m"
    if ((ll_backend__stack_opt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1016 "stack_opt.m"
      {
#line 1017 "stack_opt.m"
        {
#line 1017 "stack_opt.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.consolidate_after_join\'/2", (MR_String) "no paths to join");
#line 1017 "stack_opt.m"
          return;
        }
#line 1016 "stack_opt.m"
      }
#line 1016 "stack_opt.m"
    else
#line 1018 "stack_opt.m"
      {
#line 1018 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0;
#line 1018 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PathsList_10;
#line 1018 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Paths_12;
#line 1018 "stack_opt.m"
        MR_Word ll_backend__stack_opt__AfterModelNonList_13;
#line 1018 "stack_opt.m"
        MR_Word ll_backend__stack_opt__AfterModelNon_14;
#line 1018 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19;

#line 1019 "stack_opt.m"
        {
#line 1019 "stack_opt.m"
          ll_backend__stack_opt__PathsList_10 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_20_20, (MR_Word) &ll_backend__stack_opt_scalar_common_1[11], (MR_Word) &ll_backend__stack_opt_scalar_common_2[4], ll_backend__stack_opt__HeadVar__1_1);
        }
#line 1020 "stack_opt.m"
        {
#line 1020 "stack_opt.m"
          ll_backend__stack_opt__Paths_12 = mercury__set__union_list_1_f_0((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0, ll_backend__stack_opt__PathsList_10);
        }
#line 1022 "stack_opt.m"
        {
#line 1022 "stack_opt.m"
          ll_backend__stack_opt__AfterModelNonList_13 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_20_20, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &ll_backend__stack_opt_scalar_common_2[5], ll_backend__stack_opt__HeadVar__1_1);
        }
#line 1024 "stack_opt.m"
        {
#line 1024 "stack_opt.m"
          mercury__bool__or_list_2_p_0(ll_backend__stack_opt__AfterModelNonList_13, &ll_backend__stack_opt__AfterModelNon_14);
        }
#line 1025 "stack_opt.m"
        {
#line 1025 "stack_opt.m"
          ll_backend__stack_opt__V_19_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 1025 "stack_opt.m"
        {
#line 1025 "stack_opt.m"
          MR_Word base;
#line 1025 "stack_opt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1025 "stack_opt.m"
          *ll_backend__stack_opt__AllPaths_2 = base;
#line 1025 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__Paths_12));
#line 1025 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__AfterModelNon_14));
#line 1025 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__V_19_19));
#line 1025 "stack_opt.m"
        }
#line 1018 "stack_opt.m"
      }
#line 1016 "stack_opt.m"
  }
#line 1014 "stack_opt.m"
}

#line 1001 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_2(
#line 1001 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1001 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1001 "stack_opt.m"
{
#line 1001 "stack_opt.m"
  {
#line 1001 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1001 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1001 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv4_STATE_VARIABLE_Path_9;

#line 1001 "stack_opt.m"
    {
#line 1001 "stack_opt.m"
      ll_backend__stack_opt__conv4_STATE_VARIABLE_Path_9 = ll_backend__stack_opt__add_anchor_to_path_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1001 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv4_STATE_VARIABLE_Path_9));
#line 1001 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1001 "stack_opt.m"
  }
#line 1001 "stack_opt.m"
}

#line 987 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_1(
#line 987 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 987 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 987 "stack_opt.m"
{
#line 987 "stack_opt.m"
  {
#line 987 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 987 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_STATE_VARIABLE_Path_13;

#line 987 "stack_opt.m"
    {
#line 987 "stack_opt.m"
      ll_backend__stack_opt__conv1_STATE_VARIABLE_Path_13 = ll_backend__stack_opt__add_interval_to_path_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 987 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_STATE_VARIABLE_Path_13));
#line 987 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 987 "stack_opt.m"
  }
#line 987 "stack_opt.m"
}

#line 978 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(
#line 978 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 978 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 978 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 978 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 978 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 978 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32,
#line 978 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_33)
#line 978 "stack_opt.m"
{
#line 983 "stack_opt.m"
  {
#line 983 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_102_102 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_104_104;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_105_105;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_108_108;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalVars_14;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__RelevantIntervalVars_15;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths0_16;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon0_17;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__RelevantAfter_18;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths1_19;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Start_20;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths2_30;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon_31;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_35_35;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_36_36;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40;
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 984 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 984 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_IntervalVars_14;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_57_57;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_58_58;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_59_59;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_60_60;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_61_61;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_62_62;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_63_63;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_64_64;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_65_65;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_66_66;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_67_67;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_68_68;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_69_69;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_70_70;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_71_71;
#line 989 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv2_Start_20;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_109_109;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StartInfo_26;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorFollowVars_27;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__NeededVars_29;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_37_37;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_72_72;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_73_73;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_74_74;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_75_75;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_76_76;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_77_77;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_78_78;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_79_79;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_80_80;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_81_81;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_82_82;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_83_83;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_84_84;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_85_85;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_86_86;
#line 996 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv3_StartInfo_26;
#line 997 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_28_28;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_39_39;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_87_87;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_88_88;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_89_89;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_90_90;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_91_91;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_92_92;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_93_93;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_94_94;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_95_95;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_96_96;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_97_97;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_98_98;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_99_99;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_100_100;
#line 1005 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_101_101;

#line 984 "stack_opt.m"
    {
#line 984 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_102_102, (MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__V_34_34, ((MR_Box) (ll_backend__stack_opt__IntervalId_12)), &ll_backend__stack_opt__conv0_IntervalVars_14);
    }
#line 984 "stack_opt.m"
    ll_backend__stack_opt__IntervalVars_14 = ((MR_Word) ll_backend__stack_opt__conv0_IntervalVars_14);
#line 7942 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 985 "stack_opt.m"
    {
#line 985 "stack_opt.m"
      ll_backend__stack_opt__RelevantIntervalVars_15 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__stack_opt__TypeCtorInfo_104_104, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__IntervalVars_14);
    }
#line 986 "stack_opt.m"
    ll_backend__stack_opt__Paths0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 0)));
#line 986 "stack_opt.m"
    ll_backend__stack_opt__AfterModelNon0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 1)));
#line 986 "stack_opt.m"
    ll_backend__stack_opt__RelevantAfter_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 2)));
#line 7955 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_105_105 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0;
#line 987 "stack_opt.m"
    {
#line 987 "stack_opt.m"
      ll_backend__stack_opt__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 987 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[1]));
#line 987 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_1));
#line 987 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 987 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 3) = ((MR_Box) (ll_backend__stack_opt__IntervalId_12));
#line 987 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 4) = ((MR_Box) (ll_backend__stack_opt__RelevantIntervalVars_15));
#line 987 "stack_opt.m"
    }
#line 987 "stack_opt.m"
    {
#line 987 "stack_opt.m"
      ll_backend__stack_opt__Paths1_19 = mercury__set__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__V_35_35, ll_backend__stack_opt__Paths0_16);
    }
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 989 "stack_opt.m"
    ll_backend__stack_opt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 8010 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 989 "stack_opt.m"
    {
#line 989 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_102_102, ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__V_36_36, ((MR_Box) (ll_backend__stack_opt__IntervalId_12)), &ll_backend__stack_opt__conv2_Start_20);
    }
#line 989 "stack_opt.m"
    ll_backend__stack_opt__Start_20 = ((MR_Word) ll_backend__stack_opt__conv2_Start_20);
#line 993 "stack_opt.m"
#line 993 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__Start_20)) {
#line 993 "stack_opt.m"
      default:
#line 993 "stack_opt.m"
        ll_backend__stack_opt__succeeded = MR_FALSE;
#line 993 "stack_opt.m"
        break;
#line 993 "stack_opt.m"
      case (MR_Integer) 1:
#line 994 "stack_opt.m"
        ll_backend__stack_opt__succeeded = MR_TRUE;
#line 993 "stack_opt.m"
        break;
#line 993 "stack_opt.m"
      case (MR_Integer) 3:
#line 993 "stack_opt.m"
#line 993 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__Start_20, (MR_Integer) 0)))) {
#line 993 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 993 "stack_opt.m"
          case (MR_Integer) 0:
#line 993 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 993 "stack_opt.m"
            break;
#line 993 "stack_opt.m"
          case (MR_Integer) 1:
#line 992 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 993 "stack_opt.m"
            break;
#line 993 "stack_opt.m"
        }
#line 993 "stack_opt.m"
        break;
#line 993 "stack_opt.m"
    }
#line 995 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 995 "stack_opt.m"
      {
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 996 "stack_opt.m"
        ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 8095 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0;
#line 996 "stack_opt.m"
        {
#line 996 "stack_opt.m"
          ll_backend__stack_opt__succeeded = mercury__map__search_3_p_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__TypeCtorInfo_109_109, ll_backend__stack_opt__V_37_37, ((MR_Box) (ll_backend__stack_opt__Start_20)), &ll_backend__stack_opt__conv3_StartInfo_26);
        }
#line 996 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 996 "stack_opt.m"
          {
#line 996 "stack_opt.m"
            ll_backend__stack_opt__StartInfo_26 = ((MR_Word) ll_backend__stack_opt__conv3_StartInfo_26);
#line 996 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 996 "stack_opt.m"
          }
#line 995 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 995 "stack_opt.m"
          {
#line 997 "stack_opt.m"
            ll_backend__stack_opt__AnchorFollowVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StartInfo_26, (MR_Integer) 0)));
#line 997 "stack_opt.m"
            ll_backend__stack_opt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StartInfo_26, (MR_Integer) 1)));
#line 998 "stack_opt.m"
            {
#line 998 "stack_opt.m"
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__stack_opt__TypeCtorInfo_104_104, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__AnchorFollowVars_27, &ll_backend__stack_opt__NeededVars_29);
            }
#line 999 "stack_opt.m"
            {
#line 999 "stack_opt.m"
              ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_104_104, ll_backend__stack_opt__NeededVars_29);
            }
#line 995 "stack_opt.m"
          }
#line 995 "stack_opt.m"
      }
#line 1002 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1001 "stack_opt.m"
      {
#line 1001 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_38_38;

#line 1001 "stack_opt.m"
        {
#line 1001 "stack_opt.m"
          ll_backend__stack_opt__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_11[0]));
#line 1001 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_2));
#line 1001 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1001 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 3) = ((MR_Box) (ll_backend__stack_opt__Start_20));
#line 1001 "stack_opt.m"
        }
#line 1001 "stack_opt.m"
        {
#line 1001 "stack_opt.m"
          ll_backend__stack_opt__Paths2_30 = mercury__set__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__V_38_38, ll_backend__stack_opt__Paths1_19);
        }
#line 1001 "stack_opt.m"
      }
#line 1002 "stack_opt.m"
    else
#line 1003 "stack_opt.m"
      ll_backend__stack_opt__Paths2_30 = ll_backend__stack_opt__Paths1_19;
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 1005 "stack_opt.m"
    ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 1005 "stack_opt.m"
    {
#line 1005 "stack_opt.m"
      ll_backend__stack_opt__succeeded = mercury__set__member_2_p_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ((MR_Box) (ll_backend__stack_opt__Start_20)), ll_backend__stack_opt__V_39_39);
    }
#line 1007 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1006 "stack_opt.m"
      ll_backend__stack_opt__AfterModelNon_31 = (MR_Integer) 1;
#line 1007 "stack_opt.m"
    else
#line 1008 "stack_opt.m"
      ll_backend__stack_opt__AfterModelNon_31 = ll_backend__stack_opt__AfterModelNon0_17;
#line 1010 "stack_opt.m"
    {
#line 1010 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, 0) = ((MR_Box) (ll_backend__stack_opt__Paths2_30));
#line 1010 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, 1) = ((MR_Box) (ll_backend__stack_opt__AfterModelNon_31));
#line 1010 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, 2) = ((MR_Box) (ll_backend__stack_opt__RelevantAfter_18));
#line 1010 "stack_opt.m"
    }
#line 1011 "stack_opt.m"
    {
#line 1011 "stack_opt.m"
      ll_backend__stack_opt__find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__IntervalId_12, ll_backend__stack_opt__MaybeSearchAnchor0_9, ll_backend__stack_opt__IntervalInfo_10, ll_backend__stack_opt__StackOptInfo_11, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_33);
#line 1011 "stack_opt.m"
      return;
    }
#line 983 "stack_opt.m"
  }
#line 978 "stack_opt.m"
}

#line 969 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(
#line 969 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 969 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 969 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 969 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 969 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_14,
#line 969 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_13,
#line 969 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_15)
#line 969 "stack_opt.m"
{
#line 975 "stack_opt.m"
  {
#line 975 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 975 "stack_opt.m"
    {
#line 975 "stack_opt.m"
      ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__MaybeSearchAnchor0_9, ll_backend__stack_opt__IntervalInfo_10, ll_backend__stack_opt__StackOptInfo_11, ll_backend__stack_opt__IntervalId_13, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_14, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_15);
#line 975 "stack_opt.m"
      return;
    }
#line 975 "stack_opt.m"
  }
#line 969 "stack_opt.m"
}

#line 954 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__one_after_another_7_p_0(
#line 954 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_1,
#line 954 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_2,
#line 954 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_3,
#line 954 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4,
#line 954 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 954 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6,
#line 954 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_7)
#line 954 "stack_opt.m"
{
#line 958 "stack_opt.m"
  while (MR_TRUE)
#line 958 "stack_opt.m"
    {
#line 958 "stack_opt.m"
      /* tailcall optimized into a loop */
#line 958 "stack_opt.m"
      {
#line 958 "stack_opt.m"
        MR_bool ll_backend__stack_opt__succeeded;

#line 958 "stack_opt.m"
        if ((ll_backend__stack_opt__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 958 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_7 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6;
#line 958 "stack_opt.m"
        else
#line 960 "stack_opt.m"
          {
#line 960 "stack_opt.m"
            MR_Word ll_backend__stack_opt__SuccessorId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__5_5, (MR_Integer) 0)));
#line 960 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MoreSuccessorIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__5_5, (MR_Integer) 1)));
#line 960 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_24;

#line 961 "stack_opt.m"
            {
#line 961 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_1, ll_backend__stack_opt__MaybeSearchAnchor1_2, ll_backend__stack_opt__IntervalInfo_3, ll_backend__stack_opt__StackOptInfo_4, ll_backend__stack_opt__SuccessorId_19, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_24);
            }
#line 963 "stack_opt.m"
            /* direct tailcall eliminated */
#line 963 "stack_opt.m"
            {
#line 963 "stack_opt.m"
              MR_Word ll_backend__stack_opt__HeadVar__5__tmp_copy_5 = ll_backend__stack_opt__MoreSuccessorIds_20;
#line 963 "stack_opt.m"
              MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0__tmp_copy_6 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_24;

#line 963 "stack_opt.m"
              ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0__tmp_copy_6;
#line 963 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__5_5 = ll_backend__stack_opt__HeadVar__5__tmp_copy_5;
#line 963 "stack_opt.m"
            }
#line 963 "stack_opt.m"
            continue;
#line 960 "stack_opt.m"
          }
#line 958 "stack_opt.m"
      }
#line 958 "stack_opt.m"
      break;
#line 958 "stack_opt.m"
    }
#line 954 "stack_opt.m"
}

#line 935 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_2(
#line 935 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 935 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 935 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 935 "stack_opt.m"
{
#line 935 "stack_opt.m"
  {
#line 935 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 935 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv4_STATE_VARIABLE_AllPaths_15;

#line 935 "stack_opt.m"
    {
#line 935 "stack_opt.m"
      ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 7))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv4_STATE_VARIABLE_AllPaths_15);
    }
#line 935 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv4_STATE_VARIABLE_AllPaths_15));
#line 935 "stack_opt.m"
  }
#line 935 "stack_opt.m"
}

#line 888 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_1(
#line 888 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 888 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 888 "stack_opt.m"
{
#line 888 "stack_opt.m"
  {
#line 888 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 888 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 888 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_Path_4;

#line 888 "stack_opt.m"
    {
#line 888 "stack_opt.m"
      ll_backend__stack_opt__conv0_Path_4 = ll_backend__stack_opt__close_path_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 888 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_Path_4));
#line 888 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 888 "stack_opt.m"
  }
#line 888 "stack_opt.m"
}

#line 878 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0(
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__End_9,
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_10,
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_11,
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_12,
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_13,
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__SuccessorIds_14,
#line 878 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36,
#line 878 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37)
#line 878 "stack_opt.m"
{
#line 883 "stack_opt.m"
  {
#line 883 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 883 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorRequiresClose_16;
#line 883 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptParams_19;
#line 883 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FullPath_20;
#line 883 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39;
#line 893 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_90_90;
#line 893 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_91_91;
#line 894 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_92_92;
#line 894 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__V_93_93;
#line 894 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_94_94;
#line 894 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_95_95;
#line 894 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_96_96;
#line 907 "stack_opt.m"
    MR_Word ll_backend__stack_opt__EndGoalId_21;
#line 896 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_40_40;

#line 884 "stack_opt.m"
    {
#line 884 "stack_opt.m"
      ll_backend__stack_opt__AnchorRequiresClose_16 = ll_backend__stack_opt__anchor_requires_close_2_f_0(ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__End_9);
    }
#line 890 "stack_opt.m"
#line 890 "stack_opt.m"
    switch (ll_backend__stack_opt__AnchorRequiresClose_16) {
#line 890 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 890 "stack_opt.m"
      case (MR_Integer) 0:
#line 891 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36;
#line 890 "stack_opt.m"
        break;
#line 890 "stack_opt.m"
      case (MR_Integer) 1:
#line 886 "stack_opt.m"
        {
#line 886 "stack_opt.m"
          MR_Word ll_backend__stack_opt__TypeCtorInfo_163_163 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0;
#line 886 "stack_opt.m"
          MR_Word ll_backend__stack_opt__Paths0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 0)));
#line 886 "stack_opt.m"
          MR_Word ll_backend__stack_opt__Paths1_18;
#line 887 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 1)));
#line 887 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 2)));
#line 889 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_88_88;
#line 889 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_89_89;
#line 889 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_87_87;

#line 888 "stack_opt.m"
          {
#line 888 "stack_opt.m"
            ll_backend__stack_opt__Paths1_18 = mercury__set__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_163_163, ll_backend__stack_opt__TypeCtorInfo_163_163, (MR_Word) &ll_backend__stack_opt_scalar_common_2[3], ll_backend__stack_opt__Paths0_17);
          }
#line 889 "stack_opt.m"
          ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 0)));
#line 889 "stack_opt.m"
          ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 1)));
#line 889 "stack_opt.m"
          ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 2)));
#line 889 "stack_opt.m"
          {
#line 889 "stack_opt.m"
            ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 889 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, 0) = ((MR_Box) (ll_backend__stack_opt__Paths1_18));
#line 889 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, 1) = ((MR_Box) (ll_backend__stack_opt__V_88_88));
#line 889 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, 2) = ((MR_Box) (ll_backend__stack_opt__V_89_89));
#line 889 "stack_opt.m"
          }
#line 886 "stack_opt.m"
        }
#line 890 "stack_opt.m"
        break;
#line 890 "stack_opt.m"
    }
#line 893 "stack_opt.m"
    ll_backend__stack_opt__StackOptParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_13, (MR_Integer) 0)));
#line 893 "stack_opt.m"
    ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_13, (MR_Integer) 1)));
#line 893 "stack_opt.m"
    ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_13, (MR_Integer) 2)));
#line 894 "stack_opt.m"
    ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 0)));
#line 894 "stack_opt.m"
    ll_backend__stack_opt__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 1)));
#line 894 "stack_opt.m"
    ll_backend__stack_opt__V_94_94 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 894 "stack_opt.m"
    ll_backend__stack_opt__FullPath_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 894 "stack_opt.m"
    ll_backend__stack_opt__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 894 "stack_opt.m"
    ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 3)));
#line 896 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__FullPath_20 == (MR_Integer) 1);
#line 896 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 896 "stack_opt.m"
      {
#line 897 "stack_opt.m"
        ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__End_9)) == (MR_mktag((MR_Integer) 1)));
#line 897 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 897 "stack_opt.m"
          {
#line 897 "stack_opt.m"
            ll_backend__stack_opt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 0)));
#line 897 "stack_opt.m"
            ll_backend__stack_opt__EndGoalId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 1)));
#line 897 "stack_opt.m"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_40_40 == (MR_Integer) 1);
#line 897 "stack_opt.m"
          }
#line 896 "stack_opt.m"
      }
#line 907 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 899 "stack_opt.m"
      {
#line 899 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_22;
#line 899 "stack_opt.m"
        MR_Word ll_backend__stack_opt__BranchEndInfo_23;
#line 899 "stack_opt.m"
        MR_Word ll_backend__stack_opt__ContinueId_24;
#line 899 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_41_41;
#line 899 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_43_43;
#line 899 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_44_44;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_97_97;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_98_98;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_99_99;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_100_100;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_101_101;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_102_102;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_103_103;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_104_104;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_105_105;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_106_106;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_107_107;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_108_108;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_109_109;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_110_110;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_111_111;
#line 902 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv1_BranchEndInfo_23;
#line 904 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_112_112;
#line 904 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_113_113;

#line 899 "stack_opt.m"
        {
#line 899 "stack_opt.m"
          ll_backend__stack_opt__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 899 "stack_opt.m"
          MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 899 "stack_opt.m"
          MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_41_41, 1) = ((MR_Box) ((MR_Integer) 1));
#line 899 "stack_opt.m"
          MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_41_41, 2) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_21));
#line 899 "stack_opt.m"
        }
#line 899 "stack_opt.m"
        {
#line 899 "stack_opt.m"
          ll_backend__stack_opt__MaybeSearchAnchor1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 899 "stack_opt.m"
          MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchor1_22, 0) = ((MR_Box) (ll_backend__stack_opt__V_41_41));
#line 899 "stack_opt.m"
        }
#line 900 "stack_opt.m"
        {
#line 900 "stack_opt.m"
          ll_backend__stack_opt__one_after_another_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor1_22, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorIds_14, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_43_43);
        }
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 902 "stack_opt.m"
        {
#line 902 "stack_opt.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ll_backend__stack_opt__V_44_44, ((MR_Box) (ll_backend__stack_opt__EndGoalId_21)), &ll_backend__stack_opt__conv1_BranchEndInfo_23);
        }
#line 902 "stack_opt.m"
        ll_backend__stack_opt__BranchEndInfo_23 = ((MR_Word) ll_backend__stack_opt__conv1_BranchEndInfo_23);
#line 904 "stack_opt.m"
        ll_backend__stack_opt__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 0)));
#line 904 "stack_opt.m"
        ll_backend__stack_opt__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 1)));
#line 904 "stack_opt.m"
        ll_backend__stack_opt__ContinueId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 2)));
#line 905 "stack_opt.m"
        {
#line 905 "stack_opt.m"
          ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__ContinueId_24, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_43_43, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
#line 905 "stack_opt.m"
          return;
        }
#line 899 "stack_opt.m"
      }
#line 907 "stack_opt.m"
    else
#line 931 "stack_opt.m"
      {
#line 931 "stack_opt.m"
        MR_Word ll_backend__stack_opt__EndGoalId_81;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_46_46;

#line 908 "stack_opt.m"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__FullPath_20 == (MR_Integer) 1);
#line 908 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 908 "stack_opt.m"
          {
#line 909 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__End_9)) == (MR_mktag((MR_Integer) 1)));
#line 909 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 909 "stack_opt.m"
              {
#line 909 "stack_opt.m"
                ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 0)));
#line 909 "stack_opt.m"
                ll_backend__stack_opt__EndGoalId_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 1)));
#line 909 "stack_opt.m"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_46_46 == (MR_Integer) 0);
#line 909 "stack_opt.m"
              }
#line 908 "stack_opt.m"
          }
#line 931 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 916 "stack_opt.m"
          {
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_168_168;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ElseStartId_27;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CondStartId_28;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MaybeSearchAnchorCond_29;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MaybeSearchAnchorEnd_30;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CondEndMap_31;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_52_52;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_53_53;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_54_54;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_57_57;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_60_60;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchEndInfo_72;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ContinueId_73;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__SuccessorId_188;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MoreSuccessorIds_189;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_193;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__SuccessorId_206;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MoreSuccessorIds_207;
#line 916 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_211;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ElseStartIdPrime_25;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CondStartIdPrime_26;
#line 911 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_47_47;
#line 911 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_48_48;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_114_114;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_115_115;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_116_116;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_117_117;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_118_118;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_119_119;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_120_120;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_121_121;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_122_122;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_123_123;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_124_124;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_125_125;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_126_126;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_127_127;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_128_128;
#line 923 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv2_SuccessorId_188;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_129_129;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_130_130;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_131_131;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_132_132;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_133_133;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_134_134;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_135_135;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_136_136;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_137_137;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_138_138;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_139_139;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_140_140;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_141_141;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_142_142;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_143_143;
#line 926 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv3_BranchEndInfo_72;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_144_144;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_145_145;

#line 911 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__SuccessorIds_14)) == (MR_mktag((MR_Integer) 1)));
#line 911 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 911 "stack_opt.m"
              {
#line 911 "stack_opt.m"
                ll_backend__stack_opt__ElseStartIdPrime_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 0)));
#line 911 "stack_opt.m"
                ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 1)));
#line 911 "stack_opt.m"
                ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 911 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 911 "stack_opt.m"
                  {
#line 911 "stack_opt.m"
                    ll_backend__stack_opt__CondStartIdPrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_47_47, (MR_Integer) 0)));
#line 911 "stack_opt.m"
                    ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_47_47, (MR_Integer) 1)));
#line 911 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 911 "stack_opt.m"
                  }
#line 911 "stack_opt.m"
              }
#line 914 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 912 "stack_opt.m"
              {
#line 912 "stack_opt.m"
                ll_backend__stack_opt__ElseStartId_27 = ll_backend__stack_opt__ElseStartIdPrime_25;
#line 913 "stack_opt.m"
                ll_backend__stack_opt__CondStartId_28 = ll_backend__stack_opt__CondStartIdPrime_26;
#line 912 "stack_opt.m"
              }
#line 914 "stack_opt.m"
            else
#line 915 "stack_opt.m"
              {
#line 915 "stack_opt.m"
                {
#line 915 "stack_opt.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "ite not else, cond");
#line 915 "stack_opt.m"
                  return;
                }
#line 915 "stack_opt.m"
              }
#line 917 "stack_opt.m"
            {
#line 917 "stack_opt.m"
              ll_backend__stack_opt__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 917 "stack_opt.m"
              MR_hl_field(MR_mktag(2), ll_backend__stack_opt__V_52_52, 0) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_81));
#line 917 "stack_opt.m"
            }
#line 917 "stack_opt.m"
            {
#line 917 "stack_opt.m"
              ll_backend__stack_opt__MaybeSearchAnchorCond_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 917 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchorCond_29, 0) = ((MR_Box) (ll_backend__stack_opt__V_52_52));
#line 917 "stack_opt.m"
            }
#line 918 "stack_opt.m"
            {
#line 918 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorCond_29, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__CondStartId_28, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_53_53);
            }
#line 921 "stack_opt.m"
            {
#line 921 "stack_opt.m"
              ll_backend__stack_opt__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 921 "stack_opt.m"
              MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 921 "stack_opt.m"
              MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_54_54, 1) = ((MR_Box) ((MR_Integer) 0));
#line 921 "stack_opt.m"
              MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_54_54, 2) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_81));
#line 921 "stack_opt.m"
            }
#line 921 "stack_opt.m"
            {
#line 921 "stack_opt.m"
              ll_backend__stack_opt__MaybeSearchAnchorEnd_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 921 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchorEnd_30, 0) = ((MR_Box) (ll_backend__stack_opt__V_54_54));
#line 921 "stack_opt.m"
            }
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__CondEndMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 922 "stack_opt.m"
            ll_backend__stack_opt__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 8973 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeCtorInfo_168_168 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 923 "stack_opt.m"
            {
#line 923 "stack_opt.m"
              mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_168_168, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ll_backend__stack_opt__CondEndMap_31, ((MR_Box) (ll_backend__stack_opt__EndGoalId_81)), &ll_backend__stack_opt__conv2_SuccessorId_188);
            }
#line 923 "stack_opt.m"
            ll_backend__stack_opt__SuccessorId_188 = ((MR_Word) ll_backend__stack_opt__conv2_SuccessorId_188);
#line 925 "stack_opt.m"
            {
#line 925 "stack_opt.m"
              ll_backend__stack_opt__MoreSuccessorIds_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, 0) = ((MR_Box) (ll_backend__stack_opt__ElseStartId_27));
#line 925 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "stack_opt.m"
            }
#line 961 "stack_opt.m"
            {
#line 961 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorEnd_30, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorId_188, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_53_53, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_193);
            }
#line 960 "stack_opt.m"
            ll_backend__stack_opt__SuccessorId_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, (MR_Integer) 0)));
#line 960 "stack_opt.m"
            ll_backend__stack_opt__MoreSuccessorIds_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, (MR_Integer) 1)));
#line 961 "stack_opt.m"
            {
#line 961 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorEnd_30, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorId_206, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_193, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_211);
            }
#line 963 "stack_opt.m"
            {
#line 963 "stack_opt.m"
              ll_backend__stack_opt__one_after_another_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorEnd_30, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__MoreSuccessorIds_207, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_211, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_57_57);
            }
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 926 "stack_opt.m"
            {
#line 926 "stack_opt.m"
              mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_168_168, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ll_backend__stack_opt__V_60_60, ((MR_Box) (ll_backend__stack_opt__EndGoalId_81)), &ll_backend__stack_opt__conv3_BranchEndInfo_72);
            }
#line 926 "stack_opt.m"
            ll_backend__stack_opt__BranchEndInfo_72 = ((MR_Word) ll_backend__stack_opt__conv3_BranchEndInfo_72);
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_72, (MR_Integer) 0)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_72, (MR_Integer) 1)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__ContinueId_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_72, (MR_Integer) 2)));
#line 929 "stack_opt.m"
            {
#line 929 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__ContinueId_73, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_57_57, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
#line 929 "stack_opt.m"
              return;
            }
#line 916 "stack_opt.m"
          }
#line 931 "stack_opt.m"
        else
#line 944 "stack_opt.m"
          {
#line 944 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchType_33;
#line 944 "stack_opt.m"
            MR_Word ll_backend__stack_opt__EndGoalId_77;

#line 932 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__End_9)) == (MR_mktag((MR_Integer) 1)));
#line 932 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 932 "stack_opt.m"
              {
#line 932 "stack_opt.m"
                ll_backend__stack_opt__BranchType_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 0)));
#line 932 "stack_opt.m"
                ll_backend__stack_opt__EndGoalId_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 1)));
#line 934 "stack_opt.m"
                {
#line 934 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__AllPathsList_34;
#line 934 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_62_62;
#line 934 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_63_63;
#line 934 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_64_64;
#line 934 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_65_65;
#line 934 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_74;
#line 934 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__BranchEndInfo_75;
#line 934 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ContinueId_76;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_146_146;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_147_147;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_148_148;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_149_149;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_150_150;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_151_151;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_152_152;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_153_153;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_154_154;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_155_155;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_156_156;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_157_157;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_158_158;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_159_159;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_160_160;
#line 939 "stack_opt.m"
                  MR_Box ll_backend__stack_opt__conv5_BranchEndInfo_75;
#line 941 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_161_161;
#line 941 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_162_162;

#line 934 "stack_opt.m"
                  {
#line 934 "stack_opt.m"
                    ll_backend__stack_opt__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 934 "stack_opt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 934 "stack_opt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_62_62, 1) = ((MR_Box) (ll_backend__stack_opt__BranchType_33));
#line 934 "stack_opt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_62_62, 2) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_77));
#line 934 "stack_opt.m"
                  }
#line 934 "stack_opt.m"
                  {
#line 934 "stack_opt.m"
                    ll_backend__stack_opt__MaybeSearchAnchor1_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 934 "stack_opt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchor1_74, 0) = ((MR_Box) (ll_backend__stack_opt__V_62_62));
#line 934 "stack_opt.m"
                  }
#line 935 "stack_opt.m"
                  {
#line 935 "stack_opt.m"
                    ll_backend__stack_opt__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 935 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_10[0]));
#line 935 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_8_p_0_2));
#line 935 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 935 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 3) = ((MR_Box) (ll_backend__stack_opt__RelevantVars_10));
#line 935 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 4) = ((MR_Box) (ll_backend__stack_opt__MaybeSearchAnchor1_74));
#line 935 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 5) = ((MR_Box) (ll_backend__stack_opt__IntervalInfo_12));
#line 935 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 6) = ((MR_Box) (ll_backend__stack_opt__StackOptInfo_13));
#line 935 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 7) = ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39));
#line 935 "stack_opt.m"
                  }
#line 935 "stack_opt.m"
                  {
#line 935 "stack_opt.m"
                    mercury__list__map_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0, ll_backend__stack_opt__V_63_63, ll_backend__stack_opt__SuccessorIds_14, &ll_backend__stack_opt__AllPathsList_34);
                  }
#line 938 "stack_opt.m"
                  {
#line 938 "stack_opt.m"
                    ll_backend__stack_opt__consolidate_after_join_2_p_0(ll_backend__stack_opt__AllPathsList_34, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_64_64);
                  }
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 939 "stack_opt.m"
                  {
#line 939 "stack_opt.m"
                    mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ll_backend__stack_opt__V_65_65, ((MR_Box) (ll_backend__stack_opt__EndGoalId_77)), &ll_backend__stack_opt__conv5_BranchEndInfo_75);
                  }
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__BranchEndInfo_75 = ((MR_Word) ll_backend__stack_opt__conv5_BranchEndInfo_75);
#line 941 "stack_opt.m"
                  ll_backend__stack_opt__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_75, (MR_Integer) 0)));
#line 941 "stack_opt.m"
                  ll_backend__stack_opt__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_75, (MR_Integer) 1)));
#line 941 "stack_opt.m"
                  ll_backend__stack_opt__ContinueId_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_75, (MR_Integer) 2)));
#line 942 "stack_opt.m"
                  {
#line 942 "stack_opt.m"
                    ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__ContinueId_76, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_64_64, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
#line 942 "stack_opt.m"
                    return;
                  }
#line 934 "stack_opt.m"
                }
#line 932 "stack_opt.m"
              }
#line 932 "stack_opt.m"
            else
#line 949 "stack_opt.m"
              {
#line 949 "stack_opt.m"
                MR_Word ll_backend__stack_opt__SuccessorId_35;
#line 945 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_67_67;

#line 945 "stack_opt.m"
                ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__SuccessorIds_14)) == (MR_mktag((MR_Integer) 1)));
#line 945 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 945 "stack_opt.m"
                  {
#line 945 "stack_opt.m"
                    ll_backend__stack_opt__SuccessorId_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 0)));
#line 945 "stack_opt.m"
                    ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 1)));
#line 945 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "stack_opt.m"
                  }
#line 949 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 946 "stack_opt.m"
                  {
#line 946 "stack_opt.m"
                    ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorId_35, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
#line 946 "stack_opt.m"
                    return;
                  }
#line 949 "stack_opt.m"
                else
#line 950 "stack_opt.m"
                  {
#line 950 "stack_opt.m"
                    {
#line 950 "stack_opt.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "more successor ids");
#line 950 "stack_opt.m"
                      return;
                    }
#line 950 "stack_opt.m"
                  }
#line 949 "stack_opt.m"
              }
#line 944 "stack_opt.m"
          }
#line 931 "stack_opt.m"
      }
#line 883 "stack_opt.m"
  }
#line 878 "stack_opt.m"
}

#line 850 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_3(
#line 850 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 850 "stack_opt.m"
{
#line 850 "stack_opt.m"
  {
#line 850 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 850 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 850 "stack_opt.m"
    {
#line 850 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__850__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))));
    }
#line 850 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 850 "stack_opt.m"
  }
#line 850 "stack_opt.m"
}

#line 846 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_2(
#line 846 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 846 "stack_opt.m"
{
#line 846 "stack_opt.m"
  {
#line 846 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 846 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 846 "stack_opt.m"
    {
#line 846 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__846__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))));
    }
#line 846 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 846 "stack_opt.m"
  }
#line 846 "stack_opt.m"
}

#line 837 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_1(
#line 837 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 837 "stack_opt.m"
{
#line 837 "stack_opt.m"
  {
#line 837 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 837 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 837 "stack_opt.m"
    {
#line 837 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__837__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))));
    }
#line 837 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 837 "stack_opt.m"
  }
#line 837 "stack_opt.m"
}

#line 827 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0(
#line 827 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 827 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_9,
#line 827 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_10,
#line 827 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_11,
#line 827 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_12,
#line 827 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28,
#line 827 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29)
#line 827 "stack_opt.m"
{
#line 832 "stack_opt.m"
  {
#line 832 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_111_111 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__End_14;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__SuccessorIds_15;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 12)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_31_31;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 0)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 1)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 2)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 3)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 4)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 5)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 6)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 7)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 8)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 9)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 10)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 11)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 13)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 14)));
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 15)));
#line 833 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_End_14;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_71_71;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_72_72;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_73_73;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_74_74;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_75_75;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_76_76;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_77_77;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_78_78;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_79_79;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_80_80;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_81_81;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_82_82;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_83_83;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_84_84;
#line 834 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_85_85;
#line 834 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv1_SuccessorIds_15;

#line 833 "stack_opt.m"
    {
#line 833 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_111_111, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ll_backend__stack_opt__V_30_30, ((MR_Box) (ll_backend__stack_opt__IntervalId_9)), &ll_backend__stack_opt__conv0_End_14);
    }
#line 833 "stack_opt.m"
    ll_backend__stack_opt__End_14 = ((MR_Word) ll_backend__stack_opt__conv0_End_14);
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 0)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 1)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 2)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 3)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 4)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 5)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 6)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 7)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 8)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 9)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 10)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 11)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 12)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 13)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 14)));
#line 834 "stack_opt.m"
    ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 15)));
#line 834 "stack_opt.m"
    {
#line 834 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_111_111, (MR_Word) &ll_backend__stack_opt_scalar_common_1[3], ll_backend__stack_opt__V_31_31, ((MR_Box) (ll_backend__stack_opt__IntervalId_9)), &ll_backend__stack_opt__conv1_SuccessorIds_15);
    }
#line 834 "stack_opt.m"
    ll_backend__stack_opt__SuccessorIds_15 = ((MR_Word) ll_backend__stack_opt__conv1_SuccessorIds_15);
#line 842 "stack_opt.m"
    if ((ll_backend__stack_opt__SuccessorIds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 836 "stack_opt.m"
      {
#line 836 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_50_50;
#line 836 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_54_54;

#line 837 "stack_opt.m"
        {
#line 837 "stack_opt.m"
          ll_backend__stack_opt__V_54_54 = ll_backend__stack_opt__may_have_no_successor_1_f_0(ll_backend__stack_opt__End_14);
        }
#line 837 "stack_opt.m"
        {
#line 837 "stack_opt.m"
          ll_backend__stack_opt__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 837 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
#line 837 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_1));
#line 837 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 837 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 3) = ((MR_Box) (ll_backend__stack_opt__V_54_54));
#line 837 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 4) = ((MR_Box) ((MR_Integer) 1));
#line 837 "stack_opt.m"
        }
#line 837 "stack_opt.m"
        {
#line 837 "stack_opt.m"
          mercury__require__expect_4_p_0(ll_backend__stack_opt__V_50_50, (MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected no successor");
        }
#line 836 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28;
#line 836 "stack_opt.m"
      }
#line 842 "stack_opt.m"
    else
#line 843 "stack_opt.m"
      {
#line 843 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MoreSuccessorIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_15, (MR_Integer) 1)));
#line 843 "stack_opt.m"
        MR_Word ll_backend__stack_opt__SuccessorId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_15, (MR_Integer) 0)));
#line 854 "stack_opt.m"
        MR_Word ll_backend__stack_opt__SearchAnchor0_20;

#line 848 "stack_opt.m"
        if ((ll_backend__stack_opt__MoreSuccessorIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 845 "stack_opt.m"
          {
#line 845 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_38_38;
#line 845 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_42_42;

#line 846 "stack_opt.m"
            {
#line 846 "stack_opt.m"
              ll_backend__stack_opt__V_42_42 = ll_backend__stack_opt__may_have_one_successor_1_f_0(ll_backend__stack_opt__End_14);
            }
#line 846 "stack_opt.m"
            {
#line 846 "stack_opt.m"
              ll_backend__stack_opt__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 846 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
#line 846 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_2));
#line 846 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 846 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 3) = ((MR_Box) (ll_backend__stack_opt__V_42_42));
#line 846 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 4) = ((MR_Box) ((MR_Integer) 1));
#line 846 "stack_opt.m"
            }
#line 846 "stack_opt.m"
            {
#line 846 "stack_opt.m"
              mercury__require__expect_4_p_0(ll_backend__stack_opt__V_38_38, (MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected one successor");
            }
#line 845 "stack_opt.m"
          }
#line 848 "stack_opt.m"
        else
#line 849 "stack_opt.m"
          {
#line 849 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_32_32;
#line 849 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_36_36;

#line 850 "stack_opt.m"
            {
#line 850 "stack_opt.m"
              ll_backend__stack_opt__V_36_36 = ll_backend__stack_opt__may_have_more_successors_1_f_0(ll_backend__stack_opt__End_14);
            }
#line 850 "stack_opt.m"
            {
#line 850 "stack_opt.m"
              ll_backend__stack_opt__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 850 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
#line 850 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_3));
#line 850 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 850 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 3) = ((MR_Box) (ll_backend__stack_opt__V_36_36));
#line 850 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 4) = ((MR_Box) ((MR_Integer) 1));
#line 850 "stack_opt.m"
            }
#line 850 "stack_opt.m"
            {
#line 850 "stack_opt.m"
              mercury__require__expect_4_p_0(ll_backend__stack_opt__V_32_32, (MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected more successors");
            }
#line 849 "stack_opt.m"
          }
#line 854 "stack_opt.m"
        ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__MaybeSearchAnchor0_10)) == (MR_mktag((MR_Integer) 1)));
#line 854 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 854 "stack_opt.m"
          {
#line 854 "stack_opt.m"
            ll_backend__stack_opt__SearchAnchor0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchor0_10, (MR_Integer) 0)));
#line 855 "stack_opt.m"
            {
#line 855 "stack_opt.m"
              ll_backend__stack_opt__succeeded = backend_libs__interval____Unify____anchor_0_0(ll_backend__stack_opt__End_14, ll_backend__stack_opt__SearchAnchor0_20);
            }
#line 854 "stack_opt.m"
          }
#line 858 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 857 "stack_opt.m"
          {
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_45_45;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_86_86;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_87_87;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_88_88;

#line 857 "stack_opt.m"
            {
#line 857 "stack_opt.m"
              ll_backend__stack_opt__V_45_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
#line 857 "stack_opt.m"
            ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0)));
#line 857 "stack_opt.m"
            ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1)));
#line 857 "stack_opt.m"
            ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 2)));
#line 857 "stack_opt.m"
            {
#line 857 "stack_opt.m"
              MR_Word base;
#line 857 "stack_opt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 857 "stack_opt.m"
              *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29 = base;
#line 857 "stack_opt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_86_86));
#line 857 "stack_opt.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__V_87_87));
#line 857 "stack_opt.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__V_45_45));
#line 857 "stack_opt.m"
            }
#line 857 "stack_opt.m"
          }
#line 858 "stack_opt.m"
        else
#line 871 "stack_opt.m"
          {
#line 871 "stack_opt.m"
            MR_Word ll_backend__stack_opt__RelevantAfter_27;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_118_118;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_119_119;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_120_120;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__EndGoalId_22;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchEndInfo_23;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__OnStackAfterBranch_24;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__AccessedAfterBranch_25;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__NeededAfterBranch_26;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_46_46;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_21_21;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_89_89;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_90_90;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_91_91;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_92_92;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_93_93;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_94_94;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_95_95;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_96_96;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_97_97;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_98_98;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_99_99;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_100_100;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_101_101;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_102_102;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_103_103;
#line 860 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv2_BranchEndInfo_23;
#line 862 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_105_105;

#line 859 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((((MR_tag((MR_Word) ll_backend__stack_opt__End_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__End_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 859 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 859 "stack_opt.m"
              {
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__End_14, (MR_Integer) 1)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__EndGoalId_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__End_14, (MR_Integer) 2)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 0)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 1)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 2)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 3)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 4)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 5)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 6)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 7)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 8)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 9)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 10)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 11)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 12)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 13)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 14)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 15)));
#line 9809 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeCtorInfo_118_118 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 9811 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeCtorInfo_119_119 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0;
#line 860 "stack_opt.m"
                {
#line 860 "stack_opt.m"
                  mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_118_118, ll_backend__stack_opt__TypeCtorInfo_119_119, ll_backend__stack_opt__V_46_46, ((MR_Box) (ll_backend__stack_opt__EndGoalId_22)), &ll_backend__stack_opt__conv2_BranchEndInfo_23);
                }
#line 860 "stack_opt.m"
                ll_backend__stack_opt__BranchEndInfo_23 = ((MR_Word) ll_backend__stack_opt__conv2_BranchEndInfo_23);
#line 862 "stack_opt.m"
                ll_backend__stack_opt__OnStackAfterBranch_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 0)));
#line 862 "stack_opt.m"
                ll_backend__stack_opt__AccessedAfterBranch_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 1)));
#line 862 "stack_opt.m"
                ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 2)));
#line 9826 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 864 "stack_opt.m"
                {
#line 864 "stack_opt.m"
                  ll_backend__stack_opt__NeededAfterBranch_26 = parse_tree__set_of_var__union_2_f_0(ll_backend__stack_opt__TypeCtorInfo_120_120, ll_backend__stack_opt__OnStackAfterBranch_24, ll_backend__stack_opt__AccessedAfterBranch_25);
                }
#line 866 "stack_opt.m"
                {
#line 866 "stack_opt.m"
                  ll_backend__stack_opt__RelevantAfter_27 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__stack_opt__TypeCtorInfo_120_120, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__NeededAfterBranch_26);
                }
#line 868 "stack_opt.m"
                {
#line 868 "stack_opt.m"
                  ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_120_120, ll_backend__stack_opt__RelevantAfter_27);
                }
#line 859 "stack_opt.m"
              }
#line 871 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 870 "stack_opt.m"
              {
#line 870 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0)));
#line 870 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1)));
#line 870 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 2)));

#line 870 "stack_opt.m"
                {
#line 870 "stack_opt.m"
                  MR_Word base;
#line 870 "stack_opt.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 870 "stack_opt.m"
                  *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29 = base;
#line 870 "stack_opt.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_108_108));
#line 870 "stack_opt.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__V_109_109));
#line 870 "stack_opt.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__RelevantAfter_27));
#line 870 "stack_opt.m"
                }
#line 870 "stack_opt.m"
              }
#line 871 "stack_opt.m"
            else
#line 872 "stack_opt.m"
              {
#line 872 "stack_opt.m"
                ll_backend__stack_opt__find_all_branches_from_8_p_0(ll_backend__stack_opt__End_14, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__MaybeSearchAnchor0_10, ll_backend__stack_opt__IntervalInfo_11, ll_backend__stack_opt__StackOptInfo_12, ll_backend__stack_opt__SuccessorIds_15, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29);
#line 872 "stack_opt.m"
                return;
              }
#line 871 "stack_opt.m"
          }
#line 843 "stack_opt.m"
      }
#line 832 "stack_opt.m"
  }
#line 827 "stack_opt.m"
}

#line 820 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1(
#line 820 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 820 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 820 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 820 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 820 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 820 "stack_opt.m"
{
#line 820 "stack_opt.m"
  {
#line 820 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 820 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv3_MatchPathInfo_6;
#line 820 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv2_Anchors_7;
#line 820 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_Intervals_8;

#line 820 "stack_opt.m"
    {
#line 820 "stack_opt.m"
      ll_backend__stack_opt__extract_match_and_save_info_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv3_MatchPathInfo_6, &ll_backend__stack_opt__conv2_Anchors_7, &ll_backend__stack_opt__conv1_Intervals_8);
    }
#line 820 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv3_MatchPathInfo_6));
#line 820 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv2_Anchors_7));
#line 820 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv1_Intervals_8));
#line 820 "stack_opt.m"
  }
#line 820 "stack_opt.m"
}

#line 805 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(
#line 805 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_5,
#line 805 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchInfo_6,
#line 805 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_7,
#line 805 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_8)
#line 805 "stack_opt.m"
{
#line 809 "stack_opt.m"
  {
#line 809 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_65_65 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_67_67;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_68_68;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_69_69;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 6)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalVars_10;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalRelevantVars_11;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Path0_12;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AllPaths0_13;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AllPaths_14;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths_15;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon_16;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__RelevantAfter_17;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PathList_18;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__MatchInputs_19;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushAnchorSets_20;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OccurringIntervalSets_21;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushAnchors_22;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OccurringIntervals_23;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_26_26;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_28_28;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_29_29;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_30_30;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_32_32;
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 14)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 0)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 1)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 2)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 3)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 4)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 5)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 7)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 8)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 9)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 10)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 11)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 12)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 13)));
#line 810 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 15)));
#line 811 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_IntervalVars_10;

#line 811 "stack_opt.m"
    {
#line 811 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_65_65, (MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__V_48_48, ((MR_Box) (ll_backend__stack_opt__IntervalId_9)), &ll_backend__stack_opt__conv0_IntervalVars_10);
    }
#line 811 "stack_opt.m"
    ll_backend__stack_opt__IntervalVars_10 = ((MR_Word) ll_backend__stack_opt__conv0_IntervalVars_10);
#line 10039 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 812 "stack_opt.m"
    {
#line 812 "stack_opt.m"
      ll_backend__stack_opt__IntervalRelevantVars_11 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__stack_opt__TypeCtorInfo_67_67, ll_backend__stack_opt__RelevantVars_5, ll_backend__stack_opt__IntervalVars_10);
    }
#line 814 "stack_opt.m"
    {
#line 814 "stack_opt.m"
      ll_backend__stack_opt__V_26_26 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_67_67);
    }
#line 10051 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_68_68 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 814 "stack_opt.m"
    {
#line 814 "stack_opt.m"
      ll_backend__stack_opt__V_28_28 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_68_68);
    }
#line 814 "stack_opt.m"
    {
#line 814 "stack_opt.m"
      ll_backend__stack_opt__V_29_29 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_65_65);
    }
#line 813 "stack_opt.m"
    {
#line 813 "stack_opt.m"
      ll_backend__stack_opt__Path0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 813 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 0) = ((MR_Box) ((MR_Integer) 0));
#line 813 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 1) = ((MR_Box) (ll_backend__stack_opt__IntervalRelevantVars_11));
#line 813 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 2) = ((MR_Box) (ll_backend__stack_opt__V_26_26));
#line 813 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 813 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 4) = ((MR_Box) (ll_backend__stack_opt__V_28_28));
#line 813 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 5) = ((MR_Box) (ll_backend__stack_opt__V_29_29));
#line 813 "stack_opt.m"
    }
#line 10081 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_69_69 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0;
#line 815 "stack_opt.m"
    {
#line 815 "stack_opt.m"
      ll_backend__stack_opt__V_30_30 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_opt__TypeCtorInfo_69_69, ((MR_Box) (ll_backend__stack_opt__Path0_12)));
    }
#line 815 "stack_opt.m"
    {
#line 815 "stack_opt.m"
      ll_backend__stack_opt__V_32_32 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_67_67);
    }
#line 815 "stack_opt.m"
    {
#line 815 "stack_opt.m"
      ll_backend__stack_opt__AllPaths0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 815 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths0_13, 0) = ((MR_Box) (ll_backend__stack_opt__V_30_30));
#line 815 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths0_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 815 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths0_13, 2) = ((MR_Box) (ll_backend__stack_opt__V_32_32));
#line 815 "stack_opt.m"
    }
#line 816 "stack_opt.m"
    {
#line 816 "stack_opt.m"
      ll_backend__stack_opt__find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_5, ll_backend__stack_opt__IntervalId_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__stack_opt__IntervalInfo_7, ll_backend__stack_opt__StackOptInfo_8, ll_backend__stack_opt__AllPaths0_13, &ll_backend__stack_opt__AllPaths_14);
    }
#line 818 "stack_opt.m"
    ll_backend__stack_opt__Paths_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths_14, (MR_Integer) 0)));
#line 818 "stack_opt.m"
    ll_backend__stack_opt__AfterModelNon_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths_14, (MR_Integer) 1)));
#line 818 "stack_opt.m"
    ll_backend__stack_opt__RelevantAfter_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths_14, (MR_Integer) 2)));
#line 819 "stack_opt.m"
    {
#line 819 "stack_opt.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__stack_opt__TypeCtorInfo_69_69, ll_backend__stack_opt__Paths_15, &ll_backend__stack_opt__PathList_18);
    }
#line 820 "stack_opt.m"
    {
#line 820 "stack_opt.m"
      mercury__list__map3_5_p_0(ll_backend__stack_opt__TypeCtorInfo_69_69, (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0, (MR_Word) &ll_backend__stack_opt_scalar_common_1[10], (MR_Word) &ll_backend__stack_opt_scalar_common_1[9], (MR_Word) &ll_backend__stack_opt_scalar_common_2[2], ll_backend__stack_opt__PathList_18, &ll_backend__stack_opt__MatchInputs_19, &ll_backend__stack_opt__FlushAnchorSets_20, &ll_backend__stack_opt__OccurringIntervalSets_21);
    }
#line 822 "stack_opt.m"
    {
#line 822 "stack_opt.m"
      ll_backend__stack_opt__FlushAnchors_22 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_68_68, ll_backend__stack_opt__FlushAnchorSets_20);
    }
#line 823 "stack_opt.m"
    {
#line 823 "stack_opt.m"
      ll_backend__stack_opt__OccurringIntervals_23 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_65_65, ll_backend__stack_opt__OccurringIntervalSets_21);
    }
#line 824 "stack_opt.m"
    {
#line 824 "stack_opt.m"
      MR_Word base;
#line 824 "stack_opt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 824 "stack_opt.m"
      *ll_backend__stack_opt__MatchInfo_6 = base;
#line 824 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__MatchInputs_19));
#line 824 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__RelevantAfter_17));
#line 824 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__AfterModelNon_16));
#line 824 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__stack_opt__FlushAnchors_22));
#line 824 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__stack_opt__OccurringIntervals_23));
#line 824 "stack_opt.m"
    }
#line 809 "stack_opt.m"
  }
#line 805 "stack_opt.m"
}

#line 783 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_more_successors_1_f_0(
#line 783 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 783 "stack_opt.m"
{
#line 785 "stack_opt.m"
  {
#line 785 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 785 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__2_2;

#line 785 "stack_opt.m"
#line 785 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) {
#line 785 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 785 "stack_opt.m"
      case (MR_Integer) 0:
#line 785 "stack_opt.m"
#line 785 "stack_opt.m"
        switch (MR_unmkbody(ll_backend__stack_opt__HeadVar__1_1)) {
#line 785 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 785 "stack_opt.m"
          case (MR_Integer) 0:
#line 785 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 785 "stack_opt.m"
            break;
#line 785 "stack_opt.m"
          case (MR_Integer) 1:
#line 786 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 785 "stack_opt.m"
            break;
#line 785 "stack_opt.m"
        }
#line 785 "stack_opt.m"
        break;
#line 785 "stack_opt.m"
      case (MR_Integer) 1:
#line 787 "stack_opt.m"
        {
#line 787 "stack_opt.m"
          MR_Word ll_backend__stack_opt__BranchType_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 787 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));

#line 791 "stack_opt.m"
          ll_backend__stack_opt__HeadVar__2_2 = ((&ll_backend__stack_opt_vector_common_7[5 + ll_backend__stack_opt__BranchType_3]))->ll_backend__stack_opt__vector_common_type_7_0__vct_7_f_0;
#line 787 "stack_opt.m"
        }
#line 785 "stack_opt.m"
        break;
#line 785 "stack_opt.m"
      case (MR_Integer) 2:
#line 799 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 785 "stack_opt.m"
        break;
#line 785 "stack_opt.m"
      case (MR_Integer) 3:
#line 785 "stack_opt.m"
#line 785 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)))) {
#line 785 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 785 "stack_opt.m"
          case (MR_Integer) 0:
#line 800 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 785 "stack_opt.m"
            break;
#line 785 "stack_opt.m"
          case (MR_Integer) 1:
#line 801 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 785 "stack_opt.m"
            break;
#line 785 "stack_opt.m"
        }
#line 785 "stack_opt.m"
        break;
#line 785 "stack_opt.m"
    }
#line 785 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__2_2;
#line 785 "stack_opt.m"
  }
#line 783 "stack_opt.m"
}

#line 774 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_one_successor_1_f_0(
#line 774 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 774 "stack_opt.m"
{
#line 776 "stack_opt.m"
  {
#line 776 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 776 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__2_2;

#line 776 "stack_opt.m"
#line 776 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) {
#line 776 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 776 "stack_opt.m"
      case (MR_Integer) 0:
#line 776 "stack_opt.m"
#line 776 "stack_opt.m"
        switch (MR_unmkbody(ll_backend__stack_opt__HeadVar__1_1)) {
#line 776 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 776 "stack_opt.m"
          case (MR_Integer) 0:
#line 776 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 776 "stack_opt.m"
            break;
#line 776 "stack_opt.m"
          case (MR_Integer) 1:
#line 777 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 776 "stack_opt.m"
            break;
#line 776 "stack_opt.m"
        }
#line 776 "stack_opt.m"
        break;
#line 776 "stack_opt.m"
      case (MR_Integer) 1:
#line 778 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 776 "stack_opt.m"
        break;
#line 776 "stack_opt.m"
      case (MR_Integer) 2:
#line 779 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 776 "stack_opt.m"
        break;
#line 776 "stack_opt.m"
      case (MR_Integer) 3:
#line 776 "stack_opt.m"
#line 776 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)))) {
#line 776 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 776 "stack_opt.m"
          case (MR_Integer) 0:
#line 780 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 776 "stack_opt.m"
            break;
#line 776 "stack_opt.m"
          case (MR_Integer) 1:
#line 781 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 776 "stack_opt.m"
            break;
#line 776 "stack_opt.m"
        }
#line 776 "stack_opt.m"
        break;
#line 776 "stack_opt.m"
    }
#line 776 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__2_2;
#line 776 "stack_opt.m"
  }
#line 774 "stack_opt.m"
}

#line 765 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_no_successor_1_f_0(
#line 765 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 765 "stack_opt.m"
{
#line 767 "stack_opt.m"
  {
#line 767 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 767 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__2_2;

#line 767 "stack_opt.m"
#line 767 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) {
#line 767 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 767 "stack_opt.m"
      case (MR_Integer) 0:
#line 767 "stack_opt.m"
#line 767 "stack_opt.m"
        switch (MR_unmkbody(ll_backend__stack_opt__HeadVar__1_1)) {
#line 767 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 767 "stack_opt.m"
          case (MR_Integer) 0:
#line 767 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 767 "stack_opt.m"
            break;
#line 767 "stack_opt.m"
          case (MR_Integer) 1:
#line 768 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 767 "stack_opt.m"
            break;
#line 767 "stack_opt.m"
        }
#line 767 "stack_opt.m"
        break;
#line 767 "stack_opt.m"
      case (MR_Integer) 1:
#line 769 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 767 "stack_opt.m"
        break;
#line 767 "stack_opt.m"
      case (MR_Integer) 2:
#line 770 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 767 "stack_opt.m"
        break;
#line 767 "stack_opt.m"
      case (MR_Integer) 3:
#line 767 "stack_opt.m"
#line 767 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)))) {
#line 767 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 767 "stack_opt.m"
          case (MR_Integer) 0:
#line 771 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 767 "stack_opt.m"
            break;
#line 767 "stack_opt.m"
          case (MR_Integer) 1:
#line 772 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 767 "stack_opt.m"
            break;
#line 767 "stack_opt.m"
        }
#line 767 "stack_opt.m"
        break;
#line 767 "stack_opt.m"
    }
#line 767 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__2_2;
#line 767 "stack_opt.m"
  }
#line 765 "stack_opt.m"
}

#line 737 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__anchor_requires_close_2_f_0(
#line 737 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_1,
#line 737 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 737 "stack_opt.m"
{
#line 739 "stack_opt.m"
  {
#line 739 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 739 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__3_3;

#line 739 "stack_opt.m"
#line 739 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__2_2)) {
#line 739 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 739 "stack_opt.m"
      case (MR_Integer) 0:
#line 739 "stack_opt.m"
#line 739 "stack_opt.m"
        switch (MR_unmkbody(ll_backend__stack_opt__HeadVar__2_2)) {
#line 739 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 739 "stack_opt.m"
          case (MR_Integer) 0:
#line 739 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 739 "stack_opt.m"
            break;
#line 739 "stack_opt.m"
          case (MR_Integer) 1:
#line 740 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 739 "stack_opt.m"
            break;
#line 739 "stack_opt.m"
        }
#line 739 "stack_opt.m"
        break;
#line 739 "stack_opt.m"
      case (MR_Integer) 1:
#line 742 "stack_opt.m"
        {
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__GoalId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__ResumeSaveStatus_9;
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 3)));
#line 741 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 0)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 1)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 2)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 4)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 5)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 6)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 7)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 8)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 9)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 10)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 11)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 12)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 13)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 14)));
#line 743 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 15)));
#line 743 "stack_opt.m"
          MR_Box ll_backend__stack_opt__conv0_ResumeSaveStatus_9;

#line 743 "stack_opt.m"
          {
#line 743 "stack_opt.m"
            mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0, ll_backend__stack_opt__V_10_10, ((MR_Box) (ll_backend__stack_opt__GoalId_8)), &ll_backend__stack_opt__conv0_ResumeSaveStatus_9);
          }
#line 743 "stack_opt.m"
          ll_backend__stack_opt__ResumeSaveStatus_9 = ((MR_Word) ll_backend__stack_opt__conv0_ResumeSaveStatus_9);
#line 762 "stack_opt.m"
#line 762 "stack_opt.m"
          switch (ll_backend__stack_opt__ResumeSaveStatus_9) {
#line 762 "stack_opt.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 762 "stack_opt.m"
            case (MR_Integer) 1:
#line 763 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 762 "stack_opt.m"
              break;
#line 762 "stack_opt.m"
            case (MR_Integer) 0:
#line 762 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 762 "stack_opt.m"
              break;
#line 762 "stack_opt.m"
          }
#line 742 "stack_opt.m"
        }
#line 739 "stack_opt.m"
        break;
#line 739 "stack_opt.m"
      case (MR_Integer) 2:
#line 745 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 739 "stack_opt.m"
        break;
#line 739 "stack_opt.m"
      case (MR_Integer) 3:
#line 739 "stack_opt.m"
#line 739 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)))) {
#line 739 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 739 "stack_opt.m"
          case (MR_Integer) 0:
#line 746 "stack_opt.m"
            {
#line 746 "stack_opt.m"
              MR_Word ll_backend__stack_opt__BranchType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 746 "stack_opt.m"
              MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));

#line 750 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__3_3 = ((&ll_backend__stack_opt_vector_common_7[0 + ll_backend__stack_opt__BranchType_14]))->ll_backend__stack_opt__vector_common_type_7_0__vct_7_f_0;
#line 746 "stack_opt.m"
            }
#line 739 "stack_opt.m"
            break;
#line 739 "stack_opt.m"
          case (MR_Integer) 1:
#line 758 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 739 "stack_opt.m"
            break;
#line 739 "stack_opt.m"
        }
#line 739 "stack_opt.m"
        break;
#line 739 "stack_opt.m"
    }
#line 739 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__3_3;
#line 739 "stack_opt.m"
  }
#line 737 "stack_opt.m"
}

#line 730 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_anchor_to_path_2_f_0(
#line 730 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_4,
#line 730 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_8)
#line 730 "stack_opt.m"
{
#line 732 "stack_opt.m"
  {
#line 732 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 732 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_9;
#line 732 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Anchors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 4)));
#line 732 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Anchors_7;
#line 733 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 0)));
#line 733 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 1)));
#line 733 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 2)));
#line 733 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 3)));
#line 733 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 5)));
#line 735 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_16_16;
#line 735 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_17_17;
#line 735 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_18_18;
#line 735 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;
#line 735 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_21_21;
#line 735 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_20_20;

#line 734 "stack_opt.m"
    {
#line 734 "stack_opt.m"
      mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__Anchor_4)), ll_backend__stack_opt__Anchors0_6, &ll_backend__stack_opt__Anchors_7);
    }
#line 735 "stack_opt.m"
    ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 0)));
#line 735 "stack_opt.m"
    ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 1)));
#line 735 "stack_opt.m"
    ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 2)));
#line 735 "stack_opt.m"
    ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 3)));
#line 735 "stack_opt.m"
    ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 4)));
#line 735 "stack_opt.m"
    ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 5)));
#line 735 "stack_opt.m"
    {
#line 735 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_Path_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 735 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 0) = ((MR_Box) (ll_backend__stack_opt__V_16_16));
#line 735 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 1) = ((MR_Box) (ll_backend__stack_opt__V_17_17));
#line 735 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 2) = ((MR_Box) (ll_backend__stack_opt__V_18_18));
#line 735 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 3) = ((MR_Box) (ll_backend__stack_opt__V_19_19));
#line 735 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 4) = ((MR_Box) (ll_backend__stack_opt__Anchors_7));
#line 735 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 5) = ((MR_Box) (ll_backend__stack_opt__V_21_21));
#line 735 "stack_opt.m"
    }
#line 732 "stack_opt.m"
    return ll_backend__stack_opt__STATE_VARIABLE_Path_9;
#line 732 "stack_opt.m"
  }
#line 730 "stack_opt.m"
}

#line 716 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_interval_to_path_3_f_0(
#line 716 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_5,
#line 716 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Vars_6,
#line 716 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_12)
#line 716 "stack_opt.m"
{
#line 721 "stack_opt.m"
  {
#line 721 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 721 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_13;

#line 719 "stack_opt.m"
    {
#line 719 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__Vars_6);
    }
#line 721 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 721 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_Path_13 = ll_backend__stack_opt__STATE_VARIABLE_Path_0_12;
#line 721 "stack_opt.m"
    else
#line 722 "stack_opt.m"
      {
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__CurSegment0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 1)));
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__CurSegment_9;
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__OccurringIntervals0_10;
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__OccurringIntervals_11;
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_26_26;
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_28_28;
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_29_29;
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_30_30;
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 0)));
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 2)));
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 3)));
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 4)));
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 5)));
#line 724 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_21_21;
#line 724 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_22_22;
#line 724 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_23_23;
#line 724 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_24_24;
#line 724 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_25_25;
#line 726 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_27_27;
#line 726 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_31_31;

#line 723 "stack_opt.m"
        {
#line 723 "stack_opt.m"
          ll_backend__stack_opt__CurSegment_9 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__Vars_6, ll_backend__stack_opt__CurSegment0_8);
        }
#line 724 "stack_opt.m"
        ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 0)));
#line 724 "stack_opt.m"
        ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 1)));
#line 724 "stack_opt.m"
        ll_backend__stack_opt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 2)));
#line 724 "stack_opt.m"
        ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 3)));
#line 724 "stack_opt.m"
        ll_backend__stack_opt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 4)));
#line 724 "stack_opt.m"
        ll_backend__stack_opt__OccurringIntervals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 5)));
#line 725 "stack_opt.m"
        {
#line 725 "stack_opt.m"
          mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (ll_backend__stack_opt__IntervalId_5)), ll_backend__stack_opt__OccurringIntervals0_10, &ll_backend__stack_opt__OccurringIntervals_11);
        }
#line 726 "stack_opt.m"
        ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 0)));
#line 726 "stack_opt.m"
        ll_backend__stack_opt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 1)));
#line 726 "stack_opt.m"
        ll_backend__stack_opt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 2)));
#line 726 "stack_opt.m"
        ll_backend__stack_opt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 3)));
#line 726 "stack_opt.m"
        ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 4)));
#line 726 "stack_opt.m"
        ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 5)));
#line 727 "stack_opt.m"
        {
#line 727 "stack_opt.m"
          ll_backend__stack_opt__STATE_VARIABLE_Path_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 727 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 0) = ((MR_Box) (ll_backend__stack_opt__V_26_26));
#line 727 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 1) = ((MR_Box) (ll_backend__stack_opt__CurSegment_9));
#line 727 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 2) = ((MR_Box) (ll_backend__stack_opt__V_28_28));
#line 727 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 3) = ((MR_Box) (ll_backend__stack_opt__V_29_29));
#line 727 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 4) = ((MR_Box) (ll_backend__stack_opt__V_30_30));
#line 727 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 5) = ((MR_Box) (ll_backend__stack_opt__OccurringIntervals_11));
#line 727 "stack_opt.m"
        }
#line 722 "stack_opt.m"
      }
#line 721 "stack_opt.m"
    return ll_backend__stack_opt__STATE_VARIABLE_Path_13;
#line 721 "stack_opt.m"
  }
#line 716 "stack_opt.m"
}

#line 699 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__close_path_1_f_0_1(
#line 699 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 699 "stack_opt.m"
{
#line 699 "stack_opt.m"
  {
#line 699 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 699 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 699 "stack_opt.m"
    {
#line 699 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__close_path__699__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))));
    }
#line 699 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 699 "stack_opt.m"
  }
#line 699 "stack_opt.m"
}

#line 692 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__close_path_1_f_0(
#line 692 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_3)
#line 692 "stack_opt.m"
{
#line 694 "stack_opt.m"
  {
#line 694 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 694 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Path_4;
#line 694 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushState_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 0)));
#line 694 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CurSegment_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 1)));
#line 694 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FirstSegment0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 2)));
#line 694 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OtherSegments0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 3)));
#line 694 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushAnchors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 4)));
#line 694 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 5)));
#line 694 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FirstSegment_11;
#line 694 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OtherSegments_12;
#line 694 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_18_18;

#line 703 "stack_opt.m"
#line 703 "stack_opt.m"
    switch (ll_backend__stack_opt__FlushState_5) {
#line 703 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 703 "stack_opt.m"
      case (MR_Integer) 1:
#line 708 "stack_opt.m"
        {
#line 705 "stack_opt.m"
          {
#line 705 "stack_opt.m"
            ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__CurSegment_6);
          }
#line 708 "stack_opt.m"
          if (ll_backend__stack_opt__succeeded)
#line 706 "stack_opt.m"
            {
#line 706 "stack_opt.m"
              ll_backend__stack_opt__FirstSegment_11 = ll_backend__stack_opt__FirstSegment0_7;
#line 707 "stack_opt.m"
              ll_backend__stack_opt__OtherSegments_12 = ll_backend__stack_opt__OtherSegments0_8;
#line 706 "stack_opt.m"
            }
#line 708 "stack_opt.m"
          else
#line 709 "stack_opt.m"
            {
#line 709 "stack_opt.m"
              ll_backend__stack_opt__FirstSegment_11 = ll_backend__stack_opt__FirstSegment0_7;
#line 710 "stack_opt.m"
              {
#line 710 "stack_opt.m"
                ll_backend__stack_opt__OtherSegments_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "stack_opt.m"
                MR_hl_field(MR_mktag(1), ll_backend__stack_opt__OtherSegments_12, 0) = ((MR_Box) (ll_backend__stack_opt__CurSegment_6));
#line 710 "stack_opt.m"
                MR_hl_field(MR_mktag(1), ll_backend__stack_opt__OtherSegments_12, 1) = ((MR_Box) (ll_backend__stack_opt__OtherSegments0_8));
#line 710 "stack_opt.m"
              }
#line 709 "stack_opt.m"
            }
#line 708 "stack_opt.m"
        }
#line 703 "stack_opt.m"
        break;
#line 703 "stack_opt.m"
      case (MR_Integer) 0:
#line 698 "stack_opt.m"
        {
#line 698 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_13_13;

#line 699 "stack_opt.m"
          {
#line 699 "stack_opt.m"
            ll_backend__stack_opt__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 699 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_6[0]));
#line 699 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 1) = ((MR_Box) (ll_backend__stack_opt__close_path_1_f_0_1));
#line 699 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 699 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 3) = ((MR_Box) (ll_backend__stack_opt__FirstSegment0_7));
#line 699 "stack_opt.m"
          }
#line 699 "stack_opt.m"
          {
#line 699 "stack_opt.m"
            mercury__require__expect_4_p_0(ll_backend__stack_opt__V_13_13, (MR_String) "ll_backend.stack_opt", (MR_String) "function \140ll_backend.stack_opt.close_path\'/1", (MR_String) "FirstSegment0 not empty");
          }
#line 701 "stack_opt.m"
          ll_backend__stack_opt__FirstSegment_11 = ll_backend__stack_opt__CurSegment_6;
#line 702 "stack_opt.m"
          ll_backend__stack_opt__OtherSegments_12 = ll_backend__stack_opt__OtherSegments0_8;
#line 698 "stack_opt.m"
        }
#line 703 "stack_opt.m"
        break;
#line 703 "stack_opt.m"
    }
#line 713 "stack_opt.m"
    {
#line 713 "stack_opt.m"
      ll_backend__stack_opt__V_18_18 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 713 "stack_opt.m"
    {
#line 713 "stack_opt.m"
      ll_backend__stack_opt__Path_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 713 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 713 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 1) = ((MR_Box) (ll_backend__stack_opt__V_18_18));
#line 713 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 2) = ((MR_Box) (ll_backend__stack_opt__FirstSegment_11));
#line 713 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 3) = ((MR_Box) (ll_backend__stack_opt__OtherSegments_12));
#line 713 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 4) = ((MR_Box) (ll_backend__stack_opt__FlushAnchors_9));
#line 713 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 5) = ((MR_Box) (ll_backend__stack_opt__IntervalIds_10));
#line 713 "stack_opt.m"
    }
#line 694 "stack_opt.m"
    return ll_backend__stack_opt__Path_4;
#line 694 "stack_opt.m"
  }
#line 692 "stack_opt.m"
}

#line 681 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__extract_match_and_save_info_4_p_0(
#line 681 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_5,
#line 681 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchPathInfo_6,
#line 681 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Anchors_7,
#line 681 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Intervals_8)
#line 681 "stack_opt.m"
{
#line 684 "stack_opt.m"
  {
#line 684 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 684 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Path_9;
#line 684 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FirstSegment_10;
#line 684 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OtherSegments_11;
#line 686 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_12_12;
#line 686 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_13_13;

#line 685 "stack_opt.m"
    {
#line 685 "stack_opt.m"
      ll_backend__stack_opt__Path_9 = ll_backend__stack_opt__close_path_1_f_0(ll_backend__stack_opt__Path0_5);
    }
#line 686 "stack_opt.m"
    ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 0)));
#line 686 "stack_opt.m"
    ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 1)));
#line 686 "stack_opt.m"
    ll_backend__stack_opt__FirstSegment_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 2)));
#line 686 "stack_opt.m"
    ll_backend__stack_opt__OtherSegments_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 3)));
#line 686 "stack_opt.m"
    *ll_backend__stack_opt__Anchors_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 4)));
#line 686 "stack_opt.m"
    *ll_backend__stack_opt__Intervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 5)));
#line 688 "stack_opt.m"
    {
#line 688 "stack_opt.m"
      MR_Word base;
#line 688 "stack_opt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "stack_opt.m"
      *ll_backend__stack_opt__MatchPathInfo_6 = base;
#line 688 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__FirstSegment_10));
#line 688 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__OtherSegments_11));
#line 688 "stack_opt.m"
    }
#line 684 "stack_opt.m"
  }
#line 681 "stack_opt.m"
}

#line 624 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__add_anchor_inserts_10_p_0(
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_11,
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVarsViaCellVar_12,
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__InsertIntervals_13,
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_14,
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27,
#line 624 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_28,
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29,
#line 624 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30,
#line 624 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31,
#line 624 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32)
#line 624 "stack_opt.m"
{
#line 630 "stack_opt.m"
  {
#line 630 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_58_58 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_60_60;
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorFollow_18;
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorIntervals_20;
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorInsertIntervals_21;
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 9)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 0)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 1)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 2)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 3)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 4)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 5)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 6)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 7)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 8)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 10)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 11)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 12)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 13)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 14)));
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 15)));
#line 631 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_AnchorFollow_18;
#line 632 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;

#line 631 "stack_opt.m"
    {
#line 631 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, ll_backend__stack_opt__V_33_33, ((MR_Box) (ll_backend__stack_opt__Anchor_14)), &ll_backend__stack_opt__conv0_AnchorFollow_18);
    }
#line 631 "stack_opt.m"
    ll_backend__stack_opt__AnchorFollow_18 = ((MR_Word) ll_backend__stack_opt__conv0_AnchorFollow_18);
#line 632 "stack_opt.m"
    ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AnchorFollow_18, (MR_Integer) 0)));
#line 632 "stack_opt.m"
    ll_backend__stack_opt__AnchorIntervals_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AnchorFollow_18, (MR_Integer) 1)));
#line 11132 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_60_60 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 633 "stack_opt.m"
    {
#line 633 "stack_opt.m"
      mercury__set__intersect_3_p_0(ll_backend__stack_opt__TypeCtorInfo_60_60, ll_backend__stack_opt__AnchorIntervals_20, ll_backend__stack_opt__InsertIntervals_13, &ll_backend__stack_opt__AnchorInsertIntervals_21);
    }
#line 635 "stack_opt.m"
    {
#line 635 "stack_opt.m"
      ll_backend__stack_opt__succeeded = mercury__set__is_non_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_60_60, ll_backend__stack_opt__AnchorInsertIntervals_21);
    }
#line 647 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 636 "stack_opt.m"
      {
#line 636 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Insert_22;
#line 636 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertMap0_23;
#line 636 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertMap_26;
#line 637 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_53_53;
#line 637 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_54_54;
#line 641 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Inserts0_24;
#line 638 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv1_Inserts0_24;
#line 645 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_55_55;
#line 645 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_57_57;
#line 645 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_56_56;

#line 636 "stack_opt.m"
        {
#line 636 "stack_opt.m"
          ll_backend__stack_opt__Insert_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 636 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Insert_22, 0) = ((MR_Box) (ll_backend__stack_opt__Goal_11));
#line 636 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Insert_22, 1) = ((MR_Box) (ll_backend__stack_opt__ArgVarsViaCellVar_12));
#line 636 "stack_opt.m"
        }
#line 637 "stack_opt.m"
        ll_backend__stack_opt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 0)));
#line 637 "stack_opt.m"
        ll_backend__stack_opt__InsertMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 1)));
#line 637 "stack_opt.m"
        ll_backend__stack_opt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 2)));
#line 638 "stack_opt.m"
        {
#line 638 "stack_opt.m"
          ll_backend__stack_opt__succeeded = mercury__map__search_3_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ll_backend__stack_opt__InsertMap0_23, ((MR_Box) (ll_backend__stack_opt__Anchor_14)), &ll_backend__stack_opt__conv1_Inserts0_24);
        }
#line 638 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 638 "stack_opt.m"
          {
#line 638 "stack_opt.m"
            ll_backend__stack_opt__Inserts0_24 = ((MR_Word) ll_backend__stack_opt__conv1_Inserts0_24);
#line 638 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 638 "stack_opt.m"
          }
#line 641 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 639 "stack_opt.m"
          {
#line 639 "stack_opt.m"
            MR_Word ll_backend__stack_opt__Inserts_25;

#line 639 "stack_opt.m"
            {
#line 639 "stack_opt.m"
              ll_backend__stack_opt__Inserts_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_25, 0) = ((MR_Box) (ll_backend__stack_opt__Insert_22));
#line 639 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_25, 1) = ((MR_Box) (ll_backend__stack_opt__Inserts0_24));
#line 639 "stack_opt.m"
            }
#line 640 "stack_opt.m"
            {
#line 640 "stack_opt.m"
              mercury__map__det_update_4_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ((MR_Box) (ll_backend__stack_opt__Anchor_14)), ((MR_Box) (ll_backend__stack_opt__Inserts_25)), ll_backend__stack_opt__InsertMap0_23, &ll_backend__stack_opt__InsertMap_26);
            }
#line 639 "stack_opt.m"
          }
#line 641 "stack_opt.m"
        else
#line 642 "stack_opt.m"
          {
#line 642 "stack_opt.m"
            MR_Word ll_backend__stack_opt__Inserts_37;

#line 642 "stack_opt.m"
            {
#line 642 "stack_opt.m"
              ll_backend__stack_opt__Inserts_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_37, 0) = ((MR_Box) (ll_backend__stack_opt__Insert_22));
#line 642 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "stack_opt.m"
            }
#line 643 "stack_opt.m"
            {
#line 643 "stack_opt.m"
              mercury__map__det_insert_4_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ((MR_Box) (ll_backend__stack_opt__Anchor_14)), ((MR_Box) (ll_backend__stack_opt__Inserts_37)), ll_backend__stack_opt__InsertMap0_23, &ll_backend__stack_opt__InsertMap_26);
            }
#line 642 "stack_opt.m"
          }
#line 645 "stack_opt.m"
        ll_backend__stack_opt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 0)));
#line 645 "stack_opt.m"
        ll_backend__stack_opt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 1)));
#line 645 "stack_opt.m"
        ll_backend__stack_opt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 2)));
#line 645 "stack_opt.m"
        {
#line 645 "stack_opt.m"
          MR_Word base;
#line 645 "stack_opt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 645 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30 = base;
#line 645 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_55_55));
#line 645 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__InsertMap_26));
#line 645 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__V_57_57));
#line 645 "stack_opt.m"
        }
#line 646 "stack_opt.m"
        {
#line 646 "stack_opt.m"
          mercury__set__insert_3_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, ((MR_Box) (ll_backend__stack_opt__Anchor_14)), ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31, ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32);
        }
#line 636 "stack_opt.m"
      }
#line 647 "stack_opt.m"
    else
#line 648 "stack_opt.m"
      {
#line 648 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32 = ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31;
#line 648 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29;
#line 648 "stack_opt.m"
      }
#line 630 "stack_opt.m"
    *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_28 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27;
#line 630 "stack_opt.m"
  }
#line 624 "stack_opt.m"
}

#line 609 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(
#line 609 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 609 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_11,
#line 609 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 609 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_17,
#line 609 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_18,
#line 609 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_19,
#line 609 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_20,
#line 609 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21,
#line 609 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22)
#line 609 "stack_opt.m"
{
#line 615 "stack_opt.m"
  {
#line 615 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 615 "stack_opt.m"
    MR_Word ll_backend__stack_opt__DeletedVars_16;
#line 615 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_23_23;
#line 615 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_24_24;

#line 616 "stack_opt.m"
    {
#line 616 "stack_opt.m"
      ll_backend__stack_opt__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_23_23, 0) = ((MR_Box) (ll_backend__stack_opt__CellVar_10));
#line 616 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 616 "stack_opt.m"
    }
#line 616 "stack_opt.m"
    {
#line 616 "stack_opt.m"
      backend_libs__interval__record_interval_vars_4_p_0(ll_backend__stack_opt__IntervalId_12, ll_backend__stack_opt__V_23_23, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_17, &ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_24_24);
    }
#line 617 "stack_opt.m"
    {
#line 617 "stack_opt.m"
      backend_libs__interval__delete_interval_vars_5_p_0(ll_backend__stack_opt__IntervalId_12, ll_backend__stack_opt__ViaCellVars_11, &ll_backend__stack_opt__DeletedVars_16, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_24_24, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_18);
    }
#line 618 "stack_opt.m"
    {
#line 618 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__DeletedVars_16);
    }
#line 620 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 619 "stack_opt.m"
      {
#line 619 "stack_opt.m"
        {
#line 619 "stack_opt.m"
          mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (ll_backend__stack_opt__IntervalId_12)), ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21, ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22);
        }
#line 619 "stack_opt.m"
      }
#line 620 "stack_opt.m"
    else
#line 620 "stack_opt.m"
      *ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22 = ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21;
#line 615 "stack_opt.m"
    *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_20 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_19;
#line 615 "stack_opt.m"
  }
#line 609 "stack_opt.m"
}

#line 595 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_2(
#line 595 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 595 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 595 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 595 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 595 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 595 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 595 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 595 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7)
#line 595 "stack_opt.m"
{
#line 595 "stack_opt.m"
  {
#line 595 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 595 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv8_STATE_VARIABLE_IntervalInfo_28;
#line 595 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv7_STATE_VARIABLE_StackOptInfo_30;
#line 595 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv6_STATE_VARIABLE_InsertAnchors_32;

#line 595 "stack_opt.m"
    {
#line 595 "stack_opt.m"
      ll_backend__stack_opt__add_anchor_inserts_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), &ll_backend__stack_opt__conv8_STATE_VARIABLE_IntervalInfo_28, ((MR_Word) ll_backend__stack_opt__wrapper_arg_4), &ll_backend__stack_opt__conv7_STATE_VARIABLE_StackOptInfo_30, ((MR_Word) ll_backend__stack_opt__wrapper_arg_6), &ll_backend__stack_opt__conv6_STATE_VARIABLE_InsertAnchors_32);
    }
#line 595 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv8_STATE_VARIABLE_IntervalInfo_28));
#line 595 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_5 = ((MR_Box) (ll_backend__stack_opt__conv7_STATE_VARIABLE_StackOptInfo_30));
#line 595 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_7 = ((MR_Box) (ll_backend__stack_opt__conv6_STATE_VARIABLE_InsertAnchors_32));
#line 595 "stack_opt.m"
  }
#line 595 "stack_opt.m"
}

#line 592 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_1(
#line 592 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 592 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 592 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 592 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 592 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 592 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 592 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 592 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7)
#line 592 "stack_opt.m"
{
#line 592 "stack_opt.m"
  {
#line 592 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 592 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv2_STATE_VARIABLE_IntervalInfo_18;
#line 592 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_STATE_VARIABLE_StackOptInfo_20;
#line 592 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_STATE_VARIABLE_InsertIntervals_22;

#line 592 "stack_opt.m"
    {
#line 592 "stack_opt.m"
      ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), &ll_backend__stack_opt__conv2_STATE_VARIABLE_IntervalInfo_18, ((MR_Word) ll_backend__stack_opt__wrapper_arg_4), &ll_backend__stack_opt__conv1_STATE_VARIABLE_StackOptInfo_20, ((MR_Word) ll_backend__stack_opt__wrapper_arg_6), &ll_backend__stack_opt__conv0_STATE_VARIABLE_InsertIntervals_22);
    }
#line 592 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv2_STATE_VARIABLE_IntervalInfo_18));
#line 592 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_5 = ((MR_Box) (ll_backend__stack_opt__conv1_STATE_VARIABLE_StackOptInfo_20));
#line 592 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_7 = ((MR_Box) (ll_backend__stack_opt__conv0_STATE_VARIABLE_InsertIntervals_22));
#line 592 "stack_opt.m"
  }
#line 592 "stack_opt.m"
}

#line 580 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0(
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_12,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_13,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVars_14,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_15,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_16,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialAnchors_17,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialIntervals_18,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31,
#line 580 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32,
#line 580 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33,
#line 580 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34)
#line 580 "stack_opt.m"
{
#line 589 "stack_opt.m"
  {
#line 589 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 587 "stack_opt.m"
    {
#line 587 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__ViaCellVars_15);
    }
#line 589 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 588 "stack_opt.m"
      {
#line 588 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33;
#line 588 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31;
#line 588 "stack_opt.m"
      }
#line 589 "stack_opt.m"
    else
#line 590 "stack_opt.m"
      {
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_50_50 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_51_51;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_59_59;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_60_60;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PotentialIntervalList_21;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PotentialAnchorList_22;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertIntervals_23;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertAnchors_24;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__GoalInfo_26;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__GoalId_27;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingResult_28;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingResults0_29;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingResults_30;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_35_35;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_36_36;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_37_37;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_38_38;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_39_39;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_42_42;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_44_44;
#line 590 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_45_45;
#line 592 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv5_STATE_VARIABLE_IntervalInfo_36_36;
#line 592 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv4_STATE_VARIABLE_StackOptInfo_37_37;
#line 592 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv3_InsertIntervals_23;
#line 595 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv11_STATE_VARIABLE_IntervalInfo_32;
#line 595 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv10_STATE_VARIABLE_StackOptInfo_41_41;
#line 595 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv9_InsertAnchors_24;
#line 598 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_25_25;

#line 590 "stack_opt.m"
        {
#line 590 "stack_opt.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__stack_opt__TypeCtorInfo_50_50, ll_backend__stack_opt__PotentialIntervals_18, &ll_backend__stack_opt__PotentialIntervalList_21);
        }
#line 11586 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_51_51 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 591 "stack_opt.m"
        {
#line 591 "stack_opt.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__stack_opt__TypeCtorInfo_51_51, ll_backend__stack_opt__PotentialAnchors_17, &ll_backend__stack_opt__PotentialAnchorList_22);
        }
#line 592 "stack_opt.m"
        {
#line 592 "stack_opt.m"
          ll_backend__stack_opt__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 592 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_4[0]));
#line 592 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 1) = ((MR_Box) (ll_backend__stack_opt__record_matching_result_11_p_0_1));
#line 592 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 592 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 3) = ((MR_Box) (ll_backend__stack_opt__CellVar_12));
#line 592 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 4) = ((MR_Box) (ll_backend__stack_opt__ViaCellVars_15));
#line 592 "stack_opt.m"
        }
#line 594 "stack_opt.m"
        {
#line 594 "stack_opt.m"
          ll_backend__stack_opt__V_38_38 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_50_50);
        }
#line 11614 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_59_59 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0;
#line 11616 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_60_60 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0;
#line 592 "stack_opt.m"
        {
#line 592 "stack_opt.m"
          mercury__list__foldl3_8_p_0(ll_backend__stack_opt__TypeCtorInfo_50_50, ll_backend__stack_opt__TypeCtorInfo_59_59, ll_backend__stack_opt__TypeCtorInfo_60_60, (MR_Word) &ll_backend__stack_opt_scalar_common_1[9], ll_backend__stack_opt__V_35_35, ll_backend__stack_opt__PotentialIntervalList_21, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31)), &ll_backend__stack_opt__conv5_STATE_VARIABLE_IntervalInfo_36_36, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33)), &ll_backend__stack_opt__conv4_STATE_VARIABLE_StackOptInfo_37_37, ((MR_Box) (ll_backend__stack_opt__V_38_38)), &ll_backend__stack_opt__conv3_InsertIntervals_23);
        }
#line 592 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_36_36 = ((MR_Word) ll_backend__stack_opt__conv5_STATE_VARIABLE_IntervalInfo_36_36);
#line 592 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_37_37 = ((MR_Word) ll_backend__stack_opt__conv4_STATE_VARIABLE_StackOptInfo_37_37);
#line 592 "stack_opt.m"
        ll_backend__stack_opt__InsertIntervals_23 = ((MR_Word) ll_backend__stack_opt__conv3_InsertIntervals_23);
#line 595 "stack_opt.m"
        {
#line 595 "stack_opt.m"
          ll_backend__stack_opt__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 595 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_5[0]));
#line 595 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 1) = ((MR_Box) (ll_backend__stack_opt__record_matching_result_11_p_0_2));
#line 595 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 595 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 3) = ((MR_Box) (ll_backend__stack_opt__Goal_16));
#line 595 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 4) = ((MR_Box) (ll_backend__stack_opt__ViaCellVars_15));
#line 595 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 5) = ((MR_Box) (ll_backend__stack_opt__InsertIntervals_23));
#line 595 "stack_opt.m"
        }
#line 597 "stack_opt.m"
        {
#line 597 "stack_opt.m"
          ll_backend__stack_opt__V_42_42 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_51_51);
        }
#line 595 "stack_opt.m"
        {
#line 595 "stack_opt.m"
          mercury__list__foldl3_8_p_0(ll_backend__stack_opt__TypeCtorInfo_51_51, ll_backend__stack_opt__TypeCtorInfo_59_59, ll_backend__stack_opt__TypeCtorInfo_60_60, (MR_Word) &ll_backend__stack_opt_scalar_common_1[10], ll_backend__stack_opt__V_39_39, ll_backend__stack_opt__PotentialAnchorList_22, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_36_36)), &ll_backend__stack_opt__conv11_STATE_VARIABLE_IntervalInfo_32, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_37_37)), &ll_backend__stack_opt__conv10_STATE_VARIABLE_StackOptInfo_41_41, ((MR_Box) (ll_backend__stack_opt__V_42_42)), &ll_backend__stack_opt__conv9_InsertAnchors_24);
        }
#line 595 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32 = ((MR_Word) ll_backend__stack_opt__conv11_STATE_VARIABLE_IntervalInfo_32);
#line 595 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41 = ((MR_Word) ll_backend__stack_opt__conv10_STATE_VARIABLE_StackOptInfo_41_41);
#line 595 "stack_opt.m"
        ll_backend__stack_opt__InsertAnchors_24 = ((MR_Word) ll_backend__stack_opt__conv9_InsertAnchors_24);
#line 598 "stack_opt.m"
        ll_backend__stack_opt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_16, (MR_Integer) 0)));
#line 598 "stack_opt.m"
        ll_backend__stack_opt__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_16, (MR_Integer) 1)));
#line 599 "stack_opt.m"
        {
#line 599 "stack_opt.m"
          ll_backend__stack_opt__GoalId_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__stack_opt__GoalInfo_26);
        }
#line 600 "stack_opt.m"
        {
#line 600 "stack_opt.m"
          ll_backend__stack_opt__MatchingResult_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 600 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 0) = ((MR_Box) (ll_backend__stack_opt__CellVar_12));
#line 600 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 1) = ((MR_Box) (ll_backend__stack_opt__ConsId_13));
#line 600 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 2) = ((MR_Box) (ll_backend__stack_opt__ArgVars_14));
#line 600 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 3) = ((MR_Box) (ll_backend__stack_opt__ViaCellVars_15));
#line 600 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 4) = ((MR_Box) (ll_backend__stack_opt__GoalId_27));
#line 600 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 5) = ((MR_Box) (ll_backend__stack_opt__PotentialIntervals_18));
#line 600 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 6) = ((MR_Box) (ll_backend__stack_opt__InsertIntervals_23));
#line 600 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 7) = ((MR_Box) (ll_backend__stack_opt__PotentialAnchors_17));
#line 600 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 8) = ((MR_Box) (ll_backend__stack_opt__InsertAnchors_24));
#line 600 "stack_opt.m"
        }
#line 604 "stack_opt.m"
        ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 0)));
#line 604 "stack_opt.m"
        ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 1)));
#line 604 "stack_opt.m"
        ll_backend__stack_opt__MatchingResults0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 2)));
#line 605 "stack_opt.m"
        {
#line 605 "stack_opt.m"
          ll_backend__stack_opt__MatchingResults_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "stack_opt.m"
          MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MatchingResults_30, 0) = ((MR_Box) (ll_backend__stack_opt__MatchingResult_28));
#line 605 "stack_opt.m"
          MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MatchingResults_30, 1) = ((MR_Box) (ll_backend__stack_opt__MatchingResults0_29));
#line 605 "stack_opt.m"
        }
#line 606 "stack_opt.m"
        {
#line 606 "stack_opt.m"
          MR_Word base;
#line 606 "stack_opt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 606 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34 = base;
#line 606 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_44_44));
#line 606 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__V_45_45));
#line 606 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__MatchingResults_30));
#line 606 "stack_opt.m"
        }
#line 590 "stack_opt.m"
      }
#line 589 "stack_opt.m"
  }
#line 580 "stack_opt.m"
}

#line 562 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_matching_for_path_8_p_0(
#line 562 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 562 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_10,
#line 562 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 562 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars_12,
#line 562 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfo_13,
#line 562 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodes_14,
#line 562 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodes_15,
#line 562 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_16)
#line 562 "stack_opt.m"
{
#line 572 "stack_opt.m"
  {
#line 572 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 568 "stack_opt.m"
    {
#line 568 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__CandidateArgVars_12);
    }
#line 572 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 569 "stack_opt.m"
      {
#line 569 "stack_opt.m"
        {
#line 569 "stack_opt.m"
          *ll_backend__stack_opt__BenefitNodes_14 = mercury__set__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0);
        }
#line 570 "stack_opt.m"
        {
#line 570 "stack_opt.m"
          *ll_backend__stack_opt__CostNodes_15 = mercury__set__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0);
        }
#line 571 "stack_opt.m"
        {
#line 571 "stack_opt.m"
          *ll_backend__stack_opt__ViaCellVars_16 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 569 "stack_opt.m"
      }
#line 572 "stack_opt.m"
    else
#line 573 "stack_opt.m"
      {
#line 573 "stack_opt.m"
        MR_Word ll_backend__stack_opt__FirstSegment_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PathInfo_13, (MR_Integer) 0)));
#line 573 "stack_opt.m"
        MR_Word ll_backend__stack_opt__LaterSegments_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PathInfo_13, (MR_Integer) 1)));
#line 573 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 0)));
#line 574 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 1)));
#line 574 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 574 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 574 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 574 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 3)));

#line 575 "stack_opt.m"
        {
#line 575 "stack_opt.m"
          backend_libs__matching__find_via_cell_vars_9_p_0(ll_backend__stack_opt__CellVar_9, ll_backend__stack_opt__CandidateArgVars_12, ll_backend__stack_opt__CellVarFlushedLater_10, ll_backend__stack_opt__FirstSegment_17, ll_backend__stack_opt__LaterSegments_18, ll_backend__stack_opt__MatchingParams_19, ll_backend__stack_opt__BenefitNodes_14, ll_backend__stack_opt__CostNodes_15, ll_backend__stack_opt__ViaCellVars_16);
#line 575 "stack_opt.m"
          return;
        }
#line 573 "stack_opt.m"
      }
#line 572 "stack_opt.m"
  }
#line 562 "stack_opt.m"
}

#line 483 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_1(
#line 483 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 483 "stack_opt.m"
{
#line 483 "stack_opt.m"
  {
#line 483 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 483 "stack_opt.m"
    MR_builtin_longjmp((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0, 1);
#line 483 "stack_opt.m"
  }
#line 483 "stack_opt.m"
}

#line 483 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_3(
#line 483 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 483 "stack_opt.m"
{
#line 483 "stack_opt.m"
  {
#line 483 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 483 "stack_opt.m"
    (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47 = ((MR_Word) (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_PathInfo_47);
#line 483 "stack_opt.m"
    {
#line 483 "stack_opt.m"
      ll_backend__stack_opt__use_cell_8_p_0_2(ll_backend__stack_opt__env_ptr);
#line 483 "stack_opt.m"
      return;
    }
#line 483 "stack_opt.m"
  }
#line 483 "stack_opt.m"
}

#line 485 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_5(
#line 485 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 485 "stack_opt.m"
{
#line 485 "stack_opt.m"
  {
#line 485 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 485 "stack_opt.m"
    (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_50 = ((MR_Word) (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv2_Segment_50);
#line 485 "stack_opt.m"
    {
#line 485 "stack_opt.m"
      ll_backend__stack_opt__use_cell_8_p_0_4(ll_backend__stack_opt__env_ptr);
#line 485 "stack_opt.m"
      return;
    }
#line 485 "stack_opt.m"
  }
#line 485 "stack_opt.m"
}

#line 483 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_4(
#line 483 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 483 "stack_opt.m"
{
#line 483 "stack_opt.m"
  {
#line 483 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 486 "stack_opt.m"
    {
#line 486 "stack_opt.m"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_50, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9);
    }
#line 486 "stack_opt.m"
    if ((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 486 "stack_opt.m"
      {
#line 486 "stack_opt.m"
        ll_backend__stack_opt__use_cell_8_p_0_1(ll_backend__stack_opt__env_ptr);
#line 486 "stack_opt.m"
        return;
      }
#line 483 "stack_opt.m"
  }
#line 483 "stack_opt.m"
}

#line 483 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_2(
#line 483 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 483 "stack_opt.m"
{
#line 483 "stack_opt.m"
  {
#line 483 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 483 "stack_opt.m"
    {
#line 484 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47, (MR_Integer) 0)));

#line 484 "stack_opt.m"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47, (MR_Integer) 1)));
#line 11943 "ll_backend.stack_opt.c"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_120_120 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 485 "stack_opt.m"
      {
#line 485 "stack_opt.m"
        mercury__list__member_2_p_1((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_120_120, &(ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv2_Segment_50, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_49, ll_backend__stack_opt__use_cell_8_p_0_5, ll_backend__stack_opt__env_ptr);
      }
#line 483 "stack_opt.m"
    }
#line 483 "stack_opt.m"
  }
#line 483 "stack_opt.m"
}

#line 483 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_6(
#line 483 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 483 "stack_opt.m"
{
#line 483 "stack_opt.m"
  {
#line 483 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 483 "stack_opt.m"
    if (MR_builtin_setjmp((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0) == 0)
#line 483 "stack_opt.m"
      {
#line 483 "stack_opt.m"
        {
#line 483 "stack_opt.m"
          {
#line 483 "stack_opt.m"
            mercury__list__member_2_p_1((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0, &(ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_PathInfo_47, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38, ll_backend__stack_opt__use_cell_8_p_0_3, ll_backend__stack_opt__env_ptr);
          }
#line 483 "stack_opt.m"
        }
#line 483 "stack_opt.m"
        (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_FALSE;
#line 483 "stack_opt.m"
      }
#line 483 "stack_opt.m"
    else
#line 483 "stack_opt.m"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
#line 483 "stack_opt.m"
  }
#line 483 "stack_opt.m"
}

#line 411 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0(
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FieldVarList_10,
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_11,
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_12,
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51,
#line 411 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52,
#line 411 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53,
#line 411 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54)
#line 411 "stack_opt.m"
{
#line 411 "stack_opt.m"
  {
#line 411 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s ll_backend__stack_opt__env;

#line 411 "stack_opt.m"
    (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9 = ll_backend__stack_opt__CellVar_9;
#line 415 "stack_opt.m"
    {
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__FlushedLater_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 1)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__StackOptParams_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, (MR_Integer) 0)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__NonCandidateVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 3)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__FieldVars_18;
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__FlushedLaterFieldVars_19;
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__CandidateArgVars0_20;
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 0)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 2)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 3)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 4)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 5)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 6)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 7)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 8)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 9)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 10)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 11)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 12)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 13)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 14)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 15)));
#line 417 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, (MR_Integer) 1)));
#line 417 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, (MR_Integer) 2)));
#line 418 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 0)));
#line 418 "stack_opt.m"
      MR_Integer ll_backend__stack_opt__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 1)));
#line 418 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_81_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 418 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 418 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 12082 "ll_backend.stack_opt.c"
      (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 419 "stack_opt.m"
      {
#line 419 "stack_opt.m"
        ll_backend__stack_opt__FieldVars_18 = parse_tree__set_of_var__list_to_set_1_f_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FieldVarList_10);
      }
#line 420 "stack_opt.m"
      {
#line 420 "stack_opt.m"
        parse_tree__set_of_var__intersect_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FieldVars_18, ll_backend__stack_opt__FlushedLater_15, &ll_backend__stack_opt__FlushedLaterFieldVars_19);
      }
#line 421 "stack_opt.m"
      {
#line 421 "stack_opt.m"
        parse_tree__set_of_var__difference_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FlushedLaterFieldVars_19, ll_backend__stack_opt__NonCandidateVars_17, &ll_backend__stack_opt__CandidateArgVars0_20);
      }
#line 424 "stack_opt.m"
      {
#line 424 "stack_opt.m"
        (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__CandidateArgVars0_20);
      }
#line 427 "stack_opt.m"
      if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 426 "stack_opt.m"
        {
#line 426 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53;
#line 426 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51;
#line 426 "stack_opt.m"
        }
#line 427 "stack_opt.m"
      else
#line 502 "stack_opt.m"
        {
#line 502 "stack_opt.m"
          MR_Word ll_backend__stack_opt__FreeOfCost_28;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__IntParams_24;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__VarTypes_25;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__Type_26;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt___Name_21;
#line 428 "stack_opt.m"
          MR_Integer ll_backend__stack_opt___Arity_22;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt___TypeCtor_23;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_84_84;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_85_85;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_86_86;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_87_87;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_88_88;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_89_89;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_90_90;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_91_91;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_92_92;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_93_93;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_94_94;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_95_95;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_96_96;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_97_97;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_98_98;
#line 430 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_99_99;
#line 430 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_100_100;
#line 433 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_27_27;

#line 428 "stack_opt.m"
          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__stack_opt__ConsId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 428 "stack_opt.m"
          if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 428 "stack_opt.m"
            {
#line 428 "stack_opt.m"
              ll_backend__stack_opt___Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 1)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt___Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 2)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt___TypeCtor_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 3)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__IntParams_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 0)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 1)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 2)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 3)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 4)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 5)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 6)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 7)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 8)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 9)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 10)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 11)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 12)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 13)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 14)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 15)));
#line 430 "stack_opt.m"
              ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 0)));
#line 430 "stack_opt.m"
              ll_backend__stack_opt__VarTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 1)));
#line 430 "stack_opt.m"
              ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 2)));
#line 431 "stack_opt.m"
              {
#line 431 "stack_opt.m"
                hlds__vartypes__lookup_var_type_3_p_0(ll_backend__stack_opt__VarTypes_25, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, &ll_backend__stack_opt__Type_26);
              }
#line 433 "stack_opt.m"
              {
#line 433 "stack_opt.m"
                (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(ll_backend__stack_opt__Type_26, &ll_backend__stack_opt__V_27_27);
              }
#line 436 "stack_opt.m"
              if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 435 "stack_opt.m"
                {
#line 435 "stack_opt.m"
                  ll_backend__stack_opt__FreeOfCost_28 = (MR_Integer) 0;
#line 435 "stack_opt.m"
                  (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
#line 435 "stack_opt.m"
                }
#line 436 "stack_opt.m"
              else
#line 450 "stack_opt.m"
                {
#line 450 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeCtorInfo_117_117;
#line 450 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeCtorInfo_118_118;
#line 450 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeCtor_29;
#line 450 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ModuleInfo_30;
#line 450 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeTable_31;
#line 450 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeDefn_32;
#line 450 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeBody_33;
#line 450 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ConsTable_34;
#line 450 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ConsTag_35;
#line 438 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_101_101;
#line 438 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_102_102;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_103_103;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_104_104;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_105_105;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_106_106;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_107_107;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_108_108;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_109_109;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_110_110;
#line 444 "stack_opt.m"
                  MR_Box ll_backend__stack_opt__conv0_ConsTag_35;

#line 437 "stack_opt.m"
                  {
#line 437 "stack_opt.m"
                    (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__stack_opt__Type_26, &ll_backend__stack_opt__TypeCtor_29);
                  }
#line 450 "stack_opt.m"
                  if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 450 "stack_opt.m"
                    {
#line 438 "stack_opt.m"
                      ll_backend__stack_opt__ModuleInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 0)));
#line 438 "stack_opt.m"
                      ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 1)));
#line 438 "stack_opt.m"
                      ll_backend__stack_opt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 2)));
#line 439 "stack_opt.m"
                      {
#line 439 "stack_opt.m"
                        hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__stack_opt__ModuleInfo_30, &ll_backend__stack_opt__TypeTable_31);
                      }
#line 440 "stack_opt.m"
                      {
#line 440 "stack_opt.m"
                        hlds__hlds_data__lookup_type_ctor_defn_3_p_0(ll_backend__stack_opt__TypeTable_31, ll_backend__stack_opt__TypeCtor_29, &ll_backend__stack_opt__TypeDefn_32);
                      }
#line 441 "stack_opt.m"
                      {
#line 441 "stack_opt.m"
                        hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__stack_opt__TypeDefn_32, &ll_backend__stack_opt__TypeBody_33);
                      }
#line 442 "stack_opt.m"
                      (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__TypeBody_33)) == (MR_mktag((MR_Integer) 1)));
#line 442 "stack_opt.m"
                      if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 442 "stack_opt.m"
                        {
#line 442 "stack_opt.m"
                          ll_backend__stack_opt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 0)));
#line 442 "stack_opt.m"
                          ll_backend__stack_opt__ConsTable_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 1)));
#line 442 "stack_opt.m"
                          ll_backend__stack_opt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 2)));
#line 442 "stack_opt.m"
                          ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 3)));
#line 442 "stack_opt.m"
                          ll_backend__stack_opt__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 4)));
#line 442 "stack_opt.m"
                          ll_backend__stack_opt__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 5)));
#line 442 "stack_opt.m"
                          ll_backend__stack_opt__V_108_108 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 442 "stack_opt.m"
                          ll_backend__stack_opt__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 442 "stack_opt.m"
                          ll_backend__stack_opt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 7)));
#line 12338 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 12340 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__TypeCtorInfo_118_118 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 444 "stack_opt.m"
                          {
#line 444 "stack_opt.m"
                            mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_117_117, ll_backend__stack_opt__TypeCtorInfo_118_118, ll_backend__stack_opt__ConsTable_34, ((MR_Box) (ll_backend__stack_opt__ConsId_11)), &ll_backend__stack_opt__conv0_ConsTag_35);
                          }
#line 444 "stack_opt.m"
                          ll_backend__stack_opt__ConsTag_35 = ((MR_Word) ll_backend__stack_opt__conv0_ConsTag_35);
#line 445 "stack_opt.m"
                          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = (ll_backend__stack_opt__ConsTag_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 447 "stack_opt.m"
                          if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 446 "stack_opt.m"
                            ll_backend__stack_opt__FreeOfCost_28 = (MR_Integer) 1;
#line 447 "stack_opt.m"
                          else
#line 448 "stack_opt.m"
                            ll_backend__stack_opt__FreeOfCost_28 = (MR_Integer) 0;
#line 447 "stack_opt.m"
                          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
#line 442 "stack_opt.m"
                        }
#line 450 "stack_opt.m"
                    }
#line 450 "stack_opt.m"
                }
#line 428 "stack_opt.m"
            }
#line 502 "stack_opt.m"
          if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 454 "stack_opt.m"
            {
#line 454 "stack_opt.m"
              MR_Word ll_backend__stack_opt__RelevantVars_36;
#line 454 "stack_opt.m"
              MR_Word ll_backend__stack_opt__MatchInfo_37;
#line 454 "stack_opt.m"
              MR_Word ll_backend__stack_opt__RelevantAfterVars_39;
#line 454 "stack_opt.m"
              MR_Word ll_backend__stack_opt__AfterModelNon_40;
#line 454 "stack_opt.m"
              MR_Word ll_backend__stack_opt__InsertAnchors_41;
#line 454 "stack_opt.m"
              MR_Word ll_backend__stack_opt__InsertIntervals_42;

#line 454 "stack_opt.m"
              {
#line 454 "stack_opt.m"
                parse_tree__set_of_var__insert_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__FieldVars_18, &ll_backend__stack_opt__RelevantVars_36);
              }
#line 455 "stack_opt.m"
              {
#line 455 "stack_opt.m"
                ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(ll_backend__stack_opt__RelevantVars_36, &ll_backend__stack_opt__MatchInfo_37, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53);
              }
#line 457 "stack_opt.m"
              (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 0)));
#line 457 "stack_opt.m"
              ll_backend__stack_opt__RelevantAfterVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 1)));
#line 457 "stack_opt.m"
              ll_backend__stack_opt__AfterModelNon_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 2)));
#line 457 "stack_opt.m"
              ll_backend__stack_opt__InsertAnchors_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 3)));
#line 457 "stack_opt.m"
              ll_backend__stack_opt__InsertIntervals_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 4)));
#line 466 "stack_opt.m"
#line 466 "stack_opt.m"
              switch (ll_backend__stack_opt__FreeOfCost_28) {
#line 466 "stack_opt.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 466 "stack_opt.m"
                case (MR_Integer) 0:
#line 498 "stack_opt.m"
#line 498 "stack_opt.m"
                  switch (ll_backend__stack_opt__AfterModelNon_40) {
#line 498 "stack_opt.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 498 "stack_opt.m"
                    case (MR_Integer) 0:
#line 469 "stack_opt.m"
                      {
#line 469 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__OnStack_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 469 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__CandidateArgVars_45;
#line 469 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__CellVarFlushedLater_46;
#line 469 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__ViaCellVars_59;
#line 470 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 0)));
#line 470 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 1)));
#line 470 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_113_113 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 470 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 470 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 3)));

#line 471 "stack_opt.m"
                        {
#line 471 "stack_opt.m"
                          parse_tree__set_of_var__difference_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__CandidateArgVars0_20, ll_backend__stack_opt__RelevantAfterVars_39, &ll_backend__stack_opt__CandidateArgVars_45);
                        }
#line 480 "stack_opt.m"
#line 480 "stack_opt.m"
                        switch (ll_backend__stack_opt__OnStack_44) {
#line 480 "stack_opt.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 480 "stack_opt.m"
                          case (MR_Integer) 0:
#line 489 "stack_opt.m"
                            {
#line 483 "stack_opt.m"
                              {
#line 483 "stack_opt.m"
                                ll_backend__stack_opt__use_cell_8_p_0_6(&ll_backend__stack_opt__env);
                              }
#line 489 "stack_opt.m"
                              if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 488 "stack_opt.m"
                                ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 1;
#line 489 "stack_opt.m"
                              else
#line 490 "stack_opt.m"
                                ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 0;
#line 489 "stack_opt.m"
                            }
#line 480 "stack_opt.m"
                            break;
#line 480 "stack_opt.m"
                          case (MR_Integer) 1:
#line 477 "stack_opt.m"
                            {
#line 475 "stack_opt.m"
                              {
#line 475 "stack_opt.m"
                                (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FlushedLater_15, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9);
                              }
#line 477 "stack_opt.m"
                              if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 476 "stack_opt.m"
                                ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 1;
#line 477 "stack_opt.m"
                              else
#line 478 "stack_opt.m"
                                ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 0;
#line 477 "stack_opt.m"
                            }
#line 480 "stack_opt.m"
                            break;
#line 480 "stack_opt.m"
                        }
#line 493 "stack_opt.m"
                        {
#line 493 "stack_opt.m"
                          ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__CellVarFlushedLater_46, ll_backend__stack_opt__StackOptParams_16, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38, ll_backend__stack_opt__CandidateArgVars_45, &ll_backend__stack_opt__ViaCellVars_59);
                        }
#line 495 "stack_opt.m"
                        {
#line 495 "stack_opt.m"
                          ll_backend__stack_opt__record_matching_result_11_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__ConsId_11, ll_backend__stack_opt__FieldVarList_10, ll_backend__stack_opt__ViaCellVars_59, ll_backend__stack_opt__Goal_12, ll_backend__stack_opt__InsertAnchors_41, ll_backend__stack_opt__InsertIntervals_42, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54);
#line 495 "stack_opt.m"
                          return;
                        }
#line 469 "stack_opt.m"
                      }
#line 498 "stack_opt.m"
                      break;
#line 498 "stack_opt.m"
                    case (MR_Integer) 1:
#line 499 "stack_opt.m"
                      {
#line 499 "stack_opt.m"
                        *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51;
#line 499 "stack_opt.m"
                        *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53;
#line 499 "stack_opt.m"
                      }
#line 498 "stack_opt.m"
                      break;
#line 498 "stack_opt.m"
                  }
#line 466 "stack_opt.m"
                  break;
#line 466 "stack_opt.m"
                case (MR_Integer) 1:
#line 460 "stack_opt.m"
                  {
#line 460 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__ViaCellVars_43;

#line 461 "stack_opt.m"
                    {
#line 461 "stack_opt.m"
                      parse_tree__set_of_var__difference_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__CandidateArgVars0_20, ll_backend__stack_opt__RelevantAfterVars_39, &ll_backend__stack_opt__ViaCellVars_43);
                    }
#line 463 "stack_opt.m"
                    {
#line 463 "stack_opt.m"
                      ll_backend__stack_opt__record_matching_result_11_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__ConsId_11, ll_backend__stack_opt__FieldVarList_10, ll_backend__stack_opt__ViaCellVars_43, ll_backend__stack_opt__Goal_12, ll_backend__stack_opt__InsertAnchors_41, ll_backend__stack_opt__InsertIntervals_42, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54);
#line 463 "stack_opt.m"
                      return;
                    }
#line 460 "stack_opt.m"
                  }
#line 466 "stack_opt.m"
                  break;
#line 466 "stack_opt.m"
              }
#line 454 "stack_opt.m"
            }
#line 502 "stack_opt.m"
          else
#line 503 "stack_opt.m"
            {
#line 503 "stack_opt.m"
              *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53;
#line 503 "stack_opt.m"
              *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51;
#line 503 "stack_opt.m"
            }
#line 502 "stack_opt.m"
        }
#line 415 "stack_opt.m"
    }
#line 411 "stack_opt.m"
  }
#line 411 "stack_opt.m"
}

#line 241 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__optimize_live_sets_7_p_0(
#line 241 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_8,
#line 241 "stack_opt.m"
  MR_Word ll_backend__stack_opt__OptAlloc_9,
#line 241 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60,
#line 241 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61,
#line 241 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Changed_11,
#line 241 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_12,
#line 241 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_13)
#line 241 "stack_opt.m"
{
#line 245 "stack_opt.m"
  {
#line 245 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_106_106;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_108_108;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_109_109;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_110_110;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_113_113;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_114_114;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal0_14;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarTypes0_15;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarSet0_16;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlot_17;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InputArgs_18;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OutputArgs_19;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__UnusedArgs_20;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVars_21;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Globals_22;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CandHeadvars_23;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__NonCandidateVars_24;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Counter0_25;
#line 245 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CurInterval_26;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Counter1_27;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CurIntervalId_28;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__EndMap0_29;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertMap0_30;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StartMap0_31;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__SuccMap0_32;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarsMap0_33;
#line 245 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CellVarStoreCost_34;
#line 245 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CellVarLoadCost_35;
#line 245 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__FieldVarStoreCost_36;
#line 245 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__FieldVarLoadCost_37;
#line 245 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__OpRatio_38;
#line 245 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__NodeRatio_39;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InclAllCand_40;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__MatchingParams_41;
#line 245 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__AllPathNodeRatio_42;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FixpointLoop_43;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FullPath_44;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OnStack_45;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptNoReturnCalls_46;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntParams_47;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalInfo0_48;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptParams_49;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptInfo0_50;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalInfo_51;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptInfo_52;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertMap_54;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_62_62;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_63_63;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_64_64;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_71_71;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_84_84;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_85_85;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_86_86;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_87_87;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_88_88;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_89_89;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_90_90;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_91_91;
#line 245 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_92_92;
#line 309 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_StackOptInfo_52;
#line 319 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_104_104;
#line 319 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_105_105;

#line 246 "stack_opt.m"
    {
#line 246 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__Goal0_14);
    }
#line 247 "stack_opt.m"
    {
#line 247 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__VarTypes0_15);
    }
#line 248 "stack_opt.m"
    {
#line 248 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__VarSet0_16);
    }
#line 249 "stack_opt.m"
    ll_backend__stack_opt__ParConjOwnSlot_17 = (MR_Word) ll_backend__stack_opt__OptAlloc_9;
#line 250 "stack_opt.m"
    {
#line 250 "stack_opt.m"
      hlds__arg_info__partition_proc_args_5_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, ll_backend__stack_opt__ModuleInfo_8, &ll_backend__stack_opt__InputArgs_18, &ll_backend__stack_opt__OutputArgs_19, &ll_backend__stack_opt__UnusedArgs_20);
    }
#line 12743 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_106_106 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 252 "stack_opt.m"
    {
#line 252 "stack_opt.m"
      ll_backend__stack_opt__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_64_64, 0) = ((MR_Box) (ll_backend__stack_opt__UnusedArgs_20));
#line 252 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "stack_opt.m"
    }
#line 252 "stack_opt.m"
    {
#line 252 "stack_opt.m"
      ll_backend__stack_opt__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_63_63, 0) = ((MR_Box) (ll_backend__stack_opt__OutputArgs_19));
#line 252 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_63_63, 1) = ((MR_Box) (ll_backend__stack_opt__V_64_64));
#line 252 "stack_opt.m"
    }
#line 252 "stack_opt.m"
    {
#line 252 "stack_opt.m"
      ll_backend__stack_opt__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_62_62, 0) = ((MR_Box) (ll_backend__stack_opt__InputArgs_18));
#line 252 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_62_62, 1) = ((MR_Box) (ll_backend__stack_opt__V_63_63));
#line 252 "stack_opt.m"
    }
#line 252 "stack_opt.m"
    {
#line 252 "stack_opt.m"
      ll_backend__stack_opt__HeadVars_21 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeInfo_106_106, ll_backend__stack_opt__V_62_62);
    }
#line 253 "stack_opt.m"
    {
#line 253 "stack_opt.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_opt__ModuleInfo_8, &ll_backend__stack_opt__Globals_22);
    }
#line 254 "stack_opt.m"
    {
#line 254 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 378, &ll_backend__stack_opt__CandHeadvars_23);
    }
#line 260 "stack_opt.m"
#line 260 "stack_opt.m"
    switch (ll_backend__stack_opt__CandHeadvars_23) {
#line 260 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 260 "stack_opt.m"
      case (MR_Integer) 0:
#line 257 "stack_opt.m"
        {
#line 257 "stack_opt.m"
          MR_Word ll_backend__stack_opt__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 257 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_67_67;

#line 258 "stack_opt.m"
          {
#line 258 "stack_opt.m"
            ll_backend__stack_opt__V_67_67 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_107_107, ll_backend__stack_opt__HeadVars_21);
          }
#line 258 "stack_opt.m"
          {
#line 258 "stack_opt.m"
            parse_tree__set_of_var__union_3_p_0(ll_backend__stack_opt__TypeCtorInfo_107_107, ll_backend__stack_opt__V_67_67, ll_backend__stack_opt__ParConjOwnSlot_17, &ll_backend__stack_opt__NonCandidateVars_24);
          }
#line 257 "stack_opt.m"
        }
#line 260 "stack_opt.m"
        break;
#line 260 "stack_opt.m"
      case (MR_Integer) 1:
#line 262 "stack_opt.m"
        ll_backend__stack_opt__NonCandidateVars_24 = ll_backend__stack_opt__ParConjOwnSlot_17;
#line 260 "stack_opt.m"
        break;
#line 260 "stack_opt.m"
    }
#line 264 "stack_opt.m"
    {
#line 264 "stack_opt.m"
      ll_backend__stack_opt__Counter0_25 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 265 "stack_opt.m"
    {
#line 265 "stack_opt.m"
      mercury__counter__allocate_3_p_0(&ll_backend__stack_opt__CurInterval_26, ll_backend__stack_opt__Counter0_25, &ll_backend__stack_opt__Counter1_27);
    }
#line 266 "stack_opt.m"
    ll_backend__stack_opt__CurIntervalId_28 = (MR_Word) ll_backend__stack_opt__CurInterval_26;
#line 12838 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 12840 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 267 "stack_opt.m"
    {
#line 267 "stack_opt.m"
      ll_backend__stack_opt__EndMap0_29 = mercury__map__singleton_2_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__TypeCtorInfo_109_109, ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
    }
#line 12847 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_110_110 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[2];
#line 268 "stack_opt.m"
    {
#line 268 "stack_opt.m"
      mercury__map__init_1_p_0(ll_backend__stack_opt__TypeCtorInfo_109_109, ll_backend__stack_opt__TypeInfo_110_110, &ll_backend__stack_opt__InsertMap0_30);
    }
#line 269 "stack_opt.m"
    {
#line 269 "stack_opt.m"
      mercury__map__init_1_p_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__TypeCtorInfo_109_109, &ll_backend__stack_opt__StartMap0_31);
    }
#line 270 "stack_opt.m"
    {
#line 270 "stack_opt.m"
      ll_backend__stack_opt__SuccMap0_32 = mercury__map__singleton_2_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, (MR_Word) &ll_backend__stack_opt_scalar_common_1[3], ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 12864 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 271 "stack_opt.m"
    {
#line 271 "stack_opt.m"
      ll_backend__stack_opt__V_71_71 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113, ll_backend__stack_opt__OutputArgs_19);
    }
#line 271 "stack_opt.m"
    {
#line 271 "stack_opt.m"
      ll_backend__stack_opt__VarsMap0_33 = mercury__map__singleton_2_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, (MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)), ((MR_Box) (ll_backend__stack_opt__V_71_71)));
    }
#line 272 "stack_opt.m"
    {
#line 272 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 379, &ll_backend__stack_opt__CellVarStoreCost_34);
    }
#line 274 "stack_opt.m"
    {
#line 274 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 380, &ll_backend__stack_opt__CellVarLoadCost_35);
    }
#line 276 "stack_opt.m"
    {
#line 276 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 381, &ll_backend__stack_opt__FieldVarStoreCost_36);
    }
#line 278 "stack_opt.m"
    {
#line 278 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 382, &ll_backend__stack_opt__FieldVarLoadCost_37);
    }
#line 280 "stack_opt.m"
    {
#line 280 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 383, &ll_backend__stack_opt__OpRatio_38);
    }
#line 282 "stack_opt.m"
    {
#line 282 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 384, &ll_backend__stack_opt__NodeRatio_39);
    }
#line 284 "stack_opt.m"
    {
#line 284 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 386, &ll_backend__stack_opt__InclAllCand_40);
    }
#line 286 "stack_opt.m"
    {
#line 286 "stack_opt.m"
      ll_backend__stack_opt__MatchingParams_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 286 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 0) = ((MR_Box) (ll_backend__stack_opt__CellVarStoreCost_34));
#line 286 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 1) = ((MR_Box) (ll_backend__stack_opt__CellVarLoadCost_35));
#line 286 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 2) = ((MR_Box) (ll_backend__stack_opt__FieldVarStoreCost_36));
#line 286 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 3) = ((MR_Box) (ll_backend__stack_opt__FieldVarLoadCost_37));
#line 286 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 4) = ((MR_Box) (ll_backend__stack_opt__OpRatio_38));
#line 286 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 5) = ((MR_Box) (ll_backend__stack_opt__NodeRatio_39));
#line 286 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 6) = ((MR_Box) (ll_backend__stack_opt__InclAllCand_40));
#line 286 "stack_opt.m"
    }
#line 288 "stack_opt.m"
    {
#line 288 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 385, &ll_backend__stack_opt__AllPathNodeRatio_42);
    }
#line 291 "stack_opt.m"
    {
#line 291 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 375, &ll_backend__stack_opt__FixpointLoop_43);
    }
#line 293 "stack_opt.m"
    {
#line 293 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 376, &ll_backend__stack_opt__FullPath_44);
    }
#line 295 "stack_opt.m"
    {
#line 295 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 377, &ll_backend__stack_opt__OnStack_45);
    }
#line 297 "stack_opt.m"
    {
#line 297 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 326, &ll_backend__stack_opt__OptNoReturnCalls_46);
    }
#line 299 "stack_opt.m"
    {
#line 299 "stack_opt.m"
      ll_backend__stack_opt__IntParams_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_47, 0) = ((MR_Box) (ll_backend__stack_opt__ModuleInfo_8));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_47, 1) = ((MR_Box) (ll_backend__stack_opt__VarTypes0_15));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_47, 2) = ((MR_Box) (ll_backend__stack_opt__OptNoReturnCalls_46));
#line 299 "stack_opt.m"
    }
#line 301 "stack_opt.m"
    {
#line 301 "stack_opt.m"
      ll_backend__stack_opt__V_84_84 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113);
    }
#line 301 "stack_opt.m"
    {
#line 301 "stack_opt.m"
      ll_backend__stack_opt__V_85_85 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113, ll_backend__stack_opt__OutputArgs_19);
    }
#line 12978 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_114_114 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 302 "stack_opt.m"
    {
#line 302 "stack_opt.m"
      ll_backend__stack_opt__V_86_86 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_114_114, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0);
    }
#line 302 "stack_opt.m"
    {
#line 302 "stack_opt.m"
      ll_backend__stack_opt__V_87_87 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_114_114, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0);
    }
#line 302 "stack_opt.m"
    {
#line 302 "stack_opt.m"
      ll_backend__stack_opt__V_88_88 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_114_114, ll_backend__stack_opt__TypeCtorInfo_108_108);
    }
#line 303 "stack_opt.m"
    {
#line 303 "stack_opt.m"
      ll_backend__stack_opt__V_89_89 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)));
    }
#line 304 "stack_opt.m"
    {
#line 304 "stack_opt.m"
      ll_backend__stack_opt__V_90_90 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_109_109, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0);
    }
#line 304 "stack_opt.m"
    {
#line 304 "stack_opt.m"
      ll_backend__stack_opt__V_91_91 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_109_109);
    }
#line 305 "stack_opt.m"
    {
#line 305 "stack_opt.m"
      ll_backend__stack_opt__V_92_92 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, (MR_Word) &ll_backend__stack_opt_scalar_common_1[5]);
    }
#line 300 "stack_opt.m"
    {
#line 300 "stack_opt.m"
      ll_backend__stack_opt__IntervalInfo0_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 0) = ((MR_Box) (ll_backend__stack_opt__IntParams_47));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 1) = ((MR_Box) (ll_backend__stack_opt__V_84_84));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 2) = ((MR_Box) (ll_backend__stack_opt__V_85_85));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 3) = ((MR_Box) (ll_backend__stack_opt__V_86_86));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 4) = ((MR_Box) (ll_backend__stack_opt__V_87_87));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 5) = ((MR_Box) (ll_backend__stack_opt__V_88_88));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 6) = ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 7) = ((MR_Box) (ll_backend__stack_opt__Counter1_27));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 8) = ((MR_Box) (ll_backend__stack_opt__V_89_89));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 9) = ((MR_Box) (ll_backend__stack_opt__V_90_90));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 10) = ((MR_Box) (ll_backend__stack_opt__V_91_91));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 11) = ((MR_Box) (ll_backend__stack_opt__StartMap0_31));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 12) = ((MR_Box) (ll_backend__stack_opt__EndMap0_29));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 13) = ((MR_Box) (ll_backend__stack_opt__SuccMap0_32));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 14) = ((MR_Box) (ll_backend__stack_opt__VarsMap0_33));
#line 300 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 15) = ((MR_Box) (ll_backend__stack_opt__V_92_92));
#line 300 "stack_opt.m"
    }
#line 306 "stack_opt.m"
    {
#line 306 "stack_opt.m"
      ll_backend__stack_opt__StackOptParams_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 0) = ((MR_Box) (ll_backend__stack_opt__MatchingParams_41));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 1) = ((MR_Box) (ll_backend__stack_opt__AllPathNodeRatio_42));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 2) = ((MR_Box) ((ll_backend__stack_opt__FixpointLoop_43 | ((((ll_backend__stack_opt__FullPath_44 << (MR_Integer) 1)) | ((ll_backend__stack_opt__OnStack_45 << (MR_Integer) 2)))))));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 3) = ((MR_Box) (ll_backend__stack_opt__NonCandidateVars_24));
#line 306 "stack_opt.m"
    }
#line 308 "stack_opt.m"
    {
#line 308 "stack_opt.m"
      ll_backend__stack_opt__StackOptInfo0_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 308 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo0_50, 0) = ((MR_Box) (ll_backend__stack_opt__StackOptParams_49));
#line 308 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo0_50, 1) = ((MR_Box) (ll_backend__stack_opt__InsertMap0_30));
#line 308 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo0_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "stack_opt.m"
    }
#line 309 "stack_opt.m"
    {
#line 309 "stack_opt.m"
      backend_libs__interval__build_interval_info_in_goal_5_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[6], ll_backend__stack_opt__Goal0_14, ll_backend__stack_opt__IntervalInfo0_48, &ll_backend__stack_opt__IntervalInfo_51, ((MR_Box) (ll_backend__stack_opt__StackOptInfo0_50)), &ll_backend__stack_opt__conv0_StackOptInfo_52);
    }
#line 309 "stack_opt.m"
    ll_backend__stack_opt__StackOptInfo_52 = ((MR_Word) ll_backend__stack_opt__conv0_StackOptInfo_52);
#line 311 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__DebugStackOpt_12 == ll_backend__stack_opt__PredIdInt_13);
#line 316 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 312 "stack_opt.m"
      {
#line 313 "stack_opt.m"
        {
#line 313 "stack_opt.m"
          backend_libs__interval__dump_interval_info_3_p_0(ll_backend__stack_opt__IntervalInfo_51);
        }
#line 314 "stack_opt.m"
        {
#line 314 "stack_opt.m"
          ll_backend__stack_opt__dump_stack_opt_info_3_p_0(ll_backend__stack_opt__StackOptInfo_52);
        }
#line 312 "stack_opt.m"
      }
#line 316 "stack_opt.m"
    else
#line 317 "stack_opt.m"
      {
#line 317 "stack_opt.m"
      }
#line 319 "stack_opt.m"
    ll_backend__stack_opt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_52, (MR_Integer) 0)));
#line 319 "stack_opt.m"
    ll_backend__stack_opt__InsertMap_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_52, (MR_Integer) 1)));
#line 319 "stack_opt.m"
    ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_52, (MR_Integer) 2)));
#line 320 "stack_opt.m"
    {
#line 320 "stack_opt.m"
      ll_backend__stack_opt__succeeded = mercury__map__is_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_109_109, ll_backend__stack_opt__TypeInfo_110_110, ll_backend__stack_opt__InsertMap_54);
    }
#line 322 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 321 "stack_opt.m"
      {
#line 321 "stack_opt.m"
        *ll_backend__stack_opt__Changed_11 = (MR_Integer) 0;
#line 321 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61 = ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60;
#line 321 "stack_opt.m"
      }
#line 322 "stack_opt.m"
    else
#line 325 "stack_opt.m"
      {
#line 325 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Goal1_55;
#line 325 "stack_opt.m"
        MR_Word ll_backend__stack_opt__VarSet_56;
#line 325 "stack_opt.m"
        MR_Word ll_backend__stack_opt__VarTypes_57;
#line 325 "stack_opt.m"
        MR_Word ll_backend__stack_opt__RenameMap_58;
#line 325 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Goal_59;
#line 325 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_97_97;
#line 325 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_100_100;
#line 325 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_101_101;
#line 325 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_102_102;

#line 324 "stack_opt.m"
        {
#line 324 "stack_opt.m"
          ll_backend__stack_opt__V_97_97 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeInfo_106_106, ll_backend__stack_opt__TypeInfo_106_106);
        }
#line 323 "stack_opt.m"
        {
#line 323 "stack_opt.m"
          backend_libs__interval__record_decisions_in_goal_10_p_0(ll_backend__stack_opt__Goal0_14, &ll_backend__stack_opt__Goal1_55, ll_backend__stack_opt__VarSet0_16, &ll_backend__stack_opt__VarSet_56, ll_backend__stack_opt__VarTypes0_15, &ll_backend__stack_opt__VarTypes_57, ll_backend__stack_opt__V_97_97, &ll_backend__stack_opt__RenameMap_58, ll_backend__stack_opt__InsertMap_54, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__stack_opt_scalar_common_3[0]));
        }
#line 326 "stack_opt.m"
        {
#line 326 "stack_opt.m"
          ll_backend__stack_opt__V_100_100 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113, ll_backend__stack_opt__HeadVars_21);
        }
#line 326 "stack_opt.m"
        {
#line 326 "stack_opt.m"
          backend_libs__interval__apply_headvar_correction_4_p_0(ll_backend__stack_opt__V_100_100, ll_backend__stack_opt__RenameMap_58, ll_backend__stack_opt__Goal1_55, &ll_backend__stack_opt__Goal_59);
        }
#line 328 "stack_opt.m"
        {
#line 328 "stack_opt.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_opt__Goal_59, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_101_101);
        }
#line 329 "stack_opt.m"
        {
#line 329 "stack_opt.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(ll_backend__stack_opt__VarSet_56, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_101_101, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_102_102);
        }
#line 330 "stack_opt.m"
        {
#line 330 "stack_opt.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ll_backend__stack_opt__VarTypes_57, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_102_102, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61);
        }
#line 331 "stack_opt.m"
        *ll_backend__stack_opt__Changed_11 = (MR_Integer) 1;
#line 325 "stack_opt.m"
      }
#line 245 "stack_opt.m"
  }
#line 241 "stack_opt.m"
}

#line 79 "stack_opt.m"
void MR_CALL 
ll_backend__stack_opt__stack_opt_cell_5_p_0(
#line 79 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PredProcId_6,
#line 79 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_32,
#line 79 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33,
#line 79 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_0_34,
#line 79 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35)
#line 79 "stack_opt.m"
{
#line 177 "stack_opt.m"
  {
#line 177 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_69_69;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_70_70;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PredProcId_6, (MR_Integer) 0)));
#line 177 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PredProcId_6, (MR_Integer) 1)));
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__SimplifyTasks_11;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Liveness0_12;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Globals_13;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PredInfo_14;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfoLiveness_15;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptNoReturnCalls_16;
#line 177 "stack_opt.m"
    MR_ArrayPtr ll_backend__stack_opt__DummyDummyTypeArray_17;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AllocData_18;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal2_20;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptStackAlloc0_21;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FailVars_22;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__NondetLiveness0_23;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal_24;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptStackAlloc_25;
#line 177 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__DebugStackOpt_28;
#line 177 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__PredIdInt_29;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Changed_31;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_38_38;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_46_46;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53;
#line 177 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_72_72;
#line 191 "stack_opt.m"
    MR_ArrayPtr ll_backend__stack_opt__conv0_DummyDummyTypeArray_17;
#line 194 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;
#line 199 "stack_opt.m"
    MR_Word ll_backend__stack_opt___Liveness_26;
#line 199 "stack_opt.m"
    MR_Word ll_backend__stack_opt___NondetLiveness_27;
#line 199 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv1_OptStackAlloc_25;

#line 182 "stack_opt.m"
    {
#line 182 "stack_opt.m"
      ll_backend__stack_opt__SimplifyTasks_11 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 183 "stack_opt.m"
    {
#line 183 "stack_opt.m"
      check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(ll_backend__stack_opt__SimplifyTasks_11, ll_backend__stack_opt__PredId_9, ll_backend__stack_opt__ProcId_10, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_0_34, &ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_32, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_38_38);
    }
#line 184 "stack_opt.m"
    {
#line 184 "stack_opt.m"
      ll_backend__liveness__detect_liveness_proc_4_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredProcId_6, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_38_38, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39);
    }
#line 185 "stack_opt.m"
    {
#line 185 "stack_opt.m"
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39, ll_backend__stack_opt__PredId_9, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, &ll_backend__stack_opt__Liveness0_12);
    }
#line 186 "stack_opt.m"
    {
#line 186 "stack_opt.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, &ll_backend__stack_opt__Globals_13);
    }
#line 187 "stack_opt.m"
    {
#line 187 "stack_opt.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredId_9, &ll_backend__stack_opt__PredInfo_14);
    }
#line 188 "stack_opt.m"
    {
#line 188 "stack_opt.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__stack_opt__PredInfo_14, ll_backend__stack_opt__Globals_13, &ll_backend__stack_opt__TypeInfoLiveness_15);
    }
#line 189 "stack_opt.m"
    {
#line 189 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_13, (MR_Integer) 326, &ll_backend__stack_opt__OptNoReturnCalls_16);
    }
#line 191 "stack_opt.m"
    {
#line 191 "stack_opt.m"
      mercury__array__init_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, (MR_Integer) 1, ((MR_Box) ((MR_Integer) 1)), &ll_backend__stack_opt__conv0_DummyDummyTypeArray_17);
    }
#line 191 "stack_opt.m"
    ll_backend__stack_opt__DummyDummyTypeArray_17 = (MR_ArrayPtr) ll_backend__stack_opt__conv0_DummyDummyTypeArray_17;
#line 192 "stack_opt.m"
    {
#line 192 "stack_opt.m"
      ll_backend__stack_opt__AllocData_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 192 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 0) = ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37));
#line 192 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 1) = ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39));
#line 192 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 2) = ((MR_Box) (ll_backend__stack_opt__PredProcId_6));
#line 192 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 3) = ((MR_Box) (ll_backend__stack_opt__TypeInfoLiveness_15));
#line 192 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 4) = ((MR_Box) (ll_backend__stack_opt__OptNoReturnCalls_16));
#line 192 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 5) = ((MR_Box) (ll_backend__stack_opt__DummyDummyTypeArray_17));
#line 192 "stack_opt.m"
    }
#line 194 "stack_opt.m"
    {
#line 194 "stack_opt.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, &ll_backend__stack_opt__V_19_19, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43);
    }
#line 195 "stack_opt.m"
    {
#line 195 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43, &ll_backend__stack_opt__Goal2_20);
    }
#line 239 "stack_opt.m"
    {
#line 239 "stack_opt.m"
      ll_backend__stack_opt__V_72_72 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 239 "stack_opt.m"
    ll_backend__stack_opt__OptStackAlloc0_21 = (MR_Word) ll_backend__stack_opt__V_72_72;
#line 13372 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_69_69 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 197 "stack_opt.m"
    {
#line 197 "stack_opt.m"
      mercury__set__init_1_p_0(ll_backend__stack_opt__TypeInfo_69_69, &ll_backend__stack_opt__FailVars_22);
    }
#line 198 "stack_opt.m"
    {
#line 198 "stack_opt.m"
      mercury__set__init_1_p_0(ll_backend__stack_opt__TypeInfo_69_69, &ll_backend__stack_opt__NondetLiveness0_23);
    }
#line 13384 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_70_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 199 "stack_opt.m"
    {
#line 199 "stack_opt.m"
      ll_backend__stack_opt__V_44_44 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_70_70, ll_backend__stack_opt__FailVars_22);
    }
#line 201 "stack_opt.m"
    {
#line 201 "stack_opt.m"
      ll_backend__stack_opt__V_45_45 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_70_70, ll_backend__stack_opt__NondetLiveness0_23);
    }
#line 199 "stack_opt.m"
    {
#line 199 "stack_opt.m"
      ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[1], ll_backend__stack_opt__Goal2_20, &ll_backend__stack_opt__Goal_24, ll_backend__stack_opt__V_44_44, ll_backend__stack_opt__AllocData_18, ((MR_Box) (ll_backend__stack_opt__OptStackAlloc0_21)), &ll_backend__stack_opt__conv1_OptStackAlloc_25, ll_backend__stack_opt__Liveness0_12, &ll_backend__stack_opt___Liveness_26, ll_backend__stack_opt__V_45_45, &ll_backend__stack_opt___NondetLiveness_27);
    }
#line 199 "stack_opt.m"
    ll_backend__stack_opt__OptStackAlloc_25 = ((MR_Word) ll_backend__stack_opt__conv1_OptStackAlloc_25);
#line 202 "stack_opt.m"
    {
#line 202 "stack_opt.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_opt__Goal_24, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_46_46);
    }
#line 203 "stack_opt.m"
    {
#line 203 "stack_opt.m"
      ll_backend__store_alloc__allocate_store_maps_5_p_0((MR_Integer) 1, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredProcId_6, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_46_46, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48);
    }
#line 204 "stack_opt.m"
    {
#line 204 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_13, (MR_Integer) 75, &ll_backend__stack_opt__DebugStackOpt_28);
    }
#line 205 "stack_opt.m"
    {
#line 205 "stack_opt.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(ll_backend__stack_opt__PredId_9, &ll_backend__stack_opt__PredIdInt_29);
    }
#line 207 "stack_opt.m"
    {
#line 207 "stack_opt.m"
      ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\nbefore stack opt cell", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37);
    }
#line 211 "stack_opt.m"
    {
#line 211 "stack_opt.m"
      ll_backend__stack_opt__optimize_live_sets_7_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__OptStackAlloc_25, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53, &ll_backend__stack_opt__Changed_31, ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29);
    }
#line 233 "stack_opt.m"
#line 233 "stack_opt.m"
    switch (ll_backend__stack_opt__Changed_31) {
#line 233 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 233 "stack_opt.m"
      case (MR_Integer) 0:
#line 234 "stack_opt.m"
        {
#line 234 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33 = ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53;
#line 234 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35 = ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37;
#line 234 "stack_opt.m"
        }
#line 233 "stack_opt.m"
        break;
#line 233 "stack_opt.m"
      case (MR_Integer) 1:
#line 214 "stack_opt.m"
        {
#line 214 "stack_opt.m"
          MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58;

#line 216 "stack_opt.m"
          {
#line 216 "stack_opt.m"
            ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\nafter stack opt transformation", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37);
          }
#line 220 "stack_opt.m"
          {
#line 220 "stack_opt.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58);
          }
#line 222 "stack_opt.m"
          {
#line 222 "stack_opt.m"
            ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\nafter stack opt requantify", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37);
          }
#line 226 "stack_opt.m"
          {
#line 226 "stack_opt.m"
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35);
          }
#line 229 "stack_opt.m"
          {
#line 229 "stack_opt.m"
            ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\n                \nafter stack opt recompute instmaps", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, *ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33, *ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35);
#line 229 "stack_opt.m"
            return;
          }
#line 214 "stack_opt.m"
        }
#line 233 "stack_opt.m"
        break;
#line 233 "stack_opt.m"
    }
#line 177 "stack_opt.m"
  }
#line 79 "stack_opt.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.stack_opt. */
