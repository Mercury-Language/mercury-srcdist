/*
** Automatically generated from `unneeded_code.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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


/* :- module transform_hlds.unneeded_code. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__unneeded_code__init
ENDINIT
*/

#include "transform_hlds.unneeded_code.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
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
#include "hlds.passes_aux.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 144 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0;

#line 150 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0;

#line 153 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 156 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 159 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 162 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__pair__pti_pair_2__plain_transform_hlds__unneeded_code__type_ctor_info_branch_point_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 165 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 168 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 171 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_bracketed_goal_0_0[3];

#line 174 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0;

#line 177 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0[1];

#line 180 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_bracketed_goal_0[1];

#line 183 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0[1];

#line 186 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_bracketed_goal_0[1];

#line 189 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0;

#line 192 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_alts_0_1[1];

#line 195 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1;

#line 198 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_0[1];

#line 201 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_1[1];

#line 204 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_alts_0[2];

#line 207 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_alts_0[2];

#line 210 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_alts_0[2];

#line 213 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_point_0_0[2];

#line 216 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0;

#line 219 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0[1];

#line 222 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_point_0[1];

#line 225 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0[1];

#line 228 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_point_0[1];

#line 231 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_location_0_0[2];

#line 234 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0;

#line 237 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0[1];

#line 240 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_location_0[1];

#line 243 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0[1];

#line 246 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_location_0[1];

#line 249 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 252 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_uc_option_values_0_0[4];

#line 255 "transform_hlds.unneeded_code.c"
static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_uc_option_values_0_0[4];

#line 258 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0;

#line 261 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0[1];

#line 264 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0[1];

#line 267 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0[1];

#line 270 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0[1];

#line 273 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 276 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 279 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_unneeded_code_info_0_0[4];

#line 282 "transform_hlds.unneeded_code.c"
static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_unneeded_code_info_0_0[4];

#line 285 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0;

#line 288 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0[1];

#line 291 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_unneeded_code_info_0[1];

#line 294 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0[1];

#line 297 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_unneeded_code_info_0[1];

#line 300 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0;

#line 303 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 306 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_where_needed_0_1[1];

#line 309 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1;

#line 312 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_0[1];

#line 315 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_1[1];

#line 318 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_where_needed_0[2];

#line 321 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_where_needed_0[2];

#line 324 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_where_needed_0[2];

#line 327 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unneeded_code__type_ctor_info_where_needed_0;

#line 330 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001(
#line 333 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 335 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 338 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001(
#line 341 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 343 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 345 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 348 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0_10001(
#line 351 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 353 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 356 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0_10001(
#line 359 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 361 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 363 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 366 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0_10001(
#line 369 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 371 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 374 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0_10001(
#line 377 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 379 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 381 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 384 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0_10001(
#line 387 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 389 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 392 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0_10001(
#line 395 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 397 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 399 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 402 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0_10001(
#line 405 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 407 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 410 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0_10001(
#line 413 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 415 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 417 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 420 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001(
#line 423 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 425 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 428 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001(
#line 431 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 433 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 435 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 438 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001(
#line 441 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 443 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 446 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001(
#line 449 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 451 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 453 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 456 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0_10001(
#line 459 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 461 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 464 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0_10001(
#line 467 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 469 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 471 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 474 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0_10001(
#line 477 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 479 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 482 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0_10001(
#line 485 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 487 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 489 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 492 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0_10001(
#line 495 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 497 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 500 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0_10001(
#line 503 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 505 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 507 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 762 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_53_93_95_48_11_p_0(
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goals0_13,
#line 762 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goals_14,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_23,
#line 762 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_24,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_25,
#line 762 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_27,
#line 762 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_28);

#line 644 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_109_97_110_100_95_118_97_114_95_101_118_101_114_121_119_104_101_114_101_95_95_91_49_93_95_48_2_p_0(
#line 644 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2);

#line 547 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__547__1_2_p_0(
#line 547 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_40,
#line 547 "unneeded_code.m"
  MR_Integer * transform_hlds__unneeded_code__HeadVar__2_41);

#line 363 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__363__1_1_p_0(
#line 363 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__RefinedGoals_49);

#line 318 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__318__1_3_p_0(
#line 318 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_65,
#line 318 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_66,
#line 318 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_67);

#line 201 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0(
#line 201 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 201 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 201 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 201 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0(
#line 201 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 201 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 207 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(
#line 207 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 207 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 207 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 207 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(
#line 207 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 207 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 203 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0(
#line 203 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 203 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 203 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 203 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0(
#line 203 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 203 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 296 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(
#line 296 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 296 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 296 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 296 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(
#line 296 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 296 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 288 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0(
#line 288 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 288 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 288 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 288 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0(
#line 288 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 288 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 215 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(
#line 215 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 215 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 215 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 215 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(
#line 215 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 215 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 143 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0(
#line 143 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 143 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 143 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 143 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0(
#line 143 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 143 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 111 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0(
#line 111 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 111 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 111 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 111 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0(
#line 111 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 111 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 122 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0(
#line 122 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 122 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 122 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 122 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0(
#line 122 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 122 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 759 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(
#line 759 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 759 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 759 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 759 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(
#line 759 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 759 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 1185 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__get_parent_branch_point_6_p_0(
#line 1185 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 1185 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_8,
#line 1185 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchGoalId_9,
#line 1185 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchArmGoalId_10,
#line 1185 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchAlt_11,
#line 1185 "unneeded_code.m"
  MR_Integer * transform_hlds__unneeded_code__BranchNum_12);

#line 1144 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(
#line 1144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 1144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_2,
#line 1144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3,
#line 1144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__4_4,
#line 1144 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__5_5);

#line 1073 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_ite_9_p_0(
#line 1073 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Cond0_10,
#line 1073 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Cond_11,
#line 1073 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Then0_12,
#line 1073 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Then_13,
#line 1073 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Else0_14,
#line 1073 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Else_15,
#line 1073 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_22,
#line 1073 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23,
#line 1073 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_17);

#line 1056 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(
#line 1056 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1056 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1056 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1056 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4,
#line 1056 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_5,
#line 1056 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_6);

#line 1037 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(
#line 1037 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1037 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1037 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1037 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4,
#line 1037 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_5,
#line 1037 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_6);

#line 1024 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(
#line 1024 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1024 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1024 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1024 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4);

#line 962 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(
#line 962 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_5,
#line 962 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_6,
#line 962 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58,
#line 962 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59);

#line 934 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__add_alt_start_7_p_0(
#line 934 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 934 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 934 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_3,
#line 934 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_4,
#line 934 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_5,
#line 934 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6,
#line 934 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7);

#line 911 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__add_where_needed_list_5_p_0(
#line 911 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 911 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 911 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_3,
#line 911 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4,
#line 911 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5);

#line 902 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(
#line 902 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_6,
#line 902 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_7,
#line 902 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap1_8,
#line 902 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap2_9,
#line 902 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__WhereNeededMap_10);

#line 863 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_18,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Cond0_19,
#line 863 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Cond_20,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Then0_21,
#line 863 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Then_22,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Else0_23,
#line 863 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Else_24,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_25,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_26,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_27,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_28,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45,
#line 863 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_46,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_47,
#line 863 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_48,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_49,
#line 863 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50);

#line 837 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 837 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_4,
#line 837 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_5,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_6,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_7,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__StartWhereNeededMap_9,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_10,
#line 837 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_11,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12,
#line 837 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_14,
#line 837 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_15);

#line 814 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 814 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_4,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_5,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_6,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__StartWhereNeededMap_7,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_8,
#line 814 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_9,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_10,
#line 814 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_11,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_12,
#line 814 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_13);

#line 791 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(
#line 791 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 791 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 791 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 791 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4,
#line 791 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5,
#line 791 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_6,
#line 791 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_7,
#line 791 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_8,
#line 791 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_9);

#line 775 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(
#line 775 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 775 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_2,
#line 775 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3);

#line 701 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_3(
#line 701 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 701 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 701 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 727 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2(
#line 727 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 727 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 727 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 716 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1(
#line 716 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 716 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 716 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 650 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_13,
#line 650 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_14,
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_16,
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88,
#line 650 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89,
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90,
#line 650 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91,
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92,
#line 650 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);

#line 644 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(
#line 644 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code___WhereNeeded0_3,
#line 644 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2);

#line 636 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__undemand_var_3_p_0(
#line 636 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_4,
#line 636 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6,
#line 636 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7);

#line 623 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_var_6_p_0(
#line 623 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 623 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 623 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeeded_9,
#line 623 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_10,
#line 623 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14,
#line 623 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_15);

#line 614 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(
#line 614 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_4,
#line 614 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_5,
#line 614 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_6);

#line 612 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0_2(
#line 612 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 612 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 612 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 612 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 610 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0_1(
#line 610 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 610 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1);

#line 603 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0(
#line 603 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_6,
#line 603 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_7,
#line 603 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_8,
#line 603 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_15,
#line 603 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_16);

#line 594 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(
#line 594 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_4,
#line 594 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_5,
#line 594 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_6);

#line 591 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_2(
#line 591 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 591 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 591 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 591 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 588 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_1(
#line 588 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 588 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1);

#line 579 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0(
#line 579 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_7,
#line 579 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_8,
#line 579 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_9,
#line 579 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeeded_10,
#line 579 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_20,
#line 579 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_21);

#line 493 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__collect_where_needed_6_p_0(
#line 493 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 493 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 493 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap_9,
#line 493 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ChangedVar_10,
#line 493 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13,
#line 493 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14);

#line 548 "unneeded_code.m"
static MR_Box MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3(
#line 548 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 548 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 548 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 547 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2(
#line 547 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 547 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 547 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 487 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1(
#line 487 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 487 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 487 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 487 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 471 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(
#line 471 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_7,
#line 471 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_8,
#line 471 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_9,
#line 471 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_10,
#line 471 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap_11,
#line 471 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_23);

#line 456 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(
#line 456 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_6,
#line 456 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalPath_7,
#line 456 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_8,
#line 456 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13,
#line 456 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_14);

#line 453 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1(
#line 453 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 453 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 453 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 453 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 445 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(
#line 445 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_5,
#line 445 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 445 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12,
#line 445 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13);

#line 440 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2(
#line 440 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 440 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 440 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 412 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1(
#line 412 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 412 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 412 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 412 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 393 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_13,
#line 393 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_14,
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_16,
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30,
#line 393 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_31,
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_32,
#line 393 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_33,
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_34,
#line 393 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_35);

#line 363 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2(
#line 363 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg);

#line 318 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1(
#line 318 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 318 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 318 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 318 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 304 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(
#line 304 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_60,
#line 304 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61,
#line 304 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62,
#line 304 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63,
#line 304 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__PredId_10,
#line 304 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__Pass_11,
#line 304 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Successful_12);


static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_2[14][3];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_3[3][6];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_4[1][4];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_5[1][7];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_6[2][5];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_7[1][8];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_8[2][9];




static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_2[1])),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__pair__pti_pair_2__plain_transform_hlds__unneeded_code__type_ctor_info_branch_point_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unneeded_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_8[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1653 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1661 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1669 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0
  }
};

#line 1678 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1687 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1695 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1704 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1712 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__pair__pti_pair_2__plain_transform_hlds__unneeded_code__type_ctor_info_branch_point_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1721 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 1730 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1738 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_bracketed_goal_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
};

#line 1745 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0 = {
  (MR_String) "bracketed_goal",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_bracketed_goal_0_0,
  NULL,
  NULL,
  NULL
};

#line 1760 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0
};

#line 1765 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_bracketed_goal_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0
  }
};

#line 1774 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0
};

#line 1779 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_bracketed_goal_0[1] = {
  (MR_Integer) 0
};

#line 1784 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_bracketed_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "bracketed_goal",
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0
  },
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_bracketed_goal_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_bracketed_goal_0
};

#line 1805 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0 = {
  (MR_String) "alt_ite",
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

#line 1820 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_alts_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0
};

#line 1825 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1 = {
  (MR_String) "alt_switch",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_alts_0_1,
  NULL,
  NULL,
  NULL
};

#line 1840 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0
};

#line 1845 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_1[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1
};

#line 1850 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_alts_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_1
  }
};

#line 1864 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_alts_0[2] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0,
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1
};

#line 1870 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_alts_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1876 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_alts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____branch_alts_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____branch_alts_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "branch_alts",
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_alts_0
  },
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_alts_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_alts_0
};

#line 1897 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_point_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_alts_0
};

#line 1903 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0 = {
  (MR_String) "branch_point",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_point_0_0,
  NULL,
  NULL,
  NULL
};

#line 1918 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0
};

#line 1923 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0
  }
};

#line 1932 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0
};

#line 1937 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_point_0[1] = {
  (MR_Integer) 0
};

#line 1942 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____branch_point_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____branch_point_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "branch_point",
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0
  },
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_point_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_point_0
};

#line 1963 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_location_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1969 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0 = {
  (MR_String) "location",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_location_0_0,
  NULL,
  NULL,
  NULL
};

#line 1984 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0
};

#line 1989 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_location_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0
  }
};

#line 1998 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0
};

#line 2003 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_location_0[1] = {
  (MR_Integer) 0
};

#line 2008 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_location_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____location_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____location_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "location",
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0
  },
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_location_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_location_0
};

#line 2029 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2038 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_refined_goal_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____refined_goal_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____refined_goal_map_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "refined_goal_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2059 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_uc_option_values_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2067 "transform_hlds.unneeded_code.c"
static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_uc_option_values_0_0[4] = {
  (MR_String) "uc_fully_strict",
  (MR_String) "uc_reorder_conj",
  (MR_String) "uc_copy_limit",
  (MR_String) "uc_debug"
};

#line 2075 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0 = {
  (MR_String) "uc_option_values",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_uc_option_values_0_0,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_uc_option_values_0_0,
  NULL,
  NULL
};

#line 2090 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0
};

#line 2095 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0
  }
};

#line 2104 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0
};

#line 2109 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0[1] = {
  (MR_Integer) 0
};

#line 2114 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_uc_option_values_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "uc_option_values",
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0
  },
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0
};

#line 2135 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2144 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 2153 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_unneeded_code_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_uc_option_values_0,
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
};

#line 2161 "transform_hlds.unneeded_code.c"
static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_unneeded_code_info_0_0[4] = {
  (MR_String) "uci_module_info",
  (MR_String) "uci_vartypes",
  (MR_String) "uci_options",
  (MR_String) "uci_containing_goal_map"
};

#line 2169 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0 = {
  (MR_String) "unneeded_code_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_unneeded_code_info_0_0,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_unneeded_code_info_0_0,
  NULL,
  NULL
};

#line 2184 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0
};

#line 2189 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_unneeded_code_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0
  }
};

#line 2198 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0
};

#line 2203 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_unneeded_code_info_0[1] = {
  (MR_Integer) 0
};

#line 2208 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_unneeded_code_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "unneeded_code_info",
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0
  },
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_unneeded_code_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_unneeded_code_info_0
};

#line 2229 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0 = {
  (MR_String) "everywhere",
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

#line 2244 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0,
    (MR_TypeInfo) &transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 2253 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_where_needed_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 2258 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1 = {
  (MR_String) "branches",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_where_needed_0_1,
  NULL,
  NULL,
  NULL
};

#line 2273 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0
};

#line 2278 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_1[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1
};

#line 2283 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_where_needed_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_1
  }
};

#line 2297 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_where_needed_0[2] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1,
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0
};

#line 2303 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_where_needed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2309 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____where_needed_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____where_needed_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "where_needed",
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_where_needed_0
  },
  {
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_where_needed_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_where_needed_0
};

#line 2330 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_branches_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____where_needed_branches_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____where_needed_branches_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "where_needed_branches",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2351 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unneeded_code__type_ctor_info_where_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0
  }
};

#line 2360 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____where_needed_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____where_needed_map_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "where_needed_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unneeded_code__type_ctor_info_where_needed_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2381 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001(
#line 2384 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2386 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2388 "transform_hlds.unneeded_code.c"
{
#line 2390 "transform_hlds.unneeded_code.c"
  {
#line 2392 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2395 "transform_hlds.unneeded_code.c"
    {
#line 2397 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2400 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2402 "transform_hlds.unneeded_code.c"
  }
#line 2404 "transform_hlds.unneeded_code.c"
}

#line 2407 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001(
#line 2410 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2412 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2414 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2416 "transform_hlds.unneeded_code.c"
{
#line 2418 "transform_hlds.unneeded_code.c"
  {
#line 2420 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2423 "transform_hlds.unneeded_code.c"
    {
#line 2425 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2428 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2430 "transform_hlds.unneeded_code.c"
  }
#line 2432 "transform_hlds.unneeded_code.c"
}

#line 2435 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0_10001(
#line 2438 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2440 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2442 "transform_hlds.unneeded_code.c"
{
#line 2444 "transform_hlds.unneeded_code.c"
  {
#line 2446 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2449 "transform_hlds.unneeded_code.c"
    {
#line 2451 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____branch_alts_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2454 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2456 "transform_hlds.unneeded_code.c"
  }
#line 2458 "transform_hlds.unneeded_code.c"
}

#line 2461 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0_10001(
#line 2464 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2466 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2468 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2470 "transform_hlds.unneeded_code.c"
{
#line 2472 "transform_hlds.unneeded_code.c"
  {
#line 2474 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2477 "transform_hlds.unneeded_code.c"
    {
#line 2479 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____branch_alts_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2482 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2484 "transform_hlds.unneeded_code.c"
  }
#line 2486 "transform_hlds.unneeded_code.c"
}

#line 2489 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0_10001(
#line 2492 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2494 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2496 "transform_hlds.unneeded_code.c"
{
#line 2498 "transform_hlds.unneeded_code.c"
  {
#line 2500 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2503 "transform_hlds.unneeded_code.c"
    {
#line 2505 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____branch_point_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2508 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2510 "transform_hlds.unneeded_code.c"
  }
#line 2512 "transform_hlds.unneeded_code.c"
}

#line 2515 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0_10001(
#line 2518 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2520 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2522 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2524 "transform_hlds.unneeded_code.c"
{
#line 2526 "transform_hlds.unneeded_code.c"
  {
#line 2528 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2531 "transform_hlds.unneeded_code.c"
    {
#line 2533 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____branch_point_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2536 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2538 "transform_hlds.unneeded_code.c"
  }
#line 2540 "transform_hlds.unneeded_code.c"
}

#line 2543 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0_10001(
#line 2546 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2548 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2550 "transform_hlds.unneeded_code.c"
{
#line 2552 "transform_hlds.unneeded_code.c"
  {
#line 2554 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2557 "transform_hlds.unneeded_code.c"
    {
#line 2559 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____location_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2562 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2564 "transform_hlds.unneeded_code.c"
  }
#line 2566 "transform_hlds.unneeded_code.c"
}

#line 2569 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0_10001(
#line 2572 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2574 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2576 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2578 "transform_hlds.unneeded_code.c"
{
#line 2580 "transform_hlds.unneeded_code.c"
  {
#line 2582 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2585 "transform_hlds.unneeded_code.c"
    {
#line 2587 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____location_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2590 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2592 "transform_hlds.unneeded_code.c"
  }
#line 2594 "transform_hlds.unneeded_code.c"
}

#line 2597 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0_10001(
#line 2600 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2602 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2604 "transform_hlds.unneeded_code.c"
{
#line 2606 "transform_hlds.unneeded_code.c"
  {
#line 2608 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2611 "transform_hlds.unneeded_code.c"
    {
#line 2613 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2616 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2618 "transform_hlds.unneeded_code.c"
  }
#line 2620 "transform_hlds.unneeded_code.c"
}

#line 2623 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0_10001(
#line 2626 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2628 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2630 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2632 "transform_hlds.unneeded_code.c"
{
#line 2634 "transform_hlds.unneeded_code.c"
  {
#line 2636 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2639 "transform_hlds.unneeded_code.c"
    {
#line 2641 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2644 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2646 "transform_hlds.unneeded_code.c"
  }
#line 2648 "transform_hlds.unneeded_code.c"
}

#line 2651 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001(
#line 2654 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2656 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2658 "transform_hlds.unneeded_code.c"
{
#line 2660 "transform_hlds.unneeded_code.c"
  {
#line 2662 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2665 "transform_hlds.unneeded_code.c"
    {
#line 2667 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____uc_option_values_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2670 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2672 "transform_hlds.unneeded_code.c"
  }
#line 2674 "transform_hlds.unneeded_code.c"
}

#line 2677 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001(
#line 2680 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2682 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2684 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2686 "transform_hlds.unneeded_code.c"
{
#line 2688 "transform_hlds.unneeded_code.c"
  {
#line 2690 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2693 "transform_hlds.unneeded_code.c"
    {
#line 2695 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____uc_option_values_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2698 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2700 "transform_hlds.unneeded_code.c"
  }
#line 2702 "transform_hlds.unneeded_code.c"
}

#line 2705 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001(
#line 2708 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2710 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2712 "transform_hlds.unneeded_code.c"
{
#line 2714 "transform_hlds.unneeded_code.c"
  {
#line 2716 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2719 "transform_hlds.unneeded_code.c"
    {
#line 2721 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2724 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2726 "transform_hlds.unneeded_code.c"
  }
#line 2728 "transform_hlds.unneeded_code.c"
}

#line 2731 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001(
#line 2734 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2736 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2738 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2740 "transform_hlds.unneeded_code.c"
{
#line 2742 "transform_hlds.unneeded_code.c"
  {
#line 2744 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2747 "transform_hlds.unneeded_code.c"
    {
#line 2749 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2752 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2754 "transform_hlds.unneeded_code.c"
  }
#line 2756 "transform_hlds.unneeded_code.c"
}

#line 2759 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0_10001(
#line 2762 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2764 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2766 "transform_hlds.unneeded_code.c"
{
#line 2768 "transform_hlds.unneeded_code.c"
  {
#line 2770 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2773 "transform_hlds.unneeded_code.c"
    {
#line 2775 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____where_needed_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2778 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2780 "transform_hlds.unneeded_code.c"
  }
#line 2782 "transform_hlds.unneeded_code.c"
}

#line 2785 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0_10001(
#line 2788 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2790 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2792 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2794 "transform_hlds.unneeded_code.c"
{
#line 2796 "transform_hlds.unneeded_code.c"
  {
#line 2798 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2801 "transform_hlds.unneeded_code.c"
    {
#line 2803 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____where_needed_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2806 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2808 "transform_hlds.unneeded_code.c"
  }
#line 2810 "transform_hlds.unneeded_code.c"
}

#line 2813 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0_10001(
#line 2816 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2818 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2820 "transform_hlds.unneeded_code.c"
{
#line 2822 "transform_hlds.unneeded_code.c"
  {
#line 2824 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2827 "transform_hlds.unneeded_code.c"
    {
#line 2829 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2832 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2834 "transform_hlds.unneeded_code.c"
  }
#line 2836 "transform_hlds.unneeded_code.c"
}

#line 2839 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0_10001(
#line 2842 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2844 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2846 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2848 "transform_hlds.unneeded_code.c"
{
#line 2850 "transform_hlds.unneeded_code.c"
  {
#line 2852 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2855 "transform_hlds.unneeded_code.c"
    {
#line 2857 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2860 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2862 "transform_hlds.unneeded_code.c"
  }
#line 2864 "transform_hlds.unneeded_code.c"
}

#line 2867 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0_10001(
#line 2870 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2872 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2874 "transform_hlds.unneeded_code.c"
{
#line 2876 "transform_hlds.unneeded_code.c"
  {
#line 2878 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2881 "transform_hlds.unneeded_code.c"
    {
#line 2883 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____where_needed_map_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2886 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2888 "transform_hlds.unneeded_code.c"
  }
#line 2890 "transform_hlds.unneeded_code.c"
}

#line 2893 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0_10001(
#line 2896 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2898 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2900 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2902 "transform_hlds.unneeded_code.c"
{
#line 2904 "transform_hlds.unneeded_code.c"
  {
#line 2906 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2909 "transform_hlds.unneeded_code.c"
    {
#line 2911 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____where_needed_map_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2914 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2916 "transform_hlds.unneeded_code.c"
  }
#line 2918 "transform_hlds.unneeded_code.c"
}

#line 762 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_53_93_95_48_11_p_0(
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goals0_13,
#line 762 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goals_14,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_23,
#line 762 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_24,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_25,
#line 762 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_27,
#line 762 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_28)
#line 762 "unneeded_code.m"
{
#line 768 "unneeded_code.m"
  {
#line 768 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 768 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BracketedGoals_20;
#line 768 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RevBracketedGoals_21;
#line 768 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RevGoals_22;

#line 769 "unneeded_code.m"
    {
#line 769 "unneeded_code.m"
      transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(transform_hlds__unneeded_code__Goals0_13, transform_hlds__unneeded_code__InitInstMap_15, &transform_hlds__unneeded_code__BracketedGoals_20);
    }
#line 770 "unneeded_code.m"
    {
#line 770 "unneeded_code.m"
      mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_bracketed_goal_0, transform_hlds__unneeded_code__BracketedGoals_20, &transform_hlds__unneeded_code__RevBracketedGoals_21);
    }
#line 771 "unneeded_code.m"
    {
#line 771 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__RevBracketedGoals_21, &transform_hlds__unneeded_code__RevGoals_22, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_23, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_24, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_25, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_27, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_28);
    }
#line 773 "unneeded_code.m"
    {
#line 773 "unneeded_code.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__RevGoals_22, transform_hlds__unneeded_code__Goals_14);
#line 773 "unneeded_code.m"
      return;
    }
#line 768 "unneeded_code.m"
  }
#line 762 "unneeded_code.m"
}

#line 644 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_109_97_110_100_95_118_97_114_95_101_118_101_114_121_119_104_101_114_101_95_95_91_49_93_95_48_2_p_0(
#line 644 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2)
#line 644 "unneeded_code.m"
{
#line 646 "unneeded_code.m"
  {
#line 646 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 646 "unneeded_code.m"
    *transform_hlds__unneeded_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "unneeded_code.m"
  }
#line 644 "unneeded_code.m"
}

#line 547 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__547__1_2_p_0(
#line 547 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_40,
#line 547 "unneeded_code.m"
  MR_Integer * transform_hlds__unneeded_code__HeadVar__2_41)
#line 547 "unneeded_code.m"
{
#line 547 "unneeded_code.m"
  {
#line 547 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 547 "unneeded_code.m"
    {
#line 547 "unneeded_code.m"
      mercury__set__count_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unneeded_code__HeadVar__1_40, transform_hlds__unneeded_code__HeadVar__2_41);
#line 547 "unneeded_code.m"
      return;
    }
#line 547 "unneeded_code.m"
  }
#line 547 "unneeded_code.m"
}

#line 363 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__363__1_1_p_0(
#line 363 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__RefinedGoals_49)
#line 363 "unneeded_code.m"
{
#line 363 "unneeded_code.m"
  {
#line 363 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 363 "unneeded_code.m"
    {
#line 363 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__RefinedGoals_49);
    }
#line 363 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 363 "unneeded_code.m"
  }
#line 363 "unneeded_code.m"
}

#line 318 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__318__1_3_p_0(
#line 318 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_65,
#line 318 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_66,
#line 318 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_67)
#line 318 "unneeded_code.m"
{
#line 318 "unneeded_code.m"
  {
#line 318 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 319 "unneeded_code.m"
    {
#line 319 "unneeded_code.m"
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__HeadVar__1_65)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__unneeded_code__HeadVar__2_66, transform_hlds__unneeded_code__HeadVar__3_67);
#line 319 "unneeded_code.m"
      return;
    }
#line 318 "unneeded_code.m"
  }
#line 318 "unneeded_code.m"
}

#line 201 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0(
#line 201 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 201 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 201 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 201 "unneeded_code.m"
{
#line 201 "unneeded_code.m"
  {
#line 201 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 201 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_4 = transform_hlds__unneeded_code__HeadVar__2_2;
#line 201 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_5 = transform_hlds__unneeded_code__HeadVar__3_3;

#line 201 "unneeded_code.m"
    {
#line 201 "unneeded_code.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_5)));
#line 201 "unneeded_code.m"
      return;
    }
#line 201 "unneeded_code.m"
  }
#line 201 "unneeded_code.m"
}

#line 201 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0(
#line 201 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 201 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 201 "unneeded_code.m"
{
#line 201 "unneeded_code.m"
  {
#line 201 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 201 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_3 = transform_hlds__unneeded_code__HeadVar__1_1;
#line 201 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_4 = transform_hlds__unneeded_code__HeadVar__2_2;

#line 201 "unneeded_code.m"
    {
#line 201 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_4)));
    }
#line 201 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 201 "unneeded_code.m"
  }
#line 201 "unneeded_code.m"
}

#line 207 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(
#line 207 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 207 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 207 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 207 "unneeded_code.m"
{
#line 207 "unneeded_code.m"
  {
#line 207 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 207 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_4 = transform_hlds__unneeded_code__HeadVar__2_2;
#line 207 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_5 = transform_hlds__unneeded_code__HeadVar__3_3;

#line 207 "unneeded_code.m"
    {
#line 207 "unneeded_code.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[5], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_5)));
#line 207 "unneeded_code.m"
      return;
    }
#line 207 "unneeded_code.m"
  }
#line 207 "unneeded_code.m"
}

#line 207 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(
#line 207 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 207 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 207 "unneeded_code.m"
{
#line 207 "unneeded_code.m"
  {
#line 207 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 207 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_3 = transform_hlds__unneeded_code__HeadVar__1_1;
#line 207 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_4 = transform_hlds__unneeded_code__HeadVar__2_2;

#line 207 "unneeded_code.m"
    {
#line 207 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[5], ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_4)));
    }
#line 207 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 207 "unneeded_code.m"
  }
#line 207 "unneeded_code.m"
}

#line 203 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0(
#line 203 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 203 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 203 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 203 "unneeded_code.m"
{
#line 203 "unneeded_code.m"
  {
#line 203 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 203 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 203 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 203 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_8 == transform_hlds__unneeded_code__CastY_9);
#line 203 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3229 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 203 "unneeded_code.m"
    else
#line 203 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 203 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 203 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 203 "unneeded_code.m"
        else
#line 3241 "transform_hlds.unneeded_code.c"
          *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 1;
#line 203 "unneeded_code.m"
      else
#line 203 "unneeded_code.m"
        {
#line 203 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));

#line 203 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3252 "transform_hlds.unneeded_code.c"
            *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 2;
#line 203 "unneeded_code.m"
          else
#line 203 "unneeded_code.m"
            {
#line 203 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));

#line 203 "unneeded_code.m"
              {
#line 203 "unneeded_code.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[5], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__V_11_11)), ((MR_Box) (transform_hlds__unneeded_code__V_7_7)));
#line 203 "unneeded_code.m"
                return;
              }
#line 203 "unneeded_code.m"
            }
#line 203 "unneeded_code.m"
        }
#line 203 "unneeded_code.m"
  }
#line 203 "unneeded_code.m"
}

#line 203 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0(
#line 203 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 203 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 203 "unneeded_code.m"
{
#line 203 "unneeded_code.m"
  {
#line 203 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 203 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_7 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 203 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 203 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_7 == transform_hlds__unneeded_code__CastY_8);
#line 203 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 203 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 203 "unneeded_code.m"
    else
#line 203 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 203 "unneeded_code.m"
        {
#line 203 "unneeded_code.m"
          MR_Integer transform_hlds__unneeded_code__CastX_3 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 203 "unneeded_code.m"
          MR_Integer transform_hlds__unneeded_code__CastY_4 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 203 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastY_4 == transform_hlds__unneeded_code__CastX_3);
#line 203 "unneeded_code.m"
        }
#line 203 "unneeded_code.m"
      else
#line 203 "unneeded_code.m"
        {
#line 203 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__TypeInfo_9_9;
#line 203 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 203 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_6_6;

#line 203 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 203 "unneeded_code.m"
          if (transform_hlds__unneeded_code__succeeded)
#line 203 "unneeded_code.m"
            {
#line 203 "unneeded_code.m"
              transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 3335 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__TypeInfo_9_9 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[5];
#line 3337 "transform_hlds.unneeded_code.c"
              {
#line 3339 "transform_hlds.unneeded_code.c"
                return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unneeded_code__TypeInfo_9_9, ((MR_Box) (transform_hlds__unneeded_code__V_5_5)), ((MR_Box) (transform_hlds__unneeded_code__V_6_6)));
              }
#line 203 "unneeded_code.m"
            }
#line 203 "unneeded_code.m"
        }
#line 203 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 203 "unneeded_code.m"
  }
#line 203 "unneeded_code.m"
}

#line 296 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(
#line 296 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 296 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 296 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 296 "unneeded_code.m"
{
#line 296 "unneeded_code.m"
  {
#line 296 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 296 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_15 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 296 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_16 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 296 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_15 == transform_hlds__unneeded_code__CastY_16);
#line 296 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3377 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 296 "unneeded_code.m"
    else
#line 296 "unneeded_code.m"
      {
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 3)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 2)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 3)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_12_12;

#line 296 "unneeded_code.m"
        {
#line 296 "unneeded_code.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__unneeded_code__V_12_12, transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_8_8);
        }
#line 3407 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_12_12 == (MR_Integer) 0);
#line 296 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 296 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 296 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_12_12;
#line 296 "unneeded_code.m"
        else
#line 296 "unneeded_code.m"
          {
#line 296 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_13_13;

#line 296 "unneeded_code.m"
            {
#line 296 "unneeded_code.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__unneeded_code__V_13_13, ((MR_Box) (transform_hlds__unneeded_code__V_5_5)), ((MR_Box) (transform_hlds__unneeded_code__V_9_9)));
            }
#line 3427 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_13_13 == (MR_Integer) 0);
#line 296 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 296 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 296 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_13_13;
#line 296 "unneeded_code.m"
            else
#line 296 "unneeded_code.m"
              {
#line 296 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_14_14;

#line 296 "unneeded_code.m"
                {
#line 296 "unneeded_code.m"
                  transform_hlds__unneeded_code____Compare____uc_option_values_0_0(&transform_hlds__unneeded_code__V_14_14, transform_hlds__unneeded_code__V_6_6, transform_hlds__unneeded_code__V_10_10);
                }
#line 3447 "transform_hlds.unneeded_code.c"
                transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_14_14 == (MR_Integer) 0);
#line 296 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 296 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 296 "unneeded_code.m"
                  *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_14_14;
#line 296 "unneeded_code.m"
                else
#line 296 "unneeded_code.m"
                  {
#line 296 "unneeded_code.m"
                    {
#line 296 "unneeded_code.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[4], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__V_7_7)), ((MR_Box) (transform_hlds__unneeded_code__V_11_11)));
#line 296 "unneeded_code.m"
                      return;
                    }
#line 296 "unneeded_code.m"
                  }
#line 296 "unneeded_code.m"
              }
#line 296 "unneeded_code.m"
          }
#line 296 "unneeded_code.m"
      }
#line 296 "unneeded_code.m"
  }
#line 296 "unneeded_code.m"
}

#line 296 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(
#line 296 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 296 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 296 "unneeded_code.m"
{
#line 296 "unneeded_code.m"
  {
#line 296 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 296 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_11 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 296 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_12 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 296 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_11 == transform_hlds__unneeded_code__CastY_12);
#line 296 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 296 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 296 "unneeded_code.m"
    else
#line 296 "unneeded_code.m"
      {
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TypeCtorInfo_14_14;
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TypeInfo_15_15;
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 2)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 3)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 296 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 3)));

#line 3528 "transform_hlds.unneeded_code.c"
        {
#line 3530 "transform_hlds.unneeded_code.c"
          transform_hlds__unneeded_code__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__unneeded_code__V_3_3, transform_hlds__unneeded_code__V_7_7);
        }
#line 296 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 296 "unneeded_code.m"
          {
#line 3537 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 3539 "transform_hlds.unneeded_code.c"
            {
#line 3541 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unneeded_code__TypeCtorInfo_14_14, ((MR_Box) (transform_hlds__unneeded_code__V_4_4)), ((MR_Box) (transform_hlds__unneeded_code__V_8_8)));
            }
#line 296 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 296 "unneeded_code.m"
              {
#line 3548 "transform_hlds.unneeded_code.c"
                {
#line 3550 "transform_hlds.unneeded_code.c"
                  transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____uc_option_values_0_0(transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_9_9);
                }
#line 296 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 296 "unneeded_code.m"
                  {
#line 3557 "transform_hlds.unneeded_code.c"
                    transform_hlds__unneeded_code__TypeInfo_15_15 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[4];
#line 3559 "transform_hlds.unneeded_code.c"
                    {
#line 3561 "transform_hlds.unneeded_code.c"
                      return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unneeded_code__TypeInfo_15_15, ((MR_Box) (transform_hlds__unneeded_code__V_6_6)), ((MR_Box) (transform_hlds__unneeded_code__V_10_10)));
                    }
#line 296 "unneeded_code.m"
                  }
#line 296 "unneeded_code.m"
              }
#line 296 "unneeded_code.m"
          }
#line 296 "unneeded_code.m"
      }
#line 296 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 296 "unneeded_code.m"
  }
#line 296 "unneeded_code.m"
}

#line 288 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0(
#line 288 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 288 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 288 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 288 "unneeded_code.m"
{
#line 288 "unneeded_code.m"
  {
#line 288 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 288 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_15 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 288 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_16 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 288 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_15 == transform_hlds__unneeded_code__CastY_16);
#line 288 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3603 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 288 "unneeded_code.m"
    else
#line 288 "unneeded_code.m"
      {
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 288 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 3)));
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 288 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 2)));
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 3)));
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_12_12;
#line 288 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_21_21 = (MR_Integer) transform_hlds__unneeded_code__V_4_4;
#line 288 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_22_22 = (MR_Integer) transform_hlds__unneeded_code__V_8_8;

#line 288 "unneeded_code.m"
        {
#line 288 "unneeded_code.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unneeded_code__V_12_12, transform_hlds__unneeded_code__V_21_21, transform_hlds__unneeded_code__V_22_22);
        }
#line 3637 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_12_12 == (MR_Integer) 0);
#line 288 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 288 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 288 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_12_12;
#line 288 "unneeded_code.m"
        else
#line 288 "unneeded_code.m"
          {
#line 288 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_13_13;
#line 288 "unneeded_code.m"
            MR_Integer transform_hlds__unneeded_code__V_23_23 = (MR_Integer) transform_hlds__unneeded_code__V_5_5;
#line 288 "unneeded_code.m"
            MR_Integer transform_hlds__unneeded_code__V_24_24 = (MR_Integer) transform_hlds__unneeded_code__V_9_9;

#line 288 "unneeded_code.m"
            {
#line 288 "unneeded_code.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unneeded_code__V_13_13, transform_hlds__unneeded_code__V_23_23, transform_hlds__unneeded_code__V_24_24);
            }
#line 3661 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_13_13 == (MR_Integer) 0);
#line 288 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 288 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 288 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_13_13;
#line 288 "unneeded_code.m"
            else
#line 288 "unneeded_code.m"
              {
#line 288 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_14_14;

#line 288 "unneeded_code.m"
                {
#line 288 "unneeded_code.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unneeded_code__V_14_14, transform_hlds__unneeded_code__V_6_6, transform_hlds__unneeded_code__V_10_10);
                }
#line 3681 "transform_hlds.unneeded_code.c"
                transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_14_14 == (MR_Integer) 0);
#line 288 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 288 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 288 "unneeded_code.m"
                  *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_14_14;
#line 288 "unneeded_code.m"
                else
#line 288 "unneeded_code.m"
                  {
#line 288 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__V_25_25 = (MR_Integer) transform_hlds__unneeded_code__V_7_7;
#line 288 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__V_26_26 = (MR_Integer) transform_hlds__unneeded_code__V_11_11;

#line 288 "unneeded_code.m"
                    {
#line 288 "unneeded_code.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_25_25, transform_hlds__unneeded_code__V_26_26);
#line 288 "unneeded_code.m"
                      return;
                    }
#line 288 "unneeded_code.m"
                  }
#line 288 "unneeded_code.m"
              }
#line 288 "unneeded_code.m"
          }
#line 288 "unneeded_code.m"
      }
#line 288 "unneeded_code.m"
  }
#line 288 "unneeded_code.m"
}

#line 288 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0(
#line 288 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 288 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 288 "unneeded_code.m"
{
#line 288 "unneeded_code.m"
  {
#line 288 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 288 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_11 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 288 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_12 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 288 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_11 == transform_hlds__unneeded_code__CastY_12);
#line 288 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 288 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 288 "unneeded_code.m"
    else
#line 288 "unneeded_code.m"
      {
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 288 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 2)));
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 3)));
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 288 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 288 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 3)));

#line 3763 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_3_3 == transform_hlds__unneeded_code__V_7_7);
#line 288 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 288 "unneeded_code.m"
          {
#line 3769 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_4_4 == transform_hlds__unneeded_code__V_8_8);
#line 288 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 288 "unneeded_code.m"
              {
#line 3775 "transform_hlds.unneeded_code.c"
                transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_5_5 == transform_hlds__unneeded_code__V_9_9);
#line 288 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 3779 "transform_hlds.unneeded_code.c"
                  transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_6_6 == transform_hlds__unneeded_code__V_10_10);
#line 288 "unneeded_code.m"
              }
#line 288 "unneeded_code.m"
          }
#line 288 "unneeded_code.m"
      }
#line 288 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 288 "unneeded_code.m"
  }
#line 288 "unneeded_code.m"
}

#line 215 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(
#line 215 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 215 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 215 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 215 "unneeded_code.m"
{
#line 215 "unneeded_code.m"
  {
#line 215 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 215 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_4 = transform_hlds__unneeded_code__HeadVar__2_2;
#line 215 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_5 = transform_hlds__unneeded_code__HeadVar__3_3;

#line 215 "unneeded_code.m"
    {
#line 215 "unneeded_code.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[3], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_5)));
#line 215 "unneeded_code.m"
      return;
    }
#line 215 "unneeded_code.m"
  }
#line 215 "unneeded_code.m"
}

#line 215 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(
#line 215 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 215 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 215 "unneeded_code.m"
{
#line 215 "unneeded_code.m"
  {
#line 215 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 215 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_3 = transform_hlds__unneeded_code__HeadVar__1_1;
#line 215 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_4 = transform_hlds__unneeded_code__HeadVar__2_2;

#line 215 "unneeded_code.m"
    {
#line 215 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[3], ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_4)));
    }
#line 215 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 215 "unneeded_code.m"
  }
#line 215 "unneeded_code.m"
}

#line 143 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0(
#line 143 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 143 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 143 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 143 "unneeded_code.m"
{
#line 143 "unneeded_code.m"
  {
#line 143 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 143 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 143 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_10 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 143 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_9 == transform_hlds__unneeded_code__CastY_10);
#line 143 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3880 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 143 "unneeded_code.m"
    else
#line 143 "unneeded_code.m"
      {
#line 143 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 143 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 143 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 143 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 143 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8;

#line 143 "unneeded_code.m"
        {
#line 143 "unneeded_code.m"
          transform_hlds__unneeded_code____Compare____branch_point_0_0(&transform_hlds__unneeded_code__V_8_8, transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_6_6);
        }
#line 3902 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_8_8 == (MR_Integer) 0);
#line 143 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 143 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 143 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_8_8;
#line 143 "unneeded_code.m"
        else
#line 143 "unneeded_code.m"
          {
#line 143 "unneeded_code.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_7_7);
#line 143 "unneeded_code.m"
            return;
          }
#line 143 "unneeded_code.m"
      }
#line 143 "unneeded_code.m"
  }
#line 143 "unneeded_code.m"
}

#line 143 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0(
#line 143 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 143 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 143 "unneeded_code.m"
{
#line 143 "unneeded_code.m"
  {
#line 143 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 143 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_7 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 143 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 143 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_7 == transform_hlds__unneeded_code__CastY_8);
#line 143 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 143 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 143 "unneeded_code.m"
    else
#line 143 "unneeded_code.m"
      {
#line 143 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 143 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 143 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 143 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));

#line 3963 "transform_hlds.unneeded_code.c"
        {
#line 3965 "transform_hlds.unneeded_code.c"
          transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____branch_point_0_0(transform_hlds__unneeded_code__V_3_3, transform_hlds__unneeded_code__V_5_5);
        }
#line 143 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 3970 "transform_hlds.unneeded_code.c"
          transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_4_4 == transform_hlds__unneeded_code__V_6_6);
#line 143 "unneeded_code.m"
      }
#line 143 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 143 "unneeded_code.m"
  }
#line 143 "unneeded_code.m"
}

#line 111 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0(
#line 111 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 111 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 111 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 111 "unneeded_code.m"
{
#line 111 "unneeded_code.m"
  {
#line 111 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 111 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 111 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_10 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 111 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_9 == transform_hlds__unneeded_code__CastY_10);
#line 111 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 4005 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "unneeded_code.m"
    else
#line 111 "unneeded_code.m"
      {
#line 111 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 111 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 111 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 111 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 111 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8;
#line 111 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_13_13 = (MR_Integer) transform_hlds__unneeded_code__V_4_4;
#line 111 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_14_14 = (MR_Integer) transform_hlds__unneeded_code__V_6_6;

#line 111 "unneeded_code.m"
        {
#line 111 "unneeded_code.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unneeded_code__V_8_8, transform_hlds__unneeded_code__V_13_13, transform_hlds__unneeded_code__V_14_14);
        }
#line 4031 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_8_8 == (MR_Integer) 0);
#line 111 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 111 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 111 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_8_8;
#line 111 "unneeded_code.m"
        else
#line 111 "unneeded_code.m"
          {
#line 111 "unneeded_code.m"
            transform_hlds__unneeded_code____Compare____branch_alts_0_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_7_7);
#line 111 "unneeded_code.m"
            return;
          }
#line 111 "unneeded_code.m"
      }
#line 111 "unneeded_code.m"
  }
#line 111 "unneeded_code.m"
}

#line 111 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0(
#line 111 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 111 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 111 "unneeded_code.m"
{
#line 111 "unneeded_code.m"
  {
#line 111 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 111 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_7 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 111 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 111 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_7 == transform_hlds__unneeded_code__CastY_8);
#line 111 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 111 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 111 "unneeded_code.m"
    else
#line 111 "unneeded_code.m"
      {
#line 111 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 111 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 111 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 111 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 111 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_10_10 = (MR_Integer) transform_hlds__unneeded_code__V_3_3;
#line 111 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_11_11 = (MR_Integer) transform_hlds__unneeded_code__V_5_5;

#line 4096 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_10_10 == transform_hlds__unneeded_code__V_11_11);
#line 111 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 4100 "transform_hlds.unneeded_code.c"
          {
#line 4102 "transform_hlds.unneeded_code.c"
            return transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____branch_alts_0_0(transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_6_6);
          }
#line 111 "unneeded_code.m"
      }
#line 111 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 111 "unneeded_code.m"
  }
#line 111 "unneeded_code.m"
}

#line 122 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0(
#line 122 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 122 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 122 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 122 "unneeded_code.m"
{
#line 122 "unneeded_code.m"
  {
#line 122 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 122 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 122 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 122 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_8 == transform_hlds__unneeded_code__CastY_9);
#line 122 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 4138 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 122 "unneeded_code.m"
    else
#line 122 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 122 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 122 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 122 "unneeded_code.m"
        else
#line 4150 "transform_hlds.unneeded_code.c"
          *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 1;
#line 122 "unneeded_code.m"
      else
#line 122 "unneeded_code.m"
        {
#line 122 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));

#line 122 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4161 "transform_hlds.unneeded_code.c"
            *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 2;
#line 122 "unneeded_code.m"
          else
#line 122 "unneeded_code.m"
            {
#line 122 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));

#line 122 "unneeded_code.m"
              {
#line 122 "unneeded_code.m"
                mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_11_11, transform_hlds__unneeded_code__V_7_7);
#line 122 "unneeded_code.m"
                return;
              }
#line 122 "unneeded_code.m"
            }
#line 122 "unneeded_code.m"
        }
#line 122 "unneeded_code.m"
  }
#line 122 "unneeded_code.m"
}

#line 122 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0(
#line 122 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 122 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 122 "unneeded_code.m"
{
#line 122 "unneeded_code.m"
  {
#line 122 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 122 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_7 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 122 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 122 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_7 == transform_hlds__unneeded_code__CastY_8);
#line 122 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 122 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 122 "unneeded_code.m"
    else
#line 122 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 122 "unneeded_code.m"
        {
#line 122 "unneeded_code.m"
          MR_Integer transform_hlds__unneeded_code__CastX_3 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 122 "unneeded_code.m"
          MR_Integer transform_hlds__unneeded_code__CastY_4 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 122 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastY_4 == transform_hlds__unneeded_code__CastX_3);
#line 122 "unneeded_code.m"
        }
#line 122 "unneeded_code.m"
      else
#line 122 "unneeded_code.m"
        {
#line 122 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 122 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_6_6;

#line 122 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 122 "unneeded_code.m"
          if (transform_hlds__unneeded_code__succeeded)
#line 122 "unneeded_code.m"
            {
#line 122 "unneeded_code.m"
              transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 4242 "transform_hlds.unneeded_code.c"
              {
#line 4244 "transform_hlds.unneeded_code.c"
                return transform_hlds__unneeded_code__succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_6_6);
              }
#line 122 "unneeded_code.m"
            }
#line 122 "unneeded_code.m"
        }
#line 122 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 122 "unneeded_code.m"
  }
#line 122 "unneeded_code.m"
}

#line 759 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(
#line 759 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 759 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 759 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 759 "unneeded_code.m"
{
#line 759 "unneeded_code.m"
  {
#line 759 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 759 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_12 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 759 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_13 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 759 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_12 == transform_hlds__unneeded_code__CastY_13);
#line 759 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 4282 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 759 "unneeded_code.m"
    else
#line 759 "unneeded_code.m"
      {
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 2)));
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_10_10;

#line 759 "unneeded_code.m"
        {
#line 759 "unneeded_code.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__unneeded_code__V_10_10, transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_7_7);
        }
#line 4308 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_10_10 == (MR_Integer) 0);
#line 759 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 759 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 759 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_10_10;
#line 759 "unneeded_code.m"
        else
#line 759 "unneeded_code.m"
          {
#line 759 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_11_11;

#line 759 "unneeded_code.m"
            {
#line 759 "unneeded_code.m"
              hlds__instmap____Compare____instmap_0_0(&transform_hlds__unneeded_code__V_11_11, transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_8_8);
            }
#line 4328 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_11_11 == (MR_Integer) 0);
#line 759 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 759 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 759 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_11_11;
#line 759 "unneeded_code.m"
            else
#line 759 "unneeded_code.m"
              {
#line 759 "unneeded_code.m"
                hlds__instmap____Compare____instmap_0_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_6_6, transform_hlds__unneeded_code__V_9_9);
#line 759 "unneeded_code.m"
                return;
              }
#line 759 "unneeded_code.m"
          }
#line 759 "unneeded_code.m"
      }
#line 759 "unneeded_code.m"
  }
#line 759 "unneeded_code.m"
}

#line 759 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(
#line 759 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 759 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 759 "unneeded_code.m"
{
#line 759 "unneeded_code.m"
  {
#line 759 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 759 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 759 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_10 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 759 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_9 == transform_hlds__unneeded_code__CastY_10);
#line 759 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 759 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 759 "unneeded_code.m"
    else
#line 759 "unneeded_code.m"
      {
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 2)));
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 759 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));

#line 4395 "transform_hlds.unneeded_code.c"
        {
#line 4397 "transform_hlds.unneeded_code.c"
          transform_hlds__unneeded_code__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__unneeded_code__V_3_3, transform_hlds__unneeded_code__V_6_6);
        }
#line 759 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 759 "unneeded_code.m"
          {
#line 4404 "transform_hlds.unneeded_code.c"
            {
#line 4406 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_7_7);
            }
#line 759 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 4411 "transform_hlds.unneeded_code.c"
              {
#line 4413 "transform_hlds.unneeded_code.c"
                return transform_hlds__unneeded_code__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_8_8);
              }
#line 759 "unneeded_code.m"
          }
#line 759 "unneeded_code.m"
      }
#line 759 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 759 "unneeded_code.m"
  }
#line 759 "unneeded_code.m"
}

#line 1185 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__get_parent_branch_point_6_p_0(
#line 1185 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 1185 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_8,
#line 1185 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchGoalId_9,
#line 1185 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchArmGoalId_10,
#line 1185 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchAlt_11,
#line 1185 "unneeded_code.m"
  MR_Integer * transform_hlds__unneeded_code__BranchNum_12)
#line 1185 "unneeded_code.m"
{
#line 1189 "unneeded_code.m"
  while (MR_TRUE)
#line 1189 "unneeded_code.m"
    {
#line 1189 "unneeded_code.m"
      /* tailcall optimized into a loop */
#line 1189 "unneeded_code.m"
      {
#line 1189 "unneeded_code.m"
        MR_bool transform_hlds__unneeded_code__succeeded;
#line 1189 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalContaining_13;
#line 1189 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ContainingGoalId_14;
#line 1189 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__LastStep_15;
#line 1190 "unneeded_code.m"
        MR_Box transform_hlds__unneeded_code__conv0_GoalContaining_13;

#line 1190 "unneeded_code.m"
        {
#line 1190 "unneeded_code.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, transform_hlds__unneeded_code__ContainingGoalMap_7, ((MR_Box) (transform_hlds__unneeded_code__GoalId_8)), &transform_hlds__unneeded_code__conv0_GoalContaining_13);
        }
#line 1190 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalContaining_13 = ((MR_Word) transform_hlds__unneeded_code__conv0_GoalContaining_13);
#line 1191 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalContaining_13)) == (MR_mktag((MR_Integer) 1)));
#line 1191 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1191 "unneeded_code.m"
          {
#line 1191 "unneeded_code.m"
            transform_hlds__unneeded_code__ContainingGoalId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__GoalContaining_13, (MR_Integer) 0)));
#line 1191 "unneeded_code.m"
            transform_hlds__unneeded_code__LastStep_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__GoalContaining_13, (MR_Integer) 1)));
#line 1198 "unneeded_code.m"
            if ((transform_hlds__unneeded_code__LastStep_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1205 "unneeded_code.m"
              {
#line 1206 "unneeded_code.m"
                *transform_hlds__unneeded_code__BranchGoalId_9 = transform_hlds__unneeded_code__ContainingGoalId_14;
#line 1207 "unneeded_code.m"
                *transform_hlds__unneeded_code__BranchArmGoalId_10 = transform_hlds__unneeded_code__GoalId_8;
#line 1208 "unneeded_code.m"
                *transform_hlds__unneeded_code__BranchAlt_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "unneeded_code.m"
                *transform_hlds__unneeded_code__BranchNum_12 = (MR_Integer) 2;
#line 1205 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1205 "unneeded_code.m"
              }
#line 1198 "unneeded_code.m"
            else
#line 1198 "unneeded_code.m"
              if ((transform_hlds__unneeded_code__LastStep_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1199 "unneeded_code.m"
                {
#line 1200 "unneeded_code.m"
                  *transform_hlds__unneeded_code__BranchGoalId_9 = transform_hlds__unneeded_code__ContainingGoalId_14;
#line 1201 "unneeded_code.m"
                  *transform_hlds__unneeded_code__BranchArmGoalId_10 = transform_hlds__unneeded_code__GoalId_8;
#line 1202 "unneeded_code.m"
                  *transform_hlds__unneeded_code__BranchAlt_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1203 "unneeded_code.m"
                  *transform_hlds__unneeded_code__BranchNum_12 = (MR_Integer) 1;
#line 1199 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1199 "unneeded_code.m"
                }
#line 1198 "unneeded_code.m"
              else
#line 1198 "unneeded_code.m"
                if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__LastStep_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__LastStep_15, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1193 "unneeded_code.m"
                  {
#line 1193 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__MaybeNumAlts_17;

#line 1193 "unneeded_code.m"
                    *transform_hlds__unneeded_code__BranchNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__LastStep_15, (MR_Integer) 1)));
#line 1193 "unneeded_code.m"
                    transform_hlds__unneeded_code__MaybeNumAlts_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__LastStep_15, (MR_Integer) 2)));
#line 1194 "unneeded_code.m"
                    *transform_hlds__unneeded_code__BranchGoalId_9 = transform_hlds__unneeded_code__ContainingGoalId_14;
#line 1195 "unneeded_code.m"
                    *transform_hlds__unneeded_code__BranchArmGoalId_10 = transform_hlds__unneeded_code__GoalId_8;
#line 1196 "unneeded_code.m"
                    {
#line 1196 "unneeded_code.m"
                      MR_Word base;
#line 1196 "unneeded_code.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchAlt_11 = base;
#line 1196 "unneeded_code.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__MaybeNumAlts_17));
#line 1196 "unneeded_code.m"
                    }
#line 1193 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1193 "unneeded_code.m"
                  }
#line 1198 "unneeded_code.m"
                else
#line 1198 "unneeded_code.m"
                  if (((((((((((MR_tag((MR_Word) transform_hlds__unneeded_code__LastStep_15)) == (MR_mktag((MR_Integer) 1)))) || (((MR_tag((MR_Word) transform_hlds__unneeded_code__LastStep_15)) == (MR_mktag((MR_Integer) 2)))))) || ((transform_hlds__unneeded_code__LastStep_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))) || ((transform_hlds__unneeded_code__LastStep_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))))) || (((((MR_tag((MR_Word) transform_hlds__unneeded_code__LastStep_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__LastStep_15, (MR_Integer) 0)))) == (MR_Integer) 1))))))
#line 1217 "unneeded_code.m"
                    {
#line 1217 "unneeded_code.m"
                      /* direct tailcall eliminated */
#line 1217 "unneeded_code.m"
                      {
#line 1217 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__GoalId__tmp_copy_8 = transform_hlds__unneeded_code__ContainingGoalId_14;

#line 1217 "unneeded_code.m"
                        transform_hlds__unneeded_code__GoalId_8 = transform_hlds__unneeded_code__GoalId__tmp_copy_8;
#line 1217 "unneeded_code.m"
                      }
#line 1217 "unneeded_code.m"
                      continue;
#line 1217 "unneeded_code.m"
                    }
#line 1198 "unneeded_code.m"
                  else
#line 1198 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = MR_FALSE;
#line 1191 "unneeded_code.m"
          }
#line 1189 "unneeded_code.m"
        return transform_hlds__unneeded_code__succeeded;
#line 1189 "unneeded_code.m"
      }
#line 1189 "unneeded_code.m"
      break;
#line 1189 "unneeded_code.m"
    }
#line 1185 "unneeded_code.m"
}

#line 1144 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(
#line 1144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 1144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_2,
#line 1144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3,
#line 1144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__4_4,
#line 1144 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__5_5)
#line 1144 "unneeded_code.m"
{
#line 1148 "unneeded_code.m"
  while (MR_TRUE)
#line 1148 "unneeded_code.m"
    {
#line 1148 "unneeded_code.m"
      /* tailcall optimized into a loop */
#line 1148 "unneeded_code.m"
      {
#line 1148 "unneeded_code.m"
        MR_bool transform_hlds__unneeded_code__succeeded;

#line 1148 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1148 "unneeded_code.m"
          {
#line 1148 "unneeded_code.m"
            MR_Word base;
#line 1148 "unneeded_code.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "unneeded_code.m"
            *transform_hlds__unneeded_code__HeadVar__5_5 = base;
#line 1148 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__HeadVar__4_4));
#line 1148 "unneeded_code.m"
          }
#line 1148 "unneeded_code.m"
        else
#line 1151 "unneeded_code.m"
          {
#line 1151 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__First_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 1151 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 1151 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchPoint_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__First_11, (MR_Integer) 0)));
#line 1151 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__NewAlts_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__First_11, (MR_Integer) 1)));
#line 1179 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__OldAlts_17;
#line 1153 "unneeded_code.m"
            MR_Box transform_hlds__unneeded_code__conv0_OldAlts_17;

#line 1153 "unneeded_code.m"
            {
#line 1153 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__HeadVar__4_4, ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_15)), &transform_hlds__unneeded_code__conv0_OldAlts_17);
            }
#line 1153 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 1153 "unneeded_code.m"
              {
#line 1153 "unneeded_code.m"
                transform_hlds__unneeded_code__OldAlts_17 = ((MR_Word) transform_hlds__unneeded_code__conv0_OldAlts_17);
#line 1153 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1153 "unneeded_code.m"
              }
#line 1179 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 1154 "unneeded_code.m"
              {
#line 1154 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1154 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__Alts_18;
#line 1154 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchGoalId_19;
#line 1154 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchAlts_20;

#line 1154 "unneeded_code.m"
                {
#line 1154 "unneeded_code.m"
                  mercury__set__union_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_34_34, transform_hlds__unneeded_code__OldAlts_17, transform_hlds__unneeded_code__NewAlts_16, &transform_hlds__unneeded_code__Alts_18);
                }
#line 1155 "unneeded_code.m"
                transform_hlds__unneeded_code__BranchGoalId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_15, (MR_Integer) 0)));
#line 1155 "unneeded_code.m"
                transform_hlds__unneeded_code__BranchAlts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_15, (MR_Integer) 1)));
#line 1223 "unneeded_code.m"
                if ((transform_hlds__unneeded_code__BranchAlts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1223 "unneeded_code.m"
                  {
#line 1223 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__NumAlts_42;

#line 1224 "unneeded_code.m"
                    {
#line 1224 "unneeded_code.m"
                      mercury__set__count_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unneeded_code__Alts_18, &transform_hlds__unneeded_code__NumAlts_42);
                    }
#line 1225 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__NumAlts_42 == (MR_Integer) 2);
#line 1223 "unneeded_code.m"
                  }
#line 1223 "unneeded_code.m"
                else
#line 1227 "unneeded_code.m"
                  {
#line 1227 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_10_48;
#line 1227 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__NumFunctors_43;
#line 1227 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__NumAlts_45;
#line 1227 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__BranchAlts_20, (MR_Integer) 0)));

#line 1226 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 1226 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 1226 "unneeded_code.m"
                      {
#line 1226 "unneeded_code.m"
                        transform_hlds__unneeded_code__NumFunctors_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_46_46, (MR_Integer) 0)));
#line 4716 "transform_hlds.unneeded_code.c"
                        transform_hlds__unneeded_code__TypeCtorInfo_10_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1228 "unneeded_code.m"
                        {
#line 1228 "unneeded_code.m"
                          mercury__set__count_2_p_0(transform_hlds__unneeded_code__TypeCtorInfo_10_48, transform_hlds__unneeded_code__Alts_18, &transform_hlds__unneeded_code__NumAlts_45);
                        }
#line 1229 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__NumAlts_45 == transform_hlds__unneeded_code__NumFunctors_43);
#line 1226 "unneeded_code.m"
                      }
#line 1227 "unneeded_code.m"
                  }
#line 1174 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 1171 "unneeded_code.m"
                  {
#line 1171 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__ParentBranchGoalId_21;
#line 1171 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__ParentBranchAlt_23;
#line 1171 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__ParentBranchNum_24;
#line 1160 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__ParentBranchArmGoalId_22;

#line 1158 "unneeded_code.m"
                    {
#line 1158 "unneeded_code.m"
                      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code__get_parent_branch_point_6_p_0(transform_hlds__unneeded_code__ContainingGoalMap_1, transform_hlds__unneeded_code__BranchGoalId_19, &transform_hlds__unneeded_code__ParentBranchGoalId_21, &transform_hlds__unneeded_code__ParentBranchArmGoalId_22, &transform_hlds__unneeded_code__ParentBranchAlt_23, &transform_hlds__unneeded_code__ParentBranchNum_24);
                    }
#line 1160 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 1160 "unneeded_code.m"
                      {
#line 1161 "unneeded_code.m"
                        {
#line 1161 "unneeded_code.m"
                          transform_hlds__unneeded_code__succeeded = mdbcomp__goal_path__goal_id_inside_3_p_0(transform_hlds__unneeded_code__ContainingGoalMap_1, transform_hlds__unneeded_code__ParentBranchArmGoalId_22, transform_hlds__unneeded_code__CurrentId_2);
                        }
#line 1161 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 1160 "unneeded_code.m"
                      }
#line 1171 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 1164 "unneeded_code.m"
                      {
#line 1164 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__Branches1_25;
#line 1164 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__ParentBranchPoint_26;
#line 1164 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__ParentAlts_27;
#line 1164 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_28_28;
#line 1164 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_29_29;

#line 1164 "unneeded_code.m"
                        {
#line 1164 "unneeded_code.m"
                          mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_15)), transform_hlds__unneeded_code__HeadVar__4_4, &transform_hlds__unneeded_code__Branches1_25);
                        }
#line 1165 "unneeded_code.m"
                        {
#line 1165 "unneeded_code.m"
                          transform_hlds__unneeded_code__ParentBranchPoint_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1165 "unneeded_code.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__ParentBranchPoint_26, 0) = ((MR_Box) (transform_hlds__unneeded_code__ParentBranchGoalId_21));
#line 1165 "unneeded_code.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__ParentBranchPoint_26, 1) = ((MR_Box) (transform_hlds__unneeded_code__ParentBranchAlt_23));
#line 1165 "unneeded_code.m"
                        }
#line 1167 "unneeded_code.m"
                        {
#line 1167 "unneeded_code.m"
                          transform_hlds__unneeded_code__ParentAlts_27 = mercury__set__make_singleton_set_1_f_0(transform_hlds__unneeded_code__TypeCtorInfo_34_34, ((MR_Box) (transform_hlds__unneeded_code__ParentBranchNum_24)));
                        }
#line 1169 "unneeded_code.m"
                        {
#line 1169 "unneeded_code.m"
                          transform_hlds__unneeded_code__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "unneeded_code.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_29_29, 0) = ((MR_Box) (transform_hlds__unneeded_code__ParentBranchPoint_26));
#line 1169 "unneeded_code.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_29_29, 1) = ((MR_Box) (transform_hlds__unneeded_code__ParentAlts_27));
#line 1169 "unneeded_code.m"
                        }
#line 1168 "unneeded_code.m"
                        {
#line 1168 "unneeded_code.m"
                          transform_hlds__unneeded_code__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "unneeded_code.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_28_28, 0) = ((MR_Box) (transform_hlds__unneeded_code__V_29_29));
#line 1168 "unneeded_code.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_28_28, 1) = ((MR_Box) (transform_hlds__unneeded_code__Rest_12));
#line 1168 "unneeded_code.m"
                        }
#line 1168 "unneeded_code.m"
                        /* direct tailcall eliminated */
#line 1168 "unneeded_code.m"
                        {
#line 1168 "unneeded_code.m"
                          MR_Word transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3 = transform_hlds__unneeded_code__V_28_28;
#line 1168 "unneeded_code.m"
                          MR_Word transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4 = transform_hlds__unneeded_code__Branches1_25;

#line 1168 "unneeded_code.m"
                          transform_hlds__unneeded_code__HeadVar__4_4 = transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4;
#line 1168 "unneeded_code.m"
                          transform_hlds__unneeded_code__HeadVar__3_3 = transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3;
#line 1168 "unneeded_code.m"
                        }
#line 1168 "unneeded_code.m"
                        continue;
#line 1164 "unneeded_code.m"
                      }
#line 1171 "unneeded_code.m"
                    else
#line 1172 "unneeded_code.m"
                      *transform_hlds__unneeded_code__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1171 "unneeded_code.m"
                  }
#line 1174 "unneeded_code.m"
                else
#line 1175 "unneeded_code.m"
                  {
#line 1175 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Branches1_30;

#line 1175 "unneeded_code.m"
                    {
#line 1175 "unneeded_code.m"
                      mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_15)), ((MR_Box) (transform_hlds__unneeded_code__Alts_18)), transform_hlds__unneeded_code__HeadVar__4_4, &transform_hlds__unneeded_code__Branches1_30);
                    }
#line 1176 "unneeded_code.m"
                    /* direct tailcall eliminated */
#line 1176 "unneeded_code.m"
                    {
#line 1176 "unneeded_code.m"
                      MR_Word transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3 = transform_hlds__unneeded_code__Rest_12;
#line 1176 "unneeded_code.m"
                      MR_Word transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4 = transform_hlds__unneeded_code__Branches1_30;

#line 1176 "unneeded_code.m"
                      transform_hlds__unneeded_code__HeadVar__4_4 = transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4;
#line 1176 "unneeded_code.m"
                      transform_hlds__unneeded_code__HeadVar__3_3 = transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3;
#line 1176 "unneeded_code.m"
                    }
#line 1176 "unneeded_code.m"
                    continue;
#line 1175 "unneeded_code.m"
                  }
#line 1154 "unneeded_code.m"
              }
#line 1179 "unneeded_code.m"
            else
#line 1180 "unneeded_code.m"
              {
#line 1180 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__Branches1_31;

#line 1180 "unneeded_code.m"
                {
#line 1180 "unneeded_code.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_15)), ((MR_Box) (transform_hlds__unneeded_code__NewAlts_16)), transform_hlds__unneeded_code__HeadVar__4_4, &transform_hlds__unneeded_code__Branches1_31);
                }
#line 1181 "unneeded_code.m"
                /* direct tailcall eliminated */
#line 1181 "unneeded_code.m"
                {
#line 1181 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3 = transform_hlds__unneeded_code__Rest_12;
#line 1181 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4 = transform_hlds__unneeded_code__Branches1_31;

#line 1181 "unneeded_code.m"
                  transform_hlds__unneeded_code__HeadVar__4_4 = transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4;
#line 1181 "unneeded_code.m"
                  transform_hlds__unneeded_code__HeadVar__3_3 = transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3;
#line 1181 "unneeded_code.m"
                }
#line 1181 "unneeded_code.m"
                continue;
#line 1180 "unneeded_code.m"
              }
#line 1151 "unneeded_code.m"
          }
#line 1148 "unneeded_code.m"
      }
#line 1148 "unneeded_code.m"
      break;
#line 1148 "unneeded_code.m"
    }
#line 1144 "unneeded_code.m"
}

#line 1073 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_ite_9_p_0(
#line 1073 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Cond0_10,
#line 1073 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Cond_11,
#line 1073 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Then0_12,
#line 1073 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Then_13,
#line 1073 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Else0_14,
#line 1073 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Else_15,
#line 1073 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_22,
#line 1073 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23,
#line 1073 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_17)
#line 1073 "unneeded_code.m"
{
#line 1078 "unneeded_code.m"
  {
#line 1078 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 1078 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Then1_18;
#line 1078 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Else1_19;
#line 1078 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_24_24;
#line 1078 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_25_25;
#line 1078 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26;
#line 1078 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30;
#line 1086 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ToInsertGoalsThen_20;
#line 1086 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_27_27;
#line 1083 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv0_ToInsertGoalsThen_20;
#line 1092 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ToInsertGoalsElse_21;
#line 1092 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_32_32;
#line 1089 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_ToInsertGoalsElse_21;

#line 1079 "unneeded_code.m"
    {
#line 1079 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Cond0_10, transform_hlds__unneeded_code__Cond_11, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_22, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_24_24);
    }
#line 1080 "unneeded_code.m"
    {
#line 1080 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Then0_12, &transform_hlds__unneeded_code__Then1_18, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_24_24, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_25_25);
    }
#line 1081 "unneeded_code.m"
    {
#line 1081 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Else0_14, &transform_hlds__unneeded_code__Else1_19, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_25_25, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26);
    }
#line 1083 "unneeded_code.m"
    {
#line 1083 "unneeded_code.m"
      transform_hlds__unneeded_code__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1083 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_27_27, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_17));
#line 1083 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_27_27, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1083 "unneeded_code.m"
    }
#line 1083 "unneeded_code.m"
    {
#line 1083 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26, ((MR_Box) (transform_hlds__unneeded_code__V_27_27)), &transform_hlds__unneeded_code__conv0_ToInsertGoalsThen_20);
    }
#line 1083 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1083 "unneeded_code.m"
      {
#line 1083 "unneeded_code.m"
        transform_hlds__unneeded_code__ToInsertGoalsThen_20 = ((MR_Word) transform_hlds__unneeded_code__conv0_ToInsertGoalsThen_20);
#line 1083 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1083 "unneeded_code.m"
      }
#line 1086 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1084 "unneeded_code.m"
      {
#line 1084 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Conj_48;
#line 1084 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalInfo0_50;
#line 1084 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_51_51;
#line 1102 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_49_49;

#line 1100 "unneeded_code.m"
        {
#line 1100 "unneeded_code.m"
          transform_hlds__unneeded_code__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1100 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_51_51, 0) = ((MR_Box) (transform_hlds__unneeded_code__Then1_18));
#line 1100 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1100 "unneeded_code.m"
        }
#line 1100 "unneeded_code.m"
        {
#line 1100 "unneeded_code.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__ToInsertGoalsThen_20, transform_hlds__unneeded_code__V_51_51, &transform_hlds__unneeded_code__Conj_48);
        }
#line 1102 "unneeded_code.m"
        transform_hlds__unneeded_code__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Then1_18, (MR_Integer) 0)));
#line 1102 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Then1_18, (MR_Integer) 1)));
#line 1103 "unneeded_code.m"
        {
#line 1103 "unneeded_code.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__unneeded_code__Conj_48, transform_hlds__unneeded_code__GoalInfo0_50, transform_hlds__unneeded_code__Then_13);
        }
#line 1085 "unneeded_code.m"
        {
#line 1085 "unneeded_code.m"
          mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__V_27_27)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30);
        }
#line 1084 "unneeded_code.m"
      }
#line 1086 "unneeded_code.m"
    else
#line 1087 "unneeded_code.m"
      {
#line 1087 "unneeded_code.m"
        *transform_hlds__unneeded_code__Then_13 = transform_hlds__unneeded_code__Then1_18;
#line 1087 "unneeded_code.m"
        transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26;
#line 1087 "unneeded_code.m"
      }
#line 1089 "unneeded_code.m"
    {
#line 1089 "unneeded_code.m"
      transform_hlds__unneeded_code__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_32_32, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_17));
#line 1089 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_32_32, 1) = ((MR_Box) ((MR_Integer) 2));
#line 1089 "unneeded_code.m"
    }
#line 1089 "unneeded_code.m"
    {
#line 1089 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30, ((MR_Box) (transform_hlds__unneeded_code__V_32_32)), &transform_hlds__unneeded_code__conv1_ToInsertGoalsElse_21);
    }
#line 1089 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1089 "unneeded_code.m"
      {
#line 1089 "unneeded_code.m"
        transform_hlds__unneeded_code__ToInsertGoalsElse_21 = ((MR_Word) transform_hlds__unneeded_code__conv1_ToInsertGoalsElse_21);
#line 1089 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1089 "unneeded_code.m"
      }
#line 1092 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1090 "unneeded_code.m"
      {
#line 1090 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Conj_57;
#line 1090 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalInfo0_59;
#line 1090 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_60_60;
#line 1102 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_58_58;

#line 1100 "unneeded_code.m"
        {
#line 1100 "unneeded_code.m"
          transform_hlds__unneeded_code__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1100 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_60_60, 0) = ((MR_Box) (transform_hlds__unneeded_code__Else1_19));
#line 1100 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1100 "unneeded_code.m"
        }
#line 1100 "unneeded_code.m"
        {
#line 1100 "unneeded_code.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__ToInsertGoalsElse_21, transform_hlds__unneeded_code__V_60_60, &transform_hlds__unneeded_code__Conj_57);
        }
#line 1102 "unneeded_code.m"
        transform_hlds__unneeded_code__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Else1_19, (MR_Integer) 0)));
#line 1102 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalInfo0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Else1_19, (MR_Integer) 1)));
#line 1103 "unneeded_code.m"
        {
#line 1103 "unneeded_code.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__unneeded_code__Conj_57, transform_hlds__unneeded_code__GoalInfo0_59, transform_hlds__unneeded_code__Else_15);
        }
#line 1091 "unneeded_code.m"
        {
#line 1091 "unneeded_code.m"
          mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__V_32_32)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23);
#line 1091 "unneeded_code.m"
          return;
        }
#line 1090 "unneeded_code.m"
      }
#line 1092 "unneeded_code.m"
    else
#line 1093 "unneeded_code.m"
      {
#line 1093 "unneeded_code.m"
        *transform_hlds__unneeded_code__Else_15 = transform_hlds__unneeded_code__Else1_19;
#line 1093 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30;
#line 1093 "unneeded_code.m"
      }
#line 1078 "unneeded_code.m"
  }
#line 1073 "unneeded_code.m"
}

#line 1056 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(
#line 1056 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1056 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1056 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1056 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4,
#line 1056 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_5,
#line 1056 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_6)
#line 1056 "unneeded_code.m"
{
#line 1060 "unneeded_code.m"
  {
#line 1060 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 1060 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "unneeded_code.m"
      {
#line 1060 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1060 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3;
#line 1060 "unneeded_code.m"
      }
#line 1060 "unneeded_code.m"
    else
#line 1062 "unneeded_code.m"
      {
#line 1062 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 1062 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 1062 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_14;
#line 1062 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals_15;
#line 1062 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal1_19;
#line 1062 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23;
#line 1062 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26;
#line 1062 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_28_28;
#line 1067 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ToInsertGoals_20;
#line 1067 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_24_24;
#line 1064 "unneeded_code.m"
        MR_Box transform_hlds__unneeded_code__conv0_ToInsertGoals_20;

#line 1063 "unneeded_code.m"
        {
#line 1063 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Goal0_12, &transform_hlds__unneeded_code__Goal1_19, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23);
        }
#line 1064 "unneeded_code.m"
        {
#line 1064 "unneeded_code.m"
          transform_hlds__unneeded_code__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1064 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_24_24, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_5));
#line 1064 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_24_24, 1) = ((MR_Box) (transform_hlds__unneeded_code__BranchNum_6));
#line 1064 "unneeded_code.m"
        }
#line 1064 "unneeded_code.m"
        {
#line 1064 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23, ((MR_Box) (transform_hlds__unneeded_code__V_24_24)), &transform_hlds__unneeded_code__conv0_ToInsertGoals_20);
        }
#line 1064 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1064 "unneeded_code.m"
          {
#line 1064 "unneeded_code.m"
            transform_hlds__unneeded_code__ToInsertGoals_20 = ((MR_Word) transform_hlds__unneeded_code__conv0_ToInsertGoals_20);
#line 1064 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1064 "unneeded_code.m"
          }
#line 1067 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1065 "unneeded_code.m"
          {
#line 1065 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Conj_37;
#line 1065 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalInfo0_39;
#line 1065 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_40_40;
#line 1102 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_38_38;

#line 1100 "unneeded_code.m"
            {
#line 1100 "unneeded_code.m"
              transform_hlds__unneeded_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1100 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_40_40, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal1_19));
#line 1100 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1100 "unneeded_code.m"
            }
#line 1100 "unneeded_code.m"
            {
#line 1100 "unneeded_code.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__ToInsertGoals_20, transform_hlds__unneeded_code__V_40_40, &transform_hlds__unneeded_code__Conj_37);
            }
#line 1102 "unneeded_code.m"
            transform_hlds__unneeded_code__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_19, (MR_Integer) 0)));
#line 1102 "unneeded_code.m"
            transform_hlds__unneeded_code__GoalInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_19, (MR_Integer) 1)));
#line 1103 "unneeded_code.m"
            {
#line 1103 "unneeded_code.m"
              hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__unneeded_code__Conj_37, transform_hlds__unneeded_code__GoalInfo0_39, &transform_hlds__unneeded_code__Goal_14);
            }
#line 1066 "unneeded_code.m"
            {
#line 1066 "unneeded_code.m"
              mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__V_24_24)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26);
            }
#line 1065 "unneeded_code.m"
          }
#line 1067 "unneeded_code.m"
        else
#line 1068 "unneeded_code.m"
          {
#line 1068 "unneeded_code.m"
            transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal1_19;
#line 1068 "unneeded_code.m"
            transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23;
#line 1068 "unneeded_code.m"
          }
#line 1070 "unneeded_code.m"
        transform_hlds__unneeded_code__V_28_28 = (transform_hlds__unneeded_code__BranchNum_6 + (MR_Integer) 1);
#line 1070 "unneeded_code.m"
        {
#line 1070 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(transform_hlds__unneeded_code__Goals0_13, &transform_hlds__unneeded_code__Goals_15, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4, transform_hlds__unneeded_code__GoalId_5, transform_hlds__unneeded_code__V_28_28);
        }
#line 1062 "unneeded_code.m"
        {
#line 1062 "unneeded_code.m"
          MR_Word base;
#line 1062 "unneeded_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__2_2 = base;
#line 1062 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_14));
#line 1062 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Goals_15));
#line 1062 "unneeded_code.m"
        }
#line 1062 "unneeded_code.m"
      }
#line 1060 "unneeded_code.m"
  }
#line 1056 "unneeded_code.m"
}

#line 1037 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(
#line 1037 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1037 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1037 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1037 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4,
#line 1037 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_5,
#line 1037 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_6)
#line 1037 "unneeded_code.m"
{
#line 1041 "unneeded_code.m"
  {
#line 1041 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 1041 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1041 "unneeded_code.m"
      {
#line 1041 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1041 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3;
#line 1041 "unneeded_code.m"
      }
#line 1041 "unneeded_code.m"
    else
#line 1043 "unneeded_code.m"
      {
#line 1043 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Case0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 1043 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 1043 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Case_14;
#line 1043 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Cases_15;
#line 1043 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_12, (MR_Integer) 0)));
#line 1043 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_12, (MR_Integer) 1)));
#line 1043 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_12, (MR_Integer) 2)));
#line 1043 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal1_22;
#line 1043 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_24;
#line 1043 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27;
#line 1043 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30;
#line 1043 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_32_32;
#line 1049 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ToInsertGoals_23;
#line 1049 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_28_28;
#line 1046 "unneeded_code.m"
        MR_Box transform_hlds__unneeded_code__conv0_ToInsertGoals_23;

#line 1045 "unneeded_code.m"
        {
#line 1045 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Goal0_21, &transform_hlds__unneeded_code__Goal1_22, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27);
        }
#line 1046 "unneeded_code.m"
        {
#line 1046 "unneeded_code.m"
          transform_hlds__unneeded_code__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_28_28, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_5));
#line 1046 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_28_28, 1) = ((MR_Box) (transform_hlds__unneeded_code__BranchNum_6));
#line 1046 "unneeded_code.m"
        }
#line 1046 "unneeded_code.m"
        {
#line 1046 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27, ((MR_Box) (transform_hlds__unneeded_code__V_28_28)), &transform_hlds__unneeded_code__conv0_ToInsertGoals_23);
        }
#line 1046 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1046 "unneeded_code.m"
          {
#line 1046 "unneeded_code.m"
            transform_hlds__unneeded_code__ToInsertGoals_23 = ((MR_Word) transform_hlds__unneeded_code__conv0_ToInsertGoals_23);
#line 1046 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1046 "unneeded_code.m"
          }
#line 1049 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1047 "unneeded_code.m"
          {
#line 1047 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Conj_41;
#line 1047 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalInfo0_43;
#line 1047 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_44_44;
#line 1102 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_42_42;

#line 1100 "unneeded_code.m"
            {
#line 1100 "unneeded_code.m"
              transform_hlds__unneeded_code__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1100 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_44_44, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal1_22));
#line 1100 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1100 "unneeded_code.m"
            }
#line 1100 "unneeded_code.m"
            {
#line 1100 "unneeded_code.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__ToInsertGoals_23, transform_hlds__unneeded_code__V_44_44, &transform_hlds__unneeded_code__Conj_41);
            }
#line 1102 "unneeded_code.m"
            transform_hlds__unneeded_code__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_22, (MR_Integer) 0)));
#line 1102 "unneeded_code.m"
            transform_hlds__unneeded_code__GoalInfo0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_22, (MR_Integer) 1)));
#line 1103 "unneeded_code.m"
            {
#line 1103 "unneeded_code.m"
              hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__unneeded_code__Conj_41, transform_hlds__unneeded_code__GoalInfo0_43, &transform_hlds__unneeded_code__Goal_24);
            }
#line 1048 "unneeded_code.m"
            {
#line 1048 "unneeded_code.m"
              mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__V_28_28)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30);
            }
#line 1047 "unneeded_code.m"
          }
#line 1049 "unneeded_code.m"
        else
#line 1050 "unneeded_code.m"
          {
#line 1050 "unneeded_code.m"
            transform_hlds__unneeded_code__Goal_24 = transform_hlds__unneeded_code__Goal1_22;
#line 1050 "unneeded_code.m"
            transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27;
#line 1050 "unneeded_code.m"
          }
#line 1052 "unneeded_code.m"
        {
#line 1052 "unneeded_code.m"
          transform_hlds__unneeded_code__Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_14, 0) = ((MR_Box) (transform_hlds__unneeded_code__MainConsId_19));
#line 1052 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_14, 1) = ((MR_Box) (transform_hlds__unneeded_code__OtherConsIds_20));
#line 1052 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_14, 2) = ((MR_Box) (transform_hlds__unneeded_code__Goal_24));
#line 1052 "unneeded_code.m"
        }
#line 1053 "unneeded_code.m"
        transform_hlds__unneeded_code__V_32_32 = (transform_hlds__unneeded_code__BranchNum_6 + (MR_Integer) 1);
#line 1053 "unneeded_code.m"
        {
#line 1053 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(transform_hlds__unneeded_code__Cases0_13, &transform_hlds__unneeded_code__Cases_15, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4, transform_hlds__unneeded_code__GoalId_5, transform_hlds__unneeded_code__V_32_32);
        }
#line 1043 "unneeded_code.m"
        {
#line 1043 "unneeded_code.m"
          MR_Word base;
#line 1043 "unneeded_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__2_2 = base;
#line 1043 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Case_14));
#line 1043 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Cases_15));
#line 1043 "unneeded_code.m"
        }
#line 1043 "unneeded_code.m"
      }
#line 1041 "unneeded_code.m"
  }
#line 1037 "unneeded_code.m"
}

#line 1024 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(
#line 1024 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1024 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1024 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1024 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4)
#line 1024 "unneeded_code.m"
{
#line 1027 "unneeded_code.m"
  {
#line 1027 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 1027 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1027 "unneeded_code.m"
      {
#line 1027 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1027 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3;
#line 1027 "unneeded_code.m"
      }
#line 1027 "unneeded_code.m"
    else
#line 1028 "unneeded_code.m"
      {
#line 1028 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 1028 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__HeadGoal_12;
#line 1028 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TailGoals_13;
#line 1028 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_18_18;
#line 1033 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__HeadGoals_14;
#line 1031 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_20_20;
#line 1031 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_21_21;
#line 1031 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_15_15;

#line 1029 "unneeded_code.m"
        {
#line 1029 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Goal0_8, &transform_hlds__unneeded_code__HeadGoal_12, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_18_18);
        }
#line 1030 "unneeded_code.m"
        {
#line 1030 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(transform_hlds__unneeded_code__Goals0_9, &transform_hlds__unneeded_code__TailGoals_13, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_18_18, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4);
        }
#line 1031 "unneeded_code.m"
        transform_hlds__unneeded_code__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadGoal_12, (MR_Integer) 0)));
#line 1031 "unneeded_code.m"
        transform_hlds__unneeded_code__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadGoal_12, (MR_Integer) 1)));
#line 1031 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = ((((MR_tag((MR_Word) transform_hlds__unneeded_code__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1031 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1031 "unneeded_code.m"
          {
#line 1031 "unneeded_code.m"
            transform_hlds__unneeded_code__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__V_20_20, (MR_Integer) 1)));
#line 1031 "unneeded_code.m"
            transform_hlds__unneeded_code__HeadGoals_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__V_20_20, (MR_Integer) 2)));
#line 1031 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_21_21 == (MR_Integer) 0);
#line 1031 "unneeded_code.m"
          }
#line 1033 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1032 "unneeded_code.m"
          {
#line 1032 "unneeded_code.m"
            {
#line 1032 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__HeadGoals_14, transform_hlds__unneeded_code__TailGoals_13);
            }
#line 1032 "unneeded_code.m"
          }
#line 1033 "unneeded_code.m"
        else
#line 1034 "unneeded_code.m"
          {
#line 1034 "unneeded_code.m"
            MR_Word base;
#line 1034 "unneeded_code.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "unneeded_code.m"
            *transform_hlds__unneeded_code__HeadVar__2_2 = base;
#line 1034 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__HeadGoal_12));
#line 1034 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__TailGoals_13));
#line 1034 "unneeded_code.m"
          }
#line 1028 "unneeded_code.m"
      }
#line 1027 "unneeded_code.m"
  }
#line 1024 "unneeded_code.m"
}

#line 962 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(
#line 962 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_5,
#line 962 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_6,
#line 962 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58,
#line 962 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59)
#line 962 "unneeded_code.m"
{
#line 965 "unneeded_code.m"
  {
#line 965 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 965 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_5, (MR_Integer) 0)));
#line 965 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_5, (MR_Integer) 1)));

#line 974 "unneeded_code.m"
    if (((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "unneeded_code.m"
      {
#line 1006 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__NegGoal0_51 = (MR_Word) MR_body(((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8), (MR_Integer) 0);
#line 1006 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__NegGoal_52;
#line 1006 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalExpr_77;

#line 1007 "unneeded_code.m"
        {
#line 1007 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__NegGoal0_51, &transform_hlds__unneeded_code__NegGoal_52, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59);
        }
#line 1008 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__unneeded_code__NegGoal_52);
#line 1009 "unneeded_code.m"
        {
#line 1009 "unneeded_code.m"
          MR_Word base;
#line 1009 "unneeded_code.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "unneeded_code.m"
          *transform_hlds__unneeded_code__Goal_6 = base;
#line 1009 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_77));
#line 1009 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 1009 "unneeded_code.m"
        }
#line 1006 "unneeded_code.m"
      }
#line 974 "unneeded_code.m"
    else
#line 974 "unneeded_code.m"
      if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 975 "unneeded_code.m"
        {
#line 975 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__ConjType_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 975 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__Conjuncts0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 2)));

#line 981 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__ConjType_33 == (MR_Integer) 1))
#line 982 "unneeded_code.m"
            {
#line 983 "unneeded_code.m"
              *transform_hlds__unneeded_code__Goal_6 = transform_hlds__unneeded_code__Goal0_5;
#line 983 "unneeded_code.m"
              *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58;
#line 982 "unneeded_code.m"
            }
#line 981 "unneeded_code.m"
          else
#line 977 "unneeded_code.m"
            {
#line 977 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Conjuncts_35;
#line 977 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_36;

#line 978 "unneeded_code.m"
              {
#line 978 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(transform_hlds__unneeded_code__Conjuncts0_34, &transform_hlds__unneeded_code__Conjuncts_35, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59);
              }
#line 979 "unneeded_code.m"
              {
#line 979 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 979 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 979 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_36, 1) = ((MR_Box) (transform_hlds__unneeded_code__ConjType_33));
#line 979 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_36, 2) = ((MR_Box) (transform_hlds__unneeded_code__Conjuncts_35));
#line 979 "unneeded_code.m"
              }
#line 980 "unneeded_code.m"
              {
#line 980 "unneeded_code.m"
                MR_Word base;
#line 980 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 980 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_6 = base;
#line 980 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_36));
#line 980 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 980 "unneeded_code.m"
              }
#line 977 "unneeded_code.m"
            }
#line 975 "unneeded_code.m"
        }
#line 974 "unneeded_code.m"
      else
#line 974 "unneeded_code.m"
        if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 992 "unneeded_code.m"
          {
#line 992 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Disjuncts0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 992 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Disjuncts_43;
#line 992 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalExpr_73;
#line 992 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalId_74;

#line 993 "unneeded_code.m"
            {
#line 993 "unneeded_code.m"
              transform_hlds__unneeded_code__GoalId_74 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_9);
            }
#line 994 "unneeded_code.m"
            {
#line 994 "unneeded_code.m"
              transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(transform_hlds__unneeded_code__Disjuncts0_42, &transform_hlds__unneeded_code__Disjuncts_43, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59, transform_hlds__unneeded_code__GoalId_74, (MR_Integer) 1);
            }
#line 996 "unneeded_code.m"
            {
#line 996 "unneeded_code.m"
              transform_hlds__unneeded_code__GoalExpr_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "unneeded_code.m"
              MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 996 "unneeded_code.m"
              MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_73, 1) = ((MR_Box) (transform_hlds__unneeded_code__Disjuncts_43));
#line 996 "unneeded_code.m"
            }
#line 997 "unneeded_code.m"
            {
#line 997 "unneeded_code.m"
              MR_Word base;
#line 997 "unneeded_code.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 997 "unneeded_code.m"
              *transform_hlds__unneeded_code__Goal_6 = base;
#line 997 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_73));
#line 997 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 997 "unneeded_code.m"
            }
#line 992 "unneeded_code.m"
          }
#line 974 "unneeded_code.m"
        else
#line 974 "unneeded_code.m"
          if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 999 "unneeded_code.m"
            {
#line 999 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Quant_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 999 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cond0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 2)));
#line 999 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Then0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 3)));
#line 999 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Else0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 4)));
#line 999 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cond_48;
#line 999 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Then_49;
#line 999 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Else_50;
#line 999 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_75;
#line 999 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalId_76;

#line 1000 "unneeded_code.m"
              {
#line 1000 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalId_76 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_9);
              }
#line 1001 "unneeded_code.m"
              {
#line 1001 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_refine_ite_9_p_0(transform_hlds__unneeded_code__Cond0_45, &transform_hlds__unneeded_code__Cond_48, transform_hlds__unneeded_code__Then0_46, &transform_hlds__unneeded_code__Then_49, transform_hlds__unneeded_code__Else0_47, &transform_hlds__unneeded_code__Else_50, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59, transform_hlds__unneeded_code__GoalId_76);
              }
#line 1003 "unneeded_code.m"
              {
#line 1003 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1003 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 1) = ((MR_Box) (transform_hlds__unneeded_code__Quant_44));
#line 1003 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 2) = ((MR_Box) (transform_hlds__unneeded_code__Cond_48));
#line 1003 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 3) = ((MR_Box) (transform_hlds__unneeded_code__Then_49));
#line 1003 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 4) = ((MR_Box) (transform_hlds__unneeded_code__Else_50));
#line 1003 "unneeded_code.m"
              }
#line 1004 "unneeded_code.m"
              {
#line 1004 "unneeded_code.m"
                MR_Word base;
#line 1004 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1004 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_6 = base;
#line 1004 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_75));
#line 1004 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 1004 "unneeded_code.m"
              }
#line 999 "unneeded_code.m"
            }
#line 974 "unneeded_code.m"
          else
#line 974 "unneeded_code.m"
            if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1011 "unneeded_code.m"
              {
#line 1011 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__Reason_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 1011 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__SomeGoal0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 2)));
#line 1012 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_63_63;
#line 1012 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_55_55;

#line 1012 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = ((((MR_tag((MR_Word) transform_hlds__unneeded_code__Reason_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_53, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1012 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 1012 "unneeded_code.m"
                  {
#line 1012 "unneeded_code.m"
                    transform_hlds__unneeded_code__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_53, (MR_Integer) 1)));
#line 1012 "unneeded_code.m"
                    transform_hlds__unneeded_code__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_53, (MR_Integer) 2)));
#line 1012 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_63_63 == (MR_Integer) 1);
#line 1012 "unneeded_code.m"
                  }
#line 1014 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 1013 "unneeded_code.m"
                  {
#line 1013 "unneeded_code.m"
                    *transform_hlds__unneeded_code__Goal_6 = transform_hlds__unneeded_code__Goal0_5;
#line 1013 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58;
#line 1013 "unneeded_code.m"
                  }
#line 1014 "unneeded_code.m"
                else
#line 1015 "unneeded_code.m"
                  {
#line 1015 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__SomeGoal_56;
#line 1015 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalExpr_78;

#line 1015 "unneeded_code.m"
                    {
#line 1015 "unneeded_code.m"
                      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__SomeGoal0_54, &transform_hlds__unneeded_code__SomeGoal_56, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59);
                    }
#line 1016 "unneeded_code.m"
                    {
#line 1016 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalExpr_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1016 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_78, 1) = ((MR_Box) (transform_hlds__unneeded_code__Reason_53));
#line 1016 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_78, 2) = ((MR_Box) (transform_hlds__unneeded_code__SomeGoal_56));
#line 1016 "unneeded_code.m"
                    }
#line 1017 "unneeded_code.m"
                    {
#line 1017 "unneeded_code.m"
                      MR_Word base;
#line 1017 "unneeded_code.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "unneeded_code.m"
                      *transform_hlds__unneeded_code__Goal_6 = base;
#line 1017 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_78));
#line 1017 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 1017 "unneeded_code.m"
                    }
#line 1015 "unneeded_code.m"
                  }
#line 1011 "unneeded_code.m"
              }
#line 974 "unneeded_code.m"
            else
#line 974 "unneeded_code.m"
              if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1020 "unneeded_code.m"
                {
#line 1021 "unneeded_code.m"
                  {
#line 1021 "unneeded_code.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unneeded_code", (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_refine_goal\'/4", (MR_String) "shorthand");
#line 1021 "unneeded_code.m"
                    return;
                  }
#line 1020 "unneeded_code.m"
                }
#line 974 "unneeded_code.m"
              else
#line 974 "unneeded_code.m"
                if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 986 "unneeded_code.m"
                  {
#line 986 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__SwitchVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 986 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__CanFail_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 2)));
#line 986 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 3)));
#line 986 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalId_40;
#line 986 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Cases_41;
#line 986 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalExpr_72;

#line 987 "unneeded_code.m"
                    {
#line 987 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalId_40 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_9);
                    }
#line 988 "unneeded_code.m"
                    {
#line 988 "unneeded_code.m"
                      transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(transform_hlds__unneeded_code__Cases0_39, &transform_hlds__unneeded_code__Cases_41, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59, transform_hlds__unneeded_code__GoalId_40, (MR_Integer) 1);
                    }
#line 989 "unneeded_code.m"
                    {
#line 989 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalExpr_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 989 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 989 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_72, 1) = ((MR_Box) (transform_hlds__unneeded_code__SwitchVar_37));
#line 989 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_72, 2) = ((MR_Box) (transform_hlds__unneeded_code__CanFail_38));
#line 989 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_72, 3) = ((MR_Box) (transform_hlds__unneeded_code__Cases_41));
#line 989 "unneeded_code.m"
                    }
#line 990 "unneeded_code.m"
                    {
#line 990 "unneeded_code.m"
                      MR_Word base;
#line 990 "unneeded_code.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 990 "unneeded_code.m"
                      *transform_hlds__unneeded_code__Goal_6 = base;
#line 990 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_72));
#line 990 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 990 "unneeded_code.m"
                    }
#line 986 "unneeded_code.m"
                  }
#line 974 "unneeded_code.m"
                else
#line 972 "unneeded_code.m"
                  {
#line 973 "unneeded_code.m"
                    *transform_hlds__unneeded_code__Goal_6 = transform_hlds__unneeded_code__Goal0_5;
#line 973 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58;
#line 972 "unneeded_code.m"
                  }
#line 965 "unneeded_code.m"
  }
#line 962 "unneeded_code.m"
}

#line 934 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__add_alt_start_7_p_0(
#line 934 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 934 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 934 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_3,
#line 934 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_4,
#line 934 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_5,
#line 934 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6,
#line 934 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7)
#line 934 "unneeded_code.m"
{
#line 938 "unneeded_code.m"
  while (MR_TRUE)
#line 938 "unneeded_code.m"
    {
#line 938 "unneeded_code.m"
      /* tailcall optimized into a loop */
#line 938 "unneeded_code.m"
      {
#line 938 "unneeded_code.m"
        MR_bool transform_hlds__unneeded_code__succeeded;

#line 938 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 938 "unneeded_code.m"
          *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6;
#line 938 "unneeded_code.m"
        else
#line 940 "unneeded_code.m"
          {
#line 940 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Var_16;
#line 940 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchWhere0_17;
#line 940 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__WhereNeededList_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 940 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchWhere_25;
#line 940 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 940 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_32_32;
#line 954 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__OldWhere_27;
#line 950 "unneeded_code.m"
            MR_Box transform_hlds__unneeded_code__conv0_OldWhere_27;

#line 939 "unneeded_code.m"
            transform_hlds__unneeded_code__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_31_31, (MR_Integer) 0)));
#line 939 "unneeded_code.m"
            transform_hlds__unneeded_code__BranchWhere0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_31_31, (MR_Integer) 1)));
#line 946 "unneeded_code.m"
            if ((transform_hlds__unneeded_code__BranchWhere0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 942 "unneeded_code.m"
              {
#line 942 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchNumSet_23;
#line 942 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchMap_24;

#line 943 "unneeded_code.m"
                {
#line 943 "unneeded_code.m"
                  transform_hlds__unneeded_code__BranchNumSet_23 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__unneeded_code__BranchNum_4)));
                }
#line 944 "unneeded_code.m"
                {
#line 944 "unneeded_code.m"
                  transform_hlds__unneeded_code__BranchMap_24 = mercury__map__singleton_2_f_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_3)), ((MR_Box) (transform_hlds__unneeded_code__BranchNumSet_23)));
                }
#line 945 "unneeded_code.m"
                {
#line 945 "unneeded_code.m"
                  transform_hlds__unneeded_code__BranchWhere_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 945 "unneeded_code.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__BranchWhere_25, 0) = ((MR_Box) (transform_hlds__unneeded_code__BranchMap_24));
#line 945 "unneeded_code.m"
                }
#line 942 "unneeded_code.m"
              }
#line 946 "unneeded_code.m"
            else
#line 948 "unneeded_code.m"
              transform_hlds__unneeded_code__BranchWhere_25 = transform_hlds__unneeded_code__BranchWhere0_17;
#line 950 "unneeded_code.m"
            {
#line 950 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6, ((MR_Box) (transform_hlds__unneeded_code__Var_16)), &transform_hlds__unneeded_code__conv0_OldWhere_27);
            }
#line 950 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 950 "unneeded_code.m"
              {
#line 950 "unneeded_code.m"
                transform_hlds__unneeded_code__OldWhere_27 = ((MR_Word) transform_hlds__unneeded_code__conv0_OldWhere_27);
#line 950 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 950 "unneeded_code.m"
              }
#line 954 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 952 "unneeded_code.m"
              {
#line 952 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__CombinedWhere_28;
#line 952 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchesA_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__BranchWhere_25, (MR_Integer) 0)));

#line 1126 "unneeded_code.m"
                if ((transform_hlds__unneeded_code__OldWhere_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1125 "unneeded_code.m"
                  transform_hlds__unneeded_code__CombinedWhere_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1126 "unneeded_code.m"
                else
#line 1127 "unneeded_code.m"
                  {
#line 1127 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchesB_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__OldWhere_27, (MR_Integer) 0)));
#line 1127 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchesList_56;

#line 1140 "unneeded_code.m"
                    {
#line 1140 "unneeded_code.m"
                      mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__BranchesA_49, &transform_hlds__unneeded_code__BranchesList_56);
                    }
#line 1141 "unneeded_code.m"
                    {
#line 1141 "unneeded_code.m"
                      transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_1, transform_hlds__unneeded_code__CurrentId_5, transform_hlds__unneeded_code__BranchesList_56, transform_hlds__unneeded_code__BranchesB_50, &transform_hlds__unneeded_code__CombinedWhere_28);
                    }
#line 1127 "unneeded_code.m"
                  }
#line 953 "unneeded_code.m"
                {
#line 953 "unneeded_code.m"
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_16)), ((MR_Box) (transform_hlds__unneeded_code__CombinedWhere_28)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_32_32);
                }
#line 952 "unneeded_code.m"
              }
#line 954 "unneeded_code.m"
            else
#line 955 "unneeded_code.m"
              {
#line 955 "unneeded_code.m"
                {
#line 955 "unneeded_code.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_16)), ((MR_Box) (transform_hlds__unneeded_code__BranchWhere_25)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_32_32);
                }
#line 955 "unneeded_code.m"
              }
#line 957 "unneeded_code.m"
            /* direct tailcall eliminated */
#line 957 "unneeded_code.m"
            {
#line 957 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__HeadVar__2__tmp_copy_2 = transform_hlds__unneeded_code__WhereNeededList_18;
#line 957 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0__tmp_copy_6 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_32_32;

#line 957 "unneeded_code.m"
              transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0__tmp_copy_6;
#line 957 "unneeded_code.m"
              transform_hlds__unneeded_code__HeadVar__2_2 = transform_hlds__unneeded_code__HeadVar__2__tmp_copy_2;
#line 957 "unneeded_code.m"
            }
#line 957 "unneeded_code.m"
            continue;
#line 940 "unneeded_code.m"
          }
#line 938 "unneeded_code.m"
      }
#line 938 "unneeded_code.m"
      break;
#line 938 "unneeded_code.m"
    }
#line 934 "unneeded_code.m"
}

#line 911 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__add_where_needed_list_5_p_0(
#line 911 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 911 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 911 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_3,
#line 911 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4,
#line 911 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5)
#line 911 "unneeded_code.m"
{
#line 915 "unneeded_code.m"
  while (MR_TRUE)
#line 915 "unneeded_code.m"
    {
#line 915 "unneeded_code.m"
      /* tailcall optimized into a loop */
#line 915 "unneeded_code.m"
      {
#line 915 "unneeded_code.m"
        MR_bool transform_hlds__unneeded_code__succeeded;

#line 915 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "unneeded_code.m"
          *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4;
#line 915 "unneeded_code.m"
        else
#line 917 "unneeded_code.m"
          {
#line 917 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Var_12;
#line 917 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchWhere_13;
#line 917 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__WhereNeededList_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 917 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 917 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_22_22;
#line 922 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__OldWhere_17;
#line 918 "unneeded_code.m"
            MR_Box transform_hlds__unneeded_code__conv0_OldWhere_17;

#line 916 "unneeded_code.m"
            transform_hlds__unneeded_code__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_21_21, (MR_Integer) 0)));
#line 916 "unneeded_code.m"
            transform_hlds__unneeded_code__BranchWhere_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_21_21, (MR_Integer) 1)));
#line 918 "unneeded_code.m"
            {
#line 918 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4, ((MR_Box) (transform_hlds__unneeded_code__Var_12)), &transform_hlds__unneeded_code__conv0_OldWhere_17);
            }
#line 918 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 918 "unneeded_code.m"
              {
#line 918 "unneeded_code.m"
                transform_hlds__unneeded_code__OldWhere_17 = ((MR_Word) transform_hlds__unneeded_code__conv0_OldWhere_17);
#line 918 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 918 "unneeded_code.m"
              }
#line 922 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 920 "unneeded_code.m"
              {
#line 920 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__CombinedWhere_18;

#line 1119 "unneeded_code.m"
                if ((transform_hlds__unneeded_code__BranchWhere_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1120 "unneeded_code.m"
                  transform_hlds__unneeded_code__CombinedWhere_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1119 "unneeded_code.m"
                else
#line 1122 "unneeded_code.m"
                  {
#line 1122 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchesA_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__BranchWhere_13, (MR_Integer) 0)));

#line 1126 "unneeded_code.m"
                    if ((transform_hlds__unneeded_code__OldWhere_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1125 "unneeded_code.m"
                      transform_hlds__unneeded_code__CombinedWhere_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1126 "unneeded_code.m"
                    else
#line 1127 "unneeded_code.m"
                      {
#line 1127 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchesB_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__OldWhere_17, (MR_Integer) 0)));
#line 1127 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchesList_43;

#line 1140 "unneeded_code.m"
                        {
#line 1140 "unneeded_code.m"
                          mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__BranchesA_36, &transform_hlds__unneeded_code__BranchesList_43);
                        }
#line 1141 "unneeded_code.m"
                        {
#line 1141 "unneeded_code.m"
                          transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_1, transform_hlds__unneeded_code__CurrentId_3, transform_hlds__unneeded_code__BranchesList_43, transform_hlds__unneeded_code__BranchesB_37, &transform_hlds__unneeded_code__CombinedWhere_18);
                        }
#line 1127 "unneeded_code.m"
                      }
#line 1122 "unneeded_code.m"
                  }
#line 921 "unneeded_code.m"
                {
#line 921 "unneeded_code.m"
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_12)), ((MR_Box) (transform_hlds__unneeded_code__CombinedWhere_18)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_22_22);
                }
#line 920 "unneeded_code.m"
              }
#line 922 "unneeded_code.m"
            else
#line 923 "unneeded_code.m"
              {
#line 923 "unneeded_code.m"
                {
#line 923 "unneeded_code.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_12)), ((MR_Box) (transform_hlds__unneeded_code__BranchWhere_13)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_22_22);
                }
#line 923 "unneeded_code.m"
              }
#line 925 "unneeded_code.m"
            /* direct tailcall eliminated */
#line 925 "unneeded_code.m"
            {
#line 925 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__HeadVar__2__tmp_copy_2 = transform_hlds__unneeded_code__WhereNeededList_14;
#line 925 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0__tmp_copy_4 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_22_22;

#line 925 "unneeded_code.m"
              transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0__tmp_copy_4;
#line 925 "unneeded_code.m"
              transform_hlds__unneeded_code__HeadVar__2_2 = transform_hlds__unneeded_code__HeadVar__2__tmp_copy_2;
#line 925 "unneeded_code.m"
            }
#line 925 "unneeded_code.m"
            continue;
#line 917 "unneeded_code.m"
          }
#line 915 "unneeded_code.m"
      }
#line 915 "unneeded_code.m"
      break;
#line 915 "unneeded_code.m"
    }
#line 911 "unneeded_code.m"
}

#line 902 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(
#line 902 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_6,
#line 902 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_7,
#line 902 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap1_8,
#line 902 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap2_9,
#line 902 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__WhereNeededMap_10)
#line 902 "unneeded_code.m"
{
#line 906 "unneeded_code.m"
  {
#line 906 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 906 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededList1_11;

#line 907 "unneeded_code.m"
    {
#line 907 "unneeded_code.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__WhereNeededMap1_8, &transform_hlds__unneeded_code__WhereNeededList1_11);
    }
#line 908 "unneeded_code.m"
    {
#line 908 "unneeded_code.m"
      transform_hlds__unneeded_code__add_where_needed_list_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_6, transform_hlds__unneeded_code__WhereNeededList1_11, transform_hlds__unneeded_code__CurrentId_7, transform_hlds__unneeded_code__WhereNeededMap2_9, transform_hlds__unneeded_code__WhereNeededMap_10);
#line 908 "unneeded_code.m"
      return;
    }
#line 906 "unneeded_code.m"
  }
#line 902 "unneeded_code.m"
}

#line 863 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_18,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Cond0_19,
#line 863 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Cond_20,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Then0_21,
#line 863 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Then_22,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Else0_23,
#line 863 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Else_24,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_25,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_26,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_27,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_28,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45,
#line 863 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_46,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_47,
#line 863 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_48,
#line 863 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_49,
#line 863 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50)
#line 863 "unneeded_code.m"
{
#line 872 "unneeded_code.m"
  {
#line 872 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeInfo_63_63;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_64_64;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__CondInfo0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Cond0_19, (MR_Integer) 1)));
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__InstMapDelta_34;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__InstMapCond_35;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMapElse_36;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMapThen_37;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_38;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNeededMap0_39;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededListElse_40;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNeededMap1_41;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededListThen_42;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNeededMap_43;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMapCond_44;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_51_51;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_52_52;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_53_53;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_54_54;
#line 872 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededList1_70;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Cond0_19, (MR_Integer) 0)));
#line 882 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_60_60;
#line 882 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_61_61;
#line 882 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_62_62;

#line 874 "unneeded_code.m"
    {
#line 874 "unneeded_code.m"
      transform_hlds__unneeded_code__InstMapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unneeded_code__CondInfo0_33);
    }
#line 875 "unneeded_code.m"
    {
#line 875 "unneeded_code.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__unneeded_code__InitInstMap_26, transform_hlds__unneeded_code__InstMapDelta_34, &transform_hlds__unneeded_code__InstMapCond_35);
    }
#line 877 "unneeded_code.m"
    {
#line 877 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_18, transform_hlds__unneeded_code__Else0_23, transform_hlds__unneeded_code__Else_24, transform_hlds__unneeded_code__InitInstMap_26, transform_hlds__unneeded_code__FinalInstMap_27, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45, &transform_hlds__unneeded_code__WhereNeededMapElse_36, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_47, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_51_51, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_49, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_52_52);
    }
#line 879 "unneeded_code.m"
    {
#line 879 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_18, transform_hlds__unneeded_code__Then0_21, transform_hlds__unneeded_code__Then_22, transform_hlds__unneeded_code__InstMapCond_35, transform_hlds__unneeded_code__FinalInstMap_27, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45, &transform_hlds__unneeded_code__WhereNeededMapThen_37, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_51_51, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_53_53, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_52_52, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_54_54);
    }
#line 882 "unneeded_code.m"
    transform_hlds__unneeded_code__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_18, (MR_Integer) 0)));
#line 882 "unneeded_code.m"
    transform_hlds__unneeded_code__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_18, (MR_Integer) 1)));
#line 882 "unneeded_code.m"
    transform_hlds__unneeded_code__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_18, (MR_Integer) 2)));
#line 882 "unneeded_code.m"
    transform_hlds__unneeded_code__ContainingGoalMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_18, (MR_Integer) 3)));
#line 6536 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeInfo_63_63 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 6538 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeCtorInfo_64_64 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;
#line 883 "unneeded_code.m"
    {
#line 883 "unneeded_code.m"
      mercury__map__init_1_p_0(transform_hlds__unneeded_code__TypeInfo_63_63, transform_hlds__unneeded_code__TypeCtorInfo_64_64, &transform_hlds__unneeded_code__BranchNeededMap0_39);
    }
#line 884 "unneeded_code.m"
    {
#line 884 "unneeded_code.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__unneeded_code__TypeInfo_63_63, transform_hlds__unneeded_code__TypeCtorInfo_64_64, transform_hlds__unneeded_code__WhereNeededMapElse_36, &transform_hlds__unneeded_code__WhereNeededListElse_40);
    }
#line 885 "unneeded_code.m"
    {
#line 885 "unneeded_code.m"
      transform_hlds__unneeded_code__add_alt_start_7_p_0(transform_hlds__unneeded_code__ContainingGoalMap_38, transform_hlds__unneeded_code__WhereNeededListElse_40, transform_hlds__unneeded_code__BranchPoint_25, (MR_Integer) 2, transform_hlds__unneeded_code__CurrentId_28, transform_hlds__unneeded_code__BranchNeededMap0_39, &transform_hlds__unneeded_code__BranchNeededMap1_41);
    }
#line 887 "unneeded_code.m"
    {
#line 887 "unneeded_code.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__unneeded_code__TypeInfo_63_63, transform_hlds__unneeded_code__TypeCtorInfo_64_64, transform_hlds__unneeded_code__WhereNeededMapThen_37, &transform_hlds__unneeded_code__WhereNeededListThen_42);
    }
#line 888 "unneeded_code.m"
    {
#line 888 "unneeded_code.m"
      transform_hlds__unneeded_code__add_alt_start_7_p_0(transform_hlds__unneeded_code__ContainingGoalMap_38, transform_hlds__unneeded_code__WhereNeededListThen_42, transform_hlds__unneeded_code__BranchPoint_25, (MR_Integer) 1, transform_hlds__unneeded_code__CurrentId_28, transform_hlds__unneeded_code__BranchNeededMap1_41, &transform_hlds__unneeded_code__BranchNeededMap_43);
    }
#line 907 "unneeded_code.m"
    {
#line 907 "unneeded_code.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45, &transform_hlds__unneeded_code__WhereNeededList1_70);
    }
#line 908 "unneeded_code.m"
    {
#line 908 "unneeded_code.m"
      transform_hlds__unneeded_code__add_where_needed_list_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_38, transform_hlds__unneeded_code__WhereNeededList1_70, transform_hlds__unneeded_code__CurrentId_28, transform_hlds__unneeded_code__BranchNeededMap_43, &transform_hlds__unneeded_code__WhereNeededMapCond_44);
    }
#line 893 "unneeded_code.m"
    {
#line 893 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_18, transform_hlds__unneeded_code__Cond0_19, transform_hlds__unneeded_code__Cond_20, transform_hlds__unneeded_code__InitInstMap_26, transform_hlds__unneeded_code__InstMapCond_35, transform_hlds__unneeded_code__WhereNeededMapCond_44, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_46, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_53_53, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_48, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_54_54, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50);
#line 893 "unneeded_code.m"
      return;
    }
#line 872 "unneeded_code.m"
  }
#line 863 "unneeded_code.m"
}

#line 837 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 837 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_4,
#line 837 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_5,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_6,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_7,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__StartWhereNeededMap_9,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_10,
#line 837 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_11,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12,
#line 837 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13,
#line 837 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_14,
#line 837 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_15)
#line 837 "unneeded_code.m"
{
#line 844 "unneeded_code.m"
  {
#line 844 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 844 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 844 "unneeded_code.m"
      {
#line 844 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 844 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_15 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_14;
#line 844 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12;
#line 844 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_11 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_10;
#line 844 "unneeded_code.m"
      }
#line 844 "unneeded_code.m"
    else
#line 848 "unneeded_code.m"
      {
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Case0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Cases0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Case_35;
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Cases_36;
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__MainConsId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_33, (MR_Integer) 0)));
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__OtherConsIds_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_33, (MR_Integer) 1)));
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_33, (MR_Integer) 2)));
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_49;
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__WhereNeededMapFirst_50;
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__WhereNeededList_51;
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ContainingGoalMap_52;
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59_59;
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_60_60;
#line 848 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_61_61;
#line 848 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_62_62;
#line 854 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_67_67;
#line 854 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_68_68;
#line 854 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_69_69;

#line 850 "unneeded_code.m"
        {
#line 850 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Goal0_48, &transform_hlds__unneeded_code__Goal_49, transform_hlds__unneeded_code__InitInstMap_6, transform_hlds__unneeded_code__FinalInstMap_7, transform_hlds__unneeded_code__StartWhereNeededMap_9, &transform_hlds__unneeded_code__WhereNeededMapFirst_50, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59_59, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_14, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_60_60);
        }
#line 852 "unneeded_code.m"
        {
#line 852 "unneeded_code.m"
          transform_hlds__unneeded_code__Case_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 852 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_35, 0) = ((MR_Box) (transform_hlds__unneeded_code__MainConsId_46));
#line 852 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_35, 1) = ((MR_Box) (transform_hlds__unneeded_code__OtherConsIds_47));
#line 852 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_35, 2) = ((MR_Box) (transform_hlds__unneeded_code__Goal_49));
#line 852 "unneeded_code.m"
        }
#line 853 "unneeded_code.m"
        {
#line 853 "unneeded_code.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__WhereNeededMapFirst_50, &transform_hlds__unneeded_code__WhereNeededList_51);
        }
#line 854 "unneeded_code.m"
        transform_hlds__unneeded_code__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 0)));
#line 854 "unneeded_code.m"
        transform_hlds__unneeded_code__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 1)));
#line 854 "unneeded_code.m"
        transform_hlds__unneeded_code__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 2)));
#line 854 "unneeded_code.m"
        transform_hlds__unneeded_code__ContainingGoalMap_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 3)));
#line 855 "unneeded_code.m"
        {
#line 855 "unneeded_code.m"
          transform_hlds__unneeded_code__add_alt_start_7_p_0(transform_hlds__unneeded_code__ContainingGoalMap_52, transform_hlds__unneeded_code__WhereNeededList_51, transform_hlds__unneeded_code__BranchPoint_4, transform_hlds__unneeded_code__BranchNum_5, transform_hlds__unneeded_code__CurrentId_8, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_10, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_61_61);
        }
#line 857 "unneeded_code.m"
        transform_hlds__unneeded_code__V_62_62 = (transform_hlds__unneeded_code__BranchNum_5 + (MR_Integer) 1);
#line 857 "unneeded_code.m"
        {
#line 857 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Cases0_34, &transform_hlds__unneeded_code__Cases_36, transform_hlds__unneeded_code__BranchPoint_4, transform_hlds__unneeded_code__V_62_62, transform_hlds__unneeded_code__InitInstMap_6, transform_hlds__unneeded_code__FinalInstMap_7, transform_hlds__unneeded_code__CurrentId_8, transform_hlds__unneeded_code__StartWhereNeededMap_9, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_61_61, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_11, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59_59, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_60_60, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_15);
        }
#line 848 "unneeded_code.m"
        {
#line 848 "unneeded_code.m"
          MR_Word base;
#line 848 "unneeded_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__3_3 = base;
#line 848 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Case_35));
#line 848 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Cases_36));
#line 848 "unneeded_code.m"
        }
#line 848 "unneeded_code.m"
      }
#line 844 "unneeded_code.m"
  }
#line 837 "unneeded_code.m"
}

#line 814 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 814 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_4,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_5,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_6,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__StartWhereNeededMap_7,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_8,
#line 814 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_9,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_10,
#line 814 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_11,
#line 814 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_12,
#line 814 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_13)
#line 814 "unneeded_code.m"
{
#line 820 "unneeded_code.m"
  {
#line 820 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 820 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 820 "unneeded_code.m"
      {
#line 820 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_13 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_12;
#line 820 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_11 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_10;
#line 820 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_9 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_8;
#line 820 "unneeded_code.m"
      }
#line 820 "unneeded_code.m"
    else
#line 824 "unneeded_code.m"
      {
#line 824 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 824 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 824 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_31;
#line 824 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals_32;
#line 824 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__WhereNeededMapFirst_40;
#line 824 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__WhereNeededList_41;
#line 824 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ContainingGoalMap_42;
#line 824 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_49_49;
#line 824 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50_50;
#line 824 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_51_51;
#line 828 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_55_55;
#line 828 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_56_56;
#line 828 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_57_57;

#line 825 "unneeded_code.m"
        {
#line 825 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Goal0_29, &transform_hlds__unneeded_code__Goal_31, transform_hlds__unneeded_code__InitInstMap_4, transform_hlds__unneeded_code__FinalInstMap_5, transform_hlds__unneeded_code__StartWhereNeededMap_7, &transform_hlds__unneeded_code__WhereNeededMapFirst_40, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_10, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_49_49, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_12, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50_50);
        }
#line 827 "unneeded_code.m"
        {
#line 827 "unneeded_code.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__WhereNeededMapFirst_40, &transform_hlds__unneeded_code__WhereNeededList_41);
        }
#line 828 "unneeded_code.m"
        transform_hlds__unneeded_code__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 0)));
#line 828 "unneeded_code.m"
        transform_hlds__unneeded_code__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 1)));
#line 828 "unneeded_code.m"
        transform_hlds__unneeded_code__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 2)));
#line 828 "unneeded_code.m"
        transform_hlds__unneeded_code__ContainingGoalMap_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 3)));
#line 829 "unneeded_code.m"
        {
#line 829 "unneeded_code.m"
          transform_hlds__unneeded_code__add_where_needed_list_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_42, transform_hlds__unneeded_code__WhereNeededList_41, transform_hlds__unneeded_code__CurrentId_6, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_8, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_51_51);
        }
#line 831 "unneeded_code.m"
        {
#line 831 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Goals0_30, &transform_hlds__unneeded_code__Goals_32, transform_hlds__unneeded_code__InitInstMap_4, transform_hlds__unneeded_code__FinalInstMap_5, transform_hlds__unneeded_code__CurrentId_6, transform_hlds__unneeded_code__StartWhereNeededMap_7, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_51_51, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_9, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_49_49, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_11, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50_50, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_13);
        }
#line 824 "unneeded_code.m"
        {
#line 824 "unneeded_code.m"
          MR_Word base;
#line 824 "unneeded_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__3_3 = base;
#line 824 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_31));
#line 824 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Goals_32));
#line 824 "unneeded_code.m"
        }
#line 824 "unneeded_code.m"
      }
#line 820 "unneeded_code.m"
  }
#line 814 "unneeded_code.m"
}

#line 791 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(
#line 791 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 791 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 791 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 791 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4,
#line 791 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5,
#line 791 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_6,
#line 791 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_7,
#line 791 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_8,
#line 791 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_9)
#line 791 "unneeded_code.m"
{
#line 796 "unneeded_code.m"
  {
#line 796 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 796 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 796 "unneeded_code.m"
      {
#line 796 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 796 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_9 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_8;
#line 796 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_7 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_6;
#line 796 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4;
#line 796 "unneeded_code.m"
      }
#line 796 "unneeded_code.m"
    else
#line 800 "unneeded_code.m"
      {
#line 800 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__BracketedGoal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 800 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__BracketedGoals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 800 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_21, (MR_Integer) 0)));
#line 800 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__InitInstMap_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_21, (MR_Integer) 1)));
#line 800 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__FinalInstMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_21, (MR_Integer) 2)));
#line 800 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal1_30;
#line 800 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals1_31;
#line 800 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_39_39;
#line 800 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_40_40;
#line 800 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_41_41;
#line 806 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_45_45;
#line 806 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_46_46;
#line 806 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_32_32;

#line 802 "unneeded_code.m"
        {
#line 802 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Goal0_27, &transform_hlds__unneeded_code__Goal1_30, transform_hlds__unneeded_code__InitInstMap_28, transform_hlds__unneeded_code__FinalInstMap_29, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_39_39, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_6, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_40_40, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_8, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_41_41);
        }
#line 804 "unneeded_code.m"
        {
#line 804 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__BracketedGoals_22, &transform_hlds__unneeded_code__Goals1_31, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_39_39, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_40_40, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_7, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_41_41, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_9);
        }
#line 806 "unneeded_code.m"
        transform_hlds__unneeded_code__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_30, (MR_Integer) 0)));
#line 806 "unneeded_code.m"
        transform_hlds__unneeded_code__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_30, (MR_Integer) 1)));
#line 806 "unneeded_code.m"
        {
#line 806 "unneeded_code.m"
          transform_hlds__unneeded_code__V_46_46 = hlds__hlds_goal__true_goal_expr_0_f_0();
        }
#line 806 "unneeded_code.m"
        {
#line 806 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(transform_hlds__unneeded_code__V_45_45, transform_hlds__unneeded_code__V_46_46);
        }
#line 808 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 807 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__3_3 = transform_hlds__unneeded_code__Goals1_31;
#line 808 "unneeded_code.m"
        else
#line 809 "unneeded_code.m"
          {
#line 809 "unneeded_code.m"
            MR_Word base;
#line 809 "unneeded_code.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "unneeded_code.m"
            *transform_hlds__unneeded_code__HeadVar__3_3 = base;
#line 809 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal1_30));
#line 809 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Goals1_31));
#line 809 "unneeded_code.m"
          }
#line 800 "unneeded_code.m"
      }
#line 796 "unneeded_code.m"
  }
#line 791 "unneeded_code.m"
}

#line 775 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(
#line 775 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 775 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_2,
#line 775 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3)
#line 775 "unneeded_code.m"
{
#line 778 "unneeded_code.m"
  {
#line 778 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 778 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "unneeded_code.m"
      *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 778 "unneeded_code.m"
    else
#line 779 "unneeded_code.m"
      {
#line 779 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 779 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));

#line 780 "unneeded_code.m"
        {
#line 780 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(transform_hlds__unneeded_code__InitInstMap_2);
        }
#line 782 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 781 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 782 "unneeded_code.m"
        else
#line 783 "unneeded_code.m"
          {
#line 783 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_5, (MR_Integer) 1)));
#line 783 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__InstMapDelta_11;
#line 783 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__FinalInstMap_12;
#line 783 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BracketedTail_13;
#line 783 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BracketedGoal_14;
#line 783 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_5, (MR_Integer) 0)));

#line 784 "unneeded_code.m"
            {
#line 784 "unneeded_code.m"
              transform_hlds__unneeded_code__InstMapDelta_11 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unneeded_code__GoalInfo_10);
            }
#line 785 "unneeded_code.m"
            {
#line 785 "unneeded_code.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__unneeded_code__InitInstMap_2, transform_hlds__unneeded_code__InstMapDelta_11, &transform_hlds__unneeded_code__FinalInstMap_12);
            }
#line 786 "unneeded_code.m"
            {
#line 786 "unneeded_code.m"
              transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(transform_hlds__unneeded_code__Goals_6, transform_hlds__unneeded_code__FinalInstMap_12, &transform_hlds__unneeded_code__BracketedTail_13);
            }
#line 787 "unneeded_code.m"
            {
#line 787 "unneeded_code.m"
              transform_hlds__unneeded_code__BracketedGoal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 787 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_14, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_5));
#line 787 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_14, 1) = ((MR_Box) (transform_hlds__unneeded_code__InitInstMap_2));
#line 787 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_14, 2) = ((MR_Box) (transform_hlds__unneeded_code__FinalInstMap_12));
#line 787 "unneeded_code.m"
            }
#line 788 "unneeded_code.m"
            {
#line 788 "unneeded_code.m"
              MR_Word base;
#line 788 "unneeded_code.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__3_3 = base;
#line 788 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__BracketedGoal_14));
#line 788 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__BracketedTail_13));
#line 788 "unneeded_code.m"
            }
#line 783 "unneeded_code.m"
          }
#line 779 "unneeded_code.m"
      }
#line 778 "unneeded_code.m"
  }
#line 775 "unneeded_code.m"
}

#line 701 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_3(
#line 701 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 701 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 701 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 701 "unneeded_code.m"
{
#line 701 "unneeded_code.m"
  {
#line 701 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 701 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv3_HeadVar__2_2;

#line 701 "unneeded_code.m"
    {
#line 701 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv3_HeadVar__2_2);
    }
#line 701 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv3_HeadVar__2_2));
#line 701 "unneeded_code.m"
  }
#line 701 "unneeded_code.m"
}

#line 727 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2(
#line 727 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 727 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 727 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 727 "unneeded_code.m"
{
#line 727 "unneeded_code.m"
  {
#line 727 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 727 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv1_HeadVar__2_2;

#line 727 "unneeded_code.m"
    {
#line 727 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv1_HeadVar__2_2);
    }
#line 727 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv1_HeadVar__2_2));
#line 727 "unneeded_code.m"
  }
#line 727 "unneeded_code.m"
}

#line 716 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1(
#line 716 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 716 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 716 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 716 "unneeded_code.m"
{
#line 716 "unneeded_code.m"
  {
#line 716 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 716 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__2_2;

#line 716 "unneeded_code.m"
    {
#line 716 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv0_HeadVar__2_2);
    }
#line 716 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__2_2));
#line 716 "unneeded_code.m"
  }
#line 716 "unneeded_code.m"
}

#line 650 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_13,
#line 650 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_14,
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_16,
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88,
#line 650 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89,
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90,
#line 650 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91,
#line 650 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92,
#line 650 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93)
#line 650 "unneeded_code.m"
{
#line 656 "unneeded_code.m"
  {
#line 656 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 656 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalExpr0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 0)));
#line 656 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 1)));

#line 667 "unneeded_code.m"
    if (((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 0))))
#line 734 "unneeded_code.m"
      {
#line 734 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__NegGoal0_81 = (MR_Word) MR_body(((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20), (MR_Integer) 0);
#line 734 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__NegGoal_82;
#line 734 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalExpr_142;

#line 735 "unneeded_code.m"
        {
#line 735 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__NegGoal0_81, &transform_hlds__unneeded_code__NegGoal_82, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
        }
#line 738 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalExpr_142 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__unneeded_code__NegGoal_82);
#line 739 "unneeded_code.m"
        {
#line 739 "unneeded_code.m"
          MR_Word base;
#line 739 "unneeded_code.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 739 "unneeded_code.m"
          *transform_hlds__unneeded_code__Goal_14 = base;
#line 739 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_142));
#line 739 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 739 "unneeded_code.m"
        }
#line 734 "unneeded_code.m"
      }
#line 667 "unneeded_code.m"
    else
#line 667 "unneeded_code.m"
      if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 668 "unneeded_code.m"
        {
#line 668 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__ConjType_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 668 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__Conjuncts0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 2)));

#line 676 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__ConjType_45 == (MR_Integer) 1))
#line 677 "unneeded_code.m"
            {
#line 678 "unneeded_code.m"
              *transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal0_13;
#line 679 "unneeded_code.m"
              {
#line 679 "unneeded_code.m"
                transform_hlds__unneeded_code__demand_inputs_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, *transform_hlds__unneeded_code__Goal_14, transform_hlds__unneeded_code__InitInstMap_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89);
              }
#line 679 "unneeded_code.m"
              *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90;
#line 679 "unneeded_code.m"
              *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92;
#line 677 "unneeded_code.m"
            }
#line 676 "unneeded_code.m"
          else
#line 670 "unneeded_code.m"
            {
#line 670 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Conjuncts_47;
#line 670 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_48;

#line 671 "unneeded_code.m"
              {
#line 671 "unneeded_code.m"
                transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_53_93_95_48_11_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Conjuncts0_46, &transform_hlds__unneeded_code__Conjuncts_47, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
              }
#line 674 "unneeded_code.m"
              {
#line 674 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 674 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 674 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_48, 1) = ((MR_Box) ((MR_Integer) 0));
#line 674 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_48, 2) = ((MR_Box) (transform_hlds__unneeded_code__Conjuncts_47));
#line 674 "unneeded_code.m"
              }
#line 675 "unneeded_code.m"
              {
#line 675 "unneeded_code.m"
                MR_Word base;
#line 675 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 675 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_14 = base;
#line 675 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_48));
#line 675 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 675 "unneeded_code.m"
              }
#line 670 "unneeded_code.m"
            }
#line 668 "unneeded_code.m"
        }
#line 667 "unneeded_code.m"
      else
#line 667 "unneeded_code.m"
        if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 714 "unneeded_code.m"
          {
#line 714 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__TypeCtorInfo_157_157;
#line 714 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Disjuncts0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 714 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Disjuncts_73;
#line 714 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_111_111;
#line 714 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalExpr_137;
#line 714 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalId_138;

#line 715 "unneeded_code.m"
            {
#line 715 "unneeded_code.m"
              transform_hlds__unneeded_code__GoalId_138 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_21);
            }
#line 7360 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__TypeCtorInfo_157_157 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;
#line 716 "unneeded_code.m"
            {
#line 716 "unneeded_code.m"
              mercury__map__map_values_only_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_157_157, transform_hlds__unneeded_code__TypeCtorInfo_157_157, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[11], transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_111_111);
            }
#line 717 "unneeded_code.m"
            {
#line 717 "unneeded_code.m"
              transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Disjuncts0_72, &transform_hlds__unneeded_code__Disjuncts_73, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__GoalId_138, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_111_111, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_111_111, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
            }
#line 721 "unneeded_code.m"
            {
#line 721 "unneeded_code.m"
              transform_hlds__unneeded_code__GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "unneeded_code.m"
              MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 721 "unneeded_code.m"
              MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_137, 1) = ((MR_Box) (transform_hlds__unneeded_code__Disjuncts_73));
#line 721 "unneeded_code.m"
            }
#line 722 "unneeded_code.m"
            {
#line 722 "unneeded_code.m"
              MR_Word base;
#line 722 "unneeded_code.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "unneeded_code.m"
              *transform_hlds__unneeded_code__Goal_14 = base;
#line 722 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_137));
#line 722 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 722 "unneeded_code.m"
            }
#line 714 "unneeded_code.m"
          }
#line 667 "unneeded_code.m"
        else
#line 667 "unneeded_code.m"
          if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 724 "unneeded_code.m"
            {
#line 724 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__TypeCtorInfo_161_161;
#line 724 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Quant_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 724 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cond0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 2)));
#line 724 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Then0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 3)));
#line 724 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Else0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 4)));
#line 724 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cond_78;
#line 724 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Then_79;
#line 724 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Else_80;
#line 724 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_106_106;
#line 724 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_139;
#line 724 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalId_140;
#line 724 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__BranchPoint_141;

#line 725 "unneeded_code.m"
              {
#line 725 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalId_140 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_21);
              }
#line 726 "unneeded_code.m"
              {
#line 726 "unneeded_code.m"
                transform_hlds__unneeded_code__BranchPoint_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 726 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_141, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_140));
#line 726 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "unneeded_code.m"
              }
#line 7444 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__TypeCtorInfo_161_161 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;
#line 727 "unneeded_code.m"
              {
#line 727 "unneeded_code.m"
                mercury__map__map_values_only_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_161_161, transform_hlds__unneeded_code__TypeCtorInfo_161_161, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[12], transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_106_106);
              }
#line 728 "unneeded_code.m"
              {
#line 728 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Cond0_75, &transform_hlds__unneeded_code__Cond_78, transform_hlds__unneeded_code__Then0_76, &transform_hlds__unneeded_code__Then_79, transform_hlds__unneeded_code__Else0_77, &transform_hlds__unneeded_code__Else_80, transform_hlds__unneeded_code__BranchPoint_141, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__GoalId_140, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_106_106, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
              }
#line 731 "unneeded_code.m"
              {
#line 731 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 731 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 731 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 1) = ((MR_Box) (transform_hlds__unneeded_code__Quant_74));
#line 731 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 2) = ((MR_Box) (transform_hlds__unneeded_code__Cond_78));
#line 731 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 3) = ((MR_Box) (transform_hlds__unneeded_code__Then_79));
#line 731 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 4) = ((MR_Box) (transform_hlds__unneeded_code__Else_80));
#line 731 "unneeded_code.m"
              }
#line 732 "unneeded_code.m"
              {
#line 732 "unneeded_code.m"
                MR_Word base;
#line 732 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 732 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_14 = base;
#line 732 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_139));
#line 732 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 732 "unneeded_code.m"
              }
#line 724 "unneeded_code.m"
            }
#line 667 "unneeded_code.m"
          else
#line 667 "unneeded_code.m"
            if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 741 "unneeded_code.m"
              {
#line 741 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__Reason_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 741 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__SomeGoal0_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 2)));
#line 742 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_97_97;
#line 742 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_85_85;

#line 742 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = ((((MR_tag((MR_Word) transform_hlds__unneeded_code__Reason_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_83, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 742 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 742 "unneeded_code.m"
                  {
#line 742 "unneeded_code.m"
                    transform_hlds__unneeded_code__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_83, (MR_Integer) 1)));
#line 742 "unneeded_code.m"
                    transform_hlds__unneeded_code__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_83, (MR_Integer) 2)));
#line 742 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_97_97 == (MR_Integer) 1);
#line 742 "unneeded_code.m"
                  }
#line 744 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 743 "unneeded_code.m"
                  {
#line 743 "unneeded_code.m"
                    *transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal0_13;
#line 743 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92;
#line 743 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90;
#line 743 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88;
#line 743 "unneeded_code.m"
                  }
#line 744 "unneeded_code.m"
                else
#line 747 "unneeded_code.m"
                  {
#line 747 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__SomeGoal_86;
#line 747 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalExpr_143;

#line 745 "unneeded_code.m"
                    {
#line 745 "unneeded_code.m"
                      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__SomeGoal0_84, &transform_hlds__unneeded_code__SomeGoal_86, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
                    }
#line 748 "unneeded_code.m"
                    {
#line 748 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalExpr_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 748 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 748 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_143, 1) = ((MR_Box) (transform_hlds__unneeded_code__Reason_83));
#line 748 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_143, 2) = ((MR_Box) (transform_hlds__unneeded_code__SomeGoal_86));
#line 748 "unneeded_code.m"
                    }
#line 749 "unneeded_code.m"
                    {
#line 749 "unneeded_code.m"
                      MR_Word base;
#line 749 "unneeded_code.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 749 "unneeded_code.m"
                      *transform_hlds__unneeded_code__Goal_14 = base;
#line 749 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_143));
#line 749 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 749 "unneeded_code.m"
                    }
#line 747 "unneeded_code.m"
                  }
#line 741 "unneeded_code.m"
              }
#line 667 "unneeded_code.m"
            else
#line 667 "unneeded_code.m"
              if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 752 "unneeded_code.m"
                {
#line 754 "unneeded_code.m"
                  {
#line 754 "unneeded_code.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unneeded_code", (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_goal_internal\'/11", (MR_String) "shorthand");
#line 754 "unneeded_code.m"
                    return;
                  }
#line 752 "unneeded_code.m"
                }
#line 667 "unneeded_code.m"
              else
#line 667 "unneeded_code.m"
                if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 683 "unneeded_code.m"
                  {
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_153_153;
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__TypeInfo_154_154;
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__SwitchVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__CanFail_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 2)));
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Cases0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 3)));
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 3)));
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__MaybeNumAlt_66;
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalId_67;
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchPoint_68;
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchNeededMap0_69;
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Cases_70;
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchNeededMap_71;
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_119_119;
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_121_121;
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_125_125;
#line 683 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalExpr_136;
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 0)));
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 1)));
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 2)));
#line 696 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__MaybeNumAltPrime_65;
#line 686 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_149_149;
#line 686 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_150_150;
#line 686 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__FirstCase0_53;
#line 686 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__FirstCaseGoal0_57;
#line 686 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__FirstCaseGoalInfo0_59;
#line 686 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__FirstCaseGoalId0_60;
#line 686 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalContaining0_61;
#line 686 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__FirstCaseLastStep_63;
#line 686 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_54_54;
#line 687 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_55_55;
#line 687 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_56_56;
#line 688 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_58_58;
#line 690 "unneeded_code.m"
                    MR_Box transform_hlds__unneeded_code__conv2_GoalContaining0_61;
#line 691 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code___ContainingGoalId_62;
#line 693 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__V_64_64;

#line 686 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__Cases0_51)) == (MR_mktag((MR_Integer) 1)));
#line 686 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 686 "unneeded_code.m"
                      {
#line 686 "unneeded_code.m"
                        transform_hlds__unneeded_code__FirstCase0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Cases0_51, (MR_Integer) 0)));
#line 686 "unneeded_code.m"
                        transform_hlds__unneeded_code__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Cases0_51, (MR_Integer) 1)));
#line 687 "unneeded_code.m"
                        transform_hlds__unneeded_code__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCase0_53, (MR_Integer) 0)));
#line 687 "unneeded_code.m"
                        transform_hlds__unneeded_code__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCase0_53, (MR_Integer) 1)));
#line 687 "unneeded_code.m"
                        transform_hlds__unneeded_code__FirstCaseGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCase0_53, (MR_Integer) 2)));
#line 688 "unneeded_code.m"
                        transform_hlds__unneeded_code__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCaseGoal0_57, (MR_Integer) 0)));
#line 688 "unneeded_code.m"
                        transform_hlds__unneeded_code__FirstCaseGoalInfo0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCaseGoal0_57, (MR_Integer) 1)));
#line 689 "unneeded_code.m"
                        {
#line 689 "unneeded_code.m"
                          transform_hlds__unneeded_code__FirstCaseGoalId0_60 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__FirstCaseGoalInfo0_59);
                        }
#line 7692 "transform_hlds.unneeded_code.c"
                        transform_hlds__unneeded_code__TypeCtorInfo_149_149 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 7694 "transform_hlds.unneeded_code.c"
                        transform_hlds__unneeded_code__TypeCtorInfo_150_150 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0;
#line 690 "unneeded_code.m"
                        {
#line 690 "unneeded_code.m"
                          mercury__map__lookup_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_149_149, transform_hlds__unneeded_code__TypeCtorInfo_150_150, transform_hlds__unneeded_code__ContainingGoalMap_52, ((MR_Box) (transform_hlds__unneeded_code__FirstCaseGoalId0_60)), &transform_hlds__unneeded_code__conv2_GoalContaining0_61);
                        }
#line 690 "unneeded_code.m"
                        transform_hlds__unneeded_code__GoalContaining0_61 = ((MR_Word) transform_hlds__unneeded_code__conv2_GoalContaining0_61);
#line 691 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalContaining0_61)) == (MR_mktag((MR_Integer) 1)));
#line 691 "unneeded_code.m"
                        if (transform_hlds__unneeded_code__succeeded)
#line 691 "unneeded_code.m"
                          {
#line 691 "unneeded_code.m"
                            transform_hlds__unneeded_code___ContainingGoalId_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__GoalContaining0_61, (MR_Integer) 0)));
#line 691 "unneeded_code.m"
                            transform_hlds__unneeded_code__FirstCaseLastStep_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__GoalContaining0_61, (MR_Integer) 1)));
#line 693 "unneeded_code.m"
                            transform_hlds__unneeded_code__succeeded = ((((MR_tag((MR_Word) transform_hlds__unneeded_code__FirstCaseLastStep_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__FirstCaseLastStep_63, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 693 "unneeded_code.m"
                            if (transform_hlds__unneeded_code__succeeded)
#line 693 "unneeded_code.m"
                              {
#line 693 "unneeded_code.m"
                                transform_hlds__unneeded_code__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__FirstCaseLastStep_63, (MR_Integer) 1)));
#line 693 "unneeded_code.m"
                                transform_hlds__unneeded_code__MaybeNumAltPrime_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__FirstCaseLastStep_63, (MR_Integer) 2)));
#line 693 "unneeded_code.m"
                              }
#line 691 "unneeded_code.m"
                          }
#line 686 "unneeded_code.m"
                      }
#line 696 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 695 "unneeded_code.m"
                      transform_hlds__unneeded_code__MaybeNumAlt_66 = transform_hlds__unneeded_code__MaybeNumAltPrime_65;
#line 696 "unneeded_code.m"
                    else
#line 697 "unneeded_code.m"
                      {
#line 697 "unneeded_code.m"
                        {
#line 697 "unneeded_code.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unneeded_code", (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_goal_internal\'/11", (MR_String) "switch count");
#line 697 "unneeded_code.m"
                          return;
                        }
#line 697 "unneeded_code.m"
                      }
#line 699 "unneeded_code.m"
                    {
#line 699 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalId_67 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_21);
                    }
#line 700 "unneeded_code.m"
                    {
#line 700 "unneeded_code.m"
                      transform_hlds__unneeded_code__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 700 "unneeded_code.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_119_119, 0) = ((MR_Box) (transform_hlds__unneeded_code__MaybeNumAlt_66));
#line 700 "unneeded_code.m"
                    }
#line 700 "unneeded_code.m"
                    {
#line 700 "unneeded_code.m"
                      transform_hlds__unneeded_code__BranchPoint_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 700 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_68, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_67));
#line 700 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_68, 1) = ((MR_Box) (transform_hlds__unneeded_code__V_119_119));
#line 700 "unneeded_code.m"
                    }
#line 7769 "transform_hlds.unneeded_code.c"
                    transform_hlds__unneeded_code__TypeCtorInfo_153_153 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;
#line 7771 "transform_hlds.unneeded_code.c"
                    transform_hlds__unneeded_code__TypeInfo_154_154 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 701 "unneeded_code.m"
                    {
#line 701 "unneeded_code.m"
                      mercury__map__map_values_only_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_153_153, transform_hlds__unneeded_code__TypeCtorInfo_153_153, transform_hlds__unneeded_code__TypeInfo_154_154, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[13], transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_121_121);
                    }
#line 702 "unneeded_code.m"
                    {
#line 702 "unneeded_code.m"
                      mercury__map__init_1_p_0(transform_hlds__unneeded_code__TypeInfo_154_154, transform_hlds__unneeded_code__TypeCtorInfo_153_153, &transform_hlds__unneeded_code__BranchNeededMap0_69);
                    }
#line 703 "unneeded_code.m"
                    {
#line 703 "unneeded_code.m"
                      transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Cases0_51, &transform_hlds__unneeded_code__Cases_70, transform_hlds__unneeded_code__BranchPoint_68, (MR_Integer) 1, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__GoalId_67, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_121_121, transform_hlds__unneeded_code__BranchNeededMap0_69, &transform_hlds__unneeded_code__BranchNeededMap_71, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
                    }
#line 707 "unneeded_code.m"
                    {
#line 707 "unneeded_code.m"
                      transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_52, transform_hlds__unneeded_code__GoalId_67, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_121_121, transform_hlds__unneeded_code__BranchNeededMap_71, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_125_125);
                    }
#line 709 "unneeded_code.m"
                    {
#line 709 "unneeded_code.m"
                      transform_hlds__unneeded_code__demand_var_6_p_0(transform_hlds__unneeded_code__ContainingGoalMap_52, transform_hlds__unneeded_code__GoalId_67, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unneeded_code__SwitchVar_49, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_125_125, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89);
                    }
#line 711 "unneeded_code.m"
                    {
#line 711 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 711 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 711 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_136, 1) = ((MR_Box) (transform_hlds__unneeded_code__SwitchVar_49));
#line 711 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_136, 2) = ((MR_Box) (transform_hlds__unneeded_code__CanFail_50));
#line 711 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_136, 3) = ((MR_Box) (transform_hlds__unneeded_code__Cases_70));
#line 711 "unneeded_code.m"
                    }
#line 712 "unneeded_code.m"
                    {
#line 712 "unneeded_code.m"
                      MR_Word base;
#line 712 "unneeded_code.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 712 "unneeded_code.m"
                      *transform_hlds__unneeded_code__Goal_14 = base;
#line 712 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_136));
#line 712 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 712 "unneeded_code.m"
                    }
#line 683 "unneeded_code.m"
                  }
#line 667 "unneeded_code.m"
                else
#line 663 "unneeded_code.m"
                  {
#line 664 "unneeded_code.m"
                    *transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal0_13;
#line 665 "unneeded_code.m"
                    {
#line 665 "unneeded_code.m"
                      transform_hlds__unneeded_code__demand_inputs_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, *transform_hlds__unneeded_code__Goal_14, transform_hlds__unneeded_code__InitInstMap_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89);
                    }
#line 665 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90;
#line 665 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92;
#line 663 "unneeded_code.m"
                  }
#line 656 "unneeded_code.m"
  }
#line 650 "unneeded_code.m"
}

#line 644 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(
#line 644 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code___WhereNeeded0_3,
#line 644 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2)
#line 644 "unneeded_code.m"
{
#line 646 "unneeded_code.m"
  {
#line 646 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 646 "unneeded_code.m"
    {
#line 646 "unneeded_code.m"
      transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_109_97_110_100_95_118_97_114_95_101_118_101_114_121_119_104_101_114_101_95_95_91_49_93_95_48_2_p_0(transform_hlds__unneeded_code__HeadVar__2_2);
#line 646 "unneeded_code.m"
      return;
    }
#line 646 "unneeded_code.m"
  }
#line 644 "unneeded_code.m"
}

#line 636 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__undemand_var_3_p_0(
#line 636 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_4,
#line 636 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6,
#line 636 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7)
#line 636 "unneeded_code.m"
{
#line 640 "unneeded_code.m"
  {
#line 640 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 640 "unneeded_code.m"
    {
#line 640 "unneeded_code.m"
      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_4)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7);
#line 640 "unneeded_code.m"
      return;
    }
#line 640 "unneeded_code.m"
  }
#line 636 "unneeded_code.m"
}

#line 623 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_var_6_p_0(
#line 623 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 623 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 623 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeeded_9,
#line 623 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_10,
#line 623 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14,
#line 623 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_15)
#line 623 "unneeded_code.m"
{
#line 632 "unneeded_code.m"
  {
#line 632 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 632 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Where0_12;
#line 628 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv0_Where0_12;

#line 628 "unneeded_code.m"
    {
#line 628 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14, ((MR_Box) (transform_hlds__unneeded_code__Var_10)), &transform_hlds__unneeded_code__conv0_Where0_12);
    }
#line 628 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 628 "unneeded_code.m"
      {
#line 628 "unneeded_code.m"
        transform_hlds__unneeded_code__Where0_12 = ((MR_Word) transform_hlds__unneeded_code__conv0_Where0_12);
#line 628 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 628 "unneeded_code.m"
      }
#line 632 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 630 "unneeded_code.m"
      {
#line 630 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Where_13;

#line 1119 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__WhereNeeded_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1120 "unneeded_code.m"
          transform_hlds__unneeded_code__Where_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1119 "unneeded_code.m"
        else
#line 1122 "unneeded_code.m"
          {
#line 1122 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchesA_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__WhereNeeded_9, (MR_Integer) 0)));

#line 1126 "unneeded_code.m"
            if ((transform_hlds__unneeded_code__Where0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1125 "unneeded_code.m"
              transform_hlds__unneeded_code__Where_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1126 "unneeded_code.m"
            else
#line 1127 "unneeded_code.m"
              {
#line 1127 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchesB_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Where0_12, (MR_Integer) 0)));
#line 1127 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchesList_36;

#line 1140 "unneeded_code.m"
                {
#line 1140 "unneeded_code.m"
                  mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__BranchesA_29, &transform_hlds__unneeded_code__BranchesList_36);
                }
#line 1141 "unneeded_code.m"
                {
#line 1141 "unneeded_code.m"
                  transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_7, transform_hlds__unneeded_code__CurrentId_8, transform_hlds__unneeded_code__BranchesList_36, transform_hlds__unneeded_code__BranchesB_30, &transform_hlds__unneeded_code__Where_13);
                }
#line 1127 "unneeded_code.m"
              }
#line 1122 "unneeded_code.m"
          }
#line 631 "unneeded_code.m"
        {
#line 631 "unneeded_code.m"
          mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_10)), ((MR_Box) (transform_hlds__unneeded_code__Where_13)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_15);
#line 631 "unneeded_code.m"
          return;
        }
#line 630 "unneeded_code.m"
      }
#line 632 "unneeded_code.m"
    else
#line 633 "unneeded_code.m"
      {
#line 633 "unneeded_code.m"
        {
#line 633 "unneeded_code.m"
          mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_10)), ((MR_Box) (transform_hlds__unneeded_code__WhereNeeded_9)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_15);
#line 633 "unneeded_code.m"
          return;
        }
#line 633 "unneeded_code.m"
      }
#line 632 "unneeded_code.m"
  }
#line 623 "unneeded_code.m"
}

#line 614 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(
#line 614 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_4,
#line 614 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_5,
#line 614 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_6)
#line 614 "unneeded_code.m"
{
#line 617 "unneeded_code.m"
  {
#line 617 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 617 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Inst_7;

#line 618 "unneeded_code.m"
    {
#line 618 "unneeded_code.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__unneeded_code__InstMap_5, transform_hlds__unneeded_code__Var_6, &transform_hlds__unneeded_code__Inst_7);
    }
#line 619 "unneeded_code.m"
    {
#line 619 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__unneeded_code__ModuleInfo_4, transform_hlds__unneeded_code__Inst_7);
    }
#line 619 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 617 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 617 "unneeded_code.m"
  }
#line 614 "unneeded_code.m"
}

#line 612 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0_2(
#line 612 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 612 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 612 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 612 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 612 "unneeded_code.m"
{
#line 612 "unneeded_code.m"
  {
#line 612 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 612 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereNeededMap_7;

#line 612 "unneeded_code.m"
    {
#line 612 "unneeded_code.m"
      transform_hlds__unneeded_code__undemand_var_3_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereNeededMap_7);
    }
#line 612 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereNeededMap_7));
#line 612 "unneeded_code.m"
  }
#line 612 "unneeded_code.m"
}

#line 610 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0_1(
#line 610 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 610 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1)
#line 610 "unneeded_code.m"
{
#line 610 "unneeded_code.m"
  {
#line 610 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 610 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;

#line 610 "unneeded_code.m"
    {
#line 610 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1));
    }
#line 610 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 610 "unneeded_code.m"
  }
#line 610 "unneeded_code.m"
}

#line 603 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0(
#line 603 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_6,
#line 603 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_7,
#line 603 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_8,
#line 603 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_15,
#line 603 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_16)
#line 603 "unneeded_code.m"
{
#line 606 "unneeded_code.m"
  {
#line 606 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 606 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeInfo_22_22;
#line 606 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_6, (MR_Integer) 1)));
#line 606 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NonLocalSet_12;
#line 606 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NonLocals_13;
#line 606 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VirginOutputs_14;
#line 606 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_17_17;
#line 607 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_6, (MR_Integer) 0)));
#line 612 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereNeededMap_16;

#line 608 "unneeded_code.m"
    {
#line 608 "unneeded_code.m"
      transform_hlds__unneeded_code__NonLocalSet_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__unneeded_code__GoalInfo_11);
    }
#line 609 "unneeded_code.m"
    {
#line 609 "unneeded_code.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unneeded_code__NonLocalSet_12, &transform_hlds__unneeded_code__NonLocals_13);
    }
#line 610 "unneeded_code.m"
    {
#line 610 "unneeded_code.m"
      transform_hlds__unneeded_code__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 610 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_17_17, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[2]));
#line 610 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_17_17, 1) = ((MR_Box) (transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0_1));
#line 610 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 610 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_17_17, 3) = ((MR_Box) (transform_hlds__unneeded_code__ModuleInfo_7));
#line 610 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_17_17, 4) = ((MR_Box) (transform_hlds__unneeded_code__InstMap_8));
#line 610 "unneeded_code.m"
    }
#line 8176 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeInfo_22_22 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 610 "unneeded_code.m"
    {
#line 610 "unneeded_code.m"
      mercury__list__filter_3_p_0(transform_hlds__unneeded_code__TypeInfo_22_22, transform_hlds__unneeded_code__V_17_17, transform_hlds__unneeded_code__NonLocals_13, &transform_hlds__unneeded_code__VirginOutputs_14);
    }
#line 612 "unneeded_code.m"
    {
#line 612 "unneeded_code.m"
      mercury__list__foldl_4_p_0(transform_hlds__unneeded_code__TypeInfo_22_22, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[10], transform_hlds__unneeded_code__VirginOutputs_14, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_15)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereNeededMap_16);
    }
#line 612 "unneeded_code.m"
    *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_16 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereNeededMap_16);
#line 606 "unneeded_code.m"
  }
#line 603 "unneeded_code.m"
}

#line 594 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(
#line 594 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_4,
#line 594 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_5,
#line 594 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_6)
#line 594 "unneeded_code.m"
{
#line 597 "unneeded_code.m"
  {
#line 597 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 597 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Inst_7;

#line 598 "unneeded_code.m"
    {
#line 598 "unneeded_code.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__unneeded_code__InstMap_5, transform_hlds__unneeded_code__Var_6, &transform_hlds__unneeded_code__Inst_7);
    }
#line 599 "unneeded_code.m"
    {
#line 599 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__unneeded_code__ModuleInfo_4, transform_hlds__unneeded_code__Inst_7);
    }
#line 597 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 597 "unneeded_code.m"
  }
#line 594 "unneeded_code.m"
}

#line 591 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_2(
#line 591 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 591 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 591 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 591 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 591 "unneeded_code.m"
{
#line 591 "unneeded_code.m"
  {
#line 591 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 591 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereNeededMap_15;

#line 591 "unneeded_code.m"
    {
#line 591 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereNeededMap_15);
    }
#line 591 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereNeededMap_15));
#line 591 "unneeded_code.m"
  }
#line 591 "unneeded_code.m"
}

#line 588 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_1(
#line 588 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 588 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1)
#line 588 "unneeded_code.m"
{
#line 588 "unneeded_code.m"
  {
#line 588 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 588 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;

#line 588 "unneeded_code.m"
    {
#line 588 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1));
    }
#line 588 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 588 "unneeded_code.m"
  }
#line 588 "unneeded_code.m"
}

#line 579 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0(
#line 579 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_7,
#line 579 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_8,
#line 579 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_9,
#line 579 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeeded_10,
#line 579 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_20,
#line 579 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_21)
#line 579 "unneeded_code.m"
{
#line 582 "unneeded_code.m"
  {
#line 582 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 582 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeInfo_33_33;
#line 582 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 1)));
#line 582 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NonLocalSet_14;
#line 582 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalId_15;
#line 582 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NonLocals_16;
#line 582 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ModuleInfo_17;
#line 582 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Inputs_18;
#line 582 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_19;
#line 582 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_22_22;
#line 582 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_23_23;
#line 583 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 0)));
#line 587 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_25_25;
#line 587 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_26_26;
#line 587 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_27_27;
#line 590 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_28_28;
#line 590 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_29_29;
#line 590 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_30_30;
#line 591 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereNeededMap_21;

#line 584 "unneeded_code.m"
    {
#line 584 "unneeded_code.m"
      transform_hlds__unneeded_code__NonLocalSet_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__unneeded_code__GoalInfo_13);
    }
#line 585 "unneeded_code.m"
    {
#line 585 "unneeded_code.m"
      transform_hlds__unneeded_code__GoalId_15 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo_13);
    }
#line 586 "unneeded_code.m"
    {
#line 586 "unneeded_code.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unneeded_code__NonLocalSet_14, &transform_hlds__unneeded_code__NonLocals_16);
    }
#line 587 "unneeded_code.m"
    transform_hlds__unneeded_code__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 587 "unneeded_code.m"
    transform_hlds__unneeded_code__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 587 "unneeded_code.m"
    transform_hlds__unneeded_code__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 587 "unneeded_code.m"
    transform_hlds__unneeded_code__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 588 "unneeded_code.m"
    {
#line 588 "unneeded_code.m"
      transform_hlds__unneeded_code__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 588 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[2]));
#line 588 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 1) = ((MR_Box) (transform_hlds__unneeded_code__demand_inputs_6_p_0_1));
#line 588 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 588 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 3) = ((MR_Box) (transform_hlds__unneeded_code__ModuleInfo_17));
#line 588 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 4) = ((MR_Box) (transform_hlds__unneeded_code__InitInstMap_9));
#line 588 "unneeded_code.m"
    }
#line 8387 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeInfo_33_33 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 588 "unneeded_code.m"
    {
#line 588 "unneeded_code.m"
      mercury__list__filter_3_p_0(transform_hlds__unneeded_code__TypeInfo_33_33, transform_hlds__unneeded_code__V_22_22, transform_hlds__unneeded_code__NonLocals_16, &transform_hlds__unneeded_code__Inputs_18);
    }
#line 590 "unneeded_code.m"
    transform_hlds__unneeded_code__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 590 "unneeded_code.m"
    transform_hlds__unneeded_code__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 590 "unneeded_code.m"
    transform_hlds__unneeded_code__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 590 "unneeded_code.m"
    transform_hlds__unneeded_code__ContainingGoalMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 591 "unneeded_code.m"
    {
#line 591 "unneeded_code.m"
      transform_hlds__unneeded_code__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 591 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_8[1]));
#line 591 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 1) = ((MR_Box) (transform_hlds__unneeded_code__demand_inputs_6_p_0_2));
#line 591 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 591 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 3) = ((MR_Box) (transform_hlds__unneeded_code__ContainingGoalMap_19));
#line 591 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 4) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_15));
#line 591 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 5) = ((MR_Box) (transform_hlds__unneeded_code__WhereNeeded_10));
#line 591 "unneeded_code.m"
    }
#line 591 "unneeded_code.m"
    {
#line 591 "unneeded_code.m"
      mercury__list__foldl_4_p_0(transform_hlds__unneeded_code__TypeInfo_33_33, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], transform_hlds__unneeded_code__V_23_23, transform_hlds__unneeded_code__Inputs_18, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_20)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereNeededMap_21);
    }
#line 591 "unneeded_code.m"
    *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_21 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereNeededMap_21);
#line 582 "unneeded_code.m"
  }
#line 579 "unneeded_code.m"
}

#line 493 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__collect_where_needed_6_p_0(
#line 493 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 493 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 493 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap_9,
#line 493 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ChangedVar_10,
#line 493 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13,
#line 493 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14)
#line 493 "unneeded_code.m"
{
#line 502 "unneeded_code.m"
  {
#line 502 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 502 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Where_12;
#line 499 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv0_Where_12;

#line 499 "unneeded_code.m"
    {
#line 499 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__WhereNeededMap_9, ((MR_Box) (transform_hlds__unneeded_code__ChangedVar_10)), &transform_hlds__unneeded_code__conv0_Where_12);
    }
#line 499 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 499 "unneeded_code.m"
      {
#line 499 "unneeded_code.m"
        transform_hlds__unneeded_code__Where_12 = ((MR_Word) transform_hlds__unneeded_code__conv0_Where_12);
#line 499 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 499 "unneeded_code.m"
      }
#line 502 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1119 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__Where_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1120 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1119 "unneeded_code.m"
      else
#line 1122 "unneeded_code.m"
        {
#line 1122 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__BranchesA_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Where_12, (MR_Integer) 0)));

#line 1126 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1125 "unneeded_code.m"
            *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1126 "unneeded_code.m"
          else
#line 1127 "unneeded_code.m"
            {
#line 1127 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__BranchesB_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13, (MR_Integer) 0)));
#line 1127 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__BranchesList_30;

#line 1140 "unneeded_code.m"
              {
#line 1140 "unneeded_code.m"
                mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__BranchesA_23, &transform_hlds__unneeded_code__BranchesList_30);
              }
#line 1141 "unneeded_code.m"
              {
#line 1141 "unneeded_code.m"
                transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_7, transform_hlds__unneeded_code__CurrentId_8, transform_hlds__unneeded_code__BranchesList_30, transform_hlds__unneeded_code__BranchesB_24, transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14);
#line 1141 "unneeded_code.m"
                return;
              }
#line 1127 "unneeded_code.m"
            }
#line 1122 "unneeded_code.m"
        }
#line 502 "unneeded_code.m"
    else
#line 500 "unneeded_code.m"
      *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13;
#line 502 "unneeded_code.m"
  }
#line 493 "unneeded_code.m"
}

#line 548 "unneeded_code.m"
static MR_Box MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3(
#line 548 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 548 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 548 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 548 "unneeded_code.m"
{
#line 548 "unneeded_code.m"
  {
#line 548 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__wrapper_arg_3;
#line 548 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 548 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__conv3_HeadVar__3_3;

#line 548 "unneeded_code.m"
    {
#line 548 "unneeded_code.m"
      transform_hlds__unneeded_code__conv3_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Integer) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 548 "unneeded_code.m"
    transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv3_HeadVar__3_3));
#line 548 "unneeded_code.m"
    return transform_hlds__unneeded_code__wrapper_arg_3;
#line 548 "unneeded_code.m"
  }
#line 548 "unneeded_code.m"
}

#line 547 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2(
#line 547 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 547 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 547 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 547 "unneeded_code.m"
{
#line 547 "unneeded_code.m"
  {
#line 547 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 547 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__conv2_HeadVar__2_41;

#line 547 "unneeded_code.m"
    {
#line 547 "unneeded_code.m"
      transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__547__1_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv2_HeadVar__2_41);
    }
#line 547 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv2_HeadVar__2_41));
#line 547 "unneeded_code.m"
  }
#line 547 "unneeded_code.m"
}

#line 487 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1(
#line 487 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 487 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 487 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 487 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 487 "unneeded_code.m"
{
#line 487 "unneeded_code.m"
  {
#line 487 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 487 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereInfo_14;

#line 487 "unneeded_code.m"
    {
#line 487 "unneeded_code.m"
      transform_hlds__unneeded_code__collect_where_needed_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereInfo_14);
    }
#line 487 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereInfo_14));
#line 487 "unneeded_code.m"
  }
#line 487 "unneeded_code.m"
}

#line 471 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(
#line 471 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_7,
#line 471 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_8,
#line 471 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_9,
#line 471 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_10,
#line 471 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap_11,
#line 471 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_23)
#line 471 "unneeded_code.m"
{
#line 476 "unneeded_code.m"
  {
#line 476 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 476 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 476 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 476 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ChangedVarSet_15;
#line 476 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ChangedVars_16;
#line 476 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Empty_17;
#line 476 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo_19;
#line 476 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__CurrentId_20;
#line 476 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_21;
#line 476 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Options_22;
#line 476 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_24_24;
#line 476 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_25_25;
#line 476 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26;
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 484 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_18_18;
#line 486 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_34_34;
#line 486 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_35_35;
#line 486 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_36_36;
#line 487 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereInfo_26_26;
#line 490 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_37_37;
#line 490 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_38_38;
#line 490 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_39_39;
#line 516 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalExpr_53;
#line 516 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo_54;

#line 479 "unneeded_code.m"
    {
#line 479 "unneeded_code.m"
      hlds__instmap__instmap_changed_vars_5_p_0(transform_hlds__unneeded_code__InitInstMap_9, transform_hlds__unneeded_code__FinalInstMap_10, transform_hlds__unneeded_code__VarTypes_14, transform_hlds__unneeded_code__ModuleInfo_13, &transform_hlds__unneeded_code__ChangedVarSet_15);
    }
#line 481 "unneeded_code.m"
    {
#line 481 "unneeded_code.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unneeded_code__ChangedVarSet_15, &transform_hlds__unneeded_code__ChangedVars_16);
    }
#line 482 "unneeded_code.m"
    {
#line 482 "unneeded_code.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], &transform_hlds__unneeded_code__Empty_17);
    }
#line 483 "unneeded_code.m"
    {
#line 483 "unneeded_code.m"
      transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "unneeded_code.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_24_24, 0) = ((MR_Box) (transform_hlds__unneeded_code__Empty_17));
#line 483 "unneeded_code.m"
    }
#line 484 "unneeded_code.m"
    transform_hlds__unneeded_code__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 0)));
#line 484 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 1)));
#line 485 "unneeded_code.m"
    {
#line 485 "unneeded_code.m"
      transform_hlds__unneeded_code__CurrentId_20 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo_19);
    }
#line 486 "unneeded_code.m"
    transform_hlds__unneeded_code__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 486 "unneeded_code.m"
    transform_hlds__unneeded_code__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 486 "unneeded_code.m"
    transform_hlds__unneeded_code__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 486 "unneeded_code.m"
    transform_hlds__unneeded_code__ContainingGoalMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 487 "unneeded_code.m"
    {
#line 487 "unneeded_code.m"
      transform_hlds__unneeded_code__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 487 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_8[0]));
#line 487 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 1) = ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1));
#line 487 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 487 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 3) = ((MR_Box) (transform_hlds__unneeded_code__ContainingGoalMap_21));
#line 487 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 4) = ((MR_Box) (transform_hlds__unneeded_code__CurrentId_20));
#line 487 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 5) = ((MR_Box) (transform_hlds__unneeded_code__WhereNeededMap_11));
#line 487 "unneeded_code.m"
    }
#line 487 "unneeded_code.m"
    {
#line 487 "unneeded_code.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__V_25_25, transform_hlds__unneeded_code__ChangedVars_16, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_24_24)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereInfo_26_26);
    }
#line 487 "unneeded_code.m"
    transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereInfo_26_26);
#line 490 "unneeded_code.m"
    transform_hlds__unneeded_code__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 490 "unneeded_code.m"
    transform_hlds__unneeded_code__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 490 "unneeded_code.m"
    transform_hlds__unneeded_code__Options_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 490 "unneeded_code.m"
    transform_hlds__unneeded_code__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 516 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalExpr_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 0)));
#line 516 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 1)));
#line 521 "unneeded_code.m"
    {
#line 521 "unneeded_code.m"
      MR_Word transform_hlds__unneeded_code__Detism_55;

#line 521 "unneeded_code.m"
      {
#line 521 "unneeded_code.m"
        transform_hlds__unneeded_code__Detism_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__unneeded_code__GoalInfo_54);
      }
#line 568 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 4))
#line 575 "unneeded_code.m"
        {
#line 522 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 1);
#line 575 "unneeded_code.m"
        }
#line 568 "unneeded_code.m"
      else
#line 568 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 5))
#line 574 "unneeded_code.m"
          {
#line 522 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 574 "unneeded_code.m"
          }
#line 568 "unneeded_code.m"
        else
#line 568 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 0))
#line 568 "unneeded_code.m"
            {
#line 522 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 1);
#line 568 "unneeded_code.m"
            }
#line 568 "unneeded_code.m"
          else
#line 568 "unneeded_code.m"
            if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 6))
#line 572 "unneeded_code.m"
              {
#line 522 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 572 "unneeded_code.m"
              }
#line 568 "unneeded_code.m"
            else
#line 568 "unneeded_code.m"
              if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 7))
#line 573 "unneeded_code.m"
                {
#line 522 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 573 "unneeded_code.m"
                }
#line 568 "unneeded_code.m"
              else
#line 568 "unneeded_code.m"
                if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 2))
#line 571 "unneeded_code.m"
                  {
#line 522 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 1);
#line 571 "unneeded_code.m"
                  }
#line 568 "unneeded_code.m"
                else
#line 568 "unneeded_code.m"
                  if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 3))
#line 570 "unneeded_code.m"
                    {
#line 522 "unneeded_code.m"
                      transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 570 "unneeded_code.m"
                    }
#line 568 "unneeded_code.m"
                  else
#line 569 "unneeded_code.m"
                    {
#line 522 "unneeded_code.m"
                      transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 569 "unneeded_code.m"
                    }
#line 521 "unneeded_code.m"
    }
#line 523 "unneeded_code.m"
    if (!(transform_hlds__unneeded_code__succeeded))
#line 523 "unneeded_code.m"
      {
#line 526 "unneeded_code.m"
        {
#line 526 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_66_66;

#line 526 "unneeded_code.m"
          {
#line 526 "unneeded_code.m"
            transform_hlds__unneeded_code__V_66_66 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__unneeded_code__GoalInfo_54);
          }
#line 526 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_66_66 == (MR_Integer) 0);
#line 526 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 526 "unneeded_code.m"
        }
#line 523 "unneeded_code.m"
        if (!(transform_hlds__unneeded_code__succeeded))
#line 523 "unneeded_code.m"
          {
#line 530 "unneeded_code.m"
            {
#line 530 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 0)));
#line 530 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 1)));
#line 530 "unneeded_code.m"
              MR_Integer transform_hlds__unneeded_code__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 2)));
#line 530 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 3)));

#line 530 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_65_65 == (MR_Integer) 1);
#line 530 "unneeded_code.m"
              if (transform_hlds__unneeded_code__succeeded)
#line 531 "unneeded_code.m"
                {
#line 531 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = hlds__goal_form__goal_can_loop_or_throw_1_p_0(transform_hlds__unneeded_code__Goal_8);
                }
#line 530 "unneeded_code.m"
            }
#line 523 "unneeded_code.m"
            if (!(transform_hlds__unneeded_code__succeeded))
#line 523 "unneeded_code.m"
              {
#line 535 "unneeded_code.m"
                {
#line 535 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__BranchMap_56;
#line 535 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 1)));
#line 535 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 0)));
#line 535 "unneeded_code.m"
                  MR_Integer transform_hlds__unneeded_code__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 2)));
#line 535 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 3)));
#line 538 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__TypeCtorInfo_36_79;
#line 538 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__TypeInfo_37_80;

#line 535 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_64_64 == (MR_Integer) 0);
#line 535 "unneeded_code.m"
                  if (transform_hlds__unneeded_code__succeeded)
#line 535 "unneeded_code.m"
                    {
#line 536 "unneeded_code.m"
                      {
#line 536 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = hlds__goal_form__goal_can_loop_or_throw_1_p_0(transform_hlds__unneeded_code__Goal_8);
                      }
#line 535 "unneeded_code.m"
                      if (transform_hlds__unneeded_code__succeeded)
#line 535 "unneeded_code.m"
                        {
#line 537 "unneeded_code.m"
                          transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 537 "unneeded_code.m"
                          if (transform_hlds__unneeded_code__succeeded)
#line 537 "unneeded_code.m"
                            {
#line 537 "unneeded_code.m"
                              transform_hlds__unneeded_code__BranchMap_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26, (MR_Integer) 0)));
#line 8945 "transform_hlds.unneeded_code.c"
                              transform_hlds__unneeded_code__TypeCtorInfo_36_79 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0;
#line 8947 "transform_hlds.unneeded_code.c"
                              transform_hlds__unneeded_code__TypeInfo_37_80 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2];
#line 538 "unneeded_code.m"
                              {
#line 538 "unneeded_code.m"
                                transform_hlds__unneeded_code__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__unneeded_code__TypeCtorInfo_36_79, transform_hlds__unneeded_code__TypeInfo_37_80, transform_hlds__unneeded_code__BranchMap_56);
                              }
#line 538 "unneeded_code.m"
                              transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 537 "unneeded_code.m"
                            }
#line 535 "unneeded_code.m"
                        }
#line 535 "unneeded_code.m"
                    }
#line 535 "unneeded_code.m"
                }
#line 523 "unneeded_code.m"
                if (!(transform_hlds__unneeded_code__succeeded))
#line 523 "unneeded_code.m"
                  {
#line 543 "unneeded_code.m"
                    {
#line 543 "unneeded_code.m"
                      MR_Word transform_hlds__unneeded_code__V_91_91;

#line 543 "unneeded_code.m"
                      {
#line 543 "unneeded_code.m"
                        transform_hlds__unneeded_code__V_91_91 = hlds__hlds_goal__true_goal_expr_0_f_0();
                      }
#line 543 "unneeded_code.m"
                      {
#line 543 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(transform_hlds__unneeded_code__GoalExpr_53, transform_hlds__unneeded_code__V_91_91);
                      }
#line 543 "unneeded_code.m"
                    }
#line 523 "unneeded_code.m"
                    if (!(transform_hlds__unneeded_code__succeeded))
#line 545 "unneeded_code.m"
                      {
#line 545 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__TypeCtorInfo_38_81;
#line 545 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__TypeInfo_39_82;
#line 545 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__TypeCtorInfo_43_86;
#line 545 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchArms_57;
#line 545 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchArmCounts_58;
#line 545 "unneeded_code.m"
                        MR_Integer transform_hlds__unneeded_code__BranchArmCount_59;
#line 545 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_60_60;
#line 545 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_61_61;
#line 545 "unneeded_code.m"
                        MR_Integer transform_hlds__unneeded_code__V_62_62;
#line 545 "unneeded_code.m"
                        MR_Integer transform_hlds__unneeded_code__V_63_63;
#line 545 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchMap_69;
#line 548 "unneeded_code.m"
                        MR_Box transform_hlds__unneeded_code__conv4_BranchArmCount_59;
#line 549 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_76_76;
#line 549 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_77_77;
#line 549 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_78_78;

#line 545 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 545 "unneeded_code.m"
                        if (transform_hlds__unneeded_code__succeeded)
#line 545 "unneeded_code.m"
                          {
#line 545 "unneeded_code.m"
                            transform_hlds__unneeded_code__BranchMap_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26, (MR_Integer) 0)));
#line 9028 "transform_hlds.unneeded_code.c"
                            transform_hlds__unneeded_code__TypeCtorInfo_38_81 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0;
#line 9030 "transform_hlds.unneeded_code.c"
                            transform_hlds__unneeded_code__TypeInfo_39_82 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2];
#line 546 "unneeded_code.m"
                            {
#line 546 "unneeded_code.m"
                              mercury__map__values_2_p_0(transform_hlds__unneeded_code__TypeCtorInfo_38_81, transform_hlds__unneeded_code__TypeInfo_39_82, transform_hlds__unneeded_code__BranchMap_69, &transform_hlds__unneeded_code__BranchArms_57);
                            }
#line 547 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_60_60 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[8];
#line 9039 "transform_hlds.unneeded_code.c"
                            transform_hlds__unneeded_code__TypeCtorInfo_43_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 547 "unneeded_code.m"
                            {
#line 547 "unneeded_code.m"
                              mercury__list__map_3_p_0(transform_hlds__unneeded_code__TypeInfo_39_82, transform_hlds__unneeded_code__TypeCtorInfo_43_86, transform_hlds__unneeded_code__V_60_60, transform_hlds__unneeded_code__BranchArms_57, &transform_hlds__unneeded_code__BranchArmCounts_58);
                            }
#line 548 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_61_61 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[9];
#line 548 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_62_62 = (MR_Integer) 0;
#line 548 "unneeded_code.m"
                            {
#line 548 "unneeded_code.m"
                              transform_hlds__unneeded_code__conv4_BranchArmCount_59 = mercury__list__foldl_3_f_0(transform_hlds__unneeded_code__TypeCtorInfo_43_86, transform_hlds__unneeded_code__TypeCtorInfo_43_86, transform_hlds__unneeded_code__V_61_61, transform_hlds__unneeded_code__BranchArmCounts_58, ((MR_Box) (transform_hlds__unneeded_code__V_62_62)));
                            }
#line 548 "unneeded_code.m"
                            transform_hlds__unneeded_code__BranchArmCount_59 = ((MR_Integer) transform_hlds__unneeded_code__conv4_BranchArmCount_59);
#line 549 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 0)));
#line 549 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 1)));
#line 549 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 2)));
#line 549 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 3)));
#line 549 "unneeded_code.m"
                            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__BranchArmCount_59 > transform_hlds__unneeded_code__V_63_63);
#line 545 "unneeded_code.m"
                          }
#line 545 "unneeded_code.m"
                      }
#line 523 "unneeded_code.m"
                  }
#line 523 "unneeded_code.m"
              }
#line 523 "unneeded_code.m"
          }
#line 523 "unneeded_code.m"
      }
#line 562 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 561 "unneeded_code.m"
      *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "unneeded_code.m"
    else
#line 561 "unneeded_code.m"
      *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_23 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26;
#line 476 "unneeded_code.m"
  }
#line 471 "unneeded_code.m"
}

#line 456 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(
#line 456 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_6,
#line 456 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalPath_7,
#line 456 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_8,
#line 456 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13,
#line 456 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_14)
#line 456 "unneeded_code.m"
{
#line 460 "unneeded_code.m"
  {
#line 460 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 460 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Key_10;
#line 465 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goals0_11;
#line 462 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv0_Goals0_11;

#line 461 "unneeded_code.m"
    {
#line 461 "unneeded_code.m"
      transform_hlds__unneeded_code__Key_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 461 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Key_10, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalPath_7));
#line 461 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Key_10, 1) = ((MR_Box) (transform_hlds__unneeded_code__BranchNum_8));
#line 461 "unneeded_code.m"
    }
#line 462 "unneeded_code.m"
    {
#line 462 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13, ((MR_Box) (transform_hlds__unneeded_code__Key_10)), &transform_hlds__unneeded_code__conv0_Goals0_11);
    }
#line 462 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 462 "unneeded_code.m"
      {
#line 462 "unneeded_code.m"
        transform_hlds__unneeded_code__Goals0_11 = ((MR_Word) transform_hlds__unneeded_code__conv0_Goals0_11);
#line 462 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 462 "unneeded_code.m"
      }
#line 465 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 463 "unneeded_code.m"
      {
#line 463 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals_12;

#line 463 "unneeded_code.m"
        {
#line 463 "unneeded_code.m"
          transform_hlds__unneeded_code__Goals_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Goals_12, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_6));
#line 463 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Goals_12, 1) = ((MR_Box) (transform_hlds__unneeded_code__Goals0_11));
#line 463 "unneeded_code.m"
        }
#line 464 "unneeded_code.m"
        {
#line 464 "unneeded_code.m"
          mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__Key_10)), ((MR_Box) (transform_hlds__unneeded_code__Goals_12)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_14);
#line 464 "unneeded_code.m"
          return;
        }
#line 463 "unneeded_code.m"
      }
#line 465 "unneeded_code.m"
    else
#line 466 "unneeded_code.m"
      {
#line 466 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_16_16;

#line 466 "unneeded_code.m"
        {
#line 466 "unneeded_code.m"
          transform_hlds__unneeded_code__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_16_16, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_6));
#line 466 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "unneeded_code.m"
        }
#line 466 "unneeded_code.m"
        {
#line 466 "unneeded_code.m"
          mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__Key_10)), ((MR_Box) (transform_hlds__unneeded_code__V_16_16)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_14);
#line 466 "unneeded_code.m"
          return;
        }
#line 466 "unneeded_code.m"
      }
#line 460 "unneeded_code.m"
  }
#line 456 "unneeded_code.m"
}

#line 453 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1(
#line 453 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 453 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 453 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 453 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 453 "unneeded_code.m"
{
#line 453 "unneeded_code.m"
  {
#line 453 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 453 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_14;

#line 453 "unneeded_code.m"
    {
#line 453 "unneeded_code.m"
      transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_14);
    }
#line 453 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_14));
#line 453 "unneeded_code.m"
  }
#line 453 "unneeded_code.m"
}

#line 445 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(
#line 445 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_5,
#line 445 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 445 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12,
#line 445 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13)
#line 445 "unneeded_code.m"
{
#line 450 "unneeded_code.m"
  {
#line 450 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 450 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 450 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchPoint_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 450 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNumSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 450 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_6, (MR_Integer) 0)));
#line 450 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNums_11;
#line 450 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_14_14;
#line 451 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_6, (MR_Integer) 1)));
#line 453 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_13;

#line 452 "unneeded_code.m"
    {
#line 452 "unneeded_code.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__unneeded_code__TypeCtorInfo_16_16, transform_hlds__unneeded_code__BranchNumSet_7, &transform_hlds__unneeded_code__BranchNums_11);
    }
#line 453 "unneeded_code.m"
    {
#line 453 "unneeded_code.m"
      transform_hlds__unneeded_code__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 453 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_7[0]));
#line 453 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 1) = ((MR_Box) (transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1));
#line 453 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 453 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 3) = ((MR_Box) (transform_hlds__unneeded_code__Goal_5));
#line 453 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 4) = ((MR_Box) (transform_hlds__unneeded_code__GoalPath_9));
#line 453 "unneeded_code.m"
    }
#line 453 "unneeded_code.m"
    {
#line 453 "unneeded_code.m"
      mercury__list__foldl_4_p_0(transform_hlds__unneeded_code__TypeCtorInfo_16_16, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[3], transform_hlds__unneeded_code__V_14_14, transform_hlds__unneeded_code__BranchNums_11, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_13);
    }
#line 453 "unneeded_code.m"
    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_13);
#line 450 "unneeded_code.m"
  }
#line 445 "unneeded_code.m"
}

#line 440 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2(
#line 440 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 440 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 440 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 440 "unneeded_code.m"
{
#line 440 "unneeded_code.m"
  {
#line 440 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 440 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv2_HeadVar__2_2;

#line 440 "unneeded_code.m"
    {
#line 440 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv2_HeadVar__2_2);
    }
#line 440 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv2_HeadVar__2_2));
#line 440 "unneeded_code.m"
  }
#line 440 "unneeded_code.m"
}

#line 412 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1(
#line 412 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 412 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 412 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 412 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 412 "unneeded_code.m"
{
#line 412 "unneeded_code.m"
  {
#line 412 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 412 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_13;

#line 412 "unneeded_code.m"
    {
#line 412 "unneeded_code.m"
      transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_13);
    }
#line 412 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_13));
#line 412 "unneeded_code.m"
  }
#line 412 "unneeded_code.m"
}

#line 393 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_13,
#line 393 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_14,
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_16,
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30,
#line 393 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_31,
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_32,
#line 393 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_33,
#line 393 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_34,
#line 393 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_35)
#line 393 "unneeded_code.m"
{
#line 399 "unneeded_code.m"
  {
#line 399 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 399 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereInfo_20;
#line 399 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ModuleInfo_29;
#line 399 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_47_47;
#line 399 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_50_50;
#line 431 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_60_60;
#line 431 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_61_61;
#line 431 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_62_62;
#line 433 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_51_51;

#line 400 "unneeded_code.m"
    {
#line 400 "unneeded_code.m"
      transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Goal0_13, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30, &transform_hlds__unneeded_code__WhereInfo_20);
    }
#line 407 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__WhereInfo_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "unneeded_code.m"
      {
#line 404 "unneeded_code.m"
        transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Goal0_13, transform_hlds__unneeded_code__Goal_14, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_47_47, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_32, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_33, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_34, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_35);
      }
#line 407 "unneeded_code.m"
    else
#line 408 "unneeded_code.m"
      {
#line 408 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Branches_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__WhereInfo_20, (MR_Integer) 0)));
#line 408 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__BranchList_22;
#line 408 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Options_23;
#line 408 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Debug_24;
#line 408 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_37_37;
#line 412 "unneeded_code.m"
        MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_33;
#line 417 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_54_54;
#line 417 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_55_55;
#line 417 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_56_56;
#line 418 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_57_57;
#line 418 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_58_58;
#line 418 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_59_59;

#line 409 "unneeded_code.m"
        {
#line 409 "unneeded_code.m"
          transform_hlds__unneeded_code__demand_inputs_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Goal0_13, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__WhereInfo_20, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_47_47);
        }
#line 411 "unneeded_code.m"
        {
#line 411 "unneeded_code.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__Branches_21, &transform_hlds__unneeded_code__BranchList_22);
        }
#line 412 "unneeded_code.m"
        {
#line 412 "unneeded_code.m"
          transform_hlds__unneeded_code__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 412 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_37_37, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[0]));
#line 412 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_37_37, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1));
#line 412 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 412 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_37_37, 3) = ((MR_Box) (transform_hlds__unneeded_code__Goal0_13));
#line 412 "unneeded_code.m"
        }
#line 412 "unneeded_code.m"
        {
#line 412 "unneeded_code.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[2], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[3], transform_hlds__unneeded_code__V_37_37, transform_hlds__unneeded_code__BranchList_22, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_32)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_33);
        }
#line 412 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_33 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_33);
#line 414 "unneeded_code.m"
        {
#line 414 "unneeded_code.m"
          *transform_hlds__unneeded_code__Goal_14 = hlds__hlds_goal__true_goal_0_f_0();
        }
#line 415 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_35 = (MR_Integer) 1;
#line 417 "unneeded_code.m"
        transform_hlds__unneeded_code__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 0)));
#line 417 "unneeded_code.m"
        transform_hlds__unneeded_code__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 1)));
#line 417 "unneeded_code.m"
        transform_hlds__unneeded_code__Options_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 2)));
#line 417 "unneeded_code.m"
        transform_hlds__unneeded_code__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 3)));
#line 418 "unneeded_code.m"
        transform_hlds__unneeded_code__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_23, (MR_Integer) 0)));
#line 418 "unneeded_code.m"
        transform_hlds__unneeded_code__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_23, (MR_Integer) 1)));
#line 418 "unneeded_code.m"
        transform_hlds__unneeded_code__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_23, (MR_Integer) 2)));
#line 418 "unneeded_code.m"
        transform_hlds__unneeded_code__Debug_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_23, (MR_Integer) 3)));
#line 421 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__Debug_24 == (MR_Integer) 0))
#line 420 "unneeded_code.m"
          {
#line 420 "unneeded_code.m"
          }
#line 421 "unneeded_code.m"
        else
#line 422 "unneeded_code.m"
          {
#line 422 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalInfo0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 1)));
#line 422 "unneeded_code.m"
            MR_Integer transform_hlds__unneeded_code__GoalIdNum0_27;
#line 422 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_40_40;
#line 423 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code___GoalExpr0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 0)));
#line 425 "unneeded_code.m"
            MR_String transform_hlds__unneeded_code__V_75_75;
#line 425 "unneeded_code.m"
            MR_String transform_hlds__unneeded_code__V_76_76;
#line 425 "unneeded_code.m"
            MR_String transform_hlds__unneeded_code__V_78_78;

#line 424 "unneeded_code.m"
            {
#line 424 "unneeded_code.m"
              transform_hlds__unneeded_code__V_40_40 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_26);
            }
#line 424 "unneeded_code.m"
            transform_hlds__unneeded_code__GoalIdNum0_27 = (MR_Integer) transform_hlds__unneeded_code__V_40_40;
#line 9536 "transform_hlds.unneeded_code.c"
            {
#line 9538 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__V_75_75 = mercury__string__int_to_string_1_f_0(transform_hlds__unneeded_code__GoalIdNum0_27);
            }
#line 9541 "transform_hlds.unneeded_code.c"
            {
#line 9543 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__V_76_76 = mercury__string__f_43_43_2_f_0(transform_hlds__unneeded_code__V_75_75, (MR_String) "\n");
            }
#line 9546 "transform_hlds.unneeded_code.c"
            {
#line 9548 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "unneeded code at goal id ", transform_hlds__unneeded_code__V_76_76);
            }
#line 9551 "transform_hlds.unneeded_code.c"
            {
#line 9553 "transform_hlds.unneeded_code.c"
              mercury__io__write_string_3_p_0(transform_hlds__unneeded_code__V_78_78);
            }
#line 422 "unneeded_code.m"
          }
#line 408 "unneeded_code.m"
      }
#line 431 "unneeded_code.m"
    transform_hlds__unneeded_code__ModuleInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 0)));
#line 431 "unneeded_code.m"
    transform_hlds__unneeded_code__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 1)));
#line 431 "unneeded_code.m"
    transform_hlds__unneeded_code__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 2)));
#line 431 "unneeded_code.m"
    transform_hlds__unneeded_code__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 3)));
#line 432 "unneeded_code.m"
    {
#line 432 "unneeded_code.m"
      transform_hlds__unneeded_code__undemand_virgin_outputs_5_p_0(transform_hlds__unneeded_code__Goal0_13, transform_hlds__unneeded_code__ModuleInfo_29, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_47_47, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_50_50);
    }
#line 433 "unneeded_code.m"
    {
#line 433 "unneeded_code.m"
      transform_hlds__unneeded_code__V_51_51 = hlds__hlds_goal__goal_get_purity_1_f_0(*transform_hlds__unneeded_code__Goal_14);
    }
#line 433 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_51_51 == (MR_Integer) 2);
#line 441 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 440 "unneeded_code.m"
      {
#line 440 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TypeCtorInfo_72_72 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;

#line 440 "unneeded_code.m"
        {
#line 440 "unneeded_code.m"
          mercury__map__map_values_only_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_72_72, transform_hlds__unneeded_code__TypeCtorInfo_72_72, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[7], transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_50_50, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_31);
#line 440 "unneeded_code.m"
          return;
        }
#line 440 "unneeded_code.m"
      }
#line 441 "unneeded_code.m"
    else
#line 440 "unneeded_code.m"
      *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_31 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_50_50;
#line 399 "unneeded_code.m"
  }
#line 393 "unneeded_code.m"
}

#line 363 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2(
#line 363 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg)
#line 363 "unneeded_code.m"
{
#line 363 "unneeded_code.m"
  {
#line 363 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 363 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;

#line 363 "unneeded_code.m"
    {
#line 363 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__363__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))));
    }
#line 363 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 363 "unneeded_code.m"
  }
#line 363 "unneeded_code.m"
}

#line 318 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1(
#line 318 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 318 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 318 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 318 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 318 "unneeded_code.m"
{
#line 318 "unneeded_code.m"
  {
#line 318 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 318 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__3_67;

#line 318 "unneeded_code.m"
    {
#line 318 "unneeded_code.m"
      transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__318__1_3_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_HeadVar__3_67);
    }
#line 318 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__3_67));
#line 318 "unneeded_code.m"
  }
#line 318 "unneeded_code.m"
}

#line 304 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(
#line 304 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_60,
#line 304 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61,
#line 304 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62,
#line 304 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63,
#line 304 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__PredId_10,
#line 304 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__Pass_11,
#line 304 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Successful_12)
#line 304 "unneeded_code.m"
{
#line 307 "unneeded_code.m"
  {
#line 307 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeInfo_109_109;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_13;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal0_14;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarSet0_15;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarTypes0_16;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__InitInstMap_17;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo0_19;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__InstMapDelta_20;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__FinalInstMap_21;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NeededVarsList_22;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMap0_23;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMap1_28;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Globals_29;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ReorderConj_30;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__FullyStrict_31;
#line 307 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__Limit_32;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Debug_33;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Options_34;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__UnneededInfo_43;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal1_44;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RefinedGoals1_46;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Changed_47;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal2_48;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RefinedGoals_49;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_88_88;
#line 307 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_90_90;
#line 313 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_18_18;
#line 321 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_WhereNeededMap1_28;
#line 359 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_45_45;

#line 308 "unneeded_code.m"
    {
#line 308 "unneeded_code.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__unneeded_code__ContainingGoalMap_13, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64);
    }
#line 309 "unneeded_code.m"
    {
#line 309 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__Goal0_14);
    }
#line 310 "unneeded_code.m"
    {
#line 310 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__VarSet0_15);
    }
#line 311 "unneeded_code.m"
    {
#line 311 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__VarTypes0_16);
    }
#line 312 "unneeded_code.m"
    {
#line 312 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__unneeded_code__InitInstMap_17);
    }
#line 313 "unneeded_code.m"
    transform_hlds__unneeded_code__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_14, (MR_Integer) 0)));
#line 313 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_14, (MR_Integer) 1)));
#line 314 "unneeded_code.m"
    {
#line 314 "unneeded_code.m"
      transform_hlds__unneeded_code__InstMapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unneeded_code__GoalInfo0_19);
    }
#line 315 "unneeded_code.m"
    {
#line 315 "unneeded_code.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__unneeded_code__InitInstMap_17, transform_hlds__unneeded_code__InstMapDelta_20, &transform_hlds__unneeded_code__FinalInstMap_21);
    }
#line 316 "unneeded_code.m"
    {
#line 316 "unneeded_code.m"
      hlds__hlds_pred__proc_info_instantiated_head_vars_3_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__NeededVarsList_22);
    }
#line 9791 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeInfo_109_109 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 317 "unneeded_code.m"
    {
#line 317 "unneeded_code.m"
      mercury__map__init_1_p_0(transform_hlds__unneeded_code__TypeInfo_109_109, (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, &transform_hlds__unneeded_code__WhereNeededMap0_23);
    }
#line 321 "unneeded_code.m"
    {
#line 321 "unneeded_code.m"
      mercury__list__foldl_4_p_0(transform_hlds__unneeded_code__TypeInfo_109_109, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[6], transform_hlds__unneeded_code__NeededVarsList_22, ((MR_Box) (transform_hlds__unneeded_code__WhereNeededMap0_23)), &transform_hlds__unneeded_code__conv1_WhereNeededMap1_28);
    }
#line 321 "unneeded_code.m"
    transform_hlds__unneeded_code__WhereNeededMap1_28 = ((MR_Word) transform_hlds__unneeded_code__conv1_WhereNeededMap1_28);
#line 323 "unneeded_code.m"
    {
#line 323 "unneeded_code.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__unneeded_code__Globals_29);
    }
#line 324 "unneeded_code.m"
    {
#line 324 "unneeded_code.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 157, &transform_hlds__unneeded_code__ReorderConj_30);
    }
#line 325 "unneeded_code.m"
    {
#line 325 "unneeded_code.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 159, &transform_hlds__unneeded_code__FullyStrict_31);
    }
#line 326 "unneeded_code.m"
    {
#line 326 "unneeded_code.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 356, &transform_hlds__unneeded_code__Limit_32);
    }
#line 327 "unneeded_code.m"
    {
#line 327 "unneeded_code.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 357, &transform_hlds__unneeded_code__Debug_33);
    }
#line 328 "unneeded_code.m"
    {
#line 328 "unneeded_code.m"
      transform_hlds__unneeded_code__Options_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 328 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_34, 0) = ((MR_Box) (transform_hlds__unneeded_code__FullyStrict_31));
#line 328 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_34, 1) = ((MR_Box) (transform_hlds__unneeded_code__ReorderConj_30));
#line 328 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_34, 2) = ((MR_Box) (transform_hlds__unneeded_code__Limit_32));
#line 328 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_34, 3) = ((MR_Box) (transform_hlds__unneeded_code__Debug_33));
#line 328 "unneeded_code.m"
    }
#line 331 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__Debug_33 == (MR_Integer) 0))
#line 330 "unneeded_code.m"
      {
#line 330 "unneeded_code.m"
      }
#line 331 "unneeded_code.m"
    else
#line 333 "unneeded_code.m"
      {
#line 333 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__PredInfo_36;
#line 333 "unneeded_code.m"
        MR_String transform_hlds__unneeded_code__PredName_37;
#line 333 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__DebugPredNames_38;

#line 334 "unneeded_code.m"
        {
#line 334 "unneeded_code.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__unneeded_code__PredId_10, &transform_hlds__unneeded_code__PredInfo_36);
        }
#line 335 "unneeded_code.m"
        {
#line 335 "unneeded_code.m"
          transform_hlds__unneeded_code__PredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unneeded_code__PredInfo_36);
        }
#line 336 "unneeded_code.m"
        {
#line 336 "unneeded_code.m"
          libs__globals__lookup_accumulating_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 358, &transform_hlds__unneeded_code__DebugPredNames_38);
        }
#line 342 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__DebugPredNames_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 339 "unneeded_code.m"
          {
#line 339 "unneeded_code.m"
            MR_String transform_hlds__unneeded_code__V_120_120;
#line 339 "unneeded_code.m"
            MR_String transform_hlds__unneeded_code__V_121_121;
#line 339 "unneeded_code.m"
            MR_String transform_hlds__unneeded_code__V_123_123;

#line 9887 "transform_hlds.unneeded_code.c"
            {
#line 9889 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__V_120_120 = mercury__string__int_to_string_1_f_0(transform_hlds__unneeded_code__Pass_11);
            }
#line 9892 "transform_hlds.unneeded_code.c"
            {
#line 9894 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__V_121_121 = mercury__string__f_43_43_2_f_0(transform_hlds__unneeded_code__V_120_120, (MR_String) "\n");
            }
#line 9897 "transform_hlds.unneeded_code.c"
            {
#line 9899 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__V_123_123 = mercury__string__f_43_43_2_f_0((MR_String) "% Starting unneededed code pass ", transform_hlds__unneeded_code__V_121_121);
            }
#line 9902 "transform_hlds.unneeded_code.c"
            {
#line 9904 "transform_hlds.unneeded_code.c"
              mercury__io__write_string_3_p_0(transform_hlds__unneeded_code__V_123_123);
            }
#line 339 "unneeded_code.m"
          }
#line 342 "unneeded_code.m"
        else
#line 351 "unneeded_code.m"
          {
#line 344 "unneeded_code.m"
            {
#line 344 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (transform_hlds__unneeded_code__PredName_37)), transform_hlds__unneeded_code__DebugPredNames_38);
            }
#line 351 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 346 "unneeded_code.m"
              {
#line 346 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__OutInfo_42;
#line 346 "unneeded_code.m"
                MR_String transform_hlds__unneeded_code__V_125_125;
#line 346 "unneeded_code.m"
                MR_String transform_hlds__unneeded_code__V_126_126;
#line 346 "unneeded_code.m"
                MR_String transform_hlds__unneeded_code__V_128_128;

#line 9931 "transform_hlds.unneeded_code.c"
                {
#line 9933 "transform_hlds.unneeded_code.c"
                  transform_hlds__unneeded_code__V_125_125 = mercury__string__int_to_string_1_f_0(transform_hlds__unneeded_code__Pass_11);
                }
#line 9936 "transform_hlds.unneeded_code.c"
                {
#line 9938 "transform_hlds.unneeded_code.c"
                  transform_hlds__unneeded_code__V_126_126 = mercury__string__f_43_43_2_f_0(transform_hlds__unneeded_code__V_125_125, (MR_String) "\n");
                }
#line 9941 "transform_hlds.unneeded_code.c"
                {
#line 9943 "transform_hlds.unneeded_code.c"
                  transform_hlds__unneeded_code__V_128_128 = mercury__string__f_43_43_2_f_0((MR_String) "% Starting unneededed code pass ", transform_hlds__unneeded_code__V_126_126);
                }
#line 9946 "transform_hlds.unneeded_code.c"
                {
#line 9948 "transform_hlds.unneeded_code.c"
                  mercury__io__write_string_3_p_0(transform_hlds__unneeded_code__V_128_128);
                }
#line 348 "unneeded_code.m"
                {
#line 348 "unneeded_code.m"
                  transform_hlds__unneeded_code__OutInfo_42 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(transform_hlds__unneeded_code__Globals_29);
                }
#line 349 "unneeded_code.m"
                {
#line 349 "unneeded_code.m"
                  hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(transform_hlds__unneeded_code__OutInfo_42, transform_hlds__unneeded_code__Goal0_14, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__unneeded_code__VarSet0_15, (MR_Integer) 1, (MR_Integer) 0, (MR_String) ".\n");
                }
#line 346 "unneeded_code.m"
              }
#line 351 "unneeded_code.m"
            else
#line 349 "unneeded_code.m"
              {
#line 349 "unneeded_code.m"
              }
#line 351 "unneeded_code.m"
          }
#line 333 "unneeded_code.m"
      }
#line 357 "unneeded_code.m"
    {
#line 357 "unneeded_code.m"
      transform_hlds__unneeded_code__UnneededInfo_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 357 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_43, 0) = ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62));
#line 357 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_43, 1) = ((MR_Box) (transform_hlds__unneeded_code__VarTypes0_16));
#line 357 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_43, 2) = ((MR_Box) (transform_hlds__unneeded_code__Options_34));
#line 357 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_43, 3) = ((MR_Box) (transform_hlds__unneeded_code__ContainingGoalMap_13));
#line 357 "unneeded_code.m"
    }
#line 359 "unneeded_code.m"
    {
#line 359 "unneeded_code.m"
      transform_hlds__unneeded_code__V_88_88 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1]);
    }
#line 359 "unneeded_code.m"
    {
#line 359 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_43, transform_hlds__unneeded_code__Goal0_14, &transform_hlds__unneeded_code__Goal1_44, transform_hlds__unneeded_code__InitInstMap_17, transform_hlds__unneeded_code__FinalInstMap_21, transform_hlds__unneeded_code__WhereNeededMap1_28, &transform_hlds__unneeded_code__V_45_45, transform_hlds__unneeded_code__V_88_88, &transform_hlds__unneeded_code__RefinedGoals1_46, (MR_Integer) 0, &transform_hlds__unneeded_code__Changed_47);
    }
#line 362 "unneeded_code.m"
    {
#line 362 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Goal1_44, &transform_hlds__unneeded_code__Goal2_48, transform_hlds__unneeded_code__RefinedGoals1_46, &transform_hlds__unneeded_code__RefinedGoals_49);
    }
#line 363 "unneeded_code.m"
    {
#line 363 "unneeded_code.m"
      transform_hlds__unneeded_code__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 363 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_90_90, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_4[0]));
#line 363 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_90_90, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2));
#line 363 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 363 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_90_90, 3) = ((MR_Box) (transform_hlds__unneeded_code__RefinedGoals_49));
#line 363 "unneeded_code.m"
    }
#line 363 "unneeded_code.m"
    {
#line 363 "unneeded_code.m"
      mercury__require__expect_4_p_0(transform_hlds__unneeded_code__V_90_90, (MR_String) "transform_hlds.unneeded_code", (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_proc\'/7", (MR_String) "goal reattachment unsuccessful");
    }
#line 388 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__Changed_47 == (MR_Integer) 0))
#line 389 "unneeded_code.m"
      {
#line 390 "unneeded_code.m"
        *transform_hlds__unneeded_code__Successful_12 = (MR_Integer) 0;
#line 390 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61 = transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64;
#line 390 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63 = transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62;
#line 389 "unneeded_code.m"
      }
#line 388 "unneeded_code.m"
    else
#line 366 "unneeded_code.m"
      {
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__HeadVars_50;
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__InstVarSet_51;
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__RttiVarMaps0_52;
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal3_54;
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__VarSet_55;
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__VarTypes_56;
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__RttiVarMaps_57;
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_58;
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_96_96;
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_97_97;
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_98_98;
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_99_99;
#line 366 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_100_100;
#line 372 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code___Warnings_53;

#line 369 "unneeded_code.m"
        {
#line 369 "unneeded_code.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__HeadVars_50);
        }
#line 370 "unneeded_code.m"
        {
#line 370 "unneeded_code.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__InstVarSet_51);
        }
#line 371 "unneeded_code.m"
        {
#line 371 "unneeded_code.m"
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__RttiVarMaps0_52);
        }
#line 372 "unneeded_code.m"
        {
#line 372 "unneeded_code.m"
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__unneeded_code__HeadVars_50, &transform_hlds__unneeded_code___Warnings_53, transform_hlds__unneeded_code__Goal2_48, &transform_hlds__unneeded_code__Goal3_54, transform_hlds__unneeded_code__VarSet0_15, &transform_hlds__unneeded_code__VarSet_55, transform_hlds__unneeded_code__VarTypes0_16, &transform_hlds__unneeded_code__VarTypes_56, transform_hlds__unneeded_code__RttiVarMaps0_52, &transform_hlds__unneeded_code__RttiVarMaps_57);
        }
#line 376 "unneeded_code.m"
        {
#line 376 "unneeded_code.m"
          check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, transform_hlds__unneeded_code__Goal3_54, &transform_hlds__unneeded_code__Goal_58, transform_hlds__unneeded_code__VarTypes_56, transform_hlds__unneeded_code__InstVarSet_51, transform_hlds__unneeded_code__InitInstMap_17, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_96_96);
        }
#line 378 "unneeded_code.m"
        {
#line 378 "unneeded_code.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unneeded_code__Goal_58, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_97_97);
        }
#line 379 "unneeded_code.m"
        {
#line 379 "unneeded_code.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unneeded_code__VarSet_55, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_97_97, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_98_98);
        }
#line 380 "unneeded_code.m"
        {
#line 380 "unneeded_code.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unneeded_code__VarTypes_56, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_98_98, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_99_99);
        }
#line 381 "unneeded_code.m"
        {
#line 381 "unneeded_code.m"
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unneeded_code__RttiVarMaps_57, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_99_99, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_100_100);
        }
#line 382 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__Pass_11 > (MR_Integer) 3);
#line 384 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 383 "unneeded_code.m"
          {
#line 383 "unneeded_code.m"
            *transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63 = transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_96_96;
#line 383 "unneeded_code.m"
            *transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61 = transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_100_100;
#line 383 "unneeded_code.m"
          }
#line 384 "unneeded_code.m"
        else
#line 385 "unneeded_code.m"
          {
#line 385 "unneeded_code.m"
            MR_Integer transform_hlds__unneeded_code__V_104_104 = (transform_hlds__unneeded_code__Pass_11 + (MR_Integer) 1);
#line 385 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_59_59;

#line 385 "unneeded_code.m"
            {
#line 385 "unneeded_code.m"
              transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_100_100, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_96_96, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63, transform_hlds__unneeded_code__PredId_10, transform_hlds__unneeded_code__V_104_104, &transform_hlds__unneeded_code__V_59_59);
            }
#line 385 "unneeded_code.m"
          }
#line 387 "unneeded_code.m"
        *transform_hlds__unneeded_code__Successful_12 = (MR_Integer) 1;
#line 366 "unneeded_code.m"
      }
#line 307 "unneeded_code.m"
  }
#line 304 "unneeded_code.m"
}

#line 67 "unneeded_code.m"
void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_msg_5_p_0(
#line 67 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__PredProcId_6,
#line 67 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13,
#line 67 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_14,
#line 67 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_15,
#line 67 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_16)
#line 67 "unneeded_code.m"
{
#line 219 "unneeded_code.m"
  {
#line 219 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__PredId_10;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Successful_12;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_20_20;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__HeadVars_32;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal0_33;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarSet0_34;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarTypes0_35;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RttiVarMaps0_36;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal_38;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarSet_39;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarTypes_40;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RttiVarMaps_41;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_17_43;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_18_44;
#line 219 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_19_45;
#line 254 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code___Warnings_37;
#line 232 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__V_11_11;

#line 228 "unneeded_code.m"
    {
#line 228 "unneeded_code.m"
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Removing dead code in ", transform_hlds__unneeded_code__PredProcId_6, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_15);
    }
#line 249 "unneeded_code.m"
    {
#line 249 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__HeadVars_32);
    }
#line 250 "unneeded_code.m"
    {
#line 250 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__Goal0_33);
    }
#line 251 "unneeded_code.m"
    {
#line 251 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__VarSet0_34);
    }
#line 252 "unneeded_code.m"
    {
#line 252 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__VarTypes0_35);
    }
#line 253 "unneeded_code.m"
    {
#line 253 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__RttiVarMaps0_36);
    }
#line 254 "unneeded_code.m"
    {
#line 254 "unneeded_code.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__unneeded_code__HeadVars_32, &transform_hlds__unneeded_code___Warnings_37, transform_hlds__unneeded_code__Goal0_33, &transform_hlds__unneeded_code__Goal_38, transform_hlds__unneeded_code__VarSet0_34, &transform_hlds__unneeded_code__VarSet_39, transform_hlds__unneeded_code__VarTypes0_35, &transform_hlds__unneeded_code__VarTypes_40, transform_hlds__unneeded_code__RttiVarMaps0_36, &transform_hlds__unneeded_code__RttiVarMaps_41);
    }
#line 257 "unneeded_code.m"
    {
#line 257 "unneeded_code.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unneeded_code__Goal_38, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_17_43);
    }
#line 258 "unneeded_code.m"
    {
#line 258 "unneeded_code.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unneeded_code__VarSet_39, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_17_43, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_18_44);
    }
#line 259 "unneeded_code.m"
    {
#line 259 "unneeded_code.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unneeded_code__VarTypes_40, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_18_44, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_19_45);
    }
#line 260 "unneeded_code.m"
    {
#line 260 "unneeded_code.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unneeded_code__RttiVarMaps_41, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_19_45, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_20_20);
    }
#line 232 "unneeded_code.m"
    transform_hlds__unneeded_code__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__PredProcId_6, (MR_Integer) 0)));
#line 232 "unneeded_code.m"
    transform_hlds__unneeded_code__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__PredProcId_6, (MR_Integer) 1)));
#line 233 "unneeded_code.m"
    {
#line 233 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_20_20, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_14, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_16, transform_hlds__unneeded_code__PredId_10, (MR_Integer) 1, &transform_hlds__unneeded_code__Successful_12);
    }
#line 239 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__Successful_12 == (MR_Integer) 0))
#line 240 "unneeded_code.m"
      {
#line 241 "unneeded_code.m"
        {
#line 241 "unneeded_code.m"
          hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% none found.\n", transform_hlds__unneeded_code__PredProcId_6, *transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_16);
#line 241 "unneeded_code.m"
          return;
        }
#line 240 "unneeded_code.m"
      }
#line 239 "unneeded_code.m"
    else
#line 236 "unneeded_code.m"
      {
#line 237 "unneeded_code.m"
        {
#line 237 "unneeded_code.m"
          hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% done.\n", transform_hlds__unneeded_code__PredProcId_6, *transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_16);
#line 237 "unneeded_code.m"
          return;
        }
#line 236 "unneeded_code.m"
      }
#line 219 "unneeded_code.m"
  }
#line 67 "unneeded_code.m"
}

void mercury__transform_hlds__unneeded_code__init(void)
{
}

void mercury__transform_hlds__unneeded_code__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_bracketed_goal_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_alts_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_location_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_refined_goal_map_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_uc_option_values_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_unneeded_code_info_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_branches_0);
	MR_register_type_ctor_info(&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_map_0);
}

void mercury__transform_hlds__unneeded_code__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.unneeded_code. */
