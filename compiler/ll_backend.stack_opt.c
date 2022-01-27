/*
** Automatically generated from `stack_opt.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "getopt_io.mih"
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
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 409 "stack_opt.m"
struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s {
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9;
#line 413 "stack_opt.m"
  MR_bool ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded;
#line 413 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116;
#line 452 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38;
#line 481 "stack_opt.m"
  jmp_buf ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0;
#line 481 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_120_120;
#line 481 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47;
#line 481 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_49;
#line 481 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_50;
#line 481 "stack_opt.m"
  MR_Box ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_PathInfo_47;
#line 483 "stack_opt.m"
  MR_Box ll_backend__stack_opt__use_cell_8_p_0_env_0__conv2_Segment_50;
#line 409 "stack_opt.m"
};


#line 185 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 188 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 191 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 194 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0;

#line 197 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0;

#line 200 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0;

#line 203 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__stack_opt__type_ctor_info_path_0;

#line 206 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 209 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_opt__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 212 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

#line 215 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0;

#line 218 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0;

#line 221 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 224 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_all_paths_0_0[3];

#line 227 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_all_paths_0_0[3];

#line 230 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0;

#line 233 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0[1];

#line 236 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0[1];

#line 239 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0[1];

#line 242 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0[1];

#line 245 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0;

#line 248 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1;

#line 251 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_value_ordered_current_segment_first_flush_0[2];

#line 254 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0[2];

#line 257 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0[2];

#line 260 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0;

#line 263 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0;

#line 266 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 269 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_info_0_0[5];

#line 272 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0;

#line 275 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0[1];

#line 278 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0[1];

#line 281 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0[1];

#line 284 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0[1];

#line 287 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 290 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_path_info_0_0[2];

#line 293 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0;

#line 296 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0[1];

#line 299 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0[1];

#line 302 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0[1];

#line 305 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_path_info_0[1];

#line 308 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 311 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_matching_result_0_0[9];

#line 314 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0;

#line 317 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0[1];

#line 320 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_matching_result_0[1];

#line 323 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_matching_result_0[1];

#line 326 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_matching_result_0[1];

#line 329 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0[1];

#line 332 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 335 "ll_backend.stack_opt.c"
static const MR_NotagFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0;

#line 338 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_path_0_0[6];

#line 341 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_path_0_0[6];

#line 344 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0;

#line 347 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0[1];

#line 350 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0[1];

#line 353 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0[1];

#line 356 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0[1];

#line 359 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 362 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0;

#line 365 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_info_0_0[3];

#line 368 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_info_0_0[3];

#line 371 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0;

#line 374 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0[1];

#line 377 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0[1];

#line 380 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0[1];

#line 383 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0[1];

#line 386 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_params_0_0[6];

#line 389 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_params_0_0[6];

#line 392 "ll_backend.stack_opt.c"
static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_stack_opt_params_0_0[6];

#line 395 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0;

#line 398 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0[1];

#line 401 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0[1];

#line 404 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0[1];

#line 407 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0[1];

#line 410 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0_10001(
#line 413 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 415 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 418 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0_10001(
#line 421 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 423 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 425 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 428 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001(
#line 431 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 433 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 436 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001(
#line 439 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 441 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 443 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 446 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0_10001(
#line 449 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 451 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 454 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0_10001(
#line 457 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 459 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 461 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 464 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0_10001(
#line 467 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 469 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 472 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0_10001(
#line 475 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 477 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 479 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 482 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0_10001(
#line 485 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 487 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 490 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0_10001(
#line 493 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 495 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 497 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 500 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001(
#line 503 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 505 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 508 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001(
#line 511 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 513 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 515 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 518 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0_10001(
#line 521 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 523 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 526 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0_10001(
#line 529 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 531 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 533 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 536 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001(
#line 539 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 541 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 544 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001(
#line 547 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 549 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 551 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 554 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001(
#line 557 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 559 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 562 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001(
#line 565 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 567 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 569 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 572 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 575 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 577 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 579 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 581 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 583 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 586 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 589 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 591 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 593 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 595 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 597 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 600 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 603 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 605 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 607 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 609 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 611 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 614 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 617 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 619 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 621 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 623 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 625 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 628 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
#line 631 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 633 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 635 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 637 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 639 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 641 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_5,
#line 643 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_6,
#line 645 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_7,
#line 647 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_8);

#line 339 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_50_93_95_48_4_p_0(
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 339 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 338 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_p_0(
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 338 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 337 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 337 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 336 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 336 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 336 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 532 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1(
#line 532 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 532 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 532 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 532 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 532 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 524 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(
#line 524 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 524 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_11,
#line 524 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_13,
#line 524 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_14,
#line 524 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_15,
#line 524 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodeSets_16,
#line 524 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodeSets_17,
#line 524 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_18);

#line 504 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0(
#line 504 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_8,
#line 504 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_9,
#line 504 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 504 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_12,
#line 504 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_13,
#line 504 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_14);

#line 1148 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1148__1_3_p_0(
#line 1148 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_93);

#line 1145 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1145__1_3_p_0(
#line 1145 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_89);

#line 1122 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1122__1_2_p_0(
#line 1122 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_80,
#line 1122 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_81);

#line 1121 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1121__1_2_p_0(
#line 1121 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_75,
#line 1121 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_76);

#line 1103 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1103__1_2_p_0(
#line 1103 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_51,
#line 1103 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_52);

#line 1090 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1090__1_2_p_0(
#line 1090 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_45,
#line 1090 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_46);

#line 848 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__848__1_2_p_0(
#line 848 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_36,
#line 848 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_37);

#line 844 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__844__1_2_p_0(
#line 844 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_42,
#line 844 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_43);

#line 835 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__835__1_2_p_0(
#line 835 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_54,
#line 835 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_55);

#line 697 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__close_path__697__1_1_p_0(
#line 697 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FirstSegment0_7);

#line 339 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
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
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 338 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 337 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 337 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 336 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 336 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 336 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 336 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 336 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 376 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(
#line 376 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 376 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 376 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 376 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__4_4,
#line 376 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 376 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__6_6,
#line 376 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__7_7,
#line 376 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__8_8);

#line 145 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0(
#line 145 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 145 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 145 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 145 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0(
#line 145 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 145 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 168 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0(
#line 168 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 168 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 168 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 168 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0(
#line 168 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 168 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 656 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0(
#line 656 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 656 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 656 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 656 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0(
#line 656 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 656 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 135 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(
#line 135 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 135 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 135 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 135 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(
#line 135 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 135 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 155 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0(
#line 155 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 155 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 155 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 155 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0(
#line 155 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 155 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 379 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0(
#line 379 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 379 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 379 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 379 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0(
#line 379 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 379 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 390 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0(
#line 390 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 390 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 390 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 390 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0(
#line 390 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 390 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 652 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(
#line 652 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 652 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 652 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 652 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(
#line 652 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_1,
#line 652 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 666 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0(
#line 666 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 666 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 666 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 666 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0(
#line 666 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 666 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 1148 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_6(
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1148 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1148 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1145 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_5(
#line 1145 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1145 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1145 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1145 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1139 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_4(
#line 1139 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1139 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1134 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_3(
#line 1134 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1134 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1122 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_2(
#line 1122 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1122 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1122 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1121 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_1(
#line 1121 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1121 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1121 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1110 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0(
#line 1110 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MatchingResult_4);

#line 1103 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_2(
#line 1103 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1103 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1103 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1090 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_1(
#line 1090 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1090 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1090 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1087 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0(
#line 1087 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1085 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0_1(
#line 1085 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1085 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1085 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1085 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1078 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0(
#line 1078 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1075 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_2(
#line 1075 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1075 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1075 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1075 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1072 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_1(
#line 1072 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1072 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1072 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1072 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1067 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0(
#line 1067 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4);

#line 1044 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__maybe_write_progress_message_7_p_0(
#line 1044 "stack_opt.m"
  MR_String ll_backend__stack_opt__Message_8,
#line 1044 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_9,
#line 1044 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_10,
#line 1044 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ProcInfo_11,
#line 1044 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_12);

#line 1029 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(
#line 1029 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1025 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(
#line 1025 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1020 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_2(
#line 1020 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1020 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1017 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_1(
#line 1017 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1017 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1012 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0(
#line 1012 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 1012 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__AllPaths_2);

#line 999 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_2(
#line 999 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 999 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 985 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_1(
#line 985 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 985 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 976 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(
#line 976 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 976 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 976 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 976 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 976 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 976 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32,
#line 976 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_33);

#line 967 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(
#line 967 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 967 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 967 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 967 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 967 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_14,
#line 967 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_13,
#line 967 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_15);

#line 952 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__one_after_another_7_p_0(
#line 952 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_1,
#line 952 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_2,
#line 952 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_3,
#line 952 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4,
#line 952 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 952 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6,
#line 952 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_7);

#line 933 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_2(
#line 933 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 933 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 933 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 886 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_1(
#line 886 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 886 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 876 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0(
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__End_9,
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_10,
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_11,
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_12,
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_13,
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__SuccessorIds_14,
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36,
#line 876 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);

#line 848 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_3(
#line 848 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 844 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_2(
#line 844 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 835 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_1(
#line 835 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 825 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0(
#line 825 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 825 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_9,
#line 825 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_10,
#line 825 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_11,
#line 825 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_12,
#line 825 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28,
#line 825 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29);

#line 818 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1(
#line 818 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 818 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 818 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 818 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 818 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 803 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(
#line 803 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_5,
#line 803 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchInfo_6,
#line 803 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_7,
#line 803 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_8);

#line 781 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_more_successors_1_f_0(
#line 781 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 772 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_one_successor_1_f_0(
#line 772 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 763 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_no_successor_1_f_0(
#line 763 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 735 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__anchor_requires_close_2_f_0(
#line 735 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_1,
#line 735 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 728 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_anchor_to_path_2_f_0(
#line 728 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_4,
#line 728 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_8);

#line 714 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_interval_to_path_3_f_0(
#line 714 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_5,
#line 714 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Vars_6,
#line 714 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_12);

#line 697 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__close_path_1_f_0_1(
#line 697 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 690 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__close_path_1_f_0(
#line 690 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_3);

#line 679 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__extract_match_and_save_info_4_p_0(
#line 679 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_5,
#line 679 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchPathInfo_6,
#line 679 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Anchors_7,
#line 679 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Intervals_8);

#line 622 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__add_anchor_inserts_10_p_0(
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_11,
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVarsViaCellVar_12,
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__InsertIntervals_13,
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_14,
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27,
#line 622 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_28,
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29,
#line 622 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30,
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31,
#line 622 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32);

#line 607 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(
#line 607 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 607 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_11,
#line 607 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 607 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_17,
#line 607 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_18,
#line 607 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_19,
#line 607 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_20,
#line 607 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21,
#line 607 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22);

#line 593 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_2(
#line 593 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 593 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 593 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 593 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 593 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 593 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 593 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 593 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7);

#line 590 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_1(
#line 590 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 590 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 590 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 590 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 590 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 590 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 590 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 590 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7);

#line 578 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0(
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_12,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_13,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVars_14,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_15,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_16,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialAnchors_17,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialIntervals_18,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31,
#line 578 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33,
#line 578 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34);

#line 560 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_matching_for_path_8_p_0(
#line 560 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 560 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_10,
#line 560 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 560 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars_12,
#line 560 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfo_13,
#line 560 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodes_14,
#line 560 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodes_15,
#line 560 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_16);

#line 481 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_1(
#line 481 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 481 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_3(
#line 481 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 483 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_5(
#line 483 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 481 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_4(
#line 481 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 481 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_2(
#line 481 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 481 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_6(
#line 481 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 409 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0(
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FieldVarList_10,
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_11,
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_12,
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51,
#line 409 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52,
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53,
#line 409 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54);

#line 239 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__optimize_live_sets_7_p_0(
#line 239 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_8,
#line 239 "stack_opt.m"
  MR_Word ll_backend__stack_opt__OptAlloc_9,
#line 239 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60,
#line 239 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61,
#line 239 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Changed_11,
#line 239 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_12,
#line 239 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_13);


static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_1[15][2];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_2[17][3];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_3[1][1];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_4[1][12];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_5[1][13];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_6[1][4];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_7[2][7];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_8[6][5];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_9[1][10];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_10[5][6];

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_11[1][11];




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
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_7[0])),
    ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[1])),
    ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[2])),
    ((MR_Box) (ll_backend__stack_opt__consolidate_after_join_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[3])),
    ((MR_Box) (ll_backend__stack_opt__consolidate_after_join_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_10[1])),
    ((MR_Box) (ll_backend__stack_opt__dump_stack_opt_info_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_10[2])),
    ((MR_Box) (ll_backend__stack_opt__dump_stack_opt_info_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_10[3])),
    ((MR_Box) (ll_backend__stack_opt__dump_anchor_inserts_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_insert_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_insert_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[5])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[5])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_10[4])),
    ((MR_Box) (ll_backend__stack_opt__dump_matching_result_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ll_backend__stack_opt_scalar_common_10[4])),
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
    ((MR_Box) (&ll_backend__stack_opt__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
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
    ((MR_Box) (&ll_backend__stack_opt__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
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
    ((MR_Box) (&ll_backend__stack_opt__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_7[2][7] = {
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
    ((MR_Box) (&ll_backend__stack_opt__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_8[6][5] = {
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

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_9[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__stack_opt__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_10[5][6] = {
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

static /* final */ const MR_Box ll_backend__stack_opt_scalar_common_11[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_params_0)),
    ((MR_Box) (&ll_backend__stack_opt__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&ll_backend__stack_opt__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 2109 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2117 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2125 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2133 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2141 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2149 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2157 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__stack_opt__type_ctor_info_path_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0
  }
};

#line 2165 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2173 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_opt__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2182 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 2190 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 2198 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0
  }
};

#line 2206 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2214 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_all_paths_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2221 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_all_paths_0_0[3] = {
  (MR_String) "paths_so_far",
  (MR_String) "stepped_over_model_non",
  (MR_String) "used_after_scope"
};

#line 2228 "ll_backend.stack_opt.c"
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

#line 2243 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0
};

#line 2248 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0
  }
};

#line 2257 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0
};

#line 2262 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0[1] = {
  (MR_Integer) 0
};

#line 2267 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____all_paths_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____all_paths_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "all_paths",
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0
  },
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0
};

#line 2288 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0 = {
  (MR_String) "current_is_before_first_flush",
  (MR_Integer) 0
};

#line 2294 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1 = {
  (MR_String) "current_is_after_first_flush",
  (MR_Integer) 1
};

#line 2300 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_value_ordered_current_segment_first_flush_0[2] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0,
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1
};

#line 2306 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0[2] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1,
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0
};

#line 2312 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2318 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "current_segment_first_flush",
  {
    ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0
  },
  {
    ll_backend__stack_opt__ll_backend__stack_opt__enum_value_ordered_current_segment_first_flush_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0
};

#line 2339 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0
  }
};

#line 2347 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2355 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2363 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2372 "ll_backend.stack_opt.c"
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

#line 2387 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0
};

#line 2392 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0
  }
};

#line 2401 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0
};

#line 2406 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0[1] = {
  (MR_Integer) 0
};

#line 2411 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____match_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____match_info_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "match_info",
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0
  },
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0
};

#line 2432 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2440 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_path_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2446 "ll_backend.stack_opt.c"
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

#line 2461 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0
};

#line 2466 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0
  }
};

#line 2475 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0
};

#line 2480 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_path_info_0[1] = {
  (MR_Integer) 0
};

#line 2485 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____match_path_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____match_path_info_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "match_path_info",
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0
  },
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0
  },
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
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
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
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_matching_result_0
  },
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_matching_result_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_matching_result_0
};

#line 2587 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0[1] = {
  (MR_Integer) 0
};

#line 2592 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2600 "ll_backend.stack_opt.c"
static const MR_NotagFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0 = {
  (MR_String) "opt_stack_alloc",
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_String) "par_conj_own_slots"
};

#line 2607 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_opt_stack_alloc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "opt_stack_alloc",
  {
    &ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0
  },
  {
    &ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0
};

#line 2628 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_path_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2638 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_path_0_0[6] = {
  (MR_String) "flush_state",
  (MR_String) "current_segment",
  (MR_String) "first_segment",
  (MR_String) "other_segments",
  (MR_String) "flush_anchors",
  (MR_String) "occurring_intervals"
};

#line 2648 "ll_backend.stack_opt.c"
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

#line 2663 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0
};

#line 2668 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0
  }
};

#line 2677 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0
};

#line 2682 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0[1] = {
  (MR_Integer) 0
};

#line 2687 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____path_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____path_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "path",
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0
  },
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0
};

#line 2708 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2717 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0
  }
};

#line 2725 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_params_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0
};

#line 2732 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_info_0_0[3] = {
  (MR_String) "soi_stack_opt_params",
  (MR_String) "soi_left_anchor_inserts",
  (MR_String) "soi_matching_results"
};

#line 2739 "ll_backend.stack_opt.c"
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

#line 2754 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0
};

#line 2759 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0
  }
};

#line 2768 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0
};

#line 2773 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0[1] = {
  (MR_Integer) 0
};

#line 2778 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "stack_opt_info",
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0
  },
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0
};

#line 2799 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_params_0_0[6] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_matching_params_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2809 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_params_0_0[6] = {
  (MR_String) "sop_matching_params",
  (MR_String) "sop_all_path_node_ratio",
  (MR_String) "sop_fixpoint_loop",
  (MR_String) "sop_full_path",
  (MR_String) "sop_on_stack",
  (MR_String) "sop_non_candidate_vars"
};

#line 2819 "ll_backend.stack_opt.c"
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

#line 2853 "ll_backend.stack_opt.c"
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

#line 2868 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0
};

#line 2873 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0
  }
};

#line 2882 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0
};

#line 2887 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0[1] = {
  (MR_Integer) 0
};

#line 2892 "ll_backend.stack_opt.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001)),
  ((MR_Box) (ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001)),
  (MR_String) "ll_backend.stack_opt",
  (MR_String) "stack_opt_params",
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0
  },
  {
    ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0
};

#line 2913 "ll_backend.stack_opt.c"
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

#line 2926 "ll_backend.stack_opt.c"
const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__ll_backend__stack_opt__stack_opt_info__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001))
};

#line 2936 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0_10001(
#line 2939 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 2941 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 2943 "ll_backend.stack_opt.c"
{
#line 2945 "ll_backend.stack_opt.c"
  {
#line 2947 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 2950 "ll_backend.stack_opt.c"
    {
#line 2952 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____all_paths_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 2955 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 2957 "ll_backend.stack_opt.c"
  }
#line 2959 "ll_backend.stack_opt.c"
}

#line 2962 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0_10001(
#line 2965 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 2967 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 2969 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 2971 "ll_backend.stack_opt.c"
{
#line 2973 "ll_backend.stack_opt.c"
  {
#line 2975 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 2978 "ll_backend.stack_opt.c"
    {
#line 2980 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____all_paths_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 2983 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 2985 "ll_backend.stack_opt.c"
  }
#line 2987 "ll_backend.stack_opt.c"
}

#line 2990 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001(
#line 2993 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 2995 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 2997 "ll_backend.stack_opt.c"
{
#line 2999 "ll_backend.stack_opt.c"
  {
#line 3001 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3004 "ll_backend.stack_opt.c"
    {
#line 3006 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3009 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3011 "ll_backend.stack_opt.c"
  }
#line 3013 "ll_backend.stack_opt.c"
}

#line 3016 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001(
#line 3019 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3021 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3023 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3025 "ll_backend.stack_opt.c"
{
#line 3027 "ll_backend.stack_opt.c"
  {
#line 3029 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3032 "ll_backend.stack_opt.c"
    {
#line 3034 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3037 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3039 "ll_backend.stack_opt.c"
  }
#line 3041 "ll_backend.stack_opt.c"
}

#line 3044 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0_10001(
#line 3047 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3049 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3051 "ll_backend.stack_opt.c"
{
#line 3053 "ll_backend.stack_opt.c"
  {
#line 3055 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3058 "ll_backend.stack_opt.c"
    {
#line 3060 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____match_info_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3063 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3065 "ll_backend.stack_opt.c"
  }
#line 3067 "ll_backend.stack_opt.c"
}

#line 3070 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0_10001(
#line 3073 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3075 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3077 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3079 "ll_backend.stack_opt.c"
{
#line 3081 "ll_backend.stack_opt.c"
  {
#line 3083 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3086 "ll_backend.stack_opt.c"
    {
#line 3088 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____match_info_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3091 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3093 "ll_backend.stack_opt.c"
  }
#line 3095 "ll_backend.stack_opt.c"
}

#line 3098 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0_10001(
#line 3101 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3103 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3105 "ll_backend.stack_opt.c"
{
#line 3107 "ll_backend.stack_opt.c"
  {
#line 3109 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3112 "ll_backend.stack_opt.c"
    {
#line 3114 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____match_path_info_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3117 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3119 "ll_backend.stack_opt.c"
  }
#line 3121 "ll_backend.stack_opt.c"
}

#line 3124 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0_10001(
#line 3127 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3129 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3131 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3133 "ll_backend.stack_opt.c"
{
#line 3135 "ll_backend.stack_opt.c"
  {
#line 3137 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3140 "ll_backend.stack_opt.c"
    {
#line 3142 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____match_path_info_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3145 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3147 "ll_backend.stack_opt.c"
  }
#line 3149 "ll_backend.stack_opt.c"
}

#line 3152 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0_10001(
#line 3155 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3157 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3159 "ll_backend.stack_opt.c"
{
#line 3161 "ll_backend.stack_opt.c"
  {
#line 3163 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3166 "ll_backend.stack_opt.c"
    {
#line 3168 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____matching_result_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3171 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3173 "ll_backend.stack_opt.c"
  }
#line 3175 "ll_backend.stack_opt.c"
}

#line 3178 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0_10001(
#line 3181 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3183 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3185 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3187 "ll_backend.stack_opt.c"
{
#line 3189 "ll_backend.stack_opt.c"
  {
#line 3191 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3194 "ll_backend.stack_opt.c"
    {
#line 3196 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____matching_result_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3199 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3201 "ll_backend.stack_opt.c"
  }
#line 3203 "ll_backend.stack_opt.c"
}

#line 3206 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001(
#line 3209 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3211 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3213 "ll_backend.stack_opt.c"
{
#line 3215 "ll_backend.stack_opt.c"
  {
#line 3217 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3220 "ll_backend.stack_opt.c"
    {
#line 3222 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3225 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3227 "ll_backend.stack_opt.c"
  }
#line 3229 "ll_backend.stack_opt.c"
}

#line 3232 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001(
#line 3235 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3237 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3239 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3241 "ll_backend.stack_opt.c"
{
#line 3243 "ll_backend.stack_opt.c"
  {
#line 3245 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3248 "ll_backend.stack_opt.c"
    {
#line 3250 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3253 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3255 "ll_backend.stack_opt.c"
  }
#line 3257 "ll_backend.stack_opt.c"
}

#line 3260 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0_10001(
#line 3263 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3265 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3267 "ll_backend.stack_opt.c"
{
#line 3269 "ll_backend.stack_opt.c"
  {
#line 3271 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3274 "ll_backend.stack_opt.c"
    {
#line 3276 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____path_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3279 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3281 "ll_backend.stack_opt.c"
  }
#line 3283 "ll_backend.stack_opt.c"
}

#line 3286 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0_10001(
#line 3289 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3291 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3293 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3295 "ll_backend.stack_opt.c"
{
#line 3297 "ll_backend.stack_opt.c"
  {
#line 3299 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3302 "ll_backend.stack_opt.c"
    {
#line 3304 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____path_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3307 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3309 "ll_backend.stack_opt.c"
  }
#line 3311 "ll_backend.stack_opt.c"
}

#line 3314 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001(
#line 3317 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3319 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3321 "ll_backend.stack_opt.c"
{
#line 3323 "ll_backend.stack_opt.c"
  {
#line 3325 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3328 "ll_backend.stack_opt.c"
    {
#line 3330 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____stack_opt_info_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3333 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3335 "ll_backend.stack_opt.c"
  }
#line 3337 "ll_backend.stack_opt.c"
}

#line 3340 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001(
#line 3343 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3345 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3347 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3349 "ll_backend.stack_opt.c"
{
#line 3351 "ll_backend.stack_opt.c"
  {
#line 3353 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3356 "ll_backend.stack_opt.c"
    {
#line 3358 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____stack_opt_info_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3361 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3363 "ll_backend.stack_opt.c"
  }
#line 3365 "ll_backend.stack_opt.c"
}

#line 3368 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001(
#line 3371 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3373 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3375 "ll_backend.stack_opt.c"
{
#line 3377 "ll_backend.stack_opt.c"
  {
#line 3379 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3382 "ll_backend.stack_opt.c"
    {
#line 3384 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____stack_opt_params_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3387 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3389 "ll_backend.stack_opt.c"
  }
#line 3391 "ll_backend.stack_opt.c"
}

#line 3394 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001(
#line 3397 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3399 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3401 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3403 "ll_backend.stack_opt.c"
{
#line 3405 "ll_backend.stack_opt.c"
  {
#line 3407 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3410 "ll_backend.stack_opt.c"
    {
#line 3412 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____stack_opt_params_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3415 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3417 "ll_backend.stack_opt.c"
  }
#line 3419 "ll_backend.stack_opt.c"
}

#line 3422 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 3425 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3427 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3429 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3431 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3433 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3435 "ll_backend.stack_opt.c"
{
#line 3437 "ll_backend.stack_opt.c"
  {
#line 3439 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3441 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3444 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3446 "ll_backend.stack_opt.c"
    {
#line 3448 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3451 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3453 "ll_backend.stack_opt.c"
  }
#line 3455 "ll_backend.stack_opt.c"
}

#line 3458 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 3461 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3463 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3465 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3467 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3469 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3471 "ll_backend.stack_opt.c"
{
#line 3473 "ll_backend.stack_opt.c"
  {
#line 3475 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3477 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3480 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3482 "ll_backend.stack_opt.c"
    {
#line 3484 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3487 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3489 "ll_backend.stack_opt.c"
  }
#line 3491 "ll_backend.stack_opt.c"
}

#line 3494 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 3497 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3499 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3501 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3503 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3505 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3507 "ll_backend.stack_opt.c"
{
#line 3509 "ll_backend.stack_opt.c"
  {
#line 3511 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3513 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3516 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3518 "ll_backend.stack_opt.c"
    {
#line 3520 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3523 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3525 "ll_backend.stack_opt.c"
  }
#line 3527 "ll_backend.stack_opt.c"
}

#line 3530 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 3533 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3535 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3537 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3539 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3541 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3543 "ll_backend.stack_opt.c"
{
#line 3545 "ll_backend.stack_opt.c"
  {
#line 3547 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3549 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3552 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3554 "ll_backend.stack_opt.c"
    {
#line 3556 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3559 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3561 "ll_backend.stack_opt.c"
  }
#line 3563 "ll_backend.stack_opt.c"
}

#line 3566 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
#line 3569 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3571 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3573 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3575 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3577 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 3579 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_5,
#line 3581 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_6,
#line 3583 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_7,
#line 3585 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_8)
#line 3587 "ll_backend.stack_opt.c"
{
#line 3589 "ll_backend.stack_opt.c"
  {
#line 3591 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3593 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv1_HeadVar__6_6;
#line 3595 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__8_8;

#line 3598 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3600 "ll_backend.stack_opt.c"
    {
#line 3602 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), ((MR_Word) ll_backend__stack_opt__wrapper_arg_4), ((MR_Word) ll_backend__stack_opt__wrapper_arg_5), &ll_backend__stack_opt__conv1_HeadVar__6_6, ((MR_Word) ll_backend__stack_opt__wrapper_arg_7), &ll_backend__stack_opt__conv0_HeadVar__8_8);
    }
#line 3605 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_6 = ((MR_Box) (ll_backend__stack_opt__conv1_HeadVar__6_6));
#line 3607 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_8 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__8_8));
#line 3609 "ll_backend.stack_opt.c"
  }
#line 3611 "ll_backend.stack_opt.c"
}

#line 339 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_50_93_95_48_4_p_0(
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 339 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 339 "stack_opt.m"
{
#line 365 "stack_opt.m"
  {
#line 365 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 365 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 365 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackVarsSets_10 = (MR_Word) ll_backend__stack_opt__HeadVar__1_1;
#line 365 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackVars_11;
#line 365 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots0_12;
#line 365 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots_13;

#line 367 "stack_opt.m"
    {
#line 367 "stack_opt.m"
      ll_backend__stack_opt__StackVars_11 = parse_tree__set_of_var__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_16_16, ll_backend__stack_opt__StackVarsSets_10);
    }
#line 368 "stack_opt.m"
    ll_backend__stack_opt__ParConjOwnSlots0_12 = (MR_Word) ll_backend__stack_opt__HeadVar__3_3;
#line 369 "stack_opt.m"
    {
#line 369 "stack_opt.m"
      ll_backend__stack_opt__ParConjOwnSlots_13 = parse_tree__set_of_var__union_2_f_0(ll_backend__stack_opt__TypeCtorInfo_16_16, ll_backend__stack_opt__StackVars_11, ll_backend__stack_opt__ParConjOwnSlots0_12);
    }
#line 370 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = (MR_Word) ll_backend__stack_opt__ParConjOwnSlots_13;
#line 365 "stack_opt.m"
  }
#line 339 "stack_opt.m"
}

#line 338 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_p_0(
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 338 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 338 "stack_opt.m"
{
#line 356 "stack_opt.m"
  {
#line 356 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 356 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackVars_10 = (MR_Word) ll_backend__stack_opt__HeadVar__1_1;
#line 356 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots0_11 = (MR_Word) ll_backend__stack_opt__HeadVar__3_3;
#line 356 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots_12;

#line 359 "stack_opt.m"
    {
#line 359 "stack_opt.m"
      ll_backend__stack_opt__ParConjOwnSlots_12 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__StackVars_10, ll_backend__stack_opt__ParConjOwnSlots0_11);
    }
#line 360 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = (MR_Word) ll_backend__stack_opt__ParConjOwnSlots_12;
#line 356 "stack_opt.m"
  }
#line 338 "stack_opt.m"
}

#line 337 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 337 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 337 "stack_opt.m"
{
#line 351 "stack_opt.m"
  {
#line 351 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 351 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = ll_backend__stack_opt__HeadVar__3_3;
#line 351 "stack_opt.m"
  }
#line 337 "stack_opt.m"
}

#line 336 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 336 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 336 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 336 "stack_opt.m"
{
#line 346 "stack_opt.m"
  {
#line 346 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 346 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = ll_backend__stack_opt__HeadVar__3_3;
#line 346 "stack_opt.m"
  }
#line 336 "stack_opt.m"
}

#line 532 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1(
#line 532 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 532 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 532 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 532 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 532 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 532 "stack_opt.m"
{
#line 532 "stack_opt.m"
  {
#line 532 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 532 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv2_BenefitNodes_14;
#line 532 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_CostNodes_15;
#line 532 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_ViaCellVars_16;

#line 532 "stack_opt.m"
    {
#line 532 "stack_opt.m"
      ll_backend__stack_opt__apply_matching_for_path_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 6))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv2_BenefitNodes_14, &ll_backend__stack_opt__conv1_CostNodes_15, &ll_backend__stack_opt__conv0_ViaCellVars_16);
    }
#line 532 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv2_BenefitNodes_14));
#line 532 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv1_CostNodes_15));
#line 532 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_ViaCellVars_16));
#line 532 "stack_opt.m"
  }
#line 532 "stack_opt.m"
}

#line 524 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(
#line 524 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 524 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_11,
#line 524 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_13,
#line 524 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_14,
#line 524 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_15,
#line 524 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodeSets_16,
#line 524 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodeSets_17,
#line 524 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_18)
#line 524 "stack_opt.m"
{
#line 531 "stack_opt.m"
  while (MR_TRUE)
#line 531 "stack_opt.m"
    {
#line 531 "stack_opt.m"
      /* tailcall optimized into a loop */
#line 531 "stack_opt.m"
      {
#line 531 "stack_opt.m"
        MR_bool ll_backend__stack_opt__succeeded;
#line 531 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_38_38;
#line 531 "stack_opt.m"
        MR_Word ll_backend__stack_opt__BenefitNodeSets0_19;
#line 531 "stack_opt.m"
        MR_Word ll_backend__stack_opt__CostNodeSets0_20;
#line 531 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PathViaCellVars_21;
#line 531 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_25_25;

#line 532 "stack_opt.m"
        {
#line 532 "stack_opt.m"
          ll_backend__stack_opt__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 532 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_11[0]));
#line 532 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 1) = ((MR_Box) (ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1));
#line 532 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 532 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 3) = ((MR_Box) (ll_backend__stack_opt__CellVar_10));
#line 532 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 4) = ((MR_Box) (ll_backend__stack_opt__CellVarFlushedLater_11));
#line 532 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 5) = ((MR_Box) (ll_backend__stack_opt__StackOptParams_13));
#line 532 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 6) = ((MR_Box) (ll_backend__stack_opt__CandidateArgVars0_15));
#line 532 "stack_opt.m"
        }
#line 3839 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeInfo_38_38 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 532 "stack_opt.m"
        {
#line 532 "stack_opt.m"
          mercury__list__map3_5_p_0((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0, (MR_Word) &ll_backend__stack_opt_scalar_common_1[7], (MR_Word) &ll_backend__stack_opt_scalar_common_1[8], ll_backend__stack_opt__TypeInfo_38_38, ll_backend__stack_opt__V_25_25, ll_backend__stack_opt__PathInfos_14, &ll_backend__stack_opt__BenefitNodeSets0_19, &ll_backend__stack_opt__CostNodeSets0_20, &ll_backend__stack_opt__PathViaCellVars_21);
        }
#line 535 "stack_opt.m"
        {
#line 535 "stack_opt.m"
          ll_backend__stack_opt__succeeded = mercury__list__all_same_1_p_0(ll_backend__stack_opt__TypeInfo_38_38, ll_backend__stack_opt__PathViaCellVars_21);
        }
#line 544 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 536 "stack_opt.m"
          {
#line 536 "stack_opt.m"
            *ll_backend__stack_opt__BenefitNodeSets_16 = ll_backend__stack_opt__BenefitNodeSets0_19;
#line 537 "stack_opt.m"
            *ll_backend__stack_opt__CostNodeSets_17 = ll_backend__stack_opt__CostNodeSets0_20;
#line 540 "stack_opt.m"
            if ((ll_backend__stack_opt__PathViaCellVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 541 "stack_opt.m"
              {
#line 542 "stack_opt.m"
                {
#line 542 "stack_opt.m"
                  *ll_backend__stack_opt__ViaCellVars_18 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                }
#line 541 "stack_opt.m"
              }
#line 540 "stack_opt.m"
            else
#line 539 "stack_opt.m"
              {
#line 539 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_22_22;

#line 539 "stack_opt.m"
                *ll_backend__stack_opt__ViaCellVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__PathViaCellVars_21, (MR_Integer) 0)));
#line 539 "stack_opt.m"
                ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__PathViaCellVars_21, (MR_Integer) 1)));
#line 539 "stack_opt.m"
              }
#line 536 "stack_opt.m"
          }
#line 544 "stack_opt.m"
        else
#line 545 "stack_opt.m"
          {
#line 545 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CandidateArgVars1_23;
#line 545 "stack_opt.m"
            MR_Word ll_backend__stack_opt__FixpointLoop_24;
#line 546 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_26_26;
#line 546 "stack_opt.m"
            MR_Integer ll_backend__stack_opt__V_27_27;
#line 546 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_28_28;
#line 546 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_29_29;
#line 546 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_30_30;

#line 545 "stack_opt.m"
            {
#line 545 "stack_opt.m"
              ll_backend__stack_opt__CandidateArgVars1_23 = parse_tree__set_of_var__intersect_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__PathViaCellVars_21);
            }
#line 546 "stack_opt.m"
            ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 0)));
#line 546 "stack_opt.m"
            ll_backend__stack_opt__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 1)));
#line 546 "stack_opt.m"
            ll_backend__stack_opt__FixpointLoop_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 546 "stack_opt.m"
            ll_backend__stack_opt__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 546 "stack_opt.m"
            ll_backend__stack_opt__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 546 "stack_opt.m"
            ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 3)));
#line 552 "stack_opt.m"
            if ((ll_backend__stack_opt__FixpointLoop_24 == (MR_Integer) 0))
#line 548 "stack_opt.m"
              {
#line 549 "stack_opt.m"
                *ll_backend__stack_opt__BenefitNodeSets_16 = ll_backend__stack_opt__BenefitNodeSets0_19;
#line 550 "stack_opt.m"
                *ll_backend__stack_opt__CostNodeSets_17 = ll_backend__stack_opt__CostNodeSets0_20;
#line 551 "stack_opt.m"
                *ll_backend__stack_opt__ViaCellVars_18 = ll_backend__stack_opt__CandidateArgVars1_23;
#line 548 "stack_opt.m"
              }
#line 552 "stack_opt.m"
            else
#line 554 "stack_opt.m"
              {
#line 554 "stack_opt.m"
                /* direct tailcall eliminated */
#line 554 "stack_opt.m"
                {
#line 554 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__CandidateArgVars0__tmp_copy_15 = ll_backend__stack_opt__CandidateArgVars1_23;

#line 554 "stack_opt.m"
                  ll_backend__stack_opt__CandidateArgVars0_15 = ll_backend__stack_opt__CandidateArgVars0__tmp_copy_15;
#line 554 "stack_opt.m"
                }
#line 554 "stack_opt.m"
                continue;
#line 554 "stack_opt.m"
              }
#line 545 "stack_opt.m"
          }
#line 531 "stack_opt.m"
      }
#line 531 "stack_opt.m"
      break;
#line 531 "stack_opt.m"
    }
#line 524 "stack_opt.m"
}

#line 504 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0(
#line 504 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_8,
#line 504 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_9,
#line 504 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 504 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_12,
#line 504 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_13,
#line 504 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_14)
#line 504 "stack_opt.m"
{
#line 509 "stack_opt.m"
  {
#line 509 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 509 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_31_31;
#line 509 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_32_32;
#line 509 "stack_opt.m"
    MR_Word ll_backend__stack_opt__BenefitNodeSets_15;
#line 509 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CostNodeSets_16;
#line 509 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ViaCellVars0_17;
#line 509 "stack_opt.m"
    MR_Word ll_backend__stack_opt__BenefitNodes_18;
#line 509 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CostNodes_19;
#line 509 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__NumBenefitNodes_20;
#line 509 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__NumCostNodes_21;
#line 509 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__AllPathNodeRatio_22;
#line 517 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_26_26;
#line 517 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_27_27;
#line 517 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_28_28;
#line 517 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_29_29;
#line 517 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_30_30;
#line 518 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__V_23_23;
#line 518 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__V_24_24;

#line 510 "stack_opt.m"
    {
#line 510 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(ll_backend__stack_opt__CellVar_8, ll_backend__stack_opt__CellVarFlushedLater_9, ll_backend__stack_opt__StackOptParams_11, ll_backend__stack_opt__PathInfos_12, ll_backend__stack_opt__CandidateArgVars0_13, &ll_backend__stack_opt__BenefitNodeSets_15, &ll_backend__stack_opt__CostNodeSets_16, &ll_backend__stack_opt__ViaCellVars0_17);
    }
#line 4024 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_31_31 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 513 "stack_opt.m"
    {
#line 513 "stack_opt.m"
      ll_backend__stack_opt__BenefitNodes_18 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_31_31, ll_backend__stack_opt__BenefitNodeSets_15);
    }
#line 4031 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_32_32 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 514 "stack_opt.m"
    {
#line 514 "stack_opt.m"
      ll_backend__stack_opt__CostNodes_19 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_32_32, ll_backend__stack_opt__CostNodeSets_16);
    }
#line 515 "stack_opt.m"
    {
#line 515 "stack_opt.m"
      mercury__set__count_2_p_0(ll_backend__stack_opt__TypeCtorInfo_31_31, ll_backend__stack_opt__BenefitNodes_18, &ll_backend__stack_opt__NumBenefitNodes_20);
    }
#line 516 "stack_opt.m"
    {
#line 516 "stack_opt.m"
      mercury__set__count_2_p_0(ll_backend__stack_opt__TypeCtorInfo_32_32, ll_backend__stack_opt__CostNodes_19, &ll_backend__stack_opt__NumCostNodes_21);
    }
#line 517 "stack_opt.m"
    ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 0)));
#line 517 "stack_opt.m"
    ll_backend__stack_opt__AllPathNodeRatio_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 1)));
#line 517 "stack_opt.m"
    ll_backend__stack_opt__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 517 "stack_opt.m"
    ll_backend__stack_opt__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 517 "stack_opt.m"
    ll_backend__stack_opt__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 517 "stack_opt.m"
    ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 3)));
#line 518 "stack_opt.m"
    ll_backend__stack_opt__V_23_23 = (ll_backend__stack_opt__NumBenefitNodes_20 * (MR_Integer) 100);
#line 518 "stack_opt.m"
    ll_backend__stack_opt__V_24_24 = (ll_backend__stack_opt__NumCostNodes_21 * ll_backend__stack_opt__AllPathNodeRatio_22);
#line 518 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_23_23 >= ll_backend__stack_opt__V_24_24);
#line 520 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 519 "stack_opt.m"
      *ll_backend__stack_opt__ViaCellVars_14 = ll_backend__stack_opt__ViaCellVars0_17;
#line 520 "stack_opt.m"
    else
#line 521 "stack_opt.m"
      {
#line 521 "stack_opt.m"
        {
#line 521 "stack_opt.m"
          *ll_backend__stack_opt__ViaCellVars_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 521 "stack_opt.m"
      }
#line 509 "stack_opt.m"
  }
#line 504 "stack_opt.m"
}

#line 1148 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1148__1_3_p_0(
#line 1148 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_93)
#line 1148 "stack_opt.m"
{
#line 1148 "stack_opt.m"
  {
#line 1148 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1148 "stack_opt.m"
    {
#line 1148 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__HeadVar__1_93)));
#line 1148 "stack_opt.m"
      return;
    }
#line 1148 "stack_opt.m"
  }
#line 1148 "stack_opt.m"
}

#line 1145 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1145__1_3_p_0(
#line 1145 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_89)
#line 1145 "stack_opt.m"
{
#line 1145 "stack_opt.m"
  {
#line 1145 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1145 "stack_opt.m"
    {
#line 1145 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__HeadVar__1_89)));
#line 1145 "stack_opt.m"
      return;
    }
#line 1145 "stack_opt.m"
  }
#line 1145 "stack_opt.m"
}

#line 1122 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1122__1_2_p_0(
#line 1122 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_80,
#line 1122 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_81)
#line 1122 "stack_opt.m"
{
#line 1122 "stack_opt.m"
  {
#line 1122 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1122 "stack_opt.m"
    {
#line 1122 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_80, ll_backend__stack_opt__HeadVar__2_81);
#line 1122 "stack_opt.m"
      return;
    }
#line 1122 "stack_opt.m"
  }
#line 1122 "stack_opt.m"
}

#line 1121 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1121__1_2_p_0(
#line 1121 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_75,
#line 1121 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_76)
#line 1121 "stack_opt.m"
{
#line 1121 "stack_opt.m"
  {
#line 1121 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1121 "stack_opt.m"
    {
#line 1121 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_75, ll_backend__stack_opt__HeadVar__2_76);
#line 1121 "stack_opt.m"
      return;
    }
#line 1121 "stack_opt.m"
  }
#line 1121 "stack_opt.m"
}

#line 1103 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1103__1_2_p_0(
#line 1103 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_51,
#line 1103 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_52)
#line 1103 "stack_opt.m"
{
#line 1103 "stack_opt.m"
  {
#line 1103 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1103 "stack_opt.m"
    {
#line 1103 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_51, ll_backend__stack_opt__HeadVar__2_52);
#line 1103 "stack_opt.m"
      return;
    }
#line 1103 "stack_opt.m"
  }
#line 1103 "stack_opt.m"
}

#line 1090 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1090__1_2_p_0(
#line 1090 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_45,
#line 1090 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_46)
#line 1090 "stack_opt.m"
{
#line 1090 "stack_opt.m"
  {
#line 1090 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1090 "stack_opt.m"
    {
#line 1090 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_45, ll_backend__stack_opt__HeadVar__2_46);
#line 1090 "stack_opt.m"
      return;
    }
#line 1090 "stack_opt.m"
  }
#line 1090 "stack_opt.m"
}

#line 848 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__848__1_2_p_0(
#line 848 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_36,
#line 848 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_37)
#line 848 "stack_opt.m"
{
#line 848 "stack_opt.m"
  {
#line 848 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__1_36 == ll_backend__stack_opt__HeadVar__2_37);

#line 848 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 848 "stack_opt.m"
  }
#line 848 "stack_opt.m"
}

#line 844 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__844__1_2_p_0(
#line 844 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_42,
#line 844 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_43)
#line 844 "stack_opt.m"
{
#line 844 "stack_opt.m"
  {
#line 844 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__1_42 == ll_backend__stack_opt__HeadVar__2_43);

#line 844 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 844 "stack_opt.m"
  }
#line 844 "stack_opt.m"
}

#line 835 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__835__1_2_p_0(
#line 835 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_54,
#line 835 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_55)
#line 835 "stack_opt.m"
{
#line 835 "stack_opt.m"
  {
#line 835 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__1_54 == ll_backend__stack_opt__HeadVar__2_55);

#line 835 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 835 "stack_opt.m"
  }
#line 835 "stack_opt.m"
}

#line 697 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__close_path__697__1_1_p_0(
#line 697 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FirstSegment0_7)
#line 697 "stack_opt.m"
{
#line 697 "stack_opt.m"
  {
#line 697 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 697 "stack_opt.m"
    {
#line 697 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__FirstSegment0_7);
    }
#line 697 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 697 "stack_opt.m"
  }
#line 697 "stack_opt.m"
}

#line 339 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
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
#line 365 "stack_opt.m"
  {
#line 365 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 365 "stack_opt.m"
    {
#line 365 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
#line 365 "stack_opt.m"
      return;
    }
#line 365 "stack_opt.m"
  }
#line 339 "stack_opt.m"
}

#line 338 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
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
#line 356 "stack_opt.m"
  {
#line 356 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 356 "stack_opt.m"
    {
#line 356 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
#line 356 "stack_opt.m"
      return;
    }
#line 356 "stack_opt.m"
  }
#line 338 "stack_opt.m"
}

#line 337 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 337 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 337 "stack_opt.m"
{
#line 351 "stack_opt.m"
  {
#line 351 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 351 "stack_opt.m"
    {
#line 351 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
#line 351 "stack_opt.m"
      return;
    }
#line 351 "stack_opt.m"
  }
#line 337 "stack_opt.m"
}

#line 336 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 336 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 336 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 336 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 336 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 336 "stack_opt.m"
{
#line 346 "stack_opt.m"
  {
#line 346 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 346 "stack_opt.m"
    {
#line 346 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
#line 346 "stack_opt.m"
      return;
    }
#line 346 "stack_opt.m"
  }
#line 336 "stack_opt.m"
}

#line 376 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(
#line 376 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 376 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 376 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 376 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__4_4,
#line 376 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 376 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__6_6,
#line 376 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__7_7,
#line 376 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__8_8)
#line 376 "stack_opt.m"
{
#line 376 "stack_opt.m"
  {
#line 376 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 376 "stack_opt.m"
    {
#line 376 "stack_opt.m"
      ll_backend__stack_opt__use_cell_8_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__HeadVar__2_2, ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4, ll_backend__stack_opt__HeadVar__5_5, ll_backend__stack_opt__HeadVar__6_6, ll_backend__stack_opt__HeadVar__7_7, ll_backend__stack_opt__HeadVar__8_8);
#line 376 "stack_opt.m"
      return;
    }
#line 376 "stack_opt.m"
  }
#line 376 "stack_opt.m"
}

#line 145 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0(
#line 145 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 145 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 145 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 145 "stack_opt.m"
{
#line 145 "stack_opt.m"
  {
#line 145 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 145 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_21 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 145 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_22 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 145 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_21 == ll_backend__stack_opt__CastY_22);
#line 145 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 4507 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 145 "stack_opt.m"
    else
#line 145 "stack_opt.m"
      {
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 145 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 145 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16;

#line 145 "stack_opt.m"
        {
#line 145 "stack_opt.m"
          backend_libs__matching____Compare____matching_params_0_0(&ll_backend__stack_opt__V_16_16, ll_backend__stack_opt__V_4_4, ll_backend__stack_opt__V_10_10);
        }
#line 4545 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_16_16 == (MR_Integer) 0);
#line 145 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 145 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 145 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_16_16;
#line 145 "stack_opt.m"
        else
#line 145 "stack_opt.m"
          {
#line 145 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_17_17;

#line 145 "stack_opt.m"
            {
#line 145 "stack_opt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_17_17, ll_backend__stack_opt__V_5_5, ll_backend__stack_opt__V_11_11);
            }
#line 4565 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_17_17 == (MR_Integer) 0);
#line 145 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 145 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 145 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_17_17;
#line 145 "stack_opt.m"
            else
#line 145 "stack_opt.m"
              {
#line 145 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_18_18;
#line 145 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_29_29 = (MR_Integer) ll_backend__stack_opt__V_6_6;
#line 145 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_30_30 = (MR_Integer) ll_backend__stack_opt__V_12_12;

#line 145 "stack_opt.m"
                {
#line 145 "stack_opt.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_18_18, ll_backend__stack_opt__V_29_29, ll_backend__stack_opt__V_30_30);
                }
#line 4589 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_18_18 == (MR_Integer) 0);
#line 145 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 145 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 145 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_18_18;
#line 145 "stack_opt.m"
                else
#line 145 "stack_opt.m"
                  {
#line 145 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_19_19;
#line 145 "stack_opt.m"
                    MR_Integer ll_backend__stack_opt__V_31_31 = (MR_Integer) ll_backend__stack_opt__V_7_7;
#line 145 "stack_opt.m"
                    MR_Integer ll_backend__stack_opt__V_32_32 = (MR_Integer) ll_backend__stack_opt__V_13_13;

#line 145 "stack_opt.m"
                    {
#line 145 "stack_opt.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_19_19, ll_backend__stack_opt__V_31_31, ll_backend__stack_opt__V_32_32);
                    }
#line 4613 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_19_19 == (MR_Integer) 0);
#line 145 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 145 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 145 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_19_19;
#line 145 "stack_opt.m"
                    else
#line 145 "stack_opt.m"
                      {
#line 145 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_20_20;
#line 145 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_33_33 = (MR_Integer) ll_backend__stack_opt__V_8_8;
#line 145 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_34_34 = (MR_Integer) ll_backend__stack_opt__V_14_14;

#line 145 "stack_opt.m"
                        {
#line 145 "stack_opt.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_20_20, ll_backend__stack_opt__V_33_33, ll_backend__stack_opt__V_34_34);
                        }
#line 4637 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_20_20 == (MR_Integer) 0);
#line 145 "stack_opt.m"
                        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 145 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 145 "stack_opt.m"
                          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_20_20;
#line 145 "stack_opt.m"
                        else
#line 145 "stack_opt.m"
                          {
#line 145 "stack_opt.m"
                            {
#line 145 "stack_opt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
#line 145 "stack_opt.m"
                              return;
                            }
#line 145 "stack_opt.m"
                          }
#line 145 "stack_opt.m"
                      }
#line 145 "stack_opt.m"
                  }
#line 145 "stack_opt.m"
              }
#line 145 "stack_opt.m"
          }
#line 145 "stack_opt.m"
      }
#line 145 "stack_opt.m"
  }
#line 145 "stack_opt.m"
}

#line 145 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0(
#line 145 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 145 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 145 "stack_opt.m"
{
#line 145 "stack_opt.m"
  {
#line 145 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 145 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_15 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 145 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_16 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 145 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_15 == ll_backend__stack_opt__CastY_16);
#line 145 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 145 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 145 "stack_opt.m"
    else
#line 145 "stack_opt.m"
      {
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_18_18;
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 145 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 145 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 145 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));

#line 4728 "ll_backend.stack_opt.c"
        {
#line 4730 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = backend_libs__matching____Unify____matching_params_0_0(ll_backend__stack_opt__V_3_3, ll_backend__stack_opt__V_9_9);
        }
#line 145 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 145 "stack_opt.m"
          {
#line 4737 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_4_4 == ll_backend__stack_opt__V_10_10);
#line 145 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 145 "stack_opt.m"
              {
#line 4743 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_5_5 == ll_backend__stack_opt__V_11_11);
#line 145 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 145 "stack_opt.m"
                  {
#line 4749 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_6_6 == ll_backend__stack_opt__V_12_12);
#line 145 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 145 "stack_opt.m"
                      {
#line 4755 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_7_7 == ll_backend__stack_opt__V_13_13);
#line 145 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 145 "stack_opt.m"
                          {
#line 4761 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__TypeInfo_18_18 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 4763 "ll_backend.stack_opt.c"
                            {
#line 4765 "ll_backend.stack_opt.c"
                              return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_18_18, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                            }
#line 145 "stack_opt.m"
                          }
#line 145 "stack_opt.m"
                      }
#line 145 "stack_opt.m"
                  }
#line 145 "stack_opt.m"
              }
#line 145 "stack_opt.m"
          }
#line 145 "stack_opt.m"
      }
#line 145 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 145 "stack_opt.m"
  }
#line 145 "stack_opt.m"
}

#line 168 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0(
#line 168 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 168 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 168 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 168 "stack_opt.m"
{
#line 168 "stack_opt.m"
  {
#line 168 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 168 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_12 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 168 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_13 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 168 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_12 == ll_backend__stack_opt__CastY_13);
#line 168 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 4811 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 168 "stack_opt.m"
    else
#line 168 "stack_opt.m"
      {
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10;

#line 168 "stack_opt.m"
        {
#line 168 "stack_opt.m"
          ll_backend__stack_opt____Compare____stack_opt_params_0_0(&ll_backend__stack_opt__V_10_10, ll_backend__stack_opt__V_4_4, ll_backend__stack_opt__V_7_7);
        }
#line 4837 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_10_10 == (MR_Integer) 0);
#line 168 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 168 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 168 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_10_10;
#line 168 "stack_opt.m"
        else
#line 168 "stack_opt.m"
          {
#line 168 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_11_11;

#line 168 "stack_opt.m"
            {
#line 168 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_2[1], &ll_backend__stack_opt__V_11_11, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
            }
#line 4857 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_11_11 == (MR_Integer) 0);
#line 168 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 168 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 168 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_11_11;
#line 168 "stack_opt.m"
            else
#line 168 "stack_opt.m"
              {
#line 168 "stack_opt.m"
                {
#line 168 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[14], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
#line 168 "stack_opt.m"
                  return;
                }
#line 168 "stack_opt.m"
              }
#line 168 "stack_opt.m"
          }
#line 168 "stack_opt.m"
      }
#line 168 "stack_opt.m"
  }
#line 168 "stack_opt.m"
}

#line 168 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0(
#line 168 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 168 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 168 "stack_opt.m"
{
#line 168 "stack_opt.m"
  {
#line 168 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 168 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_9 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 168 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_10 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 168 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_9 == ll_backend__stack_opt__CastY_10);
#line 168 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 168 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 168 "stack_opt.m"
    else
#line 168 "stack_opt.m"
      {
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_11_11;
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_12_12;
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));

#line 4932 "ll_backend.stack_opt.c"
        {
#line 4934 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____stack_opt_params_0_0(ll_backend__stack_opt__V_3_3, ll_backend__stack_opt__V_6_6);
        }
#line 168 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 168 "stack_opt.m"
          {
#line 4941 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_11_11 = (MR_Word) &ll_backend__stack_opt_scalar_common_2[1];
#line 4943 "ll_backend.stack_opt.c"
            {
#line 4945 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_11_11, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_7_7)));
            }
#line 168 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 168 "stack_opt.m"
              {
#line 4952 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_12_12 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[14];
#line 4954 "ll_backend.stack_opt.c"
                {
#line 4956 "ll_backend.stack_opt.c"
                  return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_12_12, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
                }
#line 168 "stack_opt.m"
              }
#line 168 "stack_opt.m"
          }
#line 168 "stack_opt.m"
      }
#line 168 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 168 "stack_opt.m"
  }
#line 168 "stack_opt.m"
}

#line 656 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0(
#line 656 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 656 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 656 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 656 "stack_opt.m"
{
#line 656 "stack_opt.m"
  {
#line 656 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 656 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_21 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 656 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_22 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 656 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_21 == ll_backend__stack_opt__CastY_22);
#line 656 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 4996 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 656 "stack_opt.m"
    else
#line 656 "stack_opt.m"
      {
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 4)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 5)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16;
#line 656 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_29_29 = (MR_Integer) ll_backend__stack_opt__V_4_4;
#line 656 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_30_30 = (MR_Integer) ll_backend__stack_opt__V_10_10;

#line 656 "stack_opt.m"
        {
#line 656 "stack_opt.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_16_16, ll_backend__stack_opt__V_29_29, ll_backend__stack_opt__V_30_30);
        }
#line 5038 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_16_16 == (MR_Integer) 0);
#line 656 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 656 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 656 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_16_16;
#line 656 "stack_opt.m"
        else
#line 656 "stack_opt.m"
          {
#line 656 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_17_17;

#line 656 "stack_opt.m"
            {
#line 656 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_17_17, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_11_11)));
            }
#line 5058 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_17_17 == (MR_Integer) 0);
#line 656 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 656 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 656 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_17_17;
#line 656 "stack_opt.m"
            else
#line 656 "stack_opt.m"
              {
#line 656 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_18_18;

#line 656 "stack_opt.m"
                {
#line 656 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_18_18, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                }
#line 5078 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_18_18 == (MR_Integer) 0);
#line 656 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 656 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 656 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_18_18;
#line 656 "stack_opt.m"
                else
#line 656 "stack_opt.m"
                  {
#line 656 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_19_19;

#line 656 "stack_opt.m"
                    {
#line 656 "stack_opt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[5], &ll_backend__stack_opt__V_19_19, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
                    }
#line 5098 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_19_19 == (MR_Integer) 0);
#line 656 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 656 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 656 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_19_19;
#line 656 "stack_opt.m"
                    else
#line 656 "stack_opt.m"
                      {
#line 656 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_20_20;

#line 656 "stack_opt.m"
                        {
#line 656 "stack_opt.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], &ll_backend__stack_opt__V_20_20, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                        }
#line 5118 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_20_20 == (MR_Integer) 0);
#line 656 "stack_opt.m"
                        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 656 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 656 "stack_opt.m"
                          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_20_20;
#line 656 "stack_opt.m"
                        else
#line 656 "stack_opt.m"
                          {
#line 656 "stack_opt.m"
                            {
#line 656 "stack_opt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
#line 656 "stack_opt.m"
                              return;
                            }
#line 656 "stack_opt.m"
                          }
#line 656 "stack_opt.m"
                      }
#line 656 "stack_opt.m"
                  }
#line 656 "stack_opt.m"
              }
#line 656 "stack_opt.m"
          }
#line 656 "stack_opt.m"
      }
#line 656 "stack_opt.m"
  }
#line 656 "stack_opt.m"
}

#line 656 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0(
#line 656 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 656 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 656 "stack_opt.m"
{
#line 656 "stack_opt.m"
  {
#line 656 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 656 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_15 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 656 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_16 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 656 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_15 == ll_backend__stack_opt__CastY_16);
#line 656 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 656 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 656 "stack_opt.m"
    else
#line 656 "stack_opt.m"
      {
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_17_17;
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_18_18;
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_19_19;
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_20_20;
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_21_21;
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 4)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 5)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 656 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));

#line 5217 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_3_3 == ll_backend__stack_opt__V_9_9);
#line 656 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 656 "stack_opt.m"
          {
#line 5223 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_17_17 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 5225 "ll_backend.stack_opt.c"
            {
#line 5227 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_17_17, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_10_10)));
            }
#line 656 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 656 "stack_opt.m"
              {
#line 5234 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_18_18 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 5236 "ll_backend.stack_opt.c"
                {
#line 5238 "ll_backend.stack_opt.c"
                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_18_18, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_11_11)));
                }
#line 656 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 656 "stack_opt.m"
                  {
#line 5245 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__TypeInfo_19_19 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[5];
#line 5247 "ll_backend.stack_opt.c"
                    {
#line 5249 "ll_backend.stack_opt.c"
                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_19_19, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                    }
#line 656 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 656 "stack_opt.m"
                      {
#line 5256 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__TypeInfo_20_20 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 5258 "ll_backend.stack_opt.c"
                        {
#line 5260 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_20_20, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
                        }
#line 656 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 656 "stack_opt.m"
                          {
#line 5267 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__TypeInfo_21_21 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 5269 "ll_backend.stack_opt.c"
                            {
#line 5271 "ll_backend.stack_opt.c"
                              return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_21_21, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                            }
#line 656 "stack_opt.m"
                          }
#line 656 "stack_opt.m"
                      }
#line 656 "stack_opt.m"
                  }
#line 656 "stack_opt.m"
              }
#line 656 "stack_opt.m"
          }
#line 656 "stack_opt.m"
      }
#line 656 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 656 "stack_opt.m"
  }
#line 656 "stack_opt.m"
}

#line 135 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(
#line 135 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 135 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 135 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 135 "stack_opt.m"
{
#line 135 "stack_opt.m"
  {
#line 135 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 135 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_6 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 135 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_7 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 135 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_6 == ll_backend__stack_opt__CastY_7);
#line 135 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5317 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "stack_opt.m"
    else
#line 135 "stack_opt.m"
      {
#line 135 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = (MR_Word) ll_backend__stack_opt__HeadVar__2_2;
#line 135 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = (MR_Word) ll_backend__stack_opt__HeadVar__3_3;

#line 135 "stack_opt.m"
        {
#line 135 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_5_5)));
#line 135 "stack_opt.m"
          return;
        }
#line 135 "stack_opt.m"
      }
#line 135 "stack_opt.m"
  }
#line 135 "stack_opt.m"
}

#line 135 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(
#line 135 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 135 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 135 "stack_opt.m"
{
#line 135 "stack_opt.m"
  {
#line 135 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 135 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_5 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 135 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_6 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 135 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_5 == ll_backend__stack_opt__CastY_6);
#line 135 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 135 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 135 "stack_opt.m"
    else
#line 135 "stack_opt.m"
      {
#line 135 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = (MR_Word) ll_backend__stack_opt__HeadVar__1_1;
#line 135 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = (MR_Word) ll_backend__stack_opt__HeadVar__2_2;

#line 5375 "ll_backend.stack_opt.c"
        {
#line 5377 "ll_backend.stack_opt.c"
          return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_4_4)));
        }
#line 135 "stack_opt.m"
      }
#line 135 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 135 "stack_opt.m"
  }
#line 135 "stack_opt.m"
}

#line 155 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0(
#line 155 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 155 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 155 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 155 "stack_opt.m"
{
#line 155 "stack_opt.m"
  {
#line 155 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 155 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_30 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 155 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_31 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 155 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_30 == ll_backend__stack_opt__CastY_31);
#line 155 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5413 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 155 "stack_opt.m"
    else
#line 155 "stack_opt.m"
      {
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 6)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 7)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 8)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 4)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 5)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 6)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 7)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 8)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_22_22;

#line 155 "stack_opt.m"
        {
#line 155 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[0], &ll_backend__stack_opt__V_22_22, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
        }
#line 5463 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_22_22 == (MR_Integer) 0);
#line 155 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 155 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_22_22;
#line 155 "stack_opt.m"
        else
#line 155 "stack_opt.m"
          {
#line 155 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_23_23;

#line 155 "stack_opt.m"
            {
#line 155 "stack_opt.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&ll_backend__stack_opt__V_23_23, ll_backend__stack_opt__V_5_5, ll_backend__stack_opt__V_14_14);
            }
#line 5483 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_23_23 == (MR_Integer) 0);
#line 155 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 155 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_23_23;
#line 155 "stack_opt.m"
            else
#line 155 "stack_opt.m"
              {
#line 155 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_24_24;

#line 155 "stack_opt.m"
                {
#line 155 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[13], &ll_backend__stack_opt__V_24_24, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
                }
#line 5503 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_24_24 == (MR_Integer) 0);
#line 155 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 155 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_24_24;
#line 155 "stack_opt.m"
                else
#line 155 "stack_opt.m"
                  {
#line 155 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_25_25;

#line 155 "stack_opt.m"
                    {
#line 155 "stack_opt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_25_25, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_16_16)));
                    }
#line 5523 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_25_25 == (MR_Integer) 0);
#line 155 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 155 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_25_25;
#line 155 "stack_opt.m"
                    else
#line 155 "stack_opt.m"
                      {
#line 155 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_26_26;
#line 155 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_41_41 = (MR_Integer) ll_backend__stack_opt__V_8_8;
#line 155 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_42_42 = (MR_Integer) ll_backend__stack_opt__V_17_17;

#line 155 "stack_opt.m"
                        {
#line 155 "stack_opt.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_26_26, ll_backend__stack_opt__V_41_41, ll_backend__stack_opt__V_42_42);
                        }
#line 5547 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_26_26 == (MR_Integer) 0);
#line 155 "stack_opt.m"
                        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 155 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
                          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_26_26;
#line 155 "stack_opt.m"
                        else
#line 155 "stack_opt.m"
                          {
#line 155 "stack_opt.m"
                            MR_Word ll_backend__stack_opt__V_27_27;

#line 155 "stack_opt.m"
                            {
#line 155 "stack_opt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], &ll_backend__stack_opt__V_27_27, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_18_18)));
                            }
#line 5567 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_27_27 == (MR_Integer) 0);
#line 155 "stack_opt.m"
                            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 155 "stack_opt.m"
                            if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
                              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_27_27;
#line 155 "stack_opt.m"
                            else
#line 155 "stack_opt.m"
                              {
#line 155 "stack_opt.m"
                                MR_Word ll_backend__stack_opt__V_28_28;

#line 155 "stack_opt.m"
                                {
#line 155 "stack_opt.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], &ll_backend__stack_opt__V_28_28, ((MR_Box) (ll_backend__stack_opt__V_10_10)), ((MR_Box) (ll_backend__stack_opt__V_19_19)));
                                }
#line 5587 "ll_backend.stack_opt.c"
                                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_28_28 == (MR_Integer) 0);
#line 155 "stack_opt.m"
                                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 155 "stack_opt.m"
                                if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
                                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_28_28;
#line 155 "stack_opt.m"
                                else
#line 155 "stack_opt.m"
                                  {
#line 155 "stack_opt.m"
                                    MR_Word ll_backend__stack_opt__V_29_29;

#line 155 "stack_opt.m"
                                    {
#line 155 "stack_opt.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], &ll_backend__stack_opt__V_29_29, ((MR_Box) (ll_backend__stack_opt__V_11_11)), ((MR_Box) (ll_backend__stack_opt__V_20_20)));
                                    }
#line 5607 "ll_backend.stack_opt.c"
                                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_29_29 == (MR_Integer) 0);
#line 155 "stack_opt.m"
                                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 155 "stack_opt.m"
                                    if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
                                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_29_29;
#line 155 "stack_opt.m"
                                    else
#line 155 "stack_opt.m"
                                      {
#line 155 "stack_opt.m"
                                        {
#line 155 "stack_opt.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_12_12)), ((MR_Box) (ll_backend__stack_opt__V_21_21)));
#line 155 "stack_opt.m"
                                          return;
                                        }
#line 155 "stack_opt.m"
                                      }
#line 155 "stack_opt.m"
                                  }
#line 155 "stack_opt.m"
                              }
#line 155 "stack_opt.m"
                          }
#line 155 "stack_opt.m"
                      }
#line 155 "stack_opt.m"
                  }
#line 155 "stack_opt.m"
              }
#line 155 "stack_opt.m"
          }
#line 155 "stack_opt.m"
      }
#line 155 "stack_opt.m"
  }
#line 155 "stack_opt.m"
}

#line 155 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0(
#line 155 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 155 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 155 "stack_opt.m"
{
#line 155 "stack_opt.m"
  {
#line 155 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 155 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_21 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 155 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_22 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 155 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_21 == ll_backend__stack_opt__CastY_22);
#line 155 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 155 "stack_opt.m"
    else
#line 155 "stack_opt.m"
      {
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_25_25;
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_26_26;
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_28_28;
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_29_29;
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_30_30;
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_31_31;
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 4)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 5)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 6)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 7)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 8)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 6)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 7)));
#line 155 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 8)));
#line 155 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_32_32;
#line 155 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_33_33;

#line 5730 "ll_backend.stack_opt.c"
        {
#line 5732 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[0], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
        }
#line 155 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
          {
#line 5739 "ll_backend.stack_opt.c"
            {
#line 5741 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ll_backend__stack_opt__V_4_4, ll_backend__stack_opt__V_13_13);
            }
#line 155 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
              {
#line 5748 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_25_25 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[13];
#line 5750 "ll_backend.stack_opt.c"
                {
#line 5752 "ll_backend.stack_opt.c"
                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_25_25, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                }
#line 155 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
                  {
#line 5759 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__TypeInfo_26_26 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 5761 "ll_backend.stack_opt.c"
                    {
#line 5763 "ll_backend.stack_opt.c"
                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_26_26, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
                    }
#line 155 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
                      {
#line 5770 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__V_32_32 = (MR_Integer) ll_backend__stack_opt__V_7_7;
#line 5772 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__V_33_33 = (MR_Integer) ll_backend__stack_opt__V_16_16;
#line 5774 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_32_32 == ll_backend__stack_opt__V_33_33);
#line 155 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
                          {
#line 5780 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__TypeInfo_28_28 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 5782 "ll_backend.stack_opt.c"
                            {
#line 5784 "ll_backend.stack_opt.c"
                              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_28_28, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_17_17)));
                            }
#line 155 "stack_opt.m"
                            if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
                              {
#line 5791 "ll_backend.stack_opt.c"
                                ll_backend__stack_opt__TypeInfo_29_29 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 5793 "ll_backend.stack_opt.c"
                                {
#line 5795 "ll_backend.stack_opt.c"
                                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_29_29, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_18_18)));
                                }
#line 155 "stack_opt.m"
                                if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
                                  {
#line 5802 "ll_backend.stack_opt.c"
                                    ll_backend__stack_opt__TypeInfo_30_30 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 5804 "ll_backend.stack_opt.c"
                                    {
#line 5806 "ll_backend.stack_opt.c"
                                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_30_30, ((MR_Box) (ll_backend__stack_opt__V_10_10)), ((MR_Box) (ll_backend__stack_opt__V_19_19)));
                                    }
#line 155 "stack_opt.m"
                                    if (ll_backend__stack_opt__succeeded)
#line 155 "stack_opt.m"
                                      {
#line 5813 "ll_backend.stack_opt.c"
                                        ll_backend__stack_opt__TypeInfo_31_31 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 5815 "ll_backend.stack_opt.c"
                                        {
#line 5817 "ll_backend.stack_opt.c"
                                          return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_31_31, ((MR_Box) (ll_backend__stack_opt__V_11_11)), ((MR_Box) (ll_backend__stack_opt__V_20_20)));
                                        }
#line 155 "stack_opt.m"
                                      }
#line 155 "stack_opt.m"
                                  }
#line 155 "stack_opt.m"
                              }
#line 155 "stack_opt.m"
                          }
#line 155 "stack_opt.m"
                      }
#line 155 "stack_opt.m"
                  }
#line 155 "stack_opt.m"
              }
#line 155 "stack_opt.m"
          }
#line 155 "stack_opt.m"
      }
#line 155 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 155 "stack_opt.m"
  }
#line 155 "stack_opt.m"
}

#line 379 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0(
#line 379 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 379 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 379 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 379 "stack_opt.m"
{
#line 379 "stack_opt.m"
  {
#line 379 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 379 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_9 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 379 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_10 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 379 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_9 == ll_backend__stack_opt__CastY_10);
#line 379 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5869 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 379 "stack_opt.m"
    else
#line 379 "stack_opt.m"
      {
#line 379 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 379 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 379 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 379 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8;

#line 379 "stack_opt.m"
        {
#line 379 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_8_8, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_6_6)));
        }
#line 5891 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_8_8 == (MR_Integer) 0);
#line 379 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 379 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 379 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_8_8;
#line 379 "stack_opt.m"
        else
#line 379 "stack_opt.m"
          {
#line 379 "stack_opt.m"
            {
#line 379 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[5], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_7_7)));
#line 379 "stack_opt.m"
              return;
            }
#line 379 "stack_opt.m"
          }
#line 379 "stack_opt.m"
      }
#line 379 "stack_opt.m"
  }
#line 379 "stack_opt.m"
}

#line 379 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0(
#line 379 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 379 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 379 "stack_opt.m"
{
#line 379 "stack_opt.m"
  {
#line 379 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 379 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_7 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 379 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_8 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 379 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_7 == ll_backend__stack_opt__CastY_8);
#line 379 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 379 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 379 "stack_opt.m"
    else
#line 379 "stack_opt.m"
      {
#line 379 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_10_10;
#line 379 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 379 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 379 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));

#line 5958 "ll_backend.stack_opt.c"
        {
#line 5960 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_5_5)));
        }
#line 379 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 379 "stack_opt.m"
          {
#line 5967 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_10_10 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[5];
#line 5969 "ll_backend.stack_opt.c"
            {
#line 5971 "ll_backend.stack_opt.c"
              return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_10_10, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_6_6)));
            }
#line 379 "stack_opt.m"
          }
#line 379 "stack_opt.m"
      }
#line 379 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 379 "stack_opt.m"
  }
#line 379 "stack_opt.m"
}

#line 390 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0(
#line 390 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 390 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 390 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 390 "stack_opt.m"
{
#line 390 "stack_opt.m"
  {
#line 390 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 390 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_18 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 390 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_19 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 390 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_18 == ll_backend__stack_opt__CastY_19);
#line 390 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 6009 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 390 "stack_opt.m"
    else
#line 390 "stack_opt.m"
      {
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 4)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14;

#line 390 "stack_opt.m"
        {
#line 390 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[12], &ll_backend__stack_opt__V_14_14, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
        }
#line 6043 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_14_14 == (MR_Integer) 0);
#line 390 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 390 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 390 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_14_14;
#line 390 "stack_opt.m"
        else
#line 390 "stack_opt.m"
          {
#line 390 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_15_15;

#line 390 "stack_opt.m"
            {
#line 390 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_15_15, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_10_10)));
            }
#line 6063 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_15_15 == (MR_Integer) 0);
#line 390 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 390 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 390 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_15_15;
#line 390 "stack_opt.m"
            else
#line 390 "stack_opt.m"
              {
#line 390 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_16_16;
#line 390 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_25_25 = (MR_Integer) ll_backend__stack_opt__V_6_6;
#line 390 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_26_26 = (MR_Integer) ll_backend__stack_opt__V_11_11;

#line 390 "stack_opt.m"
                {
#line 390 "stack_opt.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_16_16, ll_backend__stack_opt__V_25_25, ll_backend__stack_opt__V_26_26);
                }
#line 6087 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_16_16 == (MR_Integer) 0);
#line 390 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 390 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 390 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_16_16;
#line 390 "stack_opt.m"
                else
#line 390 "stack_opt.m"
                  {
#line 390 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_17_17;

#line 390 "stack_opt.m"
                    {
#line 390 "stack_opt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], &ll_backend__stack_opt__V_17_17, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                    }
#line 6107 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_17_17 == (MR_Integer) 0);
#line 390 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 390 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 390 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_17_17;
#line 390 "stack_opt.m"
                    else
#line 390 "stack_opt.m"
                      {
#line 390 "stack_opt.m"
                        {
#line 390 "stack_opt.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
#line 390 "stack_opt.m"
                          return;
                        }
#line 390 "stack_opt.m"
                      }
#line 390 "stack_opt.m"
                  }
#line 390 "stack_opt.m"
              }
#line 390 "stack_opt.m"
          }
#line 390 "stack_opt.m"
      }
#line 390 "stack_opt.m"
  }
#line 390 "stack_opt.m"
}

#line 390 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0(
#line 390 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 390 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 390 "stack_opt.m"
{
#line 390 "stack_opt.m"
  {
#line 390 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 390 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_13 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 390 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_14 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 390 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_13 == ll_backend__stack_opt__CastY_14);
#line 390 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 390 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 390 "stack_opt.m"
    else
#line 390 "stack_opt.m"
      {
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_16_16;
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_17_17;
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_18_18;
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 4)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 390 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));

#line 6196 "ll_backend.stack_opt.c"
        {
#line 6198 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[12], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
        }
#line 390 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 390 "stack_opt.m"
          {
#line 6205 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_16_16 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 6207 "ll_backend.stack_opt.c"
            {
#line 6209 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_16_16, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
            }
#line 390 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 390 "stack_opt.m"
              {
#line 6216 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_5_5 == ll_backend__stack_opt__V_10_10);
#line 390 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 390 "stack_opt.m"
                  {
#line 6222 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__TypeInfo_17_17 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 6224 "ll_backend.stack_opt.c"
                    {
#line 6226 "ll_backend.stack_opt.c"
                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_17_17, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_11_11)));
                    }
#line 390 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 390 "stack_opt.m"
                      {
#line 6233 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__TypeInfo_18_18 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 6235 "ll_backend.stack_opt.c"
                        {
#line 6237 "ll_backend.stack_opt.c"
                          return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_18_18, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                        }
#line 390 "stack_opt.m"
                      }
#line 390 "stack_opt.m"
                  }
#line 390 "stack_opt.m"
              }
#line 390 "stack_opt.m"
          }
#line 390 "stack_opt.m"
      }
#line 390 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 390 "stack_opt.m"
  }
#line 390 "stack_opt.m"
}

#line 652 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(
#line 652 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 652 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 652 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 652 "stack_opt.m"
{
#line 652 "stack_opt.m"
  {
#line 652 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 652 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__Cast_HeadVar1_4 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 652 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__Cast_HeadVar2_5 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 652 "stack_opt.m"
    {
#line 652 "stack_opt.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__Cast_HeadVar1_4, ll_backend__stack_opt__Cast_HeadVar2_5);
#line 652 "stack_opt.m"
      return;
    }
#line 652 "stack_opt.m"
  }
#line 652 "stack_opt.m"
}

#line 652 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(
#line 652 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_1,
#line 652 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 652 "stack_opt.m"
{
#line 6298 "ll_backend.stack_opt.c"
  {
#line 6300 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__2_1 == ll_backend__stack_opt__HeadVar__2_2);

#line 6303 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 6305 "ll_backend.stack_opt.c"
  }
#line 652 "stack_opt.m"
}

#line 666 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0(
#line 666 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 666 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 666 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 666 "stack_opt.m"
{
#line 666 "stack_opt.m"
  {
#line 666 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 666 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_12 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 666 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_13 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 666 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_12 == ll_backend__stack_opt__CastY_13);
#line 666 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 6334 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 666 "stack_opt.m"
    else
#line 666 "stack_opt.m"
      {
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10;

#line 666 "stack_opt.m"
        {
#line 666 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[11], &ll_backend__stack_opt__V_10_10, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_7_7)));
        }
#line 6360 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_10_10 == (MR_Integer) 0);
#line 666 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 666 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 666 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_10_10;
#line 666 "stack_opt.m"
        else
#line 666 "stack_opt.m"
          {
#line 666 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_11_11;
#line 666 "stack_opt.m"
            MR_Integer ll_backend__stack_opt__V_17_17 = (MR_Integer) ll_backend__stack_opt__V_5_5;
#line 666 "stack_opt.m"
            MR_Integer ll_backend__stack_opt__V_18_18 = (MR_Integer) ll_backend__stack_opt__V_8_8;

#line 666 "stack_opt.m"
            {
#line 666 "stack_opt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_11_11, ll_backend__stack_opt__V_17_17, ll_backend__stack_opt__V_18_18);
            }
#line 6384 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_11_11 == (MR_Integer) 0);
#line 666 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 666 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 666 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_11_11;
#line 666 "stack_opt.m"
            else
#line 666 "stack_opt.m"
              {
#line 666 "stack_opt.m"
                {
#line 666 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
#line 666 "stack_opt.m"
                  return;
                }
#line 666 "stack_opt.m"
              }
#line 666 "stack_opt.m"
          }
#line 666 "stack_opt.m"
      }
#line 666 "stack_opt.m"
  }
#line 666 "stack_opt.m"
}

#line 666 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0(
#line 666 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 666 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 666 "stack_opt.m"
{
#line 666 "stack_opt.m"
  {
#line 666 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 666 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_9 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 666 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_10 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 666 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_9 == ll_backend__stack_opt__CastY_10);
#line 666 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 666 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 666 "stack_opt.m"
    else
#line 666 "stack_opt.m"
      {
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_12_12;
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));

#line 6457 "ll_backend.stack_opt.c"
        {
#line 6459 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[11], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_6_6)));
        }
#line 666 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 666 "stack_opt.m"
          {
#line 6466 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_4_4 == ll_backend__stack_opt__V_7_7);
#line 666 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 666 "stack_opt.m"
              {
#line 6472 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_12_12 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 6474 "ll_backend.stack_opt.c"
                {
#line 6476 "ll_backend.stack_opt.c"
                  return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_12_12, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
                }
#line 666 "stack_opt.m"
              }
#line 666 "stack_opt.m"
          }
#line 666 "stack_opt.m"
      }
#line 666 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 666 "stack_opt.m"
  }
#line 666 "stack_opt.m"
}

#line 1148 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_6(
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

#line 1145 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_5(
#line 1145 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1145 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1145 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1145 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1145 "stack_opt.m"
{
#line 1145 "stack_opt.m"
  {
#line 1145 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1145 "stack_opt.m"
    {
#line 1145 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1145__1_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1145 "stack_opt.m"
      return;
    }
#line 1145 "stack_opt.m"
  }
#line 1145 "stack_opt.m"
}

#line 1139 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_4(
#line 1139 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1139 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1139 "stack_opt.m"
{
#line 1139 "stack_opt.m"
  {
#line 1139 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1139 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1139 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv3_HeadVar__2_2;

#line 1139 "stack_opt.m"
    {
#line 1139 "stack_opt.m"
      ll_backend__stack_opt__conv3_HeadVar__2_2 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1139 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv3_HeadVar__2_2));
#line 1139 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1139 "stack_opt.m"
  }
#line 1139 "stack_opt.m"
}

#line 1134 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_3(
#line 1134 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1134 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1134 "stack_opt.m"
{
#line 1134 "stack_opt.m"
  {
#line 1134 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1134 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1134 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv2_HeadVar__2_2;

#line 1134 "stack_opt.m"
    {
#line 1134 "stack_opt.m"
      ll_backend__stack_opt__conv2_HeadVar__2_2 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1134 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv2_HeadVar__2_2));
#line 1134 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1134 "stack_opt.m"
  }
#line 1134 "stack_opt.m"
}

#line 1122 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_2(
#line 1122 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1122 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1122 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1122 "stack_opt.m"
{
#line 1122 "stack_opt.m"
  {
#line 1122 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1122 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv1_HeadVar__2_81;

#line 1122 "stack_opt.m"
    {
#line 1122 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1122__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv1_HeadVar__2_81);
    }
#line 1122 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_HeadVar__2_81));
#line 1122 "stack_opt.m"
  }
#line 1122 "stack_opt.m"
}

#line 1121 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_1(
#line 1121 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1121 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1121 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1121 "stack_opt.m"
{
#line 1121 "stack_opt.m"
  {
#line 1121 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1121 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv0_HeadVar__2_76;

#line 1121 "stack_opt.m"
    {
#line 1121 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1121__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv0_HeadVar__2_76);
    }
#line 1121 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__2_76));
#line 1121 "stack_opt.m"
  }
#line 1121 "stack_opt.m"
}

#line 1110 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0(
#line 1110 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MatchingResult_4)
#line 1110 "stack_opt.m"
{
#line 1113 "stack_opt.m"
  {
#line 1113 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_74_74;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_78_78;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_79_79;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_83_83;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_88_88;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CellVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 0)));
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 1)));
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ArgVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 2)));
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ViaCellVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 3)));
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__GoalId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 4)));
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PotentialIntervals_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 5)));
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertIntervals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 6)));
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PotentialAnchors_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 7)));
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertAnchors_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 8)));
#line 1113 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CellVarNum_15;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ArgVarNums_16;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ViaCellVarNums_17;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PotentialIntervalNums_18;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertIntervalNums_19;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_29_29;
#line 1113 "stack_opt.m"
    MR_String ll_backend__stack_opt__V_33_33;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_53_53;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_59_59;
#line 1113 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_67_67;

#line 1117 "stack_opt.m"
    {
#line 1117 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\nmatching result at ");
    }
#line 1118 "stack_opt.m"
    {
#line 1118 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, ((MR_Box) (ll_backend__stack_opt__GoalId_10)));
    }
#line 1119 "stack_opt.m"
    {
#line 1119 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 6753 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1120 "stack_opt.m"
    {
#line 1120 "stack_opt.m"
      mercury__term__var_to_int_2_p_0(ll_backend__stack_opt__TypeCtorInfo_74_74, ll_backend__stack_opt__CellVar_6, &ll_backend__stack_opt__CellVarNum_15);
    }
#line 6760 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_78_78 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 6762 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1121 "stack_opt.m"
    {
#line 1121 "stack_opt.m"
      mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_78_78, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[11], ll_backend__stack_opt__ArgVars_8, &ll_backend__stack_opt__ArgVarNums_16);
    }
#line 1122 "stack_opt.m"
    {
#line 1122 "stack_opt.m"
      ll_backend__stack_opt__V_29_29 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_74_74, ll_backend__stack_opt__ViaCellVars_9);
    }
#line 1122 "stack_opt.m"
    {
#line 1122 "stack_opt.m"
      mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_78_78, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[12], ll_backend__stack_opt__V_29_29, &ll_backend__stack_opt__ViaCellVarNums_17);
    }
#line 1124 "stack_opt.m"
    {
#line 1124 "stack_opt.m"
      mercury__io__write_int_3_p_0(ll_backend__stack_opt__CellVarNum_15);
    }
#line 1125 "stack_opt.m"
    {
#line 1125 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) " => ");
    }
#line 1126 "stack_opt.m"
    {
#line 1126 "stack_opt.m"
      ll_backend__stack_opt__V_33_33 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ll_backend__stack_opt__ConsId_7);
    }
#line 1126 "stack_opt.m"
    {
#line 1126 "stack_opt.m"
      mercury__io__write_string_3_p_0(ll_backend__stack_opt__V_33_33);
    }
#line 1127 "stack_opt.m"
    {
#line 1127 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1128 "stack_opt.m"
    {
#line 1128 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__ArgVarNums_16);
    }
#line 1129 "stack_opt.m"
    {
#line 1129 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "): via cell ");
    }
#line 1130 "stack_opt.m"
    {
#line 1130 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__ViaCellVarNums_17);
    }
#line 1131 "stack_opt.m"
    {
#line 1131 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1133 "stack_opt.m"
    {
#line 1133 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "potential intervals: ");
    }
#line 6829 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_83_83 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1135 "stack_opt.m"
    {
#line 1135 "stack_opt.m"
      ll_backend__stack_opt__V_46_46 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__PotentialIntervals_11);
    }
#line 1134 "stack_opt.m"
    {
#line 1134 "stack_opt.m"
      ll_backend__stack_opt__PotentialIntervalNums_18 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[13], ll_backend__stack_opt__V_46_46);
    }
#line 1136 "stack_opt.m"
    {
#line 1136 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__PotentialIntervalNums_18);
    }
#line 1137 "stack_opt.m"
    {
#line 1137 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1138 "stack_opt.m"
    {
#line 1138 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "insert intervals: ");
    }
#line 1140 "stack_opt.m"
    {
#line 1140 "stack_opt.m"
      ll_backend__stack_opt__V_53_53 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__InsertIntervals_12);
    }
#line 1139 "stack_opt.m"
    {
#line 1139 "stack_opt.m"
      ll_backend__stack_opt__InsertIntervalNums_19 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[14], ll_backend__stack_opt__V_53_53);
    }
#line 1141 "stack_opt.m"
    {
#line 1141 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__InsertIntervalNums_19);
    }
#line 1142 "stack_opt.m"
    {
#line 1142 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1144 "stack_opt.m"
    {
#line 1144 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "potential anchors: ");
    }
#line 6881 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_88_88 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1145 "stack_opt.m"
    {
#line 1145 "stack_opt.m"
      ll_backend__stack_opt__V_59_59 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__PotentialAnchors_13);
    }
#line 1145 "stack_opt.m"
    {
#line 1145 "stack_opt.m"
      mercury__io__write_list_5_p_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__V_59_59, (MR_String) " ", (MR_Word) &ll_backend__stack_opt_scalar_common_2[15]);
    }
#line 1146 "stack_opt.m"
    {
#line 1146 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1147 "stack_opt.m"
    {
#line 1147 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "insert anchors: ");
    }
#line 1148 "stack_opt.m"
    {
#line 1148 "stack_opt.m"
      ll_backend__stack_opt__V_67_67 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__InsertAnchors_14);
    }
#line 1148 "stack_opt.m"
    {
#line 1148 "stack_opt.m"
      mercury__io__write_list_5_p_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__V_67_67, (MR_String) " ", (MR_Word) &ll_backend__stack_opt_scalar_common_2[16]);
    }
#line 1149 "stack_opt.m"
    {
#line 1149 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1149 "stack_opt.m"
      return;
    }
#line 1113 "stack_opt.m"
  }
#line 1110 "stack_opt.m"
}

#line 1103 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_2(
#line 1103 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1103 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1103 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1103 "stack_opt.m"
{
#line 1103 "stack_opt.m"
  {
#line 1103 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1103 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv1_HeadVar__2_52;

#line 1103 "stack_opt.m"
    {
#line 1103 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1103__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv1_HeadVar__2_52);
    }
#line 1103 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_HeadVar__2_52));
#line 1103 "stack_opt.m"
  }
#line 1103 "stack_opt.m"
}

#line 1090 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_1(
#line 1090 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1090 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1090 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1090 "stack_opt.m"
{
#line 1090 "stack_opt.m"
  {
#line 1090 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1090 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv0_HeadVar__2_46;

#line 1090 "stack_opt.m"
    {
#line 1090 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1090__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv0_HeadVar__2_46);
    }
#line 1090 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__2_46));
#line 1090 "stack_opt.m"
  }
#line 1090 "stack_opt.m"
}

#line 1087 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0(
#line 1087 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1087 "stack_opt.m"
{
#line 1089 "stack_opt.m"
  {
#line 1089 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1089 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1089 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_49_49;
#line 1089 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_50_50;
#line 1089 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1089 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Vars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1089 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarNums_7;
#line 1089 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_25_25;
#line 1106 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CellVar_14;
#line 1106 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ConsId_15;
#line 1106 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ArgVars_16;
#line 1095 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Unification_11;
#line 1095 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_31_31;
#line 1095 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_13_13;
#line 1095 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_8_8;
#line 1095 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_9_9;
#line 1095 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_10_10;
#line 1095 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_12_12;
#line 1096 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_17_17;
#line 1096 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_18_18;
#line 1096 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;

#line 1090 "stack_opt.m"
    {
#line 1090 "stack_opt.m"
      ll_backend__stack_opt__V_25_25 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_48_48, ll_backend__stack_opt__Vars_5);
    }
#line 7042 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_49_49 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 7044 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_50_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1090 "stack_opt.m"
    {
#line 1090 "stack_opt.m"
      mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_49_49, ll_backend__stack_opt__TypeCtorInfo_50_50, (MR_Word) &ll_backend__stack_opt_scalar_common_2[9], ll_backend__stack_opt__V_25_25, &ll_backend__stack_opt__VarNums_7);
    }
#line 1091 "stack_opt.m"
    {
#line 1091 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "vars [");
    }
#line 1092 "stack_opt.m"
    {
#line 1092 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__VarNums_7);
    }
#line 1093 "stack_opt.m"
    {
#line 1093 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "]: ");
    }
#line 1095 "stack_opt.m"
    ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_4, (MR_Integer) 0)));
#line 1095 "stack_opt.m"
    ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_4, (MR_Integer) 1)));
#line 1095 "stack_opt.m"
    ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1095 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1095 "stack_opt.m"
      {
#line 1095 "stack_opt.m"
        ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 0)));
#line 1095 "stack_opt.m"
        ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 1)));
#line 1095 "stack_opt.m"
        ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 2)));
#line 1095 "stack_opt.m"
        ll_backend__stack_opt__Unification_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 3)));
#line 1095 "stack_opt.m"
        ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 4)));
#line 1096 "stack_opt.m"
        ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__Unification_11)) == (MR_mktag((MR_Integer) 1)));
#line 1096 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 1096 "stack_opt.m"
          {
#line 1096 "stack_opt.m"
            ll_backend__stack_opt__CellVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 0)));
#line 1096 "stack_opt.m"
            ll_backend__stack_opt__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 1)));
#line 1096 "stack_opt.m"
            ll_backend__stack_opt__ArgVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 2)));
#line 1096 "stack_opt.m"
            ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 3)));
#line 1096 "stack_opt.m"
            ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 4)));
#line 1096 "stack_opt.m"
            ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 5)));
#line 1096 "stack_opt.m"
          }
#line 1095 "stack_opt.m"
      }
#line 1106 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1098 "stack_opt.m"
      {
#line 1098 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__CellVarNum_20;
#line 1098 "stack_opt.m"
        MR_Word ll_backend__stack_opt__ArgVarNums_21;
#line 1098 "stack_opt.m"
        MR_String ll_backend__stack_opt__V_35_35;

#line 1098 "stack_opt.m"
        {
#line 1098 "stack_opt.m"
          mercury__term__var_to_int_2_p_0(ll_backend__stack_opt__TypeCtorInfo_48_48, ll_backend__stack_opt__CellVar_14, &ll_backend__stack_opt__CellVarNum_20);
        }
#line 1099 "stack_opt.m"
        {
#line 1099 "stack_opt.m"
          mercury__io__write_int_3_p_0(ll_backend__stack_opt__CellVarNum_20);
        }
#line 1100 "stack_opt.m"
        {
#line 1100 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) " => ");
        }
#line 1101 "stack_opt.m"
        {
#line 1101 "stack_opt.m"
          ll_backend__stack_opt__V_35_35 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ll_backend__stack_opt__ConsId_15);
        }
#line 1101 "stack_opt.m"
        {
#line 1101 "stack_opt.m"
          mercury__io__write_string_3_p_0(ll_backend__stack_opt__V_35_35);
        }
#line 1102 "stack_opt.m"
        {
#line 1102 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 1103 "stack_opt.m"
        {
#line 1103 "stack_opt.m"
          mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_49_49, ll_backend__stack_opt__TypeCtorInfo_50_50, (MR_Word) &ll_backend__stack_opt_scalar_common_2[10], ll_backend__stack_opt__ArgVars_16, &ll_backend__stack_opt__ArgVarNums_21);
        }
#line 1104 "stack_opt.m"
        {
#line 1104 "stack_opt.m"
          backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__ArgVarNums_21);
        }
#line 1105 "stack_opt.m"
        {
#line 1105 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1105 "stack_opt.m"
          return;
        }
#line 1098 "stack_opt.m"
      }
#line 1106 "stack_opt.m"
    else
#line 1107 "stack_opt.m"
      {
#line 1107 "stack_opt.m"
        {
#line 1107 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "BAD INSERT GOAL\n");
#line 1107 "stack_opt.m"
          return;
        }
#line 1107 "stack_opt.m"
      }
#line 1089 "stack_opt.m"
  }
#line 1087 "stack_opt.m"
}

#line 1085 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0_1(
#line 1085 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1085 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1085 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1085 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1085 "stack_opt.m"
{
#line 1085 "stack_opt.m"
  {
#line 1085 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1085 "stack_opt.m"
    {
#line 1085 "stack_opt.m"
      ll_backend__stack_opt__dump_insert_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1085 "stack_opt.m"
      return;
    }
#line 1085 "stack_opt.m"
  }
#line 1085 "stack_opt.m"
}

#line 1078 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0(
#line 1078 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1078 "stack_opt.m"
{
#line 1081 "stack_opt.m"
  {
#line 1081 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1081 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Anchor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1081 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertSpecs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1085 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_8;

#line 1082 "stack_opt.m"
    {
#line 1082 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\ninsertions after ");
    }
#line 1083 "stack_opt.m"
    {
#line 1083 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__Anchor_4)));
    }
#line 1084 "stack_opt.m"
    {
#line 1084 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 1085 "stack_opt.m"
    {
#line 1085 "stack_opt.m"
      mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__stack_opt_scalar_common_2[8], ll_backend__stack_opt__InsertSpecs_5, ((MR_Box) ((MR_Integer) 0)), &ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_8);
    }
#line 1081 "stack_opt.m"
  }
#line 1078 "stack_opt.m"
}

#line 1075 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_2(
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
      ll_backend__stack_opt__dump_matching_result_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1075 "stack_opt.m"
      return;
    }
#line 1075 "stack_opt.m"
  }
#line 1075 "stack_opt.m"
}

#line 1072 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_1(
#line 1072 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1072 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1072 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1072 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1072 "stack_opt.m"
{
#line 1072 "stack_opt.m"
  {
#line 1072 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1072 "stack_opt.m"
    {
#line 1072 "stack_opt.m"
      ll_backend__stack_opt__dump_anchor_inserts_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1072 "stack_opt.m"
      return;
    }
#line 1072 "stack_opt.m"
  }
#line 1072 "stack_opt.m"
}

#line 1067 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0(
#line 1067 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4)
#line 1067 "stack_opt.m"
{
#line 1069 "stack_opt.m"
  {
#line 1069 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1069 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_31_31;
#line 1069 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Inserts_6;
#line 1069 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 1)));
#line 1069 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_17_17;
#line 1070 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 0)));
#line 1070 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 2)));
#line 1072 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_13_13;
#line 1075 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_23_23;
#line 1075 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_24_24;
#line 1075 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv1_STATE_VARIABLE_IO_18_18;

#line 1070 "stack_opt.m"
    {
#line 1070 "stack_opt.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ll_backend__stack_opt__V_9_9, &ll_backend__stack_opt__Inserts_6);
    }
#line 1071 "stack_opt.m"
    {
#line 1071 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\nANCHOR INSERT:\n");
    }
#line 7361 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_31_31 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1072 "stack_opt.m"
    {
#line 1072 "stack_opt.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__stack_opt_scalar_common_2[0], ll_backend__stack_opt__TypeCtorInfo_31_31, (MR_Word) &ll_backend__stack_opt_scalar_common_2[6], ll_backend__stack_opt__Inserts_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_13_13);
    }
#line 1074 "stack_opt.m"
    {
#line 1074 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\nMATCHING RESULTS:\n");
    }
#line 1075 "stack_opt.m"
    ll_backend__stack_opt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 0)));
#line 1075 "stack_opt.m"
    ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 1)));
#line 1075 "stack_opt.m"
    ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 2)));
#line 1075 "stack_opt.m"
    {
#line 1075 "stack_opt.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0, ll_backend__stack_opt__TypeCtorInfo_31_31, (MR_Word) &ll_backend__stack_opt_scalar_common_2[7], ll_backend__stack_opt__V_17_17, ((MR_Box) ((MR_Integer) 0)), &ll_backend__stack_opt__conv1_STATE_VARIABLE_IO_18_18);
    }
#line 1076 "stack_opt.m"
    {
#line 1076 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1076 "stack_opt.m"
      return;
    }
#line 1069 "stack_opt.m"
  }
#line 1067 "stack_opt.m"
}

#line 1044 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__maybe_write_progress_message_7_p_0(
#line 1044 "stack_opt.m"
  MR_String ll_backend__stack_opt__Message_8,
#line 1044 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_9,
#line 1044 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_10,
#line 1044 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ProcInfo_11,
#line 1044 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_12)
#line 1044 "stack_opt.m"
{
#line 1058 "stack_opt.m"
  {
#line 1058 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__DebugStackOpt_9 == ll_backend__stack_opt__PredIdInt_10);

#line 1058 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1050 "stack_opt.m"
      {
#line 1050 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Goal_14;
#line 1050 "stack_opt.m"
        MR_Word ll_backend__stack_opt__VarSet_15;
#line 1050 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Globals_16;
#line 1050 "stack_opt.m"
        MR_Word ll_backend__stack_opt__OutInfo_17;

#line 1050 "stack_opt.m"
        {
#line 1050 "stack_opt.m"
          mercury__io__write_string_3_p_0(ll_backend__stack_opt__Message_8);
        }
#line 1051 "stack_opt.m"
        {
#line 1051 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
#line 1052 "stack_opt.m"
        {
#line 1052 "stack_opt.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_opt__ProcInfo_11, &ll_backend__stack_opt__Goal_14);
        }
#line 1053 "stack_opt.m"
        {
#line 1053 "stack_opt.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__stack_opt__ProcInfo_11, &ll_backend__stack_opt__VarSet_15);
        }
#line 1054 "stack_opt.m"
        {
#line 1054 "stack_opt.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_opt__ModuleInfo_12, &ll_backend__stack_opt__Globals_16);
        }
#line 1055 "stack_opt.m"
        {
#line 1055 "stack_opt.m"
          ll_backend__stack_opt__OutInfo_17 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(ll_backend__stack_opt__Globals_16);
        }
#line 1056 "stack_opt.m"
        {
#line 1056 "stack_opt.m"
          hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(ll_backend__stack_opt__OutInfo_17, ll_backend__stack_opt__Goal_14, ll_backend__stack_opt__ModuleInfo_12, ll_backend__stack_opt__VarSet_15, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n");
        }
#line 1057 "stack_opt.m"
        {
#line 1057 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1057 "stack_opt.m"
          return;
        }
#line 1050 "stack_opt.m"
      }
#line 1058 "stack_opt.m"
    else
#line 1058 "stack_opt.m"
      {
#line 1058 "stack_opt.m"
      }
#line 1058 "stack_opt.m"
  }
#line 1044 "stack_opt.m"
}

#line 1029 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(
#line 1029 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1029 "stack_opt.m"
{
#line 1031 "stack_opt.m"
  {
#line 1031 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1031 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1031 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1031 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));

#line 1031 "stack_opt.m"
    return ll_backend__stack_opt__AfterModelNon_4;
#line 1031 "stack_opt.m"
  }
#line 1029 "stack_opt.m"
}

#line 1025 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(
#line 1025 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1025 "stack_opt.m"
{
#line 1027 "stack_opt.m"
  {
#line 1027 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1027 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1027 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1027 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));

#line 1027 "stack_opt.m"
    return ll_backend__stack_opt__Paths_3;
#line 1027 "stack_opt.m"
  }
#line 1025 "stack_opt.m"
}

#line 1020 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_2(
#line 1020 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1020 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1020 "stack_opt.m"
{
#line 1020 "stack_opt.m"
  {
#line 1020 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1020 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1020 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_AfterModelNon_4;

#line 1020 "stack_opt.m"
    {
#line 1020 "stack_opt.m"
      ll_backend__stack_opt__conv1_AfterModelNon_4 = ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1020 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_AfterModelNon_4));
#line 1020 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1020 "stack_opt.m"
  }
#line 1020 "stack_opt.m"
}

#line 1017 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_1(
#line 1017 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1017 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1017 "stack_opt.m"
{
#line 1017 "stack_opt.m"
  {
#line 1017 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1017 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1017 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_Paths_3;

#line 1017 "stack_opt.m"
    {
#line 1017 "stack_opt.m"
      ll_backend__stack_opt__conv0_Paths_3 = ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1017 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_Paths_3));
#line 1017 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1017 "stack_opt.m"
  }
#line 1017 "stack_opt.m"
}

#line 1012 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0(
#line 1012 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 1012 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__AllPaths_2)
#line 1012 "stack_opt.m"
{
#line 1014 "stack_opt.m"
  {
#line 1014 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1014 "stack_opt.m"
    if ((ll_backend__stack_opt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1014 "stack_opt.m"
      {
#line 1015 "stack_opt.m"
        {
#line 1015 "stack_opt.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.consolidate_after_join\'/2", (MR_String) "no paths to join");
#line 1015 "stack_opt.m"
          return;
        }
#line 1014 "stack_opt.m"
      }
#line 1014 "stack_opt.m"
    else
#line 1016 "stack_opt.m"
      {
#line 1016 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0;
#line 1016 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PathsList_10;
#line 1016 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Paths_12;
#line 1016 "stack_opt.m"
        MR_Word ll_backend__stack_opt__AfterModelNonList_13;
#line 1016 "stack_opt.m"
        MR_Word ll_backend__stack_opt__AfterModelNon_14;
#line 1016 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19;

#line 1017 "stack_opt.m"
        {
#line 1017 "stack_opt.m"
          ll_backend__stack_opt__PathsList_10 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_20_20, (MR_Word) &ll_backend__stack_opt_scalar_common_1[11], (MR_Word) &ll_backend__stack_opt_scalar_common_2[4], ll_backend__stack_opt__HeadVar__1_1);
        }
#line 1018 "stack_opt.m"
        {
#line 1018 "stack_opt.m"
          ll_backend__stack_opt__Paths_12 = mercury__set__union_list_1_f_0((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0, ll_backend__stack_opt__PathsList_10);
        }
#line 1020 "stack_opt.m"
        {
#line 1020 "stack_opt.m"
          ll_backend__stack_opt__AfterModelNonList_13 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_20_20, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &ll_backend__stack_opt_scalar_common_2[5], ll_backend__stack_opt__HeadVar__1_1);
        }
#line 1022 "stack_opt.m"
        {
#line 1022 "stack_opt.m"
          mercury__bool__or_list_2_p_0(ll_backend__stack_opt__AfterModelNonList_13, &ll_backend__stack_opt__AfterModelNon_14);
        }
#line 1023 "stack_opt.m"
        {
#line 1023 "stack_opt.m"
          ll_backend__stack_opt__V_19_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 1023 "stack_opt.m"
        {
#line 1023 "stack_opt.m"
          MR_Word base;
#line 1023 "stack_opt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1023 "stack_opt.m"
          *ll_backend__stack_opt__AllPaths_2 = base;
#line 1023 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__Paths_12));
#line 1023 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__AfterModelNon_14));
#line 1023 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__V_19_19));
#line 1023 "stack_opt.m"
        }
#line 1016 "stack_opt.m"
      }
#line 1014 "stack_opt.m"
  }
#line 1012 "stack_opt.m"
}

#line 999 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_2(
#line 999 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 999 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 999 "stack_opt.m"
{
#line 999 "stack_opt.m"
  {
#line 999 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 999 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 999 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv4_STATE_VARIABLE_Path_9;

#line 999 "stack_opt.m"
    {
#line 999 "stack_opt.m"
      ll_backend__stack_opt__conv4_STATE_VARIABLE_Path_9 = ll_backend__stack_opt__add_anchor_to_path_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 999 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv4_STATE_VARIABLE_Path_9));
#line 999 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 999 "stack_opt.m"
  }
#line 999 "stack_opt.m"
}

#line 985 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_1(
#line 985 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 985 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 985 "stack_opt.m"
{
#line 985 "stack_opt.m"
  {
#line 985 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 985 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 985 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_STATE_VARIABLE_Path_13;

#line 985 "stack_opt.m"
    {
#line 985 "stack_opt.m"
      ll_backend__stack_opt__conv1_STATE_VARIABLE_Path_13 = ll_backend__stack_opt__add_interval_to_path_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 985 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_STATE_VARIABLE_Path_13));
#line 985 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 985 "stack_opt.m"
  }
#line 985 "stack_opt.m"
}

#line 976 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(
#line 976 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 976 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 976 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 976 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 976 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 976 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32,
#line 976 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_33)
#line 976 "stack_opt.m"
{
#line 981 "stack_opt.m"
  {
#line 981 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_102_102 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_104_104;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_105_105;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_108_108;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalVars_14;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__RelevantIntervalVars_15;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths0_16;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon0_17;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__RelevantAfter_18;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths1_19;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Start_20;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths2_30;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon_31;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_35_35;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_36_36;
#line 981 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 982 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_IntervalVars_14;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_57_57;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_58_58;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_59_59;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_60_60;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_61_61;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_62_62;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_63_63;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_64_64;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_65_65;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_66_66;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_67_67;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_68_68;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_69_69;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_70_70;
#line 987 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_71_71;
#line 987 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv2_Start_20;
#line 993 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_109_109;
#line 993 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StartInfo_26;
#line 993 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorFollowVars_27;
#line 993 "stack_opt.m"
    MR_Word ll_backend__stack_opt__NeededVars_29;
#line 993 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_37_37;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_72_72;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_73_73;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_74_74;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_75_75;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_76_76;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_77_77;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_78_78;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_79_79;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_80_80;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_81_81;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_82_82;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_83_83;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_84_84;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_85_85;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_86_86;
#line 994 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv3_StartInfo_26;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_28_28;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_39_39;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_87_87;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_88_88;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_89_89;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_90_90;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_91_91;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_92_92;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_93_93;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_94_94;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_95_95;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_96_96;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_97_97;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_98_98;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_99_99;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_100_100;
#line 1003 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_101_101;

#line 982 "stack_opt.m"
    {
#line 982 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_102_102, (MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__V_34_34, ((MR_Box) (ll_backend__stack_opt__IntervalId_12)), &ll_backend__stack_opt__conv0_IntervalVars_14);
    }
#line 982 "stack_opt.m"
    ll_backend__stack_opt__IntervalVars_14 = ((MR_Word) ll_backend__stack_opt__conv0_IntervalVars_14);
#line 7959 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 983 "stack_opt.m"
    {
#line 983 "stack_opt.m"
      ll_backend__stack_opt__RelevantIntervalVars_15 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__stack_opt__TypeCtorInfo_104_104, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__IntervalVars_14);
    }
#line 984 "stack_opt.m"
    ll_backend__stack_opt__Paths0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 0)));
#line 984 "stack_opt.m"
    ll_backend__stack_opt__AfterModelNon0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 1)));
#line 984 "stack_opt.m"
    ll_backend__stack_opt__RelevantAfter_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 2)));
#line 7972 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_105_105 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0;
#line 985 "stack_opt.m"
    {
#line 985 "stack_opt.m"
      ll_backend__stack_opt__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 985 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_7[1]));
#line 985 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_1));
#line 985 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 985 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 3) = ((MR_Box) (ll_backend__stack_opt__IntervalId_12));
#line 985 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 4) = ((MR_Box) (ll_backend__stack_opt__RelevantIntervalVars_15));
#line 985 "stack_opt.m"
    }
#line 985 "stack_opt.m"
    {
#line 985 "stack_opt.m"
      ll_backend__stack_opt__Paths1_19 = mercury__set__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__V_35_35, ll_backend__stack_opt__Paths0_16);
    }
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 987 "stack_opt.m"
    ll_backend__stack_opt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 8027 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 987 "stack_opt.m"
    {
#line 987 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_102_102, ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__V_36_36, ((MR_Box) (ll_backend__stack_opt__IntervalId_12)), &ll_backend__stack_opt__conv2_Start_20);
    }
#line 987 "stack_opt.m"
    ll_backend__stack_opt__Start_20 = ((MR_Word) ll_backend__stack_opt__conv2_Start_20);
#line 991 "stack_opt.m"
    if (((MR_tag((MR_Word) ll_backend__stack_opt__Start_20)) == (MR_mktag((MR_Integer) 1))))
#line 992 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 991 "stack_opt.m"
    else
#line 991 "stack_opt.m"
      if (((((MR_tag((MR_Word) ll_backend__stack_opt__Start_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__Start_20, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 991 "stack_opt.m"
        ll_backend__stack_opt__succeeded = MR_TRUE;
#line 991 "stack_opt.m"
      else
#line 991 "stack_opt.m"
        if (((((MR_tag((MR_Word) ll_backend__stack_opt__Start_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__Start_20, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 990 "stack_opt.m"
          ll_backend__stack_opt__succeeded = MR_TRUE;
#line 991 "stack_opt.m"
        else
#line 991 "stack_opt.m"
          ll_backend__stack_opt__succeeded = MR_FALSE;
#line 993 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 993 "stack_opt.m"
      {
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 994 "stack_opt.m"
        ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 8092 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0;
#line 994 "stack_opt.m"
        {
#line 994 "stack_opt.m"
          ll_backend__stack_opt__succeeded = mercury__map__search_3_p_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__TypeCtorInfo_109_109, ll_backend__stack_opt__V_37_37, ((MR_Box) (ll_backend__stack_opt__Start_20)), &ll_backend__stack_opt__conv3_StartInfo_26);
        }
#line 994 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 994 "stack_opt.m"
          {
#line 994 "stack_opt.m"
            ll_backend__stack_opt__StartInfo_26 = ((MR_Word) ll_backend__stack_opt__conv3_StartInfo_26);
#line 994 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 994 "stack_opt.m"
          }
#line 993 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 993 "stack_opt.m"
          {
#line 995 "stack_opt.m"
            ll_backend__stack_opt__AnchorFollowVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StartInfo_26, (MR_Integer) 0)));
#line 995 "stack_opt.m"
            ll_backend__stack_opt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StartInfo_26, (MR_Integer) 1)));
#line 996 "stack_opt.m"
            {
#line 996 "stack_opt.m"
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__stack_opt__TypeCtorInfo_104_104, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__AnchorFollowVars_27, &ll_backend__stack_opt__NeededVars_29);
            }
#line 997 "stack_opt.m"
            {
#line 997 "stack_opt.m"
              ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_104_104, ll_backend__stack_opt__NeededVars_29);
            }
#line 993 "stack_opt.m"
          }
#line 993 "stack_opt.m"
      }
#line 1000 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 999 "stack_opt.m"
      {
#line 999 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_38_38;

#line 999 "stack_opt.m"
        {
#line 999 "stack_opt.m"
          ll_backend__stack_opt__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 999 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_10[0]));
#line 999 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_2));
#line 999 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 999 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 3) = ((MR_Box) (ll_backend__stack_opt__Start_20));
#line 999 "stack_opt.m"
        }
#line 999 "stack_opt.m"
        {
#line 999 "stack_opt.m"
          ll_backend__stack_opt__Paths2_30 = mercury__set__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__V_38_38, ll_backend__stack_opt__Paths1_19);
        }
#line 999 "stack_opt.m"
      }
#line 1000 "stack_opt.m"
    else
#line 1001 "stack_opt.m"
      ll_backend__stack_opt__Paths2_30 = ll_backend__stack_opt__Paths1_19;
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 1003 "stack_opt.m"
    ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 1003 "stack_opt.m"
    {
#line 1003 "stack_opt.m"
      ll_backend__stack_opt__succeeded = mercury__set__member_2_p_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ((MR_Box) (ll_backend__stack_opt__Start_20)), ll_backend__stack_opt__V_39_39);
    }
#line 1005 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1004 "stack_opt.m"
      ll_backend__stack_opt__AfterModelNon_31 = (MR_Integer) 1;
#line 1005 "stack_opt.m"
    else
#line 1006 "stack_opt.m"
      ll_backend__stack_opt__AfterModelNon_31 = ll_backend__stack_opt__AfterModelNon0_17;
#line 1008 "stack_opt.m"
    {
#line 1008 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, 0) = ((MR_Box) (ll_backend__stack_opt__Paths2_30));
#line 1008 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, 1) = ((MR_Box) (ll_backend__stack_opt__AfterModelNon_31));
#line 1008 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, 2) = ((MR_Box) (ll_backend__stack_opt__RelevantAfter_18));
#line 1008 "stack_opt.m"
    }
#line 1009 "stack_opt.m"
    {
#line 1009 "stack_opt.m"
      ll_backend__stack_opt__find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__IntervalId_12, ll_backend__stack_opt__MaybeSearchAnchor0_9, ll_backend__stack_opt__IntervalInfo_10, ll_backend__stack_opt__StackOptInfo_11, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_33);
#line 1009 "stack_opt.m"
      return;
    }
#line 981 "stack_opt.m"
  }
#line 976 "stack_opt.m"
}

#line 967 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(
#line 967 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 967 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 967 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 967 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 967 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_14,
#line 967 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_13,
#line 967 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_15)
#line 967 "stack_opt.m"
{
#line 973 "stack_opt.m"
  {
#line 973 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 973 "stack_opt.m"
    {
#line 973 "stack_opt.m"
      ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__MaybeSearchAnchor0_9, ll_backend__stack_opt__IntervalInfo_10, ll_backend__stack_opt__StackOptInfo_11, ll_backend__stack_opt__IntervalId_13, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_14, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_15);
#line 973 "stack_opt.m"
      return;
    }
#line 973 "stack_opt.m"
  }
#line 967 "stack_opt.m"
}

#line 952 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__one_after_another_7_p_0(
#line 952 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_1,
#line 952 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_2,
#line 952 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_3,
#line 952 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4,
#line 952 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 952 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6,
#line 952 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_7)
#line 952 "stack_opt.m"
{
#line 956 "stack_opt.m"
  while (MR_TRUE)
#line 956 "stack_opt.m"
    {
#line 956 "stack_opt.m"
      /* tailcall optimized into a loop */
#line 956 "stack_opt.m"
      {
#line 956 "stack_opt.m"
        MR_bool ll_backend__stack_opt__succeeded;

#line 956 "stack_opt.m"
        if ((ll_backend__stack_opt__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 956 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_7 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6;
#line 956 "stack_opt.m"
        else
#line 958 "stack_opt.m"
          {
#line 958 "stack_opt.m"
            MR_Word ll_backend__stack_opt__SuccessorId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__5_5, (MR_Integer) 0)));
#line 958 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MoreSuccessorIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__5_5, (MR_Integer) 1)));
#line 958 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_24;

#line 959 "stack_opt.m"
            {
#line 959 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_1, ll_backend__stack_opt__MaybeSearchAnchor1_2, ll_backend__stack_opt__IntervalInfo_3, ll_backend__stack_opt__StackOptInfo_4, ll_backend__stack_opt__SuccessorId_19, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_24);
            }
#line 961 "stack_opt.m"
            /* direct tailcall eliminated */
#line 961 "stack_opt.m"
            {
#line 961 "stack_opt.m"
              MR_Word ll_backend__stack_opt__HeadVar__5__tmp_copy_5 = ll_backend__stack_opt__MoreSuccessorIds_20;
#line 961 "stack_opt.m"
              MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0__tmp_copy_6 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_24;

#line 961 "stack_opt.m"
              ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0__tmp_copy_6;
#line 961 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__5_5 = ll_backend__stack_opt__HeadVar__5__tmp_copy_5;
#line 961 "stack_opt.m"
            }
#line 961 "stack_opt.m"
            continue;
#line 958 "stack_opt.m"
          }
#line 956 "stack_opt.m"
      }
#line 956 "stack_opt.m"
      break;
#line 956 "stack_opt.m"
    }
#line 952 "stack_opt.m"
}

#line 933 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_2(
#line 933 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 933 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 933 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 933 "stack_opt.m"
{
#line 933 "stack_opt.m"
  {
#line 933 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 933 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv4_STATE_VARIABLE_AllPaths_15;

#line 933 "stack_opt.m"
    {
#line 933 "stack_opt.m"
      ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 7))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv4_STATE_VARIABLE_AllPaths_15);
    }
#line 933 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv4_STATE_VARIABLE_AllPaths_15));
#line 933 "stack_opt.m"
  }
#line 933 "stack_opt.m"
}

#line 886 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_1(
#line 886 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 886 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 886 "stack_opt.m"
{
#line 886 "stack_opt.m"
  {
#line 886 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 886 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 886 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_Path_4;

#line 886 "stack_opt.m"
    {
#line 886 "stack_opt.m"
      ll_backend__stack_opt__conv0_Path_4 = ll_backend__stack_opt__close_path_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 886 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_Path_4));
#line 886 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 886 "stack_opt.m"
  }
#line 886 "stack_opt.m"
}

#line 876 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0(
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__End_9,
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_10,
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_11,
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_12,
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_13,
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__SuccessorIds_14,
#line 876 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36,
#line 876 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37)
#line 876 "stack_opt.m"
{
#line 881 "stack_opt.m"
  {
#line 881 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 881 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorRequiresClose_16;
#line 881 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptParams_19;
#line 881 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FullPath_20;
#line 881 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39;
#line 891 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_90_90;
#line 891 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_91_91;
#line 892 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_92_92;
#line 892 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__V_93_93;
#line 892 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_94_94;
#line 892 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_95_95;
#line 892 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_96_96;
#line 905 "stack_opt.m"
    MR_Word ll_backend__stack_opt__EndGoalId_21;
#line 894 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_40_40;

#line 882 "stack_opt.m"
    {
#line 882 "stack_opt.m"
      ll_backend__stack_opt__AnchorRequiresClose_16 = ll_backend__stack_opt__anchor_requires_close_2_f_0(ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__End_9);
    }
#line 888 "stack_opt.m"
    if ((ll_backend__stack_opt__AnchorRequiresClose_16 == (MR_Integer) 0))
#line 889 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36;
#line 888 "stack_opt.m"
    else
#line 884 "stack_opt.m"
      {
#line 884 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_163_163 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0;
#line 884 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Paths0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 0)));
#line 884 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Paths1_18;
#line 885 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 1)));
#line 885 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 2)));
#line 887 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_88_88;
#line 887 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_89_89;
#line 887 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_87_87;

#line 886 "stack_opt.m"
        {
#line 886 "stack_opt.m"
          ll_backend__stack_opt__Paths1_18 = mercury__set__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_163_163, ll_backend__stack_opt__TypeCtorInfo_163_163, (MR_Word) &ll_backend__stack_opt_scalar_common_2[3], ll_backend__stack_opt__Paths0_17);
        }
#line 887 "stack_opt.m"
        ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 0)));
#line 887 "stack_opt.m"
        ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 1)));
#line 887 "stack_opt.m"
        ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 2)));
#line 887 "stack_opt.m"
        {
#line 887 "stack_opt.m"
          ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 887 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, 0) = ((MR_Box) (ll_backend__stack_opt__Paths1_18));
#line 887 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, 1) = ((MR_Box) (ll_backend__stack_opt__V_88_88));
#line 887 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, 2) = ((MR_Box) (ll_backend__stack_opt__V_89_89));
#line 887 "stack_opt.m"
        }
#line 884 "stack_opt.m"
      }
#line 891 "stack_opt.m"
    ll_backend__stack_opt__StackOptParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_13, (MR_Integer) 0)));
#line 891 "stack_opt.m"
    ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_13, (MR_Integer) 1)));
#line 891 "stack_opt.m"
    ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_13, (MR_Integer) 2)));
#line 892 "stack_opt.m"
    ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 0)));
#line 892 "stack_opt.m"
    ll_backend__stack_opt__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 1)));
#line 892 "stack_opt.m"
    ll_backend__stack_opt__V_94_94 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 892 "stack_opt.m"
    ll_backend__stack_opt__FullPath_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 892 "stack_opt.m"
    ll_backend__stack_opt__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 892 "stack_opt.m"
    ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 3)));
#line 894 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__FullPath_20 == (MR_Integer) 1);
#line 894 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 894 "stack_opt.m"
      {
#line 895 "stack_opt.m"
        ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__End_9)) == (MR_mktag((MR_Integer) 1)));
#line 895 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 895 "stack_opt.m"
          {
#line 895 "stack_opt.m"
            ll_backend__stack_opt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 0)));
#line 895 "stack_opt.m"
            ll_backend__stack_opt__EndGoalId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 1)));
#line 895 "stack_opt.m"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_40_40 == (MR_Integer) 1);
#line 895 "stack_opt.m"
          }
#line 894 "stack_opt.m"
      }
#line 905 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 897 "stack_opt.m"
      {
#line 897 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_22;
#line 897 "stack_opt.m"
        MR_Word ll_backend__stack_opt__BranchEndInfo_23;
#line 897 "stack_opt.m"
        MR_Word ll_backend__stack_opt__ContinueId_24;
#line 897 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_41_41;
#line 897 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_43_43;
#line 897 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_44_44;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_97_97;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_98_98;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_99_99;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_100_100;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_101_101;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_102_102;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_103_103;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_104_104;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_105_105;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_106_106;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_107_107;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_108_108;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_109_109;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_110_110;
#line 900 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_111_111;
#line 900 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv1_BranchEndInfo_23;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_112_112;
#line 902 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_113_113;

#line 897 "stack_opt.m"
        {
#line 897 "stack_opt.m"
          ll_backend__stack_opt__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 897 "stack_opt.m"
          MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 897 "stack_opt.m"
          MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_41_41, 1) = ((MR_Box) ((MR_Integer) 1));
#line 897 "stack_opt.m"
          MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_41_41, 2) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_21));
#line 897 "stack_opt.m"
        }
#line 897 "stack_opt.m"
        {
#line 897 "stack_opt.m"
          ll_backend__stack_opt__MaybeSearchAnchor1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 897 "stack_opt.m"
          MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchor1_22, 0) = ((MR_Box) (ll_backend__stack_opt__V_41_41));
#line 897 "stack_opt.m"
        }
#line 898 "stack_opt.m"
        {
#line 898 "stack_opt.m"
          ll_backend__stack_opt__one_after_another_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor1_22, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorIds_14, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_43_43);
        }
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 900 "stack_opt.m"
        ll_backend__stack_opt__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 900 "stack_opt.m"
        {
#line 900 "stack_opt.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ll_backend__stack_opt__V_44_44, ((MR_Box) (ll_backend__stack_opt__EndGoalId_21)), &ll_backend__stack_opt__conv1_BranchEndInfo_23);
        }
#line 900 "stack_opt.m"
        ll_backend__stack_opt__BranchEndInfo_23 = ((MR_Word) ll_backend__stack_opt__conv1_BranchEndInfo_23);
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 0)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 1)));
#line 902 "stack_opt.m"
        ll_backend__stack_opt__ContinueId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 2)));
#line 903 "stack_opt.m"
        {
#line 903 "stack_opt.m"
          ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__ContinueId_24, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_43_43, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
#line 903 "stack_opt.m"
          return;
        }
#line 897 "stack_opt.m"
      }
#line 905 "stack_opt.m"
    else
#line 929 "stack_opt.m"
      {
#line 929 "stack_opt.m"
        MR_Word ll_backend__stack_opt__EndGoalId_81;
#line 906 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_46_46;

#line 906 "stack_opt.m"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__FullPath_20 == (MR_Integer) 1);
#line 906 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 906 "stack_opt.m"
          {
#line 907 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__End_9)) == (MR_mktag((MR_Integer) 1)));
#line 907 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 907 "stack_opt.m"
              {
#line 907 "stack_opt.m"
                ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 0)));
#line 907 "stack_opt.m"
                ll_backend__stack_opt__EndGoalId_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 1)));
#line 907 "stack_opt.m"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_46_46 == (MR_Integer) 0);
#line 907 "stack_opt.m"
              }
#line 906 "stack_opt.m"
          }
#line 929 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 914 "stack_opt.m"
          {
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_168_168;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ElseStartId_27;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CondStartId_28;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MaybeSearchAnchorCond_29;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MaybeSearchAnchorEnd_30;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CondEndMap_31;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_52_52;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_53_53;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_54_54;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_57_57;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_60_60;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchEndInfo_72;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ContinueId_73;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__SuccessorId_188;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MoreSuccessorIds_189;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_193;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__SuccessorId_206;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MoreSuccessorIds_207;
#line 914 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_211;
#line 912 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ElseStartIdPrime_25;
#line 912 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CondStartIdPrime_26;
#line 909 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_47_47;
#line 909 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_48_48;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_114_114;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_115_115;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_116_116;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_117_117;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_118_118;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_119_119;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_120_120;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_121_121;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_122_122;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_123_123;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_124_124;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_125_125;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_126_126;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_127_127;
#line 920 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_128_128;
#line 921 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv2_SuccessorId_188;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_129_129;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_130_130;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_131_131;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_132_132;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_133_133;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_134_134;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_135_135;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_136_136;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_137_137;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_138_138;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_139_139;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_140_140;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_141_141;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_142_142;
#line 924 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_143_143;
#line 924 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv3_BranchEndInfo_72;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_144_144;
#line 926 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_145_145;

#line 909 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__SuccessorIds_14)) == (MR_mktag((MR_Integer) 1)));
#line 909 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 909 "stack_opt.m"
              {
#line 909 "stack_opt.m"
                ll_backend__stack_opt__ElseStartIdPrime_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 0)));
#line 909 "stack_opt.m"
                ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 1)));
#line 909 "stack_opt.m"
                ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 909 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 909 "stack_opt.m"
                  {
#line 909 "stack_opt.m"
                    ll_backend__stack_opt__CondStartIdPrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_47_47, (MR_Integer) 0)));
#line 909 "stack_opt.m"
                    ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_47_47, (MR_Integer) 1)));
#line 909 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "stack_opt.m"
                  }
#line 909 "stack_opt.m"
              }
#line 912 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 910 "stack_opt.m"
              {
#line 910 "stack_opt.m"
                ll_backend__stack_opt__ElseStartId_27 = ll_backend__stack_opt__ElseStartIdPrime_25;
#line 911 "stack_opt.m"
                ll_backend__stack_opt__CondStartId_28 = ll_backend__stack_opt__CondStartIdPrime_26;
#line 910 "stack_opt.m"
              }
#line 912 "stack_opt.m"
            else
#line 913 "stack_opt.m"
              {
#line 913 "stack_opt.m"
                {
#line 913 "stack_opt.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "ite not else, cond");
#line 913 "stack_opt.m"
                  return;
                }
#line 913 "stack_opt.m"
              }
#line 915 "stack_opt.m"
            {
#line 915 "stack_opt.m"
              ll_backend__stack_opt__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 915 "stack_opt.m"
              MR_hl_field(MR_mktag(2), ll_backend__stack_opt__V_52_52, 0) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_81));
#line 915 "stack_opt.m"
            }
#line 915 "stack_opt.m"
            {
#line 915 "stack_opt.m"
              ll_backend__stack_opt__MaybeSearchAnchorCond_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 915 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchorCond_29, 0) = ((MR_Box) (ll_backend__stack_opt__V_52_52));
#line 915 "stack_opt.m"
            }
#line 916 "stack_opt.m"
            {
#line 916 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorCond_29, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__CondStartId_28, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_53_53);
            }
#line 919 "stack_opt.m"
            {
#line 919 "stack_opt.m"
              ll_backend__stack_opt__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 919 "stack_opt.m"
              MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 919 "stack_opt.m"
              MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_54_54, 1) = ((MR_Box) ((MR_Integer) 0));
#line 919 "stack_opt.m"
              MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_54_54, 2) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_81));
#line 919 "stack_opt.m"
            }
#line 919 "stack_opt.m"
            {
#line 919 "stack_opt.m"
              ll_backend__stack_opt__MaybeSearchAnchorEnd_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 919 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchorEnd_30, 0) = ((MR_Box) (ll_backend__stack_opt__V_54_54));
#line 919 "stack_opt.m"
            }
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__CondEndMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 920 "stack_opt.m"
            ll_backend__stack_opt__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 8959 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeCtorInfo_168_168 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 921 "stack_opt.m"
            {
#line 921 "stack_opt.m"
              mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_168_168, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ll_backend__stack_opt__CondEndMap_31, ((MR_Box) (ll_backend__stack_opt__EndGoalId_81)), &ll_backend__stack_opt__conv2_SuccessorId_188);
            }
#line 921 "stack_opt.m"
            ll_backend__stack_opt__SuccessorId_188 = ((MR_Word) ll_backend__stack_opt__conv2_SuccessorId_188);
#line 923 "stack_opt.m"
            {
#line 923 "stack_opt.m"
              ll_backend__stack_opt__MoreSuccessorIds_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 923 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, 0) = ((MR_Box) (ll_backend__stack_opt__ElseStartId_27));
#line 923 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "stack_opt.m"
            }
#line 959 "stack_opt.m"
            {
#line 959 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorEnd_30, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorId_188, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_53_53, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_193);
            }
#line 958 "stack_opt.m"
            ll_backend__stack_opt__SuccessorId_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, (MR_Integer) 0)));
#line 958 "stack_opt.m"
            ll_backend__stack_opt__MoreSuccessorIds_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, (MR_Integer) 1)));
#line 959 "stack_opt.m"
            {
#line 959 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorEnd_30, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorId_206, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_193, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_211);
            }
#line 961 "stack_opt.m"
            {
#line 961 "stack_opt.m"
              ll_backend__stack_opt__one_after_another_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorEnd_30, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__MoreSuccessorIds_207, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_211, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_57_57);
            }
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 924 "stack_opt.m"
            ll_backend__stack_opt__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 924 "stack_opt.m"
            {
#line 924 "stack_opt.m"
              mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_168_168, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ll_backend__stack_opt__V_60_60, ((MR_Box) (ll_backend__stack_opt__EndGoalId_81)), &ll_backend__stack_opt__conv3_BranchEndInfo_72);
            }
#line 924 "stack_opt.m"
            ll_backend__stack_opt__BranchEndInfo_72 = ((MR_Word) ll_backend__stack_opt__conv3_BranchEndInfo_72);
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_72, (MR_Integer) 0)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_72, (MR_Integer) 1)));
#line 926 "stack_opt.m"
            ll_backend__stack_opt__ContinueId_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_72, (MR_Integer) 2)));
#line 927 "stack_opt.m"
            {
#line 927 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__ContinueId_73, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_57_57, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
#line 927 "stack_opt.m"
              return;
            }
#line 914 "stack_opt.m"
          }
#line 929 "stack_opt.m"
        else
#line 942 "stack_opt.m"
          {
#line 942 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchType_33;
#line 942 "stack_opt.m"
            MR_Word ll_backend__stack_opt__EndGoalId_77;

#line 930 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__End_9)) == (MR_mktag((MR_Integer) 1)));
#line 930 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 930 "stack_opt.m"
              {
#line 930 "stack_opt.m"
                ll_backend__stack_opt__BranchType_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 0)));
#line 930 "stack_opt.m"
                ll_backend__stack_opt__EndGoalId_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 1)));
#line 932 "stack_opt.m"
                {
#line 932 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__AllPathsList_34;
#line 932 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_62_62;
#line 932 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_63_63;
#line 932 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_64_64;
#line 932 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_65_65;
#line 932 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_74;
#line 932 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__BranchEndInfo_75;
#line 932 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ContinueId_76;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_146_146;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_147_147;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_148_148;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_149_149;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_150_150;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_151_151;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_152_152;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_153_153;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_154_154;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_155_155;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_156_156;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_157_157;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_158_158;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_159_159;
#line 937 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_160_160;
#line 937 "stack_opt.m"
                  MR_Box ll_backend__stack_opt__conv5_BranchEndInfo_75;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_161_161;
#line 939 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_162_162;

#line 932 "stack_opt.m"
                  {
#line 932 "stack_opt.m"
                    ll_backend__stack_opt__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 932 "stack_opt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 932 "stack_opt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_62_62, 1) = ((MR_Box) (ll_backend__stack_opt__BranchType_33));
#line 932 "stack_opt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_62_62, 2) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_77));
#line 932 "stack_opt.m"
                  }
#line 932 "stack_opt.m"
                  {
#line 932 "stack_opt.m"
                    ll_backend__stack_opt__MaybeSearchAnchor1_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 932 "stack_opt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchor1_74, 0) = ((MR_Box) (ll_backend__stack_opt__V_62_62));
#line 932 "stack_opt.m"
                  }
#line 933 "stack_opt.m"
                  {
#line 933 "stack_opt.m"
                    ll_backend__stack_opt__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 933 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
#line 933 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_8_p_0_2));
#line 933 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 933 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 3) = ((MR_Box) (ll_backend__stack_opt__RelevantVars_10));
#line 933 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 4) = ((MR_Box) (ll_backend__stack_opt__MaybeSearchAnchor1_74));
#line 933 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 5) = ((MR_Box) (ll_backend__stack_opt__IntervalInfo_12));
#line 933 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 6) = ((MR_Box) (ll_backend__stack_opt__StackOptInfo_13));
#line 933 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 7) = ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39));
#line 933 "stack_opt.m"
                  }
#line 933 "stack_opt.m"
                  {
#line 933 "stack_opt.m"
                    mercury__list__map_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0, ll_backend__stack_opt__V_63_63, ll_backend__stack_opt__SuccessorIds_14, &ll_backend__stack_opt__AllPathsList_34);
                  }
#line 936 "stack_opt.m"
                  {
#line 936 "stack_opt.m"
                    ll_backend__stack_opt__consolidate_after_join_2_p_0(ll_backend__stack_opt__AllPathsList_34, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_64_64);
                  }
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 937 "stack_opt.m"
                  {
#line 937 "stack_opt.m"
                    mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ll_backend__stack_opt__V_65_65, ((MR_Box) (ll_backend__stack_opt__EndGoalId_77)), &ll_backend__stack_opt__conv5_BranchEndInfo_75);
                  }
#line 937 "stack_opt.m"
                  ll_backend__stack_opt__BranchEndInfo_75 = ((MR_Word) ll_backend__stack_opt__conv5_BranchEndInfo_75);
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_75, (MR_Integer) 0)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_75, (MR_Integer) 1)));
#line 939 "stack_opt.m"
                  ll_backend__stack_opt__ContinueId_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_75, (MR_Integer) 2)));
#line 940 "stack_opt.m"
                  {
#line 940 "stack_opt.m"
                    ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__ContinueId_76, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_64_64, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
#line 940 "stack_opt.m"
                    return;
                  }
#line 932 "stack_opt.m"
                }
#line 930 "stack_opt.m"
              }
#line 930 "stack_opt.m"
            else
#line 947 "stack_opt.m"
              {
#line 947 "stack_opt.m"
                MR_Word ll_backend__stack_opt__SuccessorId_35;
#line 943 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_67_67;

#line 943 "stack_opt.m"
                ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__SuccessorIds_14)) == (MR_mktag((MR_Integer) 1)));
#line 943 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 943 "stack_opt.m"
                  {
#line 943 "stack_opt.m"
                    ll_backend__stack_opt__SuccessorId_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 0)));
#line 943 "stack_opt.m"
                    ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 1)));
#line 943 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "stack_opt.m"
                  }
#line 947 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 944 "stack_opt.m"
                  {
#line 944 "stack_opt.m"
                    ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorId_35, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
#line 944 "stack_opt.m"
                    return;
                  }
#line 947 "stack_opt.m"
                else
#line 948 "stack_opt.m"
                  {
#line 948 "stack_opt.m"
                    {
#line 948 "stack_opt.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "more successor ids");
#line 948 "stack_opt.m"
                      return;
                    }
#line 948 "stack_opt.m"
                  }
#line 947 "stack_opt.m"
              }
#line 942 "stack_opt.m"
          }
#line 929 "stack_opt.m"
      }
#line 881 "stack_opt.m"
  }
#line 876 "stack_opt.m"
}

#line 848 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_3(
#line 848 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 848 "stack_opt.m"
{
#line 848 "stack_opt.m"
  {
#line 848 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 848 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 848 "stack_opt.m"
    {
#line 848 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__848__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))));
    }
#line 848 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 848 "stack_opt.m"
  }
#line 848 "stack_opt.m"
}

#line 844 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_2(
#line 844 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 844 "stack_opt.m"
{
#line 844 "stack_opt.m"
  {
#line 844 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 844 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 844 "stack_opt.m"
    {
#line 844 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__844__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))));
    }
#line 844 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 844 "stack_opt.m"
  }
#line 844 "stack_opt.m"
}

#line 835 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_1(
#line 835 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 835 "stack_opt.m"
{
#line 835 "stack_opt.m"
  {
#line 835 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 835 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 835 "stack_opt.m"
    {
#line 835 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__835__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))));
    }
#line 835 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 835 "stack_opt.m"
  }
#line 835 "stack_opt.m"
}

#line 825 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0(
#line 825 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 825 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_9,
#line 825 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_10,
#line 825 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_11,
#line 825 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_12,
#line 825 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28,
#line 825 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29)
#line 825 "stack_opt.m"
{
#line 830 "stack_opt.m"
  {
#line 830 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 830 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_111_111 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 830 "stack_opt.m"
    MR_Word ll_backend__stack_opt__End_14;
#line 830 "stack_opt.m"
    MR_Word ll_backend__stack_opt__SuccessorIds_15;
#line 830 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 12)));
#line 830 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_31_31;
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 0)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 1)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 2)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 3)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 4)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 5)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 6)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 7)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 8)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 9)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 10)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 11)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 13)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 14)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 15)));
#line 831 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_End_14;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_71_71;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_72_72;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_73_73;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_74_74;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_75_75;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_76_76;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_77_77;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_78_78;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_79_79;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_80_80;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_81_81;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_82_82;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_83_83;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_84_84;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_85_85;
#line 832 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv1_SuccessorIds_15;

#line 831 "stack_opt.m"
    {
#line 831 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_111_111, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ll_backend__stack_opt__V_30_30, ((MR_Box) (ll_backend__stack_opt__IntervalId_9)), &ll_backend__stack_opt__conv0_End_14);
    }
#line 831 "stack_opt.m"
    ll_backend__stack_opt__End_14 = ((MR_Word) ll_backend__stack_opt__conv0_End_14);
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 0)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 1)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 2)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 3)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 4)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 5)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 6)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 7)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 8)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 9)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 10)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 11)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 12)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 13)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 14)));
#line 832 "stack_opt.m"
    ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 15)));
#line 832 "stack_opt.m"
    {
#line 832 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_111_111, (MR_Word) &ll_backend__stack_opt_scalar_common_1[3], ll_backend__stack_opt__V_31_31, ((MR_Box) (ll_backend__stack_opt__IntervalId_9)), &ll_backend__stack_opt__conv1_SuccessorIds_15);
    }
#line 832 "stack_opt.m"
    ll_backend__stack_opt__SuccessorIds_15 = ((MR_Word) ll_backend__stack_opt__conv1_SuccessorIds_15);
#line 840 "stack_opt.m"
    if ((ll_backend__stack_opt__SuccessorIds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "stack_opt.m"
      {
#line 834 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_50_50;
#line 834 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_54_54;

#line 835 "stack_opt.m"
        {
#line 835 "stack_opt.m"
          ll_backend__stack_opt__V_54_54 = ll_backend__stack_opt__may_have_no_successor_1_f_0(ll_backend__stack_opt__End_14);
        }
#line 835 "stack_opt.m"
        {
#line 835 "stack_opt.m"
          ll_backend__stack_opt__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 835 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[0]));
#line 835 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_1));
#line 835 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 835 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 3) = ((MR_Box) (ll_backend__stack_opt__V_54_54));
#line 835 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 4) = ((MR_Box) ((MR_Integer) 1));
#line 835 "stack_opt.m"
        }
#line 835 "stack_opt.m"
        {
#line 835 "stack_opt.m"
          mercury__require__expect_4_p_0(ll_backend__stack_opt__V_50_50, (MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected no successor");
        }
#line 834 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28;
#line 834 "stack_opt.m"
      }
#line 840 "stack_opt.m"
    else
#line 841 "stack_opt.m"
      {
#line 841 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MoreSuccessorIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_15, (MR_Integer) 1)));
#line 841 "stack_opt.m"
        MR_Word ll_backend__stack_opt__SuccessorId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_15, (MR_Integer) 0)));
#line 852 "stack_opt.m"
        MR_Word ll_backend__stack_opt__SearchAnchor0_20;

#line 846 "stack_opt.m"
        if ((ll_backend__stack_opt__MoreSuccessorIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 843 "stack_opt.m"
          {
#line 843 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_38_38;
#line 843 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_42_42;

#line 844 "stack_opt.m"
            {
#line 844 "stack_opt.m"
              ll_backend__stack_opt__V_42_42 = ll_backend__stack_opt__may_have_one_successor_1_f_0(ll_backend__stack_opt__End_14);
            }
#line 844 "stack_opt.m"
            {
#line 844 "stack_opt.m"
              ll_backend__stack_opt__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 844 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[0]));
#line 844 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_2));
#line 844 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 844 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 3) = ((MR_Box) (ll_backend__stack_opt__V_42_42));
#line 844 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 4) = ((MR_Box) ((MR_Integer) 1));
#line 844 "stack_opt.m"
            }
#line 844 "stack_opt.m"
            {
#line 844 "stack_opt.m"
              mercury__require__expect_4_p_0(ll_backend__stack_opt__V_38_38, (MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected one successor");
            }
#line 843 "stack_opt.m"
          }
#line 846 "stack_opt.m"
        else
#line 847 "stack_opt.m"
          {
#line 847 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_32_32;
#line 847 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_36_36;

#line 848 "stack_opt.m"
            {
#line 848 "stack_opt.m"
              ll_backend__stack_opt__V_36_36 = ll_backend__stack_opt__may_have_more_successors_1_f_0(ll_backend__stack_opt__End_14);
            }
#line 848 "stack_opt.m"
            {
#line 848 "stack_opt.m"
              ll_backend__stack_opt__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 848 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[0]));
#line 848 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_3));
#line 848 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 848 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 3) = ((MR_Box) (ll_backend__stack_opt__V_36_36));
#line 848 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 4) = ((MR_Box) ((MR_Integer) 1));
#line 848 "stack_opt.m"
            }
#line 848 "stack_opt.m"
            {
#line 848 "stack_opt.m"
              mercury__require__expect_4_p_0(ll_backend__stack_opt__V_32_32, (MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected more successors");
            }
#line 847 "stack_opt.m"
          }
#line 852 "stack_opt.m"
        ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__MaybeSearchAnchor0_10)) == (MR_mktag((MR_Integer) 1)));
#line 852 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 852 "stack_opt.m"
          {
#line 852 "stack_opt.m"
            ll_backend__stack_opt__SearchAnchor0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchor0_10, (MR_Integer) 0)));
#line 853 "stack_opt.m"
            {
#line 853 "stack_opt.m"
              ll_backend__stack_opt__succeeded = backend_libs__interval____Unify____anchor_0_0(ll_backend__stack_opt__End_14, ll_backend__stack_opt__SearchAnchor0_20);
            }
#line 852 "stack_opt.m"
          }
#line 856 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 855 "stack_opt.m"
          {
#line 855 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_45_45;
#line 855 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_86_86;
#line 855 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_87_87;
#line 855 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_88_88;

#line 855 "stack_opt.m"
            {
#line 855 "stack_opt.m"
              ll_backend__stack_opt__V_45_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
#line 855 "stack_opt.m"
            ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0)));
#line 855 "stack_opt.m"
            ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1)));
#line 855 "stack_opt.m"
            ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 2)));
#line 855 "stack_opt.m"
            {
#line 855 "stack_opt.m"
              MR_Word base;
#line 855 "stack_opt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 855 "stack_opt.m"
              *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29 = base;
#line 855 "stack_opt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_86_86));
#line 855 "stack_opt.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__V_87_87));
#line 855 "stack_opt.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__V_45_45));
#line 855 "stack_opt.m"
            }
#line 855 "stack_opt.m"
          }
#line 856 "stack_opt.m"
        else
#line 869 "stack_opt.m"
          {
#line 869 "stack_opt.m"
            MR_Word ll_backend__stack_opt__RelevantAfter_27;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_118_118;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_119_119;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_120_120;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__EndGoalId_22;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchEndInfo_23;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__OnStackAfterBranch_24;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__AccessedAfterBranch_25;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__NeededAfterBranch_26;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_46_46;
#line 857 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_21_21;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_89_89;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_90_90;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_91_91;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_92_92;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_93_93;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_94_94;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_95_95;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_96_96;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_97_97;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_98_98;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_99_99;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_100_100;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_101_101;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_102_102;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_103_103;
#line 858 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv2_BranchEndInfo_23;
#line 860 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_105_105;

#line 857 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((((MR_tag((MR_Word) ll_backend__stack_opt__End_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__End_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 857 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 857 "stack_opt.m"
              {
#line 857 "stack_opt.m"
                ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__End_14, (MR_Integer) 1)));
#line 857 "stack_opt.m"
                ll_backend__stack_opt__EndGoalId_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__End_14, (MR_Integer) 2)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 0)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 1)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 2)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 3)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 4)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 5)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 6)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 7)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 8)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 9)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 10)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 11)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 12)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 13)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 14)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 15)));
#line 9795 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeCtorInfo_118_118 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 9797 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeCtorInfo_119_119 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0;
#line 858 "stack_opt.m"
                {
#line 858 "stack_opt.m"
                  mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_118_118, ll_backend__stack_opt__TypeCtorInfo_119_119, ll_backend__stack_opt__V_46_46, ((MR_Box) (ll_backend__stack_opt__EndGoalId_22)), &ll_backend__stack_opt__conv2_BranchEndInfo_23);
                }
#line 858 "stack_opt.m"
                ll_backend__stack_opt__BranchEndInfo_23 = ((MR_Word) ll_backend__stack_opt__conv2_BranchEndInfo_23);
#line 860 "stack_opt.m"
                ll_backend__stack_opt__OnStackAfterBranch_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 0)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__AccessedAfterBranch_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 1)));
#line 860 "stack_opt.m"
                ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 2)));
#line 9812 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 862 "stack_opt.m"
                {
#line 862 "stack_opt.m"
                  ll_backend__stack_opt__NeededAfterBranch_26 = parse_tree__set_of_var__union_2_f_0(ll_backend__stack_opt__TypeCtorInfo_120_120, ll_backend__stack_opt__OnStackAfterBranch_24, ll_backend__stack_opt__AccessedAfterBranch_25);
                }
#line 864 "stack_opt.m"
                {
#line 864 "stack_opt.m"
                  ll_backend__stack_opt__RelevantAfter_27 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__stack_opt__TypeCtorInfo_120_120, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__NeededAfterBranch_26);
                }
#line 866 "stack_opt.m"
                {
#line 866 "stack_opt.m"
                  ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_120_120, ll_backend__stack_opt__RelevantAfter_27);
                }
#line 857 "stack_opt.m"
              }
#line 869 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 868 "stack_opt.m"
              {
#line 868 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0)));
#line 868 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1)));
#line 868 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 2)));

#line 868 "stack_opt.m"
                {
#line 868 "stack_opt.m"
                  MR_Word base;
#line 868 "stack_opt.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 868 "stack_opt.m"
                  *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29 = base;
#line 868 "stack_opt.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_108_108));
#line 868 "stack_opt.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__V_109_109));
#line 868 "stack_opt.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__RelevantAfter_27));
#line 868 "stack_opt.m"
                }
#line 868 "stack_opt.m"
              }
#line 869 "stack_opt.m"
            else
#line 870 "stack_opt.m"
              {
#line 870 "stack_opt.m"
                ll_backend__stack_opt__find_all_branches_from_8_p_0(ll_backend__stack_opt__End_14, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__MaybeSearchAnchor0_10, ll_backend__stack_opt__IntervalInfo_11, ll_backend__stack_opt__StackOptInfo_12, ll_backend__stack_opt__SuccessorIds_15, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29);
#line 870 "stack_opt.m"
                return;
              }
#line 869 "stack_opt.m"
          }
#line 841 "stack_opt.m"
      }
#line 830 "stack_opt.m"
  }
#line 825 "stack_opt.m"
}

#line 818 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1(
#line 818 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 818 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 818 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 818 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 818 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 818 "stack_opt.m"
{
#line 818 "stack_opt.m"
  {
#line 818 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 818 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv3_MatchPathInfo_6;
#line 818 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv2_Anchors_7;
#line 818 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_Intervals_8;

#line 818 "stack_opt.m"
    {
#line 818 "stack_opt.m"
      ll_backend__stack_opt__extract_match_and_save_info_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv3_MatchPathInfo_6, &ll_backend__stack_opt__conv2_Anchors_7, &ll_backend__stack_opt__conv1_Intervals_8);
    }
#line 818 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv3_MatchPathInfo_6));
#line 818 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv2_Anchors_7));
#line 818 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv1_Intervals_8));
#line 818 "stack_opt.m"
  }
#line 818 "stack_opt.m"
}

#line 803 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(
#line 803 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_5,
#line 803 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchInfo_6,
#line 803 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_7,
#line 803 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_8)
#line 803 "stack_opt.m"
{
#line 807 "stack_opt.m"
  {
#line 807 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_65_65 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_67_67;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_68_68;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_69_69;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 6)));
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalVars_10;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalRelevantVars_11;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Path0_12;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AllPaths0_13;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AllPaths_14;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths_15;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon_16;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__RelevantAfter_17;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PathList_18;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__MatchInputs_19;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushAnchorSets_20;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OccurringIntervalSets_21;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushAnchors_22;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OccurringIntervals_23;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_26_26;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_28_28;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_29_29;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_30_30;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_32_32;
#line 807 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 14)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 0)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 1)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 2)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 3)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 4)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 5)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 7)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 8)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 9)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 10)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 11)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 12)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 13)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 15)));
#line 809 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_IntervalVars_10;

#line 809 "stack_opt.m"
    {
#line 809 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_65_65, (MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__V_48_48, ((MR_Box) (ll_backend__stack_opt__IntervalId_9)), &ll_backend__stack_opt__conv0_IntervalVars_10);
    }
#line 809 "stack_opt.m"
    ll_backend__stack_opt__IntervalVars_10 = ((MR_Word) ll_backend__stack_opt__conv0_IntervalVars_10);
#line 10025 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 810 "stack_opt.m"
    {
#line 810 "stack_opt.m"
      ll_backend__stack_opt__IntervalRelevantVars_11 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__stack_opt__TypeCtorInfo_67_67, ll_backend__stack_opt__RelevantVars_5, ll_backend__stack_opt__IntervalVars_10);
    }
#line 812 "stack_opt.m"
    {
#line 812 "stack_opt.m"
      ll_backend__stack_opt__V_26_26 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_67_67);
    }
#line 10037 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_68_68 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 812 "stack_opt.m"
    {
#line 812 "stack_opt.m"
      ll_backend__stack_opt__V_28_28 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_68_68);
    }
#line 812 "stack_opt.m"
    {
#line 812 "stack_opt.m"
      ll_backend__stack_opt__V_29_29 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_65_65);
    }
#line 811 "stack_opt.m"
    {
#line 811 "stack_opt.m"
      ll_backend__stack_opt__Path0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 811 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 0) = ((MR_Box) ((MR_Integer) 0));
#line 811 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 1) = ((MR_Box) (ll_backend__stack_opt__IntervalRelevantVars_11));
#line 811 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 2) = ((MR_Box) (ll_backend__stack_opt__V_26_26));
#line 811 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 4) = ((MR_Box) (ll_backend__stack_opt__V_28_28));
#line 811 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 5) = ((MR_Box) (ll_backend__stack_opt__V_29_29));
#line 811 "stack_opt.m"
    }
#line 10067 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_69_69 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0;
#line 813 "stack_opt.m"
    {
#line 813 "stack_opt.m"
      ll_backend__stack_opt__V_30_30 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_opt__TypeCtorInfo_69_69, ((MR_Box) (ll_backend__stack_opt__Path0_12)));
    }
#line 813 "stack_opt.m"
    {
#line 813 "stack_opt.m"
      ll_backend__stack_opt__V_32_32 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_67_67);
    }
#line 813 "stack_opt.m"
    {
#line 813 "stack_opt.m"
      ll_backend__stack_opt__AllPaths0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 813 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths0_13, 0) = ((MR_Box) (ll_backend__stack_opt__V_30_30));
#line 813 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths0_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 813 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths0_13, 2) = ((MR_Box) (ll_backend__stack_opt__V_32_32));
#line 813 "stack_opt.m"
    }
#line 814 "stack_opt.m"
    {
#line 814 "stack_opt.m"
      ll_backend__stack_opt__find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_5, ll_backend__stack_opt__IntervalId_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__stack_opt__IntervalInfo_7, ll_backend__stack_opt__StackOptInfo_8, ll_backend__stack_opt__AllPaths0_13, &ll_backend__stack_opt__AllPaths_14);
    }
#line 816 "stack_opt.m"
    ll_backend__stack_opt__Paths_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths_14, (MR_Integer) 0)));
#line 816 "stack_opt.m"
    ll_backend__stack_opt__AfterModelNon_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths_14, (MR_Integer) 1)));
#line 816 "stack_opt.m"
    ll_backend__stack_opt__RelevantAfter_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths_14, (MR_Integer) 2)));
#line 817 "stack_opt.m"
    {
#line 817 "stack_opt.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__stack_opt__TypeCtorInfo_69_69, ll_backend__stack_opt__Paths_15, &ll_backend__stack_opt__PathList_18);
    }
#line 818 "stack_opt.m"
    {
#line 818 "stack_opt.m"
      mercury__list__map3_5_p_0(ll_backend__stack_opt__TypeCtorInfo_69_69, (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0, (MR_Word) &ll_backend__stack_opt_scalar_common_1[10], (MR_Word) &ll_backend__stack_opt_scalar_common_1[9], (MR_Word) &ll_backend__stack_opt_scalar_common_2[2], ll_backend__stack_opt__PathList_18, &ll_backend__stack_opt__MatchInputs_19, &ll_backend__stack_opt__FlushAnchorSets_20, &ll_backend__stack_opt__OccurringIntervalSets_21);
    }
#line 820 "stack_opt.m"
    {
#line 820 "stack_opt.m"
      ll_backend__stack_opt__FlushAnchors_22 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_68_68, ll_backend__stack_opt__FlushAnchorSets_20);
    }
#line 821 "stack_opt.m"
    {
#line 821 "stack_opt.m"
      ll_backend__stack_opt__OccurringIntervals_23 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_65_65, ll_backend__stack_opt__OccurringIntervalSets_21);
    }
#line 822 "stack_opt.m"
    {
#line 822 "stack_opt.m"
      MR_Word base;
#line 822 "stack_opt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 822 "stack_opt.m"
      *ll_backend__stack_opt__MatchInfo_6 = base;
#line 822 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__MatchInputs_19));
#line 822 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__RelevantAfter_17));
#line 822 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__AfterModelNon_16));
#line 822 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__stack_opt__FlushAnchors_22));
#line 822 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__stack_opt__OccurringIntervals_23));
#line 822 "stack_opt.m"
    }
#line 807 "stack_opt.m"
  }
#line 803 "stack_opt.m"
}

#line 781 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_more_successors_1_f_0(
#line 781 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 781 "stack_opt.m"
{
#line 783 "stack_opt.m"
  {
#line 783 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 783 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__2_2;

#line 783 "stack_opt.m"
    if ((ll_backend__stack_opt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 784 "stack_opt.m"
      ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 783 "stack_opt.m"
    else
#line 783 "stack_opt.m"
      if ((ll_backend__stack_opt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 783 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 783 "stack_opt.m"
      else
#line 783 "stack_opt.m"
        if (((MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 785 "stack_opt.m"
          {
#line 785 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchType_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 785 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));

#line 789 "stack_opt.m"
            if ((ll_backend__stack_opt__BranchType_3 == (MR_Integer) 3))
#line 788 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 789 "stack_opt.m"
            else
#line 795 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 785 "stack_opt.m"
          }
#line 783 "stack_opt.m"
        else
#line 783 "stack_opt.m"
          if (((MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 797 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 783 "stack_opt.m"
          else
#line 783 "stack_opt.m"
            if (((((MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 798 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 783 "stack_opt.m"
            else
#line 799 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 783 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__2_2;
#line 783 "stack_opt.m"
  }
#line 781 "stack_opt.m"
}

#line 772 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_one_successor_1_f_0(
#line 772 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 772 "stack_opt.m"
{
#line 774 "stack_opt.m"
  {
#line 774 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 774 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__2_2;

#line 774 "stack_opt.m"
    if ((ll_backend__stack_opt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 775 "stack_opt.m"
      ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 774 "stack_opt.m"
    else
#line 774 "stack_opt.m"
      if ((ll_backend__stack_opt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 774 "stack_opt.m"
      else
#line 774 "stack_opt.m"
        if (((MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 776 "stack_opt.m"
          ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 774 "stack_opt.m"
        else
#line 774 "stack_opt.m"
          if (((MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 777 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 774 "stack_opt.m"
          else
#line 774 "stack_opt.m"
            if (((((MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 778 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 774 "stack_opt.m"
            else
#line 779 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 774 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__2_2;
#line 774 "stack_opt.m"
  }
#line 772 "stack_opt.m"
}

#line 763 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_no_successor_1_f_0(
#line 763 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 763 "stack_opt.m"
{
#line 765 "stack_opt.m"
  {
#line 765 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 765 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__2_2;

#line 765 "stack_opt.m"
    if ((ll_backend__stack_opt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 766 "stack_opt.m"
      ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 765 "stack_opt.m"
    else
#line 765 "stack_opt.m"
      if ((ll_backend__stack_opt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 765 "stack_opt.m"
      else
#line 765 "stack_opt.m"
        if (((MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 767 "stack_opt.m"
          ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 765 "stack_opt.m"
        else
#line 765 "stack_opt.m"
          if (((MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 768 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 765 "stack_opt.m"
          else
#line 765 "stack_opt.m"
            if (((((MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 769 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 765 "stack_opt.m"
            else
#line 770 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 765 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__2_2;
#line 765 "stack_opt.m"
  }
#line 763 "stack_opt.m"
}

#line 735 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__anchor_requires_close_2_f_0(
#line 735 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_1,
#line 735 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 735 "stack_opt.m"
{
#line 737 "stack_opt.m"
  {
#line 737 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 737 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__3_3;

#line 737 "stack_opt.m"
    if ((ll_backend__stack_opt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 738 "stack_opt.m"
      ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 737 "stack_opt.m"
    else
#line 737 "stack_opt.m"
      if ((ll_backend__stack_opt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 737 "stack_opt.m"
      else
#line 737 "stack_opt.m"
        if (((MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 740 "stack_opt.m"
          {
#line 740 "stack_opt.m"
            MR_Word ll_backend__stack_opt__GoalId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 740 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ResumeSaveStatus_9;
#line 740 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 3)));
#line 739 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 0)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 1)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 2)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 4)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 5)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 6)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 7)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 8)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 9)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 10)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 11)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 12)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 13)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 14)));
#line 741 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 15)));
#line 741 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv0_ResumeSaveStatus_9;

#line 741 "stack_opt.m"
            {
#line 741 "stack_opt.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0, ll_backend__stack_opt__V_10_10, ((MR_Box) (ll_backend__stack_opt__GoalId_8)), &ll_backend__stack_opt__conv0_ResumeSaveStatus_9);
            }
#line 741 "stack_opt.m"
            ll_backend__stack_opt__ResumeSaveStatus_9 = ((MR_Word) ll_backend__stack_opt__conv0_ResumeSaveStatus_9);
#line 760 "stack_opt.m"
            if ((ll_backend__stack_opt__ResumeSaveStatus_9 == (MR_Integer) 1))
#line 761 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 760 "stack_opt.m"
            else
#line 760 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 740 "stack_opt.m"
          }
#line 737 "stack_opt.m"
        else
#line 737 "stack_opt.m"
          if (((MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 743 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 737 "stack_opt.m"
          else
#line 737 "stack_opt.m"
            if (((((MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 744 "stack_opt.m"
              {
#line 744 "stack_opt.m"
                MR_Word ll_backend__stack_opt__BranchType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 744 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));

#line 748 "stack_opt.m"
                if ((ll_backend__stack_opt__BranchType_14 == (MR_Integer) 3))
#line 747 "stack_opt.m"
                  ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 748 "stack_opt.m"
                else
#line 754 "stack_opt.m"
                  ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 744 "stack_opt.m"
              }
#line 737 "stack_opt.m"
            else
#line 756 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 737 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__3_3;
#line 737 "stack_opt.m"
  }
#line 735 "stack_opt.m"
}

#line 728 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_anchor_to_path_2_f_0(
#line 728 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_4,
#line 728 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_8)
#line 728 "stack_opt.m"
{
#line 730 "stack_opt.m"
  {
#line 730 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 730 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_9;
#line 730 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Anchors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 4)));
#line 730 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Anchors_7;
#line 731 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 0)));
#line 731 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 1)));
#line 731 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 2)));
#line 731 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 3)));
#line 731 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 5)));
#line 733 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_16_16;
#line 733 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_17_17;
#line 733 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_18_18;
#line 733 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;
#line 733 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_21_21;
#line 733 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_20_20;

#line 732 "stack_opt.m"
    {
#line 732 "stack_opt.m"
      mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__Anchor_4)), ll_backend__stack_opt__Anchors0_6, &ll_backend__stack_opt__Anchors_7);
    }
#line 733 "stack_opt.m"
    ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 0)));
#line 733 "stack_opt.m"
    ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 1)));
#line 733 "stack_opt.m"
    ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 2)));
#line 733 "stack_opt.m"
    ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 3)));
#line 733 "stack_opt.m"
    ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 4)));
#line 733 "stack_opt.m"
    ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 5)));
#line 733 "stack_opt.m"
    {
#line 733 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_Path_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 733 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 0) = ((MR_Box) (ll_backend__stack_opt__V_16_16));
#line 733 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 1) = ((MR_Box) (ll_backend__stack_opt__V_17_17));
#line 733 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 2) = ((MR_Box) (ll_backend__stack_opt__V_18_18));
#line 733 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 3) = ((MR_Box) (ll_backend__stack_opt__V_19_19));
#line 733 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 4) = ((MR_Box) (ll_backend__stack_opt__Anchors_7));
#line 733 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 5) = ((MR_Box) (ll_backend__stack_opt__V_21_21));
#line 733 "stack_opt.m"
    }
#line 730 "stack_opt.m"
    return ll_backend__stack_opt__STATE_VARIABLE_Path_9;
#line 730 "stack_opt.m"
  }
#line 728 "stack_opt.m"
}

#line 714 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_interval_to_path_3_f_0(
#line 714 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_5,
#line 714 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Vars_6,
#line 714 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_12)
#line 714 "stack_opt.m"
{
#line 719 "stack_opt.m"
  {
#line 719 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 719 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_13;

#line 717 "stack_opt.m"
    {
#line 717 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__Vars_6);
    }
#line 719 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 719 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_Path_13 = ll_backend__stack_opt__STATE_VARIABLE_Path_0_12;
#line 719 "stack_opt.m"
    else
#line 720 "stack_opt.m"
      {
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__CurSegment0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 1)));
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__CurSegment_9;
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__OccurringIntervals0_10;
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__OccurringIntervals_11;
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_26_26;
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_28_28;
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_29_29;
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_30_30;
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 0)));
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 2)));
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 3)));
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 4)));
#line 720 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 5)));
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_21_21;
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_22_22;
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_23_23;
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_24_24;
#line 722 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_25_25;
#line 724 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_27_27;
#line 724 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_31_31;

#line 721 "stack_opt.m"
        {
#line 721 "stack_opt.m"
          ll_backend__stack_opt__CurSegment_9 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__Vars_6, ll_backend__stack_opt__CurSegment0_8);
        }
#line 722 "stack_opt.m"
        ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 0)));
#line 722 "stack_opt.m"
        ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 1)));
#line 722 "stack_opt.m"
        ll_backend__stack_opt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 2)));
#line 722 "stack_opt.m"
        ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 3)));
#line 722 "stack_opt.m"
        ll_backend__stack_opt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 4)));
#line 722 "stack_opt.m"
        ll_backend__stack_opt__OccurringIntervals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 5)));
#line 723 "stack_opt.m"
        {
#line 723 "stack_opt.m"
          mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (ll_backend__stack_opt__IntervalId_5)), ll_backend__stack_opt__OccurringIntervals0_10, &ll_backend__stack_opt__OccurringIntervals_11);
        }
#line 724 "stack_opt.m"
        ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 0)));
#line 724 "stack_opt.m"
        ll_backend__stack_opt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 1)));
#line 724 "stack_opt.m"
        ll_backend__stack_opt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 2)));
#line 724 "stack_opt.m"
        ll_backend__stack_opt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 3)));
#line 724 "stack_opt.m"
        ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 4)));
#line 724 "stack_opt.m"
        ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 5)));
#line 725 "stack_opt.m"
        {
#line 725 "stack_opt.m"
          ll_backend__stack_opt__STATE_VARIABLE_Path_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 725 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 0) = ((MR_Box) (ll_backend__stack_opt__V_26_26));
#line 725 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 1) = ((MR_Box) (ll_backend__stack_opt__CurSegment_9));
#line 725 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 2) = ((MR_Box) (ll_backend__stack_opt__V_28_28));
#line 725 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 3) = ((MR_Box) (ll_backend__stack_opt__V_29_29));
#line 725 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 4) = ((MR_Box) (ll_backend__stack_opt__V_30_30));
#line 725 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 5) = ((MR_Box) (ll_backend__stack_opt__OccurringIntervals_11));
#line 725 "stack_opt.m"
        }
#line 720 "stack_opt.m"
      }
#line 719 "stack_opt.m"
    return ll_backend__stack_opt__STATE_VARIABLE_Path_13;
#line 719 "stack_opt.m"
  }
#line 714 "stack_opt.m"
}

#line 697 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__close_path_1_f_0_1(
#line 697 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 697 "stack_opt.m"
{
#line 697 "stack_opt.m"
  {
#line 697 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 697 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 697 "stack_opt.m"
    {
#line 697 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__close_path__697__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))));
    }
#line 697 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 697 "stack_opt.m"
  }
#line 697 "stack_opt.m"
}

#line 690 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__close_path_1_f_0(
#line 690 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_3)
#line 690 "stack_opt.m"
{
#line 692 "stack_opt.m"
  {
#line 692 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 692 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Path_4;
#line 692 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushState_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 0)));
#line 692 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CurSegment_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 1)));
#line 692 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FirstSegment0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 2)));
#line 692 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OtherSegments0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 3)));
#line 692 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushAnchors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 4)));
#line 692 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 5)));
#line 692 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FirstSegment_11;
#line 692 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OtherSegments_12;
#line 692 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_18_18;

#line 701 "stack_opt.m"
    if ((ll_backend__stack_opt__FlushState_5 == (MR_Integer) 1))
#line 706 "stack_opt.m"
      {
#line 703 "stack_opt.m"
        {
#line 703 "stack_opt.m"
          ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__CurSegment_6);
        }
#line 706 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 704 "stack_opt.m"
          {
#line 704 "stack_opt.m"
            ll_backend__stack_opt__FirstSegment_11 = ll_backend__stack_opt__FirstSegment0_7;
#line 705 "stack_opt.m"
            ll_backend__stack_opt__OtherSegments_12 = ll_backend__stack_opt__OtherSegments0_8;
#line 704 "stack_opt.m"
          }
#line 706 "stack_opt.m"
        else
#line 707 "stack_opt.m"
          {
#line 707 "stack_opt.m"
            ll_backend__stack_opt__FirstSegment_11 = ll_backend__stack_opt__FirstSegment0_7;
#line 708 "stack_opt.m"
            {
#line 708 "stack_opt.m"
              ll_backend__stack_opt__OtherSegments_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__OtherSegments_12, 0) = ((MR_Box) (ll_backend__stack_opt__CurSegment_6));
#line 708 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__OtherSegments_12, 1) = ((MR_Box) (ll_backend__stack_opt__OtherSegments0_8));
#line 708 "stack_opt.m"
            }
#line 707 "stack_opt.m"
          }
#line 706 "stack_opt.m"
      }
#line 701 "stack_opt.m"
    else
#line 696 "stack_opt.m"
      {
#line 696 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13;

#line 697 "stack_opt.m"
        {
#line 697 "stack_opt.m"
          ll_backend__stack_opt__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 697 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_6[0]));
#line 697 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 1) = ((MR_Box) (ll_backend__stack_opt__close_path_1_f_0_1));
#line 697 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 697 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 3) = ((MR_Box) (ll_backend__stack_opt__FirstSegment0_7));
#line 697 "stack_opt.m"
        }
#line 697 "stack_opt.m"
        {
#line 697 "stack_opt.m"
          mercury__require__expect_4_p_0(ll_backend__stack_opt__V_13_13, (MR_String) "ll_backend.stack_opt", (MR_String) "function \140ll_backend.stack_opt.close_path\'/1", (MR_String) "FirstSegment0 not empty");
        }
#line 699 "stack_opt.m"
        ll_backend__stack_opt__FirstSegment_11 = ll_backend__stack_opt__CurSegment_6;
#line 700 "stack_opt.m"
        ll_backend__stack_opt__OtherSegments_12 = ll_backend__stack_opt__OtherSegments0_8;
#line 696 "stack_opt.m"
      }
#line 711 "stack_opt.m"
    {
#line 711 "stack_opt.m"
      ll_backend__stack_opt__V_18_18 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 711 "stack_opt.m"
    {
#line 711 "stack_opt.m"
      ll_backend__stack_opt__Path_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 711 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 711 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 1) = ((MR_Box) (ll_backend__stack_opt__V_18_18));
#line 711 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 2) = ((MR_Box) (ll_backend__stack_opt__FirstSegment_11));
#line 711 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 3) = ((MR_Box) (ll_backend__stack_opt__OtherSegments_12));
#line 711 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 4) = ((MR_Box) (ll_backend__stack_opt__FlushAnchors_9));
#line 711 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 5) = ((MR_Box) (ll_backend__stack_opt__IntervalIds_10));
#line 711 "stack_opt.m"
    }
#line 692 "stack_opt.m"
    return ll_backend__stack_opt__Path_4;
#line 692 "stack_opt.m"
  }
#line 690 "stack_opt.m"
}

#line 679 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__extract_match_and_save_info_4_p_0(
#line 679 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_5,
#line 679 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchPathInfo_6,
#line 679 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Anchors_7,
#line 679 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Intervals_8)
#line 679 "stack_opt.m"
{
#line 682 "stack_opt.m"
  {
#line 682 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 682 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Path_9;
#line 682 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FirstSegment_10;
#line 682 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OtherSegments_11;
#line 684 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_12_12;
#line 684 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_13_13;

#line 683 "stack_opt.m"
    {
#line 683 "stack_opt.m"
      ll_backend__stack_opt__Path_9 = ll_backend__stack_opt__close_path_1_f_0(ll_backend__stack_opt__Path0_5);
    }
#line 684 "stack_opt.m"
    ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 0)));
#line 684 "stack_opt.m"
    ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 1)));
#line 684 "stack_opt.m"
    ll_backend__stack_opt__FirstSegment_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 2)));
#line 684 "stack_opt.m"
    ll_backend__stack_opt__OtherSegments_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 3)));
#line 684 "stack_opt.m"
    *ll_backend__stack_opt__Anchors_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 4)));
#line 684 "stack_opt.m"
    *ll_backend__stack_opt__Intervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 5)));
#line 686 "stack_opt.m"
    {
#line 686 "stack_opt.m"
      MR_Word base;
#line 686 "stack_opt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 686 "stack_opt.m"
      *ll_backend__stack_opt__MatchPathInfo_6 = base;
#line 686 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__FirstSegment_10));
#line 686 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__OtherSegments_11));
#line 686 "stack_opt.m"
    }
#line 682 "stack_opt.m"
  }
#line 679 "stack_opt.m"
}

#line 622 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__add_anchor_inserts_10_p_0(
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_11,
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVarsViaCellVar_12,
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__InsertIntervals_13,
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_14,
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27,
#line 622 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_28,
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29,
#line 622 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30,
#line 622 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31,
#line 622 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32)
#line 622 "stack_opt.m"
{
#line 628 "stack_opt.m"
  {
#line 628 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 628 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_58_58 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 628 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_60_60;
#line 628 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorFollow_18;
#line 628 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorIntervals_20;
#line 628 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorInsertIntervals_21;
#line 628 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 9)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 0)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 1)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 2)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 3)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 4)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 5)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 6)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 7)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 8)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 10)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 11)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 12)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 13)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 14)));
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 15)));
#line 629 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_AnchorFollow_18;
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;

#line 629 "stack_opt.m"
    {
#line 629 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, ll_backend__stack_opt__V_33_33, ((MR_Box) (ll_backend__stack_opt__Anchor_14)), &ll_backend__stack_opt__conv0_AnchorFollow_18);
    }
#line 629 "stack_opt.m"
    ll_backend__stack_opt__AnchorFollow_18 = ((MR_Word) ll_backend__stack_opt__conv0_AnchorFollow_18);
#line 630 "stack_opt.m"
    ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AnchorFollow_18, (MR_Integer) 0)));
#line 630 "stack_opt.m"
    ll_backend__stack_opt__AnchorIntervals_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AnchorFollow_18, (MR_Integer) 1)));
#line 10976 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_60_60 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 631 "stack_opt.m"
    {
#line 631 "stack_opt.m"
      mercury__set__intersect_3_p_0(ll_backend__stack_opt__TypeCtorInfo_60_60, ll_backend__stack_opt__AnchorIntervals_20, ll_backend__stack_opt__InsertIntervals_13, &ll_backend__stack_opt__AnchorInsertIntervals_21);
    }
#line 633 "stack_opt.m"
    {
#line 633 "stack_opt.m"
      ll_backend__stack_opt__succeeded = mercury__set__is_non_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_60_60, ll_backend__stack_opt__AnchorInsertIntervals_21);
    }
#line 645 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 634 "stack_opt.m"
      {
#line 634 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Insert_22;
#line 634 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertMap0_23;
#line 634 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertMap_26;
#line 635 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_53_53;
#line 635 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_54_54;
#line 639 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Inserts0_24;
#line 636 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv1_Inserts0_24;
#line 643 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_55_55;
#line 643 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_57_57;
#line 643 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_56_56;

#line 634 "stack_opt.m"
        {
#line 634 "stack_opt.m"
          ll_backend__stack_opt__Insert_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 634 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Insert_22, 0) = ((MR_Box) (ll_backend__stack_opt__Goal_11));
#line 634 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Insert_22, 1) = ((MR_Box) (ll_backend__stack_opt__ArgVarsViaCellVar_12));
#line 634 "stack_opt.m"
        }
#line 635 "stack_opt.m"
        ll_backend__stack_opt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 0)));
#line 635 "stack_opt.m"
        ll_backend__stack_opt__InsertMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 1)));
#line 635 "stack_opt.m"
        ll_backend__stack_opt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 2)));
#line 636 "stack_opt.m"
        {
#line 636 "stack_opt.m"
          ll_backend__stack_opt__succeeded = mercury__map__search_3_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ll_backend__stack_opt__InsertMap0_23, ((MR_Box) (ll_backend__stack_opt__Anchor_14)), &ll_backend__stack_opt__conv1_Inserts0_24);
        }
#line 636 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 636 "stack_opt.m"
          {
#line 636 "stack_opt.m"
            ll_backend__stack_opt__Inserts0_24 = ((MR_Word) ll_backend__stack_opt__conv1_Inserts0_24);
#line 636 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 636 "stack_opt.m"
          }
#line 639 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 637 "stack_opt.m"
          {
#line 637 "stack_opt.m"
            MR_Word ll_backend__stack_opt__Inserts_25;

#line 637 "stack_opt.m"
            {
#line 637 "stack_opt.m"
              ll_backend__stack_opt__Inserts_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_25, 0) = ((MR_Box) (ll_backend__stack_opt__Insert_22));
#line 637 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_25, 1) = ((MR_Box) (ll_backend__stack_opt__Inserts0_24));
#line 637 "stack_opt.m"
            }
#line 638 "stack_opt.m"
            {
#line 638 "stack_opt.m"
              mercury__map__det_update_4_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ((MR_Box) (ll_backend__stack_opt__Anchor_14)), ((MR_Box) (ll_backend__stack_opt__Inserts_25)), ll_backend__stack_opt__InsertMap0_23, &ll_backend__stack_opt__InsertMap_26);
            }
#line 637 "stack_opt.m"
          }
#line 639 "stack_opt.m"
        else
#line 640 "stack_opt.m"
          {
#line 640 "stack_opt.m"
            MR_Word ll_backend__stack_opt__Inserts_37;

#line 640 "stack_opt.m"
            {
#line 640 "stack_opt.m"
              ll_backend__stack_opt__Inserts_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_37, 0) = ((MR_Box) (ll_backend__stack_opt__Insert_22));
#line 640 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "stack_opt.m"
            }
#line 641 "stack_opt.m"
            {
#line 641 "stack_opt.m"
              mercury__map__det_insert_4_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ((MR_Box) (ll_backend__stack_opt__Anchor_14)), ((MR_Box) (ll_backend__stack_opt__Inserts_37)), ll_backend__stack_opt__InsertMap0_23, &ll_backend__stack_opt__InsertMap_26);
            }
#line 640 "stack_opt.m"
          }
#line 643 "stack_opt.m"
        ll_backend__stack_opt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 0)));
#line 643 "stack_opt.m"
        ll_backend__stack_opt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 1)));
#line 643 "stack_opt.m"
        ll_backend__stack_opt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 2)));
#line 643 "stack_opt.m"
        {
#line 643 "stack_opt.m"
          MR_Word base;
#line 643 "stack_opt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 643 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30 = base;
#line 643 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_55_55));
#line 643 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__InsertMap_26));
#line 643 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__V_57_57));
#line 643 "stack_opt.m"
        }
#line 644 "stack_opt.m"
        {
#line 644 "stack_opt.m"
          mercury__set__insert_3_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, ((MR_Box) (ll_backend__stack_opt__Anchor_14)), ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31, ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32);
        }
#line 634 "stack_opt.m"
      }
#line 645 "stack_opt.m"
    else
#line 646 "stack_opt.m"
      {
#line 646 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32 = ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31;
#line 646 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29;
#line 646 "stack_opt.m"
      }
#line 628 "stack_opt.m"
    *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_28 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27;
#line 628 "stack_opt.m"
  }
#line 622 "stack_opt.m"
}

#line 607 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(
#line 607 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 607 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_11,
#line 607 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 607 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_17,
#line 607 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_18,
#line 607 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_19,
#line 607 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_20,
#line 607 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21,
#line 607 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22)
#line 607 "stack_opt.m"
{
#line 613 "stack_opt.m"
  {
#line 613 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 613 "stack_opt.m"
    MR_Word ll_backend__stack_opt__DeletedVars_16;
#line 613 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_23_23;
#line 613 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_24_24;

#line 614 "stack_opt.m"
    {
#line 614 "stack_opt.m"
      ll_backend__stack_opt__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_23_23, 0) = ((MR_Box) (ll_backend__stack_opt__CellVar_10));
#line 614 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "stack_opt.m"
    }
#line 614 "stack_opt.m"
    {
#line 614 "stack_opt.m"
      backend_libs__interval__record_interval_vars_4_p_0(ll_backend__stack_opt__IntervalId_12, ll_backend__stack_opt__V_23_23, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_17, &ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_24_24);
    }
#line 615 "stack_opt.m"
    {
#line 615 "stack_opt.m"
      backend_libs__interval__delete_interval_vars_5_p_0(ll_backend__stack_opt__IntervalId_12, ll_backend__stack_opt__ViaCellVars_11, &ll_backend__stack_opt__DeletedVars_16, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_24_24, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_18);
    }
#line 616 "stack_opt.m"
    {
#line 616 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__DeletedVars_16);
    }
#line 618 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 617 "stack_opt.m"
      {
#line 617 "stack_opt.m"
        {
#line 617 "stack_opt.m"
          mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (ll_backend__stack_opt__IntervalId_12)), ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21, ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22);
        }
#line 617 "stack_opt.m"
      }
#line 618 "stack_opt.m"
    else
#line 618 "stack_opt.m"
      *ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22 = ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21;
#line 613 "stack_opt.m"
    *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_20 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_19;
#line 613 "stack_opt.m"
  }
#line 607 "stack_opt.m"
}

#line 593 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_2(
#line 593 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 593 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 593 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 593 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 593 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 593 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 593 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 593 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7)
#line 593 "stack_opt.m"
{
#line 593 "stack_opt.m"
  {
#line 593 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 593 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv8_STATE_VARIABLE_IntervalInfo_28;
#line 593 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv7_STATE_VARIABLE_StackOptInfo_30;
#line 593 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv6_STATE_VARIABLE_InsertAnchors_32;

#line 593 "stack_opt.m"
    {
#line 593 "stack_opt.m"
      ll_backend__stack_opt__add_anchor_inserts_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), &ll_backend__stack_opt__conv8_STATE_VARIABLE_IntervalInfo_28, ((MR_Word) ll_backend__stack_opt__wrapper_arg_4), &ll_backend__stack_opt__conv7_STATE_VARIABLE_StackOptInfo_30, ((MR_Word) ll_backend__stack_opt__wrapper_arg_6), &ll_backend__stack_opt__conv6_STATE_VARIABLE_InsertAnchors_32);
    }
#line 593 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv8_STATE_VARIABLE_IntervalInfo_28));
#line 593 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_5 = ((MR_Box) (ll_backend__stack_opt__conv7_STATE_VARIABLE_StackOptInfo_30));
#line 593 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_7 = ((MR_Box) (ll_backend__stack_opt__conv6_STATE_VARIABLE_InsertAnchors_32));
#line 593 "stack_opt.m"
  }
#line 593 "stack_opt.m"
}

#line 590 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_1(
#line 590 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 590 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 590 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 590 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 590 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 590 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 590 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 590 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7)
#line 590 "stack_opt.m"
{
#line 590 "stack_opt.m"
  {
#line 590 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 590 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv2_STATE_VARIABLE_IntervalInfo_18;
#line 590 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_STATE_VARIABLE_StackOptInfo_20;
#line 590 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_STATE_VARIABLE_InsertIntervals_22;

#line 590 "stack_opt.m"
    {
#line 590 "stack_opt.m"
      ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), &ll_backend__stack_opt__conv2_STATE_VARIABLE_IntervalInfo_18, ((MR_Word) ll_backend__stack_opt__wrapper_arg_4), &ll_backend__stack_opt__conv1_STATE_VARIABLE_StackOptInfo_20, ((MR_Word) ll_backend__stack_opt__wrapper_arg_6), &ll_backend__stack_opt__conv0_STATE_VARIABLE_InsertIntervals_22);
    }
#line 590 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv2_STATE_VARIABLE_IntervalInfo_18));
#line 590 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_5 = ((MR_Box) (ll_backend__stack_opt__conv1_STATE_VARIABLE_StackOptInfo_20));
#line 590 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_7 = ((MR_Box) (ll_backend__stack_opt__conv0_STATE_VARIABLE_InsertIntervals_22));
#line 590 "stack_opt.m"
  }
#line 590 "stack_opt.m"
}

#line 578 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0(
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_12,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_13,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVars_14,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_15,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_16,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialAnchors_17,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialIntervals_18,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31,
#line 578 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32,
#line 578 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33,
#line 578 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34)
#line 578 "stack_opt.m"
{
#line 587 "stack_opt.m"
  {
#line 587 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 585 "stack_opt.m"
    {
#line 585 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__ViaCellVars_15);
    }
#line 587 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 586 "stack_opt.m"
      {
#line 586 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33;
#line 586 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31;
#line 586 "stack_opt.m"
      }
#line 587 "stack_opt.m"
    else
#line 588 "stack_opt.m"
      {
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_50_50 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_51_51;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_59_59;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_60_60;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PotentialIntervalList_21;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PotentialAnchorList_22;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertIntervals_23;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertAnchors_24;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__GoalInfo_26;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__GoalId_27;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingResult_28;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingResults0_29;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingResults_30;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_35_35;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_36_36;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_37_37;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_38_38;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_39_39;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_42_42;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_44_44;
#line 588 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_45_45;
#line 590 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv5_STATE_VARIABLE_IntervalInfo_36_36;
#line 590 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv4_STATE_VARIABLE_StackOptInfo_37_37;
#line 590 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv3_InsertIntervals_23;
#line 593 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv11_STATE_VARIABLE_IntervalInfo_32;
#line 593 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv10_STATE_VARIABLE_StackOptInfo_41_41;
#line 593 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv9_InsertAnchors_24;
#line 596 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_25_25;

#line 588 "stack_opt.m"
        {
#line 588 "stack_opt.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__stack_opt__TypeCtorInfo_50_50, ll_backend__stack_opt__PotentialIntervals_18, &ll_backend__stack_opt__PotentialIntervalList_21);
        }
#line 11430 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_51_51 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 589 "stack_opt.m"
        {
#line 589 "stack_opt.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__stack_opt__TypeCtorInfo_51_51, ll_backend__stack_opt__PotentialAnchors_17, &ll_backend__stack_opt__PotentialAnchorList_22);
        }
#line 590 "stack_opt.m"
        {
#line 590 "stack_opt.m"
          ll_backend__stack_opt__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 590 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_4[0]));
#line 590 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 1) = ((MR_Box) (ll_backend__stack_opt__record_matching_result_11_p_0_1));
#line 590 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 590 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 3) = ((MR_Box) (ll_backend__stack_opt__CellVar_12));
#line 590 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 4) = ((MR_Box) (ll_backend__stack_opt__ViaCellVars_15));
#line 590 "stack_opt.m"
        }
#line 592 "stack_opt.m"
        {
#line 592 "stack_opt.m"
          ll_backend__stack_opt__V_38_38 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_50_50);
        }
#line 11458 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_59_59 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0;
#line 11460 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_60_60 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0;
#line 590 "stack_opt.m"
        {
#line 590 "stack_opt.m"
          mercury__list__foldl3_8_p_0(ll_backend__stack_opt__TypeCtorInfo_50_50, ll_backend__stack_opt__TypeCtorInfo_59_59, ll_backend__stack_opt__TypeCtorInfo_60_60, (MR_Word) &ll_backend__stack_opt_scalar_common_1[9], ll_backend__stack_opt__V_35_35, ll_backend__stack_opt__PotentialIntervalList_21, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31)), &ll_backend__stack_opt__conv5_STATE_VARIABLE_IntervalInfo_36_36, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33)), &ll_backend__stack_opt__conv4_STATE_VARIABLE_StackOptInfo_37_37, ((MR_Box) (ll_backend__stack_opt__V_38_38)), &ll_backend__stack_opt__conv3_InsertIntervals_23);
        }
#line 590 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_36_36 = ((MR_Word) ll_backend__stack_opt__conv5_STATE_VARIABLE_IntervalInfo_36_36);
#line 590 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_37_37 = ((MR_Word) ll_backend__stack_opt__conv4_STATE_VARIABLE_StackOptInfo_37_37);
#line 590 "stack_opt.m"
        ll_backend__stack_opt__InsertIntervals_23 = ((MR_Word) ll_backend__stack_opt__conv3_InsertIntervals_23);
#line 593 "stack_opt.m"
        {
#line 593 "stack_opt.m"
          ll_backend__stack_opt__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 593 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_5[0]));
#line 593 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 1) = ((MR_Box) (ll_backend__stack_opt__record_matching_result_11_p_0_2));
#line 593 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 593 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 3) = ((MR_Box) (ll_backend__stack_opt__Goal_16));
#line 593 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 4) = ((MR_Box) (ll_backend__stack_opt__ViaCellVars_15));
#line 593 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 5) = ((MR_Box) (ll_backend__stack_opt__InsertIntervals_23));
#line 593 "stack_opt.m"
        }
#line 595 "stack_opt.m"
        {
#line 595 "stack_opt.m"
          ll_backend__stack_opt__V_42_42 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_51_51);
        }
#line 593 "stack_opt.m"
        {
#line 593 "stack_opt.m"
          mercury__list__foldl3_8_p_0(ll_backend__stack_opt__TypeCtorInfo_51_51, ll_backend__stack_opt__TypeCtorInfo_59_59, ll_backend__stack_opt__TypeCtorInfo_60_60, (MR_Word) &ll_backend__stack_opt_scalar_common_1[10], ll_backend__stack_opt__V_39_39, ll_backend__stack_opt__PotentialAnchorList_22, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_36_36)), &ll_backend__stack_opt__conv11_STATE_VARIABLE_IntervalInfo_32, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_37_37)), &ll_backend__stack_opt__conv10_STATE_VARIABLE_StackOptInfo_41_41, ((MR_Box) (ll_backend__stack_opt__V_42_42)), &ll_backend__stack_opt__conv9_InsertAnchors_24);
        }
#line 593 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32 = ((MR_Word) ll_backend__stack_opt__conv11_STATE_VARIABLE_IntervalInfo_32);
#line 593 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41 = ((MR_Word) ll_backend__stack_opt__conv10_STATE_VARIABLE_StackOptInfo_41_41);
#line 593 "stack_opt.m"
        ll_backend__stack_opt__InsertAnchors_24 = ((MR_Word) ll_backend__stack_opt__conv9_InsertAnchors_24);
#line 596 "stack_opt.m"
        ll_backend__stack_opt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_16, (MR_Integer) 0)));
#line 596 "stack_opt.m"
        ll_backend__stack_opt__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_16, (MR_Integer) 1)));
#line 597 "stack_opt.m"
        {
#line 597 "stack_opt.m"
          ll_backend__stack_opt__GoalId_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__stack_opt__GoalInfo_26);
        }
#line 598 "stack_opt.m"
        {
#line 598 "stack_opt.m"
          ll_backend__stack_opt__MatchingResult_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 0) = ((MR_Box) (ll_backend__stack_opt__CellVar_12));
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 1) = ((MR_Box) (ll_backend__stack_opt__ConsId_13));
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 2) = ((MR_Box) (ll_backend__stack_opt__ArgVars_14));
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 3) = ((MR_Box) (ll_backend__stack_opt__ViaCellVars_15));
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 4) = ((MR_Box) (ll_backend__stack_opt__GoalId_27));
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 5) = ((MR_Box) (ll_backend__stack_opt__PotentialIntervals_18));
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 6) = ((MR_Box) (ll_backend__stack_opt__InsertIntervals_23));
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 7) = ((MR_Box) (ll_backend__stack_opt__PotentialAnchors_17));
#line 598 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 8) = ((MR_Box) (ll_backend__stack_opt__InsertAnchors_24));
#line 598 "stack_opt.m"
        }
#line 602 "stack_opt.m"
        ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 0)));
#line 602 "stack_opt.m"
        ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 1)));
#line 602 "stack_opt.m"
        ll_backend__stack_opt__MatchingResults0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 2)));
#line 603 "stack_opt.m"
        {
#line 603 "stack_opt.m"
          ll_backend__stack_opt__MatchingResults_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "stack_opt.m"
          MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MatchingResults_30, 0) = ((MR_Box) (ll_backend__stack_opt__MatchingResult_28));
#line 603 "stack_opt.m"
          MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MatchingResults_30, 1) = ((MR_Box) (ll_backend__stack_opt__MatchingResults0_29));
#line 603 "stack_opt.m"
        }
#line 604 "stack_opt.m"
        {
#line 604 "stack_opt.m"
          MR_Word base;
#line 604 "stack_opt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 604 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34 = base;
#line 604 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_44_44));
#line 604 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__V_45_45));
#line 604 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__MatchingResults_30));
#line 604 "stack_opt.m"
        }
#line 588 "stack_opt.m"
      }
#line 587 "stack_opt.m"
  }
#line 578 "stack_opt.m"
}

#line 560 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_matching_for_path_8_p_0(
#line 560 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 560 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_10,
#line 560 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 560 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars_12,
#line 560 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfo_13,
#line 560 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodes_14,
#line 560 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodes_15,
#line 560 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_16)
#line 560 "stack_opt.m"
{
#line 570 "stack_opt.m"
  {
#line 570 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 566 "stack_opt.m"
    {
#line 566 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__CandidateArgVars_12);
    }
#line 570 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 567 "stack_opt.m"
      {
#line 567 "stack_opt.m"
        {
#line 567 "stack_opt.m"
          *ll_backend__stack_opt__BenefitNodes_14 = mercury__set__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0);
        }
#line 568 "stack_opt.m"
        {
#line 568 "stack_opt.m"
          *ll_backend__stack_opt__CostNodes_15 = mercury__set__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0);
        }
#line 569 "stack_opt.m"
        {
#line 569 "stack_opt.m"
          *ll_backend__stack_opt__ViaCellVars_16 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 567 "stack_opt.m"
      }
#line 570 "stack_opt.m"
    else
#line 571 "stack_opt.m"
      {
#line 571 "stack_opt.m"
        MR_Word ll_backend__stack_opt__FirstSegment_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PathInfo_13, (MR_Integer) 0)));
#line 571 "stack_opt.m"
        MR_Word ll_backend__stack_opt__LaterSegments_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PathInfo_13, (MR_Integer) 1)));
#line 571 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 0)));
#line 572 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 1)));
#line 572 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 572 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 3)));

#line 573 "stack_opt.m"
        {
#line 573 "stack_opt.m"
          backend_libs__matching__find_via_cell_vars_9_p_0(ll_backend__stack_opt__CellVar_9, ll_backend__stack_opt__CandidateArgVars_12, ll_backend__stack_opt__CellVarFlushedLater_10, ll_backend__stack_opt__FirstSegment_17, ll_backend__stack_opt__LaterSegments_18, ll_backend__stack_opt__MatchingParams_19, ll_backend__stack_opt__BenefitNodes_14, ll_backend__stack_opt__CostNodes_15, ll_backend__stack_opt__ViaCellVars_16);
#line 573 "stack_opt.m"
          return;
        }
#line 571 "stack_opt.m"
      }
#line 570 "stack_opt.m"
  }
#line 560 "stack_opt.m"
}

#line 481 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_1(
#line 481 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 481 "stack_opt.m"
{
#line 481 "stack_opt.m"
  {
#line 481 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 481 "stack_opt.m"
    MR_builtin_longjmp((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0, 1);
#line 481 "stack_opt.m"
  }
#line 481 "stack_opt.m"
}

#line 481 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_3(
#line 481 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 481 "stack_opt.m"
{
#line 481 "stack_opt.m"
  {
#line 481 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 481 "stack_opt.m"
    (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47 = ((MR_Word) (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_PathInfo_47);
#line 481 "stack_opt.m"
    {
#line 481 "stack_opt.m"
      ll_backend__stack_opt__use_cell_8_p_0_2(ll_backend__stack_opt__env_ptr);
#line 481 "stack_opt.m"
      return;
    }
#line 481 "stack_opt.m"
  }
#line 481 "stack_opt.m"
}

#line 483 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_5(
#line 483 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 483 "stack_opt.m"
{
#line 483 "stack_opt.m"
  {
#line 483 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 483 "stack_opt.m"
    (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_50 = ((MR_Word) (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv2_Segment_50);
#line 483 "stack_opt.m"
    {
#line 483 "stack_opt.m"
      ll_backend__stack_opt__use_cell_8_p_0_4(ll_backend__stack_opt__env_ptr);
#line 483 "stack_opt.m"
      return;
    }
#line 483 "stack_opt.m"
  }
#line 483 "stack_opt.m"
}

#line 481 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_4(
#line 481 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 481 "stack_opt.m"
{
#line 481 "stack_opt.m"
  {
#line 481 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 484 "stack_opt.m"
    {
#line 484 "stack_opt.m"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_50, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9);
    }
#line 484 "stack_opt.m"
    if ((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 484 "stack_opt.m"
      {
#line 484 "stack_opt.m"
        ll_backend__stack_opt__use_cell_8_p_0_1(ll_backend__stack_opt__env_ptr);
#line 484 "stack_opt.m"
        return;
      }
#line 481 "stack_opt.m"
  }
#line 481 "stack_opt.m"
}

#line 481 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_2(
#line 481 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 481 "stack_opt.m"
{
#line 481 "stack_opt.m"
  {
#line 481 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 481 "stack_opt.m"
    {
#line 482 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47, (MR_Integer) 0)));

#line 482 "stack_opt.m"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47, (MR_Integer) 1)));
#line 11787 "ll_backend.stack_opt.c"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_120_120 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 483 "stack_opt.m"
      {
#line 483 "stack_opt.m"
        mercury__list__member_2_p_1((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_120_120, &(ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv2_Segment_50, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_49, ll_backend__stack_opt__use_cell_8_p_0_5, ll_backend__stack_opt__env_ptr);
      }
#line 481 "stack_opt.m"
    }
#line 481 "stack_opt.m"
  }
#line 481 "stack_opt.m"
}

#line 481 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_6(
#line 481 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 481 "stack_opt.m"
{
#line 481 "stack_opt.m"
  {
#line 481 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 481 "stack_opt.m"
    if (MR_builtin_setjmp((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0) == 0)
#line 481 "stack_opt.m"
      {
#line 481 "stack_opt.m"
        {
#line 481 "stack_opt.m"
          {
#line 481 "stack_opt.m"
            mercury__list__member_2_p_1((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0, &(ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_PathInfo_47, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38, ll_backend__stack_opt__use_cell_8_p_0_3, ll_backend__stack_opt__env_ptr);
          }
#line 481 "stack_opt.m"
        }
#line 481 "stack_opt.m"
        (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_FALSE;
#line 481 "stack_opt.m"
      }
#line 481 "stack_opt.m"
    else
#line 481 "stack_opt.m"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
#line 481 "stack_opt.m"
  }
#line 481 "stack_opt.m"
}

#line 409 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0(
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FieldVarList_10,
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_11,
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_12,
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51,
#line 409 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52,
#line 409 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53,
#line 409 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54)
#line 409 "stack_opt.m"
{
#line 409 "stack_opt.m"
  {
#line 409 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s ll_backend__stack_opt__env;

#line 409 "stack_opt.m"
    (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9 = ll_backend__stack_opt__CellVar_9;
#line 413 "stack_opt.m"
    {
#line 413 "stack_opt.m"
      MR_Word ll_backend__stack_opt__FlushedLater_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 1)));
#line 413 "stack_opt.m"
      MR_Word ll_backend__stack_opt__StackOptParams_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, (MR_Integer) 0)));
#line 413 "stack_opt.m"
      MR_Word ll_backend__stack_opt__NonCandidateVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 3)));
#line 413 "stack_opt.m"
      MR_Word ll_backend__stack_opt__FieldVars_18;
#line 413 "stack_opt.m"
      MR_Word ll_backend__stack_opt__FlushedLaterFieldVars_19;
#line 413 "stack_opt.m"
      MR_Word ll_backend__stack_opt__CandidateArgVars0_20;
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 0)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 2)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 3)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 4)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 5)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 6)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 7)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 8)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 9)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 10)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 11)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 12)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 13)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 14)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 15)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, (MR_Integer) 1)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, (MR_Integer) 2)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 0)));
#line 416 "stack_opt.m"
      MR_Integer ll_backend__stack_opt__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 1)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_81_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 11926 "ll_backend.stack_opt.c"
      (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 417 "stack_opt.m"
      {
#line 417 "stack_opt.m"
        ll_backend__stack_opt__FieldVars_18 = parse_tree__set_of_var__list_to_set_1_f_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FieldVarList_10);
      }
#line 418 "stack_opt.m"
      {
#line 418 "stack_opt.m"
        parse_tree__set_of_var__intersect_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FieldVars_18, ll_backend__stack_opt__FlushedLater_15, &ll_backend__stack_opt__FlushedLaterFieldVars_19);
      }
#line 419 "stack_opt.m"
      {
#line 419 "stack_opt.m"
        parse_tree__set_of_var__difference_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FlushedLaterFieldVars_19, ll_backend__stack_opt__NonCandidateVars_17, &ll_backend__stack_opt__CandidateArgVars0_20);
      }
#line 422 "stack_opt.m"
      {
#line 422 "stack_opt.m"
        (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__CandidateArgVars0_20);
      }
#line 425 "stack_opt.m"
      if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 424 "stack_opt.m"
        {
#line 424 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53;
#line 424 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51;
#line 424 "stack_opt.m"
        }
#line 425 "stack_opt.m"
      else
#line 500 "stack_opt.m"
        {
#line 500 "stack_opt.m"
          MR_Word ll_backend__stack_opt__FreeOfCost_28;
#line 426 "stack_opt.m"
          MR_Word ll_backend__stack_opt__IntParams_24;
#line 426 "stack_opt.m"
          MR_Word ll_backend__stack_opt__VarTypes_25;
#line 426 "stack_opt.m"
          MR_Word ll_backend__stack_opt__Type_26;
#line 426 "stack_opt.m"
          MR_Word ll_backend__stack_opt___Name_21;
#line 426 "stack_opt.m"
          MR_Integer ll_backend__stack_opt___Arity_22;
#line 426 "stack_opt.m"
          MR_Word ll_backend__stack_opt___TypeCtor_23;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_84_84;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_85_85;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_86_86;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_87_87;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_88_88;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_89_89;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_90_90;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_91_91;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_92_92;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_93_93;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_94_94;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_95_95;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_96_96;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_97_97;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_98_98;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_99_99;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_100_100;
#line 431 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_27_27;

#line 426 "stack_opt.m"
          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__stack_opt__ConsId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 426 "stack_opt.m"
          if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 426 "stack_opt.m"
            {
#line 426 "stack_opt.m"
              ll_backend__stack_opt___Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 1)));
#line 426 "stack_opt.m"
              ll_backend__stack_opt___Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 2)));
#line 426 "stack_opt.m"
              ll_backend__stack_opt___TypeCtor_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 3)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__IntParams_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 0)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 1)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 2)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 3)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 4)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 5)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 6)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 7)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 8)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 9)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 10)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 11)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 12)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 13)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 14)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 15)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 0)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__VarTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 1)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 2)));
#line 429 "stack_opt.m"
              {
#line 429 "stack_opt.m"
                parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__stack_opt__VarTypes_25, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, &ll_backend__stack_opt__Type_26);
              }
#line 431 "stack_opt.m"
              {
#line 431 "stack_opt.m"
                (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(ll_backend__stack_opt__Type_26, &ll_backend__stack_opt__V_27_27);
              }
#line 434 "stack_opt.m"
              if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 433 "stack_opt.m"
                {
#line 433 "stack_opt.m"
                  ll_backend__stack_opt__FreeOfCost_28 = (MR_Integer) 0;
#line 433 "stack_opt.m"
                  (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
#line 433 "stack_opt.m"
                }
#line 434 "stack_opt.m"
              else
#line 448 "stack_opt.m"
                {
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeCtorInfo_117_117;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeCtorInfo_118_118;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeCtor_29;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ModuleInfo_30;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeTable_31;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeDefn_32;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeBody_33;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ConsTable_34;
#line 448 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ConsTag_35;
#line 436 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_101_101;
#line 436 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_102_102;
#line 440 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_103_103;
#line 440 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_104_104;
#line 440 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_105_105;
#line 440 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_106_106;
#line 440 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_107_107;
#line 440 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_108_108;
#line 440 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_109_109;
#line 440 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_110_110;
#line 442 "stack_opt.m"
                  MR_Box ll_backend__stack_opt__conv0_ConsTag_35;

#line 435 "stack_opt.m"
                  {
#line 435 "stack_opt.m"
                    (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__stack_opt__Type_26, &ll_backend__stack_opt__TypeCtor_29);
                  }
#line 448 "stack_opt.m"
                  if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 448 "stack_opt.m"
                    {
#line 436 "stack_opt.m"
                      ll_backend__stack_opt__ModuleInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 0)));
#line 436 "stack_opt.m"
                      ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 1)));
#line 436 "stack_opt.m"
                      ll_backend__stack_opt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 2)));
#line 437 "stack_opt.m"
                      {
#line 437 "stack_opt.m"
                        hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__stack_opt__ModuleInfo_30, &ll_backend__stack_opt__TypeTable_31);
                      }
#line 438 "stack_opt.m"
                      {
#line 438 "stack_opt.m"
                        hlds__hlds_data__lookup_type_ctor_defn_3_p_0(ll_backend__stack_opt__TypeTable_31, ll_backend__stack_opt__TypeCtor_29, &ll_backend__stack_opt__TypeDefn_32);
                      }
#line 439 "stack_opt.m"
                      {
#line 439 "stack_opt.m"
                        hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__stack_opt__TypeDefn_32, &ll_backend__stack_opt__TypeBody_33);
                      }
#line 440 "stack_opt.m"
                      (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__TypeBody_33)) == (MR_mktag((MR_Integer) 1)));
#line 440 "stack_opt.m"
                      if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 440 "stack_opt.m"
                        {
#line 440 "stack_opt.m"
                          ll_backend__stack_opt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 0)));
#line 440 "stack_opt.m"
                          ll_backend__stack_opt__ConsTable_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 1)));
#line 440 "stack_opt.m"
                          ll_backend__stack_opt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 2)));
#line 440 "stack_opt.m"
                          ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 3)));
#line 440 "stack_opt.m"
                          ll_backend__stack_opt__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 4)));
#line 440 "stack_opt.m"
                          ll_backend__stack_opt__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 5)));
#line 440 "stack_opt.m"
                          ll_backend__stack_opt__V_108_108 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 440 "stack_opt.m"
                          ll_backend__stack_opt__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 440 "stack_opt.m"
                          ll_backend__stack_opt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 7)));
#line 12182 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 12184 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__TypeCtorInfo_118_118 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 442 "stack_opt.m"
                          {
#line 442 "stack_opt.m"
                            mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_117_117, ll_backend__stack_opt__TypeCtorInfo_118_118, ll_backend__stack_opt__ConsTable_34, ((MR_Box) (ll_backend__stack_opt__ConsId_11)), &ll_backend__stack_opt__conv0_ConsTag_35);
                          }
#line 442 "stack_opt.m"
                          ll_backend__stack_opt__ConsTag_35 = ((MR_Word) ll_backend__stack_opt__conv0_ConsTag_35);
#line 443 "stack_opt.m"
                          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = (ll_backend__stack_opt__ConsTag_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 445 "stack_opt.m"
                          if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 444 "stack_opt.m"
                            ll_backend__stack_opt__FreeOfCost_28 = (MR_Integer) 1;
#line 445 "stack_opt.m"
                          else
#line 446 "stack_opt.m"
                            ll_backend__stack_opt__FreeOfCost_28 = (MR_Integer) 0;
#line 445 "stack_opt.m"
                          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
#line 440 "stack_opt.m"
                        }
#line 448 "stack_opt.m"
                    }
#line 448 "stack_opt.m"
                }
#line 426 "stack_opt.m"
            }
#line 500 "stack_opt.m"
          if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 452 "stack_opt.m"
            {
#line 452 "stack_opt.m"
              MR_Word ll_backend__stack_opt__RelevantVars_36;
#line 452 "stack_opt.m"
              MR_Word ll_backend__stack_opt__MatchInfo_37;
#line 452 "stack_opt.m"
              MR_Word ll_backend__stack_opt__RelevantAfterVars_39;
#line 452 "stack_opt.m"
              MR_Word ll_backend__stack_opt__AfterModelNon_40;
#line 452 "stack_opt.m"
              MR_Word ll_backend__stack_opt__InsertAnchors_41;
#line 452 "stack_opt.m"
              MR_Word ll_backend__stack_opt__InsertIntervals_42;

#line 452 "stack_opt.m"
              {
#line 452 "stack_opt.m"
                parse_tree__set_of_var__insert_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__FieldVars_18, &ll_backend__stack_opt__RelevantVars_36);
              }
#line 453 "stack_opt.m"
              {
#line 453 "stack_opt.m"
                ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(ll_backend__stack_opt__RelevantVars_36, &ll_backend__stack_opt__MatchInfo_37, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53);
              }
#line 455 "stack_opt.m"
              (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 0)));
#line 455 "stack_opt.m"
              ll_backend__stack_opt__RelevantAfterVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 1)));
#line 455 "stack_opt.m"
              ll_backend__stack_opt__AfterModelNon_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 2)));
#line 455 "stack_opt.m"
              ll_backend__stack_opt__InsertAnchors_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 3)));
#line 455 "stack_opt.m"
              ll_backend__stack_opt__InsertIntervals_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 4)));
#line 464 "stack_opt.m"
              if ((ll_backend__stack_opt__FreeOfCost_28 == (MR_Integer) 0))
#line 496 "stack_opt.m"
                if ((ll_backend__stack_opt__AfterModelNon_40 == (MR_Integer) 0))
#line 467 "stack_opt.m"
                  {
#line 467 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__OnStack_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 467 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__CandidateArgVars_45;
#line 467 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__CellVarFlushedLater_46;
#line 467 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__ViaCellVars_59;
#line 468 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 0)));
#line 468 "stack_opt.m"
                    MR_Integer ll_backend__stack_opt__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 1)));
#line 468 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_113_113 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 468 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 468 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 3)));

#line 469 "stack_opt.m"
                    {
#line 469 "stack_opt.m"
                      parse_tree__set_of_var__difference_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__CandidateArgVars0_20, ll_backend__stack_opt__RelevantAfterVars_39, &ll_backend__stack_opt__CandidateArgVars_45);
                    }
#line 478 "stack_opt.m"
                    if ((ll_backend__stack_opt__OnStack_44 == (MR_Integer) 0))
#line 487 "stack_opt.m"
                      {
#line 481 "stack_opt.m"
                        {
#line 481 "stack_opt.m"
                          ll_backend__stack_opt__use_cell_8_p_0_6(&ll_backend__stack_opt__env);
                        }
#line 487 "stack_opt.m"
                        if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 486 "stack_opt.m"
                          ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 1;
#line 487 "stack_opt.m"
                        else
#line 488 "stack_opt.m"
                          ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 0;
#line 487 "stack_opt.m"
                      }
#line 478 "stack_opt.m"
                    else
#line 475 "stack_opt.m"
                      {
#line 473 "stack_opt.m"
                        {
#line 473 "stack_opt.m"
                          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FlushedLater_15, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9);
                        }
#line 475 "stack_opt.m"
                        if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 474 "stack_opt.m"
                          ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 1;
#line 475 "stack_opt.m"
                        else
#line 476 "stack_opt.m"
                          ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 0;
#line 475 "stack_opt.m"
                      }
#line 491 "stack_opt.m"
                    {
#line 491 "stack_opt.m"
                      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__CellVarFlushedLater_46, ll_backend__stack_opt__StackOptParams_16, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38, ll_backend__stack_opt__CandidateArgVars_45, &ll_backend__stack_opt__ViaCellVars_59);
                    }
#line 493 "stack_opt.m"
                    {
#line 493 "stack_opt.m"
                      ll_backend__stack_opt__record_matching_result_11_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__ConsId_11, ll_backend__stack_opt__FieldVarList_10, ll_backend__stack_opt__ViaCellVars_59, ll_backend__stack_opt__Goal_12, ll_backend__stack_opt__InsertAnchors_41, ll_backend__stack_opt__InsertIntervals_42, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54);
#line 493 "stack_opt.m"
                      return;
                    }
#line 467 "stack_opt.m"
                  }
#line 496 "stack_opt.m"
                else
#line 497 "stack_opt.m"
                  {
#line 497 "stack_opt.m"
                    *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51;
#line 497 "stack_opt.m"
                    *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53;
#line 497 "stack_opt.m"
                  }
#line 464 "stack_opt.m"
              else
#line 458 "stack_opt.m"
                {
#line 458 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ViaCellVars_43;

#line 459 "stack_opt.m"
                  {
#line 459 "stack_opt.m"
                    parse_tree__set_of_var__difference_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__CandidateArgVars0_20, ll_backend__stack_opt__RelevantAfterVars_39, &ll_backend__stack_opt__ViaCellVars_43);
                  }
#line 461 "stack_opt.m"
                  {
#line 461 "stack_opt.m"
                    ll_backend__stack_opt__record_matching_result_11_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__ConsId_11, ll_backend__stack_opt__FieldVarList_10, ll_backend__stack_opt__ViaCellVars_43, ll_backend__stack_opt__Goal_12, ll_backend__stack_opt__InsertAnchors_41, ll_backend__stack_opt__InsertIntervals_42, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54);
#line 461 "stack_opt.m"
                    return;
                  }
#line 458 "stack_opt.m"
                }
#line 452 "stack_opt.m"
            }
#line 500 "stack_opt.m"
          else
#line 501 "stack_opt.m"
            {
#line 501 "stack_opt.m"
              *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53;
#line 501 "stack_opt.m"
              *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51;
#line 501 "stack_opt.m"
            }
#line 500 "stack_opt.m"
        }
#line 413 "stack_opt.m"
    }
#line 409 "stack_opt.m"
  }
#line 409 "stack_opt.m"
}

#line 239 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__optimize_live_sets_7_p_0(
#line 239 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_8,
#line 239 "stack_opt.m"
  MR_Word ll_backend__stack_opt__OptAlloc_9,
#line 239 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60,
#line 239 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61,
#line 239 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Changed_11,
#line 239 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_12,
#line 239 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_13)
#line 239 "stack_opt.m"
{
#line 243 "stack_opt.m"
  {
#line 243 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_106_106;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_108_108;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_109_109;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_110_110;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_113_113;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_114_114;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal0_14;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarTypes0_15;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarSet0_16;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlot_17;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InputArgs_18;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OutputArgs_19;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__UnusedArgs_20;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVars_21;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Globals_22;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CandHeadvars_23;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__NonCandidateVars_24;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Counter0_25;
#line 243 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CurInterval_26;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Counter1_27;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CurIntervalId_28;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__EndMap0_29;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertMap0_30;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StartMap0_31;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__SuccMap0_32;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarsMap0_33;
#line 243 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CellVarStoreCost_34;
#line 243 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CellVarLoadCost_35;
#line 243 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__FieldVarStoreCost_36;
#line 243 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__FieldVarLoadCost_37;
#line 243 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__OpRatio_38;
#line 243 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__NodeRatio_39;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InclAllCand_40;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__MatchingParams_41;
#line 243 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__AllPathNodeRatio_42;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FixpointLoop_43;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FullPath_44;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OnStack_45;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptNoReturnCalls_46;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntParams_47;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalInfo0_48;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptParams_49;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptInfo0_50;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalInfo_51;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptInfo_52;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertMap_54;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_62_62;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_63_63;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_64_64;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_71_71;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_84_84;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_85_85;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_86_86;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_87_87;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_88_88;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_89_89;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_90_90;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_91_91;
#line 243 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_92_92;
#line 307 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_StackOptInfo_52;
#line 317 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_104_104;
#line 317 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_105_105;

#line 244 "stack_opt.m"
    {
#line 244 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__Goal0_14);
    }
#line 245 "stack_opt.m"
    {
#line 245 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__VarTypes0_15);
    }
#line 246 "stack_opt.m"
    {
#line 246 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__VarSet0_16);
    }
#line 247 "stack_opt.m"
    ll_backend__stack_opt__ParConjOwnSlot_17 = (MR_Word) ll_backend__stack_opt__OptAlloc_9;
#line 248 "stack_opt.m"
    {
#line 248 "stack_opt.m"
      hlds__arg_info__partition_proc_args_5_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, ll_backend__stack_opt__ModuleInfo_8, &ll_backend__stack_opt__InputArgs_18, &ll_backend__stack_opt__OutputArgs_19, &ll_backend__stack_opt__UnusedArgs_20);
    }
#line 12554 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_106_106 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 250 "stack_opt.m"
    {
#line 250 "stack_opt.m"
      ll_backend__stack_opt__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_64_64, 0) = ((MR_Box) (ll_backend__stack_opt__UnusedArgs_20));
#line 250 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "stack_opt.m"
    }
#line 250 "stack_opt.m"
    {
#line 250 "stack_opt.m"
      ll_backend__stack_opt__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_63_63, 0) = ((MR_Box) (ll_backend__stack_opt__OutputArgs_19));
#line 250 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_63_63, 1) = ((MR_Box) (ll_backend__stack_opt__V_64_64));
#line 250 "stack_opt.m"
    }
#line 250 "stack_opt.m"
    {
#line 250 "stack_opt.m"
      ll_backend__stack_opt__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_62_62, 0) = ((MR_Box) (ll_backend__stack_opt__InputArgs_18));
#line 250 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_62_62, 1) = ((MR_Box) (ll_backend__stack_opt__V_63_63));
#line 250 "stack_opt.m"
    }
#line 250 "stack_opt.m"
    {
#line 250 "stack_opt.m"
      ll_backend__stack_opt__HeadVars_21 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeInfo_106_106, ll_backend__stack_opt__V_62_62);
    }
#line 251 "stack_opt.m"
    {
#line 251 "stack_opt.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_opt__ModuleInfo_8, &ll_backend__stack_opt__Globals_22);
    }
#line 252 "stack_opt.m"
    {
#line 252 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 376, &ll_backend__stack_opt__CandHeadvars_23);
    }
#line 258 "stack_opt.m"
    if ((ll_backend__stack_opt__CandHeadvars_23 == (MR_Integer) 0))
#line 255 "stack_opt.m"
      {
#line 255 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 255 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_67_67;

#line 256 "stack_opt.m"
        {
#line 256 "stack_opt.m"
          ll_backend__stack_opt__V_67_67 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_107_107, ll_backend__stack_opt__HeadVars_21);
        }
#line 256 "stack_opt.m"
        {
#line 256 "stack_opt.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__stack_opt__TypeCtorInfo_107_107, ll_backend__stack_opt__V_67_67, ll_backend__stack_opt__ParConjOwnSlot_17, &ll_backend__stack_opt__NonCandidateVars_24);
        }
#line 255 "stack_opt.m"
      }
#line 258 "stack_opt.m"
    else
#line 260 "stack_opt.m"
      ll_backend__stack_opt__NonCandidateVars_24 = ll_backend__stack_opt__ParConjOwnSlot_17;
#line 262 "stack_opt.m"
    {
#line 262 "stack_opt.m"
      ll_backend__stack_opt__Counter0_25 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 263 "stack_opt.m"
    {
#line 263 "stack_opt.m"
      mercury__counter__allocate_3_p_0(&ll_backend__stack_opt__CurInterval_26, ll_backend__stack_opt__Counter0_25, &ll_backend__stack_opt__Counter1_27);
    }
#line 264 "stack_opt.m"
    ll_backend__stack_opt__CurIntervalId_28 = (MR_Word) ll_backend__stack_opt__CurInterval_26;
#line 12638 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 12640 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 265 "stack_opt.m"
    {
#line 265 "stack_opt.m"
      ll_backend__stack_opt__EndMap0_29 = mercury__map__singleton_2_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__TypeCtorInfo_109_109, ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
    }
#line 12647 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_110_110 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[2];
#line 266 "stack_opt.m"
    {
#line 266 "stack_opt.m"
      mercury__map__init_1_p_0(ll_backend__stack_opt__TypeCtorInfo_109_109, ll_backend__stack_opt__TypeInfo_110_110, &ll_backend__stack_opt__InsertMap0_30);
    }
#line 267 "stack_opt.m"
    {
#line 267 "stack_opt.m"
      mercury__map__init_1_p_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__TypeCtorInfo_109_109, &ll_backend__stack_opt__StartMap0_31);
    }
#line 268 "stack_opt.m"
    {
#line 268 "stack_opt.m"
      ll_backend__stack_opt__SuccMap0_32 = mercury__map__singleton_2_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, (MR_Word) &ll_backend__stack_opt_scalar_common_1[3], ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 12664 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 269 "stack_opt.m"
    {
#line 269 "stack_opt.m"
      ll_backend__stack_opt__V_71_71 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113, ll_backend__stack_opt__OutputArgs_19);
    }
#line 269 "stack_opt.m"
    {
#line 269 "stack_opt.m"
      ll_backend__stack_opt__VarsMap0_33 = mercury__map__singleton_2_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, (MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)), ((MR_Box) (ll_backend__stack_opt__V_71_71)));
    }
#line 270 "stack_opt.m"
    {
#line 270 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 377, &ll_backend__stack_opt__CellVarStoreCost_34);
    }
#line 272 "stack_opt.m"
    {
#line 272 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 378, &ll_backend__stack_opt__CellVarLoadCost_35);
    }
#line 274 "stack_opt.m"
    {
#line 274 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 379, &ll_backend__stack_opt__FieldVarStoreCost_36);
    }
#line 276 "stack_opt.m"
    {
#line 276 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 380, &ll_backend__stack_opt__FieldVarLoadCost_37);
    }
#line 278 "stack_opt.m"
    {
#line 278 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 381, &ll_backend__stack_opt__OpRatio_38);
    }
#line 280 "stack_opt.m"
    {
#line 280 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 382, &ll_backend__stack_opt__NodeRatio_39);
    }
#line 282 "stack_opt.m"
    {
#line 282 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 384, &ll_backend__stack_opt__InclAllCand_40);
    }
#line 284 "stack_opt.m"
    {
#line 284 "stack_opt.m"
      ll_backend__stack_opt__MatchingParams_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 284 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 0) = ((MR_Box) (ll_backend__stack_opt__CellVarStoreCost_34));
#line 284 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 1) = ((MR_Box) (ll_backend__stack_opt__CellVarLoadCost_35));
#line 284 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 2) = ((MR_Box) (ll_backend__stack_opt__FieldVarStoreCost_36));
#line 284 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 3) = ((MR_Box) (ll_backend__stack_opt__FieldVarLoadCost_37));
#line 284 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 4) = ((MR_Box) (ll_backend__stack_opt__OpRatio_38));
#line 284 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 5) = ((MR_Box) (ll_backend__stack_opt__NodeRatio_39));
#line 284 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 6) = ((MR_Box) (ll_backend__stack_opt__InclAllCand_40));
#line 284 "stack_opt.m"
    }
#line 286 "stack_opt.m"
    {
#line 286 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 383, &ll_backend__stack_opt__AllPathNodeRatio_42);
    }
#line 289 "stack_opt.m"
    {
#line 289 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 373, &ll_backend__stack_opt__FixpointLoop_43);
    }
#line 291 "stack_opt.m"
    {
#line 291 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 374, &ll_backend__stack_opt__FullPath_44);
    }
#line 293 "stack_opt.m"
    {
#line 293 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 375, &ll_backend__stack_opt__OnStack_45);
    }
#line 295 "stack_opt.m"
    {
#line 295 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 324, &ll_backend__stack_opt__OptNoReturnCalls_46);
    }
#line 297 "stack_opt.m"
    {
#line 297 "stack_opt.m"
      ll_backend__stack_opt__IntParams_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 297 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_47, 0) = ((MR_Box) (ll_backend__stack_opt__ModuleInfo_8));
#line 297 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_47, 1) = ((MR_Box) (ll_backend__stack_opt__VarTypes0_15));
#line 297 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_47, 2) = ((MR_Box) (ll_backend__stack_opt__OptNoReturnCalls_46));
#line 297 "stack_opt.m"
    }
#line 299 "stack_opt.m"
    {
#line 299 "stack_opt.m"
      ll_backend__stack_opt__V_84_84 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113);
    }
#line 299 "stack_opt.m"
    {
#line 299 "stack_opt.m"
      ll_backend__stack_opt__V_85_85 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113, ll_backend__stack_opt__OutputArgs_19);
    }
#line 12778 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_114_114 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 300 "stack_opt.m"
    {
#line 300 "stack_opt.m"
      ll_backend__stack_opt__V_86_86 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_114_114, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0);
    }
#line 300 "stack_opt.m"
    {
#line 300 "stack_opt.m"
      ll_backend__stack_opt__V_87_87 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_114_114, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0);
    }
#line 300 "stack_opt.m"
    {
#line 300 "stack_opt.m"
      ll_backend__stack_opt__V_88_88 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_114_114, ll_backend__stack_opt__TypeCtorInfo_108_108);
    }
#line 301 "stack_opt.m"
    {
#line 301 "stack_opt.m"
      ll_backend__stack_opt__V_89_89 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)));
    }
#line 302 "stack_opt.m"
    {
#line 302 "stack_opt.m"
      ll_backend__stack_opt__V_90_90 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_109_109, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0);
    }
#line 302 "stack_opt.m"
    {
#line 302 "stack_opt.m"
      ll_backend__stack_opt__V_91_91 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_109_109);
    }
#line 303 "stack_opt.m"
    {
#line 303 "stack_opt.m"
      ll_backend__stack_opt__V_92_92 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, (MR_Word) &ll_backend__stack_opt_scalar_common_1[5]);
    }
#line 298 "stack_opt.m"
    {
#line 298 "stack_opt.m"
      ll_backend__stack_opt__IntervalInfo0_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 0) = ((MR_Box) (ll_backend__stack_opt__IntParams_47));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 1) = ((MR_Box) (ll_backend__stack_opt__V_84_84));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 2) = ((MR_Box) (ll_backend__stack_opt__V_85_85));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 3) = ((MR_Box) (ll_backend__stack_opt__V_86_86));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 4) = ((MR_Box) (ll_backend__stack_opt__V_87_87));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 5) = ((MR_Box) (ll_backend__stack_opt__V_88_88));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 6) = ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 7) = ((MR_Box) (ll_backend__stack_opt__Counter1_27));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 8) = ((MR_Box) (ll_backend__stack_opt__V_89_89));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 9) = ((MR_Box) (ll_backend__stack_opt__V_90_90));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 10) = ((MR_Box) (ll_backend__stack_opt__V_91_91));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 11) = ((MR_Box) (ll_backend__stack_opt__StartMap0_31));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 12) = ((MR_Box) (ll_backend__stack_opt__EndMap0_29));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 13) = ((MR_Box) (ll_backend__stack_opt__SuccMap0_32));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 14) = ((MR_Box) (ll_backend__stack_opt__VarsMap0_33));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 15) = ((MR_Box) (ll_backend__stack_opt__V_92_92));
#line 298 "stack_opt.m"
    }
#line 304 "stack_opt.m"
    {
#line 304 "stack_opt.m"
      ll_backend__stack_opt__StackOptParams_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 304 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 0) = ((MR_Box) (ll_backend__stack_opt__MatchingParams_41));
#line 304 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 1) = ((MR_Box) (ll_backend__stack_opt__AllPathNodeRatio_42));
#line 304 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 2) = ((MR_Box) ((ll_backend__stack_opt__FixpointLoop_43 | ((((ll_backend__stack_opt__FullPath_44 << (MR_Integer) 1)) | ((ll_backend__stack_opt__OnStack_45 << (MR_Integer) 2)))))));
#line 304 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 3) = ((MR_Box) (ll_backend__stack_opt__NonCandidateVars_24));
#line 304 "stack_opt.m"
    }
#line 306 "stack_opt.m"
    {
#line 306 "stack_opt.m"
      ll_backend__stack_opt__StackOptInfo0_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo0_50, 0) = ((MR_Box) (ll_backend__stack_opt__StackOptParams_49));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo0_50, 1) = ((MR_Box) (ll_backend__stack_opt__InsertMap0_30));
#line 306 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo0_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "stack_opt.m"
    }
#line 307 "stack_opt.m"
    {
#line 307 "stack_opt.m"
      backend_libs__interval__build_interval_info_in_goal_5_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[6], ll_backend__stack_opt__Goal0_14, ll_backend__stack_opt__IntervalInfo0_48, &ll_backend__stack_opt__IntervalInfo_51, ((MR_Box) (ll_backend__stack_opt__StackOptInfo0_50)), &ll_backend__stack_opt__conv0_StackOptInfo_52);
    }
#line 307 "stack_opt.m"
    ll_backend__stack_opt__StackOptInfo_52 = ((MR_Word) ll_backend__stack_opt__conv0_StackOptInfo_52);
#line 309 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__DebugStackOpt_12 == ll_backend__stack_opt__PredIdInt_13);
#line 314 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 310 "stack_opt.m"
      {
#line 311 "stack_opt.m"
        {
#line 311 "stack_opt.m"
          backend_libs__interval__dump_interval_info_3_p_0(ll_backend__stack_opt__IntervalInfo_51);
        }
#line 312 "stack_opt.m"
        {
#line 312 "stack_opt.m"
          ll_backend__stack_opt__dump_stack_opt_info_3_p_0(ll_backend__stack_opt__StackOptInfo_52);
        }
#line 310 "stack_opt.m"
      }
#line 314 "stack_opt.m"
    else
#line 315 "stack_opt.m"
      {
#line 315 "stack_opt.m"
      }
#line 317 "stack_opt.m"
    ll_backend__stack_opt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_52, (MR_Integer) 0)));
#line 317 "stack_opt.m"
    ll_backend__stack_opt__InsertMap_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_52, (MR_Integer) 1)));
#line 317 "stack_opt.m"
    ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_52, (MR_Integer) 2)));
#line 318 "stack_opt.m"
    {
#line 318 "stack_opt.m"
      ll_backend__stack_opt__succeeded = mercury__map__is_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_109_109, ll_backend__stack_opt__TypeInfo_110_110, ll_backend__stack_opt__InsertMap_54);
    }
#line 320 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 319 "stack_opt.m"
      {
#line 319 "stack_opt.m"
        *ll_backend__stack_opt__Changed_11 = (MR_Integer) 0;
#line 319 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61 = ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60;
#line 319 "stack_opt.m"
      }
#line 320 "stack_opt.m"
    else
#line 323 "stack_opt.m"
      {
#line 323 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Goal1_55;
#line 323 "stack_opt.m"
        MR_Word ll_backend__stack_opt__VarSet_56;
#line 323 "stack_opt.m"
        MR_Word ll_backend__stack_opt__VarTypes_57;
#line 323 "stack_opt.m"
        MR_Word ll_backend__stack_opt__RenameMap_58;
#line 323 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Goal_59;
#line 323 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_97_97;
#line 323 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_100_100;
#line 323 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_101_101;
#line 323 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_102_102;

#line 322 "stack_opt.m"
        {
#line 322 "stack_opt.m"
          ll_backend__stack_opt__V_97_97 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeInfo_106_106, ll_backend__stack_opt__TypeInfo_106_106);
        }
#line 321 "stack_opt.m"
        {
#line 321 "stack_opt.m"
          backend_libs__interval__record_decisions_in_goal_10_p_0(ll_backend__stack_opt__Goal0_14, &ll_backend__stack_opt__Goal1_55, ll_backend__stack_opt__VarSet0_16, &ll_backend__stack_opt__VarSet_56, ll_backend__stack_opt__VarTypes0_15, &ll_backend__stack_opt__VarTypes_57, ll_backend__stack_opt__V_97_97, &ll_backend__stack_opt__RenameMap_58, ll_backend__stack_opt__InsertMap_54, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__stack_opt_scalar_common_3[0]));
        }
#line 324 "stack_opt.m"
        {
#line 324 "stack_opt.m"
          ll_backend__stack_opt__V_100_100 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113, ll_backend__stack_opt__HeadVars_21);
        }
#line 324 "stack_opt.m"
        {
#line 324 "stack_opt.m"
          backend_libs__interval__apply_headvar_correction_4_p_0(ll_backend__stack_opt__V_100_100, ll_backend__stack_opt__RenameMap_58, ll_backend__stack_opt__Goal1_55, &ll_backend__stack_opt__Goal_59);
        }
#line 326 "stack_opt.m"
        {
#line 326 "stack_opt.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_opt__Goal_59, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_101_101);
        }
#line 327 "stack_opt.m"
        {
#line 327 "stack_opt.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(ll_backend__stack_opt__VarSet_56, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_101_101, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_102_102);
        }
#line 328 "stack_opt.m"
        {
#line 328 "stack_opt.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ll_backend__stack_opt__VarTypes_57, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_102_102, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61);
        }
#line 329 "stack_opt.m"
        *ll_backend__stack_opt__Changed_11 = (MR_Integer) 1;
#line 323 "stack_opt.m"
      }
#line 243 "stack_opt.m"
  }
#line 239 "stack_opt.m"
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
#line 175 "stack_opt.m"
  {
#line 175 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_69_69;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_70_70;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PredProcId_6, (MR_Integer) 0)));
#line 175 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PredProcId_6, (MR_Integer) 1)));
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__SimplifyTasks_11;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Liveness0_12;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Globals_13;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PredInfo_14;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfoLiveness_15;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptNoReturnCalls_16;
#line 175 "stack_opt.m"
    MR_ArrayPtr ll_backend__stack_opt__DummyDummyTypeArray_17;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AllocData_18;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal2_20;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptStackAlloc0_21;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FailVars_22;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__NondetLiveness0_23;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal_24;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptStackAlloc_25;
#line 175 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__DebugStackOpt_28;
#line 175 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__PredIdInt_29;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Changed_31;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_38_38;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_46_46;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53;
#line 175 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_72_72;
#line 189 "stack_opt.m"
    MR_ArrayPtr ll_backend__stack_opt__conv0_DummyDummyTypeArray_17;
#line 192 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;
#line 197 "stack_opt.m"
    MR_Word ll_backend__stack_opt___Liveness_26;
#line 197 "stack_opt.m"
    MR_Word ll_backend__stack_opt___NondetLiveness_27;
#line 197 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv1_OptStackAlloc_25;

#line 180 "stack_opt.m"
    {
#line 180 "stack_opt.m"
      ll_backend__stack_opt__SimplifyTasks_11 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 181 "stack_opt.m"
    {
#line 181 "stack_opt.m"
      check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(ll_backend__stack_opt__SimplifyTasks_11, ll_backend__stack_opt__PredId_9, ll_backend__stack_opt__ProcId_10, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_0_34, &ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_32, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_38_38);
    }
#line 182 "stack_opt.m"
    {
#line 182 "stack_opt.m"
      ll_backend__liveness__detect_liveness_proc_4_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredProcId_6, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_38_38, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39);
    }
#line 183 "stack_opt.m"
    {
#line 183 "stack_opt.m"
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39, ll_backend__stack_opt__PredId_9, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, &ll_backend__stack_opt__Liveness0_12);
    }
#line 184 "stack_opt.m"
    {
#line 184 "stack_opt.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, &ll_backend__stack_opt__Globals_13);
    }
#line 185 "stack_opt.m"
    {
#line 185 "stack_opt.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredId_9, &ll_backend__stack_opt__PredInfo_14);
    }
#line 186 "stack_opt.m"
    {
#line 186 "stack_opt.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__stack_opt__PredInfo_14, ll_backend__stack_opt__Globals_13, &ll_backend__stack_opt__TypeInfoLiveness_15);
    }
#line 187 "stack_opt.m"
    {
#line 187 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_13, (MR_Integer) 324, &ll_backend__stack_opt__OptNoReturnCalls_16);
    }
#line 189 "stack_opt.m"
    {
#line 189 "stack_opt.m"
      mercury__array__init_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, (MR_Integer) 1, ((MR_Box) ((MR_Integer) 1)), &ll_backend__stack_opt__conv0_DummyDummyTypeArray_17);
    }
#line 189 "stack_opt.m"
    ll_backend__stack_opt__DummyDummyTypeArray_17 = (MR_ArrayPtr) ll_backend__stack_opt__conv0_DummyDummyTypeArray_17;
#line 190 "stack_opt.m"
    {
#line 190 "stack_opt.m"
      ll_backend__stack_opt__AllocData_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 190 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 0) = ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37));
#line 190 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 1) = ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39));
#line 190 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 2) = ((MR_Box) (ll_backend__stack_opt__PredProcId_6));
#line 190 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 3) = ((MR_Box) (ll_backend__stack_opt__TypeInfoLiveness_15));
#line 190 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 4) = ((MR_Box) (ll_backend__stack_opt__OptNoReturnCalls_16));
#line 190 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 5) = ((MR_Box) (ll_backend__stack_opt__DummyDummyTypeArray_17));
#line 190 "stack_opt.m"
    }
#line 192 "stack_opt.m"
    {
#line 192 "stack_opt.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, &ll_backend__stack_opt__V_19_19, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43);
    }
#line 193 "stack_opt.m"
    {
#line 193 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43, &ll_backend__stack_opt__Goal2_20);
    }
#line 237 "stack_opt.m"
    {
#line 237 "stack_opt.m"
      ll_backend__stack_opt__V_72_72 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 237 "stack_opt.m"
    ll_backend__stack_opt__OptStackAlloc0_21 = (MR_Word) ll_backend__stack_opt__V_72_72;
#line 13172 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_69_69 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 195 "stack_opt.m"
    {
#line 195 "stack_opt.m"
      mercury__set__init_1_p_0(ll_backend__stack_opt__TypeInfo_69_69, &ll_backend__stack_opt__FailVars_22);
    }
#line 196 "stack_opt.m"
    {
#line 196 "stack_opt.m"
      mercury__set__init_1_p_0(ll_backend__stack_opt__TypeInfo_69_69, &ll_backend__stack_opt__NondetLiveness0_23);
    }
#line 13184 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_70_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 197 "stack_opt.m"
    {
#line 197 "stack_opt.m"
      ll_backend__stack_opt__V_44_44 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_70_70, ll_backend__stack_opt__FailVars_22);
    }
#line 199 "stack_opt.m"
    {
#line 199 "stack_opt.m"
      ll_backend__stack_opt__V_45_45 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_70_70, ll_backend__stack_opt__NondetLiveness0_23);
    }
#line 197 "stack_opt.m"
    {
#line 197 "stack_opt.m"
      ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[1], ll_backend__stack_opt__Goal2_20, &ll_backend__stack_opt__Goal_24, ll_backend__stack_opt__V_44_44, ll_backend__stack_opt__AllocData_18, ((MR_Box) (ll_backend__stack_opt__OptStackAlloc0_21)), &ll_backend__stack_opt__conv1_OptStackAlloc_25, ll_backend__stack_opt__Liveness0_12, &ll_backend__stack_opt___Liveness_26, ll_backend__stack_opt__V_45_45, &ll_backend__stack_opt___NondetLiveness_27);
    }
#line 197 "stack_opt.m"
    ll_backend__stack_opt__OptStackAlloc_25 = ((MR_Word) ll_backend__stack_opt__conv1_OptStackAlloc_25);
#line 200 "stack_opt.m"
    {
#line 200 "stack_opt.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_opt__Goal_24, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_46_46);
    }
#line 201 "stack_opt.m"
    {
#line 201 "stack_opt.m"
      ll_backend__store_alloc__allocate_store_maps_5_p_0((MR_Integer) 1, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredProcId_6, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_46_46, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48);
    }
#line 202 "stack_opt.m"
    {
#line 202 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_13, (MR_Integer) 75, &ll_backend__stack_opt__DebugStackOpt_28);
    }
#line 203 "stack_opt.m"
    {
#line 203 "stack_opt.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(ll_backend__stack_opt__PredId_9, &ll_backend__stack_opt__PredIdInt_29);
    }
#line 205 "stack_opt.m"
    {
#line 205 "stack_opt.m"
      ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\nbefore stack opt cell", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37);
    }
#line 209 "stack_opt.m"
    {
#line 209 "stack_opt.m"
      ll_backend__stack_opt__optimize_live_sets_7_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__OptStackAlloc_25, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53, &ll_backend__stack_opt__Changed_31, ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29);
    }
#line 231 "stack_opt.m"
    if ((ll_backend__stack_opt__Changed_31 == (MR_Integer) 0))
#line 232 "stack_opt.m"
      {
#line 232 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33 = ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53;
#line 232 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35 = ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37;
#line 232 "stack_opt.m"
      }
#line 231 "stack_opt.m"
    else
#line 212 "stack_opt.m"
      {
#line 212 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58;

#line 214 "stack_opt.m"
        {
#line 214 "stack_opt.m"
          ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\nafter stack opt transformation", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37);
        }
#line 218 "stack_opt.m"
        {
#line 218 "stack_opt.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58);
        }
#line 220 "stack_opt.m"
        {
#line 220 "stack_opt.m"
          ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\nafter stack opt requantify", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37);
        }
#line 224 "stack_opt.m"
        {
#line 224 "stack_opt.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35);
        }
#line 227 "stack_opt.m"
        {
#line 227 "stack_opt.m"
          ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\n                \nafter stack opt recompute instmaps", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, *ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33, *ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35);
#line 227 "stack_opt.m"
          return;
        }
#line 212 "stack_opt.m"
      }
#line 175 "stack_opt.m"
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
