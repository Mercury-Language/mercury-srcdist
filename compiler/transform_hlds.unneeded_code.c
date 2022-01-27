/*
** Automatically generated from `unneeded_code.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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
#include "hlds.make_goal.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 146 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 149 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0;

#line 155 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0;

#line 158 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 161 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 164 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 167 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__pair__pti_pair_2__plain_transform_hlds__unneeded_code__type_ctor_info_branch_point_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 170 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 173 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 176 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_bracketed_goal_0_0[3];

#line 179 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0;

#line 182 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0[1];

#line 185 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_bracketed_goal_0[1];

#line 188 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0[1];

#line 191 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_bracketed_goal_0[1];

#line 194 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0;

#line 197 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_alts_0_1[1];

#line 200 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1;

#line 203 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_0[1];

#line 206 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_1[1];

#line 209 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_alts_0[2];

#line 212 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_alts_0[2];

#line 215 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_alts_0[2];

#line 218 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_point_0_0[2];

#line 221 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0;

#line 224 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0[1];

#line 227 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_point_0[1];

#line 230 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0[1];

#line 233 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_point_0[1];

#line 236 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_location_0_0[2];

#line 239 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0;

#line 242 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0[1];

#line 245 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_location_0[1];

#line 248 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0[1];

#line 251 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_location_0[1];

#line 254 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 257 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_uc_option_values_0_0[4];

#line 260 "transform_hlds.unneeded_code.c"
static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_uc_option_values_0_0[4];

#line 263 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0;

#line 266 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0[1];

#line 269 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0[1];

#line 272 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0[1];

#line 275 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0[1];

#line 278 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 281 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 284 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_unneeded_code_info_0_0[4];

#line 287 "transform_hlds.unneeded_code.c"
static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_unneeded_code_info_0_0[4];

#line 290 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0;

#line 293 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0[1];

#line 296 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_unneeded_code_info_0[1];

#line 299 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0[1];

#line 302 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_unneeded_code_info_0[1];

#line 305 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0;

#line 308 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 311 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_where_needed_0_1[1];

#line 314 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1;

#line 317 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_0[1];

#line 320 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_1[1];

#line 323 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_where_needed_0[2];

#line 326 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_where_needed_0[2];

#line 329 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_where_needed_0[2];

#line 332 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unneeded_code__type_ctor_info_where_needed_0;

#line 335 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001(
#line 338 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 340 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 343 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001(
#line 346 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 348 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 350 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 353 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0_10001(
#line 356 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 358 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 361 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0_10001(
#line 364 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 366 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 368 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 371 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0_10001(
#line 374 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 376 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 379 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0_10001(
#line 382 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 384 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 386 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 389 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0_10001(
#line 392 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 394 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 397 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0_10001(
#line 400 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 402 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 404 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 407 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0_10001(
#line 410 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 412 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 415 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0_10001(
#line 418 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 420 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 422 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 425 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001(
#line 428 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 430 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 433 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001(
#line 436 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 438 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 440 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 443 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001(
#line 446 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 448 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 451 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001(
#line 454 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 456 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 458 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 461 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0_10001(
#line 464 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 466 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 469 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0_10001(
#line 472 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 474 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 476 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 479 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0_10001(
#line 482 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 484 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 487 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0_10001(
#line 490 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 492 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 494 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 497 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0_10001(
#line 500 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 502 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 505 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0_10001(
#line 508 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 510 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 512 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 763 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_53_93_95_48_11_p_0(
#line 763 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 763 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goals0_13,
#line 763 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goals_14,
#line 763 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 763 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_23,
#line 763 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_24,
#line 763 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_25,
#line 763 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26,
#line 763 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_27,
#line 763 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_28);

#line 645 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_109_97_110_100_95_118_97_114_95_101_118_101_114_121_119_104_101_114_101_95_95_91_49_93_95_48_2_p_0(
#line 645 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2);

#line 548 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__548__1_2_p_0(
#line 548 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_40,
#line 548 "unneeded_code.m"
  MR_Integer * transform_hlds__unneeded_code__HeadVar__2_41);

#line 364 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__364__1_1_p_0(
#line 364 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__RefinedGoals_49);

#line 319 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__319__1_3_p_0(
#line 319 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_65,
#line 319 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_66,
#line 319 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_67);

#line 202 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0(
#line 202 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 202 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 202 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 202 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0(
#line 202 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 202 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 208 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(
#line 208 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 208 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 208 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 208 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(
#line 208 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 208 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 204 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0(
#line 204 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 204 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 204 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 204 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0(
#line 204 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 204 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 297 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(
#line 297 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 297 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 297 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 297 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(
#line 297 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 297 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 289 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0(
#line 289 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 289 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 289 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 289 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0(
#line 289 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 289 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 216 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(
#line 216 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 216 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 216 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 216 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(
#line 216 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 216 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 144 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0(
#line 144 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 144 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0(
#line 144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 112 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0(
#line 112 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 112 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 112 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 112 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0(
#line 112 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 112 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 123 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0(
#line 123 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 123 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 123 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 123 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0(
#line 123 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 123 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 760 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(
#line 760 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 760 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 760 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 760 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(
#line 760 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 760 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 1186 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__get_parent_branch_point_6_p_0(
#line 1186 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 1186 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_8,
#line 1186 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchGoalId_9,
#line 1186 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchArmGoalId_10,
#line 1186 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchAlt_11,
#line 1186 "unneeded_code.m"
  MR_Integer * transform_hlds__unneeded_code__BranchNum_12);

#line 1145 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(
#line 1145 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 1145 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_2,
#line 1145 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3,
#line 1145 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__4_4,
#line 1145 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__5_5);

#line 1074 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_ite_9_p_0(
#line 1074 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Cond0_10,
#line 1074 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Cond_11,
#line 1074 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Then0_12,
#line 1074 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Then_13,
#line 1074 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Else0_14,
#line 1074 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Else_15,
#line 1074 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_22,
#line 1074 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23,
#line 1074 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_17);

#line 1057 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(
#line 1057 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1057 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1057 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1057 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4,
#line 1057 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_5,
#line 1057 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_6);

#line 1038 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(
#line 1038 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1038 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1038 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1038 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4,
#line 1038 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_5,
#line 1038 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_6);

#line 1025 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(
#line 1025 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1025 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1025 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1025 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4);

#line 963 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(
#line 963 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_5,
#line 963 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_6,
#line 963 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58,
#line 963 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59);

#line 935 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__add_alt_start_7_p_0(
#line 935 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 935 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 935 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_3,
#line 935 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_4,
#line 935 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_5,
#line 935 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6,
#line 935 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7);

#line 912 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__add_where_needed_list_5_p_0(
#line 912 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 912 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 912 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_3,
#line 912 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4,
#line 912 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5);

#line 903 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(
#line 903 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_6,
#line 903 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_7,
#line 903 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap1_8,
#line 903 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap2_9,
#line 903 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__WhereNeededMap_10);

#line 864 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_18,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Cond0_19,
#line 864 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Cond_20,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Then0_21,
#line 864 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Then_22,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Else0_23,
#line 864 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Else_24,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_25,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_26,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_27,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_28,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45,
#line 864 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_46,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_47,
#line 864 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_48,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_49,
#line 864 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50);

#line 838 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 838 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_4,
#line 838 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_5,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_6,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_7,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__StartWhereNeededMap_9,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_10,
#line 838 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_11,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12,
#line 838 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_14,
#line 838 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_15);

#line 815 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 815 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_4,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_5,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_6,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__StartWhereNeededMap_7,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_8,
#line 815 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_9,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_10,
#line 815 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_11,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_12,
#line 815 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_13);

#line 792 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(
#line 792 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 792 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 792 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 792 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4,
#line 792 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5,
#line 792 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_6,
#line 792 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_7,
#line 792 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_8,
#line 792 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_9);

#line 776 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(
#line 776 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 776 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_2,
#line 776 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3);

#line 702 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_3(
#line 702 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 702 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 702 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 728 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2(
#line 728 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 728 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 728 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 717 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1(
#line 717 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 717 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 717 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 651 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_13,
#line 651 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_14,
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_16,
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88,
#line 651 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89,
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90,
#line 651 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91,
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92,
#line 651 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);

#line 645 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(
#line 645 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code___WhereNeeded0_3,
#line 645 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2);

#line 637 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__undemand_var_3_p_0(
#line 637 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_4,
#line 637 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6,
#line 637 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7);

#line 624 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_var_6_p_0(
#line 624 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 624 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 624 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeeded_9,
#line 624 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_10,
#line 624 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14,
#line 624 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_15);

#line 615 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(
#line 615 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_4,
#line 615 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_5,
#line 615 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_6);

#line 595 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(
#line 595 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_4,
#line 595 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_5,
#line 595 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_6);

#line 592 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_2(
#line 592 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 592 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 592 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 592 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 589 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_1(
#line 589 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 589 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1);

#line 580 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0(
#line 580 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_7,
#line 580 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_8,
#line 580 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_9,
#line 580 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeeded_10,
#line 580 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_20,
#line 580 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_21);

#line 494 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__collect_where_needed_6_p_0(
#line 494 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 494 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 494 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap_9,
#line 494 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ChangedVar_10,
#line 494 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13,
#line 494 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14);

#line 549 "unneeded_code.m"
static MR_Box MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3(
#line 549 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 549 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 549 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 548 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2(
#line 548 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 548 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 548 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 489 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1(
#line 489 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 489 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 489 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 489 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 472 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(
#line 472 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_7,
#line 472 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_8,
#line 472 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_9,
#line 472 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_10,
#line 472 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap_11,
#line 472 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_23);

#line 457 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(
#line 457 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_6,
#line 457 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalPath_7,
#line 457 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_8,
#line 457 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13,
#line 457 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_14);

#line 454 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1(
#line 454 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 454 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 454 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 454 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 446 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(
#line 446 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_5,
#line 446 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 446 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12,
#line 446 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13);

#line 441 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_4(
#line 441 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 441 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 441 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 613 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_3(
#line 613 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 613 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 613 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 613 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 611 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2(
#line 611 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 611 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1);

#line 413 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1(
#line 413 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 413 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 413 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 413 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 394 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_13,
#line 394 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_14,
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_16,
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30,
#line 394 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_31,
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_32,
#line 394 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_33,
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_34,
#line 394 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_35);

#line 364 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2(
#line 364 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg);

#line 319 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1(
#line 319 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 319 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 319 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 319 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 305 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(
#line 305 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_60,
#line 305 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61,
#line 305 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62,
#line 305 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63,
#line 305 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__PredId_10,
#line 305 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__Pass_11,
#line 305 "unneeded_code.m"
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
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3)),
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
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 1644 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1652 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1660 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0
  }
};

#line 1669 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1678 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1686 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1695 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1703 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__pair__pti_pair_2__plain_transform_hlds__unneeded_code__type_ctor_info_branch_point_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1712 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 1721 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1729 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_bracketed_goal_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
};

#line 1736 "transform_hlds.unneeded_code.c"
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

#line 1751 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0
};

#line 1756 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_bracketed_goal_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0
  }
};

#line 1765 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0
};

#line 1770 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_bracketed_goal_0[1] = {
  (MR_Integer) 0
};

#line 1775 "transform_hlds.unneeded_code.c"
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

#line 1796 "transform_hlds.unneeded_code.c"
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

#line 1811 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_alts_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0
};

#line 1816 "transform_hlds.unneeded_code.c"
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

#line 1831 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0
};

#line 1836 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_1[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1
};

#line 1841 "transform_hlds.unneeded_code.c"
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

#line 1855 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_alts_0[2] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0,
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1
};

#line 1861 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_alts_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1867 "transform_hlds.unneeded_code.c"
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

#line 1888 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_point_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_alts_0
};

#line 1894 "transform_hlds.unneeded_code.c"
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

#line 1909 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0
};

#line 1914 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0
  }
};

#line 1923 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0
};

#line 1928 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_point_0[1] = {
  (MR_Integer) 0
};

#line 1933 "transform_hlds.unneeded_code.c"
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

#line 1954 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_location_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1960 "transform_hlds.unneeded_code.c"
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

#line 1975 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0
};

#line 1980 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_location_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0
  }
};

#line 1989 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0
};

#line 1994 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_location_0[1] = {
  (MR_Integer) 0
};

#line 1999 "transform_hlds.unneeded_code.c"
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

#line 2020 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2029 "transform_hlds.unneeded_code.c"
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

#line 2050 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_uc_option_values_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2058 "transform_hlds.unneeded_code.c"
static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_uc_option_values_0_0[4] = {
  (MR_String) "uc_fully_strict",
  (MR_String) "uc_reorder_conj",
  (MR_String) "uc_copy_limit",
  (MR_String) "uc_debug"
};

#line 2066 "transform_hlds.unneeded_code.c"
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

#line 2081 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0
};

#line 2086 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0
  }
};

#line 2095 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0
};

#line 2100 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0[1] = {
  (MR_Integer) 0
};

#line 2105 "transform_hlds.unneeded_code.c"
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

#line 2126 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2135 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 2144 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_unneeded_code_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_uc_option_values_0,
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
};

#line 2152 "transform_hlds.unneeded_code.c"
static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_unneeded_code_info_0_0[4] = {
  (MR_String) "uci_module_info",
  (MR_String) "uci_vartypes",
  (MR_String) "uci_options",
  (MR_String) "uci_containing_goal_map"
};

#line 2160 "transform_hlds.unneeded_code.c"
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

#line 2175 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0
};

#line 2180 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_unneeded_code_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0
  }
};

#line 2189 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0
};

#line 2194 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_unneeded_code_info_0[1] = {
  (MR_Integer) 0
};

#line 2199 "transform_hlds.unneeded_code.c"
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

#line 2220 "transform_hlds.unneeded_code.c"
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

#line 2235 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0,
    (MR_TypeInfo) &transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 2244 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_where_needed_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 2249 "transform_hlds.unneeded_code.c"
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

#line 2264 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0
};

#line 2269 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_1[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1
};

#line 2274 "transform_hlds.unneeded_code.c"
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

#line 2288 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_where_needed_0[2] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1,
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0
};

#line 2294 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_where_needed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2300 "transform_hlds.unneeded_code.c"
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

#line 2321 "transform_hlds.unneeded_code.c"
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

#line 2342 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unneeded_code__type_ctor_info_where_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0
  }
};

#line 2351 "transform_hlds.unneeded_code.c"
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

#line 2372 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001(
#line 2375 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2377 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2379 "transform_hlds.unneeded_code.c"
{
#line 2381 "transform_hlds.unneeded_code.c"
  {
#line 2383 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2386 "transform_hlds.unneeded_code.c"
    {
#line 2388 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2391 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2393 "transform_hlds.unneeded_code.c"
  }
#line 2395 "transform_hlds.unneeded_code.c"
}

#line 2398 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001(
#line 2401 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2403 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2405 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2407 "transform_hlds.unneeded_code.c"
{
#line 2409 "transform_hlds.unneeded_code.c"
  {
#line 2411 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2414 "transform_hlds.unneeded_code.c"
    {
#line 2416 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2419 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2421 "transform_hlds.unneeded_code.c"
  }
#line 2423 "transform_hlds.unneeded_code.c"
}

#line 2426 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0_10001(
#line 2429 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2431 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2433 "transform_hlds.unneeded_code.c"
{
#line 2435 "transform_hlds.unneeded_code.c"
  {
#line 2437 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2440 "transform_hlds.unneeded_code.c"
    {
#line 2442 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____branch_alts_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2445 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2447 "transform_hlds.unneeded_code.c"
  }
#line 2449 "transform_hlds.unneeded_code.c"
}

#line 2452 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0_10001(
#line 2455 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2457 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2459 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2461 "transform_hlds.unneeded_code.c"
{
#line 2463 "transform_hlds.unneeded_code.c"
  {
#line 2465 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2468 "transform_hlds.unneeded_code.c"
    {
#line 2470 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____branch_alts_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2473 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2475 "transform_hlds.unneeded_code.c"
  }
#line 2477 "transform_hlds.unneeded_code.c"
}

#line 2480 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0_10001(
#line 2483 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2485 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2487 "transform_hlds.unneeded_code.c"
{
#line 2489 "transform_hlds.unneeded_code.c"
  {
#line 2491 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2494 "transform_hlds.unneeded_code.c"
    {
#line 2496 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____branch_point_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2499 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2501 "transform_hlds.unneeded_code.c"
  }
#line 2503 "transform_hlds.unneeded_code.c"
}

#line 2506 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0_10001(
#line 2509 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2511 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2513 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2515 "transform_hlds.unneeded_code.c"
{
#line 2517 "transform_hlds.unneeded_code.c"
  {
#line 2519 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2522 "transform_hlds.unneeded_code.c"
    {
#line 2524 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____branch_point_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2527 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2529 "transform_hlds.unneeded_code.c"
  }
#line 2531 "transform_hlds.unneeded_code.c"
}

#line 2534 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0_10001(
#line 2537 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2539 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2541 "transform_hlds.unneeded_code.c"
{
#line 2543 "transform_hlds.unneeded_code.c"
  {
#line 2545 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2548 "transform_hlds.unneeded_code.c"
    {
#line 2550 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____location_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2553 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2555 "transform_hlds.unneeded_code.c"
  }
#line 2557 "transform_hlds.unneeded_code.c"
}

#line 2560 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0_10001(
#line 2563 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2565 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2567 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2569 "transform_hlds.unneeded_code.c"
{
#line 2571 "transform_hlds.unneeded_code.c"
  {
#line 2573 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2576 "transform_hlds.unneeded_code.c"
    {
#line 2578 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____location_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2581 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2583 "transform_hlds.unneeded_code.c"
  }
#line 2585 "transform_hlds.unneeded_code.c"
}

#line 2588 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0_10001(
#line 2591 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2593 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2595 "transform_hlds.unneeded_code.c"
{
#line 2597 "transform_hlds.unneeded_code.c"
  {
#line 2599 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2602 "transform_hlds.unneeded_code.c"
    {
#line 2604 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2607 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2609 "transform_hlds.unneeded_code.c"
  }
#line 2611 "transform_hlds.unneeded_code.c"
}

#line 2614 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0_10001(
#line 2617 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2619 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2621 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2623 "transform_hlds.unneeded_code.c"
{
#line 2625 "transform_hlds.unneeded_code.c"
  {
#line 2627 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2630 "transform_hlds.unneeded_code.c"
    {
#line 2632 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2635 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2637 "transform_hlds.unneeded_code.c"
  }
#line 2639 "transform_hlds.unneeded_code.c"
}

#line 2642 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001(
#line 2645 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2647 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2649 "transform_hlds.unneeded_code.c"
{
#line 2651 "transform_hlds.unneeded_code.c"
  {
#line 2653 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2656 "transform_hlds.unneeded_code.c"
    {
#line 2658 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____uc_option_values_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2661 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2663 "transform_hlds.unneeded_code.c"
  }
#line 2665 "transform_hlds.unneeded_code.c"
}

#line 2668 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001(
#line 2671 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2673 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2675 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2677 "transform_hlds.unneeded_code.c"
{
#line 2679 "transform_hlds.unneeded_code.c"
  {
#line 2681 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2684 "transform_hlds.unneeded_code.c"
    {
#line 2686 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____uc_option_values_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2689 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2691 "transform_hlds.unneeded_code.c"
  }
#line 2693 "transform_hlds.unneeded_code.c"
}

#line 2696 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001(
#line 2699 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2701 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2703 "transform_hlds.unneeded_code.c"
{
#line 2705 "transform_hlds.unneeded_code.c"
  {
#line 2707 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2710 "transform_hlds.unneeded_code.c"
    {
#line 2712 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2715 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2717 "transform_hlds.unneeded_code.c"
  }
#line 2719 "transform_hlds.unneeded_code.c"
}

#line 2722 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001(
#line 2725 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2727 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2729 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2731 "transform_hlds.unneeded_code.c"
{
#line 2733 "transform_hlds.unneeded_code.c"
  {
#line 2735 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2738 "transform_hlds.unneeded_code.c"
    {
#line 2740 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2743 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2745 "transform_hlds.unneeded_code.c"
  }
#line 2747 "transform_hlds.unneeded_code.c"
}

#line 2750 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0_10001(
#line 2753 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2755 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2757 "transform_hlds.unneeded_code.c"
{
#line 2759 "transform_hlds.unneeded_code.c"
  {
#line 2761 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2764 "transform_hlds.unneeded_code.c"
    {
#line 2766 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____where_needed_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2769 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2771 "transform_hlds.unneeded_code.c"
  }
#line 2773 "transform_hlds.unneeded_code.c"
}

#line 2776 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0_10001(
#line 2779 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2781 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2783 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2785 "transform_hlds.unneeded_code.c"
{
#line 2787 "transform_hlds.unneeded_code.c"
  {
#line 2789 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2792 "transform_hlds.unneeded_code.c"
    {
#line 2794 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____where_needed_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2797 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2799 "transform_hlds.unneeded_code.c"
  }
#line 2801 "transform_hlds.unneeded_code.c"
}

#line 2804 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0_10001(
#line 2807 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2809 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2811 "transform_hlds.unneeded_code.c"
{
#line 2813 "transform_hlds.unneeded_code.c"
  {
#line 2815 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2818 "transform_hlds.unneeded_code.c"
    {
#line 2820 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2823 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2825 "transform_hlds.unneeded_code.c"
  }
#line 2827 "transform_hlds.unneeded_code.c"
}

#line 2830 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0_10001(
#line 2833 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2835 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2837 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2839 "transform_hlds.unneeded_code.c"
{
#line 2841 "transform_hlds.unneeded_code.c"
  {
#line 2843 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2846 "transform_hlds.unneeded_code.c"
    {
#line 2848 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2851 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2853 "transform_hlds.unneeded_code.c"
  }
#line 2855 "transform_hlds.unneeded_code.c"
}

#line 2858 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0_10001(
#line 2861 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2863 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2865 "transform_hlds.unneeded_code.c"
{
#line 2867 "transform_hlds.unneeded_code.c"
  {
#line 2869 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2872 "transform_hlds.unneeded_code.c"
    {
#line 2874 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____where_needed_map_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2877 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2879 "transform_hlds.unneeded_code.c"
  }
#line 2881 "transform_hlds.unneeded_code.c"
}

#line 2884 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0_10001(
#line 2887 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2889 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2891 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2893 "transform_hlds.unneeded_code.c"
{
#line 2895 "transform_hlds.unneeded_code.c"
  {
#line 2897 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2900 "transform_hlds.unneeded_code.c"
    {
#line 2902 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____where_needed_map_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2905 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2907 "transform_hlds.unneeded_code.c"
  }
#line 2909 "transform_hlds.unneeded_code.c"
}

#line 763 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_53_93_95_48_11_p_0(
#line 763 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 763 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goals0_13,
#line 763 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goals_14,
#line 763 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 763 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_23,
#line 763 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_24,
#line 763 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_25,
#line 763 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26,
#line 763 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_27,
#line 763 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_28)
#line 763 "unneeded_code.m"
{
#line 769 "unneeded_code.m"
  {
#line 769 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 769 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BracketedGoals_20;
#line 769 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RevBracketedGoals_21;
#line 769 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RevGoals_22;

#line 770 "unneeded_code.m"
    {
#line 770 "unneeded_code.m"
      transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(transform_hlds__unneeded_code__Goals0_13, transform_hlds__unneeded_code__InitInstMap_15, &transform_hlds__unneeded_code__BracketedGoals_20);
    }
#line 771 "unneeded_code.m"
    {
#line 771 "unneeded_code.m"
      mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_bracketed_goal_0, transform_hlds__unneeded_code__BracketedGoals_20, &transform_hlds__unneeded_code__RevBracketedGoals_21);
    }
#line 772 "unneeded_code.m"
    {
#line 772 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__RevBracketedGoals_21, &transform_hlds__unneeded_code__RevGoals_22, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_23, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_24, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_25, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_27, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_28);
    }
#line 774 "unneeded_code.m"
    {
#line 774 "unneeded_code.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__RevGoals_22, transform_hlds__unneeded_code__Goals_14);
#line 774 "unneeded_code.m"
      return;
    }
#line 769 "unneeded_code.m"
  }
#line 763 "unneeded_code.m"
}

#line 645 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_109_97_110_100_95_118_97_114_95_101_118_101_114_121_119_104_101_114_101_95_95_91_49_93_95_48_2_p_0(
#line 645 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2)
#line 645 "unneeded_code.m"
{
#line 647 "unneeded_code.m"
  {
#line 647 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 647 "unneeded_code.m"
    *transform_hlds__unneeded_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 647 "unneeded_code.m"
  }
#line 645 "unneeded_code.m"
}

#line 548 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__548__1_2_p_0(
#line 548 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_40,
#line 548 "unneeded_code.m"
  MR_Integer * transform_hlds__unneeded_code__HeadVar__2_41)
#line 548 "unneeded_code.m"
{
#line 548 "unneeded_code.m"
  {
#line 548 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 548 "unneeded_code.m"
    {
#line 548 "unneeded_code.m"
      mercury__set__count_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unneeded_code__HeadVar__1_40, transform_hlds__unneeded_code__HeadVar__2_41);
#line 548 "unneeded_code.m"
      return;
    }
#line 548 "unneeded_code.m"
  }
#line 548 "unneeded_code.m"
}

#line 364 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__364__1_1_p_0(
#line 364 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__RefinedGoals_49)
#line 364 "unneeded_code.m"
{
#line 364 "unneeded_code.m"
  {
#line 364 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 364 "unneeded_code.m"
    {
#line 364 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__RefinedGoals_49);
    }
#line 364 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 364 "unneeded_code.m"
  }
#line 364 "unneeded_code.m"
}

#line 319 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__319__1_3_p_0(
#line 319 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_65,
#line 319 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_66,
#line 319 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_67)
#line 319 "unneeded_code.m"
{
#line 319 "unneeded_code.m"
  {
#line 319 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 320 "unneeded_code.m"
    {
#line 320 "unneeded_code.m"
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__HeadVar__1_65)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__unneeded_code__HeadVar__2_66, transform_hlds__unneeded_code__HeadVar__3_67);
#line 320 "unneeded_code.m"
      return;
    }
#line 319 "unneeded_code.m"
  }
#line 319 "unneeded_code.m"
}

#line 202 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0(
#line 202 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 202 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 202 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 202 "unneeded_code.m"
{
#line 202 "unneeded_code.m"
  {
#line 202 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 202 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_4 = transform_hlds__unneeded_code__HeadVar__2_2;
#line 202 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_5 = transform_hlds__unneeded_code__HeadVar__3_3;

#line 202 "unneeded_code.m"
    {
#line 202 "unneeded_code.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_5)));
#line 202 "unneeded_code.m"
      return;
    }
#line 202 "unneeded_code.m"
  }
#line 202 "unneeded_code.m"
}

#line 202 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0(
#line 202 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 202 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 202 "unneeded_code.m"
{
#line 202 "unneeded_code.m"
  {
#line 202 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 202 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_3 = transform_hlds__unneeded_code__HeadVar__1_1;
#line 202 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_4 = transform_hlds__unneeded_code__HeadVar__2_2;

#line 202 "unneeded_code.m"
    {
#line 202 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_4)));
    }
#line 202 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 202 "unneeded_code.m"
  }
#line 202 "unneeded_code.m"
}

#line 208 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(
#line 208 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 208 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 208 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 208 "unneeded_code.m"
{
#line 208 "unneeded_code.m"
  {
#line 208 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 208 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_4 = transform_hlds__unneeded_code__HeadVar__2_2;
#line 208 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_5 = transform_hlds__unneeded_code__HeadVar__3_3;

#line 208 "unneeded_code.m"
    {
#line 208 "unneeded_code.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[5], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_5)));
#line 208 "unneeded_code.m"
      return;
    }
#line 208 "unneeded_code.m"
  }
#line 208 "unneeded_code.m"
}

#line 208 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(
#line 208 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 208 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 208 "unneeded_code.m"
{
#line 208 "unneeded_code.m"
  {
#line 208 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 208 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_3 = transform_hlds__unneeded_code__HeadVar__1_1;
#line 208 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_4 = transform_hlds__unneeded_code__HeadVar__2_2;

#line 208 "unneeded_code.m"
    {
#line 208 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[5], ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_4)));
    }
#line 208 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 208 "unneeded_code.m"
  }
#line 208 "unneeded_code.m"
}

#line 204 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0(
#line 204 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 204 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 204 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 204 "unneeded_code.m"
{
#line 204 "unneeded_code.m"
  {
#line 204 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 204 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 204 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 204 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_8 == transform_hlds__unneeded_code__CastY_9);
#line 204 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3220 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 204 "unneeded_code.m"
    else
#line 204 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 204 "unneeded_code.m"
        else
#line 3232 "transform_hlds.unneeded_code.c"
          *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 1;
#line 204 "unneeded_code.m"
      else
#line 204 "unneeded_code.m"
        {
#line 204 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));

#line 204 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3243 "transform_hlds.unneeded_code.c"
            *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 2;
#line 204 "unneeded_code.m"
          else
#line 204 "unneeded_code.m"
            {
#line 204 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));

#line 204 "unneeded_code.m"
              {
#line 204 "unneeded_code.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[5], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__V_11_11)), ((MR_Box) (transform_hlds__unneeded_code__V_7_7)));
#line 204 "unneeded_code.m"
                return;
              }
#line 204 "unneeded_code.m"
            }
#line 204 "unneeded_code.m"
        }
#line 204 "unneeded_code.m"
  }
#line 204 "unneeded_code.m"
}

#line 204 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0(
#line 204 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 204 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 204 "unneeded_code.m"
{
#line 204 "unneeded_code.m"
  {
#line 204 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 204 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_7 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 204 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 204 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_7 == transform_hlds__unneeded_code__CastY_8);
#line 204 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 204 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 204 "unneeded_code.m"
    else
#line 204 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "unneeded_code.m"
        {
#line 204 "unneeded_code.m"
          MR_Integer transform_hlds__unneeded_code__CastX_3 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 204 "unneeded_code.m"
          MR_Integer transform_hlds__unneeded_code__CastY_4 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 204 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastY_4 == transform_hlds__unneeded_code__CastX_3);
#line 204 "unneeded_code.m"
        }
#line 204 "unneeded_code.m"
      else
#line 204 "unneeded_code.m"
        {
#line 204 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__TypeInfo_9_9;
#line 204 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_6_6;

#line 204 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 204 "unneeded_code.m"
          if (transform_hlds__unneeded_code__succeeded)
#line 204 "unneeded_code.m"
            {
#line 204 "unneeded_code.m"
              transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 3326 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__TypeInfo_9_9 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[5];
#line 3328 "transform_hlds.unneeded_code.c"
              {
#line 3330 "transform_hlds.unneeded_code.c"
                return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unneeded_code__TypeInfo_9_9, ((MR_Box) (transform_hlds__unneeded_code__V_5_5)), ((MR_Box) (transform_hlds__unneeded_code__V_6_6)));
              }
#line 204 "unneeded_code.m"
            }
#line 204 "unneeded_code.m"
        }
#line 204 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 204 "unneeded_code.m"
  }
#line 204 "unneeded_code.m"
}

#line 297 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(
#line 297 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 297 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 297 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 297 "unneeded_code.m"
{
#line 297 "unneeded_code.m"
  {
#line 297 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 297 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_15 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 297 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_16 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 297 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_15 == transform_hlds__unneeded_code__CastY_16);
#line 297 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3368 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 297 "unneeded_code.m"
    else
#line 297 "unneeded_code.m"
      {
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 3)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 2)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 3)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_12_12;

#line 297 "unneeded_code.m"
        {
#line 297 "unneeded_code.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__unneeded_code__V_12_12, transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_8_8);
        }
#line 3398 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_12_12 == (MR_Integer) 0);
#line 297 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 297 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 297 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_12_12;
#line 297 "unneeded_code.m"
        else
#line 297 "unneeded_code.m"
          {
#line 297 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_13_13;

#line 297 "unneeded_code.m"
            {
#line 297 "unneeded_code.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__unneeded_code__V_13_13, ((MR_Box) (transform_hlds__unneeded_code__V_5_5)), ((MR_Box) (transform_hlds__unneeded_code__V_9_9)));
            }
#line 3418 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_13_13 == (MR_Integer) 0);
#line 297 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 297 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 297 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_13_13;
#line 297 "unneeded_code.m"
            else
#line 297 "unneeded_code.m"
              {
#line 297 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_14_14;

#line 297 "unneeded_code.m"
                {
#line 297 "unneeded_code.m"
                  transform_hlds__unneeded_code____Compare____uc_option_values_0_0(&transform_hlds__unneeded_code__V_14_14, transform_hlds__unneeded_code__V_6_6, transform_hlds__unneeded_code__V_10_10);
                }
#line 3438 "transform_hlds.unneeded_code.c"
                transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_14_14 == (MR_Integer) 0);
#line 297 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 297 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 297 "unneeded_code.m"
                  *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_14_14;
#line 297 "unneeded_code.m"
                else
#line 297 "unneeded_code.m"
                  {
#line 297 "unneeded_code.m"
                    {
#line 297 "unneeded_code.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[4], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__V_7_7)), ((MR_Box) (transform_hlds__unneeded_code__V_11_11)));
#line 297 "unneeded_code.m"
                      return;
                    }
#line 297 "unneeded_code.m"
                  }
#line 297 "unneeded_code.m"
              }
#line 297 "unneeded_code.m"
          }
#line 297 "unneeded_code.m"
      }
#line 297 "unneeded_code.m"
  }
#line 297 "unneeded_code.m"
}

#line 297 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(
#line 297 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 297 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 297 "unneeded_code.m"
{
#line 297 "unneeded_code.m"
  {
#line 297 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 297 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_11 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 297 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_12 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 297 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_11 == transform_hlds__unneeded_code__CastY_12);
#line 297 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 297 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 297 "unneeded_code.m"
    else
#line 297 "unneeded_code.m"
      {
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TypeCtorInfo_14_14;
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TypeInfo_15_15;
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 2)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 3)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 297 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 3)));

#line 3519 "transform_hlds.unneeded_code.c"
        {
#line 3521 "transform_hlds.unneeded_code.c"
          transform_hlds__unneeded_code__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__unneeded_code__V_3_3, transform_hlds__unneeded_code__V_7_7);
        }
#line 297 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 297 "unneeded_code.m"
          {
#line 3528 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 3530 "transform_hlds.unneeded_code.c"
            {
#line 3532 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unneeded_code__TypeCtorInfo_14_14, ((MR_Box) (transform_hlds__unneeded_code__V_4_4)), ((MR_Box) (transform_hlds__unneeded_code__V_8_8)));
            }
#line 297 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 297 "unneeded_code.m"
              {
#line 3539 "transform_hlds.unneeded_code.c"
                {
#line 3541 "transform_hlds.unneeded_code.c"
                  transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____uc_option_values_0_0(transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_9_9);
                }
#line 297 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 297 "unneeded_code.m"
                  {
#line 3548 "transform_hlds.unneeded_code.c"
                    transform_hlds__unneeded_code__TypeInfo_15_15 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[4];
#line 3550 "transform_hlds.unneeded_code.c"
                    {
#line 3552 "transform_hlds.unneeded_code.c"
                      return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unneeded_code__TypeInfo_15_15, ((MR_Box) (transform_hlds__unneeded_code__V_6_6)), ((MR_Box) (transform_hlds__unneeded_code__V_10_10)));
                    }
#line 297 "unneeded_code.m"
                  }
#line 297 "unneeded_code.m"
              }
#line 297 "unneeded_code.m"
          }
#line 297 "unneeded_code.m"
      }
#line 297 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 297 "unneeded_code.m"
  }
#line 297 "unneeded_code.m"
}

#line 289 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0(
#line 289 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 289 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 289 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 289 "unneeded_code.m"
{
#line 289 "unneeded_code.m"
  {
#line 289 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 289 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_15 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 289 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_16 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 289 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_15 == transform_hlds__unneeded_code__CastY_16);
#line 289 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3594 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 289 "unneeded_code.m"
    else
#line 289 "unneeded_code.m"
      {
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 3)));
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 2)));
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 3)));
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_12_12;
#line 289 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_21_21 = (MR_Integer) transform_hlds__unneeded_code__V_4_4;
#line 289 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_22_22 = (MR_Integer) transform_hlds__unneeded_code__V_8_8;

#line 289 "unneeded_code.m"
        {
#line 289 "unneeded_code.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unneeded_code__V_12_12, transform_hlds__unneeded_code__V_21_21, transform_hlds__unneeded_code__V_22_22);
        }
#line 3628 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_12_12 == (MR_Integer) 0);
#line 289 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 289 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 289 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_12_12;
#line 289 "unneeded_code.m"
        else
#line 289 "unneeded_code.m"
          {
#line 289 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_13_13;
#line 289 "unneeded_code.m"
            MR_Integer transform_hlds__unneeded_code__V_23_23 = (MR_Integer) transform_hlds__unneeded_code__V_5_5;
#line 289 "unneeded_code.m"
            MR_Integer transform_hlds__unneeded_code__V_24_24 = (MR_Integer) transform_hlds__unneeded_code__V_9_9;

#line 289 "unneeded_code.m"
            {
#line 289 "unneeded_code.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unneeded_code__V_13_13, transform_hlds__unneeded_code__V_23_23, transform_hlds__unneeded_code__V_24_24);
            }
#line 3652 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_13_13 == (MR_Integer) 0);
#line 289 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 289 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 289 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_13_13;
#line 289 "unneeded_code.m"
            else
#line 289 "unneeded_code.m"
              {
#line 289 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_14_14;

#line 289 "unneeded_code.m"
                {
#line 289 "unneeded_code.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unneeded_code__V_14_14, transform_hlds__unneeded_code__V_6_6, transform_hlds__unneeded_code__V_10_10);
                }
#line 3672 "transform_hlds.unneeded_code.c"
                transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_14_14 == (MR_Integer) 0);
#line 289 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 289 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 289 "unneeded_code.m"
                  *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_14_14;
#line 289 "unneeded_code.m"
                else
#line 289 "unneeded_code.m"
                  {
#line 289 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__V_25_25 = (MR_Integer) transform_hlds__unneeded_code__V_7_7;
#line 289 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__V_26_26 = (MR_Integer) transform_hlds__unneeded_code__V_11_11;

#line 289 "unneeded_code.m"
                    {
#line 289 "unneeded_code.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_25_25, transform_hlds__unneeded_code__V_26_26);
#line 289 "unneeded_code.m"
                      return;
                    }
#line 289 "unneeded_code.m"
                  }
#line 289 "unneeded_code.m"
              }
#line 289 "unneeded_code.m"
          }
#line 289 "unneeded_code.m"
      }
#line 289 "unneeded_code.m"
  }
#line 289 "unneeded_code.m"
}

#line 289 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0(
#line 289 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 289 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 289 "unneeded_code.m"
{
#line 289 "unneeded_code.m"
  {
#line 289 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 289 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_11 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 289 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_12 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 289 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_11 == transform_hlds__unneeded_code__CastY_12);
#line 289 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 289 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 289 "unneeded_code.m"
    else
#line 289 "unneeded_code.m"
      {
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 2)));
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 3)));
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 289 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 3)));

#line 3754 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_3_3 == transform_hlds__unneeded_code__V_7_7);
#line 289 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 289 "unneeded_code.m"
          {
#line 3760 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_4_4 == transform_hlds__unneeded_code__V_8_8);
#line 289 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 289 "unneeded_code.m"
              {
#line 3766 "transform_hlds.unneeded_code.c"
                transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_5_5 == transform_hlds__unneeded_code__V_9_9);
#line 289 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 3770 "transform_hlds.unneeded_code.c"
                  transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_6_6 == transform_hlds__unneeded_code__V_10_10);
#line 289 "unneeded_code.m"
              }
#line 289 "unneeded_code.m"
          }
#line 289 "unneeded_code.m"
      }
#line 289 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 289 "unneeded_code.m"
  }
#line 289 "unneeded_code.m"
}

#line 216 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(
#line 216 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 216 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 216 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 216 "unneeded_code.m"
{
#line 216 "unneeded_code.m"
  {
#line 216 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 216 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_4 = transform_hlds__unneeded_code__HeadVar__2_2;
#line 216 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_5 = transform_hlds__unneeded_code__HeadVar__3_3;

#line 216 "unneeded_code.m"
    {
#line 216 "unneeded_code.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[3], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_5)));
#line 216 "unneeded_code.m"
      return;
    }
#line 216 "unneeded_code.m"
  }
#line 216 "unneeded_code.m"
}

#line 216 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(
#line 216 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 216 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 216 "unneeded_code.m"
{
#line 216 "unneeded_code.m"
  {
#line 216 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 216 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_3 = transform_hlds__unneeded_code__HeadVar__1_1;
#line 216 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_4 = transform_hlds__unneeded_code__HeadVar__2_2;

#line 216 "unneeded_code.m"
    {
#line 216 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[3], ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_4)));
    }
#line 216 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 216 "unneeded_code.m"
  }
#line 216 "unneeded_code.m"
}

#line 144 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0(
#line 144 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 144 "unneeded_code.m"
{
#line 144 "unneeded_code.m"
  {
#line 144 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 144 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 144 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_10 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 144 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_9 == transform_hlds__unneeded_code__CastY_10);
#line 144 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3871 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 144 "unneeded_code.m"
    else
#line 144 "unneeded_code.m"
      {
#line 144 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 144 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 144 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 144 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 144 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8;

#line 144 "unneeded_code.m"
        {
#line 144 "unneeded_code.m"
          transform_hlds__unneeded_code____Compare____branch_point_0_0(&transform_hlds__unneeded_code__V_8_8, transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_6_6);
        }
#line 3893 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_8_8 == (MR_Integer) 0);
#line 144 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 144 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 144 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_8_8;
#line 144 "unneeded_code.m"
        else
#line 144 "unneeded_code.m"
          {
#line 144 "unneeded_code.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_7_7);
#line 144 "unneeded_code.m"
            return;
          }
#line 144 "unneeded_code.m"
      }
#line 144 "unneeded_code.m"
  }
#line 144 "unneeded_code.m"
}

#line 144 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0(
#line 144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 144 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 144 "unneeded_code.m"
{
#line 144 "unneeded_code.m"
  {
#line 144 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 144 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_7 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 144 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 144 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_7 == transform_hlds__unneeded_code__CastY_8);
#line 144 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 144 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 144 "unneeded_code.m"
    else
#line 144 "unneeded_code.m"
      {
#line 144 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 144 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 144 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 144 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));

#line 3954 "transform_hlds.unneeded_code.c"
        {
#line 3956 "transform_hlds.unneeded_code.c"
          transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____branch_point_0_0(transform_hlds__unneeded_code__V_3_3, transform_hlds__unneeded_code__V_5_5);
        }
#line 144 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 3961 "transform_hlds.unneeded_code.c"
          transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_4_4 == transform_hlds__unneeded_code__V_6_6);
#line 144 "unneeded_code.m"
      }
#line 144 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 144 "unneeded_code.m"
  }
#line 144 "unneeded_code.m"
}

#line 112 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0(
#line 112 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 112 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 112 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 112 "unneeded_code.m"
{
#line 112 "unneeded_code.m"
  {
#line 112 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 112 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 112 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_10 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 112 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_9 == transform_hlds__unneeded_code__CastY_10);
#line 112 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3996 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "unneeded_code.m"
    else
#line 112 "unneeded_code.m"
      {
#line 112 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 112 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 112 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 112 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 112 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8;
#line 112 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_13_13 = (MR_Integer) transform_hlds__unneeded_code__V_4_4;
#line 112 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_14_14 = (MR_Integer) transform_hlds__unneeded_code__V_6_6;

#line 112 "unneeded_code.m"
        {
#line 112 "unneeded_code.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unneeded_code__V_8_8, transform_hlds__unneeded_code__V_13_13, transform_hlds__unneeded_code__V_14_14);
        }
#line 4022 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_8_8 == (MR_Integer) 0);
#line 112 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 112 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 112 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_8_8;
#line 112 "unneeded_code.m"
        else
#line 112 "unneeded_code.m"
          {
#line 112 "unneeded_code.m"
            transform_hlds__unneeded_code____Compare____branch_alts_0_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_7_7);
#line 112 "unneeded_code.m"
            return;
          }
#line 112 "unneeded_code.m"
      }
#line 112 "unneeded_code.m"
  }
#line 112 "unneeded_code.m"
}

#line 112 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0(
#line 112 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 112 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 112 "unneeded_code.m"
{
#line 112 "unneeded_code.m"
  {
#line 112 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 112 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_7 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 112 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 112 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_7 == transform_hlds__unneeded_code__CastY_8);
#line 112 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 112 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 112 "unneeded_code.m"
    else
#line 112 "unneeded_code.m"
      {
#line 112 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 112 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 112 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 112 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 112 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_10_10 = (MR_Integer) transform_hlds__unneeded_code__V_3_3;
#line 112 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_11_11 = (MR_Integer) transform_hlds__unneeded_code__V_5_5;

#line 4087 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_10_10 == transform_hlds__unneeded_code__V_11_11);
#line 112 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 4091 "transform_hlds.unneeded_code.c"
          {
#line 4093 "transform_hlds.unneeded_code.c"
            return transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____branch_alts_0_0(transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_6_6);
          }
#line 112 "unneeded_code.m"
      }
#line 112 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 112 "unneeded_code.m"
  }
#line 112 "unneeded_code.m"
}

#line 123 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0(
#line 123 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 123 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 123 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 123 "unneeded_code.m"
{
#line 123 "unneeded_code.m"
  {
#line 123 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 123 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 123 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 123 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_8 == transform_hlds__unneeded_code__CastY_9);
#line 123 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 4129 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 123 "unneeded_code.m"
    else
#line 123 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 123 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 123 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 123 "unneeded_code.m"
        else
#line 4141 "transform_hlds.unneeded_code.c"
          *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 1;
#line 123 "unneeded_code.m"
      else
#line 123 "unneeded_code.m"
        {
#line 123 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));

#line 123 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4152 "transform_hlds.unneeded_code.c"
            *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 2;
#line 123 "unneeded_code.m"
          else
#line 123 "unneeded_code.m"
            {
#line 123 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));

#line 123 "unneeded_code.m"
              {
#line 123 "unneeded_code.m"
                mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_11_11, transform_hlds__unneeded_code__V_7_7);
#line 123 "unneeded_code.m"
                return;
              }
#line 123 "unneeded_code.m"
            }
#line 123 "unneeded_code.m"
        }
#line 123 "unneeded_code.m"
  }
#line 123 "unneeded_code.m"
}

#line 123 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0(
#line 123 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 123 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 123 "unneeded_code.m"
{
#line 123 "unneeded_code.m"
  {
#line 123 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 123 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_7 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 123 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 123 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_7 == transform_hlds__unneeded_code__CastY_8);
#line 123 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 123 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 123 "unneeded_code.m"
    else
#line 123 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 123 "unneeded_code.m"
        {
#line 123 "unneeded_code.m"
          MR_Integer transform_hlds__unneeded_code__CastX_3 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 123 "unneeded_code.m"
          MR_Integer transform_hlds__unneeded_code__CastY_4 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 123 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastY_4 == transform_hlds__unneeded_code__CastX_3);
#line 123 "unneeded_code.m"
        }
#line 123 "unneeded_code.m"
      else
#line 123 "unneeded_code.m"
        {
#line 123 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 123 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_6_6;

#line 123 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 123 "unneeded_code.m"
          if (transform_hlds__unneeded_code__succeeded)
#line 123 "unneeded_code.m"
            {
#line 123 "unneeded_code.m"
              transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 4233 "transform_hlds.unneeded_code.c"
              {
#line 4235 "transform_hlds.unneeded_code.c"
                return transform_hlds__unneeded_code__succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_6_6);
              }
#line 123 "unneeded_code.m"
            }
#line 123 "unneeded_code.m"
        }
#line 123 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 123 "unneeded_code.m"
  }
#line 123 "unneeded_code.m"
}

#line 760 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(
#line 760 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 760 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 760 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 760 "unneeded_code.m"
{
#line 760 "unneeded_code.m"
  {
#line 760 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 760 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_12 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 760 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_13 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 760 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_12 == transform_hlds__unneeded_code__CastY_13);
#line 760 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 4273 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 760 "unneeded_code.m"
    else
#line 760 "unneeded_code.m"
      {
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 2)));
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_10_10;

#line 760 "unneeded_code.m"
        {
#line 760 "unneeded_code.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__unneeded_code__V_10_10, transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_7_7);
        }
#line 4299 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_10_10 == (MR_Integer) 0);
#line 760 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 760 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 760 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_10_10;
#line 760 "unneeded_code.m"
        else
#line 760 "unneeded_code.m"
          {
#line 760 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_11_11;

#line 760 "unneeded_code.m"
            {
#line 760 "unneeded_code.m"
              hlds__instmap____Compare____instmap_0_0(&transform_hlds__unneeded_code__V_11_11, transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_8_8);
            }
#line 4319 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_11_11 == (MR_Integer) 0);
#line 760 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 760 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 760 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_11_11;
#line 760 "unneeded_code.m"
            else
#line 760 "unneeded_code.m"
              {
#line 760 "unneeded_code.m"
                hlds__instmap____Compare____instmap_0_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_6_6, transform_hlds__unneeded_code__V_9_9);
#line 760 "unneeded_code.m"
                return;
              }
#line 760 "unneeded_code.m"
          }
#line 760 "unneeded_code.m"
      }
#line 760 "unneeded_code.m"
  }
#line 760 "unneeded_code.m"
}

#line 760 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(
#line 760 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 760 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 760 "unneeded_code.m"
{
#line 760 "unneeded_code.m"
  {
#line 760 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 760 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 760 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_10 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 760 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_9 == transform_hlds__unneeded_code__CastY_10);
#line 760 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 760 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 760 "unneeded_code.m"
    else
#line 760 "unneeded_code.m"
      {
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 2)));
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 760 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));

#line 4386 "transform_hlds.unneeded_code.c"
        {
#line 4388 "transform_hlds.unneeded_code.c"
          transform_hlds__unneeded_code__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__unneeded_code__V_3_3, transform_hlds__unneeded_code__V_6_6);
        }
#line 760 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 760 "unneeded_code.m"
          {
#line 4395 "transform_hlds.unneeded_code.c"
            {
#line 4397 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_7_7);
            }
#line 760 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 4402 "transform_hlds.unneeded_code.c"
              {
#line 4404 "transform_hlds.unneeded_code.c"
                return transform_hlds__unneeded_code__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_8_8);
              }
#line 760 "unneeded_code.m"
          }
#line 760 "unneeded_code.m"
      }
#line 760 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 760 "unneeded_code.m"
  }
#line 760 "unneeded_code.m"
}

#line 1186 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__get_parent_branch_point_6_p_0(
#line 1186 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 1186 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_8,
#line 1186 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchGoalId_9,
#line 1186 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchArmGoalId_10,
#line 1186 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchAlt_11,
#line 1186 "unneeded_code.m"
  MR_Integer * transform_hlds__unneeded_code__BranchNum_12)
#line 1186 "unneeded_code.m"
{
#line 1190 "unneeded_code.m"
  while (MR_TRUE)
#line 1190 "unneeded_code.m"
    {
#line 1190 "unneeded_code.m"
      /* tailcall optimized into a loop */
#line 1190 "unneeded_code.m"
      {
#line 1190 "unneeded_code.m"
        MR_bool transform_hlds__unneeded_code__succeeded;
#line 1190 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalContaining_13;
#line 1190 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ContainingGoalId_14;
#line 1190 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__LastStep_15;
#line 1191 "unneeded_code.m"
        MR_Box transform_hlds__unneeded_code__conv0_GoalContaining_13;

#line 1191 "unneeded_code.m"
        {
#line 1191 "unneeded_code.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, transform_hlds__unneeded_code__ContainingGoalMap_7, ((MR_Box) (transform_hlds__unneeded_code__GoalId_8)), &transform_hlds__unneeded_code__conv0_GoalContaining_13);
        }
#line 1191 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalContaining_13 = ((MR_Word) transform_hlds__unneeded_code__conv0_GoalContaining_13);
#line 1192 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalContaining_13)) == (MR_mktag((MR_Integer) 1)));
#line 1192 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1192 "unneeded_code.m"
          {
#line 1192 "unneeded_code.m"
            transform_hlds__unneeded_code__ContainingGoalId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__GoalContaining_13, (MR_Integer) 0)));
#line 1192 "unneeded_code.m"
            transform_hlds__unneeded_code__LastStep_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__GoalContaining_13, (MR_Integer) 1)));
#line 1199 "unneeded_code.m"
            if ((transform_hlds__unneeded_code__LastStep_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1206 "unneeded_code.m"
              {
#line 1207 "unneeded_code.m"
                *transform_hlds__unneeded_code__BranchGoalId_9 = transform_hlds__unneeded_code__ContainingGoalId_14;
#line 1208 "unneeded_code.m"
                *transform_hlds__unneeded_code__BranchArmGoalId_10 = transform_hlds__unneeded_code__GoalId_8;
#line 1209 "unneeded_code.m"
                *transform_hlds__unneeded_code__BranchAlt_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1210 "unneeded_code.m"
                *transform_hlds__unneeded_code__BranchNum_12 = (MR_Integer) 2;
#line 1206 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1206 "unneeded_code.m"
              }
#line 1199 "unneeded_code.m"
            else
#line 1199 "unneeded_code.m"
              if ((transform_hlds__unneeded_code__LastStep_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1200 "unneeded_code.m"
                {
#line 1201 "unneeded_code.m"
                  *transform_hlds__unneeded_code__BranchGoalId_9 = transform_hlds__unneeded_code__ContainingGoalId_14;
#line 1202 "unneeded_code.m"
                  *transform_hlds__unneeded_code__BranchArmGoalId_10 = transform_hlds__unneeded_code__GoalId_8;
#line 1203 "unneeded_code.m"
                  *transform_hlds__unneeded_code__BranchAlt_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1204 "unneeded_code.m"
                  *transform_hlds__unneeded_code__BranchNum_12 = (MR_Integer) 1;
#line 1200 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1200 "unneeded_code.m"
                }
#line 1199 "unneeded_code.m"
              else
#line 1199 "unneeded_code.m"
                if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__LastStep_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__LastStep_15, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1194 "unneeded_code.m"
                  {
#line 1194 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__MaybeNumAlts_17;

#line 1194 "unneeded_code.m"
                    *transform_hlds__unneeded_code__BranchNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__LastStep_15, (MR_Integer) 1)));
#line 1194 "unneeded_code.m"
                    transform_hlds__unneeded_code__MaybeNumAlts_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__LastStep_15, (MR_Integer) 2)));
#line 1195 "unneeded_code.m"
                    *transform_hlds__unneeded_code__BranchGoalId_9 = transform_hlds__unneeded_code__ContainingGoalId_14;
#line 1196 "unneeded_code.m"
                    *transform_hlds__unneeded_code__BranchArmGoalId_10 = transform_hlds__unneeded_code__GoalId_8;
#line 1197 "unneeded_code.m"
                    {
#line 1197 "unneeded_code.m"
                      MR_Word base;
#line 1197 "unneeded_code.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchAlt_11 = base;
#line 1197 "unneeded_code.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__MaybeNumAlts_17));
#line 1197 "unneeded_code.m"
                    }
#line 1194 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1194 "unneeded_code.m"
                  }
#line 1199 "unneeded_code.m"
                else
#line 1199 "unneeded_code.m"
                  if (((((((((((MR_tag((MR_Word) transform_hlds__unneeded_code__LastStep_15)) == (MR_mktag((MR_Integer) 1)))) || (((MR_tag((MR_Word) transform_hlds__unneeded_code__LastStep_15)) == (MR_mktag((MR_Integer) 2)))))) || ((transform_hlds__unneeded_code__LastStep_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))) || ((transform_hlds__unneeded_code__LastStep_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))))) || (((((MR_tag((MR_Word) transform_hlds__unneeded_code__LastStep_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__LastStep_15, (MR_Integer) 0)))) == (MR_Integer) 1))))))
#line 1218 "unneeded_code.m"
                    {
#line 1218 "unneeded_code.m"
                      /* direct tailcall eliminated */
#line 1218 "unneeded_code.m"
                      {
#line 1218 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__GoalId__tmp_copy_8 = transform_hlds__unneeded_code__ContainingGoalId_14;

#line 1218 "unneeded_code.m"
                        transform_hlds__unneeded_code__GoalId_8 = transform_hlds__unneeded_code__GoalId__tmp_copy_8;
#line 1218 "unneeded_code.m"
                      }
#line 1218 "unneeded_code.m"
                      continue;
#line 1218 "unneeded_code.m"
                    }
#line 1199 "unneeded_code.m"
                  else
#line 1199 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = MR_FALSE;
#line 1192 "unneeded_code.m"
          }
#line 1190 "unneeded_code.m"
        return transform_hlds__unneeded_code__succeeded;
#line 1190 "unneeded_code.m"
      }
#line 1190 "unneeded_code.m"
      break;
#line 1190 "unneeded_code.m"
    }
#line 1186 "unneeded_code.m"
}

#line 1145 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(
#line 1145 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 1145 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_2,
#line 1145 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3,
#line 1145 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__4_4,
#line 1145 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__5_5)
#line 1145 "unneeded_code.m"
{
#line 1149 "unneeded_code.m"
  while (MR_TRUE)
#line 1149 "unneeded_code.m"
    {
#line 1149 "unneeded_code.m"
      /* tailcall optimized into a loop */
#line 1149 "unneeded_code.m"
      {
#line 1149 "unneeded_code.m"
        MR_bool transform_hlds__unneeded_code__succeeded;

#line 1149 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1150 "unneeded_code.m"
          {
#line 1150 "unneeded_code.m"
            MR_Word base;
#line 1150 "unneeded_code.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "unneeded_code.m"
            *transform_hlds__unneeded_code__HeadVar__5_5 = base;
#line 1150 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__HeadVar__4_4));
#line 1150 "unneeded_code.m"
          }
#line 1149 "unneeded_code.m"
        else
#line 1152 "unneeded_code.m"
          {
#line 1152 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__First_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 1152 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 1152 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchPoint_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__First_11, (MR_Integer) 0)));
#line 1152 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__NewAlts_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__First_11, (MR_Integer) 1)));
#line 1180 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__OldAlts_17;
#line 1154 "unneeded_code.m"
            MR_Box transform_hlds__unneeded_code__conv0_OldAlts_17;

#line 1154 "unneeded_code.m"
            {
#line 1154 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__HeadVar__4_4, ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_15)), &transform_hlds__unneeded_code__conv0_OldAlts_17);
            }
#line 1154 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 1154 "unneeded_code.m"
              {
#line 1154 "unneeded_code.m"
                transform_hlds__unneeded_code__OldAlts_17 = ((MR_Word) transform_hlds__unneeded_code__conv0_OldAlts_17);
#line 1154 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1154 "unneeded_code.m"
              }
#line 1180 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 1155 "unneeded_code.m"
              {
#line 1155 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1155 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__Alts_18;
#line 1155 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchGoalId_19;
#line 1155 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchAlts_20;

#line 1155 "unneeded_code.m"
                {
#line 1155 "unneeded_code.m"
                  mercury__set__union_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_34_34, transform_hlds__unneeded_code__OldAlts_17, transform_hlds__unneeded_code__NewAlts_16, &transform_hlds__unneeded_code__Alts_18);
                }
#line 1156 "unneeded_code.m"
                transform_hlds__unneeded_code__BranchGoalId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_15, (MR_Integer) 0)));
#line 1156 "unneeded_code.m"
                transform_hlds__unneeded_code__BranchAlts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_15, (MR_Integer) 1)));
#line 1224 "unneeded_code.m"
                if ((transform_hlds__unneeded_code__BranchAlts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1224 "unneeded_code.m"
                  {
#line 1224 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__NumAlts_42;

#line 1225 "unneeded_code.m"
                    {
#line 1225 "unneeded_code.m"
                      mercury__set__count_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unneeded_code__Alts_18, &transform_hlds__unneeded_code__NumAlts_42);
                    }
#line 1226 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__NumAlts_42 == (MR_Integer) 2);
#line 1224 "unneeded_code.m"
                  }
#line 1224 "unneeded_code.m"
                else
#line 1228 "unneeded_code.m"
                  {
#line 1228 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_10_48;
#line 1228 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__NumFunctors_43;
#line 1228 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__NumAlts_45;
#line 1228 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__BranchAlts_20, (MR_Integer) 0)));

#line 1227 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 1227 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 1227 "unneeded_code.m"
                      {
#line 1227 "unneeded_code.m"
                        transform_hlds__unneeded_code__NumFunctors_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_46_46, (MR_Integer) 0)));
#line 4707 "transform_hlds.unneeded_code.c"
                        transform_hlds__unneeded_code__TypeCtorInfo_10_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1229 "unneeded_code.m"
                        {
#line 1229 "unneeded_code.m"
                          mercury__set__count_2_p_0(transform_hlds__unneeded_code__TypeCtorInfo_10_48, transform_hlds__unneeded_code__Alts_18, &transform_hlds__unneeded_code__NumAlts_45);
                        }
#line 1230 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__NumAlts_45 == transform_hlds__unneeded_code__NumFunctors_43);
#line 1227 "unneeded_code.m"
                      }
#line 1228 "unneeded_code.m"
                  }
#line 1175 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 1172 "unneeded_code.m"
                  {
#line 1172 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__ParentBranchGoalId_21;
#line 1172 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__ParentBranchAlt_23;
#line 1172 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__ParentBranchNum_24;
#line 1161 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__ParentBranchArmGoalId_22;

#line 1159 "unneeded_code.m"
                    {
#line 1159 "unneeded_code.m"
                      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code__get_parent_branch_point_6_p_0(transform_hlds__unneeded_code__ContainingGoalMap_1, transform_hlds__unneeded_code__BranchGoalId_19, &transform_hlds__unneeded_code__ParentBranchGoalId_21, &transform_hlds__unneeded_code__ParentBranchArmGoalId_22, &transform_hlds__unneeded_code__ParentBranchAlt_23, &transform_hlds__unneeded_code__ParentBranchNum_24);
                    }
#line 1161 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 1161 "unneeded_code.m"
                      {
#line 1162 "unneeded_code.m"
                        {
#line 1162 "unneeded_code.m"
                          transform_hlds__unneeded_code__succeeded = mdbcomp__goal_path__goal_id_inside_3_p_0(transform_hlds__unneeded_code__ContainingGoalMap_1, transform_hlds__unneeded_code__ParentBranchArmGoalId_22, transform_hlds__unneeded_code__CurrentId_2);
                        }
#line 1162 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 1161 "unneeded_code.m"
                      }
#line 1172 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 1165 "unneeded_code.m"
                      {
#line 1165 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__Branches1_25;
#line 1165 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__ParentBranchPoint_26;
#line 1165 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__ParentAlts_27;
#line 1165 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_28_28;
#line 1165 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_29_29;

#line 1165 "unneeded_code.m"
                        {
#line 1165 "unneeded_code.m"
                          mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_15)), transform_hlds__unneeded_code__HeadVar__4_4, &transform_hlds__unneeded_code__Branches1_25);
                        }
#line 1166 "unneeded_code.m"
                        {
#line 1166 "unneeded_code.m"
                          transform_hlds__unneeded_code__ParentBranchPoint_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1166 "unneeded_code.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__ParentBranchPoint_26, 0) = ((MR_Box) (transform_hlds__unneeded_code__ParentBranchGoalId_21));
#line 1166 "unneeded_code.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__ParentBranchPoint_26, 1) = ((MR_Box) (transform_hlds__unneeded_code__ParentBranchAlt_23));
#line 1166 "unneeded_code.m"
                        }
#line 1168 "unneeded_code.m"
                        {
#line 1168 "unneeded_code.m"
                          transform_hlds__unneeded_code__ParentAlts_27 = mercury__set__make_singleton_set_1_f_0(transform_hlds__unneeded_code__TypeCtorInfo_34_34, ((MR_Box) (transform_hlds__unneeded_code__ParentBranchNum_24)));
                        }
#line 1170 "unneeded_code.m"
                        {
#line 1170 "unneeded_code.m"
                          transform_hlds__unneeded_code__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1170 "unneeded_code.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_29_29, 0) = ((MR_Box) (transform_hlds__unneeded_code__ParentBranchPoint_26));
#line 1170 "unneeded_code.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_29_29, 1) = ((MR_Box) (transform_hlds__unneeded_code__ParentAlts_27));
#line 1170 "unneeded_code.m"
                        }
#line 1170 "unneeded_code.m"
                        {
#line 1170 "unneeded_code.m"
                          transform_hlds__unneeded_code__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "unneeded_code.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_28_28, 0) = ((MR_Box) (transform_hlds__unneeded_code__V_29_29));
#line 1170 "unneeded_code.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_28_28, 1) = ((MR_Box) (transform_hlds__unneeded_code__Rest_12));
#line 1170 "unneeded_code.m"
                        }
#line 1169 "unneeded_code.m"
                        /* direct tailcall eliminated */
#line 1169 "unneeded_code.m"
                        {
#line 1169 "unneeded_code.m"
                          MR_Word transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3 = transform_hlds__unneeded_code__V_28_28;
#line 1169 "unneeded_code.m"
                          MR_Word transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4 = transform_hlds__unneeded_code__Branches1_25;

#line 1169 "unneeded_code.m"
                          transform_hlds__unneeded_code__HeadVar__4_4 = transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4;
#line 1169 "unneeded_code.m"
                          transform_hlds__unneeded_code__HeadVar__3_3 = transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3;
#line 1169 "unneeded_code.m"
                        }
#line 1169 "unneeded_code.m"
                        continue;
#line 1165 "unneeded_code.m"
                      }
#line 1172 "unneeded_code.m"
                    else
#line 1173 "unneeded_code.m"
                      *transform_hlds__unneeded_code__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1172 "unneeded_code.m"
                  }
#line 1175 "unneeded_code.m"
                else
#line 1176 "unneeded_code.m"
                  {
#line 1176 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Branches1_30;

#line 1176 "unneeded_code.m"
                    {
#line 1176 "unneeded_code.m"
                      mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_15)), ((MR_Box) (transform_hlds__unneeded_code__Alts_18)), transform_hlds__unneeded_code__HeadVar__4_4, &transform_hlds__unneeded_code__Branches1_30);
                    }
#line 1177 "unneeded_code.m"
                    /* direct tailcall eliminated */
#line 1177 "unneeded_code.m"
                    {
#line 1177 "unneeded_code.m"
                      MR_Word transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3 = transform_hlds__unneeded_code__Rest_12;
#line 1177 "unneeded_code.m"
                      MR_Word transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4 = transform_hlds__unneeded_code__Branches1_30;

#line 1177 "unneeded_code.m"
                      transform_hlds__unneeded_code__HeadVar__4_4 = transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4;
#line 1177 "unneeded_code.m"
                      transform_hlds__unneeded_code__HeadVar__3_3 = transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3;
#line 1177 "unneeded_code.m"
                    }
#line 1177 "unneeded_code.m"
                    continue;
#line 1176 "unneeded_code.m"
                  }
#line 1155 "unneeded_code.m"
              }
#line 1180 "unneeded_code.m"
            else
#line 1181 "unneeded_code.m"
              {
#line 1181 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__Branches1_31;

#line 1181 "unneeded_code.m"
                {
#line 1181 "unneeded_code.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_15)), ((MR_Box) (transform_hlds__unneeded_code__NewAlts_16)), transform_hlds__unneeded_code__HeadVar__4_4, &transform_hlds__unneeded_code__Branches1_31);
                }
#line 1182 "unneeded_code.m"
                /* direct tailcall eliminated */
#line 1182 "unneeded_code.m"
                {
#line 1182 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3 = transform_hlds__unneeded_code__Rest_12;
#line 1182 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4 = transform_hlds__unneeded_code__Branches1_31;

#line 1182 "unneeded_code.m"
                  transform_hlds__unneeded_code__HeadVar__4_4 = transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4;
#line 1182 "unneeded_code.m"
                  transform_hlds__unneeded_code__HeadVar__3_3 = transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3;
#line 1182 "unneeded_code.m"
                }
#line 1182 "unneeded_code.m"
                continue;
#line 1181 "unneeded_code.m"
              }
#line 1152 "unneeded_code.m"
          }
#line 1149 "unneeded_code.m"
      }
#line 1149 "unneeded_code.m"
      break;
#line 1149 "unneeded_code.m"
    }
#line 1145 "unneeded_code.m"
}

#line 1074 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_ite_9_p_0(
#line 1074 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Cond0_10,
#line 1074 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Cond_11,
#line 1074 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Then0_12,
#line 1074 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Then_13,
#line 1074 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Else0_14,
#line 1074 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Else_15,
#line 1074 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_22,
#line 1074 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23,
#line 1074 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_17)
#line 1074 "unneeded_code.m"
{
#line 1079 "unneeded_code.m"
  {
#line 1079 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 1079 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Then1_18;
#line 1079 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Else1_19;
#line 1079 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_24_24;
#line 1079 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_25_25;
#line 1079 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26;
#line 1079 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30;
#line 1087 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ToInsertGoalsThen_20;
#line 1087 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_27_27;
#line 1084 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv0_ToInsertGoalsThen_20;
#line 1093 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ToInsertGoalsElse_21;
#line 1093 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_32_32;
#line 1090 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_ToInsertGoalsElse_21;

#line 1080 "unneeded_code.m"
    {
#line 1080 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Cond0_10, transform_hlds__unneeded_code__Cond_11, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_22, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_24_24);
    }
#line 1081 "unneeded_code.m"
    {
#line 1081 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Then0_12, &transform_hlds__unneeded_code__Then1_18, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_24_24, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_25_25);
    }
#line 1082 "unneeded_code.m"
    {
#line 1082 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Else0_14, &transform_hlds__unneeded_code__Else1_19, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_25_25, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26);
    }
#line 1084 "unneeded_code.m"
    {
#line 1084 "unneeded_code.m"
      transform_hlds__unneeded_code__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_27_27, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_17));
#line 1084 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_27_27, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1084 "unneeded_code.m"
    }
#line 1084 "unneeded_code.m"
    {
#line 1084 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26, ((MR_Box) (transform_hlds__unneeded_code__V_27_27)), &transform_hlds__unneeded_code__conv0_ToInsertGoalsThen_20);
    }
#line 1084 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1084 "unneeded_code.m"
      {
#line 1084 "unneeded_code.m"
        transform_hlds__unneeded_code__ToInsertGoalsThen_20 = ((MR_Word) transform_hlds__unneeded_code__conv0_ToInsertGoalsThen_20);
#line 1084 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1084 "unneeded_code.m"
      }
#line 1087 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1085 "unneeded_code.m"
      {
#line 1085 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Conj_48;
#line 1085 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalInfo0_50;
#line 1085 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_51_51;
#line 1103 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_49_49;

#line 1101 "unneeded_code.m"
        {
#line 1101 "unneeded_code.m"
          transform_hlds__unneeded_code__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_51_51, 0) = ((MR_Box) (transform_hlds__unneeded_code__Then1_18));
#line 1101 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1101 "unneeded_code.m"
        }
#line 1101 "unneeded_code.m"
        {
#line 1101 "unneeded_code.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__ToInsertGoalsThen_20, transform_hlds__unneeded_code__V_51_51, &transform_hlds__unneeded_code__Conj_48);
        }
#line 1103 "unneeded_code.m"
        transform_hlds__unneeded_code__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Then1_18, (MR_Integer) 0)));
#line 1103 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Then1_18, (MR_Integer) 1)));
#line 1104 "unneeded_code.m"
        {
#line 1104 "unneeded_code.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__unneeded_code__Conj_48, transform_hlds__unneeded_code__GoalInfo0_50, transform_hlds__unneeded_code__Then_13);
        }
#line 1086 "unneeded_code.m"
        {
#line 1086 "unneeded_code.m"
          mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__V_27_27)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30);
        }
#line 1085 "unneeded_code.m"
      }
#line 1087 "unneeded_code.m"
    else
#line 1088 "unneeded_code.m"
      {
#line 1088 "unneeded_code.m"
        *transform_hlds__unneeded_code__Then_13 = transform_hlds__unneeded_code__Then1_18;
#line 1088 "unneeded_code.m"
        transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26;
#line 1088 "unneeded_code.m"
      }
#line 1090 "unneeded_code.m"
    {
#line 1090 "unneeded_code.m"
      transform_hlds__unneeded_code__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_32_32, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_17));
#line 1090 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_32_32, 1) = ((MR_Box) ((MR_Integer) 2));
#line 1090 "unneeded_code.m"
    }
#line 1090 "unneeded_code.m"
    {
#line 1090 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30, ((MR_Box) (transform_hlds__unneeded_code__V_32_32)), &transform_hlds__unneeded_code__conv1_ToInsertGoalsElse_21);
    }
#line 1090 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1090 "unneeded_code.m"
      {
#line 1090 "unneeded_code.m"
        transform_hlds__unneeded_code__ToInsertGoalsElse_21 = ((MR_Word) transform_hlds__unneeded_code__conv1_ToInsertGoalsElse_21);
#line 1090 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1090 "unneeded_code.m"
      }
#line 1093 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1091 "unneeded_code.m"
      {
#line 1091 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Conj_57;
#line 1091 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalInfo0_59;
#line 1091 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_60_60;
#line 1103 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_58_58;

#line 1101 "unneeded_code.m"
        {
#line 1101 "unneeded_code.m"
          transform_hlds__unneeded_code__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_60_60, 0) = ((MR_Box) (transform_hlds__unneeded_code__Else1_19));
#line 1101 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1101 "unneeded_code.m"
        }
#line 1101 "unneeded_code.m"
        {
#line 1101 "unneeded_code.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__ToInsertGoalsElse_21, transform_hlds__unneeded_code__V_60_60, &transform_hlds__unneeded_code__Conj_57);
        }
#line 1103 "unneeded_code.m"
        transform_hlds__unneeded_code__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Else1_19, (MR_Integer) 0)));
#line 1103 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalInfo0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Else1_19, (MR_Integer) 1)));
#line 1104 "unneeded_code.m"
        {
#line 1104 "unneeded_code.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__unneeded_code__Conj_57, transform_hlds__unneeded_code__GoalInfo0_59, transform_hlds__unneeded_code__Else_15);
        }
#line 1092 "unneeded_code.m"
        {
#line 1092 "unneeded_code.m"
          mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__V_32_32)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23);
#line 1092 "unneeded_code.m"
          return;
        }
#line 1091 "unneeded_code.m"
      }
#line 1093 "unneeded_code.m"
    else
#line 1094 "unneeded_code.m"
      {
#line 1094 "unneeded_code.m"
        *transform_hlds__unneeded_code__Else_15 = transform_hlds__unneeded_code__Else1_19;
#line 1094 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30;
#line 1094 "unneeded_code.m"
      }
#line 1079 "unneeded_code.m"
  }
#line 1074 "unneeded_code.m"
}

#line 1057 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(
#line 1057 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1057 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1057 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1057 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4,
#line 1057 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_5,
#line 1057 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_6)
#line 1057 "unneeded_code.m"
{
#line 1061 "unneeded_code.m"
  {
#line 1061 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 1061 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1061 "unneeded_code.m"
      {
#line 1061 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1061 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3;
#line 1061 "unneeded_code.m"
      }
#line 1061 "unneeded_code.m"
    else
#line 1063 "unneeded_code.m"
      {
#line 1063 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 1063 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 1063 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_14;
#line 1063 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals_15;
#line 1063 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal1_19;
#line 1063 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23;
#line 1063 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26;
#line 1063 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_28_28;
#line 1068 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ToInsertGoals_20;
#line 1068 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_24_24;
#line 1065 "unneeded_code.m"
        MR_Box transform_hlds__unneeded_code__conv0_ToInsertGoals_20;

#line 1064 "unneeded_code.m"
        {
#line 1064 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Goal0_12, &transform_hlds__unneeded_code__Goal1_19, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23);
        }
#line 1065 "unneeded_code.m"
        {
#line 1065 "unneeded_code.m"
          transform_hlds__unneeded_code__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1065 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_24_24, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_5));
#line 1065 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_24_24, 1) = ((MR_Box) (transform_hlds__unneeded_code__BranchNum_6));
#line 1065 "unneeded_code.m"
        }
#line 1065 "unneeded_code.m"
        {
#line 1065 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23, ((MR_Box) (transform_hlds__unneeded_code__V_24_24)), &transform_hlds__unneeded_code__conv0_ToInsertGoals_20);
        }
#line 1065 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1065 "unneeded_code.m"
          {
#line 1065 "unneeded_code.m"
            transform_hlds__unneeded_code__ToInsertGoals_20 = ((MR_Word) transform_hlds__unneeded_code__conv0_ToInsertGoals_20);
#line 1065 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1065 "unneeded_code.m"
          }
#line 1068 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1066 "unneeded_code.m"
          {
#line 1066 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Conj_37;
#line 1066 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalInfo0_39;
#line 1066 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_40_40;
#line 1103 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_38_38;

#line 1101 "unneeded_code.m"
            {
#line 1101 "unneeded_code.m"
              transform_hlds__unneeded_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_40_40, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal1_19));
#line 1101 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1101 "unneeded_code.m"
            }
#line 1101 "unneeded_code.m"
            {
#line 1101 "unneeded_code.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__ToInsertGoals_20, transform_hlds__unneeded_code__V_40_40, &transform_hlds__unneeded_code__Conj_37);
            }
#line 1103 "unneeded_code.m"
            transform_hlds__unneeded_code__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_19, (MR_Integer) 0)));
#line 1103 "unneeded_code.m"
            transform_hlds__unneeded_code__GoalInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_19, (MR_Integer) 1)));
#line 1104 "unneeded_code.m"
            {
#line 1104 "unneeded_code.m"
              hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__unneeded_code__Conj_37, transform_hlds__unneeded_code__GoalInfo0_39, &transform_hlds__unneeded_code__Goal_14);
            }
#line 1067 "unneeded_code.m"
            {
#line 1067 "unneeded_code.m"
              mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__V_24_24)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26);
            }
#line 1066 "unneeded_code.m"
          }
#line 1068 "unneeded_code.m"
        else
#line 1069 "unneeded_code.m"
          {
#line 1069 "unneeded_code.m"
            transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal1_19;
#line 1069 "unneeded_code.m"
            transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23;
#line 1069 "unneeded_code.m"
          }
#line 1072 "unneeded_code.m"
        transform_hlds__unneeded_code__V_28_28 = (transform_hlds__unneeded_code__BranchNum_6 + (MR_Integer) 1);
#line 1071 "unneeded_code.m"
        {
#line 1071 "unneeded_code.m"
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
#line 1063 "unneeded_code.m"
      }
#line 1061 "unneeded_code.m"
  }
#line 1057 "unneeded_code.m"
}

#line 1038 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(
#line 1038 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1038 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1038 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1038 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4,
#line 1038 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_5,
#line 1038 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_6)
#line 1038 "unneeded_code.m"
{
#line 1042 "unneeded_code.m"
  {
#line 1042 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 1042 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1042 "unneeded_code.m"
      {
#line 1042 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1042 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3;
#line 1042 "unneeded_code.m"
      }
#line 1042 "unneeded_code.m"
    else
#line 1044 "unneeded_code.m"
      {
#line 1044 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Case0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 1044 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 1044 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Case_14;
#line 1044 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Cases_15;
#line 1044 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_12, (MR_Integer) 0)));
#line 1044 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_12, (MR_Integer) 1)));
#line 1044 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_12, (MR_Integer) 2)));
#line 1044 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal1_22;
#line 1044 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_24;
#line 1044 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27;
#line 1044 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30;
#line 1044 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_32_32;
#line 1050 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ToInsertGoals_23;
#line 1050 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_28_28;
#line 1047 "unneeded_code.m"
        MR_Box transform_hlds__unneeded_code__conv0_ToInsertGoals_23;

#line 1046 "unneeded_code.m"
        {
#line 1046 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Goal0_21, &transform_hlds__unneeded_code__Goal1_22, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27);
        }
#line 1047 "unneeded_code.m"
        {
#line 1047 "unneeded_code.m"
          transform_hlds__unneeded_code__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1047 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_28_28, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_5));
#line 1047 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_28_28, 1) = ((MR_Box) (transform_hlds__unneeded_code__BranchNum_6));
#line 1047 "unneeded_code.m"
        }
#line 1047 "unneeded_code.m"
        {
#line 1047 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27, ((MR_Box) (transform_hlds__unneeded_code__V_28_28)), &transform_hlds__unneeded_code__conv0_ToInsertGoals_23);
        }
#line 1047 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1047 "unneeded_code.m"
          {
#line 1047 "unneeded_code.m"
            transform_hlds__unneeded_code__ToInsertGoals_23 = ((MR_Word) transform_hlds__unneeded_code__conv0_ToInsertGoals_23);
#line 1047 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1047 "unneeded_code.m"
          }
#line 1050 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1048 "unneeded_code.m"
          {
#line 1048 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Conj_41;
#line 1048 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalInfo0_43;
#line 1048 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_44_44;
#line 1103 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_42_42;

#line 1101 "unneeded_code.m"
            {
#line 1101 "unneeded_code.m"
              transform_hlds__unneeded_code__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_44_44, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal1_22));
#line 1101 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1101 "unneeded_code.m"
            }
#line 1101 "unneeded_code.m"
            {
#line 1101 "unneeded_code.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__ToInsertGoals_23, transform_hlds__unneeded_code__V_44_44, &transform_hlds__unneeded_code__Conj_41);
            }
#line 1103 "unneeded_code.m"
            transform_hlds__unneeded_code__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_22, (MR_Integer) 0)));
#line 1103 "unneeded_code.m"
            transform_hlds__unneeded_code__GoalInfo0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_22, (MR_Integer) 1)));
#line 1104 "unneeded_code.m"
            {
#line 1104 "unneeded_code.m"
              hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__unneeded_code__Conj_41, transform_hlds__unneeded_code__GoalInfo0_43, &transform_hlds__unneeded_code__Goal_24);
            }
#line 1049 "unneeded_code.m"
            {
#line 1049 "unneeded_code.m"
              mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__V_28_28)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30);
            }
#line 1048 "unneeded_code.m"
          }
#line 1050 "unneeded_code.m"
        else
#line 1051 "unneeded_code.m"
          {
#line 1051 "unneeded_code.m"
            transform_hlds__unneeded_code__Goal_24 = transform_hlds__unneeded_code__Goal1_22;
#line 1051 "unneeded_code.m"
            transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27;
#line 1051 "unneeded_code.m"
          }
#line 1053 "unneeded_code.m"
        {
#line 1053 "unneeded_code.m"
          transform_hlds__unneeded_code__Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1053 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_14, 0) = ((MR_Box) (transform_hlds__unneeded_code__MainConsId_19));
#line 1053 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_14, 1) = ((MR_Box) (transform_hlds__unneeded_code__OtherConsIds_20));
#line 1053 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_14, 2) = ((MR_Box) (transform_hlds__unneeded_code__Goal_24));
#line 1053 "unneeded_code.m"
        }
#line 1055 "unneeded_code.m"
        transform_hlds__unneeded_code__V_32_32 = (transform_hlds__unneeded_code__BranchNum_6 + (MR_Integer) 1);
#line 1054 "unneeded_code.m"
        {
#line 1054 "unneeded_code.m"
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
#line 1044 "unneeded_code.m"
      }
#line 1042 "unneeded_code.m"
  }
#line 1038 "unneeded_code.m"
}

#line 1025 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(
#line 1025 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1025 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1025 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1025 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4)
#line 1025 "unneeded_code.m"
{
#line 1028 "unneeded_code.m"
  {
#line 1028 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 1028 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1028 "unneeded_code.m"
      {
#line 1028 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1028 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3;
#line 1028 "unneeded_code.m"
      }
#line 1028 "unneeded_code.m"
    else
#line 1029 "unneeded_code.m"
      {
#line 1029 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 1029 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 1029 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__HeadGoal_12;
#line 1029 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TailGoals_13;
#line 1029 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_18_18;
#line 1034 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__HeadGoals_14;
#line 1032 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_20_20;
#line 1032 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_21_21;
#line 1032 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_15_15;

#line 1030 "unneeded_code.m"
        {
#line 1030 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Goal0_8, &transform_hlds__unneeded_code__HeadGoal_12, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_18_18);
        }
#line 1031 "unneeded_code.m"
        {
#line 1031 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(transform_hlds__unneeded_code__Goals0_9, &transform_hlds__unneeded_code__TailGoals_13, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_18_18, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4);
        }
#line 1032 "unneeded_code.m"
        transform_hlds__unneeded_code__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadGoal_12, (MR_Integer) 0)));
#line 1032 "unneeded_code.m"
        transform_hlds__unneeded_code__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadGoal_12, (MR_Integer) 1)));
#line 1032 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = ((((MR_tag((MR_Word) transform_hlds__unneeded_code__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1032 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1032 "unneeded_code.m"
          {
#line 1032 "unneeded_code.m"
            transform_hlds__unneeded_code__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__V_20_20, (MR_Integer) 1)));
#line 1032 "unneeded_code.m"
            transform_hlds__unneeded_code__HeadGoals_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__V_20_20, (MR_Integer) 2)));
#line 1032 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_21_21 == (MR_Integer) 0);
#line 1032 "unneeded_code.m"
          }
#line 1034 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1033 "unneeded_code.m"
          {
#line 1033 "unneeded_code.m"
            {
#line 1033 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__HeadGoals_14, transform_hlds__unneeded_code__TailGoals_13);
            }
#line 1033 "unneeded_code.m"
          }
#line 1034 "unneeded_code.m"
        else
#line 1035 "unneeded_code.m"
          {
#line 1035 "unneeded_code.m"
            MR_Word base;
#line 1035 "unneeded_code.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "unneeded_code.m"
            *transform_hlds__unneeded_code__HeadVar__2_2 = base;
#line 1035 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__HeadGoal_12));
#line 1035 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__TailGoals_13));
#line 1035 "unneeded_code.m"
          }
#line 1029 "unneeded_code.m"
      }
#line 1028 "unneeded_code.m"
  }
#line 1025 "unneeded_code.m"
}

#line 963 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(
#line 963 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_5,
#line 963 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_6,
#line 963 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58,
#line 963 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59)
#line 963 "unneeded_code.m"
{
#line 966 "unneeded_code.m"
  {
#line 966 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 966 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_5, (MR_Integer) 0)));
#line 966 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_5, (MR_Integer) 1)));

#line 975 "unneeded_code.m"
    if (((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 0))))
#line 1007 "unneeded_code.m"
      {
#line 1007 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__NegGoal0_51 = (MR_Word) MR_body(((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8), (MR_Integer) 0);
#line 1007 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__NegGoal_52;
#line 1007 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalExpr_77;

#line 1008 "unneeded_code.m"
        {
#line 1008 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__NegGoal0_51, &transform_hlds__unneeded_code__NegGoal_52, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59);
        }
#line 1009 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__unneeded_code__NegGoal_52);
#line 1010 "unneeded_code.m"
        {
#line 1010 "unneeded_code.m"
          MR_Word base;
#line 1010 "unneeded_code.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "unneeded_code.m"
          *transform_hlds__unneeded_code__Goal_6 = base;
#line 1010 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_77));
#line 1010 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 1010 "unneeded_code.m"
        }
#line 1007 "unneeded_code.m"
      }
#line 975 "unneeded_code.m"
    else
#line 975 "unneeded_code.m"
      if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 976 "unneeded_code.m"
        {
#line 976 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__ConjType_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 976 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__Conjuncts0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 2)));

#line 982 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__ConjType_33 == (MR_Integer) 1))
#line 983 "unneeded_code.m"
            {
#line 984 "unneeded_code.m"
              *transform_hlds__unneeded_code__Goal_6 = transform_hlds__unneeded_code__Goal0_5;
#line 984 "unneeded_code.m"
              *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58;
#line 983 "unneeded_code.m"
            }
#line 982 "unneeded_code.m"
          else
#line 978 "unneeded_code.m"
            {
#line 978 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Conjuncts_35;
#line 978 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_36;

#line 979 "unneeded_code.m"
              {
#line 979 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(transform_hlds__unneeded_code__Conjuncts0_34, &transform_hlds__unneeded_code__Conjuncts_35, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59);
              }
#line 980 "unneeded_code.m"
              {
#line 980 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 980 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 980 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_36, 1) = ((MR_Box) (transform_hlds__unneeded_code__ConjType_33));
#line 980 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_36, 2) = ((MR_Box) (transform_hlds__unneeded_code__Conjuncts_35));
#line 980 "unneeded_code.m"
              }
#line 981 "unneeded_code.m"
              {
#line 981 "unneeded_code.m"
                MR_Word base;
#line 981 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 981 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_6 = base;
#line 981 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_36));
#line 981 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 981 "unneeded_code.m"
              }
#line 978 "unneeded_code.m"
            }
#line 976 "unneeded_code.m"
        }
#line 975 "unneeded_code.m"
      else
#line 975 "unneeded_code.m"
        if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 993 "unneeded_code.m"
          {
#line 993 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Disjuncts0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 993 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Disjuncts_43;
#line 993 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalExpr_73;
#line 993 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalId_74;

#line 994 "unneeded_code.m"
            {
#line 994 "unneeded_code.m"
              transform_hlds__unneeded_code__GoalId_74 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_9);
            }
#line 995 "unneeded_code.m"
            {
#line 995 "unneeded_code.m"
              transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(transform_hlds__unneeded_code__Disjuncts0_42, &transform_hlds__unneeded_code__Disjuncts_43, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59, transform_hlds__unneeded_code__GoalId_74, (MR_Integer) 1);
            }
#line 997 "unneeded_code.m"
            {
#line 997 "unneeded_code.m"
              transform_hlds__unneeded_code__GoalExpr_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "unneeded_code.m"
              MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 997 "unneeded_code.m"
              MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_73, 1) = ((MR_Box) (transform_hlds__unneeded_code__Disjuncts_43));
#line 997 "unneeded_code.m"
            }
#line 998 "unneeded_code.m"
            {
#line 998 "unneeded_code.m"
              MR_Word base;
#line 998 "unneeded_code.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 998 "unneeded_code.m"
              *transform_hlds__unneeded_code__Goal_6 = base;
#line 998 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_73));
#line 998 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 998 "unneeded_code.m"
            }
#line 993 "unneeded_code.m"
          }
#line 975 "unneeded_code.m"
        else
#line 975 "unneeded_code.m"
          if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1000 "unneeded_code.m"
            {
#line 1000 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Quant_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 1000 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cond0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 2)));
#line 1000 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Then0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 3)));
#line 1000 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Else0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 4)));
#line 1000 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cond_48;
#line 1000 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Then_49;
#line 1000 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Else_50;
#line 1000 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_75;
#line 1000 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalId_76;

#line 1001 "unneeded_code.m"
              {
#line 1001 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalId_76 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_9);
              }
#line 1002 "unneeded_code.m"
              {
#line 1002 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_refine_ite_9_p_0(transform_hlds__unneeded_code__Cond0_45, &transform_hlds__unneeded_code__Cond_48, transform_hlds__unneeded_code__Then0_46, &transform_hlds__unneeded_code__Then_49, transform_hlds__unneeded_code__Else0_47, &transform_hlds__unneeded_code__Else_50, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59, transform_hlds__unneeded_code__GoalId_76);
              }
#line 1004 "unneeded_code.m"
              {
#line 1004 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1004 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 1) = ((MR_Box) (transform_hlds__unneeded_code__Quant_44));
#line 1004 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 2) = ((MR_Box) (transform_hlds__unneeded_code__Cond_48));
#line 1004 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 3) = ((MR_Box) (transform_hlds__unneeded_code__Then_49));
#line 1004 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 4) = ((MR_Box) (transform_hlds__unneeded_code__Else_50));
#line 1004 "unneeded_code.m"
              }
#line 1005 "unneeded_code.m"
              {
#line 1005 "unneeded_code.m"
                MR_Word base;
#line 1005 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_6 = base;
#line 1005 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_75));
#line 1005 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 1005 "unneeded_code.m"
              }
#line 1000 "unneeded_code.m"
            }
#line 975 "unneeded_code.m"
          else
#line 975 "unneeded_code.m"
            if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1012 "unneeded_code.m"
              {
#line 1012 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__Reason_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 1012 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__SomeGoal0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 2)));
#line 1013 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_63_63;
#line 1013 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_55_55;

#line 1013 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = ((((MR_tag((MR_Word) transform_hlds__unneeded_code__Reason_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_53, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1013 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 1013 "unneeded_code.m"
                  {
#line 1013 "unneeded_code.m"
                    transform_hlds__unneeded_code__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_53, (MR_Integer) 1)));
#line 1013 "unneeded_code.m"
                    transform_hlds__unneeded_code__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_53, (MR_Integer) 2)));
#line 1013 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_63_63 == (MR_Integer) 1);
#line 1013 "unneeded_code.m"
                  }
#line 1015 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 1014 "unneeded_code.m"
                  {
#line 1014 "unneeded_code.m"
                    *transform_hlds__unneeded_code__Goal_6 = transform_hlds__unneeded_code__Goal0_5;
#line 1014 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58;
#line 1014 "unneeded_code.m"
                  }
#line 1015 "unneeded_code.m"
                else
#line 1016 "unneeded_code.m"
                  {
#line 1016 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__SomeGoal_56;
#line 1016 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalExpr_78;

#line 1016 "unneeded_code.m"
                    {
#line 1016 "unneeded_code.m"
                      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__SomeGoal0_54, &transform_hlds__unneeded_code__SomeGoal_56, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59);
                    }
#line 1017 "unneeded_code.m"
                    {
#line 1017 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalExpr_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1017 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_78, 1) = ((MR_Box) (transform_hlds__unneeded_code__Reason_53));
#line 1017 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_78, 2) = ((MR_Box) (transform_hlds__unneeded_code__SomeGoal_56));
#line 1017 "unneeded_code.m"
                    }
#line 1018 "unneeded_code.m"
                    {
#line 1018 "unneeded_code.m"
                      MR_Word base;
#line 1018 "unneeded_code.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "unneeded_code.m"
                      *transform_hlds__unneeded_code__Goal_6 = base;
#line 1018 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_78));
#line 1018 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 1018 "unneeded_code.m"
                    }
#line 1016 "unneeded_code.m"
                  }
#line 1012 "unneeded_code.m"
              }
#line 975 "unneeded_code.m"
            else
#line 975 "unneeded_code.m"
              if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1021 "unneeded_code.m"
                {
#line 1022 "unneeded_code.m"
                  {
#line 1022 "unneeded_code.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unneeded_code", (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_refine_goal\'/4", (MR_String) "shorthand");
#line 1022 "unneeded_code.m"
                    return;
                  }
#line 1021 "unneeded_code.m"
                }
#line 975 "unneeded_code.m"
              else
#line 975 "unneeded_code.m"
                if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 987 "unneeded_code.m"
                  {
#line 987 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__SwitchVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 987 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__CanFail_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 2)));
#line 987 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 3)));
#line 987 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalId_40;
#line 987 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Cases_41;
#line 987 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalExpr_72;

#line 988 "unneeded_code.m"
                    {
#line 988 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalId_40 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_9);
                    }
#line 989 "unneeded_code.m"
                    {
#line 989 "unneeded_code.m"
                      transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(transform_hlds__unneeded_code__Cases0_39, &transform_hlds__unneeded_code__Cases_41, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59, transform_hlds__unneeded_code__GoalId_40, (MR_Integer) 1);
                    }
#line 990 "unneeded_code.m"
                    {
#line 990 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalExpr_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 990 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 990 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_72, 1) = ((MR_Box) (transform_hlds__unneeded_code__SwitchVar_37));
#line 990 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_72, 2) = ((MR_Box) (transform_hlds__unneeded_code__CanFail_38));
#line 990 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_72, 3) = ((MR_Box) (transform_hlds__unneeded_code__Cases_41));
#line 990 "unneeded_code.m"
                    }
#line 991 "unneeded_code.m"
                    {
#line 991 "unneeded_code.m"
                      MR_Word base;
#line 991 "unneeded_code.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 991 "unneeded_code.m"
                      *transform_hlds__unneeded_code__Goal_6 = base;
#line 991 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_72));
#line 991 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 991 "unneeded_code.m"
                    }
#line 987 "unneeded_code.m"
                  }
#line 975 "unneeded_code.m"
                else
#line 973 "unneeded_code.m"
                  {
#line 974 "unneeded_code.m"
                    *transform_hlds__unneeded_code__Goal_6 = transform_hlds__unneeded_code__Goal0_5;
#line 974 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58;
#line 973 "unneeded_code.m"
                  }
#line 966 "unneeded_code.m"
  }
#line 963 "unneeded_code.m"
}

#line 935 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__add_alt_start_7_p_0(
#line 935 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 935 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 935 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_3,
#line 935 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_4,
#line 935 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_5,
#line 935 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6,
#line 935 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7)
#line 935 "unneeded_code.m"
{
#line 939 "unneeded_code.m"
  while (MR_TRUE)
#line 939 "unneeded_code.m"
    {
#line 939 "unneeded_code.m"
      /* tailcall optimized into a loop */
#line 939 "unneeded_code.m"
      {
#line 939 "unneeded_code.m"
        MR_bool transform_hlds__unneeded_code__succeeded;

#line 939 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 939 "unneeded_code.m"
          *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6;
#line 939 "unneeded_code.m"
        else
#line 941 "unneeded_code.m"
          {
#line 941 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Var_16;
#line 941 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchWhere0_17;
#line 941 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__WhereNeededList_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 941 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchWhere_25;
#line 941 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 941 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_32_32;
#line 955 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__OldWhere_27;
#line 951 "unneeded_code.m"
            MR_Box transform_hlds__unneeded_code__conv0_OldWhere_27;

#line 940 "unneeded_code.m"
            transform_hlds__unneeded_code__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_31_31, (MR_Integer) 0)));
#line 940 "unneeded_code.m"
            transform_hlds__unneeded_code__BranchWhere0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_31_31, (MR_Integer) 1)));
#line 947 "unneeded_code.m"
            if ((transform_hlds__unneeded_code__BranchWhere0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 943 "unneeded_code.m"
              {
#line 943 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchNumSet_23;
#line 943 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchMap_24;

#line 944 "unneeded_code.m"
                {
#line 944 "unneeded_code.m"
                  transform_hlds__unneeded_code__BranchNumSet_23 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__unneeded_code__BranchNum_4)));
                }
#line 945 "unneeded_code.m"
                {
#line 945 "unneeded_code.m"
                  transform_hlds__unneeded_code__BranchMap_24 = mercury__map__singleton_2_f_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_3)), ((MR_Box) (transform_hlds__unneeded_code__BranchNumSet_23)));
                }
#line 946 "unneeded_code.m"
                {
#line 946 "unneeded_code.m"
                  transform_hlds__unneeded_code__BranchWhere_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 946 "unneeded_code.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__BranchWhere_25, 0) = ((MR_Box) (transform_hlds__unneeded_code__BranchMap_24));
#line 946 "unneeded_code.m"
                }
#line 943 "unneeded_code.m"
              }
#line 947 "unneeded_code.m"
            else
#line 949 "unneeded_code.m"
              transform_hlds__unneeded_code__BranchWhere_25 = transform_hlds__unneeded_code__BranchWhere0_17;
#line 951 "unneeded_code.m"
            {
#line 951 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6, ((MR_Box) (transform_hlds__unneeded_code__Var_16)), &transform_hlds__unneeded_code__conv0_OldWhere_27);
            }
#line 951 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 951 "unneeded_code.m"
              {
#line 951 "unneeded_code.m"
                transform_hlds__unneeded_code__OldWhere_27 = ((MR_Word) transform_hlds__unneeded_code__conv0_OldWhere_27);
#line 951 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 951 "unneeded_code.m"
              }
#line 955 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 953 "unneeded_code.m"
              {
#line 953 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__CombinedWhere_28;
#line 953 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchesA_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__BranchWhere_25, (MR_Integer) 0)));

#line 1127 "unneeded_code.m"
                if ((transform_hlds__unneeded_code__OldWhere_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1126 "unneeded_code.m"
                  transform_hlds__unneeded_code__CombinedWhere_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1127 "unneeded_code.m"
                else
#line 1128 "unneeded_code.m"
                  {
#line 1128 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchesB_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__OldWhere_27, (MR_Integer) 0)));
#line 1128 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchesList_56;

#line 1141 "unneeded_code.m"
                    {
#line 1141 "unneeded_code.m"
                      mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__BranchesA_49, &transform_hlds__unneeded_code__BranchesList_56);
                    }
#line 1142 "unneeded_code.m"
                    {
#line 1142 "unneeded_code.m"
                      transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_1, transform_hlds__unneeded_code__CurrentId_5, transform_hlds__unneeded_code__BranchesList_56, transform_hlds__unneeded_code__BranchesB_50, &transform_hlds__unneeded_code__CombinedWhere_28);
                    }
#line 1128 "unneeded_code.m"
                  }
#line 954 "unneeded_code.m"
                {
#line 954 "unneeded_code.m"
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_16)), ((MR_Box) (transform_hlds__unneeded_code__CombinedWhere_28)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_32_32);
                }
#line 953 "unneeded_code.m"
              }
#line 955 "unneeded_code.m"
            else
#line 956 "unneeded_code.m"
              {
#line 956 "unneeded_code.m"
                {
#line 956 "unneeded_code.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_16)), ((MR_Box) (transform_hlds__unneeded_code__BranchWhere_25)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_32_32);
                }
#line 956 "unneeded_code.m"
              }
#line 958 "unneeded_code.m"
            /* direct tailcall eliminated */
#line 958 "unneeded_code.m"
            {
#line 958 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__HeadVar__2__tmp_copy_2 = transform_hlds__unneeded_code__WhereNeededList_18;
#line 958 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0__tmp_copy_6 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_32_32;

#line 958 "unneeded_code.m"
              transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0__tmp_copy_6;
#line 958 "unneeded_code.m"
              transform_hlds__unneeded_code__HeadVar__2_2 = transform_hlds__unneeded_code__HeadVar__2__tmp_copy_2;
#line 958 "unneeded_code.m"
            }
#line 958 "unneeded_code.m"
            continue;
#line 941 "unneeded_code.m"
          }
#line 939 "unneeded_code.m"
      }
#line 939 "unneeded_code.m"
      break;
#line 939 "unneeded_code.m"
    }
#line 935 "unneeded_code.m"
}

#line 912 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__add_where_needed_list_5_p_0(
#line 912 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 912 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 912 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_3,
#line 912 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4,
#line 912 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5)
#line 912 "unneeded_code.m"
{
#line 916 "unneeded_code.m"
  while (MR_TRUE)
#line 916 "unneeded_code.m"
    {
#line 916 "unneeded_code.m"
      /* tailcall optimized into a loop */
#line 916 "unneeded_code.m"
      {
#line 916 "unneeded_code.m"
        MR_bool transform_hlds__unneeded_code__succeeded;

#line 916 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 916 "unneeded_code.m"
          *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4;
#line 916 "unneeded_code.m"
        else
#line 918 "unneeded_code.m"
          {
#line 918 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Var_12;
#line 918 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchWhere_13;
#line 918 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__WhereNeededList_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 918 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 918 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_22_22;
#line 923 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__OldWhere_17;
#line 919 "unneeded_code.m"
            MR_Box transform_hlds__unneeded_code__conv0_OldWhere_17;

#line 917 "unneeded_code.m"
            transform_hlds__unneeded_code__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_21_21, (MR_Integer) 0)));
#line 917 "unneeded_code.m"
            transform_hlds__unneeded_code__BranchWhere_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_21_21, (MR_Integer) 1)));
#line 919 "unneeded_code.m"
            {
#line 919 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4, ((MR_Box) (transform_hlds__unneeded_code__Var_12)), &transform_hlds__unneeded_code__conv0_OldWhere_17);
            }
#line 919 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 919 "unneeded_code.m"
              {
#line 919 "unneeded_code.m"
                transform_hlds__unneeded_code__OldWhere_17 = ((MR_Word) transform_hlds__unneeded_code__conv0_OldWhere_17);
#line 919 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 919 "unneeded_code.m"
              }
#line 923 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 921 "unneeded_code.m"
              {
#line 921 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__CombinedWhere_18;

#line 1120 "unneeded_code.m"
                if ((transform_hlds__unneeded_code__BranchWhere_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1121 "unneeded_code.m"
                  transform_hlds__unneeded_code__CombinedWhere_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1120 "unneeded_code.m"
                else
#line 1123 "unneeded_code.m"
                  {
#line 1123 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchesA_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__BranchWhere_13, (MR_Integer) 0)));

#line 1127 "unneeded_code.m"
                    if ((transform_hlds__unneeded_code__OldWhere_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1126 "unneeded_code.m"
                      transform_hlds__unneeded_code__CombinedWhere_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1127 "unneeded_code.m"
                    else
#line 1128 "unneeded_code.m"
                      {
#line 1128 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchesB_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__OldWhere_17, (MR_Integer) 0)));
#line 1128 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchesList_43;

#line 1141 "unneeded_code.m"
                        {
#line 1141 "unneeded_code.m"
                          mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__BranchesA_36, &transform_hlds__unneeded_code__BranchesList_43);
                        }
#line 1142 "unneeded_code.m"
                        {
#line 1142 "unneeded_code.m"
                          transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_1, transform_hlds__unneeded_code__CurrentId_3, transform_hlds__unneeded_code__BranchesList_43, transform_hlds__unneeded_code__BranchesB_37, &transform_hlds__unneeded_code__CombinedWhere_18);
                        }
#line 1128 "unneeded_code.m"
                      }
#line 1123 "unneeded_code.m"
                  }
#line 922 "unneeded_code.m"
                {
#line 922 "unneeded_code.m"
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_12)), ((MR_Box) (transform_hlds__unneeded_code__CombinedWhere_18)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_22_22);
                }
#line 921 "unneeded_code.m"
              }
#line 923 "unneeded_code.m"
            else
#line 924 "unneeded_code.m"
              {
#line 924 "unneeded_code.m"
                {
#line 924 "unneeded_code.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_12)), ((MR_Box) (transform_hlds__unneeded_code__BranchWhere_13)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_22_22);
                }
#line 924 "unneeded_code.m"
              }
#line 926 "unneeded_code.m"
            /* direct tailcall eliminated */
#line 926 "unneeded_code.m"
            {
#line 926 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__HeadVar__2__tmp_copy_2 = transform_hlds__unneeded_code__WhereNeededList_14;
#line 926 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0__tmp_copy_4 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_22_22;

#line 926 "unneeded_code.m"
              transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0__tmp_copy_4;
#line 926 "unneeded_code.m"
              transform_hlds__unneeded_code__HeadVar__2_2 = transform_hlds__unneeded_code__HeadVar__2__tmp_copy_2;
#line 926 "unneeded_code.m"
            }
#line 926 "unneeded_code.m"
            continue;
#line 918 "unneeded_code.m"
          }
#line 916 "unneeded_code.m"
      }
#line 916 "unneeded_code.m"
      break;
#line 916 "unneeded_code.m"
    }
#line 912 "unneeded_code.m"
}

#line 903 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(
#line 903 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_6,
#line 903 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_7,
#line 903 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap1_8,
#line 903 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap2_9,
#line 903 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__WhereNeededMap_10)
#line 903 "unneeded_code.m"
{
#line 907 "unneeded_code.m"
  {
#line 907 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 907 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededList1_11;

#line 908 "unneeded_code.m"
    {
#line 908 "unneeded_code.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__WhereNeededMap1_8, &transform_hlds__unneeded_code__WhereNeededList1_11);
    }
#line 909 "unneeded_code.m"
    {
#line 909 "unneeded_code.m"
      transform_hlds__unneeded_code__add_where_needed_list_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_6, transform_hlds__unneeded_code__WhereNeededList1_11, transform_hlds__unneeded_code__CurrentId_7, transform_hlds__unneeded_code__WhereNeededMap2_9, transform_hlds__unneeded_code__WhereNeededMap_10);
#line 909 "unneeded_code.m"
      return;
    }
#line 907 "unneeded_code.m"
  }
#line 903 "unneeded_code.m"
}

#line 864 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_18,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Cond0_19,
#line 864 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Cond_20,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Then0_21,
#line 864 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Then_22,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Else0_23,
#line 864 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Else_24,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_25,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_26,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_27,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_28,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45,
#line 864 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_46,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_47,
#line 864 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_48,
#line 864 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_49,
#line 864 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50)
#line 864 "unneeded_code.m"
{
#line 873 "unneeded_code.m"
  {
#line 873 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeInfo_63_63;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_64_64;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__CondInfo0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Cond0_19, (MR_Integer) 1)));
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__InstMapDelta_34;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__InstMapCond_35;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMapElse_36;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMapThen_37;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_38;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNeededMap0_39;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededListElse_40;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNeededMap1_41;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededListThen_42;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNeededMap_43;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMapCond_44;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_51_51;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_52_52;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_53_53;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_54_54;
#line 873 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededList1_70;
#line 874 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Cond0_19, (MR_Integer) 0)));
#line 883 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_60_60;
#line 883 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_61_61;
#line 883 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_62_62;

#line 875 "unneeded_code.m"
    {
#line 875 "unneeded_code.m"
      transform_hlds__unneeded_code__InstMapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unneeded_code__CondInfo0_33);
    }
#line 876 "unneeded_code.m"
    {
#line 876 "unneeded_code.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__unneeded_code__InitInstMap_26, transform_hlds__unneeded_code__InstMapDelta_34, &transform_hlds__unneeded_code__InstMapCond_35);
    }
#line 878 "unneeded_code.m"
    {
#line 878 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_18, transform_hlds__unneeded_code__Else0_23, transform_hlds__unneeded_code__Else_24, transform_hlds__unneeded_code__InitInstMap_26, transform_hlds__unneeded_code__FinalInstMap_27, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45, &transform_hlds__unneeded_code__WhereNeededMapElse_36, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_47, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_51_51, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_49, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_52_52);
    }
#line 880 "unneeded_code.m"
    {
#line 880 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_18, transform_hlds__unneeded_code__Then0_21, transform_hlds__unneeded_code__Then_22, transform_hlds__unneeded_code__InstMapCond_35, transform_hlds__unneeded_code__FinalInstMap_27, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45, &transform_hlds__unneeded_code__WhereNeededMapThen_37, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_51_51, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_53_53, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_52_52, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_54_54);
    }
#line 883 "unneeded_code.m"
    transform_hlds__unneeded_code__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_18, (MR_Integer) 0)));
#line 883 "unneeded_code.m"
    transform_hlds__unneeded_code__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_18, (MR_Integer) 1)));
#line 883 "unneeded_code.m"
    transform_hlds__unneeded_code__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_18, (MR_Integer) 2)));
#line 883 "unneeded_code.m"
    transform_hlds__unneeded_code__ContainingGoalMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_18, (MR_Integer) 3)));
#line 6527 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeInfo_63_63 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 6529 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeCtorInfo_64_64 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;
#line 884 "unneeded_code.m"
    {
#line 884 "unneeded_code.m"
      mercury__map__init_1_p_0(transform_hlds__unneeded_code__TypeInfo_63_63, transform_hlds__unneeded_code__TypeCtorInfo_64_64, &transform_hlds__unneeded_code__BranchNeededMap0_39);
    }
#line 885 "unneeded_code.m"
    {
#line 885 "unneeded_code.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__unneeded_code__TypeInfo_63_63, transform_hlds__unneeded_code__TypeCtorInfo_64_64, transform_hlds__unneeded_code__WhereNeededMapElse_36, &transform_hlds__unneeded_code__WhereNeededListElse_40);
    }
#line 886 "unneeded_code.m"
    {
#line 886 "unneeded_code.m"
      transform_hlds__unneeded_code__add_alt_start_7_p_0(transform_hlds__unneeded_code__ContainingGoalMap_38, transform_hlds__unneeded_code__WhereNeededListElse_40, transform_hlds__unneeded_code__BranchPoint_25, (MR_Integer) 2, transform_hlds__unneeded_code__CurrentId_28, transform_hlds__unneeded_code__BranchNeededMap0_39, &transform_hlds__unneeded_code__BranchNeededMap1_41);
    }
#line 888 "unneeded_code.m"
    {
#line 888 "unneeded_code.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__unneeded_code__TypeInfo_63_63, transform_hlds__unneeded_code__TypeCtorInfo_64_64, transform_hlds__unneeded_code__WhereNeededMapThen_37, &transform_hlds__unneeded_code__WhereNeededListThen_42);
    }
#line 889 "unneeded_code.m"
    {
#line 889 "unneeded_code.m"
      transform_hlds__unneeded_code__add_alt_start_7_p_0(transform_hlds__unneeded_code__ContainingGoalMap_38, transform_hlds__unneeded_code__WhereNeededListThen_42, transform_hlds__unneeded_code__BranchPoint_25, (MR_Integer) 1, transform_hlds__unneeded_code__CurrentId_28, transform_hlds__unneeded_code__BranchNeededMap1_41, &transform_hlds__unneeded_code__BranchNeededMap_43);
    }
#line 908 "unneeded_code.m"
    {
#line 908 "unneeded_code.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45, &transform_hlds__unneeded_code__WhereNeededList1_70);
    }
#line 909 "unneeded_code.m"
    {
#line 909 "unneeded_code.m"
      transform_hlds__unneeded_code__add_where_needed_list_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_38, transform_hlds__unneeded_code__WhereNeededList1_70, transform_hlds__unneeded_code__CurrentId_28, transform_hlds__unneeded_code__BranchNeededMap_43, &transform_hlds__unneeded_code__WhereNeededMapCond_44);
    }
#line 894 "unneeded_code.m"
    {
#line 894 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_18, transform_hlds__unneeded_code__Cond0_19, transform_hlds__unneeded_code__Cond_20, transform_hlds__unneeded_code__InitInstMap_26, transform_hlds__unneeded_code__InstMapCond_35, transform_hlds__unneeded_code__WhereNeededMapCond_44, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_46, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_53_53, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_48, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_54_54, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50);
#line 894 "unneeded_code.m"
      return;
    }
#line 873 "unneeded_code.m"
  }
#line 864 "unneeded_code.m"
}

#line 838 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 838 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_4,
#line 838 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_5,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_6,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_7,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__StartWhereNeededMap_9,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_10,
#line 838 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_11,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12,
#line 838 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13,
#line 838 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_14,
#line 838 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_15)
#line 838 "unneeded_code.m"
{
#line 845 "unneeded_code.m"
  {
#line 845 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 845 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 845 "unneeded_code.m"
      {
#line 845 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 846 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_15 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_14;
#line 846 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12;
#line 846 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_11 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_10;
#line 845 "unneeded_code.m"
      }
#line 845 "unneeded_code.m"
    else
#line 849 "unneeded_code.m"
      {
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Case0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Cases0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Case_35;
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Cases_36;
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__MainConsId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_33, (MR_Integer) 0)));
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__OtherConsIds_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_33, (MR_Integer) 1)));
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_33, (MR_Integer) 2)));
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_49;
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__WhereNeededMapFirst_50;
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__WhereNeededList_51;
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ContainingGoalMap_52;
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59_59;
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_60_60;
#line 849 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_61_61;
#line 849 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_62_62;
#line 855 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_67_67;
#line 855 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_68_68;
#line 855 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_69_69;

#line 851 "unneeded_code.m"
        {
#line 851 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Goal0_48, &transform_hlds__unneeded_code__Goal_49, transform_hlds__unneeded_code__InitInstMap_6, transform_hlds__unneeded_code__FinalInstMap_7, transform_hlds__unneeded_code__StartWhereNeededMap_9, &transform_hlds__unneeded_code__WhereNeededMapFirst_50, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59_59, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_14, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_60_60);
        }
#line 853 "unneeded_code.m"
        {
#line 853 "unneeded_code.m"
          transform_hlds__unneeded_code__Case_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 853 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_35, 0) = ((MR_Box) (transform_hlds__unneeded_code__MainConsId_46));
#line 853 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_35, 1) = ((MR_Box) (transform_hlds__unneeded_code__OtherConsIds_47));
#line 853 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_35, 2) = ((MR_Box) (transform_hlds__unneeded_code__Goal_49));
#line 853 "unneeded_code.m"
        }
#line 854 "unneeded_code.m"
        {
#line 854 "unneeded_code.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__WhereNeededMapFirst_50, &transform_hlds__unneeded_code__WhereNeededList_51);
        }
#line 855 "unneeded_code.m"
        transform_hlds__unneeded_code__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 0)));
#line 855 "unneeded_code.m"
        transform_hlds__unneeded_code__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 1)));
#line 855 "unneeded_code.m"
        transform_hlds__unneeded_code__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 2)));
#line 855 "unneeded_code.m"
        transform_hlds__unneeded_code__ContainingGoalMap_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 3)));
#line 856 "unneeded_code.m"
        {
#line 856 "unneeded_code.m"
          transform_hlds__unneeded_code__add_alt_start_7_p_0(transform_hlds__unneeded_code__ContainingGoalMap_52, transform_hlds__unneeded_code__WhereNeededList_51, transform_hlds__unneeded_code__BranchPoint_4, transform_hlds__unneeded_code__BranchNum_5, transform_hlds__unneeded_code__CurrentId_8, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_10, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_61_61);
        }
#line 859 "unneeded_code.m"
        transform_hlds__unneeded_code__V_62_62 = (transform_hlds__unneeded_code__BranchNum_5 + (MR_Integer) 1);
#line 858 "unneeded_code.m"
        {
#line 858 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Cases0_34, &transform_hlds__unneeded_code__Cases_36, transform_hlds__unneeded_code__BranchPoint_4, transform_hlds__unneeded_code__V_62_62, transform_hlds__unneeded_code__InitInstMap_6, transform_hlds__unneeded_code__FinalInstMap_7, transform_hlds__unneeded_code__CurrentId_8, transform_hlds__unneeded_code__StartWhereNeededMap_9, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_61_61, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_11, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59_59, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_60_60, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_15);
        }
#line 847 "unneeded_code.m"
        {
#line 847 "unneeded_code.m"
          MR_Word base;
#line 847 "unneeded_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__3_3 = base;
#line 847 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Case_35));
#line 847 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Cases_36));
#line 847 "unneeded_code.m"
        }
#line 849 "unneeded_code.m"
      }
#line 845 "unneeded_code.m"
  }
#line 838 "unneeded_code.m"
}

#line 815 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 815 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_4,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_5,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_6,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__StartWhereNeededMap_7,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_8,
#line 815 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_9,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_10,
#line 815 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_11,
#line 815 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_12,
#line 815 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_13)
#line 815 "unneeded_code.m"
{
#line 821 "unneeded_code.m"
  {
#line 821 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 821 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 821 "unneeded_code.m"
      {
#line 821 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 822 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_13 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_12;
#line 822 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_11 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_10;
#line 822 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_9 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_8;
#line 821 "unneeded_code.m"
      }
#line 821 "unneeded_code.m"
    else
#line 825 "unneeded_code.m"
      {
#line 825 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 825 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 825 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_31;
#line 825 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals_32;
#line 825 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__WhereNeededMapFirst_40;
#line 825 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__WhereNeededList_41;
#line 825 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ContainingGoalMap_42;
#line 825 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_49_49;
#line 825 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50_50;
#line 825 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_51_51;
#line 829 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_55_55;
#line 829 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_56_56;
#line 829 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_57_57;

#line 826 "unneeded_code.m"
        {
#line 826 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Goal0_29, &transform_hlds__unneeded_code__Goal_31, transform_hlds__unneeded_code__InitInstMap_4, transform_hlds__unneeded_code__FinalInstMap_5, transform_hlds__unneeded_code__StartWhereNeededMap_7, &transform_hlds__unneeded_code__WhereNeededMapFirst_40, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_10, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_49_49, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_12, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50_50);
        }
#line 828 "unneeded_code.m"
        {
#line 828 "unneeded_code.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__WhereNeededMapFirst_40, &transform_hlds__unneeded_code__WhereNeededList_41);
        }
#line 829 "unneeded_code.m"
        transform_hlds__unneeded_code__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 0)));
#line 829 "unneeded_code.m"
        transform_hlds__unneeded_code__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 1)));
#line 829 "unneeded_code.m"
        transform_hlds__unneeded_code__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 2)));
#line 829 "unneeded_code.m"
        transform_hlds__unneeded_code__ContainingGoalMap_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 3)));
#line 830 "unneeded_code.m"
        {
#line 830 "unneeded_code.m"
          transform_hlds__unneeded_code__add_where_needed_list_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_42, transform_hlds__unneeded_code__WhereNeededList_41, transform_hlds__unneeded_code__CurrentId_6, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_8, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_51_51);
        }
#line 832 "unneeded_code.m"
        {
#line 832 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Goals0_30, &transform_hlds__unneeded_code__Goals_32, transform_hlds__unneeded_code__InitInstMap_4, transform_hlds__unneeded_code__FinalInstMap_5, transform_hlds__unneeded_code__CurrentId_6, transform_hlds__unneeded_code__StartWhereNeededMap_7, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_51_51, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_9, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_49_49, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_11, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50_50, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_13);
        }
#line 823 "unneeded_code.m"
        {
#line 823 "unneeded_code.m"
          MR_Word base;
#line 823 "unneeded_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__3_3 = base;
#line 823 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_31));
#line 823 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Goals_32));
#line 823 "unneeded_code.m"
        }
#line 825 "unneeded_code.m"
      }
#line 821 "unneeded_code.m"
  }
#line 815 "unneeded_code.m"
}

#line 792 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(
#line 792 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 792 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 792 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 792 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4,
#line 792 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5,
#line 792 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_6,
#line 792 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_7,
#line 792 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_8,
#line 792 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_9)
#line 792 "unneeded_code.m"
{
#line 797 "unneeded_code.m"
  {
#line 797 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 797 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "unneeded_code.m"
      {
#line 797 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 798 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_9 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_8;
#line 798 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_7 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_6;
#line 798 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4;
#line 797 "unneeded_code.m"
      }
#line 797 "unneeded_code.m"
    else
#line 801 "unneeded_code.m"
      {
#line 801 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__BracketedGoal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 801 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__BracketedGoals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 801 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_21, (MR_Integer) 0)));
#line 801 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__InitInstMap_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_21, (MR_Integer) 1)));
#line 801 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__FinalInstMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_21, (MR_Integer) 2)));
#line 801 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal1_30;
#line 801 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals1_31;
#line 801 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_39_39;
#line 801 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_40_40;
#line 801 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_41_41;
#line 807 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_45_45;
#line 807 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_46_46;
#line 807 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_32_32;

#line 803 "unneeded_code.m"
        {
#line 803 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Goal0_27, &transform_hlds__unneeded_code__Goal1_30, transform_hlds__unneeded_code__InitInstMap_28, transform_hlds__unneeded_code__FinalInstMap_29, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_39_39, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_6, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_40_40, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_8, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_41_41);
        }
#line 805 "unneeded_code.m"
        {
#line 805 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__BracketedGoals_22, &transform_hlds__unneeded_code__Goals1_31, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_39_39, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_40_40, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_7, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_41_41, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_9);
        }
#line 807 "unneeded_code.m"
        transform_hlds__unneeded_code__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_30, (MR_Integer) 0)));
#line 807 "unneeded_code.m"
        transform_hlds__unneeded_code__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_30, (MR_Integer) 1)));
#line 807 "unneeded_code.m"
        {
#line 807 "unneeded_code.m"
          transform_hlds__unneeded_code__V_46_46 = hlds__make_goal__true_goal_expr_0_f_0();
        }
#line 807 "unneeded_code.m"
        {
#line 807 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(transform_hlds__unneeded_code__V_45_45, transform_hlds__unneeded_code__V_46_46);
        }
#line 809 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 808 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__3_3 = transform_hlds__unneeded_code__Goals1_31;
#line 809 "unneeded_code.m"
        else
#line 810 "unneeded_code.m"
          {
#line 810 "unneeded_code.m"
            MR_Word base;
#line 810 "unneeded_code.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "unneeded_code.m"
            *transform_hlds__unneeded_code__HeadVar__3_3 = base;
#line 810 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal1_30));
#line 810 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Goals1_31));
#line 810 "unneeded_code.m"
          }
#line 801 "unneeded_code.m"
      }
#line 797 "unneeded_code.m"
  }
#line 792 "unneeded_code.m"
}

#line 776 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(
#line 776 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 776 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_2,
#line 776 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3)
#line 776 "unneeded_code.m"
{
#line 779 "unneeded_code.m"
  {
#line 779 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 779 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 779 "unneeded_code.m"
      *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 779 "unneeded_code.m"
    else
#line 780 "unneeded_code.m"
      {
#line 780 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 780 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));

#line 781 "unneeded_code.m"
        {
#line 781 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(transform_hlds__unneeded_code__InitInstMap_2);
        }
#line 783 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 782 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 783 "unneeded_code.m"
        else
#line 784 "unneeded_code.m"
          {
#line 784 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_5, (MR_Integer) 1)));
#line 784 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__InstMapDelta_11;
#line 784 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__FinalInstMap_12;
#line 784 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BracketedTail_13;
#line 784 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BracketedGoal_14;
#line 784 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_5, (MR_Integer) 0)));

#line 785 "unneeded_code.m"
            {
#line 785 "unneeded_code.m"
              transform_hlds__unneeded_code__InstMapDelta_11 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unneeded_code__GoalInfo_10);
            }
#line 786 "unneeded_code.m"
            {
#line 786 "unneeded_code.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__unneeded_code__InitInstMap_2, transform_hlds__unneeded_code__InstMapDelta_11, &transform_hlds__unneeded_code__FinalInstMap_12);
            }
#line 787 "unneeded_code.m"
            {
#line 787 "unneeded_code.m"
              transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(transform_hlds__unneeded_code__Goals_6, transform_hlds__unneeded_code__FinalInstMap_12, &transform_hlds__unneeded_code__BracketedTail_13);
            }
#line 788 "unneeded_code.m"
            {
#line 788 "unneeded_code.m"
              transform_hlds__unneeded_code__BracketedGoal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 788 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_14, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_5));
#line 788 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_14, 1) = ((MR_Box) (transform_hlds__unneeded_code__InitInstMap_2));
#line 788 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_14, 2) = ((MR_Box) (transform_hlds__unneeded_code__FinalInstMap_12));
#line 788 "unneeded_code.m"
            }
#line 789 "unneeded_code.m"
            {
#line 789 "unneeded_code.m"
              MR_Word base;
#line 789 "unneeded_code.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__3_3 = base;
#line 789 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__BracketedGoal_14));
#line 789 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__BracketedTail_13));
#line 789 "unneeded_code.m"
            }
#line 784 "unneeded_code.m"
          }
#line 780 "unneeded_code.m"
      }
#line 779 "unneeded_code.m"
  }
#line 776 "unneeded_code.m"
}

#line 702 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_3(
#line 702 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 702 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 702 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 702 "unneeded_code.m"
{
#line 702 "unneeded_code.m"
  {
#line 702 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 702 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv3_HeadVar__2_2;

#line 702 "unneeded_code.m"
    {
#line 702 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv3_HeadVar__2_2);
    }
#line 702 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv3_HeadVar__2_2));
#line 702 "unneeded_code.m"
  }
#line 702 "unneeded_code.m"
}

#line 728 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2(
#line 728 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 728 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 728 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 728 "unneeded_code.m"
{
#line 728 "unneeded_code.m"
  {
#line 728 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 728 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv1_HeadVar__2_2;

#line 728 "unneeded_code.m"
    {
#line 728 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv1_HeadVar__2_2);
    }
#line 728 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv1_HeadVar__2_2));
#line 728 "unneeded_code.m"
  }
#line 728 "unneeded_code.m"
}

#line 717 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1(
#line 717 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 717 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 717 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 717 "unneeded_code.m"
{
#line 717 "unneeded_code.m"
  {
#line 717 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 717 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__2_2;

#line 717 "unneeded_code.m"
    {
#line 717 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv0_HeadVar__2_2);
    }
#line 717 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__2_2));
#line 717 "unneeded_code.m"
  }
#line 717 "unneeded_code.m"
}

#line 651 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_13,
#line 651 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_14,
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_16,
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88,
#line 651 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89,
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90,
#line 651 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91,
#line 651 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92,
#line 651 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93)
#line 651 "unneeded_code.m"
{
#line 657 "unneeded_code.m"
  {
#line 657 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 657 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalExpr0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 0)));
#line 657 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 1)));

#line 668 "unneeded_code.m"
    if (((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 0))))
#line 735 "unneeded_code.m"
      {
#line 735 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__NegGoal0_81 = (MR_Word) MR_body(((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20), (MR_Integer) 0);
#line 735 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__NegGoal_82;
#line 735 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalExpr_142;

#line 736 "unneeded_code.m"
        {
#line 736 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__NegGoal0_81, &transform_hlds__unneeded_code__NegGoal_82, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
        }
#line 739 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalExpr_142 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__unneeded_code__NegGoal_82);
#line 740 "unneeded_code.m"
        {
#line 740 "unneeded_code.m"
          MR_Word base;
#line 740 "unneeded_code.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 740 "unneeded_code.m"
          *transform_hlds__unneeded_code__Goal_14 = base;
#line 740 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_142));
#line 740 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 740 "unneeded_code.m"
        }
#line 735 "unneeded_code.m"
      }
#line 668 "unneeded_code.m"
    else
#line 668 "unneeded_code.m"
      if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 669 "unneeded_code.m"
        {
#line 669 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__ConjType_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 669 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__Conjuncts0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 2)));

#line 677 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__ConjType_45 == (MR_Integer) 1))
#line 678 "unneeded_code.m"
            {
#line 679 "unneeded_code.m"
              *transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal0_13;
#line 680 "unneeded_code.m"
              {
#line 680 "unneeded_code.m"
                transform_hlds__unneeded_code__demand_inputs_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, *transform_hlds__unneeded_code__Goal_14, transform_hlds__unneeded_code__InitInstMap_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89);
              }
#line 680 "unneeded_code.m"
              *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90;
#line 680 "unneeded_code.m"
              *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92;
#line 678 "unneeded_code.m"
            }
#line 677 "unneeded_code.m"
          else
#line 671 "unneeded_code.m"
            {
#line 671 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Conjuncts_47;
#line 671 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_48;

#line 672 "unneeded_code.m"
              {
#line 672 "unneeded_code.m"
                transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_53_93_95_48_11_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Conjuncts0_46, &transform_hlds__unneeded_code__Conjuncts_47, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
              }
#line 675 "unneeded_code.m"
              {
#line 675 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 675 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 675 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_48, 1) = ((MR_Box) ((MR_Integer) 0));
#line 675 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_48, 2) = ((MR_Box) (transform_hlds__unneeded_code__Conjuncts_47));
#line 675 "unneeded_code.m"
              }
#line 676 "unneeded_code.m"
              {
#line 676 "unneeded_code.m"
                MR_Word base;
#line 676 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 676 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_14 = base;
#line 676 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_48));
#line 676 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 676 "unneeded_code.m"
              }
#line 671 "unneeded_code.m"
            }
#line 669 "unneeded_code.m"
        }
#line 668 "unneeded_code.m"
      else
#line 668 "unneeded_code.m"
        if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 715 "unneeded_code.m"
          {
#line 715 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__TypeCtorInfo_157_157;
#line 715 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Disjuncts0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 715 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Disjuncts_73;
#line 715 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_111_111;
#line 715 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalExpr_137;
#line 715 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalId_138;

#line 716 "unneeded_code.m"
            {
#line 716 "unneeded_code.m"
              transform_hlds__unneeded_code__GoalId_138 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_21);
            }
#line 7351 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__TypeCtorInfo_157_157 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;
#line 717 "unneeded_code.m"
            {
#line 717 "unneeded_code.m"
              mercury__map__map_values_only_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_157_157, transform_hlds__unneeded_code__TypeCtorInfo_157_157, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[11], transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_111_111);
            }
#line 718 "unneeded_code.m"
            {
#line 718 "unneeded_code.m"
              transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Disjuncts0_72, &transform_hlds__unneeded_code__Disjuncts_73, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__GoalId_138, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_111_111, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_111_111, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
            }
#line 722 "unneeded_code.m"
            {
#line 722 "unneeded_code.m"
              transform_hlds__unneeded_code__GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "unneeded_code.m"
              MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 722 "unneeded_code.m"
              MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_137, 1) = ((MR_Box) (transform_hlds__unneeded_code__Disjuncts_73));
#line 722 "unneeded_code.m"
            }
#line 723 "unneeded_code.m"
            {
#line 723 "unneeded_code.m"
              MR_Word base;
#line 723 "unneeded_code.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 723 "unneeded_code.m"
              *transform_hlds__unneeded_code__Goal_14 = base;
#line 723 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_137));
#line 723 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 723 "unneeded_code.m"
            }
#line 715 "unneeded_code.m"
          }
#line 668 "unneeded_code.m"
        else
#line 668 "unneeded_code.m"
          if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 725 "unneeded_code.m"
            {
#line 725 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__TypeCtorInfo_161_161;
#line 725 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Quant_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 725 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cond0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 2)));
#line 725 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Then0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 3)));
#line 725 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Else0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 4)));
#line 725 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cond_78;
#line 725 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Then_79;
#line 725 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Else_80;
#line 725 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_106_106;
#line 725 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_139;
#line 725 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalId_140;
#line 725 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__BranchPoint_141;

#line 726 "unneeded_code.m"
              {
#line 726 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalId_140 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_21);
              }
#line 727 "unneeded_code.m"
              {
#line 727 "unneeded_code.m"
                transform_hlds__unneeded_code__BranchPoint_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 727 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_141, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_140));
#line 727 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "unneeded_code.m"
              }
#line 7435 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__TypeCtorInfo_161_161 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;
#line 728 "unneeded_code.m"
              {
#line 728 "unneeded_code.m"
                mercury__map__map_values_only_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_161_161, transform_hlds__unneeded_code__TypeCtorInfo_161_161, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[12], transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_106_106);
              }
#line 729 "unneeded_code.m"
              {
#line 729 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Cond0_75, &transform_hlds__unneeded_code__Cond_78, transform_hlds__unneeded_code__Then0_76, &transform_hlds__unneeded_code__Then_79, transform_hlds__unneeded_code__Else0_77, &transform_hlds__unneeded_code__Else_80, transform_hlds__unneeded_code__BranchPoint_141, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__GoalId_140, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_106_106, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
              }
#line 732 "unneeded_code.m"
              {
#line 732 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 732 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 732 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 1) = ((MR_Box) (transform_hlds__unneeded_code__Quant_74));
#line 732 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 2) = ((MR_Box) (transform_hlds__unneeded_code__Cond_78));
#line 732 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 3) = ((MR_Box) (transform_hlds__unneeded_code__Then_79));
#line 732 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 4) = ((MR_Box) (transform_hlds__unneeded_code__Else_80));
#line 732 "unneeded_code.m"
              }
#line 733 "unneeded_code.m"
              {
#line 733 "unneeded_code.m"
                MR_Word base;
#line 733 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 733 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_14 = base;
#line 733 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_139));
#line 733 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 733 "unneeded_code.m"
              }
#line 725 "unneeded_code.m"
            }
#line 668 "unneeded_code.m"
          else
#line 668 "unneeded_code.m"
            if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 742 "unneeded_code.m"
              {
#line 742 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__Reason_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 742 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__SomeGoal0_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 2)));
#line 743 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_97_97;
#line 743 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_85_85;

#line 743 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = ((((MR_tag((MR_Word) transform_hlds__unneeded_code__Reason_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_83, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 743 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 743 "unneeded_code.m"
                  {
#line 743 "unneeded_code.m"
                    transform_hlds__unneeded_code__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_83, (MR_Integer) 1)));
#line 743 "unneeded_code.m"
                    transform_hlds__unneeded_code__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_83, (MR_Integer) 2)));
#line 743 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_97_97 == (MR_Integer) 1);
#line 743 "unneeded_code.m"
                  }
#line 745 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 744 "unneeded_code.m"
                  {
#line 744 "unneeded_code.m"
                    *transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal0_13;
#line 744 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92;
#line 744 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90;
#line 744 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88;
#line 744 "unneeded_code.m"
                  }
#line 745 "unneeded_code.m"
                else
#line 748 "unneeded_code.m"
                  {
#line 748 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__SomeGoal_86;
#line 748 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalExpr_143;

#line 746 "unneeded_code.m"
                    {
#line 746 "unneeded_code.m"
                      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__SomeGoal0_84, &transform_hlds__unneeded_code__SomeGoal_86, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
                    }
#line 749 "unneeded_code.m"
                    {
#line 749 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalExpr_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 749 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 749 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_143, 1) = ((MR_Box) (transform_hlds__unneeded_code__Reason_83));
#line 749 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_143, 2) = ((MR_Box) (transform_hlds__unneeded_code__SomeGoal_86));
#line 749 "unneeded_code.m"
                    }
#line 750 "unneeded_code.m"
                    {
#line 750 "unneeded_code.m"
                      MR_Word base;
#line 750 "unneeded_code.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 750 "unneeded_code.m"
                      *transform_hlds__unneeded_code__Goal_14 = base;
#line 750 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_143));
#line 750 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 750 "unneeded_code.m"
                    }
#line 748 "unneeded_code.m"
                  }
#line 742 "unneeded_code.m"
              }
#line 668 "unneeded_code.m"
            else
#line 668 "unneeded_code.m"
              if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 753 "unneeded_code.m"
                {
#line 755 "unneeded_code.m"
                  {
#line 755 "unneeded_code.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unneeded_code", (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_goal_internal\'/11", (MR_String) "shorthand");
#line 755 "unneeded_code.m"
                    return;
                  }
#line 753 "unneeded_code.m"
                }
#line 668 "unneeded_code.m"
              else
#line 668 "unneeded_code.m"
                if (((((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 684 "unneeded_code.m"
                  {
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_153_153;
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__TypeInfo_154_154;
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__SwitchVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__CanFail_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 2)));
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Cases0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 3)));
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 3)));
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__MaybeNumAlt_66;
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalId_67;
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchPoint_68;
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchNeededMap0_69;
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Cases_70;
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchNeededMap_71;
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_119_119;
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_121_121;
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_125_125;
#line 684 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalExpr_136;
#line 685 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 0)));
#line 685 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 1)));
#line 685 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 2)));
#line 697 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__MaybeNumAltPrime_65;
#line 687 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_149_149;
#line 687 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_150_150;
#line 687 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__FirstCase0_53;
#line 687 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__FirstCaseGoal0_57;
#line 687 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__FirstCaseGoalInfo0_59;
#line 687 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__FirstCaseGoalId0_60;
#line 687 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalContaining0_61;
#line 687 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__FirstCaseLastStep_63;
#line 687 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_54_54;
#line 688 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_55_55;
#line 688 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_56_56;
#line 689 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_58_58;
#line 691 "unneeded_code.m"
                    MR_Box transform_hlds__unneeded_code__conv2_GoalContaining0_61;
#line 692 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code___ContainingGoalId_62;
#line 694 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__V_64_64;

#line 687 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__Cases0_51)) == (MR_mktag((MR_Integer) 1)));
#line 687 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 687 "unneeded_code.m"
                      {
#line 687 "unneeded_code.m"
                        transform_hlds__unneeded_code__FirstCase0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Cases0_51, (MR_Integer) 0)));
#line 687 "unneeded_code.m"
                        transform_hlds__unneeded_code__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Cases0_51, (MR_Integer) 1)));
#line 688 "unneeded_code.m"
                        transform_hlds__unneeded_code__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCase0_53, (MR_Integer) 0)));
#line 688 "unneeded_code.m"
                        transform_hlds__unneeded_code__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCase0_53, (MR_Integer) 1)));
#line 688 "unneeded_code.m"
                        transform_hlds__unneeded_code__FirstCaseGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCase0_53, (MR_Integer) 2)));
#line 689 "unneeded_code.m"
                        transform_hlds__unneeded_code__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCaseGoal0_57, (MR_Integer) 0)));
#line 689 "unneeded_code.m"
                        transform_hlds__unneeded_code__FirstCaseGoalInfo0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCaseGoal0_57, (MR_Integer) 1)));
#line 690 "unneeded_code.m"
                        {
#line 690 "unneeded_code.m"
                          transform_hlds__unneeded_code__FirstCaseGoalId0_60 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__FirstCaseGoalInfo0_59);
                        }
#line 7683 "transform_hlds.unneeded_code.c"
                        transform_hlds__unneeded_code__TypeCtorInfo_149_149 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 7685 "transform_hlds.unneeded_code.c"
                        transform_hlds__unneeded_code__TypeCtorInfo_150_150 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0;
#line 691 "unneeded_code.m"
                        {
#line 691 "unneeded_code.m"
                          mercury__map__lookup_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_149_149, transform_hlds__unneeded_code__TypeCtorInfo_150_150, transform_hlds__unneeded_code__ContainingGoalMap_52, ((MR_Box) (transform_hlds__unneeded_code__FirstCaseGoalId0_60)), &transform_hlds__unneeded_code__conv2_GoalContaining0_61);
                        }
#line 691 "unneeded_code.m"
                        transform_hlds__unneeded_code__GoalContaining0_61 = ((MR_Word) transform_hlds__unneeded_code__conv2_GoalContaining0_61);
#line 692 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalContaining0_61)) == (MR_mktag((MR_Integer) 1)));
#line 692 "unneeded_code.m"
                        if (transform_hlds__unneeded_code__succeeded)
#line 692 "unneeded_code.m"
                          {
#line 692 "unneeded_code.m"
                            transform_hlds__unneeded_code___ContainingGoalId_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__GoalContaining0_61, (MR_Integer) 0)));
#line 692 "unneeded_code.m"
                            transform_hlds__unneeded_code__FirstCaseLastStep_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__GoalContaining0_61, (MR_Integer) 1)));
#line 694 "unneeded_code.m"
                            transform_hlds__unneeded_code__succeeded = ((((MR_tag((MR_Word) transform_hlds__unneeded_code__FirstCaseLastStep_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__FirstCaseLastStep_63, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 694 "unneeded_code.m"
                            if (transform_hlds__unneeded_code__succeeded)
#line 694 "unneeded_code.m"
                              {
#line 694 "unneeded_code.m"
                                transform_hlds__unneeded_code__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__FirstCaseLastStep_63, (MR_Integer) 1)));
#line 694 "unneeded_code.m"
                                transform_hlds__unneeded_code__MaybeNumAltPrime_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__FirstCaseLastStep_63, (MR_Integer) 2)));
#line 694 "unneeded_code.m"
                              }
#line 692 "unneeded_code.m"
                          }
#line 687 "unneeded_code.m"
                      }
#line 697 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 696 "unneeded_code.m"
                      transform_hlds__unneeded_code__MaybeNumAlt_66 = transform_hlds__unneeded_code__MaybeNumAltPrime_65;
#line 697 "unneeded_code.m"
                    else
#line 698 "unneeded_code.m"
                      {
#line 698 "unneeded_code.m"
                        {
#line 698 "unneeded_code.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unneeded_code", (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_goal_internal\'/11", (MR_String) "switch count");
#line 698 "unneeded_code.m"
                          return;
                        }
#line 698 "unneeded_code.m"
                      }
#line 700 "unneeded_code.m"
                    {
#line 700 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalId_67 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_21);
                    }
#line 701 "unneeded_code.m"
                    {
#line 701 "unneeded_code.m"
                      transform_hlds__unneeded_code__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 701 "unneeded_code.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_119_119, 0) = ((MR_Box) (transform_hlds__unneeded_code__MaybeNumAlt_66));
#line 701 "unneeded_code.m"
                    }
#line 701 "unneeded_code.m"
                    {
#line 701 "unneeded_code.m"
                      transform_hlds__unneeded_code__BranchPoint_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 701 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_68, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_67));
#line 701 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_68, 1) = ((MR_Box) (transform_hlds__unneeded_code__V_119_119));
#line 701 "unneeded_code.m"
                    }
#line 7760 "transform_hlds.unneeded_code.c"
                    transform_hlds__unneeded_code__TypeCtorInfo_153_153 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;
#line 7762 "transform_hlds.unneeded_code.c"
                    transform_hlds__unneeded_code__TypeInfo_154_154 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 702 "unneeded_code.m"
                    {
#line 702 "unneeded_code.m"
                      mercury__map__map_values_only_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_153_153, transform_hlds__unneeded_code__TypeCtorInfo_153_153, transform_hlds__unneeded_code__TypeInfo_154_154, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[13], transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_121_121);
                    }
#line 703 "unneeded_code.m"
                    {
#line 703 "unneeded_code.m"
                      mercury__map__init_1_p_0(transform_hlds__unneeded_code__TypeInfo_154_154, transform_hlds__unneeded_code__TypeCtorInfo_153_153, &transform_hlds__unneeded_code__BranchNeededMap0_69);
                    }
#line 704 "unneeded_code.m"
                    {
#line 704 "unneeded_code.m"
                      transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Cases0_51, &transform_hlds__unneeded_code__Cases_70, transform_hlds__unneeded_code__BranchPoint_68, (MR_Integer) 1, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__GoalId_67, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_121_121, transform_hlds__unneeded_code__BranchNeededMap0_69, &transform_hlds__unneeded_code__BranchNeededMap_71, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
                    }
#line 708 "unneeded_code.m"
                    {
#line 708 "unneeded_code.m"
                      transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_52, transform_hlds__unneeded_code__GoalId_67, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_121_121, transform_hlds__unneeded_code__BranchNeededMap_71, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_125_125);
                    }
#line 710 "unneeded_code.m"
                    {
#line 710 "unneeded_code.m"
                      transform_hlds__unneeded_code__demand_var_6_p_0(transform_hlds__unneeded_code__ContainingGoalMap_52, transform_hlds__unneeded_code__GoalId_67, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unneeded_code__SwitchVar_49, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_125_125, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89);
                    }
#line 712 "unneeded_code.m"
                    {
#line 712 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 712 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 712 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_136, 1) = ((MR_Box) (transform_hlds__unneeded_code__SwitchVar_49));
#line 712 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_136, 2) = ((MR_Box) (transform_hlds__unneeded_code__CanFail_50));
#line 712 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_136, 3) = ((MR_Box) (transform_hlds__unneeded_code__Cases_70));
#line 712 "unneeded_code.m"
                    }
#line 713 "unneeded_code.m"
                    {
#line 713 "unneeded_code.m"
                      MR_Word base;
#line 713 "unneeded_code.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 713 "unneeded_code.m"
                      *transform_hlds__unneeded_code__Goal_14 = base;
#line 713 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_136));
#line 713 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 713 "unneeded_code.m"
                    }
#line 684 "unneeded_code.m"
                  }
#line 668 "unneeded_code.m"
                else
#line 664 "unneeded_code.m"
                  {
#line 665 "unneeded_code.m"
                    *transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal0_13;
#line 666 "unneeded_code.m"
                    {
#line 666 "unneeded_code.m"
                      transform_hlds__unneeded_code__demand_inputs_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, *transform_hlds__unneeded_code__Goal_14, transform_hlds__unneeded_code__InitInstMap_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89);
                    }
#line 666 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90;
#line 666 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92;
#line 664 "unneeded_code.m"
                  }
#line 657 "unneeded_code.m"
  }
#line 651 "unneeded_code.m"
}

#line 645 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(
#line 645 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code___WhereNeeded0_3,
#line 645 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2)
#line 645 "unneeded_code.m"
{
#line 647 "unneeded_code.m"
  {
#line 647 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 647 "unneeded_code.m"
    {
#line 647 "unneeded_code.m"
      transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_109_97_110_100_95_118_97_114_95_101_118_101_114_121_119_104_101_114_101_95_95_91_49_93_95_48_2_p_0(transform_hlds__unneeded_code__HeadVar__2_2);
#line 647 "unneeded_code.m"
      return;
    }
#line 647 "unneeded_code.m"
  }
#line 645 "unneeded_code.m"
}

#line 637 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__undemand_var_3_p_0(
#line 637 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_4,
#line 637 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6,
#line 637 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7)
#line 637 "unneeded_code.m"
{
#line 641 "unneeded_code.m"
  {
#line 641 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 641 "unneeded_code.m"
    {
#line 641 "unneeded_code.m"
      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_4)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7);
#line 641 "unneeded_code.m"
      return;
    }
#line 641 "unneeded_code.m"
  }
#line 637 "unneeded_code.m"
}

#line 624 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_var_6_p_0(
#line 624 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 624 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 624 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeeded_9,
#line 624 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_10,
#line 624 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14,
#line 624 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_15)
#line 624 "unneeded_code.m"
{
#line 633 "unneeded_code.m"
  {
#line 633 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 633 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Where0_12;
#line 629 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv0_Where0_12;

#line 629 "unneeded_code.m"
    {
#line 629 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14, ((MR_Box) (transform_hlds__unneeded_code__Var_10)), &transform_hlds__unneeded_code__conv0_Where0_12);
    }
#line 629 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 629 "unneeded_code.m"
      {
#line 629 "unneeded_code.m"
        transform_hlds__unneeded_code__Where0_12 = ((MR_Word) transform_hlds__unneeded_code__conv0_Where0_12);
#line 629 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 629 "unneeded_code.m"
      }
#line 633 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 631 "unneeded_code.m"
      {
#line 631 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Where_13;

#line 1120 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__WhereNeeded_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1121 "unneeded_code.m"
          transform_hlds__unneeded_code__Where_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1120 "unneeded_code.m"
        else
#line 1123 "unneeded_code.m"
          {
#line 1123 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchesA_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__WhereNeeded_9, (MR_Integer) 0)));

#line 1127 "unneeded_code.m"
            if ((transform_hlds__unneeded_code__Where0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1126 "unneeded_code.m"
              transform_hlds__unneeded_code__Where_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1127 "unneeded_code.m"
            else
#line 1128 "unneeded_code.m"
              {
#line 1128 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchesB_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Where0_12, (MR_Integer) 0)));
#line 1128 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchesList_36;

#line 1141 "unneeded_code.m"
                {
#line 1141 "unneeded_code.m"
                  mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__BranchesA_29, &transform_hlds__unneeded_code__BranchesList_36);
                }
#line 1142 "unneeded_code.m"
                {
#line 1142 "unneeded_code.m"
                  transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_7, transform_hlds__unneeded_code__CurrentId_8, transform_hlds__unneeded_code__BranchesList_36, transform_hlds__unneeded_code__BranchesB_30, &transform_hlds__unneeded_code__Where_13);
                }
#line 1128 "unneeded_code.m"
              }
#line 1123 "unneeded_code.m"
          }
#line 632 "unneeded_code.m"
        {
#line 632 "unneeded_code.m"
          mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_10)), ((MR_Box) (transform_hlds__unneeded_code__Where_13)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_15);
#line 632 "unneeded_code.m"
          return;
        }
#line 631 "unneeded_code.m"
      }
#line 633 "unneeded_code.m"
    else
#line 634 "unneeded_code.m"
      {
#line 634 "unneeded_code.m"
        {
#line 634 "unneeded_code.m"
          mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_10)), ((MR_Box) (transform_hlds__unneeded_code__WhereNeeded_9)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_15);
#line 634 "unneeded_code.m"
          return;
        }
#line 634 "unneeded_code.m"
      }
#line 633 "unneeded_code.m"
  }
#line 624 "unneeded_code.m"
}

#line 615 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(
#line 615 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_4,
#line 615 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_5,
#line 615 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_6)
#line 615 "unneeded_code.m"
{
#line 618 "unneeded_code.m"
  {
#line 618 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 618 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Inst_7;

#line 619 "unneeded_code.m"
    {
#line 619 "unneeded_code.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__unneeded_code__InstMap_5, transform_hlds__unneeded_code__Var_6, &transform_hlds__unneeded_code__Inst_7);
    }
#line 620 "unneeded_code.m"
    {
#line 620 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__unneeded_code__ModuleInfo_4, transform_hlds__unneeded_code__Inst_7);
    }
#line 620 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 618 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 618 "unneeded_code.m"
  }
#line 615 "unneeded_code.m"
}

#line 595 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(
#line 595 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_4,
#line 595 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_5,
#line 595 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_6)
#line 595 "unneeded_code.m"
{
#line 598 "unneeded_code.m"
  {
#line 598 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 598 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Inst_7;

#line 599 "unneeded_code.m"
    {
#line 599 "unneeded_code.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__unneeded_code__InstMap_5, transform_hlds__unneeded_code__Var_6, &transform_hlds__unneeded_code__Inst_7);
    }
#line 600 "unneeded_code.m"
    {
#line 600 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__unneeded_code__ModuleInfo_4, transform_hlds__unneeded_code__Inst_7);
    }
#line 598 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 598 "unneeded_code.m"
  }
#line 595 "unneeded_code.m"
}

#line 592 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_2(
#line 592 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 592 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 592 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 592 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 592 "unneeded_code.m"
{
#line 592 "unneeded_code.m"
  {
#line 592 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 592 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereNeededMap_15;

#line 592 "unneeded_code.m"
    {
#line 592 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereNeededMap_15);
    }
#line 592 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereNeededMap_15));
#line 592 "unneeded_code.m"
  }
#line 592 "unneeded_code.m"
}

#line 589 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_1(
#line 589 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 589 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1)
#line 589 "unneeded_code.m"
{
#line 589 "unneeded_code.m"
  {
#line 589 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 589 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;

#line 589 "unneeded_code.m"
    {
#line 589 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1));
    }
#line 589 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 589 "unneeded_code.m"
  }
#line 589 "unneeded_code.m"
}

#line 580 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0(
#line 580 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_7,
#line 580 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_8,
#line 580 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_9,
#line 580 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeeded_10,
#line 580 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_20,
#line 580 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_21)
#line 580 "unneeded_code.m"
{
#line 583 "unneeded_code.m"
  {
#line 583 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 583 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeInfo_33_33;
#line 583 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 1)));
#line 583 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NonLocalSet_14;
#line 583 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalId_15;
#line 583 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NonLocals_16;
#line 583 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ModuleInfo_17;
#line 583 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Inputs_18;
#line 583 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_19;
#line 583 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_22_22;
#line 583 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_23_23;
#line 584 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 0)));
#line 588 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_25_25;
#line 588 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_26_26;
#line 588 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_27_27;
#line 591 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_28_28;
#line 591 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_29_29;
#line 591 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_30_30;
#line 592 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereNeededMap_21;

#line 585 "unneeded_code.m"
    {
#line 585 "unneeded_code.m"
      transform_hlds__unneeded_code__NonLocalSet_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__unneeded_code__GoalInfo_13);
    }
#line 586 "unneeded_code.m"
    {
#line 586 "unneeded_code.m"
      transform_hlds__unneeded_code__GoalId_15 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo_13);
    }
#line 587 "unneeded_code.m"
    {
#line 587 "unneeded_code.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unneeded_code__NonLocalSet_14, &transform_hlds__unneeded_code__NonLocals_16);
    }
#line 588 "unneeded_code.m"
    transform_hlds__unneeded_code__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 588 "unneeded_code.m"
    transform_hlds__unneeded_code__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 588 "unneeded_code.m"
    transform_hlds__unneeded_code__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 588 "unneeded_code.m"
    transform_hlds__unneeded_code__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 589 "unneeded_code.m"
    {
#line 589 "unneeded_code.m"
      transform_hlds__unneeded_code__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 589 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[1]));
#line 589 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 1) = ((MR_Box) (transform_hlds__unneeded_code__demand_inputs_6_p_0_1));
#line 589 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 589 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 3) = ((MR_Box) (transform_hlds__unneeded_code__ModuleInfo_17));
#line 589 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 4) = ((MR_Box) (transform_hlds__unneeded_code__InitInstMap_9));
#line 589 "unneeded_code.m"
    }
#line 8237 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeInfo_33_33 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 589 "unneeded_code.m"
    {
#line 589 "unneeded_code.m"
      mercury__list__filter_3_p_0(transform_hlds__unneeded_code__TypeInfo_33_33, transform_hlds__unneeded_code__V_22_22, transform_hlds__unneeded_code__NonLocals_16, &transform_hlds__unneeded_code__Inputs_18);
    }
#line 591 "unneeded_code.m"
    transform_hlds__unneeded_code__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 591 "unneeded_code.m"
    transform_hlds__unneeded_code__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 591 "unneeded_code.m"
    transform_hlds__unneeded_code__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 591 "unneeded_code.m"
    transform_hlds__unneeded_code__ContainingGoalMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 592 "unneeded_code.m"
    {
#line 592 "unneeded_code.m"
      transform_hlds__unneeded_code__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 592 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_8[1]));
#line 592 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 1) = ((MR_Box) (transform_hlds__unneeded_code__demand_inputs_6_p_0_2));
#line 592 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 592 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 3) = ((MR_Box) (transform_hlds__unneeded_code__ContainingGoalMap_19));
#line 592 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 4) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_15));
#line 592 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 5) = ((MR_Box) (transform_hlds__unneeded_code__WhereNeeded_10));
#line 592 "unneeded_code.m"
    }
#line 592 "unneeded_code.m"
    {
#line 592 "unneeded_code.m"
      mercury__list__foldl_4_p_0(transform_hlds__unneeded_code__TypeInfo_33_33, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], transform_hlds__unneeded_code__V_23_23, transform_hlds__unneeded_code__Inputs_18, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_20)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereNeededMap_21);
    }
#line 592 "unneeded_code.m"
    *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_21 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereNeededMap_21);
#line 583 "unneeded_code.m"
  }
#line 580 "unneeded_code.m"
}

#line 494 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__collect_where_needed_6_p_0(
#line 494 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 494 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 494 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap_9,
#line 494 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ChangedVar_10,
#line 494 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13,
#line 494 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14)
#line 494 "unneeded_code.m"
{
#line 503 "unneeded_code.m"
  {
#line 503 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 503 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Where_12;
#line 500 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv0_Where_12;

#line 500 "unneeded_code.m"
    {
#line 500 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__WhereNeededMap_9, ((MR_Box) (transform_hlds__unneeded_code__ChangedVar_10)), &transform_hlds__unneeded_code__conv0_Where_12);
    }
#line 500 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 500 "unneeded_code.m"
      {
#line 500 "unneeded_code.m"
        transform_hlds__unneeded_code__Where_12 = ((MR_Word) transform_hlds__unneeded_code__conv0_Where_12);
#line 500 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 500 "unneeded_code.m"
      }
#line 503 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1120 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__Where_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1121 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1120 "unneeded_code.m"
      else
#line 1123 "unneeded_code.m"
        {
#line 1123 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__BranchesA_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Where_12, (MR_Integer) 0)));

#line 1127 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1126 "unneeded_code.m"
            *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1127 "unneeded_code.m"
          else
#line 1128 "unneeded_code.m"
            {
#line 1128 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__BranchesB_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13, (MR_Integer) 0)));
#line 1128 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__BranchesList_30;

#line 1141 "unneeded_code.m"
              {
#line 1141 "unneeded_code.m"
                mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__BranchesA_23, &transform_hlds__unneeded_code__BranchesList_30);
              }
#line 1142 "unneeded_code.m"
              {
#line 1142 "unneeded_code.m"
                transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_7, transform_hlds__unneeded_code__CurrentId_8, transform_hlds__unneeded_code__BranchesList_30, transform_hlds__unneeded_code__BranchesB_24, transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14);
#line 1142 "unneeded_code.m"
                return;
              }
#line 1128 "unneeded_code.m"
            }
#line 1123 "unneeded_code.m"
        }
#line 503 "unneeded_code.m"
    else
#line 501 "unneeded_code.m"
      *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13;
#line 503 "unneeded_code.m"
  }
#line 494 "unneeded_code.m"
}

#line 549 "unneeded_code.m"
static MR_Box MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3(
#line 549 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 549 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 549 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 549 "unneeded_code.m"
{
#line 549 "unneeded_code.m"
  {
#line 549 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__wrapper_arg_3;
#line 549 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 549 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__conv3_HeadVar__3_3;

#line 549 "unneeded_code.m"
    {
#line 549 "unneeded_code.m"
      transform_hlds__unneeded_code__conv3_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Integer) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 549 "unneeded_code.m"
    transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv3_HeadVar__3_3));
#line 549 "unneeded_code.m"
    return transform_hlds__unneeded_code__wrapper_arg_3;
#line 549 "unneeded_code.m"
  }
#line 549 "unneeded_code.m"
}

#line 548 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2(
#line 548 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 548 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 548 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 548 "unneeded_code.m"
{
#line 548 "unneeded_code.m"
  {
#line 548 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 548 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__conv2_HeadVar__2_41;

#line 548 "unneeded_code.m"
    {
#line 548 "unneeded_code.m"
      transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__548__1_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv2_HeadVar__2_41);
    }
#line 548 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv2_HeadVar__2_41));
#line 548 "unneeded_code.m"
  }
#line 548 "unneeded_code.m"
}

#line 489 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1(
#line 489 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 489 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 489 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 489 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 489 "unneeded_code.m"
{
#line 489 "unneeded_code.m"
  {
#line 489 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 489 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereInfo_14;

#line 489 "unneeded_code.m"
    {
#line 489 "unneeded_code.m"
      transform_hlds__unneeded_code__collect_where_needed_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereInfo_14);
    }
#line 489 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereInfo_14));
#line 489 "unneeded_code.m"
  }
#line 489 "unneeded_code.m"
}

#line 472 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(
#line 472 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_7,
#line 472 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_8,
#line 472 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_9,
#line 472 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_10,
#line 472 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap_11,
#line 472 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_23)
#line 472 "unneeded_code.m"
{
#line 477 "unneeded_code.m"
  {
#line 477 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ChangedVarSet_15;
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ChangedVars_16;
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Empty_17;
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo_19;
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__CurrentId_20;
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_21;
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Options_22;
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_24_24;
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_25_25;
#line 477 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26;
#line 478 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 478 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 485 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_18_18;
#line 487 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_34_34;
#line 487 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_35_35;
#line 487 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_36_36;
#line 488 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereInfo_26_26;
#line 491 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_37_37;
#line 491 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_38_38;
#line 491 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_39_39;
#line 517 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalExpr_53;
#line 517 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo_54;

#line 480 "unneeded_code.m"
    {
#line 480 "unneeded_code.m"
      hlds__instmap__instmap_changed_vars_5_p_0(transform_hlds__unneeded_code__InitInstMap_9, transform_hlds__unneeded_code__FinalInstMap_10, transform_hlds__unneeded_code__VarTypes_14, transform_hlds__unneeded_code__ModuleInfo_13, &transform_hlds__unneeded_code__ChangedVarSet_15);
    }
#line 482 "unneeded_code.m"
    {
#line 482 "unneeded_code.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unneeded_code__ChangedVarSet_15, &transform_hlds__unneeded_code__ChangedVars_16);
    }
#line 483 "unneeded_code.m"
    {
#line 483 "unneeded_code.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], &transform_hlds__unneeded_code__Empty_17);
    }
#line 484 "unneeded_code.m"
    {
#line 484 "unneeded_code.m"
      transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 484 "unneeded_code.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_24_24, 0) = ((MR_Box) (transform_hlds__unneeded_code__Empty_17));
#line 484 "unneeded_code.m"
    }
#line 485 "unneeded_code.m"
    transform_hlds__unneeded_code__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 0)));
#line 485 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 1)));
#line 486 "unneeded_code.m"
    {
#line 486 "unneeded_code.m"
      transform_hlds__unneeded_code__CurrentId_20 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo_19);
    }
#line 487 "unneeded_code.m"
    transform_hlds__unneeded_code__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 487 "unneeded_code.m"
    transform_hlds__unneeded_code__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 487 "unneeded_code.m"
    transform_hlds__unneeded_code__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 487 "unneeded_code.m"
    transform_hlds__unneeded_code__ContainingGoalMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 489 "unneeded_code.m"
    {
#line 489 "unneeded_code.m"
      transform_hlds__unneeded_code__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 489 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_8[0]));
#line 489 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 1) = ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1));
#line 489 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 489 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 3) = ((MR_Box) (transform_hlds__unneeded_code__ContainingGoalMap_21));
#line 489 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 4) = ((MR_Box) (transform_hlds__unneeded_code__CurrentId_20));
#line 489 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 5) = ((MR_Box) (transform_hlds__unneeded_code__WhereNeededMap_11));
#line 489 "unneeded_code.m"
    }
#line 488 "unneeded_code.m"
    {
#line 488 "unneeded_code.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__V_25_25, transform_hlds__unneeded_code__ChangedVars_16, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_24_24)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereInfo_26_26);
    }
#line 488 "unneeded_code.m"
    transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereInfo_26_26);
#line 491 "unneeded_code.m"
    transform_hlds__unneeded_code__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 491 "unneeded_code.m"
    transform_hlds__unneeded_code__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 491 "unneeded_code.m"
    transform_hlds__unneeded_code__Options_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 491 "unneeded_code.m"
    transform_hlds__unneeded_code__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 517 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalExpr_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 0)));
#line 517 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 1)));
#line 522 "unneeded_code.m"
    {
#line 522 "unneeded_code.m"
      MR_Word transform_hlds__unneeded_code__Detism_55;

#line 522 "unneeded_code.m"
      {
#line 522 "unneeded_code.m"
        transform_hlds__unneeded_code__Detism_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__unneeded_code__GoalInfo_54);
      }
#line 569 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 4))
#line 576 "unneeded_code.m"
        {
#line 523 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 1);
#line 576 "unneeded_code.m"
        }
#line 569 "unneeded_code.m"
      else
#line 569 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 5))
#line 575 "unneeded_code.m"
          {
#line 523 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 575 "unneeded_code.m"
          }
#line 569 "unneeded_code.m"
        else
#line 569 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 0))
#line 569 "unneeded_code.m"
            {
#line 523 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 1);
#line 569 "unneeded_code.m"
            }
#line 569 "unneeded_code.m"
          else
#line 569 "unneeded_code.m"
            if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 6))
#line 573 "unneeded_code.m"
              {
#line 523 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 573 "unneeded_code.m"
              }
#line 569 "unneeded_code.m"
            else
#line 569 "unneeded_code.m"
              if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 7))
#line 574 "unneeded_code.m"
                {
#line 523 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 574 "unneeded_code.m"
                }
#line 569 "unneeded_code.m"
              else
#line 569 "unneeded_code.m"
                if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 2))
#line 572 "unneeded_code.m"
                  {
#line 523 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 1);
#line 572 "unneeded_code.m"
                  }
#line 569 "unneeded_code.m"
                else
#line 569 "unneeded_code.m"
                  if ((transform_hlds__unneeded_code__Detism_55 == (MR_Integer) 3))
#line 571 "unneeded_code.m"
                    {
#line 523 "unneeded_code.m"
                      transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 571 "unneeded_code.m"
                    }
#line 569 "unneeded_code.m"
                  else
#line 570 "unneeded_code.m"
                    {
#line 523 "unneeded_code.m"
                      transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 570 "unneeded_code.m"
                    }
#line 522 "unneeded_code.m"
    }
#line 524 "unneeded_code.m"
    if (!(transform_hlds__unneeded_code__succeeded))
#line 524 "unneeded_code.m"
      {
#line 527 "unneeded_code.m"
        {
#line 527 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_66_66;

#line 527 "unneeded_code.m"
          {
#line 527 "unneeded_code.m"
            transform_hlds__unneeded_code__V_66_66 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__unneeded_code__GoalInfo_54);
          }
#line 527 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_66_66 == (MR_Integer) 0);
#line 527 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 527 "unneeded_code.m"
        }
#line 524 "unneeded_code.m"
        if (!(transform_hlds__unneeded_code__succeeded))
#line 524 "unneeded_code.m"
          {
#line 531 "unneeded_code.m"
            {
#line 531 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 0)));
#line 531 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 1)));
#line 531 "unneeded_code.m"
              MR_Integer transform_hlds__unneeded_code__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 2)));
#line 531 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 3)));

#line 531 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_65_65 == (MR_Integer) 1);
#line 531 "unneeded_code.m"
              if (transform_hlds__unneeded_code__succeeded)
#line 532 "unneeded_code.m"
                {
#line 532 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = hlds__goal_form__goal_can_loop_or_throw_1_p_0(transform_hlds__unneeded_code__Goal_8);
                }
#line 531 "unneeded_code.m"
            }
#line 524 "unneeded_code.m"
            if (!(transform_hlds__unneeded_code__succeeded))
#line 524 "unneeded_code.m"
              {
#line 536 "unneeded_code.m"
                {
#line 536 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__BranchMap_56;
#line 536 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 1)));
#line 536 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 0)));
#line 536 "unneeded_code.m"
                  MR_Integer transform_hlds__unneeded_code__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 2)));
#line 536 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 3)));
#line 539 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__TypeCtorInfo_36_79;
#line 539 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__TypeInfo_37_80;

#line 536 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_64_64 == (MR_Integer) 0);
#line 536 "unneeded_code.m"
                  if (transform_hlds__unneeded_code__succeeded)
#line 536 "unneeded_code.m"
                    {
#line 537 "unneeded_code.m"
                      {
#line 537 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = hlds__goal_form__goal_can_loop_or_throw_1_p_0(transform_hlds__unneeded_code__Goal_8);
                      }
#line 536 "unneeded_code.m"
                      if (transform_hlds__unneeded_code__succeeded)
#line 536 "unneeded_code.m"
                        {
#line 538 "unneeded_code.m"
                          transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 538 "unneeded_code.m"
                          if (transform_hlds__unneeded_code__succeeded)
#line 538 "unneeded_code.m"
                            {
#line 538 "unneeded_code.m"
                              transform_hlds__unneeded_code__BranchMap_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26, (MR_Integer) 0)));
#line 8795 "transform_hlds.unneeded_code.c"
                              transform_hlds__unneeded_code__TypeCtorInfo_36_79 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0;
#line 8797 "transform_hlds.unneeded_code.c"
                              transform_hlds__unneeded_code__TypeInfo_37_80 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2];
#line 539 "unneeded_code.m"
                              {
#line 539 "unneeded_code.m"
                                transform_hlds__unneeded_code__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__unneeded_code__TypeCtorInfo_36_79, transform_hlds__unneeded_code__TypeInfo_37_80, transform_hlds__unneeded_code__BranchMap_56);
                              }
#line 539 "unneeded_code.m"
                              transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 538 "unneeded_code.m"
                            }
#line 536 "unneeded_code.m"
                        }
#line 536 "unneeded_code.m"
                    }
#line 536 "unneeded_code.m"
                }
#line 524 "unneeded_code.m"
                if (!(transform_hlds__unneeded_code__succeeded))
#line 524 "unneeded_code.m"
                  {
#line 544 "unneeded_code.m"
                    {
#line 544 "unneeded_code.m"
                      MR_Word transform_hlds__unneeded_code__V_91_91;

#line 544 "unneeded_code.m"
                      {
#line 544 "unneeded_code.m"
                        transform_hlds__unneeded_code__V_91_91 = hlds__make_goal__true_goal_expr_0_f_0();
                      }
#line 544 "unneeded_code.m"
                      {
#line 544 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(transform_hlds__unneeded_code__GoalExpr_53, transform_hlds__unneeded_code__V_91_91);
                      }
#line 544 "unneeded_code.m"
                    }
#line 524 "unneeded_code.m"
                    if (!(transform_hlds__unneeded_code__succeeded))
#line 546 "unneeded_code.m"
                      {
#line 546 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__TypeCtorInfo_38_81;
#line 546 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__TypeInfo_39_82;
#line 546 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__TypeCtorInfo_43_86;
#line 546 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchArms_57;
#line 546 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchArmCounts_58;
#line 546 "unneeded_code.m"
                        MR_Integer transform_hlds__unneeded_code__BranchArmCount_59;
#line 546 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_60_60;
#line 546 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_61_61;
#line 546 "unneeded_code.m"
                        MR_Integer transform_hlds__unneeded_code__V_62_62;
#line 546 "unneeded_code.m"
                        MR_Integer transform_hlds__unneeded_code__V_63_63;
#line 546 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchMap_69;
#line 549 "unneeded_code.m"
                        MR_Box transform_hlds__unneeded_code__conv4_BranchArmCount_59;
#line 550 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_76_76;
#line 550 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_77_77;
#line 550 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_78_78;

#line 546 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 546 "unneeded_code.m"
                        if (transform_hlds__unneeded_code__succeeded)
#line 546 "unneeded_code.m"
                          {
#line 546 "unneeded_code.m"
                            transform_hlds__unneeded_code__BranchMap_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26, (MR_Integer) 0)));
#line 8878 "transform_hlds.unneeded_code.c"
                            transform_hlds__unneeded_code__TypeCtorInfo_38_81 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0;
#line 8880 "transform_hlds.unneeded_code.c"
                            transform_hlds__unneeded_code__TypeInfo_39_82 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2];
#line 547 "unneeded_code.m"
                            {
#line 547 "unneeded_code.m"
                              mercury__map__values_2_p_0(transform_hlds__unneeded_code__TypeCtorInfo_38_81, transform_hlds__unneeded_code__TypeInfo_39_82, transform_hlds__unneeded_code__BranchMap_69, &transform_hlds__unneeded_code__BranchArms_57);
                            }
#line 548 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_60_60 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[9];
#line 8889 "transform_hlds.unneeded_code.c"
                            transform_hlds__unneeded_code__TypeCtorInfo_43_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 548 "unneeded_code.m"
                            {
#line 548 "unneeded_code.m"
                              mercury__list__map_3_p_0(transform_hlds__unneeded_code__TypeInfo_39_82, transform_hlds__unneeded_code__TypeCtorInfo_43_86, transform_hlds__unneeded_code__V_60_60, transform_hlds__unneeded_code__BranchArms_57, &transform_hlds__unneeded_code__BranchArmCounts_58);
                            }
#line 549 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_61_61 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[10];
#line 549 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_62_62 = (MR_Integer) 0;
#line 549 "unneeded_code.m"
                            {
#line 549 "unneeded_code.m"
                              transform_hlds__unneeded_code__conv4_BranchArmCount_59 = mercury__list__foldl_3_f_0(transform_hlds__unneeded_code__TypeCtorInfo_43_86, transform_hlds__unneeded_code__TypeCtorInfo_43_86, transform_hlds__unneeded_code__V_61_61, transform_hlds__unneeded_code__BranchArmCounts_58, ((MR_Box) (transform_hlds__unneeded_code__V_62_62)));
                            }
#line 549 "unneeded_code.m"
                            transform_hlds__unneeded_code__BranchArmCount_59 = ((MR_Integer) transform_hlds__unneeded_code__conv4_BranchArmCount_59);
#line 550 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 0)));
#line 550 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 1)));
#line 550 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 2)));
#line 550 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 3)));
#line 550 "unneeded_code.m"
                            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__BranchArmCount_59 > transform_hlds__unneeded_code__V_63_63);
#line 546 "unneeded_code.m"
                          }
#line 546 "unneeded_code.m"
                      }
#line 524 "unneeded_code.m"
                  }
#line 524 "unneeded_code.m"
              }
#line 524 "unneeded_code.m"
          }
#line 524 "unneeded_code.m"
      }
#line 563 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 562 "unneeded_code.m"
      *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "unneeded_code.m"
    else
#line 562 "unneeded_code.m"
      *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_23 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26;
#line 477 "unneeded_code.m"
  }
#line 472 "unneeded_code.m"
}

#line 457 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(
#line 457 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_6,
#line 457 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalPath_7,
#line 457 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_8,
#line 457 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13,
#line 457 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_14)
#line 457 "unneeded_code.m"
{
#line 461 "unneeded_code.m"
  {
#line 461 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 461 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Key_10;
#line 466 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goals0_11;
#line 463 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv0_Goals0_11;

#line 462 "unneeded_code.m"
    {
#line 462 "unneeded_code.m"
      transform_hlds__unneeded_code__Key_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 462 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Key_10, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalPath_7));
#line 462 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Key_10, 1) = ((MR_Box) (transform_hlds__unneeded_code__BranchNum_8));
#line 462 "unneeded_code.m"
    }
#line 463 "unneeded_code.m"
    {
#line 463 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13, ((MR_Box) (transform_hlds__unneeded_code__Key_10)), &transform_hlds__unneeded_code__conv0_Goals0_11);
    }
#line 463 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 463 "unneeded_code.m"
      {
#line 463 "unneeded_code.m"
        transform_hlds__unneeded_code__Goals0_11 = ((MR_Word) transform_hlds__unneeded_code__conv0_Goals0_11);
#line 463 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 463 "unneeded_code.m"
      }
#line 466 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 464 "unneeded_code.m"
      {
#line 464 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals_12;

#line 464 "unneeded_code.m"
        {
#line 464 "unneeded_code.m"
          transform_hlds__unneeded_code__Goals_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Goals_12, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_6));
#line 464 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Goals_12, 1) = ((MR_Box) (transform_hlds__unneeded_code__Goals0_11));
#line 464 "unneeded_code.m"
        }
#line 465 "unneeded_code.m"
        {
#line 465 "unneeded_code.m"
          mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__Key_10)), ((MR_Box) (transform_hlds__unneeded_code__Goals_12)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_14);
#line 465 "unneeded_code.m"
          return;
        }
#line 464 "unneeded_code.m"
      }
#line 466 "unneeded_code.m"
    else
#line 467 "unneeded_code.m"
      {
#line 467 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_16_16;

#line 467 "unneeded_code.m"
        {
#line 467 "unneeded_code.m"
          transform_hlds__unneeded_code__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_16_16, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_6));
#line 467 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 467 "unneeded_code.m"
        }
#line 467 "unneeded_code.m"
        {
#line 467 "unneeded_code.m"
          mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__Key_10)), ((MR_Box) (transform_hlds__unneeded_code__V_16_16)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_14);
#line 467 "unneeded_code.m"
          return;
        }
#line 467 "unneeded_code.m"
      }
#line 461 "unneeded_code.m"
  }
#line 457 "unneeded_code.m"
}

#line 454 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1(
#line 454 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 454 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 454 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 454 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 454 "unneeded_code.m"
{
#line 454 "unneeded_code.m"
  {
#line 454 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 454 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_14;

#line 454 "unneeded_code.m"
    {
#line 454 "unneeded_code.m"
      transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_14);
    }
#line 454 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_14));
#line 454 "unneeded_code.m"
  }
#line 454 "unneeded_code.m"
}

#line 446 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(
#line 446 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_5,
#line 446 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 446 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12,
#line 446 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13)
#line 446 "unneeded_code.m"
{
#line 451 "unneeded_code.m"
  {
#line 451 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 451 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 451 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchPoint_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 451 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNumSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 451 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_6, (MR_Integer) 0)));
#line 451 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNums_11;
#line 451 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_14_14;
#line 452 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_6, (MR_Integer) 1)));
#line 454 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_13;

#line 453 "unneeded_code.m"
    {
#line 453 "unneeded_code.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__unneeded_code__TypeCtorInfo_16_16, transform_hlds__unneeded_code__BranchNumSet_7, &transform_hlds__unneeded_code__BranchNums_11);
    }
#line 454 "unneeded_code.m"
    {
#line 454 "unneeded_code.m"
      transform_hlds__unneeded_code__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 454 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_7[0]));
#line 454 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 1) = ((MR_Box) (transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1));
#line 454 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 454 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 3) = ((MR_Box) (transform_hlds__unneeded_code__Goal_5));
#line 454 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 4) = ((MR_Box) (transform_hlds__unneeded_code__GoalPath_9));
#line 454 "unneeded_code.m"
    }
#line 454 "unneeded_code.m"
    {
#line 454 "unneeded_code.m"
      mercury__list__foldl_4_p_0(transform_hlds__unneeded_code__TypeCtorInfo_16_16, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[3], transform_hlds__unneeded_code__V_14_14, transform_hlds__unneeded_code__BranchNums_11, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_13);
    }
#line 454 "unneeded_code.m"
    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_13);
#line 451 "unneeded_code.m"
  }
#line 446 "unneeded_code.m"
}

#line 441 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_4(
#line 441 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 441 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 441 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 441 "unneeded_code.m"
{
#line 441 "unneeded_code.m"
  {
#line 441 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 441 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv4_HeadVar__2_2;

#line 441 "unneeded_code.m"
    {
#line 441 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv4_HeadVar__2_2);
    }
#line 441 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv4_HeadVar__2_2));
#line 441 "unneeded_code.m"
  }
#line 441 "unneeded_code.m"
}

#line 613 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_3(
#line 613 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 613 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 613 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 613 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 613 "unneeded_code.m"
{
#line 613 "unneeded_code.m"
  {
#line 613 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 613 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv2_STATE_VARIABLE_WhereNeededMap_7;

#line 613 "unneeded_code.m"
    {
#line 613 "unneeded_code.m"
      transform_hlds__unneeded_code__undemand_var_3_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv2_STATE_VARIABLE_WhereNeededMap_7);
    }
#line 613 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv2_STATE_VARIABLE_WhereNeededMap_7));
#line 613 "unneeded_code.m"
  }
#line 613 "unneeded_code.m"
}

#line 611 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2(
#line 611 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 611 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1)
#line 611 "unneeded_code.m"
{
#line 611 "unneeded_code.m"
  {
#line 611 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 611 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;

#line 611 "unneeded_code.m"
    {
#line 611 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1));
    }
#line 611 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 611 "unneeded_code.m"
  }
#line 611 "unneeded_code.m"
}

#line 413 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1(
#line 413 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 413 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 413 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 413 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 413 "unneeded_code.m"
{
#line 413 "unneeded_code.m"
  {
#line 413 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 413 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_13;

#line 413 "unneeded_code.m"
    {
#line 413 "unneeded_code.m"
      transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_13);
    }
#line 413 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_13));
#line 413 "unneeded_code.m"
  }
#line 413 "unneeded_code.m"
}

#line 394 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_13,
#line 394 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_14,
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_16,
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30,
#line 394 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_31,
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_32,
#line 394 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_33,
#line 394 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_34,
#line 394 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_35)
#line 394 "unneeded_code.m"
{
#line 400 "unneeded_code.m"
  {
#line 400 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 400 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeInfo_22_90;
#line 400 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereInfo_20;
#line 400 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ModuleInfo_29;
#line 400 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_47_47;
#line 400 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_50_50;
#line 400 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo_81;
#line 400 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NonLocalSet_82;
#line 400 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NonLocals_83;
#line 400 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VirginOutputs_84;
#line 400 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_85_85;
#line 432 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_60_60;
#line 432 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_61_61;
#line 432 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_62_62;
#line 608 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_80_80;
#line 613 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv3_STATE_VARIABLE_WhereNeededMap_50_50;
#line 434 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_51_51;

#line 401 "unneeded_code.m"
    {
#line 401 "unneeded_code.m"
      transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Goal0_13, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30, &transform_hlds__unneeded_code__WhereInfo_20);
    }
#line 408 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__WhereInfo_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "unneeded_code.m"
      {
#line 405 "unneeded_code.m"
        transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Goal0_13, transform_hlds__unneeded_code__Goal_14, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_47_47, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_32, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_33, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_34, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_35);
      }
#line 408 "unneeded_code.m"
    else
#line 409 "unneeded_code.m"
      {
#line 409 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Branches_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__WhereInfo_20, (MR_Integer) 0)));
#line 409 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__BranchList_22;
#line 409 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Options_23;
#line 409 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Debug_24;
#line 409 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_37_37;
#line 413 "unneeded_code.m"
        MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_33;
#line 418 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_54_54;
#line 418 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_55_55;
#line 418 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_56_56;
#line 419 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_57_57;
#line 419 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_58_58;
#line 419 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_59_59;

#line 410 "unneeded_code.m"
        {
#line 410 "unneeded_code.m"
          transform_hlds__unneeded_code__demand_inputs_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Goal0_13, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__WhereInfo_20, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_47_47);
        }
#line 412 "unneeded_code.m"
        {
#line 412 "unneeded_code.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__Branches_21, &transform_hlds__unneeded_code__BranchList_22);
        }
#line 413 "unneeded_code.m"
        {
#line 413 "unneeded_code.m"
          transform_hlds__unneeded_code__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 413 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_37_37, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[0]));
#line 413 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_37_37, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1));
#line 413 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 413 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_37_37, 3) = ((MR_Box) (transform_hlds__unneeded_code__Goal0_13));
#line 413 "unneeded_code.m"
        }
#line 413 "unneeded_code.m"
        {
#line 413 "unneeded_code.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[2], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[3], transform_hlds__unneeded_code__V_37_37, transform_hlds__unneeded_code__BranchList_22, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_32)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_33);
        }
#line 413 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_33 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_33);
#line 415 "unneeded_code.m"
        {
#line 415 "unneeded_code.m"
          *transform_hlds__unneeded_code__Goal_14 = hlds__make_goal__true_goal_0_f_0();
        }
#line 416 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_35 = (MR_Integer) 1;
#line 418 "unneeded_code.m"
        transform_hlds__unneeded_code__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 0)));
#line 418 "unneeded_code.m"
        transform_hlds__unneeded_code__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 1)));
#line 418 "unneeded_code.m"
        transform_hlds__unneeded_code__Options_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 2)));
#line 418 "unneeded_code.m"
        transform_hlds__unneeded_code__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 3)));
#line 419 "unneeded_code.m"
        transform_hlds__unneeded_code__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_23, (MR_Integer) 0)));
#line 419 "unneeded_code.m"
        transform_hlds__unneeded_code__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_23, (MR_Integer) 1)));
#line 419 "unneeded_code.m"
        transform_hlds__unneeded_code__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_23, (MR_Integer) 2)));
#line 419 "unneeded_code.m"
        transform_hlds__unneeded_code__Debug_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_23, (MR_Integer) 3)));
#line 422 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__Debug_24 == (MR_Integer) 0))
#line 421 "unneeded_code.m"
          {
#line 421 "unneeded_code.m"
          }
#line 422 "unneeded_code.m"
        else
#line 423 "unneeded_code.m"
          {
#line 423 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalInfo0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 1)));
#line 423 "unneeded_code.m"
            MR_Integer transform_hlds__unneeded_code__GoalIdNum0_27;
#line 423 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_40_40;
#line 424 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code___GoalExpr0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 0)));
#line 426 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_43_43;
#line 426 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_45_45;

#line 425 "unneeded_code.m"
            {
#line 425 "unneeded_code.m"
              transform_hlds__unneeded_code__V_40_40 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_26);
            }
#line 425 "unneeded_code.m"
            transform_hlds__unneeded_code__GoalIdNum0_27 = (MR_Integer) transform_hlds__unneeded_code__V_40_40;
#line 427 "unneeded_code.m"
            {
#line 427 "unneeded_code.m"
              transform_hlds__unneeded_code__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 427 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_45_45, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalIdNum0_27));
#line 427 "unneeded_code.m"
            }
#line 427 "unneeded_code.m"
            {
#line 427 "unneeded_code.m"
              transform_hlds__unneeded_code__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_43_43, 0) = ((MR_Box) (transform_hlds__unneeded_code__V_45_45));
#line 427 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "unneeded_code.m"
            }
#line 427 "unneeded_code.m"
            {
#line 427 "unneeded_code.m"
              mercury__io__format_4_p_0((MR_String) "unneeded code at goal id %d\n", transform_hlds__unneeded_code__V_43_43);
            }
#line 423 "unneeded_code.m"
          }
#line 409 "unneeded_code.m"
      }
#line 432 "unneeded_code.m"
    transform_hlds__unneeded_code__ModuleInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 0)));
#line 432 "unneeded_code.m"
    transform_hlds__unneeded_code__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 1)));
#line 432 "unneeded_code.m"
    transform_hlds__unneeded_code__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 2)));
#line 432 "unneeded_code.m"
    transform_hlds__unneeded_code__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 3)));
#line 608 "unneeded_code.m"
    transform_hlds__unneeded_code__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 0)));
#line 608 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalInfo_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 1)));
#line 609 "unneeded_code.m"
    {
#line 609 "unneeded_code.m"
      transform_hlds__unneeded_code__NonLocalSet_82 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__unneeded_code__GoalInfo_81);
    }
#line 610 "unneeded_code.m"
    {
#line 610 "unneeded_code.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unneeded_code__NonLocalSet_82, &transform_hlds__unneeded_code__NonLocals_83);
    }
#line 611 "unneeded_code.m"
    {
#line 611 "unneeded_code.m"
      transform_hlds__unneeded_code__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 611 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_85_85, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[1]));
#line 611 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_85_85, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2));
#line 611 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 611 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_85_85, 3) = ((MR_Box) (transform_hlds__unneeded_code__ModuleInfo_29));
#line 611 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_85_85, 4) = ((MR_Box) (transform_hlds__unneeded_code__InitInstMap_15));
#line 611 "unneeded_code.m"
    }
#line 9525 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeInfo_22_90 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 611 "unneeded_code.m"
    {
#line 611 "unneeded_code.m"
      mercury__list__filter_3_p_0(transform_hlds__unneeded_code__TypeInfo_22_90, transform_hlds__unneeded_code__V_85_85, transform_hlds__unneeded_code__NonLocals_83, &transform_hlds__unneeded_code__VirginOutputs_84);
    }
#line 613 "unneeded_code.m"
    {
#line 613 "unneeded_code.m"
      mercury__list__foldl_4_p_0(transform_hlds__unneeded_code__TypeInfo_22_90, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[7], transform_hlds__unneeded_code__VirginOutputs_84, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_47_47)), &transform_hlds__unneeded_code__conv3_STATE_VARIABLE_WhereNeededMap_50_50);
    }
#line 613 "unneeded_code.m"
    transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_50_50 = ((MR_Word) transform_hlds__unneeded_code__conv3_STATE_VARIABLE_WhereNeededMap_50_50);
#line 434 "unneeded_code.m"
    {
#line 434 "unneeded_code.m"
      transform_hlds__unneeded_code__V_51_51 = hlds__hlds_goal__goal_get_purity_1_f_0(*transform_hlds__unneeded_code__Goal_14);
    }
#line 434 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_51_51 == (MR_Integer) 2);
#line 442 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 441 "unneeded_code.m"
      {
#line 441 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TypeCtorInfo_72_72 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;

#line 441 "unneeded_code.m"
        {
#line 441 "unneeded_code.m"
          mercury__map__map_values_only_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_72_72, transform_hlds__unneeded_code__TypeCtorInfo_72_72, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[8], transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_50_50, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_31);
#line 441 "unneeded_code.m"
          return;
        }
#line 441 "unneeded_code.m"
      }
#line 442 "unneeded_code.m"
    else
#line 441 "unneeded_code.m"
      *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_31 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_50_50;
#line 400 "unneeded_code.m"
  }
#line 394 "unneeded_code.m"
}

#line 364 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2(
#line 364 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg)
#line 364 "unneeded_code.m"
{
#line 364 "unneeded_code.m"
  {
#line 364 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 364 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;

#line 364 "unneeded_code.m"
    {
#line 364 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__364__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))));
    }
#line 364 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 364 "unneeded_code.m"
  }
#line 364 "unneeded_code.m"
}

#line 319 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1(
#line 319 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 319 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 319 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 319 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 319 "unneeded_code.m"
{
#line 319 "unneeded_code.m"
  {
#line 319 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 319 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__3_67;

#line 319 "unneeded_code.m"
    {
#line 319 "unneeded_code.m"
      transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__319__1_3_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_HeadVar__3_67);
    }
#line 319 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__3_67));
#line 319 "unneeded_code.m"
  }
#line 319 "unneeded_code.m"
}

#line 305 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(
#line 305 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_60,
#line 305 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61,
#line 305 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62,
#line 305 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63,
#line 305 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__PredId_10,
#line 305 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__Pass_11,
#line 305 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Successful_12)
#line 305 "unneeded_code.m"
{
#line 308 "unneeded_code.m"
  {
#line 308 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeInfo_109_109;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_13;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal0_14;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarSet0_15;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarTypes0_16;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__InitInstMap_17;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo0_19;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__InstMapDelta_20;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__FinalInstMap_21;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NeededVarsList_22;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMap0_23;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMap1_28;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Globals_29;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ReorderConj_30;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__FullyStrict_31;
#line 308 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__Limit_32;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Debug_33;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Options_34;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__UnneededInfo_43;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal1_44;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RefinedGoals1_46;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Changed_47;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal2_48;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RefinedGoals_49;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_88_88;
#line 308 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_90_90;
#line 314 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_18_18;
#line 322 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_WhereNeededMap1_28;
#line 360 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_45_45;

#line 309 "unneeded_code.m"
    {
#line 309 "unneeded_code.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__unneeded_code__ContainingGoalMap_13, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64);
    }
#line 310 "unneeded_code.m"
    {
#line 310 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__Goal0_14);
    }
#line 311 "unneeded_code.m"
    {
#line 311 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__VarSet0_15);
    }
#line 312 "unneeded_code.m"
    {
#line 312 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__VarTypes0_16);
    }
#line 313 "unneeded_code.m"
    {
#line 313 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__unneeded_code__InitInstMap_17);
    }
#line 314 "unneeded_code.m"
    transform_hlds__unneeded_code__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_14, (MR_Integer) 0)));
#line 314 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_14, (MR_Integer) 1)));
#line 315 "unneeded_code.m"
    {
#line 315 "unneeded_code.m"
      transform_hlds__unneeded_code__InstMapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unneeded_code__GoalInfo0_19);
    }
#line 316 "unneeded_code.m"
    {
#line 316 "unneeded_code.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__unneeded_code__InitInstMap_17, transform_hlds__unneeded_code__InstMapDelta_20, &transform_hlds__unneeded_code__FinalInstMap_21);
    }
#line 317 "unneeded_code.m"
    {
#line 317 "unneeded_code.m"
      hlds__hlds_pred__proc_info_instantiated_head_vars_3_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__NeededVarsList_22);
    }
#line 9757 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeInfo_109_109 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 318 "unneeded_code.m"
    {
#line 318 "unneeded_code.m"
      mercury__map__init_1_p_0(transform_hlds__unneeded_code__TypeInfo_109_109, (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, &transform_hlds__unneeded_code__WhereNeededMap0_23);
    }
#line 322 "unneeded_code.m"
    {
#line 322 "unneeded_code.m"
      mercury__list__foldl_4_p_0(transform_hlds__unneeded_code__TypeInfo_109_109, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[6], transform_hlds__unneeded_code__NeededVarsList_22, ((MR_Box) (transform_hlds__unneeded_code__WhereNeededMap0_23)), &transform_hlds__unneeded_code__conv1_WhereNeededMap1_28);
    }
#line 322 "unneeded_code.m"
    transform_hlds__unneeded_code__WhereNeededMap1_28 = ((MR_Word) transform_hlds__unneeded_code__conv1_WhereNeededMap1_28);
#line 324 "unneeded_code.m"
    {
#line 324 "unneeded_code.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__unneeded_code__Globals_29);
    }
#line 325 "unneeded_code.m"
    {
#line 325 "unneeded_code.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 160, &transform_hlds__unneeded_code__ReorderConj_30);
    }
#line 326 "unneeded_code.m"
    {
#line 326 "unneeded_code.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 162, &transform_hlds__unneeded_code__FullyStrict_31);
    }
#line 327 "unneeded_code.m"
    {
#line 327 "unneeded_code.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 356, &transform_hlds__unneeded_code__Limit_32);
    }
#line 328 "unneeded_code.m"
    {
#line 328 "unneeded_code.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 357, &transform_hlds__unneeded_code__Debug_33);
    }
#line 329 "unneeded_code.m"
    {
#line 329 "unneeded_code.m"
      transform_hlds__unneeded_code__Options_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 329 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_34, 0) = ((MR_Box) (transform_hlds__unneeded_code__FullyStrict_31));
#line 329 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_34, 1) = ((MR_Box) (transform_hlds__unneeded_code__ReorderConj_30));
#line 329 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_34, 2) = ((MR_Box) (transform_hlds__unneeded_code__Limit_32));
#line 329 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_34, 3) = ((MR_Box) (transform_hlds__unneeded_code__Debug_33));
#line 329 "unneeded_code.m"
    }
#line 332 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__Debug_33 == (MR_Integer) 0))
#line 331 "unneeded_code.m"
      {
#line 331 "unneeded_code.m"
      }
#line 332 "unneeded_code.m"
    else
#line 334 "unneeded_code.m"
      {
#line 334 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__PredInfo_36;
#line 334 "unneeded_code.m"
        MR_String transform_hlds__unneeded_code__PredName_37;
#line 334 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__DebugPredNames_38;

#line 335 "unneeded_code.m"
        {
#line 335 "unneeded_code.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__unneeded_code__PredId_10, &transform_hlds__unneeded_code__PredInfo_36);
        }
#line 336 "unneeded_code.m"
        {
#line 336 "unneeded_code.m"
          transform_hlds__unneeded_code__PredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unneeded_code__PredInfo_36);
        }
#line 337 "unneeded_code.m"
        {
#line 337 "unneeded_code.m"
          libs__globals__lookup_accumulating_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 358, &transform_hlds__unneeded_code__DebugPredNames_38);
        }
#line 343 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__DebugPredNames_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "unneeded_code.m"
          {
#line 340 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_84_84;
#line 340 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_86_86;

#line 342 "unneeded_code.m"
            {
#line 342 "unneeded_code.m"
              transform_hlds__unneeded_code__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_86_86, 0) = ((MR_Box) (transform_hlds__unneeded_code__Pass_11));
#line 342 "unneeded_code.m"
            }
#line 342 "unneeded_code.m"
            {
#line 342 "unneeded_code.m"
              transform_hlds__unneeded_code__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_84_84, 0) = ((MR_Box) (transform_hlds__unneeded_code__V_86_86));
#line 342 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "unneeded_code.m"
            }
#line 341 "unneeded_code.m"
            {
#line 341 "unneeded_code.m"
              mercury__io__format_4_p_0((MR_String) "%% Starting unneededed code pass %d\n", transform_hlds__unneeded_code__V_84_84);
            }
#line 340 "unneeded_code.m"
          }
#line 343 "unneeded_code.m"
        else
#line 352 "unneeded_code.m"
          {
#line 345 "unneeded_code.m"
            {
#line 345 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (transform_hlds__unneeded_code__PredName_37)), transform_hlds__unneeded_code__DebugPredNames_38);
            }
#line 352 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 347 "unneeded_code.m"
              {
#line 347 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__OutInfo_42;
#line 347 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_76_76;
#line 347 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_78_78;

#line 347 "unneeded_code.m"
                {
#line 347 "unneeded_code.m"
                  transform_hlds__unneeded_code__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 347 "unneeded_code.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_78_78, 0) = ((MR_Box) (transform_hlds__unneeded_code__Pass_11));
#line 347 "unneeded_code.m"
                }
#line 347 "unneeded_code.m"
                {
#line 347 "unneeded_code.m"
                  transform_hlds__unneeded_code__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "unneeded_code.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_76_76, 0) = ((MR_Box) (transform_hlds__unneeded_code__V_78_78));
#line 347 "unneeded_code.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "unneeded_code.m"
                }
#line 346 "unneeded_code.m"
                {
#line 346 "unneeded_code.m"
                  mercury__io__format_4_p_0((MR_String) "%% Starting unneededed code pass %d\n", transform_hlds__unneeded_code__V_76_76);
                }
#line 349 "unneeded_code.m"
                {
#line 349 "unneeded_code.m"
                  transform_hlds__unneeded_code__OutInfo_42 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(transform_hlds__unneeded_code__Globals_29);
                }
#line 350 "unneeded_code.m"
                {
#line 350 "unneeded_code.m"
                  hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(transform_hlds__unneeded_code__OutInfo_42, transform_hlds__unneeded_code__Goal0_14, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__unneeded_code__VarSet0_15, (MR_Integer) 1, (MR_Integer) 0, (MR_String) ".\n");
                }
#line 347 "unneeded_code.m"
              }
#line 352 "unneeded_code.m"
            else
#line 350 "unneeded_code.m"
              {
#line 350 "unneeded_code.m"
              }
#line 352 "unneeded_code.m"
          }
#line 334 "unneeded_code.m"
      }
#line 358 "unneeded_code.m"
    {
#line 358 "unneeded_code.m"
      transform_hlds__unneeded_code__UnneededInfo_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 358 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_43, 0) = ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62));
#line 358 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_43, 1) = ((MR_Box) (transform_hlds__unneeded_code__VarTypes0_16));
#line 358 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_43, 2) = ((MR_Box) (transform_hlds__unneeded_code__Options_34));
#line 358 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_43, 3) = ((MR_Box) (transform_hlds__unneeded_code__ContainingGoalMap_13));
#line 358 "unneeded_code.m"
    }
#line 362 "unneeded_code.m"
    {
#line 362 "unneeded_code.m"
      transform_hlds__unneeded_code__V_88_88 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1]);
    }
#line 360 "unneeded_code.m"
    {
#line 360 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_43, transform_hlds__unneeded_code__Goal0_14, &transform_hlds__unneeded_code__Goal1_44, transform_hlds__unneeded_code__InitInstMap_17, transform_hlds__unneeded_code__FinalInstMap_21, transform_hlds__unneeded_code__WhereNeededMap1_28, &transform_hlds__unneeded_code__V_45_45, transform_hlds__unneeded_code__V_88_88, &transform_hlds__unneeded_code__RefinedGoals1_46, (MR_Integer) 0, &transform_hlds__unneeded_code__Changed_47);
    }
#line 363 "unneeded_code.m"
    {
#line 363 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Goal1_44, &transform_hlds__unneeded_code__Goal2_48, transform_hlds__unneeded_code__RefinedGoals1_46, &transform_hlds__unneeded_code__RefinedGoals_49);
    }
#line 364 "unneeded_code.m"
    {
#line 364 "unneeded_code.m"
      transform_hlds__unneeded_code__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 364 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_90_90, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_4[0]));
#line 364 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_90_90, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2));
#line 364 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 364 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_90_90, 3) = ((MR_Box) (transform_hlds__unneeded_code__RefinedGoals_49));
#line 364 "unneeded_code.m"
    }
#line 364 "unneeded_code.m"
    {
#line 364 "unneeded_code.m"
      mercury__require__expect_4_p_0(transform_hlds__unneeded_code__V_90_90, (MR_String) "transform_hlds.unneeded_code", (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_proc\'/7", (MR_String) "goal reattachment unsuccessful");
    }
#line 389 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__Changed_47 == (MR_Integer) 0))
#line 390 "unneeded_code.m"
      {
#line 391 "unneeded_code.m"
        *transform_hlds__unneeded_code__Successful_12 = (MR_Integer) 0;
#line 391 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61 = transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64;
#line 391 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63 = transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62;
#line 390 "unneeded_code.m"
      }
#line 389 "unneeded_code.m"
    else
#line 367 "unneeded_code.m"
      {
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__HeadVars_50;
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__InstVarSet_51;
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__RttiVarMaps0_52;
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal3_54;
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__VarSet_55;
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__VarTypes_56;
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__RttiVarMaps_57;
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_58;
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_96_96;
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_97_97;
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_98_98;
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_99_99;
#line 367 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_100_100;
#line 373 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code___Warnings_53;

#line 370 "unneeded_code.m"
        {
#line 370 "unneeded_code.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__HeadVars_50);
        }
#line 371 "unneeded_code.m"
        {
#line 371 "unneeded_code.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__InstVarSet_51);
        }
#line 372 "unneeded_code.m"
        {
#line 372 "unneeded_code.m"
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__RttiVarMaps0_52);
        }
#line 373 "unneeded_code.m"
        {
#line 373 "unneeded_code.m"
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__unneeded_code__HeadVars_50, &transform_hlds__unneeded_code___Warnings_53, transform_hlds__unneeded_code__Goal2_48, &transform_hlds__unneeded_code__Goal3_54, transform_hlds__unneeded_code__VarSet0_15, &transform_hlds__unneeded_code__VarSet_55, transform_hlds__unneeded_code__VarTypes0_16, &transform_hlds__unneeded_code__VarTypes_56, transform_hlds__unneeded_code__RttiVarMaps0_52, &transform_hlds__unneeded_code__RttiVarMaps_57);
        }
#line 377 "unneeded_code.m"
        {
#line 377 "unneeded_code.m"
          check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, transform_hlds__unneeded_code__Goal3_54, &transform_hlds__unneeded_code__Goal_58, transform_hlds__unneeded_code__VarTypes_56, transform_hlds__unneeded_code__InstVarSet_51, transform_hlds__unneeded_code__InitInstMap_17, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_96_96);
        }
#line 379 "unneeded_code.m"
        {
#line 379 "unneeded_code.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unneeded_code__Goal_58, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_97_97);
        }
#line 380 "unneeded_code.m"
        {
#line 380 "unneeded_code.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unneeded_code__VarSet_55, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_97_97, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_98_98);
        }
#line 381 "unneeded_code.m"
        {
#line 381 "unneeded_code.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unneeded_code__VarTypes_56, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_98_98, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_99_99);
        }
#line 382 "unneeded_code.m"
        {
#line 382 "unneeded_code.m"
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unneeded_code__RttiVarMaps_57, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_99_99, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_100_100);
        }
#line 383 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__Pass_11 > (MR_Integer) 3);
#line 385 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 384 "unneeded_code.m"
          {
#line 384 "unneeded_code.m"
            *transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63 = transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_96_96;
#line 384 "unneeded_code.m"
            *transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61 = transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_100_100;
#line 384 "unneeded_code.m"
          }
#line 385 "unneeded_code.m"
        else
#line 386 "unneeded_code.m"
          {
#line 386 "unneeded_code.m"
            MR_Integer transform_hlds__unneeded_code__V_104_104 = (transform_hlds__unneeded_code__Pass_11 + (MR_Integer) 1);
#line 386 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_59_59;

#line 386 "unneeded_code.m"
            {
#line 386 "unneeded_code.m"
              transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_100_100, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_96_96, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63, transform_hlds__unneeded_code__PredId_10, transform_hlds__unneeded_code__V_104_104, &transform_hlds__unneeded_code__V_59_59);
            }
#line 386 "unneeded_code.m"
          }
#line 388 "unneeded_code.m"
        *transform_hlds__unneeded_code__Successful_12 = (MR_Integer) 1;
#line 367 "unneeded_code.m"
      }
#line 308 "unneeded_code.m"
  }
#line 305 "unneeded_code.m"
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
#line 220 "unneeded_code.m"
  {
#line 220 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__PredId_10;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Successful_12;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_20_20;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__HeadVars_32;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal0_33;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarSet0_34;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarTypes0_35;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RttiVarMaps0_36;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal_38;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarSet_39;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarTypes_40;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RttiVarMaps_41;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_17_43;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_18_44;
#line 220 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_19_45;
#line 255 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code___Warnings_37;
#line 233 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__V_11_11;

#line 229 "unneeded_code.m"
    {
#line 229 "unneeded_code.m"
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Removing dead code in ", transform_hlds__unneeded_code__PredProcId_6, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_15);
    }
#line 250 "unneeded_code.m"
    {
#line 250 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__HeadVars_32);
    }
#line 251 "unneeded_code.m"
    {
#line 251 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__Goal0_33);
    }
#line 252 "unneeded_code.m"
    {
#line 252 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__VarSet0_34);
    }
#line 253 "unneeded_code.m"
    {
#line 253 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__VarTypes0_35);
    }
#line 254 "unneeded_code.m"
    {
#line 254 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__RttiVarMaps0_36);
    }
#line 255 "unneeded_code.m"
    {
#line 255 "unneeded_code.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__unneeded_code__HeadVars_32, &transform_hlds__unneeded_code___Warnings_37, transform_hlds__unneeded_code__Goal0_33, &transform_hlds__unneeded_code__Goal_38, transform_hlds__unneeded_code__VarSet0_34, &transform_hlds__unneeded_code__VarSet_39, transform_hlds__unneeded_code__VarTypes0_35, &transform_hlds__unneeded_code__VarTypes_40, transform_hlds__unneeded_code__RttiVarMaps0_36, &transform_hlds__unneeded_code__RttiVarMaps_41);
    }
#line 258 "unneeded_code.m"
    {
#line 258 "unneeded_code.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unneeded_code__Goal_38, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_17_43);
    }
#line 259 "unneeded_code.m"
    {
#line 259 "unneeded_code.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unneeded_code__VarSet_39, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_17_43, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_18_44);
    }
#line 260 "unneeded_code.m"
    {
#line 260 "unneeded_code.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unneeded_code__VarTypes_40, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_18_44, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_19_45);
    }
#line 261 "unneeded_code.m"
    {
#line 261 "unneeded_code.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unneeded_code__RttiVarMaps_41, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_19_45, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_20_20);
    }
#line 233 "unneeded_code.m"
    transform_hlds__unneeded_code__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__PredProcId_6, (MR_Integer) 0)));
#line 233 "unneeded_code.m"
    transform_hlds__unneeded_code__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__PredProcId_6, (MR_Integer) 1)));
#line 234 "unneeded_code.m"
    {
#line 234 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_20_20, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_14, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_16, transform_hlds__unneeded_code__PredId_10, (MR_Integer) 1, &transform_hlds__unneeded_code__Successful_12);
    }
#line 240 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__Successful_12 == (MR_Integer) 0))
#line 241 "unneeded_code.m"
      {
#line 242 "unneeded_code.m"
        {
#line 242 "unneeded_code.m"
          hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% none found.\n", transform_hlds__unneeded_code__PredProcId_6, *transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_16);
#line 242 "unneeded_code.m"
          return;
        }
#line 241 "unneeded_code.m"
      }
#line 240 "unneeded_code.m"
    else
#line 237 "unneeded_code.m"
      {
#line 238 "unneeded_code.m"
        {
#line 238 "unneeded_code.m"
          hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% done.\n", transform_hlds__unneeded_code__PredProcId_6, *transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_16);
#line 238 "unneeded_code.m"
          return;
        }
#line 237 "unneeded_code.m"
      }
#line 220 "unneeded_code.m"
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
