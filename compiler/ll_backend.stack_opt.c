/*
** Automatically generated from `stack_opt.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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



#line 410 "stack_opt.m"
struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s {
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9;
#line 414 "stack_opt.m"
  MR_bool ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded;
#line 414 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116;
#line 453 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38;
#line 482 "stack_opt.m"
  jmp_buf ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0;
#line 482 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_120_120;
#line 482 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47;
#line 482 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_49;
#line 482 "stack_opt.m"
  MR_Word ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_50;
#line 482 "stack_opt.m"
  MR_Box ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_PathInfo_47;
#line 484 "stack_opt.m"
  MR_Box ll_backend__stack_opt__use_cell_8_p_0_env_0__conv2_Segment_50;
#line 410 "stack_opt.m"
};


#line 184 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 187 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 190 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 193 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0;

#line 196 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0;

#line 199 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0;

#line 202 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__stack_opt__type_ctor_info_path_0;

#line 205 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 208 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_opt__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 211 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

#line 214 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0;

#line 217 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0;

#line 220 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 223 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_all_paths_0_0[3];

#line 226 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_all_paths_0_0[3];

#line 229 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0;

#line 232 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0[1];

#line 235 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0[1];

#line 238 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0[1];

#line 241 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0[1];

#line 244 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0;

#line 247 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1;

#line 250 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_value_ordered_current_segment_first_flush_0[2];

#line 253 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0[2];

#line 256 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0[2];

#line 259 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0;

#line 262 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0;

#line 265 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 268 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_info_0_0[5];

#line 271 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0;

#line 274 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0[1];

#line 277 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0[1];

#line 280 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0[1];

#line 283 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0[1];

#line 286 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 289 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_path_info_0_0[2];

#line 292 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0;

#line 295 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0[1];

#line 298 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0[1];

#line 301 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0[1];

#line 304 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_path_info_0[1];

#line 307 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 310 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_matching_result_0_0[9];

#line 313 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0;

#line 316 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0[1];

#line 319 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_matching_result_0[1];

#line 322 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_matching_result_0[1];

#line 325 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_matching_result_0[1];

#line 328 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0[1];

#line 331 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 334 "ll_backend.stack_opt.c"
static const MR_NotagFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0;

#line 337 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_path_0_0[6];

#line 340 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_path_0_0[6];

#line 343 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0;

#line 346 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0[1];

#line 349 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0[1];

#line 352 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0[1];

#line 355 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0[1];

#line 358 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 361 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0;

#line 364 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_info_0_0[3];

#line 367 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_info_0_0[3];

#line 370 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0;

#line 373 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0[1];

#line 376 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0[1];

#line 379 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0[1];

#line 382 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0[1];

#line 385 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_params_0_0[6];

#line 388 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_params_0_0[6];

#line 391 "ll_backend.stack_opt.c"
static const MR_DuArgLocn ll_backend__stack_opt__ll_backend__stack_opt__field_locns_stack_opt_params_0_0[6];

#line 394 "ll_backend.stack_opt.c"
static const MR_DuFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0;

#line 397 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0[1];

#line 400 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0[1];

#line 403 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0[1];

#line 406 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0[1];

#line 409 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0_10001(
#line 412 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 414 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 417 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0_10001(
#line 420 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 422 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 424 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 427 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001(
#line 430 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 432 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 435 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001(
#line 438 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 440 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 442 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 445 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0_10001(
#line 448 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 450 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 453 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0_10001(
#line 456 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 458 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 460 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 463 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0_10001(
#line 466 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 468 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 471 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0_10001(
#line 474 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 476 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 478 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 481 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0_10001(
#line 484 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 486 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 489 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0_10001(
#line 492 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 494 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 496 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 499 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001(
#line 502 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 504 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 507 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001(
#line 510 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 512 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 514 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 517 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0_10001(
#line 520 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 522 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 525 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0_10001(
#line 528 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 530 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 532 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 535 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001(
#line 538 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 540 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 543 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001(
#line 546 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 548 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 550 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 553 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001(
#line 556 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 558 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2);

#line 561 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001(
#line 564 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 566 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 568 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3);

#line 571 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 574 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 576 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 578 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 580 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 582 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 585 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 588 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 590 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 592 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 594 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 596 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 599 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 602 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 604 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 606 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 608 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 610 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 613 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 616 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 618 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 620 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 622 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 624 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 627 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
#line 630 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 632 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 634 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 636 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 638 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 640 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_5,
#line 642 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_6,
#line 644 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_7,
#line 646 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_8);

#line 340 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_50_93_95_48_4_p_0(
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 340 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 339 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_p_0(
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 339 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 338 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 338 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 337 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 337 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 533 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1(
#line 533 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 533 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 533 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 533 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 533 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 525 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(
#line 525 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 525 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_11,
#line 525 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_13,
#line 525 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_14,
#line 525 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_15,
#line 525 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodeSets_16,
#line 525 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodeSets_17,
#line 525 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_18);

#line 505 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0(
#line 505 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_8,
#line 505 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_9,
#line 505 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 505 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_12,
#line 505 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_13,
#line 505 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_14);

#line 1149 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1149__1_3_p_0(
#line 1149 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_93);

#line 1146 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1146__1_3_p_0(
#line 1146 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_89);

#line 1123 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1123__1_2_p_0(
#line 1123 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_80,
#line 1123 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_81);

#line 1122 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1122__1_2_p_0(
#line 1122 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_75,
#line 1122 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_76);

#line 1104 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1104__1_2_p_0(
#line 1104 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_51,
#line 1104 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_52);

#line 1091 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1091__1_2_p_0(
#line 1091 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_45,
#line 1091 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_46);

#line 849 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__849__1_2_p_0(
#line 849 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_36,
#line 849 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_37);

#line 845 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__845__1_2_p_0(
#line 845 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_42,
#line 845 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_43);

#line 836 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__836__1_2_p_0(
#line 836 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_54,
#line 836 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_55);

#line 698 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__close_path__698__1_1_p_0(
#line 698 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FirstSegment0_7);

#line 340 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
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
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
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
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
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
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 337 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4);

#line 377 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(
#line 377 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 377 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 377 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 377 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__4_4,
#line 377 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 377 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__6_6,
#line 377 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__7_7,
#line 377 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__8_8);

#line 146 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0(
#line 146 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 146 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 146 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 146 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0(
#line 146 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 146 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 169 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0(
#line 169 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 169 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 169 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 169 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0(
#line 169 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 169 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 657 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0(
#line 657 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 657 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 657 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 657 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0(
#line 657 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 657 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 136 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(
#line 136 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 136 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 136 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 136 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(
#line 136 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 136 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 156 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0(
#line 156 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 156 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 156 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 156 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0(
#line 156 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 156 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 380 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0(
#line 380 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 380 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 380 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 380 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0(
#line 380 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 380 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 391 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0(
#line 391 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 391 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 391 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 391 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0(
#line 391 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 391 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 653 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(
#line 653 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 653 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 653 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 653 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(
#line 653 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_1,
#line 653 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 667 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0(
#line 667 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 667 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 667 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3);

#line 667 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0(
#line 667 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 667 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 1149 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_6(
#line 1149 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1149 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1149 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1149 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1146 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_5(
#line 1146 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1146 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1146 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1146 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1140 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_4(
#line 1140 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1140 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1135 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_3(
#line 1135 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1135 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1123 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_2(
#line 1123 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1123 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1123 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1122 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_1(
#line 1122 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1122 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1122 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1111 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0(
#line 1111 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MatchingResult_4);

#line 1104 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_2(
#line 1104 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1104 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1104 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1091 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_1(
#line 1091 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1091 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1091 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 1088 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0(
#line 1088 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1086 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0_1(
#line 1086 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1086 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1086 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1086 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1079 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0(
#line 1079 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1076 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_2(
#line 1076 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1076 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1076 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1076 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1073 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_1(
#line 1073 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1073 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1073 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1073 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3);

#line 1068 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0(
#line 1068 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4);

#line 1045 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__maybe_write_progress_message_7_p_0(
#line 1045 "stack_opt.m"
  MR_String ll_backend__stack_opt__Message_8,
#line 1045 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_9,
#line 1045 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_10,
#line 1045 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ProcInfo_11,
#line 1045 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_12);

#line 1030 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(
#line 1030 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1026 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(
#line 1026 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 1021 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_2(
#line 1021 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1021 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1018 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_1(
#line 1018 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1018 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 1013 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0(
#line 1013 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 1013 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__AllPaths_2);

#line 1000 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_2(
#line 1000 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1000 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 986 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_1(
#line 986 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 986 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 977 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(
#line 977 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 977 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 977 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 977 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 977 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 977 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32,
#line 977 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_33);

#line 968 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(
#line 968 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 968 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 968 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 968 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 968 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_14,
#line 968 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_13,
#line 968 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_15);

#line 953 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__one_after_another_7_p_0(
#line 953 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_1,
#line 953 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_2,
#line 953 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_3,
#line 953 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4,
#line 953 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 953 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6,
#line 953 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_7);

#line 934 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_2(
#line 934 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 934 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 934 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2);

#line 887 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_1(
#line 887 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 887 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1);

#line 877 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0(
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__End_9,
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_10,
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_11,
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_12,
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_13,
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__SuccessorIds_14,
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36,
#line 877 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);

#line 849 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_3(
#line 849 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 845 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_2(
#line 845 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 836 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_1(
#line 836 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 826 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0(
#line 826 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 826 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_9,
#line 826 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_10,
#line 826 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_11,
#line 826 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_12,
#line 826 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28,
#line 826 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29);

#line 819 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1(
#line 819 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 819 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 819 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 819 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 819 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4);

#line 804 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(
#line 804 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_5,
#line 804 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchInfo_6,
#line 804 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_7,
#line 804 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_8);

#line 782 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_more_successors_1_f_0(
#line 782 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 773 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_one_successor_1_f_0(
#line 773 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 764 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_no_successor_1_f_0(
#line 764 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1);

#line 736 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__anchor_requires_close_2_f_0(
#line 736 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_1,
#line 736 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2);

#line 729 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_anchor_to_path_2_f_0(
#line 729 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_4,
#line 729 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_8);

#line 715 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_interval_to_path_3_f_0(
#line 715 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_5,
#line 715 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Vars_6,
#line 715 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_12);

#line 698 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__close_path_1_f_0_1(
#line 698 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg);

#line 691 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__close_path_1_f_0(
#line 691 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_3);

#line 680 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__extract_match_and_save_info_4_p_0(
#line 680 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_5,
#line 680 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchPathInfo_6,
#line 680 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Anchors_7,
#line 680 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Intervals_8);

#line 623 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__add_anchor_inserts_10_p_0(
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_11,
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVarsViaCellVar_12,
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__InsertIntervals_13,
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_14,
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27,
#line 623 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_28,
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29,
#line 623 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30,
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31,
#line 623 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32);

#line 608 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(
#line 608 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 608 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_11,
#line 608 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 608 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_17,
#line 608 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_18,
#line 608 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_19,
#line 608 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_20,
#line 608 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21,
#line 608 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22);

#line 594 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_2(
#line 594 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 594 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 594 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 594 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 594 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 594 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 594 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 594 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7);

#line 591 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_1(
#line 591 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 591 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 591 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 591 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 591 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 591 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 591 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 591 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7);

#line 579 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0(
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_12,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_13,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVars_14,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_15,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_16,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialAnchors_17,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialIntervals_18,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31,
#line 579 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33,
#line 579 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34);

#line 561 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_matching_for_path_8_p_0(
#line 561 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 561 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_10,
#line 561 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 561 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars_12,
#line 561 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfo_13,
#line 561 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodes_14,
#line 561 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodes_15,
#line 561 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_16);

#line 482 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_1(
#line 482 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 482 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_3(
#line 482 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 484 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_5(
#line 484 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 482 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_4(
#line 482 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 482 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_2(
#line 482 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 482 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_6(
#line 482 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg);

#line 410 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0(
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FieldVarList_10,
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_11,
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_12,
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51,
#line 410 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52,
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53,
#line 410 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54);

#line 240 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__optimize_live_sets_7_p_0(
#line 240 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_8,
#line 240 "stack_opt.m"
  MR_Word ll_backend__stack_opt__OptAlloc_9,
#line 240 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60,
#line 240 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61,
#line 240 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Changed_11,
#line 240 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_12,
#line 240 "stack_opt.m"
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


#line 749 "stack_opt.m"
/* sealed */ struct ll_backend__stack_opt__vector_common_type_7_0_s {
#line 749 "stack_opt.m"
  const MR_Word ll_backend__stack_opt__vector_common_type_7_0__vct_7_f_0;
#line 749 "stack_opt.m"
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



#line 2130 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2138 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2146 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2154 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2162 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2170 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__maybe__pti_maybe_1__plain_backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2178 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__stack_opt__type_ctor_info_path_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0
  }
};

#line 2186 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2194 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_opt__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2203 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 2211 "ll_backend.stack_opt.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 2219 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0
  }
};

#line 2227 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2235 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_all_paths_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2242 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_all_paths_0_0[3] = {
  (MR_String) "paths_so_far",
  (MR_String) "stepped_over_model_non",
  (MR_String) "used_after_scope"
};

#line 2249 "ll_backend.stack_opt.c"
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

#line 2264 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0
};

#line 2269 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_all_paths_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_all_paths_0_0
  }
};

#line 2278 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_all_paths_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_all_paths_0_0
};

#line 2283 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_all_paths_0[1] = {
  (MR_Integer) 0
};

#line 2288 "ll_backend.stack_opt.c"
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

#line 2305 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0 = {
  (MR_String) "current_is_before_first_flush",
  (MR_Integer) 0
};

#line 2311 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1 = {
  (MR_String) "current_is_after_first_flush",
  (MR_Integer) 1
};

#line 2317 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_value_ordered_current_segment_first_flush_0[2] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0,
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1
};

#line 2323 "ll_backend.stack_opt.c"
static const MR_EnumFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0[2] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1,
  &ll_backend__stack_opt__ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0
};

#line 2329 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2335 "ll_backend.stack_opt.c"
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

#line 2352 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0
  }
};

#line 2360 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2368 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2376 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2385 "ll_backend.stack_opt.c"
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

#line 2400 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0
};

#line 2405 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_info_0_0
  }
};

#line 2414 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_info_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_info_0_0
};

#line 2419 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_info_0[1] = {
  (MR_Integer) 0
};

#line 2424 "ll_backend.stack_opt.c"
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

#line 2441 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2449 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_match_path_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2455 "ll_backend.stack_opt.c"
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

#line 2470 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0
};

#line 2475 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_match_path_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0
  }
};

#line 2484 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_match_path_info_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_match_path_info_0_0
};

#line 2489 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_match_path_info_0[1] = {
  (MR_Integer) 0
};

#line 2494 "ll_backend.stack_opt.c"
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

#line 2511 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2519 "ll_backend.stack_opt.c"
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

#line 2532 "ll_backend.stack_opt.c"
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

#line 2547 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0
};

#line 2552 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_matching_result_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_matching_result_0_0
  }
};

#line 2561 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_matching_result_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_matching_result_0_0
};

#line 2566 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_matching_result_0[1] = {
  (MR_Integer) 0
};

#line 2571 "ll_backend.stack_opt.c"
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

#line 2588 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0[1] = {
  (MR_Integer) 0
};

#line 2593 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2601 "ll_backend.stack_opt.c"
static const MR_NotagFunctorDesc ll_backend__stack_opt__ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0 = {
  (MR_String) "opt_stack_alloc",
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_String) "par_conj_own_slots"
};

#line 2608 "ll_backend.stack_opt.c"
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

#line 2625 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_path_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2635 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_path_0_0[6] = {
  (MR_String) "flush_state",
  (MR_String) "current_segment",
  (MR_String) "first_segment",
  (MR_String) "other_segments",
  (MR_String) "flush_anchors",
  (MR_String) "occurring_intervals"
};

#line 2645 "ll_backend.stack_opt.c"
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

#line 2660 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0
};

#line 2665 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_path_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_path_0_0
  }
};

#line 2674 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_path_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_path_0_0
};

#line 2679 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_path_0[1] = {
  (MR_Integer) 0
};

#line 2684 "ll_backend.stack_opt.c"
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

#line 2701 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &ll_backend__stack_opt__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2710 "ll_backend.stack_opt.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0
  }
};

#line 2718 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_params_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0
};

#line 2725 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_info_0_0[3] = {
  (MR_String) "soi_stack_opt_params",
  (MR_String) "soi_left_anchor_inserts",
  (MR_String) "soi_matching_results"
};

#line 2732 "ll_backend.stack_opt.c"
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

#line 2747 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0
};

#line 2752 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0
  }
};

#line 2761 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_info_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0
};

#line 2766 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_info_0[1] = {
  (MR_Integer) 0
};

#line 2771 "ll_backend.stack_opt.c"
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

#line 2788 "ll_backend.stack_opt.c"
static const MR_PseudoTypeInfo ll_backend__stack_opt__ll_backend__stack_opt__field_types_stack_opt_params_0_0[6] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_matching_params_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_opt__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2798 "ll_backend.stack_opt.c"
static const MR_ConstString ll_backend__stack_opt__ll_backend__stack_opt__field_names_stack_opt_params_0_0[6] = {
  (MR_String) "sop_matching_params",
  (MR_String) "sop_all_path_node_ratio",
  (MR_String) "sop_fixpoint_loop",
  (MR_String) "sop_full_path",
  (MR_String) "sop_on_stack",
  (MR_String) "sop_non_candidate_vars"
};

#line 2808 "ll_backend.stack_opt.c"
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

#line 2842 "ll_backend.stack_opt.c"
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

#line 2857 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0
};

#line 2862 "ll_backend.stack_opt.c"
static const MR_DuPtagLayout ll_backend__stack_opt__ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__stack_opt__ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0
  }
};

#line 2871 "ll_backend.stack_opt.c"
static const MR_DuFunctorDescPtr ll_backend__stack_opt__ll_backend__stack_opt__du_name_ordered_stack_opt_params_0[1] = {
  &ll_backend__stack_opt__ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0
};

#line 2876 "ll_backend.stack_opt.c"
static const MR_Integer ll_backend__stack_opt__ll_backend__stack_opt__functor_number_map_stack_opt_params_0[1] = {
  (MR_Integer) 0
};

#line 2881 "ll_backend.stack_opt.c"
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

#line 2898 "ll_backend.stack_opt.c"
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

#line 2911 "ll_backend.stack_opt.c"
const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__ll_backend__stack_opt__stack_opt_info__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001))
};

#line 2921 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0_10001(
#line 2924 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 2926 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 2928 "ll_backend.stack_opt.c"
{
#line 2930 "ll_backend.stack_opt.c"
  {
#line 2932 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 2935 "ll_backend.stack_opt.c"
    {
#line 2937 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____all_paths_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 2940 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 2942 "ll_backend.stack_opt.c"
  }
#line 2944 "ll_backend.stack_opt.c"
}

#line 2947 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0_10001(
#line 2950 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 2952 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 2954 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 2956 "ll_backend.stack_opt.c"
{
#line 2958 "ll_backend.stack_opt.c"
  {
#line 2960 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 2963 "ll_backend.stack_opt.c"
    {
#line 2965 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____all_paths_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 2968 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 2970 "ll_backend.stack_opt.c"
  }
#line 2972 "ll_backend.stack_opt.c"
}

#line 2975 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0_10001(
#line 2978 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 2980 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 2982 "ll_backend.stack_opt.c"
{
#line 2984 "ll_backend.stack_opt.c"
  {
#line 2986 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 2989 "ll_backend.stack_opt.c"
    {
#line 2991 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 2994 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 2996 "ll_backend.stack_opt.c"
  }
#line 2998 "ll_backend.stack_opt.c"
}

#line 3001 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0_10001(
#line 3004 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3006 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3008 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3010 "ll_backend.stack_opt.c"
{
#line 3012 "ll_backend.stack_opt.c"
  {
#line 3014 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3017 "ll_backend.stack_opt.c"
    {
#line 3019 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3022 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3024 "ll_backend.stack_opt.c"
  }
#line 3026 "ll_backend.stack_opt.c"
}

#line 3029 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0_10001(
#line 3032 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3034 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3036 "ll_backend.stack_opt.c"
{
#line 3038 "ll_backend.stack_opt.c"
  {
#line 3040 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3043 "ll_backend.stack_opt.c"
    {
#line 3045 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____match_info_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3048 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3050 "ll_backend.stack_opt.c"
  }
#line 3052 "ll_backend.stack_opt.c"
}

#line 3055 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0_10001(
#line 3058 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3060 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3062 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3064 "ll_backend.stack_opt.c"
{
#line 3066 "ll_backend.stack_opt.c"
  {
#line 3068 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3071 "ll_backend.stack_opt.c"
    {
#line 3073 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____match_info_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3076 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3078 "ll_backend.stack_opt.c"
  }
#line 3080 "ll_backend.stack_opt.c"
}

#line 3083 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0_10001(
#line 3086 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3088 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3090 "ll_backend.stack_opt.c"
{
#line 3092 "ll_backend.stack_opt.c"
  {
#line 3094 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3097 "ll_backend.stack_opt.c"
    {
#line 3099 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____match_path_info_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3102 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3104 "ll_backend.stack_opt.c"
  }
#line 3106 "ll_backend.stack_opt.c"
}

#line 3109 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0_10001(
#line 3112 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3114 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3116 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3118 "ll_backend.stack_opt.c"
{
#line 3120 "ll_backend.stack_opt.c"
  {
#line 3122 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3125 "ll_backend.stack_opt.c"
    {
#line 3127 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____match_path_info_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3130 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3132 "ll_backend.stack_opt.c"
  }
#line 3134 "ll_backend.stack_opt.c"
}

#line 3137 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0_10001(
#line 3140 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3142 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3144 "ll_backend.stack_opt.c"
{
#line 3146 "ll_backend.stack_opt.c"
  {
#line 3148 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3151 "ll_backend.stack_opt.c"
    {
#line 3153 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____matching_result_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3156 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3158 "ll_backend.stack_opt.c"
  }
#line 3160 "ll_backend.stack_opt.c"
}

#line 3163 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0_10001(
#line 3166 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3168 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3170 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3172 "ll_backend.stack_opt.c"
{
#line 3174 "ll_backend.stack_opt.c"
  {
#line 3176 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3179 "ll_backend.stack_opt.c"
    {
#line 3181 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____matching_result_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3184 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3186 "ll_backend.stack_opt.c"
  }
#line 3188 "ll_backend.stack_opt.c"
}

#line 3191 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0_10001(
#line 3194 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3196 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3198 "ll_backend.stack_opt.c"
{
#line 3200 "ll_backend.stack_opt.c"
  {
#line 3202 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3205 "ll_backend.stack_opt.c"
    {
#line 3207 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3210 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3212 "ll_backend.stack_opt.c"
  }
#line 3214 "ll_backend.stack_opt.c"
}

#line 3217 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0_10001(
#line 3220 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3222 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3224 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3226 "ll_backend.stack_opt.c"
{
#line 3228 "ll_backend.stack_opt.c"
  {
#line 3230 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3233 "ll_backend.stack_opt.c"
    {
#line 3235 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3238 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3240 "ll_backend.stack_opt.c"
  }
#line 3242 "ll_backend.stack_opt.c"
}

#line 3245 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0_10001(
#line 3248 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3250 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3252 "ll_backend.stack_opt.c"
{
#line 3254 "ll_backend.stack_opt.c"
  {
#line 3256 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3259 "ll_backend.stack_opt.c"
    {
#line 3261 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____path_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3264 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3266 "ll_backend.stack_opt.c"
  }
#line 3268 "ll_backend.stack_opt.c"
}

#line 3271 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0_10001(
#line 3274 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3276 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3278 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3280 "ll_backend.stack_opt.c"
{
#line 3282 "ll_backend.stack_opt.c"
  {
#line 3284 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3287 "ll_backend.stack_opt.c"
    {
#line 3289 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____path_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3292 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3294 "ll_backend.stack_opt.c"
  }
#line 3296 "ll_backend.stack_opt.c"
}

#line 3299 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0_10001(
#line 3302 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3304 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3306 "ll_backend.stack_opt.c"
{
#line 3308 "ll_backend.stack_opt.c"
  {
#line 3310 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3313 "ll_backend.stack_opt.c"
    {
#line 3315 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____stack_opt_info_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3318 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3320 "ll_backend.stack_opt.c"
  }
#line 3322 "ll_backend.stack_opt.c"
}

#line 3325 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0_10001(
#line 3328 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3330 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3332 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3334 "ll_backend.stack_opt.c"
{
#line 3336 "ll_backend.stack_opt.c"
  {
#line 3338 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3341 "ll_backend.stack_opt.c"
    {
#line 3343 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____stack_opt_info_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3346 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3348 "ll_backend.stack_opt.c"
  }
#line 3350 "ll_backend.stack_opt.c"
}

#line 3353 "ll_backend.stack_opt.c"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0_10001(
#line 3356 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3358 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2)
#line 3360 "ll_backend.stack_opt.c"
{
#line 3362 "ll_backend.stack_opt.c"
  {
#line 3364 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded;

#line 3367 "ll_backend.stack_opt.c"
    {
#line 3369 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____stack_opt_params_0_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2));
    }
#line 3372 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 3374 "ll_backend.stack_opt.c"
  }
#line 3376 "ll_backend.stack_opt.c"
}

#line 3379 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0_10001(
#line 3382 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_1,
#line 3384 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3386 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3)
#line 3388 "ll_backend.stack_opt.c"
{
#line 3390 "ll_backend.stack_opt.c"
  {
#line 3392 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__1_1;

#line 3395 "ll_backend.stack_opt.c"
    {
#line 3397 "ll_backend.stack_opt.c"
      ll_backend__stack_opt____Compare____stack_opt_params_0_0(&ll_backend__stack_opt__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3));
    }
#line 3400 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__1_1));
#line 3402 "ll_backend.stack_opt.c"
  }
#line 3404 "ll_backend.stack_opt.c"
}

#line 3407 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 3410 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3412 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3414 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3416 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3418 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3420 "ll_backend.stack_opt.c"
{
#line 3422 "ll_backend.stack_opt.c"
  {
#line 3424 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3426 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3429 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3431 "ll_backend.stack_opt.c"
    {
#line 3433 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3436 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3438 "ll_backend.stack_opt.c"
  }
#line 3440 "ll_backend.stack_opt.c"
}

#line 3443 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 3446 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3448 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3450 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3452 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3454 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3456 "ll_backend.stack_opt.c"
{
#line 3458 "ll_backend.stack_opt.c"
  {
#line 3460 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3462 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3465 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3467 "ll_backend.stack_opt.c"
    {
#line 3469 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3472 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3474 "ll_backend.stack_opt.c"
  }
#line 3476 "ll_backend.stack_opt.c"
}

#line 3479 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 3482 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3484 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3486 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3488 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3490 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3492 "ll_backend.stack_opt.c"
{
#line 3494 "ll_backend.stack_opt.c"
  {
#line 3496 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3498 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3501 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3503 "ll_backend.stack_opt.c"
    {
#line 3505 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3508 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3510 "ll_backend.stack_opt.c"
  }
#line 3512 "ll_backend.stack_opt.c"
}

#line 3515 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 3518 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3520 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3522 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3524 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3526 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 3528 "ll_backend.stack_opt.c"
{
#line 3530 "ll_backend.stack_opt.c"
  {
#line 3532 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3534 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__4_4;

#line 3537 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3539 "ll_backend.stack_opt.c"
    {
#line 3541 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), &ll_backend__stack_opt__conv0_HeadVar__4_4);
    }
#line 3544 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__4_4));
#line 3546 "ll_backend.stack_opt.c"
  }
#line 3548 "ll_backend.stack_opt.c"
}

#line 3551 "ll_backend.stack_opt.c"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0_10001(
#line 3554 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 3556 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 3558 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 3560 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_3,
#line 3562 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 3564 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_5,
#line 3566 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_6,
#line 3568 "ll_backend.stack_opt.c"
  MR_Box ll_backend__stack_opt__wrapper_arg_7,
#line 3570 "ll_backend.stack_opt.c"
  MR_Box * ll_backend__stack_opt__wrapper_arg_8)
#line 3572 "ll_backend.stack_opt.c"
{
#line 3574 "ll_backend.stack_opt.c"
  {
#line 3576 "ll_backend.stack_opt.c"
    MR_Box ll_backend__stack_opt__closure;
#line 3578 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv1_HeadVar__6_6;
#line 3580 "ll_backend.stack_opt.c"
    MR_Word ll_backend__stack_opt__conv0_HeadVar__8_8;

#line 3583 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 3585 "ll_backend.stack_opt.c"
    {
#line 3587 "ll_backend.stack_opt.c"
      ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), ((MR_Word) ll_backend__stack_opt__wrapper_arg_3), ((MR_Word) ll_backend__stack_opt__wrapper_arg_4), ((MR_Word) ll_backend__stack_opt__wrapper_arg_5), &ll_backend__stack_opt__conv1_HeadVar__6_6, ((MR_Word) ll_backend__stack_opt__wrapper_arg_7), &ll_backend__stack_opt__conv0_HeadVar__8_8);
    }
#line 3590 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_6 = ((MR_Box) (ll_backend__stack_opt__conv1_HeadVar__6_6));
#line 3592 "ll_backend.stack_opt.c"
    *ll_backend__stack_opt__wrapper_arg_8 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__8_8));
#line 3594 "ll_backend.stack_opt.c"
  }
#line 3596 "ll_backend.stack_opt.c"
}

#line 340 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_50_93_95_48_4_p_0(
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 340 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 340 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 340 "stack_opt.m"
{
#line 366 "stack_opt.m"
  {
#line 366 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 366 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 366 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackVarsSets_10 = (MR_Word) ll_backend__stack_opt__HeadVar__1_1;
#line 366 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackVars_11;
#line 366 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots0_12;
#line 366 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots_13;

#line 368 "stack_opt.m"
    {
#line 368 "stack_opt.m"
      ll_backend__stack_opt__StackVars_11 = parse_tree__set_of_var__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_16_16, ll_backend__stack_opt__StackVarsSets_10);
    }
#line 369 "stack_opt.m"
    ll_backend__stack_opt__ParConjOwnSlots0_12 = (MR_Word) ll_backend__stack_opt__HeadVar__3_3;
#line 370 "stack_opt.m"
    {
#line 370 "stack_opt.m"
      ll_backend__stack_opt__ParConjOwnSlots_13 = parse_tree__set_of_var__union_2_f_0(ll_backend__stack_opt__TypeCtorInfo_16_16, ll_backend__stack_opt__StackVars_11, ll_backend__stack_opt__ParConjOwnSlots0_12);
    }
#line 371 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = (MR_Word) ll_backend__stack_opt__ParConjOwnSlots_13;
#line 366 "stack_opt.m"
  }
#line 340 "stack_opt.m"
}

#line 339 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_p_0(
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 339 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 339 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 339 "stack_opt.m"
{
#line 357 "stack_opt.m"
  {
#line 357 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 357 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackVars_10 = (MR_Word) ll_backend__stack_opt__HeadVar__1_1;
#line 357 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots0_11 = (MR_Word) ll_backend__stack_opt__HeadVar__3_3;
#line 357 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlots_12;

#line 360 "stack_opt.m"
    {
#line 360 "stack_opt.m"
      ll_backend__stack_opt__ParConjOwnSlots_12 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__StackVars_10, ll_backend__stack_opt__ParConjOwnSlots0_11);
    }
#line 361 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = (MR_Word) ll_backend__stack_opt__ParConjOwnSlots_12;
#line 357 "stack_opt.m"
  }
#line 339 "stack_opt.m"
}

#line 338 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 338 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 338 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 338 "stack_opt.m"
{
#line 352 "stack_opt.m"
  {
#line 352 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 352 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = ll_backend__stack_opt__HeadVar__3_3;
#line 352 "stack_opt.m"
  }
#line 338 "stack_opt.m"
}

#line 337 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 337 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 337 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__4_4)
#line 337 "stack_opt.m"
{
#line 347 "stack_opt.m"
  {
#line 347 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 347 "stack_opt.m"
    *ll_backend__stack_opt__HeadVar__4_4 = ll_backend__stack_opt__HeadVar__3_3;
#line 347 "stack_opt.m"
  }
#line 337 "stack_opt.m"
}

#line 533 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1(
#line 533 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 533 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 533 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 533 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 533 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 533 "stack_opt.m"
{
#line 533 "stack_opt.m"
  {
#line 533 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 533 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv2_BenefitNodes_14;
#line 533 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_CostNodes_15;
#line 533 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_ViaCellVars_16;

#line 533 "stack_opt.m"
    {
#line 533 "stack_opt.m"
      ll_backend__stack_opt__apply_matching_for_path_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 6))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv2_BenefitNodes_14, &ll_backend__stack_opt__conv1_CostNodes_15, &ll_backend__stack_opt__conv0_ViaCellVars_16);
    }
#line 533 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv2_BenefitNodes_14));
#line 533 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv1_CostNodes_15));
#line 533 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv0_ViaCellVars_16));
#line 533 "stack_opt.m"
  }
#line 533 "stack_opt.m"
}

#line 525 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(
#line 525 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 525 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_11,
#line 525 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_13,
#line 525 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_14,
#line 525 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_15,
#line 525 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodeSets_16,
#line 525 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodeSets_17,
#line 525 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_18)
#line 525 "stack_opt.m"
{
#line 532 "stack_opt.m"
  while (MR_TRUE)
#line 532 "stack_opt.m"
    {
#line 532 "stack_opt.m"
      /* tailcall optimized into a loop */
#line 532 "stack_opt.m"
      {
#line 532 "stack_opt.m"
        MR_bool ll_backend__stack_opt__succeeded;
#line 532 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_38_38;
#line 532 "stack_opt.m"
        MR_Word ll_backend__stack_opt__BenefitNodeSets0_19;
#line 532 "stack_opt.m"
        MR_Word ll_backend__stack_opt__CostNodeSets0_20;
#line 532 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PathViaCellVars_21;
#line 532 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_25_25;

#line 533 "stack_opt.m"
        {
#line 533 "stack_opt.m"
          ll_backend__stack_opt__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 533 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_12[0]));
#line 533 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 1) = ((MR_Box) (ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0_1));
#line 533 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 533 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 3) = ((MR_Box) (ll_backend__stack_opt__CellVar_10));
#line 533 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 4) = ((MR_Box) (ll_backend__stack_opt__CellVarFlushedLater_11));
#line 533 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 5) = ((MR_Box) (ll_backend__stack_opt__StackOptParams_13));
#line 533 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_25_25, 6) = ((MR_Box) (ll_backend__stack_opt__CandidateArgVars0_15));
#line 533 "stack_opt.m"
        }
#line 3824 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeInfo_38_38 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 533 "stack_opt.m"
        {
#line 533 "stack_opt.m"
          mercury__list__map3_5_p_0((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0, (MR_Word) &ll_backend__stack_opt_scalar_common_1[7], (MR_Word) &ll_backend__stack_opt_scalar_common_1[8], ll_backend__stack_opt__TypeInfo_38_38, ll_backend__stack_opt__V_25_25, ll_backend__stack_opt__PathInfos_14, &ll_backend__stack_opt__BenefitNodeSets0_19, &ll_backend__stack_opt__CostNodeSets0_20, &ll_backend__stack_opt__PathViaCellVars_21);
        }
#line 536 "stack_opt.m"
        {
#line 536 "stack_opt.m"
          ll_backend__stack_opt__succeeded = mercury__list__all_same_1_p_0(ll_backend__stack_opt__TypeInfo_38_38, ll_backend__stack_opt__PathViaCellVars_21);
        }
#line 545 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 537 "stack_opt.m"
          {
#line 537 "stack_opt.m"
            *ll_backend__stack_opt__BenefitNodeSets_16 = ll_backend__stack_opt__BenefitNodeSets0_19;
#line 538 "stack_opt.m"
            *ll_backend__stack_opt__CostNodeSets_17 = ll_backend__stack_opt__CostNodeSets0_20;
#line 541 "stack_opt.m"
            if ((ll_backend__stack_opt__PathViaCellVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "stack_opt.m"
              {
#line 543 "stack_opt.m"
                {
#line 543 "stack_opt.m"
                  *ll_backend__stack_opt__ViaCellVars_18 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                }
#line 542 "stack_opt.m"
              }
#line 541 "stack_opt.m"
            else
#line 540 "stack_opt.m"
              {
#line 540 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_22_22;

#line 540 "stack_opt.m"
                *ll_backend__stack_opt__ViaCellVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__PathViaCellVars_21, (MR_Integer) 0)));
#line 540 "stack_opt.m"
                ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__PathViaCellVars_21, (MR_Integer) 1)));
#line 540 "stack_opt.m"
              }
#line 537 "stack_opt.m"
          }
#line 545 "stack_opt.m"
        else
#line 546 "stack_opt.m"
          {
#line 546 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CandidateArgVars1_23;
#line 546 "stack_opt.m"
            MR_Word ll_backend__stack_opt__FixpointLoop_24;
#line 547 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_26_26;
#line 547 "stack_opt.m"
            MR_Integer ll_backend__stack_opt__V_27_27;
#line 547 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_28_28;
#line 547 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_29_29;
#line 547 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_30_30;

#line 546 "stack_opt.m"
            {
#line 546 "stack_opt.m"
              ll_backend__stack_opt__CandidateArgVars1_23 = parse_tree__set_of_var__intersect_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__PathViaCellVars_21);
            }
#line 547 "stack_opt.m"
            ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 0)));
#line 547 "stack_opt.m"
            ll_backend__stack_opt__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 1)));
#line 547 "stack_opt.m"
            ll_backend__stack_opt__FixpointLoop_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 547 "stack_opt.m"
            ll_backend__stack_opt__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 547 "stack_opt.m"
            ll_backend__stack_opt__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 547 "stack_opt.m"
            ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_13, (MR_Integer) 3)));
#line 553 "stack_opt.m"
#line 553 "stack_opt.m"
            switch (ll_backend__stack_opt__FixpointLoop_24) {
#line 553 "stack_opt.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 553 "stack_opt.m"
              case (MR_Integer) 0:
#line 549 "stack_opt.m"
                {
#line 550 "stack_opt.m"
                  *ll_backend__stack_opt__BenefitNodeSets_16 = ll_backend__stack_opt__BenefitNodeSets0_19;
#line 551 "stack_opt.m"
                  *ll_backend__stack_opt__CostNodeSets_17 = ll_backend__stack_opt__CostNodeSets0_20;
#line 552 "stack_opt.m"
                  *ll_backend__stack_opt__ViaCellVars_18 = ll_backend__stack_opt__CandidateArgVars1_23;
#line 549 "stack_opt.m"
                }
#line 553 "stack_opt.m"
                break;
#line 553 "stack_opt.m"
              case (MR_Integer) 1:
#line 555 "stack_opt.m"
                {
#line 555 "stack_opt.m"
                  /* direct tailcall eliminated */
#line 555 "stack_opt.m"
                  {
#line 555 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__CandidateArgVars0__tmp_copy_15 = ll_backend__stack_opt__CandidateArgVars1_23;

#line 555 "stack_opt.m"
                    ll_backend__stack_opt__CandidateArgVars0_15 = ll_backend__stack_opt__CandidateArgVars0__tmp_copy_15;
#line 555 "stack_opt.m"
                  }
#line 555 "stack_opt.m"
                  continue;
#line 555 "stack_opt.m"
                }
#line 553 "stack_opt.m"
                break;
#line 553 "stack_opt.m"
            }
#line 546 "stack_opt.m"
          }
#line 532 "stack_opt.m"
      }
#line 532 "stack_opt.m"
      break;
#line 532 "stack_opt.m"
    }
#line 525 "stack_opt.m"
}

#line 505 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0(
#line 505 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_8,
#line 505 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_9,
#line 505 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 505 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfos_12,
#line 505 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars0_13,
#line 505 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_14)
#line 505 "stack_opt.m"
{
#line 510 "stack_opt.m"
  {
#line 510 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 510 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_31_31;
#line 510 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_32_32;
#line 510 "stack_opt.m"
    MR_Word ll_backend__stack_opt__BenefitNodeSets_15;
#line 510 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CostNodeSets_16;
#line 510 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ViaCellVars0_17;
#line 510 "stack_opt.m"
    MR_Word ll_backend__stack_opt__BenefitNodes_18;
#line 510 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CostNodes_19;
#line 510 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__NumBenefitNodes_20;
#line 510 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__NumCostNodes_21;
#line 510 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__AllPathNodeRatio_22;
#line 518 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_26_26;
#line 518 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_27_27;
#line 518 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_28_28;
#line 518 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_29_29;
#line 518 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_30_30;
#line 519 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__V_23_23;
#line 519 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__V_24_24;

#line 511 "stack_opt.m"
    {
#line 511 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_p_0(ll_backend__stack_opt__CellVar_8, ll_backend__stack_opt__CellVarFlushedLater_9, ll_backend__stack_opt__StackOptParams_11, ll_backend__stack_opt__PathInfos_12, ll_backend__stack_opt__CandidateArgVars0_13, &ll_backend__stack_opt__BenefitNodeSets_15, &ll_backend__stack_opt__CostNodeSets_16, &ll_backend__stack_opt__ViaCellVars0_17);
    }
#line 4020 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_31_31 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 514 "stack_opt.m"
    {
#line 514 "stack_opt.m"
      ll_backend__stack_opt__BenefitNodes_18 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_31_31, ll_backend__stack_opt__BenefitNodeSets_15);
    }
#line 4027 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_32_32 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 515 "stack_opt.m"
    {
#line 515 "stack_opt.m"
      ll_backend__stack_opt__CostNodes_19 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_32_32, ll_backend__stack_opt__CostNodeSets_16);
    }
#line 516 "stack_opt.m"
    {
#line 516 "stack_opt.m"
      mercury__set__count_2_p_0(ll_backend__stack_opt__TypeCtorInfo_31_31, ll_backend__stack_opt__BenefitNodes_18, &ll_backend__stack_opt__NumBenefitNodes_20);
    }
#line 517 "stack_opt.m"
    {
#line 517 "stack_opt.m"
      mercury__set__count_2_p_0(ll_backend__stack_opt__TypeCtorInfo_32_32, ll_backend__stack_opt__CostNodes_19, &ll_backend__stack_opt__NumCostNodes_21);
    }
#line 518 "stack_opt.m"
    ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 0)));
#line 518 "stack_opt.m"
    ll_backend__stack_opt__AllPathNodeRatio_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 1)));
#line 518 "stack_opt.m"
    ll_backend__stack_opt__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 518 "stack_opt.m"
    ll_backend__stack_opt__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 518 "stack_opt.m"
    ll_backend__stack_opt__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 518 "stack_opt.m"
    ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 3)));
#line 519 "stack_opt.m"
    ll_backend__stack_opt__V_23_23 = (ll_backend__stack_opt__NumBenefitNodes_20 * (MR_Integer) 100);
#line 519 "stack_opt.m"
    ll_backend__stack_opt__V_24_24 = (ll_backend__stack_opt__NumCostNodes_21 * ll_backend__stack_opt__AllPathNodeRatio_22);
#line 519 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_23_23 >= ll_backend__stack_opt__V_24_24);
#line 521 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 520 "stack_opt.m"
      *ll_backend__stack_opt__ViaCellVars_14 = ll_backend__stack_opt__ViaCellVars0_17;
#line 521 "stack_opt.m"
    else
#line 522 "stack_opt.m"
      {
#line 522 "stack_opt.m"
        {
#line 522 "stack_opt.m"
          *ll_backend__stack_opt__ViaCellVars_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 522 "stack_opt.m"
      }
#line 510 "stack_opt.m"
  }
#line 505 "stack_opt.m"
}

#line 1149 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1149__1_3_p_0(
#line 1149 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_93)
#line 1149 "stack_opt.m"
{
#line 1149 "stack_opt.m"
  {
#line 1149 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1149 "stack_opt.m"
    {
#line 1149 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__HeadVar__1_93)));
#line 1149 "stack_opt.m"
      return;
    }
#line 1149 "stack_opt.m"
  }
#line 1149 "stack_opt.m"
}

#line 1146 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1146__1_3_p_0(
#line 1146 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_89)
#line 1146 "stack_opt.m"
{
#line 1146 "stack_opt.m"
  {
#line 1146 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1146 "stack_opt.m"
    {
#line 1146 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__HeadVar__1_89)));
#line 1146 "stack_opt.m"
      return;
    }
#line 1146 "stack_opt.m"
  }
#line 1146 "stack_opt.m"
}

#line 1123 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1123__1_2_p_0(
#line 1123 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_80,
#line 1123 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_81)
#line 1123 "stack_opt.m"
{
#line 1123 "stack_opt.m"
  {
#line 1123 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1123 "stack_opt.m"
    {
#line 1123 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_80, ll_backend__stack_opt__HeadVar__2_81);
#line 1123 "stack_opt.m"
      return;
    }
#line 1123 "stack_opt.m"
  }
#line 1123 "stack_opt.m"
}

#line 1122 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1122__1_2_p_0(
#line 1122 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_75,
#line 1122 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_76)
#line 1122 "stack_opt.m"
{
#line 1122 "stack_opt.m"
  {
#line 1122 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1122 "stack_opt.m"
    {
#line 1122 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_75, ll_backend__stack_opt__HeadVar__2_76);
#line 1122 "stack_opt.m"
      return;
    }
#line 1122 "stack_opt.m"
  }
#line 1122 "stack_opt.m"
}

#line 1104 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1104__1_2_p_0(
#line 1104 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_51,
#line 1104 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_52)
#line 1104 "stack_opt.m"
{
#line 1104 "stack_opt.m"
  {
#line 1104 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1104 "stack_opt.m"
    {
#line 1104 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_51, ll_backend__stack_opt__HeadVar__2_52);
#line 1104 "stack_opt.m"
      return;
    }
#line 1104 "stack_opt.m"
  }
#line 1104 "stack_opt.m"
}

#line 1091 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1091__1_2_p_0(
#line 1091 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_45,
#line 1091 "stack_opt.m"
  MR_Integer * ll_backend__stack_opt__HeadVar__2_46)
#line 1091 "stack_opt.m"
{
#line 1091 "stack_opt.m"
  {
#line 1091 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1091 "stack_opt.m"
    {
#line 1091 "stack_opt.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__HeadVar__1_45, ll_backend__stack_opt__HeadVar__2_46);
#line 1091 "stack_opt.m"
      return;
    }
#line 1091 "stack_opt.m"
  }
#line 1091 "stack_opt.m"
}

#line 849 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__849__1_2_p_0(
#line 849 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_36,
#line 849 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_37)
#line 849 "stack_opt.m"
{
#line 849 "stack_opt.m"
  {
#line 849 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__1_36 == ll_backend__stack_opt__HeadVar__2_37);

#line 849 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 849 "stack_opt.m"
  }
#line 849 "stack_opt.m"
}

#line 845 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__845__1_2_p_0(
#line 845 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_42,
#line 845 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_43)
#line 845 "stack_opt.m"
{
#line 845 "stack_opt.m"
  {
#line 845 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__1_42 == ll_backend__stack_opt__HeadVar__2_43);

#line 845 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 845 "stack_opt.m"
  }
#line 845 "stack_opt.m"
}

#line 836 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__836__1_2_p_0(
#line 836 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_54,
#line 836 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_55)
#line 836 "stack_opt.m"
{
#line 836 "stack_opt.m"
  {
#line 836 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__1_54 == ll_backend__stack_opt__HeadVar__2_55);

#line 836 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 836 "stack_opt.m"
  }
#line 836 "stack_opt.m"
}

#line 698 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__IntroducedFrom__pred__close_path__698__1_1_p_0(
#line 698 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FirstSegment0_7)
#line 698 "stack_opt.m"
{
#line 698 "stack_opt.m"
  {
#line 698 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 698 "stack_opt.m"
    {
#line 698 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__FirstSegment0_7);
    }
#line 698 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 698 "stack_opt.m"
  }
#line 698 "stack_opt.m"
}

#line 340 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
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
#line 366 "stack_opt.m"
  {
#line 366 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 366 "stack_opt.m"
    {
#line 366 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_99_117_114_115_105_118_101_95_99_97_108_108_95_102_111_114_95_108_111_111_112_95_99_111_110_116_114_111_108_95_52_95_95_91_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
#line 366 "stack_opt.m"
      return;
    }
#line 366 "stack_opt.m"
  }
#line 340 "stack_opt.m"
}

#line 339 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
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
#line 357 "stack_opt.m"
  {
#line 357 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 357 "stack_opt.m"
    {
#line 357 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
#line 357 "stack_opt.m"
      return;
    }
#line 357 "stack_opt.m"
  }
#line 339 "stack_opt.m"
}

#line 338 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
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
#line 352 "stack_opt.m"
  {
#line 352 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 352 "stack_opt.m"
    {
#line 352 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
#line 352 "stack_opt.m"
      return;
    }
#line 352 "stack_opt.m"
  }
#line 338 "stack_opt.m"
}

#line 337 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
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
#line 347 "stack_opt.m"
  {
#line 347 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 347 "stack_opt.m"
    {
#line 347 "stack_opt.m"
      ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_p_0(ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4);
#line 347 "stack_opt.m"
      return;
    }
#line 347 "stack_opt.m"
  }
#line 337 "stack_opt.m"
}

#line 377 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_p_0(
#line 377 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 377 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 377 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3,
#line 377 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__4_4,
#line 377 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 377 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__6_6,
#line 377 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__7_7,
#line 377 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__8_8)
#line 377 "stack_opt.m"
{
#line 377 "stack_opt.m"
  {
#line 377 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 377 "stack_opt.m"
    {
#line 377 "stack_opt.m"
      ll_backend__stack_opt__use_cell_8_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__HeadVar__2_2, ll_backend__stack_opt__HeadVar__3_3, ll_backend__stack_opt__HeadVar__4_4, ll_backend__stack_opt__HeadVar__5_5, ll_backend__stack_opt__HeadVar__6_6, ll_backend__stack_opt__HeadVar__7_7, ll_backend__stack_opt__HeadVar__8_8);
#line 377 "stack_opt.m"
      return;
    }
#line 377 "stack_opt.m"
  }
#line 377 "stack_opt.m"
}

#line 146 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_params_0_0(
#line 146 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 146 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 146 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 146 "stack_opt.m"
{
#line 146 "stack_opt.m"
  {
#line 146 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 146 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_21 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 146 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_22 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 146 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_21 == ll_backend__stack_opt__CastY_22);
#line 146 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 4503 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 146 "stack_opt.m"
    else
#line 146 "stack_opt.m"
      {
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 146 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 146 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16;

#line 146 "stack_opt.m"
        {
#line 146 "stack_opt.m"
          backend_libs__matching____Compare____matching_params_0_0(&ll_backend__stack_opt__V_16_16, ll_backend__stack_opt__V_4_4, ll_backend__stack_opt__V_10_10);
        }
#line 4541 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_16_16 == (MR_Integer) 0);
#line 146 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 146 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 146 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_16_16;
#line 146 "stack_opt.m"
        else
#line 146 "stack_opt.m"
          {
#line 146 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_17_17;

#line 146 "stack_opt.m"
            {
#line 146 "stack_opt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_17_17, ll_backend__stack_opt__V_5_5, ll_backend__stack_opt__V_11_11);
            }
#line 4561 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_17_17 == (MR_Integer) 0);
#line 146 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 146 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 146 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_17_17;
#line 146 "stack_opt.m"
            else
#line 146 "stack_opt.m"
              {
#line 146 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_18_18;
#line 146 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_29_29 = (MR_Integer) ll_backend__stack_opt__V_6_6;
#line 146 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_30_30 = (MR_Integer) ll_backend__stack_opt__V_12_12;

#line 146 "stack_opt.m"
                {
#line 146 "stack_opt.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_18_18, ll_backend__stack_opt__V_29_29, ll_backend__stack_opt__V_30_30);
                }
#line 4585 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_18_18 == (MR_Integer) 0);
#line 146 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 146 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 146 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_18_18;
#line 146 "stack_opt.m"
                else
#line 146 "stack_opt.m"
                  {
#line 146 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_19_19;
#line 146 "stack_opt.m"
                    MR_Integer ll_backend__stack_opt__V_31_31 = (MR_Integer) ll_backend__stack_opt__V_7_7;
#line 146 "stack_opt.m"
                    MR_Integer ll_backend__stack_opt__V_32_32 = (MR_Integer) ll_backend__stack_opt__V_13_13;

#line 146 "stack_opt.m"
                    {
#line 146 "stack_opt.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_19_19, ll_backend__stack_opt__V_31_31, ll_backend__stack_opt__V_32_32);
                    }
#line 4609 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_19_19 == (MR_Integer) 0);
#line 146 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 146 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 146 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_19_19;
#line 146 "stack_opt.m"
                    else
#line 146 "stack_opt.m"
                      {
#line 146 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_20_20;
#line 146 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_33_33 = (MR_Integer) ll_backend__stack_opt__V_8_8;
#line 146 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_34_34 = (MR_Integer) ll_backend__stack_opt__V_14_14;

#line 146 "stack_opt.m"
                        {
#line 146 "stack_opt.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_20_20, ll_backend__stack_opt__V_33_33, ll_backend__stack_opt__V_34_34);
                        }
#line 4633 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_20_20 == (MR_Integer) 0);
#line 146 "stack_opt.m"
                        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 146 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 146 "stack_opt.m"
                          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_20_20;
#line 146 "stack_opt.m"
                        else
#line 146 "stack_opt.m"
                          {
#line 146 "stack_opt.m"
                            {
#line 146 "stack_opt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
#line 146 "stack_opt.m"
                              return;
                            }
#line 146 "stack_opt.m"
                          }
#line 146 "stack_opt.m"
                      }
#line 146 "stack_opt.m"
                  }
#line 146 "stack_opt.m"
              }
#line 146 "stack_opt.m"
          }
#line 146 "stack_opt.m"
      }
#line 146 "stack_opt.m"
  }
#line 146 "stack_opt.m"
}

#line 146 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_params_0_0(
#line 146 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 146 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 146 "stack_opt.m"
{
#line 146 "stack_opt.m"
  {
#line 146 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 146 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_15 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 146 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_16 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 146 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_15 == ll_backend__stack_opt__CastY_16);
#line 146 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 146 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 146 "stack_opt.m"
    else
#line 146 "stack_opt.m"
      {
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_18_18;
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 146 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 146 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 146 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));

#line 4724 "ll_backend.stack_opt.c"
        {
#line 4726 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = backend_libs__matching____Unify____matching_params_0_0(ll_backend__stack_opt__V_3_3, ll_backend__stack_opt__V_9_9);
        }
#line 146 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 146 "stack_opt.m"
          {
#line 4733 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_4_4 == ll_backend__stack_opt__V_10_10);
#line 146 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 146 "stack_opt.m"
              {
#line 4739 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_5_5 == ll_backend__stack_opt__V_11_11);
#line 146 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 146 "stack_opt.m"
                  {
#line 4745 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_6_6 == ll_backend__stack_opt__V_12_12);
#line 146 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 146 "stack_opt.m"
                      {
#line 4751 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_7_7 == ll_backend__stack_opt__V_13_13);
#line 146 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 146 "stack_opt.m"
                          {
#line 4757 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__TypeInfo_18_18 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 4759 "ll_backend.stack_opt.c"
                            {
#line 4761 "ll_backend.stack_opt.c"
                              return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_18_18, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                            }
#line 146 "stack_opt.m"
                          }
#line 146 "stack_opt.m"
                      }
#line 146 "stack_opt.m"
                  }
#line 146 "stack_opt.m"
              }
#line 146 "stack_opt.m"
          }
#line 146 "stack_opt.m"
      }
#line 146 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 146 "stack_opt.m"
  }
#line 146 "stack_opt.m"
}

#line 169 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____stack_opt_info_0_0(
#line 169 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 169 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 169 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 169 "stack_opt.m"
{
#line 169 "stack_opt.m"
  {
#line 169 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 169 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_12 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 169 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_13 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 169 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_12 == ll_backend__stack_opt__CastY_13);
#line 169 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 4807 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "stack_opt.m"
    else
#line 169 "stack_opt.m"
      {
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10;

#line 169 "stack_opt.m"
        {
#line 169 "stack_opt.m"
          ll_backend__stack_opt____Compare____stack_opt_params_0_0(&ll_backend__stack_opt__V_10_10, ll_backend__stack_opt__V_4_4, ll_backend__stack_opt__V_7_7);
        }
#line 4833 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_10_10 == (MR_Integer) 0);
#line 169 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 169 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 169 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_10_10;
#line 169 "stack_opt.m"
        else
#line 169 "stack_opt.m"
          {
#line 169 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_11_11;

#line 169 "stack_opt.m"
            {
#line 169 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_2[1], &ll_backend__stack_opt__V_11_11, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
            }
#line 4853 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_11_11 == (MR_Integer) 0);
#line 169 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 169 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 169 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_11_11;
#line 169 "stack_opt.m"
            else
#line 169 "stack_opt.m"
              {
#line 169 "stack_opt.m"
                {
#line 169 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[14], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
#line 169 "stack_opt.m"
                  return;
                }
#line 169 "stack_opt.m"
              }
#line 169 "stack_opt.m"
          }
#line 169 "stack_opt.m"
      }
#line 169 "stack_opt.m"
  }
#line 169 "stack_opt.m"
}

#line 169 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____stack_opt_info_0_0(
#line 169 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 169 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 169 "stack_opt.m"
{
#line 169 "stack_opt.m"
  {
#line 169 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 169 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_9 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 169 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_10 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 169 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_9 == ll_backend__stack_opt__CastY_10);
#line 169 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 169 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 169 "stack_opt.m"
    else
#line 169 "stack_opt.m"
      {
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_11_11;
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_12_12;
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));

#line 4928 "ll_backend.stack_opt.c"
        {
#line 4930 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = ll_backend__stack_opt____Unify____stack_opt_params_0_0(ll_backend__stack_opt__V_3_3, ll_backend__stack_opt__V_6_6);
        }
#line 169 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 169 "stack_opt.m"
          {
#line 4937 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_11_11 = (MR_Word) &ll_backend__stack_opt_scalar_common_2[1];
#line 4939 "ll_backend.stack_opt.c"
            {
#line 4941 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_11_11, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_7_7)));
            }
#line 169 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 169 "stack_opt.m"
              {
#line 4948 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_12_12 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[14];
#line 4950 "ll_backend.stack_opt.c"
                {
#line 4952 "ll_backend.stack_opt.c"
                  return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_12_12, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
                }
#line 169 "stack_opt.m"
              }
#line 169 "stack_opt.m"
          }
#line 169 "stack_opt.m"
      }
#line 169 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 169 "stack_opt.m"
  }
#line 169 "stack_opt.m"
}

#line 657 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____path_0_0(
#line 657 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 657 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 657 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 657 "stack_opt.m"
{
#line 657 "stack_opt.m"
  {
#line 657 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 657 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_21 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 657 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_22 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 657 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_21 == ll_backend__stack_opt__CastY_22);
#line 657 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 4992 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 657 "stack_opt.m"
    else
#line 657 "stack_opt.m"
      {
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 4)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 5)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16;
#line 657 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_29_29 = (MR_Integer) ll_backend__stack_opt__V_4_4;
#line 657 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_30_30 = (MR_Integer) ll_backend__stack_opt__V_10_10;

#line 657 "stack_opt.m"
        {
#line 657 "stack_opt.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_16_16, ll_backend__stack_opt__V_29_29, ll_backend__stack_opt__V_30_30);
        }
#line 5034 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_16_16 == (MR_Integer) 0);
#line 657 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 657 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 657 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_16_16;
#line 657 "stack_opt.m"
        else
#line 657 "stack_opt.m"
          {
#line 657 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_17_17;

#line 657 "stack_opt.m"
            {
#line 657 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_17_17, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_11_11)));
            }
#line 5054 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_17_17 == (MR_Integer) 0);
#line 657 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 657 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 657 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_17_17;
#line 657 "stack_opt.m"
            else
#line 657 "stack_opt.m"
              {
#line 657 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_18_18;

#line 657 "stack_opt.m"
                {
#line 657 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_18_18, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                }
#line 5074 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_18_18 == (MR_Integer) 0);
#line 657 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 657 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 657 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_18_18;
#line 657 "stack_opt.m"
                else
#line 657 "stack_opt.m"
                  {
#line 657 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_19_19;

#line 657 "stack_opt.m"
                    {
#line 657 "stack_opt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[5], &ll_backend__stack_opt__V_19_19, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
                    }
#line 5094 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_19_19 == (MR_Integer) 0);
#line 657 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 657 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 657 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_19_19;
#line 657 "stack_opt.m"
                    else
#line 657 "stack_opt.m"
                      {
#line 657 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_20_20;

#line 657 "stack_opt.m"
                        {
#line 657 "stack_opt.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], &ll_backend__stack_opt__V_20_20, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                        }
#line 5114 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_20_20 == (MR_Integer) 0);
#line 657 "stack_opt.m"
                        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 657 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 657 "stack_opt.m"
                          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_20_20;
#line 657 "stack_opt.m"
                        else
#line 657 "stack_opt.m"
                          {
#line 657 "stack_opt.m"
                            {
#line 657 "stack_opt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
#line 657 "stack_opt.m"
                              return;
                            }
#line 657 "stack_opt.m"
                          }
#line 657 "stack_opt.m"
                      }
#line 657 "stack_opt.m"
                  }
#line 657 "stack_opt.m"
              }
#line 657 "stack_opt.m"
          }
#line 657 "stack_opt.m"
      }
#line 657 "stack_opt.m"
  }
#line 657 "stack_opt.m"
}

#line 657 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____path_0_0(
#line 657 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 657 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 657 "stack_opt.m"
{
#line 657 "stack_opt.m"
  {
#line 657 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 657 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_15 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 657 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_16 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 657 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_15 == ll_backend__stack_opt__CastY_16);
#line 657 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 657 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 657 "stack_opt.m"
    else
#line 657 "stack_opt.m"
      {
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_17_17;
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_18_18;
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_19_19;
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_20_20;
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_21_21;
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 4)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 5)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 657 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));

#line 5213 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_3_3 == ll_backend__stack_opt__V_9_9);
#line 657 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 657 "stack_opt.m"
          {
#line 5219 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_17_17 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 5221 "ll_backend.stack_opt.c"
            {
#line 5223 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_17_17, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_10_10)));
            }
#line 657 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 657 "stack_opt.m"
              {
#line 5230 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_18_18 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 5232 "ll_backend.stack_opt.c"
                {
#line 5234 "ll_backend.stack_opt.c"
                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_18_18, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_11_11)));
                }
#line 657 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 657 "stack_opt.m"
                  {
#line 5241 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__TypeInfo_19_19 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[5];
#line 5243 "ll_backend.stack_opt.c"
                    {
#line 5245 "ll_backend.stack_opt.c"
                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_19_19, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                    }
#line 657 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 657 "stack_opt.m"
                      {
#line 5252 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__TypeInfo_20_20 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 5254 "ll_backend.stack_opt.c"
                        {
#line 5256 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_20_20, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
                        }
#line 657 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 657 "stack_opt.m"
                          {
#line 5263 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__TypeInfo_21_21 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 5265 "ll_backend.stack_opt.c"
                            {
#line 5267 "ll_backend.stack_opt.c"
                              return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_21_21, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                            }
#line 657 "stack_opt.m"
                          }
#line 657 "stack_opt.m"
                      }
#line 657 "stack_opt.m"
                  }
#line 657 "stack_opt.m"
              }
#line 657 "stack_opt.m"
          }
#line 657 "stack_opt.m"
      }
#line 657 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 657 "stack_opt.m"
  }
#line 657 "stack_opt.m"
}

#line 136 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____opt_stack_alloc_0_0(
#line 136 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 136 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 136 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 136 "stack_opt.m"
{
#line 136 "stack_opt.m"
  {
#line 136 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 136 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_6 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 136 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_7 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 136 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_6 == ll_backend__stack_opt__CastY_7);
#line 136 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5313 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 136 "stack_opt.m"
    else
#line 136 "stack_opt.m"
      {
#line 136 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = (MR_Word) ll_backend__stack_opt__HeadVar__2_2;
#line 136 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = (MR_Word) ll_backend__stack_opt__HeadVar__3_3;

#line 136 "stack_opt.m"
        {
#line 136 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_5_5)));
#line 136 "stack_opt.m"
          return;
        }
#line 136 "stack_opt.m"
      }
#line 136 "stack_opt.m"
  }
#line 136 "stack_opt.m"
}

#line 136 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____opt_stack_alloc_0_0(
#line 136 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 136 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 136 "stack_opt.m"
{
#line 136 "stack_opt.m"
  {
#line 136 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 136 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_5 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 136 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_6 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 136 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_5 == ll_backend__stack_opt__CastY_6);
#line 136 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 136 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 136 "stack_opt.m"
    else
#line 136 "stack_opt.m"
      {
#line 136 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = (MR_Word) ll_backend__stack_opt__HeadVar__1_1;
#line 136 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = (MR_Word) ll_backend__stack_opt__HeadVar__2_2;

#line 5371 "ll_backend.stack_opt.c"
        {
#line 5373 "ll_backend.stack_opt.c"
          return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_4_4)));
        }
#line 136 "stack_opt.m"
      }
#line 136 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 136 "stack_opt.m"
  }
#line 136 "stack_opt.m"
}

#line 156 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____matching_result_0_0(
#line 156 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 156 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 156 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 156 "stack_opt.m"
{
#line 156 "stack_opt.m"
  {
#line 156 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 156 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_30 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 156 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_31 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 156 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_30 == ll_backend__stack_opt__CastY_31);
#line 156 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5409 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 156 "stack_opt.m"
    else
#line 156 "stack_opt.m"
      {
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 6)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 7)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 8)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 4)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 5)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 6)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 7)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 8)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_22_22;

#line 156 "stack_opt.m"
        {
#line 156 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[0], &ll_backend__stack_opt__V_22_22, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
        }
#line 5459 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_22_22 == (MR_Integer) 0);
#line 156 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 156 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_22_22;
#line 156 "stack_opt.m"
        else
#line 156 "stack_opt.m"
          {
#line 156 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_23_23;

#line 156 "stack_opt.m"
            {
#line 156 "stack_opt.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&ll_backend__stack_opt__V_23_23, ll_backend__stack_opt__V_5_5, ll_backend__stack_opt__V_14_14);
            }
#line 5479 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_23_23 == (MR_Integer) 0);
#line 156 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 156 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_23_23;
#line 156 "stack_opt.m"
            else
#line 156 "stack_opt.m"
              {
#line 156 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_24_24;

#line 156 "stack_opt.m"
                {
#line 156 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[13], &ll_backend__stack_opt__V_24_24, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
                }
#line 5499 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_24_24 == (MR_Integer) 0);
#line 156 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 156 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_24_24;
#line 156 "stack_opt.m"
                else
#line 156 "stack_opt.m"
                  {
#line 156 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_25_25;

#line 156 "stack_opt.m"
                    {
#line 156 "stack_opt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_25_25, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_16_16)));
                    }
#line 5519 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_25_25 == (MR_Integer) 0);
#line 156 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 156 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_25_25;
#line 156 "stack_opt.m"
                    else
#line 156 "stack_opt.m"
                      {
#line 156 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_26_26;
#line 156 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_41_41 = (MR_Integer) ll_backend__stack_opt__V_8_8;
#line 156 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_42_42 = (MR_Integer) ll_backend__stack_opt__V_17_17;

#line 156 "stack_opt.m"
                        {
#line 156 "stack_opt.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_26_26, ll_backend__stack_opt__V_41_41, ll_backend__stack_opt__V_42_42);
                        }
#line 5543 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_26_26 == (MR_Integer) 0);
#line 156 "stack_opt.m"
                        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 156 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
                          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_26_26;
#line 156 "stack_opt.m"
                        else
#line 156 "stack_opt.m"
                          {
#line 156 "stack_opt.m"
                            MR_Word ll_backend__stack_opt__V_27_27;

#line 156 "stack_opt.m"
                            {
#line 156 "stack_opt.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], &ll_backend__stack_opt__V_27_27, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_18_18)));
                            }
#line 5563 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_27_27 == (MR_Integer) 0);
#line 156 "stack_opt.m"
                            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 156 "stack_opt.m"
                            if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
                              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_27_27;
#line 156 "stack_opt.m"
                            else
#line 156 "stack_opt.m"
                              {
#line 156 "stack_opt.m"
                                MR_Word ll_backend__stack_opt__V_28_28;

#line 156 "stack_opt.m"
                                {
#line 156 "stack_opt.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], &ll_backend__stack_opt__V_28_28, ((MR_Box) (ll_backend__stack_opt__V_10_10)), ((MR_Box) (ll_backend__stack_opt__V_19_19)));
                                }
#line 5583 "ll_backend.stack_opt.c"
                                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_28_28 == (MR_Integer) 0);
#line 156 "stack_opt.m"
                                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 156 "stack_opt.m"
                                if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
                                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_28_28;
#line 156 "stack_opt.m"
                                else
#line 156 "stack_opt.m"
                                  {
#line 156 "stack_opt.m"
                                    MR_Word ll_backend__stack_opt__V_29_29;

#line 156 "stack_opt.m"
                                    {
#line 156 "stack_opt.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], &ll_backend__stack_opt__V_29_29, ((MR_Box) (ll_backend__stack_opt__V_11_11)), ((MR_Box) (ll_backend__stack_opt__V_20_20)));
                                    }
#line 5603 "ll_backend.stack_opt.c"
                                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_29_29 == (MR_Integer) 0);
#line 156 "stack_opt.m"
                                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 156 "stack_opt.m"
                                    if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
                                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_29_29;
#line 156 "stack_opt.m"
                                    else
#line 156 "stack_opt.m"
                                      {
#line 156 "stack_opt.m"
                                        {
#line 156 "stack_opt.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_12_12)), ((MR_Box) (ll_backend__stack_opt__V_21_21)));
#line 156 "stack_opt.m"
                                          return;
                                        }
#line 156 "stack_opt.m"
                                      }
#line 156 "stack_opt.m"
                                  }
#line 156 "stack_opt.m"
                              }
#line 156 "stack_opt.m"
                          }
#line 156 "stack_opt.m"
                      }
#line 156 "stack_opt.m"
                  }
#line 156 "stack_opt.m"
              }
#line 156 "stack_opt.m"
          }
#line 156 "stack_opt.m"
      }
#line 156 "stack_opt.m"
  }
#line 156 "stack_opt.m"
}

#line 156 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____matching_result_0_0(
#line 156 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 156 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 156 "stack_opt.m"
{
#line 156 "stack_opt.m"
  {
#line 156 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 156 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_21 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 156 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_22 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 156 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_21 == ll_backend__stack_opt__CastY_22);
#line 156 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 156 "stack_opt.m"
    else
#line 156 "stack_opt.m"
      {
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_25_25;
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_26_26;
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_28_28;
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_29_29;
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_30_30;
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_31_31;
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 4)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 5)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 6)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 7)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 8)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 5)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 6)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 7)));
#line 156 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 8)));
#line 156 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_32_32;
#line 156 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_33_33;

#line 5726 "ll_backend.stack_opt.c"
        {
#line 5728 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[0], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
        }
#line 156 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
          {
#line 5735 "ll_backend.stack_opt.c"
            {
#line 5737 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ll_backend__stack_opt__V_4_4, ll_backend__stack_opt__V_13_13);
            }
#line 156 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
              {
#line 5744 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_25_25 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[13];
#line 5746 "ll_backend.stack_opt.c"
                {
#line 5748 "ll_backend.stack_opt.c"
                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_25_25, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_14_14)));
                }
#line 156 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
                  {
#line 5755 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__TypeInfo_26_26 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 5757 "ll_backend.stack_opt.c"
                    {
#line 5759 "ll_backend.stack_opt.c"
                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_26_26, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_15_15)));
                    }
#line 156 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
                      {
#line 5766 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__V_32_32 = (MR_Integer) ll_backend__stack_opt__V_7_7;
#line 5768 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__V_33_33 = (MR_Integer) ll_backend__stack_opt__V_16_16;
#line 5770 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_32_32 == ll_backend__stack_opt__V_33_33);
#line 156 "stack_opt.m"
                        if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
                          {
#line 5776 "ll_backend.stack_opt.c"
                            ll_backend__stack_opt__TypeInfo_28_28 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 5778 "ll_backend.stack_opt.c"
                            {
#line 5780 "ll_backend.stack_opt.c"
                              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_28_28, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_17_17)));
                            }
#line 156 "stack_opt.m"
                            if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
                              {
#line 5787 "ll_backend.stack_opt.c"
                                ll_backend__stack_opt__TypeInfo_29_29 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 5789 "ll_backend.stack_opt.c"
                                {
#line 5791 "ll_backend.stack_opt.c"
                                  ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_29_29, ((MR_Box) (ll_backend__stack_opt__V_9_9)), ((MR_Box) (ll_backend__stack_opt__V_18_18)));
                                }
#line 156 "stack_opt.m"
                                if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
                                  {
#line 5798 "ll_backend.stack_opt.c"
                                    ll_backend__stack_opt__TypeInfo_30_30 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 5800 "ll_backend.stack_opt.c"
                                    {
#line 5802 "ll_backend.stack_opt.c"
                                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_30_30, ((MR_Box) (ll_backend__stack_opt__V_10_10)), ((MR_Box) (ll_backend__stack_opt__V_19_19)));
                                    }
#line 156 "stack_opt.m"
                                    if (ll_backend__stack_opt__succeeded)
#line 156 "stack_opt.m"
                                      {
#line 5809 "ll_backend.stack_opt.c"
                                        ll_backend__stack_opt__TypeInfo_31_31 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 5811 "ll_backend.stack_opt.c"
                                        {
#line 5813 "ll_backend.stack_opt.c"
                                          return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_31_31, ((MR_Box) (ll_backend__stack_opt__V_11_11)), ((MR_Box) (ll_backend__stack_opt__V_20_20)));
                                        }
#line 156 "stack_opt.m"
                                      }
#line 156 "stack_opt.m"
                                  }
#line 156 "stack_opt.m"
                              }
#line 156 "stack_opt.m"
                          }
#line 156 "stack_opt.m"
                      }
#line 156 "stack_opt.m"
                  }
#line 156 "stack_opt.m"
              }
#line 156 "stack_opt.m"
          }
#line 156 "stack_opt.m"
      }
#line 156 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 156 "stack_opt.m"
  }
#line 156 "stack_opt.m"
}

#line 380 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_path_info_0_0(
#line 380 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 380 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 380 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 380 "stack_opt.m"
{
#line 380 "stack_opt.m"
  {
#line 380 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 380 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_9 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 380 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_10 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 380 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_9 == ll_backend__stack_opt__CastY_10);
#line 380 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 5865 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 380 "stack_opt.m"
    else
#line 380 "stack_opt.m"
      {
#line 380 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 380 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 380 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8;

#line 380 "stack_opt.m"
        {
#line 380 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_8_8, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_6_6)));
        }
#line 5887 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_8_8 == (MR_Integer) 0);
#line 380 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 380 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 380 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_8_8;
#line 380 "stack_opt.m"
        else
#line 380 "stack_opt.m"
          {
#line 380 "stack_opt.m"
            {
#line 380 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[5], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_7_7)));
#line 380 "stack_opt.m"
              return;
            }
#line 380 "stack_opt.m"
          }
#line 380 "stack_opt.m"
      }
#line 380 "stack_opt.m"
  }
#line 380 "stack_opt.m"
}

#line 380 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_path_info_0_0(
#line 380 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 380 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 380 "stack_opt.m"
{
#line 380 "stack_opt.m"
  {
#line 380 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 380 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_7 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 380 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_8 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 380 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_7 == ll_backend__stack_opt__CastY_8);
#line 380 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 380 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 380 "stack_opt.m"
    else
#line 380 "stack_opt.m"
      {
#line 380 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_10_10;
#line 380 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 380 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));

#line 5954 "ll_backend.stack_opt.c"
        {
#line 5956 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_5_5)));
        }
#line 380 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 380 "stack_opt.m"
          {
#line 5963 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_10_10 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[5];
#line 5965 "ll_backend.stack_opt.c"
            {
#line 5967 "ll_backend.stack_opt.c"
              return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_10_10, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_6_6)));
            }
#line 380 "stack_opt.m"
          }
#line 380 "stack_opt.m"
      }
#line 380 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 380 "stack_opt.m"
  }
#line 380 "stack_opt.m"
}

#line 391 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____match_info_0_0(
#line 391 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 391 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 391 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 391 "stack_opt.m"
{
#line 391 "stack_opt.m"
  {
#line 391 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 391 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_18 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 391 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_19 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 391 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_18 == ll_backend__stack_opt__CastY_19);
#line 391 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 6005 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 391 "stack_opt.m"
    else
#line 391 "stack_opt.m"
      {
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 3)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 4)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_14_14;

#line 391 "stack_opt.m"
        {
#line 391 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[12], &ll_backend__stack_opt__V_14_14, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
        }
#line 6039 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_14_14 == (MR_Integer) 0);
#line 391 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 391 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 391 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_14_14;
#line 391 "stack_opt.m"
        else
#line 391 "stack_opt.m"
          {
#line 391 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_15_15;

#line 391 "stack_opt.m"
            {
#line 391 "stack_opt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], &ll_backend__stack_opt__V_15_15, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_10_10)));
            }
#line 6059 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_15_15 == (MR_Integer) 0);
#line 391 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 391 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 391 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_15_15;
#line 391 "stack_opt.m"
            else
#line 391 "stack_opt.m"
              {
#line 391 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_16_16;
#line 391 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_25_25 = (MR_Integer) ll_backend__stack_opt__V_6_6;
#line 391 "stack_opt.m"
                MR_Integer ll_backend__stack_opt__V_26_26 = (MR_Integer) ll_backend__stack_opt__V_11_11;

#line 391 "stack_opt.m"
                {
#line 391 "stack_opt.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_16_16, ll_backend__stack_opt__V_25_25, ll_backend__stack_opt__V_26_26);
                }
#line 6083 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_16_16 == (MR_Integer) 0);
#line 391 "stack_opt.m"
                ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 391 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 391 "stack_opt.m"
                  *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_16_16;
#line 391 "stack_opt.m"
                else
#line 391 "stack_opt.m"
                  {
#line 391 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__V_17_17;

#line 391 "stack_opt.m"
                    {
#line 391 "stack_opt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[10], &ll_backend__stack_opt__V_17_17, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                    }
#line 6103 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_17_17 == (MR_Integer) 0);
#line 391 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 391 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 391 "stack_opt.m"
                      *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_17_17;
#line 391 "stack_opt.m"
                    else
#line 391 "stack_opt.m"
                      {
#line 391 "stack_opt.m"
                        {
#line 391 "stack_opt.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[9], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_8_8)), ((MR_Box) (ll_backend__stack_opt__V_13_13)));
#line 391 "stack_opt.m"
                          return;
                        }
#line 391 "stack_opt.m"
                      }
#line 391 "stack_opt.m"
                  }
#line 391 "stack_opt.m"
              }
#line 391 "stack_opt.m"
          }
#line 391 "stack_opt.m"
      }
#line 391 "stack_opt.m"
  }
#line 391 "stack_opt.m"
}

#line 391 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____match_info_0_0(
#line 391 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 391 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 391 "stack_opt.m"
{
#line 391 "stack_opt.m"
  {
#line 391 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 391 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_13 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 391 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_14 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 391 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_13 == ll_backend__stack_opt__CastY_14);
#line 391 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 391 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 391 "stack_opt.m"
    else
#line 391 "stack_opt.m"
      {
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_16_16;
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_17_17;
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_18_18;
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 3)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 4)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 3)));
#line 391 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 4)));

#line 6192 "ll_backend.stack_opt.c"
        {
#line 6194 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[12], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
        }
#line 391 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 391 "stack_opt.m"
          {
#line 6201 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeInfo_16_16 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 6203 "ll_backend.stack_opt.c"
            {
#line 6205 "ll_backend.stack_opt.c"
              ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_16_16, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
            }
#line 391 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 391 "stack_opt.m"
              {
#line 6212 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_5_5 == ll_backend__stack_opt__V_10_10);
#line 391 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 391 "stack_opt.m"
                  {
#line 6218 "ll_backend.stack_opt.c"
                    ll_backend__stack_opt__TypeInfo_17_17 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[10];
#line 6220 "ll_backend.stack_opt.c"
                    {
#line 6222 "ll_backend.stack_opt.c"
                      ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_17_17, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_11_11)));
                    }
#line 391 "stack_opt.m"
                    if (ll_backend__stack_opt__succeeded)
#line 391 "stack_opt.m"
                      {
#line 6229 "ll_backend.stack_opt.c"
                        ll_backend__stack_opt__TypeInfo_18_18 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[9];
#line 6231 "ll_backend.stack_opt.c"
                        {
#line 6233 "ll_backend.stack_opt.c"
                          return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_18_18, ((MR_Box) (ll_backend__stack_opt__V_7_7)), ((MR_Box) (ll_backend__stack_opt__V_12_12)));
                        }
#line 391 "stack_opt.m"
                      }
#line 391 "stack_opt.m"
                  }
#line 391 "stack_opt.m"
              }
#line 391 "stack_opt.m"
          }
#line 391 "stack_opt.m"
      }
#line 391 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 391 "stack_opt.m"
  }
#line 391 "stack_opt.m"
}

#line 653 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____current_segment_first_flush_0_0(
#line 653 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 653 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 653 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 653 "stack_opt.m"
{
#line 653 "stack_opt.m"
  {
#line 653 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 653 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__Cast_HeadVar1_4 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 653 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__Cast_HeadVar2_5 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 653 "stack_opt.m"
    {
#line 653 "stack_opt.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__stack_opt__HeadVar__1_1, ll_backend__stack_opt__Cast_HeadVar1_4, ll_backend__stack_opt__Cast_HeadVar2_5);
#line 653 "stack_opt.m"
      return;
    }
#line 653 "stack_opt.m"
  }
#line 653 "stack_opt.m"
}

#line 653 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____current_segment_first_flush_0_0(
#line 653 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_1,
#line 653 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 653 "stack_opt.m"
{
#line 6294 "ll_backend.stack_opt.c"
  {
#line 6296 "ll_backend.stack_opt.c"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__HeadVar__2_1 == ll_backend__stack_opt__HeadVar__2_2);

#line 6299 "ll_backend.stack_opt.c"
    return ll_backend__stack_opt__succeeded;
#line 6301 "ll_backend.stack_opt.c"
  }
#line 653 "stack_opt.m"
}

#line 667 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt____Compare____all_paths_0_0(
#line 667 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__HeadVar__1_1,
#line 667 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2,
#line 667 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__3_3)
#line 667 "stack_opt.m"
{
#line 667 "stack_opt.m"
  {
#line 667 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 667 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_12 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;
#line 667 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_13 = (MR_Integer) ll_backend__stack_opt__HeadVar__3_3;

#line 667 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_12 == ll_backend__stack_opt__CastY_13);
#line 667 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 6330 "ll_backend.stack_opt.c"
      *ll_backend__stack_opt__HeadVar__1_1 = (MR_Integer) 0;
#line 667 "stack_opt.m"
    else
#line 667 "stack_opt.m"
      {
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 0)));
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 1)));
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__3_3, (MR_Integer) 2)));
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_10_10;

#line 667 "stack_opt.m"
        {
#line 667 "stack_opt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[11], &ll_backend__stack_opt__V_10_10, ((MR_Box) (ll_backend__stack_opt__V_4_4)), ((MR_Box) (ll_backend__stack_opt__V_7_7)));
        }
#line 6356 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_10_10 == (MR_Integer) 0);
#line 667 "stack_opt.m"
        ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 667 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 667 "stack_opt.m"
          *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_10_10;
#line 667 "stack_opt.m"
        else
#line 667 "stack_opt.m"
          {
#line 667 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_11_11;
#line 667 "stack_opt.m"
            MR_Integer ll_backend__stack_opt__V_17_17 = (MR_Integer) ll_backend__stack_opt__V_5_5;
#line 667 "stack_opt.m"
            MR_Integer ll_backend__stack_opt__V_18_18 = (MR_Integer) ll_backend__stack_opt__V_8_8;

#line 667 "stack_opt.m"
            {
#line 667 "stack_opt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__stack_opt__V_11_11, ll_backend__stack_opt__V_17_17, ll_backend__stack_opt__V_18_18);
            }
#line 6380 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_11_11 == (MR_Integer) 0);
#line 667 "stack_opt.m"
            ll_backend__stack_opt__succeeded = !(ll_backend__stack_opt__succeeded);
#line 667 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 667 "stack_opt.m"
              *ll_backend__stack_opt__HeadVar__1_1 = ll_backend__stack_opt__V_11_11;
#line 667 "stack_opt.m"
            else
#line 667 "stack_opt.m"
              {
#line 667 "stack_opt.m"
                {
#line 667 "stack_opt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__HeadVar__1_1, ((MR_Box) (ll_backend__stack_opt__V_6_6)), ((MR_Box) (ll_backend__stack_opt__V_9_9)));
#line 667 "stack_opt.m"
                  return;
                }
#line 667 "stack_opt.m"
              }
#line 667 "stack_opt.m"
          }
#line 667 "stack_opt.m"
      }
#line 667 "stack_opt.m"
  }
#line 667 "stack_opt.m"
}

#line 667 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt____Unify____all_paths_0_0(
#line 667 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 667 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 667 "stack_opt.m"
{
#line 667 "stack_opt.m"
  {
#line 667 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 667 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastX_9 = (MR_Integer) ll_backend__stack_opt__HeadVar__1_1;
#line 667 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CastY_10 = (MR_Integer) ll_backend__stack_opt__HeadVar__2_2;

#line 667 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__CastX_9 == ll_backend__stack_opt__CastY_10);
#line 667 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 667 "stack_opt.m"
      ll_backend__stack_opt__succeeded = MR_TRUE;
#line 667 "stack_opt.m"
    else
#line 667 "stack_opt.m"
      {
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeInfo_12_12;
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 667 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));

#line 6453 "ll_backend.stack_opt.c"
        {
#line 6455 "ll_backend.stack_opt.c"
          ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[11], ((MR_Box) (ll_backend__stack_opt__V_3_3)), ((MR_Box) (ll_backend__stack_opt__V_6_6)));
        }
#line 667 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 667 "stack_opt.m"
          {
#line 6462 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_4_4 == ll_backend__stack_opt__V_7_7);
#line 667 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 667 "stack_opt.m"
              {
#line 6468 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeInfo_12_12 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 6470 "ll_backend.stack_opt.c"
                {
#line 6472 "ll_backend.stack_opt.c"
                  return ll_backend__stack_opt__succeeded = mercury__builtin__unify_2_p_0(ll_backend__stack_opt__TypeInfo_12_12, ((MR_Box) (ll_backend__stack_opt__V_5_5)), ((MR_Box) (ll_backend__stack_opt__V_8_8)));
                }
#line 667 "stack_opt.m"
              }
#line 667 "stack_opt.m"
          }
#line 667 "stack_opt.m"
      }
#line 667 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 667 "stack_opt.m"
  }
#line 667 "stack_opt.m"
}

#line 1149 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_6(
#line 1149 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1149 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1149 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1149 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1149 "stack_opt.m"
{
#line 1149 "stack_opt.m"
  {
#line 1149 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1149 "stack_opt.m"
    {
#line 1149 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1149__1_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1149 "stack_opt.m"
      return;
    }
#line 1149 "stack_opt.m"
  }
#line 1149 "stack_opt.m"
}

#line 1146 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_5(
#line 1146 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1146 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1146 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1146 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1146 "stack_opt.m"
{
#line 1146 "stack_opt.m"
  {
#line 1146 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1146 "stack_opt.m"
    {
#line 1146 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1146__1_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1146 "stack_opt.m"
      return;
    }
#line 1146 "stack_opt.m"
  }
#line 1146 "stack_opt.m"
}

#line 1140 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_4(
#line 1140 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1140 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1140 "stack_opt.m"
{
#line 1140 "stack_opt.m"
  {
#line 1140 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1140 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1140 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv3_HeadVar__2_2;

#line 1140 "stack_opt.m"
    {
#line 1140 "stack_opt.m"
      ll_backend__stack_opt__conv3_HeadVar__2_2 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1140 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv3_HeadVar__2_2));
#line 1140 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1140 "stack_opt.m"
  }
#line 1140 "stack_opt.m"
}

#line 1135 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_3(
#line 1135 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1135 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1135 "stack_opt.m"
{
#line 1135 "stack_opt.m"
  {
#line 1135 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1135 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1135 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv2_HeadVar__2_2;

#line 1135 "stack_opt.m"
    {
#line 1135 "stack_opt.m"
      ll_backend__stack_opt__conv2_HeadVar__2_2 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1135 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv2_HeadVar__2_2));
#line 1135 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1135 "stack_opt.m"
  }
#line 1135 "stack_opt.m"
}

#line 1123 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_2(
#line 1123 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1123 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1123 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1123 "stack_opt.m"
{
#line 1123 "stack_opt.m"
  {
#line 1123 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1123 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv1_HeadVar__2_81;

#line 1123 "stack_opt.m"
    {
#line 1123 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1123__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv1_HeadVar__2_81);
    }
#line 1123 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_HeadVar__2_81));
#line 1123 "stack_opt.m"
  }
#line 1123 "stack_opt.m"
}

#line 1122 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0_1(
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
    MR_Integer ll_backend__stack_opt__conv0_HeadVar__2_76;

#line 1122 "stack_opt.m"
    {
#line 1122 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1122__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv0_HeadVar__2_76);
    }
#line 1122 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__2_76));
#line 1122 "stack_opt.m"
  }
#line 1122 "stack_opt.m"
}

#line 1111 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_matching_result_3_p_0(
#line 1111 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MatchingResult_4)
#line 1111 "stack_opt.m"
{
#line 1114 "stack_opt.m"
  {
#line 1114 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_74_74;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_78_78;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_79_79;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_83_83;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_88_88;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CellVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 0)));
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 1)));
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ArgVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 2)));
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ViaCellVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 3)));
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__GoalId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 4)));
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PotentialIntervals_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 5)));
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertIntervals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 6)));
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PotentialAnchors_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 7)));
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertAnchors_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_4, (MR_Integer) 8)));
#line 1114 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CellVarNum_15;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ArgVarNums_16;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ViaCellVarNums_17;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PotentialIntervalNums_18;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertIntervalNums_19;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_29_29;
#line 1114 "stack_opt.m"
    MR_String ll_backend__stack_opt__V_33_33;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_53_53;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_59_59;
#line 1114 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_67_67;

#line 1118 "stack_opt.m"
    {
#line 1118 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\nmatching result at ");
    }
#line 1119 "stack_opt.m"
    {
#line 1119 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, ((MR_Box) (ll_backend__stack_opt__GoalId_10)));
    }
#line 1120 "stack_opt.m"
    {
#line 1120 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 6749 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1121 "stack_opt.m"
    {
#line 1121 "stack_opt.m"
      mercury__term__var_to_int_2_p_0(ll_backend__stack_opt__TypeCtorInfo_74_74, ll_backend__stack_opt__CellVar_6, &ll_backend__stack_opt__CellVarNum_15);
    }
#line 6756 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_78_78 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 6758 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1122 "stack_opt.m"
    {
#line 1122 "stack_opt.m"
      mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_78_78, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[11], ll_backend__stack_opt__ArgVars_8, &ll_backend__stack_opt__ArgVarNums_16);
    }
#line 1123 "stack_opt.m"
    {
#line 1123 "stack_opt.m"
      ll_backend__stack_opt__V_29_29 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_74_74, ll_backend__stack_opt__ViaCellVars_9);
    }
#line 1123 "stack_opt.m"
    {
#line 1123 "stack_opt.m"
      mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_78_78, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[12], ll_backend__stack_opt__V_29_29, &ll_backend__stack_opt__ViaCellVarNums_17);
    }
#line 1125 "stack_opt.m"
    {
#line 1125 "stack_opt.m"
      mercury__io__write_int_3_p_0(ll_backend__stack_opt__CellVarNum_15);
    }
#line 1126 "stack_opt.m"
    {
#line 1126 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) " => ");
    }
#line 1127 "stack_opt.m"
    {
#line 1127 "stack_opt.m"
      ll_backend__stack_opt__V_33_33 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ll_backend__stack_opt__ConsId_7);
    }
#line 1127 "stack_opt.m"
    {
#line 1127 "stack_opt.m"
      mercury__io__write_string_3_p_0(ll_backend__stack_opt__V_33_33);
    }
#line 1128 "stack_opt.m"
    {
#line 1128 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1129 "stack_opt.m"
    {
#line 1129 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__ArgVarNums_16);
    }
#line 1130 "stack_opt.m"
    {
#line 1130 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "): via cell ");
    }
#line 1131 "stack_opt.m"
    {
#line 1131 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__ViaCellVarNums_17);
    }
#line 1132 "stack_opt.m"
    {
#line 1132 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1134 "stack_opt.m"
    {
#line 1134 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "potential intervals: ");
    }
#line 6825 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_83_83 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1136 "stack_opt.m"
    {
#line 1136 "stack_opt.m"
      ll_backend__stack_opt__V_46_46 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__PotentialIntervals_11);
    }
#line 1135 "stack_opt.m"
    {
#line 1135 "stack_opt.m"
      ll_backend__stack_opt__PotentialIntervalNums_18 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[13], ll_backend__stack_opt__V_46_46);
    }
#line 1137 "stack_opt.m"
    {
#line 1137 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__PotentialIntervalNums_18);
    }
#line 1138 "stack_opt.m"
    {
#line 1138 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1139 "stack_opt.m"
    {
#line 1139 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "insert intervals: ");
    }
#line 1141 "stack_opt.m"
    {
#line 1141 "stack_opt.m"
      ll_backend__stack_opt__V_53_53 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__InsertIntervals_12);
    }
#line 1140 "stack_opt.m"
    {
#line 1140 "stack_opt.m"
      ll_backend__stack_opt__InsertIntervalNums_19 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_83_83, ll_backend__stack_opt__TypeCtorInfo_79_79, (MR_Word) &ll_backend__stack_opt_scalar_common_2[14], ll_backend__stack_opt__V_53_53);
    }
#line 1142 "stack_opt.m"
    {
#line 1142 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__InsertIntervalNums_19);
    }
#line 1143 "stack_opt.m"
    {
#line 1143 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1145 "stack_opt.m"
    {
#line 1145 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "potential anchors: ");
    }
#line 6877 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_88_88 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1146 "stack_opt.m"
    {
#line 1146 "stack_opt.m"
      ll_backend__stack_opt__V_59_59 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__PotentialAnchors_13);
    }
#line 1146 "stack_opt.m"
    {
#line 1146 "stack_opt.m"
      mercury__io__write_list_5_p_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__V_59_59, (MR_String) " ", (MR_Word) &ll_backend__stack_opt_scalar_common_2[15]);
    }
#line 1147 "stack_opt.m"
    {
#line 1147 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1148 "stack_opt.m"
    {
#line 1148 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "insert anchors: ");
    }
#line 1149 "stack_opt.m"
    {
#line 1149 "stack_opt.m"
      ll_backend__stack_opt__V_67_67 = mercury__set__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__InsertAnchors_14);
    }
#line 1149 "stack_opt.m"
    {
#line 1149 "stack_opt.m"
      mercury__io__write_list_5_p_0(ll_backend__stack_opt__TypeCtorInfo_88_88, ll_backend__stack_opt__V_67_67, (MR_String) " ", (MR_Word) &ll_backend__stack_opt_scalar_common_2[16]);
    }
#line 1150 "stack_opt.m"
    {
#line 1150 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1150 "stack_opt.m"
      return;
    }
#line 1114 "stack_opt.m"
  }
#line 1111 "stack_opt.m"
}

#line 1104 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_2(
#line 1104 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1104 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1104 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1104 "stack_opt.m"
{
#line 1104 "stack_opt.m"
  {
#line 1104 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1104 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv1_HeadVar__2_52;

#line 1104 "stack_opt.m"
    {
#line 1104 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1104__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv1_HeadVar__2_52);
    }
#line 1104 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_HeadVar__2_52));
#line 1104 "stack_opt.m"
  }
#line 1104 "stack_opt.m"
}

#line 1091 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0_1(
#line 1091 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1091 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1091 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 1091 "stack_opt.m"
{
#line 1091 "stack_opt.m"
  {
#line 1091 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1091 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__conv0_HeadVar__2_46;

#line 1091 "stack_opt.m"
    {
#line 1091 "stack_opt.m"
      ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1091__1_2_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv0_HeadVar__2_46);
    }
#line 1091 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_HeadVar__2_46));
#line 1091 "stack_opt.m"
  }
#line 1091 "stack_opt.m"
}

#line 1088 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_insert_3_p_0(
#line 1088 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1088 "stack_opt.m"
{
#line 1090 "stack_opt.m"
  {
#line 1090 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1090 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1090 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_49_49;
#line 1090 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_50_50;
#line 1090 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1090 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Vars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1090 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarNums_7;
#line 1090 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_25_25;
#line 1107 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CellVar_14;
#line 1107 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ConsId_15;
#line 1107 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ArgVars_16;
#line 1096 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Unification_11;
#line 1096 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_31_31;
#line 1096 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_13_13;
#line 1096 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_8_8;
#line 1096 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_9_9;
#line 1096 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_10_10;
#line 1096 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_12_12;
#line 1097 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_17_17;
#line 1097 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_18_18;
#line 1097 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;

#line 1091 "stack_opt.m"
    {
#line 1091 "stack_opt.m"
      ll_backend__stack_opt__V_25_25 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_48_48, ll_backend__stack_opt__Vars_5);
    }
#line 7038 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_49_49 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 7040 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_50_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1091 "stack_opt.m"
    {
#line 1091 "stack_opt.m"
      mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_49_49, ll_backend__stack_opt__TypeCtorInfo_50_50, (MR_Word) &ll_backend__stack_opt_scalar_common_2[9], ll_backend__stack_opt__V_25_25, &ll_backend__stack_opt__VarNums_7);
    }
#line 1092 "stack_opt.m"
    {
#line 1092 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "vars [");
    }
#line 1093 "stack_opt.m"
    {
#line 1093 "stack_opt.m"
      backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__VarNums_7);
    }
#line 1094 "stack_opt.m"
    {
#line 1094 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "]: ");
    }
#line 1096 "stack_opt.m"
    ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_4, (MR_Integer) 0)));
#line 1096 "stack_opt.m"
    ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_4, (MR_Integer) 1)));
#line 1096 "stack_opt.m"
    ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1096 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1096 "stack_opt.m"
      {
#line 1096 "stack_opt.m"
        ll_backend__stack_opt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 0)));
#line 1096 "stack_opt.m"
        ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 1)));
#line 1096 "stack_opt.m"
        ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 2)));
#line 1096 "stack_opt.m"
        ll_backend__stack_opt__Unification_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 3)));
#line 1096 "stack_opt.m"
        ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_31_31, (MR_Integer) 4)));
#line 1097 "stack_opt.m"
        ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__Unification_11)) == (MR_mktag((MR_Integer) 1)));
#line 1097 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 1097 "stack_opt.m"
          {
#line 1097 "stack_opt.m"
            ll_backend__stack_opt__CellVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 0)));
#line 1097 "stack_opt.m"
            ll_backend__stack_opt__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 1)));
#line 1097 "stack_opt.m"
            ll_backend__stack_opt__ArgVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 2)));
#line 1097 "stack_opt.m"
            ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 3)));
#line 1097 "stack_opt.m"
            ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 4)));
#line 1097 "stack_opt.m"
            ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Unification_11, (MR_Integer) 5)));
#line 1097 "stack_opt.m"
          }
#line 1096 "stack_opt.m"
      }
#line 1107 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1099 "stack_opt.m"
      {
#line 1099 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__CellVarNum_20;
#line 1099 "stack_opt.m"
        MR_Word ll_backend__stack_opt__ArgVarNums_21;
#line 1099 "stack_opt.m"
        MR_String ll_backend__stack_opt__V_35_35;

#line 1099 "stack_opt.m"
        {
#line 1099 "stack_opt.m"
          mercury__term__var_to_int_2_p_0(ll_backend__stack_opt__TypeCtorInfo_48_48, ll_backend__stack_opt__CellVar_14, &ll_backend__stack_opt__CellVarNum_20);
        }
#line 1100 "stack_opt.m"
        {
#line 1100 "stack_opt.m"
          mercury__io__write_int_3_p_0(ll_backend__stack_opt__CellVarNum_20);
        }
#line 1101 "stack_opt.m"
        {
#line 1101 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) " => ");
        }
#line 1102 "stack_opt.m"
        {
#line 1102 "stack_opt.m"
          ll_backend__stack_opt__V_35_35 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ll_backend__stack_opt__ConsId_15);
        }
#line 1102 "stack_opt.m"
        {
#line 1102 "stack_opt.m"
          mercury__io__write_string_3_p_0(ll_backend__stack_opt__V_35_35);
        }
#line 1103 "stack_opt.m"
        {
#line 1103 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 1104 "stack_opt.m"
        {
#line 1104 "stack_opt.m"
          mercury__list__map_3_p_0(ll_backend__stack_opt__TypeInfo_49_49, ll_backend__stack_opt__TypeCtorInfo_50_50, (MR_Word) &ll_backend__stack_opt_scalar_common_2[10], ll_backend__stack_opt__ArgVars_16, &ll_backend__stack_opt__ArgVarNums_21);
        }
#line 1105 "stack_opt.m"
        {
#line 1105 "stack_opt.m"
          backend_libs__interval__write_int_list_3_p_0(ll_backend__stack_opt__ArgVarNums_21);
        }
#line 1106 "stack_opt.m"
        {
#line 1106 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1106 "stack_opt.m"
          return;
        }
#line 1099 "stack_opt.m"
      }
#line 1107 "stack_opt.m"
    else
#line 1108 "stack_opt.m"
      {
#line 1108 "stack_opt.m"
        {
#line 1108 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "BAD INSERT GOAL\n");
#line 1108 "stack_opt.m"
          return;
        }
#line 1108 "stack_opt.m"
      }
#line 1090 "stack_opt.m"
  }
#line 1088 "stack_opt.m"
}

#line 1086 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0_1(
#line 1086 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1086 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1086 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1086 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1086 "stack_opt.m"
{
#line 1086 "stack_opt.m"
  {
#line 1086 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1086 "stack_opt.m"
    {
#line 1086 "stack_opt.m"
      ll_backend__stack_opt__dump_insert_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1086 "stack_opt.m"
      return;
    }
#line 1086 "stack_opt.m"
  }
#line 1086 "stack_opt.m"
}

#line 1079 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_anchor_inserts_3_p_0(
#line 1079 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1079 "stack_opt.m"
{
#line 1082 "stack_opt.m"
  {
#line 1082 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1082 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Anchor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1082 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertSpecs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1086 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_8;

#line 1083 "stack_opt.m"
    {
#line 1083 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\ninsertions after ");
    }
#line 1084 "stack_opt.m"
    {
#line 1084 "stack_opt.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__Anchor_4)));
    }
#line 1085 "stack_opt.m"
    {
#line 1085 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 1086 "stack_opt.m"
    {
#line 1086 "stack_opt.m"
      mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__stack_opt_scalar_common_2[8], ll_backend__stack_opt__InsertSpecs_5, ((MR_Box) ((MR_Integer) 0)), &ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_8);
    }
#line 1082 "stack_opt.m"
  }
#line 1079 "stack_opt.m"
}

#line 1076 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_2(
#line 1076 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1076 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1076 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1076 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1076 "stack_opt.m"
{
#line 1076 "stack_opt.m"
  {
#line 1076 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1076 "stack_opt.m"
    {
#line 1076 "stack_opt.m"
      ll_backend__stack_opt__dump_matching_result_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1076 "stack_opt.m"
      return;
    }
#line 1076 "stack_opt.m"
  }
#line 1076 "stack_opt.m"
}

#line 1073 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0_1(
#line 1073 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1073 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 1073 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 1073 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3)
#line 1073 "stack_opt.m"
{
#line 1073 "stack_opt.m"
  {
#line 1073 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 1073 "stack_opt.m"
    {
#line 1073 "stack_opt.m"
      ll_backend__stack_opt__dump_anchor_inserts_3_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
#line 1073 "stack_opt.m"
      return;
    }
#line 1073 "stack_opt.m"
  }
#line 1073 "stack_opt.m"
}

#line 1068 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__dump_stack_opt_info_3_p_0(
#line 1068 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4)
#line 1068 "stack_opt.m"
{
#line 1070 "stack_opt.m"
  {
#line 1070 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1070 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_31_31;
#line 1070 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Inserts_6;
#line 1070 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 1)));
#line 1070 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_17_17;
#line 1071 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 0)));
#line 1071 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 2)));
#line 1073 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_13_13;
#line 1076 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_23_23;
#line 1076 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_24_24;
#line 1076 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv1_STATE_VARIABLE_IO_18_18;

#line 1071 "stack_opt.m"
    {
#line 1071 "stack_opt.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ll_backend__stack_opt__V_9_9, &ll_backend__stack_opt__Inserts_6);
    }
#line 1072 "stack_opt.m"
    {
#line 1072 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\nANCHOR INSERT:\n");
    }
#line 7357 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_31_31 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1073 "stack_opt.m"
    {
#line 1073 "stack_opt.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__stack_opt_scalar_common_2[0], ll_backend__stack_opt__TypeCtorInfo_31_31, (MR_Word) &ll_backend__stack_opt_scalar_common_2[6], ll_backend__stack_opt__Inserts_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__stack_opt__conv0_STATE_VARIABLE_IO_13_13);
    }
#line 1075 "stack_opt.m"
    {
#line 1075 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\nMATCHING RESULTS:\n");
    }
#line 1076 "stack_opt.m"
    ll_backend__stack_opt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 0)));
#line 1076 "stack_opt.m"
    ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 1)));
#line 1076 "stack_opt.m"
    ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_4, (MR_Integer) 2)));
#line 1076 "stack_opt.m"
    {
#line 1076 "stack_opt.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_matching_result_0, ll_backend__stack_opt__TypeCtorInfo_31_31, (MR_Word) &ll_backend__stack_opt_scalar_common_2[7], ll_backend__stack_opt__V_17_17, ((MR_Box) ((MR_Integer) 0)), &ll_backend__stack_opt__conv1_STATE_VARIABLE_IO_18_18);
    }
#line 1077 "stack_opt.m"
    {
#line 1077 "stack_opt.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1077 "stack_opt.m"
      return;
    }
#line 1070 "stack_opt.m"
  }
#line 1068 "stack_opt.m"
}

#line 1045 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__maybe_write_progress_message_7_p_0(
#line 1045 "stack_opt.m"
  MR_String ll_backend__stack_opt__Message_8,
#line 1045 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_9,
#line 1045 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_10,
#line 1045 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ProcInfo_11,
#line 1045 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_12)
#line 1045 "stack_opt.m"
{
#line 1059 "stack_opt.m"
  {
#line 1059 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__DebugStackOpt_9 == ll_backend__stack_opt__PredIdInt_10);

#line 1059 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1051 "stack_opt.m"
      {
#line 1051 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Goal_14;
#line 1051 "stack_opt.m"
        MR_Word ll_backend__stack_opt__VarSet_15;
#line 1051 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Globals_16;
#line 1051 "stack_opt.m"
        MR_Word ll_backend__stack_opt__OutInfo_17;

#line 1051 "stack_opt.m"
        {
#line 1051 "stack_opt.m"
          mercury__io__write_string_3_p_0(ll_backend__stack_opt__Message_8);
        }
#line 1052 "stack_opt.m"
        {
#line 1052 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
#line 1053 "stack_opt.m"
        {
#line 1053 "stack_opt.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_opt__ProcInfo_11, &ll_backend__stack_opt__Goal_14);
        }
#line 1054 "stack_opt.m"
        {
#line 1054 "stack_opt.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__stack_opt__ProcInfo_11, &ll_backend__stack_opt__VarSet_15);
        }
#line 1055 "stack_opt.m"
        {
#line 1055 "stack_opt.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_opt__ModuleInfo_12, &ll_backend__stack_opt__Globals_16);
        }
#line 1056 "stack_opt.m"
        {
#line 1056 "stack_opt.m"
          ll_backend__stack_opt__OutInfo_17 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(ll_backend__stack_opt__Globals_16, (MR_Integer) 1);
        }
#line 1057 "stack_opt.m"
        {
#line 1057 "stack_opt.m"
          hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(ll_backend__stack_opt__OutInfo_17, ll_backend__stack_opt__Goal_14, ll_backend__stack_opt__ModuleInfo_12, ll_backend__stack_opt__VarSet_15, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n");
        }
#line 1058 "stack_opt.m"
        {
#line 1058 "stack_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1058 "stack_opt.m"
          return;
        }
#line 1051 "stack_opt.m"
      }
#line 1059 "stack_opt.m"
    else
#line 1059 "stack_opt.m"
      {
#line 1059 "stack_opt.m"
      }
#line 1059 "stack_opt.m"
  }
#line 1045 "stack_opt.m"
}

#line 1030 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(
#line 1030 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1030 "stack_opt.m"
{
#line 1032 "stack_opt.m"
  {
#line 1032 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1032 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1032 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1032 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));

#line 1032 "stack_opt.m"
    return ll_backend__stack_opt__AfterModelNon_4;
#line 1032 "stack_opt.m"
  }
#line 1030 "stack_opt.m"
}

#line 1026 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(
#line 1026 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 1026 "stack_opt.m"
{
#line 1028 "stack_opt.m"
  {
#line 1028 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 1028 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));
#line 1028 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 2)));

#line 1028 "stack_opt.m"
    return ll_backend__stack_opt__Paths_3;
#line 1028 "stack_opt.m"
  }
#line 1026 "stack_opt.m"
}

#line 1021 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_2(
#line 1021 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1021 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1021 "stack_opt.m"
{
#line 1021 "stack_opt.m"
  {
#line 1021 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1021 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1021 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_AfterModelNon_4;

#line 1021 "stack_opt.m"
    {
#line 1021 "stack_opt.m"
      ll_backend__stack_opt__conv1_AfterModelNon_4 = ll_backend__stack_opt__project_after_model_non_from_all_paths_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1021 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_AfterModelNon_4));
#line 1021 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1021 "stack_opt.m"
  }
#line 1021 "stack_opt.m"
}

#line 1018 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0_1(
#line 1018 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1018 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1018 "stack_opt.m"
{
#line 1018 "stack_opt.m"
  {
#line 1018 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1018 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1018 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_Paths_3;

#line 1018 "stack_opt.m"
    {
#line 1018 "stack_opt.m"
      ll_backend__stack_opt__conv0_Paths_3 = ll_backend__stack_opt__project_paths_from_all_paths_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1018 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_Paths_3));
#line 1018 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1018 "stack_opt.m"
  }
#line 1018 "stack_opt.m"
}

#line 1013 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__consolidate_after_join_2_p_0(
#line 1013 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1,
#line 1013 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__AllPaths_2)
#line 1013 "stack_opt.m"
{
#line 1015 "stack_opt.m"
  {
#line 1015 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 1015 "stack_opt.m"
    if ((ll_backend__stack_opt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1015 "stack_opt.m"
      {
#line 1016 "stack_opt.m"
        {
#line 1016 "stack_opt.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.consolidate_after_join\'/2", (MR_String) "no paths to join");
#line 1016 "stack_opt.m"
          return;
        }
#line 1015 "stack_opt.m"
      }
#line 1015 "stack_opt.m"
    else
#line 1017 "stack_opt.m"
      {
#line 1017 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0;
#line 1017 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PathsList_10;
#line 1017 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Paths_12;
#line 1017 "stack_opt.m"
        MR_Word ll_backend__stack_opt__AfterModelNonList_13;
#line 1017 "stack_opt.m"
        MR_Word ll_backend__stack_opt__AfterModelNon_14;
#line 1017 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19;

#line 1018 "stack_opt.m"
        {
#line 1018 "stack_opt.m"
          ll_backend__stack_opt__PathsList_10 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_20_20, (MR_Word) &ll_backend__stack_opt_scalar_common_1[11], (MR_Word) &ll_backend__stack_opt_scalar_common_2[4], ll_backend__stack_opt__HeadVar__1_1);
        }
#line 1019 "stack_opt.m"
        {
#line 1019 "stack_opt.m"
          ll_backend__stack_opt__Paths_12 = mercury__set__union_list_1_f_0((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0, ll_backend__stack_opt__PathsList_10);
        }
#line 1021 "stack_opt.m"
        {
#line 1021 "stack_opt.m"
          ll_backend__stack_opt__AfterModelNonList_13 = mercury__list__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_20_20, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &ll_backend__stack_opt_scalar_common_2[5], ll_backend__stack_opt__HeadVar__1_1);
        }
#line 1023 "stack_opt.m"
        {
#line 1023 "stack_opt.m"
          mercury__bool__or_list_2_p_0(ll_backend__stack_opt__AfterModelNonList_13, &ll_backend__stack_opt__AfterModelNon_14);
        }
#line 1024 "stack_opt.m"
        {
#line 1024 "stack_opt.m"
          ll_backend__stack_opt__V_19_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 1024 "stack_opt.m"
        {
#line 1024 "stack_opt.m"
          MR_Word base;
#line 1024 "stack_opt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1024 "stack_opt.m"
          *ll_backend__stack_opt__AllPaths_2 = base;
#line 1024 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__Paths_12));
#line 1024 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__AfterModelNon_14));
#line 1024 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__V_19_19));
#line 1024 "stack_opt.m"
        }
#line 1017 "stack_opt.m"
      }
#line 1015 "stack_opt.m"
  }
#line 1013 "stack_opt.m"
}

#line 1000 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_2(
#line 1000 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 1000 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 1000 "stack_opt.m"
{
#line 1000 "stack_opt.m"
  {
#line 1000 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 1000 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 1000 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv4_STATE_VARIABLE_Path_9;

#line 1000 "stack_opt.m"
    {
#line 1000 "stack_opt.m"
      ll_backend__stack_opt__conv4_STATE_VARIABLE_Path_9 = ll_backend__stack_opt__add_anchor_to_path_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 1000 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv4_STATE_VARIABLE_Path_9));
#line 1000 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 1000 "stack_opt.m"
  }
#line 1000 "stack_opt.m"
}

#line 986 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_1(
#line 986 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 986 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 986 "stack_opt.m"
{
#line 986 "stack_opt.m"
  {
#line 986 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 986 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 986 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_STATE_VARIABLE_Path_13;

#line 986 "stack_opt.m"
    {
#line 986 "stack_opt.m"
      ll_backend__stack_opt__conv1_STATE_VARIABLE_Path_13 = ll_backend__stack_opt__add_interval_to_path_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 986 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv1_STATE_VARIABLE_Path_13));
#line 986 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 986 "stack_opt.m"
  }
#line 986 "stack_opt.m"
}

#line 977 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(
#line 977 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 977 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 977 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 977 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 977 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 977 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32,
#line 977 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_33)
#line 977 "stack_opt.m"
{
#line 982 "stack_opt.m"
  {
#line 982 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_102_102 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_104_104;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_105_105;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_108_108;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalVars_14;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__RelevantIntervalVars_15;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths0_16;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon0_17;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__RelevantAfter_18;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths1_19;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Start_20;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths2_30;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon_31;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_35_35;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_36_36;
#line 982 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40;
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 983 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 983 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_IntervalVars_14;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_57_57;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_58_58;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_59_59;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_60_60;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_61_61;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_62_62;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_63_63;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_64_64;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_65_65;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_66_66;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_67_67;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_68_68;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_69_69;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_70_70;
#line 988 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_71_71;
#line 988 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv2_Start_20;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_109_109;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StartInfo_26;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorFollowVars_27;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__NeededVars_29;
#line 994 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_37_37;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_72_72;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_73_73;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_74_74;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_75_75;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_76_76;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_77_77;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_78_78;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_79_79;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_80_80;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_81_81;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_82_82;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_83_83;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_84_84;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_85_85;
#line 995 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_86_86;
#line 995 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv3_StartInfo_26;
#line 996 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_28_28;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_39_39;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_87_87;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_88_88;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_89_89;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_90_90;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_91_91;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_92_92;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_93_93;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_94_94;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_95_95;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_96_96;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_97_97;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_98_98;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_99_99;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_100_100;
#line 1004 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_101_101;

#line 983 "stack_opt.m"
    {
#line 983 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_102_102, (MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__V_34_34, ((MR_Box) (ll_backend__stack_opt__IntervalId_12)), &ll_backend__stack_opt__conv0_IntervalVars_14);
    }
#line 983 "stack_opt.m"
    ll_backend__stack_opt__IntervalVars_14 = ((MR_Word) ll_backend__stack_opt__conv0_IntervalVars_14);
#line 7955 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 984 "stack_opt.m"
    {
#line 984 "stack_opt.m"
      ll_backend__stack_opt__RelevantIntervalVars_15 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__stack_opt__TypeCtorInfo_104_104, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__IntervalVars_14);
    }
#line 985 "stack_opt.m"
    ll_backend__stack_opt__Paths0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 0)));
#line 985 "stack_opt.m"
    ll_backend__stack_opt__AfterModelNon0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 1)));
#line 985 "stack_opt.m"
    ll_backend__stack_opt__RelevantAfter_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_32, (MR_Integer) 2)));
#line 7968 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_105_105 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0;
#line 986 "stack_opt.m"
    {
#line 986 "stack_opt.m"
      ll_backend__stack_opt__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 986 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_8[1]));
#line 986 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_1));
#line 986 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 986 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 3) = ((MR_Box) (ll_backend__stack_opt__IntervalId_12));
#line 986 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 4) = ((MR_Box) (ll_backend__stack_opt__RelevantIntervalVars_15));
#line 986 "stack_opt.m"
    }
#line 986 "stack_opt.m"
    {
#line 986 "stack_opt.m"
      ll_backend__stack_opt__Paths1_19 = mercury__set__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__V_35_35, ll_backend__stack_opt__Paths0_16);
    }
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 988 "stack_opt.m"
    ll_backend__stack_opt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 8023 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 988 "stack_opt.m"
    {
#line 988 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_102_102, ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__V_36_36, ((MR_Box) (ll_backend__stack_opt__IntervalId_12)), &ll_backend__stack_opt__conv2_Start_20);
    }
#line 988 "stack_opt.m"
    ll_backend__stack_opt__Start_20 = ((MR_Word) ll_backend__stack_opt__conv2_Start_20);
#line 992 "stack_opt.m"
#line 992 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__Start_20)) {
#line 992 "stack_opt.m"
      default:
#line 992 "stack_opt.m"
        ll_backend__stack_opt__succeeded = MR_FALSE;
#line 992 "stack_opt.m"
        break;
#line 992 "stack_opt.m"
      case (MR_Integer) 1:
#line 993 "stack_opt.m"
        ll_backend__stack_opt__succeeded = MR_TRUE;
#line 992 "stack_opt.m"
        break;
#line 992 "stack_opt.m"
      case (MR_Integer) 3:
#line 992 "stack_opt.m"
#line 992 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__Start_20, (MR_Integer) 0)))) {
#line 992 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 992 "stack_opt.m"
          case (MR_Integer) 0:
#line 992 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 992 "stack_opt.m"
            break;
#line 992 "stack_opt.m"
          case (MR_Integer) 1:
#line 991 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 992 "stack_opt.m"
            break;
#line 992 "stack_opt.m"
        }
#line 992 "stack_opt.m"
        break;
#line 992 "stack_opt.m"
    }
#line 994 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 994 "stack_opt.m"
      {
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 995 "stack_opt.m"
        ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 8108 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0;
#line 995 "stack_opt.m"
        {
#line 995 "stack_opt.m"
          ll_backend__stack_opt__succeeded = mercury__map__search_3_p_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__TypeCtorInfo_109_109, ll_backend__stack_opt__V_37_37, ((MR_Box) (ll_backend__stack_opt__Start_20)), &ll_backend__stack_opt__conv3_StartInfo_26);
        }
#line 995 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 995 "stack_opt.m"
          {
#line 995 "stack_opt.m"
            ll_backend__stack_opt__StartInfo_26 = ((MR_Word) ll_backend__stack_opt__conv3_StartInfo_26);
#line 995 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 995 "stack_opt.m"
          }
#line 994 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 994 "stack_opt.m"
          {
#line 996 "stack_opt.m"
            ll_backend__stack_opt__AnchorFollowVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StartInfo_26, (MR_Integer) 0)));
#line 996 "stack_opt.m"
            ll_backend__stack_opt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StartInfo_26, (MR_Integer) 1)));
#line 997 "stack_opt.m"
            {
#line 997 "stack_opt.m"
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__stack_opt__TypeCtorInfo_104_104, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__AnchorFollowVars_27, &ll_backend__stack_opt__NeededVars_29);
            }
#line 998 "stack_opt.m"
            {
#line 998 "stack_opt.m"
              ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_104_104, ll_backend__stack_opt__NeededVars_29);
            }
#line 994 "stack_opt.m"
          }
#line 994 "stack_opt.m"
      }
#line 1001 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1000 "stack_opt.m"
      {
#line 1000 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_38_38;

#line 1000 "stack_opt.m"
        {
#line 1000 "stack_opt.m"
          ll_backend__stack_opt__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_11[0]));
#line 1000 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 1) = ((MR_Box) (ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0_2));
#line 1000 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1000 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 3) = ((MR_Box) (ll_backend__stack_opt__Start_20));
#line 1000 "stack_opt.m"
        }
#line 1000 "stack_opt.m"
        {
#line 1000 "stack_opt.m"
          ll_backend__stack_opt__Paths2_30 = mercury__set__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__TypeCtorInfo_105_105, ll_backend__stack_opt__V_38_38, ll_backend__stack_opt__Paths1_19);
        }
#line 1000 "stack_opt.m"
      }
#line 1001 "stack_opt.m"
    else
#line 1002 "stack_opt.m"
      ll_backend__stack_opt__Paths2_30 = ll_backend__stack_opt__Paths1_19;
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 0)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 1)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 2)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 3)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 4)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 5)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 6)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 7)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 8)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 9)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 10)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 11)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 12)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 13)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 14)));
#line 1004 "stack_opt.m"
    ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_10, (MR_Integer) 15)));
#line 1004 "stack_opt.m"
    {
#line 1004 "stack_opt.m"
      ll_backend__stack_opt__succeeded = mercury__set__member_2_p_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ((MR_Box) (ll_backend__stack_opt__Start_20)), ll_backend__stack_opt__V_39_39);
    }
#line 1006 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 1005 "stack_opt.m"
      ll_backend__stack_opt__AfterModelNon_31 = (MR_Integer) 1;
#line 1006 "stack_opt.m"
    else
#line 1007 "stack_opt.m"
      ll_backend__stack_opt__AfterModelNon_31 = ll_backend__stack_opt__AfterModelNon0_17;
#line 1009 "stack_opt.m"
    {
#line 1009 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, 0) = ((MR_Box) (ll_backend__stack_opt__Paths2_30));
#line 1009 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, 1) = ((MR_Box) (ll_backend__stack_opt__AfterModelNon_31));
#line 1009 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, 2) = ((MR_Box) (ll_backend__stack_opt__RelevantAfter_18));
#line 1009 "stack_opt.m"
    }
#line 1010 "stack_opt.m"
    {
#line 1010 "stack_opt.m"
      ll_backend__stack_opt__find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__IntervalId_12, ll_backend__stack_opt__MaybeSearchAnchor0_9, ll_backend__stack_opt__IntervalInfo_10, ll_backend__stack_opt__StackOptInfo_11, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_40_40, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_33);
#line 1010 "stack_opt.m"
      return;
    }
#line 982 "stack_opt.m"
  }
#line 977 "stack_opt.m"
}

#line 968 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(
#line 968 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 968 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_9,
#line 968 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_10,
#line 968 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_11,
#line 968 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_14,
#line 968 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_13,
#line 968 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_15)
#line 968 "stack_opt.m"
{
#line 974 "stack_opt.m"
  {
#line 974 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 974 "stack_opt.m"
    {
#line 974 "stack_opt.m"
      ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__MaybeSearchAnchor0_9, ll_backend__stack_opt__IntervalInfo_10, ll_backend__stack_opt__StackOptInfo_11, ll_backend__stack_opt__IntervalId_13, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_14, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_15);
#line 974 "stack_opt.m"
      return;
    }
#line 974 "stack_opt.m"
  }
#line 968 "stack_opt.m"
}

#line 953 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__one_after_another_7_p_0(
#line 953 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_1,
#line 953 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_2,
#line 953 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_3,
#line 953 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_4,
#line 953 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__5_5,
#line 953 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6,
#line 953 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_7)
#line 953 "stack_opt.m"
{
#line 957 "stack_opt.m"
  while (MR_TRUE)
#line 957 "stack_opt.m"
    {
#line 957 "stack_opt.m"
      /* tailcall optimized into a loop */
#line 957 "stack_opt.m"
      {
#line 957 "stack_opt.m"
        MR_bool ll_backend__stack_opt__succeeded;

#line 957 "stack_opt.m"
        if ((ll_backend__stack_opt__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_7 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6;
#line 957 "stack_opt.m"
        else
#line 959 "stack_opt.m"
          {
#line 959 "stack_opt.m"
            MR_Word ll_backend__stack_opt__SuccessorId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__5_5, (MR_Integer) 0)));
#line 959 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MoreSuccessorIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__5_5, (MR_Integer) 1)));
#line 959 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_24;

#line 960 "stack_opt.m"
            {
#line 960 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_1, ll_backend__stack_opt__MaybeSearchAnchor1_2, ll_backend__stack_opt__IntervalInfo_3, ll_backend__stack_opt__StackOptInfo_4, ll_backend__stack_opt__SuccessorId_19, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_24);
            }
#line 962 "stack_opt.m"
            /* direct tailcall eliminated */
#line 962 "stack_opt.m"
            {
#line 962 "stack_opt.m"
              MR_Word ll_backend__stack_opt__HeadVar__5__tmp_copy_5 = ll_backend__stack_opt__MoreSuccessorIds_20;
#line 962 "stack_opt.m"
              MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0__tmp_copy_6 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_24;

#line 962 "stack_opt.m"
              ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_6 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0__tmp_copy_6;
#line 962 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__5_5 = ll_backend__stack_opt__HeadVar__5__tmp_copy_5;
#line 962 "stack_opt.m"
            }
#line 962 "stack_opt.m"
            continue;
#line 959 "stack_opt.m"
          }
#line 957 "stack_opt.m"
      }
#line 957 "stack_opt.m"
      break;
#line 957 "stack_opt.m"
    }
#line 953 "stack_opt.m"
}

#line 934 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_2(
#line 934 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 934 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 934 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2)
#line 934 "stack_opt.m"
{
#line 934 "stack_opt.m"
  {
#line 934 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 934 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv4_STATE_VARIABLE_AllPaths_15;

#line 934 "stack_opt.m"
    {
#line 934 "stack_opt.m"
      ll_backend__stack_opt__apply_interval_find_all_branches_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 7))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv4_STATE_VARIABLE_AllPaths_15);
    }
#line 934 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv4_STATE_VARIABLE_AllPaths_15));
#line 934 "stack_opt.m"
  }
#line 934 "stack_opt.m"
}

#line 887 "stack_opt.m"
static MR_Box MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0_1(
#line 887 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 887 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1)
#line 887 "stack_opt.m"
{
#line 887 "stack_opt.m"
  {
#line 887 "stack_opt.m"
    MR_Box ll_backend__stack_opt__wrapper_arg_2;
#line 887 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 887 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_Path_4;

#line 887 "stack_opt.m"
    {
#line 887 "stack_opt.m"
      ll_backend__stack_opt__conv0_Path_4 = ll_backend__stack_opt__close_path_1_f_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1));
    }
#line 887 "stack_opt.m"
    ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv0_Path_4));
#line 887 "stack_opt.m"
    return ll_backend__stack_opt__wrapper_arg_2;
#line 887 "stack_opt.m"
  }
#line 887 "stack_opt.m"
}

#line 877 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_8_p_0(
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__End_9,
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_10,
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_11,
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_12,
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_13,
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__SuccessorIds_14,
#line 877 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36,
#line 877 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37)
#line 877 "stack_opt.m"
{
#line 882 "stack_opt.m"
  {
#line 882 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 882 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorRequiresClose_16;
#line 882 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptParams_19;
#line 882 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FullPath_20;
#line 882 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39;
#line 892 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_90_90;
#line 892 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_91_91;
#line 893 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_92_92;
#line 893 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__V_93_93;
#line 893 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_94_94;
#line 893 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_95_95;
#line 893 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_96_96;
#line 906 "stack_opt.m"
    MR_Word ll_backend__stack_opt__EndGoalId_21;
#line 895 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_40_40;

#line 883 "stack_opt.m"
    {
#line 883 "stack_opt.m"
      ll_backend__stack_opt__AnchorRequiresClose_16 = ll_backend__stack_opt__anchor_requires_close_2_f_0(ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__End_9);
    }
#line 889 "stack_opt.m"
#line 889 "stack_opt.m"
    switch (ll_backend__stack_opt__AnchorRequiresClose_16) {
#line 889 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 889 "stack_opt.m"
      case (MR_Integer) 0:
#line 890 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36;
#line 889 "stack_opt.m"
        break;
#line 889 "stack_opt.m"
      case (MR_Integer) 1:
#line 885 "stack_opt.m"
        {
#line 885 "stack_opt.m"
          MR_Word ll_backend__stack_opt__TypeCtorInfo_163_163 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0;
#line 885 "stack_opt.m"
          MR_Word ll_backend__stack_opt__Paths0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 0)));
#line 885 "stack_opt.m"
          MR_Word ll_backend__stack_opt__Paths1_18;
#line 886 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 1)));
#line 886 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 2)));
#line 888 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_88_88;
#line 888 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_89_89;
#line 888 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_87_87;

#line 887 "stack_opt.m"
          {
#line 887 "stack_opt.m"
            ll_backend__stack_opt__Paths1_18 = mercury__set__map_2_f_0(ll_backend__stack_opt__TypeCtorInfo_163_163, ll_backend__stack_opt__TypeCtorInfo_163_163, (MR_Word) &ll_backend__stack_opt_scalar_common_2[3], ll_backend__stack_opt__Paths0_17);
          }
#line 888 "stack_opt.m"
          ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 0)));
#line 888 "stack_opt.m"
          ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 1)));
#line 888 "stack_opt.m"
          ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_36, (MR_Integer) 2)));
#line 888 "stack_opt.m"
          {
#line 888 "stack_opt.m"
            ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 888 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, 0) = ((MR_Box) (ll_backend__stack_opt__Paths1_18));
#line 888 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, 1) = ((MR_Box) (ll_backend__stack_opt__V_88_88));
#line 888 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, 2) = ((MR_Box) (ll_backend__stack_opt__V_89_89));
#line 888 "stack_opt.m"
          }
#line 885 "stack_opt.m"
        }
#line 889 "stack_opt.m"
        break;
#line 889 "stack_opt.m"
    }
#line 892 "stack_opt.m"
    ll_backend__stack_opt__StackOptParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_13, (MR_Integer) 0)));
#line 892 "stack_opt.m"
    ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_13, (MR_Integer) 1)));
#line 892 "stack_opt.m"
    ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_13, (MR_Integer) 2)));
#line 893 "stack_opt.m"
    ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 0)));
#line 893 "stack_opt.m"
    ll_backend__stack_opt__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 1)));
#line 893 "stack_opt.m"
    ll_backend__stack_opt__V_94_94 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 893 "stack_opt.m"
    ll_backend__stack_opt__FullPath_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 893 "stack_opt.m"
    ll_backend__stack_opt__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 893 "stack_opt.m"
    ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_19, (MR_Integer) 3)));
#line 895 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__FullPath_20 == (MR_Integer) 1);
#line 895 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 895 "stack_opt.m"
      {
#line 896 "stack_opt.m"
        ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__End_9)) == (MR_mktag((MR_Integer) 1)));
#line 896 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 896 "stack_opt.m"
          {
#line 896 "stack_opt.m"
            ll_backend__stack_opt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 0)));
#line 896 "stack_opt.m"
            ll_backend__stack_opt__EndGoalId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 1)));
#line 896 "stack_opt.m"
            ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_40_40 == (MR_Integer) 1);
#line 896 "stack_opt.m"
          }
#line 895 "stack_opt.m"
      }
#line 906 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 898 "stack_opt.m"
      {
#line 898 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_22;
#line 898 "stack_opt.m"
        MR_Word ll_backend__stack_opt__BranchEndInfo_23;
#line 898 "stack_opt.m"
        MR_Word ll_backend__stack_opt__ContinueId_24;
#line 898 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_41_41;
#line 898 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_43_43;
#line 898 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_44_44;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_97_97;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_98_98;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_99_99;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_100_100;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_101_101;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_102_102;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_103_103;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_104_104;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_105_105;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_106_106;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_107_107;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_108_108;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_109_109;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_110_110;
#line 901 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_111_111;
#line 901 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv1_BranchEndInfo_23;
#line 903 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_112_112;
#line 903 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_113_113;

#line 898 "stack_opt.m"
        {
#line 898 "stack_opt.m"
          ll_backend__stack_opt__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 898 "stack_opt.m"
          MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 898 "stack_opt.m"
          MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_41_41, 1) = ((MR_Box) ((MR_Integer) 1));
#line 898 "stack_opt.m"
          MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_41_41, 2) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_21));
#line 898 "stack_opt.m"
        }
#line 898 "stack_opt.m"
        {
#line 898 "stack_opt.m"
          ll_backend__stack_opt__MaybeSearchAnchor1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 898 "stack_opt.m"
          MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchor1_22, 0) = ((MR_Box) (ll_backend__stack_opt__V_41_41));
#line 898 "stack_opt.m"
        }
#line 899 "stack_opt.m"
        {
#line 899 "stack_opt.m"
          ll_backend__stack_opt__one_after_another_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor1_22, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorIds_14, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_43_43);
        }
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 901 "stack_opt.m"
        ll_backend__stack_opt__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 901 "stack_opt.m"
        {
#line 901 "stack_opt.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ll_backend__stack_opt__V_44_44, ((MR_Box) (ll_backend__stack_opt__EndGoalId_21)), &ll_backend__stack_opt__conv1_BranchEndInfo_23);
        }
#line 901 "stack_opt.m"
        ll_backend__stack_opt__BranchEndInfo_23 = ((MR_Word) ll_backend__stack_opt__conv1_BranchEndInfo_23);
#line 903 "stack_opt.m"
        ll_backend__stack_opt__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 0)));
#line 903 "stack_opt.m"
        ll_backend__stack_opt__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 1)));
#line 903 "stack_opt.m"
        ll_backend__stack_opt__ContinueId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 2)));
#line 904 "stack_opt.m"
        {
#line 904 "stack_opt.m"
          ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__ContinueId_24, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_43_43, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
#line 904 "stack_opt.m"
          return;
        }
#line 898 "stack_opt.m"
      }
#line 906 "stack_opt.m"
    else
#line 930 "stack_opt.m"
      {
#line 930 "stack_opt.m"
        MR_Word ll_backend__stack_opt__EndGoalId_81;
#line 907 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_46_46;

#line 907 "stack_opt.m"
        ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__FullPath_20 == (MR_Integer) 1);
#line 907 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 907 "stack_opt.m"
          {
#line 908 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__End_9)) == (MR_mktag((MR_Integer) 1)));
#line 908 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 908 "stack_opt.m"
              {
#line 908 "stack_opt.m"
                ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 0)));
#line 908 "stack_opt.m"
                ll_backend__stack_opt__EndGoalId_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 1)));
#line 908 "stack_opt.m"
                ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_46_46 == (MR_Integer) 0);
#line 908 "stack_opt.m"
              }
#line 907 "stack_opt.m"
          }
#line 930 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 915 "stack_opt.m"
          {
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_168_168;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ElseStartId_27;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CondStartId_28;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MaybeSearchAnchorCond_29;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MaybeSearchAnchorEnd_30;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CondEndMap_31;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_52_52;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_53_53;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_54_54;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_57_57;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_60_60;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchEndInfo_72;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ContinueId_73;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__SuccessorId_188;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MoreSuccessorIds_189;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_193;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__SuccessorId_206;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__MoreSuccessorIds_207;
#line 915 "stack_opt.m"
            MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_211;
#line 913 "stack_opt.m"
            MR_Word ll_backend__stack_opt__ElseStartIdPrime_25;
#line 913 "stack_opt.m"
            MR_Word ll_backend__stack_opt__CondStartIdPrime_26;
#line 910 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_47_47;
#line 910 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_48_48;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_114_114;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_115_115;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_116_116;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_117_117;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_118_118;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_119_119;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_120_120;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_121_121;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_122_122;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_123_123;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_124_124;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_125_125;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_126_126;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_127_127;
#line 921 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_128_128;
#line 922 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv2_SuccessorId_188;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_129_129;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_130_130;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_131_131;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_132_132;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_133_133;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_134_134;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_135_135;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_136_136;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_137_137;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_138_138;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_139_139;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_140_140;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_141_141;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_142_142;
#line 925 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_143_143;
#line 925 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv3_BranchEndInfo_72;
#line 927 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_144_144;
#line 927 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_145_145;

#line 910 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__SuccessorIds_14)) == (MR_mktag((MR_Integer) 1)));
#line 910 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 910 "stack_opt.m"
              {
#line 910 "stack_opt.m"
                ll_backend__stack_opt__ElseStartIdPrime_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 0)));
#line 910 "stack_opt.m"
                ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 1)));
#line 910 "stack_opt.m"
                ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 910 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 910 "stack_opt.m"
                  {
#line 910 "stack_opt.m"
                    ll_backend__stack_opt__CondStartIdPrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_47_47, (MR_Integer) 0)));
#line 910 "stack_opt.m"
                    ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_47_47, (MR_Integer) 1)));
#line 910 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "stack_opt.m"
                  }
#line 910 "stack_opt.m"
              }
#line 913 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 911 "stack_opt.m"
              {
#line 911 "stack_opt.m"
                ll_backend__stack_opt__ElseStartId_27 = ll_backend__stack_opt__ElseStartIdPrime_25;
#line 912 "stack_opt.m"
                ll_backend__stack_opt__CondStartId_28 = ll_backend__stack_opt__CondStartIdPrime_26;
#line 911 "stack_opt.m"
              }
#line 913 "stack_opt.m"
            else
#line 914 "stack_opt.m"
              {
#line 914 "stack_opt.m"
                {
#line 914 "stack_opt.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "ite not else, cond");
#line 914 "stack_opt.m"
                  return;
                }
#line 914 "stack_opt.m"
              }
#line 916 "stack_opt.m"
            {
#line 916 "stack_opt.m"
              ll_backend__stack_opt__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 916 "stack_opt.m"
              MR_hl_field(MR_mktag(2), ll_backend__stack_opt__V_52_52, 0) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_81));
#line 916 "stack_opt.m"
            }
#line 916 "stack_opt.m"
            {
#line 916 "stack_opt.m"
              ll_backend__stack_opt__MaybeSearchAnchorCond_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 916 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchorCond_29, 0) = ((MR_Box) (ll_backend__stack_opt__V_52_52));
#line 916 "stack_opt.m"
            }
#line 917 "stack_opt.m"
            {
#line 917 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorCond_29, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__CondStartId_28, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_53_53);
            }
#line 920 "stack_opt.m"
            {
#line 920 "stack_opt.m"
              ll_backend__stack_opt__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 920 "stack_opt.m"
              MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 920 "stack_opt.m"
              MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_54_54, 1) = ((MR_Box) ((MR_Integer) 0));
#line 920 "stack_opt.m"
              MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_54_54, 2) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_81));
#line 920 "stack_opt.m"
            }
#line 920 "stack_opt.m"
            {
#line 920 "stack_opt.m"
              ll_backend__stack_opt__MaybeSearchAnchorEnd_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 920 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchorEnd_30, 0) = ((MR_Box) (ll_backend__stack_opt__V_54_54));
#line 920 "stack_opt.m"
            }
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__CondEndMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 921 "stack_opt.m"
            ll_backend__stack_opt__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 8986 "ll_backend.stack_opt.c"
            ll_backend__stack_opt__TypeCtorInfo_168_168 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 922 "stack_opt.m"
            {
#line 922 "stack_opt.m"
              mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_168_168, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ll_backend__stack_opt__CondEndMap_31, ((MR_Box) (ll_backend__stack_opt__EndGoalId_81)), &ll_backend__stack_opt__conv2_SuccessorId_188);
            }
#line 922 "stack_opt.m"
            ll_backend__stack_opt__SuccessorId_188 = ((MR_Word) ll_backend__stack_opt__conv2_SuccessorId_188);
#line 924 "stack_opt.m"
            {
#line 924 "stack_opt.m"
              ll_backend__stack_opt__MoreSuccessorIds_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, 0) = ((MR_Box) (ll_backend__stack_opt__ElseStartId_27));
#line 924 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "stack_opt.m"
            }
#line 960 "stack_opt.m"
            {
#line 960 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorEnd_30, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorId_188, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_53_53, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_193);
            }
#line 959 "stack_opt.m"
            ll_backend__stack_opt__SuccessorId_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, (MR_Integer) 0)));
#line 959 "stack_opt.m"
            ll_backend__stack_opt__MoreSuccessorIds_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MoreSuccessorIds_189, (MR_Integer) 1)));
#line 960 "stack_opt.m"
            {
#line 960 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorEnd_30, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorId_206, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_193, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_211);
            }
#line 962 "stack_opt.m"
            {
#line 962 "stack_opt.m"
              ll_backend__stack_opt__one_after_another_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchorEnd_30, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__MoreSuccessorIds_207, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_24_211, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_57_57);
            }
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 925 "stack_opt.m"
            ll_backend__stack_opt__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 925 "stack_opt.m"
            {
#line 925 "stack_opt.m"
              mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_168_168, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ll_backend__stack_opt__V_60_60, ((MR_Box) (ll_backend__stack_opt__EndGoalId_81)), &ll_backend__stack_opt__conv3_BranchEndInfo_72);
            }
#line 925 "stack_opt.m"
            ll_backend__stack_opt__BranchEndInfo_72 = ((MR_Word) ll_backend__stack_opt__conv3_BranchEndInfo_72);
#line 927 "stack_opt.m"
            ll_backend__stack_opt__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_72, (MR_Integer) 0)));
#line 927 "stack_opt.m"
            ll_backend__stack_opt__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_72, (MR_Integer) 1)));
#line 927 "stack_opt.m"
            ll_backend__stack_opt__ContinueId_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_72, (MR_Integer) 2)));
#line 928 "stack_opt.m"
            {
#line 928 "stack_opt.m"
              ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__ContinueId_73, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_57_57, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
#line 928 "stack_opt.m"
              return;
            }
#line 915 "stack_opt.m"
          }
#line 930 "stack_opt.m"
        else
#line 943 "stack_opt.m"
          {
#line 943 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchType_33;
#line 943 "stack_opt.m"
            MR_Word ll_backend__stack_opt__EndGoalId_77;

#line 931 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__End_9)) == (MR_mktag((MR_Integer) 1)));
#line 931 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 931 "stack_opt.m"
              {
#line 931 "stack_opt.m"
                ll_backend__stack_opt__BranchType_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 0)));
#line 931 "stack_opt.m"
                ll_backend__stack_opt__EndGoalId_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__End_9, (MR_Integer) 1)));
#line 933 "stack_opt.m"
                {
#line 933 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__AllPathsList_34;
#line 933 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_62_62;
#line 933 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_63_63;
#line 933 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_64_64;
#line 933 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_65_65;
#line 933 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__MaybeSearchAnchor1_74;
#line 933 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__BranchEndInfo_75;
#line 933 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ContinueId_76;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_146_146;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_147_147;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_148_148;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_149_149;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_150_150;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_151_151;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_152_152;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_153_153;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_154_154;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_155_155;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_156_156;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_157_157;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_158_158;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_159_159;
#line 938 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_160_160;
#line 938 "stack_opt.m"
                  MR_Box ll_backend__stack_opt__conv5_BranchEndInfo_75;
#line 940 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_161_161;
#line 940 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_162_162;

#line 933 "stack_opt.m"
                  {
#line 933 "stack_opt.m"
                    ll_backend__stack_opt__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 933 "stack_opt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 933 "stack_opt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_62_62, 1) = ((MR_Box) (ll_backend__stack_opt__BranchType_33));
#line 933 "stack_opt.m"
                    MR_hl_field(MR_mktag(3), ll_backend__stack_opt__V_62_62, 2) = ((MR_Box) (ll_backend__stack_opt__EndGoalId_77));
#line 933 "stack_opt.m"
                  }
#line 933 "stack_opt.m"
                  {
#line 933 "stack_opt.m"
                    ll_backend__stack_opt__MaybeSearchAnchor1_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 933 "stack_opt.m"
                    MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchor1_74, 0) = ((MR_Box) (ll_backend__stack_opt__V_62_62));
#line 933 "stack_opt.m"
                  }
#line 934 "stack_opt.m"
                  {
#line 934 "stack_opt.m"
                    ll_backend__stack_opt__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 934 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_10[0]));
#line 934 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_from_8_p_0_2));
#line 934 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 934 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 3) = ((MR_Box) (ll_backend__stack_opt__RelevantVars_10));
#line 934 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 4) = ((MR_Box) (ll_backend__stack_opt__MaybeSearchAnchor1_74));
#line 934 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 5) = ((MR_Box) (ll_backend__stack_opt__IntervalInfo_12));
#line 934 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 6) = ((MR_Box) (ll_backend__stack_opt__StackOptInfo_13));
#line 934 "stack_opt.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_63_63, 7) = ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39));
#line 934 "stack_opt.m"
                  }
#line 934 "stack_opt.m"
                  {
#line 934 "stack_opt.m"
                    mercury__list__map_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_all_paths_0, ll_backend__stack_opt__V_63_63, ll_backend__stack_opt__SuccessorIds_14, &ll_backend__stack_opt__AllPathsList_34);
                  }
#line 937 "stack_opt.m"
                  {
#line 937 "stack_opt.m"
                    ll_backend__stack_opt__consolidate_after_join_2_p_0(ll_backend__stack_opt__AllPathsList_34, &ll_backend__stack_opt__STATE_VARIABLE_AllPaths_64_64);
                  }
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 0)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 1)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 2)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 3)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 4)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 5)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 6)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 7)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 8)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 9)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 10)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 11)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 12)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 13)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 14)));
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_12, (MR_Integer) 15)));
#line 938 "stack_opt.m"
                  {
#line 938 "stack_opt.m"
                    mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ll_backend__stack_opt__V_65_65, ((MR_Box) (ll_backend__stack_opt__EndGoalId_77)), &ll_backend__stack_opt__conv5_BranchEndInfo_75);
                  }
#line 938 "stack_opt.m"
                  ll_backend__stack_opt__BranchEndInfo_75 = ((MR_Word) ll_backend__stack_opt__conv5_BranchEndInfo_75);
#line 940 "stack_opt.m"
                  ll_backend__stack_opt__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_75, (MR_Integer) 0)));
#line 940 "stack_opt.m"
                  ll_backend__stack_opt__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_75, (MR_Integer) 1)));
#line 940 "stack_opt.m"
                  ll_backend__stack_opt__ContinueId_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_75, (MR_Integer) 2)));
#line 941 "stack_opt.m"
                  {
#line 941 "stack_opt.m"
                    ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__ContinueId_76, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_64_64, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
#line 941 "stack_opt.m"
                    return;
                  }
#line 933 "stack_opt.m"
                }
#line 931 "stack_opt.m"
              }
#line 931 "stack_opt.m"
            else
#line 948 "stack_opt.m"
              {
#line 948 "stack_opt.m"
                MR_Word ll_backend__stack_opt__SuccessorId_35;
#line 944 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_67_67;

#line 944 "stack_opt.m"
                ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__SuccessorIds_14)) == (MR_mktag((MR_Integer) 1)));
#line 944 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 944 "stack_opt.m"
                  {
#line 944 "stack_opt.m"
                    ll_backend__stack_opt__SuccessorId_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 0)));
#line 944 "stack_opt.m"
                    ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_14, (MR_Integer) 1)));
#line 944 "stack_opt.m"
                    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 944 "stack_opt.m"
                  }
#line 948 "stack_opt.m"
                if (ll_backend__stack_opt__succeeded)
#line 945 "stack_opt.m"
                  {
#line 945 "stack_opt.m"
                    ll_backend__stack_opt__apply_interval_find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_10, ll_backend__stack_opt__MaybeSearchAnchor0_11, ll_backend__stack_opt__IntervalInfo_12, ll_backend__stack_opt__StackOptInfo_13, ll_backend__stack_opt__SuccessorId_35, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_39_39, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_37);
#line 945 "stack_opt.m"
                    return;
                  }
#line 948 "stack_opt.m"
                else
#line 949 "stack_opt.m"
                  {
#line 949 "stack_opt.m"
                    {
#line 949 "stack_opt.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", (MR_String) "more successor ids");
#line 949 "stack_opt.m"
                      return;
                    }
#line 949 "stack_opt.m"
                  }
#line 948 "stack_opt.m"
              }
#line 943 "stack_opt.m"
          }
#line 930 "stack_opt.m"
      }
#line 882 "stack_opt.m"
  }
#line 877 "stack_opt.m"
}

#line 849 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_3(
#line 849 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 849 "stack_opt.m"
{
#line 849 "stack_opt.m"
  {
#line 849 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 849 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 849 "stack_opt.m"
    {
#line 849 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__849__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))));
    }
#line 849 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 849 "stack_opt.m"
  }
#line 849 "stack_opt.m"
}

#line 845 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_2(
#line 845 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 845 "stack_opt.m"
{
#line 845 "stack_opt.m"
  {
#line 845 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 845 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 845 "stack_opt.m"
    {
#line 845 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__845__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))));
    }
#line 845 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 845 "stack_opt.m"
  }
#line 845 "stack_opt.m"
}

#line 836 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0_1(
#line 836 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 836 "stack_opt.m"
{
#line 836 "stack_opt.m"
  {
#line 836 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 836 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 836 "stack_opt.m"
    {
#line 836 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__836__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))));
    }
#line 836 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 836 "stack_opt.m"
  }
#line 836 "stack_opt.m"
}

#line 826 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_7_p_0(
#line 826 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_8,
#line 826 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_9,
#line 826 "stack_opt.m"
  MR_Word ll_backend__stack_opt__MaybeSearchAnchor0_10,
#line 826 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_11,
#line 826 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_12,
#line 826 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28,
#line 826 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29)
#line 826 "stack_opt.m"
{
#line 831 "stack_opt.m"
  {
#line 831 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_111_111 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__End_14;
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__SuccessorIds_15;
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 12)));
#line 831 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_31_31;
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 0)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 1)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 2)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 3)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 4)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 5)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 6)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 7)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 8)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 9)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 10)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 11)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 13)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 14)));
#line 832 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 15)));
#line 832 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_End_14;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_71_71;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_72_72;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_73_73;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_74_74;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_75_75;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_76_76;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_77_77;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_78_78;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_79_79;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_80_80;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_81_81;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_82_82;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_83_83;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_84_84;
#line 833 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_85_85;
#line 833 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv1_SuccessorIds_15;

#line 832 "stack_opt.m"
    {
#line 832 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_111_111, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ll_backend__stack_opt__V_30_30, ((MR_Box) (ll_backend__stack_opt__IntervalId_9)), &ll_backend__stack_opt__conv0_End_14);
    }
#line 832 "stack_opt.m"
    ll_backend__stack_opt__End_14 = ((MR_Word) ll_backend__stack_opt__conv0_End_14);
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 0)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 1)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 2)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 3)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 4)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 5)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 6)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 7)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 8)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 9)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 10)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 11)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 12)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 13)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 14)));
#line 833 "stack_opt.m"
    ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 15)));
#line 833 "stack_opt.m"
    {
#line 833 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_111_111, (MR_Word) &ll_backend__stack_opt_scalar_common_1[3], ll_backend__stack_opt__V_31_31, ((MR_Box) (ll_backend__stack_opt__IntervalId_9)), &ll_backend__stack_opt__conv1_SuccessorIds_15);
    }
#line 833 "stack_opt.m"
    ll_backend__stack_opt__SuccessorIds_15 = ((MR_Word) ll_backend__stack_opt__conv1_SuccessorIds_15);
#line 841 "stack_opt.m"
    if ((ll_backend__stack_opt__SuccessorIds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 835 "stack_opt.m"
      {
#line 835 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_50_50;
#line 835 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_54_54;

#line 836 "stack_opt.m"
        {
#line 836 "stack_opt.m"
          ll_backend__stack_opt__V_54_54 = ll_backend__stack_opt__may_have_no_successor_1_f_0(ll_backend__stack_opt__End_14);
        }
#line 836 "stack_opt.m"
        {
#line 836 "stack_opt.m"
          ll_backend__stack_opt__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 836 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
#line 836 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_1));
#line 836 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 836 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 3) = ((MR_Box) (ll_backend__stack_opt__V_54_54));
#line 836 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_50_50, 4) = ((MR_Box) ((MR_Integer) 1));
#line 836 "stack_opt.m"
        }
#line 836 "stack_opt.m"
        {
#line 836 "stack_opt.m"
          mercury__require__expect_4_p_0(ll_backend__stack_opt__V_50_50, (MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected no successor");
        }
#line 835 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29 = ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28;
#line 835 "stack_opt.m"
      }
#line 841 "stack_opt.m"
    else
#line 842 "stack_opt.m"
      {
#line 842 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MoreSuccessorIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_15, (MR_Integer) 1)));
#line 842 "stack_opt.m"
        MR_Word ll_backend__stack_opt__SuccessorId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__SuccessorIds_15, (MR_Integer) 0)));
#line 853 "stack_opt.m"
        MR_Word ll_backend__stack_opt__SearchAnchor0_20;

#line 847 "stack_opt.m"
        if ((ll_backend__stack_opt__MoreSuccessorIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 844 "stack_opt.m"
          {
#line 844 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_38_38;
#line 844 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_42_42;

#line 845 "stack_opt.m"
            {
#line 845 "stack_opt.m"
              ll_backend__stack_opt__V_42_42 = ll_backend__stack_opt__may_have_one_successor_1_f_0(ll_backend__stack_opt__End_14);
            }
#line 845 "stack_opt.m"
            {
#line 845 "stack_opt.m"
              ll_backend__stack_opt__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 845 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
#line 845 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_2));
#line 845 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 845 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 3) = ((MR_Box) (ll_backend__stack_opt__V_42_42));
#line 845 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_38_38, 4) = ((MR_Box) ((MR_Integer) 1));
#line 845 "stack_opt.m"
            }
#line 845 "stack_opt.m"
            {
#line 845 "stack_opt.m"
              mercury__require__expect_4_p_0(ll_backend__stack_opt__V_38_38, (MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected one successor");
            }
#line 844 "stack_opt.m"
          }
#line 847 "stack_opt.m"
        else
#line 848 "stack_opt.m"
          {
#line 848 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_32_32;
#line 848 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_36_36;

#line 849 "stack_opt.m"
            {
#line 849 "stack_opt.m"
              ll_backend__stack_opt__V_36_36 = ll_backend__stack_opt__may_have_more_successors_1_f_0(ll_backend__stack_opt__End_14);
            }
#line 849 "stack_opt.m"
            {
#line 849 "stack_opt.m"
              ll_backend__stack_opt__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 849 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_9[0]));
#line 849 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 1) = ((MR_Box) (ll_backend__stack_opt__find_all_branches_7_p_0_3));
#line 849 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 849 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 3) = ((MR_Box) (ll_backend__stack_opt__V_36_36));
#line 849 "stack_opt.m"
              MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_32_32, 4) = ((MR_Box) ((MR_Integer) 1));
#line 849 "stack_opt.m"
            }
#line 849 "stack_opt.m"
            {
#line 849 "stack_opt.m"
              mercury__require__expect_4_p_0(ll_backend__stack_opt__V_32_32, (MR_String) "ll_backend.stack_opt", (MR_String) "predicate \140ll_backend.stack_opt.find_all_branches\'/7", (MR_String) "unexpected more successors");
            }
#line 848 "stack_opt.m"
          }
#line 853 "stack_opt.m"
        ll_backend__stack_opt__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__MaybeSearchAnchor0_10)) == (MR_mktag((MR_Integer) 1)));
#line 853 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 853 "stack_opt.m"
          {
#line 853 "stack_opt.m"
            ll_backend__stack_opt__SearchAnchor0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MaybeSearchAnchor0_10, (MR_Integer) 0)));
#line 854 "stack_opt.m"
            {
#line 854 "stack_opt.m"
              ll_backend__stack_opt__succeeded = backend_libs__interval____Unify____anchor_0_0(ll_backend__stack_opt__End_14, ll_backend__stack_opt__SearchAnchor0_20);
            }
#line 853 "stack_opt.m"
          }
#line 857 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 856 "stack_opt.m"
          {
#line 856 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_45_45;
#line 856 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_86_86;
#line 856 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_87_87;
#line 856 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_88_88;

#line 856 "stack_opt.m"
            {
#line 856 "stack_opt.m"
              ll_backend__stack_opt__V_45_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
#line 856 "stack_opt.m"
            ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0)));
#line 856 "stack_opt.m"
            ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1)));
#line 856 "stack_opt.m"
            ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 2)));
#line 856 "stack_opt.m"
            {
#line 856 "stack_opt.m"
              MR_Word base;
#line 856 "stack_opt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 856 "stack_opt.m"
              *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29 = base;
#line 856 "stack_opt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_86_86));
#line 856 "stack_opt.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__V_87_87));
#line 856 "stack_opt.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__V_45_45));
#line 856 "stack_opt.m"
            }
#line 856 "stack_opt.m"
          }
#line 857 "stack_opt.m"
        else
#line 870 "stack_opt.m"
          {
#line 870 "stack_opt.m"
            MR_Word ll_backend__stack_opt__RelevantAfter_27;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_118_118;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_119_119;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__TypeCtorInfo_120_120;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__EndGoalId_22;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__BranchEndInfo_23;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__OnStackAfterBranch_24;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__AccessedAfterBranch_25;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__NeededAfterBranch_26;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_46_46;
#line 858 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_21_21;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_89_89;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_90_90;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_91_91;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_92_92;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_93_93;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_94_94;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_95_95;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_96_96;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_97_97;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_98_98;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_99_99;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_100_100;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_101_101;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_102_102;
#line 859 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_103_103;
#line 859 "stack_opt.m"
            MR_Box ll_backend__stack_opt__conv2_BranchEndInfo_23;
#line 861 "stack_opt.m"
            MR_Word ll_backend__stack_opt__V_105_105;

#line 858 "stack_opt.m"
            ll_backend__stack_opt__succeeded = ((((MR_tag((MR_Word) ll_backend__stack_opt__End_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__End_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 858 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 858 "stack_opt.m"
              {
#line 858 "stack_opt.m"
                ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__End_14, (MR_Integer) 1)));
#line 858 "stack_opt.m"
                ll_backend__stack_opt__EndGoalId_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__End_14, (MR_Integer) 2)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 0)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 1)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 2)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 3)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 4)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 5)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 6)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 7)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 8)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 9)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 10)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 11)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 12)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 13)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 14)));
#line 859 "stack_opt.m"
                ll_backend__stack_opt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_11, (MR_Integer) 15)));
#line 9822 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeCtorInfo_118_118 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 9824 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeCtorInfo_119_119 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0;
#line 859 "stack_opt.m"
                {
#line 859 "stack_opt.m"
                  mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_118_118, ll_backend__stack_opt__TypeCtorInfo_119_119, ll_backend__stack_opt__V_46_46, ((MR_Box) (ll_backend__stack_opt__EndGoalId_22)), &ll_backend__stack_opt__conv2_BranchEndInfo_23);
                }
#line 859 "stack_opt.m"
                ll_backend__stack_opt__BranchEndInfo_23 = ((MR_Word) ll_backend__stack_opt__conv2_BranchEndInfo_23);
#line 861 "stack_opt.m"
                ll_backend__stack_opt__OnStackAfterBranch_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 0)));
#line 861 "stack_opt.m"
                ll_backend__stack_opt__AccessedAfterBranch_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 1)));
#line 861 "stack_opt.m"
                ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__BranchEndInfo_23, (MR_Integer) 2)));
#line 9839 "ll_backend.stack_opt.c"
                ll_backend__stack_opt__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 863 "stack_opt.m"
                {
#line 863 "stack_opt.m"
                  ll_backend__stack_opt__NeededAfterBranch_26 = parse_tree__set_of_var__union_2_f_0(ll_backend__stack_opt__TypeCtorInfo_120_120, ll_backend__stack_opt__OnStackAfterBranch_24, ll_backend__stack_opt__AccessedAfterBranch_25);
                }
#line 865 "stack_opt.m"
                {
#line 865 "stack_opt.m"
                  ll_backend__stack_opt__RelevantAfter_27 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__stack_opt__TypeCtorInfo_120_120, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__NeededAfterBranch_26);
                }
#line 867 "stack_opt.m"
                {
#line 867 "stack_opt.m"
                  ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_120_120, ll_backend__stack_opt__RelevantAfter_27);
                }
#line 858 "stack_opt.m"
              }
#line 870 "stack_opt.m"
            if (ll_backend__stack_opt__succeeded)
#line 869 "stack_opt.m"
              {
#line 869 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 0)));
#line 869 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 1)));
#line 869 "stack_opt.m"
                MR_Word ll_backend__stack_opt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, (MR_Integer) 2)));

#line 869 "stack_opt.m"
                {
#line 869 "stack_opt.m"
                  MR_Word base;
#line 869 "stack_opt.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 869 "stack_opt.m"
                  *ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29 = base;
#line 869 "stack_opt.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_108_108));
#line 869 "stack_opt.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__V_109_109));
#line 869 "stack_opt.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__RelevantAfter_27));
#line 869 "stack_opt.m"
                }
#line 869 "stack_opt.m"
              }
#line 870 "stack_opt.m"
            else
#line 871 "stack_opt.m"
              {
#line 871 "stack_opt.m"
                ll_backend__stack_opt__find_all_branches_from_8_p_0(ll_backend__stack_opt__End_14, ll_backend__stack_opt__RelevantVars_8, ll_backend__stack_opt__MaybeSearchAnchor0_10, ll_backend__stack_opt__IntervalInfo_11, ll_backend__stack_opt__StackOptInfo_12, ll_backend__stack_opt__SuccessorIds_15, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_0_28, ll_backend__stack_opt__STATE_VARIABLE_AllPaths_29);
#line 871 "stack_opt.m"
                return;
              }
#line 870 "stack_opt.m"
          }
#line 842 "stack_opt.m"
      }
#line 831 "stack_opt.m"
  }
#line 826 "stack_opt.m"
}

#line 819 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0_1(
#line 819 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 819 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 819 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_2,
#line 819 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 819 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_4)
#line 819 "stack_opt.m"
{
#line 819 "stack_opt.m"
  {
#line 819 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 819 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv3_MatchPathInfo_6;
#line 819 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv2_Anchors_7;
#line 819 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_Intervals_8;

#line 819 "stack_opt.m"
    {
#line 819 "stack_opt.m"
      ll_backend__stack_opt__extract_match_and_save_info_4_p_0(((MR_Word) ll_backend__stack_opt__wrapper_arg_1), &ll_backend__stack_opt__conv3_MatchPathInfo_6, &ll_backend__stack_opt__conv2_Anchors_7, &ll_backend__stack_opt__conv1_Intervals_8);
    }
#line 819 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_2 = ((MR_Box) (ll_backend__stack_opt__conv3_MatchPathInfo_6));
#line 819 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv2_Anchors_7));
#line 819 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_opt__conv1_Intervals_8));
#line 819 "stack_opt.m"
  }
#line 819 "stack_opt.m"
}

#line 804 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(
#line 804 "stack_opt.m"
  MR_Word ll_backend__stack_opt__RelevantVars_5,
#line 804 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchInfo_6,
#line 804 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_7,
#line 804 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptInfo_8)
#line 804 "stack_opt.m"
{
#line 808 "stack_opt.m"
  {
#line 808 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_65_65 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_67_67;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_68_68;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_69_69;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 6)));
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalVars_10;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalRelevantVars_11;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Path0_12;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AllPaths0_13;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AllPaths_14;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Paths_15;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AfterModelNon_16;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__RelevantAfter_17;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PathList_18;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__MatchInputs_19;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushAnchorSets_20;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OccurringIntervalSets_21;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushAnchors_22;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OccurringIntervals_23;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_26_26;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_28_28;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_29_29;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_30_30;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_32_32;
#line 808 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 14)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 0)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 1)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 2)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 3)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 4)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 5)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 7)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 8)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 9)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 10)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 11)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 12)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 13)));
#line 809 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_7, (MR_Integer) 15)));
#line 810 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_IntervalVars_10;

#line 810 "stack_opt.m"
    {
#line 810 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_65_65, (MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ll_backend__stack_opt__V_48_48, ((MR_Box) (ll_backend__stack_opt__IntervalId_9)), &ll_backend__stack_opt__conv0_IntervalVars_10);
    }
#line 810 "stack_opt.m"
    ll_backend__stack_opt__IntervalVars_10 = ((MR_Word) ll_backend__stack_opt__conv0_IntervalVars_10);
#line 10052 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 811 "stack_opt.m"
    {
#line 811 "stack_opt.m"
      ll_backend__stack_opt__IntervalRelevantVars_11 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__stack_opt__TypeCtorInfo_67_67, ll_backend__stack_opt__RelevantVars_5, ll_backend__stack_opt__IntervalVars_10);
    }
#line 813 "stack_opt.m"
    {
#line 813 "stack_opt.m"
      ll_backend__stack_opt__V_26_26 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_67_67);
    }
#line 10064 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_68_68 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 813 "stack_opt.m"
    {
#line 813 "stack_opt.m"
      ll_backend__stack_opt__V_28_28 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_68_68);
    }
#line 813 "stack_opt.m"
    {
#line 813 "stack_opt.m"
      ll_backend__stack_opt__V_29_29 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_65_65);
    }
#line 812 "stack_opt.m"
    {
#line 812 "stack_opt.m"
      ll_backend__stack_opt__Path0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 812 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 0) = ((MR_Box) ((MR_Integer) 0));
#line 812 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 1) = ((MR_Box) (ll_backend__stack_opt__IntervalRelevantVars_11));
#line 812 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 2) = ((MR_Box) (ll_backend__stack_opt__V_26_26));
#line 812 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 812 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 4) = ((MR_Box) (ll_backend__stack_opt__V_28_28));
#line 812 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_12, 5) = ((MR_Box) (ll_backend__stack_opt__V_29_29));
#line 812 "stack_opt.m"
    }
#line 10094 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_69_69 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_path_0;
#line 814 "stack_opt.m"
    {
#line 814 "stack_opt.m"
      ll_backend__stack_opt__V_30_30 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_opt__TypeCtorInfo_69_69, ((MR_Box) (ll_backend__stack_opt__Path0_12)));
    }
#line 814 "stack_opt.m"
    {
#line 814 "stack_opt.m"
      ll_backend__stack_opt__V_32_32 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_67_67);
    }
#line 814 "stack_opt.m"
    {
#line 814 "stack_opt.m"
      ll_backend__stack_opt__AllPaths0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 814 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths0_13, 0) = ((MR_Box) (ll_backend__stack_opt__V_30_30));
#line 814 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths0_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 814 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths0_13, 2) = ((MR_Box) (ll_backend__stack_opt__V_32_32));
#line 814 "stack_opt.m"
    }
#line 815 "stack_opt.m"
    {
#line 815 "stack_opt.m"
      ll_backend__stack_opt__find_all_branches_7_p_0(ll_backend__stack_opt__RelevantVars_5, ll_backend__stack_opt__IntervalId_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__stack_opt__IntervalInfo_7, ll_backend__stack_opt__StackOptInfo_8, ll_backend__stack_opt__AllPaths0_13, &ll_backend__stack_opt__AllPaths_14);
    }
#line 817 "stack_opt.m"
    ll_backend__stack_opt__Paths_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths_14, (MR_Integer) 0)));
#line 817 "stack_opt.m"
    ll_backend__stack_opt__AfterModelNon_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths_14, (MR_Integer) 1)));
#line 817 "stack_opt.m"
    ll_backend__stack_opt__RelevantAfter_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllPaths_14, (MR_Integer) 2)));
#line 818 "stack_opt.m"
    {
#line 818 "stack_opt.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__stack_opt__TypeCtorInfo_69_69, ll_backend__stack_opt__Paths_15, &ll_backend__stack_opt__PathList_18);
    }
#line 819 "stack_opt.m"
    {
#line 819 "stack_opt.m"
      mercury__list__map3_5_p_0(ll_backend__stack_opt__TypeCtorInfo_69_69, (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0, (MR_Word) &ll_backend__stack_opt_scalar_common_1[10], (MR_Word) &ll_backend__stack_opt_scalar_common_1[9], (MR_Word) &ll_backend__stack_opt_scalar_common_2[2], ll_backend__stack_opt__PathList_18, &ll_backend__stack_opt__MatchInputs_19, &ll_backend__stack_opt__FlushAnchorSets_20, &ll_backend__stack_opt__OccurringIntervalSets_21);
    }
#line 821 "stack_opt.m"
    {
#line 821 "stack_opt.m"
      ll_backend__stack_opt__FlushAnchors_22 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_68_68, ll_backend__stack_opt__FlushAnchorSets_20);
    }
#line 822 "stack_opt.m"
    {
#line 822 "stack_opt.m"
      ll_backend__stack_opt__OccurringIntervals_23 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeCtorInfo_65_65, ll_backend__stack_opt__OccurringIntervalSets_21);
    }
#line 823 "stack_opt.m"
    {
#line 823 "stack_opt.m"
      MR_Word base;
#line 823 "stack_opt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 823 "stack_opt.m"
      *ll_backend__stack_opt__MatchInfo_6 = base;
#line 823 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__MatchInputs_19));
#line 823 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__RelevantAfter_17));
#line 823 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__AfterModelNon_16));
#line 823 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__stack_opt__FlushAnchors_22));
#line 823 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__stack_opt__OccurringIntervals_23));
#line 823 "stack_opt.m"
    }
#line 808 "stack_opt.m"
  }
#line 804 "stack_opt.m"
}

#line 782 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_more_successors_1_f_0(
#line 782 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 782 "stack_opt.m"
{
#line 784 "stack_opt.m"
  {
#line 784 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 784 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__2_2;

#line 784 "stack_opt.m"
#line 784 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) {
#line 784 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 784 "stack_opt.m"
      case (MR_Integer) 0:
#line 784 "stack_opt.m"
#line 784 "stack_opt.m"
        switch (MR_unmkbody(ll_backend__stack_opt__HeadVar__1_1)) {
#line 784 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 784 "stack_opt.m"
          case (MR_Integer) 0:
#line 784 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 784 "stack_opt.m"
            break;
#line 784 "stack_opt.m"
          case (MR_Integer) 1:
#line 785 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 784 "stack_opt.m"
            break;
#line 784 "stack_opt.m"
        }
#line 784 "stack_opt.m"
        break;
#line 784 "stack_opt.m"
      case (MR_Integer) 1:
#line 786 "stack_opt.m"
        {
#line 786 "stack_opt.m"
          MR_Word ll_backend__stack_opt__BranchType_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)));
#line 786 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 1)));

#line 790 "stack_opt.m"
          ll_backend__stack_opt__HeadVar__2_2 = ((&ll_backend__stack_opt_vector_common_7[5 + ll_backend__stack_opt__BranchType_3]))->ll_backend__stack_opt__vector_common_type_7_0__vct_7_f_0;
#line 786 "stack_opt.m"
        }
#line 784 "stack_opt.m"
        break;
#line 784 "stack_opt.m"
      case (MR_Integer) 2:
#line 798 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 784 "stack_opt.m"
        break;
#line 784 "stack_opt.m"
      case (MR_Integer) 3:
#line 784 "stack_opt.m"
#line 784 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)))) {
#line 784 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 784 "stack_opt.m"
          case (MR_Integer) 0:
#line 799 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 784 "stack_opt.m"
            break;
#line 784 "stack_opt.m"
          case (MR_Integer) 1:
#line 800 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 784 "stack_opt.m"
            break;
#line 784 "stack_opt.m"
        }
#line 784 "stack_opt.m"
        break;
#line 784 "stack_opt.m"
    }
#line 784 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__2_2;
#line 784 "stack_opt.m"
  }
#line 782 "stack_opt.m"
}

#line 773 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_one_successor_1_f_0(
#line 773 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 773 "stack_opt.m"
{
#line 775 "stack_opt.m"
  {
#line 775 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 775 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__2_2;

#line 775 "stack_opt.m"
#line 775 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) {
#line 775 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 775 "stack_opt.m"
      case (MR_Integer) 0:
#line 775 "stack_opt.m"
#line 775 "stack_opt.m"
        switch (MR_unmkbody(ll_backend__stack_opt__HeadVar__1_1)) {
#line 775 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 775 "stack_opt.m"
          case (MR_Integer) 0:
#line 775 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 775 "stack_opt.m"
            break;
#line 775 "stack_opt.m"
          case (MR_Integer) 1:
#line 776 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 775 "stack_opt.m"
            break;
#line 775 "stack_opt.m"
        }
#line 775 "stack_opt.m"
        break;
#line 775 "stack_opt.m"
      case (MR_Integer) 1:
#line 777 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 775 "stack_opt.m"
        break;
#line 775 "stack_opt.m"
      case (MR_Integer) 2:
#line 778 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 775 "stack_opt.m"
        break;
#line 775 "stack_opt.m"
      case (MR_Integer) 3:
#line 775 "stack_opt.m"
#line 775 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)))) {
#line 775 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 775 "stack_opt.m"
          case (MR_Integer) 0:
#line 779 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 775 "stack_opt.m"
            break;
#line 775 "stack_opt.m"
          case (MR_Integer) 1:
#line 780 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 775 "stack_opt.m"
            break;
#line 775 "stack_opt.m"
        }
#line 775 "stack_opt.m"
        break;
#line 775 "stack_opt.m"
    }
#line 775 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__2_2;
#line 775 "stack_opt.m"
  }
#line 773 "stack_opt.m"
}

#line 764 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__may_have_no_successor_1_f_0(
#line 764 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__1_1)
#line 764 "stack_opt.m"
{
#line 766 "stack_opt.m"
  {
#line 766 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 766 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__2_2;

#line 766 "stack_opt.m"
#line 766 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__1_1)) {
#line 766 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 766 "stack_opt.m"
      case (MR_Integer) 0:
#line 766 "stack_opt.m"
#line 766 "stack_opt.m"
        switch (MR_unmkbody(ll_backend__stack_opt__HeadVar__1_1)) {
#line 766 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 766 "stack_opt.m"
          case (MR_Integer) 0:
#line 766 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 766 "stack_opt.m"
            break;
#line 766 "stack_opt.m"
          case (MR_Integer) 1:
#line 767 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 766 "stack_opt.m"
            break;
#line 766 "stack_opt.m"
        }
#line 766 "stack_opt.m"
        break;
#line 766 "stack_opt.m"
      case (MR_Integer) 1:
#line 768 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 766 "stack_opt.m"
        break;
#line 766 "stack_opt.m"
      case (MR_Integer) 2:
#line 769 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 766 "stack_opt.m"
        break;
#line 766 "stack_opt.m"
      case (MR_Integer) 3:
#line 766 "stack_opt.m"
#line 766 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__1_1, (MR_Integer) 0)))) {
#line 766 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 766 "stack_opt.m"
          case (MR_Integer) 0:
#line 770 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 0;
#line 766 "stack_opt.m"
            break;
#line 766 "stack_opt.m"
          case (MR_Integer) 1:
#line 771 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__2_2 = (MR_Integer) 1;
#line 766 "stack_opt.m"
            break;
#line 766 "stack_opt.m"
        }
#line 766 "stack_opt.m"
        break;
#line 766 "stack_opt.m"
    }
#line 766 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__2_2;
#line 766 "stack_opt.m"
  }
#line 764 "stack_opt.m"
}

#line 736 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__anchor_requires_close_2_f_0(
#line 736 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalInfo_1,
#line 736 "stack_opt.m"
  MR_Word ll_backend__stack_opt__HeadVar__2_2)
#line 736 "stack_opt.m"
{
#line 738 "stack_opt.m"
  {
#line 738 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 738 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVar__3_3;

#line 738 "stack_opt.m"
#line 738 "stack_opt.m"
    switch (MR_tag((MR_Word) ll_backend__stack_opt__HeadVar__2_2)) {
#line 738 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 738 "stack_opt.m"
      case (MR_Integer) 0:
#line 738 "stack_opt.m"
#line 738 "stack_opt.m"
        switch (MR_unmkbody(ll_backend__stack_opt__HeadVar__2_2)) {
#line 738 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 738 "stack_opt.m"
          case (MR_Integer) 0:
#line 738 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 738 "stack_opt.m"
            break;
#line 738 "stack_opt.m"
          case (MR_Integer) 1:
#line 739 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 738 "stack_opt.m"
            break;
#line 738 "stack_opt.m"
        }
#line 738 "stack_opt.m"
        break;
#line 738 "stack_opt.m"
      case (MR_Integer) 1:
#line 741 "stack_opt.m"
        {
#line 741 "stack_opt.m"
          MR_Word ll_backend__stack_opt__GoalId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 741 "stack_opt.m"
          MR_Word ll_backend__stack_opt__ResumeSaveStatus_9;
#line 741 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 3)));
#line 740 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 0)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 1)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 2)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 4)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 5)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 6)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 7)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 8)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 9)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 10)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 11)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 12)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 13)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 14)));
#line 742 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo_1, (MR_Integer) 15)));
#line 742 "stack_opt.m"
          MR_Box ll_backend__stack_opt__conv0_ResumeSaveStatus_9;

#line 742 "stack_opt.m"
          {
#line 742 "stack_opt.m"
            mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0, ll_backend__stack_opt__V_10_10, ((MR_Box) (ll_backend__stack_opt__GoalId_8)), &ll_backend__stack_opt__conv0_ResumeSaveStatus_9);
          }
#line 742 "stack_opt.m"
          ll_backend__stack_opt__ResumeSaveStatus_9 = ((MR_Word) ll_backend__stack_opt__conv0_ResumeSaveStatus_9);
#line 761 "stack_opt.m"
#line 761 "stack_opt.m"
          switch (ll_backend__stack_opt__ResumeSaveStatus_9) {
#line 761 "stack_opt.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 761 "stack_opt.m"
            case (MR_Integer) 1:
#line 762 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 761 "stack_opt.m"
              break;
#line 761 "stack_opt.m"
            case (MR_Integer) 0:
#line 761 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 761 "stack_opt.m"
              break;
#line 761 "stack_opt.m"
          }
#line 741 "stack_opt.m"
        }
#line 738 "stack_opt.m"
        break;
#line 738 "stack_opt.m"
      case (MR_Integer) 2:
#line 744 "stack_opt.m"
        ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 0;
#line 738 "stack_opt.m"
        break;
#line 738 "stack_opt.m"
      case (MR_Integer) 3:
#line 738 "stack_opt.m"
#line 738 "stack_opt.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 0)))) {
#line 738 "stack_opt.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 738 "stack_opt.m"
          case (MR_Integer) 0:
#line 745 "stack_opt.m"
            {
#line 745 "stack_opt.m"
              MR_Word ll_backend__stack_opt__BranchType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 745 "stack_opt.m"
              MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__HeadVar__2_2, (MR_Integer) 2)));

#line 749 "stack_opt.m"
              ll_backend__stack_opt__HeadVar__3_3 = ((&ll_backend__stack_opt_vector_common_7[0 + ll_backend__stack_opt__BranchType_14]))->ll_backend__stack_opt__vector_common_type_7_0__vct_7_f_0;
#line 745 "stack_opt.m"
            }
#line 738 "stack_opt.m"
            break;
#line 738 "stack_opt.m"
          case (MR_Integer) 1:
#line 757 "stack_opt.m"
            ll_backend__stack_opt__HeadVar__3_3 = (MR_Integer) 1;
#line 738 "stack_opt.m"
            break;
#line 738 "stack_opt.m"
        }
#line 738 "stack_opt.m"
        break;
#line 738 "stack_opt.m"
    }
#line 738 "stack_opt.m"
    return ll_backend__stack_opt__HeadVar__3_3;
#line 738 "stack_opt.m"
  }
#line 736 "stack_opt.m"
}

#line 729 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_anchor_to_path_2_f_0(
#line 729 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_4,
#line 729 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_8)
#line 729 "stack_opt.m"
{
#line 731 "stack_opt.m"
  {
#line 731 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 731 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_9;
#line 731 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Anchors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 4)));
#line 731 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Anchors_7;
#line 732 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 0)));
#line 732 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 1)));
#line 732 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 2)));
#line 732 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 3)));
#line 732 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 5)));
#line 734 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_16_16;
#line 734 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_17_17;
#line 734 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_18_18;
#line 734 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;
#line 734 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_21_21;
#line 734 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_20_20;

#line 733 "stack_opt.m"
    {
#line 733 "stack_opt.m"
      mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (ll_backend__stack_opt__Anchor_4)), ll_backend__stack_opt__Anchors0_6, &ll_backend__stack_opt__Anchors_7);
    }
#line 734 "stack_opt.m"
    ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 0)));
#line 734 "stack_opt.m"
    ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 1)));
#line 734 "stack_opt.m"
    ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 2)));
#line 734 "stack_opt.m"
    ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 3)));
#line 734 "stack_opt.m"
    ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 4)));
#line 734 "stack_opt.m"
    ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_8, (MR_Integer) 5)));
#line 734 "stack_opt.m"
    {
#line 734 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_Path_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 734 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 0) = ((MR_Box) (ll_backend__stack_opt__V_16_16));
#line 734 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 1) = ((MR_Box) (ll_backend__stack_opt__V_17_17));
#line 734 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 2) = ((MR_Box) (ll_backend__stack_opt__V_18_18));
#line 734 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 3) = ((MR_Box) (ll_backend__stack_opt__V_19_19));
#line 734 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 4) = ((MR_Box) (ll_backend__stack_opt__Anchors_7));
#line 734 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_9, 5) = ((MR_Box) (ll_backend__stack_opt__V_21_21));
#line 734 "stack_opt.m"
    }
#line 731 "stack_opt.m"
    return ll_backend__stack_opt__STATE_VARIABLE_Path_9;
#line 731 "stack_opt.m"
  }
#line 729 "stack_opt.m"
}

#line 715 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__add_interval_to_path_3_f_0(
#line 715 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_5,
#line 715 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Vars_6,
#line 715 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_0_12)
#line 715 "stack_opt.m"
{
#line 720 "stack_opt.m"
  {
#line 720 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 720 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_Path_13;

#line 718 "stack_opt.m"
    {
#line 718 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__Vars_6);
    }
#line 720 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 720 "stack_opt.m"
      ll_backend__stack_opt__STATE_VARIABLE_Path_13 = ll_backend__stack_opt__STATE_VARIABLE_Path_0_12;
#line 720 "stack_opt.m"
    else
#line 721 "stack_opt.m"
      {
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__CurSegment0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 1)));
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__CurSegment_9;
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__OccurringIntervals0_10;
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__OccurringIntervals_11;
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_26_26;
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_28_28;
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_29_29;
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_30_30;
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 0)));
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 2)));
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 3)));
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 4)));
#line 721 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 5)));
#line 723 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_21_21;
#line 723 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_22_22;
#line 723 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_23_23;
#line 723 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_24_24;
#line 723 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_25_25;
#line 725 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_27_27;
#line 725 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_31_31;

#line 722 "stack_opt.m"
        {
#line 722 "stack_opt.m"
          ll_backend__stack_opt__CurSegment_9 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__Vars_6, ll_backend__stack_opt__CurSegment0_8);
        }
#line 723 "stack_opt.m"
        ll_backend__stack_opt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 0)));
#line 723 "stack_opt.m"
        ll_backend__stack_opt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 1)));
#line 723 "stack_opt.m"
        ll_backend__stack_opt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 2)));
#line 723 "stack_opt.m"
        ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 3)));
#line 723 "stack_opt.m"
        ll_backend__stack_opt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 4)));
#line 723 "stack_opt.m"
        ll_backend__stack_opt__OccurringIntervals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 5)));
#line 724 "stack_opt.m"
        {
#line 724 "stack_opt.m"
          mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (ll_backend__stack_opt__IntervalId_5)), ll_backend__stack_opt__OccurringIntervals0_10, &ll_backend__stack_opt__OccurringIntervals_11);
        }
#line 725 "stack_opt.m"
        ll_backend__stack_opt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 0)));
#line 725 "stack_opt.m"
        ll_backend__stack_opt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 1)));
#line 725 "stack_opt.m"
        ll_backend__stack_opt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 2)));
#line 725 "stack_opt.m"
        ll_backend__stack_opt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 3)));
#line 725 "stack_opt.m"
        ll_backend__stack_opt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 4)));
#line 725 "stack_opt.m"
        ll_backend__stack_opt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_0_12, (MR_Integer) 5)));
#line 726 "stack_opt.m"
        {
#line 726 "stack_opt.m"
          ll_backend__stack_opt__STATE_VARIABLE_Path_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 726 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 0) = ((MR_Box) (ll_backend__stack_opt__V_26_26));
#line 726 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 1) = ((MR_Box) (ll_backend__stack_opt__CurSegment_9));
#line 726 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 2) = ((MR_Box) (ll_backend__stack_opt__V_28_28));
#line 726 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 3) = ((MR_Box) (ll_backend__stack_opt__V_29_29));
#line 726 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 4) = ((MR_Box) (ll_backend__stack_opt__V_30_30));
#line 726 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_Path_13, 5) = ((MR_Box) (ll_backend__stack_opt__OccurringIntervals_11));
#line 726 "stack_opt.m"
        }
#line 721 "stack_opt.m"
      }
#line 720 "stack_opt.m"
    return ll_backend__stack_opt__STATE_VARIABLE_Path_13;
#line 720 "stack_opt.m"
  }
#line 715 "stack_opt.m"
}

#line 698 "stack_opt.m"
static MR_bool MR_CALL 
ll_backend__stack_opt__close_path_1_f_0_1(
#line 698 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg)
#line 698 "stack_opt.m"
{
#line 698 "stack_opt.m"
  {
#line 698 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 698 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;

#line 698 "stack_opt.m"
    {
#line 698 "stack_opt.m"
      return ll_backend__stack_opt__succeeded = ll_backend__stack_opt__IntroducedFrom__pred__close_path__698__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))));
    }
#line 698 "stack_opt.m"
    return ll_backend__stack_opt__succeeded;
#line 698 "stack_opt.m"
  }
#line 698 "stack_opt.m"
}

#line 691 "stack_opt.m"
static MR_Word MR_CALL 
ll_backend__stack_opt__close_path_1_f_0(
#line 691 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_3)
#line 691 "stack_opt.m"
{
#line 693 "stack_opt.m"
  {
#line 693 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 693 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Path_4;
#line 693 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushState_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 0)));
#line 693 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CurSegment_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 1)));
#line 693 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FirstSegment0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 2)));
#line 693 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OtherSegments0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 3)));
#line 693 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FlushAnchors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 4)));
#line 693 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path0_3, (MR_Integer) 5)));
#line 693 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FirstSegment_11;
#line 693 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OtherSegments_12;
#line 693 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_18_18;

#line 702 "stack_opt.m"
#line 702 "stack_opt.m"
    switch (ll_backend__stack_opt__FlushState_5) {
#line 702 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 702 "stack_opt.m"
      case (MR_Integer) 1:
#line 707 "stack_opt.m"
        {
#line 704 "stack_opt.m"
          {
#line 704 "stack_opt.m"
            ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__CurSegment_6);
          }
#line 707 "stack_opt.m"
          if (ll_backend__stack_opt__succeeded)
#line 705 "stack_opt.m"
            {
#line 705 "stack_opt.m"
              ll_backend__stack_opt__FirstSegment_11 = ll_backend__stack_opt__FirstSegment0_7;
#line 706 "stack_opt.m"
              ll_backend__stack_opt__OtherSegments_12 = ll_backend__stack_opt__OtherSegments0_8;
#line 705 "stack_opt.m"
            }
#line 707 "stack_opt.m"
          else
#line 708 "stack_opt.m"
            {
#line 708 "stack_opt.m"
              ll_backend__stack_opt__FirstSegment_11 = ll_backend__stack_opt__FirstSegment0_7;
#line 709 "stack_opt.m"
              {
#line 709 "stack_opt.m"
                ll_backend__stack_opt__OtherSegments_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "stack_opt.m"
                MR_hl_field(MR_mktag(1), ll_backend__stack_opt__OtherSegments_12, 0) = ((MR_Box) (ll_backend__stack_opt__CurSegment_6));
#line 709 "stack_opt.m"
                MR_hl_field(MR_mktag(1), ll_backend__stack_opt__OtherSegments_12, 1) = ((MR_Box) (ll_backend__stack_opt__OtherSegments0_8));
#line 709 "stack_opt.m"
              }
#line 708 "stack_opt.m"
            }
#line 707 "stack_opt.m"
        }
#line 702 "stack_opt.m"
        break;
#line 702 "stack_opt.m"
      case (MR_Integer) 0:
#line 697 "stack_opt.m"
        {
#line 697 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_13_13;

#line 698 "stack_opt.m"
          {
#line 698 "stack_opt.m"
            ll_backend__stack_opt__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 698 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_6[0]));
#line 698 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 1) = ((MR_Box) (ll_backend__stack_opt__close_path_1_f_0_1));
#line 698 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 698 "stack_opt.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_13_13, 3) = ((MR_Box) (ll_backend__stack_opt__FirstSegment0_7));
#line 698 "stack_opt.m"
          }
#line 698 "stack_opt.m"
          {
#line 698 "stack_opt.m"
            mercury__require__expect_4_p_0(ll_backend__stack_opt__V_13_13, (MR_String) "ll_backend.stack_opt", (MR_String) "function \140ll_backend.stack_opt.close_path\'/1", (MR_String) "FirstSegment0 not empty");
          }
#line 700 "stack_opt.m"
          ll_backend__stack_opt__FirstSegment_11 = ll_backend__stack_opt__CurSegment_6;
#line 701 "stack_opt.m"
          ll_backend__stack_opt__OtherSegments_12 = ll_backend__stack_opt__OtherSegments0_8;
#line 697 "stack_opt.m"
        }
#line 702 "stack_opt.m"
        break;
#line 702 "stack_opt.m"
    }
#line 712 "stack_opt.m"
    {
#line 712 "stack_opt.m"
      ll_backend__stack_opt__V_18_18 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 712 "stack_opt.m"
    {
#line 712 "stack_opt.m"
      ll_backend__stack_opt__Path_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 712 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 0) = ((MR_Box) ((MR_Integer) 1));
#line 712 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 1) = ((MR_Box) (ll_backend__stack_opt__V_18_18));
#line 712 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 2) = ((MR_Box) (ll_backend__stack_opt__FirstSegment_11));
#line 712 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 3) = ((MR_Box) (ll_backend__stack_opt__OtherSegments_12));
#line 712 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 4) = ((MR_Box) (ll_backend__stack_opt__FlushAnchors_9));
#line 712 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_4, 5) = ((MR_Box) (ll_backend__stack_opt__IntervalIds_10));
#line 712 "stack_opt.m"
    }
#line 693 "stack_opt.m"
    return ll_backend__stack_opt__Path_4;
#line 693 "stack_opt.m"
  }
#line 691 "stack_opt.m"
}

#line 680 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__extract_match_and_save_info_4_p_0(
#line 680 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Path0_5,
#line 680 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__MatchPathInfo_6,
#line 680 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Anchors_7,
#line 680 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Intervals_8)
#line 680 "stack_opt.m"
{
#line 683 "stack_opt.m"
  {
#line 683 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 683 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Path_9;
#line 683 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FirstSegment_10;
#line 683 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OtherSegments_11;
#line 685 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_12_12;
#line 685 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_13_13;

#line 684 "stack_opt.m"
    {
#line 684 "stack_opt.m"
      ll_backend__stack_opt__Path_9 = ll_backend__stack_opt__close_path_1_f_0(ll_backend__stack_opt__Path0_5);
    }
#line 685 "stack_opt.m"
    ll_backend__stack_opt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 0)));
#line 685 "stack_opt.m"
    ll_backend__stack_opt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 1)));
#line 685 "stack_opt.m"
    ll_backend__stack_opt__FirstSegment_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 2)));
#line 685 "stack_opt.m"
    ll_backend__stack_opt__OtherSegments_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 3)));
#line 685 "stack_opt.m"
    *ll_backend__stack_opt__Anchors_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 4)));
#line 685 "stack_opt.m"
    *ll_backend__stack_opt__Intervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Path_9, (MR_Integer) 5)));
#line 687 "stack_opt.m"
    {
#line 687 "stack_opt.m"
      MR_Word base;
#line 687 "stack_opt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "stack_opt.m"
      *ll_backend__stack_opt__MatchPathInfo_6 = base;
#line 687 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__FirstSegment_10));
#line 687 "stack_opt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__OtherSegments_11));
#line 687 "stack_opt.m"
    }
#line 683 "stack_opt.m"
  }
#line 680 "stack_opt.m"
}

#line 623 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__add_anchor_inserts_10_p_0(
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_11,
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVarsViaCellVar_12,
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__InsertIntervals_13,
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Anchor_14,
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27,
#line 623 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_28,
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29,
#line 623 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30,
#line 623 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31,
#line 623 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32)
#line 623 "stack_opt.m"
{
#line 629 "stack_opt.m"
  {
#line 629 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_58_58 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_60_60;
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorFollow_18;
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorIntervals_20;
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AnchorInsertIntervals_21;
#line 629 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 9)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 0)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 1)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 2)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 3)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 4)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 5)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 6)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 7)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 8)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 10)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 11)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 12)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 13)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 14)));
#line 630 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27, (MR_Integer) 15)));
#line 630 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_AnchorFollow_18;
#line 631 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;

#line 630 "stack_opt.m"
    {
#line 630 "stack_opt.m"
      mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, ll_backend__stack_opt__V_33_33, ((MR_Box) (ll_backend__stack_opt__Anchor_14)), &ll_backend__stack_opt__conv0_AnchorFollow_18);
    }
#line 630 "stack_opt.m"
    ll_backend__stack_opt__AnchorFollow_18 = ((MR_Word) ll_backend__stack_opt__conv0_AnchorFollow_18);
#line 631 "stack_opt.m"
    ll_backend__stack_opt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AnchorFollow_18, (MR_Integer) 0)));
#line 631 "stack_opt.m"
    ll_backend__stack_opt__AnchorIntervals_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AnchorFollow_18, (MR_Integer) 1)));
#line 11145 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_60_60 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 632 "stack_opt.m"
    {
#line 632 "stack_opt.m"
      mercury__set__intersect_3_p_0(ll_backend__stack_opt__TypeCtorInfo_60_60, ll_backend__stack_opt__AnchorIntervals_20, ll_backend__stack_opt__InsertIntervals_13, &ll_backend__stack_opt__AnchorInsertIntervals_21);
    }
#line 634 "stack_opt.m"
    {
#line 634 "stack_opt.m"
      ll_backend__stack_opt__succeeded = mercury__set__is_non_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_60_60, ll_backend__stack_opt__AnchorInsertIntervals_21);
    }
#line 646 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 635 "stack_opt.m"
      {
#line 635 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Insert_22;
#line 635 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertMap0_23;
#line 635 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertMap_26;
#line 636 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_53_53;
#line 636 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_54_54;
#line 640 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Inserts0_24;
#line 637 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv1_Inserts0_24;
#line 644 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_55_55;
#line 644 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_57_57;
#line 644 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_56_56;

#line 635 "stack_opt.m"
        {
#line 635 "stack_opt.m"
          ll_backend__stack_opt__Insert_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 635 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Insert_22, 0) = ((MR_Box) (ll_backend__stack_opt__Goal_11));
#line 635 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Insert_22, 1) = ((MR_Box) (ll_backend__stack_opt__ArgVarsViaCellVar_12));
#line 635 "stack_opt.m"
        }
#line 636 "stack_opt.m"
        ll_backend__stack_opt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 0)));
#line 636 "stack_opt.m"
        ll_backend__stack_opt__InsertMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 1)));
#line 636 "stack_opt.m"
        ll_backend__stack_opt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 2)));
#line 637 "stack_opt.m"
        {
#line 637 "stack_opt.m"
          ll_backend__stack_opt__succeeded = mercury__map__search_3_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ll_backend__stack_opt__InsertMap0_23, ((MR_Box) (ll_backend__stack_opt__Anchor_14)), &ll_backend__stack_opt__conv1_Inserts0_24);
        }
#line 637 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 637 "stack_opt.m"
          {
#line 637 "stack_opt.m"
            ll_backend__stack_opt__Inserts0_24 = ((MR_Word) ll_backend__stack_opt__conv1_Inserts0_24);
#line 637 "stack_opt.m"
            ll_backend__stack_opt__succeeded = MR_TRUE;
#line 637 "stack_opt.m"
          }
#line 640 "stack_opt.m"
        if (ll_backend__stack_opt__succeeded)
#line 638 "stack_opt.m"
          {
#line 638 "stack_opt.m"
            MR_Word ll_backend__stack_opt__Inserts_25;

#line 638 "stack_opt.m"
            {
#line 638 "stack_opt.m"
              ll_backend__stack_opt__Inserts_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_25, 0) = ((MR_Box) (ll_backend__stack_opt__Insert_22));
#line 638 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_25, 1) = ((MR_Box) (ll_backend__stack_opt__Inserts0_24));
#line 638 "stack_opt.m"
            }
#line 639 "stack_opt.m"
            {
#line 639 "stack_opt.m"
              mercury__map__det_update_4_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ((MR_Box) (ll_backend__stack_opt__Anchor_14)), ((MR_Box) (ll_backend__stack_opt__Inserts_25)), ll_backend__stack_opt__InsertMap0_23, &ll_backend__stack_opt__InsertMap_26);
            }
#line 638 "stack_opt.m"
          }
#line 640 "stack_opt.m"
        else
#line 641 "stack_opt.m"
          {
#line 641 "stack_opt.m"
            MR_Word ll_backend__stack_opt__Inserts_37;

#line 641 "stack_opt.m"
            {
#line 641 "stack_opt.m"
              ll_backend__stack_opt__Inserts_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_37, 0) = ((MR_Box) (ll_backend__stack_opt__Insert_22));
#line 641 "stack_opt.m"
              MR_hl_field(MR_mktag(1), ll_backend__stack_opt__Inserts_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "stack_opt.m"
            }
#line 642 "stack_opt.m"
            {
#line 642 "stack_opt.m"
              mercury__map__det_insert_4_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, (MR_Word) &ll_backend__stack_opt_scalar_common_1[2], ((MR_Box) (ll_backend__stack_opt__Anchor_14)), ((MR_Box) (ll_backend__stack_opt__Inserts_37)), ll_backend__stack_opt__InsertMap0_23, &ll_backend__stack_opt__InsertMap_26);
            }
#line 641 "stack_opt.m"
          }
#line 644 "stack_opt.m"
        ll_backend__stack_opt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 0)));
#line 644 "stack_opt.m"
        ll_backend__stack_opt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 1)));
#line 644 "stack_opt.m"
        ll_backend__stack_opt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29, (MR_Integer) 2)));
#line 644 "stack_opt.m"
        {
#line 644 "stack_opt.m"
          MR_Word base;
#line 644 "stack_opt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 644 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30 = base;
#line 644 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_55_55));
#line 644 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__InsertMap_26));
#line 644 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__V_57_57));
#line 644 "stack_opt.m"
        }
#line 645 "stack_opt.m"
        {
#line 645 "stack_opt.m"
          mercury__set__insert_3_p_0(ll_backend__stack_opt__TypeCtorInfo_58_58, ((MR_Box) (ll_backend__stack_opt__Anchor_14)), ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31, ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32);
        }
#line 635 "stack_opt.m"
      }
#line 646 "stack_opt.m"
    else
#line 647 "stack_opt.m"
      {
#line 647 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_32 = ll_backend__stack_opt__STATE_VARIABLE_InsertAnchors_0_31;
#line 647 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_30 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_29;
#line 647 "stack_opt.m"
      }
#line 629 "stack_opt.m"
    *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_28 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_27;
#line 629 "stack_opt.m"
  }
#line 623 "stack_opt.m"
}

#line 608 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(
#line 608 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_10,
#line 608 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_11,
#line 608 "stack_opt.m"
  MR_Word ll_backend__stack_opt__IntervalId_12,
#line 608 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_17,
#line 608 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_18,
#line 608 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_19,
#line 608 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_20,
#line 608 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21,
#line 608 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22)
#line 608 "stack_opt.m"
{
#line 614 "stack_opt.m"
  {
#line 614 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 614 "stack_opt.m"
    MR_Word ll_backend__stack_opt__DeletedVars_16;
#line 614 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_23_23;
#line 614 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_24_24;

#line 615 "stack_opt.m"
    {
#line 615 "stack_opt.m"
      ll_backend__stack_opt__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_23_23, 0) = ((MR_Box) (ll_backend__stack_opt__CellVar_10));
#line 615 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 615 "stack_opt.m"
    }
#line 615 "stack_opt.m"
    {
#line 615 "stack_opt.m"
      backend_libs__interval__record_interval_vars_4_p_0(ll_backend__stack_opt__IntervalId_12, ll_backend__stack_opt__V_23_23, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_17, &ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_24_24);
    }
#line 616 "stack_opt.m"
    {
#line 616 "stack_opt.m"
      backend_libs__interval__delete_interval_vars_5_p_0(ll_backend__stack_opt__IntervalId_12, ll_backend__stack_opt__ViaCellVars_11, &ll_backend__stack_opt__DeletedVars_16, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_24_24, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_18);
    }
#line 617 "stack_opt.m"
    {
#line 617 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__DeletedVars_16);
    }
#line 619 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 618 "stack_opt.m"
      {
#line 618 "stack_opt.m"
        {
#line 618 "stack_opt.m"
          mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (ll_backend__stack_opt__IntervalId_12)), ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21, ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22);
        }
#line 618 "stack_opt.m"
      }
#line 619 "stack_opt.m"
    else
#line 619 "stack_opt.m"
      *ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_22 = ll_backend__stack_opt__STATE_VARIABLE_InsertIntervals_0_21;
#line 614 "stack_opt.m"
    *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_20 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_19;
#line 614 "stack_opt.m"
  }
#line 608 "stack_opt.m"
}

#line 594 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_2(
#line 594 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 594 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 594 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 594 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 594 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 594 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 594 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 594 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7)
#line 594 "stack_opt.m"
{
#line 594 "stack_opt.m"
  {
#line 594 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 594 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv8_STATE_VARIABLE_IntervalInfo_28;
#line 594 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv7_STATE_VARIABLE_StackOptInfo_30;
#line 594 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv6_STATE_VARIABLE_InsertAnchors_32;

#line 594 "stack_opt.m"
    {
#line 594 "stack_opt.m"
      ll_backend__stack_opt__add_anchor_inserts_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), &ll_backend__stack_opt__conv8_STATE_VARIABLE_IntervalInfo_28, ((MR_Word) ll_backend__stack_opt__wrapper_arg_4), &ll_backend__stack_opt__conv7_STATE_VARIABLE_StackOptInfo_30, ((MR_Word) ll_backend__stack_opt__wrapper_arg_6), &ll_backend__stack_opt__conv6_STATE_VARIABLE_InsertAnchors_32);
    }
#line 594 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv8_STATE_VARIABLE_IntervalInfo_28));
#line 594 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_5 = ((MR_Box) (ll_backend__stack_opt__conv7_STATE_VARIABLE_StackOptInfo_30));
#line 594 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_7 = ((MR_Box) (ll_backend__stack_opt__conv6_STATE_VARIABLE_InsertAnchors_32));
#line 594 "stack_opt.m"
  }
#line 594 "stack_opt.m"
}

#line 591 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0_1(
#line 591 "stack_opt.m"
  MR_Box ll_backend__stack_opt__closure_arg,
#line 591 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_1,
#line 591 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_2,
#line 591 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_3,
#line 591 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_4,
#line 591 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_5,
#line 591 "stack_opt.m"
  MR_Box ll_backend__stack_opt__wrapper_arg_6,
#line 591 "stack_opt.m"
  MR_Box * ll_backend__stack_opt__wrapper_arg_7)
#line 591 "stack_opt.m"
{
#line 591 "stack_opt.m"
  {
#line 591 "stack_opt.m"
    MR_Box ll_backend__stack_opt__closure = ll_backend__stack_opt__closure_arg;
#line 591 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv2_STATE_VARIABLE_IntervalInfo_18;
#line 591 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv1_STATE_VARIABLE_StackOptInfo_20;
#line 591 "stack_opt.m"
    MR_Word ll_backend__stack_opt__conv0_STATE_VARIABLE_InsertIntervals_22;

#line 591 "stack_opt.m"
    {
#line 591 "stack_opt.m"
      ll_backend__stack_opt__record_cell_var_for_interval_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__stack_opt__wrapper_arg_1), ((MR_Word) ll_backend__stack_opt__wrapper_arg_2), &ll_backend__stack_opt__conv2_STATE_VARIABLE_IntervalInfo_18, ((MR_Word) ll_backend__stack_opt__wrapper_arg_4), &ll_backend__stack_opt__conv1_STATE_VARIABLE_StackOptInfo_20, ((MR_Word) ll_backend__stack_opt__wrapper_arg_6), &ll_backend__stack_opt__conv0_STATE_VARIABLE_InsertIntervals_22);
    }
#line 591 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_opt__conv2_STATE_VARIABLE_IntervalInfo_18));
#line 591 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_5 = ((MR_Box) (ll_backend__stack_opt__conv1_STATE_VARIABLE_StackOptInfo_20));
#line 591 "stack_opt.m"
    *ll_backend__stack_opt__wrapper_arg_7 = ((MR_Box) (ll_backend__stack_opt__conv0_STATE_VARIABLE_InsertIntervals_22));
#line 591 "stack_opt.m"
  }
#line 591 "stack_opt.m"
}

#line 579 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__record_matching_result_11_p_0(
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_12,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_13,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ArgVars_14,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ViaCellVars_15,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_16,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialAnchors_17,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PotentialIntervals_18,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31,
#line 579 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32,
#line 579 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33,
#line 579 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34)
#line 579 "stack_opt.m"
{
#line 588 "stack_opt.m"
  {
#line 588 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 586 "stack_opt.m"
    {
#line 586 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__ViaCellVars_15);
    }
#line 588 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 587 "stack_opt.m"
      {
#line 587 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33;
#line 587 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31;
#line 587 "stack_opt.m"
      }
#line 588 "stack_opt.m"
    else
#line 589 "stack_opt.m"
      {
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_50_50 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_51_51;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_59_59;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__TypeCtorInfo_60_60;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PotentialIntervalList_21;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__PotentialAnchorList_22;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertIntervals_23;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__InsertAnchors_24;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__GoalInfo_26;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__GoalId_27;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingResult_28;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingResults0_29;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingResults_30;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_35_35;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_36_36;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_37_37;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_38_38;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_39_39;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_42_42;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_44_44;
#line 589 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_45_45;
#line 591 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv5_STATE_VARIABLE_IntervalInfo_36_36;
#line 591 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv4_STATE_VARIABLE_StackOptInfo_37_37;
#line 591 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv3_InsertIntervals_23;
#line 594 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv11_STATE_VARIABLE_IntervalInfo_32;
#line 594 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv10_STATE_VARIABLE_StackOptInfo_41_41;
#line 594 "stack_opt.m"
        MR_Box ll_backend__stack_opt__conv9_InsertAnchors_24;
#line 597 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_25_25;

#line 589 "stack_opt.m"
        {
#line 589 "stack_opt.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__stack_opt__TypeCtorInfo_50_50, ll_backend__stack_opt__PotentialIntervals_18, &ll_backend__stack_opt__PotentialIntervalList_21);
        }
#line 11599 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_51_51 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 590 "stack_opt.m"
        {
#line 590 "stack_opt.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__stack_opt__TypeCtorInfo_51_51, ll_backend__stack_opt__PotentialAnchors_17, &ll_backend__stack_opt__PotentialAnchorList_22);
        }
#line 591 "stack_opt.m"
        {
#line 591 "stack_opt.m"
          ll_backend__stack_opt__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 591 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_4[0]));
#line 591 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 1) = ((MR_Box) (ll_backend__stack_opt__record_matching_result_11_p_0_1));
#line 591 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 591 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 3) = ((MR_Box) (ll_backend__stack_opt__CellVar_12));
#line 591 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_35_35, 4) = ((MR_Box) (ll_backend__stack_opt__ViaCellVars_15));
#line 591 "stack_opt.m"
        }
#line 593 "stack_opt.m"
        {
#line 593 "stack_opt.m"
          ll_backend__stack_opt__V_38_38 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_50_50);
        }
#line 11627 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_59_59 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0;
#line 11629 "ll_backend.stack_opt.c"
        ll_backend__stack_opt__TypeCtorInfo_60_60 = (MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_stack_opt_info_0;
#line 591 "stack_opt.m"
        {
#line 591 "stack_opt.m"
          mercury__list__foldl3_8_p_0(ll_backend__stack_opt__TypeCtorInfo_50_50, ll_backend__stack_opt__TypeCtorInfo_59_59, ll_backend__stack_opt__TypeCtorInfo_60_60, (MR_Word) &ll_backend__stack_opt_scalar_common_1[9], ll_backend__stack_opt__V_35_35, ll_backend__stack_opt__PotentialIntervalList_21, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_31)), &ll_backend__stack_opt__conv5_STATE_VARIABLE_IntervalInfo_36_36, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_33)), &ll_backend__stack_opt__conv4_STATE_VARIABLE_StackOptInfo_37_37, ((MR_Box) (ll_backend__stack_opt__V_38_38)), &ll_backend__stack_opt__conv3_InsertIntervals_23);
        }
#line 591 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_36_36 = ((MR_Word) ll_backend__stack_opt__conv5_STATE_VARIABLE_IntervalInfo_36_36);
#line 591 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_37_37 = ((MR_Word) ll_backend__stack_opt__conv4_STATE_VARIABLE_StackOptInfo_37_37);
#line 591 "stack_opt.m"
        ll_backend__stack_opt__InsertIntervals_23 = ((MR_Word) ll_backend__stack_opt__conv3_InsertIntervals_23);
#line 594 "stack_opt.m"
        {
#line 594 "stack_opt.m"
          ll_backend__stack_opt__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 594 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 0) = ((MR_Box) (&ll_backend__stack_opt_scalar_common_5[0]));
#line 594 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 1) = ((MR_Box) (ll_backend__stack_opt__record_matching_result_11_p_0_2));
#line 594 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 594 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 3) = ((MR_Box) (ll_backend__stack_opt__Goal_16));
#line 594 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 4) = ((MR_Box) (ll_backend__stack_opt__ViaCellVars_15));
#line 594 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__V_39_39, 5) = ((MR_Box) (ll_backend__stack_opt__InsertIntervals_23));
#line 594 "stack_opt.m"
        }
#line 596 "stack_opt.m"
        {
#line 596 "stack_opt.m"
          ll_backend__stack_opt__V_42_42 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_51_51);
        }
#line 594 "stack_opt.m"
        {
#line 594 "stack_opt.m"
          mercury__list__foldl3_8_p_0(ll_backend__stack_opt__TypeCtorInfo_51_51, ll_backend__stack_opt__TypeCtorInfo_59_59, ll_backend__stack_opt__TypeCtorInfo_60_60, (MR_Word) &ll_backend__stack_opt_scalar_common_1[10], ll_backend__stack_opt__V_39_39, ll_backend__stack_opt__PotentialAnchorList_22, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_36_36)), &ll_backend__stack_opt__conv11_STATE_VARIABLE_IntervalInfo_32, ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_37_37)), &ll_backend__stack_opt__conv10_STATE_VARIABLE_StackOptInfo_41_41, ((MR_Box) (ll_backend__stack_opt__V_42_42)), &ll_backend__stack_opt__conv9_InsertAnchors_24);
        }
#line 594 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_32 = ((MR_Word) ll_backend__stack_opt__conv11_STATE_VARIABLE_IntervalInfo_32);
#line 594 "stack_opt.m"
        ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41 = ((MR_Word) ll_backend__stack_opt__conv10_STATE_VARIABLE_StackOptInfo_41_41);
#line 594 "stack_opt.m"
        ll_backend__stack_opt__InsertAnchors_24 = ((MR_Word) ll_backend__stack_opt__conv9_InsertAnchors_24);
#line 597 "stack_opt.m"
        ll_backend__stack_opt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_16, (MR_Integer) 0)));
#line 597 "stack_opt.m"
        ll_backend__stack_opt__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__Goal_16, (MR_Integer) 1)));
#line 598 "stack_opt.m"
        {
#line 598 "stack_opt.m"
          ll_backend__stack_opt__GoalId_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__stack_opt__GoalInfo_26);
        }
#line 599 "stack_opt.m"
        {
#line 599 "stack_opt.m"
          ll_backend__stack_opt__MatchingResult_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 599 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 0) = ((MR_Box) (ll_backend__stack_opt__CellVar_12));
#line 599 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 1) = ((MR_Box) (ll_backend__stack_opt__ConsId_13));
#line 599 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 2) = ((MR_Box) (ll_backend__stack_opt__ArgVars_14));
#line 599 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 3) = ((MR_Box) (ll_backend__stack_opt__ViaCellVars_15));
#line 599 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 4) = ((MR_Box) (ll_backend__stack_opt__GoalId_27));
#line 599 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 5) = ((MR_Box) (ll_backend__stack_opt__PotentialIntervals_18));
#line 599 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 6) = ((MR_Box) (ll_backend__stack_opt__InsertIntervals_23));
#line 599 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 7) = ((MR_Box) (ll_backend__stack_opt__PotentialAnchors_17));
#line 599 "stack_opt.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingResult_28, 8) = ((MR_Box) (ll_backend__stack_opt__InsertAnchors_24));
#line 599 "stack_opt.m"
        }
#line 603 "stack_opt.m"
        ll_backend__stack_opt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 0)));
#line 603 "stack_opt.m"
        ll_backend__stack_opt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 1)));
#line 603 "stack_opt.m"
        ll_backend__stack_opt__MatchingResults0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_41_41, (MR_Integer) 2)));
#line 604 "stack_opt.m"
        {
#line 604 "stack_opt.m"
          ll_backend__stack_opt__MatchingResults_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "stack_opt.m"
          MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MatchingResults_30, 0) = ((MR_Box) (ll_backend__stack_opt__MatchingResult_28));
#line 604 "stack_opt.m"
          MR_hl_field(MR_mktag(1), ll_backend__stack_opt__MatchingResults_30, 1) = ((MR_Box) (ll_backend__stack_opt__MatchingResults0_29));
#line 604 "stack_opt.m"
        }
#line 605 "stack_opt.m"
        {
#line 605 "stack_opt.m"
          MR_Word base;
#line 605 "stack_opt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 605 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_34 = base;
#line 605 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__stack_opt__V_44_44));
#line 605 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__stack_opt__V_45_45));
#line 605 "stack_opt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__stack_opt__MatchingResults_30));
#line 605 "stack_opt.m"
        }
#line 589 "stack_opt.m"
      }
#line 588 "stack_opt.m"
  }
#line 579 "stack_opt.m"
}

#line 561 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__apply_matching_for_path_8_p_0(
#line 561 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 561 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVarFlushedLater_10,
#line 561 "stack_opt.m"
  MR_Word ll_backend__stack_opt__StackOptParams_11,
#line 561 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CandidateArgVars_12,
#line 561 "stack_opt.m"
  MR_Word ll_backend__stack_opt__PathInfo_13,
#line 561 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__BenefitNodes_14,
#line 561 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__CostNodes_15,
#line 561 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__ViaCellVars_16)
#line 561 "stack_opt.m"
{
#line 571 "stack_opt.m"
  {
#line 571 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;

#line 567 "stack_opt.m"
    {
#line 567 "stack_opt.m"
      ll_backend__stack_opt__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_opt__CandidateArgVars_12);
    }
#line 571 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 568 "stack_opt.m"
      {
#line 568 "stack_opt.m"
        {
#line 568 "stack_opt.m"
          *ll_backend__stack_opt__BenefitNodes_14 = mercury__set__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0);
        }
#line 569 "stack_opt.m"
        {
#line 569 "stack_opt.m"
          *ll_backend__stack_opt__CostNodes_15 = mercury__set__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0);
        }
#line 570 "stack_opt.m"
        {
#line 570 "stack_opt.m"
          *ll_backend__stack_opt__ViaCellVars_16 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 568 "stack_opt.m"
      }
#line 571 "stack_opt.m"
    else
#line 572 "stack_opt.m"
      {
#line 572 "stack_opt.m"
        MR_Word ll_backend__stack_opt__FirstSegment_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PathInfo_13, (MR_Integer) 0)));
#line 572 "stack_opt.m"
        MR_Word ll_backend__stack_opt__LaterSegments_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PathInfo_13, (MR_Integer) 1)));
#line 572 "stack_opt.m"
        MR_Word ll_backend__stack_opt__MatchingParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 0)));
#line 573 "stack_opt.m"
        MR_Integer ll_backend__stack_opt__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 1)));
#line 573 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 573 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 573 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 573 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_11, (MR_Integer) 3)));

#line 574 "stack_opt.m"
        {
#line 574 "stack_opt.m"
          backend_libs__matching__find_via_cell_vars_9_p_0(ll_backend__stack_opt__CellVar_9, ll_backend__stack_opt__CandidateArgVars_12, ll_backend__stack_opt__CellVarFlushedLater_10, ll_backend__stack_opt__FirstSegment_17, ll_backend__stack_opt__LaterSegments_18, ll_backend__stack_opt__MatchingParams_19, ll_backend__stack_opt__BenefitNodes_14, ll_backend__stack_opt__CostNodes_15, ll_backend__stack_opt__ViaCellVars_16);
#line 574 "stack_opt.m"
          return;
        }
#line 572 "stack_opt.m"
      }
#line 571 "stack_opt.m"
  }
#line 561 "stack_opt.m"
}

#line 482 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_1(
#line 482 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 482 "stack_opt.m"
{
#line 482 "stack_opt.m"
  {
#line 482 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 482 "stack_opt.m"
    MR_builtin_longjmp((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0, 1);
#line 482 "stack_opt.m"
  }
#line 482 "stack_opt.m"
}

#line 482 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_3(
#line 482 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 482 "stack_opt.m"
{
#line 482 "stack_opt.m"
  {
#line 482 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 482 "stack_opt.m"
    (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47 = ((MR_Word) (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_PathInfo_47);
#line 482 "stack_opt.m"
    {
#line 482 "stack_opt.m"
      ll_backend__stack_opt__use_cell_8_p_0_2(ll_backend__stack_opt__env_ptr);
#line 482 "stack_opt.m"
      return;
    }
#line 482 "stack_opt.m"
  }
#line 482 "stack_opt.m"
}

#line 484 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_5(
#line 484 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 484 "stack_opt.m"
{
#line 484 "stack_opt.m"
  {
#line 484 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 484 "stack_opt.m"
    (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_50 = ((MR_Word) (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv2_Segment_50);
#line 484 "stack_opt.m"
    {
#line 484 "stack_opt.m"
      ll_backend__stack_opt__use_cell_8_p_0_4(ll_backend__stack_opt__env_ptr);
#line 484 "stack_opt.m"
      return;
    }
#line 484 "stack_opt.m"
  }
#line 484 "stack_opt.m"
}

#line 482 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_4(
#line 482 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 482 "stack_opt.m"
{
#line 482 "stack_opt.m"
  {
#line 482 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 485 "stack_opt.m"
    {
#line 485 "stack_opt.m"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segment_50, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9);
    }
#line 485 "stack_opt.m"
    if ((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 485 "stack_opt.m"
      {
#line 485 "stack_opt.m"
        ll_backend__stack_opt__use_cell_8_p_0_1(ll_backend__stack_opt__env_ptr);
#line 485 "stack_opt.m"
        return;
      }
#line 482 "stack_opt.m"
  }
#line 482 "stack_opt.m"
}

#line 482 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_2(
#line 482 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 482 "stack_opt.m"
{
#line 482 "stack_opt.m"
  {
#line 482 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 482 "stack_opt.m"
    {
#line 483 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47, (MR_Integer) 0)));

#line 483 "stack_opt.m"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathInfo_47, (MR_Integer) 1)));
#line 11956 "ll_backend.stack_opt.c"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_120_120 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[4];
#line 484 "stack_opt.m"
      {
#line 484 "stack_opt.m"
        mercury__list__member_2_p_1((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeInfo_120_120, &(ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv2_Segment_50, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__Segments_49, ll_backend__stack_opt__use_cell_8_p_0_5, ll_backend__stack_opt__env_ptr);
      }
#line 482 "stack_opt.m"
    }
#line 482 "stack_opt.m"
  }
#line 482 "stack_opt.m"
}

#line 482 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0_6(
#line 482 "stack_opt.m"
  void * ll_backend__stack_opt__env_ptr_arg)
#line 482 "stack_opt.m"
{
#line 482 "stack_opt.m"
  {
#line 482 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s * ll_backend__stack_opt__env_ptr = (struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s *) ll_backend__stack_opt__env_ptr_arg;

#line 482 "stack_opt.m"
    if (MR_builtin_setjmp((ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__commit_0) == 0)
#line 482 "stack_opt.m"
      {
#line 482 "stack_opt.m"
        {
#line 482 "stack_opt.m"
          {
#line 482 "stack_opt.m"
            mercury__list__member_2_p_1((MR_Word) &ll_backend__stack_opt__ll_backend__stack_opt__type_ctor_info_match_path_info_0, &(ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__conv1_PathInfo_47, (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38, ll_backend__stack_opt__use_cell_8_p_0_3, ll_backend__stack_opt__env_ptr);
          }
#line 482 "stack_opt.m"
        }
#line 482 "stack_opt.m"
        (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_FALSE;
#line 482 "stack_opt.m"
      }
#line 482 "stack_opt.m"
    else
#line 482 "stack_opt.m"
      (ll_backend__stack_opt__env_ptr)->ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
#line 482 "stack_opt.m"
  }
#line 482 "stack_opt.m"
}

#line 410 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__use_cell_8_p_0(
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__CellVar_9,
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__FieldVarList_10,
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ConsId_11,
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__Goal_12,
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51,
#line 410 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52,
#line 410 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53,
#line 410 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54)
#line 410 "stack_opt.m"
{
#line 410 "stack_opt.m"
  {
#line 410 "stack_opt.m"
    struct ll_backend__stack_opt__use_cell_8_p_0_env_0_s ll_backend__stack_opt__env;

#line 410 "stack_opt.m"
    (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9 = ll_backend__stack_opt__CellVar_9;
#line 414 "stack_opt.m"
    {
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__FlushedLater_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 1)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__StackOptParams_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, (MR_Integer) 0)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__NonCandidateVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 3)));
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__FieldVars_18;
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__FlushedLaterFieldVars_19;
#line 414 "stack_opt.m"
      MR_Word ll_backend__stack_opt__CandidateArgVars0_20;
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 0)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 2)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 3)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 4)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 5)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 6)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 7)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 8)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 9)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 10)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 11)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 12)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 13)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 14)));
#line 415 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 15)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, (MR_Integer) 1)));
#line 416 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, (MR_Integer) 2)));
#line 417 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 0)));
#line 417 "stack_opt.m"
      MR_Integer ll_backend__stack_opt__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 1)));
#line 417 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_81_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 417 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 417 "stack_opt.m"
      MR_Word ll_backend__stack_opt__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 12095 "ll_backend.stack_opt.c"
      (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 418 "stack_opt.m"
      {
#line 418 "stack_opt.m"
        ll_backend__stack_opt__FieldVars_18 = parse_tree__set_of_var__list_to_set_1_f_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FieldVarList_10);
      }
#line 419 "stack_opt.m"
      {
#line 419 "stack_opt.m"
        parse_tree__set_of_var__intersect_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FieldVars_18, ll_backend__stack_opt__FlushedLater_15, &ll_backend__stack_opt__FlushedLaterFieldVars_19);
      }
#line 420 "stack_opt.m"
      {
#line 420 "stack_opt.m"
        parse_tree__set_of_var__difference_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FlushedLaterFieldVars_19, ll_backend__stack_opt__NonCandidateVars_17, &ll_backend__stack_opt__CandidateArgVars0_20);
      }
#line 423 "stack_opt.m"
      {
#line 423 "stack_opt.m"
        (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__CandidateArgVars0_20);
      }
#line 426 "stack_opt.m"
      if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 425 "stack_opt.m"
        {
#line 425 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53;
#line 425 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51;
#line 425 "stack_opt.m"
        }
#line 426 "stack_opt.m"
      else
#line 501 "stack_opt.m"
        {
#line 501 "stack_opt.m"
          MR_Word ll_backend__stack_opt__FreeOfCost_28;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__IntParams_24;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__VarTypes_25;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt__Type_26;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt___Name_21;
#line 427 "stack_opt.m"
          MR_Integer ll_backend__stack_opt___Arity_22;
#line 427 "stack_opt.m"
          MR_Word ll_backend__stack_opt___TypeCtor_23;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_84_84;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_85_85;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_86_86;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_87_87;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_88_88;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_89_89;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_90_90;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_91_91;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_92_92;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_93_93;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_94_94;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_95_95;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_96_96;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_97_97;
#line 428 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_98_98;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_99_99;
#line 429 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_100_100;
#line 432 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_27_27;

#line 427 "stack_opt.m"
          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__stack_opt__ConsId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 427 "stack_opt.m"
          if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 427 "stack_opt.m"
            {
#line 427 "stack_opt.m"
              ll_backend__stack_opt___Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 1)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt___Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 2)));
#line 427 "stack_opt.m"
              ll_backend__stack_opt___TypeCtor_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stack_opt__ConsId_11, (MR_Integer) 3)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__IntParams_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 0)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 1)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 2)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 3)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 4)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 5)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 6)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 7)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 8)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 9)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 10)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 11)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 12)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 13)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 14)));
#line 428 "stack_opt.m"
              ll_backend__stack_opt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, (MR_Integer) 15)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 0)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__VarTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 1)));
#line 429 "stack_opt.m"
              ll_backend__stack_opt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 2)));
#line 430 "stack_opt.m"
              {
#line 430 "stack_opt.m"
                parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__stack_opt__VarTypes_25, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, &ll_backend__stack_opt__Type_26);
              }
#line 432 "stack_opt.m"
              {
#line 432 "stack_opt.m"
                (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(ll_backend__stack_opt__Type_26, &ll_backend__stack_opt__V_27_27);
              }
#line 435 "stack_opt.m"
              if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 434 "stack_opt.m"
                {
#line 434 "stack_opt.m"
                  ll_backend__stack_opt__FreeOfCost_28 = (MR_Integer) 0;
#line 434 "stack_opt.m"
                  (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
#line 434 "stack_opt.m"
                }
#line 435 "stack_opt.m"
              else
#line 449 "stack_opt.m"
                {
#line 449 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeCtorInfo_117_117;
#line 449 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeCtorInfo_118_118;
#line 449 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeCtor_29;
#line 449 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ModuleInfo_30;
#line 449 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeTable_31;
#line 449 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeDefn_32;
#line 449 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__TypeBody_33;
#line 449 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ConsTable_34;
#line 449 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__ConsTag_35;
#line 437 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_101_101;
#line 437 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_102_102;
#line 441 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_103_103;
#line 441 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_104_104;
#line 441 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_105_105;
#line 441 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_106_106;
#line 441 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_107_107;
#line 441 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_108_108;
#line 441 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_109_109;
#line 441 "stack_opt.m"
                  MR_Word ll_backend__stack_opt__V_110_110;
#line 443 "stack_opt.m"
                  MR_Box ll_backend__stack_opt__conv0_ConsTag_35;

#line 436 "stack_opt.m"
                  {
#line 436 "stack_opt.m"
                    (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__stack_opt__Type_26, &ll_backend__stack_opt__TypeCtor_29);
                  }
#line 449 "stack_opt.m"
                  if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 449 "stack_opt.m"
                    {
#line 437 "stack_opt.m"
                      ll_backend__stack_opt__ModuleInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 0)));
#line 437 "stack_opt.m"
                      ll_backend__stack_opt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 1)));
#line 437 "stack_opt.m"
                      ll_backend__stack_opt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_24, (MR_Integer) 2)));
#line 438 "stack_opt.m"
                      {
#line 438 "stack_opt.m"
                        hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__stack_opt__ModuleInfo_30, &ll_backend__stack_opt__TypeTable_31);
                      }
#line 439 "stack_opt.m"
                      {
#line 439 "stack_opt.m"
                        hlds__hlds_data__lookup_type_ctor_defn_3_p_0(ll_backend__stack_opt__TypeTable_31, ll_backend__stack_opt__TypeCtor_29, &ll_backend__stack_opt__TypeDefn_32);
                      }
#line 440 "stack_opt.m"
                      {
#line 440 "stack_opt.m"
                        hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__stack_opt__TypeDefn_32, &ll_backend__stack_opt__TypeBody_33);
                      }
#line 441 "stack_opt.m"
                      (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__stack_opt__TypeBody_33)) == (MR_mktag((MR_Integer) 1)));
#line 441 "stack_opt.m"
                      if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 441 "stack_opt.m"
                        {
#line 441 "stack_opt.m"
                          ll_backend__stack_opt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 0)));
#line 441 "stack_opt.m"
                          ll_backend__stack_opt__ConsTable_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 1)));
#line 441 "stack_opt.m"
                          ll_backend__stack_opt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 2)));
#line 441 "stack_opt.m"
                          ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 3)));
#line 441 "stack_opt.m"
                          ll_backend__stack_opt__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 4)));
#line 441 "stack_opt.m"
                          ll_backend__stack_opt__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 5)));
#line 441 "stack_opt.m"
                          ll_backend__stack_opt__V_108_108 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 441 "stack_opt.m"
                          ll_backend__stack_opt__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 441 "stack_opt.m"
                          ll_backend__stack_opt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_opt__TypeBody_33, (MR_Integer) 7)));
#line 12351 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 12353 "ll_backend.stack_opt.c"
                          ll_backend__stack_opt__TypeCtorInfo_118_118 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 443 "stack_opt.m"
                          {
#line 443 "stack_opt.m"
                            mercury__map__lookup_3_p_0(ll_backend__stack_opt__TypeCtorInfo_117_117, ll_backend__stack_opt__TypeCtorInfo_118_118, ll_backend__stack_opt__ConsTable_34, ((MR_Box) (ll_backend__stack_opt__ConsId_11)), &ll_backend__stack_opt__conv0_ConsTag_35);
                          }
#line 443 "stack_opt.m"
                          ll_backend__stack_opt__ConsTag_35 = ((MR_Word) ll_backend__stack_opt__conv0_ConsTag_35);
#line 444 "stack_opt.m"
                          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = (ll_backend__stack_opt__ConsTag_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 446 "stack_opt.m"
                          if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 445 "stack_opt.m"
                            ll_backend__stack_opt__FreeOfCost_28 = (MR_Integer) 1;
#line 446 "stack_opt.m"
                          else
#line 447 "stack_opt.m"
                            ll_backend__stack_opt__FreeOfCost_28 = (MR_Integer) 0;
#line 446 "stack_opt.m"
                          (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = MR_TRUE;
#line 441 "stack_opt.m"
                        }
#line 449 "stack_opt.m"
                    }
#line 449 "stack_opt.m"
                }
#line 427 "stack_opt.m"
            }
#line 501 "stack_opt.m"
          if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 453 "stack_opt.m"
            {
#line 453 "stack_opt.m"
              MR_Word ll_backend__stack_opt__RelevantVars_36;
#line 453 "stack_opt.m"
              MR_Word ll_backend__stack_opt__MatchInfo_37;
#line 453 "stack_opt.m"
              MR_Word ll_backend__stack_opt__RelevantAfterVars_39;
#line 453 "stack_opt.m"
              MR_Word ll_backend__stack_opt__AfterModelNon_40;
#line 453 "stack_opt.m"
              MR_Word ll_backend__stack_opt__InsertAnchors_41;
#line 453 "stack_opt.m"
              MR_Word ll_backend__stack_opt__InsertIntervals_42;

#line 453 "stack_opt.m"
              {
#line 453 "stack_opt.m"
                parse_tree__set_of_var__insert_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__FieldVars_18, &ll_backend__stack_opt__RelevantVars_36);
              }
#line 454 "stack_opt.m"
              {
#line 454 "stack_opt.m"
                ll_backend__stack_opt__find_all_branches_from_cur_interval_4_p_0(ll_backend__stack_opt__RelevantVars_36, &ll_backend__stack_opt__MatchInfo_37, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53);
              }
#line 456 "stack_opt.m"
              (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 0)));
#line 456 "stack_opt.m"
              ll_backend__stack_opt__RelevantAfterVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 1)));
#line 456 "stack_opt.m"
              ll_backend__stack_opt__AfterModelNon_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 2)));
#line 456 "stack_opt.m"
              ll_backend__stack_opt__InsertAnchors_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 3)));
#line 456 "stack_opt.m"
              ll_backend__stack_opt__InsertIntervals_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchInfo_37, (MR_Integer) 4)));
#line 465 "stack_opt.m"
#line 465 "stack_opt.m"
              switch (ll_backend__stack_opt__FreeOfCost_28) {
#line 465 "stack_opt.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 465 "stack_opt.m"
                case (MR_Integer) 0:
#line 497 "stack_opt.m"
#line 497 "stack_opt.m"
                  switch (ll_backend__stack_opt__AfterModelNon_40) {
#line 497 "stack_opt.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 497 "stack_opt.m"
                    case (MR_Integer) 0:
#line 468 "stack_opt.m"
                      {
#line 468 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__OnStack_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 468 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__CandidateArgVars_45;
#line 468 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__CellVarFlushedLater_46;
#line 468 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__ViaCellVars_59;
#line 469 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 0)));
#line 469 "stack_opt.m"
                        MR_Integer ll_backend__stack_opt__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 1)));
#line 469 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_113_113 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 469 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 469 "stack_opt.m"
                        MR_Word ll_backend__stack_opt__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_16, (MR_Integer) 3)));

#line 470 "stack_opt.m"
                        {
#line 470 "stack_opt.m"
                          parse_tree__set_of_var__difference_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__CandidateArgVars0_20, ll_backend__stack_opt__RelevantAfterVars_39, &ll_backend__stack_opt__CandidateArgVars_45);
                        }
#line 479 "stack_opt.m"
#line 479 "stack_opt.m"
                        switch (ll_backend__stack_opt__OnStack_44) {
#line 479 "stack_opt.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 479 "stack_opt.m"
                          case (MR_Integer) 0:
#line 488 "stack_opt.m"
                            {
#line 482 "stack_opt.m"
                              {
#line 482 "stack_opt.m"
                                ll_backend__stack_opt__use_cell_8_p_0_6(&ll_backend__stack_opt__env);
                              }
#line 488 "stack_opt.m"
                              if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 487 "stack_opt.m"
                                ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 1;
#line 488 "stack_opt.m"
                              else
#line 489 "stack_opt.m"
                                ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 0;
#line 488 "stack_opt.m"
                            }
#line 479 "stack_opt.m"
                            break;
#line 479 "stack_opt.m"
                          case (MR_Integer) 1:
#line 476 "stack_opt.m"
                            {
#line 474 "stack_opt.m"
                              {
#line 474 "stack_opt.m"
                                (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__FlushedLater_15, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9);
                              }
#line 476 "stack_opt.m"
                              if ((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__succeeded)
#line 475 "stack_opt.m"
                                ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 1;
#line 476 "stack_opt.m"
                              else
#line 477 "stack_opt.m"
                                ll_backend__stack_opt__CellVarFlushedLater_46 = (MR_Integer) 0;
#line 476 "stack_opt.m"
                            }
#line 479 "stack_opt.m"
                            break;
#line 479 "stack_opt.m"
                        }
#line 492 "stack_opt.m"
                        {
#line 492 "stack_opt.m"
                          ll_backend__stack_opt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__CellVarFlushedLater_46, ll_backend__stack_opt__StackOptParams_16, (ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__PathsInfo_38, ll_backend__stack_opt__CandidateArgVars_45, &ll_backend__stack_opt__ViaCellVars_59);
                        }
#line 494 "stack_opt.m"
                        {
#line 494 "stack_opt.m"
                          ll_backend__stack_opt__record_matching_result_11_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__ConsId_11, ll_backend__stack_opt__FieldVarList_10, ll_backend__stack_opt__ViaCellVars_59, ll_backend__stack_opt__Goal_12, ll_backend__stack_opt__InsertAnchors_41, ll_backend__stack_opt__InsertIntervals_42, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54);
#line 494 "stack_opt.m"
                          return;
                        }
#line 468 "stack_opt.m"
                      }
#line 497 "stack_opt.m"
                      break;
#line 497 "stack_opt.m"
                    case (MR_Integer) 1:
#line 498 "stack_opt.m"
                      {
#line 498 "stack_opt.m"
                        *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51;
#line 498 "stack_opt.m"
                        *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53;
#line 498 "stack_opt.m"
                      }
#line 497 "stack_opt.m"
                      break;
#line 497 "stack_opt.m"
                  }
#line 465 "stack_opt.m"
                  break;
#line 465 "stack_opt.m"
                case (MR_Integer) 1:
#line 459 "stack_opt.m"
                  {
#line 459 "stack_opt.m"
                    MR_Word ll_backend__stack_opt__ViaCellVars_43;

#line 460 "stack_opt.m"
                    {
#line 460 "stack_opt.m"
                      parse_tree__set_of_var__difference_3_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__TypeCtorInfo_116_116, ll_backend__stack_opt__CandidateArgVars0_20, ll_backend__stack_opt__RelevantAfterVars_39, &ll_backend__stack_opt__ViaCellVars_43);
                    }
#line 462 "stack_opt.m"
                    {
#line 462 "stack_opt.m"
                      ll_backend__stack_opt__record_matching_result_11_p_0((ll_backend__stack_opt__env).ll_backend__stack_opt__use_cell_8_p_0_env_0__CellVar_9, ll_backend__stack_opt__ConsId_11, ll_backend__stack_opt__FieldVarList_10, ll_backend__stack_opt__ViaCellVars_43, ll_backend__stack_opt__Goal_12, ll_backend__stack_opt__InsertAnchors_41, ll_backend__stack_opt__InsertIntervals_42, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51, ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53, ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54);
#line 462 "stack_opt.m"
                      return;
                    }
#line 459 "stack_opt.m"
                  }
#line 465 "stack_opt.m"
                  break;
#line 465 "stack_opt.m"
              }
#line 453 "stack_opt.m"
            }
#line 501 "stack_opt.m"
          else
#line 502 "stack_opt.m"
            {
#line 502 "stack_opt.m"
              *ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_54 = ll_backend__stack_opt__STATE_VARIABLE_StackOptInfo_0_53;
#line 502 "stack_opt.m"
              *ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_52 = ll_backend__stack_opt__STATE_VARIABLE_IntervalInfo_0_51;
#line 502 "stack_opt.m"
            }
#line 501 "stack_opt.m"
        }
#line 414 "stack_opt.m"
    }
#line 410 "stack_opt.m"
  }
#line 410 "stack_opt.m"
}

#line 240 "stack_opt.m"
static void MR_CALL 
ll_backend__stack_opt__optimize_live_sets_7_p_0(
#line 240 "stack_opt.m"
  MR_Word ll_backend__stack_opt__ModuleInfo_8,
#line 240 "stack_opt.m"
  MR_Word ll_backend__stack_opt__OptAlloc_9,
#line 240 "stack_opt.m"
  MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60,
#line 240 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61,
#line 240 "stack_opt.m"
  MR_Word * ll_backend__stack_opt__Changed_11,
#line 240 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__DebugStackOpt_12,
#line 240 "stack_opt.m"
  MR_Integer ll_backend__stack_opt__PredIdInt_13)
#line 240 "stack_opt.m"
{
#line 244 "stack_opt.m"
  {
#line 244 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_106_106;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_108_108;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_109_109;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_110_110;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_113_113;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_114_114;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal0_14;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarTypes0_15;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarSet0_16;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__ParConjOwnSlot_17;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InputArgs_18;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OutputArgs_19;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__UnusedArgs_20;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__HeadVars_21;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Globals_22;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CandHeadvars_23;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__NonCandidateVars_24;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Counter0_25;
#line 244 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CurInterval_26;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Counter1_27;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__CurIntervalId_28;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__EndMap0_29;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertMap0_30;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StartMap0_31;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__SuccMap0_32;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__VarsMap0_33;
#line 244 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CellVarStoreCost_34;
#line 244 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__CellVarLoadCost_35;
#line 244 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__FieldVarStoreCost_36;
#line 244 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__FieldVarLoadCost_37;
#line 244 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__OpRatio_38;
#line 244 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__NodeRatio_39;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InclAllCand_40;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__MatchingParams_41;
#line 244 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__AllPathNodeRatio_42;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FixpointLoop_43;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FullPath_44;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OnStack_45;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptNoReturnCalls_46;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntParams_47;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalInfo0_48;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptParams_49;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptInfo0_50;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__IntervalInfo_51;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__StackOptInfo_52;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__InsertMap_54;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_62_62;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_63_63;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_64_64;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_71_71;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_84_84;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_85_85;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_86_86;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_87_87;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_88_88;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_89_89;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_90_90;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_91_91;
#line 244 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_92_92;
#line 308 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv0_StackOptInfo_52;
#line 318 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_104_104;
#line 318 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_105_105;

#line 245 "stack_opt.m"
    {
#line 245 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__Goal0_14);
    }
#line 246 "stack_opt.m"
    {
#line 246 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__VarTypes0_15);
    }
#line 247 "stack_opt.m"
    {
#line 247 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__VarSet0_16);
    }
#line 248 "stack_opt.m"
    ll_backend__stack_opt__ParConjOwnSlot_17 = (MR_Word) ll_backend__stack_opt__OptAlloc_9;
#line 249 "stack_opt.m"
    {
#line 249 "stack_opt.m"
      hlds__arg_info__partition_proc_args_5_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, ll_backend__stack_opt__ModuleInfo_8, &ll_backend__stack_opt__InputArgs_18, &ll_backend__stack_opt__OutputArgs_19, &ll_backend__stack_opt__UnusedArgs_20);
    }
#line 12756 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_106_106 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 251 "stack_opt.m"
    {
#line 251 "stack_opt.m"
      ll_backend__stack_opt__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_64_64, 0) = ((MR_Box) (ll_backend__stack_opt__UnusedArgs_20));
#line 251 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "stack_opt.m"
    }
#line 251 "stack_opt.m"
    {
#line 251 "stack_opt.m"
      ll_backend__stack_opt__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_63_63, 0) = ((MR_Box) (ll_backend__stack_opt__OutputArgs_19));
#line 251 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_63_63, 1) = ((MR_Box) (ll_backend__stack_opt__V_64_64));
#line 251 "stack_opt.m"
    }
#line 251 "stack_opt.m"
    {
#line 251 "stack_opt.m"
      ll_backend__stack_opt__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_62_62, 0) = ((MR_Box) (ll_backend__stack_opt__InputArgs_18));
#line 251 "stack_opt.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_opt__V_62_62, 1) = ((MR_Box) (ll_backend__stack_opt__V_63_63));
#line 251 "stack_opt.m"
    }
#line 251 "stack_opt.m"
    {
#line 251 "stack_opt.m"
      ll_backend__stack_opt__HeadVars_21 = mercury__set__union_list_1_f_0(ll_backend__stack_opt__TypeInfo_106_106, ll_backend__stack_opt__V_62_62);
    }
#line 252 "stack_opt.m"
    {
#line 252 "stack_opt.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_opt__ModuleInfo_8, &ll_backend__stack_opt__Globals_22);
    }
#line 253 "stack_opt.m"
    {
#line 253 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 377, &ll_backend__stack_opt__CandHeadvars_23);
    }
#line 259 "stack_opt.m"
#line 259 "stack_opt.m"
    switch (ll_backend__stack_opt__CandHeadvars_23) {
#line 259 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 259 "stack_opt.m"
      case (MR_Integer) 0:
#line 256 "stack_opt.m"
        {
#line 256 "stack_opt.m"
          MR_Word ll_backend__stack_opt__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 256 "stack_opt.m"
          MR_Word ll_backend__stack_opt__V_67_67;

#line 257 "stack_opt.m"
          {
#line 257 "stack_opt.m"
            ll_backend__stack_opt__V_67_67 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_107_107, ll_backend__stack_opt__HeadVars_21);
          }
#line 257 "stack_opt.m"
          {
#line 257 "stack_opt.m"
            parse_tree__set_of_var__union_3_p_0(ll_backend__stack_opt__TypeCtorInfo_107_107, ll_backend__stack_opt__V_67_67, ll_backend__stack_opt__ParConjOwnSlot_17, &ll_backend__stack_opt__NonCandidateVars_24);
          }
#line 256 "stack_opt.m"
        }
#line 259 "stack_opt.m"
        break;
#line 259 "stack_opt.m"
      case (MR_Integer) 1:
#line 261 "stack_opt.m"
        ll_backend__stack_opt__NonCandidateVars_24 = ll_backend__stack_opt__ParConjOwnSlot_17;
#line 259 "stack_opt.m"
        break;
#line 259 "stack_opt.m"
    }
#line 263 "stack_opt.m"
    {
#line 263 "stack_opt.m"
      ll_backend__stack_opt__Counter0_25 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 264 "stack_opt.m"
    {
#line 264 "stack_opt.m"
      mercury__counter__allocate_3_p_0(&ll_backend__stack_opt__CurInterval_26, ll_backend__stack_opt__Counter0_25, &ll_backend__stack_opt__Counter1_27);
    }
#line 265 "stack_opt.m"
    ll_backend__stack_opt__CurIntervalId_28 = (MR_Word) ll_backend__stack_opt__CurInterval_26;
#line 12851 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 12853 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 266 "stack_opt.m"
    {
#line 266 "stack_opt.m"
      ll_backend__stack_opt__EndMap0_29 = mercury__map__singleton_2_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__TypeCtorInfo_109_109, ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
    }
#line 12860 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_110_110 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[2];
#line 267 "stack_opt.m"
    {
#line 267 "stack_opt.m"
      mercury__map__init_1_p_0(ll_backend__stack_opt__TypeCtorInfo_109_109, ll_backend__stack_opt__TypeInfo_110_110, &ll_backend__stack_opt__InsertMap0_30);
    }
#line 268 "stack_opt.m"
    {
#line 268 "stack_opt.m"
      mercury__map__init_1_p_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ll_backend__stack_opt__TypeCtorInfo_109_109, &ll_backend__stack_opt__StartMap0_31);
    }
#line 269 "stack_opt.m"
    {
#line 269 "stack_opt.m"
      ll_backend__stack_opt__SuccMap0_32 = mercury__map__singleton_2_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, (MR_Word) &ll_backend__stack_opt_scalar_common_1[3], ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 12877 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 270 "stack_opt.m"
    {
#line 270 "stack_opt.m"
      ll_backend__stack_opt__V_71_71 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113, ll_backend__stack_opt__OutputArgs_19);
    }
#line 270 "stack_opt.m"
    {
#line 270 "stack_opt.m"
      ll_backend__stack_opt__VarsMap0_33 = mercury__map__singleton_2_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, (MR_Word) &ll_backend__stack_opt_scalar_common_1[4], ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)), ((MR_Box) (ll_backend__stack_opt__V_71_71)));
    }
#line 271 "stack_opt.m"
    {
#line 271 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 378, &ll_backend__stack_opt__CellVarStoreCost_34);
    }
#line 273 "stack_opt.m"
    {
#line 273 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 379, &ll_backend__stack_opt__CellVarLoadCost_35);
    }
#line 275 "stack_opt.m"
    {
#line 275 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 380, &ll_backend__stack_opt__FieldVarStoreCost_36);
    }
#line 277 "stack_opt.m"
    {
#line 277 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 381, &ll_backend__stack_opt__FieldVarLoadCost_37);
    }
#line 279 "stack_opt.m"
    {
#line 279 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 382, &ll_backend__stack_opt__OpRatio_38);
    }
#line 281 "stack_opt.m"
    {
#line 281 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 383, &ll_backend__stack_opt__NodeRatio_39);
    }
#line 283 "stack_opt.m"
    {
#line 283 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 385, &ll_backend__stack_opt__InclAllCand_40);
    }
#line 285 "stack_opt.m"
    {
#line 285 "stack_opt.m"
      ll_backend__stack_opt__MatchingParams_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 285 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 0) = ((MR_Box) (ll_backend__stack_opt__CellVarStoreCost_34));
#line 285 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 1) = ((MR_Box) (ll_backend__stack_opt__CellVarLoadCost_35));
#line 285 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 2) = ((MR_Box) (ll_backend__stack_opt__FieldVarStoreCost_36));
#line 285 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 3) = ((MR_Box) (ll_backend__stack_opt__FieldVarLoadCost_37));
#line 285 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 4) = ((MR_Box) (ll_backend__stack_opt__OpRatio_38));
#line 285 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 5) = ((MR_Box) (ll_backend__stack_opt__NodeRatio_39));
#line 285 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__MatchingParams_41, 6) = ((MR_Box) (ll_backend__stack_opt__InclAllCand_40));
#line 285 "stack_opt.m"
    }
#line 287 "stack_opt.m"
    {
#line 287 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 384, &ll_backend__stack_opt__AllPathNodeRatio_42);
    }
#line 290 "stack_opt.m"
    {
#line 290 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 374, &ll_backend__stack_opt__FixpointLoop_43);
    }
#line 292 "stack_opt.m"
    {
#line 292 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 375, &ll_backend__stack_opt__FullPath_44);
    }
#line 294 "stack_opt.m"
    {
#line 294 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 376, &ll_backend__stack_opt__OnStack_45);
    }
#line 296 "stack_opt.m"
    {
#line 296 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_22, (MR_Integer) 325, &ll_backend__stack_opt__OptNoReturnCalls_46);
    }
#line 298 "stack_opt.m"
    {
#line 298 "stack_opt.m"
      ll_backend__stack_opt__IntParams_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_47, 0) = ((MR_Box) (ll_backend__stack_opt__ModuleInfo_8));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_47, 1) = ((MR_Box) (ll_backend__stack_opt__VarTypes0_15));
#line 298 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntParams_47, 2) = ((MR_Box) (ll_backend__stack_opt__OptNoReturnCalls_46));
#line 298 "stack_opt.m"
    }
#line 300 "stack_opt.m"
    {
#line 300 "stack_opt.m"
      ll_backend__stack_opt__V_84_84 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113);
    }
#line 300 "stack_opt.m"
    {
#line 300 "stack_opt.m"
      ll_backend__stack_opt__V_85_85 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113, ll_backend__stack_opt__OutputArgs_19);
    }
#line 12991 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_114_114 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 301 "stack_opt.m"
    {
#line 301 "stack_opt.m"
      ll_backend__stack_opt__V_86_86 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_114_114, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0);
    }
#line 301 "stack_opt.m"
    {
#line 301 "stack_opt.m"
      ll_backend__stack_opt__V_87_87 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_114_114, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0);
    }
#line 301 "stack_opt.m"
    {
#line 301 "stack_opt.m"
      ll_backend__stack_opt__V_88_88 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_114_114, ll_backend__stack_opt__TypeCtorInfo_108_108);
    }
#line 302 "stack_opt.m"
    {
#line 302 "stack_opt.m"
      ll_backend__stack_opt__V_89_89 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28)));
    }
#line 303 "stack_opt.m"
    {
#line 303 "stack_opt.m"
      ll_backend__stack_opt__V_90_90 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_109_109, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0);
    }
#line 303 "stack_opt.m"
    {
#line 303 "stack_opt.m"
      ll_backend__stack_opt__V_91_91 = mercury__set__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_109_109);
    }
#line 304 "stack_opt.m"
    {
#line 304 "stack_opt.m"
      ll_backend__stack_opt__V_92_92 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeCtorInfo_108_108, (MR_Word) &ll_backend__stack_opt_scalar_common_1[5]);
    }
#line 299 "stack_opt.m"
    {
#line 299 "stack_opt.m"
      ll_backend__stack_opt__IntervalInfo0_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 0) = ((MR_Box) (ll_backend__stack_opt__IntParams_47));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 1) = ((MR_Box) (ll_backend__stack_opt__V_84_84));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 2) = ((MR_Box) (ll_backend__stack_opt__V_85_85));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 3) = ((MR_Box) (ll_backend__stack_opt__V_86_86));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 4) = ((MR_Box) (ll_backend__stack_opt__V_87_87));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 5) = ((MR_Box) (ll_backend__stack_opt__V_88_88));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 6) = ((MR_Box) (ll_backend__stack_opt__CurIntervalId_28));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 7) = ((MR_Box) (ll_backend__stack_opt__Counter1_27));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 8) = ((MR_Box) (ll_backend__stack_opt__V_89_89));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 9) = ((MR_Box) (ll_backend__stack_opt__V_90_90));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 10) = ((MR_Box) (ll_backend__stack_opt__V_91_91));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 11) = ((MR_Box) (ll_backend__stack_opt__StartMap0_31));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 12) = ((MR_Box) (ll_backend__stack_opt__EndMap0_29));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 13) = ((MR_Box) (ll_backend__stack_opt__SuccMap0_32));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 14) = ((MR_Box) (ll_backend__stack_opt__VarsMap0_33));
#line 299 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__IntervalInfo0_48, 15) = ((MR_Box) (ll_backend__stack_opt__V_92_92));
#line 299 "stack_opt.m"
    }
#line 305 "stack_opt.m"
    {
#line 305 "stack_opt.m"
      ll_backend__stack_opt__StackOptParams_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 305 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 0) = ((MR_Box) (ll_backend__stack_opt__MatchingParams_41));
#line 305 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 1) = ((MR_Box) (ll_backend__stack_opt__AllPathNodeRatio_42));
#line 305 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 2) = ((MR_Box) ((ll_backend__stack_opt__FixpointLoop_43 | ((((ll_backend__stack_opt__FullPath_44 << (MR_Integer) 1)) | ((ll_backend__stack_opt__OnStack_45 << (MR_Integer) 2)))))));
#line 305 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptParams_49, 3) = ((MR_Box) (ll_backend__stack_opt__NonCandidateVars_24));
#line 305 "stack_opt.m"
    }
#line 307 "stack_opt.m"
    {
#line 307 "stack_opt.m"
      ll_backend__stack_opt__StackOptInfo0_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 307 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo0_50, 0) = ((MR_Box) (ll_backend__stack_opt__StackOptParams_49));
#line 307 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo0_50, 1) = ((MR_Box) (ll_backend__stack_opt__InsertMap0_30));
#line 307 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo0_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "stack_opt.m"
    }
#line 308 "stack_opt.m"
    {
#line 308 "stack_opt.m"
      backend_libs__interval__build_interval_info_in_goal_5_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[6], ll_backend__stack_opt__Goal0_14, ll_backend__stack_opt__IntervalInfo0_48, &ll_backend__stack_opt__IntervalInfo_51, ((MR_Box) (ll_backend__stack_opt__StackOptInfo0_50)), &ll_backend__stack_opt__conv0_StackOptInfo_52);
    }
#line 308 "stack_opt.m"
    ll_backend__stack_opt__StackOptInfo_52 = ((MR_Word) ll_backend__stack_opt__conv0_StackOptInfo_52);
#line 310 "stack_opt.m"
    ll_backend__stack_opt__succeeded = (ll_backend__stack_opt__DebugStackOpt_12 == ll_backend__stack_opt__PredIdInt_13);
#line 315 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 311 "stack_opt.m"
      {
#line 312 "stack_opt.m"
        {
#line 312 "stack_opt.m"
          backend_libs__interval__dump_interval_info_3_p_0(ll_backend__stack_opt__IntervalInfo_51);
        }
#line 313 "stack_opt.m"
        {
#line 313 "stack_opt.m"
          ll_backend__stack_opt__dump_stack_opt_info_3_p_0(ll_backend__stack_opt__StackOptInfo_52);
        }
#line 311 "stack_opt.m"
      }
#line 315 "stack_opt.m"
    else
#line 316 "stack_opt.m"
      {
#line 316 "stack_opt.m"
      }
#line 318 "stack_opt.m"
    ll_backend__stack_opt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_52, (MR_Integer) 0)));
#line 318 "stack_opt.m"
    ll_backend__stack_opt__InsertMap_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_52, (MR_Integer) 1)));
#line 318 "stack_opt.m"
    ll_backend__stack_opt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__StackOptInfo_52, (MR_Integer) 2)));
#line 319 "stack_opt.m"
    {
#line 319 "stack_opt.m"
      ll_backend__stack_opt__succeeded = mercury__map__is_empty_1_p_0(ll_backend__stack_opt__TypeCtorInfo_109_109, ll_backend__stack_opt__TypeInfo_110_110, ll_backend__stack_opt__InsertMap_54);
    }
#line 321 "stack_opt.m"
    if (ll_backend__stack_opt__succeeded)
#line 320 "stack_opt.m"
      {
#line 320 "stack_opt.m"
        *ll_backend__stack_opt__Changed_11 = (MR_Integer) 0;
#line 320 "stack_opt.m"
        *ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61 = ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60;
#line 320 "stack_opt.m"
      }
#line 321 "stack_opt.m"
    else
#line 324 "stack_opt.m"
      {
#line 324 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Goal1_55;
#line 324 "stack_opt.m"
        MR_Word ll_backend__stack_opt__VarSet_56;
#line 324 "stack_opt.m"
        MR_Word ll_backend__stack_opt__VarTypes_57;
#line 324 "stack_opt.m"
        MR_Word ll_backend__stack_opt__RenameMap_58;
#line 324 "stack_opt.m"
        MR_Word ll_backend__stack_opt__Goal_59;
#line 324 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_97_97;
#line 324 "stack_opt.m"
        MR_Word ll_backend__stack_opt__V_100_100;
#line 324 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_101_101;
#line 324 "stack_opt.m"
        MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_102_102;

#line 323 "stack_opt.m"
        {
#line 323 "stack_opt.m"
          ll_backend__stack_opt__V_97_97 = mercury__map__init_0_f_0(ll_backend__stack_opt__TypeInfo_106_106, ll_backend__stack_opt__TypeInfo_106_106);
        }
#line 322 "stack_opt.m"
        {
#line 322 "stack_opt.m"
          backend_libs__interval__record_decisions_in_goal_10_p_0(ll_backend__stack_opt__Goal0_14, &ll_backend__stack_opt__Goal1_55, ll_backend__stack_opt__VarSet0_16, &ll_backend__stack_opt__VarSet_56, ll_backend__stack_opt__VarTypes0_15, &ll_backend__stack_opt__VarTypes_57, ll_backend__stack_opt__V_97_97, &ll_backend__stack_opt__RenameMap_58, ll_backend__stack_opt__InsertMap_54, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__stack_opt_scalar_common_3[0]));
        }
#line 325 "stack_opt.m"
        {
#line 325 "stack_opt.m"
          ll_backend__stack_opt__V_100_100 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_113_113, ll_backend__stack_opt__HeadVars_21);
        }
#line 325 "stack_opt.m"
        {
#line 325 "stack_opt.m"
          backend_libs__interval__apply_headvar_correction_4_p_0(ll_backend__stack_opt__V_100_100, ll_backend__stack_opt__RenameMap_58, ll_backend__stack_opt__Goal1_55, &ll_backend__stack_opt__Goal_59);
        }
#line 327 "stack_opt.m"
        {
#line 327 "stack_opt.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_opt__Goal_59, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_60, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_101_101);
        }
#line 328 "stack_opt.m"
        {
#line 328 "stack_opt.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(ll_backend__stack_opt__VarSet_56, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_101_101, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_102_102);
        }
#line 329 "stack_opt.m"
        {
#line 329 "stack_opt.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ll_backend__stack_opt__VarTypes_57, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_102_102, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_61);
        }
#line 330 "stack_opt.m"
        *ll_backend__stack_opt__Changed_11 = (MR_Integer) 1;
#line 324 "stack_opt.m"
      }
#line 244 "stack_opt.m"
  }
#line 240 "stack_opt.m"
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
#line 176 "stack_opt.m"
  {
#line 176 "stack_opt.m"
    MR_bool ll_backend__stack_opt__succeeded;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfo_69_69;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeCtorInfo_70_70;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PredProcId_6, (MR_Integer) 0)));
#line 176 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_opt__PredProcId_6, (MR_Integer) 1)));
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__SimplifyTasks_11;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Liveness0_12;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Globals_13;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__PredInfo_14;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__TypeInfoLiveness_15;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptNoReturnCalls_16;
#line 176 "stack_opt.m"
    MR_ArrayPtr ll_backend__stack_opt__DummyDummyTypeArray_17;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__AllocData_18;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal2_20;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptStackAlloc0_21;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__FailVars_22;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__NondetLiveness0_23;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Goal_24;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__OptStackAlloc_25;
#line 176 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__DebugStackOpt_28;
#line 176 "stack_opt.m"
    MR_Integer ll_backend__stack_opt__PredIdInt_29;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__Changed_31;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_38_38;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_44_44;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_45_45;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_46_46;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53;
#line 176 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_72_72;
#line 190 "stack_opt.m"
    MR_ArrayPtr ll_backend__stack_opt__conv0_DummyDummyTypeArray_17;
#line 193 "stack_opt.m"
    MR_Word ll_backend__stack_opt__V_19_19;
#line 198 "stack_opt.m"
    MR_Word ll_backend__stack_opt___Liveness_26;
#line 198 "stack_opt.m"
    MR_Word ll_backend__stack_opt___NondetLiveness_27;
#line 198 "stack_opt.m"
    MR_Box ll_backend__stack_opt__conv1_OptStackAlloc_25;

#line 181 "stack_opt.m"
    {
#line 181 "stack_opt.m"
      ll_backend__stack_opt__SimplifyTasks_11 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 182 "stack_opt.m"
    {
#line 182 "stack_opt.m"
      check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(ll_backend__stack_opt__SimplifyTasks_11, ll_backend__stack_opt__PredId_9, ll_backend__stack_opt__ProcId_10, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_0_34, &ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_0_32, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_38_38);
    }
#line 183 "stack_opt.m"
    {
#line 183 "stack_opt.m"
      ll_backend__liveness__detect_liveness_proc_4_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredProcId_6, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_38_38, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39);
    }
#line 184 "stack_opt.m"
    {
#line 184 "stack_opt.m"
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39, ll_backend__stack_opt__PredId_9, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, &ll_backend__stack_opt__Liveness0_12);
    }
#line 185 "stack_opt.m"
    {
#line 185 "stack_opt.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, &ll_backend__stack_opt__Globals_13);
    }
#line 186 "stack_opt.m"
    {
#line 186 "stack_opt.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredId_9, &ll_backend__stack_opt__PredInfo_14);
    }
#line 187 "stack_opt.m"
    {
#line 187 "stack_opt.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__stack_opt__PredInfo_14, ll_backend__stack_opt__Globals_13, &ll_backend__stack_opt__TypeInfoLiveness_15);
    }
#line 188 "stack_opt.m"
    {
#line 188 "stack_opt.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_opt__Globals_13, (MR_Integer) 325, &ll_backend__stack_opt__OptNoReturnCalls_16);
    }
#line 190 "stack_opt.m"
    {
#line 190 "stack_opt.m"
      mercury__array__init_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, (MR_Integer) 1, ((MR_Box) ((MR_Integer) 1)), &ll_backend__stack_opt__conv0_DummyDummyTypeArray_17);
    }
#line 190 "stack_opt.m"
    ll_backend__stack_opt__DummyDummyTypeArray_17 = (MR_ArrayPtr) ll_backend__stack_opt__conv0_DummyDummyTypeArray_17;
#line 191 "stack_opt.m"
    {
#line 191 "stack_opt.m"
      ll_backend__stack_opt__AllocData_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 191 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 0) = ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37));
#line 191 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 1) = ((MR_Box) (ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39));
#line 191 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 2) = ((MR_Box) (ll_backend__stack_opt__PredProcId_6));
#line 191 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 3) = ((MR_Box) (ll_backend__stack_opt__TypeInfoLiveness_15));
#line 191 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 4) = ((MR_Box) (ll_backend__stack_opt__OptNoReturnCalls_16));
#line 191 "stack_opt.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_opt__AllocData_18, 5) = ((MR_Box) (ll_backend__stack_opt__DummyDummyTypeArray_17));
#line 191 "stack_opt.m"
    }
#line 193 "stack_opt.m"
    {
#line 193 "stack_opt.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, &ll_backend__stack_opt__V_19_19, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_39_39, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43);
    }
#line 194 "stack_opt.m"
    {
#line 194 "stack_opt.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43, &ll_backend__stack_opt__Goal2_20);
    }
#line 238 "stack_opt.m"
    {
#line 238 "stack_opt.m"
      ll_backend__stack_opt__V_72_72 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 238 "stack_opt.m"
    ll_backend__stack_opt__OptStackAlloc0_21 = (MR_Word) ll_backend__stack_opt__V_72_72;
#line 13385 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeInfo_69_69 = (MR_Word) &ll_backend__stack_opt_scalar_common_1[0];
#line 196 "stack_opt.m"
    {
#line 196 "stack_opt.m"
      mercury__set__init_1_p_0(ll_backend__stack_opt__TypeInfo_69_69, &ll_backend__stack_opt__FailVars_22);
    }
#line 197 "stack_opt.m"
    {
#line 197 "stack_opt.m"
      mercury__set__init_1_p_0(ll_backend__stack_opt__TypeInfo_69_69, &ll_backend__stack_opt__NondetLiveness0_23);
    }
#line 13397 "ll_backend.stack_opt.c"
    ll_backend__stack_opt__TypeCtorInfo_70_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 198 "stack_opt.m"
    {
#line 198 "stack_opt.m"
      ll_backend__stack_opt__V_44_44 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_70_70, ll_backend__stack_opt__FailVars_22);
    }
#line 200 "stack_opt.m"
    {
#line 200 "stack_opt.m"
      ll_backend__stack_opt__V_45_45 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__stack_opt__TypeCtorInfo_70_70, ll_backend__stack_opt__NondetLiveness0_23);
    }
#line 198 "stack_opt.m"
    {
#line 198 "stack_opt.m"
      ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) &ll_backend__stack_opt_scalar_common_1[1], ll_backend__stack_opt__Goal2_20, &ll_backend__stack_opt__Goal_24, ll_backend__stack_opt__V_44_44, ll_backend__stack_opt__AllocData_18, ((MR_Box) (ll_backend__stack_opt__OptStackAlloc0_21)), &ll_backend__stack_opt__conv1_OptStackAlloc_25, ll_backend__stack_opt__Liveness0_12, &ll_backend__stack_opt___Liveness_26, ll_backend__stack_opt__V_45_45, &ll_backend__stack_opt___NondetLiveness_27);
    }
#line 198 "stack_opt.m"
    ll_backend__stack_opt__OptStackAlloc_25 = ((MR_Word) ll_backend__stack_opt__conv1_OptStackAlloc_25);
#line 201 "stack_opt.m"
    {
#line 201 "stack_opt.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_opt__Goal_24, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_43_43, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_46_46);
    }
#line 202 "stack_opt.m"
    {
#line 202 "stack_opt.m"
      ll_backend__store_alloc__allocate_store_maps_5_p_0((MR_Integer) 1, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__PredProcId_6, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_46_46, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48);
    }
#line 203 "stack_opt.m"
    {
#line 203 "stack_opt.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_opt__Globals_13, (MR_Integer) 75, &ll_backend__stack_opt__DebugStackOpt_28);
    }
#line 204 "stack_opt.m"
    {
#line 204 "stack_opt.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(ll_backend__stack_opt__PredId_9, &ll_backend__stack_opt__PredIdInt_29);
    }
#line 206 "stack_opt.m"
    {
#line 206 "stack_opt.m"
      ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\nbefore stack opt cell", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37);
    }
#line 210 "stack_opt.m"
    {
#line 210 "stack_opt.m"
      ll_backend__stack_opt__optimize_live_sets_7_p_0(ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__OptStackAlloc_25, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_48_48, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53, &ll_backend__stack_opt__Changed_31, ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29);
    }
#line 232 "stack_opt.m"
#line 232 "stack_opt.m"
    switch (ll_backend__stack_opt__Changed_31) {
#line 232 "stack_opt.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 232 "stack_opt.m"
      case (MR_Integer) 0:
#line 233 "stack_opt.m"
        {
#line 233 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33 = ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53;
#line 233 "stack_opt.m"
          *ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35 = ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37;
#line 233 "stack_opt.m"
        }
#line 232 "stack_opt.m"
        break;
#line 232 "stack_opt.m"
      case (MR_Integer) 1:
#line 213 "stack_opt.m"
        {
#line 213 "stack_opt.m"
          MR_Word ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58;

#line 215 "stack_opt.m"
          {
#line 215 "stack_opt.m"
            ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\nafter stack opt transformation", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37);
          }
#line 219 "stack_opt.m"
          {
#line 219 "stack_opt.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_53_53, &ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58);
          }
#line 221 "stack_opt.m"
          {
#line 221 "stack_opt.m"
            ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\nafter stack opt requantify", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37);
          }
#line 225 "stack_opt.m"
          {
#line 225 "stack_opt.m"
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_58_58, ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_37_37, ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35);
          }
#line 228 "stack_opt.m"
          {
#line 228 "stack_opt.m"
            ll_backend__stack_opt__maybe_write_progress_message_7_p_0((MR_String) "\n                \nafter stack opt recompute instmaps", ll_backend__stack_opt__DebugStackOpt_28, ll_backend__stack_opt__PredIdInt_29, *ll_backend__stack_opt__STATE_VARIABLE_ProcInfo_33, *ll_backend__stack_opt__STATE_VARIABLE_ModuleInfo_35);
#line 228 "stack_opt.m"
            return;
          }
#line 213 "stack_opt.m"
        }
#line 232 "stack_opt.m"
        break;
#line 232 "stack_opt.m"
    }
#line 176 "stack_opt.m"
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
