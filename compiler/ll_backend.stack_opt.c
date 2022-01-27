/*
** Automatically generated from `stack_opt.m'
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
#include "transform_hlds.mih"
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
#include "libs.op_mode.mih"
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
#include "parse_tree.maybe_error.mih"
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



#line 417 "stack_opt.m"
struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s {
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9;
#line 421 "stack_opt.m"
  MR_bool ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded;
#line 421 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116;
#line 460 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38;
#line 489 "stack_opt.m"
  jmp_buf ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0;
#line 489 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_120_120;
#line 489 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47;
#line 489 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_49;
#line 489 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_50;
#line 489 "stack_opt.m"
  MR_Box ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_PathInfo_47;
#line 491 "stack_opt.m"
  MR_Box ll_backend__stack_opt__use_cell_8_p_0_env_0__conv2_Segment_50;
#line 417 "stack_opt.m"
};


#line 192 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 195 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 198 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 201 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0;

#line 204 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0;

#line 207 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0;

#line 210 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__stack_opt__type_ctor_info_path_0;

#line 213 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 216 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_opt__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 219 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

#line 222 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0;

#line 225 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0;

#line 228 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 231 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_all_paths_0_0[3];

#line 234 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_all_paths_0_0[3];

#line 237 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0;

#line 240 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0[1];

#line 243 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0[1];

#line 246 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0[1];

#line 249 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0[1];

#line 252 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0;

#line 255 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1;

#line 258 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_value_ordered_current_segment_first_flush_0[2];

#line 261 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0[2];

#line 264 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0[2];

#line 267 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0;

#line 270 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0;

#line 273 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 276 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_info_0_0[5];

#line 279 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0;

#line 282 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0[1];

#line 285 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0[1];

#line 288 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0[1];

#line 291 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0[1];

#line 294 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 297 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_path_info_0_0[2];

#line 300 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0;

#line 303 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0[1];

#line 306 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0[1];

#line 309 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0[1];

#line 312 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_path_info_0[1];

#line 315 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 318 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_matching_result_0_0[9];

#line 321 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0;

#line 324 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0[1];

#line 327 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_matching_result_0[1];

#line 330 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_matching_result_0[1];

#line 333 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_matching_result_0[1];

#line 336 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0[1];

#line 339 "ll_backend.stack_opt.c"
static const MR_NotagFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0;

#line 342 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_path_0_0[6];

#line 345 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_path_0_0[6];

#line 348 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0;

#line 351 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0[1];

#line 354 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0[1];

#line 357 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0[1];

#line 360 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0[1];

#line 363 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 366 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0;

#line 369 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_info_0_0[3];

#line 372 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_info_0_0[3];

#line 375 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0;

#line 378 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0[1];

#line 381 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0[1];

#line 384 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0[1];

#line 387 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0[1];

#line 390 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_params_0_0[6];

#line 393 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_params_0_0[6];

#line 396 "ll_backend.stack_opt.c"
static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_stack_opt_params_0_0[6];

#line 399 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0;

#line 402 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0[1];

#line 405 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0[1];

#line 408 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0[1];

#line 411 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0[1];

#line 414 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0_10001(
#line 417 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 419 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 422 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0_10001(
#line 425 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 427 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 429 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 432 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001(
#line 435 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 437 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 440 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001(
#line 443 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 445 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 447 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 450 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0_10001(
#line 453 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 455 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 458 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0_10001(
#line 461 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 463 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 465 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 468 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0_10001(
#line 471 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 473 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 476 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0_10001(
#line 479 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 481 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 483 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 486 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0_10001(
#line 489 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 491 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 494 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0_10001(
#line 497 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 499 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 501 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 504 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001(
#line 507 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 509 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 512 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001(
#line 515 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 517 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 519 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 522 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0_10001(
#line 525 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 527 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 530 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0_10001(
#line 533 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 535 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 537 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 540 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001(
#line 543 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 545 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 548 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001(
#line 551 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 553 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 555 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 558 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001(
#line 561 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 563 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 566 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001(
#line 569 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 571 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 573 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 576 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 579 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 581 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 583 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 585 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 587 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 590 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 593 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 595 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 597 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 599 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 601 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 604 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 607 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 609 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 611 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 613 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 615 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 618 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 621 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 623 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 625 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 627 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 629 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 632 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
#line 635 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 637 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 639 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 641 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 643 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 645 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_5,
#line 647 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_6,
#line 649 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_7,
#line 651 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_8);

#line 347 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_50_93_95_48_4_p_0(
#line 347 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 347 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 347 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 346 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_p_0(
#line 346 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 346 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 346 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 345 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 345 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 345 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 344 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 344 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 344 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 540 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1(
#line 540 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 540 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 540 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 540 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 540 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 532 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(
#line 532 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 532 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_11,
#line 532 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_13,
#line 532 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_14,
#line 532 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_15,
#line 532 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodeSets_16,
#line 532 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodeSets_17,
#line 532 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_18);

#line 512 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0(
#line 512 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_8,
#line 512 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_9,
#line 512 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 512 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_12,
#line 512 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_13,
#line 512 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_14);

#line 1157 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1157__1_3_p_0(
#line 1157 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_93);

#line 1154 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1154__1_3_p_0(
#line 1154 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_89);

#line 1131 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1131__1_2_p_0(
#line 1131 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_80,
#line 1131 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_81);

#line 1130 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1130__1_2_p_0(
#line 1130 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_75,
#line 1130 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_76);

#line 1112 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1112__1_2_p_0(
#line 1112 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_51,
#line 1112 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_52);

#line 1099 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1099__1_2_p_0(
#line 1099 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_45,
#line 1099 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_46);

#line 856 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__856__1_2_p_0(
#line 856 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_36,
#line 856 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_37);

#line 852 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__852__1_2_p_0(
#line 852 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_42,
#line 852 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_43);

#line 843 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__843__1_2_p_0(
#line 843 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_54,
#line 843 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_55);

#line 705 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__close_path__705__1_1_p_0(
#line 705 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FirstSegment0_7);

#line 347 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 347 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 347 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 347 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 347 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 346 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 346 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 346 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 346 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 346 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 345 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 345 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 345 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 345 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 345 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 344 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 344 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 344 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 344 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 344 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 384 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(
#line 384 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 384 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 384 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 384 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__4_4,
#line 384 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 384 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__6_6,
#line 384 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__7_7,
#line 384 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__8_8);

#line 153 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0(
#line 153 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 153 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 153 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 153 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0(
#line 153 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 153 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 176 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0(
#line 176 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 176 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 176 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 176 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0(
#line 176 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 176 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 664 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0(
#line 664 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 664 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 664 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 664 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0(
#line 664 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 664 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 143 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(
#line 143 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 143 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 143 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 143 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(
#line 143 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 143 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 163 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0(
#line 163 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 163 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 163 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 163 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0(
#line 163 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 163 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 387 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0(
#line 387 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 387 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 387 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 387 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0(
#line 387 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 387 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 398 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0(
#line 398 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 398 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 398 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 398 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0(
#line 398 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 398 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 660 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(
#line 660 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 660 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 660 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 660 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(
#line 660 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_1,
#line 660 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 674 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0(
#line 674 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 674 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 674 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 674 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0(
#line 674 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 674 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 1157 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_6(
#line 1157 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1157 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1157 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1157 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1154 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_5(
#line 1154 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1154 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1154 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1154 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1148 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_4(
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1143 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_3(
#line 1143 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1143 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1131 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_2(
#line 1131 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1131 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1131 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1130 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_1(
#line 1130 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1130 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1130 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1119 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0(
#line 1119 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MatchingResult_4);

#line 1112 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_2(
#line 1112 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1112 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1112 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1099 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_1(
#line 1099 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1099 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1099 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1096 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0(
#line 1096 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1094 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0_1(
#line 1094 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1094 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1094 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1094 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1087 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0(
#line 1087 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1084 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_2(
#line 1084 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1084 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1084 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1084 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1081 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_1(
#line 1081 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1081 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1081 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1081 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1076 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0(
#line 1076 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4);

#line 1052 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__maybe_write_progress_message_7_p_0(
#line 1052 "stack_opt.m"
  MR_String ll_backend__stack_opt__Message_8,
#line 1052 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_9,
#line 1052 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_10,
#line 1052 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ProcInfo_11,
#line 1052 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_12);

#line 1037 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(
#line 1037 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1033 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(
#line 1033 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1028 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_2(
#line 1028 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1028 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1025 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_1(
#line 1025 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1025 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1020 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0(
#line 1020 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 1020 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__AllPaths_2);

#line 1007 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_2(
#line 1007 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1007 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 993 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_1(
#line 993 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 993 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 984 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(
#line 984 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 984 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 984 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 984 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 984 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 984 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32,
#line 984 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_33);

#line 975 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(
#line 975 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 975 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 975 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 975 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 975 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_14,
#line 975 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_13,
#line 975 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_15);

#line 960 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__one_after_another_7_p_0(
#line 960 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_1,
#line 960 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_2,
#line 960 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_3,
#line 960 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4,
#line 960 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 960 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6,
#line 960 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_7);

#line 941 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_2(
#line 941 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 941 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 941 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 894 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_1(
#line 894 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 894 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 884 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0(
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__End_9,
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_10,
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_11,
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_12,
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_13,
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__SuccessorIds_14,
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36,
#line 884 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);

#line 856 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_3(
#line 856 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 852 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_2(
#line 852 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 843 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_1(
#line 843 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 833 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0(
#line 833 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 833 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_9,
#line 833 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_10,
#line 833 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_11,
#line 833 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_12,
#line 833 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28,
#line 833 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29);

#line 826 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1(
#line 826 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 826 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 826 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 826 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 826 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 811 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(
#line 811 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_5,
#line 811 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchInfo_6,
#line 811 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_7,
#line 811 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_8);

#line 789 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_more_successors_1_f_0(
#line 789 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 780 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_one_successor_1_f_0(
#line 780 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 771 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_no_successor_1_f_0(
#line 771 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 743 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__anchor_requires_close_2_f_0(
#line 743 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_1,
#line 743 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 736 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_anchor_to_path_2_f_0(
#line 736 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_4,
#line 736 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_8);

#line 722 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_interval_to_path_3_f_0(
#line 722 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_5,
#line 722 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Vars_6,
#line 722 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_12);

#line 705 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__close_path_1_f_0_1(
#line 705 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 698 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__close_path_1_f_0(
#line 698 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_3);

#line 687 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__extract_match_and_save_info_4_p_0(
#line 687 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_5,
#line 687 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchPathInfo_6,
#line 687 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Anchors_7,
#line 687 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Intervals_8);

#line 630 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__add_anchor_inserts_10_p_0(
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_11,
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVarsViaCellVar_12,
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__InsertIntervals_13,
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_14,
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27,
#line 630 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_28,
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29,
#line 630 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30,
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31,
#line 630 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32);

#line 615 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(
#line 615 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 615 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_11,
#line 615 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 615 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_17,
#line 615 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_18,
#line 615 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_19,
#line 615 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_20,
#line 615 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21,
#line 615 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22);

#line 601 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_2(
#line 601 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 601 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 601 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 601 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 601 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 601 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 601 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 601 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7);

#line 598 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_1(
#line 598 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 598 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 598 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 598 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 598 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 598 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 598 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 598 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7);

#line 586 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0(
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_12,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_13,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVars_14,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_15,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_16,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialAnchors_17,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialIntervals_18,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31,
#line 586 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33,
#line 586 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34);

#line 568 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_matching_for_path_8_p_0(
#line 568 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 568 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_10,
#line 568 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 568 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars_12,
#line 568 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfo_13,
#line 568 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodes_14,
#line 568 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodes_15,
#line 568 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_16);

#line 489 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_1(
#line 489 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 489 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_3(
#line 489 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 491 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_5(
#line 491 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 489 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_4(
#line 489 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 489 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_2(
#line 489 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 489 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_6(
#line 489 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 417 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0(
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FieldVarList_10,
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_11,
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_12,
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51,
#line 417 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52,
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53,
#line 417 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54);

#line 247 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__optimize_live_sets_7_p_0(
#line 247 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_8,
#line 247 "stack_opt.m"
  MR_Word ll_backend__stack_opt__OptAlloc_9,
#line 247 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60,
#line 247 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61,
#line 247 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Changed_11,
#line 247 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_12,
#line 247 "stack_opt.m"
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


#line 756 "stack_opt.m"
/* sealed */ struct ll_backend__stack_opt__vector_common_type_7_0_s {
#line 756 "stack_opt.m"
  const MR_Word ll_backend__stack_opt__vector_common_type_7_0__vct_7_f_0;
#line 756 "stack_opt.m"
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



#line 2128 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2136 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2144 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2152 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2160 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2168 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2176 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__stack_opt__type_ctor_info_path_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0
  }
};

#line 2184 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2192 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_opt__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2201 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 2209 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 2217 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0
  }
};

#line 2225 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2233 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_all_paths_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2240 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_all_paths_0_0[3] = {
  (MR_String) "paths_so_far",
  (MR_String) "stepped_over_model_non",
  (MR_String) "used_after_scope"
};

#line 2247 "ll_backend.stack_opt.c"
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

#line 2262 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0
};

#line 2267 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0
  }
};

#line 2276 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0
};

#line 2281 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0[1] = {
  (MR_Integer) 0
};

#line 2286 "ll_backend.stack_opt.c"
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

#line 2303 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0 = {
  (MR_String) "current_is_before_first_flush",
  (MR_Integer) 0
};

#line 2309 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1 = {
  (MR_String) "current_is_after_first_flush",
  (MR_Integer) 1
};

#line 2315 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_value_ordered_current_segment_first_flush_0[2] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0,
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1
};

#line 2321 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0[2] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1,
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0
};

#line 2327 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2333 "ll_backend.stack_opt.c"
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

#line 2350 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0
  }
};

#line 2358 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2366 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2374 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2383 "ll_backend.stack_opt.c"
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

#line 2398 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0
};

#line 2403 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0
  }
};

#line 2412 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0
};

#line 2417 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0[1] = {
  (MR_Integer) 0
};

#line 2422 "ll_backend.stack_opt.c"
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

#line 2439 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2447 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_path_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2453 "ll_backend.stack_opt.c"
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

#line 2468 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0
};

#line 2473 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0
  }
};

#line 2482 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0
};

#line 2487 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_path_info_0[1] = {
  (MR_Integer) 0
};

#line 2492 "ll_backend.stack_opt.c"
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

#line 2509 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2517 "ll_backend.stack_opt.c"
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

#line 2530 "ll_backend.stack_opt.c"
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

#line 2545 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0
};

#line 2550 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_matching_result_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0
  }
};

#line 2559 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_matching_result_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0
};

#line 2564 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_matching_result_0[1] = {
  (MR_Integer) 0
};

#line 2569 "ll_backend.stack_opt.c"
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

#line 2586 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0[1] = {
  (MR_Integer) 0
};

#line 2591 "ll_backend.stack_opt.c"
static const MR_NotagFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0 = {
  (MR_String) "opt_stack_alloc",
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_String) "par_conj_own_slots"
};

#line 2598 "ll_backend.stack_opt.c"
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

#line 2615 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_path_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2625 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_path_0_0[6] = {
  (MR_String) "flush_state",
  (MR_String) "current_segment",
  (MR_String) "first_segment",
  (MR_String) "other_segments",
  (MR_String) "flush_anchors",
  (MR_String) "occurring_intervals"
};

#line 2635 "ll_backend.stack_opt.c"
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

#line 2650 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0
};

#line 2655 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0
  }
};

#line 2664 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0
};

#line 2669 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0[1] = {
  (MR_Integer) 0
};

#line 2674 "ll_backend.stack_opt.c"
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

#line 2691 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2700 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0
  }
};

#line 2708 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_params_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0
};

#line 2715 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_info_0_0[3] = {
  (MR_String) "soi_stack_opt_params",
  (MR_String) "soi_left_anchor_inserts",
  (MR_String) "soi_matching_results"
};

#line 2722 "ll_backend.stack_opt.c"
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

#line 2737 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0
};

#line 2742 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0
  }
};

#line 2751 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0
};

#line 2756 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0[1] = {
  (MR_Integer) 0
};

#line 2761 "ll_backend.stack_opt.c"
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

#line 2778 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_params_0_0[6] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_matching_params_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2788 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_params_0_0[6] = {
  (MR_String) "sop_matching_params",
  (MR_String) "sop_all_path_node_ratio",
  (MR_String) "sop_fixpoint_loop",
  (MR_String) "sop_full_path",
  (MR_String) "sop_on_stack",
  (MR_String) "sop_non_candidate_vars"
};

#line 2798 "ll_backend.stack_opt.c"
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

#line 2832 "ll_backend.stack_opt.c"
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

#line 2847 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0
};

#line 2852 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0
  }
};

#line 2861 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0
};

#line 2866 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0[1] = {
  (MR_Integer) 0
};

#line 2871 "ll_backend.stack_opt.c"
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

#line 2888 "ll_backend.stack_opt.c"
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

#line 2901 "ll_backend.stack_opt.c"
const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__ll_backend__stack_opt__stack_opt_info__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001))
};

#line 2911 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0_10001(
#line 2914 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 2916 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 2918 "ll_backend.stack_opt.c"
{
#line 2920 "ll_backend.stack_opt.c"
  {
#line 2922 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 2925 "ll_backend.stack_opt.c"
    {
#line 2927 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____all_paths_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 2930 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 2932 "ll_backend.stack_opt.c"
  }
#line 2934 "ll_backend.stack_opt.c"
}

#line 2937 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0_10001(
#line 2940 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 2942 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 2944 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 2946 "ll_backend.stack_opt.c"
{
#line 2948 "ll_backend.stack_opt.c"
  {
#line 2950 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 2953 "ll_backend.stack_opt.c"
    {
#line 2955 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____all_paths_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 2958 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 2960 "ll_backend.stack_opt.c"
  }
#line 2962 "ll_backend.stack_opt.c"
}

#line 2965 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001(
#line 2968 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 2970 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 2972 "ll_backend.stack_opt.c"
{
#line 2974 "ll_backend.stack_opt.c"
  {
#line 2976 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 2979 "ll_backend.stack_opt.c"
    {
#line 2981 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 2984 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 2986 "ll_backend.stack_opt.c"
  }
#line 2988 "ll_backend.stack_opt.c"
}

#line 2991 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001(
#line 2994 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 2996 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 2998 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3000 "ll_backend.stack_opt.c"
{
#line 3002 "ll_backend.stack_opt.c"
  {
#line 3004 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3007 "ll_backend.stack_opt.c"
    {
#line 3009 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3012 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3014 "ll_backend.stack_opt.c"
  }
#line 3016 "ll_backend.stack_opt.c"
}

#line 3019 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0_10001(
#line 3022 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3024 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3026 "ll_backend.stack_opt.c"
{
#line 3028 "ll_backend.stack_opt.c"
  {
#line 3030 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3033 "ll_backend.stack_opt.c"
    {
#line 3035 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____match_info_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3038 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3040 "ll_backend.stack_opt.c"
  }
#line 3042 "ll_backend.stack_opt.c"
}

#line 3045 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0_10001(
#line 3048 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3050 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3052 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3054 "ll_backend.stack_opt.c"
{
#line 3056 "ll_backend.stack_opt.c"
  {
#line 3058 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3061 "ll_backend.stack_opt.c"
    {
#line 3063 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____match_info_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3066 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3068 "ll_backend.stack_opt.c"
  }
#line 3070 "ll_backend.stack_opt.c"
}

#line 3073 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0_10001(
#line 3076 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3078 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3080 "ll_backend.stack_opt.c"
{
#line 3082 "ll_backend.stack_opt.c"
  {
#line 3084 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3087 "ll_backend.stack_opt.c"
    {
#line 3089 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____match_path_info_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3092 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3094 "ll_backend.stack_opt.c"
  }
#line 3096 "ll_backend.stack_opt.c"
}

#line 3099 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0_10001(
#line 3102 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3104 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3106 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3108 "ll_backend.stack_opt.c"
{
#line 3110 "ll_backend.stack_opt.c"
  {
#line 3112 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3115 "ll_backend.stack_opt.c"
    {
#line 3117 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____match_path_info_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3120 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3122 "ll_backend.stack_opt.c"
  }
#line 3124 "ll_backend.stack_opt.c"
}

#line 3127 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0_10001(
#line 3130 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3132 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3134 "ll_backend.stack_opt.c"
{
#line 3136 "ll_backend.stack_opt.c"
  {
#line 3138 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3141 "ll_backend.stack_opt.c"
    {
#line 3143 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____matching_result_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3146 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3148 "ll_backend.stack_opt.c"
  }
#line 3150 "ll_backend.stack_opt.c"
}

#line 3153 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0_10001(
#line 3156 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3158 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3160 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3162 "ll_backend.stack_opt.c"
{
#line 3164 "ll_backend.stack_opt.c"
  {
#line 3166 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3169 "ll_backend.stack_opt.c"
    {
#line 3171 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____matching_result_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3174 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3176 "ll_backend.stack_opt.c"
  }
#line 3178 "ll_backend.stack_opt.c"
}

#line 3181 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001(
#line 3184 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3186 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3188 "ll_backend.stack_opt.c"
{
#line 3190 "ll_backend.stack_opt.c"
  {
#line 3192 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3195 "ll_backend.stack_opt.c"
    {
#line 3197 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3200 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3202 "ll_backend.stack_opt.c"
  }
#line 3204 "ll_backend.stack_opt.c"
}

#line 3207 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001(
#line 3210 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3212 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3214 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3216 "ll_backend.stack_opt.c"
{
#line 3218 "ll_backend.stack_opt.c"
  {
#line 3220 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3223 "ll_backend.stack_opt.c"
    {
#line 3225 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3228 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3230 "ll_backend.stack_opt.c"
  }
#line 3232 "ll_backend.stack_opt.c"
}

#line 3235 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0_10001(
#line 3238 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3240 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3242 "ll_backend.stack_opt.c"
{
#line 3244 "ll_backend.stack_opt.c"
  {
#line 3246 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3249 "ll_backend.stack_opt.c"
    {
#line 3251 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____path_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3254 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3256 "ll_backend.stack_opt.c"
  }
#line 3258 "ll_backend.stack_opt.c"
}

#line 3261 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0_10001(
#line 3264 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3266 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3268 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3270 "ll_backend.stack_opt.c"
{
#line 3272 "ll_backend.stack_opt.c"
  {
#line 3274 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3277 "ll_backend.stack_opt.c"
    {
#line 3279 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____path_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3282 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3284 "ll_backend.stack_opt.c"
  }
#line 3286 "ll_backend.stack_opt.c"
}

#line 3289 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001(
#line 3292 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3294 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3296 "ll_backend.stack_opt.c"
{
#line 3298 "ll_backend.stack_opt.c"
  {
#line 3300 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3303 "ll_backend.stack_opt.c"
    {
#line 3305 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____stack_opt_info_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3308 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3310 "ll_backend.stack_opt.c"
  }
#line 3312 "ll_backend.stack_opt.c"
}

#line 3315 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001(
#line 3318 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3320 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3322 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3324 "ll_backend.stack_opt.c"
{
#line 3326 "ll_backend.stack_opt.c"
  {
#line 3328 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3331 "ll_backend.stack_opt.c"
    {
#line 3333 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____stack_opt_info_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3336 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3338 "ll_backend.stack_opt.c"
  }
#line 3340 "ll_backend.stack_opt.c"
}

#line 3343 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001(
#line 3346 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3348 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3350 "ll_backend.stack_opt.c"
{
#line 3352 "ll_backend.stack_opt.c"
  {
#line 3354 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3357 "ll_backend.stack_opt.c"
    {
#line 3359 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____stack_opt_params_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3362 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3364 "ll_backend.stack_opt.c"
  }
#line 3366 "ll_backend.stack_opt.c"
}

#line 3369 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001(
#line 3372 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3374 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3376 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3378 "ll_backend.stack_opt.c"
{
#line 3380 "ll_backend.stack_opt.c"
  {
#line 3382 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3385 "ll_backend.stack_opt.c"
    {
#line 3387 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____stack_opt_params_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3390 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3392 "ll_backend.stack_opt.c"
  }
#line 3394 "ll_backend.stack_opt.c"
}

#line 3397 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 3400 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3402 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3404 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3406 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3408 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3410 "ll_backend.stack_opt.c"
{
#line 3412 "ll_backend.stack_opt.c"
  {
#line 3414 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3416 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3419 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3421 "ll_backend.stack_opt.c"
    {
#line 3423 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3426 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3428 "ll_backend.stack_opt.c"
  }
#line 3430 "ll_backend.stack_opt.c"
}

#line 3433 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 3436 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3438 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3440 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3442 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3444 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3446 "ll_backend.stack_opt.c"
{
#line 3448 "ll_backend.stack_opt.c"
  {
#line 3450 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3452 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3455 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3457 "ll_backend.stack_opt.c"
    {
#line 3459 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3462 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3464 "ll_backend.stack_opt.c"
  }
#line 3466 "ll_backend.stack_opt.c"
}

#line 3469 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 3472 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3474 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3476 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3478 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3480 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3482 "ll_backend.stack_opt.c"
{
#line 3484 "ll_backend.stack_opt.c"
  {
#line 3486 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3488 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3491 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3493 "ll_backend.stack_opt.c"
    {
#line 3495 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3498 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3500 "ll_backend.stack_opt.c"
  }
#line 3502 "ll_backend.stack_opt.c"
}

#line 3505 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 3508 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3510 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3512 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3514 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3516 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3518 "ll_backend.stack_opt.c"
{
#line 3520 "ll_backend.stack_opt.c"
  {
#line 3522 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3524 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3527 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3529 "ll_backend.stack_opt.c"
    {
#line 3531 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3534 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3536 "ll_backend.stack_opt.c"
  }
#line 3538 "ll_backend.stack_opt.c"
}

#line 3541 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
#line 3544 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3546 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3548 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3550 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3552 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 3554 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_5,
#line 3556 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_6,
#line 3558 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_7,
#line 3560 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_8)
#line 3562 "ll_backend.stack_opt.c"
{
#line 3564 "ll_backend.stack_opt.c"
  {
#line 3566 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3568 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv1_HeadVar__6_6;
#line 3570 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__8_8;

#line 3573 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3575 "ll_backend.stack_opt.c"
    {
#line 3577 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), ((MR_Word) ll_backend__stack_opt__wrapper_arg_4), ((MR_Word) ll_backend__stack_opt__wrapper_arg_5), &ll_backend__stack_opt__conv1_HeadVar__6_6, ((MR_Word) ll_backend__stack_opt__wrapper_arg_7), &ll_backend__stack_opt__conv0_HeadVar__8_8);
    }
#line 3580 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_6 = ((MR_Box) (ll_backend__stack_opt__conv1_HeadVar__6_6));
#line 3582 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_8 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__8_8));
#line 3584 "ll_backend.stack_opt.c"
  }
#line 3586 "ll_backend.stack_opt.c"
}

#line 347 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_50_93_95_48_4_p_0(
#line 347 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 347 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 347 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 347 "stack_opt.m"
{
#line 373 "stack_opt.m"
  {
#line 373 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 373 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 373 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackVarsSets_10 = (MR_Word) ll_backend__stack_opt__HeadVar__1_1;
#line 373 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackVars_11;
#line 373 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots0_12;
#line 373 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots_13;

#line 375 "stack_opt.m"
    {
#line 375 "stack_opt.m"
      ll_backend__stack_opt__StackVars_11 = parse_tree__set_of_var__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_16_16, ll_backend__stack_opt__StackVarsSets_10);
    }
#line 376 "stack_opt.m"
    ll_backend__stack_opt__ParConjOwnSlots0_12 = (MR_Word) ll_backend__stack_opt__HeadVar__3_3;
#line 377 "stack_opt.m"
    {
#line 377 "stack_opt.m"
      ll_backend__stack_opt__ParConjOwnSlots_13 = parse_tree__set_of_var__union_2_f_0(ll_backend__stack_opt__TypeCtorInfo_16_16, ll_backend__stack_opt__StackVars_11, ll_backend__stack_opt__ParConjOwnSlots0_12);
    }
#line 378 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = (MR_Word) ll_backend__stack_opt__ParConjOwnSlots_13;
#line 373 "stack_opt.m"
  }
#line 347 "stack_opt.m"
}

#line 346 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_p_0(
#line 346 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 346 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 346 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 346 "stack_opt.m"
{
#line 364 "stack_opt.m"
  {
#line 364 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 364 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackVars_10 = (MR_Word) ll_backend__stack_opt__HeadVar__1_1;
#line 364 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots0_11 = (MR_Word) ll_backend__stack_opt__HeadVar__3_3;
#line 364 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots_12;

#line 367 "stack_opt.m"
    {
#line 367 "stack_opt.m"
      ll_backend__stack_opt__ParConjOwnSlots_12 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__StackVars_10, ll_backend__stack_opt__ParConjOwnSlots0_11);
    }
#line 368 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = (MR_Word) ll_backend__stack_opt__ParConjOwnSlots_12;
#line 364 "stack_opt.m"
  }
#line 346 "stack_opt.m"
}

#line 345 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 345 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 345 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 345 "stack_opt.m"
{
#line 359 "stack_opt.m"
  {
#line 359 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 359 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = ll_backend__stack_opt__HeadVar__3_3;
#line 359 "stack_opt.m"
  }
#line 345 "stack_opt.m"
}

#line 344 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 344 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 344 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 344 "stack_opt.m"
{
#line 354 "stack_opt.m"
  {
#line 354 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 354 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = ll_backend__stack_opt__HeadVar__3_3;
#line 354 "stack_opt.m"
  }
#line 344 "stack_opt.m"
}

#line 540 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1(
#line 540 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 540 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 540 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 540 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 540 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 540 "stack_opt.m"
{
#line 540 "stack_opt.m"
  {
#line 540 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 540 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv2_BenefitNodes_14;
#line 540 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_CostNodes_15;
#line 540 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_ViaCellVars_16;

#line 540 "stack_opt.m"
    {
#line 540 "stack_opt.m"
      ll_backend__stack_opt__apply_matching_for_path_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 6))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv2_BenefitNodes_14, &ll_backend__stack_opt__conv1_CostNodes_15, &ll_backend__stack_opt__conv0_ViaCellVars_16);
    }
#line 540 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv2_BenefitNodes_14));
#line 540 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv1_CostNodes_15));
#line 540 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_ViaCellVars_16));
#line 540 "stack_opt.m"
  }
#line 540 "stack_opt.m"
}

#line 532 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(
#line 532 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 532 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_11,
#line 532 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_13,
#line 532 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_14,
#line 532 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_15,
#line 532 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodeSets_16,
#line 532 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodeSets_17,
#line 532 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_18)
#line 532 "stack_opt.m"
{
#line 539 "stack_opt.m"
  while (MR_TRUE)
#line 539 "stack_opt.m"
    {
#line 539 "stack_opt.m"
      /* tailcall optimized into a loop */
#line 539 "stack_opt.m"
      {
#line 539 "stack_opt.m"
        MR_bool ll_backend__stack_opt__succeeded;
#line 539 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_38_38;
#line 539 "stack_opt.m"
        MR_Word ll_backend__stack_opt__BenefitNodeSets0_19;
#line 539 "stack_opt.m"
        MR_Word ll_backend__stack_opt__CostNodeSets0_20;
#line 539 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PathViaCellVars_21;
#line 539 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_25_25;

#line 540 "stack_opt.m"
        {
#line 540 "stack_opt.m"
          ll_backend__stack_opt__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 540 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_12[0]));
#line 540 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 1) = ((MR_Box) (ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1));
#line 540 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 540 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 3) = ((MR_Box) (ll_backend__stack_opt__CellVar_10));
#line 540 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 4) = ((MR_Box) (ll_backend__stack_opt__CellVarFlushedLater_11));
#line 540 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 5) = ((MR_Box) (ll_backend__stack_opt__StackOptParams_13));
#line 540 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 6) = ((MR_Box) (ll_backend__stack_opt__CandidateArgVars0_15));
#line 540 "stack_opt.m"
        }
#line 3814 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeInfo_38_38 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 540 "stack_opt.m"
        {
#line 540 "stack_opt.m"
          mercury__list__map3_5_p_0((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0, (MR_Word) &ll_backend__stack_opt_scalar_common_1[7], (MR_Word) &ll_backend__stack_opt_scalar_common_1[8], ll_backend__stack_opt__TypeInfo_38_38, ll_backend__stack_opt__V_25_25, ll_backend__stack_opt__PathInfos_14, &ll_backend__stack_opt__BenefitNodeSets0_19, &ll_backend__stack_opt__CostNodeSets0_20, &ll_backend__stack_opt__PathViaCellVars_21);
        }
#line 543 "stack_opt.m"
        {
#line 543 "stack_opt.m"
          ll_backend__stack_opt__succeeded = mercury__list__all_same_1_p_0(ll_backend__stack_opt__TypeInfo_38_38, ll_backend__stack_opt__PathViaCellVars_21);
        }
#line 543 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 544 "stack_opt.m"
          {
#line 544 "stack_opt.m"
            *ll_backend__stack_opt__BenefitNodeSets_16 = ll_backend__stack_opt__BenefitNodeSets0_19;
#line 545 "stack_opt.m"
            *ll_backend__stack_opt__CostNodeSets_17 = ll_backend__stack_opt__CostNodeSets0_20;
#line 548 "stack_opt.m"
            if ((ll_backend__stack_opt__PathViaCellVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 549 "stack_opt.m"
              {
#line 550 "stack_opt.m"
                {
#line 550 "stack_opt.m"
                  *ll_backend__stack_opt__ViaCellVars_18 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                }
#line 549 "stack_opt.m"
              }
#line 548 "stack_opt.m"
            else
#line 547 "stack_opt.m"
              {
#line 547 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_22_22;

#line 547 "stack_opt.m"
                *ll_backend__stack_opt__ViaCellVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__PathViaCellVars_21, (MR_Integer) 0)));
#line 547 "stack_opt.m"
                ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__PathViaCellVars_21, (MR_Integer) 1)));
#line 547 "stack_opt.m"
              }
#line 544 "stack_opt.m"
          }
#line 543 "stack_opt.m"
        else
#line 553 "stack_opt.m"
          {
#line 553 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CandidateArgVars1_23;
#line 553 "stack_opt.m"
            MR_Word ll_backend__stack_opt__FixpointLoop_24;
#line 554 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_26_26;
#line 554 "stack_opt.m"
            MR_Integer ll_backend__stack_opt__V_27_27;
#line 554 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_28_28;
#line 554 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_29_29;
#line 554 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_30_30;

#line 553 "stack_opt.m"
            {
#line 553 "stack_opt.m"
              ll_backend__stack_opt__CandidateArgVars1_23 = parse_tree__set_of_var__intersect_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__PathViaCellVars_21);
            }
#line 554 "stack_opt.m"
            ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 0)));
#line 554 "stack_opt.m"
            ll_backend__stack_opt__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 1)));
#line 554 "stack_opt.m"
            ll_backend__stack_opt__FixpointLoop_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 554 "stack_opt.m"
            ll_backend__stack_opt__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 554 "stack_opt.m"
            ll_backend__stack_opt__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 554 "stack_opt.m"
            ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 3)));
#line 560 "stack_opt.m"
#line 560 "stack_opt.m"
            switch (ll_backend__stack_opt__FixpointLoop_24) {
#line 560 "stack_opt.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 560 "stack_opt.m"
              case (MR_Integer) 0:
#line 556 "stack_opt.m"
                {
#line 557 "stack_opt.m"
                  *ll_backend__stack_opt__BenefitNodeSets_16 = ll_backend__stack_opt__BenefitNodeSets0_19;
#line 558 "stack_opt.m"
                  *ll_backend__stack_opt__CostNodeSets_17 = ll_backend__stack_opt__CostNodeSets0_20;
#line 559 "stack_opt.m"
                  *ll_backend__stack_opt__ViaCellVars_18 = ll_backend__stack_opt__CandidateArgVars1_23;
#line 556 "stack_opt.m"
                }
#line 560 "stack_opt.m"
                break;
#line 560 "stack_opt.m"
              case (MR_Integer) 1:
#line 562 "stack_opt.m"
                {
#line 562 "stack_opt.m"
                  /* direct tailcall eliminated */
#line 562 "stack_opt.m"
                  {
#line 562 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__CandidateArgVars0__tmp_copy_15 = ll_backend__stack_opt__CandidateArgVars1_23;

#line 562 "stack_opt.m"
                    ll_backend__stack_opt__CandidateArgVars0_15 = ll_backend__stack_opt__CandidateArgVars0__tmp_copy_15;
#line 562 "stack_opt.m"
                  }
#line 562 "stack_opt.m"
                  continue;
#line 562 "stack_opt.m"
                }
#line 560 "stack_opt.m"
                break;
#line 560 "stack_opt.m"
            }
#line 553 "stack_opt.m"
          }
#line 539 "stack_opt.m"
      }
#line 539 "stack_opt.m"
      break;
#line 539 "stack_opt.m"
    }
#line 532 "stack_opt.m"
}

#line 512 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0(
#line 512 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_8,
#line 512 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_9,
#line 512 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 512 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_12,
#line 512 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_13,
#line 512 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_14)
#line 512 "stack_opt.m"
{
#line 517 "stack_opt.m"
  {
#line 517 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 517 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_31_31;
#line 517 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_32_32;
#line 517 "stack_opt.m"
    MR_Word ll_backend__stack_opt__BenefitNodeSets_15;
#line 517 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CostNodeSets_16;
#line 517 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ViaCellVars0_17;
#line 517 "stack_opt.m"
    MR_Word ll_backend__stack_opt__BenefitNodes_18;
#line 517 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CostNodes_19;
#line 517 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__NumBenefitNodes_20;
#line 517 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__NumCostNodes_21;
#line 517 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__AllPathNodeRatio_22;
#line 525 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_26_26;
#line 525 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_27_27;
#line 525 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_28_28;
#line 525 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_29_29;
#line 525 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_30_30;
#line 526 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__V_23_23;
#line 526 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__V_24_24;

#line 518 "stack_opt.m"
    {
#line 518 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(ll_backend__stack_opt__CellVar_8, ll_backend__stack_opt__CellVarFlushedLater_9, ll_backend__stack_opt__StackOptParams_11, ll_backend__stack_opt__PathInfos_12, ll_backend__stack_opt__CandidateArgVars0_13, &ll_backend__stack_opt__BenefitNodeSets_15, &ll_backend__stack_opt__CostNodeSets_16, &ll_backend__stack_opt__ViaCellVars0_17);
    }
#line 4010 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_31_31 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 521 "stack_opt.m"
    {
#line 521 "stack_opt.m"
      ll_backend__stack_opt__BenefitNodes_18 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_31_31, ll_backend__stack_opt__BenefitNodeSets_15);
    }
#line 4017 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_32_32 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 522 "stack_opt.m"
    {
#line 522 "stack_opt.m"
      ll_backend__stack_opt__CostNodes_19 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_32_32, ll_backend__stack_opt__CostNodeSets_16);
    }
#line 523 "stack_opt.m"
    {
#line 523 "stack_opt.m"
      mercury__set__count_2_p_0(ll_backend__stack_opt__TypeCtorInfo_31_31, ll_backend__stack_opt__BenefitNodes_18, &ll_backend__stack_opt__NumBenefitNodes_20);
    }
#line 524 "stack_opt.m"
    {
#line 524 "stack_opt.m"
      mercury__set__count_2_p_0(ll_backend__stack_opt__TypeCtorInfo_32_32, ll_backend__stack_opt__CostNodes_19, &ll_backend__stack_opt__NumCostNodes_21);
    }
#line 525 "stack_opt.m"
    ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 0)));
#line 525 "stack_opt.m"
    ll_backend__stack_opt__AllPathNodeRatio_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 1)));
#line 525 "stack_opt.m"
    ll_backend__stack_opt__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 525 "stack_opt.m"
    ll_backend__stack_opt__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 525 "stack_opt.m"
    ll_backend__stack_opt__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 525 "stack_opt.m"
    ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 3)));
#line 526 "stack_opt.m"
    ll_backend__stack_opt__V_23_23 = (ll_backend__stack_opt__NumBenefitNodes_20 * (MR_Integer) 100);
#line 526 "stack_opt.m"
    ll_backend__stack_opt__V_24_24 = (ll_backend__stack_opt__NumCostNodes_21 * ll_backend__stack_opt__AllPathNodeRatio_22);
#line 526 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_23_23 >= ll_backend__stack_opt__V_24_24);
#line 526 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 527 "stack_opt.m"
      *ll_backend__stack_opt__ViaCellVars_14 = ll_backend__stack_opt__ViaCellVars0_17;
#line 526 "stack_opt.m"
    else
#line 529 "stack_opt.m"
      {
#line 529 "stack_opt.m"
        {
#line 529 "stack_opt.m"
          *ll_backend__stack_opt__ViaCellVars_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 529 "stack_opt.m"
      }
#line 517 "stack_opt.m"
  }
#line 512 "stack_opt.m"
}

#line 1157 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1157__1_3_p_0(
#line 1157 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_93)
#line 1157 "stack_opt.m"
{
#line 1157 "stack_opt.m"
  {
#line 1157 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1157 "stack_opt.m"
    {
#line 1157 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__HeadVar__1_93)));
    }
#line 1157 "stack_opt.m"
  }
#line 1157 "stack_opt.m"
}

#line 1154 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1154__1_3_p_0(
#line 1154 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_89)
#line 1154 "stack_opt.m"
{
#line 1154 "stack_opt.m"
  {
#line 1154 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1154 "stack_opt.m"
    {
#line 1154 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__HeadVar__1_89)));
    }
#line 1154 "stack_opt.m"
  }
#line 1154 "stack_opt.m"
}

#line 1131 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1131__1_2_p_0(
#line 1131 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_80,
#line 1131 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_81)
#line 1131 "stack_opt.m"
{
#line 1131 "stack_opt.m"
  {
#line 1131 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1131 "stack_opt.m"
    {
#line 1131 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_80, ll_backend__stack_opt__HeadVar__2_81);
    }
#line 1131 "stack_opt.m"
  }
#line 1131 "stack_opt.m"
}

#line 1130 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1130__1_2_p_0(
#line 1130 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_75,
#line 1130 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_76)
#line 1130 "stack_opt.m"
{
#line 1130 "stack_opt.m"
  {
#line 1130 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1130 "stack_opt.m"
    {
#line 1130 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_75, ll_backend__stack_opt__HeadVar__2_76);
    }
#line 1130 "stack_opt.m"
  }
#line 1130 "stack_opt.m"
}

#line 1112 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1112__1_2_p_0(
#line 1112 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_51,
#line 1112 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_52)
#line 1112 "stack_opt.m"
{
#line 1112 "stack_opt.m"
  {
#line 1112 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1112 "stack_opt.m"
    {
#line 1112 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_51, ll_backend__stack_opt__HeadVar__2_52);
    }
#line 1112 "stack_opt.m"
  }
#line 1112 "stack_opt.m"
}

#line 1099 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1099__1_2_p_0(
#line 1099 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_45,
#line 1099 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_46)
#line 1099 "stack_opt.m"
{
#line 1099 "stack_opt.m"
  {
#line 1099 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1099 "stack_opt.m"
    {
#line 1099 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_45, ll_backend__stack_opt__HeadVar__2_46);
    }
#line 1099 "stack_opt.m"
  }
#line 1099 "stack_opt.m"
}

#line 856 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__856__1_2_p_0(
#line 856 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_36,
#line 856 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_37)
#line 856 "stack_opt.m"
{
#line 856 "stack_opt.m"
  {
#line 856 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__1_36 == ll_backend__stack_opt__HeadVar__2_37);

#line 856 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 856 "stack_opt.m"
  }
#line 856 "stack_opt.m"
}

#line 852 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__852__1_2_p_0(
#line 852 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_42,
#line 852 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_43)
#line 852 "stack_opt.m"
{
#line 852 "stack_opt.m"
  {
#line 852 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__1_42 == ll_backend__stack_opt__HeadVar__2_43);

#line 852 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 852 "stack_opt.m"
  }
#line 852 "stack_opt.m"
}

#line 843 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__843__1_2_p_0(
#line 843 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_54,
#line 843 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_55)
#line 843 "stack_opt.m"
{
#line 843 "stack_opt.m"
  {
#line 843 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__1_54 == ll_backend__stack_opt__HeadVar__2_55);

#line 843 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 843 "stack_opt.m"
  }
#line 843 "stack_opt.m"
}

#line 705 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__close_path__705__1_1_p_0(
#line 705 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FirstSegment0_7)
#line 705 "stack_opt.m"
{
#line 705 "stack_opt.m"
  {
#line 705 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 705 "stack_opt.m"
    {
#line 705 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__FirstSegment0_7);
    }
#line 705 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 705 "stack_opt.m"
  }
#line 705 "stack_opt.m"
}

#line 347 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 347 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 347 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 347 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 347 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 347 "stack_opt.m"
{
#line 373 "stack_opt.m"
  {
#line 373 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 373 "stack_opt.m"
    {
#line 373 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
    }
#line 373 "stack_opt.m"
  }
#line 347 "stack_opt.m"
}

#line 346 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 346 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 346 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 346 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 346 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 346 "stack_opt.m"
{
#line 364 "stack_opt.m"
  {
#line 364 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 364 "stack_opt.m"
    {
#line 364 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
    }
#line 364 "stack_opt.m"
  }
#line 346 "stack_opt.m"
}

#line 345 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 345 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 345 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 345 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 345 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 345 "stack_opt.m"
{
#line 359 "stack_opt.m"
  {
#line 359 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 359 "stack_opt.m"
    {
#line 359 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
    }
#line 359 "stack_opt.m"
  }
#line 345 "stack_opt.m"
}

#line 344 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 344 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 344 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 344 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 344 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 344 "stack_opt.m"
{
#line 354 "stack_opt.m"
  {
#line 354 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 354 "stack_opt.m"
    {
#line 354 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
    }
#line 354 "stack_opt.m"
  }
#line 344 "stack_opt.m"
}

#line 384 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(
#line 384 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 384 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 384 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 384 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__4_4,
#line 384 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 384 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__6_6,
#line 384 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__7_7,
#line 384 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__8_8)
#line 384 "stack_opt.m"
{
#line 384 "stack_opt.m"
  {
#line 384 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 384 "stack_opt.m"
    {
#line 384 "stack_opt.m"
      ll_backend__stack_opt__use_cell_8_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__HeadVar__2_2, ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4, ll_backend__stack_opt__HeadVar__5_5, ll_backend__stack_opt__HeadVar__6_6, ll_backend__stack_opt__HeadVar__7_7, ll_backend__stack_opt__HeadVar__8_8);
    }
#line 384 "stack_opt.m"
  }
#line 384 "stack_opt.m"
}

#line 153 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0(
#line 153 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 153 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 153 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 153 "stack_opt.m"
{
#line 153 "stack_opt.m"
  {
#line 153 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 153 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_21 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 153 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_22 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 153 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_21 == ll_backend__stack_opt__CastY_22);
#line 153 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 4471 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "stack_opt.m"
    else
#line 153 "stack_opt.m"
      {
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 153 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 153 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16;

#line 153 "stack_opt.m"
        {
#line 153 "stack_opt.m"
          backend_libs__matching____Compare____matching_params_0_0(&ll_backend__stack_opt__V_16_16, ll_backend__stack_opt__V_4_4, ll_backend__stack_opt__V_10_10);
        }
#line 4509 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_16_16 == (MR_Integer) 0);
#line 153 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 153 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 153 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_16_16;
#line 153 "stack_opt.m"
        else
#line 153 "stack_opt.m"
          {
#line 153 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_17_17;

#line 153 "stack_opt.m"
            {
#line 153 "stack_opt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_17_17, ll_backend__stack_opt__V_5_5, ll_backend__stack_opt__V_11_11);
            }
#line 4529 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_17_17 == (MR_Integer) 0);
#line 153 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 153 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 153 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_17_17;
#line 153 "stack_opt.m"
            else
#line 153 "stack_opt.m"
              {
#line 153 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_18_18;
#line 153 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_29_29 = (MR_Integer) ll_backend__stack_opt__V_6_6;
#line 153 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_30_30 = (MR_Integer) ll_backend__stack_opt__V_12_12;

#line 153 "stack_opt.m"
                {
#line 153 "stack_opt.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_18_18, ll_backend__stack_opt__V_29_29, ll_backend__stack_opt__V_30_30);
                }
#line 4553 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_18_18 == (MR_Integer) 0);
#line 153 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 153 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 153 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_18_18;
#line 153 "stack_opt.m"
                else
#line 153 "stack_opt.m"
                  {
#line 153 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_19_19;
#line 153 "stack_opt.m"
                    MR_Integer ll_backend__stack_opt__V_31_31 = (MR_Integer) ll_backend__stack_opt__V_7_7;
#line 153 "stack_opt.m"
                    MR_Integer ll_backend__stack_opt__V_32_32 = (MR_Integer) ll_backend__stack_opt__V_13_13;

#line 153 "stack_opt.m"
                    {
#line 153 "stack_opt.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_19_19, ll_backend__stack_opt__V_31_31, ll_backend__stack_opt__V_32_32);
                    }
#line 4577 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_19_19 == (MR_Integer) 0);
#line 153 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 153 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 153 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_19_19;
#line 153 "stack_opt.m"
                    else
#line 153 "stack_opt.m"
                      {
#line 153 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_20_20;
#line 153 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_33_33 = (MR_Integer) ll_backend__stack_opt__V_8_8;
#line 153 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_34_34 = (MR_Integer) ll_backend__stack_opt__V_14_14;

#line 153 "stack_opt.m"
                        {
#line 153 "stack_opt.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_20_20, ll_backend__stack_opt__V_33_33, ll_backend__stack_opt__V_34_34);
                        }
#line 4601 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_20_20 == (MR_Integer) 0);
#line 153 "stack_opt.m"
                        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 153 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 153 "stack_opt.m"
                          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_20_20;
#line 153 "stack_opt.m"
                        else
#line 153 "stack_opt.m"
                          {
#line 153 "stack_opt.m"
                            {
#line 153 "stack_opt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
                            }
#line 153 "stack_opt.m"
                          }
#line 153 "stack_opt.m"
                      }
#line 153 "stack_opt.m"
                  }
#line 153 "stack_opt.m"
              }
#line 153 "stack_opt.m"
          }
#line 153 "stack_opt.m"
      }
#line 153 "stack_opt.m"
  }
#line 153 "stack_opt.m"
}

#line 153 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0(
#line 153 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 153 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 153 "stack_opt.m"
{
#line 153 "stack_opt.m"
  {
#line 153 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 153 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_15 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 153 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_16 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 153 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_15 == ll_backend__stack_opt__CastY_16);
#line 153 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 153 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 153 "stack_opt.m"
    else
#line 153 "stack_opt.m"
      {
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_18_18;
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 153 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 153 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));

#line 4690 "ll_backend.stack_opt.c"
        {
#line 4692 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = backend_libs__matching____Unify____matching_params_0_0(ll_backend__stack_opt__V_3_3, ll_backend__stack_opt__V_9_9);
        }
#line 153 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 153 "stack_opt.m"
          {
#line 4699 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_4_4 == ll_backend__stack_opt__V_10_10);
#line 153 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 153 "stack_opt.m"
              {
#line 4705 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_5_5 == ll_backend__stack_opt__V_11_11);
#line 153 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 153 "stack_opt.m"
                  {
#line 4711 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_6_6 == ll_backend__stack_opt__V_12_12);
#line 153 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 153 "stack_opt.m"
                      {
#line 4717 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_7_7 == ll_backend__stack_opt__V_13_13);
#line 153 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 153 "stack_opt.m"
                          {
#line 4723 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__TypeInfo_18_18 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 4725 "ll_backend.stack_opt.c"
                            {
#line 4727 "ll_backend.stack_opt.c"
                              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_18_18, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                            }
#line 153 "stack_opt.m"
                          }
#line 153 "stack_opt.m"
                      }
#line 153 "stack_opt.m"
                  }
#line 153 "stack_opt.m"
              }
#line 153 "stack_opt.m"
          }
#line 153 "stack_opt.m"
      }
#line 153 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 153 "stack_opt.m"
  }
#line 153 "stack_opt.m"
}

#line 176 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0(
#line 176 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 176 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 176 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 176 "stack_opt.m"
{
#line 176 "stack_opt.m"
  {
#line 176 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 176 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_12 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 176 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_13 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 176 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_12 == ll_backend__stack_opt__CastY_13);
#line 176 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 4773 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 176 "stack_opt.m"
    else
#line 176 "stack_opt.m"
      {
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10;

#line 176 "stack_opt.m"
        {
#line 176 "stack_opt.m"
          ll_backend__stack_opt____Compare____stack_opt_params_0_0(&ll_backend__stack_opt__V_10_10, ll_backend__stack_opt__V_4_4, ll_backend__stack_opt__V_7_7);
        }
#line 4799 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_10_10 == (MR_Integer) 0);
#line 176 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 176 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 176 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_10_10;
#line 176 "stack_opt.m"
        else
#line 176 "stack_opt.m"
          {
#line 176 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_11_11;

#line 176 "stack_opt.m"
            {
#line 176 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_2[1], &ll_backend__stack_opt__V_11_11, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
            }
#line 4819 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_11_11 == (MR_Integer) 0);
#line 176 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 176 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 176 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_11_11;
#line 176 "stack_opt.m"
            else
#line 176 "stack_opt.m"
              {
#line 176 "stack_opt.m"
                {
#line 176 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[14], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
                }
#line 176 "stack_opt.m"
              }
#line 176 "stack_opt.m"
          }
#line 176 "stack_opt.m"
      }
#line 176 "stack_opt.m"
  }
#line 176 "stack_opt.m"
}

#line 176 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0(
#line 176 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 176 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 176 "stack_opt.m"
{
#line 176 "stack_opt.m"
  {
#line 176 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 176 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_9 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 176 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_10 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 176 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_9 == ll_backend__stack_opt__CastY_10);
#line 176 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 176 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 176 "stack_opt.m"
    else
#line 176 "stack_opt.m"
      {
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_11_11;
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_12_12;
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));

#line 4892 "ll_backend.stack_opt.c"
        {
#line 4894 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____stack_opt_params_0_0(ll_backend__stack_opt__V_3_3, ll_backend__stack_opt__V_6_6);
        }
#line 176 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 176 "stack_opt.m"
          {
#line 4901 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_11_11 = (MR_Word) &ll_backend__stack_opt_scalar_common_2[1];
#line 4903 "ll_backend.stack_opt.c"
            {
#line 4905 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_11_11, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_7_7)));
            }
#line 176 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 176 "stack_opt.m"
              {
#line 4912 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_12_12 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[14];
#line 4914 "ll_backend.stack_opt.c"
                {
#line 4916 "ll_backend.stack_opt.c"
                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_12_12, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
                }
#line 176 "stack_opt.m"
              }
#line 176 "stack_opt.m"
          }
#line 176 "stack_opt.m"
      }
#line 176 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 176 "stack_opt.m"
  }
#line 176 "stack_opt.m"
}

#line 664 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0(
#line 664 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 664 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 664 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 664 "stack_opt.m"
{
#line 664 "stack_opt.m"
  {
#line 664 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 664 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_21 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 664 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_22 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 664 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_21 == ll_backend__stack_opt__CastY_22);
#line 664 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 4956 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 664 "stack_opt.m"
    else
#line 664 "stack_opt.m"
      {
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 4)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 5)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16;
#line 664 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_29_29 = (MR_Integer) ll_backend__stack_opt__V_4_4;
#line 664 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_30_30 = (MR_Integer) ll_backend__stack_opt__V_10_10;

#line 664 "stack_opt.m"
        {
#line 664 "stack_opt.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_16_16, ll_backend__stack_opt__V_29_29, ll_backend__stack_opt__V_30_30);
        }
#line 4998 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_16_16 == (MR_Integer) 0);
#line 664 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 664 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 664 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_16_16;
#line 664 "stack_opt.m"
        else
#line 664 "stack_opt.m"
          {
#line 664 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_17_17;

#line 664 "stack_opt.m"
            {
#line 664 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_17_17, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_11_11)));
            }
#line 5018 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_17_17 == (MR_Integer) 0);
#line 664 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 664 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 664 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_17_17;
#line 664 "stack_opt.m"
            else
#line 664 "stack_opt.m"
              {
#line 664 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_18_18;

#line 664 "stack_opt.m"
                {
#line 664 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_18_18, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                }
#line 5038 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_18_18 == (MR_Integer) 0);
#line 664 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 664 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 664 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_18_18;
#line 664 "stack_opt.m"
                else
#line 664 "stack_opt.m"
                  {
#line 664 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_19_19;

#line 664 "stack_opt.m"
                    {
#line 664 "stack_opt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[5], &ll_backend__stack_opt__V_19_19, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
                    }
#line 5058 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_19_19 == (MR_Integer) 0);
#line 664 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 664 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 664 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_19_19;
#line 664 "stack_opt.m"
                    else
#line 664 "stack_opt.m"
                      {
#line 664 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_20_20;

#line 664 "stack_opt.m"
                        {
#line 664 "stack_opt.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], &ll_backend__stack_opt__V_20_20, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                        }
#line 5078 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_20_20 == (MR_Integer) 0);
#line 664 "stack_opt.m"
                        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 664 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 664 "stack_opt.m"
                          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_20_20;
#line 664 "stack_opt.m"
                        else
#line 664 "stack_opt.m"
                          {
#line 664 "stack_opt.m"
                            {
#line 664 "stack_opt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
                            }
#line 664 "stack_opt.m"
                          }
#line 664 "stack_opt.m"
                      }
#line 664 "stack_opt.m"
                  }
#line 664 "stack_opt.m"
              }
#line 664 "stack_opt.m"
          }
#line 664 "stack_opt.m"
      }
#line 664 "stack_opt.m"
  }
#line 664 "stack_opt.m"
}

#line 664 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0(
#line 664 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 664 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 664 "stack_opt.m"
{
#line 664 "stack_opt.m"
  {
#line 664 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 664 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_15 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 664 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_16 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 664 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_15 == ll_backend__stack_opt__CastY_16);
#line 664 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 664 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 664 "stack_opt.m"
    else
#line 664 "stack_opt.m"
      {
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_17_17;
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_18_18;
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_19_19;
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_20_20;
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_21_21;
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 4)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 5)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 664 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));

#line 5175 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_3_3 == ll_backend__stack_opt__V_9_9);
#line 664 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 664 "stack_opt.m"
          {
#line 5181 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_17_17 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 5183 "ll_backend.stack_opt.c"
            {
#line 5185 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_17_17, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_10_10)));
            }
#line 664 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 664 "stack_opt.m"
              {
#line 5192 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_18_18 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 5194 "ll_backend.stack_opt.c"
                {
#line 5196 "ll_backend.stack_opt.c"
                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_18_18, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_11_11)));
                }
#line 664 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 664 "stack_opt.m"
                  {
#line 5203 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__TypeInfo_19_19 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[5];
#line 5205 "ll_backend.stack_opt.c"
                    {
#line 5207 "ll_backend.stack_opt.c"
                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_19_19, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                    }
#line 664 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 664 "stack_opt.m"
                      {
#line 5214 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__TypeInfo_20_20 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 5216 "ll_backend.stack_opt.c"
                        {
#line 5218 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_20_20, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
                        }
#line 664 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 664 "stack_opt.m"
                          {
#line 5225 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__TypeInfo_21_21 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 5227 "ll_backend.stack_opt.c"
                            {
#line 5229 "ll_backend.stack_opt.c"
                              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_21_21, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                            }
#line 664 "stack_opt.m"
                          }
#line 664 "stack_opt.m"
                      }
#line 664 "stack_opt.m"
                  }
#line 664 "stack_opt.m"
              }
#line 664 "stack_opt.m"
          }
#line 664 "stack_opt.m"
      }
#line 664 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 664 "stack_opt.m"
  }
#line 664 "stack_opt.m"
}

#line 143 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(
#line 143 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 143 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 143 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 143 "stack_opt.m"
{
#line 143 "stack_opt.m"
  {
#line 143 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 143 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_6 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 143 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_7 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 143 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_6 == ll_backend__stack_opt__CastY_7);
#line 143 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5275 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 143 "stack_opt.m"
    else
#line 143 "stack_opt.m"
      {
#line 143 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = (MR_Word) ll_backend__stack_opt__HeadVar__2_2;
#line 143 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = (MR_Word) ll_backend__stack_opt__HeadVar__3_3;

#line 143 "stack_opt.m"
        {
#line 143 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_5_5)));
        }
#line 143 "stack_opt.m"
      }
#line 143 "stack_opt.m"
  }
#line 143 "stack_opt.m"
}

#line 143 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(
#line 143 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 143 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 143 "stack_opt.m"
{
#line 143 "stack_opt.m"
  {
#line 143 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 143 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_5 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 143 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_6 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 143 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_5 == ll_backend__stack_opt__CastY_6);
#line 143 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 143 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 143 "stack_opt.m"
    else
#line 143 "stack_opt.m"
      {
#line 143 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = (MR_Word) ll_backend__stack_opt__HeadVar__1_1;
#line 143 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = (MR_Word) ll_backend__stack_opt__HeadVar__2_2;

#line 5331 "ll_backend.stack_opt.c"
        {
#line 5333 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_4_4)));
        }
#line 143 "stack_opt.m"
      }
#line 143 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 143 "stack_opt.m"
  }
#line 143 "stack_opt.m"
}

#line 163 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0(
#line 163 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 163 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 163 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 163 "stack_opt.m"
{
#line 163 "stack_opt.m"
  {
#line 163 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 163 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_30 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 163 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_31 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 163 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_30 == ll_backend__stack_opt__CastY_31);
#line 163 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5369 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 163 "stack_opt.m"
    else
#line 163 "stack_opt.m"
      {
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 6)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 7)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 8)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 4)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 5)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 6)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 7)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 8)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_22_22;

#line 163 "stack_opt.m"
        {
#line 163 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[0], &ll_backend__stack_opt__V_22_22, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
        }
#line 5419 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_22_22 == (MR_Integer) 0);
#line 163 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 163 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_22_22;
#line 163 "stack_opt.m"
        else
#line 163 "stack_opt.m"
          {
#line 163 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_23_23;

#line 163 "stack_opt.m"
            {
#line 163 "stack_opt.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&ll_backend__stack_opt__V_23_23, ll_backend__stack_opt__V_5_5, ll_backend__stack_opt__V_14_14);
            }
#line 5439 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_23_23 == (MR_Integer) 0);
#line 163 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 163 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_23_23;
#line 163 "stack_opt.m"
            else
#line 163 "stack_opt.m"
              {
#line 163 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_24_24;

#line 163 "stack_opt.m"
                {
#line 163 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[13], &ll_backend__stack_opt__V_24_24, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
                }
#line 5459 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_24_24 == (MR_Integer) 0);
#line 163 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 163 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_24_24;
#line 163 "stack_opt.m"
                else
#line 163 "stack_opt.m"
                  {
#line 163 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_25_25;

#line 163 "stack_opt.m"
                    {
#line 163 "stack_opt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_25_25, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_16_16)));
                    }
#line 5479 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_25_25 == (MR_Integer) 0);
#line 163 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 163 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_25_25;
#line 163 "stack_opt.m"
                    else
#line 163 "stack_opt.m"
                      {
#line 163 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_26_26;
#line 163 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_41_41 = (MR_Integer) ll_backend__stack_opt__V_8_8;
#line 163 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_42_42 = (MR_Integer) ll_backend__stack_opt__V_17_17;

#line 163 "stack_opt.m"
                        {
#line 163 "stack_opt.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_26_26, ll_backend__stack_opt__V_41_41, ll_backend__stack_opt__V_42_42);
                        }
#line 5503 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_26_26 == (MR_Integer) 0);
#line 163 "stack_opt.m"
                        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 163 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
                          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_26_26;
#line 163 "stack_opt.m"
                        else
#line 163 "stack_opt.m"
                          {
#line 163 "stack_opt.m"
                            MR_Word ll_backend__stack_opt__V_27_27;

#line 163 "stack_opt.m"
                            {
#line 163 "stack_opt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], &ll_backend__stack_opt__V_27_27, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_18_18)));
                            }
#line 5523 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_27_27 == (MR_Integer) 0);
#line 163 "stack_opt.m"
                            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 163 "stack_opt.m"
                            if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
                              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_27_27;
#line 163 "stack_opt.m"
                            else
#line 163 "stack_opt.m"
                              {
#line 163 "stack_opt.m"
                                MR_Word ll_backend__stack_opt__V_28_28;

#line 163 "stack_opt.m"
                                {
#line 163 "stack_opt.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], &ll_backend__stack_opt__V_28_28, ((MR_Box) (ll_backend__stack_opt__V_10_10)), ((MR_Box) (ll_backend__stack_opt__V_19_19)));
                                }
#line 5543 "ll_backend.stack_opt.c"
                                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_28_28 == (MR_Integer) 0);
#line 163 "stack_opt.m"
                                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 163 "stack_opt.m"
                                if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
                                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_28_28;
#line 163 "stack_opt.m"
                                else
#line 163 "stack_opt.m"
                                  {
#line 163 "stack_opt.m"
                                    MR_Word ll_backend__stack_opt__V_29_29;

#line 163 "stack_opt.m"
                                    {
#line 163 "stack_opt.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], &ll_backend__stack_opt__V_29_29, ((MR_Box) (ll_backend__stack_opt__V_11_11)), ((MR_Box) (ll_backend__stack_opt__V_20_20)));
                                    }
#line 5563 "ll_backend.stack_opt.c"
                                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_29_29 == (MR_Integer) 0);
#line 163 "stack_opt.m"
                                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 163 "stack_opt.m"
                                    if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
                                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_29_29;
#line 163 "stack_opt.m"
                                    else
#line 163 "stack_opt.m"
                                      {
#line 163 "stack_opt.m"
                                        {
#line 163 "stack_opt.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_12_12)), ((MR_Box) (ll_backend__stack_opt__V_21_21)));
                                        }
#line 163 "stack_opt.m"
                                      }
#line 163 "stack_opt.m"
                                  }
#line 163 "stack_opt.m"
                              }
#line 163 "stack_opt.m"
                          }
#line 163 "stack_opt.m"
                      }
#line 163 "stack_opt.m"
                  }
#line 163 "stack_opt.m"
              }
#line 163 "stack_opt.m"
          }
#line 163 "stack_opt.m"
      }
#line 163 "stack_opt.m"
  }
#line 163 "stack_opt.m"
}

#line 163 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0(
#line 163 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 163 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 163 "stack_opt.m"
{
#line 163 "stack_opt.m"
  {
#line 163 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 163 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_21 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 163 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_22 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 163 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_21 == ll_backend__stack_opt__CastY_22);
#line 163 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 163 "stack_opt.m"
    else
#line 163 "stack_opt.m"
      {
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_25_25;
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_26_26;
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_28_28;
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_29_29;
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_30_30;
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_31_31;
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 4)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 5)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 6)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 7)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 8)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 6)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 7)));
#line 163 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 8)));
#line 163 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_32_32;
#line 163 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_33_33;

#line 5684 "ll_backend.stack_opt.c"
        {
#line 5686 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[0], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
        }
#line 163 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
          {
#line 5693 "ll_backend.stack_opt.c"
            {
#line 5695 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ll_backend__stack_opt__V_4_4, ll_backend__stack_opt__V_13_13);
            }
#line 163 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
              {
#line 5702 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_25_25 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[13];
#line 5704 "ll_backend.stack_opt.c"
                {
#line 5706 "ll_backend.stack_opt.c"
                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_25_25, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                }
#line 163 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
                  {
#line 5713 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__TypeInfo_26_26 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 5715 "ll_backend.stack_opt.c"
                    {
#line 5717 "ll_backend.stack_opt.c"
                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_26_26, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
                    }
#line 163 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
                      {
#line 5724 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__V_32_32 = (MR_Integer) ll_backend__stack_opt__V_7_7;
#line 5726 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__V_33_33 = (MR_Integer) ll_backend__stack_opt__V_16_16;
#line 5728 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_32_32 == ll_backend__stack_opt__V_33_33);
#line 163 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
                          {
#line 5734 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__TypeInfo_28_28 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 5736 "ll_backend.stack_opt.c"
                            {
#line 5738 "ll_backend.stack_opt.c"
                              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_28_28, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_17_17)));
                            }
#line 163 "stack_opt.m"
                            if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
                              {
#line 5745 "ll_backend.stack_opt.c"
                                ll_backend__stack_opt__TypeInfo_29_29 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 5747 "ll_backend.stack_opt.c"
                                {
#line 5749 "ll_backend.stack_opt.c"
                                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_29_29, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_18_18)));
                                }
#line 163 "stack_opt.m"
                                if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
                                  {
#line 5756 "ll_backend.stack_opt.c"
                                    ll_backend__stack_opt__TypeInfo_30_30 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 5758 "ll_backend.stack_opt.c"
                                    {
#line 5760 "ll_backend.stack_opt.c"
                                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_30_30, ((MR_Box) (ll_backend__stack_opt__V_10_10)), ((MR_Box) (ll_backend__stack_opt__V_19_19)));
                                    }
#line 163 "stack_opt.m"
                                    if (ll_backend__stack_opt__succeeded)
#line 163 "stack_opt.m"
                                      {
#line 5767 "ll_backend.stack_opt.c"
                                        ll_backend__stack_opt__TypeInfo_31_31 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 5769 "ll_backend.stack_opt.c"
                                        {
#line 5771 "ll_backend.stack_opt.c"
                                          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_31_31, ((MR_Box) (ll_backend__stack_opt__V_11_11)), ((MR_Box) (ll_backend__stack_opt__V_20_20)));
                                        }
#line 163 "stack_opt.m"
                                      }
#line 163 "stack_opt.m"
                                  }
#line 163 "stack_opt.m"
                              }
#line 163 "stack_opt.m"
                          }
#line 163 "stack_opt.m"
                      }
#line 163 "stack_opt.m"
                  }
#line 163 "stack_opt.m"
              }
#line 163 "stack_opt.m"
          }
#line 163 "stack_opt.m"
      }
#line 163 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 163 "stack_opt.m"
  }
#line 163 "stack_opt.m"
}

#line 387 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0(
#line 387 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 387 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 387 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 387 "stack_opt.m"
{
#line 387 "stack_opt.m"
  {
#line 387 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 387 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_9 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 387 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_10 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 387 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_9 == ll_backend__stack_opt__CastY_10);
#line 387 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5823 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 387 "stack_opt.m"
    else
#line 387 "stack_opt.m"
      {
#line 387 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 387 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 387 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 387 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 387 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8;

#line 387 "stack_opt.m"
        {
#line 387 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_8_8, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_6_6)));
        }
#line 5845 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_8_8 == (MR_Integer) 0);
#line 387 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 387 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 387 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_8_8;
#line 387 "stack_opt.m"
        else
#line 387 "stack_opt.m"
          {
#line 387 "stack_opt.m"
            {
#line 387 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[5], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_7_7)));
            }
#line 387 "stack_opt.m"
          }
#line 387 "stack_opt.m"
      }
#line 387 "stack_opt.m"
  }
#line 387 "stack_opt.m"
}

#line 387 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0(
#line 387 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 387 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 387 "stack_opt.m"
{
#line 387 "stack_opt.m"
  {
#line 387 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 387 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_7 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 387 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_8 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 387 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_7 == ll_backend__stack_opt__CastY_8);
#line 387 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 387 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 387 "stack_opt.m"
    else
#line 387 "stack_opt.m"
      {
#line 387 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_10_10;
#line 387 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 387 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 387 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 387 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));

#line 5910 "ll_backend.stack_opt.c"
        {
#line 5912 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_5_5)));
        }
#line 387 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 387 "stack_opt.m"
          {
#line 5919 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_10_10 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[5];
#line 5921 "ll_backend.stack_opt.c"
            {
#line 5923 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_10_10, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_6_6)));
            }
#line 387 "stack_opt.m"
          }
#line 387 "stack_opt.m"
      }
#line 387 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 387 "stack_opt.m"
  }
#line 387 "stack_opt.m"
}

#line 398 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0(
#line 398 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 398 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 398 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 398 "stack_opt.m"
{
#line 398 "stack_opt.m"
  {
#line 398 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 398 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_18 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 398 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_19 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 398 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_18 == ll_backend__stack_opt__CastY_19);
#line 398 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5961 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 398 "stack_opt.m"
    else
#line 398 "stack_opt.m"
      {
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 4)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14;

#line 398 "stack_opt.m"
        {
#line 398 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[12], &ll_backend__stack_opt__V_14_14, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
        }
#line 5995 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_14_14 == (MR_Integer) 0);
#line 398 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 398 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 398 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_14_14;
#line 398 "stack_opt.m"
        else
#line 398 "stack_opt.m"
          {
#line 398 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_15_15;

#line 398 "stack_opt.m"
            {
#line 398 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_15_15, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_10_10)));
            }
#line 6015 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_15_15 == (MR_Integer) 0);
#line 398 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 398 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 398 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_15_15;
#line 398 "stack_opt.m"
            else
#line 398 "stack_opt.m"
              {
#line 398 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_16_16;
#line 398 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_25_25 = (MR_Integer) ll_backend__stack_opt__V_6_6;
#line 398 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_26_26 = (MR_Integer) ll_backend__stack_opt__V_11_11;

#line 398 "stack_opt.m"
                {
#line 398 "stack_opt.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_16_16, ll_backend__stack_opt__V_25_25, ll_backend__stack_opt__V_26_26);
                }
#line 6039 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_16_16 == (MR_Integer) 0);
#line 398 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 398 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 398 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_16_16;
#line 398 "stack_opt.m"
                else
#line 398 "stack_opt.m"
                  {
#line 398 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_17_17;

#line 398 "stack_opt.m"
                    {
#line 398 "stack_opt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], &ll_backend__stack_opt__V_17_17, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                    }
#line 6059 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_17_17 == (MR_Integer) 0);
#line 398 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 398 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 398 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_17_17;
#line 398 "stack_opt.m"
                    else
#line 398 "stack_opt.m"
                      {
#line 398 "stack_opt.m"
                        {
#line 398 "stack_opt.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
                        }
#line 398 "stack_opt.m"
                      }
#line 398 "stack_opt.m"
                  }
#line 398 "stack_opt.m"
              }
#line 398 "stack_opt.m"
          }
#line 398 "stack_opt.m"
      }
#line 398 "stack_opt.m"
  }
#line 398 "stack_opt.m"
}

#line 398 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0(
#line 398 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 398 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 398 "stack_opt.m"
{
#line 398 "stack_opt.m"
  {
#line 398 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 398 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_13 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 398 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_14 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 398 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_13 == ll_backend__stack_opt__CastY_14);
#line 398 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 398 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 398 "stack_opt.m"
    else
#line 398 "stack_opt.m"
      {
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_16_16;
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_17_17;
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_18_18;
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 4)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 398 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));

#line 6146 "ll_backend.stack_opt.c"
        {
#line 6148 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[12], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
        }
#line 398 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 398 "stack_opt.m"
          {
#line 6155 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_16_16 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 6157 "ll_backend.stack_opt.c"
            {
#line 6159 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_16_16, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
            }
#line 398 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 398 "stack_opt.m"
              {
#line 6166 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_5_5 == ll_backend__stack_opt__V_10_10);
#line 398 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 398 "stack_opt.m"
                  {
#line 6172 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__TypeInfo_17_17 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 6174 "ll_backend.stack_opt.c"
                    {
#line 6176 "ll_backend.stack_opt.c"
                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_17_17, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_11_11)));
                    }
#line 398 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 398 "stack_opt.m"
                      {
#line 6183 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__TypeInfo_18_18 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 6185 "ll_backend.stack_opt.c"
                        {
#line 6187 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_18_18, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                        }
#line 398 "stack_opt.m"
                      }
#line 398 "stack_opt.m"
                  }
#line 398 "stack_opt.m"
              }
#line 398 "stack_opt.m"
          }
#line 398 "stack_opt.m"
      }
#line 398 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 398 "stack_opt.m"
  }
#line 398 "stack_opt.m"
}

#line 660 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(
#line 660 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 660 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 660 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 660 "stack_opt.m"
{
#line 660 "stack_opt.m"
  {
#line 660 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 660 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__Cast_HeadVar1_4 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 660 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__Cast_HeadVar2_5 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 660 "stack_opt.m"
    {
#line 660 "stack_opt.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__Cast_HeadVar1_4, ll_backend__stack_opt__Cast_HeadVar2_5);
    }
#line 660 "stack_opt.m"
  }
#line 660 "stack_opt.m"
}

#line 660 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(
#line 660 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_1,
#line 660 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 660 "stack_opt.m"
{
#line 6246 "ll_backend.stack_opt.c"
  {
#line 6248 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__2_1 == ll_backend__stack_opt__HeadVar__2_2);

#line 6251 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 6253 "ll_backend.stack_opt.c"
  }
#line 660 "stack_opt.m"
}

#line 674 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0(
#line 674 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 674 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 674 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 674 "stack_opt.m"
{
#line 674 "stack_opt.m"
  {
#line 674 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 674 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_12 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 674 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_13 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 674 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_12 == ll_backend__stack_opt__CastY_13);
#line 674 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 6282 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 674 "stack_opt.m"
    else
#line 674 "stack_opt.m"
      {
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10;

#line 674 "stack_opt.m"
        {
#line 674 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[11], &ll_backend__stack_opt__V_10_10, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_7_7)));
        }
#line 6308 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_10_10 == (MR_Integer) 0);
#line 674 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 674 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 674 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_10_10;
#line 674 "stack_opt.m"
        else
#line 674 "stack_opt.m"
          {
#line 674 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_11_11;
#line 674 "stack_opt.m"
            MR_Integer ll_backend__stack_opt__V_17_17 = (MR_Integer) ll_backend__stack_opt__V_5_5;
#line 674 "stack_opt.m"
            MR_Integer ll_backend__stack_opt__V_18_18 = (MR_Integer) ll_backend__stack_opt__V_8_8;

#line 674 "stack_opt.m"
            {
#line 674 "stack_opt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_11_11, ll_backend__stack_opt__V_17_17, ll_backend__stack_opt__V_18_18);
            }
#line 6332 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_11_11 == (MR_Integer) 0);
#line 674 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 674 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 674 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_11_11;
#line 674 "stack_opt.m"
            else
#line 674 "stack_opt.m"
              {
#line 674 "stack_opt.m"
                {
#line 674 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
                }
#line 674 "stack_opt.m"
              }
#line 674 "stack_opt.m"
          }
#line 674 "stack_opt.m"
      }
#line 674 "stack_opt.m"
  }
#line 674 "stack_opt.m"
}

#line 674 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0(
#line 674 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 674 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 674 "stack_opt.m"
{
#line 674 "stack_opt.m"
  {
#line 674 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 674 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_9 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 674 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_10 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 674 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_9 == ll_backend__stack_opt__CastY_10);
#line 674 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 674 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 674 "stack_opt.m"
    else
#line 674 "stack_opt.m"
      {
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_12_12;
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 674 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));

#line 6403 "ll_backend.stack_opt.c"
        {
#line 6405 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[11], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_6_6)));
        }
#line 674 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 674 "stack_opt.m"
          {
#line 6412 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_4_4 == ll_backend__stack_opt__V_7_7);
#line 674 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 674 "stack_opt.m"
              {
#line 6418 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_12_12 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 6420 "ll_backend.stack_opt.c"
                {
#line 6422 "ll_backend.stack_opt.c"
                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_12_12, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
                }
#line 674 "stack_opt.m"
              }
#line 674 "stack_opt.m"
          }
#line 674 "stack_opt.m"
      }
#line 674 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 674 "stack_opt.m"
  }
#line 674 "stack_opt.m"
}

#line 1157 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_6(
#line 1157 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1157 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1157 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1157 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1157 "stack_opt.m"
{
#line 1157 "stack_opt.m"
  {
#line 1157 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1157 "stack_opt.m"
    {
#line 1157 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1157__1_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1157 "stack_opt.m"
  }
#line 1157 "stack_opt.m"
}

#line 1154 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_5(
#line 1154 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1154 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1154 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1154 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1154 "stack_opt.m"
{
#line 1154 "stack_opt.m"
  {
#line 1154 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1154 "stack_opt.m"
    {
#line 1154 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1154__1_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1154 "stack_opt.m"
  }
#line 1154 "stack_opt.m"
}

#line 1148 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_4(
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1148 "stack_opt.m"
{
#line 1148 "stack_opt.m"
  {
#line 1148 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1148 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1148 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv3_HeadVar__2_2;

#line 1148 "stack_opt.m"
    {
#line 1148 "stack_opt.m"
      ll_backend__stack_opt__conv3_HeadVar__2_2 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1148 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv3_HeadVar__2_2));
#line 1148 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1148 "stack_opt.m"
  }
#line 1148 "stack_opt.m"
}

#line 1143 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_3(
#line 1143 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1143 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1143 "stack_opt.m"
{
#line 1143 "stack_opt.m"
  {
#line 1143 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1143 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1143 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv2_HeadVar__2_2;

#line 1143 "stack_opt.m"
    {
#line 1143 "stack_opt.m"
      ll_backend__stack_opt__conv2_HeadVar__2_2 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1143 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv2_HeadVar__2_2));
#line 1143 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1143 "stack_opt.m"
  }
#line 1143 "stack_opt.m"
}

#line 1131 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_2(
#line 1131 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1131 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1131 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1131 "stack_opt.m"
{
#line 1131 "stack_opt.m"
  {
#line 1131 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1131 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv1_HeadVar__2_81;

#line 1131 "stack_opt.m"
    {
#line 1131 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1131__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv1_HeadVar__2_81);
    }
#line 1131 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_HeadVar__2_81));
#line 1131 "stack_opt.m"
  }
#line 1131 "stack_opt.m"
}

#line 1130 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_1(
#line 1130 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1130 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1130 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1130 "stack_opt.m"
{
#line 1130 "stack_opt.m"
  {
#line 1130 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1130 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv0_HeadVar__2_76;

#line 1130 "stack_opt.m"
    {
#line 1130 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1130__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv0_HeadVar__2_76);
    }
#line 1130 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__2_76));
#line 1130 "stack_opt.m"
  }
#line 1130 "stack_opt.m"
}

#line 1119 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0(
#line 1119 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MatchingResult_4)
#line 1119 "stack_opt.m"
{
#line 1122 "stack_opt.m"
  {
#line 1122 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_74_74;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_78_78;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_79_79;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_83_83;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_88_88;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CellVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 0)));
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 1)));
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ArgVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 2)));
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ViaCellVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 3)));
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__GoalId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 4)));
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PotentialIntervals_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 5)));
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertIntervals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 6)));
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PotentialAnchors_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 7)));
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertAnchors_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 8)));
#line 1122 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CellVarNum_15;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ArgVarNums_16;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ViaCellVarNums_17;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PotentialIntervalNums_18;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertIntervalNums_19;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_29_29;
#line 1122 "stack_opt.m"
    MR_String ll_backend__stack_opt__V_33_33;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_53_53;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_59_59;
#line 1122 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_67_67;

#line 1126 "stack_opt.m"
    {
#line 1126 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\nmatching result at ");
    }
#line 1127 "stack_opt.m"
    {
#line 1127 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, ((MR_Box) (ll_backend__stack_opt__GoalId_10)));
    }
#line 1128 "stack_opt.m"
    {
#line 1128 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 6695 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1129 "stack_opt.m"
    {
#line 1129 "stack_opt.m"
      mercury__term__var_to_int_2_p_0(ll_backend__stack_opt__TypeCtorInfo_74_74, ll_backend__stack_opt__CellVar_6, &ll_backend__stack_opt__CellVarNum_15);
    }
#line 6702 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_78_78 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 6704 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1130 "stack_opt.m"
    {
#line 1130 "stack_opt.m"
      mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_78_78, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[11], ll_backend__stack_opt__ArgVars_8, &ll_backend__stack_opt__ArgVarNums_16);
    }
#line 1131 "stack_opt.m"
    {
#line 1131 "stack_opt.m"
      ll_backend__stack_opt__V_29_29 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_74_74, ll_backend__stack_opt__ViaCellVars_9);
    }
#line 1131 "stack_opt.m"
    {
#line 1131 "stack_opt.m"
      mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_78_78, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[12], ll_backend__stack_opt__V_29_29, &ll_backend__stack_opt__ViaCellVarNums_17);
    }
#line 1133 "stack_opt.m"
    {
#line 1133 "stack_opt.m"
      mercury__io__write_int_3_p_0(ll_backend__stack_opt__CellVarNum_15);
    }
#line 1134 "stack_opt.m"
    {
#line 1134 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) " => ");
    }
#line 1135 "stack_opt.m"
    {
#line 1135 "stack_opt.m"
      ll_backend__stack_opt__V_33_33 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ll_backend__stack_opt__ConsId_7);
    }
#line 1135 "stack_opt.m"
    {
#line 1135 "stack_opt.m"
      mercury__io__write_string_3_p_0(ll_backend__stack_opt__V_33_33);
    }
#line 1136 "stack_opt.m"
    {
#line 1136 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1137 "stack_opt.m"
    {
#line 1137 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__ArgVarNums_16);
    }
#line 1138 "stack_opt.m"
    {
#line 1138 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "): via cell ");
    }
#line 1139 "stack_opt.m"
    {
#line 1139 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__ViaCellVarNums_17);
    }
#line 1140 "stack_opt.m"
    {
#line 1140 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1142 "stack_opt.m"
    {
#line 1142 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "potential intervals: ");
    }
#line 6771 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_83_83 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1144 "stack_opt.m"
    {
#line 1144 "stack_opt.m"
      ll_backend__stack_opt__V_46_46 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__PotentialIntervals_11);
    }
#line 1143 "stack_opt.m"
    {
#line 1143 "stack_opt.m"
      ll_backend__stack_opt__PotentialIntervalNums_18 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[13], ll_backend__stack_opt__V_46_46);
    }
#line 1145 "stack_opt.m"
    {
#line 1145 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__PotentialIntervalNums_18);
    }
#line 1146 "stack_opt.m"
    {
#line 1146 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1147 "stack_opt.m"
    {
#line 1147 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "insert intervals: ");
    }
#line 1149 "stack_opt.m"
    {
#line 1149 "stack_opt.m"
      ll_backend__stack_opt__V_53_53 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__InsertIntervals_12);
    }
#line 1148 "stack_opt.m"
    {
#line 1148 "stack_opt.m"
      ll_backend__stack_opt__InsertIntervalNums_19 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[14], ll_backend__stack_opt__V_53_53);
    }
#line 1150 "stack_opt.m"
    {
#line 1150 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__InsertIntervalNums_19);
    }
#line 1151 "stack_opt.m"
    {
#line 1151 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1153 "stack_opt.m"
    {
#line 1153 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "potential anchors: ");
    }
#line 6823 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_88_88 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1154 "stack_opt.m"
    {
#line 1154 "stack_opt.m"
      ll_backend__stack_opt__V_59_59 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__PotentialAnchors_13);
    }
#line 1154 "stack_opt.m"
    {
#line 1154 "stack_opt.m"
      mercury__io__write_list_5_p_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__V_59_59, (MR_String) " ", (MR_Word) &ll_backend__stack_opt_scalar_common_2[15]);
    }
#line 1155 "stack_opt.m"
    {
#line 1155 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1156 "stack_opt.m"
    {
#line 1156 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "insert anchors: ");
    }
#line 1157 "stack_opt.m"
    {
#line 1157 "stack_opt.m"
      ll_backend__stack_opt__V_67_67 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__InsertAnchors_14);
    }
#line 1157 "stack_opt.m"
    {
#line 1157 "stack_opt.m"
      mercury__io__write_list_5_p_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__V_67_67, (MR_String) " ", (MR_Word) &ll_backend__stack_opt_scalar_common_2[16]);
    }
#line 1158 "stack_opt.m"
    {
#line 1158 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1122 "stack_opt.m"
  }
#line 1119 "stack_opt.m"
}

#line 1112 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_2(
#line 1112 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1112 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1112 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1112 "stack_opt.m"
{
#line 1112 "stack_opt.m"
  {
#line 1112 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1112 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv1_HeadVar__2_52;

#line 1112 "stack_opt.m"
    {
#line 1112 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1112__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv1_HeadVar__2_52);
    }
#line 1112 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_HeadVar__2_52));
#line 1112 "stack_opt.m"
  }
#line 1112 "stack_opt.m"
}

#line 1099 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_1(
#line 1099 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1099 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1099 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1099 "stack_opt.m"
{
#line 1099 "stack_opt.m"
  {
#line 1099 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1099 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv0_HeadVar__2_46;

#line 1099 "stack_opt.m"
    {
#line 1099 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1099__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv0_HeadVar__2_46);
    }
#line 1099 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__2_46));
#line 1099 "stack_opt.m"
  }
#line 1099 "stack_opt.m"
}

#line 1096 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0(
#line 1096 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1096 "stack_opt.m"
{
#line 1098 "stack_opt.m"
  {
#line 1098 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_49_49;
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_50_50;
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Vars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarNums_7;
#line 1098 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_25_25;
#line 1103 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CellVar_14;
#line 1103 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ConsId_15;
#line 1103 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ArgVars_16;
#line 1104 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Unification_11;
#line 1104 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_31_31;
#line 1104 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_13_13;
#line 1104 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_8_8;
#line 1104 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_9_9;
#line 1104 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_10_10;
#line 1104 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_12_12;
#line 1105 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_17_17;
#line 1105 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_18_18;
#line 1105 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;

#line 1099 "stack_opt.m"
    {
#line 1099 "stack_opt.m"
      ll_backend__stack_opt__V_25_25 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_48_48, ll_backend__stack_opt__Vars_5);
    }
#line 6982 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_49_49 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 6984 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_50_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1099 "stack_opt.m"
    {
#line 1099 "stack_opt.m"
      mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_49_49, ll_backend__stack_opt__TypeCtorInfo_50_50, (MR_Word) &ll_backend__stack_opt_scalar_common_2[9], ll_backend__stack_opt__V_25_25, &ll_backend__stack_opt__VarNums_7);
    }
#line 1100 "stack_opt.m"
    {
#line 1100 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "vars [");
    }
#line 1101 "stack_opt.m"
    {
#line 1101 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__VarNums_7);
    }
#line 1102 "stack_opt.m"
    {
#line 1102 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "]: ");
    }
#line 1104 "stack_opt.m"
    ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_4, (MR_Integer) 0)));
#line 1104 "stack_opt.m"
    ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_4, (MR_Integer) 1)));
#line 1104 "stack_opt.m"
    ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1104 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1104 "stack_opt.m"
      {
#line 1104 "stack_opt.m"
        ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 0)));
#line 1104 "stack_opt.m"
        ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 1)));
#line 1104 "stack_opt.m"
        ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 2)));
#line 1104 "stack_opt.m"
        ll_backend__stack_opt__Unification_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 3)));
#line 1104 "stack_opt.m"
        ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 4)));
#line 1105 "stack_opt.m"
        ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__Unification_11)) == (MR_mktag((MR_Integer) 1)));
#line 1105 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 1105 "stack_opt.m"
          {
#line 1105 "stack_opt.m"
            ll_backend__stack_opt__CellVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 0)));
#line 1105 "stack_opt.m"
            ll_backend__stack_opt__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 1)));
#line 1105 "stack_opt.m"
            ll_backend__stack_opt__ArgVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 2)));
#line 1105 "stack_opt.m"
            ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 3)));
#line 1105 "stack_opt.m"
            ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 4)));
#line 1105 "stack_opt.m"
            ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 5)));
#line 1105 "stack_opt.m"
          }
#line 1104 "stack_opt.m"
      }
#line 1103 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1107 "stack_opt.m"
      {
#line 1107 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__CellVarNum_20;
#line 1107 "stack_opt.m"
        MR_Word ll_backend__stack_opt__ArgVarNums_21;
#line 1107 "stack_opt.m"
        MR_String ll_backend__stack_opt__V_35_35;

#line 1107 "stack_opt.m"
        {
#line 1107 "stack_opt.m"
          mercury__term__var_to_int_2_p_0(ll_backend__stack_opt__TypeCtorInfo_48_48, ll_backend__stack_opt__CellVar_14, &ll_backend__stack_opt__CellVarNum_20);
        }
#line 1108 "stack_opt.m"
        {
#line 1108 "stack_opt.m"
          mercury__io__write_int_3_p_0(ll_backend__stack_opt__CellVarNum_20);
        }
#line 1109 "stack_opt.m"
        {
#line 1109 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) " => ");
        }
#line 1110 "stack_opt.m"
        {
#line 1110 "stack_opt.m"
          ll_backend__stack_opt__V_35_35 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ll_backend__stack_opt__ConsId_15);
        }
#line 1110 "stack_opt.m"
        {
#line 1110 "stack_opt.m"
          mercury__io__write_string_3_p_0(ll_backend__stack_opt__V_35_35);
        }
#line 1111 "stack_opt.m"
        {
#line 1111 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 1112 "stack_opt.m"
        {
#line 1112 "stack_opt.m"
          mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_49_49, ll_backend__stack_opt__TypeCtorInfo_50_50, (MR_Word) &ll_backend__stack_opt_scalar_common_2[10], ll_backend__stack_opt__ArgVars_16, &ll_backend__stack_opt__ArgVarNums_21);
        }
#line 1113 "stack_opt.m"
        {
#line 1113 "stack_opt.m"
          backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__ArgVarNums_21);
        }
#line 1114 "stack_opt.m"
        {
#line 1114 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
#line 1107 "stack_opt.m"
      }
#line 1103 "stack_opt.m"
    else
#line 1116 "stack_opt.m"
      {
#line 1116 "stack_opt.m"
        {
#line 1116 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "BAD INSERT GOAL\n");
        }
#line 1116 "stack_opt.m"
      }
#line 1098 "stack_opt.m"
  }
#line 1096 "stack_opt.m"
}

#line 1094 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0_1(
#line 1094 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1094 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1094 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1094 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1094 "stack_opt.m"
{
#line 1094 "stack_opt.m"
  {
#line 1094 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1094 "stack_opt.m"
    {
#line 1094 "stack_opt.m"
      ll_backend__stack_opt__dump_insert_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1094 "stack_opt.m"
  }
#line 1094 "stack_opt.m"
}

#line 1087 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0(
#line 1087 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1087 "stack_opt.m"
{
#line 1090 "stack_opt.m"
  {
#line 1090 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1090 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Anchor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1090 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertSpecs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1094 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_8;

#line 1091 "stack_opt.m"
    {
#line 1091 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\ninsertions after ");
    }
#line 1092 "stack_opt.m"
    {
#line 1092 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__Anchor_4)));
    }
#line 1093 "stack_opt.m"
    {
#line 1093 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 1094 "stack_opt.m"
    {
#line 1094 "stack_opt.m"
      mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__stack_opt_scalar_common_2[8], ll_backend__stack_opt__InsertSpecs_5, ((MR_Box) ((MR_Integer) 0)), &ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_8);
    }
#line 1090 "stack_opt.m"
  }
#line 1087 "stack_opt.m"
}

#line 1084 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_2(
#line 1084 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1084 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1084 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1084 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1084 "stack_opt.m"
{
#line 1084 "stack_opt.m"
  {
#line 1084 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1084 "stack_opt.m"
    {
#line 1084 "stack_opt.m"
      ll_backend__stack_opt__dump_matching_result_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1084 "stack_opt.m"
  }
#line 1084 "stack_opt.m"
}

#line 1081 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_1(
#line 1081 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1081 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1081 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1081 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1081 "stack_opt.m"
{
#line 1081 "stack_opt.m"
  {
#line 1081 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1081 "stack_opt.m"
    {
#line 1081 "stack_opt.m"
      ll_backend__stack_opt__dump_anchor_inserts_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1081 "stack_opt.m"
  }
#line 1081 "stack_opt.m"
}

#line 1076 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0(
#line 1076 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4)
#line 1076 "stack_opt.m"
{
#line 1078 "stack_opt.m"
  {
#line 1078 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1078 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_31_31;
#line 1078 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Inserts_6;
#line 1078 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 1)));
#line 1078 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_17_17;
#line 1079 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 0)));
#line 1079 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 2)));
#line 1081 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_13_13;
#line 1084 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_23_23;
#line 1084 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_24_24;
#line 1084 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv1_STATE_VARIABLE_IO_18_18;

#line 1079 "stack_opt.m"
    {
#line 1079 "stack_opt.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ll_backend__stack_opt__V_9_9, &ll_backend__stack_opt__Inserts_6);
    }
#line 1080 "stack_opt.m"
    {
#line 1080 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\nANCHOR INSERT:\n");
    }
#line 7291 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_31_31 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1081 "stack_opt.m"
    {
#line 1081 "stack_opt.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__stack_opt_scalar_common_2[0], ll_backend__stack_opt__TypeCtorInfo_31_31, (MR_Word) &ll_backend__stack_opt_scalar_common_2[6], ll_backend__stack_opt__Inserts_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_13_13);
    }
#line 1083 "stack_opt.m"
    {
#line 1083 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\nMATCHING RESULTS:\n");
    }
#line 1084 "stack_opt.m"
    ll_backend__stack_opt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 0)));
#line 1084 "stack_opt.m"
    ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 1)));
#line 1084 "stack_opt.m"
    ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 2)));
#line 1084 "stack_opt.m"
    {
#line 1084 "stack_opt.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0, ll_backend__stack_opt__TypeCtorInfo_31_31, (MR_Word) &ll_backend__stack_opt_scalar_common_2[7], ll_backend__stack_opt__V_17_17, ((MR_Box) ((MR_Integer) 0)), &ll_backend__stack_opt__conv1_STATE_VARIABLE_IO_18_18);
    }
#line 1085 "stack_opt.m"
    {
#line 1085 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1078 "stack_opt.m"
  }
#line 1076 "stack_opt.m"
}

#line 1052 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__maybe_write_progress_message_7_p_0(
#line 1052 "stack_opt.m"
  MR_String ll_backend__stack_opt__Message_8,
#line 1052 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_9,
#line 1052 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_10,
#line 1052 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ProcInfo_11,
#line 1052 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_12)
#line 1052 "stack_opt.m"
{
#line 1057 "stack_opt.m"
  {
#line 1057 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__DebugStackOpt_9 == ll_backend__stack_opt__PredIdInt_10);

#line 1057 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1058 "stack_opt.m"
      {
#line 1058 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Goal_14;
#line 1058 "stack_opt.m"
        MR_Word ll_backend__stack_opt__VarSet_15;
#line 1058 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Globals_16;
#line 1058 "stack_opt.m"
        MR_Word ll_backend__stack_opt__OutInfo_17;

#line 1058 "stack_opt.m"
        {
#line 1058 "stack_opt.m"
          mercury__io__write_string_3_p_0(ll_backend__stack_opt__Message_8);
        }
#line 1059 "stack_opt.m"
        {
#line 1059 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
#line 1060 "stack_opt.m"
        {
#line 1060 "stack_opt.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_opt__ProcInfo_11, &ll_backend__stack_opt__Goal_14);
        }
#line 1061 "stack_opt.m"
        {
#line 1061 "stack_opt.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__stack_opt__ProcInfo_11, &ll_backend__stack_opt__VarSet_15);
        }
#line 1062 "stack_opt.m"
        {
#line 1062 "stack_opt.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_opt__ModuleInfo_12, &ll_backend__stack_opt__Globals_16);
        }
#line 1063 "stack_opt.m"
        {
#line 1063 "stack_opt.m"
          ll_backend__stack_opt__OutInfo_17 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(ll_backend__stack_opt__Globals_16, (MR_Integer) 1);
        }
#line 1064 "stack_opt.m"
        {
#line 1064 "stack_opt.m"
          hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(ll_backend__stack_opt__OutInfo_17, ll_backend__stack_opt__ModuleInfo_12, ll_backend__stack_opt__VarSet_15, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n", ll_backend__stack_opt__Goal_14);
        }
#line 1066 "stack_opt.m"
        {
#line 1066 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1058 "stack_opt.m"
      }
#line 1057 "stack_opt.m"
    else
#line 1057 "stack_opt.m"
      {
#line 1057 "stack_opt.m"
      }
#line 1057 "stack_opt.m"
  }
#line 1052 "stack_opt.m"
}

#line 1037 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(
#line 1037 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1037 "stack_opt.m"
{
#line 1039 "stack_opt.m"
  {
#line 1039 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1039 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1039 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1039 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));

#line 1039 "stack_opt.m"
    return ll_backend__stack_opt__AfterModelNon_4;
#line 1039 "stack_opt.m"
  }
#line 1037 "stack_opt.m"
}

#line 1033 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(
#line 1033 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1033 "stack_opt.m"
{
#line 1035 "stack_opt.m"
  {
#line 1035 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1035 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1035 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1035 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));

#line 1035 "stack_opt.m"
    return ll_backend__stack_opt__Paths_3;
#line 1035 "stack_opt.m"
  }
#line 1033 "stack_opt.m"
}

#line 1028 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_2(
#line 1028 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1028 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1028 "stack_opt.m"
{
#line 1028 "stack_opt.m"
  {
#line 1028 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1028 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1028 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_AfterModelNon_4;

#line 1028 "stack_opt.m"
    {
#line 1028 "stack_opt.m"
      ll_backend__stack_opt__conv1_AfterModelNon_4 = ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1028 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_AfterModelNon_4));
#line 1028 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1028 "stack_opt.m"
  }
#line 1028 "stack_opt.m"
}

#line 1025 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_1(
#line 1025 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1025 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1025 "stack_opt.m"
{
#line 1025 "stack_opt.m"
  {
#line 1025 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1025 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1025 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_Paths_3;

#line 1025 "stack_opt.m"
    {
#line 1025 "stack_opt.m"
      ll_backend__stack_opt__conv0_Paths_3 = ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1025 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_Paths_3));
#line 1025 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1025 "stack_opt.m"
  }
#line 1025 "stack_opt.m"
}

#line 1020 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0(
#line 1020 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 1020 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__AllPaths_2)
#line 1020 "stack_opt.m"
{
#line 1022 "stack_opt.m"
  {
#line 1022 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1022 "stack_opt.m"
    if ((ll_backend__stack_opt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1022 "stack_opt.m"
      {
#line 1023 "stack_opt.m"
        {
#line 1023 "stack_opt.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.consolidate_after_join\'/2", (MR_String) "no paths to join");
#line 1023 "stack_opt.m"
          return;
        }
#line 1022 "stack_opt.m"
      }
#line 1022 "stack_opt.m"
    else
#line 1024 "stack_opt.m"
      {
#line 1024 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0;
#line 1024 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PathsList_10;
#line 1024 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Paths_12;
#line 1024 "stack_opt.m"
        MR_Word ll_backend__stack_opt__AfterModelNonList_13;
#line 1024 "stack_opt.m"
        MR_Word ll_backend__stack_opt__AfterModelNon_14;
#line 1024 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19;

#line 1025 "stack_opt.m"
        {
#line 1025 "stack_opt.m"
          ll_backend__stack_opt__PathsList_10 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_20_20, (MR_Word) &ll_backend__stack_opt_scalar_common_1[11], (MR_Word) &ll_backend__stack_opt_scalar_common_2[4], ll_backend__stack_opt__HeadVar__1_1);
        }
#line 1026 "stack_opt.m"
        {
#line 1026 "stack_opt.m"
          ll_backend__stack_opt__Paths_12 = mercury__set__union_list_1_f_0((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0, ll_backend__stack_opt__PathsList_10);
        }
#line 1028 "stack_opt.m"
        {
#line 1028 "stack_opt.m"
          ll_backend__stack_opt__AfterModelNonList_13 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_20_20, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &ll_backend__stack_opt_scalar_common_2[5], ll_backend__stack_opt__HeadVar__1_1);
        }
#line 1030 "stack_opt.m"
        {
#line 1030 "stack_opt.m"
          mercury__bool__or_list_2_p_0(ll_backend__stack_opt__AfterModelNonList_13, &ll_backend__stack_opt__AfterModelNon_14);
        }
#line 1031 "stack_opt.m"
        {
#line 1031 "stack_opt.m"
          ll_backend__stack_opt__V_19_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 1031 "stack_opt.m"
        {
#line 1031 "stack_opt.m"
          MR_Word base;
#line 1031 "stack_opt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1031 "stack_opt.m"
          *ll_backend__stack_opt__AllPaths_2 = base;
#line 1031 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__Paths_12));
#line 1031 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__AfterModelNon_14));
#line 1031 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__V_19_19));
#line 1031 "stack_opt.m"
        }
#line 1024 "stack_opt.m"
      }
#line 1022 "stack_opt.m"
  }
#line 1020 "stack_opt.m"
}

#line 1007 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_2(
#line 1007 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1007 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1007 "stack_opt.m"
{
#line 1007 "stack_opt.m"
  {
#line 1007 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1007 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1007 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv4_STATE_VARIABLE_Path_9;

#line 1007 "stack_opt.m"
    {
#line 1007 "stack_opt.m"
      ll_backend__stack_opt__conv4_STATE_VARIABLE_Path_9 = ll_backend__stack_opt__add_anchor_to_path_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1007 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv4_STATE_VARIABLE_Path_9));
#line 1007 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1007 "stack_opt.m"
  }
#line 1007 "stack_opt.m"
}

#line 993 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_1(
#line 993 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 993 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 993 "stack_opt.m"
{
#line 993 "stack_opt.m"
  {
#line 993 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 993 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 993 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_STATE_VARIABLE_Path_13;

#line 993 "stack_opt.m"
    {
#line 993 "stack_opt.m"
      ll_backend__stack_opt__conv1_STATE_VARIABLE_Path_13 = ll_backend__stack_opt__add_interval_to_path_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 993 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_STATE_VARIABLE_Path_13));
#line 993 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 993 "stack_opt.m"
  }
#line 993 "stack_opt.m"
}

#line 984 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(
#line 984 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 984 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 984 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 984 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 984 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 984 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32,
#line 984 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_33)
#line 984 "stack_opt.m"
{
#line 989 "stack_opt.m"
  {
#line 989 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_102_102 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_104_104;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_105_105;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_108_108;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalVars_14;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__RelevantIntervalVars_15;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths0_16;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon0_17;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__RelevantAfter_18;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths1_19;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Start_20;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths2_30;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon_31;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_35_35;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_36_36;
#line 989 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40;
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 990 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 990 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_IntervalVars_14;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_57_57;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_58_58;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_59_59;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_60_60;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_61_61;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_62_62;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_63_63;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_64_64;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_65_65;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_66_66;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_67_67;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_68_68;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_69_69;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_70_70;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_71_71;
#line 995 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv2_Start_20;
#line 1001 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_109_109;
#line 1001 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StartInfo_26;
#line 1001 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorFollowVars_27;
#line 1001 "stack_opt.m"
    MR_Word ll_backend__stack_opt__NeededVars_29;
#line 1001 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_37_37;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_72_72;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_73_73;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_74_74;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_75_75;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_76_76;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_77_77;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_78_78;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_79_79;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_80_80;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_81_81;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_82_82;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_83_83;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_84_84;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_85_85;
#line 1002 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_86_86;
#line 1002 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv3_StartInfo_26;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_28_28;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_39_39;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_87_87;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_88_88;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_89_89;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_90_90;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_91_91;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_92_92;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_93_93;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_94_94;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_95_95;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_96_96;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_97_97;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_98_98;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_99_99;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_100_100;
#line 1011 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_101_101;

#line 990 "stack_opt.m"
    {
#line 990 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_102_102, (MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__V_34_34, ((MR_Box) (ll_backend__stack_opt__IntervalId_12)), &ll_backend__stack_opt__conv0_IntervalVars_14);
    }
#line 990 "stack_opt.m"
    ll_backend__stack_opt__IntervalVars_14 = ((MR_Word) ll_backend__stack_opt__conv0_IntervalVars_14);
#line 7885 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 991 "stack_opt.m"
    {
#line 991 "stack_opt.m"
      ll_backend__stack_opt__RelevantIntervalVars_15 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__stack_opt__TypeCtorInfo_104_104, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__IntervalVars_14);
    }
#line 992 "stack_opt.m"
    ll_backend__stack_opt__Paths0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 0)));
#line 992 "stack_opt.m"
    ll_backend__stack_opt__AfterModelNon0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 1)));
#line 992 "stack_opt.m"
    ll_backend__stack_opt__RelevantAfter_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 2)));
#line 7898 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_105_105 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0;
#line 993 "stack_opt.m"
    {
#line 993 "stack_opt.m"
      ll_backend__stack_opt__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 993 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[1]));
#line 993 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_1));
#line 993 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 993 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 3) = ((MR_Box) (ll_backend__stack_opt__IntervalId_12));
#line 993 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 4) = ((MR_Box) (ll_backend__stack_opt__RelevantIntervalVars_15));
#line 993 "stack_opt.m"
    }
#line 993 "stack_opt.m"
    {
#line 993 "stack_opt.m"
      ll_backend__stack_opt__Paths1_19 = mercury__set__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__V_35_35, ll_backend__stack_opt__Paths0_16);
    }
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 995 "stack_opt.m"
    ll_backend__stack_opt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 7953 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 995 "stack_opt.m"
    {
#line 995 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_102_102, ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__V_36_36, ((MR_Box) (ll_backend__stack_opt__IntervalId_12)), &ll_backend__stack_opt__conv2_Start_20);
    }
#line 995 "stack_opt.m"
    ll_backend__stack_opt__Start_20 = ((MR_Word) ll_backend__stack_opt__conv2_Start_20);
#line 999 "stack_opt.m"
#line 999 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__Start_20)) {
#line 999 "stack_opt.m"
      default:
#line 999 "stack_opt.m"
        ll_backend__stack_opt__succeeded = MR_FALSE;
#line 999 "stack_opt.m"
        break;
#line 999 "stack_opt.m"
      case (MR_Integer) 1:
#line 1000 "stack_opt.m"
        ll_backend__stack_opt__succeeded = MR_TRUE;
#line 999 "stack_opt.m"
        break;
#line 999 "stack_opt.m"
      case (MR_Integer) 3:
#line 999 "stack_opt.m"
#line 999 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__Start_20, (MR_Integer) 0)))) {
#line 999 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 999 "stack_opt.m"
          case (MR_Integer) 0:
#line 999 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 999 "stack_opt.m"
            break;
#line 999 "stack_opt.m"
          case (MR_Integer) 1:
#line 998 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 999 "stack_opt.m"
            break;
#line 999 "stack_opt.m"
        }
#line 999 "stack_opt.m"
        break;
#line 999 "stack_opt.m"
    }
#line 1001 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1001 "stack_opt.m"
      {
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 1002 "stack_opt.m"
        ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 8038 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0;
#line 1002 "stack_opt.m"
        {
#line 1002 "stack_opt.m"
          ll_backend__stack_opt__succeeded = mercury__map__search_3_p_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__TypeCtorInfo_109_109, ll_backend__stack_opt__V_37_37, ((MR_Box) (ll_backend__stack_opt__Start_20)), &ll_backend__stack_opt__conv3_StartInfo_26);
        }
#line 1002 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 1002 "stack_opt.m"
          {
#line 1002 "stack_opt.m"
            ll_backend__stack_opt__StartInfo_26 = ((MR_Word) ll_backend__stack_opt__conv3_StartInfo_26);
#line 1002 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 1002 "stack_opt.m"
          }
#line 1001 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 1001 "stack_opt.m"
          {
#line 1003 "stack_opt.m"
            ll_backend__stack_opt__AnchorFollowVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StartInfo_26, (MR_Integer) 0)));
#line 1003 "stack_opt.m"
            ll_backend__stack_opt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StartInfo_26, (MR_Integer) 1)));
#line 1004 "stack_opt.m"
            {
#line 1004 "stack_opt.m"
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__stack_opt__TypeCtorInfo_104_104, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__AnchorFollowVars_27, &ll_backend__stack_opt__NeededVars_29);
            }
#line 1005 "stack_opt.m"
            {
#line 1005 "stack_opt.m"
              ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_104_104, ll_backend__stack_opt__NeededVars_29);
            }
#line 1001 "stack_opt.m"
          }
#line 1001 "stack_opt.m"
      }
#line 996 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1007 "stack_opt.m"
      {
#line 1007 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_38_38;

#line 1007 "stack_opt.m"
        {
#line 1007 "stack_opt.m"
          ll_backend__stack_opt__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_11[0]));
#line 1007 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_2));
#line 1007 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1007 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 3) = ((MR_Box) (ll_backend__stack_opt__Start_20));
#line 1007 "stack_opt.m"
        }
#line 1007 "stack_opt.m"
        {
#line 1007 "stack_opt.m"
          ll_backend__stack_opt__Paths2_30 = mercury__set__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__V_38_38, ll_backend__stack_opt__Paths1_19);
        }
#line 1007 "stack_opt.m"
      }
#line 996 "stack_opt.m"
    else
#line 1009 "stack_opt.m"
      ll_backend__stack_opt__Paths2_30 = ll_backend__stack_opt__Paths1_19;
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 1011 "stack_opt.m"
    ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 1011 "stack_opt.m"
    {
#line 1011 "stack_opt.m"
      ll_backend__stack_opt__succeeded = mercury__set__member_2_p_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ((MR_Box) (ll_backend__stack_opt__Start_20)), ll_backend__stack_opt__V_39_39);
    }
#line 1011 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1012 "stack_opt.m"
      ll_backend__stack_opt__AfterModelNon_31 = (MR_Integer) 1;
#line 1011 "stack_opt.m"
    else
#line 1014 "stack_opt.m"
      ll_backend__stack_opt__AfterModelNon_31 = ll_backend__stack_opt__AfterModelNon0_17;
#line 1016 "stack_opt.m"
    {
#line 1016 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, 0) = ((MR_Box) (ll_backend__stack_opt__Paths2_30));
#line 1016 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, 1) = ((MR_Box) (ll_backend__stack_opt__AfterModelNon_31));
#line 1016 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, 2) = ((MR_Box) (ll_backend__stack_opt__RelevantAfter_18));
#line 1016 "stack_opt.m"
    }
#line 1017 "stack_opt.m"
    {
#line 1017 "stack_opt.m"
      ll_backend__stack_opt__find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__IntervalId_12, ll_backend__stack_opt__MaybeSearchAnchor0_9, ll_backend__stack_opt__IntervalInfo_10, ll_backend__stack_opt__StackOptInfo_11, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_33);
    }
#line 989 "stack_opt.m"
  }
#line 984 "stack_opt.m"
}

#line 975 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(
#line 975 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 975 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 975 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 975 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 975 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_14,
#line 975 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_13,
#line 975 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_15)
#line 975 "stack_opt.m"
{
#line 981 "stack_opt.m"
  {
#line 981 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 981 "stack_opt.m"
    {
#line 981 "stack_opt.m"
      ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__MaybeSearchAnchor0_9, ll_backend__stack_opt__IntervalInfo_10, ll_backend__stack_opt__StackOptInfo_11, ll_backend__stack_opt__IntervalId_13, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_14, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_15);
    }
#line 981 "stack_opt.m"
  }
#line 975 "stack_opt.m"
}

#line 960 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__one_after_another_7_p_0(
#line 960 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_1,
#line 960 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_2,
#line 960 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_3,
#line 960 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4,
#line 960 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 960 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6,
#line 960 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_7)
#line 960 "stack_opt.m"
{
#line 964 "stack_opt.m"
  while (MR_TRUE)
#line 964 "stack_opt.m"
    {
#line 964 "stack_opt.m"
      /* tailcall optimized into a loop */
#line 964 "stack_opt.m"
      {
#line 964 "stack_opt.m"
        MR_bool ll_backend__stack_opt__succeeded;

#line 964 "stack_opt.m"
        if ((ll_backend__stack_opt__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_7 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6;
#line 964 "stack_opt.m"
        else
#line 966 "stack_opt.m"
          {
#line 966 "stack_opt.m"
            MR_Word ll_backend__stack_opt__SuccessorId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__5_5, (MR_Integer) 0)));
#line 966 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MoreSuccessorIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__5_5, (MR_Integer) 1)));
#line 966 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_24;

#line 967 "stack_opt.m"
            {
#line 967 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_1, ll_backend__stack_opt__MaybeSearchAnchor1_2, ll_backend__stack_opt__IntervalInfo_3, ll_backend__stack_opt__StackOptInfo_4, ll_backend__stack_opt__SuccessorId_19, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_24);
            }
#line 969 "stack_opt.m"
            /* direct tailcall eliminated */
#line 969 "stack_opt.m"
            {
#line 969 "stack_opt.m"
              MR_Word ll_backend__stack_opt__HeadVar__5__tmp_copy_5 = ll_backend__stack_opt__MoreSuccessorIds_20;
#line 969 "stack_opt.m"
              MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0__tmp_copy_6 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_24;

#line 969 "stack_opt.m"
              ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0__tmp_copy_6;
#line 969 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__5_5 = ll_backend__stack_opt__HeadVar__5__tmp_copy_5;
#line 969 "stack_opt.m"
            }
#line 969 "stack_opt.m"
            continue;
#line 966 "stack_opt.m"
          }
#line 964 "stack_opt.m"
      }
#line 964 "stack_opt.m"
      break;
#line 964 "stack_opt.m"
    }
#line 960 "stack_opt.m"
}

#line 941 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_2(
#line 941 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 941 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 941 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 941 "stack_opt.m"
{
#line 941 "stack_opt.m"
  {
#line 941 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 941 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv4_STATE_VARIABLE_AllPaths_15;

#line 941 "stack_opt.m"
    {
#line 941 "stack_opt.m"
      ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 7))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv4_STATE_VARIABLE_AllPaths_15);
    }
#line 941 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv4_STATE_VARIABLE_AllPaths_15));
#line 941 "stack_opt.m"
  }
#line 941 "stack_opt.m"
}

#line 894 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_1(
#line 894 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 894 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 894 "stack_opt.m"
{
#line 894 "stack_opt.m"
  {
#line 894 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 894 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 894 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_Path_4;

#line 894 "stack_opt.m"
    {
#line 894 "stack_opt.m"
      ll_backend__stack_opt__conv0_Path_4 = ll_backend__stack_opt__close_path_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 894 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_Path_4));
#line 894 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 894 "stack_opt.m"
  }
#line 894 "stack_opt.m"
}

#line 884 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0(
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__End_9,
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_10,
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_11,
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_12,
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_13,
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__SuccessorIds_14,
#line 884 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36,
#line 884 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37)
#line 884 "stack_opt.m"
{
#line 889 "stack_opt.m"
  {
#line 889 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 889 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorRequiresClose_16;
#line 889 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptParams_19;
#line 889 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FullPath_20;
#line 889 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39;
#line 899 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_90_90;
#line 899 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_91_91;
#line 900 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_92_92;
#line 900 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__V_93_93;
#line 900 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_94_94;
#line 900 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_95_95;
#line 900 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_96_96;
#line 901 "stack_opt.m"
    MR_Word ll_backend__stack_opt__EndGoalId_21;
#line 902 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_40_40;

#line 890 "stack_opt.m"
    {
#line 890 "stack_opt.m"
      ll_backend__stack_opt__AnchorRequiresClose_16 = ll_backend__stack_opt__anchor_requires_close_2_f_0(ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__End_9);
    }
#line 896 "stack_opt.m"
#line 896 "stack_opt.m"
    switch (ll_backend__stack_opt__AnchorRequiresClose_16) {
#line 896 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 896 "stack_opt.m"
      case (MR_Integer) 0:
#line 897 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36;
#line 896 "stack_opt.m"
        break;
#line 896 "stack_opt.m"
      case (MR_Integer) 1:
#line 892 "stack_opt.m"
        {
#line 892 "stack_opt.m"
          MR_Word ll_backend__stack_opt__TypeCtorInfo_163_163 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0;
#line 892 "stack_opt.m"
          MR_Word ll_backend__stack_opt__Paths0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 0)));
#line 892 "stack_opt.m"
          MR_Word ll_backend__stack_opt__Paths1_18;
#line 893 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 1)));
#line 893 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 2)));
#line 895 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_88_88;
#line 895 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_89_89;
#line 895 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_87_87;

#line 894 "stack_opt.m"
          {
#line 894 "stack_opt.m"
            ll_backend__stack_opt__Paths1_18 = mercury__set__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_163_163, ll_backend__stack_opt__TypeCtorInfo_163_163, (MR_Word) &ll_backend__stack_opt_scalar_common_2[3], ll_backend__stack_opt__Paths0_17);
          }
#line 895 "stack_opt.m"
          ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 0)));
#line 895 "stack_opt.m"
          ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 1)));
#line 895 "stack_opt.m"
          ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 2)));
#line 895 "stack_opt.m"
          {
#line 895 "stack_opt.m"
            ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 895 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, 0) = ((MR_Box) (ll_backend__stack_opt__Paths1_18));
#line 895 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, 1) = ((MR_Box) (ll_backend__stack_opt__V_88_88));
#line 895 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, 2) = ((MR_Box) (ll_backend__stack_opt__V_89_89));
#line 895 "stack_opt.m"
          }
#line 892 "stack_opt.m"
        }
#line 896 "stack_opt.m"
        break;
#line 896 "stack_opt.m"
    }
#line 899 "stack_opt.m"
    ll_backend__stack_opt__StackOptParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_13, (MR_Integer) 0)));
#line 899 "stack_opt.m"
    ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_13, (MR_Integer) 1)));
#line 899 "stack_opt.m"
    ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_13, (MR_Integer) 2)));
#line 900 "stack_opt.m"
    ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 0)));
#line 900 "stack_opt.m"
    ll_backend__stack_opt__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 1)));
#line 900 "stack_opt.m"
    ll_backend__stack_opt__V_94_94 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 900 "stack_opt.m"
    ll_backend__stack_opt__FullPath_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 900 "stack_opt.m"
    ll_backend__stack_opt__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 900 "stack_opt.m"
    ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 3)));
#line 902 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__FullPath_20 == (MR_Integer) 1);
#line 902 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 902 "stack_opt.m"
      {
#line 903 "stack_opt.m"
        ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__End_9)) == (MR_mktag((MR_Integer) 1)));
#line 903 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 903 "stack_opt.m"
          {
#line 903 "stack_opt.m"
            ll_backend__stack_opt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 0)));
#line 903 "stack_opt.m"
            ll_backend__stack_opt__EndGoalId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 1)));
#line 903 "stack_opt.m"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_40_40 == (MR_Integer) 1);
#line 903 "stack_opt.m"
          }
#line 902 "stack_opt.m"
      }
#line 901 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 905 "stack_opt.m"
      {
#line 905 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_22;
#line 905 "stack_opt.m"
        MR_Word ll_backend__stack_opt__BranchEndInfo_23;
#line 905 "stack_opt.m"
        MR_Word ll_backend__stack_opt__ContinueId_24;
#line 905 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_41_41;
#line 905 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_43_43;
#line 905 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_44_44;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_97_97;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_98_98;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_99_99;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_100_100;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_101_101;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_102_102;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_103_103;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_104_104;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_105_105;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_106_106;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_107_107;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_108_108;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_109_109;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_110_110;
#line 908 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_111_111;
#line 908 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv1_BranchEndInfo_23;
#line 910 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_112_112;
#line 910 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_113_113;

#line 905 "stack_opt.m"
        {
#line 905 "stack_opt.m"
          ll_backend__stack_opt__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 905 "stack_opt.m"
          MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 905 "stack_opt.m"
          MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_41_41, 1) = ((MR_Box) ((MR_Integer) 1));
#line 905 "stack_opt.m"
          MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_41_41, 2) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_21));
#line 905 "stack_opt.m"
        }
#line 905 "stack_opt.m"
        {
#line 905 "stack_opt.m"
          ll_backend__stack_opt__MaybeSearchAnchor1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 905 "stack_opt.m"
          MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchor1_22, 0) = ((MR_Box) (ll_backend__stack_opt__V_41_41));
#line 905 "stack_opt.m"
        }
#line 906 "stack_opt.m"
        {
#line 906 "stack_opt.m"
          ll_backend__stack_opt__one_after_another_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor1_22, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorIds_14, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_43_43);
        }
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 908 "stack_opt.m"
        ll_backend__stack_opt__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 908 "stack_opt.m"
        {
#line 908 "stack_opt.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ll_backend__stack_opt__V_44_44, ((MR_Box) (ll_backend__stack_opt__EndGoalId_21)), &ll_backend__stack_opt__conv1_BranchEndInfo_23);
        }
#line 908 "stack_opt.m"
        ll_backend__stack_opt__BranchEndInfo_23 = ((MR_Word) ll_backend__stack_opt__conv1_BranchEndInfo_23);
#line 910 "stack_opt.m"
        ll_backend__stack_opt__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 0)));
#line 910 "stack_opt.m"
        ll_backend__stack_opt__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 1)));
#line 910 "stack_opt.m"
        ll_backend__stack_opt__ContinueId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 2)));
#line 911 "stack_opt.m"
        {
#line 911 "stack_opt.m"
          ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__ContinueId_24, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_43_43, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
        }
#line 905 "stack_opt.m"
      }
#line 901 "stack_opt.m"
    else
#line 913 "stack_opt.m"
      {
#line 913 "stack_opt.m"
        MR_Word ll_backend__stack_opt__EndGoalId_81;
#line 914 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_46_46;

#line 914 "stack_opt.m"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__FullPath_20 == (MR_Integer) 1);
#line 914 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 914 "stack_opt.m"
          {
#line 915 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__End_9)) == (MR_mktag((MR_Integer) 1)));
#line 915 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 915 "stack_opt.m"
              {
#line 915 "stack_opt.m"
                ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 0)));
#line 915 "stack_opt.m"
                ll_backend__stack_opt__EndGoalId_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 1)));
#line 915 "stack_opt.m"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_46_46 == (MR_Integer) 0);
#line 915 "stack_opt.m"
              }
#line 914 "stack_opt.m"
          }
#line 913 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 922 "stack_opt.m"
          {
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_168_168;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ElseStartId_27;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CondStartId_28;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MaybeSearchAnchorCond_29;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MaybeSearchAnchorEnd_30;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CondEndMap_31;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_52_52;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_53_53;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_54_54;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_57_57;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_60_60;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchEndInfo_72;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ContinueId_73;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__SuccessorId_188;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MoreSuccessorIds_189;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_193;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__SuccessorId_206;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MoreSuccessorIds_207;
#line 922 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_211;
#line 917 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ElseStartIdPrime_25;
#line 917 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CondStartIdPrime_26;
#line 917 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_47_47;
#line 917 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_48_48;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_114_114;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_115_115;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_116_116;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_117_117;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_118_118;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_119_119;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_120_120;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_121_121;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_122_122;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_123_123;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_124_124;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_125_125;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_126_126;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_127_127;
#line 928 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_128_128;
#line 929 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv2_SuccessorId_188;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_129_129;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_130_130;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_131_131;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_132_132;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_133_133;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_134_134;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_135_135;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_136_136;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_137_137;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_138_138;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_139_139;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_140_140;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_141_141;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_142_142;
#line 932 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_143_143;
#line 932 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv3_BranchEndInfo_72;
#line 934 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_144_144;
#line 934 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_145_145;

#line 917 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__SuccessorIds_14)) == (MR_mktag((MR_Integer) 1)));
#line 917 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 917 "stack_opt.m"
              {
#line 917 "stack_opt.m"
                ll_backend__stack_opt__ElseStartIdPrime_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 0)));
#line 917 "stack_opt.m"
                ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 1)));
#line 917 "stack_opt.m"
                ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 917 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 917 "stack_opt.m"
                  {
#line 917 "stack_opt.m"
                    ll_backend__stack_opt__CondStartIdPrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_47_47, (MR_Integer) 0)));
#line 917 "stack_opt.m"
                    ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_47_47, (MR_Integer) 1)));
#line 917 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "stack_opt.m"
                  }
#line 917 "stack_opt.m"
              }
#line 917 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 918 "stack_opt.m"
              {
#line 918 "stack_opt.m"
                ll_backend__stack_opt__ElseStartId_27 = ll_backend__stack_opt__ElseStartIdPrime_25;
#line 919 "stack_opt.m"
                ll_backend__stack_opt__CondStartId_28 = ll_backend__stack_opt__CondStartIdPrime_26;
#line 918 "stack_opt.m"
              }
#line 917 "stack_opt.m"
            else
#line 921 "stack_opt.m"
              {
#line 921 "stack_opt.m"
                {
#line 921 "stack_opt.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "ite not else, cond");
#line 921 "stack_opt.m"
                  return;
                }
#line 921 "stack_opt.m"
              }
#line 923 "stack_opt.m"
            {
#line 923 "stack_opt.m"
              ll_backend__stack_opt__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 923 "stack_opt.m"
              MR_hl_field(MR_mktag(2), ll_backend__stack_opt__V_52_52, 0) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_81));
#line 923 "stack_opt.m"
            }
#line 923 "stack_opt.m"
            {
#line 923 "stack_opt.m"
              ll_backend__stack_opt__MaybeSearchAnchorCond_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 923 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchorCond_29, 0) = ((MR_Box) (ll_backend__stack_opt__V_52_52));
#line 923 "stack_opt.m"
            }
#line 924 "stack_opt.m"
            {
#line 924 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorCond_29, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__CondStartId_28, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_53_53);
            }
#line 927 "stack_opt.m"
            {
#line 927 "stack_opt.m"
              ll_backend__stack_opt__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 927 "stack_opt.m"
              MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 927 "stack_opt.m"
              MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_54_54, 1) = ((MR_Box) ((MR_Integer) 0));
#line 927 "stack_opt.m"
              MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_54_54, 2) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_81));
#line 927 "stack_opt.m"
            }
#line 927 "stack_opt.m"
            {
#line 927 "stack_opt.m"
              ll_backend__stack_opt__MaybeSearchAnchorEnd_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchorEnd_30, 0) = ((MR_Box) (ll_backend__stack_opt__V_54_54));
#line 927 "stack_opt.m"
            }
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__CondEndMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 928 "stack_opt.m"
            ll_backend__stack_opt__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 8910 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeCtorInfo_168_168 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 929 "stack_opt.m"
            {
#line 929 "stack_opt.m"
              mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_168_168, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ll_backend__stack_opt__CondEndMap_31, ((MR_Box) (ll_backend__stack_opt__EndGoalId_81)), &ll_backend__stack_opt__conv2_SuccessorId_188);
            }
#line 929 "stack_opt.m"
            ll_backend__stack_opt__SuccessorId_188 = ((MR_Word) ll_backend__stack_opt__conv2_SuccessorId_188);
#line 931 "stack_opt.m"
            {
#line 931 "stack_opt.m"
              ll_backend__stack_opt__MoreSuccessorIds_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, 0) = ((MR_Box) (ll_backend__stack_opt__ElseStartId_27));
#line 931 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 931 "stack_opt.m"
            }
#line 967 "stack_opt.m"
            {
#line 967 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorEnd_30, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorId_188, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_53_53, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_193);
            }
#line 966 "stack_opt.m"
            ll_backend__stack_opt__SuccessorId_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, (MR_Integer) 0)));
#line 966 "stack_opt.m"
            ll_backend__stack_opt__MoreSuccessorIds_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, (MR_Integer) 1)));
#line 967 "stack_opt.m"
            {
#line 967 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorEnd_30, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorId_206, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_193, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_211);
            }
#line 969 "stack_opt.m"
            {
#line 969 "stack_opt.m"
              ll_backend__stack_opt__one_after_another_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorEnd_30, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__MoreSuccessorIds_207, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_211, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_57_57);
            }
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 932 "stack_opt.m"
            ll_backend__stack_opt__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 932 "stack_opt.m"
            {
#line 932 "stack_opt.m"
              mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_168_168, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ll_backend__stack_opt__V_60_60, ((MR_Box) (ll_backend__stack_opt__EndGoalId_81)), &ll_backend__stack_opt__conv3_BranchEndInfo_72);
            }
#line 932 "stack_opt.m"
            ll_backend__stack_opt__BranchEndInfo_72 = ((MR_Word) ll_backend__stack_opt__conv3_BranchEndInfo_72);
#line 934 "stack_opt.m"
            ll_backend__stack_opt__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_72, (MR_Integer) 0)));
#line 934 "stack_opt.m"
            ll_backend__stack_opt__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_72, (MR_Integer) 1)));
#line 934 "stack_opt.m"
            ll_backend__stack_opt__ContinueId_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_72, (MR_Integer) 2)));
#line 935 "stack_opt.m"
            {
#line 935 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__ContinueId_73, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_57_57, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
            }
#line 922 "stack_opt.m"
          }
#line 913 "stack_opt.m"
        else
#line 937 "stack_opt.m"
          {
#line 937 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchType_33;
#line 937 "stack_opt.m"
            MR_Word ll_backend__stack_opt__EndGoalId_77;

#line 938 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__End_9)) == (MR_mktag((MR_Integer) 1)));
#line 938 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 938 "stack_opt.m"
              {
#line 938 "stack_opt.m"
                ll_backend__stack_opt__BranchType_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 0)));
#line 938 "stack_opt.m"
                ll_backend__stack_opt__EndGoalId_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 1)));
#line 940 "stack_opt.m"
                {
#line 940 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__AllPathsList_34;
#line 940 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_62_62;
#line 940 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_63_63;
#line 940 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_64_64;
#line 940 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_65_65;
#line 940 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_74;
#line 940 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__BranchEndInfo_75;
#line 940 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ContinueId_76;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_146_146;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_147_147;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_148_148;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_149_149;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_150_150;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_151_151;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_152_152;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_153_153;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_154_154;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_155_155;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_156_156;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_157_157;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_158_158;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_159_159;
#line 945 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_160_160;
#line 945 "stack_opt.m"
                  MR_Box ll_backend__stack_opt__conv5_BranchEndInfo_75;
#line 947 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_161_161;
#line 947 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_162_162;

#line 940 "stack_opt.m"
                  {
#line 940 "stack_opt.m"
                    ll_backend__stack_opt__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 940 "stack_opt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 940 "stack_opt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_62_62, 1) = ((MR_Box) (ll_backend__stack_opt__BranchType_33));
#line 940 "stack_opt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_62_62, 2) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_77));
#line 940 "stack_opt.m"
                  }
#line 940 "stack_opt.m"
                  {
#line 940 "stack_opt.m"
                    ll_backend__stack_opt__MaybeSearchAnchor1_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 940 "stack_opt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchor1_74, 0) = ((MR_Box) (ll_backend__stack_opt__V_62_62));
#line 940 "stack_opt.m"
                  }
#line 941 "stack_opt.m"
                  {
#line 941 "stack_opt.m"
                    ll_backend__stack_opt__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 941 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_10[0]));
#line 941 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_8_p_0_2));
#line 941 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 941 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 3) = ((MR_Box) (ll_backend__stack_opt__RelevantVars_10));
#line 941 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 4) = ((MR_Box) (ll_backend__stack_opt__MaybeSearchAnchor1_74));
#line 941 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 5) = ((MR_Box) (ll_backend__stack_opt__IntervalInfo_12));
#line 941 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 6) = ((MR_Box) (ll_backend__stack_opt__StackOptInfo_13));
#line 941 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 7) = ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39));
#line 941 "stack_opt.m"
                  }
#line 941 "stack_opt.m"
                  {
#line 941 "stack_opt.m"
                    mercury__list__map_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0, ll_backend__stack_opt__V_63_63, ll_backend__stack_opt__SuccessorIds_14, &ll_backend__stack_opt__AllPathsList_34);
                  }
#line 944 "stack_opt.m"
                  {
#line 944 "stack_opt.m"
                    ll_backend__stack_opt__consolidate_after_join_2_p_0(ll_backend__stack_opt__AllPathsList_34, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_64_64);
                  }
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 945 "stack_opt.m"
                  {
#line 945 "stack_opt.m"
                    mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ll_backend__stack_opt__V_65_65, ((MR_Box) (ll_backend__stack_opt__EndGoalId_77)), &ll_backend__stack_opt__conv5_BranchEndInfo_75);
                  }
#line 945 "stack_opt.m"
                  ll_backend__stack_opt__BranchEndInfo_75 = ((MR_Word) ll_backend__stack_opt__conv5_BranchEndInfo_75);
#line 947 "stack_opt.m"
                  ll_backend__stack_opt__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_75, (MR_Integer) 0)));
#line 947 "stack_opt.m"
                  ll_backend__stack_opt__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_75, (MR_Integer) 1)));
#line 947 "stack_opt.m"
                  ll_backend__stack_opt__ContinueId_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_75, (MR_Integer) 2)));
#line 948 "stack_opt.m"
                  {
#line 948 "stack_opt.m"
                    ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__ContinueId_76, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_64_64, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
                  }
#line 940 "stack_opt.m"
                }
#line 938 "stack_opt.m"
              }
#line 938 "stack_opt.m"
            else
#line 951 "stack_opt.m"
              {
#line 951 "stack_opt.m"
                MR_Word ll_backend__stack_opt__SuccessorId_35;
#line 951 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_67_67;

#line 951 "stack_opt.m"
                ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__SuccessorIds_14)) == (MR_mktag((MR_Integer) 1)));
#line 951 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 951 "stack_opt.m"
                  {
#line 951 "stack_opt.m"
                    ll_backend__stack_opt__SuccessorId_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 0)));
#line 951 "stack_opt.m"
                    ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 1)));
#line 951 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 951 "stack_opt.m"
                  }
#line 951 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 952 "stack_opt.m"
                  {
#line 952 "stack_opt.m"
                    ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorId_35, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
                  }
#line 951 "stack_opt.m"
                else
#line 956 "stack_opt.m"
                  {
#line 956 "stack_opt.m"
                    {
#line 956 "stack_opt.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "more successor ids");
#line 956 "stack_opt.m"
                      return;
                    }
#line 956 "stack_opt.m"
                  }
#line 951 "stack_opt.m"
              }
#line 937 "stack_opt.m"
          }
#line 913 "stack_opt.m"
      }
#line 889 "stack_opt.m"
  }
#line 884 "stack_opt.m"
}

#line 856 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_3(
#line 856 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 856 "stack_opt.m"
{
#line 856 "stack_opt.m"
  {
#line 856 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 856 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 856 "stack_opt.m"
    {
#line 856 "stack_opt.m"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__856__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))));
    }
#line 856 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 856 "stack_opt.m"
  }
#line 856 "stack_opt.m"
}

#line 852 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_2(
#line 852 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 852 "stack_opt.m"
{
#line 852 "stack_opt.m"
  {
#line 852 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 852 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 852 "stack_opt.m"
    {
#line 852 "stack_opt.m"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__852__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))));
    }
#line 852 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 852 "stack_opt.m"
  }
#line 852 "stack_opt.m"
}

#line 843 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_1(
#line 843 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 843 "stack_opt.m"
{
#line 843 "stack_opt.m"
  {
#line 843 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 843 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 843 "stack_opt.m"
    {
#line 843 "stack_opt.m"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__843__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))));
    }
#line 843 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 843 "stack_opt.m"
  }
#line 843 "stack_opt.m"
}

#line 833 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0(
#line 833 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 833 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_9,
#line 833 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_10,
#line 833 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_11,
#line 833 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_12,
#line 833 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28,
#line 833 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29)
#line 833 "stack_opt.m"
{
#line 838 "stack_opt.m"
  {
#line 838 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 838 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_111_111 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 838 "stack_opt.m"
    MR_Word ll_backend__stack_opt__End_14;
#line 838 "stack_opt.m"
    MR_Word ll_backend__stack_opt__SuccessorIds_15;
#line 838 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 12)));
#line 838 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_31_31;
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 0)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 1)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 2)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 3)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 4)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 5)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 6)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 7)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 8)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 9)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 10)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 11)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 13)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 14)));
#line 839 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 15)));
#line 839 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_End_14;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_71_71;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_72_72;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_73_73;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_74_74;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_75_75;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_76_76;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_77_77;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_78_78;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_79_79;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_80_80;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_81_81;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_82_82;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_83_83;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_84_84;
#line 840 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_85_85;
#line 840 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv1_SuccessorIds_15;

#line 839 "stack_opt.m"
    {
#line 839 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_111_111, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ll_backend__stack_opt__V_30_30, ((MR_Box) (ll_backend__stack_opt__IntervalId_9)), &ll_backend__stack_opt__conv0_End_14);
    }
#line 839 "stack_opt.m"
    ll_backend__stack_opt__End_14 = ((MR_Word) ll_backend__stack_opt__conv0_End_14);
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 0)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 1)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 2)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 3)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 4)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 5)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 6)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 7)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 8)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 9)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 10)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 11)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 12)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 13)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 14)));
#line 840 "stack_opt.m"
    ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 15)));
#line 840 "stack_opt.m"
    {
#line 840 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_111_111, (MR_Word) &ll_backend__stack_opt_scalar_common_1[3], ll_backend__stack_opt__V_31_31, ((MR_Box) (ll_backend__stack_opt__IntervalId_9)), &ll_backend__stack_opt__conv1_SuccessorIds_15);
    }
#line 840 "stack_opt.m"
    ll_backend__stack_opt__SuccessorIds_15 = ((MR_Word) ll_backend__stack_opt__conv1_SuccessorIds_15);
#line 848 "stack_opt.m"
    if ((ll_backend__stack_opt__SuccessorIds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 842 "stack_opt.m"
      {
#line 842 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_50_50;
#line 842 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_54_54;

#line 843 "stack_opt.m"
        {
#line 843 "stack_opt.m"
          ll_backend__stack_opt__V_54_54 = ll_backend__stack_opt__may_have_no_successor_1_f_0(ll_backend__stack_opt__End_14);
        }
#line 843 "stack_opt.m"
        {
#line 843 "stack_opt.m"
          ll_backend__stack_opt__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 843 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
#line 843 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_1));
#line 843 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 843 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 3) = ((MR_Box) (ll_backend__stack_opt__V_54_54));
#line 843 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 4) = ((MR_Box) ((MR_Integer) 1));
#line 843 "stack_opt.m"
        }
#line 843 "stack_opt.m"
        {
#line 843 "stack_opt.m"
          mercury__require__expect_4_p_0(ll_backend__stack_opt__V_50_50, (MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected no successor");
        }
#line 842 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28;
#line 842 "stack_opt.m"
      }
#line 848 "stack_opt.m"
    else
#line 849 "stack_opt.m"
      {
#line 849 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MoreSuccessorIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_15, (MR_Integer) 1)));
#line 849 "stack_opt.m"
        MR_Word ll_backend__stack_opt__SuccessorId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_15, (MR_Integer) 0)));
#line 860 "stack_opt.m"
        MR_Word ll_backend__stack_opt__SearchAnchor0_20;

#line 854 "stack_opt.m"
        if ((ll_backend__stack_opt__MoreSuccessorIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 851 "stack_opt.m"
          {
#line 851 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_38_38;
#line 851 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_42_42;

#line 852 "stack_opt.m"
            {
#line 852 "stack_opt.m"
              ll_backend__stack_opt__V_42_42 = ll_backend__stack_opt__may_have_one_successor_1_f_0(ll_backend__stack_opt__End_14);
            }
#line 852 "stack_opt.m"
            {
#line 852 "stack_opt.m"
              ll_backend__stack_opt__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 852 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
#line 852 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_2));
#line 852 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 852 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 3) = ((MR_Box) (ll_backend__stack_opt__V_42_42));
#line 852 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 4) = ((MR_Box) ((MR_Integer) 1));
#line 852 "stack_opt.m"
            }
#line 852 "stack_opt.m"
            {
#line 852 "stack_opt.m"
              mercury__require__expect_4_p_0(ll_backend__stack_opt__V_38_38, (MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected one successor");
            }
#line 851 "stack_opt.m"
          }
#line 854 "stack_opt.m"
        else
#line 855 "stack_opt.m"
          {
#line 855 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_32_32;
#line 855 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_36_36;

#line 856 "stack_opt.m"
            {
#line 856 "stack_opt.m"
              ll_backend__stack_opt__V_36_36 = ll_backend__stack_opt__may_have_more_successors_1_f_0(ll_backend__stack_opt__End_14);
            }
#line 856 "stack_opt.m"
            {
#line 856 "stack_opt.m"
              ll_backend__stack_opt__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 856 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
#line 856 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_3));
#line 856 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 856 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 3) = ((MR_Box) (ll_backend__stack_opt__V_36_36));
#line 856 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 4) = ((MR_Box) ((MR_Integer) 1));
#line 856 "stack_opt.m"
            }
#line 856 "stack_opt.m"
            {
#line 856 "stack_opt.m"
              mercury__require__expect_4_p_0(ll_backend__stack_opt__V_32_32, (MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected more successors");
            }
#line 855 "stack_opt.m"
          }
#line 860 "stack_opt.m"
        ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__MaybeSearchAnchor0_10)) == (MR_mktag((MR_Integer) 1)));
#line 860 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 860 "stack_opt.m"
          {
#line 860 "stack_opt.m"
            ll_backend__stack_opt__SearchAnchor0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchor0_10, (MR_Integer) 0)));
#line 861 "stack_opt.m"
            {
#line 861 "stack_opt.m"
              ll_backend__stack_opt__succeeded = backend_libs__interval____Unify____anchor_0_0(ll_backend__stack_opt__End_14, ll_backend__stack_opt__SearchAnchor0_20);
            }
#line 860 "stack_opt.m"
          }
#line 859 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 863 "stack_opt.m"
          {
#line 863 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_45_45;
#line 863 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_86_86;
#line 863 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_87_87;
#line 863 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_88_88;

#line 863 "stack_opt.m"
            {
#line 863 "stack_opt.m"
              ll_backend__stack_opt__V_45_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
#line 863 "stack_opt.m"
            ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0)));
#line 863 "stack_opt.m"
            ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1)));
#line 863 "stack_opt.m"
            ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 2)));
#line 863 "stack_opt.m"
            {
#line 863 "stack_opt.m"
              MR_Word base;
#line 863 "stack_opt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 863 "stack_opt.m"
              *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29 = base;
#line 863 "stack_opt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_86_86));
#line 863 "stack_opt.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__V_87_87));
#line 863 "stack_opt.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__V_45_45));
#line 863 "stack_opt.m"
            }
#line 863 "stack_opt.m"
          }
#line 859 "stack_opt.m"
        else
#line 864 "stack_opt.m"
          {
#line 864 "stack_opt.m"
            MR_Word ll_backend__stack_opt__RelevantAfter_27;
#line 865 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_118_118;
#line 865 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_119_119;
#line 865 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_120_120;
#line 865 "stack_opt.m"
            MR_Word ll_backend__stack_opt__EndGoalId_22;
#line 865 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchEndInfo_23;
#line 865 "stack_opt.m"
            MR_Word ll_backend__stack_opt__OnStackAfterBranch_24;
#line 865 "stack_opt.m"
            MR_Word ll_backend__stack_opt__AccessedAfterBranch_25;
#line 865 "stack_opt.m"
            MR_Word ll_backend__stack_opt__NeededAfterBranch_26;
#line 865 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_46_46;
#line 865 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_21_21;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_89_89;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_90_90;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_91_91;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_92_92;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_93_93;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_94_94;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_95_95;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_96_96;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_97_97;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_98_98;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_99_99;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_100_100;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_101_101;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_102_102;
#line 866 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_103_103;
#line 866 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv2_BranchEndInfo_23;
#line 868 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_105_105;

#line 865 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((((MR_tag((MR_Word) ll_backend__stack_opt__End_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__End_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 865 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 865 "stack_opt.m"
              {
#line 865 "stack_opt.m"
                ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__End_14, (MR_Integer) 1)));
#line 865 "stack_opt.m"
                ll_backend__stack_opt__EndGoalId_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__End_14, (MR_Integer) 2)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 0)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 1)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 2)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 3)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 4)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 5)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 6)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 7)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 8)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 9)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 10)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 11)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 12)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 13)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 14)));
#line 866 "stack_opt.m"
                ll_backend__stack_opt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 15)));
#line 9740 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeCtorInfo_118_118 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 9742 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeCtorInfo_119_119 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0;
#line 866 "stack_opt.m"
                {
#line 866 "stack_opt.m"
                  mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_118_118, ll_backend__stack_opt__TypeCtorInfo_119_119, ll_backend__stack_opt__V_46_46, ((MR_Box) (ll_backend__stack_opt__EndGoalId_22)), &ll_backend__stack_opt__conv2_BranchEndInfo_23);
                }
#line 866 "stack_opt.m"
                ll_backend__stack_opt__BranchEndInfo_23 = ((MR_Word) ll_backend__stack_opt__conv2_BranchEndInfo_23);
#line 868 "stack_opt.m"
                ll_backend__stack_opt__OnStackAfterBranch_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 0)));
#line 868 "stack_opt.m"
                ll_backend__stack_opt__AccessedAfterBranch_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 1)));
#line 868 "stack_opt.m"
                ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 2)));
#line 9757 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 870 "stack_opt.m"
                {
#line 870 "stack_opt.m"
                  ll_backend__stack_opt__NeededAfterBranch_26 = parse_tree__set_of_var__union_2_f_0(ll_backend__stack_opt__TypeCtorInfo_120_120, ll_backend__stack_opt__OnStackAfterBranch_24, ll_backend__stack_opt__AccessedAfterBranch_25);
                }
#line 872 "stack_opt.m"
                {
#line 872 "stack_opt.m"
                  ll_backend__stack_opt__RelevantAfter_27 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__stack_opt__TypeCtorInfo_120_120, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__NeededAfterBranch_26);
                }
#line 874 "stack_opt.m"
                {
#line 874 "stack_opt.m"
                  ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_120_120, ll_backend__stack_opt__RelevantAfter_27);
                }
#line 865 "stack_opt.m"
              }
#line 864 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 876 "stack_opt.m"
              {
#line 876 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0)));
#line 876 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1)));
#line 876 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 2)));

#line 876 "stack_opt.m"
                {
#line 876 "stack_opt.m"
                  MR_Word base;
#line 876 "stack_opt.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 876 "stack_opt.m"
                  *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29 = base;
#line 876 "stack_opt.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_108_108));
#line 876 "stack_opt.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__V_109_109));
#line 876 "stack_opt.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__RelevantAfter_27));
#line 876 "stack_opt.m"
                }
#line 876 "stack_opt.m"
              }
#line 864 "stack_opt.m"
            else
#line 878 "stack_opt.m"
              {
#line 878 "stack_opt.m"
                ll_backend__stack_opt__find_all_branches_from_8_p_0(ll_backend__stack_opt__End_14, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__MaybeSearchAnchor0_10, ll_backend__stack_opt__IntervalInfo_11, ll_backend__stack_opt__StackOptInfo_12, ll_backend__stack_opt__SuccessorIds_15, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29);
              }
#line 864 "stack_opt.m"
          }
#line 849 "stack_opt.m"
      }
#line 838 "stack_opt.m"
  }
#line 833 "stack_opt.m"
}

#line 826 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1(
#line 826 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 826 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 826 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 826 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 826 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 826 "stack_opt.m"
{
#line 826 "stack_opt.m"
  {
#line 826 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 826 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv3_MatchPathInfo_6;
#line 826 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv2_Anchors_7;
#line 826 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_Intervals_8;

#line 826 "stack_opt.m"
    {
#line 826 "stack_opt.m"
      ll_backend__stack_opt__extract_match_and_save_info_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv3_MatchPathInfo_6, &ll_backend__stack_opt__conv2_Anchors_7, &ll_backend__stack_opt__conv1_Intervals_8);
    }
#line 826 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv3_MatchPathInfo_6));
#line 826 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv2_Anchors_7));
#line 826 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv1_Intervals_8));
#line 826 "stack_opt.m"
  }
#line 826 "stack_opt.m"
}

#line 811 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(
#line 811 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_5,
#line 811 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchInfo_6,
#line 811 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_7,
#line 811 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_8)
#line 811 "stack_opt.m"
{
#line 815 "stack_opt.m"
  {
#line 815 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_65_65 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_67_67;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_68_68;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_69_69;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 6)));
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalVars_10;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalRelevantVars_11;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Path0_12;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AllPaths0_13;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AllPaths_14;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths_15;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon_16;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__RelevantAfter_17;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PathList_18;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__MatchInputs_19;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushAnchorSets_20;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OccurringIntervalSets_21;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushAnchors_22;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OccurringIntervals_23;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_26_26;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_28_28;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_29_29;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_30_30;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_32_32;
#line 815 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 14)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 0)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 1)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 2)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 3)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 4)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 5)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 7)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 8)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 9)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 10)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 11)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 12)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 13)));
#line 816 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 15)));
#line 817 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_IntervalVars_10;

#line 817 "stack_opt.m"
    {
#line 817 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_65_65, (MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__V_48_48, ((MR_Box) (ll_backend__stack_opt__IntervalId_9)), &ll_backend__stack_opt__conv0_IntervalVars_10);
    }
#line 817 "stack_opt.m"
    ll_backend__stack_opt__IntervalVars_10 = ((MR_Word) ll_backend__stack_opt__conv0_IntervalVars_10);
#line 9968 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 818 "stack_opt.m"
    {
#line 818 "stack_opt.m"
      ll_backend__stack_opt__IntervalRelevantVars_11 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__stack_opt__TypeCtorInfo_67_67, ll_backend__stack_opt__RelevantVars_5, ll_backend__stack_opt__IntervalVars_10);
    }
#line 820 "stack_opt.m"
    {
#line 820 "stack_opt.m"
      ll_backend__stack_opt__V_26_26 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_67_67);
    }
#line 9980 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_68_68 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 820 "stack_opt.m"
    {
#line 820 "stack_opt.m"
      ll_backend__stack_opt__V_28_28 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_68_68);
    }
#line 820 "stack_opt.m"
    {
#line 820 "stack_opt.m"
      ll_backend__stack_opt__V_29_29 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_65_65);
    }
#line 819 "stack_opt.m"
    {
#line 819 "stack_opt.m"
      ll_backend__stack_opt__Path0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 819 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 0) = ((MR_Box) ((MR_Integer) 0));
#line 819 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 1) = ((MR_Box) (ll_backend__stack_opt__IntervalRelevantVars_11));
#line 819 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 2) = ((MR_Box) (ll_backend__stack_opt__V_26_26));
#line 819 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 4) = ((MR_Box) (ll_backend__stack_opt__V_28_28));
#line 819 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 5) = ((MR_Box) (ll_backend__stack_opt__V_29_29));
#line 819 "stack_opt.m"
    }
#line 10010 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_69_69 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0;
#line 821 "stack_opt.m"
    {
#line 821 "stack_opt.m"
      ll_backend__stack_opt__V_30_30 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_opt__TypeCtorInfo_69_69, ((MR_Box) (ll_backend__stack_opt__Path0_12)));
    }
#line 821 "stack_opt.m"
    {
#line 821 "stack_opt.m"
      ll_backend__stack_opt__V_32_32 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_67_67);
    }
#line 821 "stack_opt.m"
    {
#line 821 "stack_opt.m"
      ll_backend__stack_opt__AllPaths0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 821 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths0_13, 0) = ((MR_Box) (ll_backend__stack_opt__V_30_30));
#line 821 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths0_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 821 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths0_13, 2) = ((MR_Box) (ll_backend__stack_opt__V_32_32));
#line 821 "stack_opt.m"
    }
#line 822 "stack_opt.m"
    {
#line 822 "stack_opt.m"
      ll_backend__stack_opt__find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_5, ll_backend__stack_opt__IntervalId_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__stack_opt__IntervalInfo_7, ll_backend__stack_opt__StackOptInfo_8, ll_backend__stack_opt__AllPaths0_13, &ll_backend__stack_opt__AllPaths_14);
    }
#line 824 "stack_opt.m"
    ll_backend__stack_opt__Paths_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths_14, (MR_Integer) 0)));
#line 824 "stack_opt.m"
    ll_backend__stack_opt__AfterModelNon_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths_14, (MR_Integer) 1)));
#line 824 "stack_opt.m"
    ll_backend__stack_opt__RelevantAfter_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths_14, (MR_Integer) 2)));
#line 825 "stack_opt.m"
    {
#line 825 "stack_opt.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__stack_opt__TypeCtorInfo_69_69, ll_backend__stack_opt__Paths_15, &ll_backend__stack_opt__PathList_18);
    }
#line 826 "stack_opt.m"
    {
#line 826 "stack_opt.m"
      mercury__list__map3_5_p_0(ll_backend__stack_opt__TypeCtorInfo_69_69, (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0, (MR_Word) &ll_backend__stack_opt_scalar_common_1[10], (MR_Word) &ll_backend__stack_opt_scalar_common_1[9], (MR_Word) &ll_backend__stack_opt_scalar_common_2[2], ll_backend__stack_opt__PathList_18, &ll_backend__stack_opt__MatchInputs_19, &ll_backend__stack_opt__FlushAnchorSets_20, &ll_backend__stack_opt__OccurringIntervalSets_21);
    }
#line 828 "stack_opt.m"
    {
#line 828 "stack_opt.m"
      ll_backend__stack_opt__FlushAnchors_22 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_68_68, ll_backend__stack_opt__FlushAnchorSets_20);
    }
#line 829 "stack_opt.m"
    {
#line 829 "stack_opt.m"
      ll_backend__stack_opt__OccurringIntervals_23 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_65_65, ll_backend__stack_opt__OccurringIntervalSets_21);
    }
#line 830 "stack_opt.m"
    {
#line 830 "stack_opt.m"
      MR_Word base;
#line 830 "stack_opt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 830 "stack_opt.m"
      *ll_backend__stack_opt__MatchInfo_6 = base;
#line 830 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__MatchInputs_19));
#line 830 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__RelevantAfter_17));
#line 830 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__AfterModelNon_16));
#line 830 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__stack_opt__FlushAnchors_22));
#line 830 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__stack_opt__OccurringIntervals_23));
#line 830 "stack_opt.m"
    }
#line 815 "stack_opt.m"
  }
#line 811 "stack_opt.m"
}

#line 789 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_more_successors_1_f_0(
#line 789 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 789 "stack_opt.m"
{
#line 791 "stack_opt.m"
  {
#line 791 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 791 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__2_2;

#line 791 "stack_opt.m"
#line 791 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) {
#line 791 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 791 "stack_opt.m"
      case (MR_Integer) 0:
#line 791 "stack_opt.m"
#line 791 "stack_opt.m"
        switch (MR_unmkbody(ll_backend__stack_opt__HeadVar__1_1)) {
#line 791 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 791 "stack_opt.m"
          case (MR_Integer) 0:
#line 791 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 791 "stack_opt.m"
            break;
#line 791 "stack_opt.m"
          case (MR_Integer) 1:
#line 792 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 791 "stack_opt.m"
            break;
#line 791 "stack_opt.m"
        }
#line 791 "stack_opt.m"
        break;
#line 791 "stack_opt.m"
      case (MR_Integer) 1:
#line 793 "stack_opt.m"
        {
#line 793 "stack_opt.m"
          MR_Word ll_backend__stack_opt__BranchType_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 793 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));

#line 797 "stack_opt.m"
          ll_backend__stack_opt__HeadVar__2_2 = ((&ll_backend__stack_opt_vector_common_7[5 + ll_backend__stack_opt__BranchType_3]))->ll_backend__stack_opt__vector_common_type_7_0__vct_7_f_0;
#line 793 "stack_opt.m"
        }
#line 791 "stack_opt.m"
        break;
#line 791 "stack_opt.m"
      case (MR_Integer) 2:
#line 805 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 791 "stack_opt.m"
        break;
#line 791 "stack_opt.m"
      case (MR_Integer) 3:
#line 791 "stack_opt.m"
#line 791 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)))) {
#line 791 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 791 "stack_opt.m"
          case (MR_Integer) 0:
#line 806 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 791 "stack_opt.m"
            break;
#line 791 "stack_opt.m"
          case (MR_Integer) 1:
#line 807 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 791 "stack_opt.m"
            break;
#line 791 "stack_opt.m"
        }
#line 791 "stack_opt.m"
        break;
#line 791 "stack_opt.m"
    }
#line 791 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__2_2;
#line 791 "stack_opt.m"
  }
#line 789 "stack_opt.m"
}

#line 780 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_one_successor_1_f_0(
#line 780 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 780 "stack_opt.m"
{
#line 782 "stack_opt.m"
  {
#line 782 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 782 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__2_2;

#line 782 "stack_opt.m"
#line 782 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) {
#line 782 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 782 "stack_opt.m"
      case (MR_Integer) 0:
#line 782 "stack_opt.m"
#line 782 "stack_opt.m"
        switch (MR_unmkbody(ll_backend__stack_opt__HeadVar__1_1)) {
#line 782 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 782 "stack_opt.m"
          case (MR_Integer) 0:
#line 782 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 782 "stack_opt.m"
            break;
#line 782 "stack_opt.m"
          case (MR_Integer) 1:
#line 783 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 782 "stack_opt.m"
            break;
#line 782 "stack_opt.m"
        }
#line 782 "stack_opt.m"
        break;
#line 782 "stack_opt.m"
      case (MR_Integer) 1:
#line 784 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 782 "stack_opt.m"
        break;
#line 782 "stack_opt.m"
      case (MR_Integer) 2:
#line 785 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 782 "stack_opt.m"
        break;
#line 782 "stack_opt.m"
      case (MR_Integer) 3:
#line 782 "stack_opt.m"
#line 782 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)))) {
#line 782 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 782 "stack_opt.m"
          case (MR_Integer) 0:
#line 786 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 782 "stack_opt.m"
            break;
#line 782 "stack_opt.m"
          case (MR_Integer) 1:
#line 787 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 782 "stack_opt.m"
            break;
#line 782 "stack_opt.m"
        }
#line 782 "stack_opt.m"
        break;
#line 782 "stack_opt.m"
    }
#line 782 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__2_2;
#line 782 "stack_opt.m"
  }
#line 780 "stack_opt.m"
}

#line 771 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_no_successor_1_f_0(
#line 771 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 771 "stack_opt.m"
{
#line 773 "stack_opt.m"
  {
#line 773 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 773 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__2_2;

#line 773 "stack_opt.m"
#line 773 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) {
#line 773 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 773 "stack_opt.m"
      case (MR_Integer) 0:
#line 773 "stack_opt.m"
#line 773 "stack_opt.m"
        switch (MR_unmkbody(ll_backend__stack_opt__HeadVar__1_1)) {
#line 773 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 773 "stack_opt.m"
          case (MR_Integer) 0:
#line 773 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 773 "stack_opt.m"
            break;
#line 773 "stack_opt.m"
          case (MR_Integer) 1:
#line 774 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 773 "stack_opt.m"
            break;
#line 773 "stack_opt.m"
        }
#line 773 "stack_opt.m"
        break;
#line 773 "stack_opt.m"
      case (MR_Integer) 1:
#line 775 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 773 "stack_opt.m"
        break;
#line 773 "stack_opt.m"
      case (MR_Integer) 2:
#line 776 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 773 "stack_opt.m"
        break;
#line 773 "stack_opt.m"
      case (MR_Integer) 3:
#line 773 "stack_opt.m"
#line 773 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)))) {
#line 773 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 773 "stack_opt.m"
          case (MR_Integer) 0:
#line 777 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 773 "stack_opt.m"
            break;
#line 773 "stack_opt.m"
          case (MR_Integer) 1:
#line 778 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 773 "stack_opt.m"
            break;
#line 773 "stack_opt.m"
        }
#line 773 "stack_opt.m"
        break;
#line 773 "stack_opt.m"
    }
#line 773 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__2_2;
#line 773 "stack_opt.m"
  }
#line 771 "stack_opt.m"
}

#line 743 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__anchor_requires_close_2_f_0(
#line 743 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_1,
#line 743 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 743 "stack_opt.m"
{
#line 745 "stack_opt.m"
  {
#line 745 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 745 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__3_3;

#line 745 "stack_opt.m"
#line 745 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__2_2)) {
#line 745 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 745 "stack_opt.m"
      case (MR_Integer) 0:
#line 745 "stack_opt.m"
#line 745 "stack_opt.m"
        switch (MR_unmkbody(ll_backend__stack_opt__HeadVar__2_2)) {
#line 745 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 745 "stack_opt.m"
          case (MR_Integer) 0:
#line 745 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 745 "stack_opt.m"
            break;
#line 745 "stack_opt.m"
          case (MR_Integer) 1:
#line 746 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 745 "stack_opt.m"
            break;
#line 745 "stack_opt.m"
        }
#line 745 "stack_opt.m"
        break;
#line 745 "stack_opt.m"
      case (MR_Integer) 1:
#line 748 "stack_opt.m"
        {
#line 748 "stack_opt.m"
          MR_Word ll_backend__stack_opt__GoalId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 748 "stack_opt.m"
          MR_Word ll_backend__stack_opt__ResumeSaveStatus_9;
#line 748 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 3)));
#line 747 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 0)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 1)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 2)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 4)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 5)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 6)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 7)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 8)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 9)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 10)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 11)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 12)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 13)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 14)));
#line 749 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 15)));
#line 749 "stack_opt.m"
          MR_Box ll_backend__stack_opt__conv0_ResumeSaveStatus_9;

#line 749 "stack_opt.m"
          {
#line 749 "stack_opt.m"
            mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0, ll_backend__stack_opt__V_10_10, ((MR_Box) (ll_backend__stack_opt__GoalId_8)), &ll_backend__stack_opt__conv0_ResumeSaveStatus_9);
          }
#line 749 "stack_opt.m"
          ll_backend__stack_opt__ResumeSaveStatus_9 = ((MR_Word) ll_backend__stack_opt__conv0_ResumeSaveStatus_9);
#line 768 "stack_opt.m"
#line 768 "stack_opt.m"
          switch (ll_backend__stack_opt__ResumeSaveStatus_9) {
#line 768 "stack_opt.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 768 "stack_opt.m"
            case (MR_Integer) 1:
#line 769 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 768 "stack_opt.m"
              break;
#line 768 "stack_opt.m"
            case (MR_Integer) 0:
#line 768 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 768 "stack_opt.m"
              break;
#line 768 "stack_opt.m"
          }
#line 748 "stack_opt.m"
        }
#line 745 "stack_opt.m"
        break;
#line 745 "stack_opt.m"
      case (MR_Integer) 2:
#line 751 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 745 "stack_opt.m"
        break;
#line 745 "stack_opt.m"
      case (MR_Integer) 3:
#line 745 "stack_opt.m"
#line 745 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)))) {
#line 745 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 745 "stack_opt.m"
          case (MR_Integer) 0:
#line 752 "stack_opt.m"
            {
#line 752 "stack_opt.m"
              MR_Word ll_backend__stack_opt__BranchType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 752 "stack_opt.m"
              MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));

#line 756 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__3_3 = ((&ll_backend__stack_opt_vector_common_7[0 + ll_backend__stack_opt__BranchType_14]))->ll_backend__stack_opt__vector_common_type_7_0__vct_7_f_0;
#line 752 "stack_opt.m"
            }
#line 745 "stack_opt.m"
            break;
#line 745 "stack_opt.m"
          case (MR_Integer) 1:
#line 764 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 745 "stack_opt.m"
            break;
#line 745 "stack_opt.m"
        }
#line 745 "stack_opt.m"
        break;
#line 745 "stack_opt.m"
    }
#line 745 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__3_3;
#line 745 "stack_opt.m"
  }
#line 743 "stack_opt.m"
}

#line 736 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_anchor_to_path_2_f_0(
#line 736 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_4,
#line 736 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_8)
#line 736 "stack_opt.m"
{
#line 738 "stack_opt.m"
  {
#line 738 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 738 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_9;
#line 738 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Anchors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 4)));
#line 738 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Anchors_7;
#line 739 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 0)));
#line 739 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 1)));
#line 739 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 2)));
#line 739 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 3)));
#line 739 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 5)));
#line 741 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_16_16;
#line 741 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_17_17;
#line 741 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_18_18;
#line 741 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;
#line 741 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_21_21;
#line 741 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_20_20;

#line 740 "stack_opt.m"
    {
#line 740 "stack_opt.m"
      mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__Anchor_4)), ll_backend__stack_opt__Anchors0_6, &ll_backend__stack_opt__Anchors_7);
    }
#line 741 "stack_opt.m"
    ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 0)));
#line 741 "stack_opt.m"
    ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 1)));
#line 741 "stack_opt.m"
    ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 2)));
#line 741 "stack_opt.m"
    ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 3)));
#line 741 "stack_opt.m"
    ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 4)));
#line 741 "stack_opt.m"
    ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 5)));
#line 741 "stack_opt.m"
    {
#line 741 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_Path_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 741 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 0) = ((MR_Box) (ll_backend__stack_opt__V_16_16));
#line 741 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 1) = ((MR_Box) (ll_backend__stack_opt__V_17_17));
#line 741 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 2) = ((MR_Box) (ll_backend__stack_opt__V_18_18));
#line 741 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 3) = ((MR_Box) (ll_backend__stack_opt__V_19_19));
#line 741 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 4) = ((MR_Box) (ll_backend__stack_opt__Anchors_7));
#line 741 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 5) = ((MR_Box) (ll_backend__stack_opt__V_21_21));
#line 741 "stack_opt.m"
    }
#line 738 "stack_opt.m"
    return ll_backend__stack_opt__STATE_VARIABLE_Path_9;
#line 738 "stack_opt.m"
  }
#line 736 "stack_opt.m"
}

#line 722 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_interval_to_path_3_f_0(
#line 722 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_5,
#line 722 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Vars_6,
#line 722 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_12)
#line 722 "stack_opt.m"
{
#line 725 "stack_opt.m"
  {
#line 725 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 725 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_13;

#line 725 "stack_opt.m"
    {
#line 725 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__Vars_6);
    }
#line 725 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 725 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_Path_13 = ll_backend__stack_opt__STATE_VARIABLE_Path_0_12;
#line 725 "stack_opt.m"
    else
#line 728 "stack_opt.m"
      {
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__CurSegment0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 1)));
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__CurSegment_9;
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__OccurringIntervals0_10;
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__OccurringIntervals_11;
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_26_26;
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_28_28;
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_29_29;
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_30_30;
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 0)));
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 2)));
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 3)));
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 4)));
#line 728 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 5)));
#line 730 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_21_21;
#line 730 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_22_22;
#line 730 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_23_23;
#line 730 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_24_24;
#line 730 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_25_25;
#line 732 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_27_27;
#line 732 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_31_31;

#line 729 "stack_opt.m"
        {
#line 729 "stack_opt.m"
          ll_backend__stack_opt__CurSegment_9 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__Vars_6, ll_backend__stack_opt__CurSegment0_8);
        }
#line 730 "stack_opt.m"
        ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 0)));
#line 730 "stack_opt.m"
        ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 1)));
#line 730 "stack_opt.m"
        ll_backend__stack_opt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 2)));
#line 730 "stack_opt.m"
        ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 3)));
#line 730 "stack_opt.m"
        ll_backend__stack_opt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 4)));
#line 730 "stack_opt.m"
        ll_backend__stack_opt__OccurringIntervals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 5)));
#line 731 "stack_opt.m"
        {
#line 731 "stack_opt.m"
          mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (ll_backend__stack_opt__IntervalId_5)), ll_backend__stack_opt__OccurringIntervals0_10, &ll_backend__stack_opt__OccurringIntervals_11);
        }
#line 732 "stack_opt.m"
        ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 0)));
#line 732 "stack_opt.m"
        ll_backend__stack_opt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 1)));
#line 732 "stack_opt.m"
        ll_backend__stack_opt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 2)));
#line 732 "stack_opt.m"
        ll_backend__stack_opt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 3)));
#line 732 "stack_opt.m"
        ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 4)));
#line 732 "stack_opt.m"
        ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 5)));
#line 733 "stack_opt.m"
        {
#line 733 "stack_opt.m"
          ll_backend__stack_opt__STATE_VARIABLE_Path_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 733 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 0) = ((MR_Box) (ll_backend__stack_opt__V_26_26));
#line 733 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 1) = ((MR_Box) (ll_backend__stack_opt__CurSegment_9));
#line 733 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 2) = ((MR_Box) (ll_backend__stack_opt__V_28_28));
#line 733 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 3) = ((MR_Box) (ll_backend__stack_opt__V_29_29));
#line 733 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 4) = ((MR_Box) (ll_backend__stack_opt__V_30_30));
#line 733 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 5) = ((MR_Box) (ll_backend__stack_opt__OccurringIntervals_11));
#line 733 "stack_opt.m"
        }
#line 728 "stack_opt.m"
      }
#line 725 "stack_opt.m"
    return ll_backend__stack_opt__STATE_VARIABLE_Path_13;
#line 725 "stack_opt.m"
  }
#line 722 "stack_opt.m"
}

#line 705 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__close_path_1_f_0_1(
#line 705 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 705 "stack_opt.m"
{
#line 705 "stack_opt.m"
  {
#line 705 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 705 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 705 "stack_opt.m"
    {
#line 705 "stack_opt.m"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__close_path__705__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))));
    }
#line 705 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 705 "stack_opt.m"
  }
#line 705 "stack_opt.m"
}

#line 698 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__close_path_1_f_0(
#line 698 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_3)
#line 698 "stack_opt.m"
{
#line 700 "stack_opt.m"
  {
#line 700 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 700 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Path_4;
#line 700 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushState_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 0)));
#line 700 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CurSegment_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 1)));
#line 700 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FirstSegment0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 2)));
#line 700 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OtherSegments0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 3)));
#line 700 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushAnchors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 4)));
#line 700 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 5)));
#line 700 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FirstSegment_11;
#line 700 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OtherSegments_12;
#line 700 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_18_18;

#line 709 "stack_opt.m"
#line 709 "stack_opt.m"
    switch (ll_backend__stack_opt__FlushState_5) {
#line 709 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 709 "stack_opt.m"
      case (MR_Integer) 1:
#line 711 "stack_opt.m"
        {
#line 711 "stack_opt.m"
          {
#line 711 "stack_opt.m"
            ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__CurSegment_6);
          }
#line 711 "stack_opt.m"
          if (ll_backend__stack_opt__succeeded)
#line 712 "stack_opt.m"
            {
#line 712 "stack_opt.m"
              ll_backend__stack_opt__FirstSegment_11 = ll_backend__stack_opt__FirstSegment0_7;
#line 713 "stack_opt.m"
              ll_backend__stack_opt__OtherSegments_12 = ll_backend__stack_opt__OtherSegments0_8;
#line 712 "stack_opt.m"
            }
#line 711 "stack_opt.m"
          else
#line 715 "stack_opt.m"
            {
#line 715 "stack_opt.m"
              ll_backend__stack_opt__FirstSegment_11 = ll_backend__stack_opt__FirstSegment0_7;
#line 716 "stack_opt.m"
              {
#line 716 "stack_opt.m"
                ll_backend__stack_opt__OtherSegments_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "stack_opt.m"
                MR_hl_field(MR_mktag(1), ll_backend__stack_opt__OtherSegments_12, 0) = ((MR_Box) (ll_backend__stack_opt__CurSegment_6));
#line 716 "stack_opt.m"
                MR_hl_field(MR_mktag(1), ll_backend__stack_opt__OtherSegments_12, 1) = ((MR_Box) (ll_backend__stack_opt__OtherSegments0_8));
#line 716 "stack_opt.m"
              }
#line 715 "stack_opt.m"
            }
#line 711 "stack_opt.m"
        }
#line 709 "stack_opt.m"
        break;
#line 709 "stack_opt.m"
      case (MR_Integer) 0:
#line 704 "stack_opt.m"
        {
#line 704 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_13_13;

#line 705 "stack_opt.m"
          {
#line 705 "stack_opt.m"
            ll_backend__stack_opt__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 705 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_6[0]));
#line 705 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 1) = ((MR_Box) (ll_backend__stack_opt__close_path_1_f_0_1));
#line 705 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 705 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 3) = ((MR_Box) (ll_backend__stack_opt__FirstSegment0_7));
#line 705 "stack_opt.m"
          }
#line 705 "stack_opt.m"
          {
#line 705 "stack_opt.m"
            mercury__require__expect_4_p_0(ll_backend__stack_opt__V_13_13, (MR_String) "ll_backend.stack_opt", (MR_String) "function \140ll_backend.stack_opt.close_path\'/1", (MR_String) "FirstSegment0 not empty");
          }
#line 707 "stack_opt.m"
          ll_backend__stack_opt__FirstSegment_11 = ll_backend__stack_opt__CurSegment_6;
#line 708 "stack_opt.m"
          ll_backend__stack_opt__OtherSegments_12 = ll_backend__stack_opt__OtherSegments0_8;
#line 704 "stack_opt.m"
        }
#line 709 "stack_opt.m"
        break;
#line 709 "stack_opt.m"
    }
#line 719 "stack_opt.m"
    {
#line 719 "stack_opt.m"
      ll_backend__stack_opt__V_18_18 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 719 "stack_opt.m"
    {
#line 719 "stack_opt.m"
      ll_backend__stack_opt__Path_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 719 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 719 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 1) = ((MR_Box) (ll_backend__stack_opt__V_18_18));
#line 719 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 2) = ((MR_Box) (ll_backend__stack_opt__FirstSegment_11));
#line 719 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 3) = ((MR_Box) (ll_backend__stack_opt__OtherSegments_12));
#line 719 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 4) = ((MR_Box) (ll_backend__stack_opt__FlushAnchors_9));
#line 719 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 5) = ((MR_Box) (ll_backend__stack_opt__IntervalIds_10));
#line 719 "stack_opt.m"
    }
#line 700 "stack_opt.m"
    return ll_backend__stack_opt__Path_4;
#line 700 "stack_opt.m"
  }
#line 698 "stack_opt.m"
}

#line 687 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__extract_match_and_save_info_4_p_0(
#line 687 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_5,
#line 687 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchPathInfo_6,
#line 687 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Anchors_7,
#line 687 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Intervals_8)
#line 687 "stack_opt.m"
{
#line 690 "stack_opt.m"
  {
#line 690 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 690 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Path_9;
#line 690 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FirstSegment_10;
#line 690 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OtherSegments_11;
#line 692 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_12_12;
#line 692 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_13_13;

#line 691 "stack_opt.m"
    {
#line 691 "stack_opt.m"
      ll_backend__stack_opt__Path_9 = ll_backend__stack_opt__close_path_1_f_0(ll_backend__stack_opt__Path0_5);
    }
#line 692 "stack_opt.m"
    ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 0)));
#line 692 "stack_opt.m"
    ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 1)));
#line 692 "stack_opt.m"
    ll_backend__stack_opt__FirstSegment_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 2)));
#line 692 "stack_opt.m"
    ll_backend__stack_opt__OtherSegments_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 3)));
#line 692 "stack_opt.m"
    *ll_backend__stack_opt__Anchors_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 4)));
#line 692 "stack_opt.m"
    *ll_backend__stack_opt__Intervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 5)));
#line 694 "stack_opt.m"
    {
#line 694 "stack_opt.m"
      MR_Word base;
#line 694 "stack_opt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 694 "stack_opt.m"
      *ll_backend__stack_opt__MatchPathInfo_6 = base;
#line 694 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__FirstSegment_10));
#line 694 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__OtherSegments_11));
#line 694 "stack_opt.m"
    }
#line 690 "stack_opt.m"
  }
#line 687 "stack_opt.m"
}

#line 630 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__add_anchor_inserts_10_p_0(
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_11,
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVarsViaCellVar_12,
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__InsertIntervals_13,
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_14,
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27,
#line 630 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_28,
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29,
#line 630 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30,
#line 630 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31,
#line 630 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32)
#line 630 "stack_opt.m"
{
#line 636 "stack_opt.m"
  {
#line 636 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 636 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_58_58 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 636 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_60_60;
#line 636 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorFollow_18;
#line 636 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorIntervals_20;
#line 636 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorInsertIntervals_21;
#line 636 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 9)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 0)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 1)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 2)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 3)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 4)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 5)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 6)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 7)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 8)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 10)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 11)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 12)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 13)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 14)));
#line 637 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 15)));
#line 637 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_AnchorFollow_18;
#line 638 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;

#line 637 "stack_opt.m"
    {
#line 637 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, ll_backend__stack_opt__V_33_33, ((MR_Box) (ll_backend__stack_opt__Anchor_14)), &ll_backend__stack_opt__conv0_AnchorFollow_18);
    }
#line 637 "stack_opt.m"
    ll_backend__stack_opt__AnchorFollow_18 = ((MR_Word) ll_backend__stack_opt__conv0_AnchorFollow_18);
#line 638 "stack_opt.m"
    ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AnchorFollow_18, (MR_Integer) 0)));
#line 638 "stack_opt.m"
    ll_backend__stack_opt__AnchorIntervals_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AnchorFollow_18, (MR_Integer) 1)));
#line 11061 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_60_60 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 639 "stack_opt.m"
    {
#line 639 "stack_opt.m"
      mercury__set__intersect_3_p_0(ll_backend__stack_opt__TypeCtorInfo_60_60, ll_backend__stack_opt__AnchorIntervals_20, ll_backend__stack_opt__InsertIntervals_13, &ll_backend__stack_opt__AnchorInsertIntervals_21);
    }
#line 641 "stack_opt.m"
    {
#line 641 "stack_opt.m"
      ll_backend__stack_opt__succeeded = mercury__set__is_non_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_60_60, ll_backend__stack_opt__AnchorInsertIntervals_21);
    }
#line 641 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 642 "stack_opt.m"
      {
#line 642 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Insert_22;
#line 642 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertMap0_23;
#line 642 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertMap_26;
#line 643 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_53_53;
#line 643 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_54_54;
#line 644 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Inserts0_24;
#line 644 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv1_Inserts0_24;
#line 651 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_55_55;
#line 651 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_57_57;
#line 651 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_56_56;

#line 642 "stack_opt.m"
        {
#line 642 "stack_opt.m"
          ll_backend__stack_opt__Insert_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 642 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Insert_22, 0) = ((MR_Box) (ll_backend__stack_opt__Goal_11));
#line 642 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Insert_22, 1) = ((MR_Box) (ll_backend__stack_opt__ArgVarsViaCellVar_12));
#line 642 "stack_opt.m"
        }
#line 643 "stack_opt.m"
        ll_backend__stack_opt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 0)));
#line 643 "stack_opt.m"
        ll_backend__stack_opt__InsertMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 1)));
#line 643 "stack_opt.m"
        ll_backend__stack_opt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 2)));
#line 644 "stack_opt.m"
        {
#line 644 "stack_opt.m"
          ll_backend__stack_opt__succeeded = mercury__map__search_3_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ll_backend__stack_opt__InsertMap0_23, ((MR_Box) (ll_backend__stack_opt__Anchor_14)), &ll_backend__stack_opt__conv1_Inserts0_24);
        }
#line 644 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 644 "stack_opt.m"
          {
#line 644 "stack_opt.m"
            ll_backend__stack_opt__Inserts0_24 = ((MR_Word) ll_backend__stack_opt__conv1_Inserts0_24);
#line 644 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 644 "stack_opt.m"
          }
#line 644 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 645 "stack_opt.m"
          {
#line 645 "stack_opt.m"
            MR_Word ll_backend__stack_opt__Inserts_25;

#line 645 "stack_opt.m"
            {
#line 645 "stack_opt.m"
              ll_backend__stack_opt__Inserts_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_25, 0) = ((MR_Box) (ll_backend__stack_opt__Insert_22));
#line 645 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_25, 1) = ((MR_Box) (ll_backend__stack_opt__Inserts0_24));
#line 645 "stack_opt.m"
            }
#line 646 "stack_opt.m"
            {
#line 646 "stack_opt.m"
              mercury__map__det_update_4_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ((MR_Box) (ll_backend__stack_opt__Anchor_14)), ((MR_Box) (ll_backend__stack_opt__Inserts_25)), ll_backend__stack_opt__InsertMap0_23, &ll_backend__stack_opt__InsertMap_26);
            }
#line 645 "stack_opt.m"
          }
#line 644 "stack_opt.m"
        else
#line 648 "stack_opt.m"
          {
#line 648 "stack_opt.m"
            MR_Word ll_backend__stack_opt__Inserts_37;

#line 648 "stack_opt.m"
            {
#line 648 "stack_opt.m"
              ll_backend__stack_opt__Inserts_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_37, 0) = ((MR_Box) (ll_backend__stack_opt__Insert_22));
#line 648 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "stack_opt.m"
            }
#line 649 "stack_opt.m"
            {
#line 649 "stack_opt.m"
              mercury__map__det_insert_4_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ((MR_Box) (ll_backend__stack_opt__Anchor_14)), ((MR_Box) (ll_backend__stack_opt__Inserts_37)), ll_backend__stack_opt__InsertMap0_23, &ll_backend__stack_opt__InsertMap_26);
            }
#line 648 "stack_opt.m"
          }
#line 651 "stack_opt.m"
        ll_backend__stack_opt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 0)));
#line 651 "stack_opt.m"
        ll_backend__stack_opt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 1)));
#line 651 "stack_opt.m"
        ll_backend__stack_opt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 2)));
#line 651 "stack_opt.m"
        {
#line 651 "stack_opt.m"
          MR_Word base;
#line 651 "stack_opt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 651 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30 = base;
#line 651 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_55_55));
#line 651 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__InsertMap_26));
#line 651 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__V_57_57));
#line 651 "stack_opt.m"
        }
#line 652 "stack_opt.m"
        {
#line 652 "stack_opt.m"
          mercury__set__insert_3_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, ((MR_Box) (ll_backend__stack_opt__Anchor_14)), ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31, ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32);
        }
#line 642 "stack_opt.m"
      }
#line 641 "stack_opt.m"
    else
#line 654 "stack_opt.m"
      {
#line 654 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32 = ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31;
#line 654 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29;
#line 654 "stack_opt.m"
      }
#line 636 "stack_opt.m"
    *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_28 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27;
#line 636 "stack_opt.m"
  }
#line 630 "stack_opt.m"
}

#line 615 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(
#line 615 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 615 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_11,
#line 615 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 615 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_17,
#line 615 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_18,
#line 615 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_19,
#line 615 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_20,
#line 615 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21,
#line 615 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22)
#line 615 "stack_opt.m"
{
#line 621 "stack_opt.m"
  {
#line 621 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 621 "stack_opt.m"
    MR_Word ll_backend__stack_opt__DeletedVars_16;
#line 621 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_23_23;
#line 621 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_24_24;

#line 622 "stack_opt.m"
    {
#line 622 "stack_opt.m"
      ll_backend__stack_opt__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_23_23, 0) = ((MR_Box) (ll_backend__stack_opt__CellVar_10));
#line 622 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "stack_opt.m"
    }
#line 622 "stack_opt.m"
    {
#line 622 "stack_opt.m"
      backend_libs__interval__record_interval_vars_4_p_0(ll_backend__stack_opt__IntervalId_12, ll_backend__stack_opt__V_23_23, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_17, &ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_24_24);
    }
#line 623 "stack_opt.m"
    {
#line 623 "stack_opt.m"
      backend_libs__interval__delete_interval_vars_5_p_0(ll_backend__stack_opt__IntervalId_12, ll_backend__stack_opt__ViaCellVars_11, &ll_backend__stack_opt__DeletedVars_16, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_24_24, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_18);
    }
#line 624 "stack_opt.m"
    {
#line 624 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__DeletedVars_16);
    }
#line 624 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 625 "stack_opt.m"
      {
#line 625 "stack_opt.m"
        {
#line 625 "stack_opt.m"
          mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (ll_backend__stack_opt__IntervalId_12)), ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21, ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22);
        }
#line 625 "stack_opt.m"
      }
#line 624 "stack_opt.m"
    else
#line 624 "stack_opt.m"
      *ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22 = ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21;
#line 621 "stack_opt.m"
    *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_20 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_19;
#line 621 "stack_opt.m"
  }
#line 615 "stack_opt.m"
}

#line 601 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_2(
#line 601 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 601 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 601 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 601 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 601 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 601 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 601 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 601 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7)
#line 601 "stack_opt.m"
{
#line 601 "stack_opt.m"
  {
#line 601 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 601 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv8_STATE_VARIABLE_IntervalInfo_28;
#line 601 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv7_STATE_VARIABLE_StackOptInfo_30;
#line 601 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv6_STATE_VARIABLE_InsertAnchors_32;

#line 601 "stack_opt.m"
    {
#line 601 "stack_opt.m"
      ll_backend__stack_opt__add_anchor_inserts_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), &ll_backend__stack_opt__conv8_STATE_VARIABLE_IntervalInfo_28, ((MR_Word) ll_backend__stack_opt__wrapper_arg_4), &ll_backend__stack_opt__conv7_STATE_VARIABLE_StackOptInfo_30, ((MR_Word) ll_backend__stack_opt__wrapper_arg_6), &ll_backend__stack_opt__conv6_STATE_VARIABLE_InsertAnchors_32);
    }
#line 601 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv8_STATE_VARIABLE_IntervalInfo_28));
#line 601 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_5 = ((MR_Box) (ll_backend__stack_opt__conv7_STATE_VARIABLE_StackOptInfo_30));
#line 601 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_7 = ((MR_Box) (ll_backend__stack_opt__conv6_STATE_VARIABLE_InsertAnchors_32));
#line 601 "stack_opt.m"
  }
#line 601 "stack_opt.m"
}

#line 598 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_1(
#line 598 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 598 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 598 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 598 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 598 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 598 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 598 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 598 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7)
#line 598 "stack_opt.m"
{
#line 598 "stack_opt.m"
  {
#line 598 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 598 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv2_STATE_VARIABLE_IntervalInfo_18;
#line 598 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_STATE_VARIABLE_StackOptInfo_20;
#line 598 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_STATE_VARIABLE_InsertIntervals_22;

#line 598 "stack_opt.m"
    {
#line 598 "stack_opt.m"
      ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), &ll_backend__stack_opt__conv2_STATE_VARIABLE_IntervalInfo_18, ((MR_Word) ll_backend__stack_opt__wrapper_arg_4), &ll_backend__stack_opt__conv1_STATE_VARIABLE_StackOptInfo_20, ((MR_Word) ll_backend__stack_opt__wrapper_arg_6), &ll_backend__stack_opt__conv0_STATE_VARIABLE_InsertIntervals_22);
    }
#line 598 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv2_STATE_VARIABLE_IntervalInfo_18));
#line 598 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_5 = ((MR_Box) (ll_backend__stack_opt__conv1_STATE_VARIABLE_StackOptInfo_20));
#line 598 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_7 = ((MR_Box) (ll_backend__stack_opt__conv0_STATE_VARIABLE_InsertIntervals_22));
#line 598 "stack_opt.m"
  }
#line 598 "stack_opt.m"
}

#line 586 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0(
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_12,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_13,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVars_14,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_15,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_16,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialAnchors_17,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialIntervals_18,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31,
#line 586 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32,
#line 586 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33,
#line 586 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34)
#line 586 "stack_opt.m"
{
#line 593 "stack_opt.m"
  {
#line 593 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 593 "stack_opt.m"
    {
#line 593 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__ViaCellVars_15);
    }
#line 593 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 594 "stack_opt.m"
      {
#line 594 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33;
#line 594 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31;
#line 594 "stack_opt.m"
      }
#line 593 "stack_opt.m"
    else
#line 596 "stack_opt.m"
      {
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_50_50 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_51_51;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_59_59;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_60_60;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PotentialIntervalList_21;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PotentialAnchorList_22;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertIntervals_23;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertAnchors_24;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__GoalInfo_26;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__GoalId_27;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingResult_28;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingResults0_29;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingResults_30;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_35_35;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_36_36;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_37_37;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_38_38;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_39_39;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_42_42;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_44_44;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_45_45;
#line 598 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv5_STATE_VARIABLE_IntervalInfo_36_36;
#line 598 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv4_STATE_VARIABLE_StackOptInfo_37_37;
#line 598 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv3_InsertIntervals_23;
#line 601 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv11_STATE_VARIABLE_IntervalInfo_32;
#line 601 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv10_STATE_VARIABLE_StackOptInfo_41_41;
#line 601 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv9_InsertAnchors_24;
#line 604 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_25_25;

#line 596 "stack_opt.m"
        {
#line 596 "stack_opt.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__stack_opt__TypeCtorInfo_50_50, ll_backend__stack_opt__PotentialIntervals_18, &ll_backend__stack_opt__PotentialIntervalList_21);
        }
#line 11515 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_51_51 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 597 "stack_opt.m"
        {
#line 597 "stack_opt.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__stack_opt__TypeCtorInfo_51_51, ll_backend__stack_opt__PotentialAnchors_17, &ll_backend__stack_opt__PotentialAnchorList_22);
        }
#line 598 "stack_opt.m"
        {
#line 598 "stack_opt.m"
          ll_backend__stack_opt__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_4[0]));
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 1) = ((MR_Box) (ll_backend__stack_opt__record_matching_result_11_p_0_1));
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 3) = ((MR_Box) (ll_backend__stack_opt__CellVar_12));
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 4) = ((MR_Box) (ll_backend__stack_opt__ViaCellVars_15));
#line 598 "stack_opt.m"
        }
#line 600 "stack_opt.m"
        {
#line 600 "stack_opt.m"
          ll_backend__stack_opt__V_38_38 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_50_50);
        }
#line 11543 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_59_59 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0;
#line 11545 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_60_60 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0;
#line 598 "stack_opt.m"
        {
#line 598 "stack_opt.m"
          mercury__list__foldl3_8_p_0(ll_backend__stack_opt__TypeCtorInfo_50_50, ll_backend__stack_opt__TypeCtorInfo_59_59, ll_backend__stack_opt__TypeCtorInfo_60_60, (MR_Word) &ll_backend__stack_opt_scalar_common_1[9], ll_backend__stack_opt__V_35_35, ll_backend__stack_opt__PotentialIntervalList_21, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31)), &ll_backend__stack_opt__conv5_STATE_VARIABLE_IntervalInfo_36_36, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33)), &ll_backend__stack_opt__conv4_STATE_VARIABLE_StackOptInfo_37_37, ((MR_Box) (ll_backend__stack_opt__V_38_38)), &ll_backend__stack_opt__conv3_InsertIntervals_23);
        }
#line 598 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_36_36 = ((MR_Word) ll_backend__stack_opt__conv5_STATE_VARIABLE_IntervalInfo_36_36);
#line 598 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_37_37 = ((MR_Word) ll_backend__stack_opt__conv4_STATE_VARIABLE_StackOptInfo_37_37);
#line 598 "stack_opt.m"
        ll_backend__stack_opt__InsertIntervals_23 = ((MR_Word) ll_backend__stack_opt__conv3_InsertIntervals_23);
#line 601 "stack_opt.m"
        {
#line 601 "stack_opt.m"
          ll_backend__stack_opt__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 601 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_5[0]));
#line 601 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 1) = ((MR_Box) (ll_backend__stack_opt__record_matching_result_11_p_0_2));
#line 601 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 601 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 3) = ((MR_Box) (ll_backend__stack_opt__Goal_16));
#line 601 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 4) = ((MR_Box) (ll_backend__stack_opt__ViaCellVars_15));
#line 601 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 5) = ((MR_Box) (ll_backend__stack_opt__InsertIntervals_23));
#line 601 "stack_opt.m"
        }
#line 603 "stack_opt.m"
        {
#line 603 "stack_opt.m"
          ll_backend__stack_opt__V_42_42 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_51_51);
        }
#line 601 "stack_opt.m"
        {
#line 601 "stack_opt.m"
          mercury__list__foldl3_8_p_0(ll_backend__stack_opt__TypeCtorInfo_51_51, ll_backend__stack_opt__TypeCtorInfo_59_59, ll_backend__stack_opt__TypeCtorInfo_60_60, (MR_Word) &ll_backend__stack_opt_scalar_common_1[10], ll_backend__stack_opt__V_39_39, ll_backend__stack_opt__PotentialAnchorList_22, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_36_36)), &ll_backend__stack_opt__conv11_STATE_VARIABLE_IntervalInfo_32, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_37_37)), &ll_backend__stack_opt__conv10_STATE_VARIABLE_StackOptInfo_41_41, ((MR_Box) (ll_backend__stack_opt__V_42_42)), &ll_backend__stack_opt__conv9_InsertAnchors_24);
        }
#line 601 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32 = ((MR_Word) ll_backend__stack_opt__conv11_STATE_VARIABLE_IntervalInfo_32);
#line 601 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41 = ((MR_Word) ll_backend__stack_opt__conv10_STATE_VARIABLE_StackOptInfo_41_41);
#line 601 "stack_opt.m"
        ll_backend__stack_opt__InsertAnchors_24 = ((MR_Word) ll_backend__stack_opt__conv9_InsertAnchors_24);
#line 604 "stack_opt.m"
        ll_backend__stack_opt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_16, (MR_Integer) 0)));
#line 604 "stack_opt.m"
        ll_backend__stack_opt__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_16, (MR_Integer) 1)));
#line 605 "stack_opt.m"
        {
#line 605 "stack_opt.m"
          ll_backend__stack_opt__GoalId_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__stack_opt__GoalInfo_26);
        }
#line 606 "stack_opt.m"
        {
#line 606 "stack_opt.m"
          ll_backend__stack_opt__MatchingResult_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 606 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 0) = ((MR_Box) (ll_backend__stack_opt__CellVar_12));
#line 606 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 1) = ((MR_Box) (ll_backend__stack_opt__ConsId_13));
#line 606 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 2) = ((MR_Box) (ll_backend__stack_opt__ArgVars_14));
#line 606 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 3) = ((MR_Box) (ll_backend__stack_opt__ViaCellVars_15));
#line 606 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 4) = ((MR_Box) (ll_backend__stack_opt__GoalId_27));
#line 606 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 5) = ((MR_Box) (ll_backend__stack_opt__PotentialIntervals_18));
#line 606 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 6) = ((MR_Box) (ll_backend__stack_opt__InsertIntervals_23));
#line 606 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 7) = ((MR_Box) (ll_backend__stack_opt__PotentialAnchors_17));
#line 606 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 8) = ((MR_Box) (ll_backend__stack_opt__InsertAnchors_24));
#line 606 "stack_opt.m"
        }
#line 610 "stack_opt.m"
        ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 0)));
#line 610 "stack_opt.m"
        ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 1)));
#line 610 "stack_opt.m"
        ll_backend__stack_opt__MatchingResults0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 2)));
#line 611 "stack_opt.m"
        {
#line 611 "stack_opt.m"
          ll_backend__stack_opt__MatchingResults_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "stack_opt.m"
          MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MatchingResults_30, 0) = ((MR_Box) (ll_backend__stack_opt__MatchingResult_28));
#line 611 "stack_opt.m"
          MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MatchingResults_30, 1) = ((MR_Box) (ll_backend__stack_opt__MatchingResults0_29));
#line 611 "stack_opt.m"
        }
#line 612 "stack_opt.m"
        {
#line 612 "stack_opt.m"
          MR_Word base;
#line 612 "stack_opt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 612 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34 = base;
#line 612 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_44_44));
#line 612 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__V_45_45));
#line 612 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__MatchingResults_30));
#line 612 "stack_opt.m"
        }
#line 596 "stack_opt.m"
      }
#line 593 "stack_opt.m"
  }
#line 586 "stack_opt.m"
}

#line 568 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_matching_for_path_8_p_0(
#line 568 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 568 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_10,
#line 568 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 568 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars_12,
#line 568 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfo_13,
#line 568 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodes_14,
#line 568 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodes_15,
#line 568 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_16)
#line 568 "stack_opt.m"
{
#line 574 "stack_opt.m"
  {
#line 574 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 574 "stack_opt.m"
    {
#line 574 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__CandidateArgVars_12);
    }
#line 574 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 575 "stack_opt.m"
      {
#line 575 "stack_opt.m"
        {
#line 575 "stack_opt.m"
          *ll_backend__stack_opt__BenefitNodes_14 = mercury__set__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0);
        }
#line 576 "stack_opt.m"
        {
#line 576 "stack_opt.m"
          *ll_backend__stack_opt__CostNodes_15 = mercury__set__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0);
        }
#line 577 "stack_opt.m"
        {
#line 577 "stack_opt.m"
          *ll_backend__stack_opt__ViaCellVars_16 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 575 "stack_opt.m"
      }
#line 574 "stack_opt.m"
    else
#line 579 "stack_opt.m"
      {
#line 579 "stack_opt.m"
        MR_Word ll_backend__stack_opt__FirstSegment_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PathInfo_13, (MR_Integer) 0)));
#line 579 "stack_opt.m"
        MR_Word ll_backend__stack_opt__LaterSegments_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PathInfo_13, (MR_Integer) 1)));
#line 579 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 0)));
#line 580 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 1)));
#line 580 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 580 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 3)));

#line 581 "stack_opt.m"
        {
#line 581 "stack_opt.m"
          backend_libs__matching__find_via_cell_vars_9_p_0(ll_backend__stack_opt__CellVar_9, ll_backend__stack_opt__CandidateArgVars_12, ll_backend__stack_opt__CellVarFlushedLater_10, ll_backend__stack_opt__FirstSegment_17, ll_backend__stack_opt__LaterSegments_18, ll_backend__stack_opt__MatchingParams_19, ll_backend__stack_opt__BenefitNodes_14, ll_backend__stack_opt__CostNodes_15, ll_backend__stack_opt__ViaCellVars_16);
        }
#line 579 "stack_opt.m"
      }
#line 574 "stack_opt.m"
  }
#line 568 "stack_opt.m"
}

#line 489 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_1(
#line 489 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 489 "stack_opt.m"
{
#line 489 "stack_opt.m"
  {
#line 489 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 489 "stack_opt.m"
    MR_builtin_longjmp((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0, 1);
#line 489 "stack_opt.m"
  }
#line 489 "stack_opt.m"
}

#line 489 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_3(
#line 489 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 489 "stack_opt.m"
{
#line 489 "stack_opt.m"
  {
#line 489 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 489 "stack_opt.m"
    (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47 = ((MR_Word) (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_PathInfo_47);
#line 489 "stack_opt.m"
    {
#line 489 "stack_opt.m"
      ll_backend__stack_opt__use_cell_8_p_0_2(ll_backend__stack_opt__env_ptr);
    }
#line 489 "stack_opt.m"
  }
#line 489 "stack_opt.m"
}

#line 491 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_5(
#line 491 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 491 "stack_opt.m"
{
#line 491 "stack_opt.m"
  {
#line 491 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 491 "stack_opt.m"
    (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_50 = ((MR_Word) (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv2_Segment_50);
#line 491 "stack_opt.m"
    {
#line 491 "stack_opt.m"
      ll_backend__stack_opt__use_cell_8_p_0_4(ll_backend__stack_opt__env_ptr);
    }
#line 491 "stack_opt.m"
  }
#line 491 "stack_opt.m"
}

#line 489 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_4(
#line 489 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 489 "stack_opt.m"
{
#line 489 "stack_opt.m"
  {
#line 489 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 492 "stack_opt.m"
    {
#line 492 "stack_opt.m"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_50, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9);
    }
#line 492 "stack_opt.m"
    if ((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 492 "stack_opt.m"
      {
#line 492 "stack_opt.m"
        ll_backend__stack_opt__use_cell_8_p_0_1(ll_backend__stack_opt__env_ptr);
      }
#line 489 "stack_opt.m"
  }
#line 489 "stack_opt.m"
}

#line 489 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_2(
#line 489 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 489 "stack_opt.m"
{
#line 489 "stack_opt.m"
  {
#line 489 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 489 "stack_opt.m"
    {
#line 490 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47, (MR_Integer) 0)));

#line 490 "stack_opt.m"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47, (MR_Integer) 1)));
#line 11864 "ll_backend.stack_opt.c"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_120_120 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 491 "stack_opt.m"
      {
#line 491 "stack_opt.m"
        mercury__list__member_2_p_1((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_120_120, &(ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv2_Segment_50, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_49, ll_backend__stack_opt__use_cell_8_p_0_5, ll_backend__stack_opt__env_ptr);
      }
#line 489 "stack_opt.m"
    }
#line 489 "stack_opt.m"
  }
#line 489 "stack_opt.m"
}

#line 489 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_6(
#line 489 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 489 "stack_opt.m"
{
#line 489 "stack_opt.m"
  {
#line 489 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 489 "stack_opt.m"
    if (MR_builtin_setjmp((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0) == 0)
#line 489 "stack_opt.m"
      {
#line 489 "stack_opt.m"
        {
#line 489 "stack_opt.m"
          {
#line 489 "stack_opt.m"
            mercury__list__member_2_p_1((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0, &(ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_PathInfo_47, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38, ll_backend__stack_opt__use_cell_8_p_0_3, ll_backend__stack_opt__env_ptr);
          }
#line 489 "stack_opt.m"
        }
#line 489 "stack_opt.m"
        (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_FALSE;
#line 489 "stack_opt.m"
      }
#line 489 "stack_opt.m"
    else
#line 489 "stack_opt.m"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
#line 489 "stack_opt.m"
  }
#line 489 "stack_opt.m"
}

#line 417 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0(
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FieldVarList_10,
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_11,
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_12,
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51,
#line 417 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52,
#line 417 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53,
#line 417 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54)
#line 417 "stack_opt.m"
{
#line 417 "stack_opt.m"
  {
#line 417 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s ll_backend__stack_opt__env;

#line 417 "stack_opt.m"
    (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9 = ll_backend__stack_opt__CellVar_9;
#line 421 "stack_opt.m"
    {
#line 421 "stack_opt.m"
      MR_Word ll_backend__stack_opt__FlushedLater_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 1)));
#line 421 "stack_opt.m"
      MR_Word ll_backend__stack_opt__StackOptParams_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, (MR_Integer) 0)));
#line 421 "stack_opt.m"
      MR_Word ll_backend__stack_opt__NonCandidateVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 3)));
#line 421 "stack_opt.m"
      MR_Word ll_backend__stack_opt__FieldVars_18;
#line 421 "stack_opt.m"
      MR_Word ll_backend__stack_opt__FlushedLaterFieldVars_19;
#line 421 "stack_opt.m"
      MR_Word ll_backend__stack_opt__CandidateArgVars0_20;
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 0)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 2)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 3)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 4)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 5)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 6)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 7)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 8)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 9)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 10)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 11)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 12)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 13)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 14)));
#line 422 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 15)));
#line 423 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, (MR_Integer) 1)));
#line 423 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, (MR_Integer) 2)));
#line 424 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 0)));
#line 424 "stack_opt.m"
      MR_Integer ll_backend__stack_opt__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 1)));
#line 424 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_81_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 424 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 424 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 12003 "ll_backend.stack_opt.c"
      (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 425 "stack_opt.m"
      {
#line 425 "stack_opt.m"
        ll_backend__stack_opt__FieldVars_18 = parse_tree__set_of_var__list_to_set_1_f_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FieldVarList_10);
      }
#line 426 "stack_opt.m"
      {
#line 426 "stack_opt.m"
        parse_tree__set_of_var__intersect_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FieldVars_18, ll_backend__stack_opt__FlushedLater_15, &ll_backend__stack_opt__FlushedLaterFieldVars_19);
      }
#line 427 "stack_opt.m"
      {
#line 427 "stack_opt.m"
        parse_tree__set_of_var__difference_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FlushedLaterFieldVars_19, ll_backend__stack_opt__NonCandidateVars_17, &ll_backend__stack_opt__CandidateArgVars0_20);
      }
#line 430 "stack_opt.m"
      {
#line 430 "stack_opt.m"
        (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__CandidateArgVars0_20);
      }
#line 429 "stack_opt.m"
      if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 432 "stack_opt.m"
        {
#line 432 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53;
#line 432 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51;
#line 432 "stack_opt.m"
        }
#line 429 "stack_opt.m"
      else
#line 433 "stack_opt.m"
        {
#line 433 "stack_opt.m"
          MR_Word ll_backend__stack_opt__FreeOfCost_28;
#line 434 "stack_opt.m"
          MR_Word ll_backend__stack_opt__IntParams_24;
#line 434 "stack_opt.m"
          MR_Word ll_backend__stack_opt__VarTypes_25;
#line 434 "stack_opt.m"
          MR_Word ll_backend__stack_opt__Type_26;
#line 434 "stack_opt.m"
          MR_Word ll_backend__stack_opt___Name_21;
#line 434 "stack_opt.m"
          MR_Integer ll_backend__stack_opt___Arity_22;
#line 434 "stack_opt.m"
          MR_Word ll_backend__stack_opt___TypeCtor_23;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_84_84;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_85_85;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_86_86;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_87_87;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_88_88;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_89_89;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_90_90;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_91_91;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_92_92;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_93_93;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_94_94;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_95_95;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_96_96;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_97_97;
#line 435 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_98_98;
#line 436 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_99_99;
#line 436 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_100_100;
#line 439 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_27_27;

#line 434 "stack_opt.m"
          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__stack_opt__ConsId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 434 "stack_opt.m"
          if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 434 "stack_opt.m"
            {
#line 434 "stack_opt.m"
              ll_backend__stack_opt___Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 1)));
#line 434 "stack_opt.m"
              ll_backend__stack_opt___Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 2)));
#line 434 "stack_opt.m"
              ll_backend__stack_opt___TypeCtor_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 3)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__IntParams_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 0)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 1)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 2)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 3)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 4)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 5)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 6)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 7)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 8)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 9)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 10)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 11)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 12)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 13)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 14)));
#line 435 "stack_opt.m"
              ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 15)));
#line 436 "stack_opt.m"
              ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 0)));
#line 436 "stack_opt.m"
              ll_backend__stack_opt__VarTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 1)));
#line 436 "stack_opt.m"
              ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 2)));
#line 437 "stack_opt.m"
              {
#line 437 "stack_opt.m"
                hlds__vartypes__lookup_var_type_3_p_0(ll_backend__stack_opt__VarTypes_25, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, &ll_backend__stack_opt__Type_26);
              }
#line 439 "stack_opt.m"
              {
#line 439 "stack_opt.m"
                (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(ll_backend__stack_opt__Type_26, &ll_backend__stack_opt__V_27_27);
              }
#line 438 "stack_opt.m"
              if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 441 "stack_opt.m"
                {
#line 441 "stack_opt.m"
                  ll_backend__stack_opt__FreeOfCost_28 = (MR_Integer) 0;
#line 441 "stack_opt.m"
                  (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
#line 441 "stack_opt.m"
                }
#line 438 "stack_opt.m"
              else
#line 442 "stack_opt.m"
                {
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeCtorInfo_117_117;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeCtorInfo_118_118;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeCtor_29;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ModuleInfo_30;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeTable_31;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeDefn_32;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeBody_33;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ConsTable_34;
#line 442 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ConsTag_35;
#line 444 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_101_101;
#line 444 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_102_102;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_103_103;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_104_104;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_105_105;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_106_106;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_107_107;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_108_108;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_109_109;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_110_110;
#line 450 "stack_opt.m"
                  MR_Box ll_backend__stack_opt__conv0_ConsTag_35;

#line 443 "stack_opt.m"
                  {
#line 443 "stack_opt.m"
                    (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__stack_opt__Type_26, &ll_backend__stack_opt__TypeCtor_29);
                  }
#line 442 "stack_opt.m"
                  if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 442 "stack_opt.m"
                    {
#line 444 "stack_opt.m"
                      ll_backend__stack_opt__ModuleInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 0)));
#line 444 "stack_opt.m"
                      ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 1)));
#line 444 "stack_opt.m"
                      ll_backend__stack_opt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 2)));
#line 445 "stack_opt.m"
                      {
#line 445 "stack_opt.m"
                        hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__stack_opt__ModuleInfo_30, &ll_backend__stack_opt__TypeTable_31);
                      }
#line 446 "stack_opt.m"
                      {
#line 446 "stack_opt.m"
                        hlds__hlds_data__lookup_type_ctor_defn_3_p_0(ll_backend__stack_opt__TypeTable_31, ll_backend__stack_opt__TypeCtor_29, &ll_backend__stack_opt__TypeDefn_32);
                      }
#line 447 "stack_opt.m"
                      {
#line 447 "stack_opt.m"
                        hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__stack_opt__TypeDefn_32, &ll_backend__stack_opt__TypeBody_33);
                      }
#line 448 "stack_opt.m"
                      (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__TypeBody_33)) == (MR_mktag((MR_Integer) 1)));
#line 448 "stack_opt.m"
                      if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 448 "stack_opt.m"
                        {
#line 448 "stack_opt.m"
                          ll_backend__stack_opt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 0)));
#line 448 "stack_opt.m"
                          ll_backend__stack_opt__ConsTable_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 1)));
#line 448 "stack_opt.m"
                          ll_backend__stack_opt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 2)));
#line 448 "stack_opt.m"
                          ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 3)));
#line 448 "stack_opt.m"
                          ll_backend__stack_opt__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 4)));
#line 448 "stack_opt.m"
                          ll_backend__stack_opt__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 5)));
#line 448 "stack_opt.m"
                          ll_backend__stack_opt__V_108_108 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 448 "stack_opt.m"
                          ll_backend__stack_opt__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 448 "stack_opt.m"
                          ll_backend__stack_opt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 7)));
#line 12259 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 12261 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__TypeCtorInfo_118_118 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 450 "stack_opt.m"
                          {
#line 450 "stack_opt.m"
                            mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_117_117, ll_backend__stack_opt__TypeCtorInfo_118_118, ll_backend__stack_opt__ConsTable_34, ((MR_Box) (ll_backend__stack_opt__ConsId_11)), &ll_backend__stack_opt__conv0_ConsTag_35);
                          }
#line 450 "stack_opt.m"
                          ll_backend__stack_opt__ConsTag_35 = ((MR_Word) ll_backend__stack_opt__conv0_ConsTag_35);
#line 451 "stack_opt.m"
                          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = (ll_backend__stack_opt__ConsTag_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 451 "stack_opt.m"
                          if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 452 "stack_opt.m"
                            ll_backend__stack_opt__FreeOfCost_28 = (MR_Integer) 1;
#line 451 "stack_opt.m"
                          else
#line 454 "stack_opt.m"
                            ll_backend__stack_opt__FreeOfCost_28 = (MR_Integer) 0;
#line 451 "stack_opt.m"
                          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
#line 448 "stack_opt.m"
                        }
#line 442 "stack_opt.m"
                    }
#line 442 "stack_opt.m"
                }
#line 434 "stack_opt.m"
            }
#line 433 "stack_opt.m"
          if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 460 "stack_opt.m"
            {
#line 460 "stack_opt.m"
              MR_Word ll_backend__stack_opt__RelevantVars_36;
#line 460 "stack_opt.m"
              MR_Word ll_backend__stack_opt__MatchInfo_37;
#line 460 "stack_opt.m"
              MR_Word ll_backend__stack_opt__RelevantAfterVars_39;
#line 460 "stack_opt.m"
              MR_Word ll_backend__stack_opt__AfterModelNon_40;
#line 460 "stack_opt.m"
              MR_Word ll_backend__stack_opt__InsertAnchors_41;
#line 460 "stack_opt.m"
              MR_Word ll_backend__stack_opt__InsertIntervals_42;

#line 460 "stack_opt.m"
              {
#line 460 "stack_opt.m"
                parse_tree__set_of_var__insert_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__FieldVars_18, &ll_backend__stack_opt__RelevantVars_36);
              }
#line 461 "stack_opt.m"
              {
#line 461 "stack_opt.m"
                ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(ll_backend__stack_opt__RelevantVars_36, &ll_backend__stack_opt__MatchInfo_37, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53);
              }
#line 463 "stack_opt.m"
              (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 0)));
#line 463 "stack_opt.m"
              ll_backend__stack_opt__RelevantAfterVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 1)));
#line 463 "stack_opt.m"
              ll_backend__stack_opt__AfterModelNon_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 2)));
#line 463 "stack_opt.m"
              ll_backend__stack_opt__InsertAnchors_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 3)));
#line 463 "stack_opt.m"
              ll_backend__stack_opt__InsertIntervals_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 4)));
#line 472 "stack_opt.m"
#line 472 "stack_opt.m"
              switch (ll_backend__stack_opt__FreeOfCost_28) {
#line 472 "stack_opt.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 472 "stack_opt.m"
                case (MR_Integer) 0:
#line 504 "stack_opt.m"
#line 504 "stack_opt.m"
                  switch (ll_backend__stack_opt__AfterModelNon_40) {
#line 504 "stack_opt.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 504 "stack_opt.m"
                    case (MR_Integer) 0:
#line 475 "stack_opt.m"
                      {
#line 475 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__OnStack_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 475 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__CandidateArgVars_45;
#line 475 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__CellVarFlushedLater_46;
#line 475 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__ViaCellVars_59;
#line 476 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 0)));
#line 476 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 1)));
#line 476 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_113_113 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 476 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 476 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 3)));

#line 477 "stack_opt.m"
                        {
#line 477 "stack_opt.m"
                          parse_tree__set_of_var__difference_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__CandidateArgVars0_20, ll_backend__stack_opt__RelevantAfterVars_39, &ll_backend__stack_opt__CandidateArgVars_45);
                        }
#line 486 "stack_opt.m"
#line 486 "stack_opt.m"
                        switch (ll_backend__stack_opt__OnStack_44) {
#line 486 "stack_opt.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 486 "stack_opt.m"
                          case (MR_Integer) 0:
#line 488 "stack_opt.m"
                            {
#line 489 "stack_opt.m"
                              {
#line 489 "stack_opt.m"
                                ll_backend__stack_opt__use_cell_8_p_0_6(&ll_backend__stack_opt__env);
                              }
#line 488 "stack_opt.m"
                              if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 494 "stack_opt.m"
                                ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 1;
#line 488 "stack_opt.m"
                              else
#line 496 "stack_opt.m"
                                ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 0;
#line 488 "stack_opt.m"
                            }
#line 486 "stack_opt.m"
                            break;
#line 486 "stack_opt.m"
                          case (MR_Integer) 1:
#line 481 "stack_opt.m"
                            {
#line 481 "stack_opt.m"
                              {
#line 481 "stack_opt.m"
                                (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FlushedLater_15, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9);
                              }
#line 481 "stack_opt.m"
                              if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 482 "stack_opt.m"
                                ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 1;
#line 481 "stack_opt.m"
                              else
#line 484 "stack_opt.m"
                                ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 0;
#line 481 "stack_opt.m"
                            }
#line 486 "stack_opt.m"
                            break;
#line 486 "stack_opt.m"
                        }
#line 499 "stack_opt.m"
                        {
#line 499 "stack_opt.m"
                          ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__CellVarFlushedLater_46, ll_backend__stack_opt__StackOptParams_16, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38, ll_backend__stack_opt__CandidateArgVars_45, &ll_backend__stack_opt__ViaCellVars_59);
                        }
#line 501 "stack_opt.m"
                        {
#line 501 "stack_opt.m"
                          ll_backend__stack_opt__record_matching_result_11_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__ConsId_11, ll_backend__stack_opt__FieldVarList_10, ll_backend__stack_opt__ViaCellVars_59, ll_backend__stack_opt__Goal_12, ll_backend__stack_opt__InsertAnchors_41, ll_backend__stack_opt__InsertIntervals_42, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54);
                        }
#line 475 "stack_opt.m"
                      }
#line 504 "stack_opt.m"
                      break;
#line 504 "stack_opt.m"
                    case (MR_Integer) 1:
#line 505 "stack_opt.m"
                      {
#line 505 "stack_opt.m"
                        *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51;
#line 505 "stack_opt.m"
                        *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53;
#line 505 "stack_opt.m"
                      }
#line 504 "stack_opt.m"
                      break;
#line 504 "stack_opt.m"
                  }
#line 472 "stack_opt.m"
                  break;
#line 472 "stack_opt.m"
                case (MR_Integer) 1:
#line 466 "stack_opt.m"
                  {
#line 466 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__ViaCellVars_43;

#line 467 "stack_opt.m"
                    {
#line 467 "stack_opt.m"
                      parse_tree__set_of_var__difference_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__CandidateArgVars0_20, ll_backend__stack_opt__RelevantAfterVars_39, &ll_backend__stack_opt__ViaCellVars_43);
                    }
#line 469 "stack_opt.m"
                    {
#line 469 "stack_opt.m"
                      ll_backend__stack_opt__record_matching_result_11_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__ConsId_11, ll_backend__stack_opt__FieldVarList_10, ll_backend__stack_opt__ViaCellVars_43, ll_backend__stack_opt__Goal_12, ll_backend__stack_opt__InsertAnchors_41, ll_backend__stack_opt__InsertIntervals_42, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54);
                    }
#line 466 "stack_opt.m"
                  }
#line 472 "stack_opt.m"
                  break;
#line 472 "stack_opt.m"
              }
#line 460 "stack_opt.m"
            }
#line 433 "stack_opt.m"
          else
#line 509 "stack_opt.m"
            {
#line 509 "stack_opt.m"
              *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53;
#line 509 "stack_opt.m"
              *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51;
#line 509 "stack_opt.m"
            }
#line 433 "stack_opt.m"
        }
#line 421 "stack_opt.m"
    }
#line 417 "stack_opt.m"
  }
#line 417 "stack_opt.m"
}

#line 247 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__optimize_live_sets_7_p_0(
#line 247 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_8,
#line 247 "stack_opt.m"
  MR_Word ll_backend__stack_opt__OptAlloc_9,
#line 247 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60,
#line 247 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61,
#line 247 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Changed_11,
#line 247 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_12,
#line 247 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_13)
#line 247 "stack_opt.m"
{
#line 251 "stack_opt.m"
  {
#line 251 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_106_106;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_108_108;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_109_109;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_110_110;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_113_113;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_114_114;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal0_14;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarTypes0_15;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarSet0_16;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlot_17;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InputArgs_18;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OutputArgs_19;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__UnusedArgs_20;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVars_21;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Globals_22;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CandHeadvars_23;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__NonCandidateVars_24;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Counter0_25;
#line 251 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CurInterval_26;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Counter1_27;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CurIntervalId_28;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__EndMap0_29;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertMap0_30;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StartMap0_31;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__SuccMap0_32;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarsMap0_33;
#line 251 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CellVarStoreCost_34;
#line 251 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CellVarLoadCost_35;
#line 251 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__FieldVarStoreCost_36;
#line 251 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__FieldVarLoadCost_37;
#line 251 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__OpRatio_38;
#line 251 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__NodeRatio_39;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InclAllCand_40;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__MatchingParams_41;
#line 251 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__AllPathNodeRatio_42;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FixpointLoop_43;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FullPath_44;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OnStack_45;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptNoReturnCalls_46;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntParams_47;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalInfo0_48;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptParams_49;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptInfo0_50;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalInfo_51;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptInfo_52;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertMap_54;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_62_62;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_63_63;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_64_64;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_71_71;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_84_84;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_85_85;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_86_86;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_87_87;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_88_88;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_89_89;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_90_90;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_91_91;
#line 251 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_92_92;
#line 315 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_StackOptInfo_52;
#line 325 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_104_104;
#line 325 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_105_105;

#line 252 "stack_opt.m"
    {
#line 252 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__Goal0_14);
    }
#line 253 "stack_opt.m"
    {
#line 253 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__VarTypes0_15);
    }
#line 254 "stack_opt.m"
    {
#line 254 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__VarSet0_16);
    }
#line 255 "stack_opt.m"
    ll_backend__stack_opt__ParConjOwnSlot_17 = (MR_Word) ll_backend__stack_opt__OptAlloc_9;
#line 256 "stack_opt.m"
    {
#line 256 "stack_opt.m"
      hlds__arg_info__partition_proc_args_5_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, ll_backend__stack_opt__ModuleInfo_8, &ll_backend__stack_opt__InputArgs_18, &ll_backend__stack_opt__OutputArgs_19, &ll_backend__stack_opt__UnusedArgs_20);
    }
#line 12660 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_106_106 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 258 "stack_opt.m"
    {
#line 258 "stack_opt.m"
      ll_backend__stack_opt__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_64_64, 0) = ((MR_Box) (ll_backend__stack_opt__UnusedArgs_20));
#line 258 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "stack_opt.m"
    }
#line 258 "stack_opt.m"
    {
#line 258 "stack_opt.m"
      ll_backend__stack_opt__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_63_63, 0) = ((MR_Box) (ll_backend__stack_opt__OutputArgs_19));
#line 258 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_63_63, 1) = ((MR_Box) (ll_backend__stack_opt__V_64_64));
#line 258 "stack_opt.m"
    }
#line 258 "stack_opt.m"
    {
#line 258 "stack_opt.m"
      ll_backend__stack_opt__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_62_62, 0) = ((MR_Box) (ll_backend__stack_opt__InputArgs_18));
#line 258 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_62_62, 1) = ((MR_Box) (ll_backend__stack_opt__V_63_63));
#line 258 "stack_opt.m"
    }
#line 258 "stack_opt.m"
    {
#line 258 "stack_opt.m"
      ll_backend__stack_opt__HeadVars_21 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeInfo_106_106, ll_backend__stack_opt__V_62_62);
    }
#line 259 "stack_opt.m"
    {
#line 259 "stack_opt.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_opt__ModuleInfo_8, &ll_backend__stack_opt__Globals_22);
    }
#line 260 "stack_opt.m"
    {
#line 260 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 369, &ll_backend__stack_opt__CandHeadvars_23);
    }
#line 266 "stack_opt.m"
#line 266 "stack_opt.m"
    switch (ll_backend__stack_opt__CandHeadvars_23) {
#line 266 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 266 "stack_opt.m"
      case (MR_Integer) 0:
#line 263 "stack_opt.m"
        {
#line 263 "stack_opt.m"
          MR_Word ll_backend__stack_opt__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 263 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_67_67;

#line 264 "stack_opt.m"
          {
#line 264 "stack_opt.m"
            ll_backend__stack_opt__V_67_67 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_107_107, ll_backend__stack_opt__HeadVars_21);
          }
#line 264 "stack_opt.m"
          {
#line 264 "stack_opt.m"
            parse_tree__set_of_var__union_3_p_0(ll_backend__stack_opt__TypeCtorInfo_107_107, ll_backend__stack_opt__V_67_67, ll_backend__stack_opt__ParConjOwnSlot_17, &ll_backend__stack_opt__NonCandidateVars_24);
          }
#line 263 "stack_opt.m"
        }
#line 266 "stack_opt.m"
        break;
#line 266 "stack_opt.m"
      case (MR_Integer) 1:
#line 268 "stack_opt.m"
        ll_backend__stack_opt__NonCandidateVars_24 = ll_backend__stack_opt__ParConjOwnSlot_17;
#line 266 "stack_opt.m"
        break;
#line 266 "stack_opt.m"
    }
#line 270 "stack_opt.m"
    {
#line 270 "stack_opt.m"
      ll_backend__stack_opt__Counter0_25 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 271 "stack_opt.m"
    {
#line 271 "stack_opt.m"
      mercury__counter__allocate_3_p_0(&ll_backend__stack_opt__CurInterval_26, ll_backend__stack_opt__Counter0_25, &ll_backend__stack_opt__Counter1_27);
    }
#line 272 "stack_opt.m"
    ll_backend__stack_opt__CurIntervalId_28 = (MR_Word) ll_backend__stack_opt__CurInterval_26;
#line 12755 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 12757 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 273 "stack_opt.m"
    {
#line 273 "stack_opt.m"
      ll_backend__stack_opt__EndMap0_29 = mercury__map__singleton_2_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__TypeCtorInfo_109_109, ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
    }
#line 12764 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_110_110 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[2];
#line 274 "stack_opt.m"
    {
#line 274 "stack_opt.m"
      mercury__map__init_1_p_0(ll_backend__stack_opt__TypeCtorInfo_109_109, ll_backend__stack_opt__TypeInfo_110_110, &ll_backend__stack_opt__InsertMap0_30);
    }
#line 275 "stack_opt.m"
    {
#line 275 "stack_opt.m"
      mercury__map__init_1_p_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__TypeCtorInfo_109_109, &ll_backend__stack_opt__StartMap0_31);
    }
#line 276 "stack_opt.m"
    {
#line 276 "stack_opt.m"
      ll_backend__stack_opt__SuccMap0_32 = mercury__map__singleton_2_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, (MR_Word) &ll_backend__stack_opt_scalar_common_1[3], ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 12781 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 277 "stack_opt.m"
    {
#line 277 "stack_opt.m"
      ll_backend__stack_opt__V_71_71 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113, ll_backend__stack_opt__OutputArgs_19);
    }
#line 277 "stack_opt.m"
    {
#line 277 "stack_opt.m"
      ll_backend__stack_opt__VarsMap0_33 = mercury__map__singleton_2_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, (MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)), ((MR_Box) (ll_backend__stack_opt__V_71_71)));
    }
#line 278 "stack_opt.m"
    {
#line 278 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 370, &ll_backend__stack_opt__CellVarStoreCost_34);
    }
#line 280 "stack_opt.m"
    {
#line 280 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 371, &ll_backend__stack_opt__CellVarLoadCost_35);
    }
#line 282 "stack_opt.m"
    {
#line 282 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 372, &ll_backend__stack_opt__FieldVarStoreCost_36);
    }
#line 284 "stack_opt.m"
    {
#line 284 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 373, &ll_backend__stack_opt__FieldVarLoadCost_37);
    }
#line 286 "stack_opt.m"
    {
#line 286 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 374, &ll_backend__stack_opt__OpRatio_38);
    }
#line 288 "stack_opt.m"
    {
#line 288 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 375, &ll_backend__stack_opt__NodeRatio_39);
    }
#line 290 "stack_opt.m"
    {
#line 290 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 377, &ll_backend__stack_opt__InclAllCand_40);
    }
#line 292 "stack_opt.m"
    {
#line 292 "stack_opt.m"
      ll_backend__stack_opt__MatchingParams_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 292 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 0) = ((MR_Box) (ll_backend__stack_opt__CellVarStoreCost_34));
#line 292 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 1) = ((MR_Box) (ll_backend__stack_opt__CellVarLoadCost_35));
#line 292 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 2) = ((MR_Box) (ll_backend__stack_opt__FieldVarStoreCost_36));
#line 292 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 3) = ((MR_Box) (ll_backend__stack_opt__FieldVarLoadCost_37));
#line 292 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 4) = ((MR_Box) (ll_backend__stack_opt__OpRatio_38));
#line 292 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 5) = ((MR_Box) (ll_backend__stack_opt__NodeRatio_39));
#line 292 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 6) = ((MR_Box) (ll_backend__stack_opt__InclAllCand_40));
#line 292 "stack_opt.m"
    }
#line 294 "stack_opt.m"
    {
#line 294 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 376, &ll_backend__stack_opt__AllPathNodeRatio_42);
    }
#line 297 "stack_opt.m"
    {
#line 297 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 366, &ll_backend__stack_opt__FixpointLoop_43);
    }
#line 299 "stack_opt.m"
    {
#line 299 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 367, &ll_backend__stack_opt__FullPath_44);
    }
#line 301 "stack_opt.m"
    {
#line 301 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 368, &ll_backend__stack_opt__OnStack_45);
    }
#line 303 "stack_opt.m"
    {
#line 303 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 317, &ll_backend__stack_opt__OptNoReturnCalls_46);
    }
#line 305 "stack_opt.m"
    {
#line 305 "stack_opt.m"
      ll_backend__stack_opt__IntParams_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 305 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_47, 0) = ((MR_Box) (ll_backend__stack_opt__ModuleInfo_8));
#line 305 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_47, 1) = ((MR_Box) (ll_backend__stack_opt__VarTypes0_15));
#line 305 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_47, 2) = ((MR_Box) (ll_backend__stack_opt__OptNoReturnCalls_46));
#line 305 "stack_opt.m"
    }
#line 307 "stack_opt.m"
    {
#line 307 "stack_opt.m"
      ll_backend__stack_opt__V_84_84 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113);
    }
#line 307 "stack_opt.m"
    {
#line 307 "stack_opt.m"
      ll_backend__stack_opt__V_85_85 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113, ll_backend__stack_opt__OutputArgs_19);
    }
#line 12895 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_114_114 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 308 "stack_opt.m"
    {
#line 308 "stack_opt.m"
      ll_backend__stack_opt__V_86_86 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_114_114, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0);
    }
#line 308 "stack_opt.m"
    {
#line 308 "stack_opt.m"
      ll_backend__stack_opt__V_87_87 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_114_114, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0);
    }
#line 308 "stack_opt.m"
    {
#line 308 "stack_opt.m"
      ll_backend__stack_opt__V_88_88 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_114_114, ll_backend__stack_opt__TypeCtorInfo_108_108);
    }
#line 309 "stack_opt.m"
    {
#line 309 "stack_opt.m"
      ll_backend__stack_opt__V_89_89 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)));
    }
#line 310 "stack_opt.m"
    {
#line 310 "stack_opt.m"
      ll_backend__stack_opt__V_90_90 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_109_109, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0);
    }
#line 310 "stack_opt.m"
    {
#line 310 "stack_opt.m"
      ll_backend__stack_opt__V_91_91 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_109_109);
    }
#line 311 "stack_opt.m"
    {
#line 311 "stack_opt.m"
      ll_backend__stack_opt__V_92_92 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, (MR_Word) &ll_backend__stack_opt_scalar_common_1[5]);
    }
#line 306 "stack_opt.m"
    {
#line 306 "stack_opt.m"
      ll_backend__stack_opt__IntervalInfo0_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 0) = ((MR_Box) (ll_backend__stack_opt__IntParams_47));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 1) = ((MR_Box) (ll_backend__stack_opt__V_84_84));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 2) = ((MR_Box) (ll_backend__stack_opt__V_85_85));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 3) = ((MR_Box) (ll_backend__stack_opt__V_86_86));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 4) = ((MR_Box) (ll_backend__stack_opt__V_87_87));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 5) = ((MR_Box) (ll_backend__stack_opt__V_88_88));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 6) = ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 7) = ((MR_Box) (ll_backend__stack_opt__Counter1_27));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 8) = ((MR_Box) (ll_backend__stack_opt__V_89_89));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 9) = ((MR_Box) (ll_backend__stack_opt__V_90_90));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 10) = ((MR_Box) (ll_backend__stack_opt__V_91_91));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 11) = ((MR_Box) (ll_backend__stack_opt__StartMap0_31));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 12) = ((MR_Box) (ll_backend__stack_opt__EndMap0_29));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 13) = ((MR_Box) (ll_backend__stack_opt__SuccMap0_32));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 14) = ((MR_Box) (ll_backend__stack_opt__VarsMap0_33));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 15) = ((MR_Box) (ll_backend__stack_opt__V_92_92));
#line 306 "stack_opt.m"
    }
#line 312 "stack_opt.m"
    {
#line 312 "stack_opt.m"
      ll_backend__stack_opt__StackOptParams_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 312 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 0) = ((MR_Box) (ll_backend__stack_opt__MatchingParams_41));
#line 312 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 1) = ((MR_Box) (ll_backend__stack_opt__AllPathNodeRatio_42));
#line 312 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 2) = ((MR_Box) ((ll_backend__stack_opt__FixpointLoop_43 | ((((ll_backend__stack_opt__FullPath_44 << (MR_Integer) 1)) | ((ll_backend__stack_opt__OnStack_45 << (MR_Integer) 2)))))));
#line 312 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 3) = ((MR_Box) (ll_backend__stack_opt__NonCandidateVars_24));
#line 312 "stack_opt.m"
    }
#line 314 "stack_opt.m"
    {
#line 314 "stack_opt.m"
      ll_backend__stack_opt__StackOptInfo0_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 314 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo0_50, 0) = ((MR_Box) (ll_backend__stack_opt__StackOptParams_49));
#line 314 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo0_50, 1) = ((MR_Box) (ll_backend__stack_opt__InsertMap0_30));
#line 314 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo0_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "stack_opt.m"
    }
#line 315 "stack_opt.m"
    {
#line 315 "stack_opt.m"
      backend_libs__interval__build_interval_info_in_goal_5_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[6], ll_backend__stack_opt__Goal0_14, ll_backend__stack_opt__IntervalInfo0_48, &ll_backend__stack_opt__IntervalInfo_51, ((MR_Box) (ll_backend__stack_opt__StackOptInfo0_50)), &ll_backend__stack_opt__conv0_StackOptInfo_52);
    }
#line 315 "stack_opt.m"
    ll_backend__stack_opt__StackOptInfo_52 = ((MR_Word) ll_backend__stack_opt__conv0_StackOptInfo_52);
#line 317 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__DebugStackOpt_12 == ll_backend__stack_opt__PredIdInt_13);
#line 317 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 318 "stack_opt.m"
      {
#line 319 "stack_opt.m"
        {
#line 319 "stack_opt.m"
          backend_libs__interval__dump_interval_info_3_p_0(ll_backend__stack_opt__IntervalInfo_51);
        }
#line 320 "stack_opt.m"
        {
#line 320 "stack_opt.m"
          ll_backend__stack_opt__dump_stack_opt_info_3_p_0(ll_backend__stack_opt__StackOptInfo_52);
        }
#line 318 "stack_opt.m"
      }
#line 317 "stack_opt.m"
    else
#line 323 "stack_opt.m"
      {
#line 323 "stack_opt.m"
      }
#line 325 "stack_opt.m"
    ll_backend__stack_opt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_52, (MR_Integer) 0)));
#line 325 "stack_opt.m"
    ll_backend__stack_opt__InsertMap_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_52, (MR_Integer) 1)));
#line 325 "stack_opt.m"
    ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_52, (MR_Integer) 2)));
#line 326 "stack_opt.m"
    {
#line 326 "stack_opt.m"
      ll_backend__stack_opt__succeeded = mercury__map__is_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_109_109, ll_backend__stack_opt__TypeInfo_110_110, ll_backend__stack_opt__InsertMap_54);
    }
#line 326 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 327 "stack_opt.m"
      {
#line 327 "stack_opt.m"
        *ll_backend__stack_opt__Changed_11 = (MR_Integer) 0;
#line 327 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61 = ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60;
#line 327 "stack_opt.m"
      }
#line 326 "stack_opt.m"
    else
#line 331 "stack_opt.m"
      {
#line 331 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Goal1_55;
#line 331 "stack_opt.m"
        MR_Word ll_backend__stack_opt__VarSet_56;
#line 331 "stack_opt.m"
        MR_Word ll_backend__stack_opt__VarTypes_57;
#line 331 "stack_opt.m"
        MR_Word ll_backend__stack_opt__RenameMap_58;
#line 331 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Goal_59;
#line 331 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_97_97;
#line 331 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_100_100;
#line 331 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_101_101;
#line 331 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_102_102;

#line 330 "stack_opt.m"
        {
#line 330 "stack_opt.m"
          ll_backend__stack_opt__V_97_97 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeInfo_106_106, ll_backend__stack_opt__TypeInfo_106_106);
        }
#line 329 "stack_opt.m"
        {
#line 329 "stack_opt.m"
          backend_libs__interval__record_decisions_in_goal_10_p_0(ll_backend__stack_opt__Goal0_14, &ll_backend__stack_opt__Goal1_55, ll_backend__stack_opt__VarSet0_16, &ll_backend__stack_opt__VarSet_56, ll_backend__stack_opt__VarTypes0_15, &ll_backend__stack_opt__VarTypes_57, ll_backend__stack_opt__V_97_97, &ll_backend__stack_opt__RenameMap_58, ll_backend__stack_opt__InsertMap_54, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__stack_opt_scalar_common_3[0]));
        }
#line 332 "stack_opt.m"
        {
#line 332 "stack_opt.m"
          ll_backend__stack_opt__V_100_100 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113, ll_backend__stack_opt__HeadVars_21);
        }
#line 332 "stack_opt.m"
        {
#line 332 "stack_opt.m"
          backend_libs__interval__apply_headvar_correction_4_p_0(ll_backend__stack_opt__V_100_100, ll_backend__stack_opt__RenameMap_58, ll_backend__stack_opt__Goal1_55, &ll_backend__stack_opt__Goal_59);
        }
#line 334 "stack_opt.m"
        {
#line 334 "stack_opt.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_opt__Goal_59, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_101_101);
        }
#line 335 "stack_opt.m"
        {
#line 335 "stack_opt.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(ll_backend__stack_opt__VarSet_56, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_101_101, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_102_102);
        }
#line 336 "stack_opt.m"
        {
#line 336 "stack_opt.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ll_backend__stack_opt__VarTypes_57, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_102_102, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61);
        }
#line 337 "stack_opt.m"
        *ll_backend__stack_opt__Changed_11 = (MR_Integer) 1;
#line 331 "stack_opt.m"
      }
#line 251 "stack_opt.m"
  }
#line 247 "stack_opt.m"
}

#line 80 "stack_opt.m"
void MR_CALL 
ll_backend__stack_opt__stack_opt_cell_5_p_0(
#line 80 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PredProcId_6,
#line 80 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_32,
#line 80 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33,
#line 80 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_0_34,
#line 80 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35)
#line 80 "stack_opt.m"
{
#line 183 "stack_opt.m"
  {
#line 183 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_69_69;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_70_70;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PredProcId_6, (MR_Integer) 0)));
#line 183 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PredProcId_6, (MR_Integer) 1)));
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__SimplifyTasks_11;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PredInfo_12;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Liveness0_13;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Globals_14;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfoLiveness_15;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptNoReturnCalls_16;
#line 183 "stack_opt.m"
    MR_ArrayPtr ll_backend__stack_opt__DummyDummyTypeArray_17;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AllocData_18;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal2_20;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptStackAlloc0_21;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FailVars_22;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__NondetLiveness0_23;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal_24;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptStackAlloc_25;
#line 183 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__DebugStackOpt_28;
#line 183 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__PredIdInt_29;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Changed_31;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_38_38;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_46_46;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53;
#line 183 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_72_72;
#line 197 "stack_opt.m"
    MR_ArrayPtr ll_backend__stack_opt__conv0_DummyDummyTypeArray_17;
#line 200 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;
#line 205 "stack_opt.m"
    MR_Word ll_backend__stack_opt___Liveness_26;
#line 205 "stack_opt.m"
    MR_Word ll_backend__stack_opt___NondetLiveness_27;
#line 205 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv1_OptStackAlloc_25;

#line 188 "stack_opt.m"
    {
#line 188 "stack_opt.m"
      ll_backend__stack_opt__SimplifyTasks_11 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 189 "stack_opt.m"
    {
#line 189 "stack_opt.m"
      check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(ll_backend__stack_opt__SimplifyTasks_11, ll_backend__stack_opt__PredId_9, ll_backend__stack_opt__ProcId_10, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_0_34, &ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_32, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_38_38);
    }
#line 190 "stack_opt.m"
    {
#line 190 "stack_opt.m"
      ll_backend__liveness__detect_liveness_proc_4_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredProcId_6, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_38_38, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39);
    }
#line 191 "stack_opt.m"
    {
#line 191 "stack_opt.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredId_9, &ll_backend__stack_opt__PredInfo_12);
    }
#line 192 "stack_opt.m"
    {
#line 192 "stack_opt.m"
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredInfo_12, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39, &ll_backend__stack_opt__Liveness0_13);
    }
#line 193 "stack_opt.m"
    {
#line 193 "stack_opt.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, &ll_backend__stack_opt__Globals_14);
    }
#line 194 "stack_opt.m"
    {
#line 194 "stack_opt.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__stack_opt__PredInfo_12, ll_backend__stack_opt__Globals_14, &ll_backend__stack_opt__TypeInfoLiveness_15);
    }
#line 195 "stack_opt.m"
    {
#line 195 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_14, (MR_Integer) 317, &ll_backend__stack_opt__OptNoReturnCalls_16);
    }
#line 197 "stack_opt.m"
    {
#line 197 "stack_opt.m"
      mercury__array__init_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, (MR_Integer) 1, ((MR_Box) ((MR_Integer) 1)), &ll_backend__stack_opt__conv0_DummyDummyTypeArray_17);
    }
#line 197 "stack_opt.m"
    ll_backend__stack_opt__DummyDummyTypeArray_17 = (MR_ArrayPtr) ll_backend__stack_opt__conv0_DummyDummyTypeArray_17;
#line 198 "stack_opt.m"
    {
#line 198 "stack_opt.m"
      ll_backend__stack_opt__AllocData_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 198 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 0) = ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37));
#line 198 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 1) = ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39));
#line 198 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 2) = ((MR_Box) (ll_backend__stack_opt__PredProcId_6));
#line 198 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 3) = ((MR_Box) (ll_backend__stack_opt__TypeInfoLiveness_15));
#line 198 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 4) = ((MR_Box) (ll_backend__stack_opt__OptNoReturnCalls_16));
#line 198 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 5) = ((MR_Box) (ll_backend__stack_opt__DummyDummyTypeArray_17));
#line 198 "stack_opt.m"
    }
#line 200 "stack_opt.m"
    {
#line 200 "stack_opt.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, &ll_backend__stack_opt__V_19_19, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43);
    }
#line 201 "stack_opt.m"
    {
#line 201 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43, &ll_backend__stack_opt__Goal2_20);
    }
#line 245 "stack_opt.m"
    {
#line 245 "stack_opt.m"
      ll_backend__stack_opt__V_72_72 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 245 "stack_opt.m"
    ll_backend__stack_opt__OptStackAlloc0_21 = (MR_Word) ll_backend__stack_opt__V_72_72;
#line 13289 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_69_69 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 203 "stack_opt.m"
    {
#line 203 "stack_opt.m"
      mercury__set__init_1_p_0(ll_backend__stack_opt__TypeInfo_69_69, &ll_backend__stack_opt__FailVars_22);
    }
#line 204 "stack_opt.m"
    {
#line 204 "stack_opt.m"
      mercury__set__init_1_p_0(ll_backend__stack_opt__TypeInfo_69_69, &ll_backend__stack_opt__NondetLiveness0_23);
    }
#line 13301 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_70_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 205 "stack_opt.m"
    {
#line 205 "stack_opt.m"
      ll_backend__stack_opt__V_44_44 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_70_70, ll_backend__stack_opt__FailVars_22);
    }
#line 207 "stack_opt.m"
    {
#line 207 "stack_opt.m"
      ll_backend__stack_opt__V_45_45 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_70_70, ll_backend__stack_opt__NondetLiveness0_23);
    }
#line 205 "stack_opt.m"
    {
#line 205 "stack_opt.m"
      ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[1], ll_backend__stack_opt__Goal2_20, &ll_backend__stack_opt__Goal_24, ll_backend__stack_opt__V_44_44, ll_backend__stack_opt__AllocData_18, ((MR_Box) (ll_backend__stack_opt__OptStackAlloc0_21)), &ll_backend__stack_opt__conv1_OptStackAlloc_25, ll_backend__stack_opt__Liveness0_13, &ll_backend__stack_opt___Liveness_26, ll_backend__stack_opt__V_45_45, &ll_backend__stack_opt___NondetLiveness_27);
    }
#line 205 "stack_opt.m"
    ll_backend__stack_opt__OptStackAlloc_25 = ((MR_Word) ll_backend__stack_opt__conv1_OptStackAlloc_25);
#line 208 "stack_opt.m"
    {
#line 208 "stack_opt.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_opt__Goal_24, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_46_46);
    }
#line 209 "stack_opt.m"
    {
#line 209 "stack_opt.m"
      ll_backend__store_alloc__allocate_store_maps_5_p_0((MR_Integer) 1, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredProcId_6, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_46_46, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48);
    }
#line 210 "stack_opt.m"
    {
#line 210 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_14, (MR_Integer) 75, &ll_backend__stack_opt__DebugStackOpt_28);
    }
#line 211 "stack_opt.m"
    {
#line 211 "stack_opt.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(ll_backend__stack_opt__PredId_9, &ll_backend__stack_opt__PredIdInt_29);
    }
#line 213 "stack_opt.m"
    {
#line 213 "stack_opt.m"
      ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\nbefore stack opt cell", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37);
    }
#line 217 "stack_opt.m"
    {
#line 217 "stack_opt.m"
      ll_backend__stack_opt__optimize_live_sets_7_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__OptStackAlloc_25, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53, &ll_backend__stack_opt__Changed_31, ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29);
    }
#line 239 "stack_opt.m"
#line 239 "stack_opt.m"
    switch (ll_backend__stack_opt__Changed_31) {
#line 239 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 239 "stack_opt.m"
      case (MR_Integer) 0:
#line 240 "stack_opt.m"
        {
#line 240 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33 = ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53;
#line 240 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35 = ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37;
#line 240 "stack_opt.m"
        }
#line 239 "stack_opt.m"
        break;
#line 239 "stack_opt.m"
      case (MR_Integer) 1:
#line 220 "stack_opt.m"
        {
#line 220 "stack_opt.m"
          MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58;

#line 222 "stack_opt.m"
          {
#line 222 "stack_opt.m"
            ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\nafter stack opt transformation", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37);
          }
#line 226 "stack_opt.m"
          {
#line 226 "stack_opt.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58);
          }
#line 228 "stack_opt.m"
          {
#line 228 "stack_opt.m"
            ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\nafter stack opt requantify", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37);
          }
#line 232 "stack_opt.m"
          {
#line 232 "stack_opt.m"
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35);
          }
#line 235 "stack_opt.m"
          {
#line 235 "stack_opt.m"
            ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\n                \nafter stack opt recompute instmaps", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, *ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33, *ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35);
          }
#line 220 "stack_opt.m"
        }
#line 239 "stack_opt.m"
        break;
#line 239 "stack_opt.m"
    }
#line 183 "stack_opt.m"
  }
#line 80 "stack_opt.m"
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
